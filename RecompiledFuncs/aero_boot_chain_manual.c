#include "recomp.h"
#include "funcs.h"

#include <stdio.h>
#include <stdlib.h>

// Boot chain slices `func_802000A0`, `func_80228DE0`, `D_802000F4`, and `static_3_80231A24` are emitted by N64Recomp
// into RecompiledFuncs/*.c; this file keeps `func_D_8020015C` (ELF `D_8020015C` is in config `ignored`) and overlay stubs.

static void func_80231C9C(uint8_t* rdram, recomp_context* ctx) {
	uint64_t hi = 0, lo = 0, result = 0;
	int c1cs = 0;
	(void)hi;
	(void)lo;
	(void)result;
	(void)c1cs;
	// 0x80231c9c..0x80231d04: stores into struct at $v0; base comes from caller (after func_8022970C, $v0 is 0x10000).
	// mips-linux-gnu-objdump -d --start-address=0x80231c9c --stop-address=0x80231d08 build/us/aero.us.splatasm.elf
	ctx->r24 = ADD32(0, 16);
	ctx->r25 = ADD32(0, 1000);
	ctx->r9 = ADD32(0, 4);
	MEM_H(0x18, ctx->r2) = (int16_t)ctx->r14;
	MEM_H(0x20, ctx->r2) = (int16_t)ctx->r15;
	MEM_H(0x22, ctx->r2) = (int16_t)ctx->r3;
	MEM_H(0x24, ctx->r2) = (int16_t)ctx->r3;
	MEM_H(0x26, ctx->r2) = (int16_t)ctx->r4;
	MEM_H(0x28, ctx->r2) = (int16_t)ctx->r5;
	MEM_H(0x2a, ctx->r2) = (int16_t)ctx->r6;
	MEM_H(0x2e, ctx->r2) = (int16_t)ctx->r7;
	MEM_H(0x30, ctx->r2) = (int16_t)ctx->r6;
	MEM_H(0x32, ctx->r2) = (int16_t)ctx->r4;
	MEM_H(0x2c, ctx->r2) = (int16_t)ctx->r4;
	MEM_H(0x34, ctx->r2) = (int16_t)ctx->r5;
	MEM_H(0x3a, ctx->r2) = (int16_t)ctx->r4;
	MEM_H(0x3c, ctx->r2) = (int16_t)ctx->r24;
	MEM_H(0x38, ctx->r2) = (int16_t)ctx->r25;
	MEM_H(0x36, ctx->r2) = (int16_t)ctx->r5;
	MEM_B(0x4a, ctx->r2) = (int8_t)ctx->r7;
	MEM_H(0x3e, ctx->r2) = (int16_t)ctx->r8;
	MEM_H(0x42, ctx->r2) = (int16_t)ctx->r8;
	MEM_H(0x40, ctx->r2) = (int16_t)ctx->r8;
	MEM_H(0x44, ctx->r2) = (int16_t)ctx->r7;
	MEM_H(0x46, ctx->r2) = (int16_t)ctx->r3;
	MEM_H(0x48, ctx->r2) = (int16_t)ctx->r9;
}

