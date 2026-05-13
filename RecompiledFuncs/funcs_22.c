#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802C9B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C9BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C9BF0: jal         0x8029177C
    // 0x802C9BF4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_8029177C(rdram, ctx);
        goto after_0;
    // 0x802C9BF4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x802C9BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C9BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C9C00: jr          $ra
    // 0x802C9C04: nop

    return;
    // 0x802C9C04: nop

;}
RECOMP_FUNC void D_802C63F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C6470: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802C6474: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x802C6478: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    // 0x802C647C: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x802C6480: multu       $t6, $a0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C6484: ori         $at, $zero, 0xEA60
    ctx->r1 = 0 | 0XEA60;
    // 0x802C6488: lw          $t3, 0x18($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X18);
    // 0x802C648C: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x802C6490: lw          $t5, 0x14($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X14);
    // 0x802C6494: lw          $t9, 0xC($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XC);
    // 0x802C6498: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802C649C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802C64A0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802C64A4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x802C64A8: mflo        $v1
    ctx->r3 = lo;
    // 0x802C64AC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802C64B0: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x802C64B4: multu       $t1, $at
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C64B8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802C64BC: ori         $at, $at, 0x86A0
    ctx->r1 = ctx->r1 | 0X86A0;
    // 0x802C64C0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802C64C4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x802C64C8: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x802C64CC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x802C64D0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802C64D4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x802C64D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802C64DC: mflo        $t2
    ctx->r10 = lo;
    // 0x802C64E0: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x802C64E4: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x802C64E8: multu       $t3, $a0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C64EC: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x802C64F0: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x802C64F4: mflo        $t4
    ctx->r12 = lo;
    // 0x802C64F8: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x802C64FC: nop

    // 0x802C6500: multu       $t5, $at
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C6504: mflo        $t6
    ctx->r14 = lo;
    // 0x802C6508: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x802C650C: jr          $ra
    // 0x802C6510: nop

    return;
    // 0x802C6510: nop

;}
RECOMP_FUNC void D_802E9C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9C84: jr          $ra
    // 0x802E9C88: lbu         $v0, 0x19A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19A);
    return;
    // 0x802E9C88: lbu         $v0, 0x19A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19A);
;}
RECOMP_FUNC void D_802D43F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D4474: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802D4478: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802D447C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D4480: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x802D4484: bltz        $a1, L_802D4498
    if (SIGNED(ctx->r5) < 0) {
        // 0x802D4488: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_802D4498;
    }
    // 0x802D4488: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802D448C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x802D4490: bne         $at, $zero, L_802D44B0
    if (ctx->r1 != 0) {
        // 0x802D4494: sll         $t6, $a3, 2
        ctx->r14 = S32(ctx->r7 << 2);
            goto L_802D44B0;
    }
    // 0x802D4494: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
L_802D4498:
    // 0x802D4498: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D449C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D44A0: jal         0x80231A24
    // 0x802D44A4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D44A4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x802D44A8: b           L_802D4530
    // 0x802D44AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802D4530;
    // 0x802D44AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802D44B0:
    // 0x802D44B0: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x802D44B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D44B8: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x802D44BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D44C0: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x802D44C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D44C8: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x802D44CC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802D44D0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802D44D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D44D8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802D44DC: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x802D44E0: jal         0x80304C4C
    // 0x802D44E4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    static_3_80304C4C(rdram, ctx);
        goto after_1;
    // 0x802D44E4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x802D44E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D44EC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D44F0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802D44F4: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802D44F8: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802D44FC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802D4500: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x802D4504: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802D4508: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802D450C: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802D4510: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x802D4514: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802D4518: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802D451C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802D4520: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802D4524: jal         0x802CF27C
    // 0x802D4528: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    static_3_802CF27C(rdram, ctx);
        goto after_2;
    // 0x802D4528: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802D452C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802D4530:
    // 0x802D4530: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802D4534: jr          $ra
    // 0x802D4538: nop

    return;
    // 0x802D4538: nop

;}
RECOMP_FUNC void D_802ED028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED0A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ED0AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED0B0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ED0B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ED0B8: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x802ED0BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ED0C0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ED0C4: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x802ED0C8: addiu       $t7, $zero, 0x199
    ctx->r15 = ADD32(0, 0X199);
    // 0x802ED0CC: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x802ED0D0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ED0D4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802ED0D8: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ED0DC: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802ED0E0: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ED0E4: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ED0E8: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ED0EC: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ED0F0: sb          $t0, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r8;
    // 0x802ED0F4: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ED0F8: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ED0FC: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802ED100: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802ED104: jr          $ra
    // 0x802ED108: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802ED108: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_802E8B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8B88: jr          $ra
    // 0x802E8B8C: lbu         $v0, 0x1C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1C);
    return;
    // 0x802E8B8C: lbu         $v0, 0x1C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1C);
;}
RECOMP_FUNC void D_80282E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282EE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80282EEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80282EF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80282EF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282EF8: beq         $a0, $zero, L_80282F78
    if (ctx->r4 == 0) {
        // 0x80282EFC: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80282F78;
    }
    // 0x80282EFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80282F00: addiu       $a0, $a0, 0x14A0
    ctx->r4 = ADD32(ctx->r4, 0X14A0);
    // 0x80282F04: jal         0x8031DD60
    // 0x80282F08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DD60(rdram, ctx);
        goto after_0;
    // 0x80282F08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80282F0C: addiu       $a0, $s0, 0x13B0
    ctx->r4 = ADD32(ctx->r16, 0X13B0);
    // 0x80282F10: jal         0x8031DB04
    // 0x80282F14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DB04(rdram, ctx);
        goto after_1;
    // 0x80282F14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80282F18: addiu       $a0, $s0, 0x12C0
    ctx->r4 = ADD32(ctx->r16, 0X12C0);
    // 0x80282F1C: jal         0x8031D9D8
    // 0x80282F20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031D9D8(rdram, ctx);
        goto after_2;
    // 0x80282F20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80282F24: addiu       $a0, $s0, 0x11D0
    ctx->r4 = ADD32(ctx->r16, 0X11D0);
    // 0x80282F28: jal         0x8031D8A4
    // 0x80282F2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031D8A4(rdram, ctx);
        goto after_3;
    // 0x80282F2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80282F30: addiu       $a0, $s0, 0xC30
    ctx->r4 = ADD32(ctx->r16, 0XC30);
    // 0x80282F34: jal         0x8031E150
    // 0x80282F38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031E150(rdram, ctx);
        goto after_4;
    // 0x80282F38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x80282F3C: addiu       $a0, $s0, 0xB40
    ctx->r4 = ADD32(ctx->r16, 0XB40);
    // 0x80282F40: jal         0x8031DC30
    // 0x80282F44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DC30(rdram, ctx);
        goto after_5;
    // 0x80282F44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80282F48: addiu       $a0, $s0, 0x5A0
    ctx->r4 = ADD32(ctx->r16, 0X5A0);
    // 0x80282F4C: jal         0x8031E004
    // 0x80282F50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031E004(rdram, ctx);
        goto after_6;
    // 0x80282F50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80282F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80282F58: jal         0x8031DEAC
    // 0x80282F5C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DEAC(rdram, ctx);
        goto after_7;
    // 0x80282F5C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80282F60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80282F64: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80282F68: beql        $t7, $zero, L_80282F7C
    if (ctx->r15 == 0) {
        // 0x80282F6C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80282F7C;
    }
    goto skip_0;
    // 0x80282F6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80282F70: jal         0x802C681C
    // 0x80282F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_8;
    // 0x80282F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80282F78:
    // 0x80282F78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80282F7C:
    // 0x80282F7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80282F80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282F84: jr          $ra
    // 0x80282F88: nop

    return;
    // 0x80282F88: nop

;}
RECOMP_FUNC void D_8029D548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D5C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029D5CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029D5D0: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8029D5D4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8029D5D8: beql        $a1, $at, L_8029D5EC
    if (ctx->r5 == ctx->r1) {
        // 0x8029D5DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029D5EC;
    }
    goto skip_0;
    // 0x8029D5DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8029D5E0: jal         0x8021BAE0
    // 0x8029D5E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x8029D5E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8029D5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029D5EC:
    // 0x8029D5EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029D5F0: jr          $ra
    // 0x8029D5F4: nop

    return;
    // 0x8029D5F4: nop

;}
RECOMP_FUNC void D_8023EEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023EEDC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023EEE0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023EEE4: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8023EEE8: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x8023EEEC: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8023EEF0:
    // 0x8023EEF0: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8023EEF4: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8023EEF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023EEFC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8023EF00: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8023EF04: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023EF08: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8023EF0C: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x8023EF10: bne         $at, $zero, L_8023EEF0
    if (ctx->r1 != 0) {
        // 0x8023EF14: sw          $t0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r8;
            goto L_8023EEF0;
    }
    // 0x8023EF14: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
    // 0x8023EF18: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8023EF1C: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x8023EF20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8023EF24: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023EF28: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8023EF2C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8023EF30: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8023EF34: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8023EF38: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x8023EF3C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8023EF40: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8023EF44: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x8023EF48: sb          $t2, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r10;
    // 0x8023EF4C: sb          $t3, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r11;
    // 0x8023EF50: sb          $t4, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r12;
    // 0x8023EF54: sb          $t5, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r13;
    // 0x8023EF58: sh          $t6, 0x8($sp)
    MEM_H(0X8, ctx->r29) = ctx->r14;
    // 0x8023EF5C: sb          $t7, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r15;
    // 0x8023EF60: sb          $t8, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r24;
    // 0x8023EF64: blez        $t9, L_8023EFB4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8023EF68: sw          $zero, 0x0($sp)
        MEM_W(0X0, ctx->r29) = 0;
            goto L_8023EFB4;
    }
    // 0x8023EF68: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8023EF6C:
    // 0x8023EF6C: addiu       $t1, $sp, 0x4
    ctx->r9 = ADD32(ctx->r29, 0X4);
    // 0x8023EF70: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8023EF74: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8023EF78: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023EF7C: swl         $at, 0x0($t0)
    do_swl(rdram, 0X0, ctx->r8, ctx->r1);
    // 0x8023EF80: swr         $at, 0x3($t0)
    do_swr(rdram, 0X3, ctx->r8, ctx->r1);
    // 0x8023EF84: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8023EF88: swl         $t3, 0x4($t0)
    do_swl(rdram, 0X4, ctx->r8, ctx->r11);
    // 0x8023EF8C: swr         $t3, 0x7($t0)
    do_swr(rdram, 0X7, ctx->r8, ctx->r11);
    // 0x8023EF90: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8023EF94: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8023EF98: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8023EF9C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8023EFA0: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8023EFA4: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8023EFA8: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x8023EFAC: bne         $at, $zero, L_8023EF6C
    if (ctx->r1 != 0) {
        // 0x8023EFB0: sw          $t5, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r13;
            goto L_8023EF6C;
    }
    // 0x8023EFB0: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
L_8023EFB4:
    // 0x8023EFB4: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8023EFB8: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x8023EFBC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8023EFC0: jr          $ra
    // 0x8023EFC4: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
    return;
    // 0x8023EFC4: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
;}
RECOMP_FUNC void D_802225CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802225CC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802225D0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802225D4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802225D8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802225DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802225E0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802225E4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802225E8: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x802225EC: ori         $t8, $t8, 0x3C0
    ctx->r24 = ctx->r24 | 0X3C0;
    // 0x802225F0: lui         $t7, 0xED00
    ctx->r15 = S32(0XED00 << 16);
    // 0x802225F4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802225F8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802225FC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222600: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x80222604: lui         $t8, 0xF0A
    ctx->r24 = S32(0XF0A << 16);
    // 0x80222608: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8022260C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222610: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222614: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222618: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022261C: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80222620: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80222624: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222628: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8022262C: ori         $t8, $t8, 0x4000
    ctx->r24 = ctx->r24 | 0X4000;
    // 0x80222630: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80222634: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222638: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022263C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80222640: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x80222644: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222648: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022264C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222650: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222654: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222658: lui         $t8, 0x30
    ctx->r24 = S32(0X30 << 16);
    // 0x8022265C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80222660: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222664: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222668: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8022266C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80222670: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222674: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x80222678: ori         $t8, $t8, 0xFFFC
    ctx->r24 = ctx->r24 | 0XFFFC;
    // 0x8022267C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222680: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222684: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222688: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8022268C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222690: lui         $t7, 0xF700
    ctx->r15 = S32(0XF700 << 16);
    // 0x80222694: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222698: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8022269C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802226A0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802226A4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802226A8: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x802226AC: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x802226B0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802226B4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802226B8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802226BC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802226C0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802226C4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802226C8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802226CC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802226D0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802226D4: jal         0x802375F0
    // 0x802226D8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x802226D8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x802226DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802226E0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802226E4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802226E8: sw          $v0, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r2;
    // 0x802226EC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802226F0: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x802226F4: lui         $t6, 0xF64F
    ctx->r14 = S32(0XF64F << 16);
    // 0x802226F8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x802226FC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80222700: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222704: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222708: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022270C: ori         $t6, $t6, 0xC3BC
    ctx->r14 = ctx->r14 | 0XC3BC;
    // 0x80222710: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80222714: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80222718: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8022271C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80222720: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222724: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222728: lui         $t9, 0xFF10
    ctx->r25 = S32(0XFF10 << 16);
    // 0x8022272C: ori         $t9, $t9, 0x13F
    ctx->r25 = ctx->r25 | 0X13F;
    // 0x80222730: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80222734: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80222738: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8022273C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222740: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222744: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80222748: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8022274C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80222750: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80222754: jal         0x802375F0
    // 0x80222758: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x80222758: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022275C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80222760: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80222764: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80222768: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x8022276C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222770: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x80222774: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x80222778: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8022277C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222780: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222784: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80222788: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022278C: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x80222790: lui         $t9, 0x10
    ctx->r25 = S32(0X10 << 16);
    // 0x80222794: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80222798: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8022279C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x802227A0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802227A4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802227A8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802227AC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802227B0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802227B4: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802227B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802227BC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802227C0: jr          $ra
    // 0x802227C4: nop

    return;
    // 0x802227C4: nop

;}
RECOMP_FUNC void D_8022FB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FB8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FB90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FB94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8022FB98: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8022FB9C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8022FBA0: jal         0x8022FB4C
    // 0x8022FBA4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    static_3_8022FB4C(rdram, ctx);
        goto after_0;
    // 0x8022FBA4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8022FBA8: bne         $v0, $zero, L_8022FBC8
    if (ctx->r2 != 0) {
        // 0x8022FBAC: addiu       $v1, $sp, 0x24
        ctx->r3 = ADD32(ctx->r29, 0X24);
            goto L_8022FBC8;
    }
    // 0x8022FBAC: addiu       $v1, $sp, 0x24
    ctx->r3 = ADD32(ctx->r29, 0X24);
    // 0x8022FBB0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022FBB4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022FBB8: jal         0x80231A24
    // 0x8022FBBC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022FBBC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8022FBC0: b           L_8022FC80
    // 0x8022FBC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022FC80;
    // 0x8022FBC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022FBC8:
    // 0x8022FBC8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8022FBCC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8022FBD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022FBD4: addiu       $a0, $zero, -0x4
    ctx->r4 = ADD32(0, -0X4);
L_8022FBD8:
    // 0x8022FBD8: addiu       $t6, $v1, 0x3
    ctx->r14 = ADD32(ctx->r3, 0X3);
    // 0x8022FBDC: and         $v1, $t6, $a0
    ctx->r3 = ctx->r14 & ctx->r4;
    // 0x8022FBE0: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x8022FBE4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022FBE8: addiu       $t7, $v1, 0x3
    ctx->r15 = ADD32(ctx->r3, 0X3);
    // 0x8022FBEC: beql        $a1, $zero, L_8022FC80
    if (ctx->r5 == 0) {
        // 0x8022FBF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022FC80;
    }
    goto skip_0;
    // 0x8022FBF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022FBF4: beql        $a1, $a2, L_8022FC18
    if (ctx->r5 == ctx->r6) {
        // 0x8022FBF8: and         $v1, $t7, $a0
        ctx->r3 = ctx->r15 & ctx->r4;
            goto L_8022FC18;
    }
    goto skip_1;
    // 0x8022FBF8: and         $v1, $t7, $a0
    ctx->r3 = ctx->r15 & ctx->r4;
    skip_1:
    // 0x8022FBFC: beq         $a1, $a3, L_8022FC28
    if (ctx->r5 == ctx->r7) {
        // 0x8022FC00: addiu       $t9, $v1, 0x3
        ctx->r25 = ADD32(ctx->r3, 0X3);
            goto L_8022FC28;
    }
    // 0x8022FC00: addiu       $t9, $v1, 0x3
    ctx->r25 = ADD32(ctx->r3, 0X3);
    // 0x8022FC04: beq         $a1, $t0, L_8022FC50
    if (ctx->r5 == ctx->r8) {
        // 0x8022FC08: addiu       $t7, $v1, 0x3
        ctx->r15 = ADD32(ctx->r3, 0X3);
            goto L_8022FC50;
    }
    // 0x8022FC08: addiu       $t7, $v1, 0x3
    ctx->r15 = ADD32(ctx->r3, 0X3);
    // 0x8022FC0C: b           L_8022FC74
    // 0x8022FC10: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
        goto L_8022FC74;
    // 0x8022FC10: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022FC14: and         $v1, $t7, $a0
    ctx->r3 = ctx->r15 & ctx->r4;
