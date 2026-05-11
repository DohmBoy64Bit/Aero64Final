Intended contents (upstream-shaped layout "B"):

- Vendor or submodule N64Recomp / RSPRecomp sources under lib/ (see DinosaurPlanetRecomp Flatpak
  build in Docs/RepoInjests/DinoPlanet/dinosaurplanetrecomp-dino-recomp-8a5edab282632443.txt:
  cmake -S lib/N64Recomp -B lib/N64Recomp/cmake-build).

- Optional engine stack (Zelda64Recomp / Kirby64Recomp pattern): after cloning, run from repo root:
    powershell -File tools/scripts/fetch_aero_engine_deps.ps1
  That script shallow-clones (or documents) rt64, RmlUi, lunasvg, N64ModernRuntime, concurrentqueue, ares.

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
