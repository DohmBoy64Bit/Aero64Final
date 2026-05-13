# Workflow (Aero Fighters Assault USA)

Follow phase gates in **`Docs/SystemPrompt.md`**. This document is the ordered checklist; tool flags must come from **live** upstream READMEs or `--help`, not from memory.

## Phase 1 — Environment

- **Windows:** CMake 3.20+, MSVC toolset (VS 2022) or Clang-CL as you standardize later; `N64Recomp.exe` under `tools/` after build-from-source per `Docs/SystemPrompt.md` Tools section.
- **WSL / Linux:** Python + **splat** (or splat64 per your install), **mips** binutils (`mips-linux-gnu-as` / `mips-linux-gnu-ld`) for VR4300 ELFs.
- **Analysis:** Ghidra + x64dbg installs on paths you control. For agent-assisted reverse engineering, see **`Docs/Debugging.md`** (“Assisted analysis”) — **`pefile`**, **`capstone`**, and when to ask for a **Ghidra** function check.

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

- Place **legally obtained** USA dump at **`roms/afa.n64.us.z64`** (default for **`aero.us.splat.yaml`**, **`tools/scripts/build_aero_us_elf.sh`** / **`sync_aero_us_assets.sh`** via **`ROM=...`**, and **`config/aero.us.toml`** `rom_file_path`). If your file uses another name, copy or symlink it to that path **or** change both `rom_file_path` in **`config/aero.us.toml`** and **`options.target_path`** in **`aero.us.splat.yaml`** (and any **`ROM=...`** you pass to scripts) so every tool agrees — paths are relative to each config file’s directory where noted (same idea as Banjo `[input]` in `Docs/RepoInjests/BanjoKazooie/banjorecomp-banjorecomp-8a5edab282632443.txt`).
- Record SHA-256 in `Docs/Debugging.md` when stable (splat already documents the expected **SHA-1** in **`aero.us.splat.yaml`**).

## Phase 3 — Split → ELF → Recomp

**Primary product strategy (Zelda64 / Kirby):** treat the **engine-connected PC port** as the goal — **`lib/`** (N64ModernRuntime, RT64, RmlUi, etc.), **`AERO_WITH_ENGINE=ON`**, and host glue in **`src/host/`** (**`aero_rt64_render_context.cpp`** follows the Kirby64 injest; overall layout matches **`Docs/RepoInjests/Zelda64/zelda64recomp-zelda64recomp-8a5edab282632443.txt`**). N64Recomp output under **`RecompiledFuncs/`** feeds that executable; **how** you produce that output (bootstrap ELF, splatasm ELF, or symbols track) is a **secondary** toolchain choice documented below.

1. **Splat + assets** — root config **`aero.us.splat.yaml`** (`options.asset_path: split/us/assets`; see upstream splat segment docs). Run in WSL from repo root:
   ```bash
   bash tools/scripts/sync_aero_us_assets.sh
   ```
   After splat, **`tools/scripts/sync_aero_us_assets.sh`** runs **`tools/scripts/fix_aero_us_ld_ipl3_vram_end.py`** when Python is available (fixes **`ipl3_VRAM_END`** placement in **`split/us/aero.us.ld`**; see **`Docs/Debugging.md`**). For N64Recomp’s **`entrypoint`**, apply **`config/splat_guides/aero_boot_entry_rom_00001000.fragment`** to **`split/us/asm/game/rom_00001000.s`** (gitignored) before splatasm link.
   Same as `splat_split_aero_us.sh`. Use **`bash tools/scripts/sync_aero_us_assets.sh --ipl3-only`** to refresh only `split/us/assets/boot/ipl3.bin` from `ROM`. To run splat automatically before linking the ELF: **`AERO_SYNC_ASSETS=1 bash tools/scripts/build_aero_us_elf.sh`** (slow on every build). For a **full splat regen + Track B asm prep + splatasm link** in one command: **`AERO_SPLATASM_REFRESH=1 bash tools/scripts/build_aero_us_elf.sh`** (sets **`AERO_LINK_MODE=splatasm`**, runs sync, then **`splatasm_autoglabel_jal.py`** and **`splatasm_fix_jal_local_labels.py`**; see **`Docs/Debugging.md`** Track B).
   - ROM must match **`sha1`** in that file (computed with `sha1sum roms/afa.n64.us.z64` on your copy).
   - VRAM base **`0x80200000`** / entry **`0x80200050`** were derived from the on-disk USA dump (header @ 0x08 + match to ROM `0x1050` prologue); see comments in `aero.us.splat.yaml`.
   - **`aero.us.splat.yaml`** already merges **206 splat file-split boundaries** into `main.subsegments` (207 `asm` units + ROM end). To refresh after a splat upgrade or ROM change: capture suggestion lines to `tools/scripts/_splat_split_lines.txt`, run `python3 tools/scripts/gen_splat_subsegments.py`, merge output into the yaml.