L_8022FC18:
    // 0x8022FC18: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8022FC1C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8022FC20: b           L_8022FBD8
    // 0x8022FC24: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
        goto L_8022FBD8;
    // 0x8022FC24: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
L_8022FC28:
    // 0x8022FC28: and         $v1, $t9, $a0
    ctx->r3 = ctx->r25 & ctx->r4;
    // 0x8022FC2C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8022FC30: lw          $t1, 0x1C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1C);
    // 0x8022FC34: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8022FC38: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x8022FC3C: nor         $t5, $t4, $zero
    ctx->r13 = ~(ctx->r12 | 0);
    // 0x8022FC40: and         $t6, $t1, $t5
    ctx->r14 = ctx->r9 & ctx->r13;
    // 0x8022FC44: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x8022FC48: b           L_8022FBD8
    // 0x8022FC4C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
        goto L_8022FBD8;
    // 0x8022FC4C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8022FC50:
    // 0x8022FC50: and         $v1, $t7, $a0
    ctx->r3 = ctx->r15 & ctx->r4;
    // 0x8022FC54: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8022FC58: lw          $t8, 0x1C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1C);
    // 0x8022FC5C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8022FC60: sllv        $t2, $t3, $t9
    ctx->r10 = S32(ctx->r11 << (ctx->r25 & 31));
    // 0x8022FC64: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8022FC68: sw          $t4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r12;
    // 0x8022FC6C: b           L_8022FBD8
    // 0x8022FC70: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
        goto L_8022FBD8;
    // 0x8022FC70: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8022FC74:
    // 0x8022FC74: jal         0x80231A24
    // 0x8022FC78: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022FC78: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x8022FC7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022FC80:
    // 0x8022FC80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022FC84: jr          $ra
    // 0x8022FC88: nop

    return;
    // 0x8022FC88: nop

;}
RECOMP_FUNC void D_802CC9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCA74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CCA78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CCA7C: lbu         $t7, 0xA9($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XA9);
    // 0x802CCA80: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CCA84: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802CCA88: beq         $t7, $zero, L_802CCAB8
    if (ctx->r15 == 0) {
        // 0x802CCA8C: sw          $t6, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r14;
            goto L_802CCAB8;
    }
    // 0x802CCA8C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802CCA90: lbu         $t8, 0x716C($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X716C);
    // 0x802CCA94: beql        $t8, $zero, L_802CCABC
    if (ctx->r24 == 0) {
        // 0x802CCA98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802CCABC;
    }
    goto skip_0;
    // 0x802CCA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802CCA9C: lbu         $t9, 0xA8($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XA8);
    // 0x802CCAA0: beql        $t9, $zero, L_802CCABC
    if (ctx->r25 == 0) {
        // 0x802CCAA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802CCABC;
    }
    goto skip_1;
    // 0x802CCAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802CCAA8: jal         0x802FCAB0
    // 0x802CCAAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802FCAB0(rdram, ctx);
        goto after_0;
    // 0x802CCAAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802CCAB0: jal         0x802FCDC4
    // 0x802CCAB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_802FCDC4(rdram, ctx);
        goto after_1;
    // 0x802CCAB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_802CCAB8:
    // 0x802CCAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802CCABC:
    // 0x802CCABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CCAC0: jr          $ra
    // 0x802CCAC4: nop

    return;
    // 0x802CCAC4: nop

;}
RECOMP_FUNC void D_8020489C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020489C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802048A0: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x802048A4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802048A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802048AC: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x802048B0: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x802048B4: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x802048B8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x802048BC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x802048C0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802048C4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802048C8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802048CC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802048D0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802048D4: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x802048D8: jal         0x80236F80
    // 0x802048DC: addiu       $a0, $zero, 0x5622
    ctx->r4 = ADD32(0, 0X5622);
    static_3_80236F80(rdram, ctx);
        goto after_0;
    // 0x802048DC: addiu       $a0, $zero, 0x5622
    ctx->r4 = ADD32(0, 0X5622);
    after_0:
    // 0x802048E0: sw          $v0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r2;
    // 0x802048E4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802048E8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802048EC: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x802048F0: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x802048F4: bne         $v1, $zero, L_80204928
    if (ctx->r3 != 0) {
        // 0x802048F8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80204928;
    }
    // 0x802048F8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802048FC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80204900: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80204904: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80204908: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020490C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80204910: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80204914: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x80204918: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8020491C: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80204920: b           L_80204994
    // 0x80204924: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
        goto L_80204994;
    // 0x80204924: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_80204928:
    // 0x80204928: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020492C: bne         $v1, $at, L_80204964
    if (ctx->r3 != ctx->r1) {
        // 0x80204930: addiu       $s7, $zero, 0x2
        ctx->r23 = ADD32(0, 0X2);
            goto L_80204964;
    }
    // 0x80204930: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x80204934: lw          $t8, 0x18($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X18);
    // 0x80204938: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020493C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80204940: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80204944: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80204948: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020494C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80204950: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x80204954: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80204958: div.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8020495C: b           L_80204994
    // 0x80204960: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
        goto L_80204994;
    // 0x80204960: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_80204964:
    // 0x80204964: bnel        $s7, $v1, L_80204998
    if (ctx->r23 != ctx->r3) {
        // 0x80204968: lwc1        $f0, 0x40($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80204998;
    }
    goto skip_0;
    // 0x80204968: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x8020496C: lw          $t9, 0x18($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X18);
    // 0x80204970: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80204974: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80204978: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020497C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80204980: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80204984: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80204988: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8020498C: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80204990: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_80204994:
    // 0x80204994: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
L_80204998:
    // 0x80204998: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8020499C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802049A0: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x802049A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802049A8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x802049AC: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x802049B0: nop

    // 0x802049B4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802049B8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x802049BC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x802049C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802049C4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802049C8: nop

    // 0x802049CC: bc1fl       L_802049E0
    if (!c1cs) {
        // 0x802049D0: andi        $t3, $v0, 0xF
        ctx->r11 = ctx->r2 & 0XF;
            goto L_802049E0;
    }
    goto skip_1;
    // 0x802049D0: andi        $t3, $v0, 0xF
    ctx->r11 = ctx->r2 & 0XF;
    skip_1:
    // 0x802049D4: addiu       $v0, $t1, 0x1
    ctx->r2 = ADD32(ctx->r9, 0X1);
    // 0x802049D8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802049DC: andi        $t3, $v0, 0xF
    ctx->r11 = ctx->r2 & 0XF;
L_802049E0:
    // 0x802049E0: beq         $t3, $zero, L_802049F4
    if (ctx->r11 == 0) {
        // 0x802049E4: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_802049F4;
    }
    // 0x802049E4: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x802049E8: and         $t4, $v0, $at
    ctx->r12 = ctx->r2 & ctx->r1;
    // 0x802049EC: addiu       $v0, $t4, 0x10
    ctx->r2 = ADD32(ctx->r12, 0X10);
    // 0x802049F0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_802049F4:
    // 0x802049F4: addiu       $t6, $v0, -0x10
    ctx->r14 = ADD32(ctx->r2, -0X10);
    // 0x802049F8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802049FC: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x80204A00: addiu       $t7, $v0, 0x74
    ctx->r15 = ADD32(ctx->r2, 0X74);
    // 0x80204A04: jal         0x802371AC
    // 0x80204A08: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
    static_3_802371AC(rdram, ctx);
        goto after_1;
    // 0x80204A08: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
    after_1:
    // 0x80204A0C: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80204A10: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80204A14: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80204A18: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80204A1C: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80204A20: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x80204A24: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x80204A28: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80204A2C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80204A30: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x80204A34: lhu         $t0, 0x3C($s5)
    ctx->r8 = MEM_HU(ctx->r21, 0X3C);
    // 0x80204A38: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80204A3C: blezl       $t1, L_80204A9C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80204A40: sll         $s1, $s2, 2
        ctx->r17 = S32(ctx->r18 << 2);
            goto L_80204A9C;
    }
    goto skip_2;
    // 0x80204A40: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
    skip_2:
    // 0x80204A44: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
L_80204A48:
    // 0x80204A48: addu        $a1, $s1, $t2
    ctx->r5 = ADD32(ctx->r17, ctx->r10);
    // 0x80204A4C: jal         0x80237150
    // 0x80204A50: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    static_3_80237150(rdram, ctx);
        goto after_2;
    // 0x80204A50: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    after_2:
    // 0x80204A54: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x80204A58: addiu       $t3, $zero, 0x800
    ctx->r11 = ADD32(0, 0X800);
    // 0x80204A5C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80204A60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204A68: jal         0x80236CD0
    // 0x80204A6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_3;
    // 0x80204A6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80204A70: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80204A74: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80204A78: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x80204A7C: sw          $v0, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r2;
    // 0x80204A80: lhu         $t6, 0x3C($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X3C);
    // 0x80204A84: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80204A88: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80204A8C: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80204A90: bnel        $at, $zero, L_80204A48
    if (ctx->r1 != 0) {
        // 0x80204A94: lw          $t2, 0x0($s3)
        ctx->r10 = MEM_W(ctx->r19, 0X0);
            goto L_80204A48;
    }
    goto skip_3;
    // 0x80204A94: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    skip_3:
    // 0x80204A98: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
L_80204A9C:
    // 0x80204A9C: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x80204AA0: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x80204AA4: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x80204AA8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80204AAC: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x80204AB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204AB8: jal         0x80236CD0
    // 0x80204ABC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_4;
    // 0x80204ABC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80204AC0: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x80204AC4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80204AC8: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80204ACC: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x80204AD0: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80204AD4: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x80204AD8: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
L_80204ADC:
    // 0x80204ADC: lhu         $t1, 0x38($s5)
    ctx->r9 = MEM_HU(ctx->r21, 0X38);
    // 0x80204AE0: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x80204AE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204AE8: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80204AEC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80204AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204AF4: jal         0x80236CD0
    // 0x80204AF8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_5;
    // 0x80204AF8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80204AFC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80204B00: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80204B04: bne         $at, $zero, L_80204ADC
    if (ctx->r1 != 0) {
        // 0x80204B08: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_80204ADC;
    }
    // 0x80204B08: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x80204B0C: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80204B10: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80204B14: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80204B18: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_80204B1C:
    // 0x80204B1C: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x80204B20: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80204B24: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80204B28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204B30: jal         0x80236CD0
    // 0x80204B34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_6;
    // 0x80204B34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x80204B38: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80204B3C: sh          $s7, 0x60($v0)
    MEM_H(0X60, ctx->r2) = ctx->r23;
    // 0x80204B40: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80204B44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80204B4C: sw          $v1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r3;
    // 0x80204B50: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x80204B54: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x80204B58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80204B5C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80204B60: jal         0x80236CD0
    // 0x80204B64: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    static_3_80236CD0(rdram, ctx);
        goto after_7;
    // 0x80204B64: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_7:
    // 0x80204B68: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x80204B6C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80204B70: bne         $s0, $s1, L_80204B1C
    if (ctx->r16 != ctx->r17) {
        // 0x80204B74: sw          $v0, 0x0($t6)
        MEM_W(0X0, ctx->r14) = ctx->r2;
            goto L_80204B1C;
    }
    // 0x80204B74: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x80204B78: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204B7C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80204B80: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80204B84: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204B88: jal         0x802371E0
    // 0x80204B8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802371E0(rdram, ctx);
        goto after_8;
    // 0x80204B8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80204B90: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204B94: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80204B98: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80204B9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204BA0: jal         0x802371E0
    // 0x80204BA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802371E0(rdram, ctx);
        goto after_9;
    // 0x80204BA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80204BA8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204BAC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80204BB0: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80204BB4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204BB8: jal         0x802371E0
    // 0x80204BBC: lhu         $a2, 0x3C($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X3C);
    static_3_802371E0(rdram, ctx);
        goto after_10;
    // 0x80204BBC: lhu         $a2, 0x3C($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X3C);
    after_10:
    // 0x80204BC0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204BC4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80204BC8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80204BCC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204BD0: jal         0x802371E0
    // 0x80204BD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802371E0(rdram, ctx);
        goto after_11;
    // 0x80204BD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x80204BD8: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80204BDC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80204BE0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80204BE4: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80204BE8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80204BEC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80204BF0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80204BF4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80204BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80204BFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80204C00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80204C04: jal         0x80237210
    // 0x80204C08: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    static_3_80237210(rdram, ctx);
        goto after_12;
    // 0x80204C08: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_12:
    // 0x80204C0C: jal         0x80237360
    // 0x80204C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237360(rdram, ctx);
        goto after_13;
    // 0x80204C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80204C14: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80204C18: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80204C1C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80204C20: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80204C24: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80204C28: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80204C2C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80204C30: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80204C34: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x80204C38: jr          $ra
    // 0x80204C3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80204C3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_80204DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80204DBC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80204DC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80204DC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80204DC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80204DCC: jal         0x8020523C
    // 0x80204DD0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    static_3_8020523C(rdram, ctx);
        goto after_0;
    // 0x80204DD0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x80204DD4: jal         0x802375F0
    // 0x80204DD8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x80204DD8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x80204DDC: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x80204DE0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80204DE4: beq         $v1, $zero, L_80204E00
    if (ctx->r3 == 0) {
        // 0x80204DE8: nop
    
            goto L_80204E00;
    }
    // 0x80204DE8: nop

    // 0x80204DEC: lh          $a1, 0x4($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X4);
    // 0x80204DF0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80204DF4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80204DF8: jal         0x80237670
    // 0x80204DFC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    static_3_80237670(rdram, ctx);
        goto after_2;
    // 0x80204DFC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
L_80204E00:
    // 0x80204E00: jal         0x80237720
    // 0x80204E04: nop

    static_3_80237720(rdram, ctx);
        goto after_3;
    // 0x80204E04: nop

    after_3:
    // 0x80204E08: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80204E0C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80204E10: srl         $t8, $v0, 2
    ctx->r24 = S32(U32(ctx->r2) >> 2);
    // 0x80204E14: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80204E18: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80204E1C: addiu       $t0, $t9, 0x74
    ctx->r8 = ADD32(ctx->r25, 0X74);
    // 0x80204E20: andi        $t1, $t0, 0xFFF0
    ctx->r9 = ctx->r8 & 0XFFF0;
    // 0x80204E24: sh          $t1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r9;
    // 0x80204E28: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80204E2C: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x80204E30: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80204E34: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204E38: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80204E3C: beq         $at, $zero, L_80204E4C
    if (ctx->r1 == 0) {
        // 0x80204E40: nop
    
            goto L_80204E4C;
    }
    // 0x80204E40: nop

    // 0x80204E44: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x80204E48: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
L_80204E4C:
    // 0x80204E4C: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x80204E50: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80204E54: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80204E58: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80204E5C: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x80204E60: jal         0x80237878
    // 0x80204E64: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80237878(rdram, ctx);
        goto after_4;
    // 0x80204E64: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_4:
    // 0x80204E68: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80204E6C: lhu         $t4, 0x0($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X0);
    // 0x80204E70: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80204E74: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204E78: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80204E7C: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80204E80: beq         $at, $zero, L_80204EA0
    if (ctx->r1 == 0) {
        // 0x80204E84: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_80204EA0;
    }
    // 0x80204E84: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204E88: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80204E8C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80204E90: addiu       $a2, $zero, 0x1AE
    ctx->r6 = ADD32(0, 0X1AE);
    // 0x80204E94: jal         0x80231C9C
    // 0x80204E98: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    static_3_80231C9C(rdram, ctx);
        goto after_5;
    // 0x80204E98: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_5:
    // 0x80204E9C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
L_80204EA0:
    // 0x80204EA0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80204EA4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80204EA8: addiu       $v0, $v0, -0x5180
    ctx->r2 = ADD32(ctx->r2, -0X5180);
    // 0x80204EAC: bne         $t6, $zero, L_80204EBC
    if (ctx->r14 != 0) {
        // 0x80204EB0: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_80204EBC;
    }
    // 0x80204EB0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80204EB4: b           L_80204FAC
    // 0x80204EB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80204FAC;
    // 0x80204EB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80204EBC:
    // 0x80204EBC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80204EC0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80204EC4: addiu       $t8, $s0, 0x60
    ctx->r24 = ADD32(ctx->r16, 0X60);
    // 0x80204EC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80204ECC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80204ED0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80204ED4: sw          $t7, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r15;
    // 0x80204ED8: sw          $t8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r24;
    // 0x80204EDC: sw          $t9, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r25;
    // 0x80204EE0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80204EE4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80204EE8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80204EEC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80204EF0: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x80204EF4: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80204EF8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80204EFC: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80204F00: sw          $t3, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r11;
    // 0x80204F04: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80204F08: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80204F0C: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x80204F10: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80204F14: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x80204F18: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80204F1C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80204F20: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80204F24: subu        $t8, $a3, $t7
    ctx->r24 = SUB32(ctx->r7, ctx->r15);
    // 0x80204F28: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x80204F2C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80204F30: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x80204F34: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80204F38: addiu       $t6, $zero, 0x800
    ctx->r14 = ADD32(0, 0X800);
    // 0x80204F3C: sw          $t0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r8;
    // 0x80204F40: sw          $t1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r9;
    // 0x80204F44: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80204F48: sw          $t3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r11;
    // 0x80204F4C: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x80204F50: sw          $t4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r12;
    // 0x80204F54: sw          $t5, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r13;
    // 0x80204F58: sw          $t6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r14;
    // 0x80204F5C: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80204F60: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x80204F64: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80204F68: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x80204F6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204F70: jal         0x8022D560
    // 0x80204F74: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    static_3_8022D560(rdram, ctx);
        goto after_6;
    // 0x80204F74: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_6:
    // 0x80204F78: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204F7C: jal         0x8022CA28
    // 0x80204F80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8022CA28(rdram, ctx);
        goto after_7;
    // 0x80204F80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_7:
    // 0x80204F84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80204F88: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x80204F8C: jal         0x80236B80
    // 0x80204F90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80236B80(rdram, ctx);
        goto after_8;
    // 0x80204F90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80204F94: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80204F98: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80204F9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80204FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80204FA4: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x80204FA8: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
