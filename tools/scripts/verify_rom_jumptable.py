#!/usr/bin/env python3
"""
Verify USA ROM bytes for the FUN_802001ac switch (Ghidra) against on-disk layout.

Reads: roms/afa.n64.us.z64
Expected SHA1: aero.us.splat.yaml -> sha1

Why this exists:
- Naive mapping VRAM 0x80251BE0 -> file offset 0x52BE0 reads ASCII (N64Recomp failure).
- The jump table *words* (80 20 03 44 ...) live at file offset 0x52B90.
- The lui/addu/lw/jr sequence is unique at file offset 0x11D8 (lw at 0x11E0).

This does not fix N64Recomp; it records evidence from the game binary on disk.
"""
from __future__ import annotations

import hashlib
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
ROM_PATH = ROOT / "roms" / "afa.n64.us.z64"
EXPECTED_SHA1 = "6742f67d7d2639072e186d240237be1c662cb25a"

SIG_TABLE = bytes.fromhex(
    "802003448020023c8020028880200338802002d480200338802003388020033880200320"
)
SIG_JR_CHAIN = bytes.fromhex("3c018025002a08218c2a1be001400008")  # lui at; addu; lw; jr t2


def main() -> int:
    if not ROM_PATH.is_file():
        print(f"Missing ROM: {ROM_PATH}", file=sys.stderr)
        return 1

    rom = ROM_PATH.read_bytes()
    if len(rom) != 8 * 1024 * 1024:
        print(f"Unexpected ROM size {len(rom)} (expected 8 MiB)", file=sys.stderr)
        return 1

    h = hashlib.sha1(rom).hexdigest()
    print(f"SHA1: {h}")
    if h != EXPECTED_SHA1:
        print(f"Expected SHA1 {EXPECTED_SHA1} (from aero.us.splat.yaml)", file=sys.stderr)
        return 1

    i_table = rom.find(SIG_TABLE)
    i_chain = rom.find(SIG_JR_CHAIN)
    print(f"Jump table signature at file offset: {hex(i_table) if i_table >= 0 else 'NOT FOUND'}")
    print(f"lui/addu/lw/jr chain at file offset:     {hex(i_chain) if i_chain >= 0 else 'NOT FOUND'}")

    naive_be0 = (0x80251BE0 - 0x80200000) + 0x1000
    print(f"Naive VRAM 0x80251BE0 -> file {hex(naive_be0)} first word: {rom[naive_be0:naive_be0+4].hex()}")

    if i_table >= 0:
        w0 = struct.unpack_from(">I", rom, i_table)[0]
        print(f"First table word as big-endian uint32: {hex(w0)}")

    if i_chain >= 0:
        lw_off = i_chain + 8
        vma_from_entry = 0x80200050 + (lw_off - 0x1050)
        print(f"lw at file {hex(lw_off)} -> VMA if contiguous from entry 0x80200050: {hex(vma_from_entry)}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
