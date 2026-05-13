# Aero64Final

Static recompilation port of **Aero Fighters Assault (USA)** using [N64Recomp](https://github.com/N64Recomp/N64Recomp)-style workflows. This repository does **not** include the commercial ROM.

## Layout

**Primary strategy:** Zelda64Recomp-style **engine + game** layout (`lib/`, `patches/`, `assets/`, RT64, N64ModernRuntime) with Kirby64Recomp-style **host glue** (`src/host/aero_rt64_render_context.cpp`, SDL/CMake patterns — see `Docs/RepoInjests/`). N64Recomp output lives in `RecompiledFuncs/` (or `RecompiledFuncsSymbolsTrack/` if you use the symbols-track config).

Upstream-shaped tree (see `Docs/SystemPrompt.md` and `Docs/Architecture.md`): `src/main`, `src/host`, `lib/` (fetch via `tools/scripts/fetch_aero_engine_deps.ps1`), `config/`, `patches/`, `RecompiledFuncs/` (generated), `roms/` (your dump).

## Splat (Phase 3 bootstrap)

- Root **`aero.us.splat.yaml`** + WSL: `bash tools/scripts/sync_aero_us_assets.sh` (splat `split` + IPL3; `splat_split_aero_us.sh` calls the same). See `Docs/Workflow.md`.
- USA ROM on disk: `roms/afa.n64.us.z64` (must match `sha1` in the yaml).
- **Splatasm one-shot** (regen asm + linker prep + per-TU ELF): `AERO_SPLATASM_REFRESH=1 bash tools/scripts/build_aero_us_elf.sh` (WSL, ROM present). Details: `Docs/Debugging.md` Track B.

## Tools (Phase 1)

- `tools/N64Recomp.exe` and `tools/RSPRecomp.exe` — built from [N64Recomp](https://github.com/N64Recomp/N64Recomp) per `tools/source/N64Recomp/README.md` (see `tools/PINNED_VERSIONS.txt`). Rebuild: `powershell -File tools/scripts/build_n64recomp.ps1`.

## Build (Zelda / Kirby path — with engine)

After `fetch_aero_engine_deps.ps1`, configure with **`AERO_WITH_ENGINE=ON`** (default **ON** when `lib/rt64` and friends exist). Requires CMake 3.20+, C++20, Visual Studio 2022 (or Ninja + MSVC) on Windows.

```powershell
powershell -File tools/scripts/fetch_aero_engine_deps.ps1
cmake --preset windows-msvc-debug
cmake --build out/build/windows-msvc-debug --config Debug
```

Minimal SDL-only build (no RT64 / librecomp): **`cmake -DAERO_WITH_ENGINE=OFF ...`** — see `Docs/Debugging.md`.

Run `Aero64Recompiled.exe` from the **repository root** so future relative paths (`roms/`, `assets/`) match `Docs/Debugging.md`.

## Docs

- `Docs/SystemPrompt.md` — architecture rules and phases  
- `Docs/Workflow.md` — toolchain order  
- `Docs/Debugging.md` — MSVC / pipeline logging discipline  
- `Docs/RepoInjests/` — packed reference trees (Zelda64, Banjo, Dino, …)

## Legal

You must supply a legally obtained copy of the game. Do not commit `.z64` / `.n64` / `.v64` files.
