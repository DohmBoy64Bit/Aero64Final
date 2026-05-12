// Mirrors Kirby FILE: src/main/register_overlays.cpp (Docs/RepoInjests/Kirby64/...).

#if defined(AERO_LINK_LIBRECOMP) && (AERO_LINK_LIBRECOMP)

#include "librecomp/overlays.hpp"

#include "recomp_overlays.inl"

namespace aero {

void register_recomp_overlays() {
	// N64Recomp-generated tables live in RecompiledFuncs/recomp_overlays.inl.
	recomp::overlays::overlay_section_table_data_t sections{
		.code_sections = section_table,
		.num_code_sections = ARRLEN(section_table),
		.total_num_sections = num_sections,
	};

	recomp::overlays::overlays_by_index_t overlays{
		.table = overlay_sections_by_index,
		.len = ARRLEN(overlay_sections_by_index),
	};

	recomp::overlays::register_overlays(sections, overlays);
}

} // namespace aero

#endif
