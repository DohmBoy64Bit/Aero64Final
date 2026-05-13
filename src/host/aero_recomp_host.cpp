// recomp::start orchestration (Kirby main.cpp pattern, Docs/RepoInjests/Kirby64/...).

#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)

#include "aero_runtime.h"

#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <thread>
#include <vector>

#include "xxHash/xxh3.h"

#include "funcs.h"
#include "librecomp/game.hpp"
#include "librecomp/overlays.hpp"

#include "ultramodern/ultramodern.hpp"

extern "C" {
// N64Recomp emits `D_802000F4` in RecompiledFuncs (funcs.h); boot chain calls that symbol.
// `D_8020015C` is ignored in config/aero.us.toml (jump-table analysis); manual `func_D_8020015C` stays in aero_boot_chain_manual.c.
void func_D_8020015C(uint8_t* rdram, recomp_context* ctx);
void aero_overlay_stub_8023CE80(uint8_t* rdram, recomp_context* ctx);
void aero_overlay_stub_80237E10(uint8_t* rdram, recomp_context* ctx);
void aero_overlay_stub_8023F020(uint8_t* rdram, recomp_context* ctx);
void aero_overlay_stub_80230F68(uint8_t* rdram, recomp_context* ctx);
}

static void aero_register_manual_overlay_stubs_once() {
	static bool done = false;
	if (done) {
		return;
	}
	done = true;
	// After `init_overlays` + `load_overlays` in librecomp `init` (see `lib/N64ModernRuntime/librecomp/src/recomp.cpp` /
	// `overlays.cpp::init_overlays`). `after_entrypoint` runs on the game thread after that, so `func_map` is populated.
	// Only fill missing VRAM slots: if N64Recomp + overlay tables already mapped these addresses, do not overwrite
	// with stubs (`recomp::overlays::find_loaded_function` — added in vendored `overlays.cpp`).
	auto reg_stub_if_missing = [](int32_t vram, recomp_func_t* stub) {
		if (recomp::overlays::find_loaded_function(vram) == nullptr) {
			recomp::overlays::add_loaded_function(vram, stub);
		}
	};
	reg_stub_if_missing(static_cast<int32_t>(0x8023CE80u), aero_overlay_stub_8023CE80);
	reg_stub_if_missing(static_cast<int32_t>(0x80237E10u), aero_overlay_stub_80237E10);
	reg_stub_if_missing(static_cast<int32_t>(0x8023F020u), aero_overlay_stub_8023F020);
	reg_stub_if_missing(static_cast<int32_t>(0x80230F68u), aero_overlay_stub_80230F68);
}

namespace {

enum class ByteswapType {
	Invalid,
	NotByteswapped,
	Byteswapped4,
	Byteswapped2,
};

static const uint8_t g_first_rom_bytes[] = { 0x80, 0x37, 0x12, 0x40 };

ByteswapType check_rom_start(const std::vector<uint8_t>& rom_data) {
	if (rom_data.size() < 4) {
		return ByteswapType::Invalid;
	}
	auto check_match = [&](uint8_t i0, uint8_t i1, uint8_t i2, uint8_t i3) {
		return rom_data[0] == g_first_rom_bytes[i0] && rom_data[1] == g_first_rom_bytes[i1] && rom_data[2] == g_first_rom_bytes[i2] &&
		       rom_data[3] == g_first_rom_bytes[i3];
	};
	if (check_match(0, 1, 2, 3)) {
		return ByteswapType::NotByteswapped;
	}
	if (check_match(3, 2, 1, 0)) {
		return ByteswapType::Byteswapped4;
	}
	if (check_match(1, 0, 3, 2)) {
		return ByteswapType::Byteswapped2;
	}
	return ByteswapType::Invalid;
}

void byteswap_data(std::vector<uint8_t>& rom_data, size_t index_xor) {
	for (size_t rom_pos = 0; rom_pos + 3 < rom_data.size(); rom_pos += 4) {
		uint8_t t0 = rom_data[rom_pos + 0];
		uint8_t t1 = rom_data[rom_pos + 1];
		uint8_t t2 = rom_data[rom_pos + 2];
		uint8_t t3 = rom_data[rom_pos + 3];
		rom_data[rom_pos + (0 ^ index_xor)] = t0;
		rom_data[rom_pos + (1 ^ index_xor)] = t1;
		rom_data[rom_pos + (2 ^ index_xor)] = t2;
		rom_data[rom_pos + (3 ^ index_xor)] = t3;
	}
}

std::vector<uint8_t> read_rom_file(const std::filesystem::path& p) {
	std::ifstream f(p, std::ios::binary);
	if (!f) {
		return {};
	}
	f.seekg(0, std::ios::end);
	const auto sz = static_cast<size_t>(f.tellg());
	f.seekg(0, std::ios::beg);
	std::vector<uint8_t> out(sz);
	if (sz) {
		f.read(reinterpret_cast<char*>(out.data()), static_cast<std::streamsize>(sz));
	}
	return out;
}

std::string read_internal_name(const std::vector<uint8_t>& rom) {
	if (rom.size() < 0x20 + 20) {
		return {};
	}
	const char* p = reinterpret_cast<const char*>(rom.data() + 0x20);
	size_t len = 0;
	while (len < 20 && p[len] != 0) {
		++len;
	}
	return std::string(p, len);
}

} // namespace