L_80204FAC:
    // 0x80204FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80204FB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80204FB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80204FB8: jr          $ra
    // 0x80204FBC: nop

    return;
    // 0x80204FBC: nop

;}
RECOMP_FUNC void D_8027F610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F688: lbu         $t6, 0x4E38($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4E38);
    // 0x8027F68C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8027F690: bne         $t6, $zero, L_8027F6A4
    if (ctx->r14 != 0) {
        // 0x8027F694: nop
    
            goto L_8027F6A4;
    }
    // 0x8027F694: nop

    // 0x8027F698: lbu         $t7, 0x3627($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3627);
    // 0x8027F69C: beql        $t7, $zero, L_8027F6B0
    if (ctx->r15 == 0) {
        // 0x8027F6A0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8027F6B0;
    }
    goto skip_0;
    // 0x8027F6A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_0:
L_8027F6A4:
    // 0x8027F6A4: jr          $ra
    // 0x8027F6A8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x8027F6A8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8027F6AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8027F6B0:
    // 0x8027F6B0: jr          $ra
    // 0x8027F6B4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x8027F6B4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void D_802F2890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2910: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802F2914: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802F2918: jr          $ra
    // 0x802F291C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802F291C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802DEEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DEF5C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802DEF60: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802DEF64: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802DEF68: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802DEF6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802DEF70: lbu         $t6, 0x28($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X28);
    // 0x802DEF74: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802DEF78: addiu       $s0, $s1, 0x71C
    ctx->r16 = ADD32(ctx->r17, 0X71C);
    // 0x802DEF7C: beq         $t6, $zero, L_802DEFF4
    if (ctx->r14 == 0) {
        // 0x802DEF80: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_802DEFF4;
    }
    // 0x802DEF80: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802DEF84: sb          $t7, 0x1528($a0)
    MEM_B(0X1528, ctx->r4) = ctx->r15;
    // 0x802DEF88: addiu       $s0, $a0, 0x71C
    ctx->r16 = ADD32(ctx->r4, 0X71C);
    // 0x802DEF8C: jal         0x8030760C
    // 0x802DEF90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8030760C(rdram, ctx);
        goto after_0;
    // 0x802DEF90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802DEF94: addiu       $s2, $s1, 0x70
    ctx->r18 = ADD32(ctx->r17, 0X70);
    // 0x802DEF98: jal         0x802CDA74
    // 0x802DEF9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802CDA74(rdram, ctx);
        goto after_1;
    // 0x802DEF9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x802DEFA0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802DEFA4: jal         0x802CE128
    // 0x802DEFA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802CE128(rdram, ctx);
        goto after_2;
    // 0x802DEFA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x802DEFAC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802DEFB0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802DEFB4: jal         0x802AA498
    // 0x802DEFB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_802AA498(rdram, ctx);
        goto after_3;
    // 0x802DEFB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x802DEFBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802DEFC0: lui         $a2, 0x457D
    ctx->r6 = S32(0X457D << 16);
    // 0x802DEFC4: lui         $a3, 0xC425
    ctx->r7 = S32(0XC425 << 16);
    // 0x802DEFC8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DEFCC: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802DEFD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DEFD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DEFD8: jal         0x80307E5C
    // 0x802DEFDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_80307E5C(rdram, ctx);
        goto after_4;
    // 0x802DEFDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x802DEFE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DEFE4: jal         0x80307E44
    // 0x802DEFE8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80307E44(rdram, ctx);
        goto after_5;
    // 0x802DEFE8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x802DEFEC: b           L_802DF05C
    // 0x802DEFF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
        goto L_802DF05C;
    // 0x802DEFF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_802DEFF4:
    // 0x802DEFF4: jal         0x8030760C
    // 0x802DEFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8030760C(rdram, ctx);
        goto after_6;
    // 0x802DEFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802DEFFC: addiu       $s2, $s1, 0x70
    ctx->r18 = ADD32(ctx->r17, 0X70);
    // 0x802DF000: jal         0x802CDA74
    // 0x802DF004: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802CDA74(rdram, ctx);
        goto after_7;
    // 0x802DF004: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_7:
    // 0x802DF008: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802DF00C: jal         0x802CE128
    // 0x802DF010: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802CE128(rdram, ctx);
        goto after_8;
    // 0x802DF010: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x802DF014: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802DF018: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802DF01C: jal         0x802AA498
    // 0x802DF020: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_802AA498(rdram, ctx);
        goto after_9;
    // 0x802DF020: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x802DF024: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802DF028: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DF02C: lui         $a2, 0x457D
    ctx->r6 = S32(0X457D << 16);
    // 0x802DF030: lui         $a3, 0xC425
    ctx->r7 = S32(0XC425 << 16);
    // 0x802DF034: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF038: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802DF03C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DF044: jal         0x80307E5C
    // 0x802DF048: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_80307E5C(rdram, ctx);
        goto after_10;
    // 0x802DF048: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x802DF04C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF050: jal         0x80307E44
    // 0x802DF054: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    static_3_80307E44(rdram, ctx);
        goto after_11;
    // 0x802DF054: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    after_11:
    // 0x802DF058: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_802DF05C:
    // 0x802DF05C: lui         $a2, 0x4556
    ctx->r6 = S32(0X4556 << 16);
    // 0x802DF060: lui         $a3, 0xC3F2
    ctx->r7 = S32(0XC3F2 << 16);
    // 0x802DF064: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF068: ori         $a2, $a2, 0x1000
    ctx->r6 = ctx->r6 | 0X1000;
    // 0x802DF06C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF070: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DF074: jal         0x80307E5C
    // 0x802DF078: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_80307E5C(rdram, ctx);
        goto after_12;
    // 0x802DF078: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x802DF07C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802DF080: lui         $a2, 0x4510
    ctx->r6 = S32(0X4510 << 16);
    // 0x802DF084: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802DF088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF08C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DF090: lui         $a3, 0xC383
    ctx->r7 = S32(0XC383 << 16);
    // 0x802DF094: jal         0x80307E5C
    // 0x802DF098: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_80307E5C(rdram, ctx);
        goto after_13;
    // 0x802DF098: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x802DF09C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802DF0A0: lui         $a2, 0x44C5
    ctx->r6 = S32(0X44C5 << 16);
    // 0x802DF0A4: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802DF0A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF0AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DF0B0: lui         $a3, 0xC3F9
    ctx->r7 = S32(0XC3F9 << 16);
    // 0x802DF0B4: jal         0x80307E5C
    // 0x802DF0B8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_80307E5C(rdram, ctx);
        goto after_14;
    // 0x802DF0B8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_14:
    // 0x802DF0BC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802DF0C0: lui         $a3, 0x439C
    ctx->r7 = S32(0X439C << 16);
    // 0x802DF0C4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF0C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF0CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DF0D0: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    // 0x802DF0D4: jal         0x80307E5C
    // 0x802DF0D8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_80307E5C(rdram, ctx);
        goto after_15;
    // 0x802DF0D8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x802DF0DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802DF0E0: lui         $a2, 0xC51E
    ctx->r6 = S32(0XC51E << 16);
    // 0x802DF0E4: lui         $a3, 0x439C
    ctx->r7 = S32(0X439C << 16);
    // 0x802DF0E8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF0EC: ori         $a2, $a2, 0xD000
    ctx->r6 = ctx->r6 | 0XD000;
    // 0x802DF0F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF0F4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DF0F8: jal         0x80307E5C
    // 0x802DF0FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_80307E5C(rdram, ctx);
        goto after_16;
    // 0x802DF0FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_16:
    // 0x802DF100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF104: jal         0x80307E0C
    // 0x802DF108: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    static_3_80307E0C(rdram, ctx);
        goto after_17;
    // 0x802DF108: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    after_17:
    // 0x802DF10C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802DF110: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802DF114: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802DF118: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802DF11C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802DF120: jr          $ra
    // 0x802DF124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802DF124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802DDCAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DDD2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802DDD30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802DDD34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802DDD38: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802DDD3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802DDD40: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802DDD44: addiu       $t7, $zero, 0x800
    ctx->r15 = ADD32(0, 0X800);
    // 0x802DDD48: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
    // 0x802DDD4C: sh          $t7, 0x1C34($a0)
    MEM_H(0X1C34, ctx->r4) = ctx->r15;
    // 0x802DDD50: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802DDD54: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x802DDD58: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802DDD5C: addiu       $t1, $zero, 0x400
    ctx->r9 = ADD32(0, 0X400);
    // 0x802DDD60: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x802DDD64: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x802DDD68: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x802DDD6C: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x802DDD70: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x802DDD74: addiu       $t7, $zero, 0x2000
    ctx->r15 = ADD32(0, 0X2000);
    // 0x802DDD78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DDD7C: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802DDD80: sh          $t8, 0x1C36($a0)
    MEM_H(0X1C36, ctx->r4) = ctx->r24;
    // 0x802DDD84: sh          $t9, 0x1C38($a0)
    MEM_H(0X1C38, ctx->r4) = ctx->r25;
    // 0x802DDD88: sh          $t0, 0x1C3A($a0)
    MEM_H(0X1C3A, ctx->r4) = ctx->r8;
    // 0x802DDD8C: sh          $t1, 0x1C3C($a0)
    MEM_H(0X1C3C, ctx->r4) = ctx->r9;
    // 0x802DDD90: sh          $t2, 0x1C3E($a0)
    MEM_H(0X1C3E, ctx->r4) = ctx->r10;
    // 0x802DDD94: sh          $t3, 0x1C40($a0)
    MEM_H(0X1C40, ctx->r4) = ctx->r11;
    // 0x802DDD98: sh          $t4, 0x1C42($a0)
    MEM_H(0X1C42, ctx->r4) = ctx->r12;
    // 0x802DDD9C: sh          $t5, 0x1C44($a0)
    MEM_H(0X1C44, ctx->r4) = ctx->r13;
    // 0x802DDDA0: sh          $t6, 0x1C46($a0)
    MEM_H(0X1C46, ctx->r4) = ctx->r14;
    // 0x802DDDA4: sh          $t7, 0x1C48($a0)
    MEM_H(0X1C48, ctx->r4) = ctx->r15;
    // 0x802DDDA8: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x802DDDAC: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x802DDDB0: jal         0x80223E1C
    // 0x802DDDB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80223E1C(rdram, ctx);
        goto after_0;
    // 0x802DDDB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802DDDB8: bne         $v0, $zero, L_802DDDC8
    if (ctx->r2 != 0) {
        // 0x802DDDBC: nop
    
            goto L_802DDDC8;
    }
    // 0x802DDDBC: nop

    // 0x802DDDC0: jal         0x8030F1D0
    // 0x802DDDC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8030F1D0(rdram, ctx);
        goto after_1;
    // 0x802DDDC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_802DDDC8:
    // 0x802DDDC8: jal         0x80224CA8
    // 0x802DDDCC: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802DDDCC: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_2:
    // 0x802DDDD0: jal         0x80224CA8
    // 0x802DDDD4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802DDDD4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_3:
    // 0x802DDDD8: jal         0x80224CA8
    // 0x802DDDDC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802DDDDC: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_4:
    // 0x802DDDE0: jal         0x80224CA8
    // 0x802DDDE4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x802DDDE4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_5:
    // 0x802DDDE8: jal         0x80224CA8
    // 0x802DDDEC: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x802DDDEC: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_6:
    // 0x802DDDF0: jal         0x80224CA8
    // 0x802DDDF4: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    static_3_80224CA8(rdram, ctx);
        goto after_7;
    // 0x802DDDF4: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_7:
    // 0x802DDDF8: jal         0x80224CA8
    // 0x802DDDFC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    static_3_80224CA8(rdram, ctx);
        goto after_8;
    // 0x802DDDFC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_8:
    // 0x802DDE00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DDE04: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802DDE08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DDE0C: jal         0x80205AA0
    // 0x802DDE10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_9;
    // 0x802DDE10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x802DDE14: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x802DDE18: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DDE1C: bltz        $a1, L_802DDE2C
    if (SIGNED(ctx->r5) < 0) {
        // 0x802DDE20: sw          $a1, 0x7168($v0)
        MEM_W(0X7168, ctx->r2) = ctx->r5;
            goto L_802DDE2C;
    }
    // 0x802DDE20: sw          $a1, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r5;
    // 0x802DDE24: jal         0x80205E0C
    // 0x802DDE28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80205E0C(rdram, ctx);
        goto after_10;
    // 0x802DDE28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
