#!/usr/bin/env bash
# Produce build/us/aero.us.elf for Aero USA. Run from repo root in WSL after:
#   bash tools/scripts/sync_aero_us_assets.sh   (splat split + IPL3; or splat only if asm exists)
#   Optional one-shot: AERO_SYNC_ASSETS=1 bash tools/scripts/build_aero_us_elf.sh
#
# Modes:
#   AERO_LINK_MODE=bootstrap (default) — one .text blob from raw ROM via .incbin (see
#     split/us/asm/bootstrap/aero_us_rom_text.s). Produces a loadable ELF when splat’s per-file
#     asm has jal targets without labels (R_MIPS_26 truncation with split TU objects).
#   AERO_LINK_MODE=splatasm — assemble all split/us/asm/game/rom_*.s and partial-link with ld -r;
#     R_MIPS_26 "truncated" => add glabel func_* at target VMA (see Docs/Debugging.md dual track).
#     After failure: python tools/scripts/splatasm_list_missing_jal.py
#
# Requires: mips-linux-gnu-as, mips-linux-gnu-ld (binutils-mips-linux-gnu).

set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"

if [[ "${AERO_SYNC_ASSETS:-0}" == "1" ]]; then
  echo "[0/4] AERO_SYNC_ASSETS=1: splat split + IPL3 (tools/scripts/sync_aero_us_assets.sh)"
  bash "$ROOT/tools/scripts/sync_aero_us_assets.sh"
fi

AS="${AS:-mips-linux-gnu-as}"
LD="${LD:-mips-linux-gnu-ld}"
ROM="${ROM:-roms/afa.n64.us.z64}"
MODE="${AERO_LINK_MODE:-bootstrap}"
INC="-I${ROOT}/config/asm_include"
ASFLAGS=( -march=vr4300 -mabi=32 -EB -O1 "$INC" )
OUT_ELF="build/us/aero.us.elf"

if [[ ! -f "$ROM" ]]; then
  echo "Missing ROM $ROM" >&2
  exit 1
fi

mkdir -p build/us/split/us/asm/game build/us/split/us/assets/boot build/us/split/us/asm \
  build/us/split/us/asm/bootstrap split/us/assets/boot

echo "[1/4] IPL3 blob -> relocatable object"
dd if="$ROM" of=split/us/assets/boot/ipl3.bin bs=1 skip=64 count=4032 status=none
"$LD" -r -b binary -EB -o build/us/split/us/assets/boot/ipl3.o split/us/assets/boot/ipl3.bin

echo "[2/4] header.s (requires splat split for split/us/asm/header.s)"
if [[ ! -f split/us/asm/header.s ]]; then
  echo "Run first: splat split aero.us.splat.yaml" >&2
  exit 1
fi
"$AS" "${ASFLAGS[@]}" -o build/us/split/us/asm/header.o split/us/asm/header.s

if [[ "$MODE" == "bootstrap" ]]; then
  echo "[3/4] Assemble bootstrap ROM .text (cwd=$PWD, incbin $ROM)"
  "$AS" "${ASFLAGS[@]}" -o build/us/split/us/asm/bootstrap/aero_us_rom_text.o split/us/asm/bootstrap/aero_us_rom_text.s
  LDSCRIPT="config/ld/aero.us.bootstrap.ld"
  OBJS=( build/us/split/us/asm/header.o build/us/split/us/assets/boot/ipl3.o build/us/split/us/asm/bootstrap/aero_us_rom_text.o )
else
  echo "[3/4] Assemble splat game/*.s (AERO_LINK_MODE=splatasm)"
  mapfile -t SFILES < <(ls -1 split/us/asm/game/rom_*.s 2>/dev/null | sort)
  if [[ ${#SFILES[@]} -eq 0 ]]; then
    echo "No split/us/asm/game/rom_*.s — run: splat split aero.us.splat.yaml" >&2
    exit 1
  fi
  j=0
  for s in "${SFILES[@]}"; do
    b=$(basename "$s" .s)
    "$AS" "${ASFLAGS[@]}" -o "build/us/split/us/asm/game/${b}.o" "$s" &
    ((++j)) || true
    if (( j % 10 == 0 )); then wait; fi
  done
  wait
  GAME_OBJS=( $(ls -1 build/us/split/us/asm/game/rom_*.o | sort) )
  echo "    partial link -> aero_game_merged.o"
  "$LD" -r --relax -o build/us/split/us/asm/game/aero_game_merged.o "${GAME_OBJS[@]}"
  awk -f "$ROOT/tools/scripts/gen_merged_ld.awk" split/us/aero.us.ld >build/us/aero.us.merged.ld
  LDSCRIPT="build/us/aero.us.merged.ld"
  OBJS=( build/us/split/us/asm/header.o build/us/split/us/assets/boot/ipl3.o build/us/split/us/asm/game/aero_game_merged.o )
fi

echo "[4/4] Link $OUT_ELF (mode=$MODE)"
mkdir -p "$(dirname "$OUT_ELF")"
LD_EXTRA=( --relax )
if [[ "${AERO_LD_RELAXED:-1}" == "1" ]]; then
  LD_EXTRA+=( -z undefs )
fi
set +e
"$LD" "${LD_EXTRA[@]}" -T "$LDSCRIPT" -o "$OUT_ELF" "${OBJS[@]}" 2>build/us/ld.log
rc=$?
set -e
if [[ "$rc" != "0" ]]; then
  echo "Link failed ($rc). tail build/us/ld.log:" >&2
  tail -35 build/us/ld.log >&2
  exit "$rc"
fi

echo "OK: $OUT_ELF"
mips-linux-gnu-readelf -h "$OUT_ELF" | head -18
