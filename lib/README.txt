Intended contents (upstream-shaped layout "B"):

- Vendor or submodule N64Recomp / RSPRecomp sources under lib/ (see DinosaurPlanetRecomp Flatpak
  build in Docs/RepoInjests/DinoPlanet/dinosaurplanetrecomp-dino-recomp-8a5edab282632443.txt:
  cmake -S lib/N64Recomp -B lib/N64Recomp/cmake-build).

- Optional engine stack (Zelda64Recomp / Kirby64Recomp pattern): after cloning, run from repo root:
    powershell -File tools/scripts/fetch_aero_engine_deps.ps1
  That script shallow-clones (or documents) rt64, RmlUi, lunasvg, N64ModernRuntime, concurrentqueue, ares,
  and applies **`tools/patches/aero_librecomp_game_entry_boot.patch`** to **`lib/N64ModernRuntime`** when it is not
  already applied. If you update that subtree yourself (**`git -C lib/N64ModernRuntime pull`**), re-apply from the Aero
  repo root: **`git -C lib/N64ModernRuntime apply ../../tools/patches/aero_librecomp_game_entry_boot.patch`**
  ( **`GameEntry::initial_rom_copy_ram_address`**, **`after_entrypoint`**, **`init()`** DMA base + IPL **`$sp`**, and
  **`wait_for_game_started`** — see Docs/Debugging.md — Host — librecomp cold boot). **`src/host/aero_recomp_host.cpp`**
  expects those fields. Optional trace: **`git -C lib/N64ModernRuntime apply ../../tools/patches/aero_librecomp_sp_trace.patch`**
  for **`osSpTaskStartGo_recomp`** in **`librecomp/src/sp.cpp`** (Docs/Debugging.md Gfx / trace).

- CMake option AERO_WITH_ENGINE (default ON when lib/rt64, lib/RmlUi, lib/lunasvg, lib/N64ModernRuntime,
  and lib/concurrentqueue exist): see config/cmake/AeroEngine.cmake — RT64_STATIC, lunasvg, RmlUi (FreeType
  fetch if needed, SVG plugin), rt64, N64ModernRuntime. Ares (lib/ares) is added as an include-only tree for
  RSP reference, not add_subdirectory.

- Host executable with engine: RmlUi SDL+OpenGL3 launcher (src/host/aero_engine_launcher.cpp) plus linked
  rt64, ultramodern, librecomp. N64 framebuffer path still requires recomp::start and create_render_context
  like Kirby src/main/rt64_render_context.cpp (Docs/RepoInjests/Kirby64/...).

SDL2 for the host is wired via config/cmake/AeroSDL2.cmake (Kirby FetchContent VC zip). SDL2_image for
RmlUi's GL3 backend is wired in AeroEngine.cmake when AERO_WITH_ENGINE is on.

Do not commit prebuilt ROMs or copyrighted game assets.
