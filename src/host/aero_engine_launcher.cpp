// RmlUi launcher + OpenGL3 SDL backend when AERO_LINK_LIBRECOMP is set (see root CMakeLists.txt).
// Flow matches RmlUi sample: lib/RmlUi/Samples/basic/load_document/src/main.cpp (Backend::*, Rml::Initialise, Context, Update, Render).
// Backend sources: lib/RmlUi/Backends/RmlUi_Backend_SDL_GL3.cpp, RmlUi_Renderer_GL3.cpp, RmlUi_Platform_SDL.cpp.
//
// After the launcher: press G to shut down RmlUi and run recomp::start + RT64 (src/host/aero_recomp_host.cpp,
// aero_rt64_render_context.cpp). Or: Aero64Recompiled.exe --recomp from repo root (same path, no UI).
// ROM path: aero::kDefaultRomRelativePath (see include/aero_runtime.h).

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
#include <cstring>
#include <filesystem>
#include <system_error>

#if defined(_WIN32)
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

#include "RmlUi_Backend.h"

#include "aero_runtime.h"

#include "funcs.h"
#include "recomp.h"

namespace {

static bool g_launch_runtime_after_rmlui = false;

static const char kLauncherRml[] = R"(
<rml>
<head>
<style>
	body { font-family: DejaVu Sans, Segoe UI, sans-serif; font-size: 16px; color: #e8f0ff; background: #121826; }
	#wrap { width: 88%; margin: 2em auto; }
	h1 { font-size: 22px; margin-bottom: 0.5em; }
	p { line-height: 1.45; }
	kbd { background: #2a3548; padding: 0.1em 0.35em; border-radius: 3px; }
</style>
</head>
<body>
<div id="wrap">
	<h1>Aero64 — engine launcher (RmlUi)</h1>
	<p>Stack: SDL2 + OpenGL 3.3 (RmlUi), RT64 + ultramodern + librecomp. Place the USA ROM at <kbd>roms/afa.n64.us.z64</kbd> (repo root / VS working directory).</p>
	<p><kbd>G</kbd> start runtime (closes this UI, opens RT64 window, runs <code>recomp::start</code>). <kbd>Escape</kbd> quit launcher only. <kbd>F8</kbd> RmlUi debugger.</p>
	<p>RSP tasks use a stub microcode (returns Broke); wire RSPRecomp output in <code>aero_recomp_callbacks.cpp</code> for real hardware behavior.</p>
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
		if (key == Rml::Input::KI_G) {
			g_launch_runtime_after_rmlui = true;
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

#if defined(_WIN32)
static std::filesystem::path WindowsExeDirectory() {
	wchar_t buf[MAX_PATH];
	const DWORD n = GetModuleFileNameW(nullptr, buf, MAX_PATH);
	if (n == 0 || n >= MAX_PATH) {
		return {};
	}
	return std::filesystem::path(buf).parent_path();
}
#endif

static bool FontFileLooksUsable(const std::filesystem::path& p) {
	std::error_code ec;
	if (!std::filesystem::is_regular_file(p, ec) || ec) {
		return false;
	}
	const auto sz = std::filesystem::file_size(p, ec);
	return !ec && sz > 65536;
}

} // namespace

int aero_run_engine_mode(int argc, char** argv) {
	for (int i = 1; i < argc; ++i) {
		if (std::strcmp(argv[i], "--recomp") == 0) {
			// Skip RmlUi; same entry as after pressing G (see kLauncherRml). cwd must be repo root for rom path.
			aero::start_recomp_from_launcher();
			return EXIT_SUCCESS;
		}
	}

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

	const std::filesystem::path base = BasePath();
	const std::filesystem::path candidates[] = {
		base / "DejaVuSans.ttf",
		base.parent_path() / "aero_engine_assets" / "DejaVuSans.ttf",
		std::filesystem::current_path() / "DejaVuSans.ttf",
		std::filesystem::current_path() / "aero_engine_assets" / "DejaVuSans.ttf",
#if defined(_WIN32)
		WindowsExeDirectory() / "DejaVuSans.ttf",
#endif
	};
	bool font_ok = false;
	for (const std::filesystem::path& font_path : candidates) {
		if (!FontFileLooksUsable(font_path)) {
			continue;
		}
		if (Rml::LoadFontFace(font_path.string(), true)) {
			font_ok = true;
			break;
		}
	}
	if (!font_ok) {
		std::fprintf(stderr,
		    "[Aero64] LoadFontFace failed (no usable DejaVuSans.ttf). Re-run CMake so "
		    "`config/cmake/AeroEngine.cmake` can fetch the SourceForge bundle, or place "
		    "`assets/DejaVuSans.ttf` in the repo. Tried SDL base + cwd + exe dir (see aero_engine_launcher.cpp).\n");
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

	if (g_launch_runtime_after_rmlui) {
		aero::start_recomp_from_launcher();
	}
	return EXIT_SUCCESS;
}

#else

int aero_run_engine_mode(int, char**) { return -1; }

#endif