L_802DDE2C:
    // 0x802DDE2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DDE30: jal         0x80205EBC
    // 0x802DDE34: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    static_3_80205EBC(rdram, ctx);
        goto after_11;
    // 0x802DDE34: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_11:
    // 0x802DDE38: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DDE3C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802DDE40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DDE44: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DDE48: jal         0x80205E0C
    // 0x802DDE4C: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    static_3_80205E0C(rdram, ctx);
        goto after_12;
    // 0x802DDE4C: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    after_12:
    // 0x802DDE50: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DDE54: jal         0x802B0078
    // 0x802DDE58: lui         $a1, 0x4168
    ctx->r5 = S32(0X4168 << 16);
    static_3_802B0078(rdram, ctx);
        goto after_13;
    // 0x802DDE58: lui         $a1, 0x4168
    ctx->r5 = S32(0X4168 << 16);
    after_13:
    // 0x802DDE5C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DDE60: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802DDE64: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x802DDE68: sb          $t9, 0x716C($v0)
    MEM_B(0X716C, ctx->r2) = ctx->r25;
    // 0x802DDE6C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DDE70: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x802DDE74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DDE78: sb          $t0, 0x716D($v0)
    MEM_B(0X716D, ctx->r2) = ctx->r8;
    // 0x802DDE7C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DDE80: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DDE84: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802DDE88: swc1        $f6, 0x7160($v0)
    MEM_W(0X7160, ctx->r2) = ctx->f6.u32l;
    // 0x802DDE8C: lbu         $t1, 0x4A($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X4A);
    // 0x802DDE90: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x802DDE94: sw          $t1, 0x1C30($s0)
    MEM_W(0X1C30, ctx->r16) = ctx->r9;
    // 0x802DDE98: jal         0x80309B18
    // 0x802DDE9C: sb          $t2, 0x4A($v1)
    MEM_B(0X4A, ctx->r3) = ctx->r10;
    static_3_80309B18(rdram, ctx);
        goto after_14;
    // 0x802DDE9C: sb          $t2, 0x4A($v1)
    MEM_B(0X4A, ctx->r3) = ctx->r10;
    after_14:
    // 0x802DDEA0: jal         0x8030DEE0
    // 0x802DDEA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8030DEE0(rdram, ctx);
        goto after_15;
    // 0x802DDEA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x802DDEA8: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    // 0x802DDEAC: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802DDEB0: jal         0x802B3F64
    // 0x802DDEB4: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    static_3_802B3F64(rdram, ctx);
        goto after_16;
    // 0x802DDEB4: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    after_16:
    // 0x802DDEB8: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x802DDEBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DDEC0: lui         $a3, 0xC4BB
    ctx->r7 = S32(0XC4BB << 16);
    // 0x802DDEC4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DDEC8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DDECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DDED0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802DDED4: jal         0x802B447C
    // 0x802DDED8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_17;
    // 0x802DDED8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x802DDEDC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DDEE0: jal         0x802B4510
    // 0x802DDEE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_18;
    // 0x802DDEE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x802DDEE8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DDEEC: jal         0x80318C9C
    // 0x802DDEF0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_19;
    // 0x802DDEF0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_19:
    // 0x802DDEF4: lw          $v0, 0x220($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X220);
    // 0x802DDEF8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DDEFC: lh          $t3, 0xB0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XB0);
    // 0x802DDF00: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DDF04: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x802DDF08: jalr        $t9
    // 0x802DDF0C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x802DDF0C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_20:
    // 0x802DDF10: lui         $a1, 0x460C
    ctx->r5 = S32(0X460C << 16);
    // 0x802DDF14: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x802DDF18: jal         0x80318E80
    // 0x802DDF1C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_80318E80(rdram, ctx);
        goto after_21;
    // 0x802DDF1C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_21:
    // 0x802DDF20: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DDF24: jal         0x802AB2AC
    // 0x802DDF28: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_802AB2AC(rdram, ctx);
        goto after_22;
    // 0x802DDF28: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_22:
    // 0x802DDF2C: addiu       $a0, $s0, 0x720
    ctx->r4 = ADD32(ctx->r16, 0X720);
    // 0x802DDF30: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802DDF34: jal         0x802B3F64
    // 0x802DDF38: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    static_3_802B3F64(rdram, ctx);
        goto after_23;
    // 0x802DDF38: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    after_23:
    // 0x802DDF3C: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x802DDF40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DDF44: lui         $a3, 0xC4BB
    ctx->r7 = S32(0XC4BB << 16);
    // 0x802DDF48: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DDF4C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DDF50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DDF54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802DDF58: jal         0x802B447C
    // 0x802DDF5C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_24;
    // 0x802DDF5C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_24:
    // 0x802DDF60: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DDF64: jal         0x802B4510
    // 0x802DDF68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_25;
    // 0x802DDF68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x802DDF6C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DDF70: jal         0x80318C9C
    // 0x802DDF74: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_26;
    // 0x802DDF74: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_26:
    // 0x802DDF78: lw          $v0, 0x8C0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8C0);
    // 0x802DDF7C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DDF80: lh          $t4, 0xB0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XB0);
    // 0x802DDF84: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DDF88: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802DDF8C: jalr        $t9
    // 0x802DDF90: addiu       $a0, $a0, 0x720
    ctx->r4 = ADD32(ctx->r4, 0X720);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x802DDF90: addiu       $a0, $a0, 0x720
    ctx->r4 = ADD32(ctx->r4, 0X720);
    after_27:
    // 0x802DDF94: lui         $a1, 0x460C
    ctx->r5 = S32(0X460C << 16);
    // 0x802DDF98: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x802DDF9C: jal         0x80318E80
    // 0x802DDFA0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_80318E80(rdram, ctx);
        goto after_28;
    // 0x802DDFA0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_28:
    // 0x802DDFA4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DDFA8: jal         0x802AB2AC
    // 0x802DDFAC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_802AB2AC(rdram, ctx);
        goto after_29;
    // 0x802DDFAC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_29:
    // 0x802DDFB0: addiu       $a0, $s0, 0xDC0
    ctx->r4 = ADD32(ctx->r16, 0XDC0);
    // 0x802DDFB4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802DDFB8: jal         0x802B3F64
    // 0x802DDFBC: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    static_3_802B3F64(rdram, ctx);
        goto after_30;
    // 0x802DDFBC: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    after_30:
    // 0x802DDFC0: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x802DDFC4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802DDFC8: lui         $a3, 0xC4BB
    ctx->r7 = S32(0XC4BB << 16);
    // 0x802DDFCC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DDFD0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DDFD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DDFD8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802DDFDC: jal         0x802B447C
    // 0x802DDFE0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_31;
    // 0x802DDFE0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_31:
    // 0x802DDFE4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DDFE8: jal         0x802B4510
    // 0x802DDFEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_32;
    // 0x802DDFEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_32:
    // 0x802DDFF0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DDFF4: jal         0x80318C9C
    // 0x802DDFF8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_33;
    // 0x802DDFF8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_33:
    // 0x802DDFFC: lw          $v0, 0xF60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF60);
    // 0x802DE000: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DE004: lh          $t5, 0xB0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XB0);
    // 0x802DE008: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DE00C: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x802DE010: jalr        $t9
    // 0x802DE014: addiu       $a0, $a0, 0xDC0
    ctx->r4 = ADD32(ctx->r4, 0XDC0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x802DE014: addiu       $a0, $a0, 0xDC0
    ctx->r4 = ADD32(ctx->r4, 0XDC0);
    after_34:
    // 0x802DE018: lui         $a1, 0x460C
    ctx->r5 = S32(0X460C << 16);
    // 0x802DE01C: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x802DE020: jal         0x80318E80
    // 0x802DE024: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_80318E80(rdram, ctx);
        goto after_35;
    // 0x802DE024: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_35:
    // 0x802DE028: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE02C: jal         0x802AB2AC
    // 0x802DE030: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_802AB2AC(rdram, ctx);
        goto after_36;
    // 0x802DE030: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_36:
    // 0x802DE034: addiu       $a0, $s0, 0x1460
    ctx->r4 = ADD32(ctx->r16, 0X1460);
    // 0x802DE038: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802DE03C: jal         0x802B3F64
    // 0x802DE040: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    static_3_802B3F64(rdram, ctx);
        goto after_37;
    // 0x802DE040: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    after_37:
    // 0x802DE044: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x802DE048: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DE04C: lui         $a3, 0xC4BB
    ctx->r7 = S32(0XC4BB << 16);
    // 0x802DE050: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DE054: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DE058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DE05C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802DE060: jal         0x802B447C
    // 0x802DE064: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_38;
    // 0x802DE064: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_38:
    // 0x802DE068: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DE06C: jal         0x802B4510
    // 0x802DE070: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B4510(rdram, ctx);
        goto after_39;
    // 0x802DE070: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_39:
    // 0x802DE074: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DE078: jal         0x80318C9C
    // 0x802DE07C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_40;
    // 0x802DE07C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_40:
    // 0x802DE080: lw          $v0, 0x1600($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1600);
    // 0x802DE084: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DE088: lh          $t6, 0xB0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XB0);
    // 0x802DE08C: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DE090: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x802DE094: jalr        $t9
    // 0x802DE098: addiu       $a0, $a0, 0x1460
    ctx->r4 = ADD32(ctx->r4, 0X1460);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x802DE098: addiu       $a0, $a0, 0x1460
    ctx->r4 = ADD32(ctx->r4, 0X1460);
    after_41:
    // 0x802DE09C: lui         $a1, 0x460C
    ctx->r5 = S32(0X460C << 16);
    // 0x802DE0A0: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x802DE0A4: jal         0x80318E80
    // 0x802DE0A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_80318E80(rdram, ctx);
        goto after_42;
    // 0x802DE0A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_42:
    // 0x802DE0AC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE0B0: jal         0x802AB2AC
    // 0x802DE0B4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_802AB2AC(rdram, ctx);
        goto after_43;
    // 0x802DE0B4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_43:
    // 0x802DE0B8: jal         0x80234990
    // 0x802DE0BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80234990(rdram, ctx);
        goto after_44;
    // 0x802DE0BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_44:
    // 0x802DE0C0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802DE0C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DE0C8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DE0CC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802DE0D0: sb          $t7, 0x1BF4($s0)
    MEM_B(0X1BF4, ctx->r16) = ctx->r15;
    // 0x802DE0D4: sb          $zero, 0x1C2C($s0)
    MEM_B(0X1C2C, ctx->r16) = 0;
    // 0x802DE0D8: sb          $zero, 0x1C2B($s0)
    MEM_B(0X1C2B, ctx->r16) = 0;
    // 0x802DE0DC: sb          $zero, 0x1C2A($s0)
    MEM_B(0X1C2A, ctx->r16) = 0;
    // 0x802DE0E0: sb          $zero, 0x1C29($s0)
    MEM_B(0X1C29, ctx->r16) = 0;
    // 0x802DE0E4: sb          $zero, 0x1C2D($s0)
    MEM_B(0X1C2D, ctx->r16) = 0;
    // 0x802DE0E8: sb          $zero, 0x1C28($s0)
    MEM_B(0X1C28, ctx->r16) = 0;
    // 0x802DE0EC: sb          $zero, 0x1BF5($s0)
    MEM_B(0X1BF5, ctx->r16) = 0;
    // 0x802DE0F0: sb          $zero, 0x1BF6($s0)
    MEM_B(0X1BF6, ctx->r16) = 0;
    // 0x802DE0F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DE0F8: swc1        $f4, 0x1BF0($s0)
    MEM_W(0X1BF0, ctx->r16) = ctx->f4.u32l;
    // 0x802DE0FC: jal         0x802916EC
    // 0x802DE100: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    static_3_802916EC(rdram, ctx);
        goto after_45;
    // 0x802DE100: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_45:
    // 0x802DE104: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DE108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DE10C: jal         0x80309B88
    // 0x802DE110: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309B88(rdram, ctx);
        goto after_46;
    // 0x802DE110: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_46:
    // 0x802DE114: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802DE118: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802DE11C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802DE120: jr          $ra
    // 0x802DE124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802DE124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802D51F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D5274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D5278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D527C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D5280: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D5284: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802D5288: jal         0x8021B240
    // 0x802D528C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_0;
    // 0x802D528C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x802D5290: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D5294: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D5298: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x802D529C: jal         0x8021B240
    // 0x802D52A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_1;
    // 0x802D52A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x802D52A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D52A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D52AC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802D52B0: jal         0x8021B240
    // 0x802D52B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_2;
    // 0x802D52B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x802D52B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D52BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D52C0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x802D52C4: jal         0x8021B240
    // 0x802D52C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_3;
    // 0x802D52C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x802D52CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D52D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D52D4: jr          $ra
    // 0x802D52D8: nop

    return;
    // 0x802D52D8: nop

;}
RECOMP_FUNC void D_80298E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298E9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80298EA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80298EA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80298EA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80298EAC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80298EB0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80298EB4: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x80298EB8: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x80298EBC: jal         0x80302DC8
    // 0x80298EC0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x80298EC0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x80298EC4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80298EC8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298ECC: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    // 0x80298ED0: jal         0x80302DC8
    // 0x80298ED4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x80298ED4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x80298ED8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80298EDC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298EE0: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x80298EE4: jal         0x80302DC8
    // 0x80298EE8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_2;
    // 0x80298EE8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x80298EEC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80298EF0: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80298EF4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298EF8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80298EFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80298F00: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80298F04: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x80298F08: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80298F0C: jal         0x80290474
    // 0x80298F10: nop

    static_3_80290474(rdram, ctx);
        goto after_3;
    // 0x80298F10: nop

    after_3:
    // 0x80298F14: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298F18: jal         0x80302980
    // 0x80298F1C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_4;
    // 0x80298F1C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x80298F20: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298F24: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80298F28: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80298F2C: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x80298F30: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80298F34: jal         0x80302988
    // 0x80298F38: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x80298F38: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x80298F3C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298F40: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80298F44: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80298F48: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    // 0x80298F4C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80298F50: jal         0x80302988
    // 0x80298F54: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_6;
    // 0x80298F54: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x80298F58: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298F5C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80298F60: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80298F64: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x80298F68: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80298F6C: jal         0x80302988
    // 0x80298F70: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_7;
    // 0x80298F70: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x80298F74: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80298F78: jal         0x80302A7C
    // 0x80298F7C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_8;
    // 0x80298F7C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x80298F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80298F84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80298F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80298F8C: jr          $ra
    // 0x80298F90: nop

    return;
    // 0x80298F90: nop

;}
RECOMP_FUNC void D_802B7164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B71E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B71E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B71EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B71F0: jal         0x80318420
    // 0x802B71F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    static_3_80318420(rdram, ctx);
        goto after_0;
    // 0x802B71F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x802B71F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802B71FC: jal         0x8021BA1C
    // 0x802B7200: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021BA1C(rdram, ctx);
        goto after_1;
    // 0x802B7200: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802B7204: sb          $zero, 0x541($s0)
    MEM_B(0X541, ctx->r16) = 0;
    // 0x802B7208: sh          $zero, 0x60($s0)
    MEM_H(0X60, ctx->r16) = 0;
    // 0x802B720C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B7210: jal         0x802DAC50
    // 0x802B7214: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802DAC50(rdram, ctx);
        goto after_2;
    // 0x802B7214: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802B7218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B721C: jal         0x802DAB90
    // 0x802B7220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802DAB90(rdram, ctx);
        goto after_3;
    // 0x802B7220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802B7224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B7228: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B722C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B7230: jr          $ra
    // 0x802B7234: nop

    return;
    // 0x802B7234: nop

;}
RECOMP_FUNC void D_802B7A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7AA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B7AAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B7AB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B7AB4: lbu         $t6, 0x968($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7AB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B7ABC: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    // 0x802B7AC0: beql        $t6, $zero, L_802B7B30
    if (ctx->r14 == 0) {
        // 0x802B7AC4: sb          $zero, 0x7D1($s0)
        MEM_B(0X7D1, ctx->r16) = 0;
            goto L_802B7B30;
    }
    goto skip_0;
    // 0x802B7AC4: sb          $zero, 0x7D1($s0)
    MEM_B(0X7D1, ctx->r16) = 0;
    skip_0:
    // 0x802B7AC8: lbu         $t7, 0x7D1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X7D1);
    // 0x802B7ACC: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x802B7AD0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7AD4: bnel        $t7, $zero, L_802B7B30
    if (ctx->r15 != 0) {
        // 0x802B7AD8: sb          $zero, 0x7D1($s0)
        MEM_B(0X7D1, ctx->r16) = 0;
            goto L_802B7B30;
    }
    goto skip_1;
    // 0x802B7AD8: sb          $zero, 0x7D1($s0)
    MEM_B(0X7D1, ctx->r16) = 0;
    skip_1:
    // 0x802B7ADC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802B7AE0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802B7AE4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7AE8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B7AEC: addiu       $a0, $v0, 0x8F4
    ctx->r4 = ADD32(ctx->r2, 0X8F4);
    // 0x802B7AF0: jal         0x80302988
    // 0x802B7AF4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80302988(rdram, ctx);
        goto after_0;
    // 0x802B7AF4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802B7AF8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7AFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802B7B00: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7B04: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    // 0x802B7B08: jal         0x80302988
    // 0x802B7B0C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x802B7B0C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x802B7B10: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B7B14: sb          $zero, 0x7D0($s0)
    MEM_B(0X7D0, ctx->r16) = 0;
    // 0x802B7B18: sb          $t8, 0x7D1($s0)
    MEM_B(0X7D1, ctx->r16) = ctx->r24;
    // 0x802B7B1C: sb          $zero, 0x7D2($s0)
    MEM_B(0X7D2, ctx->r16) = 0;
    // 0x802B7B20: sb          $zero, 0x7D3($s0)
    MEM_B(0X7D3, ctx->r16) = 0;
    // 0x802B7B24: b           L_802B7B30
    // 0x802B7B28: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
        goto L_802B7B30;
    // 0x802B7B28: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x802B7B2C: sb          $zero, 0x7D1($s0)
    MEM_B(0X7D1, ctx->r16) = 0;
L_802B7B30:
    // 0x802B7B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B7B34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B7B38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B7B3C: jr          $ra
    // 0x802B7B40: nop

    return;
    // 0x802B7B40: nop

;}
RECOMP_FUNC void D_8021B684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021B684: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021B688: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8021B68C: lhu         $t6, 0x26($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X26);
    // 0x8021B690: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8021B694: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021B698: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B69C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8021B6A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021B6A4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8021B6A8: beq         $at, $zero, L_8021B6C8
    if (ctx->r1 == 0) {
        // 0x8021B6AC: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8021B6C8;
    }
    // 0x8021B6AC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021B6B0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021B6B4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021B6B8: jal         0x80231A24
    // 0x8021B6BC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021B6BC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x8021B6C0: b           L_8021B7D8
    // 0x8021B6C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021B7D8;
    // 0x8021B6C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B6C8:
    // 0x8021B6C8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021B6CC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8021B6D0: sll         $t7, $a3, 3
    ctx->r15 = S32(ctx->r7 << 3);
    // 0x8021B6D4: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x8021B6D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8021B6DC: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8021B6E0: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8021B6E4: lhu         $t0, 0x10($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X10);
    // 0x8021B6E8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8021B6EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021B6F0: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8021B6F4: bne         $at, $zero, L_8021B714
    if (ctx->r1 != 0) {
        // 0x8021B6F8: sll         $t1, $a2, 1
        ctx->r9 = S32(ctx->r6 << 1);
            goto L_8021B714;
    }
    // 0x8021B6F8: sll         $t1, $a2, 1
    ctx->r9 = S32(ctx->r6 << 1);
    // 0x8021B6FC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021B700: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021B704: jal         0x80231A24
    // 0x8021B708: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021B708: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x8021B70C: b           L_8021B7D8
    // 0x8021B710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021B7D8;
    // 0x8021B710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B714:
    // 0x8021B714: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x8021B718: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8021B71C: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8021B720: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x8021B724: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x8021B728: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8021B72C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8021B730: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x8021B734: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8021B738: jal         0x80228DE0
    // 0x8021B73C: addu        $a1, $t2, $t6
    ctx->r5 = ADD32(ctx->r10, ctx->r14);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x8021B73C: addu        $a1, $t2, $t6
    ctx->r5 = ADD32(ctx->r10, ctx->r14);
    after_2:
    // 0x8021B740: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8021B744: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021B748: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021B74C: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8021B750: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8021B754: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8021B758: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8021B75C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021B760: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8021B764: bne         $a2, $zero, L_8021B7A4
    if (ctx->r6 != 0) {
        // 0x8021B768: lw          $v0, 0x0($t1)
        ctx->r2 = MEM_W(ctx->r9, 0X0);
            goto L_8021B7A4;
    }
    // 0x8021B768: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x8021B76C: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B770: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021B774: nop

    // 0x8021B778: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x8021B77C: nop

    // 0x8021B780: bc1tl       L_8021B7D8
    if (c1cs) {
        // 0x8021B784: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021B7D8;
    }
    goto skip_0;
    // 0x8021B784: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8021B788: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021B78C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021B790: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8021B794: jal         0x8022A210
    // 0x8021B798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022A210(rdram, ctx);
        goto after_3;
    // 0x8021B798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8021B79C: b           L_8021B7D8
    // 0x8021B7A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021B7D8;
    // 0x8021B7A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B7A4:
    // 0x8021B7A4: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8021B7A8: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B7AC: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8021B7B0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021B7B4: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8021B7B8: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
    // 0x8021B7BC: lwc1        $f18, 0x20($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B7C0: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8021B7C4: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x8021B7C8: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B7CC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021B7D0: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
    // 0x8021B7D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B7D8:
    // 0x8021B7D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021B7DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8021B7E0: jr          $ra
    // 0x8021B7E4: nop

    return;
    // 0x8021B7E4: nop

