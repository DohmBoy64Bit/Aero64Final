# Workflow (Aero Fighters Assault USA)

Follow phase gates in **`Docs/SystemPrompt.md`**. This document is the ordered checklist; tool flags must come from **live** upstream READMEs or `--help`, not from memory.

## Phase 1 — Environment

- **Windows:** CMake 3.20+, MSVC toolset (VS 2022) or Clang-CL as you standardize later; `N64Recomp.exe` under `tools/` after build-from-source per `Docs/SystemPrompt.md` Tools section.
- **WSL / Linux:** Python + **splat** (or splat64 per your install), **mips** binutils (`mips-linux-gnu-as` / `mips-linux-gnu-ld`) for VR4300 ELFs.
- **Analysis:** Ghidra + x64dbg installs on paths you control.

### N64Recomp (Windows) — done in-repo

Upstream **`tools/source/N64Recomp/README.md`** (“Building”): CMake 3.20+, C++20, **`git submodule update --init --recursive`**, then configure and build.

Pinned commit and outputs: **`tools/PINNED_VERSIONS.txt`**. Binaries on `PATH` for this repo:

- `tools/N64Recomp.exe` — CLI usage from the built binary: `N64Recomp.exe <config file> [--dump-context]` (no separate `--help` text file; this line was observed by running the exe).
- `tools/RSPRecomp.exe` — build with the same CMake tree (`RSPRecomp` target in the same `CMakeLists.txt` as `N64RecompCLI`).

Reproduce: `powershell -File tools/scripts/build_n64recomp.ps1`

### Splat / mips (WSL) — verify on your machine

This dev machine reported `splat` at `/usr/local/bin/splat` and `mips-linux-gnu-as` on `PATH` inside WSL. Re-check after distro updates: `wsl -e bash -lc "command -v splat; command -v mips-linux-gnu-as"`.

Bootstrap host build (validates CMake + strict debug):

```powershell
cmake -S . -B out/build/msvc -G "Visual Studio 17 2022" -A x64
cmake --build out/build/msvc --config Debug
```

VS CMake presets: see `CMakePresets.json` (`windows-msvc-debug`, `windows-msvc-relwithdebinfo`).

## Phase 2 — ROM

- Place **legally obtained** USA dump as `roms/AeroFightersAssault.z64` **or** adjust `rom_file_path` in `config/aero.us.toml` (paths relative to that TOML — same rule as Banjo `[input]` in `Docs/RepoInjests/BanjoKazooie/banjorecomp-banjorecomp-8a5edab282632443.txt`).
- Record SHA-256 in `Docs/Debugging.md` when stable.

## Phase 3 — Split → ELF → Recomp

1. **Splat + assets** — root config **`aero.us.splat.yaml`** (`options.asset_path: split/us/assets`; see upstream splat segment docs). Run in WSL from repo root:
   ```bash
   bash tools/scripts/sync_aero_us_assets.sh
   ```
   Same as `splat_split_aero_us.sh`. Use **`bash tools/scripts/sync_aero_us_assets.sh --ipl3-only`** to refresh only `split/us/assets/boot/ipl3.bin` from `ROM`. To run splat automatically before linking the ELF: **`AERO_SYNC_ASSETS=1 bash tools/scripts/build_aero_us_elf.sh`** (slow on every build). For a **full splat regen + Track B asm prep + splatasm link** in one command: **`AERO_SPLATASM_REFRESH=1 bash tools/scripts/build_aero_us_elf.sh`** (sets **`AERO_LINK_MODE=splatasm`**, runs sync, then **`splatasm_autoglabel_jal.py`** and **`splatasm_fix_jal_local_labels.py`**; see **`Docs/Debugging.md`** Track B).
   - ROM must match **`sha1`** in that file (computed with `sha1sum roms/afa.n64.us.z64` on your copy).
   - VRAM base **`0x80200000`** / entry **`0x80200050`** were derived from the on-disk USA dump (header @ 0x08 + match to ROM `0x1050` prologue); see comments in `aero.us.splat.yaml`.
   - **`aero.us.splat.yaml`** already merges **206 splat file-split boundaries** into `main.subsegments` (207 `asm` units + ROM end). To refresh after a splat upgrade or ROM change: capture suggestion lines to `tools/scripts/_splat_split_lines.txt`, run `python3 tools/scripts/gen_splat_subsegments.py`, merge output into the yaml.
2. **Assemble / link** — from repo root in WSL:
   ```bash
   bash tools/scripts/build_aero_us_elf.sh
   ```
   Default **`AERO_LINK_MODE=bootstrap`**: one `.text` built from **`split/us/asm/bootstrap/aero_us_rom_text.s`** (`.incbin` of `roms/afa.n64.us.z64` from `0x1000`, length `0x7FF000`) plus splat’s **`header.s`** and IPL3 blob, linked with **`config/ld/aero.us.bootstrap.ld`**. This avoids **`R_MIPS_26` truncation** when splat’s per-TU `jal` targets addresses that have no exported label (e.g. `jal func_802000DC` with no `func_802000DC` symbol). For iterative disassembly, use **`AERO_LINK_MODE=splatasm`** (same script) once asm boundaries match real functions; optionally **`AERO_SPLATASM_PREP=1`** to re-run the Track B Python helpers before assembly (see **`Docs/Debugging.md`**).
   Per-splat TU assemble still uses **`-I config/asm_include`** for `macro.inc` (project-local).
3. **N64Recomp** — `tools/N64Recomp.exe config/aero.us.toml` (paths relative to the TOML’s directory). The **bootstrap** ELF finds the entrypoint after a **local** `elf.cpp` uint32 comparison patch in `tools/source/N64Recomp` (see `tools/PINNED_VERSIONS.txt`); full recompilation still needs a **properly symbolized** ELF from splat/asm + jump tables, not only the raw `.incbin` blob.

## Phase 4 — Engine integration

- Add **`lib/`** submodule(s) per `lib/README.txt` (Zelda64Recomp / N64Recomp as upstream dictates).
- Extend root `CMakeLists.txt`: `add_subdirectory(lib/...)` and link `RecompiledFuncs` + engine libs mirroring Banjo/Zelda CMake (use RepoInjests as diff references).

## Phase 5–6 — Patches and stabilization

- `patches/` + `patches.toml`; iterate with Ghidra + host debugger (`Docs/Debugging.md`).

## Phase 7 — Optional

- Optimizations / mods only after a playable baseline.

## Scripts

Temporary or helper scripts: `tools/scripts/` (per `Docs/SystemPrompt.md`).
