// Optional Gfx/VI diagnostics for Aero host (stderr; no dependency on librecomp internals).

#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)

#include "aero_gfx_diag.h"

#include <atomic>
#include <cinttypes>
#include <cstdio>
#include <cstdlib>

static std::atomic<uint64_t> g_vi_ticks{};
static std::atomic<unsigned> g_send_dl_calls{};
static std::atomic<unsigned> g_diag_lines_printed{};
static std::atomic<bool> g_diag_suppressed_note_printed{};

void aero_gfx_diag_on_send_dl() {
	g_send_dl_calls.fetch_add(1, std::memory_order_relaxed);
}

void aero_gfx_diag_on_vi_tick() {
	const uint64_t n = g_vi_ticks.fetch_add(1, std::memory_order_relaxed) + 1;
	const unsigned sc = g_send_dl_calls.load(std::memory_order_relaxed);
	if (sc != 0) {
		return;
	}
	// One line on the first VI interrupt so stderr is not silent for ~3s: the 180-tick branch below is only
	// **log throttling**, not a host sleep or cart “boot timer”. Emulation is already stepping; Gfx appears when
	// the game queues M_GFXTASK (see Docs/Debugging.md — Gfx / VI diagnostics).
	if (n == 1u) {
		std::fprintf(stderr,
		    "[Aero64][Diag] VI interrupt running; waiting for M_GFXTASK (first `send_dl`). "
		    "If none yet, that is game/recomp progress — not a deliberate multi-second host delay.\n");
		return;
	}
	if (n % 180 != 0) {
		return;
	}
	const bool verbose = std::getenv("AERO_GFX_DIAG_VERBOSE") != nullptr;
	const unsigned max_lines = verbose ? 10000u : 5u;
	const unsigned line = g_diag_lines_printed.fetch_add(1, std::memory_order_relaxed);
	if (line >= max_lines) {
		if (!verbose && !g_diag_suppressed_note_printed.exchange(true, std::memory_order_relaxed)) {
			std::fprintf(stderr,
			    "[Aero64][Diag] Further \"no send_dl\" lines suppressed (set AERO_GFX_DIAG_VERBOSE=1 for unlimited). "
			    "The cart entry slice in RecompiledFuncs/funcs_0.c ends at the first `jr $ra` (N64Recomp maps that to a "
			    "C `return` — see tools/source/N64Recomp/src/recompilation.cpp `cpu_jr` + `emit_return`), so the `jal` at "
			    "0x80200098 (`func_8022970C`) is not reached until librecomp chains MIPS `$ra` or the game thread runs "
			    "further recompiled code. Low-address RDRAM stores from `func_802000DC` need `recomp_rdram_phys_offset` "
			    "in tools/source/N64Recomp/include/recomp.h (Docs/Debugging.md — Host — librecomp cold boot). "
			    "Empty `static_*` bodies are a separate N64Recomp/symbol-size issue (config/aero.us.toml `function_sizes`).\n");
		}
		return;
	}
	std::fprintf(stderr,
	    "[Aero64][Diag] %" PRIu64 " VI ticks — still no `send_dl` (no M_GFXTASK yet). "
	    "This line repeats every 180 VI interrupts (~3s **logging** if VI ~60Hz); the host is not blocking the game thread for that interval. "
	    "\"Game Start Thread\" exit is normal for this bootstrap; RT64 is still running.\n",
	    n);
}

#endif
