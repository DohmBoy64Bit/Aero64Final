// Ultramodern / librecomp callbacks for recomp::start (Kirby main() in Docs/RepoInjests/Kirby64/...).

#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)

#include <SDL.h>
#include <SDL_syswm.h>

#include <atomic>
#include <condition_variable>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <string>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#endif

#include "aero_gfx_diag.h"
#include "aero_rt64_context.h"

#include "librecomp/game.hpp"
#include "librecomp/rsp.hpp"

#include "ultramodern/error_handling.hpp"
#include "ultramodern/threads.hpp"
#include "ultramodern/ultramodern.hpp"

static SDL_Window* g_game_window = nullptr;

static std::mutex g_start_mutex;
static std::condition_variable g_start_cv;
static std::atomic<bool> g_recomp_pump_ready{false};

static void aero_message_box(const char* msg) {
	std::fprintf(stderr, "[Aero64] %s\n", msg ? msg : "(null)");
#ifdef _WIN32
	MessageBoxA(nullptr, msg, "Aero64Recompiled", MB_OK | MB_ICONERROR);
#endif
}

static void aero_queue_audio(int16_t*, size_t) {}

static size_t aero_audio_remaining() {
	return 0;
}

static void aero_set_frequency(uint32_t) {}

static void aero_poll_input() {}

static bool aero_get_input(int controller_num, uint16_t* buttons, float* x, float* y) {
	(void)controller_num;
	if (buttons) {
		*buttons = 0;
	}
	if (x) {
		*x = 0.0f;
	}
	if (y) {
		*y = 0.0f;
	}
	return true;
}

static void aero_set_rumble(int, bool) {}

static void aero_gfx_thread_init_hook() {
	std::fprintf(stderr, "[Aero64] ultramodern gfx thread initialized (RT64); first M_GFXTASK lines follow as [Aero64][Gfx].\n");
}

static ultramodern::input::connected_device_info_t aero_get_connected_device_info(int controller_num) {
	(void)controller_num;
	return { ultramodern::input::Device::Controller, ultramodern::input::Pak::None };
}

static void* aero_create_gfx() {
	return nullptr;
}

