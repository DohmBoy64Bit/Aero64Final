Aero64 — upstream-style N64Recomp input (Track C)
==================================================

Other recomps (Banjo-Kazooie, Zelda64Recomp) avoid feeding N64Recomp a huge
splat-linked game ELF for the main pass:

  * Banjo: `symbols_file_path` + `rom_file_path`; game ELF line commented out.
    See Docs/RepoInjests/BanjoKazooie/banjorecomp-banjorecomp-8a5edab282632443.txt
    FILE: banjo.us.rev0.toml (rom_file_path + BanjoRecompSyms/bk.us.rev0.syms.toml).

  * Zelda/MM: small `patches/patches.elf` for patch code; main game uses their
    curated pipeline (not raw multi-hundred-TU splat ELF).

This directory holds the **curated symbol list** TOML that N64Recomp loads via
`Context::from_symbol_file` (schema: `section` array with `rom`, `vram`, `size`,
`name`, `functions[]` — see tools/source/N64Recomp/src/config.cpp).

`aero.us.syms.toml` is a **bootstrap stub** (entry only) so
`config/aero.us.symbols_track.toml` runs without the splatasm ELF. Grow it by
exporting real function bounds from Ghidra / a future decomp / splat metadata
**without** relying on splat’s per-file glabel noise for N64Recomp.

Entrypoint quirk (same as symbol-file path in main.cpp): N64Recomp renames the
entry to `recomp_entrypoint` only when `func.rom == 0x1000`. For VRAM
0x80200050, set the **section** `vram` equal to the entry function’s VRAM and
`rom` to 0x1000 so `vram - section_vram + section_rom == 0x1000` (verified in
game code path tools/source/N64Recomp/src/main.cpp).
