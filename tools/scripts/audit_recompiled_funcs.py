#!/usr/bin/env python3
"""
Scan RecompiledFuncs/*.c for N64Recomp output health (Docs/Debugging.md — empty static_* bodies).

Empty heuristic: RECOMP_FUNC body has no ROM comment lines (`// 0x`), which recompiled
instructions normally include. Quick triage only — not a full static analysis.
"""
from __future__ import annotations

import re
import sys
from pathlib import Path


def repo_root() -> Path:
    return Path(__file__).resolve().parents[2]


def iter_recomp_funcs(text: str) -> list[tuple[str, str, int]]:
    """Return list of (name, full_body, start_line) for each RECOMP_FUNC void name(...) { ... };"""
    out: list[tuple[str, str, int]] = []
    for m in re.finditer(
        r"^RECOMP_FUNC void (\w+)\([^)]*\) \{(.*?)^;\}",
        text,
        flags=re.MULTILINE | re.DOTALL,
    ):
        name = m.group(1)
        body = m.group(2)
        start_line = text[: m.start()].count("\n") + 1
        out.append((name, body, start_line))
    return out


def is_probably_empty(body: str) -> bool:
    return "// 0x" not in body


def main() -> int:
    root = repo_root()
    func_dir = root / "RecompiledFuncs"
    if not func_dir.is_dir():
        print(f"No directory: {func_dir}", file=sys.stderr)
        return 1

    c_files = sorted(func_dir.glob("*.c"))
    if not c_files:
        print(f"No .c files under {func_dir}", file=sys.stderr)
        return 1

    target = "func_8022970C"
    empty_static: list[tuple[str, str, int, str]] = []

    for path in c_files:
        text = path.read_text(encoding="utf-8", errors="replace")
        for name, body, line in iter_recomp_funcs(text):
            if name.startswith("static_") and is_probably_empty(body):
                empty_static.append((name, path.name, line, body.strip().split("\n")[0][:80]))
            if name == target:
                rom_comments = body.count("// 0x")
                status = "OK" if rom_comments > 0 else "SUSPICIOUS (no // 0x comments)"
                print(f"{target} in {path.name}:{line} -- {rom_comments} ROM comment lines -- {status}")

    print(f"\nEmpty-ish static_* (no // 0x in body): {len(empty_static)}")
    for name, fname, line, _ in empty_static[:40]:
        print(f"  {fname}:{line}  {name}")
    if len(empty_static) > 40:
        print(f"  ... and {len(empty_static) - 40} more")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
