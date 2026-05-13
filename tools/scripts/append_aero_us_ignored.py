#!/usr/bin/env python3
"""Append one symbol to [patches].ignored in config/aero.us.toml.

Finds the first `ignored = [` after `[patches]` and closes the array by bracket depth
(so CRLF and nested `]` inside strings are not confused — strings here are simple).
"""
from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TOML = ROOT / "config" / "aero.us.toml"


def find_ignored_array_span(text: str) -> tuple[int, int]:
    patches = text.find("[patches]")
    if patches < 0:
        raise ValueError("no [patches] section")
    key = "ignored = ["
    i = text.find(key, patches)
    if i < 0:
        raise ValueError("no ignored = [ after [patches]")
    start_content = i + len(key)
    depth = 1
    j = start_content
    in_string = False
    escape = False
    while j < len(text) and depth > 0:
        c = text[j]
        if in_string:
            if escape:
                escape = False
            elif c == "\\":
                escape = True
            elif c == '"':
                in_string = False
            j += 1
            continue
        if c == '"':
            in_string = True
            j += 1
            continue
        if c == "[":
            depth += 1
        elif c == "]":
            depth -= 1
        j += 1
    if depth != 0:
        raise ValueError("unclosed ignored array")
    return i, j


def main() -> int:
    if len(sys.argv) != 2:
        print("usage: append_aero_us_ignored.py <symbol>", file=sys.stderr)
        return 2
    sym = sys.argv[1].strip()
    if not sym:
        return 2
    text = TOML.read_text(encoding="utf-8")
    needle = f'"{sym}"'
    if needle in text:
        print(f"already present: {sym}")
        return 0
    start, end = find_ignored_array_span(text)
    inner = text[start + len("ignored = [") : end - 1]
    new_inner = inner.rstrip() + f'\n    "{sym}",\n'
    new_text = text[: start + len("ignored = [")] + new_inner + "]" + text[end:]
    TOML.write_text(new_text, encoding="utf-8", newline="\n")
    print(f"appended ignored: {sym}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
