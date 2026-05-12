#pragma once

// Host-side N64ModernRuntime + RT64 wiring (Docs/Workflow.md Phase 4).
// Kirby: Docs/RepoInjests/Kirby64/kirby64ret-kirby64recomp-8a5edab282632443.txt.

#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)

#include "ultramodern/renderer_context.hpp"

namespace aero {

// Default USA ROM path (Workflow.md); must match SHA-1 in aero.us.splat.yaml when validating dumps.
constexpr const char kDefaultRomRelativePath[] = "roms/afa.n64.us.z64";

// Call on the main thread before recomp::start so librecomp skips create_window (Windows SDL requires
// SDL_CreateWindow on the thread that will pump events — same as recomp::start's update_gfx loop;
// see lib/N64ModernRuntime/librecomp/src/recomp.cpp window_handle branch).
ultramodern::renderer::WindowHandle prepare_main_thread_game_window();

// After RmlUi shutdown: ROM + overlays + recomp::start (blocks until quit).
void start_recomp_from_launcher();

} // namespace aero

#endif
