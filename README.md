# Aero64Final

Static recompilation port of **Aero Fighters Assault (USA)** using [N64Recomp](https://github.com/N64Recomp/N64Recomp)-style workflows. This repository does **not** include the commercial ROM.

## Layout

Upstream-shaped tree (see `Docs/SystemPrompt.md` and `Docs/Architecture.md`): `src/main`, `src/game`, `lib/` (submodules), `config/`, `patches/`, `RecompiledFuncs/` (generated), `roms/` (your dump).

## Splat (Phase 3 bootstrap)

- Root **`aero.us.splat.yaml`** + WSL: `bash tools/scripts/sync_aero_us_assets.sh` (splat `split` + IPL3; `splat_split_aero_us.sh` calls the same). See `Docs/Workflow.md`.
- USA ROM on disk: `roms/afa.n64.us.z64` (must match `sha1` in the yaml).
- **Splatasm one-shot** (regen asm + linker prep + per-TU ELF): `AERO_SPLATASM_REFRESH=1 bash tools/scripts/build_aero_us_elf.sh` (WSL, ROM present). Details: `Docs/Debugging.md` Track B.

## Tools (Phase 1)

- `tools/N64Recomp.exe` and `tools/RSPRecomp.exe` — built from [N64Recomp](https://github.com/N64Recomp/N64Recomp) per `tools/source/N64Recomp/README.md` (see `tools/PINNED_VERSIONS.txt`). Rebuild: `powershell -File tools/scripts/build_n64recomp.ps1`.

## Build (bootstrap)

Requires CMake 3.20+, a C++20 compiler, and Visual Studio 2022 (or Ninja + MSVC) on Windows.

```powershell
cmake -S . -B out/build/msvc -G "Visual Studio 17 2022" -A x64
cmake --build out/build/msvc --config Debug
```

Run `Aero64Recompiled.exe` from the **repository root** so future relative paths (`roms/`, `assets/`) match `Docs/Debugging.md`.

## Docs

- `Docs/SystemPrompt.md` — architecture rules and phases  
- `Docs/Workflow.md` — toolchain order  
- `Docs/Debugging.md` — MSVC / pipeline logging discipline  
- `Docs/RepoInjests/` — packed reference trees (Zelda64, Banjo, Dino, …)

## Legal

You must supply a legally obtained copy of the game. Do not commit `.z64` / `.n64` / `.v64` files.
