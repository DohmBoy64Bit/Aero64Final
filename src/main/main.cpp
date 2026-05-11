#include <cstdio>

#include "funcs.h"
#include "recomp.h"

int main(int argc, char** argv) {
  (void)argc;
  (void)argv;
  std::puts("[Aero64Recompiled] Run from repo root; ROM: roms/afa.n64.us.z64 (Docs/Workflow.md).");
  // Pull in the recomp TU so MSVC does not drop the static lib (RecompiledFuncs linked like Banjo upstream).
  std::printf("[Aero64Recompiled] recomp_entrypoint @ %p\n", reinterpret_cast<void*>(&recomp_entrypoint));
  return 0;
}
