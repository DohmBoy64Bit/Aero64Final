#!/usr/bin/env python3
"""
Idempotent fix for split/us/aero.us.ld: move ipl3_VRAM_END = . inside .ipl3 { } so the
symbol is not emitted as belonging to .main (VMA 0xA4001000), which breaks N64Recomp
read_symbols — see Docs/Debugging.md.

Run after: splat split aero.us.splat.yaml (tools/scripts/sync_aero_us_assets.sh).
"""
from __future__ import annotations

import pathlib
import sys


OLD = (
    "        ipl3_DATA_SIZE = ABSOLUTE(ipl3_DATA_END - ipl3_DATA_START);\n"
    "    }\n"
    "    __romPos += SIZEOF(.ipl3);\n"
    "    __romPos = ALIGN(__romPos, 16);\n"
    "    . = ALIGN(., 16);\n"
    "    ipl3_ROM_END = __romPos;\n"
    "    ipl3_VRAM_END = .;\n"
)

NEW = (
    "        ipl3_DATA_SIZE = ABSOLUTE(ipl3_DATA_END - ipl3_DATA_START);\n"
    "        /* N64Recomp: ipl3_VRAM_END must stay inside .ipl3 (Docs/Debugging.md). */\n"
    "        ipl3_VRAM_END = .;\n"
    "    }\n"
    "    __romPos += SIZEOF(.ipl3);\n"
    "    __romPos = ALIGN(__romPos, 16);\n"
    "    . = ALIGN(., 16);\n"
    "    ipl3_ROM_END = __romPos;\n"
)


def main() -> int:
    root = pathlib.Path(__file__).resolve().parents[2]
    ld = root / "split" / "us" / "aero.us.ld"
    if not ld.is_file():
        return 0
    text = ld.read_text(encoding="utf-8", errors="replace")
    if OLD not in text:
        return 0
    ld.write_text(text.replace(OLD, NEW, 1), encoding="utf-8", newline="\n")
    print(f"Updated {ld} (ipl3_VRAM_END moved into .ipl3)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
