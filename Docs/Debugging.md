# Strict debugging (Aero64Final)

This project follows `Docs/SystemPrompt.md`: no guessed toolchain behavior, ROM-specific work in `game/` / patches, generated recomp output treated as read-only.

## Assisted analysis (Cursor / automation + Ghidra)

When debugging or validating binaries in this repo, automated help can use:

- **Python `pefile`** — parse Windows **PE** images (sections, imports, exports, load config) for host executables and DLLs next to the build.
- **Python `capstone`** — **MIPS III** (or configured ISA) disassembly of raw words from **`roms/*.z64`**, ELF slices, or N64Recomp-emitted C comments, to check prologues, **`jal`** targets, and jump-table **`lw`/`jr`** sequences against on-disk layout (see the ROM check later in this file).

Those libraries are available in the environment used for agent-assisted work; prefer them over guessing instruction encodings.

**Ghidra:** facts that depend on project-specific naming, overlays, structs, or cross-references may still require the **project owner** to open a function at a given **VMA** (or share a short listing). Contributors and agents should **ask for a Ghidra check** when a decision would otherwise be speculative — especially for jump-table bounds, **`func_` vs data**, and boot/scheduler flow.

## Track C — symbols + ROM (Banjo-style, no splat game ELF)

N64Recomp **`symbols_file_path`** + **`rom_file_path`** only — see **`Docs/Workflow.md`** and **`config/aero.us.symbols_track.toml`**, **`AeroRecompSyms/`**. **`tools\N64Recomp.exe config\aero.us.symbols_track.toml`** writes **`RecompiledFuncsSymbolsTrack/`** (gitignored). Grow **`AeroRecompSyms/aero.us.syms.toml`** instead of fighting splat reloc noise when you want the upstream-shaped path.

## SDL2 graphics smoke (no engine)

If **`AERO_WITH_ENGINE`** is **OFF** (default when **`lib/rt64`** / **`lib/RmlUi`** / etc. are missing), **`src/main/main.cpp`** uses **SDL2** only: accelerated **`SDL_Renderer`** (clear + animated bar). CMake fetches **`SDL2-devel-*-VC.zip`** on Windows (Kirby64Recomp pattern in **`Docs/RepoInjests/Kirby64/kirby64ret-kirby64recomp-8a5edab282632443.txt`**; implementation **`config/cmake/AeroSDL2.cmake`**). Override SDL2 version with env **`SDL2_VERSION`**. Linux/macOS: **`find_package(SDL2 REQUIRED)`** (`libsdl2-dev` / Homebrew **`sdl2`**).

After **`cmake --build … --config Debug`**, run **`out/build/<preset>/Debug/Aero64Recompiled.exe`** from repo root (VS working directory: repo root per **`AeroStrictDebug.cmake`**). **Escape** or close to quit. This path does **not** load RmlUi or RT64.

## Engine build — RmlUi launcher (host)

With **`AERO_WITH_ENGINE=ON`** (and vendored trees under **`lib/`**), **`main.cpp`** calls **`aero_run_engine_mode`** in **`src/host/aero_engine_launcher.cpp`**. That follows the RmlUi sample **`lib/RmlUi/Samples/basic/load_document/src/main.cpp`**: **`Backend::Initialize`** → **`Rml::SetSystemInterface` / `SetRenderInterface`** → **`Rml::Initialise`** → context + debugger + font + document loop (**`Backend::ProcessEvents`**, **`context->Update`**, **`Backend::BeginFrame`**, **`context->Render`**, **`Backend::PresentFrame`**).

