#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80246B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246B50: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x80246B54: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x80246B58: jr          $ra
    // 0x80246B5C: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
    return;
    // 0x80246B5C: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void D_80299C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299D18: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80299D1C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80299D20: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80299D24: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80299D28: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80299D2C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80299D30: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80299D34: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80299D38: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80299D3C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80299D40: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
    // 0x80299D44: sb          $t1, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r9;
    // 0x80299D48: sb          $zero, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = 0;
    // 0x80299D4C: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x80299D50: sw          $t9, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r25;
    // 0x80299D54: sw          $t0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r8;
    // 0x80299D58: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x80299D5C: sb          $t2, 0x32($a0)
    MEM_B(0X32, ctx->r4) = ctx->r10;
    // 0x80299D60: sb          $t3, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r11;
    // 0x80299D64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80299D68: jr          $ra
    // 0x80299D6C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    return;
    // 0x80299D6C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
;}
RECOMP_FUNC void D_8023E9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E9B0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8023E9B4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023E9B8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8023E9BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023E9C0: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x8023E9C4: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x8023E9C8: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x8023E9CC: beq         $t6, $zero, L_8023E9DC
    if (ctx->r14 == 0) {
        // 0x8023E9D0: sw          $zero, 0x78($sp)
        MEM_W(0X78, ctx->r29) = 0;
            goto L_8023E9DC;
    }
    // 0x8023E9D0: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x8023E9D4: b           L_8023EB98
    // 0x8023E9D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8023EB98;
    // 0x8023E9D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8023E9DC:
    // 0x8023E9DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8023E9E0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023E9E4: jal         0x802490E0
    // 0x8023E9E8: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    static_3_802490E0(rdram, ctx);
        goto after_0;
    // 0x8023E9E8: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    after_0:
    // 0x8023E9EC: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    // 0x8023E9F0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023E9F4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8023E9F8: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x8023E9FC: sw          $v1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r3;
    // 0x8023EA00: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    // 0x8023EA04: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8023EA08: ori         $a1, $a1, 0xA120
    ctx->r5 = ctx->r5 | 0XA120;
    // 0x8023EA0C: jal         0x8023D228
    // 0x8023EA10: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    static_3_8023D228(rdram, ctx);
        goto after_1;
    // 0x8023EA10: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    after_1:
    // 0x8023EA14: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023EA18: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8023EA1C: lui         $a3, 0xF
    ctx->r7 = S32(0XF << 16);
    // 0x8023EA20: ori         $a3, $a3, 0x4240
    ctx->r7 = ctx->r7 | 0X4240;
    // 0x8023EA24: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8023EA28: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8023EA2C: jal         0x8023D128
    // 0x8023EA30: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_8023D128(rdram, ctx);
        goto after_2;
    // 0x8023EA30: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x8023EA34: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8023EA38: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x8023EA3C: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x8023EA40: bne         $at, $zero, L_8023EB08
    if (ctx->r1 != 0) {
        // 0x8023EA44: sltu        $at, $t8, $v0
        ctx->r1 = ctx->r24 < ctx->r2 ? 1 : 0;
            goto L_8023EB08;
    }
    // 0x8023EA44: sltu        $at, $t8, $v0
    ctx->r1 = ctx->r24 < ctx->r2 ? 1 : 0;
    // 0x8023EA48: bne         $at, $zero, L_8023EA58
    if (ctx->r1 != 0) {
        // 0x8023EA4C: sltu        $at, $t9, $v1
        ctx->r1 = ctx->r25 < ctx->r3 ? 1 : 0;
            goto L_8023EA58;
    }
    // 0x8023EA4C: sltu        $at, $t9, $v1
    ctx->r1 = ctx->r25 < ctx->r3 ? 1 : 0;
    // 0x8023EA50: beq         $at, $zero, L_8023EB08
    if (ctx->r1 == 0) {
        // 0x8023EA54: nop
    
            goto L_8023EB08;
    }
    // 0x8023EA54: nop

L_8023EA58:
    // 0x8023EA58: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8023EA5C: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8023EA60: jal         0x802371E0
    // 0x8023EA64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802371E0(rdram, ctx);
        goto after_3;
    // 0x8023EA64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8023EA68: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    // 0x8023EA6C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023EA70: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8023EA74: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    // 0x8023EA78: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8023EA7C: ori         $a1, $a1, 0xA120
    ctx->r5 = ctx->r5 | 0XA120;
    // 0x8023EA80: jal         0x8023D228
    // 0x8023EA84: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    static_3_8023D228(rdram, ctx);
        goto after_4;
    // 0x8023EA84: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    after_4:
    // 0x8023EA88: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8023EA8C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8023EA90: lui         $a3, 0xF
    ctx->r7 = S32(0XF << 16);
    // 0x8023EA94: ori         $a3, $a3, 0x4240
    ctx->r7 = ctx->r7 | 0X4240;
    // 0x8023EA98: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8023EA9C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023EAA0: jal         0x8023D128
    // 0x8023EAA4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_8023D128(rdram, ctx);
        goto after_5;
    // 0x8023EAA4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_5:
    // 0x8023EAA8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023EAAC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8023EAB0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8023EAB4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023EAB8: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x8023EABC: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8023EAC0: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x8023EAC4: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x8023EAC8: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x8023EACC: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x8023EAD0: subu        $a2, $t0, $t2
    ctx->r6 = SUB32(ctx->r8, ctx->r10);
    // 0x8023EAD4: sltu        $at, $t1, $t3
    ctx->r1 = ctx->r9 < ctx->r11 ? 1 : 0;
    // 0x8023EAD8: subu        $a2, $a2, $at
    ctx->r6 = SUB32(ctx->r6, ctx->r1);
    // 0x8023EADC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8023EAE0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8023EAE4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8023EAE8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8023EAEC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8023EAF0: jal         0x8023E920
    // 0x8023EAF4: subu        $a3, $t1, $t3
    ctx->r7 = SUB32(ctx->r9, ctx->r11);
    static_3_8023E920(rdram, ctx);
        goto after_6;
    // 0x8023EAF4: subu        $a3, $t1, $t3
    ctx->r7 = SUB32(ctx->r9, ctx->r11);
    after_6:
    // 0x8023EAF8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8023EAFC: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8023EB00: jal         0x802374B0
    // 0x8023EB04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_7;
    // 0x8023EB04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
L_8023EB08:
    // 0x8023EB08: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8023EB0C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023EB10: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x8023EB14: jal         0x8023ECC8
    // 0x8023EB18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8023ECC8(rdram, ctx);
        goto after_8;
    // 0x8023EB18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x8023EB1C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023EB20: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023EB24: jal         0x802465B0
    // 0x8023EB28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802465B0(rdram, ctx);
        goto after_9;
    // 0x8023EB28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x8023EB2C: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8023EB30: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8023EB34: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8023EB38: jal         0x802374B0
    // 0x8023EB3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_10;
    // 0x8023EB3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x8023EB40: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023EB44: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023EB48: jal         0x802465B0
    // 0x8023EB4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_11;
    // 0x8023EB4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x8023EB50: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8023EB54: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8023EB58: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8023EB5C: jal         0x802374B0
    // 0x8023EB60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_12;
    // 0x8023EB60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x8023EB64: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x8023EB68: jal         0x8023EBF8
    // 0x8023EB6C: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    static_3_8023EBF8(rdram, ctx);
        goto after_13;
    // 0x8023EB6C: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    after_13:
    // 0x8023EB70: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023EB74: jal         0x80245A80
    // 0x8023EB78: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    func_80245A80(rdram, ctx);
        goto after_14;
    // 0x8023EB78: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    after_14:
    // 0x8023EB7C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023EB80: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023EB84: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023EB88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8023EB8C: jal         0x802371E0
    // 0x8023EB90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802371E0(rdram, ctx);
        goto after_15;
    // 0x8023EB90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x8023EB94: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
L_8023EB98:
    // 0x8023EB98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023EB9C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x8023EBA0: jr          $ra
    // 0x8023EBA4: nop

    return;
    // 0x8023EBA4: nop

;}
RECOMP_FUNC void D_802129A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802129A4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802129A8: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x802129AC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802129B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802129B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802129B8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x802129BC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802129C0: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x802129C4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802129C8: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x802129CC: bne         $a1, $at, L_802129E8
    if (ctx->r5 != ctx->r1) {
        // 0x802129D0: sw          $a3, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r7;
            goto L_802129E8;
    }
    // 0x802129D0: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x802129D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802129D8: jal         0x80231A24
    // 0x802129DC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802129DC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802129E0: b           L_80212C1C
    // 0x802129E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80212C1C;
    // 0x802129E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802129E8:
    // 0x802129E8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802129EC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802129F0: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x802129F4: srl         $t2, $s2, 22
    ctx->r10 = S32(U32(ctx->r18) >> 22);
    // 0x802129F8: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x802129FC: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x80212A00: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80212A04: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80212A08: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80212A0C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80212A10: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80212A14: bne         $a0, $zero, L_80212A34
    if (ctx->r4 != 0) {
        // 0x80212A18: subu        $t4, $t4, $t3
        ctx->r12 = SUB32(ctx->r12, ctx->r11);
            goto L_80212A34;
    }
    // 0x80212A18: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80212A1C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80212A20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80212A24: jal         0x80231A24
    // 0x80212A28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80212A28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80212A2C: b           L_80212C1C
    // 0x80212A30: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80212C1C;
    // 0x80212A30: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80212A34:
    // 0x80212A34: lw          $t1, 0x28($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X28);
    // 0x80212A38: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80212A3C: srl         $t6, $s2, 12
    ctx->r14 = S32(U32(ctx->r18) >> 12);
    // 0x80212A40: addu        $t0, $t1, $t4
    ctx->r8 = ADD32(ctx->r9, ctx->r12);
    // 0x80212A44: lw          $s1, 0x40($t0)
    ctx->r17 = MEM_W(ctx->r8, 0X40);
    // 0x80212A48: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x80212A4C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80212A50: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80212A54: lw          $t5, 0x8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8);
    // 0x80212A58: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80212A5C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80212A60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80212A64: addu        $v1, $t5, $t8
    ctx->r3 = ADD32(ctx->r13, ctx->r24);
    // 0x80212A68: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x80212A6C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80212A70: andi        $t2, $s2, 0xFFF
    ctx->r10 = ctx->r18 & 0XFFF;
    // 0x80212A74: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80212A78: addiu       $t8, $sp, 0x58
    ctx->r24 = ADD32(ctx->r29, 0X58);
    // 0x80212A7C: addiu       $t5, $sp, 0x5A
    ctx->r13 = ADD32(ctx->r29, 0X5A);
    // 0x80212A80: addiu       $t7, $sp, 0x5C
    ctx->r15 = ADD32(ctx->r29, 0X5C);
    // 0x80212A84: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x80212A88: addiu       $t4, $sp, 0x64
    ctx->r12 = ADD32(ctx->r29, 0X64);
    // 0x80212A8C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80212A90: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80212A94: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80212A98: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80212A9C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80212AA0: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x80212AA4: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x80212AA8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80212AAC: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x80212AB0: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x80212AB4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80212AB8: addu        $s3, $t9, $t3
    ctx->r19 = ADD32(ctx->r25, ctx->r11);
    // 0x80212ABC: jal         0x802160EC
    // 0x80212AC0: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    static_3_802160EC(rdram, ctx);
        goto after_2;
    // 0x80212AC0: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    after_2:
    // 0x80212AC4: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80212AC8: lwc1        $f6, 0x2C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80212ACC: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80212AD0: lw          $s0, 0x94($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X94);
    // 0x80212AD4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80212AD8: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80212ADC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80212AE0: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x80212AE4: lwc1        $f18, 0x2C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80212AE8: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80212AEC: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x80212AF0: lwc1        $f8, 0x2C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80212AF4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80212AF8: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x80212AFC: lhu         $a3, 0x4($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X4);
    // 0x80212B00: lhu         $a2, 0x2($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X2);
    // 0x80212B04: lhu         $a1, 0x0($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X0);
    // 0x80212B08: jal         0x80212C84
    // 0x80212B0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    static_3_80212C84(rdram, ctx);
        goto after_3;
    // 0x80212B0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x80212B10: bne         $v0, $zero, L_80212B58
    if (ctx->r2 != 0) {
        // 0x80212B14: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80212B58;
    }
    // 0x80212B14: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80212B18: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80212B1C: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80212B20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80212B24: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80212B28: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80212B2C: sdc1        $f4, 0x10($sp)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X10, ctx->r29);
    // 0x80212B30: sdc1        $f8, 0x18($sp)
    CHECK_FR(ctx, 8);
    SD(ctx->f8.u64, 0X18, ctx->r29);
    // 0x80212B34: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80212B38: jal         0x80231A24
    // 0x80212B3C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80212B3C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x80212B40: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80212B44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80212B48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80212B4C: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x80212B50: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x80212B54: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_80212B58:
    // 0x80212B58: lhu         $t9, 0x0($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X0);
    // 0x80212B5C: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x80212B60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80212B64: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x80212B68: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x80212B6C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80212B70: lh          $t1, 0x0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X0);
    // 0x80212B74: lh          $t4, 0x2($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2);
    // 0x80212B78: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x80212B7C: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x80212B80: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80212B84: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80212B88: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80212B8C: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80212B90: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80212B94: bc1t        L_80212BF4
    if (c1cs) {
        // 0x80212B98: cvt.s.w     $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80212BF4;
    }
    // 0x80212B98: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80212B9C: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80212BA0: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80212BA4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80212BA8: sub.s       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x80212BAC: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80212BB0: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x80212BB4: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80212BB8: sub.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x80212BBC: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80212BC0: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80212BC4: div.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80212BC8: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x80212BCC: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80212BD0: lwc1        $f18, 0x2C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80212BD4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80212BD8: div.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80212BDC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x80212BE0: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x80212BE4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80212BE8: lwc1        $f8, 0x38($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X38);
    // 0x80212BEC: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80212BF0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_80212BF4:
    // 0x80212BF4: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x80212BF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80212BFC: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x80212C00: lbu         $v0, 0x48($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X48);
    // 0x80212C04: beq         $v0, $zero, L_80212C18
    if (ctx->r2 == 0) {
        // 0x80212C08: negu        $a0, $v0
        ctx->r4 = SUB32(0, ctx->r2);
            goto L_80212C18;
    }
    // 0x80212C08: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
    // 0x80212C0C: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x80212C10: jal         0x80218C74
    // 0x80212C14: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    static_3_80218C74(rdram, ctx);
        goto after_5;
    // 0x80212C14: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    after_5:
L_80212C18:
    // 0x80212C18: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80212C1C:
    // 0x80212C1C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80212C20: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80212C24: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80212C28: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80212C2C: jr          $ra
    // 0x80212C30: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80212C30: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_802221D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802221D8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802221DC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802221E0: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x802221E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802221E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802221EC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802221F0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802221F4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802221F8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802221FC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80222200: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80222204: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222208: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8022220C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80222210: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x80222214: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x80222218: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8022221C: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80222220: lui         $t5, 0x30
    ctx->r13 = S32(0X30 << 16);
    // 0x80222224: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80222228: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8022222C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80222230: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x80222234: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x80222238: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8022223C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80222240: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80222244: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222248: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8022224C: jal         0x802375F0
    // 0x80222250: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x80222250: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80222254: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80222258: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8022225C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80222260: sw          $v0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r2;
    // 0x80222264: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80222268: lui         $t4, 0xF700
    ctx->r12 = S32(0XF700 << 16);
    // 0x8022226C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80222270: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80222274: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80222278: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8022227C: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x80222280: lbu         $t9, 0x2B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2B);
    // 0x80222284: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80222288: lbu         $t7, 0x33($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X33);
    // 0x8022228C: sll         $t5, $t9, 8
    ctx->r13 = S32(ctx->r25 << 8);
    // 0x80222290: andi        $t9, $t8, 0x7C0
    ctx->r25 = ctx->r24 & 0X7C0;
    // 0x80222294: andi        $t6, $t5, 0xF800
    ctx->r14 = ctx->r13 & 0XF800;
    // 0x80222298: or          $t5, $t6, $t9
    ctx->r13 = ctx->r14 | ctx->r25;
    // 0x8022229C: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x802222A0: andi        $t6, $t8, 0x3E
    ctx->r14 = ctx->r24 & 0X3E;
    // 0x802222A4: or          $a1, $t5, $t6
    ctx->r5 = ctx->r13 | ctx->r14;
    // 0x802222A8: ori         $t9, $a1, 0x1
    ctx->r25 = ctx->r5 | 0X1;
    // 0x802222AC: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x802222B0: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x802222B4: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802222B8: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x802222BC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802222C0: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x802222C4: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x802222C8: lh          $t6, 0x0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X0);
    // 0x802222CC: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x802222D0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802222D4: lh          $t6, 0x0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X0);
    // 0x802222D8: andi        $t7, $t9, 0x3FF
    ctx->r15 = ctx->r25 & 0X3FF;
    // 0x802222DC: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x802222E0: addiu       $t9, $zero, 0xEF
    ctx->r25 = ADD32(0, 0XEF);
    // 0x802222E4: or          $t5, $t8, $at
    ctx->r13 = ctx->r24 | ctx->r1;
    // 0x802222E8: subu        $t7, $t9, $t6
    ctx->r15 = SUB32(ctx->r25, ctx->r14);
    // 0x802222EC: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x802222F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802222F4: or          $t6, $t5, $t9
    ctx->r14 = ctx->r13 | ctx->r25;
    // 0x802222F8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802222FC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80222300: lh          $t7, 0x0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X0);
    // 0x80222304: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80222308: lh          $t9, 0x0($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X0);
    // 0x8022230C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x80222310: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x80222314: sll         $t5, $t8, 14
    ctx->r13 = S32(ctx->r24 << 14);
    // 0x80222318: subu        $t7, $t6, $t9
    ctx->r15 = SUB32(ctx->r14, ctx->r25);
    // 0x8022231C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x80222320: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80222324: or          $t9, $t5, $t6
    ctx->r25 = ctx->r13 | ctx->r14;
    // 0x80222328: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8022232C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80222330: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80222334: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x80222338: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8022233C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80222340: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222344: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80222348: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8022234C: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x80222350: lui         $t9, 0x10
    ctx->r25 = S32(0X10 << 16);
    // 0x80222354: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x80222358: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x8022235C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80222360: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80222364: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80222368: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x8022236C: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x80222370: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80222374: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80222378: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8022237C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80222380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222384: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80222388: jr          $ra
    // 0x8022238C: nop

    return;
    // 0x8022238C: nop

;}
RECOMP_FUNC void D_802F0094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0114: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802F0118: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802F011C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802F0120: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802F0124: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802F0128: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x802F012C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x802F0130: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802F0134: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802F0138: bne         $t6, $at, L_802F014C
    if (ctx->r14 != ctx->r1) {
        // 0x802F013C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802F014C;
    }
    // 0x802F013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0140: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x802F0144: b           L_802F0168
    // 0x802F0148: sb          $t7, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r15;
        goto L_802F0168;
    // 0x802F0148: sb          $t7, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r15;
L_802F014C:
    // 0x802F014C: jal         0x803206C0
    // 0x802F0150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_803206C0(rdram, ctx);
        goto after_0;
    // 0x802F0150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802F0154: sb          $v0, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r2;
    // 0x802F0158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F015C: jal         0x803206F0
    // 0x802F0160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_803206F0(rdram, ctx);
        goto after_1;
    // 0x802F0160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802F0164: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_802F0168:
    // 0x802F0168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F016C: jal         0x80320728
    // 0x802F0170: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80320728(rdram, ctx);
        goto after_2;
    // 0x802F0170: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802F0174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0178: jal         0x80320774
    // 0x802F017C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80320774(rdram, ctx);
        goto after_3;
    // 0x802F017C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x802F0180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F0184: jal         0x803207AC
    // 0x802F0188: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_803207AC(rdram, ctx);
        goto after_4;
    // 0x802F0188: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x802F018C: lbu         $t8, 0x4F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4F);
    // 0x802F0190: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x802F0194: lbu         $v0, 0x47($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X47);
    // 0x802F0198: beq         $t8, $zero, L_802F0220
    if (ctx->r24 == 0) {
        // 0x802F019C: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_802F0220;
    }
    // 0x802F019C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802F01A0: beql        $v0, $at, L_802F0224
    if (ctx->r2 == ctx->r1) {
        // 0x802F01A4: lbu         $t0, 0x4F($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0X4F);
            goto L_802F0224;
    }
    goto skip_0;
    // 0x802F01A4: lbu         $t0, 0x4F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4F);
    skip_0:
    // 0x802F01A8: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    // 0x802F01AC: jal         0x80305EF0
    // 0x802F01B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    static_3_80305EF0(rdram, ctx);
        goto after_5;
    // 0x802F01B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_5:
    // 0x802F01B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802F01B8: addiu       $a1, $zero, 0x320
    ctx->r5 = ADD32(0, 0X320);
    // 0x802F01BC: jal         0x80305E90
    // 0x802F01C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_6;
    // 0x802F01C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x802F01C4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802F01C8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802F01CC: addiu       $a1, $s0, 0x64
    ctx->r5 = ADD32(ctx->r16, 0X64);
    // 0x802F01D0: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x802F01D4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802F01D8: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x802F01DC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802F01E0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802F01E4: jal         0x80302238
    // 0x802F01E8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_7;
    // 0x802F01E8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802F01EC: beq         $v0, $zero, L_802F0220
    if (ctx->r2 == 0) {
        // 0x802F01F0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802F0220;
    }
    // 0x802F01F0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802F01F4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802F01F8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802F01FC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x802F0200: jal         0x8030262C
    // 0x802F0204: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_8;
    // 0x802F0204: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802F0208: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802F020C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802F0210: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802F0214: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802F0218: jal         0x80302664
    // 0x802F021C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_9;
    // 0x802F021C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_9:
L_802F0220:
    // 0x802F0220: lbu         $t0, 0x4F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4F);
L_802F0224:
    // 0x802F0224: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802F0228: bnel        $t0, $zero, L_802F0244
    if (ctx->r8 != 0) {
        // 0x802F022C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802F0244;
    }
    goto skip_1;
    // 0x802F022C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x802F0230: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802F0234: addiu       $a1, $s0, 0x64
    ctx->r5 = ADD32(ctx->r16, 0X64);
    // 0x802F0238: jal         0x80302414
    // 0x802F023C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_10;
    // 0x802F023C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_10:
    // 0x802F0240: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802F0244:
    // 0x802F0244: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802F0248: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802F024C: jr          $ra
    // 0x802F0250: nop

    return;
    // 0x802F0250: nop

;}
RECOMP_FUNC void D_80242A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242A80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80242A84: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x80242A88: sra         $t6, $t0, 16
    ctx->r14 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80242A8C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80242A90: sll         $s1, $t6, 2
    ctx->r17 = S32(ctx->r14 << 2);
    // 0x80242A94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80242A98: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80242A9C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80242AA0: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
    // 0x80242AA4: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x80242AA8: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x80242AAC: subu        $s1, $s1, $t6
    ctx->r17 = SUB32(ctx->r17, ctx->r14);
    // 0x80242AB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80242AB4: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x80242AB8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80242ABC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    // 0x80242AC0: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80242AC4: jal         0x80242690
    // 0x80242AC8: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    static_3_80242690(rdram, ctx);
        goto after_0;
    // 0x80242AC8: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x80242ACC: lw          $t8, 0x34($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X34);
    // 0x80242AD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80242AD4: addu        $a2, $t8, $s1
    ctx->r6 = ADD32(ctx->r24, ctx->r17);
    // 0x80242AD8: jal         0x8024A234
    // 0x80242ADC: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    static_3_8024A234(rdram, ctx);
        goto after_1;
    // 0x80242ADC: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    after_1:
    // 0x80242AE0: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x80242AE4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80242AE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80242AEC: addu        $a2, $t9, $s1
    ctx->r6 = ADD32(ctx->r25, ctx->r17);
    // 0x80242AF0: jal         0x80242B70
    // 0x80242AF4: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    static_3_80242B70(rdram, ctx);
        goto after_2;
    // 0x80242AF4: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    after_2:
    // 0x80242AF8: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x80242AFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80242B00: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80242B04: addu        $v0, $t2, $s1
    ctx->r2 = ADD32(ctx->r10, ctx->r17);
    // 0x80242B08: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80242B0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80242B10: jr          $ra
    // 0x80242B14: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    return;
    // 0x80242B14: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
