/* Minimal ROM map: header @0, IPL3 @0x40, raw game bytes @0x1000 in ROM, .text VMA 0x80200000.
 * Paired with split/us/asm/bootstrap/aero_us_rom_text.s (single .incbin TU). */

SECTIONS
{
    __romPos = 0;
    header_ROM_START = __romPos;
    .header : AT(header_ROM_START) SUBALIGN(16)
    {
        build/us/split/us/asm/header.o(.data);
    }
    __romPos += SIZEOF(.header);
    header_ROM_END = __romPos;

    ipl3_ROM_START = __romPos;
    .ipl3 0xA4000040 : AT(ipl3_ROM_START) SUBALIGN(16)
    {
        build/us/split/us/assets/boot/ipl3.o(.data);
        . = ALIGN(., 16);
    }
    __romPos += SIZEOF(.ipl3);
    __romPos = ALIGN(__romPos, 16);
    ipl3_ROM_END = __romPos;

    main_ROM_START = __romPos;
    .main 0x80200000 : AT(main_ROM_START) SUBALIGN(16)
    {
        build/us/split/us/asm/bootstrap/aero_us_rom_text.o(.text);
        . = ALIGN(., 16);
    }
    __romPos += SIZEOF(.main);
    __romPos = ALIGN(__romPos, 16);
    main_ROM_END = __romPos;

    .main_bss (NOLOAD) : SUBALIGN(16)
    {
        . = . + 0x100000;
    }

    /DISCARD/ : { *(*) }
}
