#!/usr/bin/env python3
"""
For splatasm Track B: ensure every `jal func_802XXXXXX` target has a matching
`glabel func_802XXXXXX` on the line immediately before the instruction whose
splat/spimdisasm comment shows that VRAM (second hex field in the comment).

Scans split/us/asm/game/rom_*.s only (not main.s). Idempotent.

Ref: Docs/Debugging.md Track B.
"""
from __future__ import annotations

import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
GAME = ROOT / "split" / "us" / "asm" / "game"

# /* romoff VRAM word */  instruction — VRAM is 8 hex digits (802/803 + 5 hex).
VRAM_LINE = re.compile(
    r"^(\s*/\*\s+[0-9A-Fa-f]+\s+)(80[23][0-9A-Fa-f]{5})\s+([0-9A-Fa-f]{8})\s+\*/\s+.*$"
)
JAL = re.compile(r"\bjal\s+func_(80[23][0-9A-Fa-f]{5})\b")
GLABEL = re.compile(r"^\s*glabel\s+func_(80[23][0-9A-Fa-f]{5})\s*$", re.M)


def collect() -> tuple[set[str], set[str], dict[str, tuple[Path, int, str]]]:
    refs: set[str] = set()
    defs: set[str] = set()
    # VRAM (802......) -> first file/line that has this address in the comment
    vram_lines: dict[str, tuple[Path, int, str]] = {}

    for p in sorted(GAME.glob("rom_*.s")):
        lines = p.read_text(errors="replace").splitlines(keepends=True)
        for i, line in enumerate(lines):
            for m in JAL.finditer(line):
                refs.add(m.group(1).upper())
            for m in GLABEL.finditer(line):
                defs.add(m.group(1).upper())
            vm = VRAM_LINE.match(line.rstrip("\n"))
            if vm:
                vram = vm.group(2).upper()
                if vram not in vram_lines:
                    vram_lines[vram] = (p, i, line)

    return refs, defs, vram_lines


def main() -> int:
    if not GAME.is_dir():
        print(f"No {GAME}", file=sys.stderr)
        return 1

    refs, defs, vram_lines = collect()
    missing = sorted(refs - defs, key=lambda x: int(x, 16))
    if not missing:
        print("No missing jal glabels (refs subset of defs).")
        return 0

    edits: dict[Path, list[tuple[int, str]]] = {}
    skipped: list[str] = []

    for sym in missing:
        vram = sym  # func_802ABCDEF -> VRAM 802ABCDEF
        hit = vram_lines.get(vram)
        if not hit:
            skipped.append(sym)
            continue
        path, idx, _orig = hit
        insert = f"glabel func_{vram}\n"
        # avoid duplicate if glabel already immediately above
        lines = path.read_text(errors="replace").splitlines(keepends=True)
        if idx > 0 and lines[idx - 1].strip() == f"glabel func_{vram}":
            continue
        edits.setdefault(path, []).append((idx, insert))

    for path, items in sorted(edits.items(), key=lambda kv: str(kv[0])):
        items.sort(key=lambda t: t[0], reverse=True)
        text = path.read_text(errors="replace")
        lines = text.splitlines(keepends=True)
        for idx, insert in items:
            lines.insert(idx, insert)
        path.write_text("".join(lines), newline="\n")

    print(f"Inserted glabels in {len(edits)} file(s) for {len(missing) - len(skipped)} symbol(s).")
    if skipped:
        print(f"No VRAM line for {len(skipped)} symbol(s); first 30:", file=sys.stderr)
        for s in skipped[:30]:
            print(" ", s, file=sys.stderr)
        return 2 if len(skipped) == len(missing) else 0

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
