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
	if (n % 180 != 0) {
		return;
	}
	const unsigned sc = g_send_dl_calls.load(std::memory_order_relaxed);
	if (sc != 0) {
		return;
	}
	const bool verbose = std::getenv("AERO_GFX_DIAG_VERBOSE") != nullptr;
	const unsigned max_lines = verbose ? 10000u : 5u;
	const unsigned line = g_diag_lines_printed.fetch_add(1, std::memory_order_relaxed);
	if (line >= max_lines) {
		if (!verbose && !g_diag_suppressed_note_printed.exchange(true, std::memory_order_relaxed)) {
			std::fprintf(stderr,
			    "[Aero64][Diag] Further \"no send_dl\" lines suppressed (set AERO_GFX_DIAG_VERBOSE=1 for unlimited). "
			    "If send_dl never appears, verify RecompiledFuncs boot bodies are not empty stubs (e.g. "
			    "static_3_802000DC in funcs_0.c); empty stubs mean N64Recomp did not emit that code path.\n");
		}
		return;
	}
	std::fprintf(stderr,
	    "[Aero64][Diag] %" PRIu64 " VI ticks (~3s per line @ 60Hz); no send_dl yet (game has not queued M_GFXTASK / "
	    "osSpTaskStartGo path). Bootstrap \"Game Start Thread\" exit is normal.\n",
	    n);
}

#endif
