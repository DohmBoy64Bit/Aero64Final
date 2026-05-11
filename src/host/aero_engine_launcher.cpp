// RmlUi launcher + OpenGL3 SDL backend when AERO_LINK_LIBRECOMP is set (see root CMakeLists.txt).
// Flow matches RmlUi sample: lib/RmlUi/Samples/basic/load_document/src/main.cpp (Backend::*, Rml::Initialise, Context, Update, Render).
// Backend sources: lib/RmlUi/Backends/RmlUi_Backend_SDL_GL3.cpp, RmlUi_Renderer_GL3.cpp, RmlUi_Platform_SDL.cpp.
//
// RT64 + N64ModernRuntime are linked for the Kirby-shaped stack; presenting the N64 framebuffer still requires
// ultramodern::renderer::callbacks_t::create_render_context wired like Kirby's src/main/rt64_render_context.cpp
// (Docs/RepoInjests/Kirby64/kirby64ret-kirby64recomp-8a5edab282632443.txt) and recomp::start (lib/N64ModernRuntime/librecomp/include/librecomp/game.hpp).

#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)

#include <SDL.h>
#include <SDL_image.h>

#include <RmlUi/Core/Context.h>
#include <RmlUi/Core/Core.h>
#include <RmlUi/Core/ElementDocument.h>
#include <RmlUi/Core/Input.h>
#include <RmlUi/Debugger.h>

#include <cstdio>
#include <cstdlib>
#include <filesystem>

#include "RmlUi_Backend.h"

#include "funcs.h"
#include "recomp.h"

namespace {

static const char kLauncherRml[] = R"(
<rml>
<head>
<style>
	body { font-family: DejaVu Sans; font-size: 16px; color: #e8f0ff; background: #121826; }
	#wrap { width: 88%; margin: 2em auto; }
	h1 { font-size: 22px; margin-bottom: 0.5em; }
	p { line-height: 1.45; }
	kbd { background: #2a3548; padding: 0.1em 0.35em; border-radius: 3px; }
</style>
</head>
<body>
<div id="wrap">
	<h1>Aero64 — engine launcher (RmlUi)</h1>
	<p>Stack: SDL2 + OpenGL 3.3 (RmlUi backend), RmlUi + FreeType + lunasvg (SVG), RT64 + ultramodern + librecomp (linked).</p>
	<p>N64 RDP output is not wired yet: add <kbd>create_render_context</kbd> like Kirby <code>rt64_render_context.cpp</code> and drive <code>recomp::start</code> per <code>librecomp/game.hpp</code>.</p>
	<p><kbd>Escape</kbd> quit &middot; <kbd>F8</kbd> RmlUi debugger</p>
</div>
</body>
</rml>
)";

bool ProcessKeyDownShortcuts(Rml::Context* context, Rml::Input::KeyIdentifier key, int key_modifier, float native_dp_ratio,
    bool priority) {
	(void)context;
	(void)key_modifier;
	(void)native_dp_ratio;
	if (priority) {
		if (key == Rml::Input::KI_F8) {
			Rml::Debugger::SetVisible(!Rml::Debugger::IsVisible());
			return false;
		}
		if (key == Rml::Input::KI_ESCAPE) {
			Backend::RequestExit();
			return false;
		}
	}
	return true;
}

std::filesystem::path BasePath() {
	if (const char* base = SDL_GetBasePath()) {
		return std::filesystem::path(base);
	}
	return std::filesystem::current_path();
}

} // namespace

int aero_run_engine_mode(int argc, char** argv) {
	(void)argc;
	(void)argv;

	const int window_width = 1024;
	const int window_height = 640;
	// Backend::Initialize calls SDL_Init (lib/RmlUi/Backends/RmlUi_Backend_SDL_GL3.cpp).
	if (!Backend::Initialize("Aero64Recompiled", window_width, window_height, true)) {
		std::fprintf(stderr, "[Aero64] RmlUi Backend::Initialize failed.\n");
		return EXIT_FAILURE;
	}

	const int img_flags = IMG_INIT_JPG | IMG_INIT_PNG | IMG_INIT_TIF | IMG_INIT_WEBP;
	if ((IMG_Init(img_flags) & img_flags) == 0) {
		std::fprintf(stderr, "[Aero64] IMG_Init warning: %s\n", IMG_GetError());
	}

	Rml::SetSystemInterface(Backend::GetSystemInterface());
	Rml::SetRenderInterface(Backend::GetRenderInterface());
	Rml::Initialise();

	Rml::Context* context = Rml::CreateContext("main", Rml::Vector2i(window_width, window_height));
	if (!context) {
		std::fprintf(stderr, "[Aero64] Rml::CreateContext failed.\n");
		Rml::Shutdown();
		Backend::Shutdown();
		return EXIT_FAILURE;
	}

	Rml::Debugger::Initialise(context);

	const std::filesystem::path font_path = BasePath() / "DejaVuSans.ttf";
	if (!Rml::LoadFontFace(font_path.string(), true)) {
		std::fprintf(stderr, "[Aero64] LoadFontFace failed for %s (copy DejaVuSans.ttf next to exe; CMake POST_BUILD should do this).\n",
		    font_path.string().c_str());
	}

	if (Rml::ElementDocument* doc = context->LoadDocumentFromMemory(kLauncherRml, "aero://launcher")) {
		doc->Show();
	}

	std::printf("[Aero64] recomp_entrypoint @ %p (linked; game thread not started)\n", reinterpret_cast<void*>(&recomp_entrypoint));

	bool running = true;
	while (running) {
		running = Backend::ProcessEvents(context, &ProcessKeyDownShortcuts, true);
		context->Update();
		Backend::BeginFrame();
		context->Render();
		Backend::PresentFrame();
	}

	Rml::Shutdown();
	Backend::Shutdown();
	IMG_Quit();
	return EXIT_SUCCESS;
}

#else

int aero_run_engine_mode(int, char**) { return -1; }

#endif