- **Backend sources:** **`lib/RmlUi/Backends/RmlUi_Backend_SDL_GL3.cpp`**, **`RmlUi_Renderer_GL3.cpp`**, **`RmlUi_Platform_SDL.cpp`** (wired in **`config/cmake/AeroEngine.cmake`**). **`RMLUI_SDL_VERSION_*`** are set there to match SDL2.
- **SDL2_image:** required because **`RenderInterface_GL3_SDL`** uses **`IMG_LoadTyped_RW`** (see **`lib/RmlUi/Backends/RmlUi_Backend_SDL_GL3.cpp`**). Windows: fetched VC **`SDL2_image-devel-*-VC.zip`** (override with **`SDL2_IMAGE_VERSION`**). Linux: install **`libsdl2-image-dev`** and ensure CMake finds **`SDL2_image`**.
- **Font:** CMake **`file(DOWNLOAD)`** pulls **DejaVu Sans** from the **DejaVu fonts** repository (**`version_2_37/ttf/DejaVuSans.ttf`**, OFL); **`POST_BUILD`** copies **`DejaVuSans.ttf`** next to the executable. **`SDL_GetBasePath()`** resolves the load path at runtime.
- **Shortcuts:** **F8** toggles the RmlUi debugger (**`Rml::Debugger`** — same idea as **`lib/RmlUi/Samples/shell/src/Shell.cpp`** `ProcessKeyDownShortcuts`). **Escape** calls **`Backend::RequestExit()`** in the launcher shortcut handler. **G** (after focus is on the document) requests exit and then runs **`aero::start_recomp_from_launcher()`** (**`include/aero_runtime.h`**, **`src/host/aero_engine_launcher.cpp`**) so **`src/host/aero_recomp_host.cpp`** can load **`roms/afa.n64.us.z64`**, **`recomp::start`**, and open the RT64-backed window. **`create_render_context`** is **`src/host/aero_rt64_render_context.cpp`**; **`get_rsp_microcode`** in **`src/host/aero_recomp_callbacks.cpp`** is still a stub — compare Kirby **`rt64_render_context.cpp`** / recomp config in **`Docs/RepoInjests/Kirby64/kirby64ret-kirby64recomp-8a5edab282632443.txt`** when wiring real RSP.
- **CLI smoke (ROM + recomp, no RmlUi):** from repo root, **`build\Release\Aero64Recompiled.exe --recomp`** (**`src/host/aero_engine_launcher.cpp`**) calls **`aero::start_recomp_from_launcher()`** directly. **`prepare_main_thread_game_window()`** (**`src/host/aero_recomp_callbacks.cpp`**) sets **`cfg.window_handle`** so **`recomp::start`** does not call **`create_window`** from a worker thread — on Windows, SDL expects **`SDL_CreateWindow`** on the thread that pumps events (same as **`recomp::start`**’s **`update_gfx`** loop); **`lib/N64ModernRuntime/librecomp/src/recomp.cpp`** skips **`create_window`** when **`window_handle`** is already set. **`recomp::start`** runs on the **process main thread**; a helper thread only runs **`recomp::start_game`** after the first **`update_gfx`** tick.

## Gfx / VI diagnostics (RT64 + librecomp)

When **`AERO_LINK_LIBRECOMP`** is on, **`include/aero_gfx_diag.h`** and **`src/host/aero_gfx_diag.cpp`** hook the ultramodern VI path and **`send_dl`** (RT64). **`[Aero64][Diag]`** on **`stderr`** prints about every **180 VI ticks** (~3 s at 60 Hz) while **`send_dl`** has not run yet (no **`M_GFXTASK`** / **`osSpTaskStartGo`** path in the recompiled game).

