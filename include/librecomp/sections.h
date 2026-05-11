/* Minimal copy of N64ModernRuntime's librecomp/sections.h for host builds before
 * lib/ submodules are added. N64Recomp emits #include "librecomp/sections.h" in
 * RecompiledFuncs/recomp_overlays.inl (tools/source/N64Recomp/src/main.cpp).
 * Upstream reference: N64ModernRuntime librecomp/include/librecomp/sections.h
 */
#ifndef __SECTIONS_H__
#define __SECTIONS_H__

#include <stddef.h>
#include "recomp.h"

#define ARRLEN(x) (sizeof(x) / sizeof((x)[0]))

typedef struct {
    recomp_func_t* func;
    uint32_t offset;
    uint32_t rom_size;
} FuncEntry;

typedef enum {
    R_MIPS_NONE = 0,
    R_MIPS_16,
    R_MIPS_32,
    R_MIPS_REL32,
    R_MIPS_26,
    R_MIPS_HI16,
    R_MIPS_LO16,
    R_MIPS_GPREL16,
} RelocEntryType;

typedef struct {
    uint32_t offset;
    uint32_t target_section_offset;
    uint16_t target_section;
    RelocEntryType type;
} RelocEntry;

typedef struct {
    uint32_t rom_addr;
    uint32_t ram_addr;
    uint32_t size;
    FuncEntry* funcs;
    size_t num_funcs;
    RelocEntry* relocs;
    size_t num_relocs;
    size_t index;
} SectionTableEntry;

typedef struct {
    const char* name;
    uint32_t ram_addr;
} FunctionExport;

typedef struct {
    uint32_t ram_addr;
    recomp_func_t* func;
} ManualPatchSymbol;

#endif
