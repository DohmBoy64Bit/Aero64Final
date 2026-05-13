#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8022970C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022970C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80229710: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229714: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80229718: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8022971C: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x80229720: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80229724: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80229728: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8022972C: sw          $v1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r3;
    // 0x80229730: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80229734: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80229738: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x8022973C: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80229740: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80229744: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x80229748: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x8022974C: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x80229750: jr          $ra
    // 0x80229754: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    return;
    // 0x80229754: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
;}
RECOMP_FUNC void D_802EF5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF670: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802EF674: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802EF678: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EF67C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802EF680: bne         $a0, $zero, L_802EF698
    if (ctx->r4 != 0) {
        // 0x802EF684: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_802EF698;
    }
    // 0x802EF684: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802EF688: jal         0x802C67EC
    // 0x802EF68C: addiu       $a0, $zero, 0x1DC
    ctx->r4 = ADD32(0, 0X1DC);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EF68C: addiu       $a0, $zero, 0x1DC
    ctx->r4 = ADD32(0, 0X1DC);
    after_0:
    // 0x802EF690: beq         $v0, $zero, L_802EF838
    if (ctx->r2 == 0) {
        // 0x802EF694: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802EF838;
    }
    // 0x802EF694: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802EF698:
    // 0x802EF698: jal         0x8031F5A0
    // 0x802EF69C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031F5A0(rdram, ctx);
        goto after_1;
    // 0x802EF69C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802EF6A0: addiu       $a0, $s0, 0xEC
    ctx->r4 = ADD32(ctx->r16, 0XEC);
    // 0x802EF6A4: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802EF6A8: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802EF6AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802EF6B0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802EF6B4: jal         0x802C6930
    // 0x802EF6B8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802EF6B8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802EF6BC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802EF6C0: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
    // 0x802EF6C4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x802EF6C8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802EF6CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EF6D0: lw          $s1, 0xB0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF6D4: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x802EF6D8: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802EF6DC: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x802EF6E0: addiu       $t0, $zero, 0x199
    ctx->r8 = ADD32(0, 0X199);
    // 0x802EF6E4: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x802EF6E8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802EF6EC: sh          $t8, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r24;
    // 0x802EF6F0: sh          $t9, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r25;
    // 0x802EF6F4: sh          $t2, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = ctx->r10;
    // 0x802EF6F8: sh          $t1, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r9;
    // 0x802EF6FC: sh          $t0, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r8;
    // 0x802EF700: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x802EF704: sh          $v1, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r3;
    // 0x802EF708: sw          $t7, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r15;
    // 0x802EF70C: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x802EF710: lw          $t9, 0x54($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X54);
    // 0x802EF714: lh          $t3, 0x50($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X50);
    // 0x802EF718: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x802EF71C: jalr        $t9
    // 0x802EF720: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802EF720: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_3:
    // 0x802EF724: lw          $s1, 0xB0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF728: lui         $a1, 0x4020
    ctx->r5 = S32(0X4020 << 16);
    // 0x802EF72C: lw          $t9, 0x5C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X5C);
    // 0x802EF730: lh          $t4, 0x58($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X58);
    // 0x802EF734: jalr        $t9
    // 0x802EF738: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802EF738: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_4:
    // 0x802EF73C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802EF740: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EF744: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EF748: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EF74C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EF750: lw          $s1, 0xB0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF754: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EF758: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EF75C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802EF760: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802EF764: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802EF768: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EF76C: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x802EF770: nop

    // 0x802EF774: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    // 0x802EF778: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EF77C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EF780: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802EF784: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802EF788: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x802EF78C: nop

    // 0x802EF790: sh          $t7, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r15;
    // 0x802EF794: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EF798: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802EF79C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802EF7A0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EF7A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802EF7A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EF7AC: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802EF7B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802EF7B4: sh          $t9, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r25;
    // 0x802EF7B8: sh          $v0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r2;
    // 0x802EF7BC: sh          $v0, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = ctx->r2;
    // 0x802EF7C0: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x802EF7C4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EF7C8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802EF7CC: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    // 0x802EF7D0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x802EF7D4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802EF7D8: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
    // 0x802EF7DC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EF7E0: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x802EF7E4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x802EF7E8: sh          $t2, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r10;
    // 0x802EF7EC: sh          $t4, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r12;
    // 0x802EF7F0: lw          $t9, 0x64($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X64);
    // 0x802EF7F4: lh          $t5, 0x60($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X60);
    // 0x802EF7F8: jalr        $t9
    // 0x802EF7FC: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802EF7FC: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    after_5:
    // 0x802EF800: lw          $s1, 0xB0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF804: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x802EF808: lw          $t9, 0x6C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X6C);
    // 0x802EF80C: lh          $t6, 0x68($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X68);
    // 0x802EF810: jalr        $t9
    // 0x802EF814: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802EF814: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_6:
    // 0x802EF818: lw          $s1, 0xB0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF81C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802EF820: lw          $t9, 0x74($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X74);
    // 0x802EF824: lh          $t7, 0x70($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X70);
    // 0x802EF828: jalr        $t9
    // 0x802EF82C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802EF82C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_7:
    // 0x802EF830: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802EF834: sh          $t8, 0x70($s0)
    MEM_H(0X70, ctx->r16) = ctx->r24;
L_802EF838:
    // 0x802EF838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802EF83C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802EF840: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802EF844: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802EF848: jr          $ra
    // 0x802EF84C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802EF84C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8022B764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B764: beq         $a2, $zero, L_8022B7B0
    if (ctx->r6 == 0) {
        // 0x8022B768: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8022B7B0;
    }
    // 0x8022B768: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B76C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8022B770: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
L_8022B774:
    // 0x8022B774: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8022B778: lbu         $a1, 0x0($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X0);
    // 0x8022B77C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B780: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x8022B784: beq         $a0, $a1, L_8022B7A8
    if (ctx->r4 == ctx->r5) {
        // 0x8022B788: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8022B7A8;
    }
    // 0x8022B788: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B78C: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022B790: beq         $at, $zero, L_8022B7A0
    if (ctx->r1 == 0) {
        // 0x8022B794: nop
    
            goto L_8022B7A0;
    }
    // 0x8022B794: nop

    // 0x8022B798: jr          $ra
    // 0x8022B79C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8022B79C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8022B7A0:
    // 0x8022B7A0: jr          $ra
    // 0x8022B7A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8022B7A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B7A8:
    // 0x8022B7A8: bne         $at, $zero, L_8022B774
    if (ctx->r1 != 0) {
        // 0x8022B7AC: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8022B774;
    }
    // 0x8022B7AC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_8022B7B0:
    // 0x8022B7B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B7B4: jr          $ra
    // 0x8022B7B8: nop

    return;
    // 0x8022B7B8: nop

;}
RECOMP_FUNC void D_8029AE98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029AF18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8029AF1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8029AF20: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8029AF24: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029AF28: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8029AF2C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8029AF30: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8029AF34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8029AF38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029AF3C: jal         0x802CB994
    // 0x8029AF40: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_802CB994(rdram, ctx);
        goto after_0;
    // 0x8029AF40: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x8029AF44: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8029AF48: jal         0x802CB8E0
    // 0x8029AF4C: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    static_3_802CB8E0(rdram, ctx);
        goto after_1;
    // 0x8029AF4C: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    after_1:
    // 0x8029AF50: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8029AF54: addiu       $s1, $zero, 0x9D
    ctx->r17 = ADD32(0, 0X9D);
    // 0x8029AF58: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8029AF5C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8029AF60: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_8029AF64:
    // 0x8029AF64: lbu         $t6, 0x1B($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X1B);
    // 0x8029AF68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029AF6C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8029AF70: bne         $s0, $t6, L_8029AF94
    if (ctx->r16 != ctx->r14) {
        // 0x8029AF74: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029AF94;
    }
    // 0x8029AF74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029AF78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029AF7C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029AF80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029AF84: jal         0x8021E708
    // 0x8029AF88: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_2;
    // 0x8029AF88: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x8029AF8C: b           L_8029AFA0
    // 0x8029AF90: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
        goto L_8029AFA0;
    // 0x8029AF90: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
L_8029AF94:
    // 0x8029AF94: jal         0x8021E708
    // 0x8029AF98: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_3;
    // 0x8029AF98: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x8029AF9C: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