- **Spam cap:** by default only **five** such lines print, then one line explains suppression. Set **`AERO_GFX_DIAG_VERBOSE=1`** in the environment for the previous unlimited behavior.
- **Black screen with “no send_dl”:** the GPU stack can be healthy while the game never queues graphics. Check **`RecompiledFuncs/`** for **empty** **`RECOMP_FUNC`** bodies (e.g. **`static_*_802000DC`** with no statements) or an entry that **`return`**s before later boot **`jal`** targets — that usually means N64Recomp did not emit usable code for that span (**`config/aero.us.regen.toml`** vs **`config/aero.us.toml`**, **`Docs/Workflow.md`**). **`resolve_jal`** and the static-function second pass live under **`tools/source/N64Recomp/src/recompilation.cpp`** and **`tools/source/N64Recomp/src/main.cpp`**.
- **Bootstrap regen tweak:** **`config/aero.us.regen.toml`** uses a very small **`recomp_entrypoint`** **`function_sizes`** (currently **`0x3C`** bytes: first IPL trampoline through **`0x80200088`** only). Larger windows pull in **`jal`** targets whose static slices fail jump-table analysis on the bootstrap blob (e.g. **`0x802001E4`** / **`0x80251BE0`**, **`0x8022C110`** / **`0x80254384`** — **`Docs/Debugging.md`** ROM check and N64Recomp stderr). **`manual_funcs`** supplies **`func_802000DC`** for the first loop **`jal`**. **No** **`[patches].stubs`**. Rebuild **`build/us/aero.us.elf`**, then from **`config/`** run **`..\tools\N64Recomp.exe aero.us.regen.toml`**.

## Host — librecomp cold boot (manual `GameEntry` + vendored runtime)

`lib/N64ModernRuntime/` is fetched locally (see **`lib/README.txt`**) and is **gitignored**; the host still registers **`recomp::GameEntry`** in **`src/host/aero_recomp_host.cpp`**. Upstream N64ModernRuntime assumes Banjo-style invariants unless you patch **`librecomp`** after clone. For Aero, three facts line up with the ROM and **`aero.us.splat.yaml`**:

1. **`gpr` / KSEG0 sign extension** — `MEM_W`, `MEM_B`, etc. in **`tools/source/N64Recomp/include/recomp.h`** subtract **`0xFFFFFFFF80000000`**. That only yields the correct **`rdram + (addr - 0x80000000)`** offset when the address is **sign-extended** from 32 bits (e.g. **`0xFFFFFFFF80200050`**, not **`0x80200050`**). N64Recomp emits **`(gpr)(int32_t)0x........u`** in **`tools/source/N64Recomp/src/main.cpp`** (`get_entrypoint_address`). Any hand-filled **`entrypoint_address`** must use the same cast.

2. **First 1MB DMA / overlay RAM base vs entry PC** — **`recomp::init`** ( **`lib/N64ModernRuntime/librecomp/src/recomp.cpp`** ) calls **`load_overlays(0x1000, …)`** and **`do_rom_read(…, ram_address, 0x10001000, 0x100000)`** with one **`gpr`**. For Aero, segment VMA is **`0x80200000`** while the header entry PC is **`0x80200050`** (**`Docs/Workflow.md`**, **`aero.us.splat.yaml`**, **`config/ld/aero.us.bootstrap.ld`**). Using the entry PC as the DMA destination leaves **`0x80200000..0x8020004F`** zero and shifts the megabyte. The vendored patch adds **`std::optional<gpr> initial_rom_copy_ram_address`** on **`recomp::GameEntry`** (**`lib/N64ModernRuntime/librecomp/include/librecomp/game.hpp`**); **`wait_for_game_started`** passes **`value_or(entrypoint_address)`** into **`init`**. **`aero_recomp_host.cpp`** sets **`0x80200000`** there and keeps **`entrypoint_address`** at **`0x80200050`**.