namespace aero {

void register_recomp_overlays();
void install_default_graphics_config();
void wait_for_recomp_update_gfx();
void reset_recomp_pump_flag();
recomp::Configuration build_recomp_configuration();
void destroy_game_window();

static constexpr char8_t kGameId[] = u8"aero_us";

// ROM 0x8020008C.. (USA @ 0x80200000): prologue + `jal func_8022970C` / delay `addiu $a0, $sp, 0x20`, then fall-through
// at 0x802000A0 (`func_802000A0` in splatasm ELF). N64Recomp ends `recomp_entrypoint` at the first `jr $ra`, so the host
// chains here (`GameEntry::after_entrypoint`). `jal` sets `$ra` to the instruction after the delay slot => 0x802000A0.
// Set `AERO_TRACE_BOOT=1` for stderr after `func_8022970C` / before `func_802000A0`.
static void aero_boot_after_entrypoint(uint8_t* rdram, recomp_context* ctx) {
	aero_register_manual_overlay_stubs_once();
	ctx->r29 = ADD32(ctx->r29, -0x60);
	MEM_W(0x14, ctx->r29) = ctx->r31;
	MEM_W(0x60, ctx->r29) = ctx->r4;
	ctx->r4 = ADD32(ctx->r29, 0x20);
	// MIPS `jal` return address (PC+8 of branch slot) — was unset so `$ra` read as 0 after `func_8022970C` (AERO_TRACE_BOOT).
	ctx->r31 = static_cast<gpr>(static_cast<int32_t>(0x802000A0u));
	func_8022970C(rdram, ctx);
	if (std::getenv("AERO_TRACE_BOOT") != nullptr) {
		std::fprintf(stderr,
		    "[Aero64][Trace][Boot] after_entrypoint: returned from func_8022970C ($sp=%08X $ra=%08X $a0=%08X)\n",
		    static_cast<unsigned>(static_cast<uint32_t>(ctx->r29)),
		    static_cast<unsigned>(static_cast<uint32_t>(ctx->r31)),
		    static_cast<unsigned>(static_cast<uint32_t>(ctx->r4)));
	}
	func_802000A0(rdram, ctx);
	// ROM falls through 0x802000DC.. (funcs_0.c `func_802000DC`): must not be called from inside C `func_802000A0`
	// or `jr $ra` would incorrectly return into that wrapper; here it matches tail layout + IPL `jr $ra`.
	func_802000DC(rdram, ctx);
	// Recompiled `func_802000DC` ends in C `return`, not `jr $ra` to 0x802000F4; chain `D_802000F4`..`func_80200144`
	// (N64Recomp emits `D_802000F4` in RecompiledFuncs; see `tools/source/N64Recomp/src/main.cpp` output + funcs.h).
	D_802000F4(rdram, ctx);
	// `D_8020015C` / `func_802001AC` (VMA 0x8020015C .. 0x80200300): jump table + `jal func_80231A24` tail
	// (`split/us/asm/game/rom_00001000.s`; jtbl words `tools/scripts/verify_rom_jumptable.py` / `Docs/Debugging.md`).
	// In the on-cart flow this returns to 0x80200304; set `$ra` accordingly so subsequent boot can be chained.
	ctx->r31 = static_cast<gpr>(static_cast<int32_t>(0x80200304u));
	func_D_8020015C(rdram, ctx);

	// `D_80200304` saves/restores `$ra` from its stack frame; on hardware the `jal` caller’s link is typically
	// PC+8 after the `jal` (e.g. 0x80200368 — nop sled before fall-through to `D_80200370`). Match that so any
	// recompiled code that reads `$ra` mid-routine matches the cart (`roms/afa.n64.us.z64`, Capstone @ 0x80200304).
	ctx->r31 = static_cast<gpr>(static_cast<int32_t>(0x80200368u));
	D_80200304(rdram, ctx);
	// ROM fall-through to `D_80200370` after `D_80200304` (`jr $ra` → 0x80200368`); see `Docs/Debugging.md` / `function_sizes`.
	D_80200370(rdram, ctx);
}

void start_recomp_from_launcher() {
	const std::filesystem::path cwd = std::filesystem::current_path();
	const std::filesystem::path rom_path = cwd / kDefaultRomRelativePath;

	std::vector<uint8_t> rom = read_rom_file(rom_path);
	if (rom.empty()) {
		std::fprintf(stderr, "[Aero64] ROM not found at %s\n", rom_path.string().c_str());
		return;
	}
	rom.resize((rom.size() + 3) & ~size_t{ 3 });

	const ByteswapType swap = check_rom_start(rom);
	if (swap == ByteswapType::Invalid) {
		std::fprintf(stderr, "[Aero64] File does not look like a big-endian N64 ROM: %s\n", rom_path.string().c_str());
		return;
	}
	if (swap == ByteswapType::Byteswapped2) {
		byteswap_data(rom, 1);
	} else if (swap == ByteswapType::Byteswapped4) {
		byteswap_data(rom, 3);
	}

	const uint64_t rom_hash = XXH3_64bits(rom.data(), rom.size());
	const std::string internal_name = read_internal_name(rom);

	recomp::register_config_path(cwd);
	register_recomp_overlays();

	recomp::GameEntry entry{};
	entry.rom_hash = rom_hash;
	entry.internal_name = internal_name;
	entry.game_id = std::u8string(kGameId);
	entry.mod_game_id = "";
	entry.save_type = recomp::SaveType::None;
	entry.is_enabled = true;
	// Match N64Recomp-generated lookup (tools/source/N64Recomp/src/main.cpp): gpr must be
	// sign-extended from the 32-bit VRAM address so MEM_* in recomp.h maps KSEG0 to rdram
	// (zero-extended 0x8020... breaks (addr - 0xFFFFFFFF80000000) and corrupts the pointer).
	entry.entrypoint_address = static_cast<gpr>(static_cast<int32_t>(0x80200050u));
	// IPL maps ROM 0x1000 to segment VMA 0x80200000; entry PC is +0x50 (Docs/Workflow.md, aero.us.splat.yaml).
	entry.initial_rom_copy_ram_address = static_cast<gpr>(static_cast<int32_t>(0x80200000u));
	entry.entrypoint = &recomp_entrypoint;
	entry.thread_create_callback = nullptr;
	entry.on_init_callback = nullptr;
	entry.after_entrypoint = &aero_boot_after_entrypoint;

	if (!recomp::register_game(entry)) {
		std::fprintf(stderr, "[Aero64] register_game failed\n");
		return;
	}

	std::u8string gid(kGameId);
	const recomp::RomValidationError rom_err = recomp::select_rom(rom_path, gid);
	if (rom_err != recomp::RomValidationError::Good) {
		std::fprintf(stderr, "[Aero64] select_rom failed (%d) for %s\n", static_cast<int>(rom_err), rom_path.string().c_str());
		return;
	}

	install_default_graphics_config();
	reset_recomp_pump_flag();

	recomp::Configuration cfg = build_recomp_configuration();
	cfg.window_handle = prepare_main_thread_game_window();
#if defined(_WIN32)
	if (!cfg.window_handle.window) {
		std::fprintf(stderr, "[Aero64] prepare_main_thread_game_window failed (no HWND)\n");
		return;
	}
#elif defined(__APPLE__)
	if (!cfg.window_handle.window) {
		std::fprintf(stderr, "[Aero64] prepare_main_thread_game_window failed\n");
		return;
	}
#else
	if (!cfg.window_handle) {
		std::fprintf(stderr, "[Aero64] prepare_main_thread_game_window failed\n");
		return;
	}
#endif

	// start_game must run after the first update_gfx tick; librecomp's recomp::start blocks on this thread
	// (lib/N64ModernRuntime/librecomp/src/recomp.cpp) so the window was created above on the same thread.
	std::thread starter([]() {
		wait_for_recomp_update_gfx();
		recomp::start_game(std::u8string(kGameId));
	});

	recomp::start(cfg);
	starter.join();

	destroy_game_window();
}

} // namespace aero

#endif
