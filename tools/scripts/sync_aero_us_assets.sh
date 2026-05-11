#!/usr/bin/env bash
# Sync splat-extracted assets + IPL3 boot blob for Aero USA.
# Run from repo root in WSL (same environment as splat / mips).
#
# Inputs:
#   ROM (env) — default roms/afa.n64.us.z64 (must match sha1 in aero.us.splat.yaml)
#
# Splat: ethteck/splat "split" writes asm + binaries under options.asset_path (split/us/assets)
#   per aero.us.splat.yaml; see yaml comments and Docs/Workflow.md.
#
# IPL3: same 4032-byte slice as tools/scripts/build_aero_us_elf.sh (ROM skip=64) so linker
#   always matches the dump even if splat output is stale.
#
# Usage:
#   bash tools/scripts/sync_aero_us_assets.sh           # splat split + IPL3
#   bash tools/scripts/sync_aero_us_assets.sh --ipl3-only
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"

ROM="${ROM:-roms/afa.n64.us.z64}"
IPL3_ONLY=0
for arg in "$@"; do
  case "$arg" in
    --ipl3-only) IPL3_ONLY=1 ;;
    *)
      echo "Unknown option: $arg" >&2
      echo "Usage: $0 [--ipl3-only]" >&2
      exit 2
      ;;
  esac
done

if [[ ! -f "$ROM" ]]; then
  echo "Missing ROM: $ROM (set ROM=... or place USA dump at default path)" >&2
  exit 1
fi

mkdir -p split/us/assets/boot

extract_ipl3() {
  dd if="$ROM" of=split/us/assets/boot/ipl3.bin bs=1 skip=64 count=4032 status=none
}

if [[ "$IPL3_ONLY" -eq 1 ]]; then
  extract_ipl3
  echo "Wrote split/us/assets/boot/ipl3.bin from $ROM"
  exit 0
fi

if ! command -v splat >/dev/null 2>&1; then
  echo "splat not found on PATH (install splat / splat64 per Docs/Workflow.md)" >&2
  exit 1
fi

splat split aero.us.splat.yaml
py=python3
if ! command -v "$py" >/dev/null 2>&1; then
  py=python
fi
if command -v "$py" >/dev/null 2>&1; then
  echo "Post-splat: $py tools/scripts/fix_aero_us_ld_ipl3_vram_end.py"
  "$py" "$ROOT/tools/scripts/fix_aero_us_ld_ipl3_vram_end.py"
else
  echo "Skipping LD fix (no python): run tools/scripts/fix_aero_us_ld_ipl3_vram_end.py after splat if needed." >&2
fi
extract_ipl3
echo "Assets synced: splat output under split/us/assets (and asm under split/us/asm); IPL3 refreshed."
echo "If splat prints new file-split lines, save to tools/scripts/_splat_split_lines.txt and run:"
echo "  python3 tools/scripts/gen_splat_subsegments.py"