;}
RECOMP_FUNC void D_802826F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282770: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80282774: jr          $ra
    // 0x80282778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80282778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802E2004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E2084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E2088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E208C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802E2090: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E2094: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802E2098: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802E209C: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    // 0x802E20A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802E20A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E20A8: jal         0x8021E708
    // 0x802E20AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E708(rdram, ctx);
        goto after_0;
    // 0x802E20AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802E20B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802E20B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802E20B8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802E20BC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802E20C0: jal         0x8021E87C
    // 0x802E20C4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    static_3_8021E87C(rdram, ctx);
        goto after_1;
    // 0x802E20C4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_1:
    // 0x802E20C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802E20CC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802E20D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802E20D4: jal         0x8021E708
    // 0x802E20D8: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    static_3_8021E708(rdram, ctx);
        goto after_2;
    // 0x802E20D8: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    after_2:
    // 0x802E20DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802E20E0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802E20E4: jal         0x8021E87C
    // 0x802E20E8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    static_3_8021E87C(rdram, ctx);
        goto after_3;
    // 0x802E20E8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x802E20EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E20F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E20F4: jr          $ra
    // 0x802E20F8: nop

    return;
    // 0x802E20F8: nop

;}
RECOMP_FUNC void D_802DCAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DCB20: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802DCB24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802DCB28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802DCB2C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802DCB30: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x802DCB34: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x802DCB38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802DCB3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DCB40: bnel        $t6, $at, L_802DCBCC
    if (ctx->r14 != ctx->r1) {
        // 0x802DCB44: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802DCBCC;
    }
    goto skip_0;
    // 0x802DCB44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802DCB48: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802DCB4C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x802DCB50: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802DCB54: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x802DCB58: jalr        $t9
    // 0x802DCB5C: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802DCB5C: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    after_0:
    // 0x802DCB60: jal         0x80318214
    // 0x802DCB64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318214(rdram, ctx);
        goto after_1;
    // 0x802DCB64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802DCB68: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x802DCB6C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802DCB70: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802DCB74: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x802DCB78: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x802DCB7C: jal         0x802C53E4
    // 0x802DCB80: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_2;
    // 0x802DCB80: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x802DCB84: jal         0x80318214
    // 0x802DCB88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318214(rdram, ctx);
        goto after_3;
    // 0x802DCB88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802DCB8C: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    // 0x802DCB90: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802DCB94: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802DCB98: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x802DCB9C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x802DCBA0: jal         0x802C53E4
    // 0x802DCBA4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_4;
    // 0x802DCBA4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x802DCBA8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802DCBAC: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802DCBB0: jal         0x802C5468
    // 0x802DCBB4: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    static_3_802C5468(rdram, ctx);
        goto after_5;
    // 0x802DCBB4: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    after_5:
    // 0x802DCBB8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802DCBBC: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802DCBC0: jal         0x802C5468
    // 0x802DCBC4: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    static_3_802C5468(rdram, ctx);
        goto after_6;
    // 0x802DCBC4: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    after_6:
    // 0x802DCBC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802DCBCC:
    // 0x802DCBCC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802DCBD0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802DCBD4: jr          $ra
    // 0x802DCBD8: nop

    return;
    // 0x802DCBD8: nop

;}
RECOMP_FUNC void D_802CF8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF920: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x802CF924: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802CF928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CF92C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802CF930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CF934: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x802CF938: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x802CF93C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802CF940: jal         0x80316B90
    // 0x802CF944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80316B90(rdram, ctx);
        goto after_0;
    // 0x802CF944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802CF948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802CF94C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802CF950: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802CF954: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x802CF958: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x802CF95C: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x802CF960: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x802CF964: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x802CF968: nop

    // 0x802CF96C: bc1fl       L_802CF99C
    if (!c1cs) {
        // 0x802CF970: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802CF99C;
    }
    goto skip_0;
    // 0x802CF970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802CF974: lbu         $t6, 0x3A0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3A0);
    // 0x802CF978: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802CF97C: bnel        $t6, $zero, L_802CF994
    if (ctx->r14 != 0) {
        // 0x802CF980: swc1        $f2, 0x4C($a0)
        MEM_W(0X4C, ctx->r4) = ctx->f2.u32l;
            goto L_802CF994;
    }
    goto skip_1;
    // 0x802CF980: swc1        $f2, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f2.u32l;
    skip_1:
    // 0x802CF984: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802CF988: b           L_802CF994
    // 0x802CF98C: swc1        $f10, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f10.u32l;
        goto L_802CF994;
    // 0x802CF98C: swc1        $f10, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f10.u32l;
    // 0x802CF990: swc1        $f2, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f2.u32l;
L_802CF994:
    // 0x802CF994: sb          $t7, 0x36C($a0)
    MEM_B(0X36C, ctx->r4) = ctx->r15;
    // 0x802CF998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802CF99C:
    // 0x802CF99C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CF9A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802CF9A4: jr          $ra
    // 0x802CF9A8: nop

    return;
    // 0x802CF9A8: nop

;}
RECOMP_FUNC void D_8029F7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F838: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8029F83C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8029F840: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8029F844: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029F848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029F84C: beq         $t6, $zero, L_8029F86C
    if (ctx->r14 == 0) {
        // 0x8029F850: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8029F86C;
    }
    // 0x8029F850: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8029F854: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8029F858: jal         0x80223F4C
    // 0x8029F85C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    static_3_80223F4C(rdram, ctx);
        goto after_0;
    // 0x8029F85C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x8029F860: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8029F864: b           L_8029F890
    // 0x8029F868: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_8029F890;
    // 0x8029F868: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8029F86C:
    // 0x8029F86C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8029F870: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029F874: jal         0x80223F4C
    // 0x8029F878: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    static_3_80223F4C(rdram, ctx);
        goto after_1;
    // 0x8029F878: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x8029F87C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8029F880: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8029F884: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8029F888: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8029F88C: nop

L_8029F890:
    // 0x8029F890: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8029F894: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8029F898: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8029F89C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8029F8A0: addu        $a2, $a3, $t7
    ctx->r6 = ADD32(ctx->r7, ctx->r15);
    // 0x8029F8A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F8A8: bc1fl       L_8029F8BC
    if (!c1cs) {
        // 0x8029F8AC: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_8029F8BC;
    }
    goto skip_0;
    // 0x8029F8AC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_0:
    // 0x8029F8B0: b           L_8029F8BC
    // 0x8029F8B4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_8029F8BC;
    // 0x8029F8B4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8029F8B8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_8029F8BC:
    // 0x8029F8BC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F8C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F8C4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8029F8C8: nop

    // 0x8029F8CC: bc1f        L_8029F8E4
    if (!c1cs) {
        // 0x8029F8D0: nop
    
            goto L_8029F8E4;
    }
    // 0x8029F8D0: nop

    // 0x8029F8D4: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x8029F8D8: beq         $t8, $zero, L_8029F8E4
    if (ctx->r24 == 0) {
        // 0x8029F8DC: nop
    
            goto L_8029F8E4;
    }
    // 0x8029F8DC: nop

    // 0x8029F8E0: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
L_8029F8E4:
    // 0x8029F8E4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F8E8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8029F8EC: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8029F8F0: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x8029F8F4: addu        $a2, $a3, $t9
    ctx->r6 = ADD32(ctx->r7, ctx->r25);
    // 0x8029F8F8: lbu         $a1, 0x0($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X0);
    // 0x8029F8FC: bc1f        L_8029F938
    if (!c1cs) {
        // 0x8029F900: nop
    
            goto L_8029F938;
    }
    // 0x8029F900: nop

    // 0x8029F904: bne         $a1, $zero, L_8029F938
    if (ctx->r5 != 0) {
        // 0x8029F908: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8029F938;
    }
    // 0x8029F908: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8029F90C: sb          $t0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r8;
    // 0x8029F910: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029F914: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8029F918: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8029F91C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x8029F920: jal         0x802B1874
    // 0x8029F924: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    static_3_802B1874(rdram, ctx);
        goto after_2;
    // 0x8029F924: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x8029F928: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8029F92C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8029F930: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8029F934: lbu         $a1, 0x0($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X0);
L_8029F938:
    // 0x8029F938: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F93C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029F940: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8029F944: nop

    // 0x8029F948: bc1fl       L_8029F980
    if (!c1cs) {
        // 0x8029F94C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8029F980;
    }
    goto skip_1;
    // 0x8029F94C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_1:
    // 0x8029F950: bne         $a1, $zero, L_8029F97C
    if (ctx->r5 != 0) {
        // 0x8029F954: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_8029F97C;
    }
    // 0x8029F954: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8029F958: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
    // 0x8029F95C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029F960: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8029F964: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8029F968: jal         0x802B1874
    // 0x8029F96C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    static_3_802B1874(rdram, ctx);
        goto after_3;
    // 0x8029F96C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_3:
    // 0x8029F970: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8029F974: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8029F978: lbu         $a1, 0x0($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X0);
L_8029F97C:
    // 0x8029F97C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8029F980:
    // 0x8029F980: bne         $a1, $at, L_8029F9EC
    if (ctx->r5 != ctx->r1) {
        // 0x8029F984: lui         $t9, 0x0
        ctx->r25 = S32(0X0 << 16);
            goto L_8029F9EC;
    }
    // 0x8029F984: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8029F988: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8029F98C: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x8029F990: sll         $v1, $a3, 1
    ctx->r3 = S32(ctx->r7 << 1);
    // 0x8029F994: addu        $v0, $v1, $t3
    ctx->r2 = ADD32(ctx->r3, ctx->r11);
    // 0x8029F998: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x8029F99C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8029F9A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029F9A4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8029F9A8: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x8029F9AC: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
    // 0x8029F9B0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8029F9B4: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    // 0x8029F9B8: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x8029F9BC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8029F9C0: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x8029F9C4: bnel        $a0, $t6, L_8029F9EC
    if (ctx->r4 != ctx->r14) {
        // 0x8029F9C8: lbu         $a1, 0x0($a2)
        ctx->r5 = MEM_BU(ctx->r6, 0X0);
            goto L_8029F9EC;
    }
    goto skip_2;
    // 0x8029F9C8: lbu         $a1, 0x0($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X0);
    skip_2:
    // 0x8029F9CC: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x8029F9D0: addiu       $t8, $a0, -0x1
    ctx->r24 = ADD32(ctx->r4, -0X1);
    // 0x8029F9D4: beql        $t7, $zero, L_8029F9E8
    if (ctx->r15 == 0) {
        // 0x8029F9D8: sh          $t8, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r24;
            goto L_8029F9E8;
    }
    goto skip_3;
    // 0x8029F9D8: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    skip_3:
    // 0x8029F9DC: b           L_8029F9E8
    // 0x8029F9E0: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
        goto L_8029F9E8;
    // 0x8029F9E0: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8029F9E4: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_8029F9E8:
    // 0x8029F9E8: lbu         $a1, 0x0($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X0);
L_8029F9EC:
    // 0x8029F9EC: sll         $v1, $a3, 1
    ctx->r3 = S32(ctx->r7 << 1);
    // 0x8029F9F0: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8029F9F4: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x8029F9F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8029F9FC: bne         $a1, $at, L_8029FA54
    if (ctx->r5 != ctx->r1) {
        // 0x8029FA00: lh          $a0, 0x0($v0)
        ctx->r4 = MEM_H(ctx->r2, 0X0);
            goto L_8029FA54;
    }
    // 0x8029FA00: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8029FA04: addiu       $t1, $a0, -0x1
    ctx->r9 = ADD32(ctx->r4, -0X1);
    // 0x8029FA08: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x8029FA0C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8029FA10: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8029FA14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8029FA18: bne         $a0, $at, L_8029FA54
    if (ctx->r4 != ctx->r1) {
        // 0x8029FA1C: sb          $t0, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r8;
            goto L_8029FA54;
    }
    // 0x8029FA1C: sb          $t0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r8;
    // 0x8029FA20: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8029FA24: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x8029FA28: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x8029FA2C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8029FA30: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x8029FA34: beql        $t2, $zero, L_8029FA50
    if (ctx->r10 == 0) {
        // 0x8029FA38: sh          $zero, 0x0($v0)
        MEM_H(0X0, ctx->r2) = 0;
            goto L_8029FA50;
    }
    goto skip_4;
    // 0x8029FA38: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    skip_4:
    // 0x8029FA3C: lh          $t3, 0x0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X0);
    // 0x8029FA40: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8029FA44: b           L_8029FA50
    // 0x8029FA48: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
        goto L_8029FA50;
    // 0x8029FA48: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x8029FA4C: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_8029FA50:
    // 0x8029FA50: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
L_8029FA54:
    // 0x8029FA54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029FA58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8029FA5C: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8029FA60: jr          $ra
    // 0x8029FA64: nop

    return;
    // 0x8029FA64: nop

;}
RECOMP_FUNC void D_80207688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207688: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8020768C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207690: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80207694: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80207698: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8020769C: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802076A0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802076A4: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802076A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802076AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802076B0: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x802076B4: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802076B8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x802076BC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x802076C0: bc1f        L_802076D0
    if (!c1cs) {
        // 0x802076C4: lw          $t8, 0x34($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X34);
            goto L_802076D0;
    }
    // 0x802076C4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x802076C8: b           L_802076E4
    // 0x802076CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_802076E4;
    // 0x802076CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802076D0:
    // 0x802076D0: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x802076D4: nop

    // 0x802076D8: bc1fl       L_802076E8
    if (!c1cs) {
        // 0x802076DC: lwc1        $f14, 0x8($a3)
        ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
            goto L_802076E8;
    }
    goto skip_0;
    // 0x802076DC: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    skip_0:
    // 0x802076E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802076E4:
    // 0x802076E4: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
L_802076E8:
    // 0x802076E8: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x802076EC: nop

    // 0x802076F0: bc1fl       L_80207704
    if (!c1cs) {
        // 0x802076F4: c.le.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
            goto L_80207704;
    }
    goto skip_1;
    // 0x802076F4: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    skip_1:
    // 0x802076F8: b           L_80207714
    // 0x802076FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_80207714;
    // 0x802076FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80207700: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
L_80207704:
    // 0x80207704: nop

    // 0x80207708: bc1fl       L_80207718
    if (!c1cs) {
        // 0x8020770C: lwc1        $f16, 0x8($t6)
        ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
            goto L_80207718;
    }
    goto skip_2;
    // 0x8020770C: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    skip_2:
    // 0x80207710: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80207714:
    // 0x80207714: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
L_80207718:
    // 0x80207718: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8020771C: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80207720: nop

    // 0x80207724: bc1fl       L_80207738
    if (!c1cs) {
        // 0x80207728: c.le.s      $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
            goto L_80207738;
    }
    goto skip_3;
    // 0x80207728: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    skip_3:
    // 0x8020772C: b           L_80207748
    // 0x80207730: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_80207748;
    // 0x80207730: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80207734: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
L_80207738:
    // 0x80207738: nop

    // 0x8020773C: bc1fl       L_8020774C
    if (!c1cs) {
        // 0x80207740: lwc1        $f18, 0x8($t7)
        ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
            goto L_8020774C;
    }
    goto skip_4;
    // 0x80207740: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    skip_4:
    // 0x80207744: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80207748:
    // 0x80207748: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
L_8020774C:
    // 0x8020774C: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x80207750: nop

    // 0x80207754: bc1fl       L_80207768
    if (!c1cs) {
        // 0x80207758: c.le.s      $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
            goto L_80207768;
    }
    goto skip_5;
    // 0x80207758: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    skip_5:
    // 0x8020775C: b           L_80207778
    // 0x80207760: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_80207778;
    // 0x80207760: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80207764: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
L_80207768:
    // 0x80207768: nop

    // 0x8020776C: bc1fl       L_8020777C
    if (!c1cs) {
        // 0x80207770: lwc1        $f12, 0x8($t8)
        ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
            goto L_8020777C;
    }
    goto skip_6;
    // 0x80207770: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
    skip_6:
    // 0x80207774: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80207778:
    // 0x80207778: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
L_8020777C:
    // 0x8020777C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80207780: nop

    // 0x80207784: bc1fl       L_80207888
    if (!c1cs) {
        // 0x80207788: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80207888;
    }
    goto skip_7;
    // 0x80207788: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_7:
    // 0x8020778C: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x80207790: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80207794: bc1f        L_802077CC
    if (!c1cs) {
        // 0x80207798: nop
    
            goto L_802077CC;
    }
    // 0x80207798: nop

    // 0x8020779C: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x802077A0: nop

    // 0x802077A4: bc1f        L_802077CC
    if (!c1cs) {
        // 0x802077A8: nop
    
            goto L_802077CC;
    }
    // 0x802077A8: nop

    // 0x802077AC: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x802077B0: nop

    // 0x802077B4: bc1f        L_802077CC
    if (!c1cs) {
        // 0x802077B8: nop
    
            goto L_802077CC;
    }
    // 0x802077B8: nop

    // 0x802077BC: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x802077C0: nop

    // 0x802077C4: bc1tl       L_80207B08
    if (c1cs) {
        // 0x802077C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B08;
    }
    goto skip_8;
    // 0x802077C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
L_802077CC:
    // 0x802077CC: bne         $v0, $a0, L_80207B04
    if (ctx->r2 != ctx->r4) {
        // 0x802077D0: lwc1        $f4, 0x1C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80207B04;
    }
    // 0x802077D0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802077D4: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x802077D8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802077DC: bc1fl       L_80207804
    if (!c1cs) {
        // 0x802077E0: c.le.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
            goto L_80207804;
    }
    goto skip_9;
    // 0x802077E0: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    skip_9:
    // 0x802077E4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x802077E8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x802077EC: jal         0x80207B64
    // 0x802077F0: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_0;
    // 0x802077F0: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x802077F4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x802077F8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802077FC: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207800: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
L_80207804:
    // 0x80207804: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207808: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8020780C: bc1fl       L_80207828
    if (!c1cs) {
        // 0x80207810: lw          $t9, 0x40($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X40);
            goto L_80207828;
    }
    goto skip_10;
    // 0x80207810: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    skip_10:
    // 0x80207814: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207818: jal         0x80207B64
    // 0x8020781C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_1;
    // 0x8020781C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x80207820: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207824: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
L_80207828:
    // 0x80207828: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8020782C: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80207830: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80207834: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x80207838: nop

    // 0x8020783C: bc1fl       L_80207858
    if (!c1cs) {
        // 0x80207840: lw          $t0, 0x44($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X44);
            goto L_80207858;
    }
    goto skip_11;
    // 0x80207840: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    skip_11:
    // 0x80207844: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207848: jal         0x80207B64
    // 0x8020784C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_2;
    // 0x8020784C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x80207850: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207854: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
L_80207858:
    // 0x80207858: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8020785C: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80207860: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x80207864: nop

    // 0x80207868: bc1fl       L_80207B08
    if (!c1cs) {
        // 0x8020786C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B08;
    }
    goto skip_12;
    // 0x8020786C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_12:
    // 0x80207870: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207874: jal         0x80207B64
    // 0x80207878: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    static_3_80207B64(rdram, ctx);
        goto after_3;
    // 0x80207878: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_3:
    // 0x8020787C: b           L_80207B08
    // 0x80207880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80207B08;
    // 0x80207880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207884: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80207888:
    // 0x80207888: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8020788C: bc1f        L_8020798C
    if (!c1cs) {
        // 0x80207890: nop
    
            goto L_8020798C;
    }
    // 0x80207890: nop

    // 0x80207894: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x80207898: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8020789C: bc1f        L_802078D4
    if (!c1cs) {
        // 0x802078A0: nop
    
            goto L_802078D4;
    }
    // 0x802078A0: nop

    // 0x802078A4: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802078A8: nop

    // 0x802078AC: bc1f        L_802078D4
    if (!c1cs) {
        // 0x802078B0: nop
    
            goto L_802078D4;
    }
    // 0x802078B0: nop

    // 0x802078B4: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x802078B8: nop

    // 0x802078BC: bc1f        L_802078D4
    if (!c1cs) {
        // 0x802078C0: nop
    
            goto L_802078D4;
    }
    // 0x802078C0: nop

    // 0x802078C4: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x802078C8: nop

    // 0x802078CC: bc1tl       L_80207B08
    if (c1cs) {
        // 0x802078D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B08;
    }
    goto skip_13;
    // 0x802078D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_13:
L_802078D4:
    // 0x802078D4: bne         $v1, $a0, L_80207B04
    if (ctx->r3 != ctx->r4) {
        // 0x802078D8: lwc1        $f4, 0x1C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80207B04;
    }
    // 0x802078D8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802078DC: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x802078E0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802078E4: bc1fl       L_8020790C
    if (!c1cs) {
        // 0x802078E8: c.le.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
            goto L_8020790C;
    }
    goto skip_14;
    // 0x802078E8: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    skip_14:
    // 0x802078EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802078F0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x802078F4: jal         0x80207B64
    // 0x802078F8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_4;
    // 0x802078F8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x802078FC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80207900: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80207904: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207908: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
L_8020790C:
    // 0x8020790C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207910: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80207914: bc1fl       L_80207930
    if (!c1cs) {
        // 0x80207918: lw          $t1, 0x40($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X40);
            goto L_80207930;
    }
    goto skip_15;
    // 0x80207918: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    skip_15:
    // 0x8020791C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80207920: jal         0x80207B64
    // 0x80207924: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_5;
    // 0x80207924: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x80207928: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8020792C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
L_80207930:
    // 0x80207930: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207934: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80207938: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8020793C: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80207940: nop

    // 0x80207944: bc1fl       L_80207960
    if (!c1cs) {
        // 0x80207948: lw          $t2, 0x44($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X44);
            goto L_80207960;
    }
    goto skip_16;
    // 0x80207948: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    skip_16:
    // 0x8020794C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80207950: jal         0x80207B64
    // 0x80207954: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_6;
    // 0x80207954: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x80207958: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8020795C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80207960:
    // 0x80207960: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207964: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80207968: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x8020796C: nop

    // 0x80207970: bc1fl       L_80207B08
    if (!c1cs) {
        // 0x80207974: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B08;
    }
    goto skip_17;
    // 0x80207974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_17:
    // 0x80207978: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8020797C: jal         0x80207B64
    // 0x80207980: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    static_3_80207B64(rdram, ctx);
        goto after_7;
    // 0x80207980: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_7:
    // 0x80207984: b           L_80207B08
    // 0x80207988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80207B08;
    // 0x80207988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020798C:
    // 0x8020798C: beq         $v1, $zero, L_8020799C
    if (ctx->r3 == 0) {
        // 0x80207990: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8020799C;
    }
    // 0x80207990: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80207994: bnel        $v0, $zero, L_80207B08
    if (ctx->r2 != 0) {
        // 0x80207998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B08;
    }
    goto skip_18;
    // 0x80207998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_18:
L_8020799C:
    // 0x8020799C: bne         $v1, $a0, L_80207A54
    if (ctx->r3 != ctx->r4) {
        // 0x802079A0: lwc1        $f10, 0x1C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80207A54;
    }
    // 0x802079A0: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802079A4: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x802079A8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802079AC: bc1fl       L_802079D4
    if (!c1cs) {
        // 0x802079B0: c.le.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
            goto L_802079D4;
    }
    goto skip_19;
    // 0x802079B0: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    skip_19:
    // 0x802079B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802079B8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x802079BC: jal         0x80207B64
    // 0x802079C0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_8;
    // 0x802079C0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x802079C4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x802079C8: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802079CC: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    // 0x802079D0: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