// Manual implementation of `func_802001AC` from the splatasm-linked ELF.
// Verified with:
//   mips-linux-gnu-objdump -d --start-address=0x802001AC --stop-address=0x80200304 build/us/aero.us.splatasm.elf
static void func_802001AC(uint8_t* rdram, recomp_context* ctx) {
	// On-cart this uses an indirect jump table loaded from address 0; we implement the equivalent switch directly.
	for (;;) {
		ctx->r9 = ADD32(ctx->r2, 3);
		ctx->r2 = ctx->r9 & ctx->r8; // align(v0+3, -4)
		ctx->r5 = (gpr)(int32_t)MEM_W(0, ctx->r2); // a1
		ctx->r2 = ADD32(ctx->r2, 4);
		if ((uint32_t)ctx->r5 >= 9u) {
			break;
		}

		switch ((uint32_t)ctx->r5) {
			case 0: {
				ctx->r11 = ctx->r2 & 1u;
				ctx->r12 = ctx->r2 & 2u;
				if (ctx->r11 != 0) {
					ctx->r2 = ADD32(ctx->r2, 7);
					ctx->r3 = ADD32(ctx->r2, (gpr)(int32_t)-22);
				} else if (ctx->r12 != 0) {
					ctx->r13 = ADD32(ctx->r2, 7);
					ctx->r2 = ADD32(ctx->r2, 10);
					ctx->r4 = ADD32(ctx->r2, (gpr)(int32_t)-40);
					ctx->r3 = ctx->r4 | 0;
				} else {
					ctx->r2 = ctx->r13 & ctx->r7;
					ctx->r2 = ADD32(ctx->r2, 8);
					ctx->r4 = ctx->r2 | 0;
					ctx->r3 = ctx->r4 | 0;
				}
				ctx->f4.u64 = load_doubleword(rdram, ctx->r3, (gpr)(int32_t)-8);
				ctx->f6.fl = CVT_S_D(ctx->f4.d);
				MEM_W(0x40, ctx->r6) = (int32_t)ctx->f6.u32l;
				break;
			}
			case 1: {
				ctx->r14 = ctx->r2 & 1u;
				ctx->r15 = ctx->r2 & 2u;
				if (ctx->r14 != 0) {
					ctx->r2 = ADD32(ctx->r2, 7);
					ctx->r3 = ADD32(ctx->r2, (gpr)(int32_t)-22);
				} else if (ctx->r15 != 0) {
					ctx->r24 = ADD32(ctx->r2, 7);
					ctx->r2 = ADD32(ctx->r2, 10);
					ctx->r4 = ADD32(ctx->r2, (gpr)(int32_t)-40);
					ctx->r3 = ctx->r4 | 0;
				} else {
					ctx->r2 = ctx->r24 & ctx->r7;
					ctx->r2 = ADD32(ctx->r2, 8);
					ctx->r4 = ctx->r2 | 0;
					ctx->r3 = ctx->r4 | 0;
				}
				ctx->f8.u64 = load_doubleword(rdram, ctx->r3, (gpr)(int32_t)-8);
				ctx->f10.fl = CVT_S_D(ctx->f8.d);
				MEM_W(0x44, ctx->r6) = (int32_t)ctx->f10.u32l;
				break;
			}
			case 2: {
				ctx->r25 = ctx->r2 & 1u;
				ctx->r9 = ctx->r2 & 2u;
				if (ctx->r25 != 0) {
					ctx->r2 = ADD32(ctx->r2, 7);
					ctx->r3 = ADD32(ctx->r2, (gpr)(int32_t)-22);
				} else if (ctx->r9 != 0) {
					ctx->r10 = ADD32(ctx->r2, 7);
					ctx->r2 = ADD32(ctx->r2, 10);
					ctx->r4 = ADD32(ctx->r2, (gpr)(int32_t)-40);
					ctx->r3 = ctx->r4 | 0;
				} else {
					ctx->r2 = ctx->r10 & ctx->r7;
					ctx->r2 = ADD32(ctx->r2, 8);
					ctx->r4 = ctx->r2 | 0;
					ctx->r3 = ctx->r4 | 0;
				}
				ctx->f16.u64 = load_doubleword(rdram, ctx->r3, (gpr)(int32_t)-8);
				ctx->f18.fl = CVT_S_D(ctx->f16.d);
				MEM_W(0x48, ctx->r6) = (int32_t)ctx->f18.u32l;
				break;
			}
			case 3: {
				ctx->r11 = ADD32(ctx->r2, 3);
				ctx->r2 = ctx->r11 & ctx->r8;
				ctx->r12 = (gpr)(int32_t)MEM_W(0, ctx->r2);
				ctx->r2 = ADD32(ctx->r2, 4);
				MEM_W(0x4C, ctx->r6) = (int32_t)ctx->r12;
				break;
			}
			default:
				// Other cases are present in the indirect table but are not needed for this slice's stores.
				break;
		}
	}

	// .L802002E8: call func_80231A24 (boot tail), then return to caller.
	ctx->r4 = ADD32(S32(0x0 << 16), 0x0);
	ctx->r31 = (gpr)(int32_t)0x802002F4u;
	static_3_80231A24(rdram, ctx);
}

