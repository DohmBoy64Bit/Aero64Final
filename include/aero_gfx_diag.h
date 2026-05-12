#pragma once

#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)

// Called from aero_rt64_render_context.cpp on each RT64 display-list submission.
void aero_gfx_diag_on_send_dl();

// Register as ultramodern::events::callbacks_t::vi_callback — counts VI retraces for stderr hints.
void aero_gfx_diag_on_vi_tick();

#endif