L_802079D4:
    // 0x802079D4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802079D8: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x802079DC: bc1fl       L_802079F8
    if (!c1cs) {
        // 0x802079E0: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_802079F8;
    }
    goto skip_20;
    // 0x802079E0: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    skip_20:
    // 0x802079E4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802079E8: jal         0x80207B64
    // 0x802079EC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_9;
    // 0x802079EC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x802079F0: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802079F4: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
L_802079F8:
    // 0x802079F8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802079FC: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80207A00: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80207A04: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80207A08: nop

    // 0x80207A0C: bc1fl       L_80207A28
    if (!c1cs) {
        // 0x80207A10: lw          $t4, 0x44($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X44);
            goto L_80207A28;
    }
    goto skip_21;
    // 0x80207A10: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    skip_21:
    // 0x80207A14: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80207A18: jal         0x80207B64
    // 0x80207A1C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_10;
    // 0x80207A1C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x80207A20: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80207A24: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_80207A28:
    // 0x80207A28: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207A2C: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80207A30: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80207A34: nop

    // 0x80207A38: bc1fl       L_80207B08
    if (!c1cs) {
        // 0x80207A3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B08;
    }
    goto skip_22;
    // 0x80207A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_22:
    // 0x80207A40: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80207A44: jal         0x80207B64
    // 0x80207A48: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    static_3_80207B64(rdram, ctx);
        goto after_11;
    // 0x80207A48: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_11:
    // 0x80207A4C: b           L_80207B08
    // 0x80207A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80207B08;
    // 0x80207A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207A54:
    // 0x80207A54: bne         $v0, $a0, L_80207B04
    if (ctx->r2 != ctx->r4) {
        // 0x80207A58: lwc1        $f8, 0x1C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80207B04;
    }
    // 0x80207A58: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80207A5C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x80207A60: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207A64: bc1fl       L_80207A8C
    if (!c1cs) {
        // 0x80207A68: c.le.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
            goto L_80207A8C;
    }
    goto skip_23;
    // 0x80207A68: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    skip_23:
    // 0x80207A6C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207A70: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80207A74: jal         0x80207B64
    // 0x80207A78: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_12;
    // 0x80207A78: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_12:
    // 0x80207A7C: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80207A80: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207A84: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207A88: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
L_80207A8C:
    // 0x80207A8C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207A90: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80207A94: bc1fl       L_80207AB0
    if (!c1cs) {
        // 0x80207A98: lw          $t5, 0x40($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X40);
            goto L_80207AB0;
    }
    goto skip_24;
    // 0x80207A98: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    skip_24:
    // 0x80207A9C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207AA0: jal         0x80207B64
    // 0x80207AA4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_13;
    // 0x80207AA4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_13:
    // 0x80207AA8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207AAC: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
L_80207AB0:
    // 0x80207AB0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207AB4: lwc1        $f10, 0x8($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80207AB8: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80207ABC: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x80207AC0: nop

    // 0x80207AC4: bc1fl       L_80207AE0
    if (!c1cs) {
        // 0x80207AC8: lw          $t6, 0x44($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X44);
            goto L_80207AE0;
    }
    goto skip_25;
    // 0x80207AC8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    skip_25:
    // 0x80207ACC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207AD0: jal         0x80207B64
    // 0x80207AD4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    static_3_80207B64(rdram, ctx);
        goto after_14;
    // 0x80207AD4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_14:
    // 0x80207AD8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207ADC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
L_80207AE0:
    // 0x80207AE0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80207AE4: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80207AE8: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x80207AEC: nop

    // 0x80207AF0: bc1fl       L_80207B08
    if (!c1cs) {
        // 0x80207AF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207B08;
    }
    goto skip_26;
    // 0x80207AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_26:
    // 0x80207AF8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80207AFC: jal         0x80207B64
    // 0x80207B00: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    static_3_80207B64(rdram, ctx);
        goto after_15;
    // 0x80207B00: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_15:
L_80207B04:
    // 0x80207B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207B08:
    // 0x80207B08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80207B0C: jr          $ra
    // 0x80207B10: nop

    return;
    // 0x80207B10: nop

;}
RECOMP_FUNC void D_802DFBBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DFC3C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFC40: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DFC44: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802DFC48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFC4C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DFC50: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFC54: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DFC58: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x802DFC5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DFC60: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802DFC64: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802DFC68: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802DFC6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802DFC70: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802DFC74: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802DFC78: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802DFC7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802DFC80: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x802DFC84: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802DFC88: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802DFC8C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802DFC90: jal         0x80308530
    // 0x802DFC94: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_0;
    // 0x802DFC94: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x802DFC98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFC9C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DFCA0: lui         $at, 0xC38B
    ctx->r1 = S32(0XC38B << 16);
    // 0x802DFCA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DFCA8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802DFCAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DFCB0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802DFCB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DFCB8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802DFCBC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802DFCC0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802DFCC4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DFCC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802DFCCC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802DFCD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802DFCD4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802DFCD8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802DFCDC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802DFCE0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802DFCE4: jal         0x80308530
    // 0x802DFCE8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_1;
    // 0x802DFCE8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802DFCEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFCF0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DFCF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFCF8: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DFCFC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFD00: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DFD04: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802DFD08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DFD0C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802DFD10: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802DFD14: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802DFD18: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DFD1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802DFD20: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802DFD24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802DFD28: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802DFD2C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x802DFD30: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x802DFD34: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802DFD38: jal         0x80308530
    // 0x802DFD3C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    static_3_80308530(rdram, ctx);
        goto after_2;
    // 0x802DFD3C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802DFD40: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFD44: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DFD48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFD4C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DFD50: lui         $at, 0x442A
    ctx->r1 = S32(0X442A << 16);
    // 0x802DFD54: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DFD58: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802DFD5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DFD60: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802DFD64: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802DFD68: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802DFD6C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DFD70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802DFD74: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802DFD78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802DFD7C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802DFD80: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802DFD84: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802DFD88: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802DFD8C: jal         0x80308530
    // 0x802DFD90: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_3;
    // 0x802DFD90: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x802DFD94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802DFD98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802DFD9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DFDA0: jr          $ra
    // 0x802DFDA4: nop

    return;
    // 0x802DFDA4: nop

;}
RECOMP_FUNC void D_802A80FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A817C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A8180: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A8184: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A8188: bne         $a0, $zero, L_802A81A0
    if (ctx->r4 != 0) {
        // 0x802A818C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802A81A0;
    }
    // 0x802A818C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A8190: jal         0x802C67EC
    // 0x802A8194: addiu       $a0, $zero, 0x7FD0
    ctx->r4 = ADD32(0, 0X7FD0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A8194: addiu       $a0, $zero, 0x7FD0
    ctx->r4 = ADD32(0, 0X7FD0);
    after_0:
    // 0x802A8198: beq         $v0, $zero, L_802A81F4
    if (ctx->r2 == 0) {
        // 0x802A819C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802A81F4;
    }
    // 0x802A819C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802A81A0:
    // 0x802A81A0: jal         0x80308668
    // 0x802A81A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x802A81A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802A81A8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A81AC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A81B0: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x802A81B4: jal         0x8029C12C
    // 0x802A81B8: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    static_3_8029C12C(rdram, ctx);
        goto after_2;
    // 0x802A81B8: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    after_2:
    // 0x802A81BC: jal         0x8029C12C
    // 0x802A81C0: addiu       $a0, $s0, 0x159C
    ctx->r4 = ADD32(ctx->r16, 0X159C);
    static_3_8029C12C(rdram, ctx);
        goto after_3;
    // 0x802A81C0: addiu       $a0, $s0, 0x159C
    ctx->r4 = ADD32(ctx->r16, 0X159C);
    after_3:
    // 0x802A81C4: lui         $a3, 0x802A
    ctx->r7 = S32(0X802A << 16);
    // 0x802A81C8: addiu       $a3, $a3, 0x3F8
    ctx->r7 = ADD32(ctx->r7, 0X3F8);
    // 0x802A81CC: addiu       $a0, $s0, 0x2AC8
    ctx->r4 = ADD32(ctx->r16, 0X2AC8);
    // 0x802A81D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802A81D4: jal         0x802C6930
    // 0x802A81D8: addiu       $a2, $zero, 0x618
    ctx->r6 = ADD32(0, 0X618);
    static_3_802C6930(rdram, ctx);
        goto after_4;
    // 0x802A81D8: addiu       $a2, $zero, 0x618
    ctx->r6 = ADD32(0, 0X618);
    after_4:
    // 0x802A81DC: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802A81E0: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802A81E4: addiu       $a0, $s0, 0x5B88
    ctx->r4 = ADD32(ctx->r16, 0X5B88);
    // 0x802A81E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802A81EC: jal         0x802C6930
    // 0x802A81F0: addiu       $a2, $zero, 0x484
    ctx->r6 = ADD32(0, 0X484);
    static_3_802C6930(rdram, ctx);
        goto after_5;
    // 0x802A81F0: addiu       $a2, $zero, 0x484
    ctx->r6 = ADD32(0, 0X484);
    after_5:
L_802A81F4:
    // 0x802A81F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A81F8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802A81FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A8200: jr          $ra
    // 0x802A8204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802A8204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802A8D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8DFC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A8E00: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802A8E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8E0C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802A8E10: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802A8E14: jal         0x8028DA48
    // 0x802A8E18: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028DA48(rdram, ctx);
        goto after_0;
    // 0x802A8E18: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802A8E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A8E20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8E24: jr          $ra
    // 0x802A8E28: nop

    return;
    // 0x802A8E28: nop

;}
RECOMP_FUNC void D_802E5D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E5DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E5E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E5E04: lw          $v0, 0x100($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X100);
    // 0x802E5E08: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802E5E0C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E5E10: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x802E5E14: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802E5E18: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802E5E1C: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802E5E20: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    // 0x802E5E24: jalr        $t9
    // 0x802E5E28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802E5E28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x802E5E2C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E5E30: sb          $zero, 0x1B6($a2)
    MEM_B(0X1B6, ctx->r6) = 0;
    // 0x802E5E34: sw          $zero, 0x1C0($a2)
    MEM_W(0X1C0, ctx->r6) = 0;
    // 0x802E5E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E5E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E5E40: jr          $ra
    // 0x802E5E44: nop

    return;
    // 0x802E5E44: nop

;}
RECOMP_FUNC void D_8021E6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E6B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E6BC: sb          $a0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r4;
    // 0x8021E6C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E6C4: sb          $a1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r5;
    // 0x8021E6C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E6CC: sb          $a2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r6;
    // 0x8021E6D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021E6D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8021E6D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021E6DC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8021E6E0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021E6E4: jr          $ra
    // 0x8021E6E8: sb          $a3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r7;
    return;
    // 0x8021E6E8: sb          $a3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r7;
;}
RECOMP_FUNC void D_80282914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282994: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80282998: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8028299C: jr          $ra
    // 0x802829A0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802829A0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80249090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249090: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80249094: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80249098: jal         0x80241760
    // 0x8024909C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8024909C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802490A0: jal         0x80238B80
    // 0x802490A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    static_3_80238B80(rdram, ctx);
        goto after_1;
    // 0x802490A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x802490A8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802490AC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802490B0: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802490B4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x802490B8: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802490BC: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802490C0: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x802490C4: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x802490C8: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x802490CC: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x802490D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802490D4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x802490D8: jal         0x80241780
    // 0x802490DC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    static_3_80241780(rdram, ctx);
        goto after_2;
    // 0x802490DC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_2:
    // 0x802490E0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x802490E4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x802490E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802490EC: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x802490F0: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
    // 0x802490F4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x802490F8: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x802490FC: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    // 0x80249100: addu        $v0, $at, $t2
    ctx->r2 = ADD32(ctx->r1, ctx->r10);
    // 0x80249104: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80249108: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8024910C: jr          $ra
    // 0x80249110: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    return;
    // 0x80249110: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