static ultramodern::renderer::WindowHandle aero_create_window(void*) {
	if (SDL_InitSubSystem(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0) {
		std::fprintf(stderr, "[Aero64] SDL_InitSubSystem failed: %s\n", SDL_GetError());
		return {};
	}

#if defined(__APPLE__)
	const Uint32 flags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_METAL;
#elif defined(__linux__) && defined(RT64_SDL_WINDOW_VULKAN)
	const Uint32 flags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_VULKAN;
#else
	const Uint32 flags = SDL_WINDOW_RESIZABLE;
#endif

	g_game_window = SDL_CreateWindow("Aero64 (RT64)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, flags);
	if (!g_game_window) {
		std::fprintf(stderr, "[Aero64] SDL_CreateWindow failed: %s\n", SDL_GetError());
		return {};
	}

	ultramodern::renderer::WindowHandle out{};
#if defined(_WIN32)
	SDL_SysWMinfo wm_info;
	SDL_VERSION(&wm_info.version);
	if (!SDL_GetWindowWMInfo(g_game_window, &wm_info)) {
		std::fprintf(stderr, "[Aero64] SDL_GetWindowWMInfo failed: %s\n", SDL_GetError());
		SDL_DestroyWindow(g_game_window);
		g_game_window = nullptr;
		return {};
	}
	out.window = wm_info.info.win.window;
	out.thread_id = GetCurrentThreadId();
#elif defined(__linux__) || defined(__ANDROID__)
	out = g_game_window;
#elif defined(__APPLE__)
	out.window = g_game_window;
#endif
	return out;
}

static void aero_update_gfx(void*) {
	if (!g_recomp_pump_ready.exchange(true)) {
		g_start_cv.notify_all();
	}
	if (!g_game_window) {
		return;
	}
	SDL_Event ev;
	while (SDL_PollEvent(&ev)) {
		if (ev.type == SDL_QUIT) {
			ultramodern::quit();
		}
	}
}

static std::string aero_get_game_thread_name(const OSThread*) {
	return "game";
}

static RspExitReason aero_rsp_unimplemented(uint8_t* rdram, uint32_t ucode_addr) {
	(void)rdram;
	(void)ucode_addr;
	return RspExitReason::Broke;
}

static RspUcodeFunc* aero_get_rsp_microcode(const OSTask* task) {
	(void)task;
	return &aero_rsp_unimplemented;
}

namespace aero {

void install_default_graphics_config() {
	ultramodern::renderer::GraphicsConfig cfg{};
	cfg.developer_mode = false;
	cfg.res_option = ultramodern::renderer::Resolution::Auto;
	cfg.wm_option = ultramodern::renderer::WindowMode::Windowed;
	cfg.hr_option = ultramodern::renderer::HUDRatioMode::Original;
	// Auto → D3D12 on Windows can hit DXGI 0x887A0004 / WARP fallback on some AMD + Debug stacks (see user logs).
	// Vulkan is the safer default here; override with AERO_GRAPHICS_API=auto|d3d12|vulkan (case-insensitive).
#if defined(_WIN32)
	cfg.api_option = ultramodern::renderer::GraphicsApi::Vulkan;
	if (const char* api_env = std::getenv("AERO_GRAPHICS_API")) {
		if (std::strcmp(api_env, "auto") == 0 || std::strcmp(api_env, "AUTO") == 0) {
			cfg.api_option = ultramodern::renderer::GraphicsApi::Auto;
		} else if (std::strcmp(api_env, "d3d12") == 0 || std::strcmp(api_env, "D3D12") == 0) {
			cfg.api_option = ultramodern::renderer::GraphicsApi::D3D12;
		} else if (std::strcmp(api_env, "vulkan") == 0 || std::strcmp(api_env, "VULKAN") == 0) {
			cfg.api_option = ultramodern::renderer::GraphicsApi::Vulkan;
		}
	}
#else
	cfg.api_option = ultramodern::renderer::GraphicsApi::Auto;
#endif
	cfg.ar_option = ultramodern::renderer::AspectRatio::Original;
	cfg.msaa_option = ultramodern::renderer::Antialiasing::None;
	cfg.rr_option = ultramodern::renderer::RefreshRate::Display;
	// Auto HDR/internal FP path can stress D3D12 on some setups; Off matches many upstream recomp defaults.
	cfg.hpfb_option = ultramodern::renderer::HighPrecisionFramebuffer::Off;
	cfg.rr_manual_value = 60;
	cfg.ds_option = 1;
	ultramodern::renderer::set_graphics_config(cfg);
}

void wait_for_recomp_update_gfx() {
	std::unique_lock<std::mutex> lk(g_start_mutex);
	g_start_cv.wait(lk, [] { return g_recomp_pump_ready.load(); });
}

void reset_recomp_pump_flag() {
	g_recomp_pump_ready.store(false);
}

recomp::Configuration build_recomp_configuration() {
	recomp::Configuration cfg{};
	cfg.project_version.major = 0;
	cfg.project_version.minor = 1;
	cfg.project_version.patch = 0;
	cfg.project_version.suffix = "";
	cfg.window_handle = {};

	cfg.rsp_callbacks = recomp::rsp::callbacks_t{
		.get_rsp_microcode = aero_get_rsp_microcode,
	};

	cfg.renderer_callbacks = ultramodern::renderer::callbacks_t{
		.create_render_context = aero_create_render_context,
		.get_graphics_api_name = nullptr,
	};

	cfg.audio_callbacks = ultramodern::audio_callbacks_t{
		.queue_samples = aero_queue_audio,
		.get_frames_remaining = aero_audio_remaining,
		.set_frequency = aero_set_frequency,
	};

	cfg.input_callbacks = ultramodern::input::callbacks_t{
		.poll_input = aero_poll_input,
		.get_input = aero_get_input,
		.set_rumble = aero_set_rumble,
		.get_connected_device_info = aero_get_connected_device_info,
	};

	cfg.gfx_callbacks = ultramodern::gfx_callbacks_t{
		.create_gfx = aero_create_gfx,
		.create_window = aero_create_window,
		.update_gfx = aero_update_gfx,
	};

	cfg.events_callbacks = ultramodern::events::callbacks_t{
		.vi_callback = aero_gfx_diag_on_vi_tick,
		.gfx_init_callback = aero_gfx_thread_init_hook,
	};

	cfg.error_handling_callbacks = ultramodern::error_handling::callbacks_t{
		.message_box = aero_message_box,
	};

	cfg.threads_callbacks = ultramodern::threads::callbacks_t{
		.get_game_thread_name = aero_get_game_thread_name,
	};

	cfg.message_queue_control = {};
	return cfg;
}

ultramodern::renderer::WindowHandle prepare_main_thread_game_window() {
	return aero_create_window(nullptr);
}

void destroy_game_window() {
	if (g_game_window) {
		SDL_DestroyWindow(g_game_window);
		g_game_window = nullptr;
	}
	SDL_QuitSubSystem(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
}

} // namespace aero

#endif
