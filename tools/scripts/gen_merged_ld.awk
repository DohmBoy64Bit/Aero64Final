# Read split/us/aero.us.ld on stdin; write merged-game linker script on stdout.
# Collapses all game/rom_*.o(.text|.data|.rodata|.bss) lines into one aero_game_merged.o per section.
BEGIN { seen_t=0; seen_d=0; seen_r=0; seen_b=0 }
/game\/rom_[0-9a-f]+\.o\(\.text\);/ {
  if (!seen_t) {
    print "        build/us/split/us/asm/game/aero_game_merged.o(.text);"
    seen_t = 1
  }
  next
}
/game\/rom_[0-9a-f]+\.o\(\.data\);/ {
  if (!seen_d) {
    print "        build/us/split/us/asm/game/aero_game_merged.o(.data);"
    seen_d = 1
  }
  next
}
/game\/rom_[0-9a-f]+\.o\(\.rodata\);/ {
  if (!seen_r) {
    print "        build/us/split/us/asm/game/aero_game_merged.o(.rodata);"
    seen_r = 1
  }
  next
}
/game\/rom_[0-9a-f]+\.o\(\.bss\);/ {
  if (!seen_b) {
    print "        build/us/split/us/asm/game/aero_game_merged.o(.bss);"
    seen_b = 1
  }
  next
}
{ print }