2. **Assemble / link** — from repo root in WSL:
   ```bash
   bash tools/scripts/build_aero_us_elf.sh
   ```
   Default **`AERO_LINK_MODE=bootstrap`**: one `.text` built from **`split/us/asm/bootstrap/aero_us_rom_text.s`** (`.incbin` of `roms/afa.n64.us.z64` from `0x1000`, length `0x7FF000`) plus splat’s **`header.s`** and IPL3 blob, linked with **`config/ld/aero.us.bootstrap.ld`** → **`build/us/aero.us.elf`**. This avoids **`R_MIPS_26` truncation** when splat’s per-TU `jal` targets addresses that have no exported label (e.g. `jal func_802000DC` with no `func_802000DC` symbol). For iterative disassembly, use **`AERO_LINK_MODE=splatasm`** (same script) once asm boundaries match real functions; optionally **`AERO_SPLATASM_PREP=1`** to re-run the Track B Python helpers before assembly (see **`Docs/Debugging.md`**). Splatasm mode writes **`build/us/aero.us.splatasm.elf`** so the bootstrap ELF is not overwritten; **`config/aero.us.toml`** `elf_path` targets the splatasm artifact for N64Recomp.
   Per-splat TU assemble still uses **`-I config/asm_include`** for `macro.inc` (project-local).
3. **N64Recomp** — `tools/N64Recomp.exe config/aero.us.toml` (paths relative to the TOML’s directory). The **bootstrap** ELF finds the entrypoint after a **local** `elf.cpp` uint32 comparison patch in `tools/source/N64Recomp` (see `tools/PINNED_VERSIONS.txt`); full recompilation still needs a **properly symbolized** ELF from splat/asm + jump tables, not only the raw `.incbin` blob. On splatasm, if **`readelf`** shows **`st_size == 0`** for a boot **`func_*`** that is real code, set **`function_sizes`** for that name in **`config/aero.us.toml`** (see **`Docs/Debugging.md`** “Windows N64Recomp”, item 5).

### Primary track — Zelda64 / Kirby (host + engine)

This is the **default direction** for the project: same separation as Zelda64Recomp (root **`lib/`**, **`patches/`**, **`assets/`**, RT64 + runtime) and the same **host wiring** patterns as Kirby64Recomp (SDL fetch CMake, **`rt64_render_context`**-style implementation).

1. **`lib/`** — vendor per **`lib/README.txt`** (Zelda64Recomp-shaped tree in **`Docs/RepoInjests/Zelda64/...`**).
2. **`CMakeLists.txt`** — already **`add_library(RecompiledFuncs STATIC)`** and links **`Aero64Recompiled`**; with **`AERO_WITH_ENGINE=ON`** it pulls RT64, ultramodern, librecomp, RmlUi (see **`config/cmake/AeroEngine.cmake`**).
3. **Configure with engine:** run **`powershell -File tools/scripts/fetch_aero_engine_deps.ps1`** once, then configure with **`AERO_WITH_ENGINE=ON`** (defaults **ON** when **`lib/rt64`**, **`lib/RmlUi`**, **`lib/N64ModernRuntime`**, etc. exist). Launcher: **`src/host/aero_engine_launcher.cpp`**; recomp start: **`src/host/aero_recomp_host.cpp`**; RT64 context: **`src/host/aero_rt64_render_context.cpp`** (Kirby injest **`Docs/RepoInjests/Kirby64/...`**). Overlays: **`src/host/aero_register_overlays.cpp`** + **`recomp_overlays.inl`**. Patches and mod hooks follow Zelda’s **`patches.toml`** / small patch ELF idea as Aero grows (**`patches/`**, **`Docs/RepoInjests/Zelda64/...`**).
4. **Recomp output directory:** default **`RecompiledFuncs/`**; only switch CMake globs to **`RecompiledFuncsSymbolsTrack/`** if you explicitly use the symbols-track config (secondary, below).

