// Host-provided symbols required by N64Recomp-generated C.
// When AERO_LINK_LIBRECOMP is defined, N64ModernRuntime librecomp + ultramodern supply most of these;
// we always provide recomp_syscall_handler (game-specific; see lib/N64ModernRuntime/N64Recomp/include/recomp.h).

#include "recomp.h"

#include <cstdio>
#include <cstdlib>

#if !defined(AERO_LINK_LIBRECOMP)

static void recomp_indirect_stub(uint8_t* rdram, recomp_context* ctx) {
  (void)rdram;
  (void)ctx;
}

extern "C" recomp_func_t* get_function(int32_t vram) {
  (void)vram;
  return &recomp_indirect_stub;
}

extern "C" void switch_error(const char* func, uint32_t vram, uint32_t jtbl) {
  std::fprintf(stderr, "[recomp] switch_error %s vram=0x%08X jtbl=0x%08X\n", func ? func : "?", vram, jtbl);
  std::abort();
}

extern "C" void do_break(uint32_t vram) {
  std::fprintf(stderr, "[recomp] do_break @ 0x%08X\n", vram);
  std::abort();
}

extern "C" void cop0_status_write(recomp_context* ctx, gpr value) {
  (void)ctx;
  (void)value;
}

extern "C" gpr cop0_status_read(recomp_context* ctx) {
  (void)ctx;
  return 0;
}

extern "C" void pause_self(uint8_t* rdram) {
  (void)rdram;
}

#endif // !AERO_LINK_LIBRECOMP

extern "C" void recomp_syscall_handler(uint8_t* rdram, recomp_context* ctx, int32_t instruction_vram) {
  (void)rdram;
  (void)ctx;
  std::fprintf(stderr, "[recomp] syscall @ 0x%08X (stub — wire ultramodern/OS layer when bringing up the port)\n",
      static_cast<unsigned>(instruction_vram));
  std::abort();
}
