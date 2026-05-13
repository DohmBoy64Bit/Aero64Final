# Architecture (Aero64Final)

Authoritative rules and phase gates: **`Docs/SystemPrompt.md`**. This file is the short structural map.

## Physical layout (upstream-shaped “B”)

**Primary reference:** Zelda64Recomp + Kirby64Recomp injests (`Docs/RepoInjests/Zelda64/`, `Docs/RepoInjests/Kirby64/`) — `lib/`, root `CMakeLists.txt`, `src/` host glue. Banjo/Dino trees in RepoInjests are secondary comparisons for N64Recomp config and `add_library(RecompiledFuncs)` patterns.

| Area | Path | Role |
|------|------|------|
| Host entry + glue | `src/main/` | `main`, future `register_patches` / overlay registration (pattern from Zelda/Banjo injests) |
| ROM-specific logic | `src/game/` | APIs, config, decompression helpers — **depends on engine, not vice versa** |
| Public headers | `include/` | Thin project headers; engine headers stay under `lib/` |
| Build metadata | `config/` | N64Recomp `.toml` (paths relative to each TOML file, same as Banjo `banjo.us.rev0.toml` `[input]` block in the Banjo injest) |
| Patches | `patches/` | `RECOMP_PATCH`-style sources + `patches.toml` when the pipeline is live |
| Assets | `assets/` | Menus, fonts, non-ROM assets |
| Engine / tools | `lib/` | Vendored or git submodule (Zelda64Recomp, N64Recomp, RT64, …) — **do not fork casually** |
| User ROM | `roms/` | USA `.z64` only on disk; never commit (see `.gitignore`) |
| Recomp output | `RecompiledFuncs/` | N64Recomp-generated C — **read-only** except through regeneration or documented patch flow |
| Host binary | `out/build/*` (or local choice) | CMake output; see `README.md` |

## Conceptual layers (separation of concerns)

Same as `Docs/SystemPrompt.md`: engine (reusable) vs game (ROM-specific) vs generated recomp. On disk, “engine” is mostly under `lib/`; “game” under `src/game/` + `config/` + `patches/`.

## Debugging

Host defaults: **`Docs/Debugging.md`** and `config/cmake/AeroStrictDebug.cmake` (patterns taken from Zelda64Recomp `CMakeLists.txt` in `Docs/RepoInjests/Zelda64/zelda64recomp-zelda64recomp-8a5edab282632443.txt`).
