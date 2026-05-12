#include "recomp.h"
#include "funcs.h"

// Hand translation of splatasm ELF `func_802000A0` (VMA 0x802000A0 .. 0x802000DB), verified with:
//   mips-linux-gnu-objdump -d --start-address=0x802000a0 --stop-address=0x802000e0 build/us/aero.us.splatasm.elf
// N64Recomp does not emit this slice because `recomp_entrypoint` ends at the first `jr $ra`; the host chains
// `func_8022970C` then this function (see src/host/aero_recomp_host.cpp). When N64Recomp emits `func_802000A0`
// and `func_80228DE0` from config/aero.us.toml `function_sizes`, delete this file and the duplicate decls in funcs.h.

RECOMP_FUNC void func_80228DE0(uint8_t* rdram, recomp_context* ctx) {
	(void)rdram;
	(void)ctx;
	/* TODO: replace with N64Recomp output ({ name = "func_80228DE0", size = 0x34 } in config/aero.us.toml). */
}

RECOMP_FUNC void func_802000A0(uint8_t* rdram, recomp_context* ctx) {
	uint64_t hi = 0, lo = 0, result = 0;
	int c1cs = 0;
	// 0x802000a0: lhu t6, 98(sp)
	ctx->r14 = MEM_HU(0x62, ctx->r29);
	// 0x802000a4: lui t8, 0
	ctx->r24 = S32(0 << 16);
	// 0x802000a8: addiu t8, t8, 0
	ctx->r24 = ADD32(ctx->r24, 0);
	// 0x802000ac: sll t7, t6, 2
	ctx->r15 = S32(ctx->r14 << 2);
	// 0x802000b0: addu t7, t7, t6
	ctx->r15 = ADD32(ctx->r15, ctx->r14);
	// 0x802000b4: sll t7, t7, 4
	ctx->r15 = S32(ctx->r15 << 4);
	// 0x802000b8: addu a0, t7, t8
	ctx->r4 = ADD32(ctx->r15, ctx->r24);
	// 0x802000bc: sw a0, 24(sp)
	MEM_W(0x18, ctx->r29) = ctx->r4;
	// 0x802000c0: jal func_80228DE0  — return address after delay slot
	ctx->r31 = (gpr)(int32_t)0x802000C8u;
	// 0x802000c4: addiu a1, sp, 32
	ctx->r5 = ADD32(ctx->r29, 0x20);
	func_80228DE0(rdram, ctx);
	// 0x802000c8: lw a0, 24(sp)
	ctx->r4 = MEM_W(0x18, ctx->r29);
	// 0x802000cc: lui at, 0x3f80
	ctx->r1 = S32(0x3f80 << 16);
	// 0x802000d0: mtc1 at, $f0  (lower 32 bits of f0)
	ctx->f0.u32l = (uint32_t)ctx->r1;
	ctx->f0.u32h = 0;
	// 0x802000d4: li t9, 2
	ctx->r25 = ADD32(0, 2);
	// 0x802000d8: sw t9, 76(a0)
	MEM_W(0x4C, ctx->r4) = ctx->r25;
}