;}
RECOMP_FUNC void D_80282F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282F8C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80282F90: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80282F94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80282F98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80282F9C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80282FA0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80282FA4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80282FA8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80282FAC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80282FB0: jal         0x80228DE0
    // 0x80282FB4: addiu       $a0, $a0, 0x11D4
    ctx->r4 = ADD32(ctx->r4, 0X11D4);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80282FB4: addiu       $a0, $a0, 0x11D4
    ctx->r4 = ADD32(ctx->r4, 0X11D4);
    after_0:
    // 0x80282FB8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80282FBC: sb          $s3, 0x127C($s0)
    MEM_B(0X127C, ctx->r16) = ctx->r19;
    // 0x80282FC0: addiu       $a0, $s0, 0x12C4
    ctx->r4 = ADD32(ctx->r16, 0X12C4);
    // 0x80282FC4: jal         0x80228DE0
    // 0x80282FC8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80282FC8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x80282FCC: sb          $s3, 0x136C($s0)
    MEM_B(0X136C, ctx->r16) = ctx->r19;
    // 0x80282FD0: addiu       $a0, $s0, 0x13B4
    ctx->r4 = ADD32(ctx->r16, 0X13B4);
    // 0x80282FD4: jal         0x80228DE0
    // 0x80282FD8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x80282FD8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x80282FDC: sb          $s3, 0x145C($s0)
    MEM_B(0X145C, ctx->r16) = ctx->r19;
    // 0x80282FE0: addiu       $a0, $s0, 0xB44
    ctx->r4 = ADD32(ctx->r16, 0XB44);
    // 0x80282FE4: jal         0x80228DE0
    // 0x80282FE8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x80282FE8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x80282FEC: sb          $s3, 0xBEC($s0)
    MEM_B(0XBEC, ctx->r16) = ctx->r19;
    // 0x80282FF0: addiu       $a0, $s0, 0x14A4
    ctx->r4 = ADD32(ctx->r16, 0X14A4);
    // 0x80282FF4: jal         0x80228DE0
    // 0x80282FF8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80228DE0(rdram, ctx);
        goto after_4;
    // 0x80282FF8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x80282FFC: sb          $s3, 0x154C($s0)
    MEM_B(0X154C, ctx->r16) = ctx->r19;
    // 0x80283000: addiu       $a0, $s0, 0xC34
    ctx->r4 = ADD32(ctx->r16, 0XC34);
    // 0x80283004: jal         0x80228DE0
    // 0x80283008: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80228DE0(rdram, ctx);
        goto after_5;
    // 0x80283008: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x8028300C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80283010: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80283014: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80283018: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028301C: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80283020: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80283024: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80283028: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028302C: sb          $s3, 0xCDC($s0)
    MEM_B(0XCDC, ctx->r16) = ctx->r19;
    // 0x80283030: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80283034: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80283038: addiu       $a0, $s0, 0x5A4
    ctx->r4 = ADD32(ctx->r16, 0X5A4);
    // 0x8028303C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80283040: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80283044: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80283048: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x8028304C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80283050: sh          $v1, 0x124E($s0)
    MEM_H(0X124E, ctx->r16) = ctx->r3;
    // 0x80283054: sh          $v1, 0x1254($s0)
    MEM_H(0X1254, ctx->r16) = ctx->r3;
    // 0x80283058: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8028305C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80283060: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80283064: sh          $t8, 0x1250($s0)
    MEM_H(0X1250, ctx->r16) = ctx->r24;
    // 0x80283068: sh          $v0, 0x1252($s0)
    MEM_H(0X1252, ctx->r16) = ctx->r2;
    // 0x8028306C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80283070: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80283074: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80283078: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8028307C: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x80283080: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80283084: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80283088: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8028308C: sh          $v1, 0x1344($s0)
    MEM_H(0X1344, ctx->r16) = ctx->r3;
    // 0x80283090: sh          $v1, 0x1434($s0)
    MEM_H(0X1434, ctx->r16) = ctx->r3;
    // 0x80283094: sh          $v1, 0xBC4($s0)
    MEM_H(0XBC4, ctx->r16) = ctx->r3;
    // 0x80283098: sh          $v1, 0x84($s0)
    MEM_H(0X84, ctx->r16) = ctx->r3;
    // 0x8028309C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802830A0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802830A4: sh          $v1, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r3;
    // 0x802830A8: sh          $v1, 0x624($s0)
    MEM_H(0X624, ctx->r16) = ctx->r3;
    // 0x802830AC: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x802830B0: sh          $v1, 0x61E($s0)
    MEM_H(0X61E, ctx->r16) = ctx->r3;
    // 0x802830B4: sh          $v0, 0x1342($s0)
    MEM_H(0X1342, ctx->r16) = ctx->r2;
    // 0x802830B8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802830BC: sh          $v0, 0x1340($s0)
    MEM_H(0X1340, ctx->r16) = ctx->r2;
    // 0x802830C0: sh          $v0, 0x1432($s0)
    MEM_H(0X1432, ctx->r16) = ctx->r2;
    // 0x802830C4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802830C8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802830CC: sh          $v0, 0x1430($s0)
    MEM_H(0X1430, ctx->r16) = ctx->r2;
    // 0x802830D0: sh          $v0, 0xBC2($s0)
    MEM_H(0XBC2, ctx->r16) = ctx->r2;
    // 0x802830D4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802830D8: sh          $v0, 0x82($s0)
    MEM_H(0X82, ctx->r16) = ctx->r2;
    // 0x802830DC: sh          $v0, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r2;
    // 0x802830E0: sh          $v0, 0x622($s0)
    MEM_H(0X622, ctx->r16) = ctx->r2;
    // 0x802830E4: sh          $v0, 0x620($s0)
    MEM_H(0X620, ctx->r16) = ctx->r2;
    // 0x802830E8: sh          $t1, 0x133E($s0)
    MEM_H(0X133E, ctx->r16) = ctx->r9;
    // 0x802830EC: sh          $a2, 0x142E($s0)
    MEM_H(0X142E, ctx->r16) = ctx->r6;
    // 0x802830F0: sh          $a2, 0xBBE($s0)
    MEM_H(0XBBE, ctx->r16) = ctx->r6;
    // 0x802830F4: sh          $t4, 0xBC0($s0)
    MEM_H(0XBC0, ctx->r16) = ctx->r12;
    // 0x802830F8: lwc1        $f4, 0x38($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X38);
    // 0x802830FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283100: nop

    // 0x80283104: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80283108: swc1        $f8, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->f8.u32l;
    // 0x8028310C: jal         0x80228DE0
    // 0x80283110: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_80228DE0(rdram, ctx);
        goto after_6;
    // 0x80283110: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_6:
    // 0x80283114: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80283118: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028311C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80283120: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80283124: sb          $s3, 0x64C($s0)
    MEM_B(0X64C, ctx->r16) = ctx->r19;
    // 0x80283128: sh          $v0, 0x62A($s0)
    MEM_H(0X62A, ctx->r16) = ctx->r2;
    // 0x8028312C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80283130: sh          $v1, 0x616($s0)
    MEM_H(0X616, ctx->r16) = ctx->r3;
    // 0x80283134: sh          $v1, 0x618($s0)
    MEM_H(0X618, ctx->r16) = ctx->r3;
    // 0x80283138: sh          $v1, 0x61A($s0)
    MEM_H(0X61A, ctx->r16) = ctx->r3;
    // 0x8028313C: swc1        $f0, 0x62C($s0)
    MEM_W(0X62C, ctx->r16) = ctx->f0.u32l;
    // 0x80283140: lwc1        $f10, 0x38($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X38);
    // 0x80283144: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80283148: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x8028314C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80283150: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80283154: swc1        $f18, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->f18.u32l;
    // 0x80283158: sh          $v0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r2;
    // 0x8028315C: sh          $v1, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r3;
    // 0x80283160: sh          $v1, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r3;
    // 0x80283164: sh          $v1, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r3;
    // 0x80283168: jal         0x80228DE0
    // 0x8028316C: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    func_80228DE0(rdram, ctx);
        goto after_7;
    // 0x8028316C: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    after_7:
    // 0x80283170: lw          $s1, 0xCE0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XCE0);
    // 0x80283174: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80283178: sb          $s3, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r19;
    // 0x8028317C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80283180: lh          $t5, 0x18($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X18);
    // 0x80283184: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x80283188: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8028318C: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x80283190: jalr        $t9
    // 0x80283194: addiu       $a0, $a0, 0xC30
    ctx->r4 = ADD32(ctx->r4, 0XC30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x80283194: addiu       $a0, $a0, 0xC30
    ctx->r4 = ADD32(ctx->r4, 0XC30);
    after_8:
    // 0x80283198: lw          $s1, 0x1280($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1280);
    // 0x8028319C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802831A0: lh          $t6, 0x18($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X18);
    // 0x802831A4: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x802831A8: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x802831AC: jalr        $t9
    // 0x802831B0: addiu       $a0, $a0, 0x11D0
    ctx->r4 = ADD32(ctx->r4, 0X11D0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802831B0: addiu       $a0, $a0, 0x11D0
    ctx->r4 = ADD32(ctx->r4, 0X11D0);
    after_9:
    // 0x802831B4: lw          $s1, 0x1370($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1370);
    // 0x802831B8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802831BC: lh          $t7, 0x18($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X18);
    // 0x802831C0: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x802831C4: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802831C8: jalr        $t9
    // 0x802831CC: addiu       $a0, $a0, 0x12C0
    ctx->r4 = ADD32(ctx->r4, 0X12C0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x802831CC: addiu       $a0, $a0, 0x12C0
    ctx->r4 = ADD32(ctx->r4, 0X12C0);
    after_10:
    // 0x802831D0: lw          $s1, 0x1460($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1460);
    // 0x802831D4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802831D8: lh          $t8, 0x18($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X18);
    // 0x802831DC: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x802831E0: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802831E4: jalr        $t9
    // 0x802831E8: addiu       $a0, $a0, 0x13B0
    ctx->r4 = ADD32(ctx->r4, 0X13B0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x802831E8: addiu       $a0, $a0, 0x13B0
    ctx->r4 = ADD32(ctx->r4, 0X13B0);
    after_11:
    // 0x802831EC: lw          $s1, 0xBF0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XBF0);
    // 0x802831F0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802831F4: lh          $t0, 0x18($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X18);
    // 0x802831F8: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x802831FC: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x80283200: jalr        $t9
    // 0x80283204: addiu       $a0, $a0, 0xB40
    ctx->r4 = ADD32(ctx->r4, 0XB40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x80283204: addiu       $a0, $a0, 0xB40
    ctx->r4 = ADD32(ctx->r4, 0XB40);
    after_12:
    // 0x80283208: lw          $s1, 0xB0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0XB0);
    // 0x8028320C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80283210: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x80283214: lh          $t1, 0x18($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X18);
    // 0x80283218: jalr        $t9
    // 0x8028321C: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x8028321C: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    after_13:
    // 0x80283220: lw          $s1, 0x650($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X650);
    // 0x80283224: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80283228: lh          $t2, 0x18($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X18);
    // 0x8028322C: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x80283230: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x80283234: jalr        $t9
    // 0x80283238: addiu       $a0, $a0, 0x5A0
    ctx->r4 = ADD32(ctx->r4, 0X5A0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x80283238: addiu       $a0, $a0, 0x5A0
    ctx->r4 = ADD32(ctx->r4, 0X5A0);
    after_14:
    // 0x8028323C: lw          $s1, 0x1550($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X1550);
    // 0x80283240: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80283244: lh          $t3, 0x18($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X18);
    // 0x80283248: lw          $t9, 0x1C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X1C);
    // 0x8028324C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x80283250: jalr        $t9
    // 0x80283254: addiu       $a0, $a0, 0x14A0
    ctx->r4 = ADD32(ctx->r4, 0X14A0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x80283254: addiu       $a0, $a0, 0x14A0
    ctx->r4 = ADD32(ctx->r4, 0X14A0);
    after_15:
    // 0x80283258: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028325C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80283260: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x80283264: swc1        $f0, 0x60C($s0)
    MEM_W(0X60C, ctx->r16) = ctx->f0.u32l;
    // 0x80283268: swc1        $f0, 0xBAC($s0)
    MEM_W(0XBAC, ctx->r16) = ctx->f0.u32l;
    // 0x8028326C: swc1        $f0, 0xC9C($s0)
    MEM_W(0XC9C, ctx->r16) = ctx->f0.u32l;
    // 0x80283270: swc1        $f0, 0x123C($s0)
    MEM_W(0X123C, ctx->r16) = ctx->f0.u32l;
    // 0x80283274: swc1        $f0, 0x132C($s0)
    MEM_W(0X132C, ctx->r16) = ctx->f0.u32l;
    // 0x80283278: swc1        $f0, 0x141C($s0)
    MEM_W(0X141C, ctx->r16) = ctx->f0.u32l;
    // 0x8028327C: swc1        $f0, 0x150C($s0)
    MEM_W(0X150C, ctx->r16) = ctx->f0.u32l;
    // 0x80283280: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80283284: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80283288: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8028328C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80283290: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80283294: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80283298: jr          $ra
    // 0x8028329C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8028329C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8028C73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C7BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028C7C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028C7C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8028C7C8: lbu         $t7, 0x8($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X8);
    // 0x8028C7CC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8028C7D0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8028C7D4: beq         $t6, $t7, L_8028C7F4
    if (ctx->r14 == ctx->r15) {
        // 0x8028C7D8: andi        $t8, $t6, 0xFF
        ctx->r24 = ctx->r14 & 0XFF;
            goto L_8028C7F4;
    }
    // 0x8028C7D8: andi        $t8, $t6, 0xFF
    ctx->r24 = ctx->r14 & 0XFF;
    // 0x8028C7DC: bne         $t8, $zero, L_8028C7F4
    if (ctx->r24 != 0) {
        // 0x8028C7E0: sb          $t6, 0x8($a0)
        MEM_B(0X8, ctx->r4) = ctx->r14;
            goto L_8028C7F4;
    }
    // 0x8028C7E0: sb          $t6, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r14;
    // 0x8028C7E4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8028C7E8: addiu       $a1, $a2, 0x22C
    ctx->r5 = ADD32(ctx->r6, 0X22C);
    // 0x8028C7EC: jal         0x80302414
    // 0x8028C7F0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_0;
    // 0x8028C7F0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
L_8028C7F4:
    // 0x8028C7F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028C7F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028C7FC: jr          $ra
    // 0x8028C800: nop

    return;
    // 0x8028C800: nop

;}
RECOMP_FUNC void D_802DD640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD6C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802DD6C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802DD6C8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802DD6CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802DD6D0: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802DD6D4: mul.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x802DD6D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802DD6DC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802DD6E0: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802DD6E4: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802DD6E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802DD6EC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802DD6F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DD6F4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802DD6F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802DD6FC: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802DD700: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802DD704: addiu       $a0, $a3, 0x8F4
    ctx->r4 = ADD32(ctx->r7, 0X8F4);
    // 0x802DD708: bc1f        L_802DD71C
    if (!c1cs) {
        // 0x802DD70C: mov.s       $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
            goto L_802DD71C;
    }
    // 0x802DD70C: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
    // 0x802DD710: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802DD714: b           L_802DD73C
    // 0x802DD718: nop

        goto L_802DD73C;
    // 0x802DD718: nop

L_802DD71C:
    // 0x802DD71C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802DD720: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802DD724: nop

    // 0x802DD728: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802DD72C: nop

    // 0x802DD730: bc1f        L_802DD73C
    if (!c1cs) {
        // 0x802DD734: nop
    
            goto L_802DD73C;
    }
    // 0x802DD734: nop

    // 0x802DD738: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_802DD73C:
    // 0x802DD73C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DD740: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DD744: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802DD748: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802DD74C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x802DD750: nop

    // 0x802DD754: bc1fl       L_802DD768
    if (!c1cs) {
        // 0x802DD758: c.lt.s      $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
            goto L_802DD768;
    }
    goto skip_0;
    // 0x802DD758: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    skip_0:
    // 0x802DD75C: b           L_802DD778
    // 0x802DD760: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
        goto L_802DD778;
    // 0x802DD760: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x802DD764: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
L_802DD768:
    // 0x802DD768: nop

    // 0x802DD76C: bc1fl       L_802DD77C
    if (!c1cs) {
        // 0x802DD770: sw          $a0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r4;
            goto L_802DD77C;
    }
    goto skip_1;
    // 0x802DD770: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    skip_1:
    // 0x802DD774: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
L_802DD778:
    // 0x802DD778: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
L_802DD77C:
    // 0x802DD77C: jal         0x8030262C
    // 0x802DD780: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    static_3_8030262C(rdram, ctx);
        goto after_0;
    // 0x802DD780: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x802DD784: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802DD788: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802DD78C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802DD790: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802DD794: jal         0x80302664
    // 0x802DD798: nop

    static_3_80302664(rdram, ctx);
        goto after_1;
    // 0x802DD798: nop

    after_1:
    // 0x802DD79C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802DD7A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802DD7A4: jr          $ra
    // 0x802DD7A8: nop

    return;
    // 0x802DD7A8: nop

;}
RECOMP_FUNC void D_8021C1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021C1A0: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x8021C1A4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8021C1A8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8021C1AC: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x8021C1B0: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8021C1B4: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8021C1B8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8021C1BC: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8021C1C0: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x8021C1C4: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x8021C1C8: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x8021C1CC: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x8021C1D0: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x8021C1D4: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8021C1D8: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x8021C1DC: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x8021C1E0: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x8021C1E4: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x8021C1E8: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x8021C1EC: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x8021C1F0: beq         $t6, $zero, L_8021C494
    if (ctx->r14 == 0) {
        // 0x8021C1F4: sdc1        $f20, 0x28($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
            goto L_8021C494;
    }
    // 0x8021C1F4: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x8021C1F8: jal         0x802223E0
    // 0x8021C1FC: lhu         $a0, 0x6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6);
    static_3_802223E0(rdram, ctx);
        goto after_0;
    // 0x8021C1FC: lhu         $a0, 0x6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6);
    after_0:
    // 0x8021C200: jal         0x80222818
    // 0x8021C204: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_80222818(rdram, ctx);
        goto after_1;
    // 0x8021C204: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8021C208: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x8021C20C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8021C210: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021C214: blez        $a1, L_8021C494
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021C218: lui         $fp, 0x0
        ctx->r30 = S32(0X0 << 16);
            goto L_8021C494;
    }
    // 0x8021C218: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x8021C21C: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8021C220: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8021C224: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8021C228: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x8021C22C: lwc1        $f30, 0x0($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8021C230: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x8021C234: addiu       $s7, $zero, 0x24
    ctx->r23 = ADD32(0, 0X24);
    // 0x8021C238: addiu       $s5, $sp, 0xC8
    ctx->r21 = ADD32(ctx->r29, 0XC8);
    // 0x8021C23C: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
L_8021C240:
    // 0x8021C240: lw          $t1, 0x0($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X0);
    // 0x8021C244: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8021C248: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x8021C24C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8021C250: multu       $t9, $s7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021C254: mflo        $t0
    ctx->r8 = lo;
    // 0x8021C258: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x8021C25C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8021C260: bnel        $v1, $at, L_8021C274
    if (ctx->r3 != ctx->r1) {
        // 0x8021C264: lbu         $t2, 0x8($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X8);
            goto L_8021C274;
    }
    goto skip_0;
    // 0x8021C264: lbu         $t2, 0x8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X8);
    skip_0:
    // 0x8021C268: b           L_8021C484
    // 0x8021C26C: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
        goto L_8021C484;
    // 0x8021C26C: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x8021C270: lbu         $t2, 0x8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X8);
L_8021C274:
    // 0x8021C274: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x8021C278: bnel        $t3, $zero, L_8021C28C
    if (ctx->r11 != 0) {
        // 0x8021C27C: lw          $t8, 0x4($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X4);
            goto L_8021C28C;
    }
    goto skip_1;
    // 0x8021C27C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    skip_1:
    // 0x8021C280: b           L_8021C484
    // 0x8021C284: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
        goto L_8021C484;
    // 0x8021C284: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x8021C288: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
L_8021C28C:
    // 0x8021C28C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8021C290: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x8021C294: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8021C298: lwc1        $f6, 0xB8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0XB8);
    // 0x8021C29C: lwc1        $f10, 0xBC($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0XBC);
    // 0x8021C2A0: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x8021C2A4: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8021C2A8: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021C2AC: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021C2B0: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8021C2B4: sub.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021C2B8: lwc1        $f4, 0xC0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC0);
    // 0x8021C2BC: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8021C2C0: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021C2C4: mul.s       $f6, $f26, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x8021C2C8: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x8021C2CC: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8021C2D0: mul.s       $f8, $f28, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x8021C2D4: lw          $t5, 0x1C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1C);
    // 0x8021C2D8: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8021C2DC: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021C2E0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8021C2E4: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x8021C2E8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021C2EC: jal         0x8022AA40
    // 0x8021C2F0: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_2;
    // 0x8021C2F0: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_2:
    // 0x8021C2F4: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021C2F8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8021C2FC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8021C300: add.s       $f24, $f2, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8021C304: c.lt.s      $f30, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f30.fl < ctx->f12.fl;
    // 0x8021C308: nop

    // 0x8021C30C: bc1fl       L_8021C320
    if (!c1cs) {
        // 0x8021C310: mov.s       $f20, $f30
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
            goto L_8021C320;
    }
    goto skip_2;
    // 0x8021C310: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    skip_2:
    // 0x8021C314: b           L_8021C320
    // 0x8021C318: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
        goto L_8021C320;
    // 0x8021C318: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x8021C31C: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
L_8021C320:
    // 0x8021C320: lwc1        $f4, 0x130($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X130);
    // 0x8021C324: lwc1        $f6, 0x120($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X120);
    // 0x8021C328: lwc1        $f8, 0x124($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X124);
    // 0x8021C32C: div.s       $f0, $f20, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f20.fl, ctx->f4.fl);
    // 0x8021C330: lwc1        $f10, 0x12C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X12C);
    // 0x8021C334: lwc1        $f18, 0x128($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X128);
    // 0x8021C338: swc1        $f24, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f24.u32l;
    // 0x8021C33C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8021C340: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8021C344: mul.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021C348: nop

    // 0x8021C34C: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8021C350: nop

    // 0x8021C354: mul.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8021C358: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8021C35C: mul.s       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8021C360: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8021C364: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x8021C368: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8021C36C: jal         0x8022A784
    // 0x8021C370: nop

    static_3_8022A784(rdram, ctx);
        goto after_3;
    // 0x8021C370: nop

    after_3:
    // 0x8021C374: jal         0x80221B2C
    // 0x8021C378: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    static_3_80221B2C(rdram, ctx);
        goto after_4;
    // 0x8021C378: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x8021C37C: add.s       $f6, $f24, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f24.fl + ctx->f20.fl;
    // 0x8021C380: lui         $at, 0x4800
    ctx->r1 = S32(0X4800 << 16);
    // 0x8021C384: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021C388: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8021C38C: lui         $t3, 0xBC00
    ctx->r11 = S32(0XBC00 << 16);
    // 0x8021C390: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021C394: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x8021C398: sw          $t2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r10;
    // 0x8021C39C: ori         $t3, $t3, 0xE
    ctx->r11 = ctx->r11 | 0XE;
    // 0x8021C3A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021C3A4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8021C3A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021C3AC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021C3B0: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8021C3B4: nop

    // 0x8021C3B8: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x8021C3BC: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021C3C0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8021C3C4: lwc1        $f0, 0x13C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X13C);
    // 0x8021C3C8: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x8021C3CC: nop

    // 0x8021C3D0: bc1f        L_8021C3EC
    if (!c1cs) {
        // 0x8021C3D4: nop
    
            goto L_8021C3EC;
    }
    // 0x8021C3D4: nop

    // 0x8021C3D8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x8021C3DC: jal         0x8021C52C
    // 0x8021C3E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8021C52C(rdram, ctx);
        goto after_5;
    // 0x8021C3E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8021C3E4: b           L_8021C404
    // 0x8021C3E8: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
        goto L_8021C404;
    // 0x8021C3E8: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
L_8021C3EC:
    // 0x8021C3EC: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8021C3F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021C3F4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8021C3F8: jal         0x8021C52C
    // 0x8021C3FC: nop

    static_3_8021C52C(rdram, ctx);
        goto after_6;
    // 0x8021C3FC: nop

    after_6:
    // 0x8021C400: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
L_8021C404:
    // 0x8021C404: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8021C408: bne         $v0, $at, L_8021C41C
    if (ctx->r2 != ctx->r1) {
        // 0x8021C40C: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_8021C41C;
    }
    // 0x8021C40C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8021C410: lhu         $a1, 0x0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X0);
    // 0x8021C414: b           L_8021C484
    // 0x8021C418: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
        goto L_8021C484;
    // 0x8021C418: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
L_8021C41C:
    // 0x8021C41C: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x8021C420: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x8021C424: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8021C428: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8021C42C: lbu         $t1, 0x5($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X5);
    // 0x8021C430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021C434: beq         $t1, $zero, L_8021C454
    if (ctx->r9 == 0) {
        // 0x8021C438: nop
    
            goto L_8021C454;
    }
    // 0x8021C438: nop

    // 0x8021C43C: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x8021C440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021C444: jal         0x8021C9C0
    // 0x8021C448: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    static_3_8021C9C0(rdram, ctx);
        goto after_7;
    // 0x8021C448: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    after_7:
    // 0x8021C44C: b           L_8021C460
    // 0x8021C450: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
        goto L_8021C460;
    // 0x8021C450: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
L_8021C454:
    // 0x8021C454: jal         0x8021C5AC
    // 0x8021C458: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_8021C5AC(rdram, ctx);
        goto after_8;
    // 0x8021C458: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x8021C45C: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
L_8021C460:
    // 0x8021C460: lui         $t3, 0xBD00
    ctx->r11 = S32(0XBD00 << 16);
    // 0x8021C464: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8021C468: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x8021C46C: sw          $t2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r10;
    // 0x8021C470: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8021C474: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x8021C478: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8021C47C: lhu         $a1, 0x0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X0);
    // 0x8021C480: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
L_8021C484:
    // 0x8021C484: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x8021C488: slt         $at, $s3, $a0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021C48C: bnel        $at, $zero, L_8021C240
    if (ctx->r1 != 0) {
        // 0x8021C490: lw          $t7, 0x0($s6)
        ctx->r15 = MEM_W(ctx->r22, 0X0);
            goto L_8021C240;
    }
    goto skip_3;
    // 0x8021C490: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    skip_3:
L_8021C494:
    // 0x8021C494: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8021C498: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x8021C49C: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8021C4A0: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x8021C4A4: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x8021C4A8: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x8021C4AC: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x8021C4B0: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8021C4B4: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8021C4B8: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8021C4BC: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8021C4C0: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x8021C4C4: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8021C4C8: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x8021C4CC: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x8021C4D0: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x8021C4D4: jr          $ra
    // 0x8021C4D8: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x8021C4D8: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void D_802A20F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A2174: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A2178: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802A217C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A2180: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A2184: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802A2188: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    // 0x802A218C: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x802A2190: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A2194: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802A2198: addiu       $a2, $a3, 0x2C
    ctx->r6 = ADD32(ctx->r7, 0X2C);
    // 0x802A219C: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802A21A0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A21A4: jal         0x8021B4B0
    // 0x802A21A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_0;
    // 0x802A21A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A21AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A21B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A21B4: jr          $ra
    // 0x802A21B8: nop

    return;
    // 0x802A21B8: nop

;}
RECOMP_FUNC void D_802E3AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3B70: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E3B74: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E3B78: jr          $ra
    // 0x802E3B7C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E3B7C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void func_8022FF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FF40: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022FF44: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8022FF48: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FF4C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022FF50: beq         $t6, $zero, L_8022FF70
    if (ctx->r14 == 0) {
        // 0x8022FF54: nop
    
            goto L_8022FF70;
    }
    // 0x8022FF54: nop

    // 0x8022FF58: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_8022FF5C:
    // 0x8022FF5C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FF60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FF64: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022FF68: bnel        $t7, $zero, L_8022FF5C
    if (ctx->r15 != 0) {
        // 0x8022FF6C: lbu         $v0, 0x0($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X0);
            goto L_8022FF5C;
    }
    goto skip_0;
    // 0x8022FF6C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    skip_0:
L_8022FF70:
    // 0x8022FF70: jr          $ra
    // 0x8022FF74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8022FF74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_80249BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249BD8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80249BDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80249BE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80249BE4: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80249BE8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80249BEC: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x80249BF0: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80249BF4: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80249BF8: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80249BFC: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x80249C00: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x80249C04: beq         $at, $zero, L_80249C10
    if (ctx->r1 == 0) {
        // 0x80249C08: addu        $t1, $v0, $t6
        ctx->r9 = ADD32(ctx->r2, ctx->r14);
            goto L_80249C10;
    }
    // 0x80249C08: addu        $t1, $v0, $t6
    ctx->r9 = ADD32(ctx->r2, ctx->r14);
    // 0x80249C0C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
L_80249C10:
    // 0x80249C10: sll         $a2, $t3, 1
    ctx->r6 = S32(ctx->r11 << 1);
    // 0x80249C14: addu        $a3, $a2, $a1
    ctx->r7 = ADD32(ctx->r6, ctx->r5);
    // 0x80249C18: sltu        $at, $t1, $a3
    ctx->r1 = ctx->r9 < ctx->r7 ? 1 : 0;
    // 0x80249C1C: beq         $at, $zero, L_80249CFC
    if (ctx->r1 == 0) {
        // 0x80249C20: addiu       $s0, $t0, 0x8
        ctx->r16 = ADD32(ctx->r8, 0X8);
            goto L_80249CFC;
    }
    // 0x80249C20: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80249C24: andi        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 & 0XFFFF;
    // 0x80249C28: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80249C2C: subu        $t3, $t1, $a1
    ctx->r11 = SUB32(ctx->r9, ctx->r5);
    // 0x80249C30: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80249C34: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80249C38: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80249C3C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80249C40: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80249C44: addiu       $s0, $t0, 0x8
    ctx->r16 = ADD32(ctx->r8, 0X8);
    // 0x80249C48: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x80249C4C: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x80249C50: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80249C54: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x80249C58: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x80249C5C: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80249C60: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80249C64: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x80249C68: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80249C6C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80249C70: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80249C74: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249C78: jal         0x802375F0
    // 0x80249C7C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x80249C7C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80249C80: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80249C84: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x80249C88: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80249C8C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80249C90: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80249C94: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x80249C98: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x80249C9C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80249CA0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80249CA4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80249CA8: subu        $t8, $a3, $t1
    ctx->r24 = SUB32(ctx->r7, ctx->r9);
    // 0x80249CAC: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x80249CB0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249CB4: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x80249CB8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80249CBC: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80249CC0: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80249CC4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249CC8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80249CCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80249CD0: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80249CD4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80249CD8: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x80249CDC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80249CE0: jal         0x802375F0
    // 0x80249CE4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x80249CE4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_1:
    // 0x80249CE8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80249CEC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80249CF0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80249CF4: b           L_80249D40
    // 0x80249CF8: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
        goto L_80249D40;
    // 0x80249CF8: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
L_80249CFC:
    // 0x80249CFC: andi        $t9, $t5, 0xFFFF
    ctx->r25 = ctx->r13 & 0XFFFF;
    // 0x80249D00: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80249D04: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80249D08: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x80249D0C: sw          $a3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r7;
    // 0x80249D10: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80249D14: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249D18: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x80249D1C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80249D20: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80249D24: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x80249D28: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80249D2C: jal         0x802375F0
    // 0x80249D30: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x80249D30: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80249D34: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80249D38: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80249D3C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80249D40:
    // 0x80249D40: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80249D44: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80249D48: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80249D4C: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x80249D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80249D54: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80249D58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80249D5C: jr          $ra
    // 0x80249D60: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80249D60: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_80203414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203414: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80203418: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8020341C: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80203420: sll         $s0, $a2, 2
    ctx->r16 = S32(ctx->r6 << 2);
    // 0x80203424: subu        $s0, $s0, $a2
    ctx->r16 = SUB32(ctx->r16, ctx->r6);
    // 0x80203428: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8020342C: subu        $s0, $s0, $a2
    ctx->r16 = SUB32(ctx->r16, ctx->r6);
    // 0x80203430: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80203434: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80203438: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8020343C: addu        $s0, $s0, $a2
    ctx->r16 = ADD32(ctx->r16, ctx->r6);
    // 0x80203440: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80203444: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80203448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020344C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203450: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80203454: lbu         $a1, 0xAD($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0XAD);
    // 0x80203458: jal         0x802011D0
    // 0x8020345C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_0;
    // 0x8020345C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80203460: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80203464: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80203468: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020346C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80203470: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x80203474: lbu         $v1, 0xAD($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XAD);
    // 0x80203478: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8020347C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203480: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80203484: bne         $at, $zero, L_802034A4
    if (ctx->r1 != 0) {
        // 0x80203488: nop
    
            goto L_802034A4;
    }
    // 0x80203488: nop

    // 0x8020348C: jal         0x80231C9C
    // 0x80203490: addiu       $a2, $zero, 0x453
    ctx->r6 = ADD32(0, 0X453);
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80203490: addiu       $a2, $zero, 0x453
    ctx->r6 = ADD32(0, 0X453);
    after_1:
    // 0x80203494: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80203498: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8020349C: addu        $v0, $t9, $s0
    ctx->r2 = ADD32(ctx->r25, ctx->r16);
    // 0x802034A0: lbu         $v1, 0xAD($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XAD);
L_802034A4:
    // 0x802034A4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802034A8: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x802034AC: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x802034B0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802034B4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x802034B8: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x802034BC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802034C0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802034C4: bgez        $t3, L_802034E0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x802034C8: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802034E0;
    }
    // 0x802034C8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802034CC: jal         0x80231C9C
    // 0x802034D0: addiu       $a2, $zero, 0x454
    ctx->r6 = ADD32(0, 0X454);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x802034D0: addiu       $a2, $zero, 0x454
    ctx->r6 = ADD32(0, 0X454);
    after_2:
    // 0x802034D4: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802034D8: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x802034DC: addu        $v0, $t4, $s0
    ctx->r2 = ADD32(ctx->r12, ctx->r16);
L_802034E0:
    // 0x802034E0: lbu         $t5, 0xAE($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XAE);
    // 0x802034E4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802034E8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802034EC: slti        $at, $t5, 0x80
    ctx->r1 = SIGNED(ctx->r13) < 0X80 ? 1 : 0;
    // 0x802034F0: beq         $at, $zero, L_80203514
    if (ctx->r1 == 0) {
        // 0x802034F4: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_80203514;
    }
    // 0x802034F4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802034F8: lbu         $t7, 0xAD($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XAD);
    // 0x802034FC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80203500: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80203504: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80203508: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8020350C: b           L_80203544
    // 0x80203510: lh          $a1, 0x0($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X0);
        goto L_80203544;
    // 0x80203510: lh          $a1, 0x0($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X0);
L_80203514:
    // 0x80203514: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80203518: jal         0x80231C9C
    // 0x8020351C: addiu       $a2, $zero, 0x456
    ctx->r6 = ADD32(0, 0X456);
    static_3_80231C9C(rdram, ctx);
        goto after_3;
    // 0x8020351C: addiu       $a2, $zero, 0x456
    ctx->r6 = ADD32(0, 0X456);
    after_3:
    // 0x80203520: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80203524: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80203528: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8020352C: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80203530: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80203534: lbu         $t3, 0xAD($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XAD);
    // 0x80203538: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8020353C: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80203540: lh          $a1, 0x0($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X0);
L_80203544:
    // 0x80203544: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203548: jal         0x80234E90
    // 0x8020354C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80234E90(rdram, ctx);
        goto after_4;
    // 0x8020354C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_4:
    // 0x80203550: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203554: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80203558: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8020355C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80203560: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x80203564: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80203568: addiu       $a2, $zero, 0x45A
    ctx->r6 = ADD32(0, 0X45A);
    // 0x8020356C: bne         $t7, $at, L_80203588
    if (ctx->r15 != ctx->r1) {
        // 0x80203570: nop
    
            goto L_80203588;
    }
    // 0x80203570: nop

    // 0x80203574: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203578: jal         0x80231C9C
    // 0x8020357C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231C9C(rdram, ctx);
        goto after_5;
    // 0x8020357C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_5:
    // 0x80203580: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203584: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
L_80203588:
    // 0x80203588: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8020358C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80203590: addu        $t8, $t6, $s0
    ctx->r24 = ADD32(ctx->r14, ctx->r16);
    // 0x80203594: jal         0x80235080
    // 0x80203598: lh          $a1, 0xA6($t8)
    ctx->r5 = MEM_H(ctx->r24, 0XA6);
    static_3_80235080(rdram, ctx);
        goto after_6;
    // 0x80203598: lh          $a1, 0xA6($t8)
    ctx->r5 = MEM_H(ctx->r24, 0XA6);
    after_6:
    // 0x8020359C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802035A0: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x802035A4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802035A8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802035AC: addu        $t1, $t9, $s0
    ctx->r9 = ADD32(ctx->r25, ctx->r16);
    // 0x802035B0: jal         0x802350E0
    // 0x802035B4: lw          $a1, 0x9C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X9C);
    static_3_802350E0(rdram, ctx);
        goto after_7;
    // 0x802035B4: lw          $a1, 0x9C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X9C);
    after_7:
    // 0x802035B8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802035BC: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x802035C0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802035C4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802035C8: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x802035CC: jal         0x80235140
    // 0x802035D0: lbu         $a1, 0xAF($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0XAF);
    static_3_80235140(rdram, ctx);
        goto after_8;
    // 0x802035D0: lbu         $a1, 0xAF($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0XAF);
    after_8:
    // 0x802035D4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802035D8: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x802035DC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802035E0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802035E4: addu        $t4, $t0, $s0
    ctx->r12 = ADD32(ctx->r8, ctx->r16);
    // 0x802035E8: jal         0x802351A0
    // 0x802035EC: lbu         $a1, 0xAE($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0XAE);
    static_3_802351A0(rdram, ctx);
        goto after_9;
    // 0x802035EC: lbu         $a1, 0xAE($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0XAE);
    after_9:
    // 0x802035F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802035F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802035F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802035FC: jr          $ra
    // 0x80203600: nop

    return;
    // 0x80203600: nop

;}
RECOMP_FUNC void D_802B6764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B67E4: jr          $ra
    // 0x802B67E8: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
    return;
    // 0x802B67E8: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
;}
RECOMP_FUNC void D_8022C204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C204: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8022C208: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022C20C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8022C210: lh          $t7, 0x0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X0);
    // 0x8022C214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C218: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8022C21C: bne         $t7, $at, L_8022C248
    if (ctx->r15 != ctx->r1) {
        // 0x8022C220: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022C248;
    }
    // 0x8022C220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C224: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8022C228: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8022C22C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8022C230: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x8022C234: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8022C238: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8022C23C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8022C240: jal         0x8024AC1C
    // 0x8022C244: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    static_3_8024AC1C(rdram, ctx);
        goto after_0;
    // 0x8022C244: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    after_0:
L_8022C248:
    // 0x8022C248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C24C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022C250: jr          $ra
    // 0x8022C254: nop

    return;
    // 0x8022C254: nop

;}
RECOMP_FUNC void D_8022C654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C654: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022C658: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8022C65C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022C660: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8022C664: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022C668: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8022C66C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C670: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x8022C674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C678: beq         $t8, $zero, L_8022C690
    if (ctx->r24 == 0) {
        // 0x8022C67C: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8022C690;
    }
    // 0x8022C67C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022C680: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8022C684: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x8022C688: beql        $t9, $zero, L_8022C76C
    if (ctx->r25 == 0) {
        // 0x8022C68C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C76C;
    }
    goto skip_0;
    // 0x8022C68C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_8022C690:
    // 0x8022C690: bne         $v1, $zero, L_8022C6AC
    if (ctx->r3 != 0) {
        // 0x8022C694: lui         $t0, 0x0
        ctx->r8 = S32(0X0 << 16);
            goto L_8022C6AC;
    }
    // 0x8022C694: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8022C698: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C69C: jal         0x80231A24
    // 0x8022C6A0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C6A0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022C6A4: b           L_8022C76C
    // 0x8022C6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022C76C;
    // 0x8022C6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C6AC:
    // 0x8022C6AC: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x8022C6B0: addiu       $v0, $zero, 0x67
    ctx->r2 = ADD32(0, 0X67);
    // 0x8022C6B4: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8022C6B8: beql        $v0, $t0, L_8022C76C
    if (ctx->r2 == ctx->r8) {
        // 0x8022C6BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C76C;
    }
    goto skip_1;
    // 0x8022C6BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8022C6C0: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x8022C6C4: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8022C6C8: bne         $t1, $zero, L_8022C6DC
    if (ctx->r9 != 0) {
        // 0x8022C6CC: nop
    
            goto L_8022C6DC;
    }
    // 0x8022C6CC: nop

    // 0x8022C6D0: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x8022C6D4: beql        $v0, $t2, L_8022C76C
    if (ctx->r2 == ctx->r10) {
        // 0x8022C6D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C76C;
    }
    goto skip_2;
    // 0x8022C6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_8022C6DC:
    // 0x8022C6DC: jal         0x8023DAE0
    // 0x8022C6E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    static_3_8023DAE0(rdram, ctx);
        goto after_1;
    // 0x8022C6E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022C6E4: jal         0x8023DB20
    // 0x8022C6E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    static_3_8023DB20(rdram, ctx);
        goto after_2;
    // 0x8022C6E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022C6EC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8022C6F0: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8022C6F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022C6F8: bnel        $v0, $t3, L_8022C76C
    if (ctx->r2 != ctx->r11) {
        // 0x8022C6FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C76C;
    }
    goto skip_3;
    // 0x8022C6FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8022C700: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x8022C704: addiu       $v1, $zero, 0x67
    ctx->r3 = ADD32(0, 0X67);
    // 0x8022C708: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C70C: bne         $t4, $zero, L_8022C730
    if (ctx->r12 != 0) {
        // 0x8022C710: sb          $v1, 0x0($at)
        MEM_B(0X0, ctx->r1) = ctx->r3;
            goto L_8022C730;
    }
    // 0x8022C710: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
    // 0x8022C714: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022C718: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022C71C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8022C720: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C724: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8022C728: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8022C72C: sb          $v1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r3;
L_8022C730:
    // 0x8022C730: jal         0x8022D560
    // 0x8022C734: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    static_3_8022D560(rdram, ctx);
        goto after_3;
    // 0x8022C734: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_3:
    // 0x8022C738: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022C73C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022C740: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8022C744: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C748: jal         0x8023D7F0
    // 0x8022C74C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    static_3_8023D7F0(rdram, ctx);
        goto after_4;
    // 0x8022C74C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    after_4:
    // 0x8022C750: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8022C754: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022C758: jal         0x8023D92C
    // 0x8022C75C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    static_3_8023D92C(rdram, ctx);
        goto after_5;
    // 0x8022C75C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_5:
    // 0x8022C760: jal         0x8023DA94
    // 0x8022C764: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_8023DA94(rdram, ctx);
        goto after_6;
    // 0x8022C764: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_6:
    // 0x8022C768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C76C:
    // 0x8022C76C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022C770: jr          $ra
    // 0x8022C774: nop

    return;
    // 0x8022C774: nop

;}
RECOMP_FUNC void D_80299024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802990A4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x802990A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802990AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802990B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802990B4: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x802990B8: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x802990BC: jal         0x8022970C
    // 0x802990C0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802990C0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x802990C4: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x802990C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802990CC: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802990D0: sw          $t6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r14;
    // 0x802990D4: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802990D8: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x802990DC: jal         0x80224CA8
    // 0x802990E0: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802990E0: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x802990E4: jal         0x80224CA8
    // 0x802990E8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802990E8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_2:
    // 0x802990EC: jal         0x80224CA8
    // 0x802990F0: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802990F0: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_3:
    // 0x802990F4: jal         0x80224CA8
    // 0x802990F8: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802990F8: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    after_4:
    // 0x802990FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80299100: jal         0x80205AA0
    // 0x80299104: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_5;
    // 0x80299104: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80299108: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029910C: jal         0x80205EBC
    // 0x80299110: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_80205EBC(rdram, ctx);
        goto after_6;
    // 0x80299110: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x80299114: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x80299118: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x8029911C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80299120: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80299124: jal         0x80205E0C
    // 0x80299128: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    static_3_80205E0C(rdram, ctx);
        goto after_7;
    // 0x80299128: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    after_7:
    // 0x8029912C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80299130: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80299134: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80299138: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029913C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80299140: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80299144: lui         $a1, 0x3DC7
    ctx->r5 = S32(0X3DC7 << 16);
    // 0x80299148: ori         $a1, $a1, 0x1899
    ctx->r5 = ctx->r5 | 0X1899;
    // 0x8029914C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80299150: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80299154: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x80299158: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x8029915C: jal         0x802D01D4
    // 0x80299160: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_8;
    // 0x80299160: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x80299164: lui         $a1, 0xBC0C
    ctx->r5 = S32(0XBC0C << 16);
    // 0x80299168: ori         $a1, $a1, 0x1E2E
    ctx->r5 = ctx->r5 | 0X1E2E;
    // 0x8029916C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80299170: jal         0x802D01D4
    // 0x80299174: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_9;
    // 0x80299174: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_9:
    // 0x80299178: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x8029917C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80299180: jal         0x80228DE0
    // 0x80299184: addiu       $a0, $v0, 0x4DD4
    ctx->r4 = ADD32(ctx->r2, 0X4DD4);
    func_80228DE0(rdram, ctx);
        goto after_10;
    // 0x80299184: addiu       $a0, $v0, 0x4DD4
    ctx->r4 = ADD32(ctx->r2, 0X4DD4);
    after_10:
    // 0x80299188: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x8029918C: jal         0x802B0078
    // 0x80299190: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    static_3_802B0078(rdram, ctx);
        goto after_11;
    // 0x80299190: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_11:
    // 0x80299194: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80299198: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8029919C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x802991A0: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x802991A4: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802991A8: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802991AC: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x802991B0: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x802991B4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x802991B8: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x802991BC: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802991C0: lw          $t1, 0xC($t8)
    ctx->r9 = MEM_W(ctx->r24, 0XC);
    // 0x802991C4: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x802991C8: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x802991CC: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802991D0: lw          $t1, 0x14($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X14);
    // 0x802991D4: sw          $t1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r9;
    // 0x802991D8: lw          $at, 0x18($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X18);
    // 0x802991DC: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802991E0: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802991E4: lw          $a0, 0x70($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X70);
    // 0x802991E8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x802991EC: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x802991F0: lwc1        $f0, 0x0($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X0);
    // 0x802991F4: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802991F8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802991FC: jal         0x80303778
    // 0x80299200: nop

    static_3_80303778(rdram, ctx);
        goto after_12;
    // 0x80299200: nop

    after_12:
    // 0x80299204: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80299208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029920C: jal         0x80309D48
    // 0x80299210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309D48(rdram, ctx);
        goto after_13;
    // 0x80299210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x80299214: jal         0x80223E48
    // 0x80299218: nop

    static_3_80223E48(rdram, ctx);
        goto after_14;
    // 0x80299218: nop

    after_14:
    // 0x8029921C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80299220: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80299224: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x80299228: jr          $ra
    // 0x8029922C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8029922C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802EC884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC904: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EC908: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC90C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802EC910: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EC914: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802EC918: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802EC91C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802EC920: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802EC924: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802EC928: addiu       $t9, $zero, 0xFA
    ctx->r25 = ADD32(0, 0XFA);
    // 0x802EC92C: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EC930: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EC934: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EC938: sh          $v1, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r3;
    // 0x802EC93C: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EC940: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EC944: sh          $t9, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r25;
    // 0x802EC948: sh          $v1, 0xEE($a0)
    MEM_H(0XEE, ctx->r4) = ctx->r3;
    // 0x802EC94C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EC950: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EC954: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EC958: jr          $ra
    // 0x802EC95C: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802EC95C: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802CC204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CC284: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802CC288: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802CC28C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CC290: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802CC294: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x802CC298: addiu       $a3, $s0, 0x6
    ctx->r7 = ADD32(ctx->r16, 0X6);
    // 0x802CC29C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x802CC2A0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802CC2A4: jal         0x802FBB60
    // 0x802CC2A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802FBB60(rdram, ctx);
        goto after_0;
    // 0x802CC2A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802CC2AC: beq         $v0, $zero, L_802CC380
    if (ctx->r2 == 0) {
        // 0x802CC2B0: sb          $v0, 0x37($sp)
        MEM_B(0X37, ctx->r29) = ctx->r2;
            goto L_802CC380;
    }
    // 0x802CC2B0: sb          $v0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r2;
    // 0x802CC2B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CC2B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CC2BC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802CC2C0: jal         0x802FBB60
    // 0x802CC2C4: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    static_3_802FBB60(rdram, ctx);
        goto after_1;
    // 0x802CC2C4: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x802CC2C8: beq         $v0, $zero, L_802CC380
    if (ctx->r2 == 0) {
        // 0x802CC2CC: sb          $v0, 0x37($sp)
        MEM_B(0X37, ctx->r29) = ctx->r2;
            goto L_802CC380;
    }
    // 0x802CC2CC: sb          $v0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r2;
    // 0x802CC2D0: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x802CC2D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CC2D8: bnel        $v0, $at, L_802CC314
    if (ctx->r2 != ctx->r1) {
        // 0x802CC2DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802CC314;
    }
    goto skip_0;
    // 0x802CC2DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x802CC2E0: jal         0x802CFF48
    // 0x802CC2E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802CFF48(rdram, ctx);
        goto after_2;
    // 0x802CC2E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x802CC2E8: sb          $v0, 0xA4($s0)
    MEM_B(0XA4, ctx->r16) = ctx->r2;
    // 0x802CC2EC: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x802CC2F0: addiu       $t6, $s0, 0x24
    ctx->r14 = ADD32(ctx->r16, 0X24);
    // 0x802CC2F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802CC2F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CC2FC: addiu       $a1, $s0, 0xA4
    ctx->r5 = ADD32(ctx->r16, 0XA4);
    // 0x802CC300: jal         0x802FBF08
    // 0x802CC304: addiu       $a2, $s0, 0xA6
    ctx->r6 = ADD32(ctx->r16, 0XA6);
    static_3_802FBF08(rdram, ctx);
        goto after_3;
    // 0x802CC304: addiu       $a2, $s0, 0xA6
    ctx->r6 = ADD32(ctx->r16, 0XA6);
    after_3:
    // 0x802CC308: b           L_802CC32C
    // 0x802CC30C: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
        goto L_802CC32C;
    // 0x802CC30C: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x802CC310: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802CC314:
    // 0x802CC314: bnel        $v0, $at, L_802CC32C
    if (ctx->r2 != ctx->r1) {
        // 0x802CC318: lh          $v0, 0x6($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X6);
            goto L_802CC32C;
    }
    goto skip_1;
    // 0x802CC318: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    skip_1:
    // 0x802CC31C: jal         0x802CFF48
    // 0x802CC320: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802CFF48(rdram, ctx);
        goto after_4;
    // 0x802CC320: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x802CC324: sh          $v0, 0x160($s0)
    MEM_H(0X160, ctx->r16) = ctx->r2;
    // 0x802CC328: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
L_802CC32C:
    // 0x802CC32C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CC330: bnel        $v0, $at, L_802CC36C
    if (ctx->r2 != ctx->r1) {
        // 0x802CC334: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802CC36C;
    }
    goto skip_2;
    // 0x802CC334: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_2:
    // 0x802CC338: jal         0x802CFF48
    // 0x802CC33C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802CFF48(rdram, ctx);
        goto after_5;
    // 0x802CC33C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x802CC340: sb          $v0, 0xA5($s0)
    MEM_B(0XA5, ctx->r16) = ctx->r2;
    // 0x802CC344: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x802CC348: addiu       $t7, $s0, 0x64
    ctx->r15 = ADD32(ctx->r16, 0X64);
    // 0x802CC34C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802CC350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CC354: addiu       $a1, $s0, 0xA5
    ctx->r5 = ADD32(ctx->r16, 0XA5);
    // 0x802CC358: jal         0x802FBF08
    // 0x802CC35C: addiu       $a2, $s0, 0xAC
    ctx->r6 = ADD32(ctx->r16, 0XAC);
    static_3_802FBF08(rdram, ctx);
        goto after_6;
    // 0x802CC35C: addiu       $a2, $s0, 0xAC
    ctx->r6 = ADD32(ctx->r16, 0XAC);
    after_6:
    // 0x802CC360: b           L_802CC384
    // 0x802CC364: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802CC384;
    // 0x802CC364: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802CC368: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802CC36C:
    // 0x802CC36C: bnel        $v0, $at, L_802CC384
    if (ctx->r2 != ctx->r1) {
        // 0x802CC370: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802CC384;
    }
    goto skip_3;
    // 0x802CC370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x802CC374: jal         0x802CFF48
    // 0x802CC378: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802CFF48(rdram, ctx);
        goto after_7;
    // 0x802CC378: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x802CC37C: sh          $v0, 0x162($s0)
    MEM_H(0X162, ctx->r16) = ctx->r2;
L_802CC380:
    // 0x802CC380: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802CC384:
    // 0x802CC384: lbu         $v0, 0x37($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X37);
    // 0x802CC388: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802CC38C: jr          $ra
    // 0x802CC390: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802CC390: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802E790C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E798C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802E7990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7994: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802E7998: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E799C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E79A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E79A4: bne         $v1, $zero, L_802E79CC
    if (ctx->r3 != 0) {
        // 0x802E79A8: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E79CC;
    }
    // 0x802E79A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E79AC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E79B0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E79B4: jal         0x80231A24
    // 0x802E79B8: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E79B8: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E79BC: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802E79C0: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E79C4: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E79C8: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E79CC:
    // 0x802E79CC: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E79D0: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802E79D4: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E79D8: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802E79DC: jalr        $t9
    // 0x802E79E0: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E79E0: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E79E4: jal         0x803183D0
    // 0x802E79E8: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    static_3_803183D0(rdram, ctx);
        goto after_2;
    // 0x802E79E8: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_2:
    // 0x802E79EC: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E79F0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802E79F4: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E79F8: lh          $t8, 0x10($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X10);
    // 0x802E79FC: jalr        $t9
    // 0x802E7A00: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802E7A00: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_3:
    // 0x802E7A04: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7A08: jal         0x802AED58
    // 0x802E7A0C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AED58(rdram, ctx);
        goto after_4;
    // 0x802E7A0C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_4:
    // 0x802E7A10: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x802E7A14: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x802E7A18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7A1C: bne         $v0, $t0, L_802E7A30
    if (ctx->r2 != ctx->r8) {
        // 0x802E7A20: nop
    
            goto L_802E7A30;
    }
    // 0x802E7A20: nop

    // 0x802E7A24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802E7A28: nop

    // 0x802E7A2C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
L_802E7A30:
    // 0x802E7A30: jal         0x802AEE80
    // 0x802E7A34: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEE80(rdram, ctx);
        goto after_5;
    // 0x802E7A34: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_5:
    // 0x802E7A38: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x802E7A3C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802E7A40: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802E7A44: bne         $v0, $t1, L_802E7A58
    if (ctx->r2 != ctx->r9) {
        // 0x802E7A48: nop
    
            goto L_802E7A58;
    }
    // 0x802E7A48: nop

    // 0x802E7A4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802E7A50: nop

    // 0x802E7A54: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
L_802E7A58:
    // 0x802E7A58: jal         0x802CF888
    // 0x802E7A5C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_802CF888(rdram, ctx);
        goto after_6;
    // 0x802E7A5C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x802E7A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7A64: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802E7A68: jr          $ra
    // 0x802E7A6C: nop

    return;
    // 0x802E7A6C: nop

;}
RECOMP_FUNC void D_802B944C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B94CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802B94D0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802B94D4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802B94D8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802B94DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802B94E0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802B94E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802B94E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B94EC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802B94F0: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_802B94F4:
    // 0x802B94F4: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x802B94F8: beql        $t6, $zero, L_802B9540
    if (ctx->r14 == 0) {
        // 0x802B94FC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802B9540;
    }
    goto skip_0;
    // 0x802B94FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x802B9500: jal         0x80207130
    // 0x802B9504: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802B9504: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802B9508: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802B950C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802B9510: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802B9514: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802B9518: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802B951C: sub.d       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f0.d - ctx->f10.d;
    // 0x802B9520: c.lt.d      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.d < ctx->f16.d;
    // 0x802B9524: nop

    // 0x802B9528: bc1fl       L_802B9540
    if (!c1cs) {
        // 0x802B952C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802B9540;
    }
    goto skip_1;
    // 0x802B952C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x802B9530: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x802B9534: jal         0x8022C2A8
    // 0x802B9538: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    static_3_8022C2A8(rdram, ctx);
        goto after_1;
    // 0x802B9538: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    after_1:
    // 0x802B953C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802B9540:
    // 0x802B9540: bne         $s1, $s2, L_802B94F4
    if (ctx->r17 != ctx->r18) {
        // 0x802B9544: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_802B94F4;
    }
    // 0x802B9544: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x802B9548: jal         0x8022C0A8
    // 0x802B954C: nop

    static_3_8022C0A8(rdram, ctx);
        goto after_2;
    // 0x802B954C: nop

    after_2:
    // 0x802B9550: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802B9554: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802B9558: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802B955C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802B9560: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802B9564: jr          $ra
    // 0x802B9568: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802B9568: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802F2A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2ADC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802F2AE0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802F2AE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802F2AE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F2AEC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802F2AF0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802F2AF4: jal         0x8028DA48
    // 0x802F2AF8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028DA48(rdram, ctx);
        goto after_0;
    // 0x802F2AF8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802F2AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802F2B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802F2B04: jr          $ra
    // 0x802F2B08: nop

    return;
    // 0x802F2B08: nop

;}
RECOMP_FUNC void D_802B83A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B8420: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802B8424: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802B8428: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802B842C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802B8430: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x802B8434: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B8438: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B843C: beq         $v0, $at, L_802B8474
    if (ctx->r2 == ctx->r1) {
        // 0x802B8440: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802B8474;
    }
    // 0x802B8440: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B8444: beq         $v0, $zero, L_802B8480
    if (ctx->r2 == 0) {
        // 0x802B8448: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802B8480;
    }
    // 0x802B8448: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B844C: beq         $v0, $at, L_802B8480
    if (ctx->r2 == ctx->r1) {
        // 0x802B8450: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802B8480;
    }
    // 0x802B8450: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B8454: beq         $v0, $at, L_802B8480
    if (ctx->r2 == ctx->r1) {
        // 0x802B8458: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_802B8480;
    }
    // 0x802B8458: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802B845C: beq         $v0, $at, L_802B8480
    if (ctx->r2 == ctx->r1) {
        // 0x802B8460: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_802B8480;
    }
    // 0x802B8460: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x802B8464: beql        $v0, $at, L_802B8484
    if (ctx->r2 == ctx->r1) {
        // 0x802B8468: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_802B8484;
    }
    goto skip_0;
    // 0x802B8468: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    skip_0:
    // 0x802B846C: b           L_802B848C
    // 0x802B8470: lw          $a1, 0xF8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF8);
        goto L_802B848C;
    // 0x802B8470: lw          $a1, 0xF8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF8);
L_802B8474:
    // 0x802B8474: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802B8478: b           L_802B8488
    // 0x802B847C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
        goto L_802B8488;
    // 0x802B847C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_802B8480:
    // 0x802B8480: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_802B8484:
    // 0x802B8484: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_802B8488:
    // 0x802B8488: lw          $a1, 0xF8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF8);
