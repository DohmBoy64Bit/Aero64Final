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

- Place **legally obtained** USA dump at **`roms/afa.n64.us.z64`** (default for **`aero.us.splat.yaml`**, **`tools/scripts/build_aero_us_elf.sh`** / **`sync_aero_us_assets.sh`** via **`ROM=...`**, and **`config/aero.us.toml`** `rom_file_path`). If your file uses another name, copy or symlink it to that path **or** change both `rom_file_path` in **`config/aero.us.toml`** and **`options.target_path`** in **`aero.us.splat.yaml`** (and any **`ROM=...`** you pass to scripts) so every tool agrees — paths are relative to each config file’s directory where noted (same idea as Banjo `[input]` in `Docs/RepoInjests/BanjoKazooie/banjorecomp-banjorecomp-8a5edab282632443.txt`).
- Record SHA-256 in `Docs/Debugging.md` when stable (splat already documents the expected **SHA-1** in **`aero.us.splat.yaml`**).

## Phase 3 — Split → ELF → Recomp

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
3. **N64Recomp** — `tools/N64Recomp.exe config/aero.us.toml` (paths relative to the TOML’s directory). The **bootstrap** ELF finds the entrypoint after a **local** `elf.cpp` uint32 comparison patch in `tools/source/N64Recomp` (see `tools/PINNED_VERSIONS.txt`); full recompilation still needs a **properly symbolized** ELF from splat/asm + jump tables, not only the raw `.incbin` blob.

### Parallel tracks (pick primary; others stay documented)

Root **`CMakeLists.txt`** can link **`RecompiledFuncs`** per Banjo **`add_library(RecompiledFuncs STATIC)`** in **`Docs/RepoInjests/BanjoKazooie/banjorecomp-banjorecomp-8a5edab282632443.txt`**, using **`tools/source/N64Recomp/include`** for **`recomp.h`** and **`include/librecomp/sections.h`** until **`lib/N64ModernRuntime`** is vendored.

**Track A — N64Recomp on splatasm ELF (`config/aero.us.toml`) — sidelined (checkpoint)**

This path fights **splat-linked** **`build/us/aero.us.splatasm.elf`**: bogus FUNC labels on data, jump-table analysis vs. synthesized ROM image, and local patches under **`tools/source/N64Recomp/`** (ELF hardening, **`[patches].ignored`** wildcards, **`analysis.cpp`** ROM bounds, diagnostics in **`main.cpp`** / **`recompilation.cpp`**). **Checkpoint (last known good):** **`tools\N64Recomp.exe config\aero.us.toml`** completes with the current **`[patches].ignored`** list in that file (includes **`func_8029C46C`** after jump-table analysis surfaced a bad table); outputs under **`RecompiledFuncs/`**. **Bootstrap regen** without splat analysis pain: **`config/aero.us.regen.toml`** + **`build/us/aero.us.elf`**. Resume Track A when you want to keep tightening splat/asm instead of growing a symbol file.

**Track B — Host executable + engine (`lib/`) toward a playable window**

1. Add **`lib/`** content per **`lib/README.txt`** (submodule or vendor tree with the runtime / engine CMake targets you are mirroring — e.g. Zelda64Recomp-style layout from **`Docs/RepoInjests/`**).
2. Extend **`CMakeLists.txt`**: **`add_subdirectory(lib/...)`**, link **`Aero64Recompiled`** to the same helper libs upstream uses; keep **`aero_apply_strict_host_debug`** on the exe.
3. **`AERO_WITH_ENGINE=ON`** (when `lib/rt64`, `lib/RmlUi`, `lib/lunasvg`, `lib/N64ModernRuntime`, `lib/concurrentqueue` exist): run **`powershell -File tools/scripts/fetch_aero_engine_deps.ps1`** once, then configure with **`AERO_WITH_ENGINE=ON`**. The host runs the **RmlUi** SDL+OpenGL3 launcher in **`src/host/aero_engine_launcher.cpp`** (see **`lib/RmlUi/Samples/basic/load_document/src/main.cpp`** for the same `Backend::` / `Rml::` sequence). **`main.cpp`** dispatches to that path when **`AERO_LINK_LIBRECOMP`** is defined (root **`CMakeLists.txt`**). After the launcher shuts down, **G** starts the recomp path: **`aero::start_recomp_from_launcher()`** in **`include/aero_runtime.h`** → **`src/host/aero_recomp_host.cpp`** (**`recomp::register_game`**, **`recomp::select_rom`**, **`recomp::start`** / **`recomp::start_game`**) with **`create_render_context`** implemented in **`src/host/aero_rt64_render_context.cpp`** (Kirby **`rt64_render_context.cpp`** pattern in **`Docs/RepoInjests/Kirby64/...`**). Overlays: **`src/host/aero_register_overlays.cpp`** (**`recomp::overlays::register_overlays`** + **`recomp_overlays.inl`**). **`get_rsp_microcode`** is still a stub in **`src/host/aero_recomp_callbacks.cpp`** until real RSP microcode is wired — expect broken or missing RDP output until then.
4. Point CMake at whichever recomp output directory you are using (**`RecompiledFuncs/`** vs. **`RecompiledFuncsSymbolsTrack/`**) when you switch tracks.