L_8029AFA0:
    // 0x8029AFA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8029AFA4: jal         0x8021E87C
    // 0x8029AFA8: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    static_3_8021E87C(rdram, ctx);
        goto after_4;
    // 0x8029AFA8: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    after_4:
    // 0x8029AFAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8029AFB0: addiu       $s1, $s1, -0x12
    ctx->r17 = ADD32(ctx->r17, -0X12);
    // 0x8029AFB4: bne         $s0, $s3, L_8029AF64
    if (ctx->r16 != ctx->r19) {
        // 0x8029AFB8: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8029AF64;
    }
    // 0x8029AFB8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8029AFBC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8029AFC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029AFC4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8029AFC8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8029AFCC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8029AFD0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8029AFD4: jr          $ra
    // 0x8029AFD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8029AFD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_8021ED60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021ED60: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x8021ED64: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8021ED68: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8021ED6C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8021ED70: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8021ED74: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8021ED78: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8021ED7C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8021ED80: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8021ED84: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8021ED88: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8021ED8C: sw          $a0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r4;
    // 0x8021ED90: sw          $a1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r5;
    // 0x8021ED94: sw          $a2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r6;
    // 0x8021ED98: sw          $a3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r7;
    // 0x8021ED9C: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x8021EDA0: addiu       $s1, $sp, 0x14C
    ctx->r17 = ADD32(ctx->r29, 0X14C);
    // 0x8021EDA4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021EDA8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021EDAC: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    // 0x8021EDB0: beq         $v1, $zero, L_8021F108
    if (ctx->r3 == 0) {
        // 0x8021EDB4: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_8021F108;
    }
    // 0x8021EDB4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8021EDB8: addiu       $fp, $sp, 0xE4
    ctx->r30 = ADD32(ctx->r29, 0XE4);
    // 0x8021EDBC: addiu       $s7, $zero, -0x4
    ctx->r23 = ADD32(0, -0X4);
    // 0x8021EDC0: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x8021EDC4: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x8021EDC8: addiu       $s4, $sp, 0xF0
    ctx->r20 = ADD32(ctx->r29, 0XF0);
    // 0x8021EDCC: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
L_8021EDD0:
    // 0x8021EDD0: bne         $s2, $zero, L_8021EE14
    if (ctx->r18 != 0) {
        // 0x8021EDD4: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_8021EE14;
    }
    // 0x8021EDD4: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x8021EDD8: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x8021EDDC: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x8021EDE0: bne         $a3, $at, L_8021EDFC
    if (ctx->r7 != ctx->r1) {
        // 0x8021EDE4: addu        $a1, $t7, $s0
        ctx->r5 = ADD32(ctx->r15, ctx->r16);
            goto L_8021EDFC;
    }
    // 0x8021EDE4: addu        $a1, $t7, $s0
    ctx->r5 = ADD32(ctx->r15, ctx->r16);
    // 0x8021EDE8: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8021EDEC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8021EDF0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8021EDF4: b           L_8021F0E8
    // 0x8021EDF8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_8021F0E8;
    // 0x8021EDF8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8021EDFC:
    // 0x8021EDFC: lw          $t8, 0xE4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE4);
    // 0x8021EE00: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x8021EE04: sb          $v1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r3;
    // 0x8021EE08: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x8021EE0C: b           L_8021F0E8
    // 0x8021EE10: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
        goto L_8021F0E8;
    // 0x8021EE10: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
L_8021EE14:
    // 0x8021EE14: bne         $a3, $at, L_8021EE30
    if (ctx->r7 != ctx->r1) {
        // 0x8021EE18: lw          $t1, 0x148($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X148);
            goto L_8021EE30;
    }
    // 0x8021EE18: lw          $t1, 0x148($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X148);
    // 0x8021EE1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021EE20: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x8021EE24: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
    // 0x8021EE28: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8021EE2C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_8021EE30:
    // 0x8021EE30: beq         $a3, $zero, L_8021F108
    if (ctx->r7 == 0) {
        // 0x8021EE34: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_8021F108;
    }
    // 0x8021EE34: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x8021EE38: bne         $a3, $at, L_8021EE54
    if (ctx->r7 != ctx->r1) {
        // 0x8021EE3C: lw          $t3, 0x148($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X148);
            goto L_8021EE54;
    }
    // 0x8021EE3C: lw          $t3, 0x148($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X148);
    // 0x8021EE40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021EE44: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x8021EE48: lbu         $v1, 0x0($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X0);
    // 0x8021EE4C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8021EE50: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_8021EE54:
    // 0x8021EE54: beq         $a3, $zero, L_8021F108
    if (ctx->r7 == 0) {
        // 0x8021EE58: slti        $at, $a3, 0x31
        ctx->r1 = SIGNED(ctx->r7) < 0X31 ? 1 : 0;
            goto L_8021F108;
    }
    // 0x8021EE58: slti        $at, $a3, 0x31
    ctx->r1 = SIGNED(ctx->r7) < 0X31 ? 1 : 0;
    // 0x8021EE5C: bne         $at, $zero, L_8021EED8
    if (ctx->r1 != 0) {
        // 0x8021EE60: slti        $at, $a3, 0x3A
        ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
            goto L_8021EED8;
    }
    // 0x8021EE60: slti        $at, $a3, 0x3A
    ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
    // 0x8021EE64: beq         $at, $zero, L_8021EED8
    if (ctx->r1 == 0) {
        // 0x8021EE68: addiu       $a0, $sp, 0x88
        ctx->r4 = ADD32(ctx->r29, 0X88);
            goto L_8021EED8;
    }
    // 0x8021EE68: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x8021EE6C: slti        $at, $a3, 0x30
    ctx->r1 = SIGNED(ctx->r7) < 0X30 ? 1 : 0;
    // 0x8021EE70: bne         $at, $zero, L_8021EEC0
    if (ctx->r1 != 0) {
        // 0x8021EE74: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8021EEC0;
    }
    // 0x8021EE74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021EE78: slti        $at, $a3, 0x3A
    ctx->r1 = SIGNED(ctx->r7) < 0X3A ? 1 : 0;
    // 0x8021EE7C: beq         $at, $zero, L_8021EEC0
    if (ctx->r1 == 0) {
        // 0x8021EE80: lw          $t5, 0x148($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X148);
            goto L_8021EEC0;
    }
    // 0x8021EE80: lw          $t5, 0x148($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X148);
    // 0x8021EE84: addiu       $t6, $sp, 0x88
    ctx->r14 = ADD32(ctx->r29, 0X88);
    // 0x8021EE88: addu        $v0, $zero, $t6
    ctx->r2 = ADD32(0, ctx->r14);
    // 0x8021EE8C: addu        $a1, $t5, $s0
    ctx->r5 = ADD32(ctx->r13, ctx->r16);
    // 0x8021EE90: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_8021EE94:
    // 0x8021EE94: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8021EE98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021EE9C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8021EEA0: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x8021EEA4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8021EEA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8021EEAC: bne         $at, $zero, L_8021EEC0
    if (ctx->r1 != 0) {
        // 0x8021EEB0: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_8021EEC0;
    }
    // 0x8021EEB0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8021EEB4: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x8021EEB8: bnel        $at, $zero, L_8021EE94
    if (ctx->r1 != 0) {
        // 0x8021EEBC: sb          $v1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r3;
            goto L_8021EE94;
    }
    goto skip_0;
    // 0x8021EEBC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    skip_0:
L_8021EEC0:
    // 0x8021EEC0: addu        $t7, $a0, $a2
    ctx->r15 = ADD32(ctx->r4, ctx->r6);
    // 0x8021EEC4: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x8021EEC8: jal         0x80230AF4
    // 0x8021EECC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    static_3_80230AF4(rdram, ctx);
        goto after_0;
    // 0x8021EECC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8021EED0: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x8021EED4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_8021EED8:
    // 0x8021EED8: beq         $a3, $zero, L_8021F108
    if (ctx->r7 == 0) {
        // 0x8021EEDC: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_8021F108;
    }
    // 0x8021EEDC: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x8021EEE0: bne         $a3, $at, L_8021EF4C
    if (ctx->r7 != ctx->r1) {
        // 0x8021EEE4: lw          $t9, 0x148($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X148);
            goto L_8021EF4C;
    }
    // 0x8021EEE4: lw          $t9, 0x148($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X148);
    // 0x8021EEE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021EEEC: addu        $a1, $t9, $s0
    ctx->r5 = ADD32(ctx->r25, ctx->r16);
    // 0x8021EEF0: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8021EEF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021EEF8: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x8021EEFC: bne         $at, $zero, L_8021EF44
    if (ctx->r1 != 0) {
        // 0x8021EF00: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_8021EF44;
    }
    // 0x8021EF00: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8021EF04: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x8021EF08: beq         $at, $zero, L_8021EF44
    if (ctx->r1 == 0) {
        // 0x8021EF0C: addiu       $t8, $sp, 0x88
        ctx->r24 = ADD32(ctx->r29, 0X88);
            goto L_8021EF44;
    }
    // 0x8021EF0C: addiu       $t8, $sp, 0x88
    ctx->r24 = ADD32(ctx->r29, 0X88);
    // 0x8021EF10: addu        $v0, $zero, $t8
    ctx->r2 = ADD32(0, ctx->r24);
    // 0x8021EF14: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_8021EF18:
    // 0x8021EF18: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8021EF1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021EF20: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8021EF24: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x8021EF28: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8021EF2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8021EF30: bne         $at, $zero, L_8021EF44
    if (ctx->r1 != 0) {
        // 0x8021EF34: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_8021EF44;
    }
    // 0x8021EF34: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8021EF38: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x8021EF3C: bnel        $at, $zero, L_8021EF18
    if (ctx->r1 != 0) {
        // 0x8021EF40: sb          $v1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r3;
            goto L_8021EF18;
    }
    goto skip_1;
    // 0x8021EF40: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    skip_1:
L_8021EF44:
    // 0x8021EF44: addu        $t0, $sp, $a2
    ctx->r8 = ADD32(ctx->r29, ctx->r6);
    // 0x8021EF48: sb          $zero, 0x88($t0)
    MEM_B(0X88, ctx->r8) = 0;