RECOMP_FUNC void func_D_8020015C(uint8_t* rdram, recomp_context* ctx) {
	uint64_t hi = 0, lo = 0, result = 0;
	int c1cs = 0;
	(void)hi;
	(void)lo;
	(void)result;
	(void)c1cs;
	(void)rdram;

	// 0x8020015C..0x80200300 from splatasm ELF.
	ctx->r29 = ADD32(ctx->r29, -0x20);
	MEM_W(0x20, ctx->r29) = ctx->r4;
	const gpr t6_in = MEM_HU(0x22, ctx->r29);
	MEM_W(0x14, ctx->r29) = ctx->r31;
	MEM_W(0x24, ctx->r29) = ctx->r5;
	MEM_W(0x28, ctx->r29) = ctx->r6;
	MEM_W(0x2C, ctx->r29) = ctx->r7;

	if ((int32_t)(int16_t)(uint16_t)t6_in > 0) {
		ctx->r4 = ADD32(S32(0x0 << 16), 0x0);
		ctx->r5 = ADD32(S32(0x0 << 16), 0x0);
		ctx->r6 = ADD32(0, 0x52);
		ctx->r31 = (gpr)(int32_t)0x80200194u;
		MEM_H(0x22, ctx->r29) = (int16_t)(uint16_t)t6_in;
		func_80231C9C(rdram, ctx);
	}

	ctx->r15 = MEM_HU(0x22, ctx->r29);
	ctx->r24 = S32(ctx->r15 << 2);
	ctx->r24 = ADD32(ctx->r24, ctx->r15);
	ctx->r24 = S32(ctx->r24 << 4);

	ctx->r25 = ADD32(S32(0x0 << 16), 0x0);
	ctx->r6 = ADD32(ctx->r24, ctx->r25); // a2
	ctx->r2 = ADD32(ctx->r29, 0x24);
	ctx->r8 = ADD32(0, (gpr)(int32_t)-4);
	ctx->r7 = ADD32(0, (gpr)(int32_t)-8);

	func_802001AC(rdram, ctx);

	ctx->r31 = MEM_W(0x14, ctx->r29);
	ctx->r29 = ADD32(ctx->r29, 0x20);
}

RECOMP_FUNC void aero_overlay_stub_8023CE80(uint8_t* rdram, recomp_context* ctx) {
	uint64_t hi = 0, lo = 0, result = 0;
	int c1cs = 0;
	(void)hi;
	(void)lo;
	(void)result;
	(void)c1cs;
	(void)rdram;
	if (getenv("AERO_TRACE_BOOT") != NULL) {
		fprintf(stderr, "[Aero64][Trace][Boot] enter aero_overlay_stub_8023CE80 (replace with N64Recomp func_8023CE80)\n");
	}
	(void)ctx;
}

RECOMP_FUNC void aero_overlay_stub_80237E10(uint8_t* rdram, recomp_context* ctx) {
	uint64_t hi = 0, lo = 0, result = 0;
	int c1cs = 0;
	(void)hi;
	(void)lo;
	(void)result;
	(void)c1cs;
	(void)rdram;
	if (getenv("AERO_TRACE_BOOT") != NULL) {
		fprintf(stderr, "[Aero64][Trace][Boot] enter aero_overlay_stub_80237E10 (replace with N64Recomp func_80237E10)\n");
	}
	(void)ctx;
}

RECOMP_FUNC void aero_overlay_stub_8023F020(uint8_t* rdram, recomp_context* ctx) {
	uint64_t hi = 0, lo = 0, result = 0;
	int c1cs = 0;
	(void)hi;
	(void)lo;
	(void)result;
	(void)c1cs;
	(void)rdram;
	if (getenv("AERO_TRACE_BOOT") != NULL) {
		fprintf(stderr, "[Aero64][Trace][Boot] enter aero_overlay_stub_8023F020 (replace with N64Recomp func_8023F020)\n");
	}
	(void)ctx;
}

RECOMP_FUNC void aero_overlay_stub_80230F68(uint8_t* rdram, recomp_context* ctx) {
	uint64_t hi = 0, lo = 0, result = 0;
	int c1cs = 0;
	(void)hi;
	(void)lo;
	(void)result;
	(void)c1cs;
	(void)rdram;
	if (getenv("AERO_TRACE_BOOT") != NULL) {
		fprintf(stderr, "[Aero64][Trace][Boot] enter aero_overlay_stub_80230F68 (replace with N64Recomp func_80230F68)\n");
	}
	(void)ctx;
}
