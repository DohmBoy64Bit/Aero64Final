#include "recomp.h"
#include "funcs.h"
#include "librecomp/sections.h"

static FuncEntry section_3_main_funcs[] = {
    { .func = func_8020372C, .offset = 0x0000372C, .rom_size = 0x00000038 },
    { .func = func_802496B8, .offset = 0x000496B8, .rom_size = 0x00000030 },
    { .func = func_80248260, .offset = 0x00048260, .rom_size = 0x000006E4 },
    { .func = func_802D18E0, .offset = 0x000D1960, .rom_size = 0x00000084 },
    { .func = func_8021E6EC, .offset = 0x0001E6EC, .rom_size = 0x00000100 },
    { .func = func_80234F20, .offset = 0x00034F20, .rom_size = 0x0000009C },
    { .func = func_802E86F0, .offset = 0x000E8770, .rom_size = 0x00000014 },
    { .func = func_802E8878, .offset = 0x000E88F8, .rom_size = 0x0000005C },
    { .func = func_80241620, .offset = 0x00041620, .rom_size = 0x000000E4 },
    { .func = func_802E8784, .offset = 0x000E8804, .rom_size = 0x00000008 },
    { .func = func_8023F5A0, .offset = 0x0003F5A0, .rom_size = 0x000000E8 },
    { .func = func_8022FF40, .offset = 0x0002FF40, .rom_size = 0x00000038 },
    { .func = func_802E790C, .offset = 0x000E798C, .rom_size = 0x000000E4 },
    { .func = func_80246BB0, .offset = 0x00046BB0, .rom_size = 0x00000044 },
    { .func = func_802D2728, .offset = 0x000D27A8, .rom_size = 0x00000014 },
    { .func = func_8029DB34, .offset = 0x0009DBB4, .rom_size = 0x00000090 },
    { .func = func_80245A80, .offset = 0x00045A80, .rom_size = 0x00000044 },
    { .func = func_802CCD30, .offset = 0x000CCDB0, .rom_size = 0x000000A4 },
    { .func = func_802AA8A4, .offset = 0x000AA924, .rom_size = 0x00000148 },
    { .func = func_80207210, .offset = 0x00007210, .rom_size = 0x00000178 },
    { .func = func_80248040, .offset = 0x00048040, .rom_size = 0x0000004C },
    { .func = recomp_entrypoint, .offset = 0x00000050, .rom_size = 0x00000050 },
    { .func = func_80246F80, .offset = 0x00046F80, .rom_size = 0x0000008C },
    { .func = func_8024A8A0, .offset = 0x0004A8A0, .rom_size = 0x0000004C },
    { .func = func_802D273C, .offset = 0x000D27BC, .rom_size = 0x00000008 },
    { .func = func_80237F20, .offset = 0x00037F20, .rom_size = 0x000000A0 },
    { .func = func_8021BA90, .offset = 0x0001BA90, .rom_size = 0x000000A4 },
    { .func = func_80237828, .offset = 0x00037828, .rom_size = 0x00000298 },
    { .func = func_8029ED40, .offset = 0x0009EDC0, .rom_size = 0x000000F4 },
    { .func = func_802A1F00, .offset = 0x000A1F80, .rom_size = 0x00000008 },
    { .func = func_8024A8F0, .offset = 0x0004A8F0, .rom_size = 0x00000144 },
    { .func = func_802000DC, .offset = 0x000000DC, .rom_size = 0x00000018 },
    { .func = func_8022970C, .offset = 0x0002970C, .rom_size = 0x0000004C },
};
static SectionTableEntry section_table[] = {
    { .rom_addr = 0x00001000, .ram_addr = 0x80200000, .size = 0x007FF080, .funcs = section_3_main_funcs, .num_funcs = ARRLEN(section_3_main_funcs), .relocs = nullptr, .num_relocs = 0, .index = 3 },
};
const size_t num_sections = 8;
static int overlay_sections_by_index[] = {
    -1,
};