L_8021EF4C:
    // 0x8021EF4C: beq         $a3, $zero, L_8021F108
    if (ctx->r7 == 0) {
        // 0x8021EF50: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_8021F108;
    }
    // 0x8021EF50: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8021EF54: bne         $a3, $at, L_8021EF94
    if (ctx->r7 != ctx->r1) {
        // 0x8021EF58: addiu       $t1, $s1, 0x3
        ctx->r9 = ADD32(ctx->r17, 0X3);
            goto L_8021EF94;
    }
    // 0x8021EF58: addiu       $t1, $s1, 0x3
    ctx->r9 = ADD32(ctx->r17, 0X3);
    // 0x8021EF5C: and         $s1, $t1, $s7
    ctx->r17 = ctx->r9 & ctx->r23;
    // 0x8021EF60: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8021EF64: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8021EF68: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x8021EF6C: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x8021EF70: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8021EF74: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8021EF78: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x8021EF7C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x8021EF80: jal         0x80230164
    // 0x8021EF84: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    static_3_80230164(rdram, ctx);
        goto after_1;
    // 0x8021EF84: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_1:
    // 0x8021EF88: lw          $t2, 0x148($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X148);
    // 0x8021EF8C: b           L_8021F0E8
    // 0x8021EF90: addu        $a1, $t2, $s0
    ctx->r5 = ADD32(ctx->r10, ctx->r16);
        goto L_8021F0E8;
    // 0x8021EF90: addu        $a1, $t2, $s0
    ctx->r5 = ADD32(ctx->r10, ctx->r16);
L_8021EF94:
    // 0x8021EF94: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8021EF98: bne         $a3, $at, L_8021EFD8
    if (ctx->r7 != ctx->r1) {
        // 0x8021EF9C: addiu       $t3, $s1, 0x3
        ctx->r11 = ADD32(ctx->r17, 0X3);
            goto L_8021EFD8;
    }
    // 0x8021EF9C: addiu       $t3, $s1, 0x3
    ctx->r11 = ADD32(ctx->r17, 0X3);
    // 0x8021EFA0: and         $s1, $t3, $s7
    ctx->r17 = ctx->r11 & ctx->r23;
    // 0x8021EFA4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8021EFA8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8021EFAC: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x8021EFB0: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x8021EFB4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8021EFB8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8021EFBC: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x8021EFC0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x8021EFC4: jal         0x80230164
    // 0x8021EFC8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    static_3_80230164(rdram, ctx);
        goto after_2;
    // 0x8021EFC8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_2:
    // 0x8021EFCC: lw          $t4, 0x148($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X148);
    // 0x8021EFD0: b           L_8021F0E8
    // 0x8021EFD4: addu        $a1, $t4, $s0
    ctx->r5 = ADD32(ctx->r12, ctx->r16);
        goto L_8021F0E8;
    // 0x8021EFD4: addu        $a1, $t4, $s0
    ctx->r5 = ADD32(ctx->r12, ctx->r16);
L_8021EFD8:
    // 0x8021EFD8: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x8021EFDC: bne         $a3, $at, L_8021F01C
    if (ctx->r7 != ctx->r1) {
        // 0x8021EFE0: addiu       $t5, $s1, 0x3
        ctx->r13 = ADD32(ctx->r17, 0X3);
            goto L_8021F01C;
    }
    // 0x8021EFE0: addiu       $t5, $s1, 0x3
    ctx->r13 = ADD32(ctx->r17, 0X3);
    // 0x8021EFE4: and         $s1, $t5, $s7
    ctx->r17 = ctx->r13 & ctx->r23;
    // 0x8021EFE8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8021EFEC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8021EFF0: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x8021EFF4: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x8021EFF8: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8021EFFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8021F000: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x8021F004: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x8021F008: jal         0x80230164
    // 0x8021F00C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    static_3_80230164(rdram, ctx);
        goto after_3;
    // 0x8021F00C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_3:
    // 0x8021F010: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
    // 0x8021F014: b           L_8021F0E8
    // 0x8021F018: addu        $a1, $t6, $s0
    ctx->r5 = ADD32(ctx->r14, ctx->r16);
        goto L_8021F0E8;
    // 0x8021F018: addu        $a1, $t6, $s0
    ctx->r5 = ADD32(ctx->r14, ctx->r16);
L_8021F01C:
    // 0x8021F01C: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x8021F020: bne         $a3, $at, L_8021F08C
    if (ctx->r7 != ctx->r1) {
        // 0x8021F024: lw          $t1, 0x148($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X148);
            goto L_8021F08C;
    }
    // 0x8021F024: lw          $t1, 0x148($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X148);
    // 0x8021F028: andi        $t7, $s1, 0x1
    ctx->r15 = ctx->r17 & 0X1;
    // 0x8021F02C: beq         $t7, $zero, L_8021F040
    if (ctx->r15 == 0) {
        // 0x8021F030: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8021F040;
    }
    // 0x8021F030: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021F034: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8021F038: b           L_8021F06C
    // 0x8021F03C: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
        goto L_8021F06C;
    // 0x8021F03C: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
L_8021F040:
    // 0x8021F040: andi        $t9, $s1, 0x2
    ctx->r25 = ctx->r17 & 0X2;
    // 0x8021F044: beq         $t9, $zero, L_8021F058
    if (ctx->r25 == 0) {
        // 0x8021F048: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8021F058;
    }
    // 0x8021F048: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8021F04C: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x8021F050: b           L_8021F068
    // 0x8021F054: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
        goto L_8021F068;
    // 0x8021F054: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
L_8021F058:
    // 0x8021F058: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8021F05C: and         $t8, $s1, $at
    ctx->r24 = ctx->r17 & ctx->r1;
    // 0x8021F060: addiu       $s1, $t8, 0x8
    ctx->r17 = ADD32(ctx->r24, 0X8);
    // 0x8021F064: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_8021F068:
    // 0x8021F068: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8021F06C:
    // 0x8021F06C: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x8021F070: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8021F074: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8021F078: jal         0x802304A0
    // 0x8021F07C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    static_3_802304A0(rdram, ctx);
        goto after_4;
    // 0x8021F07C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x8021F080: lw          $t0, 0x148($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X148);
    // 0x8021F084: b           L_8021F0E8
    // 0x8021F088: addu        $a1, $t0, $s0
    ctx->r5 = ADD32(ctx->r8, ctx->r16);
        goto L_8021F0E8;
    // 0x8021F088: addu        $a1, $t0, $s0
    ctx->r5 = ADD32(ctx->r8, ctx->r16);
L_8021F08C:
    // 0x8021F08C: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x8021F090: bne         $a3, $at, L_8021F0E8
    if (ctx->r7 != ctx->r1) {
        // 0x8021F094: addu        $a1, $t1, $s0
        ctx->r5 = ADD32(ctx->r9, ctx->r16);
            goto L_8021F0E8;
    }
    // 0x8021F094: addu        $a1, $t1, $s0
    ctx->r5 = ADD32(ctx->r9, ctx->r16);
    // 0x8021F098: addiu       $t2, $s1, 0x3
    ctx->r10 = ADD32(ctx->r17, 0X3);
    // 0x8021F09C: and         $s1, $t2, $s7
    ctx->r17 = ctx->r10 & ctx->r23;
    // 0x8021F0A0: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8021F0A4: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x8021F0A8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8021F0AC: lbu         $t3, 0x0($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X0);
    // 0x8021F0B0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021F0B4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8021F0B8: beq         $t3, $zero, L_8021F0E8
    if (ctx->r11 == 0) {
        // 0x8021F0BC: addu        $v1, $s4, $t4
        ctx->r3 = ADD32(ctx->r20, ctx->r12);
            goto L_8021F0E8;
    }
    // 0x8021F0BC: addu        $v1, $s4, $t4
    ctx->r3 = ADD32(ctx->r20, ctx->r12);
    // 0x8021F0C0: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x8021F0C4: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
L_8021F0C8:
    // 0x8021F0C8: lw          $t5, 0xE4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE4);
    // 0x8021F0CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021F0D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8021F0D4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8021F0D8: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x8021F0DC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8021F0E0: bnel        $a0, $zero, L_8021F0C8
    if (ctx->r4 != 0) {
        // 0x8021F0E4: sb          $a0, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r4;
            goto L_8021F0C8;
    }
    goto skip_2;
    // 0x8021F0E4: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    skip_2:
L_8021F0E8:
    // 0x8021F0E8: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8021F0EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021F0F0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8021F0F4: bne         $v1, $zero, L_8021EDD0
    if (ctx->r3 != 0) {
        // 0x8021F0F8: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_8021EDD0;
    }
    // 0x8021F0F8: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8021F0FC: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x8021F100: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x8021F104: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