L_802B848C:
    // 0x802B848C: lw          $a2, 0xFC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XFC);
    // 0x802B8490: lw          $a3, 0x100($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X100);
    // 0x802B8494: addiu       $t8, $sp, 0x34
    ctx->r24 = ADD32(ctx->r29, 0X34);
    // 0x802B8498: addiu       $t9, $sp, 0x30
    ctx->r25 = ADD32(ctx->r29, 0X30);
    // 0x802B849C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802B84A0: jal         0x802CEFC8
    // 0x802B84A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    static_3_802CEFC8(rdram, ctx);
        goto after_0;
    // 0x802B84A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x802B84A8: jal         0x8022970C
    // 0x802B84AC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802B84AC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x802B84B0: lwc1        $f4, 0xF8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802B84B4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x802B84B8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802B84BC: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x802B84C0: lwc1        $f6, 0xFC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XFC);
    // 0x802B84C4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802B84C8: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x802B84CC: lwc1        $f8, 0x100($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X100);
    // 0x802B84D0: jal         0x802D01D4
    // 0x802B84D4: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802B84D4: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x802B84D8: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x802B84DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B84E0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802B84E4: jal         0x802D01D4
    // 0x802B84E8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_3;
    // 0x802B84E8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_3:
    // 0x802B84EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B84F0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B84F4: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802B84F8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802B84FC: jal         0x802AB2EC
    // 0x802B8500: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    static_3_802AB2EC(rdram, ctx);
        goto after_4;
    // 0x802B8500: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x802B8504: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802B8508: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802B850C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802B8510: jr          $ra
    // 0x802B8514: nop

    return;
    // 0x802B8514: nop

;}
RECOMP_FUNC void D_80220930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80220930: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80220934: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80220938: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022093C: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80220940: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80220944: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80220948: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x8022094C: jr          $ra
    // 0x80220950: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    return;
    // 0x80220950: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void D_802ED9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDA40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EDA44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EDA48: beq         $a0, $zero, L_802EDA78
    if (ctx->r4 == 0) {
        // 0x802EDA4C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EDA78;
    }
    // 0x802EDA4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EDA50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EDA54: jal         0x8031C514
    // 0x802EDA58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EDA58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EDA5C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EDA60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EDA64: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EDA68: beql        $t7, $zero, L_802EDA7C
    if (ctx->r15 == 0) {
        // 0x802EDA6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EDA7C;
    }
    goto skip_0;
    // 0x802EDA6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EDA70: jal         0x802C681C
    // 0x802EDA74: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EDA74: nop

    after_1:
L_802EDA78:
    // 0x802EDA78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EDA7C:
    // 0x802EDA7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EDA80: jr          $ra
    // 0x802EDA84: nop

    return;
    // 0x802EDA84: nop

;}
RECOMP_FUNC void D_802E1798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1818: addiu       $sp, $sp, -0x198
    ctx->r29 = ADD32(ctx->r29, -0X198);
    // 0x802E181C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x802E1820: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x802E1824: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802E1828: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x802E182C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x802E1830: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x802E1834: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x802E1838: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x802E183C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x802E1840: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802E1844: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802E1848: jal         0x8022331C
    // 0x802E184C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802E184C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    after_0:
    // 0x802E1850: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802E1854: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802E1858: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802E185C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802E1860: addiu       $s0, $sp, 0x158
    ctx->r16 = ADD32(ctx->r29, 0X158);
    // 0x802E1864: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802E1868: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802E186C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E1870: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802E1874: jal         0x8022A848
    // 0x802E1878: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_1;
    // 0x802E1878: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x802E187C: jal         0x80221B2C
    // 0x802E1880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80221B2C(rdram, ctx);
        goto after_2;
    // 0x802E1880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802E1884: addiu       $s0, $sp, 0x118
    ctx->r16 = ADD32(ctx->r29, 0X118);
    // 0x802E1888: jal         0x8022970C
    // 0x802E188C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802E188C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802E1890: jal         0x8022149C
    // 0x802E1894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022149C(rdram, ctx);
        goto after_4;
    // 0x802E1894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802E1898: jal         0x802233EC
    // 0x802E189C: lui         $a0, 0x4E2
    ctx->r4 = S32(0X4E2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_5;
    // 0x802E189C: lui         $a0, 0x4E2
    ctx->r4 = S32(0X4E2 << 16);
    after_5:
    // 0x802E18A0: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802E18A4: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802E18A8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802E18AC: jal         0x802AEE54
    // 0x802E18B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_6;
    // 0x802E18B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x802E18B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802E18B8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802E18BC: jal         0x802AED60
    // 0x802E18C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_802AED60(rdram, ctx);
        goto after_7;
    // 0x802E18C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_7:
    // 0x802E18C4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802E18C8: beq         $v0, $at, L_802E18DC
    if (ctx->r2 == ctx->r1) {
        // 0x802E18CC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802E18DC;
    }
    // 0x802E18CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E18D0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802E18D4: bne         $v0, $at, L_802E1A28
    if (ctx->r2 != ctx->r1) {
        // 0x802E18D8: nop
    
            goto L_802E1A28;
    }
    // 0x802E18D8: nop

L_802E18DC:
    // 0x802E18DC: jal         0x802AEDEC
    // 0x802E18E0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    static_3_802AEDEC(rdram, ctx);
        goto after_8;
    // 0x802E18E0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_8:
    // 0x802E18E4: sw          $v0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r2;
    // 0x802E18E8: lw          $v1, 0x1A0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1A0);
    // 0x802E18EC: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x802E18F0: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x802E18F4: lh          $t6, 0x60($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X60);
    // 0x802E18F8: jalr        $t9
    // 0x802E18FC: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802E18FC: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_9:
    // 0x802E1900: jal         0x803182BC
    // 0x802E1904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_803182BC(rdram, ctx);
        goto after_10;
    // 0x802E1904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x802E1908: swc1        $f0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f0.u32l;
    // 0x802E190C: lw          $v0, 0x370($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X370);
    // 0x802E1910: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802E1914: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x802E1918: blez        $v0, L_802E1A28
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802E191C: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802E1A28;
    }
    // 0x802E191C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E1920: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E1924: addiu       $fp, $sp, 0x104
    ctx->r30 = ADD32(ctx->r29, 0X104);
    // 0x802E1928: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x802E192C: ori         $s6, $zero, 0xFFFF
    ctx->r22 = 0 | 0XFFFF;
    // 0x802E1930: addiu       $s5, $sp, 0xB8
    ctx->r21 = ADD32(ctx->r29, 0XB8);
L_802E1934:
    // 0x802E1934: lw          $t7, 0x304($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X304);
    // 0x802E1938: beql        $s6, $t7, L_802E1A1C
    if (ctx->r22 == ctx->r15) {
        // 0x802E193C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802E1A1C;
    }
    goto skip_0;
    // 0x802E193C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x802E1940: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802E1944: lw          $t8, 0x37C($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X37C);
    // 0x802E1948: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802E194C: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802E1950: mflo        $s0
    ctx->r16 = lo;
    // 0x802E1954: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x802E1958: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802E195C: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802E1960: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802E1964: jal         0x8022ADA8
    // 0x802E1968: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    static_3_8022ADA8(rdram, ctx);
        goto after_11;
    // 0x802E1968: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    after_11:
    // 0x802E196C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802E1970: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802E1974: bc1fl       L_802E1A18
    if (!c1cs) {
        // 0x802E1978: lw          $v0, 0x370($s4)
        ctx->r2 = MEM_W(ctx->r20, 0X370);
            goto L_802E1A18;
    }
    goto skip_1;
    // 0x802E1978: lw          $v0, 0x370($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X370);
    skip_1:
    // 0x802E197C: lw          $t0, 0x37C($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X37C);
    // 0x802E1980: lwc1        $f18, 0xB0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802E1984: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802E1988: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x802E198C: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x802E1990: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x802E1994: nop

    // 0x802E1998: bc1fl       L_802E19A8
    if (!c1cs) {
        // 0x802E199C: andi        $t2, $s3, 0xFF
        ctx->r10 = ctx->r19 & 0XFF;
            goto L_802E19A8;
    }
    goto skip_2;
    // 0x802E199C: andi        $t2, $s3, 0xFF
    ctx->r10 = ctx->r19 & 0XFF;
    skip_2:
    // 0x802E19A0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x802E19A4: andi        $t2, $s3, 0xFF
    ctx->r10 = ctx->r19 & 0XFF;
L_802E19A8:
    // 0x802E19A8: jal         0x8022970C
    // 0x802E19AC: or          $s3, $t2, $zero
    ctx->r19 = ctx->r10 | 0;
    func_8022970C(rdram, ctx);
        goto after_12;
    // 0x802E19AC: or          $s3, $t2, $zero
    ctx->r19 = ctx->r10 | 0;
    after_12:
    // 0x802E19B0: lw          $t3, 0x37C($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X37C);
    // 0x802E19B4: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x802E19B8: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x802E19BC: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x802E19C0: lwc1        $f6, 0x0($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X0);
    // 0x802E19C4: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x802E19C8: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x802E19CC: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x802E19D0: lw          $t5, 0x37C($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X37C);
    // 0x802E19D4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x802E19D8: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x802E19DC: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x802E19E0: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802E19E4: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x802E19E8: lw          $t9, 0x37C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X37C);
    // 0x802E19EC: addu        $t7, $t9, $s0
    ctx->r15 = ADD32(ctx->r25, ctx->r16);
    // 0x802E19F0: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x802E19F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802E19F8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802E19FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802E1A00: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802E1A04: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802E1A08: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802E1A0C: jal         0x802B7170
    // 0x802E1A10: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    static_3_802B7170(rdram, ctx);
        goto after_13;
    // 0x802E1A10: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x802E1A14: lw          $v0, 0x370($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X370);
L_802E1A18:
    // 0x802E1A18: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802E1A1C:
    // 0x802E1A1C: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802E1A20: bne         $at, $zero, L_802E1934
    if (ctx->r1 != 0) {
        // 0x802E1A24: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802E1934;
    }
    // 0x802E1A24: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_802E1A28:
    // 0x802E1A28: jal         0x802230E4
    // 0x802E1A2C: nop

    static_3_802230E4(rdram, ctx);
        goto after_14;
    // 0x802E1A2C: nop

    after_14:
    // 0x802E1A30: jal         0x8022337C
    // 0x802E1A34: nop

    static_3_8022337C(rdram, ctx);
        goto after_15;
    // 0x802E1A34: nop

    after_15:
    // 0x802E1A38: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x802E1A3C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x802E1A40: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802E1A44: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802E1A48: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802E1A4C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x802E1A50: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x802E1A54: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x802E1A58: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x802E1A5C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x802E1A60: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x802E1A64: jr          $ra
    // 0x802E1A68: addiu       $sp, $sp, 0x198
    ctx->r29 = ADD32(ctx->r29, 0X198);
    return;
    // 0x802E1A68: addiu       $sp, $sp, 0x198
    ctx->r29 = ADD32(ctx->r29, 0X198);
;}
RECOMP_FUNC void D_802D525C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D52DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D52E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D52E4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D52E8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D52EC: lbu         $t7, 0xC40($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XC40);
    // 0x802D52F0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802D52F4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802D52F8: beq         $t7, $at, L_802D5398
    if (ctx->r15 == ctx->r1) {
        // 0x802D52FC: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_802D5398;
    }
    // 0x802D52FC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802D5300: beq         $t6, $zero, L_802D5388
    if (ctx->r14 == 0) {
        // 0x802D5304: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802D5388;
    }
    // 0x802D5304: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D5308: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x802D530C: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802D5310: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D5314: jal         0x80305E90
    // 0x802D5318: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    static_3_80305E90(rdram, ctx);
        goto after_0;
    // 0x802D5318: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x802D531C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x802D5320: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D5324: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D5328: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802D532C: addiu       $a1, $v1, 0xC44
    ctx->r5 = ADD32(ctx->r3, 0XC44);
    // 0x802D5330: lbu         $a2, 0xC40($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0XC40);
    // 0x802D5334: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x802D5338: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802D533C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802D5340: jal         0x80302238
    // 0x802D5344: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x802D5344: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802D5348: beq         $v0, $zero, L_802D5368
    if (ctx->r2 == 0) {
        // 0x802D534C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802D5368;
    }
    // 0x802D534C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D5350: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D5354: lui         $a2, 0x3F63
    ctx->r6 = S32(0X3F63 << 16);
    // 0x802D5358: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x802D535C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802D5360: jal         0x80302664
    // 0x802D5364: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_2;
    // 0x802D5364: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
L_802D5368:
    // 0x802D5368: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D536C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D5370: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802D5374: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x802D5378: jal         0x803025D8
    // 0x802D537C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_3;
    // 0x802D537C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802D5380: b           L_802D539C
    // 0x802D5384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802D539C;
    // 0x802D5384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D5388:
    // 0x802D5388: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D538C: addiu       $a1, $a3, 0xC44
    ctx->r5 = ADD32(ctx->r7, 0XC44);
    // 0x802D5390: jal         0x80302414
    // 0x802D5394: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_4;
    // 0x802D5394: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
L_802D5398:
    // 0x802D5398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D539C:
    // 0x802D539C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D53A0: jr          $ra
    // 0x802D53A4: nop

    return;
    // 0x802D53A4: nop

;}
RECOMP_FUNC void D_802E48B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E4934: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802E4938: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802E493C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802E4940: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802E4944: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802E4948: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802E494C: lwc1        $f6, 0xDBC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XDBC);
    // 0x802E4950: lwc1        $f4, 0xDC0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XDC0);
    // 0x802E4954: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802E4958: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802E495C: nop

    // 0x802E4960: bc1fl       L_802E4B7C
    if (!c1cs) {
        // 0x802E4964: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802E4B7C;
    }
    goto skip_0;
    // 0x802E4964: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802E4968: lbu         $t6, 0xDBA($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDBA);
    // 0x802E496C: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x802E4970: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802E4974: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802E4978: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x802E497C: bne         $v0, $at, L_802E4A80
    if (ctx->r2 != ctx->r1) {
        // 0x802E4980: sb          $t7, 0xDBA($a0)
        MEM_B(0XDBA, ctx->r4) = ctx->r15;
            goto L_802E4A80;
    }
    // 0x802E4980: sb          $t7, 0xDBA($a0)
    MEM_B(0XDBA, ctx->r4) = ctx->r15;
    // 0x802E4984: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    // 0x802E4988: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802E498C: sb          $t8, 0xDB8($a0)
    MEM_B(0XDB8, ctx->r4) = ctx->r24;
    // 0x802E4990: sb          $zero, 0xDBA($a0)
    MEM_B(0XDBA, ctx->r4) = 0;
    // 0x802E4994: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x802E4998: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802E499C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802E49A0: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802E49A4: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x802E49A8: sb          $t9, 0xDB9($a0)
    MEM_B(0XDB9, ctx->r4) = ctx->r25;
    // 0x802E49AC: swc1        $f8, 0xDBC($a0)
    MEM_W(0XDBC, ctx->r4) = ctx->f8.u32l;
    // 0x802E49B0: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802E49B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E49B8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x802E49BC: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x802E49C0: bgez        $t0, L_802E49D8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802E49C4: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802E49D8;
    }
    // 0x802E49C4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802E49C8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802E49CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802E49D0: nop

    // 0x802E49D4: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_802E49D8:
    // 0x802E49D8: swc1        $f16, 0xDC0($s1)
    MEM_W(0XDC0, ctx->r17) = ctx->f16.u32l;
    // 0x802E49DC: jal         0x8021B6D4
    // 0x802E49E0: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    static_3_8021B6D4(rdram, ctx);
        goto after_0;
    // 0x802E49E0: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_0:
    // 0x802E49E4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x802E49E8: jal         0x8021ACB0
    // 0x802E49EC: addiu       $a1, $zero, 0x130
    ctx->r5 = ADD32(0, 0X130);
    static_3_8021ACB0(rdram, ctx);
        goto after_1;
    // 0x802E49EC: addiu       $a1, $zero, 0x130
    ctx->r5 = ADD32(0, 0X130);
    after_1:
    // 0x802E49F0: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x802E49F4: jal         0x8021B838
    // 0x802E49F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_2;
    // 0x802E49F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x802E49FC: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x802E4A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E4A04: jal         0x8021B4B0
    // 0x802E4A08: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    static_3_8021B4B0(rdram, ctx);
        goto after_3;
    // 0x802E4A08: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x802E4A0C: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802E4A10: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802E4A14: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x802E4A18: addiu       $s3, $zero, 0x9
    ctx->r19 = ADD32(0, 0X9);
    // 0x802E4A1C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_802E4A20:
    // 0x802E4A20: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x802E4A24: addiu       $a2, $s0, 0x2
    ctx->r6 = ADD32(ctx->r16, 0X2);
    // 0x802E4A28: jal         0x802AA4A4
    // 0x802E4A2C: lw          $a3, 0x14($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_4;
    // 0x802E4A2C: lw          $a3, 0x14($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X14);
    after_4:
    // 0x802E4A30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802E4A34: bnel        $s0, $s3, L_802E4A20
    if (ctx->r16 != ctx->r19) {
        // 0x802E4A38: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_802E4A20;
    }
    goto skip_1;
    // 0x802E4A38: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x802E4A3C: jal         0x8022970C
    // 0x802E4A40: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x802E4A40: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x802E4A44: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x802E4A48: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802E4A4C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x802E4A50: jal         0x8022A0D0
    // 0x802E4A54: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_6;
    // 0x802E4A54: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    after_6:
    // 0x802E4A58: addiu       $a0, $s1, 0x2AC
    ctx->r4 = ADD32(ctx->r17, 0X2AC);
    // 0x802E4A5C: jal         0x802C57AC
    // 0x802E4A60: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    static_3_802C57AC(rdram, ctx);
        goto after_7;
    // 0x802E4A60: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_7:
    // 0x802E4A64: addiu       $a0, $s1, 0x768
    ctx->r4 = ADD32(ctx->r17, 0X768);
    // 0x802E4A68: jal         0x802C57AC
    // 0x802E4A6C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    static_3_802C57AC(rdram, ctx);
        goto after_8;
    // 0x802E4A6C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_8:
    // 0x802E4A70: addiu       $a0, $s1, 0xC24
    ctx->r4 = ADD32(ctx->r17, 0XC24);
    // 0x802E4A74: jal         0x802C57AC
    // 0x802E4A78: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    static_3_802C57AC(rdram, ctx);
        goto after_9;
    // 0x802E4A78: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_9:
    // 0x802E4A7C: lbu         $v0, 0xDBA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDBA);
L_802E4A80:
    // 0x802E4A80: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802E4A84: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x802E4A88: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802E4A8C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802E4A90: addiu       $a0, $s1, 0x1A4
    ctx->r4 = ADD32(ctx->r17, 0X1A4);
    // 0x802E4A94: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x802E4A98: bne         $t2, $at, L_802E4AB8
    if (ctx->r10 != ctx->r1) {
        // 0x802E4A9C: sb          $t1, 0xDB9($s1)
        MEM_B(0XDB9, ctx->r17) = ctx->r9;
            goto L_802E4AB8;
    }
    // 0x802E4A9C: sb          $t1, 0xDB9($s1)
    MEM_B(0XDB9, ctx->r17) = ctx->r9;
    // 0x802E4AA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E4AA4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802E4AA8: jal         0x802D6E44
    // 0x802E4AAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802D6E44(rdram, ctx);
        goto after_10;
    // 0x802E4AAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x802E4AB0: b           L_802E4AC4
    // 0x802E4AB4: lbu         $v0, 0xDB9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDB9);
        goto L_802E4AC4;
    // 0x802E4AB4: lbu         $v0, 0xDB9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDB9);
L_802E4AB8:
    // 0x802E4AB8: jal         0x802D6F20
    // 0x802E4ABC: addiu       $a0, $s1, 0x1A4
    ctx->r4 = ADD32(ctx->r17, 0X1A4);
    static_3_802D6F20(rdram, ctx);
        goto after_11;
    // 0x802E4ABC: addiu       $a0, $s1, 0x1A4
    ctx->r4 = ADD32(ctx->r17, 0X1A4);
    after_11:
    // 0x802E4AC0: lbu         $v0, 0xDB9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDB9);
L_802E4AC4:
    // 0x802E4AC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802E4AC8: bne         $v0, $at, L_802E4AE8
    if (ctx->r2 != ctx->r1) {
        // 0x802E4ACC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802E4AE8;
    }
    // 0x802E4ACC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802E4AD0: lbu         $v0, 0xDB9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDB9);
    // 0x802E4AD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E4AD8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E4ADC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802E4AE0: b           L_802E4B24
    // 0x802E4AE4: swc1        $f18, 0xDC4($s1)
    MEM_W(0XDC4, ctx->r17) = ctx->f18.u32l;
        goto L_802E4B24;
    // 0x802E4AE4: swc1        $f18, 0xDC4($s1)
    MEM_W(0XDC4, ctx->r17) = ctx->f18.u32l;
