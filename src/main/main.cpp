// Host bootstrap: without AERO_WITH_ENGINE — SDL2 + SDL_Renderer smoke (Docs/Debugging.md).
// With AERO_WITH_ENGINE — RmlUi SDL+OpenGL3 launcher (src/host/aero_engine_launcher.cpp); see Docs/Workflow.md Phase 4.

#define SDL_MAIN_HANDLED
#include <SDL.h>

#include <cmath>
#include <cstdio>
#include <cstdlib>

#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)
extern int aero_run_engine_mode(int argc, char** argv);
#endif

#include "funcs.h"
#include "recomp.h"

int main(int argc, char** argv) {
#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)
  return aero_run_engine_mode(argc, argv);
#else
  (void)argc;
  (void)argv;

  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0) {
    std::fprintf(stderr, "[Aero64Recompiled] SDL_Init failed: %s\n", SDL_GetError());
    return EXIT_FAILURE;
  }

  SDL_Window* window = SDL_CreateWindow(
      "Aero64Recompiled (SDL2)",
      SDL_WINDOWPOS_CENTERED,
      SDL_WINDOWPOS_CENTERED,
      960,
      540,
      SDL_WINDOW_ALLOW_HIGHDPI);
  if (!window) {
    std::fprintf(stderr, "[Aero64Recompiled] SDL_CreateWindow failed: %s\n", SDL_GetError());
    SDL_Quit();
    return EXIT_FAILURE;
  }

  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (!renderer) {
    std::fprintf(stderr, "[Aero64Recompiled] SDL_CreateRenderer failed: %s\n", SDL_GetError());
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_FAILURE;
  }

  std::puts("[Aero64Recompiled] SDL2 graphics: close window or press Escape to quit.");
  std::printf("[Aero64Recompiled] recomp_entrypoint @ %p (linked; not executing full game yet)\n",
      reinterpret_cast<void*>(&recomp_entrypoint));

  bool quit = false;
  Uint32 t0 = SDL_GetTicks();
  while (!quit) {
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
      if (e.type == SDL_QUIT) {
        quit = true;
      }
      if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_ESCAPE) {
        quit = true;
      }
    }

    const Uint32 t = SDL_GetTicks() - t0;
    const int pulse = static_cast<int>((std::sin(static_cast<double>(t) / 420.0) * 0.5 + 0.5) * 120.0);
    SDL_SetRenderDrawColor(renderer, 18, 28, static_cast<Uint8>(48 + pulse), 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 200, 220, 255, 255);
    SDL_Rect bar{};
    bar.w = 640;
    bar.h = 24;
    bar.x = (960 - bar.w) / 2;
    bar.y = static_cast<int>((std::sin(static_cast<double>(t) / 200.0) * 80.0) + 540 / 2 - bar.h / 2);
    SDL_RenderFillRect(renderer, &bar);

    SDL_RenderPresent(renderer);
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
  return 0;
#endif
}