L_8021F108:
    // 0x8021F108: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x8021F10C: addiu       $a2, $sp, 0xF0
    ctx->r6 = ADD32(ctx->r29, 0XF0);
    // 0x8021F110: addu        $t9, $a2, $t7
    ctx->r25 = ADD32(ctx->r6, ctx->r15);
    // 0x8021F114: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x8021F118: lw          $a1, 0x144($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X144);
    // 0x8021F11C: jal         0x8021E87C
    // 0x8021F120: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    static_3_8021E87C(rdram, ctx);
        goto after_5;
    // 0x8021F120: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    after_5:
    // 0x8021F124: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8021F128: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8021F12C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8021F130: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8021F134: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8021F138: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8021F13C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8021F140: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8021F144: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8021F148: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8021F14C: jr          $ra
    // 0x8021F150: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x8021F150: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void D_80205D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205D20: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80205D24: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205D28: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205D2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80205D30: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205D34: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80205D38: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80205D3C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80205D40: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205D44: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80205D48: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80205D4C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205D50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80205D54: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80205D58: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80205D5C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80205D60: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80205D64: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80205D68: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80205D6C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80205D70: jal         0x80231C58
    // 0x80205D74: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205D74: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80205D78: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80205D7C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80205D80: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80205D84: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80205D88: bne         $v0, $zero, L_80205DAC
    if (ctx->r2 != 0) {
        // 0x80205D8C: lw          $a3, 0x34($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X34);
            goto L_80205DAC;
    }
    // 0x80205D8C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80205D90: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80205D94: sh          $a2, 0x2C6($v1)
    MEM_H(0X2C6, ctx->r3) = ctx->r6;
    // 0x80205D98: sh          $a1, 0x2C4($v1)
    MEM_H(0X2C4, ctx->r3) = ctx->r5;
    // 0x80205D9C: sh          $a3, 0x2C8($v1)
    MEM_H(0X2C8, ctx->r3) = ctx->r7;
    // 0x80205DA0: sh          $v0, 0x2CA($v1)
    MEM_H(0X2CA, ctx->r3) = ctx->r2;
    // 0x80205DA4: jal         0x80222AA8
    // 0x80205DA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    static_3_80222AA8(rdram, ctx);
        goto after_1;
    // 0x80205DA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
L_80205DAC:
    // 0x80205DAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80205DB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80205DB4: jr          $ra
    // 0x80205DB8: nop

    return;
    // 0x80205DB8: nop

;}
RECOMP_FUNC void D_802EA67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA6FC: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802EA700: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802EA704: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802EA708: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802EA70C: beq         $t7, $at, L_802EA728
    if (ctx->r15 == ctx->r1) {
        // 0x802EA710: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_802EA728;
    }
    // 0x802EA710: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802EA714: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802EA718: beql        $t7, $at, L_802EA740
    if (ctx->r15 == ctx->r1) {
        // 0x802EA71C: swc1        $f12, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
            goto L_802EA740;
    }
    goto skip_0;
    // 0x802EA71C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    skip_0:
    // 0x802EA720: jr          $ra
    // 0x802EA724: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802EA724: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
L_802EA728:
    // 0x802EA728: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EA72C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EA730: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x802EA734: jr          $ra
    // 0x802EA738: swc1        $f6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802EA738: swc1        $f6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f6.u32l;
    // 0x802EA73C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
L_802EA740:
    // 0x802EA740: jr          $ra
    // 0x802EA744: nop

    return;
    // 0x802EA744: nop

;}
RECOMP_FUNC void D_8022AF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AF10: jr          $ra
    // 0x8022AF14: nop

    return;
    // 0x8022AF14: nop

;}
RECOMP_FUNC void D_8027701C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277094: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80277098: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8027709C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802770A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802770A4: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    // 0x802770A8: jal         0x80317E10
    // 0x802770AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80317E10(rdram, ctx);
        goto after_0;
    // 0x802770AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802770B0: beql        $v0, $zero, L_802771B0
    if (ctx->r2 == 0) {
        // 0x802770B4: addiu       $a0, $s0, 0x4E3C
        ctx->r4 = ADD32(ctx->r16, 0X4E3C);
            goto L_802771B0;
    }
    goto skip_0;
    // 0x802770B4: addiu       $a0, $s0, 0x4E3C
    ctx->r4 = ADD32(ctx->r16, 0X4E3C);
    skip_0:
    // 0x802770B8: lw          $t6, 0x4E18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4E18);
    // 0x802770BC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x802770C0: beql        $t6, $at, L_802771B0
    if (ctx->r14 == ctx->r1) {
        // 0x802770C4: addiu       $a0, $s0, 0x4E3C
        ctx->r4 = ADD32(ctx->r16, 0X4E3C);
            goto L_802771B0;
    }
    goto skip_1;
    // 0x802770C4: addiu       $a0, $s0, 0x4E3C
    ctx->r4 = ADD32(ctx->r16, 0X4E3C);
    skip_1:
    // 0x802770C8: lwc1        $f0, 0x32A8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X32A8);
    // 0x802770CC: lwc1        $f4, 0x32B4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X32B4);
    // 0x802770D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802770D4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802770D8: nop

    // 0x802770DC: bc1fl       L_802770F8
    if (!c1cs) {
        // 0x802770E0: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802770F8;
    }
    goto skip_2;
    // 0x802770E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_2:
    // 0x802770E4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802770E8: jal         0x802E45DC
    // 0x802770EC: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    static_3_802E45DC(rdram, ctx);
        goto after_1;
    // 0x802770EC: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    after_1:
    // 0x802770F0: lwc1        $f0, 0x32A8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X32A8);
    // 0x802770F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_802770F8:
    // 0x802770F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802770FC: jal         0x802E6F08
    // 0x80277100: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    static_3_802E6F08(rdram, ctx);
        goto after_2;
    // 0x80277100: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    after_2:
    // 0x80277104: jal         0x80318D0C
    // 0x80277108: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_80318D0C(rdram, ctx);
        goto after_3;
    // 0x80277108: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x8027710C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80277110: bne         $v0, $at, L_80277124
    if (ctx->r2 != ctx->r1) {
        // 0x80277114: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_80277124;
    }
    // 0x80277114: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80277118: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8027711C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80277120: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_80277124:
    // 0x80277124: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80277128: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8027712C: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x80277130: beql        $t8, $zero, L_80277164
    if (ctx->r24 == 0) {
        // 0x80277134: lbu         $t0, 0x0($v1)
        ctx->r8 = MEM_BU(ctx->r3, 0X0);
            goto L_80277164;
    }
    goto skip_3;
    // 0x80277134: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    skip_3:
    // 0x80277138: jal         0x80319290
    // 0x8027713C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_80319290(rdram, ctx);
        goto after_4;
    // 0x8027713C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80277140: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80277144: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80277148: bne         $v0, $at, L_80277160
    if (ctx->r2 != ctx->r1) {
        // 0x8027714C: addiu       $v1, $v1, 0x0
        ctx->r3 = ADD32(ctx->r3, 0X0);
            goto L_80277160;
    }
    // 0x8027714C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80277150: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80277154: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80277158: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8027715C: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_80277160:
    // 0x80277160: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
L_80277164:
    // 0x80277164: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80277168: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8027716C: beql        $t0, $zero, L_8027718C
    if (ctx->r8 == 0) {
        // 0x80277170: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8027718C;
    }
    goto skip_4;
    // 0x80277170: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_4:
    // 0x80277174: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80277178: beql        $t1, $zero, L_8027718C
    if (ctx->r9 == 0) {
        // 0x8027717C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8027718C;
    }
    goto skip_5;
    // 0x8027717C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_5:
    // 0x80277180: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x80277184: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80277188: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8027718C:
    // 0x8027718C: lw          $a1, 0x32A8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X32A8);
    // 0x80277190: jal         0x802E55FC
    // 0x80277194: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    static_3_802E55FC(rdram, ctx);
        goto after_5;
    // 0x80277194: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    after_5:
    // 0x80277198: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8027719C: bne         $t2, $zero, L_802771AC
    if (ctx->r10 != 0) {
        // 0x802771A0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_802771AC;
    }
    // 0x802771A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802771A4: jal         0x802E75EC
    // 0x802771A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802E75EC(rdram, ctx);
        goto after_6;
    // 0x802771A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_802771AC:
    // 0x802771AC: addiu       $a0, $s0, 0x4E3C
    ctx->r4 = ADD32(ctx->r16, 0X4E3C);
L_802771B0:
    // 0x802771B0: jal         0x80317E10
    // 0x802771B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80317E10(rdram, ctx);
        goto after_7;
    // 0x802771B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_7:
    // 0x802771B8: beql        $v0, $zero, L_80277208
    if (ctx->r2 == 0) {
        // 0x802771BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80277208;
    }
    goto skip_6;
    // 0x802771BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x802771C0: lw          $t3, 0x65B4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X65B4);
    // 0x802771C4: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x802771C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802771CC: beq         $t3, $at, L_802771F4
    if (ctx->r11 == ctx->r1) {
        // 0x802771D0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_802771F4;
    }
    // 0x802771D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802771D4: lw          $a1, 0x32A8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X32A8);
    // 0x802771D8: jal         0x802E45DC
    // 0x802771DC: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    static_3_802E45DC(rdram, ctx);
        goto after_8;
    // 0x802771DC: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    after_8:
    // 0x802771E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802771E4: lw          $a1, 0x32A8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X32A8);
    // 0x802771E8: jal         0x802E55FC
    // 0x802771EC: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    static_3_802E55FC(rdram, ctx);
        goto after_9;
    // 0x802771EC: lw          $a2, 0x32B0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X32B0);
    after_9:
    // 0x802771F0: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_802771F4:
    // 0x802771F4: bne         $v1, $zero, L_80277204
    if (ctx->r3 != 0) {
        // 0x802771F8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80277204;
    }
    // 0x802771F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802771FC: jal         0x802E75EC
    // 0x80277200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802E75EC(rdram, ctx);
        goto after_10;
    // 0x80277200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