L_802E4AE8:
    // 0x802E4AE8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802E4AEC: bnel        $v1, $at, L_802E4B0C
    if (ctx->r3 != ctx->r1) {
        // 0x802E4AF0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_802E4B0C;
    }
    goto skip_2;
    // 0x802E4AF0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    skip_2:
    // 0x802E4AF4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802E4AF8: lbu         $v0, 0xDB9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDB9);
    // 0x802E4AFC: swc1        $f6, 0xDC4($s1)
    MEM_W(0XDC4, ctx->r17) = ctx->f6.u32l;
    // 0x802E4B00: b           L_802E4B24
    // 0x802E4B04: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_802E4B24;
    // 0x802E4B04: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802E4B08: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_802E4B0C:
    // 0x802E4B0C: bne         $v1, $at, L_802E4B24
    if (ctx->r3 != ctx->r1) {
        // 0x802E4B10: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802E4B24;
    }
    // 0x802E4B10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E4B14: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E4B18: lbu         $v0, 0xDB9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDB9);
    // 0x802E4B1C: swc1        $f8, 0xDC4($s1)
    MEM_W(0XDC4, ctx->r17) = ctx->f8.u32l;
    // 0x802E4B20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802E4B24:
    // 0x802E4B24: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802E4B28: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802E4B2C: bnel        $v1, $at, L_802E4B44
    if (ctx->r3 != ctx->r1) {
        // 0x802E4B30: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_802E4B44;
    }
    goto skip_3;
    // 0x802E4B30: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_3:
    // 0x802E4B34: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802E4B38: lbu         $v0, 0xDB9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDB9);
    // 0x802E4B3C: swc1        $f10, 0xDD0($s1)
    MEM_W(0XDD0, ctx->r17) = ctx->f10.u32l;
    // 0x802E4B40: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_802E4B44:
    // 0x802E4B44: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802E4B48: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x802E4B4C: swc1        $f18, 0xDBC($s1)
    MEM_W(0XDBC, ctx->r17) = ctx->f18.u32l;
    // 0x802E4B50: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802E4B54: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802E4B58: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x802E4B5C: bgez        $t3, L_802E4B70
    if (SIGNED(ctx->r11) >= 0) {
        // 0x802E4B60: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_802E4B70;
    }
    // 0x802E4B60: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802E4B64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802E4B68: nop

    // 0x802E4B6C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_802E4B70:
    // 0x802E4B70: swc1        $f4, 0xDC0($s1)
    MEM_W(0XDC0, ctx->r17) = ctx->f4.u32l;
    // 0x802E4B74: swc1        $f8, 0xDD0($s1)
    MEM_W(0XDD0, ctx->r17) = ctx->f8.u32l;
    // 0x802E4B78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802E4B7C:
    // 0x802E4B7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802E4B80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802E4B84: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802E4B88: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802E4B8C: jr          $ra
    // 0x802E4B90: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x802E4B90: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void D_80214178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80214178: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x8021417C: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x80214180: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x80214184: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x80214188: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x8021418C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80214190: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80214194: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x80214198: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x8021419C: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x802141A0: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x802141A4: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x802141A8: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x802141AC: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x802141B0: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x802141B4: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x802141B8: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x802141BC: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x802141C0: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x802141C4: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x802141C8: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x802141CC: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x802141D0: sw          $a1, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r5;
    // 0x802141D4: sw          $a2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r6;
    // 0x802141D8: sw          $a3, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r7;
    // 0x802141DC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x802141E0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x802141E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802141E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802141EC: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x802141F0: lwc1        $f0, 0x174($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802141F4: lwc1        $f4, 0x180($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802141F8: bne         $v0, $zero, L_80214218
    if (ctx->r2 != 0) {
        // 0x802141FC: addiu       $a0, $sp, 0x174
        ctx->r4 = ADD32(ctx->r29, 0X174);
            goto L_80214218;
    }
    // 0x802141FC: addiu       $a0, $sp, 0x174
    ctx->r4 = ADD32(ctx->r29, 0X174);
    // 0x80214200: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80214204: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80214208: jal         0x80231A24
    // 0x8021420C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021420C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80214210: b           L_80214C48
    // 0x80214214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214C48;
    // 0x80214214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214218:
    // 0x80214218: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8021421C: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x80214220: addiu       $a1, $sp, 0x178
    ctx->r5 = ADD32(ctx->r29, 0X178);
    // 0x80214224: addiu       $a2, $sp, 0x180
    ctx->r6 = ADD32(ctx->r29, 0X180);
    // 0x80214228: bc1f        L_80214298
    if (!c1cs) {
        // 0x8021422C: addiu       $a3, $sp, 0x184
        ctx->r7 = ADD32(ctx->r29, 0X184);
            goto L_80214298;
    }
    // 0x8021422C: addiu       $a3, $sp, 0x184
    ctx->r7 = ADD32(ctx->r29, 0X184);
    // 0x80214230: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x80214234: lwc1        $f8, 0x17C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x80214238: lwc1        $f10, 0x188($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X188);
    // 0x8021423C: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x80214240: nop

    // 0x80214244: bc1fl       L_8021429C
    if (!c1cs) {
        // 0x80214248: lwc1        $f4, 0x1C($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_8021429C;
    }
    goto skip_0;
    // 0x80214248: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    skip_0:
    // 0x8021424C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80214250: nop

    // 0x80214254: bc1fl       L_8021429C
    if (!c1cs) {
        // 0x80214258: lwc1        $f4, 0x1C($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_8021429C;
    }
    goto skip_1;
    // 0x80214258: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    skip_1:
    // 0x8021425C: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x80214260: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80214264: lwc1        $f8, 0x188($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X188);
    // 0x80214268: c.eq.s      $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f10.fl == ctx->f30.fl;
    // 0x8021426C: nop

    // 0x80214270: bc1t        L_8021428C
    if (c1cs) {
        // 0x80214274: nop
    
            goto L_8021428C;
    }
    // 0x80214274: nop

    // 0x80214278: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021427C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80214280: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80214284: b           L_80214298
    // 0x80214288: swc1        $f6, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f6.u32l;
        goto L_80214298;
    // 0x80214288: swc1        $f6, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f6.u32l;
L_8021428C:
    // 0x8021428C: lwc1        $f28, 0x0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80214290: add.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f28.fl;
    // 0x80214294: swc1        $f10, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f10.u32l;
L_80214298:
    // 0x80214298: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
L_8021429C:
    // 0x8021429C: lwc1        $f8, 0x17C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x802142A0: lwc1        $f12, 0x178($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802142A4: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
    // 0x802142A8: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802142AC: lwc1        $f4, 0x188($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802142B0: lwc1        $f14, 0x180($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802142B4: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    // 0x802142B8: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802142BC: sub.s       $f24, $f4, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802142C0: lwc1        $f16, 0x184($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802142C4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x802142C8: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802142CC: lwc1        $f26, 0x174($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802142D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802142D4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x802142D8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802142DC: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x802142E0: lwc1        $f28, 0x0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802142E4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802142E8: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802142EC: sw          $v0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r2;
    // 0x802142F0: swc1        $f12, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f12.u32l;
    // 0x802142F4: swc1        $f14, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f14.u32l;
    // 0x802142F8: sub.s       $f22, $f16, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x802142FC: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    // 0x80214300: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80214304: jal         0x80218600
    // 0x80214308: sub.s       $f20, $f14, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f14.fl - ctx->f26.fl;
    static_3_80218600(rdram, ctx);
        goto after_1;
    // 0x80214308: sub.s       $f20, $f14, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f14.fl - ctx->f26.fl;
    after_1:
    // 0x8021430C: lw          $s0, 0x164($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X164);
    // 0x80214310: lwc1        $f6, 0x174($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X174);
    // 0x80214314: lwc1        $f12, 0xC8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80214318: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021431C: lwc1        $f14, 0xC4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80214320: lwc1        $f16, 0xC0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80214324: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80214328: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8021432C: bc1fl       L_80214348
    if (!c1cs) {
        // 0x80214330: lwc1        $f10, 0x180($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
            goto L_80214348;
    }
    goto skip_2;
    // 0x80214330: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
    skip_2:
    // 0x80214334: mul.s       $f4, $f28, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f10.fl);
    // 0x80214338: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021433C: swc1        $f8, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f8.u32l;
    // 0x80214340: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214344: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
L_80214348:
    // 0x80214348: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8021434C: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x80214350: nop

    // 0x80214354: bc1fl       L_8021436C
    if (!c1cs) {
        // 0x80214358: lwc1        $f0, 0x10($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
            goto L_8021436C;
    }
    goto skip_3;
    // 0x80214358: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    skip_3:
    // 0x8021435C: mul.s       $f4, $f28, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f6.fl);
    // 0x80214360: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80214364: swc1        $f8, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f8.u32l;
    // 0x80214368: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
L_8021436C:
    // 0x8021436C: lwc1        $f6, 0x178($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X178);
    // 0x80214370: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80214374: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80214378: nop

    // 0x8021437C: bc1fl       L_80214398
    if (!c1cs) {
        // 0x80214380: lwc1        $f10, 0x184($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
            goto L_80214398;
    }
    goto skip_4;
    // 0x80214380: lwc1        $f10, 0x184($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
    skip_4:
    // 0x80214384: mul.s       $f4, $f28, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f10.fl);
    // 0x80214388: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021438C: swc1        $f8, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f8.u32l;
    // 0x80214390: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80214394: lwc1        $f10, 0x184($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X184);
L_80214398:
    // 0x80214398: lwc1        $f6, 0x10C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x8021439C: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x802143A0: nop

    // 0x802143A4: bc1fl       L_802143BC
    if (!c1cs) {
        // 0x802143A8: lwc1        $f0, 0x174($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
            goto L_802143BC;
    }
    goto skip_5;
    // 0x802143A8: lwc1        $f0, 0x174($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
    skip_5:
    // 0x802143AC: mul.s       $f4, $f28, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f6.fl);
    // 0x802143B0: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802143B4: swc1        $f8, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f8.u32l;
    // 0x802143B8: lwc1        $f0, 0x174($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
L_802143BC:
    // 0x802143BC: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802143C0: c.eq.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl == ctx->f0.fl;
    // 0x802143C4: nop

    // 0x802143C8: bc1tl       L_80214404
    if (c1cs) {
        // 0x802143CC: c.eq.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
            goto L_80214404;
    }
    goto skip_6;
    // 0x802143CC: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    skip_6:
    // 0x802143D0: c.eq.s      $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.fl == ctx->f30.fl;
    // 0x802143D4: nop

    // 0x802143D8: bc1tl       L_80214404
    if (c1cs) {
        // 0x802143DC: c.eq.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
            goto L_80214404;
    }
    goto skip_7;
    // 0x802143DC: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    skip_7:
    // 0x802143E0: sub.s       $f10, $f0, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f26.fl;
    // 0x802143E4: lwc1        $f6, 0x17C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x802143E8: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802143EC: div.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802143F0: mul.s       $f8, $f24, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f4.fl);
    // 0x802143F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802143F8: b           L_80214438
    // 0x802143FC: swc1        $f10, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f10.u32l;
        goto L_80214438;
    // 0x802143FC: swc1        $f10, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f10.u32l;
    // 0x80214400: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
L_80214404:
    // 0x80214404: nop

    // 0x80214408: bc1tl       L_8021443C
    if (c1cs) {
        // 0x8021440C: lwc1        $f8, 0x180($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
            goto L_8021443C;
    }
    goto skip_8;
    // 0x8021440C: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
    skip_8:
    // 0x80214410: c.eq.s      $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f22.fl == ctx->f30.fl;
    // 0x80214414: nop

    // 0x80214418: bc1tl       L_8021443C
    if (c1cs) {
        // 0x8021441C: lwc1        $f8, 0x180($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
            goto L_8021443C;
    }
    goto skip_9;
    // 0x8021441C: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
    skip_9:
    // 0x80214420: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80214424: lwc1        $f4, 0x17C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x80214428: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8021442C: mul.s       $f10, $f24, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f8.fl);
    // 0x80214430: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80214434: swc1        $f6, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f6.u32l;
L_80214438:
    // 0x80214438: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
L_8021443C:
    // 0x8021443C: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x80214440: c.eq.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl == ctx->f8.fl;
    // 0x80214444: nop

    // 0x80214448: bc1tl       L_80214480
    if (c1cs) {
        // 0x8021444C: c.eq.s      $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
            goto L_80214480;
    }
    goto skip_10;
    // 0x8021444C: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    skip_10:
    // 0x80214450: c.eq.s      $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.fl == ctx->f30.fl;
    // 0x80214454: nop

    // 0x80214458: bc1tl       L_80214480
    if (c1cs) {
        // 0x8021445C: c.eq.s      $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
            goto L_80214480;
    }
    goto skip_11;
    // 0x8021445C: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    skip_11:
    // 0x80214460: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x80214464: lwc1        $f4, 0x188($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X188);
    // 0x80214468: div.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8021446C: mul.s       $f8, $f24, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x80214470: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80214474: b           L_802144B4
    // 0x80214478: swc1        $f10, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f10.u32l;
        goto L_802144B4;
    // 0x80214478: swc1        $f10, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f10.u32l;
    // 0x8021447C: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
L_80214480:
    // 0x80214480: nop

    // 0x80214484: bc1tl       L_802144B8
    if (c1cs) {
        // 0x80214488: lwc1        $f10, 0x180($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
            goto L_802144B8;
    }
    goto skip_12;
    // 0x80214488: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
    skip_12:
    // 0x8021448C: c.eq.s      $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f22.fl == ctx->f30.fl;
    // 0x80214490: nop

    // 0x80214494: bc1tl       L_802144B8
    if (c1cs) {
        // 0x80214498: lwc1        $f10, 0x180($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
            goto L_802144B8;
    }
    goto skip_13;
    // 0x80214498: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
    skip_13:
    // 0x8021449C: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x802144A0: lwc1        $f4, 0x188($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802144A4: div.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f22.fl);
    // 0x802144A8: mul.s       $f6, $f24, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x802144AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802144B0: swc1        $f8, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f8.u32l;
L_802144B4:
    // 0x802144B4: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
L_802144B8:
    // 0x802144B8: lwc1        $f4, 0x184($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802144BC: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x802144C0: nop

    // 0x802144C4: bc1fl       L_802145A8
    if (!c1cs) {
        // 0x802144C8: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802145A8;
    }
    goto skip_14;
    // 0x802144C8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_14:
    // 0x802144CC: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x802144D0: lwc1        $f6, 0x17C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x802144D4: lwc1        $f8, 0x188($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802144D8: bc1fl       L_802145A8
    if (!c1cs) {
        // 0x802144DC: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802145A8;
    }
    goto skip_15;
    // 0x802144DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_15:
    // 0x802144E0: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x802144E4: nop

    // 0x802144E8: bc1fl       L_802145A8
    if (!c1cs) {
        // 0x802144EC: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802145A8;
    }
    goto skip_16;
    // 0x802144EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_16:
    // 0x802144F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802144F4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802144F8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802144FC: jal         0x80212E24
    // 0x80214500: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80212E24(rdram, ctx);
        goto after_2;
    // 0x80214500: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80214504: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80214508: bne         $v0, $at, L_80214530
    if (ctx->r2 != ctx->r1) {
        // 0x8021450C: lui         $t3, 0x0
        ctx->r11 = S32(0X0 << 16);
            goto L_80214530;
    }
    // 0x8021450C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80214510: lw          $t0, 0x18C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18C);
    // 0x80214514: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80214518: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x8021451C: lw          $t1, 0x190($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X190);
    // 0x80214520: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x80214524: lw          $t2, 0x194($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X194);
    // 0x80214528: b           L_80214C48
    // 0x8021452C: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
        goto L_80214C48;
    // 0x8021452C: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
L_80214530:
    // 0x80214530: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80214534: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80214538: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8021453C: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x80214540: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80214544: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80214548: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021454C: swc1        $f30, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f30.u32l;
    // 0x80214550: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80214554: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80214558: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021455C: swc1        $f30, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f30.u32l;
    // 0x80214560: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80214564: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80214568: swc1        $f30, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f30.u32l;
    // 0x8021456C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80214570: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x80214574: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x80214578: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8021457C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80214580: lw          $t1, 0x190($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X190);
    // 0x80214584: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80214588: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8021458C: lw          $t3, 0x194($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X194);
    // 0x80214590: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80214594: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80214598: lw          $s0, 0x164($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X164);
    // 0x8021459C: lwc1        $f0, 0x174($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802145A0: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802145A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_802145A8:
    // 0x802145A8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802145AC: addiu       $t4, $sp, 0x154
    ctx->r12 = ADD32(ctx->r29, 0X154);
    // 0x802145B0: addiu       $t5, $sp, 0x150
    ctx->r13 = ADD32(ctx->r29, 0X150);
    // 0x802145B4: addiu       $t6, $sp, 0x14C
    ctx->r14 = ADD32(ctx->r29, 0X14C);
    // 0x802145B8: addiu       $t7, $sp, 0x13E
    ctx->r15 = ADD32(ctx->r29, 0X13E);
    // 0x802145BC: addiu       $t8, $sp, 0x13A
    ctx->r24 = ADD32(ctx->r29, 0X13A);
    // 0x802145C0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802145C4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802145C8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802145CC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802145D0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802145D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802145D8: lw          $a3, 0x17C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X17C);
    // 0x802145DC: jal         0x802160EC
    // 0x802145E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    static_3_802160EC(rdram, ctx);
        goto after_3;
    // 0x802145E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x802145E4: addiu       $t9, $sp, 0x148
    ctx->r25 = ADD32(ctx->r29, 0X148);
    // 0x802145E8: addiu       $t0, $sp, 0x144
    ctx->r8 = ADD32(ctx->r29, 0X144);
    // 0x802145EC: addiu       $t1, $sp, 0x140
    ctx->r9 = ADD32(ctx->r29, 0X140);
    // 0x802145F0: addiu       $t2, $sp, 0x13C
    ctx->r10 = ADD32(ctx->r29, 0X13C);
    // 0x802145F4: addiu       $t3, $sp, 0x138
    ctx->r11 = ADD32(ctx->r29, 0X138);
    // 0x802145F8: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x802145FC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80214600: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80214604: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80214608: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021460C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80214610: lw          $a0, 0x164($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X164);
    // 0x80214614: lw          $a1, 0x180($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X180);
    // 0x80214618: lw          $a2, 0x184($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X184);
    // 0x8021461C: lw          $a3, 0x188($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X188);
    // 0x80214620: jal         0x802160EC
    // 0x80214624: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    static_3_802160EC(rdram, ctx);
        goto after_4;
    // 0x80214624: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_4:
    // 0x80214628: bne         $s0, $zero, L_8021464C
    if (ctx->r16 != 0) {
        // 0x8021462C: andi        $t4, $v0, 0xFF
        ctx->r12 = ctx->r2 & 0XFF;
            goto L_8021464C;
    }
    // 0x8021462C: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x80214630: bne         $t4, $zero, L_8021464C
    if (ctx->r12 != 0) {
        // 0x80214634: lw          $t5, 0x18C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X18C);
            goto L_8021464C;
    }
    // 0x80214634: lw          $t5, 0x18C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18C);
    // 0x80214638: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x8021463C: lw          $t6, 0x190($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X190);
    // 0x80214640: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80214644: b           L_80214C48
    // 0x80214648: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
        goto L_80214C48;
    // 0x80214648: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
L_8021464C:
    // 0x8021464C: lhu         $t7, 0x13C($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X13C);
    // 0x80214650: lhu         $t8, 0x13E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X13E);
    // 0x80214654: bnel        $t7, $t8, L_80214688
    if (ctx->r15 != ctx->r24) {
        // 0x80214658: sb          $zero, 0xB3($sp)
        MEM_B(0XB3, ctx->r29) = 0;
            goto L_80214688;
    }
    goto skip_17;
    // 0x80214658: sb          $zero, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = 0;
    skip_17:
    // 0x8021465C: lhu         $t0, 0x138($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X138);
    // 0x80214660: lhu         $t1, 0x13A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X13A);
    // 0x80214664: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80214668: sb          $t9, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r25;
    // 0x8021466C: bne         $t0, $t1, L_8021467C
    if (ctx->r8 != ctx->r9) {
        // 0x80214670: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_8021467C;
    }
    // 0x80214670: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80214674: b           L_8021468C
    // 0x80214678: sb          $t2, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r10;
        goto L_8021468C;
    // 0x80214678: sb          $t2, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r10;
L_8021467C:
    // 0x8021467C: b           L_8021468C
    // 0x80214680: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
        goto L_8021468C;
    // 0x80214680: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
    // 0x80214684: sb          $zero, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = 0;
L_80214688:
    // 0x80214688: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
L_8021468C:
    // 0x8021468C: lbu         $t3, 0xB3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XB3);
    // 0x80214690: lwc1        $f14, 0x174($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X174);
    // 0x80214694: lwc1        $f4, 0x180($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X180);
    // 0x80214698: beq         $t3, $zero, L_802146F0
    if (ctx->r11 == 0) {
        // 0x8021469C: lwc1        $f8, 0x184($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X184);
            goto L_802146F0;
    }
    // 0x8021469C: lwc1        $f8, 0x184($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802146A0: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x802146A4: lwc1        $f4, 0x174($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802146A8: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802146AC: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x802146B0: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802146B4: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802146B8: lwc1        $f6, 0x178($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802146BC: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802146C0: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x802146C4: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802146C8: sw          $v0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r2;
    // 0x802146CC: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x802146D0: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802146D4: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802146D8: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802146DC: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x802146E0: nop

    // 0x802146E4: sw          $t8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r24;
    // 0x802146E8: b           L_802147F0
    // 0x802146EC: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
        goto L_802147F0;
    // 0x802146EC: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
L_802146F0:
    // 0x802146F0: c.lt.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl < ctx->f14.fl;
    // 0x802146F4: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802146F8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x802146FC: lw          $t9, 0x164($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X164);
    // 0x80214700: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x80214704: bc1f        L_80214714
    if (!c1cs) {
        // 0x80214708: mov.s       $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
            goto L_80214714;
    }
    // 0x80214708: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    // 0x8021470C: b           L_80214718
    // 0x80214710: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
        goto L_80214718;
    // 0x80214710: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
L_80214714:
    // 0x80214714: lwc1        $f12, 0x180($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X180);
L_80214718:
    // 0x80214718: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x8021471C: nop

    // 0x80214720: bc1fl       L_80214734
    if (!c1cs) {
        // 0x80214724: lwc1        $f16, 0x184($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X184);
            goto L_80214734;
    }
    goto skip_18;
    // 0x80214724: lwc1        $f16, 0x184($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X184);
    skip_18:
    // 0x80214728: b           L_80214734
    // 0x8021472C: mov.s       $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = ctx->f8.fl;
        goto L_80214734;
    // 0x8021472C: mov.s       $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = ctx->f8.fl;
    // 0x80214730: lwc1        $f16, 0x184($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X184);
L_80214734:
    // 0x80214734: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80214738: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8021473C: lw          $t7, 0x164($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X164);
    // 0x80214740: sub.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x80214744: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80214748: sub.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021474C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80214750: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80214754: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80214758: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x8021475C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80214760: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80214764: nop

    // 0x80214768: sw          $t2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r10;
    // 0x8021476C: lwc1        $f2, 0x4($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80214770: sub.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x80214774: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80214778: sub.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x8021477C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80214780: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80214784: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x80214788: nop

    // 0x8021478C: sw          $t5, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r13;
    // 0x80214790: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80214794: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x80214798: bgez        $v0, L_802147A4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8021479C: sw          $t4, 0x124($sp)
        MEM_W(0X124, ctx->r29) = ctx->r12;
            goto L_802147A4;
    }
    // 0x8021479C: sw          $t4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r12;
    // 0x802147A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802147A4:
    // 0x802147A4: lbu         $v1, 0x18($t7)
    ctx->r3 = MEM_BU(ctx->r15, 0X18);
    // 0x802147A8: lw          $t8, 0x12C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X12C);
    // 0x802147AC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802147B0: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802147B4: beql        $at, $zero, L_802147C4
    if (ctx->r1 == 0) {
        // 0x802147B8: lw          $t0, 0x128($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X128);
            goto L_802147C4;
    }
    goto skip_19;
    // 0x802147B8: lw          $t0, 0x128($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X128);
    skip_19:
    // 0x802147BC: sw          $v1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r3;
    // 0x802147C0: lw          $t0, 0x128($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X128);
L_802147C4:
    // 0x802147C4: bgezl       $t0, L_802147D4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802147C8: lw          $t1, 0x164($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X164);
            goto L_802147D4;
    }
    goto skip_20;
    // 0x802147C8: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    skip_20:
    // 0x802147CC: sw          $zero, 0x128($sp)
    MEM_W(0X128, ctx->r29) = 0;
    // 0x802147D0: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
L_802147D4:
    // 0x802147D4: lw          $t2, 0x124($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X124);
    // 0x802147D8: lbu         $v1, 0x19($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X19);
    // 0x802147DC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802147E0: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802147E4: beql        $at, $zero, L_802147F4
    if (ctx->r1 == 0) {
        // 0x802147E8: lw          $t9, 0x12C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X12C);
            goto L_802147F4;
    }
    goto skip_21;
    // 0x802147E8: lw          $t9, 0x12C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X12C);
    skip_21:
    // 0x802147EC: sw          $v1, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r3;
L_802147F0:
    // 0x802147F0: lw          $t9, 0x12C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X12C);
L_802147F4:
    // 0x802147F4: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x802147F8: sh          $v0, 0x16E($sp)
    MEM_H(0X16E, ctx->r29) = ctx->r2;
    // 0x802147FC: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80214800: bne         $at, $zero, L_80214C10
    if (ctx->r1 != 0) {
        // 0x80214804: lhu         $t5, 0x12A($sp)
        ctx->r13 = MEM_HU(ctx->r29, 0X12A);
            goto L_80214C10;
    }
    // 0x80214804: lhu         $t5, 0x12A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X12A);
    // 0x80214808: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x8021480C: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80214810: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80214814: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x80214818: sw          $t5, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r13;
    // 0x8021481C: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x80214820: addiu       $s6, $sp, 0x108
    ctx->r22 = ADD32(ctx->r29, 0X108);
L_80214824:
    // 0x80214824: lw          $t4, 0x124($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X124);
    // 0x80214828: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x8021482C: lw          $t6, 0x128($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X128);
    // 0x80214830: lhu         $t8, 0x16E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X16E);
    // 0x80214834: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80214838: bne         $at, $zero, L_80214BF4
    if (ctx->r1 != 0) {
        // 0x8021483C: sh          $t6, 0x16C($sp)
        MEM_H(0X16C, ctx->r29) = ctx->r14;
            goto L_80214BF4;
    }
    // 0x8021483C: sh          $t6, 0x16C($sp)
    MEM_H(0X16C, ctx->r29) = ctx->r14;
    // 0x80214840: andi        $v1, $t6, 0xFFFF
    ctx->r3 = ctx->r14 & 0XFFFF;
    // 0x80214844: sw          $t8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r24;
