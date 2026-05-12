// RT64-backed ultramodern::renderer::RendererContext (Kirby FILE: src/main/rt64_render_context.cpp in
// Docs/RepoInjests/Kirby64/kirby64ret-kirby64recomp-8a5edab282632443.txt). Texture-pack / recomp_ui hooks omitted.

#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)

#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <memory>

#include "aero_gfx_diag.h"

#include "plume/plume_render_interface_types.h"

#include "hle/rt64_application.h"

#include "ultramodern/config.hpp"
#include "ultramodern/renderer_context.hpp"
#include "ultramodern/ultra64.h"

namespace {

static uint8_t g_dmem[0x1000];
static uint8_t g_imem[0x1000];

static unsigned int MI_INTR_REG = 0;
static unsigned int DPC_START_REG = 0;
static unsigned int DPC_END_REG = 0;
static unsigned int DPC_CURRENT_REG = 0;
static unsigned int DPC_STATUS_REG = 0;
static unsigned int DPC_CLOCK_REG = 0;
static unsigned int DPC_BUFBUSY_REG = 0;
static unsigned int DPC_PIPEBUSY_REG = 0;
static unsigned int DPC_TMEM_REG = 0;
static unsigned int VI_STATUS_REG = 0;
static unsigned int VI_ORIGIN_REG = 0;
static unsigned int VI_WIDTH_REG = 0;
static unsigned int VI_INTR_REG = 0;
static unsigned int VI_V_CURRENT_LINE_REG = 0;
static unsigned int VI_TIMING_REG = 0;
static unsigned int VI_V_SYNC_REG = 0;
static unsigned int VI_H_SYNC_REG = 0;
static unsigned int VI_LEAP_REG = 0;
static unsigned int VI_H_START_REG = 0;
static unsigned int VI_V_START_REG = 0;
static unsigned int VI_V_BURST_REG = 0;
static unsigned int VI_X_SCALE_REG = 0;
static unsigned int VI_Y_SCALE_REG = 0;

static unsigned char g_dummy_rom_header[0x40];

// OSTask pointers are int32 KSEG addresses; RT64 expects byte offsets into the host RDRAM backing store.
static uint32_t task_ptr_to_rdram_phys(PTR(u64) p) {
	return static_cast<uint32_t>(p) & 0x1FFFFFFFu;
}

void dummy_check_interrupts() {}

RT64::UserConfiguration::Antialiasing compute_max_supported_aa(plume::RenderSampleCounts bits) {
	if (bits & plume::RenderSampleCount::Bits::COUNT_2) {
		if (bits & plume::RenderSampleCount::Bits::COUNT_4) {
			if (bits & plume::RenderSampleCount::Bits::COUNT_8) {
				return RT64::UserConfiguration::Antialiasing::MSAA8X;
			}
			return RT64::UserConfiguration::Antialiasing::MSAA4X;
		}
		return RT64::UserConfiguration::Antialiasing::MSAA2X;
	}
	return RT64::UserConfiguration::Antialiasing::None;
}

RT64::UserConfiguration::AspectRatio to_rt64_aspect(ultramodern::renderer::AspectRatio option) {
	switch (option) {
		case ultramodern::renderer::AspectRatio::Original:
			return RT64::UserConfiguration::AspectRatio::Original;
		case ultramodern::renderer::AspectRatio::Expand:
			return RT64::UserConfiguration::AspectRatio::Expand;
		case ultramodern::renderer::AspectRatio::Manual:
			return RT64::UserConfiguration::AspectRatio::Manual;
		case ultramodern::renderer::AspectRatio::OptionCount:
			return RT64::UserConfiguration::AspectRatio::OptionCount;
	}
	return RT64::UserConfiguration::AspectRatio::Original;
}

RT64::UserConfiguration::Antialiasing to_rt64_msaa(ultramodern::renderer::Antialiasing option) {
	switch (option) {
		case ultramodern::renderer::Antialiasing::None:
			return RT64::UserConfiguration::Antialiasing::None;
		case ultramodern::renderer::Antialiasing::MSAA2X:
			return RT64::UserConfiguration::Antialiasing::MSAA2X;
		case ultramodern::renderer::Antialiasing::MSAA4X:
			return RT64::UserConfiguration::Antialiasing::MSAA4X;
		case ultramodern::renderer::Antialiasing::MSAA8X:
			return RT64::UserConfiguration::Antialiasing::MSAA8X;
		case ultramodern::renderer::Antialiasing::OptionCount:
			return RT64::UserConfiguration::Antialiasing::OptionCount;
	}
	return RT64::UserConfiguration::Antialiasing::None;
}

RT64::UserConfiguration::RefreshRate to_rt64_rr(ultramodern::renderer::RefreshRate option) {
	switch (option) {
		case ultramodern::renderer::RefreshRate::Original:
			return RT64::UserConfiguration::RefreshRate::Original;
		case ultramodern::renderer::RefreshRate::Display:
			return RT64::UserConfiguration::RefreshRate::Display;
		case ultramodern::renderer::RefreshRate::Manual:
			return RT64::UserConfiguration::RefreshRate::Manual;
		case ultramodern::renderer::RefreshRate::OptionCount:
			return RT64::UserConfiguration::RefreshRate::OptionCount;
	}
	return RT64::UserConfiguration::RefreshRate::Original;
}

RT64::UserConfiguration::InternalColorFormat to_rt64_hpfb(ultramodern::renderer::HighPrecisionFramebuffer option) {
	switch (option) {
		case ultramodern::renderer::HighPrecisionFramebuffer::Off:
			return RT64::UserConfiguration::InternalColorFormat::Standard;
		case ultramodern::renderer::HighPrecisionFramebuffer::On:
			return RT64::UserConfiguration::InternalColorFormat::High;
		case ultramodern::renderer::HighPrecisionFramebuffer::Auto:
			return RT64::UserConfiguration::InternalColorFormat::Automatic;
		case ultramodern::renderer::HighPrecisionFramebuffer::OptionCount:
			return RT64::UserConfiguration::InternalColorFormat::OptionCount;
	}
	return RT64::UserConfiguration::InternalColorFormat::Standard;
}

void set_application_user_config(RT64::Application* application, const ultramodern::renderer::GraphicsConfig& config) {
	switch (config.res_option) {
		default:
		case ultramodern::renderer::Resolution::Auto:
			application->userConfig.resolution = RT64::UserConfiguration::Resolution::WindowIntegerScale;
			application->userConfig.downsampleMultiplier = 1;
			break;
		case ultramodern::renderer::Resolution::Original:
			application->userConfig.resolution = RT64::UserConfiguration::Resolution::Manual;
			application->userConfig.resolutionMultiplier = std::max(config.ds_option, 1);
			application->userConfig.downsampleMultiplier = std::max(config.ds_option, 1);
			break;
		case ultramodern::renderer::Resolution::Original2x:
			application->userConfig.resolution = RT64::UserConfiguration::Resolution::Manual;
			application->userConfig.resolutionMultiplier = 2.0 * std::max(config.ds_option, 1);
			application->userConfig.downsampleMultiplier = std::max(config.ds_option, 1);
			break;
	}

	switch (config.hr_option) {
		default:
		case ultramodern::renderer::HUDRatioMode::Original:
			application->userConfig.extAspectRatio = RT64::UserConfiguration::AspectRatio::Original;
			break;
		case ultramodern::renderer::HUDRatioMode::Clamp16x9:
			application->userConfig.extAspectRatio = RT64::UserConfiguration::AspectRatio::Manual;
			application->userConfig.extAspectTarget = 16.0 / 9.0;
			break;
		case ultramodern::renderer::HUDRatioMode::Full:
			application->userConfig.extAspectRatio = RT64::UserConfiguration::AspectRatio::Expand;
			break;
	}

	application->userConfig.aspectRatio = to_rt64_aspect(config.ar_option);
	application->userConfig.antialiasing = to_rt64_msaa(config.msaa_option);
	application->userConfig.refreshRate = to_rt64_rr(config.rr_option);
	application->userConfig.refreshRateTarget = config.rr_manual_value;
	application->userConfig.internalColorFormat = to_rt64_hpfb(config.hpfb_option);
	application->userConfig.displayBuffering = RT64::UserConfiguration::DisplayBuffering::Triple;
}

ultramodern::renderer::SetupResult map_setup_result(RT64::Application::SetupResult rt64_result) {
	switch (rt64_result) {
		case RT64::Application::SetupResult::Success:
			return ultramodern::renderer::SetupResult::Success;
		case RT64::Application::SetupResult::DynamicLibrariesNotFound:
			return ultramodern::renderer::SetupResult::DynamicLibrariesNotFound;
		case RT64::Application::SetupResult::InvalidGraphicsAPI:
			return ultramodern::renderer::SetupResult::InvalidGraphicsAPI;
		case RT64::Application::SetupResult::GraphicsAPINotFound:
			return ultramodern::renderer::SetupResult::GraphicsAPINotFound;
		case RT64::Application::SetupResult::GraphicsDeviceNotFound:
			return ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;
	}
	std::fprintf(stderr, "Unhandled RT64::Application::SetupResult\n");
	std::abort();
}

ultramodern::renderer::GraphicsApi map_graphics_api(RT64::UserConfiguration::GraphicsAPI api) {
	switch (api) {
		case RT64::UserConfiguration::GraphicsAPI::D3D12:
			return ultramodern::renderer::GraphicsApi::D3D12;
		case RT64::UserConfiguration::GraphicsAPI::Vulkan:
			return ultramodern::renderer::GraphicsApi::Vulkan;
		case RT64::UserConfiguration::GraphicsAPI::Metal:
			return ultramodern::renderer::GraphicsApi::Metal;
		case RT64::UserConfiguration::GraphicsAPI::Automatic:
			return ultramodern::renderer::GraphicsApi::Auto;
	}
	std::fprintf(stderr, "Unhandled RT64::UserConfiguration::GraphicsAPI\n");
	std::abort();
}

static RT64::UserConfiguration::Antialiasing g_device_max_msaa = RT64::UserConfiguration::Antialiasing::None;
static bool g_sample_positions_supported = false;
static bool g_high_precision_fb_enabled = false;

class AeroRT64Context final : public ultramodern::renderer::RendererContext {
public:
	explicit AeroRT64Context(uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool debug);
	~AeroRT64Context() override = default;