;}
RECOMP_FUNC void D_802B93AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B942C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B9430: beq         $a0, $zero, L_802B944C
    if (ctx->r4 == 0) {
        // 0x802B9434: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B944C;
    }
    // 0x802B9434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B9438: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x802B943C: beql        $t6, $zero, L_802B9450
    if (ctx->r14 == 0) {
        // 0x802B9440: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B9450;
    }
    goto skip_0;
    // 0x802B9440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802B9444: jal         0x802C681C
    // 0x802B9448: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802B9448: nop

    after_0:
L_802B944C:
    // 0x802B944C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B9450:
    // 0x802B9450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B9454: jr          $ra
    // 0x802B9458: nop

    return;
    // 0x802B9458: nop

;}
RECOMP_FUNC void D_80292EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292F28: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80292F2C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80292F30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80292F34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80292F38: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80292F3C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80292F40: addiu       $t6, $sp, 0x90
    ctx->r14 = ADD32(ctx->r29, 0X90);
    // 0x80292F44: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80292F48: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80292F4C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80292F50: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x80292F54: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80292F58: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x80292F5C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80292F60: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x80292F64: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x80292F68: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80292F6C: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x80292F70: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80292F74: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x80292F78: jal         0x802AD568
    // 0x80292F7C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x80292F7C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80292F80: blez        $v0, L_802930A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80292F84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802930A0;
    }
    // 0x80292F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80292F88: jal         0x802C51D0
    // 0x80292F8C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x80292F8C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x80292F90: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80292F94: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80292F98: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80292F9C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80292FA0: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x80292FA4: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x80292FA8: jal         0x8022970C
    // 0x80292FAC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x80292FAC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80292FB0: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80292FB4: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80292FB8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80292FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80292FC0: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x80292FC4: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x80292FC8: jal         0x802C4838
    // 0x80292FCC: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    static_3_802C4838(rdram, ctx);
        goto after_3;
    // 0x80292FCC: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80292FD0: lwc1        $f16, 0x98($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80292FD4: lwc1        $f18, 0x104($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X104);
    // 0x80292FD8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80292FDC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80292FE0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80292FE4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80292FE8: jal         0x802D01D4
    // 0x80292FEC: nop

    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x80292FEC: nop

    after_4:
    // 0x80292FF0: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80292FF4: lwc1        $f8, 0x108($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X108);
    // 0x80292FF8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80292FFC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80293000: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80293004: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80293008: jal         0x802D01D4
    // 0x8029300C: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x8029300C: nop

    after_5:
    // 0x80293010: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80293014: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80293018: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8029301C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80293020: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80293024: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80293028: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8029302C: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80293030: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80293034: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80293038: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8029303C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80293040: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80293044: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80293048: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x8029304C: jal         0x802AAEC0
    // 0x80293050: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_802AAEC0(rdram, ctx);
        goto after_6;
    // 0x80293050: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_6:
    // 0x80293054: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80293058: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029305C: beq         $v0, $zero, L_80293098
    if (ctx->r2 == 0) {
        // 0x80293060: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80293098;
    }
    // 0x80293060: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80293064: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80293068: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8029306C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80293070: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80293074: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80293078: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x8029307C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x80293080: jal         0x802E9420
    // 0x80293084: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    static_3_802E9420(rdram, ctx);
        goto after_7;
    // 0x80293084: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x80293088: lui         $a1, 0x3EA8
    ctx->r5 = S32(0X3EA8 << 16);
    // 0x8029308C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80293090: jal         0x802E982C
    // 0x80293094: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    static_3_802E982C(rdram, ctx);
        goto after_8;
    // 0x80293094: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    after_8:
L_80293098:
    // 0x80293098: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8029309C: swc1        $f18, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f18.u32l;
L_802930A0:
    // 0x802930A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802930A4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802930A8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802930AC: jr          $ra
    // 0x802930B0: nop

    return;
    // 0x802930B0: nop

;}
RECOMP_FUNC void D_80203BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203BC8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80203BCC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80203BD0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80203BD4: slti        $at, $a0, 0x23
    ctx->r1 = SIGNED(ctx->r4) < 0X23 ? 1 : 0;
    // 0x80203BD8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80203BDC: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80203BE0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80203BE4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80203BE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80203BEC: bne         $at, $zero, L_80203C08
    if (ctx->r1 != 0) {
        // 0x80203BF0: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80203C08;
    }
    // 0x80203BF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80203BF4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203BF8: jal         0x80231A24
    // 0x80203BFC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80203BFC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80203C00: b           L_80203D34
    // 0x80203C04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80203D34;
    // 0x80203C04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80203C08:
    // 0x80203C08: sll         $t6, $s3, 3
    ctx->r14 = S32(ctx->r19 << 3);
    // 0x80203C0C: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x80203C10: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80203C14: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80203C18: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80203C1C: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x80203C20: lw          $s2, 0x20($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X20);
    // 0x80203C24: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80203C28: blez        $s2, L_80203D08
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80203C2C: andi        $a0, $s2, 0x3
        ctx->r4 = ctx->r18 & 0X3;
            goto L_80203D08;
    }
    // 0x80203C2C: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x80203C30: beq         $a0, $zero, L_80203C6C
    if (ctx->r4 == 0) {
        // 0x80203C34: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_80203C6C;
    }
    // 0x80203C34: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80203C38: sll         $t2, $zero, 3
    ctx->r10 = S32(0 << 3);
    // 0x80203C3C: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x80203C40: addu        $s0, $t2, $t8
    ctx->r16 = ADD32(ctx->r10, ctx->r24);
    // 0x80203C44: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
L_80203C48:
    // 0x80203C48: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80203C4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80203C50: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80203C54: sw          $at, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r1;
    // 0x80203C58: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x80203C5C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80203C60: bne         $v1, $s1, L_80203C48
    if (ctx->r3 != ctx->r17) {
        // 0x80203C64: sw          $t4, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r12;
            goto L_80203C48;
    }
    // 0x80203C64: sw          $t4, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r12;
    // 0x80203C68: beq         $s1, $s2, L_80203D04
    if (ctx->r17 == ctx->r18) {
        // 0x80203C6C: sll         $t2, $s1, 3
        ctx->r10 = S32(ctx->r17 << 3);
            goto L_80203D04;
    }
L_80203C6C:
    // 0x80203C6C: sll         $t2, $s1, 3
    ctx->r10 = S32(ctx->r17 << 3);
    // 0x80203C70: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x80203C74: addu        $s0, $t2, $t5
    ctx->r16 = ADD32(ctx->r10, ctx->r13);
    // 0x80203C78: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
    // 0x80203C7C: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x80203C80: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x80203C84: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80203C88: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x80203C8C: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x80203C90: addiu       $t0, $v0, 0x18
    ctx->r8 = ADD32(ctx->r2, 0X18);
    // 0x80203C94: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80203C98: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x80203C9C: addiu       $v1, $s0, 0x18
    ctx->r3 = ADD32(ctx->r16, 0X18);
L_80203CA0:
    // 0x80203CA0: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80203CA4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x80203CA8: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x80203CAC: sw          $at, -0x20($s0)
    MEM_W(-0X20, ctx->r16) = ctx->r1;
    // 0x80203CB0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80203CB4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80203CB8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x80203CBC: sw          $t9, -0x1C($s0)
    MEM_W(-0X1C, ctx->r16) = ctx->r25;
    // 0x80203CC0: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x80203CC4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80203CC8: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x80203CCC: sw          $at, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = ctx->r1;
    // 0x80203CD0: lw          $t5, -0x1C($a2)
    ctx->r13 = MEM_W(ctx->r6, -0X1C);
    // 0x80203CD4: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x80203CD8: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x80203CDC: sw          $t5, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = ctx->r13;
    // 0x80203CE0: lw          $at, -0x20($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X20);
    // 0x80203CE4: sw          $at, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r1;
    // 0x80203CE8: lw          $t7, -0x1C($a3)
    ctx->r15 = MEM_W(ctx->r7, -0X1C);
    // 0x80203CEC: sw          $t7, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r15;
    // 0x80203CF0: lw          $at, -0x20($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X20);
    // 0x80203CF4: sw          $at, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r1;
    // 0x80203CF8: lw          $t9, -0x1C($t0)
    ctx->r25 = MEM_W(ctx->r8, -0X1C);
    // 0x80203CFC: bne         $v1, $t1, L_80203CA0
    if (ctx->r3 != ctx->r9) {
        // 0x80203D00: sw          $t9, -0x1C($v1)
        MEM_W(-0X1C, ctx->r3) = ctx->r25;
            goto L_80203CA0;
    }
    // 0x80203D00: sw          $t9, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r25;
L_80203D04:
    // 0x80203D04: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80203D08:
    // 0x80203D08: blez        $s2, L_80203D30
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80203D0C: addiu       $s0, $sp, 0x64
        ctx->r16 = ADD32(ctx->r29, 0X64);
            goto L_80203D30;
    }
    // 0x80203D0C: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
L_80203D10:
    // 0x80203D10: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80203D14: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80203D18: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80203D1C: jalr        $t9
    // 0x80203D20: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80203D20: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_1:
    // 0x80203D24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80203D28: bne         $s1, $s2, L_80203D10
    if (ctx->r17 != ctx->r18) {
        // 0x80203D2C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80203D10;
    }
    // 0x80203D2C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80203D30:
    // 0x80203D30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80203D34:
    // 0x80203D34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80203D38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80203D3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80203D40: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80203D44: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80203D48: jr          $ra
    // 0x80203D4C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80203D4C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void D_80207388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207388: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8020738C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80207390: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80207394: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
    // 0x80207398: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8020739C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802073A0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x802073A4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802073A8: addiu       $a1, $s2, 0x88
    ctx->r5 = ADD32(ctx->r18, 0X88);
    // 0x802073AC: jal         0x80228DE0
    // 0x802073B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802073B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x802073B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802073B8: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
L_802073BC:
    // 0x802073BC: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802073C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802073C4: mflo        $t6
    ctx->r14 = lo;
    // 0x802073C8: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x802073CC: addiu       $a1, $v0, 0x188
    ctx->r5 = ADD32(ctx->r2, 0X188);
    // 0x802073D0: jal         0x8022A4F4
    // 0x802073D4: addiu       $a2, $v0, 0x140
    ctx->r6 = ADD32(ctx->r2, 0X140);
    static_3_8022A4F4(rdram, ctx);
        goto after_1;
    // 0x802073D4: addiu       $a2, $v0, 0x140
    ctx->r6 = ADD32(ctx->r2, 0X140);
    after_1:
    // 0x802073D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802073DC: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x802073E0: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x802073E4: bne         $at, $zero, L_802073BC
    if (ctx->r1 != 0) {
        // 0x802073E8: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_802073BC;
    }
    // 0x802073E8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x802073EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802073F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802073F4: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x802073F8: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x802073FC: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
L_80207400:
    // 0x80207400: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80207404: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80207408: mflo        $t8
    ctx->r24 = lo;
    // 0x8020740C: addu        $v0, $s2, $t8
    ctx->r2 = ADD32(ctx->r18, ctx->r24);
    // 0x80207410: addiu       $a1, $v0, 0x218
    ctx->r5 = ADD32(ctx->r2, 0X218);
    // 0x80207414: jal         0x8022A4F4
    // 0x80207418: addiu       $a2, $v0, 0x1D0
    ctx->r6 = ADD32(ctx->r2, 0X1D0);
    static_3_8022A4F4(rdram, ctx);
        goto after_2;
    // 0x80207418: addiu       $a2, $v0, 0x1D0
    ctx->r6 = ADD32(ctx->r2, 0X1D0);
    after_2:
    // 0x8020741C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80207420: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x80207424: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x80207428: bne         $at, $zero, L_80207400
    if (ctx->r1 != 0) {
        // 0x8020742C: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_80207400;
    }
    // 0x8020742C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80207430: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80207434: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80207438: lhu         $t3, 0x4($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X4);
    // 0x8020743C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80207440: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x80207444: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80207448: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8020744C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80207450: beql        $t6, $zero, L_802075F4
    if (ctx->r14 == 0) {
        // 0x80207454: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802075F4;
    }
    goto skip_0;
    // 0x80207454: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80207458: lwc1        $f2, 0xE0($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0XE0);
    // 0x8020745C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80207460: addiu       $a2, $s2, 0x188
    ctx->r6 = ADD32(ctx->r18, 0X188);
    // 0x80207464: addiu       $a3, $a2, 0xC
    ctx->r7 = ADD32(ctx->r6, 0XC);
    // 0x80207468: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x8020746C: addiu       $t0, $a2, 0x18
    ctx->r8 = ADD32(ctx->r6, 0X18);
    // 0x80207470: addiu       $t1, $a2, 0x24
    ctx->r9 = ADD32(ctx->r6, 0X24);
    // 0x80207474: addiu       $a1, $a2, 0x3C
    ctx->r5 = ADD32(ctx->r6, 0X3C);
    // 0x80207478: bc1f        L_80207488
    if (!c1cs) {
        // 0x8020747C: addiu       $t4, $zero, 0x5
        ctx->r12 = ADD32(0, 0X5);
            goto L_80207488;
    }
    // 0x8020747C: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x80207480: b           L_8020748C
    // 0x80207484: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_8020748C;
    // 0x80207484: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80207488:
    // 0x80207488: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_8020748C:
    // 0x8020748C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80207490: addiu       $s0, $s2, 0x188
    ctx->r16 = ADD32(ctx->r18, 0X188);
    // 0x80207494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80207498: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x8020749C: addiu       $s1, $s0, 0xC
    ctx->r17 = ADD32(ctx->r16, 0XC);
    // 0x802074A0: bc1fl       L_8020754C
    if (!c1cs) {
        // 0x802074A4: sw          $a2, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r6;
            goto L_8020754C;
    }
    goto skip_1;
    // 0x802074A4: sw          $a2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r6;
    skip_1:
    // 0x802074A8: addiu       $a2, $s0, 0x18
    ctx->r6 = ADD32(ctx->r16, 0X18);
    // 0x802074AC: addiu       $a3, $s0, 0x24
    ctx->r7 = ADD32(ctx->r16, 0X24);
    // 0x802074B0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802074B4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x802074B8: jal         0x8020765C
    // 0x802074BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_8020765C(rdram, ctx);
        goto after_3;
    // 0x802074BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x802074C0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802074C4: beq         $v0, $zero, L_802074F8
    if (ctx->r2 == 0) {
        // 0x802074C8: lw          $t1, 0x34($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X34);
            goto L_802074F8;
    }
    // 0x802074C8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x802074CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802074D0: beq         $v0, $at, L_8020750C
    if (ctx->r2 == ctx->r1) {
        // 0x802074D4: addiu       $t8, $s0, 0x3C
        ctx->r24 = ADD32(ctx->r16, 0X3C);
            goto L_8020750C;
    }
    // 0x802074D4: addiu       $t8, $s0, 0x3C
    ctx->r24 = ADD32(ctx->r16, 0X3C);
    // 0x802074D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802074DC: beq         $v0, $at, L_8020751C
    if (ctx->r2 == ctx->r1) {
        // 0x802074E0: addiu       $t9, $s0, 0x3C
        ctx->r25 = ADD32(ctx->r16, 0X3C);
            goto L_8020751C;
    }
    // 0x802074E0: addiu       $t9, $s0, 0x3C
    ctx->r25 = ADD32(ctx->r16, 0X3C);
    // 0x802074E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802074E8: beq         $v0, $at, L_8020752C
    if (ctx->r2 == ctx->r1) {
        // 0x802074EC: addiu       $t3, $s0, 0x3C
        ctx->r11 = ADD32(ctx->r16, 0X3C);
            goto L_8020752C;
    }
    // 0x802074EC: addiu       $t3, $s0, 0x3C
    ctx->r11 = ADD32(ctx->r16, 0X3C);
    // 0x802074F0: b           L_8020753C
    // 0x802074F4: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
        goto L_8020753C;
    // 0x802074F4: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_802074F8:
    // 0x802074F8: addiu       $t7, $s0, 0x3C
    ctx->r15 = ADD32(ctx->r16, 0X3C);
    // 0x802074FC: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    // 0x80207500: sw          $s1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r17;
    // 0x80207504: b           L_80207538
    // 0x80207508: sw          $t1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r9;
        goto L_80207538;
    // 0x80207508: sw          $t1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r9;
L_8020750C:
    // 0x8020750C: sw          $t8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r24;
    // 0x80207510: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
    // 0x80207514: b           L_80207538
    // 0x80207518: sw          $s0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r16;
        goto L_80207538;
    // 0x80207518: sw          $s0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r16;
L_8020751C:
    // 0x8020751C: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    // 0x80207520: sw          $t1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r9;
    // 0x80207524: b           L_80207538
    // 0x80207528: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
        goto L_80207538;
    // 0x80207528: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