L_80214848:
    // 0x80214848: lw          $t0, 0x164($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X164);
    // 0x8021484C: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x80214850: lbu         $t1, 0x18($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X18);
    // 0x80214854: lw          $t5, 0x28($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X28);
    // 0x80214858: multu       $v1, $t1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021485C: mflo        $t2
    ctx->r10 = lo;
    // 0x80214860: addu        $v0, $t2, $t9
    ctx->r2 = ADD32(ctx->r10, ctx->r25);
    // 0x80214864: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x80214868: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8021486C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80214870: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80214874: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80214878: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8021487C: addu        $s2, $t5, $t4
    ctx->r18 = ADD32(ctx->r13, ctx->r12);
    // 0x80214880: beql        $s2, $zero, L_80214BDC
    if (ctx->r18 == 0) {
        // 0x80214884: lhu         $t6, 0x16C($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X16C);
            goto L_80214BDC;
    }
    goto skip_22;
    // 0x80214884: lhu         $t6, 0x16C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16C);
    skip_22:
    // 0x80214888: lw          $t7, 0x40($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X40);
    // 0x8021488C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80214890: lwc1        $f6, 0x174($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X174);
    // 0x80214894: beql        $t7, $zero, L_80214BDC
    if (ctx->r15 == 0) {
        // 0x80214898: lhu         $t6, 0x16C($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X16C);
            goto L_80214BDC;
    }
    goto skip_23;
    // 0x80214898: lhu         $t6, 0x16C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16C);
    skip_23:
    // 0x8021489C: lwc1        $f4, 0x17C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x802148A0: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
    // 0x802148A4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802148A8: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x802148AC: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802148B0: lwc1        $f10, 0x178($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X178);
    // 0x802148B4: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x802148B8: mul.s       $f2, $f20, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x802148BC: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802148C0: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
    // 0x802148C4: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x802148C8: lwc1        $f10, 0x188($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X188);
    // 0x802148CC: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x802148D0: mul.s       $f14, $f20, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x802148D4: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x802148D8: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x802148DC: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x802148E0: lwc1        $f12, 0x34($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X34);
    // 0x802148E4: lbu         $t6, 0xB3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XB3);
    // 0x802148E8: sub.s       $f28, $f0, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802148EC: add.s       $f30, $f0, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x802148F0: add.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x802148F4: bne         $t6, $zero, L_80214948
    if (ctx->r14 != 0) {
        // 0x802148F8: sub.s       $f18, $f12, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_80214948;
    }
    // 0x802148F8: sub.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x802148FC: addiu       $t8, $sp, 0xE8
    ctx->r24 = ADD32(ctx->r29, 0XE8);
    // 0x80214900: addiu       $t1, $sp, 0xE0
    ctx->r9 = ADD32(ctx->r29, 0XE0);
    // 0x80214904: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80214908: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8021490C: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x80214910: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x80214914: addiu       $a2, $sp, 0xE4
    ctx->r6 = ADD32(ctx->r29, 0XE4);
    // 0x80214918: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    // 0x8021491C: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x80214920: swc1        $f30, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f30.u32l;
    // 0x80214924: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80214928: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x8021492C: swc1        $f16, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
    // 0x80214930: jal         0x80218884
    // 0x80214934: swc1        $f18, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f18.u32l;
    static_3_80218884(rdram, ctx);
        goto after_5;
    // 0x80214934: swc1        $f18, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80214938: lwc1        $f16, 0xF8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8021493C: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80214940: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x80214944: lwc1        $f12, 0x34($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X34);
L_80214948:
    // 0x80214948: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x8021494C: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80214950: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80214954: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80214958: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x8021495C: lbu         $t2, 0xB2($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XB2);
    // 0x80214960: sub.s       $f20, $f6, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80214964: sub.s       $f22, $f10, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80214968: sub.s       $f24, $f4, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8021496C: bc1f        L_80214998
    if (!c1cs) {
        // 0x80214970: sub.s       $f26, $f8, $f12
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f12.fl;
            goto L_80214998;
    }
    // 0x80214970: sub.s       $f26, $f8, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x80214974: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x80214978: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8021497C: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80214980: bc1f        L_80214998
    if (!c1cs) {
        // 0x80214984: nop
    
            goto L_80214998;
    }
    // 0x80214984: nop

    // 0x80214988: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x8021498C: nop

    // 0x80214990: bc1tl       L_80214BDC
    if (c1cs) {
        // 0x80214994: lhu         $t6, 0x16C($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X16C);
            goto L_80214BDC;
    }
    goto skip_24;
    // 0x80214994: lhu         $t6, 0x16C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16C);
    skip_24:
L_80214998:
    // 0x80214998: bne         $t2, $zero, L_802149EC
    if (ctx->r10 != 0) {
        // 0x8021499C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802149EC;
    }
    // 0x8021499C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802149A0: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    // 0x802149A4: lwc1        $f8, 0x150($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802149A8: lwc1        $f6, 0x148($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X148);
    // 0x802149AC: lwc1        $f10, 0x144($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X144);
    // 0x802149B0: lwc1        $f12, 0xF4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x802149B4: lwc1        $f14, 0xEC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x802149B8: lw          $a2, 0xF0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XF0);
    // 0x802149BC: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x802149C0: swc1        $f28, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f28.u32l;
    // 0x802149C4: swc1        $f30, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f30.u32l;
    // 0x802149C8: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x802149CC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x802149D0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802149D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802149D8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x802149DC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x802149E0: jal         0x80218EAC
    // 0x802149E4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    static_3_80218EAC(rdram, ctx);
        goto after_6;
    // 0x802149E4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x802149E8: sh          $v0, 0x138($sp)
    MEM_H(0X138, ctx->r29) = ctx->r2;
L_802149EC:
    // 0x802149EC: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x802149F0: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
    // 0x802149F4: blezl       $v1, L_80214BDC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802149F8: lhu         $t6, 0x16C($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X16C);
            goto L_80214BDC;
    }
    goto skip_25;
    // 0x802149F8: lhu         $t6, 0x16C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16C);
    skip_25:
L_802149FC:
    // 0x802149FC: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80214A00: sll         $t3, $s3, 5
    ctx->r11 = S32(ctx->r19 << 5);
    // 0x80214A04: lhu         $t0, 0x138($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X138);
    // 0x80214A08: addu        $s0, $t9, $t3
    ctx->r16 = ADD32(ctx->r25, ctx->r11);
    // 0x80214A0C: lhu         $t5, 0x18($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X18);
    // 0x80214A10: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80214A14: and         $t4, $t0, $t5
    ctx->r12 = ctx->r8 & ctx->r13;
    // 0x80214A18: beql        $t4, $zero, L_80214BC8
    if (ctx->r12 == 0) {
        // 0x80214A1C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80214BC8;
    }
    goto skip_26;
    // 0x80214A1C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_26:
    // 0x80214A20: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80214A24: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x80214A28: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80214A2C: lw          $t6, 0x1C($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X1C);
    // 0x80214A30: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80214A34: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80214A38: addu        $t2, $t6, $t1
    ctx->r10 = ADD32(ctx->r14, ctx->r9);
    // 0x80214A3C: lw          $s1, 0x0($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X0);
    // 0x80214A40: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x80214A44: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80214A48: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214A4C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80214A50: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80214A54: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80214A58: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80214A5C: lw          $a2, 0xE4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE4);
    // 0x80214A60: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80214A64: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80214A68: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80214A6C: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80214A70: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80214A74: jal         0x80219210
    // 0x80214A78: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    static_3_80219210(rdram, ctx);
        goto after_7;
    // 0x80214A78: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x80214A7C: beql        $v0, $zero, L_80214BC0
    if (ctx->r2 == 0) {
        // 0x80214A80: lw          $v0, 0x40($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X40);
            goto L_80214BC0;
    }
    goto skip_27;
    // 0x80214A80: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    skip_27:
    // 0x80214A84: lhu         $t9, 0x4A($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X4A);
    // 0x80214A88: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80214A8C: sll         $t3, $t9, 12
    ctx->r11 = S32(ctx->r25 << 12);
    // 0x80214A90: or          $t0, $t3, $s3
    ctx->r8 = ctx->r11 | ctx->r19;
    // 0x80214A94: sw          $t0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r8;
    // 0x80214A98: lbu         $t5, 0x11($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X11);
    // 0x80214A9C: lw          $a2, 0xE4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE4);
    // 0x80214AA0: andi        $t4, $t5, 0x6
    ctx->r12 = ctx->r13 & 0X6;
    // 0x80214AA4: bnel        $t4, $zero, L_80214B94
    if (ctx->r12 != 0) {
        // 0x80214AA8: lwc1        $f6, 0xE0($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
            goto L_80214B94;
    }
    goto skip_28;
    // 0x80214AA8: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    skip_28:
    // 0x80214AAC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80214AB0: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80214AB4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80214AB8: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80214ABC: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x80214AC0: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x80214AC4: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x80214AC8: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80214ACC: lwc1        $f8, 0x108($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80214AD0: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80214AD4: addu        $t5, $t9, $t0
    ctx->r13 = ADD32(ctx->r25, ctx->r8);
    // 0x80214AD8: swc1        $f8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f8.u32l;
    // 0x80214ADC: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80214AE0: lwc1        $f10, 0x188($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X188);
    // 0x80214AE4: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x80214AE8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80214AEC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80214AF0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80214AF4: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214AF8: lwc1        $f8, 0x30($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X30);
    // 0x80214AFC: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x80214B00: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80214B04: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80214B08: multu       $t4, $s7
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80214B0C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80214B10: lw          $a3, 0x180($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X180);
    // 0x80214B14: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80214B18: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80214B1C: lwc1        $f4, 0x34($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X34);
    // 0x80214B20: lw          $a2, 0x17C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X17C);
    // 0x80214B24: lwc1        $f14, 0x178($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X178);
    // 0x80214B28: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80214B2C: lwc1        $f12, 0x174($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X174);
    // 0x80214B30: mflo        $t6
    ctx->r14 = lo;
    // 0x80214B34: addu        $t1, $t6, $t8
    ctx->r9 = ADD32(ctx->r14, ctx->r24);
    // 0x80214B38: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80214B3C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80214B40: lwc1        $f10, 0x38($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X38);
    // 0x80214B44: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80214B48: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80214B4C: jal         0x8021A370
    // 0x80214B50: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    static_3_8021A370(rdram, ctx);
        goto after_8;
    // 0x80214B50: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80214B54: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x80214B58: lhu         $t3, 0x18($fp)
    ctx->r11 = MEM_HU(ctx->r30, 0X18);
    // 0x80214B5C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80214B60: addiu       $a0, $t7, 0x1
    ctx->r4 = ADD32(ctx->r15, 0X1);
    // 0x80214B64: slt         $at, $a0, $t3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80214B68: bne         $at, $zero, L_80214BBC
    if (ctx->r1 != 0) {
        // 0x80214B6C: sw          $a0, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r4;
            goto L_80214BBC;
    }
    // 0x80214B6C: sw          $a0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r4;
    // 0x80214B70: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80214B74: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80214B78: jal         0x80231C58
    // 0x80214B7C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_9;
    // 0x80214B7C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_9:
    // 0x80214B80: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80214B84: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80214B88: b           L_80214BBC
    // 0x80214B8C: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
        goto L_80214BBC;
    // 0x80214B8C: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x80214B90: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
L_80214B94:
    // 0x80214B94: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x80214B98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80214B9C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80214BA0: lw          $t5, 0x40($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X40);
    // 0x80214BA4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80214BA8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80214BAC: lwc1        $f10, 0x2C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80214BB0: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80214BB4: jal         0x802175F4
    // 0x80214BB8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    static_3_802175F4(rdram, ctx);
        goto after_10;
    // 0x80214BB8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_10:
L_80214BBC:
    // 0x80214BBC: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
L_80214BC0:
    // 0x80214BC0: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
    // 0x80214BC4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80214BC8:
    // 0x80214BC8: andi        $t4, $s3, 0xFFFF
    ctx->r12 = ctx->r19 & 0XFFFF;
    // 0x80214BCC: slt         $at, $t4, $v1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80214BD0: bne         $at, $zero, L_802149FC
    if (ctx->r1 != 0) {
        // 0x80214BD4: or          $s3, $t4, $zero
        ctx->r19 = ctx->r12 | 0;
            goto L_802149FC;
    }
    // 0x80214BD4: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
    // 0x80214BD8: lhu         $t6, 0x16C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16C);
L_80214BDC:
    // 0x80214BDC: lw          $t1, 0x124($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X124);
    // 0x80214BE0: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80214BE4: andi        $v1, $t8, 0xFFFF
    ctx->r3 = ctx->r24 & 0XFFFF;
    // 0x80214BE8: slt         $at, $t1, $v1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80214BEC: beq         $at, $zero, L_80214848
    if (ctx->r1 == 0) {
        // 0x80214BF0: sh          $t8, 0x16C($sp)
        MEM_H(0X16C, ctx->r29) = ctx->r24;
            goto L_80214848;
    }
    // 0x80214BF0: sh          $t8, 0x16C($sp)
    MEM_H(0X16C, ctx->r29) = ctx->r24;
L_80214BF4:
    // 0x80214BF4: lhu         $t7, 0x16E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X16E);
    // 0x80214BF8: lw          $t3, 0x12C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X12C);
    // 0x80214BFC: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x80214C00: andi        $t9, $t2, 0xFFFF
    ctx->r25 = ctx->r10 & 0XFFFF;
    // 0x80214C04: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80214C08: beq         $at, $zero, L_80214824
    if (ctx->r1 == 0) {
        // 0x80214C0C: sh          $t2, 0x16E($sp)
        MEM_H(0X16E, ctx->r29) = ctx->r10;
            goto L_80214824;
    }
    // 0x80214C0C: sh          $t2, 0x16E($sp)
    MEM_H(0X16E, ctx->r29) = ctx->r10;
L_80214C10:
    // 0x80214C10: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80214C14: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80214C18: lw          $t5, 0x18C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18C);
    // 0x80214C1C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80214C20: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80214C24: sw          $t0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r8;
    // 0x80214C28: lw          $t6, 0x190($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X190);
    // 0x80214C2C: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80214C30: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x80214C34: lw          $t1, 0x194($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X194);
    // 0x80214C38: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80214C3C: jal         0x80209508
    // 0x80214C40: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    static_3_80209508(rdram, ctx);
        goto after_11;
    // 0x80214C40: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    after_11:
    // 0x80214C44: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
L_80214C48:
    // 0x80214C48: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x80214C4C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x80214C50: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x80214C54: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x80214C58: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x80214C5C: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x80214C60: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x80214C64: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80214C68: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80214C6C: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80214C70: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80214C74: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x80214C78: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x80214C7C: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x80214C80: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x80214C84: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x80214C88: jr          $ra
    // 0x80214C8C: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    return;
    // 0x80214C8C: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
;}
RECOMP_FUNC void D_802EDA78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDAF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EDAFC: bne         $a0, $zero, L_802EDB14
    if (ctx->r4 != 0) {
        // 0x802EDB00: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EDB14;
    }
    // 0x802EDB00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EDB04: jal         0x802C67EC
    // 0x802EDB08: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EDB08: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EDB0C: beq         $v0, $zero, L_802EDB6C
    if (ctx->r2 == 0) {
        // 0x802EDB10: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EDB6C;
    }
    // 0x802EDB10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EDB14:
    // 0x802EDB14: jal         0x8031C47C
    // 0x802EDB18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EDB18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EDB1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EDB20: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802EDB24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EDB28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EDB2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EDB30: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802EDB34: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802EDB38: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802EDB3C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802EDB40: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x802EDB44: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EDB48: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802EDB4C: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802EDB50: sh          $t8, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r24;
    // 0x802EDB54: sh          $t9, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r25;
    // 0x802EDB58: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802EDB5C: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EDB60: jal         0x8031E2D8
    // 0x802EDB64: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031E2D8(rdram, ctx);
        goto after_2;
    // 0x802EDB64: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802EDB68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802EDB6C:
    // 0x802EDB6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EDB70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EDB74: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EDB78: jr          $ra
    // 0x802EDB7C: nop

    return;
    // 0x802EDB7C: nop

;}
RECOMP_FUNC void D_8028CA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CA9C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8028CAA0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8028CAA4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8028CAA8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8028CAAC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8028CAB0: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x8028CAB4: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x8028CAB8: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x8028CABC: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028CAC0: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x8028CAC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028CAC8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8028CACC: jalr        $t9
    // 0x8028CAD0: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8028CAD0: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x8028CAD4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028CAD8: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x8028CADC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8028CAE0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8028CAE4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8028CAE8: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x8028CAEC: jal         0x802C53E4
    // 0x8028CAF0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_1;
    // 0x8028CAF0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8028CAF4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8028CAF8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8028CAFC: jal         0x802C5468
    // 0x8028CB00: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    static_3_802C5468(rdram, ctx);
        goto after_2;
    // 0x8028CB00: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x8028CB04: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028CB08: addiu       $a0, $s0, 0x68C
    ctx->r4 = ADD32(ctx->r16, 0X68C);
    // 0x8028CB0C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8028CB10: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8028CB14: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8028CB18: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x8028CB1C: jal         0x802C53E4
    // 0x8028CB20: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_3;
    // 0x8028CB20: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8028CB24: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8028CB28: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8028CB2C: jal         0x802C5468
    // 0x8028CB30: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    static_3_802C5468(rdram, ctx);
        goto after_4;
    // 0x8028CB30: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_4:
    // 0x8028CB34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028CB38: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    // 0x8028CB3C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8028CB40: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8028CB44: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8028CB48: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x8028CB4C: jal         0x802C53E4
    // 0x8028CB50: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_5;
    // 0x8028CB50: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x8028CB54: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8028CB58: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8028CB5C: jal         0x802C5468
    // 0x8028CB60: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    static_3_802C5468(rdram, ctx);
        goto after_6;
    // 0x8028CB60: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_6:
    // 0x8028CB64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8028CB68: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8028CB6C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x8028CB70: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8028CB74: jr          $ra
    // 0x8028CB78: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8028CB78: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_80244864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244864: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80244868: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024486C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80244870: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80244874: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80244878: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8024487C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80244880: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80244884: jalr        $t9
    // 0x80244888: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80244888: nop

    after_0:
    // 0x8024488C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80244890: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80244894: lui         $t2, 0x440
    ctx->r10 = S32(0X440 << 16);
    // 0x80244898: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x8024489C: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x802448A0: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x802448A4: ori         $t2, $t2, 0x580
    ctx->r10 = ctx->r10 | 0X580;
    // 0x802448A8: lui         $t1, 0xD00
    ctx->r9 = S32(0XD00 << 16);
    // 0x802448AC: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x802448B0: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x802448B4: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x802448B8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x802448BC: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x802448C0: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x802448C4: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x802448C8: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x802448CC: sw          $t5, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r13;
    // 0x802448D0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802448D4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x802448D8: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x802448DC: sw          $t7, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r15;
    // 0x802448E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802448E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802448E8: jr          $ra
    // 0x802448EC: nop

    return;
    // 0x802448EC: nop

;}
RECOMP_FUNC void D_802E8054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E80D4: jr          $ra
    // 0x802E80D8: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    return;
    // 0x802E80D8: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
;}
RECOMP_FUNC void D_8029C620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029C6A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029C6A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029C6A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029C6AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8029C6B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029C6B4: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x8029C6B8: jal         0x802CBA18
    // 0x8029C6BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802CBA18(rdram, ctx);
        goto after_0;
    // 0x8029C6BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8029C6C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029C6C4: jal         0x80223FC4
    // 0x8029C6C8: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_1;
    // 0x8029C6C8: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_1:
    // 0x8029C6CC: bne         $v0, $zero, L_8029C6E4
    if (ctx->r2 != 0) {
        // 0x8029C6D0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8029C6E4;
    }
    // 0x8029C6D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029C6D4: jal         0x80223FC4
    // 0x8029C6D8: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    static_3_80223FC4(rdram, ctx);
        goto after_2;
    // 0x8029C6D8: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_2:
    // 0x8029C6DC: beq         $v0, $zero, L_8029C760
    if (ctx->r2 == 0) {
        // 0x8029C6E0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8029C760;
    }
    // 0x8029C6E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8029C6E4:
    // 0x8029C6E4: lbu         $v0, 0x1B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1B);
    // 0x8029C6E8: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x8029C6EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029C6F0: beq         $v0, $zero, L_8029C718
    if (ctx->r2 == 0) {
        // 0x8029C6F4: addiu       $t9, $zero, 0x6
        ctx->r25 = ADD32(0, 0X6);
            goto L_8029C718;
    }
    // 0x8029C6F4: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8029C6F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029C6FC: beq         $v0, $at, L_8029C730
    if (ctx->r2 == ctx->r1) {
        // 0x8029C700: addiu       $t0, $zero, 0xE
        ctx->r8 = ADD32(0, 0XE);
            goto L_8029C730;
    }
    // 0x8029C700: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x8029C704: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8029C708: beq         $v0, $at, L_8029C750
    if (ctx->r2 == ctx->r1) {
        // 0x8029C70C: nop
    
            goto L_8029C750;
    }
    // 0x8029C70C: nop

    // 0x8029C710: b           L_8029C784
    // 0x8029C714: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
        goto L_8029C784;
    // 0x8029C714: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
L_8029C718:
    // 0x8029C718: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x8029C71C: sb          $t9, 0x86($s0)
    MEM_B(0X86, ctx->r16) = ctx->r25;
    // 0x8029C720: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029C724: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x8029C728: b           L_8029C780
    // 0x8029C72C: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
        goto L_8029C780;
    // 0x8029C72C: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
L_8029C730:
    // 0x8029C730: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029C734: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x8029C738: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x8029C73C: sb          $t2, 0x86($s0)
    MEM_B(0X86, ctx->r16) = ctx->r10;
    // 0x8029C740: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029C744: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x8029C748: b           L_8029C780
    // 0x8029C74C: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
        goto L_8029C780;
    // 0x8029C74C: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
L_8029C750:
    // 0x8029C750: jal         0x802CA428
    // 0x8029C754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA428(rdram, ctx);
        goto after_3;
    // 0x8029C754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8029C758: b           L_8029C784
    // 0x8029C75C: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
        goto L_8029C784;
    // 0x8029C75C: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
L_8029C760:
    // 0x8029C760: jal         0x80223FC4
    // 0x8029C764: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    static_3_80223FC4(rdram, ctx);
        goto after_4;
    // 0x8029C764: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_4:
    // 0x8029C768: beql        $v0, $zero, L_8029C784
    if (ctx->r2 == 0) {
        // 0x8029C76C: lbu         $t3, 0x27($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X27);
            goto L_8029C784;
    }
    goto skip_0;
    // 0x8029C76C: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
    skip_0:
    // 0x8029C770: jal         0x802B18BC
    // 0x8029C774: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_5;
    // 0x8029C774: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_5:
    // 0x8029C778: jal         0x802CA14C
    // 0x8029C77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA14C(rdram, ctx);
        goto after_6;
    // 0x8029C77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8029C780:
    // 0x8029C780: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
L_8029C784:
    // 0x8029C784: bnel        $t3, $zero, L_8029C7A8
    if (ctx->r11 != 0) {
        // 0x8029C788: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8029C7A8;
    }
    goto skip_1;
    // 0x8029C788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8029C78C: jal         0x802B18BC
    // 0x8029C790: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_7;
    // 0x8029C790: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_7:
    // 0x8029C794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029C798: jal         0x802CD274
    // 0x8029C79C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    static_3_802CD274(rdram, ctx);
        goto after_8;
    // 0x8029C79C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x8029C7A0: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x8029C7A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029C7A8:
    // 0x8029C7A8: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x8029C7AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029C7B0: jr          $ra
    // 0x8029C7B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8029C7B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
