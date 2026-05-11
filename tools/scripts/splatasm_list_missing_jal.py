#!/usr/bin/env python3
"""
Parse build/us/ld.log for R_MIPS_26 / undefined jal targets (`func_802.....`).
Use after: AERO_LINK_MODE=splatasm bash tools/scripts/build_aero_us_elf.sh

Does not edit files. For each symbol, search split/us/asm/game for the VRAM
comment `802XXXXXX` and add `glabel func_802XXXXXX` on the preceding line.

Reference: mips-linux-gnu-ld "relocation truncated to fit: R_MIPS_26 against `func_...`"
"""
from __future__ import annotations

import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
LDLOG = ROOT / "build" / "us" / "ld.log"
PAT = re.compile(r"against `([^`]+)'")


def main() -> int:
    if not LDLOG.is_file():
        print(f"No {LDLOG} — run splatasm link first.", file=sys.stderr)
        return 1
    text = LDLOG.read_text(errors="replace")
    names = sorted(set(PAT.findall(text)))
    for n in names:
        if n.startswith("func_"):
            print(n)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