L_8020752C:
    // 0x8020752C: sw          $t3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r11;
    // 0x80207530: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x80207534: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
L_80207538:
    // 0x80207538: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_8020753C:
    // 0x8020753C: sb          $t2, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r10;
    // 0x80207540: b           L_80207590
    // 0x80207544: addiu       $s1, $sp, 0x94
    ctx->r17 = ADD32(ctx->r29, 0X94);
        goto L_80207590;
    // 0x80207544: addiu       $s1, $sp, 0x94
    ctx->r17 = ADD32(ctx->r29, 0X94);
    // 0x80207548: sw          $a2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r6;
L_8020754C:
    // 0x8020754C: sw          $a3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r7;
    // 0x80207550: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
    // 0x80207554: sw          $t1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r9;
    // 0x80207558: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x8020755C: sb          $t4, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r12;
    // 0x80207560: lhu         $t6, 0x4($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X4);
    // 0x80207564: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x80207568: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8020756C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80207570: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80207574: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80207578: jal         0x802076D8
    // 0x8020757C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    static_3_802076D8(rdram, ctx);
        goto after_4;
    // 0x8020757C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_4:
    // 0x80207580: addiu       $s1, $sp, 0x94
    ctx->r17 = ADD32(ctx->r29, 0X94);
    // 0x80207584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80207588: jal         0x80207C20
    // 0x8020758C: addiu       $a1, $sp, 0x52
    ctx->r5 = ADD32(ctx->r29, 0X52);
    static_3_80207C20(rdram, ctx);
        goto after_5;
    // 0x8020758C: addiu       $a1, $sp, 0x52
    ctx->r5 = ADD32(ctx->r29, 0X52);
    after_5:
L_80207590:
    // 0x80207590: lbu         $t9, 0x52($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X52);
    // 0x80207594: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80207598: blezl       $t9, L_802075EC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8020759C: lbu         $t8, 0x52($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X52);
            goto L_802075EC;
    }
    goto skip_2;
    // 0x8020759C: lbu         $t8, 0x52($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X52);
    skip_2:
L_802075A0:
    // 0x802075A0: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802075A4: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x802075A8: addu        $v1, $s1, $t2
    ctx->r3 = ADD32(ctx->r17, ctx->r10);
    // 0x802075AC: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x802075B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802075B4: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x802075B8: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x802075BC: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x802075C0: mflo        $t3
    ctx->r11 = lo;
    // 0x802075C4: addu        $v0, $s2, $t3
    ctx->r2 = ADD32(ctx->r18, ctx->r11);
    // 0x802075C8: swc1        $f8, 0x260($v0)
    MEM_W(0X260, ctx->r2) = ctx->f8.u32l;
    // 0x802075CC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802075D0: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802075D4: swc1        $f10, 0x264($v0)
    MEM_W(0X264, ctx->r2) = ctx->f10.u32l;
    // 0x802075D8: lbu         $t7, 0x52($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X52);
    // 0x802075DC: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x802075E0: bne         $at, $zero, L_802075A0
    if (ctx->r1 != 0) {
        // 0x802075E4: nop
    
            goto L_802075A0;
    }
    // 0x802075E4: nop

    // 0x802075E8: lbu         $t8, 0x52($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X52);
L_802075EC:
    // 0x802075EC: sb          $t8, 0x2A8($s2)
    MEM_B(0X2A8, ctx->r18) = ctx->r24;
    // 0x802075F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802075F4:
    // 0x802075F4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802075F8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802075FC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80207600: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80207604: jr          $ra
    // 0x80207608: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80207608: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void D_80234D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234D9C: jr          $ra
    // 0x80234DA0: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    return;
    // 0x80234DA0: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
;}
RECOMP_FUNC void D_802B66C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B6744: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B6748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B674C: jal         0x80318430
    // 0x802B6750: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80318430(rdram, ctx);
        goto after_0;
    // 0x802B6750: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802B6754: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802B6758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B675C: lwc1        $f4, 0x5E0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5E0);
    // 0x802B6760: lwc1        $f8, 0x658($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X658);
    // 0x802B6764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B6768: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x802B676C: jr          $ra
    // 0x802B6770: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    return;
    // 0x802B6770: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
;}
RECOMP_FUNC void D_802F2C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802F2CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F2CCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802F2CD0: beq         $a0, $zero, L_802F2D1C
    if (ctx->r4 == 0) {
        // 0x802F2CD4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802F2D1C;
    }
    // 0x802F2CD4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802F2CD8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802F2CDC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802F2CE0: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802F2CE4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802F2CE8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x802F2CEC: jal         0x8028D2B8
    // 0x802F2CF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028D2B8(rdram, ctx);
        goto after_0;
    // 0x802F2CF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802F2CF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802F2CF8: jal         0x803086D4
    // 0x802F2CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_1;
    // 0x802F2CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802F2D00: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802F2D04: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802F2D08: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802F2D0C: beql        $t8, $zero, L_802F2D20
    if (ctx->r24 == 0) {
        // 0x802F2D10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802F2D20;
    }
    goto skip_0;
    // 0x802F2D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802F2D14: jal         0x802C681C
    // 0x802F2D18: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x802F2D18: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_802F2D1C:
    // 0x802F2D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802F2D20:
    // 0x802F2D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802F2D24: jr          $ra
    // 0x802F2D28: nop

    return;
    // 0x802F2D28: nop

;}
RECOMP_FUNC void D_80246B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80246B68: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80246B6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80246B70: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80246B74: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80246B78: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x80246B7C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80246B80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80246B84: jal         0x802371E0
    // 0x80246B88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802371E0(rdram, ctx);
        goto after_0;
    // 0x80246B88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80246B8C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80246B90: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80246B94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80246B98: jal         0x80236B80
    // 0x80246B9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_1;
    // 0x80246B9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80246BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80246BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80246BA8: jr          $ra
    // 0x80246BAC: nop

    return;
    // 0x80246BAC: nop

;}
RECOMP_FUNC void D_80243CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243CB4: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x80243CB8: bne         $a0, $zero, L_80243CE8
    if (ctx->r4 != 0) {
        // 0x80243CBC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80243CE8;
    }
    // 0x80243CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80243CC0: c.le.d      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.d <= ctx->f14.d;
    // 0x80243CC4: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80243CC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80243CCC: bc1f        L_80243CE0
    if (!c1cs) {
        // 0x80243CD0: nop
    
            goto L_80243CE0;
    }
    // 0x80243CD0: nop

    // 0x80243CD4: sh          $t6, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r14;
    // 0x80243CD8: b           L_80243E74
    // 0x80243CDC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80243E74;
    // 0x80243CDC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80243CE0:
    // 0x80243CE0: b           L_80243E74
    // 0x80243CE4: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_80243E74;
    // 0x80243CE4: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_80243CE8:
    // 0x80243CE8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80243CEC: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80243CF0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80243CF4: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80243CF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80243CFC: c.lt.d      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.d < ctx->f22.d;
    // 0x80243D00: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
    // 0x80243D04: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80243D08: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80243D0C: bc1f        L_80243D18
    if (!c1cs) {
        // 0x80243D10: or          $t6, $s2, $zero
        ctx->r14 = ctx->r18 | 0;
            goto L_80243D18;
    }
    // 0x80243D10: or          $t6, $s2, $zero
    ctx->r14 = ctx->r18 | 0;
    // 0x80243D14: mov.d       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.d = ctx->f22.d;
L_80243D18:
    // 0x80243D18: c.le.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d <= ctx->f4.d;
    // 0x80243D1C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80243D20: addiu       $t9, $t7, 0x3C
    ctx->r25 = ADD32(ctx->r15, 0X3C);
    // 0x80243D24: bc1f        L_80243D38
    if (!c1cs) {
        // 0x80243D28: nop
    
            goto L_80243D38;
    }
    // 0x80243D28: nop

    // 0x80243D2C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80243D30: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80243D34: nop

L_80243D38:
    // 0x80243D38: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80243D3C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80243D40: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80243D44: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x80243D48: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80243D4C: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80243D50: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80243D54: bne         $t7, $t9, L_80243D38
    if (ctx->r15 != ctx->r25) {
        // 0x80243D58: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80243D38;
    }
    // 0x80243D58: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80243D5C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x80243D60: lui         $t8, 0x4000
    ctx->r24 = S32(0X4000 << 16);
    // 0x80243D64: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80243D68: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80243D6C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80243D70: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80243D74: cvt.d.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.d = CVT_D_W(ctx->f6.u32l);
    // 0x80243D78: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80243D7C: div.d       $f4, $f22, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f22.d, ctx->f10.d);
    // 0x80243D80: div.d       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f16.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f16.d);
    // 0x80243D84: mul.d       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x80243D88: trunc.w.d   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x80243D8C: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x80243D90: jal         0x80243B38
    // 0x80243D94: nop

    static_3_80243B38(rdram, ctx);
        goto after_0;
    // 0x80243D94: nop

    after_0:
    // 0x80243D98: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80243D9C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80243DA0: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x80243DA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80243DA8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80243DAC: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80243DB0: mul.d       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x80243DB4: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80243DB8: ldc1        $f8, 0x0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X0);
    // 0x80243DBC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80243DC0: trunc.w.d   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x80243DC4: mov.d       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.d = ctx->f22.d;
    // 0x80243DC8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80243DCC: nop

    // 0x80243DD0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80243DD4: addu        $t7, $s2, $t9
    ctx->r15 = ADD32(ctx->r18, ctx->r25);
    // 0x80243DD8: ldc1        $f6, -0x40($t7)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r15, -0X40);
    // 0x80243DDC: add.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d + ctx->f10.d;
    // 0x80243DE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80243DE4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80243DE8: mul.d       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f12.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80243DEC: nop

    // 0x80243DF0: mul.d       $f14, $f6, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f14.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x80243DF4: div.d       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f14.d); 
    ctx->f12.d = DIV_D(ctx->f12.d, ctx->f14.d);
    // 0x80243DF8: beq         $s0, $zero, L_80243E20
    if (ctx->r16 == 0) {
        // 0x80243DFC: add.d       $f0, $f22, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f22.d + ctx->f12.d;
            goto L_80243E20;
    }
    // 0x80243DFC: add.d       $f0, $f22, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f22.d + ctx->f12.d;
L_80243E00:
    // 0x80243E00: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x80243E04: beq         $t8, $zero, L_80243E14
    if (ctx->r24 == 0) {
        // 0x80243E08: sra         $t9, $s0, 1
        ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80243E14;
    }
    // 0x80243E08: sra         $t9, $s0, 1
    ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80243E0C: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x80243E10: nop

L_80243E14:
    // 0x80243E14: mul.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x80243E18: bne         $t9, $zero, L_80243E00
    if (ctx->r25 != 0) {
        // 0x80243E1C: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_80243E00;
    }
    // 0x80243E1C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_80243E20:
    // 0x80243E20: mul.d       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80243E24: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80243E28: mul.d       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x80243E2C: nop

    // 0x80243E30: mul.d       $f2, $f12, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = MUL_D(ctx->f12.d, ctx->f12.d);
    // 0x80243E34: trunc.w.d   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x80243E38: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x80243E3C: nop

    // 0x80243E40: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80243E44: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80243E48: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80243E4C: nop

    // 0x80243E50: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80243E54: ldc1        $f4, 0x0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X0);
    // 0x80243E58: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80243E5C: sub.d       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f2.d - ctx->f6.d;
    // 0x80243E60: mul.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80243E64: trunc.w.d   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x80243E68: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80243E6C: nop

    // 0x80243E70: sh          $t7, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r15;
L_80243E74:
    // 0x80243E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80243E78: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x80243E7C: jr          $ra
    // 0x80243E80: nop

    return;
    // 0x80243E80: nop

;}
RECOMP_FUNC void D_80208584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208584: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80208588: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020858C: jal         0x80208230
    // 0x80208590: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    static_3_80208230(rdram, ctx);
        goto after_0;
    // 0x80208590: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80208594: beq         $v0, $zero, L_802085A4
    if (ctx->r2 == 0) {
        // 0x80208598: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802085A4;
    }
    // 0x80208598: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020859C: b           L_802085EC
    // 0x802085A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802085EC;
    // 0x802085A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802085A4:
    // 0x802085A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802085A8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x802085AC: jal         0x802392C0
    // 0x802085B0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    static_3_802392C0(rdram, ctx);
        goto after_1;
    // 0x802085B0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x802085B4: bne         $v0, $zero, L_802085E4
    if (ctx->r2 != 0) {
        // 0x802085B8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802085E4;
    }
    // 0x802085B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802085BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802085C0: addiu       $t6, $sp, 0x32
    ctx->r14 = ADD32(ctx->r29, 0X32);
    // 0x802085C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802085C8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802085CC: lhu         $a1, 0x30($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X30);
    // 0x802085D0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802085D4: jal         0x802399C0
    // 0x802085D8: addiu       $a3, $sp, 0x36
    ctx->r7 = ADD32(ctx->r29, 0X36);
    static_3_802399C0(rdram, ctx);
        goto after_2;
    // 0x802085D8: addiu       $a3, $sp, 0x36
    ctx->r7 = ADD32(ctx->r29, 0X36);
    after_2:
    // 0x802085DC: b           L_802085EC
    // 0x802085E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802085EC;
    // 0x802085E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802085E4:
    // 0x802085E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802085E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802085EC:
    // 0x802085EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802085F0: jr          $ra
    // 0x802085F4: nop

    return;
    // 0x802085F4: nop

;}
RECOMP_FUNC void D_8029D998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DA18: jr          $ra
    // 0x8029DA1C: sw          $a1, 0x280($a0)
    MEM_W(0X280, ctx->r4) = ctx->r5;
    return;
    // 0x8029DA1C: sw          $a1, 0x280($a0)
    MEM_W(0X280, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802453B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802453B4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802453B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802453BC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802453C0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802453C4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802453C8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802453CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802453D0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802453D4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802453D8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x802453DC: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x802453E0: andi        $s0, $a3, 0xFF
    ctx->r16 = ctx->r7 & 0XFF;
    // 0x802453E4: andi        $s1, $a2, 0xFF
    ctx->r17 = ctx->r6 & 0XFF;
    // 0x802453E8: beq         $t6, $zero, L_80245408
    if (ctx->r14 == 0) {
        // 0x802453EC: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_80245408;
    }
    // 0x802453EC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802453F0: jal         0x802456A0
    // 0x802453F4: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_0;
    // 0x802453F4: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x802453F8: beq         $v0, $zero, L_80245408
    if (ctx->r2 == 0) {
        // 0x802453FC: nop
    
            goto L_80245408;
    }
    // 0x802453FC: nop

    // 0x80245400: b           L_80245634
    // 0x80245404: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80245634;
    // 0x80245404: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80245408:
    // 0x80245408: blez        $s0, L_8024541C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8024540C: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_8024541C;
    }
    // 0x8024540C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80245410: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80245414: b           L_80245428
    // 0x80245418: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
        goto L_80245428;
    // 0x80245418: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_8024541C:
    // 0x8024541C: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80245420: nop

    // 0x80245424: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
L_80245428:
    // 0x80245428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024542C: bne         $v0, $s1, L_80245464
    if (ctx->r2 != ctx->r17) {
        // 0x80245430: or          $s3, $s1, $zero
        ctx->r19 = ctx->r17 | 0;
            goto L_80245464;
    }
    // 0x80245430: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
    // 0x80245434: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80245438: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8024543C: negu        $a1, $t0
    ctx->r5 = SUB32(0, ctx->r8);
    // 0x80245440: sll         $t2, $a1, 1
    ctx->r10 = S32(ctx->r5 << 1);
    // 0x80245444: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80245448: addiu       $a1, $t2, 0x100
    ctx->r5 = ADD32(ctx->r10, 0X100);
    // 0x8024544C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x80245450: jal         0x80244AC0
    // 0x80245454: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    static_3_80244AC0(rdram, ctx);
        goto after_1;
    // 0x80245454: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    after_1:
    // 0x80245458: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x8024545C: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80245460: sb          $v0, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r2;
L_80245464:
    // 0x80245464: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80245468: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8024546C: sll         $s4, $v1, 3
    ctx->r20 = S32(ctx->r3 << 3);