L_80277204:
    // 0x80277204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80277208:
    // 0x80277208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8027720C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80277210: jr          $ra
    // 0x80277214: nop

    return;
    // 0x80277214: nop

;}
RECOMP_FUNC void D_802CF0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CF174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CF178: jal         0x8028D750
    // 0x802CF17C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D750(rdram, ctx);
        goto after_0;
    // 0x802CF17C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802CF180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CF184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CF188: jr          $ra
    // 0x802CF18C: nop

    return;
    // 0x802CF18C: nop

;}
RECOMP_FUNC void D_802998AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029992C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80299930: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80299934: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80299938: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8029993C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80299940: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x80299944: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80299948: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8029994C: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
    // 0x80299950: sb          $v0, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r2;
    // 0x80299954: sb          $zero, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = 0;
    // 0x80299958: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
    // 0x8029995C: sw          $v1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r3;
    // 0x80299960: sw          $t8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r24;
    // 0x80299964: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80299968: lbu         $t9, 0x19($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X19);
    // 0x8029996C: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x80299970: sb          $v0, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r2;
    // 0x80299974: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80299978: jr          $ra
    // 0x8029997C: sb          $t0, 0x32($a0)
    MEM_B(0X32, ctx->r4) = ctx->r8;
    return;
    // 0x8029997C: sb          $t0, 0x32($a0)
    MEM_B(0X32, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void D_8029EEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029EF7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8029EF80: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x8029EF84: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8029EF88: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x8029EF8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029EF90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029EF94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8029EF98: bc1t        L_8029EFA4
    if (c1cs) {
        // 0x8029EF9C: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_8029EFA4;
    }
    // 0x8029EF9C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8029EFA0: bne         $t6, $zero, L_8029EFB4
    if (ctx->r14 != 0) {
        // 0x8029EFA4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8029EFB4;
    }
L_8029EFA4:
    // 0x8029EFA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029EFA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029EFAC: b           L_8029EFFC
    // 0x8029EFB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029EFFC;
    // 0x8029EFB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029EFB4:
    // 0x8029EFB4: bgez        $a0, L_8029EFDC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8029EFB8: addiu       $a1, $a0, -0x1
        ctx->r5 = ADD32(ctx->r4, -0X1);
            goto L_8029EFDC;
    }
    // 0x8029EFB8: addiu       $a1, $a0, -0x1
    ctx->r5 = ADD32(ctx->r4, -0X1);
    // 0x8029EFBC: addiu       $a1, $a0, 0x1
    ctx->r5 = ADD32(ctx->r4, 0X1);
    // 0x8029EFC0: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8029EFC4: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8029EFC8: jal         0x802CF68C
    // 0x8029EFCC: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    static_3_802CF68C(rdram, ctx);
        goto after_0;
    // 0x8029EFCC: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8029EFD0: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8029EFD4: b           L_8029EFF8
    // 0x8029EFD8: div.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
        goto L_8029EFF8;
    // 0x8029EFD8: div.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
L_8029EFDC:
    // 0x8029EFDC: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x8029EFE0: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8029EFE4: jal         0x802CF68C
    // 0x8029EFE8: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    static_3_802CF68C(rdram, ctx);
        goto after_1;
    // 0x8029EFE8: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x8029EFEC: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8029EFF0: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x8029EFF4: nop

L_8029EFF8:
    // 0x8029EFF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029EFFC:
    // 0x8029EFFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029F000: jr          $ra
    // 0x8029F004: nop

    return;
    // 0x8029F004: nop

;}
RECOMP_FUNC void D_802A2070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A20F0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A20F4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A20F8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A20FC: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802A2100: jr          $ra
    // 0x802A2104: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802A2104: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_802816D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281758: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8028175C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281760: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80281764: jal         0x8021BA90
    // 0x80281768: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x80281768: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8028176C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80281770: bne         $v0, $at, L_80281798
    if (ctx->r2 != ctx->r1) {
        // 0x80281774: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_80281798;
    }
    // 0x80281774: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80281778: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028177C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80281780: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80281784: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80281788: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8028178C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80281790: jal         0x80231A24
    // 0x80281794: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80281794: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_1:
L_80281798:
    // 0x80281798: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028179C: jal         0x8021ACB0
    // 0x802817A0: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x802817A0: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    after_2:
    // 0x802817A4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802817A8: jal         0x8021B838
    // 0x802817AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_3;
    // 0x802817AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x802817B0: addiu       $a2, $s0, 0x1A4
    ctx->r6 = ADD32(ctx->r16, 0X1A4);
    // 0x802817B4: sw          $a2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r6;
    // 0x802817B8: lw          $v0, 0xD8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD8);
    // 0x802817BC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802817C0: lh          $t6, 0xA0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA0);
    // 0x802817C4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x802817C8: lw          $t9, 0xA4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XA4);
    // 0x802817CC: addu        $a0, $t6, $a2
    ctx->r4 = ADD32(ctx->r14, ctx->r6);
    // 0x802817D0: jalr        $t9
    // 0x802817D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802817D4: nop

    after_4:
    // 0x802817D8: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802817DC: lh          $t7, 0x18($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X18);
    // 0x802817E0: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802817E4: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802817E8: jalr        $t9
    // 0x802817EC: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802817EC: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_5:
    // 0x802817F0: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802817F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802817F8: lh          $t8, 0x98($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X98);
    // 0x802817FC: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x80281800: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x80281804: jalr        $t9
    // 0x80281808: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x80281808: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_6:
    // 0x8028180C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80281810: jal         0x802D2910
    // 0x80281814: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    static_3_802D2910(rdram, ctx);
        goto after_7;
    // 0x80281814: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    after_7:
    // 0x80281818: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028181C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80281820: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80281824: lh          $t0, 0xB0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB0);
    // 0x80281828: jalr        $t9
    // 0x8028182C: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x8028182C: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_8:
    // 0x80281830: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80281834: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281838: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8028183C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80281840: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80281844: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80281848: jal         0x80309758
    // 0x8028184C: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    static_3_80309758(rdram, ctx);
        goto after_9;
    // 0x8028184C: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    after_9:
    // 0x80281850: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80281854: jal         0x80318E80
    // 0x80281858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_10;
    // 0x80281858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8028185C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x80281860: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80281864: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x80281868: lh          $t1, 0xB8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XB8);
    // 0x8028186C: jalr        $t9
    // 0x80281870: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x80281870: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    after_11:
    // 0x80281874: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80281878: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8028187C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80281880: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x80281884: bne         $v0, $at, L_8028189C
    if (ctx->r2 != ctx->r1) {
        // 0x80281888: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_8028189C;
    }
    // 0x80281888: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8028188C: jal         0x80200B20
    // 0x80281890: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80200B20(rdram, ctx);
        goto after_12;
    // 0x80281890: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_12:
    // 0x80281894: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80281898: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
L_8028189C:
    // 0x8028189C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802818A0: bne         $v0, $at, L_802818B8
    if (ctx->r2 != ctx->r1) {
        // 0x802818A4: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_802818B8;
    }
    // 0x802818A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802818A8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802818AC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802818B0: jal         0x8021B240
    // 0x802818B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_13;
    // 0x802818B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
L_802818B8:
    // 0x802818B8: sb          $zero, 0x364($s0)
    MEM_B(0X364, ctx->r16) = 0;
    // 0x802818BC: sb          $zero, 0x555($s0)
    MEM_B(0X555, ctx->r16) = 0;
    // 0x802818C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802818C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802818C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802818CC: jr          $ra
    // 0x802818D0: nop

    return;
    // 0x802818D0: nop