### Secondary — N64Recomp input (pick one or combine; supports the primary track)

Root **`CMakeLists.txt`** links **`RecompiledFuncs`** the same way upstream recomp ports do (static archive of generated C — compare **`Docs/RepoInjests/Zelda64/...`** **`CMakeLists.txt`** and Banjo’s **`add_library`** in **`Docs/RepoInjests/BanjoKazooie/...`**).

**Splatasm ELF (`config/aero.us.toml` + `build/us/aero.us.splatasm.elf`) — maintenance / full-image recomp**

Use when you need a **linked game ELF** for N64Recomp. This path fights **splat-linked** ELFs (bogus FUNC labels, jump-table analysis, local N64Recomp patches under **`tools/source/N64Recomp/`**). **Checkpoint:** **`tools\N64Recomp.exe config\aero.us.toml`** with the current **`[patches].ignored`** list; output **`RecompiledFuncs/`**. For a lighter regen without full splat quality, use **`config/aero.us.regen.toml`** + **`build/us/aero.us.elf`** (**`Docs/Debugging.md`**).

**Bootstrap / regen ELF — quick iterations**

**`config/aero.us.regen.toml`** + **`build/us/aero.us.elf`**: bounded **`function_sizes`**, **`manual_funcs`**, etc. (**`Docs/Debugging.md`** “Gfx / VI diagnostics”).

**Symbols-only recomp (`config/aero.us.symbols_track.toml`) — optional Banjo-style bypass**

Grow **`AeroRecompSyms/aero.us.syms.toml`** and run **`tools\N64Recomp.exe config\aero.us.symbols_track.toml`** → **`RecompiledFuncsSymbolsTrack/`** (**`AeroRecompSyms/README.txt`**). Same **Zelda/Kirby host**; only the **generated C directory** changes. Zelda itself uses a small **`patches/patches.elf`** for patch code rather than a monolithic splat ELF — Aero can mirror that over time.

## Phase 4 — Engine integration

- **Without `AERO_WITH_ENGINE`:** **`Aero64Recompiled`** opens an **SDL2** window with **`SDL_Renderer`** (clear + bar) — see **`Docs/Debugging.md`** “SDL2 graphics smoke (no engine)”.
- **With `AERO_WITH_ENGINE`:** CMake adds **`config/cmake/AeroEngine.cmake`**: **RT64**, **RmlUi** (FreeType + **lunasvg** SVG plugin), **N64ModernRuntime** (**ultramodern**, **librecomp**), **concurrentqueue** includes, **Ares** under **`lib/ares`** as include-only RSP reference. The executable uses the **RmlUi SDL + OpenGL 3.3** sample backend (**`lib/RmlUi/Backends/RmlUi_Backend_SDL_GL3.cpp`** et al.), fetches **SDL2_image** on Windows (same VC zip pattern as **`AeroSDL2.cmake`** for SDL2), downloads **DejaVuSans.ttf** (OFL) via the **SourceForge** `dejavu-fonts-ttf-2.37` tarball (see **`config/cmake/AeroEngine.cmake`**), copies it next to the exe for **`Rml::LoadFontFace`**. **N64 / RDP path:** **`recomp::start`** + **`create_render_context`** (see **`lib/N64ModernRuntime/librecomp/include/librecomp/game.hpp`**, **`lib/N64ModernRuntime/ultramodern/include/ultramodern/renderer_context.hpp`**) are wired from **`src/host/aero_recomp_host.cpp`** and **`src/host/aero_rt64_render_context.cpp`**; graphics fidelity depends on replacing the RSP stub in **`src/host/aero_recomp_callbacks.cpp`** with real microcode handling.

## Phase 5–6 — Patches and stabilization

- `patches/` + `patches.toml`; iterate with Ghidra + host debugger (`Docs/Debugging.md`).

## Phase 7 — Optional

- Optimizations / mods only after a playable baseline.

## Scripts

Temporary or helper scripts: `tools/scripts/` (per `Docs/SystemPrompt.md`).
