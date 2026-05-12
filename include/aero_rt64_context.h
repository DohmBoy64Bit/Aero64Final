#pragma once

#include <memory>

#include "ultramodern/renderer_context.hpp"

#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)

std::unique_ptr<ultramodern::renderer::RendererContext> aero_create_render_context(uint8_t* rdram,
	ultramodern::renderer::WindowHandle window_handle, bool developer_mode);

#endif