**Track C — Upstream-style input (Banjo / Zelda pattern; preferred low-friction recomp)**

Banjo’s shipped game config uses **`symbols_file_path`** + **`rom_file_path`** and leaves **`elf_path` commented out** — see **`Docs/RepoInjests/BanjoKazooie/banjorecomp-banjorecomp-8a5edab282632443.txt`**, **`FILE: banjo.us.rev0.toml`** (`symbols_file_path = "BanjoRecompSyms/bk.us.rev0.syms.toml"`). Zelda uses a small **`patches/patches.elf`** for patch code, not a raw multi-hundred-TU splat ELF for the whole game. **Aero parallel:** grow **`AeroRecompSyms/aero.us.syms.toml`** (schema: **`tools/source/N64Recomp/src/config.cpp`** `from_symbol_file`) and run **`tools\N64Recomp.exe config\aero.us.symbols_track.toml`** → **`RecompiledFuncsSymbolsTrack/`** (gitignored except **`.gitkeep`**). **`AeroRecompSyms/README.txt`** documents the **`func.rom == 0x1000`** entrypoint rename quirk and points back to **`main.cpp`**. The track config stubs **`recomp_entrypoint`** the same way **`aero.us.regen.toml`** does until the symbol list carries real rodata/jump-table context (Banjo’s **`[patches].stubs`** list is long for the same reason). **No splat game ELF required** for N64Recomp once the syms file is complete enough for your goals.

## Phase 4 — Engine integration

- **Without `AERO_WITH_ENGINE`:** **`Aero64Recompiled`** opens an **SDL2** window with **`SDL_Renderer`** (clear + bar) — see **`Docs/Debugging.md`** “SDL2 graphics smoke (no engine)”.
- **With `AERO_WITH_ENGINE`:** CMake adds **`config/cmake/AeroEngine.cmake`**: **RT64**, **RmlUi** (FreeType + **lunasvg** SVG plugin), **N64ModernRuntime** (**ultramodern**, **librecomp**), **concurrentqueue** includes, **Ares** under **`lib/ares`** as include-only RSP reference. The executable uses the **RmlUi SDL + OpenGL 3.3** sample backend (**`lib/RmlUi/Backends/RmlUi_Backend_SDL_GL3.cpp`** et al.), fetches **SDL2_image** on Windows (same VC zip pattern as **`AeroSDL2.cmake`** for SDL2), downloads **DejaVuSans.ttf** (OFL) into the build tree and copies it next to the exe for **`Rml::LoadFontFace`**. **N64 / RDP path:** **`recomp::start`** + **`create_render_context`** (see **`lib/N64ModernRuntime/librecomp/include/librecomp/game.hpp`**, **`lib/N64ModernRuntime/ultramodern/include/ultramodern/renderer_context.hpp`**) are wired from **`src/host/aero_recomp_host.cpp`** and **`src/host/aero_rt64_render_context.cpp`**; graphics fidelity depends on replacing the RSP stub in **`src/host/aero_recomp_callbacks.cpp`** with real microcode handling.

## Phase 5–6 — Patches and stabilization

- `patches/` + `patches.toml`; iterate with Ghidra + host debugger (`Docs/Debugging.md`).

## Phase 7 — Optional

- Optimizations / mods only after a playable baseline.

## Scripts

Temporary or helper scripts: `tools/scripts/` (per `Docs/SystemPrompt.md`).