L_80245470:
    // 0x80245470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80245474: bne         $v0, $s3, L_802454D4
    if (ctx->r2 != ctx->r19) {
        // 0x80245478: or          $a3, $s1, $zero
        ctx->r7 = ctx->r17 | 0;
            goto L_802454D4;
    }
    // 0x80245478: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x8024547C: lw          $t4, 0x54($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X54);
    // 0x80245480: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245484: addu        $t5, $t4, $s4
    ctx->r13 = ADD32(ctx->r12, ctx->r20);
    // 0x80245488: addu        $a2, $t5, $s0
    ctx->r6 = ADD32(ctx->r13, ctx->r16);
    // 0x8024548C: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x80245490: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245494: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80245498: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8024549C: jal         0x80246660
    // 0x802454A0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_80246660(rdram, ctx);
        goto after_2;
    // 0x802454A0: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_2:
    // 0x802454A4: lw          $t7, 0x58($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X58);
    // 0x802454A8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802454AC: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x802454B0: addu        $a2, $t8, $s0
    ctx->r6 = ADD32(ctx->r24, ctx->r16);
    // 0x802454B4: andi        $t9, $a2, 0xFFFF
    ctx->r25 = ctx->r6 & 0XFFFF;
    // 0x802454B8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802454BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802454C0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802454C4: jal         0x80246660
    // 0x802454C8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_80246660(rdram, ctx);
        goto after_3;
    // 0x802454C8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_3:
    // 0x802454CC: b           L_802454F8
    // 0x802454D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_802454F8;
    // 0x802454D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802454D4:
    // 0x802454D4: lw          $t1, 0x54($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X54);
    // 0x802454D8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802454DC: addu        $t0, $t1, $s4
    ctx->r8 = ADD32(ctx->r9, ctx->r20);
    // 0x802454E0: addu        $a2, $t0, $s0
    ctx->r6 = ADD32(ctx->r8, ctx->r16);
    // 0x802454E4: andi        $t2, $a2, 0xFFFF
    ctx->r10 = ctx->r6 & 0XFFFF;
    // 0x802454E8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802454EC: jal         0x80245710
    // 0x802454F0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    static_3_80245710(rdram, ctx);
        goto after_4;
    // 0x802454F0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_4:
    // 0x802454F4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802454F8:
    // 0x802454F8: beq         $v0, $zero, L_80245508
    if (ctx->r2 == 0) {
        // 0x802454FC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80245508;
    }
    // 0x802454FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80245500: b           L_80245630
    // 0x80245504: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80245630;
    // 0x80245504: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80245508:
    // 0x80245508: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x8024550C: bne         $at, $zero, L_80245470
    if (ctx->r1 != 0) {
        // 0x80245510: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_80245470;
    }
    // 0x80245510: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x80245514: bne         $s3, $zero, L_80245630
    if (ctx->r19 != 0) {
        // 0x80245518: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80245630;
    }
    // 0x80245518: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024551C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80245520: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80245524: negu        $a1, $t4
    ctx->r5 = SUB32(0, ctx->r12);
    // 0x80245528: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8024552C: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80245530: addiu       $a1, $t6, 0x100
    ctx->r5 = ADD32(ctx->r14, 0X100);
    // 0x80245534: jal         0x80244AC0
    // 0x80245538: addu        $a0, $t3, $t5
    ctx->r4 = ADD32(ctx->r11, ctx->r13);
    static_3_80244AC0(rdram, ctx);
        goto after_5;
    // 0x80245538: addu        $a0, $t3, $t5
    ctx->r4 = ADD32(ctx->r11, ctx->r13);
    after_5:
    // 0x8024553C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80245540: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80245544: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x80245548: andi        $s3, $v0, 0xFF
    ctx->r19 = ctx->r2 & 0XFF;
    // 0x8024554C: beq         $t7, $t9, L_802455F0
    if (ctx->r15 == ctx->r25) {
        // 0x80245550: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_802455F0;
    }
    // 0x80245550: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80245554: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80245558: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_8024555C:
    // 0x8024555C: lw          $t1, 0x58($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X58);
    // 0x80245560: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245564: addu        $t0, $t1, $s4
    ctx->r8 = ADD32(ctx->r9, ctx->r20);
    // 0x80245568: addu        $a2, $t0, $s0
    ctx->r6 = ADD32(ctx->r8, ctx->r16);
    // 0x8024556C: andi        $t2, $a2, 0xFFFF
    ctx->r10 = ctx->r6 & 0XFFFF;
    // 0x80245570: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245574: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80245578: jal         0x80245710
    // 0x8024557C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_80245710(rdram, ctx);
        goto after_6;
    // 0x8024557C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_6:
    // 0x80245580: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80245584: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80245588: bne         $at, $zero, L_8024555C
    if (ctx->r1 != 0) {
        // 0x8024558C: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_8024555C;
    }
    // 0x8024558C: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x80245590: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80245594: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80245598: lbu         $t5, 0x1($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X1);
    // 0x8024559C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802455A0: beq         $s3, $t5, L_802455B4
    if (ctx->r19 == ctx->r13) {
        // 0x802455A4: addiu       $s3, $zero, 0x8
        ctx->r19 = ADD32(0, 0X8);
            goto L_802455B4;
    }
    // 0x802455A4: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
    // 0x802455A8: b           L_80245630
    // 0x802455AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80245630;
    // 0x802455AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802455B0: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_802455B4:
    // 0x802455B4: lw          $t4, 0x54($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X54);
    // 0x802455B8: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x802455BC: addu        $t6, $t4, $s4
    ctx->r14 = ADD32(ctx->r12, ctx->r20);
    // 0x802455C0: addu        $a2, $t6, $s0
    ctx->r6 = ADD32(ctx->r14, ctx->r16);
    // 0x802455C4: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x802455C8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x802455CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802455D0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802455D4: jal         0x80246660
    // 0x802455D8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_80246660(rdram, ctx);
        goto after_7;
    // 0x802455D8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_7:
    // 0x802455DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802455E0: bne         $s0, $s3, L_802455B4
    if (ctx->r16 != ctx->r19) {
        // 0x802455E4: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_802455B4;
    }
    // 0x802455E4: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x802455E8: b           L_80245630
    // 0x802455EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80245630;
    // 0x802455EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802455F0:
    // 0x802455F0: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x802455F4: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_802455F8:
    // 0x802455F8: lw          $t9, 0x58($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X58);
    // 0x802455FC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245600: addu        $t8, $t9, $s4
    ctx->r24 = ADD32(ctx->r25, ctx->r20);
    // 0x80245604: addu        $a2, $t8, $s0
    ctx->r6 = ADD32(ctx->r24, ctx->r16);
    // 0x80245608: andi        $t1, $a2, 0xFFFF
    ctx->r9 = ctx->r6 & 0XFFFF;
    // 0x8024560C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245610: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80245614: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80245618: jal         0x80246660
    // 0x8024561C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_80246660(rdram, ctx);
        goto after_8;
    // 0x8024561C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_8:
    // 0x80245620: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80245624: bne         $s0, $s3, L_802455F8
    if (ctx->r16 != ctx->r19) {
        // 0x80245628: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_802455F8;
    }
    // 0x80245628: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x8024562C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80245630:
    // 0x80245630: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80245634:
    // 0x80245634: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80245638: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024563C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80245640: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80245644: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80245648: jr          $ra
    // 0x8024564C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024564C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_80205E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205E70: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80205E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205E78: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80205E7C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80205E80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80205E84: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80205E88: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80205E8C: jal         0x80231C58
    // 0x80205E90: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205E90: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80205E94: bne         $v0, $zero, L_80205F00
    if (ctx->r2 != 0) {
        // 0x80205E98: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_80205F00;
    }
    // 0x80205E98: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80205E9C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80205EA0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80205EA4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80205EA8: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80205EAC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80205EB0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80205EB4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205EB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80205EBC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80205EC0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80205EC4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205EC8: bne         $t0, $zero, L_80205EE8
    if (ctx->r8 != 0) {
        // 0x80205ECC: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_80205EE8;
    }
    // 0x80205ECC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80205ED0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205ED4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80205ED8: jal         0x80231A24
    // 0x80205EDC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80205EDC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80205EE0: b           L_80205F04
    // 0x80205EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80205F04;
    // 0x80205EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205EE8:
    // 0x80205EE8: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80205EEC: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80205EF0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205EF4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80205EF8: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80205EFC: sh          $a3, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r7;
L_80205F00:
    // 0x80205F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205F04:
    // 0x80205F04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205F08: jr          $ra
    // 0x80205F0C: nop

    return;
    // 0x80205F0C: nop

;}
RECOMP_FUNC void D_80237100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237100: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80237104: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x80237108: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8023710C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80237110: beq         $v0, $zero, L_8023711C
    if (ctx->r2 == 0) {
        // 0x80237114: nop
    
            goto L_8023711C;
    }
    // 0x80237114: nop

    // 0x80237118: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
L_8023711C:
    // 0x8023711C: jr          $ra
    // 0x80237120: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    return;
    // 0x80237120: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void D_8022A080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A080: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022A084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A088: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8022A08C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8022A090: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022A094: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8022A098: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8022A09C: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A0A0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022A0A4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8022A0A8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A0AC: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8022A0B0: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8022A0B4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8022A0B8: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8022A0BC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8022A0C0: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A0C4: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x8022A0C8: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A0CC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x8022A0D0: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8022A0D4: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8022A0D8: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A0DC: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x8022A0E0: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A0E4: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x8022A0E8: lwc1        $f16, 0x28($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A0EC: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8022A0F0: lwc1        $f18, 0x2C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8022A0F4: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x8022A0F8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8022A0FC: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8022A100: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8022A104: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8022A108: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A10C: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8022A110: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8022A114: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8022A118: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8022A11C: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8022A120: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8022A124: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x8022A128: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A12C: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A130: mul.s       $f8, $f12, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x8022A134: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A138: mul.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x8022A13C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8022A140: mul.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8022A144: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8022A148: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8022A14C: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8022A150: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x8022A154: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A158: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A15C: mul.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8022A160: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A164: mul.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x8022A168: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8022A16C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8022A170: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8022A174: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8022A178: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022A17C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8022A180: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8022A184: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8022A188: mul.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x8022A18C: lwc1        $f16, 0x2C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8022A190: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8022A194: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8022A198: mul.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8022A19C: lwc1        $f10, 0x3C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8022A1A0: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8022A1A4: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8022A1A8: jal         0x80228DE0
    // 0x8022A1AC: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x8022A1AC: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8022A1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A1B4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8022A1B8: jr          $ra
    // 0x8022A1BC: nop

    return;
    // 0x8022A1BC: nop

;}
RECOMP_FUNC void D_802B9350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B93D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802B93D4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802B93D8: lh          $t6, 0x6C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6C);
    // 0x802B93DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802B93E0: bgez        $t6, L_802B93F0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802B93E4: nop
    
            goto L_802B93F0;
    }
    // 0x802B93E4: nop

    // 0x802B93E8: jr          $ra
    // 0x802B93EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802B93EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802B93F0:
    // 0x802B93F0: jr          $ra
    // 0x802B93F4: nop

    return;
    // 0x802B93F4: nop

;}
RECOMP_FUNC void D_80295D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295DA8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80295DAC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80295DB0: lh          $t6, 0x608($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X608);
    // 0x80295DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80295DB8: bgez        $t6, L_80295DC8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80295DBC: nop
    
            goto L_80295DC8;
    }
    // 0x80295DBC: nop

    // 0x80295DC0: jr          $ra
    // 0x80295DC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80295DC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80295DC8:
    // 0x80295DC8: jr          $ra
    // 0x80295DCC: nop

    return;
    // 0x80295DCC: nop

;}
RECOMP_FUNC void D_802E0A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0AA8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E0AAC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E0AB0: jr          $ra
    // 0x802E0AB4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E0AB4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802C8ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8B3C: jr          $ra
    // 0x802C8B40: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    return;
    // 0x802C8B40: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void D_802E4CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E4D34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802E4D38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E4D3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E4D40: lwc1        $f6, 0xDBC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XDBC);
    // 0x802E4D44: lwc1        $f4, 0xDC0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XDC0);
    // 0x802E4D48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E4D4C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802E4D50: nop

    // 0x802E4D54: bc1fl       L_802E4EA4
    if (!c1cs) {
        // 0x802E4D58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802E4EA4;
    }
    goto skip_0;
    // 0x802E4D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802E4D5C: lbu         $t6, 0xDBA($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDBA);
    // 0x802E4D60: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802E4D64: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802E4D68: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x802E4D6C: bne         $v0, $at, L_802E4DF8
    if (ctx->r2 != ctx->r1) {
        // 0x802E4D70: sb          $t7, 0xDBA($a0)
        MEM_B(0XDBA, ctx->r4) = ctx->r15;
            goto L_802E4DF8;
    }
    // 0x802E4D70: sb          $t7, 0xDBA($a0)
    MEM_B(0XDBA, ctx->r4) = ctx->r15;
    // 0x802E4D74: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E4D78: jal         0x80231A24
    // 0x802E4D7C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E4D7C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802E4D80: lbu         $t8, 0xDF1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XDF1);
    // 0x802E4D84: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802E4D88: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E4D8C: bnel        $t8, $zero, L_802E4DF8
    if (ctx->r24 != 0) {
        // 0x802E4D90: lbu         $v0, 0xDBA($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XDBA);
            goto L_802E4DF8;
    }
    goto skip_1;
    // 0x802E4D90: lbu         $v0, 0xDBA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDBA);
    skip_1:
    // 0x802E4D94: sb          $t9, 0xDF1($s0)
    MEM_B(0XDF1, ctx->r16) = ctx->r25;
    // 0x802E4D98: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E4D9C: jal         0x80302980
    // 0x802E4DA0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_1;
    // 0x802E4DA0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802E4DA4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E4DA8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E4DAC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802E4DB0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E4DB4: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    // 0x802E4DB8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802E4DBC: jal         0x80302988
    // 0x802E4DC0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_2;
    // 0x802E4DC0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802E4DC4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E4DC8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E4DCC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802E4DD0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E4DD4: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    // 0x802E4DD8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802E4DDC: jal         0x80302988
    // 0x802E4DE0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_3;
    // 0x802E4DE0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802E4DE4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E4DE8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E4DEC: jal         0x80302A7C
    // 0x802E4DF0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_4;
    // 0x802E4DF0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802E4DF4: lbu         $v0, 0xDBA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDBA);
L_802E4DF8:
    // 0x802E4DF8: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802E4DFC: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x802E4E00: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802E4E04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802E4E08: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802E4E0C: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x802E4E10: bne         $v1, $at, L_802E4E34
    if (ctx->r3 != ctx->r1) {
        // 0x802E4E14: sb          $t0, 0xDB9($s0)
        MEM_B(0XDB9, ctx->r16) = ctx->r8;
            goto L_802E4E34;
    }
    // 0x802E4E14: sb          $t0, 0xDB9($s0)
    MEM_B(0XDB9, ctx->r16) = ctx->r8;
    // 0x802E4E18: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E4E1C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802E4E20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E4E24: jal         0x802D6E44
    // 0x802E4E28: lui         $a2, 0x43F0
    ctx->r6 = S32(0X43F0 << 16);
    static_3_802D6E44(rdram, ctx);
        goto after_5;
    // 0x802E4E28: lui         $a2, 0x43F0
    ctx->r6 = S32(0X43F0 << 16);
    after_5:
    // 0x802E4E2C: b           L_802E4E68
    // 0x802E4E30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
        goto L_802E4E68;
    // 0x802E4E30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_802E4E34:
    // 0x802E4E34: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802E4E38: bne         $v1, $at, L_802E4E5C
    if (ctx->r3 != ctx->r1) {
        // 0x802E4E3C: addiu       $a0, $s0, 0x1A4
        ctx->r4 = ADD32(ctx->r16, 0X1A4);
            goto L_802E4E5C;
    }
    // 0x802E4E3C: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802E4E40: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E4E44: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802E4E48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802E4E4C: jal         0x802D6E44
    // 0x802E4E50: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    static_3_802D6E44(rdram, ctx);
        goto after_6;
    // 0x802E4E50: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    after_6:
    // 0x802E4E54: b           L_802E4E68
    // 0x802E4E58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
        goto L_802E4E68;
    // 0x802E4E58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_802E4E5C:
    // 0x802E4E5C: jal         0x802D6F20
    // 0x802E4E60: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D6F20(rdram, ctx);
        goto after_7;
    // 0x802E4E60: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_7:
    // 0x802E4E64: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_802E4E68:
    // 0x802E4E68: lbu         $t1, 0xDBA($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XDBA);
    // 0x802E4E6C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802E4E70: swc1        $f0, 0xDBC($s0)
    MEM_W(0XDBC, ctx->r16) = ctx->f0.u32l;
    // 0x802E4E74: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802E4E78: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802E4E7C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802E4E80: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x802E4E84: bgez        $t2, L_802E4E98
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802E4E88: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802E4E98;
    }
    // 0x802E4E88: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802E4E8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802E4E90: nop

    // 0x802E4E94: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_802E4E98:
    // 0x802E4E98: swc1        $f10, 0xDC0($s0)
    MEM_W(0XDC0, ctx->r16) = ctx->f10.u32l;
    // 0x802E4E9C: swc1        $f0, 0xDD0($s0)
    MEM_W(0XDD0, ctx->r16) = ctx->f0.u32l;
    // 0x802E4EA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E4EA4:
    // 0x802E4EA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E4EA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802E4EAC: jr          $ra
    // 0x802E4EB0: nop

    return;
    // 0x802E4EB0: nop