;}
RECOMP_FUNC void D_802A4970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A49F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A49F4: jr          $ra
    // 0x802A49F8: sb          $a1, 0x196($a0)
    MEM_B(0X196, ctx->r4) = ctx->r5;
    return;
    // 0x802A49F8: sb          $a1, 0x196($a0)
    MEM_B(0X196, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_80208ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208ABC: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x80208AC0: beq         $t6, $zero, L_80208B1C
    if (ctx->r14 == 0) {
        // 0x80208AC4: andi        $t7, $a2, 0x2
        ctx->r15 = ctx->r6 & 0X2;
            goto L_80208B1C;
    }
    // 0x80208AC4: andi        $t7, $a2, 0x2
    ctx->r15 = ctx->r6 & 0X2;
    // 0x80208AC8: beq         $t7, $zero, L_80208AE4
    if (ctx->r15 == 0) {
        // 0x80208ACC: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_80208AE4;
    }
    // 0x80208ACC: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80208AD0: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208AD4: beql        $at, $zero, L_80208AE8
    if (ctx->r1 == 0) {
        // 0x80208AD8: andi        $t8, $a2, 0x4
        ctx->r24 = ctx->r6 & 0X4;
            goto L_80208AE8;
    }
    goto skip_0;
    // 0x80208AD8: andi        $t8, $a2, 0x4
    ctx->r24 = ctx->r6 & 0X4;
    skip_0:
    // 0x80208ADC: jr          $ra
    // 0x80208AE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208AE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208AE4:
    // 0x80208AE4: andi        $t8, $a2, 0x4
    ctx->r24 = ctx->r6 & 0X4;
L_80208AE8:
    // 0x80208AE8: beq         $t8, $zero, L_80208B00
    if (ctx->r24 == 0) {
        // 0x80208AEC: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208B00;
    }
    // 0x80208AEC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208AF0: beql        $at, $zero, L_80208B04
    if (ctx->r1 == 0) {
        // 0x80208AF4: andi        $t9, $a2, 0x1
        ctx->r25 = ctx->r6 & 0X1;
            goto L_80208B04;
    }
    goto skip_1;
    // 0x80208AF4: andi        $t9, $a2, 0x1
    ctx->r25 = ctx->r6 & 0X1;
    skip_1:
    // 0x80208AF8: jr          $ra
    // 0x80208AFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208AFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208B00:
    // 0x80208B00: andi        $t9, $a2, 0x1
    ctx->r25 = ctx->r6 & 0X1;
L_80208B04:
    // 0x80208B04: beql        $t9, $zero, L_80208B20
    if (ctx->r25 == 0) {
        // 0x80208B08: andi        $t0, $a1, 0x2
        ctx->r8 = ctx->r5 & 0X2;
            goto L_80208B20;
    }
    goto skip_2;
    // 0x80208B08: andi        $t0, $a1, 0x2
    ctx->r8 = ctx->r5 & 0X2;
    skip_2:
    // 0x80208B0C: bnel        $v0, $a3, L_80208B20
    if (ctx->r2 != ctx->r7) {
        // 0x80208B10: andi        $t0, $a1, 0x2
        ctx->r8 = ctx->r5 & 0X2;
            goto L_80208B20;
    }
    goto skip_3;
    // 0x80208B10: andi        $t0, $a1, 0x2
    ctx->r8 = ctx->r5 & 0X2;
    skip_3:
    // 0x80208B14: jr          $ra
    // 0x80208B18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208B18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208B1C:
    // 0x80208B1C: andi        $t0, $a1, 0x2
    ctx->r8 = ctx->r5 & 0X2;
L_80208B20:
    // 0x80208B20: beq         $t0, $zero, L_80208B7C
    if (ctx->r8 == 0) {
        // 0x80208B24: andi        $t1, $a2, 0x2
        ctx->r9 = ctx->r6 & 0X2;
            goto L_80208B7C;
    }
    // 0x80208B24: andi        $t1, $a2, 0x2
    ctx->r9 = ctx->r6 & 0X2;
    // 0x80208B28: beq         $t1, $zero, L_80208B44
    if (ctx->r9 == 0) {
        // 0x80208B2C: lh          $v0, 0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X2);
            goto L_80208B44;
    }
    // 0x80208B2C: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x80208B30: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208B34: beql        $at, $zero, L_80208B48
    if (ctx->r1 == 0) {
        // 0x80208B38: andi        $t2, $a2, 0x4
        ctx->r10 = ctx->r6 & 0X4;
            goto L_80208B48;
    }
    goto skip_4;
    // 0x80208B38: andi        $t2, $a2, 0x4
    ctx->r10 = ctx->r6 & 0X4;
    skip_4:
    // 0x80208B3C: jr          $ra
    // 0x80208B40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208B40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208B44:
    // 0x80208B44: andi        $t2, $a2, 0x4
    ctx->r10 = ctx->r6 & 0X4;
L_80208B48:
    // 0x80208B48: beq         $t2, $zero, L_80208B60
    if (ctx->r10 == 0) {
        // 0x80208B4C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208B60;
    }
    // 0x80208B4C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208B50: beql        $at, $zero, L_80208B64
    if (ctx->r1 == 0) {
        // 0x80208B54: andi        $t3, $a2, 0x1
        ctx->r11 = ctx->r6 & 0X1;
            goto L_80208B64;
    }
    goto skip_5;
    // 0x80208B54: andi        $t3, $a2, 0x1
    ctx->r11 = ctx->r6 & 0X1;
    skip_5:
    // 0x80208B58: jr          $ra
    // 0x80208B5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208B5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208B60:
    // 0x80208B60: andi        $t3, $a2, 0x1
    ctx->r11 = ctx->r6 & 0X1;
L_80208B64:
    // 0x80208B64: beql        $t3, $zero, L_80208B80
    if (ctx->r11 == 0) {
        // 0x80208B68: andi        $t4, $a1, 0x4
        ctx->r12 = ctx->r5 & 0X4;
            goto L_80208B80;
    }
    goto skip_6;
    // 0x80208B68: andi        $t4, $a1, 0x4
    ctx->r12 = ctx->r5 & 0X4;
    skip_6:
    // 0x80208B6C: bnel        $v0, $a3, L_80208B80
    if (ctx->r2 != ctx->r7) {
        // 0x80208B70: andi        $t4, $a1, 0x4
        ctx->r12 = ctx->r5 & 0X4;
            goto L_80208B80;
    }
    goto skip_7;
    // 0x80208B70: andi        $t4, $a1, 0x4
    ctx->r12 = ctx->r5 & 0X4;
    skip_7:
    // 0x80208B74: jr          $ra
    // 0x80208B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208B7C:
    // 0x80208B7C: andi        $t4, $a1, 0x4
    ctx->r12 = ctx->r5 & 0X4;
L_80208B80:
    // 0x80208B80: beq         $t4, $zero, L_80208BDC
    if (ctx->r12 == 0) {
        // 0x80208B84: andi        $t5, $a2, 0x2
        ctx->r13 = ctx->r6 & 0X2;
            goto L_80208BDC;
    }
    // 0x80208B84: andi        $t5, $a2, 0x2
    ctx->r13 = ctx->r6 & 0X2;
    // 0x80208B88: beq         $t5, $zero, L_80208BA4
    if (ctx->r13 == 0) {
        // 0x80208B8C: lh          $v0, 0x4($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X4);
            goto L_80208BA4;
    }
    // 0x80208B8C: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80208B90: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208B94: beql        $at, $zero, L_80208BA8
    if (ctx->r1 == 0) {
        // 0x80208B98: andi        $t6, $a2, 0x4
        ctx->r14 = ctx->r6 & 0X4;
            goto L_80208BA8;
    }
    goto skip_8;
    // 0x80208B98: andi        $t6, $a2, 0x4
    ctx->r14 = ctx->r6 & 0X4;
    skip_8:
    // 0x80208B9C: jr          $ra
    // 0x80208BA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208BA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208BA4:
    // 0x80208BA4: andi        $t6, $a2, 0x4
    ctx->r14 = ctx->r6 & 0X4;
L_80208BA8:
    // 0x80208BA8: beq         $t6, $zero, L_80208BC0
    if (ctx->r14 == 0) {
        // 0x80208BAC: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208BC0;
    }
    // 0x80208BAC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208BB0: beql        $at, $zero, L_80208BC4
    if (ctx->r1 == 0) {
        // 0x80208BB4: andi        $t7, $a2, 0x1
        ctx->r15 = ctx->r6 & 0X1;
            goto L_80208BC4;
    }
    goto skip_9;
    // 0x80208BB4: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
    skip_9:
    // 0x80208BB8: jr          $ra
    // 0x80208BBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208BBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208BC0:
    // 0x80208BC0: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
L_80208BC4:
    // 0x80208BC4: beql        $t7, $zero, L_80208BE0
    if (ctx->r15 == 0) {
        // 0x80208BC8: andi        $t8, $a1, 0x8
        ctx->r24 = ctx->r5 & 0X8;
            goto L_80208BE0;
    }
    goto skip_10;
    // 0x80208BC8: andi        $t8, $a1, 0x8
    ctx->r24 = ctx->r5 & 0X8;
    skip_10:
    // 0x80208BCC: bnel        $v0, $a3, L_80208BE0
    if (ctx->r2 != ctx->r7) {
        // 0x80208BD0: andi        $t8, $a1, 0x8
        ctx->r24 = ctx->r5 & 0X8;
            goto L_80208BE0;
    }
    goto skip_11;
    // 0x80208BD0: andi        $t8, $a1, 0x8
    ctx->r24 = ctx->r5 & 0X8;
    skip_11:
    // 0x80208BD4: jr          $ra
    // 0x80208BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208BDC:
    // 0x80208BDC: andi        $t8, $a1, 0x8
    ctx->r24 = ctx->r5 & 0X8;
L_80208BE0:
    // 0x80208BE0: beq         $t8, $zero, L_80208C3C
    if (ctx->r24 == 0) {
        // 0x80208BE4: andi        $t9, $a2, 0x2
        ctx->r25 = ctx->r6 & 0X2;
            goto L_80208C3C;
    }
    // 0x80208BE4: andi        $t9, $a2, 0x2
    ctx->r25 = ctx->r6 & 0X2;
    // 0x80208BE8: beq         $t9, $zero, L_80208C04
    if (ctx->r25 == 0) {
        // 0x80208BEC: lh          $v0, 0x8($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X8);
            goto L_80208C04;
    }
    // 0x80208BEC: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x80208BF0: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208BF4: beql        $at, $zero, L_80208C08
    if (ctx->r1 == 0) {
        // 0x80208BF8: andi        $t0, $a2, 0x4
        ctx->r8 = ctx->r6 & 0X4;
            goto L_80208C08;
    }
    goto skip_12;
    // 0x80208BF8: andi        $t0, $a2, 0x4
    ctx->r8 = ctx->r6 & 0X4;
    skip_12:
    // 0x80208BFC: jr          $ra
    // 0x80208C00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C04:
    // 0x80208C04: andi        $t0, $a2, 0x4
    ctx->r8 = ctx->r6 & 0X4;
L_80208C08:
    // 0x80208C08: beq         $t0, $zero, L_80208C20
    if (ctx->r8 == 0) {
        // 0x80208C0C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208C20;
    }
    // 0x80208C0C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208C10: beql        $at, $zero, L_80208C24
    if (ctx->r1 == 0) {
        // 0x80208C14: andi        $t1, $a2, 0x1
        ctx->r9 = ctx->r6 & 0X1;
            goto L_80208C24;
    }
    goto skip_13;
    // 0x80208C14: andi        $t1, $a2, 0x1
    ctx->r9 = ctx->r6 & 0X1;
    skip_13:
    // 0x80208C18: jr          $ra
    // 0x80208C1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C20:
    // 0x80208C20: andi        $t1, $a2, 0x1
    ctx->r9 = ctx->r6 & 0X1;
L_80208C24:
    // 0x80208C24: beql        $t1, $zero, L_80208C40
    if (ctx->r9 == 0) {
        // 0x80208C28: andi        $t2, $a1, 0x10
        ctx->r10 = ctx->r5 & 0X10;
            goto L_80208C40;
    }
    goto skip_14;
    // 0x80208C28: andi        $t2, $a1, 0x10
    ctx->r10 = ctx->r5 & 0X10;
    skip_14:
    // 0x80208C2C: bnel        $v0, $a3, L_80208C40
    if (ctx->r2 != ctx->r7) {
        // 0x80208C30: andi        $t2, $a1, 0x10
        ctx->r10 = ctx->r5 & 0X10;
            goto L_80208C40;
    }
    goto skip_15;
    // 0x80208C30: andi        $t2, $a1, 0x10
    ctx->r10 = ctx->r5 & 0X10;
    skip_15:
    // 0x80208C34: jr          $ra
    // 0x80208C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C3C:
    // 0x80208C3C: andi        $t2, $a1, 0x10
    ctx->r10 = ctx->r5 & 0X10;
L_80208C40:
    // 0x80208C40: beq         $t2, $zero, L_80208C9C
    if (ctx->r10 == 0) {
        // 0x80208C44: andi        $t3, $a2, 0x2
        ctx->r11 = ctx->r6 & 0X2;
            goto L_80208C9C;
    }
    // 0x80208C44: andi        $t3, $a2, 0x2
    ctx->r11 = ctx->r6 & 0X2;
    // 0x80208C48: beq         $t3, $zero, L_80208C64
    if (ctx->r11 == 0) {
        // 0x80208C4C: lh          $v0, 0xA($a0)
        ctx->r2 = MEM_H(ctx->r4, 0XA);
            goto L_80208C64;
    }
    // 0x80208C4C: lh          $v0, 0xA($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA);
    // 0x80208C50: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208C54: beql        $at, $zero, L_80208C68
    if (ctx->r1 == 0) {
        // 0x80208C58: andi        $t4, $a2, 0x4
        ctx->r12 = ctx->r6 & 0X4;
            goto L_80208C68;
    }
    goto skip_16;
    // 0x80208C58: andi        $t4, $a2, 0x4
    ctx->r12 = ctx->r6 & 0X4;
    skip_16:
    // 0x80208C5C: jr          $ra
    // 0x80208C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C64:
    // 0x80208C64: andi        $t4, $a2, 0x4
    ctx->r12 = ctx->r6 & 0X4;
L_80208C68:
    // 0x80208C68: beq         $t4, $zero, L_80208C80
    if (ctx->r12 == 0) {
        // 0x80208C6C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208C80;
    }
    // 0x80208C6C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208C70: beql        $at, $zero, L_80208C84
    if (ctx->r1 == 0) {
        // 0x80208C74: andi        $t5, $a2, 0x1
        ctx->r13 = ctx->r6 & 0X1;
            goto L_80208C84;
    }
    goto skip_17;
    // 0x80208C74: andi        $t5, $a2, 0x1
    ctx->r13 = ctx->r6 & 0X1;
    skip_17:
    // 0x80208C78: jr          $ra
    // 0x80208C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C80:
    // 0x80208C80: andi        $t5, $a2, 0x1
    ctx->r13 = ctx->r6 & 0X1;
L_80208C84:
    // 0x80208C84: beql        $t5, $zero, L_80208CA0
    if (ctx->r13 == 0) {
        // 0x80208C88: andi        $t6, $a1, 0x20
        ctx->r14 = ctx->r5 & 0X20;
            goto L_80208CA0;
    }
    goto skip_18;
    // 0x80208C88: andi        $t6, $a1, 0x20
    ctx->r14 = ctx->r5 & 0X20;
    skip_18:
    // 0x80208C8C: bnel        $v0, $a3, L_80208CA0
    if (ctx->r2 != ctx->r7) {
        // 0x80208C90: andi        $t6, $a1, 0x20
        ctx->r14 = ctx->r5 & 0X20;
            goto L_80208CA0;
    }
    goto skip_19;
    // 0x80208C90: andi        $t6, $a1, 0x20
    ctx->r14 = ctx->r5 & 0X20;
    skip_19:
    // 0x80208C94: jr          $ra
    // 0x80208C98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208C98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208C9C:
    // 0x80208C9C: andi        $t6, $a1, 0x20
    ctx->r14 = ctx->r5 & 0X20;
L_80208CA0:
    // 0x80208CA0: beq         $t6, $zero, L_80208CFC
    if (ctx->r14 == 0) {
        // 0x80208CA4: andi        $t7, $a2, 0x2
        ctx->r15 = ctx->r6 & 0X2;
            goto L_80208CFC;
    }
    // 0x80208CA4: andi        $t7, $a2, 0x2
    ctx->r15 = ctx->r6 & 0X2;
    // 0x80208CA8: beq         $t7, $zero, L_80208CC4
    if (ctx->r15 == 0) {
        // 0x80208CAC: lbu         $v0, 0xC($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0XC);
            goto L_80208CC4;
    }
    // 0x80208CAC: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80208CB0: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208CB4: beql        $at, $zero, L_80208CC8
    if (ctx->r1 == 0) {
        // 0x80208CB8: andi        $t8, $a2, 0x4
        ctx->r24 = ctx->r6 & 0X4;
            goto L_80208CC8;
    }
    goto skip_20;
    // 0x80208CB8: andi        $t8, $a2, 0x4
    ctx->r24 = ctx->r6 & 0X4;
    skip_20:
    // 0x80208CBC: jr          $ra
    // 0x80208CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208CC4:
    // 0x80208CC4: andi        $t8, $a2, 0x4
    ctx->r24 = ctx->r6 & 0X4;
L_80208CC8:
    // 0x80208CC8: beq         $t8, $zero, L_80208CE0
    if (ctx->r24 == 0) {
        // 0x80208CCC: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208CE0;
    }
    // 0x80208CCC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208CD0: beql        $at, $zero, L_80208CE4
    if (ctx->r1 == 0) {
        // 0x80208CD4: andi        $t9, $a2, 0x1
        ctx->r25 = ctx->r6 & 0X1;
            goto L_80208CE4;
    }
    goto skip_21;
    // 0x80208CD4: andi        $t9, $a2, 0x1
    ctx->r25 = ctx->r6 & 0X1;
    skip_21:
    // 0x80208CD8: jr          $ra
    // 0x80208CDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208CDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208CE0:
    // 0x80208CE0: andi        $t9, $a2, 0x1
    ctx->r25 = ctx->r6 & 0X1;
L_80208CE4:
    // 0x80208CE4: beql        $t9, $zero, L_80208D00
    if (ctx->r25 == 0) {
        // 0x80208CE8: andi        $t0, $a1, 0x40
        ctx->r8 = ctx->r5 & 0X40;
            goto L_80208D00;
    }
    goto skip_22;
    // 0x80208CE8: andi        $t0, $a1, 0x40
    ctx->r8 = ctx->r5 & 0X40;
    skip_22:
    // 0x80208CEC: bnel        $v0, $a3, L_80208D00
    if (ctx->r2 != ctx->r7) {
        // 0x80208CF0: andi        $t0, $a1, 0x40
        ctx->r8 = ctx->r5 & 0X40;
            goto L_80208D00;
    }
    goto skip_23;
    // 0x80208CF0: andi        $t0, $a1, 0x40
    ctx->r8 = ctx->r5 & 0X40;
    skip_23:
    // 0x80208CF4: jr          $ra
    // 0x80208CF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208CF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208CFC:
    // 0x80208CFC: andi        $t0, $a1, 0x40
    ctx->r8 = ctx->r5 & 0X40;
L_80208D00:
    // 0x80208D00: beq         $t0, $zero, L_80208D5C
    if (ctx->r8 == 0) {
        // 0x80208D04: andi        $t1, $a2, 0x2
        ctx->r9 = ctx->r6 & 0X2;
            goto L_80208D5C;
    }
    // 0x80208D04: andi        $t1, $a2, 0x2
    ctx->r9 = ctx->r6 & 0X2;
    // 0x80208D08: beq         $t1, $zero, L_80208D24
    if (ctx->r9 == 0) {
        // 0x80208D0C: lbu         $v0, 0xD($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0XD);
            goto L_80208D24;
    }
    // 0x80208D0C: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80208D10: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208D14: beql        $at, $zero, L_80208D28
    if (ctx->r1 == 0) {
        // 0x80208D18: andi        $t2, $a2, 0x4
        ctx->r10 = ctx->r6 & 0X4;
            goto L_80208D28;
    }
    goto skip_24;
    // 0x80208D18: andi        $t2, $a2, 0x4
    ctx->r10 = ctx->r6 & 0X4;
    skip_24:
    // 0x80208D1C: jr          $ra
    // 0x80208D20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208D20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208D24:
    // 0x80208D24: andi        $t2, $a2, 0x4
    ctx->r10 = ctx->r6 & 0X4;
L_80208D28:
    // 0x80208D28: beq         $t2, $zero, L_80208D40
    if (ctx->r10 == 0) {
        // 0x80208D2C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208D40;
    }
    // 0x80208D2C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208D30: beql        $at, $zero, L_80208D44
    if (ctx->r1 == 0) {
        // 0x80208D34: andi        $t3, $a2, 0x1
        ctx->r11 = ctx->r6 & 0X1;
            goto L_80208D44;
    }
    goto skip_25;
    // 0x80208D34: andi        $t3, $a2, 0x1
    ctx->r11 = ctx->r6 & 0X1;
    skip_25:
    // 0x80208D38: jr          $ra
    // 0x80208D3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208D3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208D40:
    // 0x80208D40: andi        $t3, $a2, 0x1
    ctx->r11 = ctx->r6 & 0X1;
L_80208D44:
    // 0x80208D44: beql        $t3, $zero, L_80208D60
    if (ctx->r11 == 0) {
        // 0x80208D48: andi        $t4, $a1, 0x80
        ctx->r12 = ctx->r5 & 0X80;
            goto L_80208D60;
    }
    goto skip_26;
    // 0x80208D48: andi        $t4, $a1, 0x80
    ctx->r12 = ctx->r5 & 0X80;
    skip_26:
    // 0x80208D4C: bnel        $v0, $a3, L_80208D60
    if (ctx->r2 != ctx->r7) {
        // 0x80208D50: andi        $t4, $a1, 0x80
        ctx->r12 = ctx->r5 & 0X80;
            goto L_80208D60;
    }
    goto skip_27;
    // 0x80208D50: andi        $t4, $a1, 0x80
    ctx->r12 = ctx->r5 & 0X80;
    skip_27:
    // 0x80208D54: jr          $ra
    // 0x80208D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208D5C:
    // 0x80208D5C: andi        $t4, $a1, 0x80
    ctx->r12 = ctx->r5 & 0X80;
L_80208D60:
    // 0x80208D60: beq         $t4, $zero, L_80208DBC
    if (ctx->r12 == 0) {
        // 0x80208D64: andi        $t5, $a2, 0x2
        ctx->r13 = ctx->r6 & 0X2;
            goto L_80208DBC;
    }
    // 0x80208D64: andi        $t5, $a2, 0x2
    ctx->r13 = ctx->r6 & 0X2;
    // 0x80208D68: beq         $t5, $zero, L_80208D84
    if (ctx->r13 == 0) {
        // 0x80208D6C: lbu         $v0, 0xE($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0XE);
            goto L_80208D84;
    }
    // 0x80208D6C: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80208D70: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208D74: beql        $at, $zero, L_80208D88
    if (ctx->r1 == 0) {
        // 0x80208D78: andi        $t6, $a2, 0x4
        ctx->r14 = ctx->r6 & 0X4;
            goto L_80208D88;
    }
    goto skip_28;
    // 0x80208D78: andi        $t6, $a2, 0x4
    ctx->r14 = ctx->r6 & 0X4;
    skip_28:
    // 0x80208D7C: jr          $ra
    // 0x80208D80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208D80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208D84:
    // 0x80208D84: andi        $t6, $a2, 0x4
    ctx->r14 = ctx->r6 & 0X4;
L_80208D88:
    // 0x80208D88: beq         $t6, $zero, L_80208DA0
    if (ctx->r14 == 0) {
        // 0x80208D8C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208DA0;
    }
    // 0x80208D8C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208D90: beql        $at, $zero, L_80208DA4
    if (ctx->r1 == 0) {
        // 0x80208D94: andi        $t7, $a2, 0x1
        ctx->r15 = ctx->r6 & 0X1;
            goto L_80208DA4;
    }
    goto skip_29;
    // 0x80208D94: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
    skip_29:
    // 0x80208D98: jr          $ra
    // 0x80208D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208DA0:
    // 0x80208DA0: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
L_80208DA4:
    // 0x80208DA4: beql        $t7, $zero, L_80208DC0
    if (ctx->r15 == 0) {
        // 0x80208DA8: andi        $t8, $a1, 0x100
        ctx->r24 = ctx->r5 & 0X100;
            goto L_80208DC0;
    }
    goto skip_30;
    // 0x80208DA8: andi        $t8, $a1, 0x100
    ctx->r24 = ctx->r5 & 0X100;
    skip_30:
    // 0x80208DAC: bnel        $v0, $a3, L_80208DC0
    if (ctx->r2 != ctx->r7) {
        // 0x80208DB0: andi        $t8, $a1, 0x100
        ctx->r24 = ctx->r5 & 0X100;
            goto L_80208DC0;
    }
    goto skip_31;
    // 0x80208DB0: andi        $t8, $a1, 0x100
    ctx->r24 = ctx->r5 & 0X100;
    skip_31:
    // 0x80208DB4: jr          $ra
    // 0x80208DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208DBC:
    // 0x80208DBC: andi        $t8, $a1, 0x100
    ctx->r24 = ctx->r5 & 0X100;
L_80208DC0:
    // 0x80208DC0: beq         $t8, $zero, L_80208E1C
    if (ctx->r24 == 0) {
        // 0x80208DC4: andi        $t9, $a2, 0x2
        ctx->r25 = ctx->r6 & 0X2;
            goto L_80208E1C;
    }
    // 0x80208DC4: andi        $t9, $a2, 0x2
    ctx->r25 = ctx->r6 & 0X2;
    // 0x80208DC8: beq         $t9, $zero, L_80208DE4
    if (ctx->r25 == 0) {
        // 0x80208DCC: lbu         $v0, 0xF($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0XF);
            goto L_80208DE4;
    }
    // 0x80208DCC: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x80208DD0: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80208DD4: beql        $at, $zero, L_80208DE8
    if (ctx->r1 == 0) {
        // 0x80208DD8: andi        $t0, $a2, 0x4
        ctx->r8 = ctx->r6 & 0X4;
            goto L_80208DE8;
    }
    goto skip_32;
    // 0x80208DD8: andi        $t0, $a2, 0x4
    ctx->r8 = ctx->r6 & 0X4;
    skip_32:
    // 0x80208DDC: jr          $ra
    // 0x80208DE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208DE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208DE4:
    // 0x80208DE4: andi        $t0, $a2, 0x4
    ctx->r8 = ctx->r6 & 0X4;
L_80208DE8:
    // 0x80208DE8: beq         $t0, $zero, L_80208E00
    if (ctx->r8 == 0) {
        // 0x80208DEC: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208E00;
    }
    // 0x80208DEC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208DF0: beql        $at, $zero, L_80208E04
    if (ctx->r1 == 0) {
        // 0x80208DF4: andi        $t1, $a2, 0x1
        ctx->r9 = ctx->r6 & 0X1;
            goto L_80208E04;
    }
    goto skip_33;
    // 0x80208DF4: andi        $t1, $a2, 0x1
    ctx->r9 = ctx->r6 & 0X1;
    skip_33:
    // 0x80208DF8: jr          $ra
    // 0x80208DFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208DFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208E00:
    // 0x80208E00: andi        $t1, $a2, 0x1
    ctx->r9 = ctx->r6 & 0X1;
L_80208E04:
    // 0x80208E04: beql        $t1, $zero, L_80208E20
    if (ctx->r9 == 0) {
        // 0x80208E08: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80208E20;
    }
    goto skip_34;
    // 0x80208E08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_34:
    // 0x80208E0C: bnel        $v0, $a3, L_80208E20
    if (ctx->r2 != ctx->r7) {
        // 0x80208E10: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80208E20;
    }
    goto skip_35;
    // 0x80208E10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_35:
    // 0x80208E14: jr          $ra
    // 0x80208E18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208E18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208E1C:
    // 0x80208E1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80208E20:
    // 0x80208E20: jr          $ra
    // 0x80208E24: nop

    return;
    // 0x80208E24: nop

;}
RECOMP_FUNC void static_3_80200144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802001AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80200354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802003C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802009A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80200B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80200C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802011D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802011EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802012BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80201388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80201448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_8020153C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_8020164C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_8020178C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80201A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80201C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80201CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80201F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80201FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802021EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_8020225C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80202288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80202424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_8020292C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80202E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80202F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_8020321C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80203464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80203654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802037B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_802037EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80203930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_3_80203C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