	bool valid() override { return static_cast<bool>(app); }

	bool update_config(const ultramodern::renderer::GraphicsConfig& old_config,
	    const ultramodern::renderer::GraphicsConfig& new_config) override;

	void enable_instant_present() override;
	void send_dl(const OSTask* task) override;
	void update_screen() override;
	void shutdown() override;
	uint32_t get_display_framerate() const override;
	float get_resolution_scale() const override;

private:
	std::unique_ptr<RT64::Application> app;
};

AeroRT64Context::AeroRT64Context(uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool debug) {
	RT64::Application::Core app_core{};
#if defined(_WIN32)
	app_core.window = window_handle.window;
#elif defined(__linux__) || defined(__ANDROID__)
	app_core.window = window_handle;
#elif defined(__APPLE__)
	app_core.window.window = window_handle.window;
	app_core.window.view = window_handle.view;
#endif

	app_core.checkInterrupts = dummy_check_interrupts;
	app_core.HEADER = g_dummy_rom_header;
	app_core.RDRAM = rdram;
	app_core.DMEM = g_dmem;
	app_core.IMEM = g_imem;
	app_core.MI_INTR_REG = &MI_INTR_REG;
	app_core.DPC_START_REG = &DPC_START_REG;
	app_core.DPC_END_REG = &DPC_END_REG;
	app_core.DPC_CURRENT_REG = &DPC_CURRENT_REG;
	app_core.DPC_STATUS_REG = &DPC_STATUS_REG;
	app_core.DPC_CLOCK_REG = &DPC_CLOCK_REG;
	app_core.DPC_BUFBUSY_REG = &DPC_BUFBUSY_REG;
	app_core.DPC_PIPEBUSY_REG = &DPC_PIPEBUSY_REG;
	app_core.DPC_TMEM_REG = &DPC_TMEM_REG;
	app_core.VI_STATUS_REG = &VI_STATUS_REG;
	app_core.VI_ORIGIN_REG = &VI_ORIGIN_REG;
	app_core.VI_WIDTH_REG = &VI_WIDTH_REG;
	app_core.VI_INTR_REG = &VI_INTR_REG;
	app_core.VI_V_CURRENT_LINE_REG = &VI_V_CURRENT_LINE_REG;
	app_core.VI_TIMING_REG = &VI_TIMING_REG;
	app_core.VI_V_SYNC_REG = &VI_V_SYNC_REG;
	app_core.VI_H_SYNC_REG = &VI_H_SYNC_REG;
	app_core.VI_LEAP_REG = &VI_LEAP_REG;
	app_core.VI_H_START_REG = &VI_H_START_REG;
	app_core.VI_V_START_REG = &VI_V_START_REG;
	app_core.VI_V_BURST_REG = &VI_V_BURST_REG;
	app_core.VI_X_SCALE_REG = &VI_X_SCALE_REG;
	app_core.VI_Y_SCALE_REG = &VI_Y_SCALE_REG;

	RT64::ApplicationConfiguration app_config;
	app_config.useConfigurationFile = false;

	app = std::make_unique<RT64::Application>(app_core, app_config);

	const ultramodern::renderer::GraphicsConfig& cur_config = ultramodern::renderer::get_graphics_config();
	set_application_user_config(app.get(), cur_config);
	app->userConfig.developerMode = debug;
	app->enhancementConfig.f3dex.forceBranch = true;
	app->enhancementConfig.textureLOD.scale = true;

	switch (cur_config.api_option) {
		case ultramodern::renderer::GraphicsApi::D3D12:
			app->userConfig.graphicsAPI = RT64::UserConfiguration::GraphicsAPI::D3D12;
			break;
		case ultramodern::renderer::GraphicsApi::Vulkan:
			app->userConfig.graphicsAPI = RT64::UserConfiguration::GraphicsAPI::Vulkan;
			break;
		case ultramodern::renderer::GraphicsApi::Metal:
			app->userConfig.graphicsAPI = RT64::UserConfiguration::GraphicsAPI::Metal;
			break;
		case ultramodern::renderer::GraphicsApi::Auto:
		default:
			app->userConfig.graphicsAPI = RT64::UserConfiguration::GraphicsAPI::Automatic;
			break;
	}

	uint32_t thread_id = 0;
#if defined(_WIN32)
	thread_id = window_handle.thread_id;
#endif

	setup_result = map_setup_result(app->setup(thread_id));
	chosen_api = map_graphics_api(app->chosenGraphicsAPI);
	// RT64 quirk (lib/rt64/src/hle/rt64_application.cpp): on _WIN64, if DynamicLibraries::load()
	// fails, setup() still returns SetupResult::Success and leaves device == nullptr.
	if (setup_result != ultramodern::renderer::SetupResult::Success || app->device == nullptr) {
		if (setup_result == ultramodern::renderer::SetupResult::Success && app->device == nullptr) {
			std::fprintf(stderr,
			    "[Aero64] RT64 setup returned success but render device is null "
			    "(often failed DynamicLibraries::load — place dxcompiler.dll / dxil.dll next to the exe per AeroEngine.cmake POST_BUILD).\n");
			setup_result = ultramodern::renderer::SetupResult::DynamicLibrariesNotFound;
		}
		app.reset();
		return;
	}

	std::fprintf(stderr, "[Aero64] RT64 device OK; graphics API: %s\n",
	    ultramodern::renderer::get_graphics_api_name(chosen_api).c_str());

	app->setFullScreen(cur_config.wm_option == ultramodern::renderer::WindowMode::Fullscreen);

	if (app->device->getCapabilities().sampleLocations) {
		plume::RenderSampleCounts color_sample_counts = app->device->getSampleCountsSupported(plume::RenderFormat::R8G8B8A8_UNORM);
		plume::RenderSampleCounts depth_sample_counts = app->device->getSampleCountsSupported(plume::RenderFormat::D32_FLOAT);
		plume::RenderSampleCounts common_sample_counts = color_sample_counts & depth_sample_counts;
		g_device_max_msaa = compute_max_supported_aa(common_sample_counts);
		g_sample_positions_supported = true;
	} else {
		g_device_max_msaa = RT64::UserConfiguration::Antialiasing::None;
		g_sample_positions_supported = false;
	}

	g_high_precision_fb_enabled = app->shaderLibrary->usesHDR;
}

bool AeroRT64Context::update_config(const ultramodern::renderer::GraphicsConfig& old_config,
    const ultramodern::renderer::GraphicsConfig& new_config) {
	if (old_config == new_config) {
		return false;
	}
	if (!app) {
		return false;
	}
	if (new_config.wm_option != old_config.wm_option) {
		app->setFullScreen(new_config.wm_option == ultramodern::renderer::WindowMode::Fullscreen);
	}
	set_application_user_config(app.get(), new_config);
	app->updateUserConfig(true);
	if (new_config.msaa_option != old_config.msaa_option) {
		app->updateMultisampling();
	}
	return true;
}

void AeroRT64Context::enable_instant_present() {
	if (!app) {
		return;
	}
	app->enhancementConfig.presentation.mode = RT64::EnhancementConfiguration::Presentation::Mode::PresentEarly;
	app->updateEnhancementConfig();
}

void AeroRT64Context::send_dl(const OSTask* task) {
	if (!app) {
		return;
	}
	aero_gfx_diag_on_send_dl();
	static std::atomic<unsigned> s_logged_gfx_tasks{};
	const unsigned log_idx = s_logged_gfx_tasks.fetch_add(1, std::memory_order_relaxed);
	if (log_idx < 24u) {
		std::fprintf(stderr,
		    "[Aero64][Gfx] task#%u type=%u data_ptr=0x%08X ucode=0x%08X ucode_data=0x%08X data_size=0x%X\n",
		    log_idx,
		    static_cast<unsigned>(task->t.type),
		    static_cast<unsigned>(task->t.data_ptr),
		    static_cast<unsigned>(task->t.ucode),
		    static_cast<unsigned>(task->t.ucode_data),
		    static_cast<unsigned>(task->t.data_size));
	}

	const uint32_t ucode_phys = task_ptr_to_rdram_phys(task->t.ucode);
	const uint32_t ucode_data_phys = task_ptr_to_rdram_phys(task->t.ucode_data);
	const uint32_t dl_phys = task_ptr_to_rdram_phys(task->t.data_ptr);

	app->state->rsp->reset();
	app->interpreter->loadUCodeGBI(ucode_phys, ucode_data_phys, true);
	app->processDisplayLists(app->core.RDRAM, dl_phys, 0, true);
}

void AeroRT64Context::update_screen() {
	if (!app) {
		return;
	}
	const ultramodern::renderer::ViRegs* src = ultramodern::renderer::get_vi_regs();
	VI_STATUS_REG = src->VI_STATUS_REG;
	VI_ORIGIN_REG = src->VI_ORIGIN_REG;
	VI_WIDTH_REG = src->VI_WIDTH_REG;
	VI_INTR_REG = src->VI_INTR_REG;
	VI_V_CURRENT_LINE_REG = src->VI_V_CURRENT_LINE_REG;
	VI_TIMING_REG = src->VI_TIMING_REG;
	VI_V_SYNC_REG = src->VI_V_SYNC_REG;
	VI_H_SYNC_REG = src->VI_H_SYNC_REG;
	VI_LEAP_REG = src->VI_LEAP_REG;
	VI_H_START_REG = src->VI_H_START_REG;
	VI_V_START_REG = src->VI_V_START_REG;
	VI_V_BURST_REG = src->VI_V_BURST_REG;
	VI_X_SCALE_REG = src->VI_X_SCALE_REG;
	VI_Y_SCALE_REG = src->VI_Y_SCALE_REG;
	app->updateScreen();
}

void AeroRT64Context::shutdown() {
	if (app != nullptr) {
		app->end();
	}
	app.reset();
}

uint32_t AeroRT64Context::get_display_framerate() const {
	if (!app || !app->presentQueue) {
		return 60;
	}
	return app->presentQueue->ext.sharedResources->swapChainRate;
}

float AeroRT64Context::get_resolution_scale() const {
	if (!app) {
		return 1.0f;
	}
	constexpr int ReferenceHeight = 240;
	switch (app->userConfig.resolution) {
		case RT64::UserConfiguration::Resolution::WindowIntegerScale:
			if (app->sharedQueueResources->swapChainHeight > 0) {
				return std::max(float((app->sharedQueueResources->swapChainHeight + ReferenceHeight - 1) / ReferenceHeight), 1.0f);
			}
			return 1.0f;
		case RT64::UserConfiguration::Resolution::Manual:
			return float(app->userConfig.resolutionMultiplier);
		case RT64::UserConfiguration::Resolution::Original:
		default:
			return 1.0f;
	}
}

} // namespace

std::unique_ptr<ultramodern::renderer::RendererContext> aero_create_render_context(uint8_t* rdram,
    ultramodern::renderer::WindowHandle window_handle, bool developer_mode) {
	return std::make_unique<AeroRT64Context>(rdram, window_handle, developer_mode);
}

#endif // AERO_LINK_LIBRECOMP