;}
RECOMP_FUNC void D_802D8064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D80E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D80E8: jr          $ra
    // 0x802D80EC: sb          $a1, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r5;
    return;
    // 0x802D80EC: sb          $a1, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802296BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802296BC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802296C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802296C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802296C8: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x802296CC: swc1        $f2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f2.u32l;
    // 0x802296D0: swc1        $f2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f2.u32l;
    // 0x802296D4: swc1        $f2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f2.u32l;
    // 0x802296D8: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x802296DC: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x802296E0: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x802296E4: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    // 0x802296E8: swc1        $f2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f2.u32l;
    // 0x802296EC: swc1        $f2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f2.u32l;
    // 0x802296F0: swc1        $f2, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f2.u32l;
    // 0x802296F4: swc1        $f2, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f2.u32l;
    // 0x802296F8: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x802296FC: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x80229700: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x80229704: jr          $ra
    // 0x80229708: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x80229708: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void D_802A24F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2578: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802A257C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A2580: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802A2584: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802A2588: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802A258C: lwc1        $f2, 0x124($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X124);
    // 0x802A2590: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A2594: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x802A2598: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A259C: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x802A25A0: nop

    // 0x802A25A4: bc1fl       L_802A2628
    if (!c1cs) {
        // 0x802A25A8: sub.s       $f10, $f20, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f2.fl;
            goto L_802A2628;
    }
    goto skip_0;
    // 0x802A25A8: sub.s       $f10, $f20, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f2.fl;
    skip_0:
    // 0x802A25AC: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x802A25B0: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x802A25B4: swc1        $f20, 0x124($a0)
    MEM_W(0X124, ctx->r4) = ctx->f20.u32l;
    // 0x802A25B8: beq         $v0, $at, L_802A25C8
    if (ctx->r2 == ctx->r1) {
        // 0x802A25BC: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_802A25C8;
    }
    // 0x802A25BC: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x802A25C0: bne         $v0, $at, L_802A25D8
    if (ctx->r2 != ctx->r1) {
        // 0x802A25C4: nop
    
            goto L_802A25D8;
    }
    // 0x802A25C4: nop

L_802A25C8:
    // 0x802A25C8: jal         0x8023499C
    // 0x802A25CC: nop

    static_3_8023499C(rdram, ctx);
        goto after_0;
    // 0x802A25CC: nop

    after_0:
    // 0x802A25D0: b           L_802A25FC
    // 0x802A25D4: swc1        $f0, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f0.u32l;
        goto L_802A25FC;
    // 0x802A25D4: swc1        $f0, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f0.u32l;
L_802A25D8:
    // 0x802A25D8: jal         0x8023499C
    // 0x802A25DC: nop

    static_3_8023499C(rdram, ctx);
        goto after_1;
    // 0x802A25DC: nop

    after_1:
    // 0x802A25E0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A25E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A25E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A25EC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A25F0: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802A25F4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802A25F8: swc1        $f16, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f16.u32l;
L_802A25FC:
    // 0x802A25FC: jal         0x8023499C
    // 0x802A2600: nop

    static_3_8023499C(rdram, ctx);
        goto after_2;
    // 0x802A2600: nop

    after_2:
    // 0x802A2604: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A2608: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A260C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A2610: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A2614: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x802A2618: lwc1        $f2, 0x124($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X124);
    // 0x802A261C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A2620: swc1        $f8, 0x100($s0)
    MEM_W(0X100, ctx->r16) = ctx->f8.u32l;
    // 0x802A2624: sub.s       $f10, $f20, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f2.fl;
L_802A2628:
    // 0x802A2628: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A262C: ldc1        $f16, 0x0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, 0X0);
    // 0x802A2630: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802A2634: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x802A2638: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802A263C: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x802A2640: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A2644: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x802A2648: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A264C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802A2650: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x802A2654: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A2658: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A265C: div.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f0.d, ctx->f6.d);
    // 0x802A2660: lwc1        $f6, 0xE8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x802A2664: add.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
    // 0x802A2668: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A266C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A2670: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    // 0x802A2674: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x802A2678: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A267C: div.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A2680: lwc1        $f4, 0xE4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x802A2684: lwc1        $f6, 0x64($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A2688: swc1        $f6, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f6.u32l;
    // 0x802A268C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802A2690: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802A2694: nop

    // 0x802A2698: mul.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802A269C: add.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x802A26A0: jal         0x8022970C
    // 0x802A26A4: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802A26A4: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    after_3:
    // 0x802A26A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A26AC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A26B0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802A26B4: jal         0x80300424
    // 0x802A26B8: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    static_3_80300424(rdram, ctx);
        goto after_4;
    // 0x802A26B8: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_4:
    // 0x802A26BC: lwc1        $f16, 0xE0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x802A26C0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802A26C4: swc1        $f18, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f18.u32l;
    // 0x802A26C8: jal         0x80300424
    // 0x802A26CC: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    static_3_80300424(rdram, ctx);
        goto after_5;
    // 0x802A26CC: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    after_5:
    // 0x802A26D0: lwc1        $f4, 0xE0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x802A26D4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A26D8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A26DC: swc1        $f6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f6.u32l;
    // 0x802A26E0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x802A26E4: jal         0x802D01D4
    // 0x802A26E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x802A26E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x802A26EC: lwc1        $f10, 0x11C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x802A26F0: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802A26F4: lwc1        $f18, 0x120($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X120);
    // 0x802A26F8: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x802A26FC: lwc1        $f10, 0xEC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x802A2700: div.s       $f8, $f20, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f20.fl, ctx->f10.fl);
    // 0x802A2704: swc1        $f16, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f16.u32l;
    // 0x802A2708: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802A270C: lwc1        $f16, 0x11C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x802A2710: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802A2714: swc1        $f6, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->f6.u32l;
    // 0x802A2718: jal         0x80300424
    // 0x802A271C: add.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f16.fl;
    static_3_80300424(rdram, ctx);
        goto after_7;
    // 0x802A271C: add.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f16.fl;
    after_7:
    // 0x802A2720: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x802A2724: lwc1        $f18, 0xF0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XF0);
    // 0x802A2728: lwc1        $f6, 0x120($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X120);
    // 0x802A272C: div.s       $f4, $f20, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f20.fl, ctx->f18.fl);
    // 0x802A2730: jal         0x80300424
    // 0x802A2734: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    static_3_80300424(rdram, ctx);
        goto after_8;
    // 0x802A2734: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_8:
    // 0x802A2738: lwc1        $f10, 0x124($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X124);
    // 0x802A273C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802A2740: lwc1        $f18, 0xF4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x802A2744: sub.s       $f2, $f20, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f10.fl;
    // 0x802A2748: lwc1        $f6, 0xFC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XFC);
    // 0x802A274C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802A2750: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802A2754: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A2758: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802A275C: lwc1        $f16, 0xF8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802A2760: add.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x802A2764: lwc1        $f6, 0x100($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X100);
    // 0x802A2768: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802A276C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A2770: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802A2774: div.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802A2778: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802A277C: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802A2780: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802A2784: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x802A2788: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802A278C: jal         0x802D01D4
    // 0x802A2790: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_9;
    // 0x802A2790: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x802A2794: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A2798: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802A279C: jal         0x802D01D4
    // 0x802A27A0: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    static_3_802D01D4(rdram, ctx);
        goto after_10;
    // 0x802A27A0: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_10:
    // 0x802A27A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A27A8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A27AC: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802A27B0: lwc1        $f18, 0x124($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X124);
    // 0x802A27B4: lwc1        $f0, 0x114($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X114);
    // 0x802A27B8: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x802A27BC: sub.s       $f4, $f20, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f18.fl;
    // 0x802A27C0: lw          $t6, 0xDC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XDC);
    // 0x802A27C4: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x802A27C8: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802A27CC: sub.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802A27D0: bne         $t6, $at, L_802A2804
    if (ctx->r14 != ctx->r1) {
        // 0x802A27D4: swc1        $f16, 0x64($s0)
        MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
            goto L_802A2804;
    }
    // 0x802A27D4: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    // 0x802A27D8: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x802A27DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A27E0: nop

    // 0x802A27E4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802A27E8: nop

    // 0x802A27EC: bc1fl       L_802A2808
    if (!c1cs) {
        // 0x802A27F0: lui         $at, 0xC348
        ctx->r1 = S32(0XC348 << 16);
            goto L_802A2808;
    }
    goto skip_1;
    // 0x802A27F0: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    skip_1:
    // 0x802A27F4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802A27F8: swc1        $f20, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f20.u32l;
    // 0x802A27FC: b           L_802A282C
    // 0x802A2800: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
        goto L_802A282C;
    // 0x802A2800: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
L_802A2804:
    // 0x802A2804: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
L_802A2808:
    // 0x802A2808: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A280C: nop

    // 0x802A2810: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802A2814: nop

    // 0x802A2818: bc1fl       L_802A2830
    if (!c1cs) {
        // 0x802A281C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802A2830;
    }
    goto skip_2;
    // 0x802A281C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x802A2820: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A2824: swc1        $f20, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f20.u32l;
    // 0x802A2828: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
L_802A282C:
    // 0x802A282C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802A2830:
    // 0x802A2830: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802A2834: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802A2838: jr          $ra
    // 0x802A283C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x802A283C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_802B7BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B7C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7C84: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7C88: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B7C8C: beq         $t6, $zero, L_802B7CA0
    if (ctx->r14 == 0) {
        // 0x802B7C90: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B7CA0;
    }
    // 0x802B7C90: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B7C94: jal         0x80303578
    // 0x802B7C98: addiu       $a0, $a0, 0xD0C
    ctx->r4 = ADD32(ctx->r4, 0XD0C);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B7C98: addiu       $a0, $a0, 0xD0C
    ctx->r4 = ADD32(ctx->r4, 0XD0C);
    after_0:
    // 0x802B7C9C: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B7CA0:
    // 0x802B7CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B7CA8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B7CAC: jr          $ra
    // 0x802B7CB0: nop

    return;
    // 0x802B7CB0: nop

;}
RECOMP_FUNC void D_802055F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802055F0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802055F4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802055F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802055FC: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x80205600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205604: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80205608: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x8020560C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205610: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80205614: beq         $t8, $zero, L_80205620
    if (ctx->r24 == 0) {
        // 0x80205618: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80205620;
    }
    // 0x80205618: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8020561C: addiu       $a2, $v0, 0x1
    ctx->r6 = ADD32(ctx->r2, 0X1);
L_80205620:
    // 0x80205620: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80205624: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80205628: jal         0x80237F60
    // 0x8020562C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80237F60(rdram, ctx);
        goto after_0;
    // 0x8020562C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80205630: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80205634: beq         $v0, $zero, L_80205650
    if (ctx->r2 == 0) {
        // 0x80205638: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_80205650;
    }
    // 0x80205638: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8020563C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80205640: jal         0x802057FC
    // 0x80205644: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_802057FC(rdram, ctx);
        goto after_1;
    // 0x80205644: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x80205648: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8020564C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_80205650:
    // 0x80205650: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80205654: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80205658: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020565C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80205660: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x80205664: jal         0x8022B460
    // 0x80205668: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    func_8022B460(rdram, ctx);
        goto after_2;
    // 0x80205668: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    after_2:
    // 0x8020566C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205670: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80205674: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80205678: jal         0x802384CC
    // 0x8020567C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802384CC(rdram, ctx);
        goto after_3;
    // 0x8020567C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x80205680: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205684: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80205688: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8020568C: jal         0x80237F20
    // 0x80205690: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_80237F20(rdram, ctx);
        goto after_4;
    // 0x80205690: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_4:
    // 0x80205694: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205698: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8020569C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802056A0: jal         0x80238A30
    // 0x802056A4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80238A30(rdram, ctx);
        goto after_5;
    // 0x802056A4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_5:
    // 0x802056A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802056AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802056B0: jr          $ra
    // 0x802056B4: nop

    return;
    // 0x802056B4: nop

;}
RECOMP_FUNC void D_802448F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802448F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802448F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802448F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802448FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80244900: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80244904: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80244908: jal         0x80241760
    // 0x8024490C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8024490C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80244910: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80244914: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80244918: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8024491C: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x80244920: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80244924: bne         $at, $zero, L_80244988
    if (ctx->r1 != 0) {
        // 0x80244928: nop
    
            goto L_80244988;
    }
    // 0x80244928: nop

L_8024492C:
    // 0x8024492C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80244930: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80244934: bne         $t9, $at, L_80244960
    if (ctx->r25 != ctx->r1) {
        // 0x80244938: nop
    
            goto L_80244960;
    }
    // 0x80244938: nop

    // 0x8024493C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80244940: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80244944: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80244948: sh          $t0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r8;
    // 0x8024494C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80244950: jal         0x80241DFC
    // 0x80244954: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    static_3_80241DFC(rdram, ctx);
        goto after_1;
    // 0x80244954: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x80244958: b           L_80244970
    // 0x8024495C: nop

        goto L_80244970;
    // 0x8024495C: nop

L_80244960:
    // 0x80244960: jal         0x80241780
    // 0x80244964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_2;
    // 0x80244964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80244968: b           L_80244A2C
    // 0x8024496C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80244A2C;
    // 0x8024496C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80244970:
    // 0x80244970: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80244974: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x80244978: lw          $t4, 0x10($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X10);
    // 0x8024497C: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80244980: beq         $at, $zero, L_8024492C
    if (ctx->r1 == 0) {
        // 0x80244984: nop
    
            goto L_8024492C;
    }
    // 0x80244984: nop

L_80244988:
    // 0x80244988: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8024498C: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x80244990: lw          $t7, 0x10($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X10);
    // 0x80244994: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80244998: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8024499C: div         $zero, $t9, $t7
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r15)));
    // 0x802449A0: mfhi        $t0
    ctx->r8 = hi;
    // 0x802449A4: sw          $t0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r8;
    // 0x802449A8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x802449AC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802449B0: bne         $t7, $zero, L_802449BC
    if (ctx->r15 != 0) {
        // 0x802449B4: nop
    
            goto L_802449BC;
    }
    // 0x802449B4: nop

    // 0x802449B8: break       7
    do_break(2149861816);
L_802449BC:
    // 0x802449BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802449C0: bne         $t7, $at, L_802449D4
    if (ctx->r15 != ctx->r1) {
        // 0x802449C4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802449D4;
    }
    // 0x802449C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802449C8: bne         $t9, $at, L_802449D4
    if (ctx->r25 != ctx->r1) {
        // 0x802449CC: nop
    
            goto L_802449D4;
    }
    // 0x802449CC: nop

    // 0x802449D0: break       6
    do_break(2149861840);
L_802449D4:
    // 0x802449D4: lw          $t4, 0xC($t2)
    ctx->r12 = MEM_W(ctx->r10, 0XC);
    // 0x802449D8: lw          $t3, 0x14($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X14);
    // 0x802449DC: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x802449E0: addu        $t8, $t3, $t6
    ctx->r24 = ADD32(ctx->r11, ctx->r14);
    // 0x802449E4: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x802449E8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x802449EC: lw          $t7, 0x8($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X8);
    // 0x802449F0: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x802449F4: sw          $t0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r8;
    // 0x802449F8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x802449FC: lw          $t2, 0x0($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X0);
    // 0x80244A00: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80244A04: beq         $t4, $zero, L_80244A20
    if (ctx->r12 == 0) {
        // 0x80244A08: nop
    
            goto L_80244A20;
    }
    // 0x80244A08: nop

    // 0x80244A0C: jal         0x80241F44
    // 0x80244A10: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    static_3_80241F44(rdram, ctx);
        goto after_3;
    // 0x80244A10: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_3:
    // 0x80244A14: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80244A18: jal         0x80237360
    // 0x80244A1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80237360(rdram, ctx);
        goto after_4;
    // 0x80244A1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
L_80244A20:
    // 0x80244A20: jal         0x80241780
    // 0x80244A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_5;
    // 0x80244A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80244A28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80244A2C:
    // 0x80244A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80244A30: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80244A34: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80244A38: jr          $ra
    // 0x80244A3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80244A3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8029229C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029231C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80292320: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80292324: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80292328: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8029232C: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x80292330: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x80292334: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80292338: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8029233C: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80292340: addiu       $t6, $sp, 0x40
    ctx->r14 = ADD32(ctx->r29, 0X40);
    // 0x80292344: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80292348: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x8029234C: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x80292350: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80292354: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80292358: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x8029235C: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x80292360: jal         0x802C51D0
    // 0x80292364: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80292364: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    after_0:
    // 0x80292368: lwc1        $f4, 0xE0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x8029236C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80292370: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80292374: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x80292378: lw          $t1, 0xE8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XE8);
    // 0x8029237C: lui         $a3, 0xC000
    ctx->r7 = S32(0XC000 << 16);
    // 0x80292380: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80292384: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x80292388: jal         0x8022A0D0
    // 0x8029238C: lw          $a1, 0x3C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X3C);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x8029238C: lw          $a1, 0x3C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X3C);
    after_1:
    // 0x80292390: lw          $t4, 0xE8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XE8);
    // 0x80292394: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80292398: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029239C: subu        $t9, $t5, $t4
    ctx->r25 = SUB32(ctx->r13, ctx->r12);
    // 0x802923A0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x802923A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802923A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802923AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802923B0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802923B4: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x802923B8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802923BC: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802923C0: nop

    // 0x802923C4: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x802923C8: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x802923CC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802923D0: jal         0x802D01D4
    // 0x802923D4: nop

    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802923D4: nop

    after_2:
    // 0x802923D8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802923DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802923E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802923E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802923E8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802923EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802923F0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802923F4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802923F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802923FC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80292400: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80292404: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80292408: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x8029240C: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80292410: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80292414: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80292418: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8029241C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80292420: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80292424: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80292428: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x8029242C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x80292430: jal         0x802AB018
    // 0x80292434: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    static_3_802AB018(rdram, ctx);
        goto after_3;
    // 0x80292434: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_3:
    // 0x80292438: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8029243C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80292440: swc1        $f4, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f4.u32l;
    // 0x80292444: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80292448: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8029244C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x80292450: jr          $ra
    // 0x80292454: nop

    return;
    // 0x80292454: nop

;}