3. **IPL3 stack pointer** — **`wait_for_game_started`** passes a **zero-filled** **`recomp_context`**. Retail IPL3 leaves **`$sp` ≈ 0x80400000`** (NTSC, 8 MiB) before the cart entry; the first instruction at **`0x80200050`** is **`addiu $sp, $sp, -0x20`** (ROM **`0x1050`**, word **`0x27bdffe0`**). The vendored patch sets **`ctx->r29`** in **`init()`** when it is still zero (same **`(gpr)(int32_t)0x80400000u`** pattern).

Until those **`librecomp`** edits live in an upstream tag you vendor, re-apply them after **`fetch_aero_engine_deps.ps1`** or keep a local fork; **`src/host/aero_recomp_host.cpp`** in this repo already expects **`initial_rom_copy_ram_address`**.

## Dual track: bootstrap (playable path) vs splatasm (correct ELF)

Both goals are supported in parallel:

1. **Track A — bootstrap (default)**  
   Run `bash tools/scripts/build_aero_us_elf.sh` with **`AERO_LINK_MODE=bootstrap`** (default). Produces **`build/us/aero.us.elf`**. This ELF is a **flat `.incbin`** of cart bytes at VRAM `0x80200000`; it is **not** the same as a linked splat image (see ROM check below). **`config/aero.us.toml`** targets the splatasm artifact for N64Recomp; keep a fresh bootstrap ELF for **`config/aero.us.regen.toml`** (stub regen) or local experiments.

2. **Track B — splatasm (splat-per-TU link)**  
   Run **`AERO_LINK_MODE=splatasm bash tools/scripts/build_aero_us_elf.sh`**. Writes **`build/us/aero.us.splatasm.elf`** (bootstrap **`build/us/aero.us.elf`** is unchanged). The linker fails with **`R_MIPS_26`** / “relocation truncated” when a **`jal func_80[23]…`** target has **no exported symbol** at that VMA (spimdisasm often names a target inside another `D_802...` chunk). Fix: add **`glabel func_…`** on the line **immediately before** the instruction whose splat comment shows that VMA (second hex field in `/* romoff VRAM word */` on `split/us/asm/game/rom_*.s`, not `main.s`). Other failures you may see after `ld -r` merge: **`R_MIPS_PC16`** (branch used a global label but a **`.L…`** sits on the same instruction — export **`glabel …`** for data/abs refs and retarget the branch to **`.L…`** in the same TU); **`jal`/`j` to `0x8400…`** (out of **`j`/`jal`’s 256 MiB window** — use **`lui`/`ori`/`jr` or `jalr`** and keep the original delay-slot instruction).  

   **Automated prep (recommended after a fresh `splat split`):** from repo root in WSL, **`AERO_SPLATASM_REFRESH=1 bash tools/scripts/build_aero_us_elf.sh`** runs **`sync_aero_us_assets.sh`** (splat + IPL3), then **`tools/scripts/splatasm_autoglabel_jal.py`** and **`tools/scripts/splatasm_fix_jal_local_labels.py`**, then assembles/links in **splatasm** mode (see script header). If asm is already split and you only need the two prep steps: **`AERO_LINK_MODE=splatasm AERO_SPLATASM_PREP=1 bash tools/scripts/build_aero_us_elf.sh`**.  

   After a failed splat link, list **`func_…`** names still mentioned in **`build/us/ld.log`** with:

   `python3 tools/scripts/splatasm_list_missing_jal.py`

3. **If splatasm link fails, refresh bootstrap**  
   A failed final link may leave **`build/us/aero.us.splatasm.elf`** missing or stale. Re-run **`AERO_LINK_MODE=bootstrap`** so **`build/us/aero.us.elf`** exists for **`config/aero.us.regen.toml`** and other tools.

## Windows N64Recomp on **`aero.us.splatasm.elf`**

**Resolved causes (2026-05):**

1. **`ipl3_VRAM_END` in the wrong ELF section** — Splat’s **`split/us/aero.us.ld`** assigned **`ipl3_VRAM_END = .`** *after* the **`.ipl3`** block closed, so GNU ld bound the symbol to the next output section (**.main**) while keeping VMA **`0xA4001000`**. **`read_symbols`** then computed a bogus ROM offset and could fault (**`tools/source/N64Recomp/src/elf.cpp`**). Fix: move **`ipl3_VRAM_END = .`** *inside* the **`.ipl3 { ... }`** block (same pattern if other VRAM markers show **Ndx** `.main` with an IPL3-range address).

2. **NOBITS / `.main_bss` symbols** — Sections with **`rom_addr == (uint32_t)-1`** still hit the ROM-backed path; **`read_symbols`** now skips creating **`Function`** rows for those symbols unless **`--dump-context`** (data symbol path).

3. **Out-of-range ROM slices** — **`read_symbols`** now skips symbols whose **`rom_address`** or instruction span exceeds **`context.rom.size()`** (with **`stderr`** diagnostics) instead of forming invalid pointers.

4. **Bootstrap-only `function_sizes` on splatasm** — **`config/aero.us.toml`** must **not** force **`recomp_entrypoint`** to span the whole cart when using splatasm; the entry is **`aero_boot_entry`** in **`split/us/asm/game/rom_00001000.s`** with a real **`.size`** (**`endlabel`**). Bootstrap regen still uses **`function_sizes`** in **`config/aero.us.regen.toml`**.

5. **Zero-sized `FUNC` at a real code label** — the linker may export **`func_802000DC`** (or similar) at the correct VMA with **`st_size == 0`**. N64Recomp then **`jal`**-resolves to a **zero-width `static_*`**. Fix without duplicate symbols: add **`function_sizes = [{ name = "func_802000DC", size = 0x18 }]`** (or the correct byte span) under **`[input]`** in **`config/aero.us.toml`** — **`tools/source/N64Recomp/src/elf.cpp`** applies **`manually_sized_funcs`** so **`read_symbols`** loads real words from the ROM image.

**Still common:** spimdisasm **`glabel`** on **data** yields **`STT_FUNC`** symbols whose words are not valid MIPS; N64Recomp can **`0xC0000005`** during **`recompile_function`**. Add names under **`[patches].ignored`** in **`config/aero.us.toml`** (**`tools/source/N64Recomp/src/config.cpp`** **`get_ignored_funcs`**, applied in **`main.cpp`**) until the TU is retyped in asm/splat.

**Regen when needed:** **`config/aero.us.regen.toml`** — bootstrap **`build/us/aero.us.elf`**, **tiny** **`function_sizes`** on **`recomp_entrypoint`** (bootstrap blob breaks larger windows), **`manual_funcs`** for **`func_802000DC`**, and **no** entry stub (see “Gfx / VI diagnostics”). Full boot still needs **`config/aero.us.toml`** + **`build/us/aero.us.splatasm.elf`** or symbol track. If regen fails, restore **`[patches].stubs = ["recomp_entrypoint"]`** temporarily.

## Confirmed ROM target (user)

- **Title:** Aero Fighters Assault  
- **Region:** USA  
- **Format:** `.z64` (big-endian)  
- Place dumps under `roms/` (gitignored). After you have a stable file, record **SHA-256** and file size in this doc or in `config/` metadata so regressions are traceable.

## Host (Windows / MSVC) — from day one

1. **CMake configuration types**  
   Prefer **Debug** or **RelWithDebInfo** while bringing the port up. Zelda64Recomp documents command-line CMake with `-DCMAKE_BUILD_TYPE=Release` or `Debug` in its `BUILDING.md` content (same text appears in `Docs/RepoInjests/Zelda64/zelda64recomp-zelda64recomp-8a5edab282632443.txt`). Use **Debug** when you need full symbols and less optimization; **RelWithDebInfo** when you need near-release speed with symbols.

2. **Visual Studio CMakeSettings**  
   The Zelda64 injest includes `CMakeSettings.json` with explicit **x64-Debug** and **x64-ReleaseWithDebInfo** configurations (`configurationType`: `Debug` / `RelWithDebInfo`). Mirror that idea for Aero: always have a one-click Debug preset in VS.

3. **Console in Debug, window in Release**  
   Zelda64Recomp’s `CMakeLists.txt` (in the same Zelda injest file) sets for the `Zelda64Recompiled` target on Windows:

   - `LINK_FLAGS_DEBUG` → `/SUBSYSTEM:CONSOLE`  
   - Release / RelWithDebInfo / MinSizeRel → `/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup`  

   **Why:** a console subsystem makes `printf` / logging visible without attaching a debugger. Aero should reuse the same policy via `config/cmake/AeroStrictDebug.cmake` → `aero_apply_strict_host_debug(<your_exe_target>)`.

4. **Debugger working directory**  
   Same CMakeLists section sets `VS_DEBUGGER_WORKING_DIRECTORY` to `${CMAKE_SOURCE_DIR}` so the executable resolves `assets/`, controller DB files, and ROM paths the same way as when run from the repo root (Zelda’s `BUILDING.md` also tells users to run from the project root or copy `assets`).

5. **Compile commands**  
   Zelda enables `CMAKE_EXPORT_COMPILE_COMMANDS ON` in that CMakeLists. Keep it on for clangd / IDE navigation.

## MIPS / recomp pipeline (Linux or WSL)

- **Splat / mips binutils:** treat linker script and BSS layout errors as first-class debug events (log exact commands, inputs, and `.map` or linker errors). Misaligned BSS invalidates everything downstream (`Docs/SystemPrompt.md` blank-slate workflow).  
- **N64Recomp:** capture full stdout/stderr per run; when excluding functions, record names in `.toml` with a one-line reason and Ghidra evidence (address/symbol), per system prompt.

## ROM check: `FUN_802001ac` switch vs on-disk bytes (USA)

From `aero.us.splat.yaml`, **`roms/afa.n64.us.z64`** must have **SHA-1** `6742f67d7d2639072e186d240237be1c662cb25a`. Re-run:

`python tools/scripts/verify_rom_jumptable.py`

Facts that matter for **bootstrap ELF + N64Recomp**:

1. **Naive cart map** `file_off = (vram - 0x80200000) + 0x1000` is what the bootstrap `.incbin` layout implies for the whole game image. For **VRAM `0x80251BE0`**, that yields **`0x52BE0`**, and the first word there is **not** the switch table (it sits in ASCII from the `Dataset` / animation strings region).

2. The **nine jump-table words** Ghidra labels at **`switchdataD_80251BE0`** appear **contiguously on disk** starting at file offset **`0x52B90`** (search for the big-endian word sequence beginning with **`0x80200344`**).

3. The **`lui at,0x8025` / `addu at,at,t2` / `lw t2,0x1be0(at)` / `jr t2`** sequence exists **once** in the ROM, with the **`lw`** at file offset **`0x11E0`**. If post-entry code is mapped contiguously from **`0x80200050`** with ROM **`0x1050`** as the first byte of `ramMain`, that **`lw`** corresponds to **VMA `0x802001E0`** (`0x80200050 + (0x11E0 - 0x1050)`), which may differ from the line addresses Ghidra prints for the same logical instruction—reconcile any mismatch in Ghidra (image base, segment start, or overlay) against this script before changing tools.

**Takeaway:** N64Recomp’s jump-table reader uses **ELF/ROM offsets derived from VRAM**; if VRAM and the **flat `.z64` byte order** disagree for rodata (as above), the analyzer reads the wrong words and reports an empty table—even when Ghidra’s **logical** table at **`0x80251BE0`** is correct for the loaded program. The durable fix remains a **properly linked, section-accurate ELF** (or Ghidra-exported symbols) rather than widening heuristics on the whole-ROM blob.

## Native post-boot

- **x64dbg** for the host executable, **Ghidra** for ROM/ELF structure (entrypoints, `unmatched_functions`, patch sites) — both named as required tools in `Docs/SystemPrompt.md`.  
- For heap or UB issues, add *evidence-based* next steps only (e.g. Page Heap, ASan) once a concrete failure exists; do not enable random sanitizers without a reproducible crash and compiler support verified for your chosen toolchain.

## Divergence from the documented folder layout

`Docs/SystemPrompt.md` describes a canonical tree (`engine/`, `runtime/`, `recomp/`, …). If research on upstream repos suggests a different layout, **ask the project owner before switching**; until then, keep the documented separation of concerns.
