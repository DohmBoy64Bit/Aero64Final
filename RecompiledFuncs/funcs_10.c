#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802D1AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1B28: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802D1B2C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x802D1B30: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802D1B34: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802D1B38: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x802D1B3C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x802D1B40: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802D1B44: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802D1B48: bne         $a1, $zero, L_802D1B64
    if (ctx->r5 != 0) {
        // 0x802D1B4C: sw          $a3, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r7;
            goto L_802D1B64;
    }
    // 0x802D1B4C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x802D1B50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D1B54: jal         0x80231A24
    // 0x802D1B58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D1B58: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D1B5C: b           L_802D1CEC
    // 0x802D1B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D1CEC;
    // 0x802D1B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D1B64:
    // 0x802D1B64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802D1B68: jal         0x80301EA0
    // 0x802D1B6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80301EA0(rdram, ctx);
        goto after_1;
    // 0x802D1B6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x802D1B70: bne         $v0, $zero, L_802D1BA8
    if (ctx->r2 != 0) {
        // 0x802D1B74: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802D1BA8;
    }
    // 0x802D1B74: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802D1B78: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x802D1B7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802D1B80: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802D1B84: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x802D1B88: jal         0x80301CF4
    // 0x802D1B8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    static_3_80301CF4(rdram, ctx);
        goto after_2;
    // 0x802D1B8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_2:
    // 0x802D1B90: bne         $v0, $zero, L_802D1BE4
    if (ctx->r2 != 0) {
        // 0x802D1B94: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802D1BE4;
    }
    // 0x802D1B94: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D1B98: jal         0x80231A24
    // 0x802D1B9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802D1B9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x802D1BA0: b           L_802D1CEC
    // 0x802D1BA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D1CEC;
    // 0x802D1BA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D1BA8:
    // 0x802D1BA8: lbu         $t7, 0x4($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X4);
    // 0x802D1BAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802D1BB0: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x802D1BB4: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x802D1BB8: lbu         $t0, 0x1F($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1F);
    // 0x802D1BBC: bne         $t0, $zero, L_802D1BCC
    if (ctx->r8 != 0) {
        // 0x802D1BC0: nop
    
            goto L_802D1BCC;
    }
    // 0x802D1BC0: nop

    // 0x802D1BC4: b           L_802D1CEC
    // 0x802D1BC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D1CEC;
    // 0x802D1BC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D1BCC:
    // 0x802D1BCC: jal         0x80302DF8
    // 0x802D1BD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80302DF8(rdram, ctx);
        goto after_4;
    // 0x802D1BD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x802D1BD4: beql        $v0, $zero, L_802D1BE8
    if (ctx->r2 == 0) {
        // 0x802D1BD8: slti        $at, $s0, 0xFF
        ctx->r1 = SIGNED(ctx->r16) < 0XFF ? 1 : 0;
            goto L_802D1BE8;
    }
    goto skip_0;
    // 0x802D1BD8: slti        $at, $s0, 0xFF
    ctx->r1 = SIGNED(ctx->r16) < 0XFF ? 1 : 0;
    skip_0:
    // 0x802D1BDC: b           L_802D1CEC
    // 0x802D1BE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D1CEC;
    // 0x802D1BE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D1BE4:
    // 0x802D1BE4: slti        $at, $s0, 0xFF
    ctx->r1 = SIGNED(ctx->r16) < 0XFF ? 1 : 0;
L_802D1BE8:
    // 0x802D1BE8: bne         $at, $zero, L_802D1C08
    if (ctx->r1 != 0) {
        // 0x802D1BEC: lui         $t1, 0x0
        ctx->r9 = S32(0X0 << 16);
            goto L_802D1C08;
    }
    // 0x802D1BEC: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802D1BF0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D1BF4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D1BF8: jal         0x80231A24
    // 0x802D1BFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x802D1BFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x802D1C00: b           L_802D1CEC
    // 0x802D1C04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D1CEC;
    // 0x802D1C04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D1C08:
    // 0x802D1C08: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802D1C0C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802D1C10: bnel        $t1, $at, L_802D1C3C
    if (ctx->r9 != ctx->r1) {
        // 0x802D1C14: lbu         $s0, 0x4($s1)
        ctx->r16 = MEM_BU(ctx->r17, 0X4);
            goto L_802D1C3C;
    }
    goto skip_1;
    // 0x802D1C14: lbu         $s0, 0x4($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X4);
    skip_1:
    // 0x802D1C18: lbu         $t2, 0x4($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X4);
    // 0x802D1C1C: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x802D1C20: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x802D1C24: addu        $v0, $s2, $t3
    ctx->r2 = ADD32(ctx->r18, ctx->r11);
    // 0x802D1C28: lw          $t4, 0x14($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X14);
    // 0x802D1C2C: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x802D1C30: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x802D1C34: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802D1C38: lbu         $s0, 0x4($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X4);
L_802D1C3C:
    // 0x802D1C3C: sll         $t6, $s0, 5
    ctx->r14 = S32(ctx->r16 << 5);
    // 0x802D1C40: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x802D1C44: lbu         $a1, 0x1D($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X1D);
    // 0x802D1C48: jal         0x8020153C
    // 0x802D1C4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8020153C(rdram, ctx);
        goto after_6;
    // 0x802D1C4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802D1C50: lbu         $s0, 0x4($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X4);
    // 0x802D1C54: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D1C58: ldc1        $f4, 0x0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X0);
    // 0x802D1C5C: sll         $t8, $s0, 5
    ctx->r24 = S32(ctx->r16 << 5);
    // 0x802D1C60: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x802D1C64: lw          $a2, 0x14($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X14);
    // 0x802D1C68: lui         $at, 0xC024
    ctx->r1 = S32(0XC024 << 16);
    // 0x802D1C6C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802D1C70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802D1C74: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802D1C78: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802D1C7C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x802D1C80: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802D1C84: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802D1C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D1C8C: sdc1        $f4, 0x10($sp)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X10, ctx->r29);
    // 0x802D1C90: jal         0x80201CE0
    // 0x802D1C94: sdc1        $f6, 0x20($sp)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X20, ctx->r29);
    static_3_80201CE0(rdram, ctx);
        goto after_7;
    // 0x802D1C94: sdc1        $f6, 0x20($sp)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X20, ctx->r29);
    after_7:
    // 0x802D1C98: lbu         $s0, 0x4($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X4);
    // 0x802D1C9C: sll         $t1, $s0, 5
    ctx->r9 = S32(ctx->r16 << 5);
    // 0x802D1CA0: addu        $t2, $s2, $t1
    ctx->r10 = ADD32(ctx->r18, ctx->r9);
    // 0x802D1CA4: lw          $a1, 0x10($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X10);
    // 0x802D1CA8: jal         0x8020178C
    // 0x802D1CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8020178C(rdram, ctx);
        goto after_8;
    // 0x802D1CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802D1CB0: lbu         $s0, 0x4($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X4);
    // 0x802D1CB4: sll         $t3, $s0, 5
    ctx->r11 = S32(ctx->r16 << 5);
    // 0x802D1CB8: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x802D1CBC: lw          $a1, 0xC($t4)
    ctx->r5 = MEM_W(ctx->r12, 0XC);
    // 0x802D1CC0: jal         0x80201A18
    // 0x802D1CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80201A18(rdram, ctx);
        goto after_9;
    // 0x802D1CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802D1CC8: lbu         $s0, 0x4($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X4);
    // 0x802D1CCC: sll         $t5, $s0, 5
    ctx->r13 = S32(ctx->r16 << 5);
    // 0x802D1CD0: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x802D1CD4: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x802D1CD8: jal         0x80201C00
    // 0x802D1CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80201C00(rdram, ctx);
        goto after_10;
    // 0x802D1CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x802D1CE0: jal         0x80201F14
    // 0x802D1CE4: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
    static_3_80201F14(rdram, ctx);
        goto after_11;
    // 0x802D1CE4: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
    after_11:
    // 0x802D1CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D1CEC:
    // 0x802D1CEC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802D1CF0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802D1CF4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802D1CF8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802D1CFC: jr          $ra
    // 0x802D1D00: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x802D1D00: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802A11D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A1254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A1258: bne         $a0, $zero, L_802A1270
    if (ctx->r4 != 0) {
        // 0x802A125C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802A1270;
    }
    // 0x802A125C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802A1260: jal         0x802C67EC
    // 0x802A1264: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A1264: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    after_0:
    // 0x802A1268: beq         $v0, $zero, L_802A1310
    if (ctx->r2 == 0) {
        // 0x802A126C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A1310;
    }
    // 0x802A126C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802A1270:
    // 0x802A1270: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A1274: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A1278: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A127C: sw          $t6, 0xD8($a1)
    MEM_W(0XD8, ctx->r5) = ctx->r14;
    // 0x802A1280: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x802A1284: sb          $zero, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = 0;
    // 0x802A1288: sb          $zero, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = 0;
    // 0x802A128C: sb          $zero, 0x1E($a1)
    MEM_B(0X1E, ctx->r5) = 0;
    // 0x802A1290: sb          $zero, 0xA8($a1)
    MEM_B(0XA8, ctx->r5) = 0;
    // 0x802A1294: sb          $zero, 0x1F($a1)
    MEM_B(0X1F, ctx->r5) = 0;
    // 0x802A1298: sb          $zero, 0xC9($a1)
    MEM_B(0XC9, ctx->r5) = 0;
    // 0x802A129C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A12A0: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x802A12A4: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x802A12A8: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
    // 0x802A12AC: swc1        $f0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f0.u32l;
    // 0x802A12B0: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x802A12B4: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x802A12B8: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x802A12BC: swc1        $f0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->f0.u32l;
    // 0x802A12C0: swc1        $f0, 0x70($a1)
    MEM_W(0X70, ctx->r5) = ctx->f0.u32l;
    // 0x802A12C4: swc1        $f0, 0x74($a1)
    MEM_W(0X74, ctx->r5) = ctx->f0.u32l;
    // 0x802A12C8: swc1        $f0, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f0.u32l;
    // 0x802A12CC: swc1        $f0, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f0.u32l;
    // 0x802A12D0: swc1        $f0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f0.u32l;
    // 0x802A12D4: swc1        $f0, 0x84($a1)
    MEM_W(0X84, ctx->r5) = ctx->f0.u32l;
    // 0x802A12D8: swc1        $f0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->f0.u32l;
    // 0x802A12DC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A12E0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A12E4: swc1        $f0, 0xB8($a1)
    MEM_W(0XB8, ctx->r5) = ctx->f0.u32l;
    // 0x802A12E8: swc1        $f4, 0xB4($a1)
    MEM_W(0XB4, ctx->r5) = ctx->f4.u32l;
    // 0x802A12EC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A12F0: sh          $zero, 0xC4($a1)
    MEM_H(0XC4, ctx->r5) = 0;
    // 0x802A12F4: swc1        $f0, 0xCC($a1)
    MEM_W(0XCC, ctx->r5) = ctx->f0.u32l;
    // 0x802A12F8: swc1        $f0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->f0.u32l;
    // 0x802A12FC: swc1        $f6, 0xBC($a1)
    MEM_W(0XBC, ctx->r5) = ctx->f6.u32l;
    // 0x802A1300: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802A1304: jal         0x8022970C
    // 0x802A1308: addiu       $a0, $a1, 0x2C
    ctx->r4 = ADD32(ctx->r5, 0X2C);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802A1308: addiu       $a0, $a1, 0x2C
    ctx->r4 = ADD32(ctx->r5, 0X2C);
    after_1:
    // 0x802A130C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802A1310:
    // 0x802A1310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A1314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A1318: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802A131C: jr          $ra
    // 0x802A1320: nop

    return;
    // 0x802A1320: nop

;}
RECOMP_FUNC void D_802E7B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7BAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E7BB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7BB4: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E7BB8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E7BBC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7BC0: bne         $v1, $zero, L_802E7BE8
    if (ctx->r3 != 0) {
        // 0x802E7BC4: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E7BE8;
    }
    // 0x802E7BC4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7BC8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7BCC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E7BD0: jal         0x80231A24
    // 0x802E7BD4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7BD4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E7BD8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E7BDC: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E7BE0: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E7BE4: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E7BE8:
    // 0x802E7BE8: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E7BEC: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x802E7BF0: lh          $t7, 0x40($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X40);
    // 0x802E7BF4: jalr        $t9
    // 0x802E7BF8: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E7BF8: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E7BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7C00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E7C04: jr          $ra
    // 0x802E7C08: nop

    return;
    // 0x802E7C08: nop

;}
RECOMP_FUNC void D_802CFC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CFD14: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CFD18: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CFD1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802CFD20: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x802CFD24: nop

    // 0x802CFD28: bc1fl       L_802CFD40
    if (!c1cs) {
        // 0x802CFD2C: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_802CFD40;
    }
    goto skip_0;
    // 0x802CFD2C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x802CFD30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802CFD34: jr          $ra
    // 0x802CFD38: nop

    return;
    // 0x802CFD38: nop

    // 0x802CFD3C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_802CFD40:
    // 0x802CFD40: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CFD44: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x802CFD48: nop

    // 0x802CFD4C: bc1f        L_802CFD5C
    if (!c1cs) {
        // 0x802CFD50: nop
    
            goto L_802CFD5C;
    }
    // 0x802CFD50: nop

    // 0x802CFD54: jr          $ra
    // 0x802CFD58: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x802CFD58: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802CFD5C:
    // 0x802CFD5C: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CFD60: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CFD64: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802CFD68: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    // 0x802CFD6C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x802CFD70: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CFD74: bc1fl       L_802CFD9C
    if (!c1cs) {
        // 0x802CFD78: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802CFD9C;
    }
    goto skip_1;
    // 0x802CFD78: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_1:
    // 0x802CFD7C: sub.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f14.fl;
L_802CFD80:
    // 0x802CFD80: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x802CFD84: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    // 0x802CFD88: nor         $t7, $t6, $zero
    ctx->r15 = ~(ctx->r14 | 0);
    // 0x802CFD8C: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x802CFD90: bc1tl       L_802CFD80
    if (c1cs) {
        // 0x802CFD94: sub.s       $f12, $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_802CFD80;
    }
    goto skip_2;
    // 0x802CFD94: sub.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f14.fl;
    skip_2:
    // 0x802CFD98: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802CFD9C:
    // 0x802CFD9C: nop

    // 0x802CFDA0: bc1fl       L_802CFDC8
    if (!c1cs) {
        // 0x802CFDA4: c.le.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
            goto L_802CFDC8;
    }
    goto skip_3;
    // 0x802CFDA4: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    skip_3:
    // 0x802CFDA8: add.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f14.fl;
L_802CFDAC:
    // 0x802CFDAC: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x802CFDB0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802CFDB4: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x802CFDB8: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x802CFDBC: bc1tl       L_802CFDAC
    if (c1cs) {
        // 0x802CFDC0: add.s       $f12, $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_802CFDAC;
    }
    goto skip_4;
    // 0x802CFDC0: add.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f14.fl;
    skip_4:
    // 0x802CFDC4: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
L_802CFDC8:
    // 0x802CFDC8: nop

    // 0x802CFDCC: bc1f        L_802CFDD8
    if (!c1cs) {
        // 0x802CFDD0: nop
    
            goto L_802CFDD8;
    }
    // 0x802CFDD0: nop

    // 0x802CFDD4: sub.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f12.fl;
L_802CFDD8:
    // 0x802CFDD8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CFDDC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802CFDE0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802CFDE4: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802CFDE8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CFDEC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CFDF0: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802CFDF4: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x802CFDF8: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x802CFDFC: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802CFE00: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x802CFE04: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802CFE08: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802CFE0C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802CFE10: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x802CFE14: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802CFE18: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x802CFE1C: nop

    // 0x802CFE20: sh          $t2, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r10;
    // 0x802CFE24: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x802CFE28: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x802CFE2C: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x802CFE30: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x802CFE34: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802CFE38: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802CFE3C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802CFE40: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x802CFE44: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x802CFE48: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x802CFE4C: beq         $t5, $zero, L_802CFE70
    if (ctx->r13 == 0) {
        // 0x802CFE50: swc1        $f18, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
            goto L_802CFE70;
    }
    // 0x802CFE50: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x802CFE54: lwc1        $f2, 0x0($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X0);
    // 0x802CFE58: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x802CFE5C: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802CFE60: sub.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x802CFE64: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x802CFE68: jr          $ra
    // 0x802CFE6C: sub.s       $f0, $f18, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f2.fl;
    return;
    // 0x802CFE6C: sub.s       $f0, $f18, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f2.fl;
L_802CFE70:
    // 0x802CFE70: lwc1        $f2, 0x0($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X0);
    // 0x802CFE74: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x802CFE78: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802CFE7C: sub.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x802CFE80: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802CFE84: add.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x802CFE88: jr          $ra
    // 0x802CFE8C: nop

    return;
    // 0x802CFE8C: nop

;}
RECOMP_FUNC void D_8020F36C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020F36C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8020F370: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8020F374: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8020F378: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020F37C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8020F380: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x8020F384: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8020F388: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8020F38C: beq         $a0, $at, L_8020FE58
    if (ctx->r4 == ctx->r1) {
        // 0x8020F390: sdc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
            goto L_8020FE58;
    }
    // 0x8020F390: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8020F394: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020F398: beq         $a0, $at, L_8020F4E8
    if (ctx->r4 == ctx->r1) {
        // 0x8020F39C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8020F4E8;
    }
    // 0x8020F39C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020F3A0: bne         $a0, $at, L_802109D8
    if (ctx->r4 != ctx->r1) {
        // 0x8020F3A4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_802109D8;
    }
    // 0x8020F3A4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020F3A8: bgez        $s0, L_8020F3B8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8020F3AC: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8020F3B8;
    }
    // 0x8020F3AC: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8020F3B0: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8020F3B4: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_8020F3B8:
    // 0x8020F3B8: blez        $a0, L_802109D8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8020F3BC: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_802109D8;
    }
    // 0x8020F3BC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8020F3C0: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x8020F3C4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8020F3C8: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
L_8020F3CC:
    // 0x8020F3CC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020F3D0: addiu       $t3, $sp, 0x8C
    ctx->r11 = ADD32(ctx->r29, 0X8C);
    // 0x8020F3D4: addiu       $t4, $sp, 0x88
    ctx->r12 = ADD32(ctx->r29, 0X88);
    // 0x8020F3D8: andi        $t1, $v0, 0x3E
    ctx->r9 = ctx->r2 & 0X3E;
    // 0x8020F3DC: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8020F3E0: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8020F3E4: andi        $t6, $v0, 0xF800
    ctx->r14 = ctx->r2 & 0XF800;
    // 0x8020F3E8: sra         $t7, $t6, 11
    ctx->r15 = S32(SIGNED(ctx->r14) >> 11);
    // 0x8020F3EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F3F0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8020F3F4: andi        $t8, $v0, 0x7C0
    ctx->r24 = ctx->r2 & 0X7C0;
    // 0x8020F3F8: sra         $t9, $t8, 6
    ctx->r25 = S32(SIGNED(ctx->r24) >> 6);
    // 0x8020F3FC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8020F400: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020F404: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8020F408: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8020F40C: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    // 0x8020F410: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8020F414: div.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8020F418: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    // 0x8020F41C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020F420: div.s       $f14, $f10, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8020F424: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8020F428: jal         0x80209914
    // 0x8020F42C: div.s       $f12, $f6, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    static_3_80209914(rdram, ctx);
        goto after_0;
    // 0x8020F42C: div.s       $f12, $f6, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    after_0:
    // 0x8020F430: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8020F434: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8020F438: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8020F43C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F440: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8020F444: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8020F448: mul.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020F44C: addiu       $t5, $sp, 0x6C
    ctx->r13 = ADD32(ctx->r29, 0X6C);
    // 0x8020F450: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x8020F454: mul.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8020F458: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8020F45C: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x8020F460: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8020F464: jal         0x802096F4
    // 0x8020F468: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    static_3_802096F4(rdram, ctx);
        goto after_1;
    // 0x8020F468: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_1:
    // 0x8020F46C: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8020F470: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8020F474: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020F478: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8020F47C: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x8020F480: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8020F484: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8020F488: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020F48C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020F490: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8020F494: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x8020F498: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x8020F49C: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020F4A0: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x8020F4A4: lhu         $t7, -0x2($s0)
    ctx->r15 = MEM_HU(ctx->r16, -0X2);
    // 0x8020F4A8: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F4AC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8020F4B0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8020F4B4: trunc.w.s   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8020F4B8: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8020F4BC: sll         $t2, $t1, 11
    ctx->r10 = S32(ctx->r9 << 11);
    // 0x8020F4C0: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x8020F4C4: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020F4C8: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x8020F4CC: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8020F4D0: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020F4D4: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020F4D8: bne         $t0, $a0, L_8020F3CC
    if (ctx->r8 != ctx->r4) {
        // 0x8020F4DC: sh          $t2, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r10;
            goto L_8020F3CC;
    }
    // 0x8020F4DC: sh          $t2, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r10;
    // 0x8020F4E0: b           L_802109DC
    // 0x8020F4E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802109DC;
    // 0x8020F4E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020F4E8:
    // 0x8020F4E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020F4EC: beq         $a1, $at, L_8020F50C
    if (ctx->r5 == ctx->r1) {
        // 0x8020F4F0: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020F50C;
    }
    // 0x8020F4F0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020F4F4: beq         $a1, $at, L_8020F960
    if (ctx->r5 == ctx->r1) {
        // 0x8020F4F8: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020F960;
    }
    // 0x8020F4F8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020F4FC: beq         $a1, $at, L_8020FBD4
    if (ctx->r5 == ctx->r1) {
        // 0x8020F500: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8020FBD4;
    }
    // 0x8020F500: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020F504: b           L_802109DC
    // 0x8020F508: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802109DC;
    // 0x8020F508: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020F50C:
    // 0x8020F50C: blez        $s0, L_802109D8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020F510: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_802109D8;
    }
    // 0x8020F510: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020F514: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020F518: beq         $a1, $zero, L_8020F61C
    if (ctx->r5 == 0) {
        // 0x8020F51C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8020F61C;
    }
    // 0x8020F51C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020F520: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020F524: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020F528: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020F52C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020F530: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020F534: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020F538: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020F53C: nop

    // 0x8020F540: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F544: mul.s       $f22, $f20, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F548: beql        $a0, $t0, L_8020F5C8
    if (ctx->r4 == ctx->r8) {
        // 0x8020F54C: trunc.w.s   $f18, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
            goto L_8020F5C8;
    }
    goto skip_0;
    // 0x8020F54C: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    skip_0:
    // 0x8020F550: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
L_8020F554:
    // 0x8020F554: andi        $t3, $v1, 0xF1
    ctx->r11 = ctx->r3 & 0XF1;
    // 0x8020F558: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020F55C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020F560: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020F564: nop

    // 0x8020F568: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x8020F56C: or          $v1, $t3, $t1
    ctx->r3 = ctx->r11 | ctx->r9;
    // 0x8020F570: andi        $t8, $v1, 0xE0
    ctx->r24 = ctx->r3 & 0XE0;
    // 0x8020F574: sra         $t2, $t8, 5
    ctx->r10 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020F578: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8020F57C: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020F580: andi        $t4, $v1, 0x1F
    ctx->r12 = ctx->r3 & 0X1F;
    // 0x8020F584: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F588: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020F58C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F590: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F594: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8020F598: nop

    // 0x8020F59C: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x8020F5A0: or          $t3, $t4, $t9
    ctx->r11 = ctx->r12 | ctx->r25;
    // 0x8020F5A4: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020F5A8: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020F5AC: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8020F5B0: sb          $t3, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r11;
    // 0x8020F5B4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F5B8: mul.s       $f22, $f20, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F5BC: bnel        $a0, $t0, L_8020F554
    if (ctx->r4 != ctx->r8) {
        // 0x8020F5C0: trunc.w.s   $f18, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
            goto L_8020F554;
    }
    goto skip_1;
    // 0x8020F5C0: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    skip_1:
    // 0x8020F5C4: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
L_8020F5C8:
    // 0x8020F5C8: andi        $t3, $v1, 0xF1
    ctx->r11 = ctx->r3 & 0XF1;
    // 0x8020F5CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020F5D0: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020F5D4: nop

    // 0x8020F5D8: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x8020F5DC: or          $v1, $t3, $t1
    ctx->r3 = ctx->r11 | ctx->r9;
    // 0x8020F5E0: andi        $t8, $v1, 0xE0
    ctx->r24 = ctx->r3 & 0XE0;
    // 0x8020F5E4: sra         $t2, $t8, 5
    ctx->r10 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020F5E8: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8020F5EC: andi        $t4, $v1, 0x1F
    ctx->r12 = ctx->r3 & 0X1F;
    // 0x8020F5F0: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020F5F4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F5F8: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F5FC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F600: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x8020F604: nop

    // 0x8020F608: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x8020F60C: or          $t3, $t4, $t9
    ctx->r11 = ctx->r12 | ctx->r25;
    // 0x8020F610: sb          $t3, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r11;
    // 0x8020F614: beql        $t0, $s0, L_802109DC
    if (ctx->r8 == ctx->r16) {
        // 0x8020F618: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802109DC;
    }
    goto skip_2;
    // 0x8020F618: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
L_8020F61C:
    // 0x8020F61C: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020F620: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020F624: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020F628: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020F62C: andi        $t1, $v1, 0xE
    ctx->r9 = ctx->r3 & 0XE;
    // 0x8020F630: sra         $t7, $t1, 1
    ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8020F634: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020F638: nop

    // 0x8020F63C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F640: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F644: beql        $t0, $s0, L_8020F7F0
    if (ctx->r8 == ctx->r16) {
        // 0x8020F648: trunc.w.s   $f18, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
            goto L_8020F7F0;
    }
    goto skip_3;
    // 0x8020F648: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    skip_3:
    // 0x8020F64C: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
L_8020F650:
    // 0x8020F650: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020F654: andi        $t8, $v1, 0xF1
    ctx->r24 = ctx->r3 & 0XF1;
    // 0x8020F658: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020F65C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8020F660: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020F664: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020F668: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8020F66C: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x8020F670: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020F674: sra         $t3, $t9, 5
    ctx->r11 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020F678: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020F67C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8020F680: andi        $t1, $v1, 0x1F
    ctx->r9 = ctx->r3 & 0X1F;
    // 0x8020F684: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F688: andi        $t6, $a0, 0xE
    ctx->r14 = ctx->r4 & 0XE;
    // 0x8020F68C: sra         $t4, $t6, 1
    ctx->r12 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8020F690: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020F694: andi        $t9, $a0, 0xF1
    ctx->r25 = ctx->r4 & 0XF1;
    // 0x8020F698: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8020F69C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F6A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020F6A4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F6A8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F6AC: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F6B0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8020F6B4: nop

    // 0x8020F6B8: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020F6BC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F6C0: or          $t8, $t1, $t5
    ctx->r24 = ctx->r9 | ctx->r13;
    // 0x8020F6C4: sb          $t8, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r24;
    // 0x8020F6C8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020F6CC: nop

    // 0x8020F6D0: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x8020F6D4: or          $a0, $t9, $t2
    ctx->r4 = ctx->r25 | ctx->r10;
    // 0x8020F6D8: andi        $t5, $a0, 0xE0
    ctx->r13 = ctx->r4 & 0XE0;
    // 0x8020F6DC: sra         $t8, $t5, 5
    ctx->r24 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020F6E0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020F6E4: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020F6E8: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x8020F6EC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F6F0: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020F6F4: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020F6F8: andi        $t6, $a0, 0x1F
    ctx->r14 = ctx->r4 & 0X1F;
    // 0x8020F6FC: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020F700: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F704: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F708: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F70C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F710: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020F714: nop

    // 0x8020F718: sll         $t7, $t3, 5
    ctx->r15 = S32(ctx->r11 << 5);
    // 0x8020F71C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F720: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8020F724: sb          $t9, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r25;
    // 0x8020F728: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8020F72C: nop

    // 0x8020F730: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8020F734: or          $a1, $t5, $t3
    ctx->r5 = ctx->r13 | ctx->r11;
    // 0x8020F738: andi        $t7, $a1, 0xE0
    ctx->r15 = ctx->r5 & 0XE0;
    // 0x8020F73C: sra         $t9, $t7, 5
    ctx->r25 = S32(SIGNED(ctx->r15) >> 5);
    // 0x8020F740: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8020F744: andi        $t3, $a2, 0xE
    ctx->r11 = ctx->r6 & 0XE;
    // 0x8020F748: sra         $t6, $t3, 1
    ctx->r14 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020F74C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F750: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020F754: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020F758: andi        $t2, $a1, 0x1F
    ctx->r10 = ctx->r5 & 0X1F;
    // 0x8020F75C: andi        $t7, $a2, 0xF1
    ctx->r15 = ctx->r6 & 0XF1;
    // 0x8020F760: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F764: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F768: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F76C: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F770: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8020F774: nop

    // 0x8020F778: sll         $t4, $t8, 5
    ctx->r12 = S32(ctx->r24 << 5);
    // 0x8020F77C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F780: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8020F784: sb          $t5, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r13;
    // 0x8020F788: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8020F78C: nop

    // 0x8020F790: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020F794: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x8020F798: andi        $t4, $a2, 0xE0
    ctx->r12 = ctx->r6 & 0XE0;
    // 0x8020F79C: sra         $t5, $t4, 5
    ctx->r13 = S32(SIGNED(ctx->r12) >> 5);
    // 0x8020F7A0: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020F7A4: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020F7A8: andi        $t3, $a2, 0x1F
    ctx->r11 = ctx->r6 & 0X1F;
    // 0x8020F7AC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F7B0: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F7B4: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F7B8: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020F7BC: nop

    // 0x8020F7C0: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x8020F7C4: or          $t7, $t3, $t1
    ctx->r15 = ctx->r11 | ctx->r9;
    // 0x8020F7C8: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x8020F7CC: andi        $t1, $v1, 0xE
    ctx->r9 = ctx->r3 & 0XE;
    // 0x8020F7D0: sra         $t7, $t1, 1
    ctx->r15 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8020F7D4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020F7D8: nop

    // 0x8020F7DC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F7E0: mul.s       $f22, $f20, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F7E4: bnel        $t0, $s0, L_8020F650
    if (ctx->r8 != ctx->r16) {
        // 0x8020F7E8: trunc.w.s   $f18, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
            goto L_8020F650;
    }
    goto skip_4;
    // 0x8020F7E8: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
    skip_4:
    // 0x8020F7EC: trunc.w.s   $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    ctx->f18.u32l = TRUNC_W_S(ctx->f22.fl);
L_8020F7F0:
    // 0x8020F7F0: andi        $t8, $v1, 0xF1
    ctx->r24 = ctx->r3 & 0XF1;
    // 0x8020F7F4: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020F7F8: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020F7FC: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8020F800: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020F804: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020F808: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8020F80C: or          $v1, $t8, $t6
    ctx->r3 = ctx->r24 | ctx->r14;
    // 0x8020F810: andi        $t9, $v1, 0xE0
    ctx->r25 = ctx->r3 & 0XE0;
    // 0x8020F814: sra         $t3, $t9, 5
    ctx->r11 = S32(SIGNED(ctx->r25) >> 5);
    // 0x8020F818: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020F81C: andi        $t6, $a0, 0xE
    ctx->r14 = ctx->r4 & 0XE;
    // 0x8020F820: sra         $t4, $t6, 1
    ctx->r12 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8020F824: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F828: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020F82C: andi        $t1, $v1, 0x1F
    ctx->r9 = ctx->r3 & 0X1F;
    // 0x8020F830: andi        $t9, $a0, 0xF1
    ctx->r25 = ctx->r4 & 0XF1;
    // 0x8020F834: sb          $v1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r3;
    // 0x8020F838: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F83C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F840: nop

    // 0x8020F844: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F848: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F84C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F850: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8020F854: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020F858: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020F85C: or          $t8, $t1, $t5
    ctx->r24 = ctx->r9 | ctx->r13;
    // 0x8020F860: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x8020F864: or          $a0, $t9, $t2
    ctx->r4 = ctx->r25 | ctx->r10;
    // 0x8020F868: andi        $t5, $a0, 0xE0
    ctx->r13 = ctx->r4 & 0XE0;
    // 0x8020F86C: sb          $t8, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r24;
    // 0x8020F870: sra         $t8, $t5, 5
    ctx->r24 = S32(SIGNED(ctx->r13) >> 5);
    // 0x8020F874: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020F878: andi        $t2, $a1, 0xE
    ctx->r10 = ctx->r5 & 0XE;
    // 0x8020F87C: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8020F880: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F884: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8020F888: andi        $t6, $a0, 0x1F
    ctx->r14 = ctx->r4 & 0X1F;
    // 0x8020F88C: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020F890: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x8020F894: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F898: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F89C: nop

    // 0x8020F8A0: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F8A4: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F8A8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F8AC: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020F8B0: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8020F8B4: sll         $t7, $t3, 5
    ctx->r15 = S32(ctx->r11 << 5);
    // 0x8020F8B8: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8020F8BC: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8020F8C0: or          $a1, $t5, $t3
    ctx->r5 = ctx->r13 | ctx->r11;
    // 0x8020F8C4: andi        $t7, $a1, 0xE0
    ctx->r15 = ctx->r5 & 0XE0;
    // 0x8020F8C8: sb          $t9, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r25;
    // 0x8020F8CC: sra         $t9, $t7, 5
    ctx->r25 = S32(SIGNED(ctx->r15) >> 5);
    // 0x8020F8D0: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8020F8D4: andi        $t3, $a2, 0xE
    ctx->r11 = ctx->r6 & 0XE;
    // 0x8020F8D8: sra         $t6, $t3, 1
    ctx->r14 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020F8DC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020F8E0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020F8E4: andi        $t2, $a1, 0x1F
    ctx->r10 = ctx->r5 & 0X1F;
    // 0x8020F8E8: andi        $t7, $a2, 0xF1
    ctx->r15 = ctx->r6 & 0XF1;
    // 0x8020F8EC: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8020F8F0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F8F4: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020F8F8: nop

    // 0x8020F8FC: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F900: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F904: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F908: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8020F90C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8020F910: sll         $t4, $t8, 5
    ctx->r12 = S32(ctx->r24 << 5);
    // 0x8020F914: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8020F918: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8020F91C: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x8020F920: andi        $t4, $a2, 0xE0
    ctx->r12 = ctx->r6 & 0XE0;
    // 0x8020F924: sb          $t5, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r13;
    // 0x8020F928: sra         $t5, $t4, 5
    ctx->r13 = S32(SIGNED(ctx->r12) >> 5);
    // 0x8020F92C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020F930: andi        $t3, $a2, 0x1F
    ctx->r11 = ctx->r6 & 0X1F;
    // 0x8020F934: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x8020F938: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F93C: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020F940: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020F944: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020F948: nop

    // 0x8020F94C: sll         $t1, $t9, 5
    ctx->r9 = S32(ctx->r25 << 5);
    // 0x8020F950: or          $t7, $t3, $t1
    ctx->r15 = ctx->r11 | ctx->r9;
    // 0x8020F954: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x8020F958: b           L_802109DC
    // 0x8020F95C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802109DC;
    // 0x8020F95C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020F960:
    // 0x8020F960: blez        $s0, L_802109D8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020F964: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_802109D8;
    }
    // 0x8020F964: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020F968: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020F96C: beq         $a1, $zero, L_8020FA08
    if (ctx->r5 == 0) {
        // 0x8020F970: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8020FA08;
    }
    // 0x8020F970: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020F974: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020F978: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020F97C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020F980: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020F984: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020F988: sra         $t2, $t8, 4
    ctx->r10 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020F98C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8020F990: beq         $a0, $t0, L_8020F9DC
    if (ctx->r4 == ctx->r8) {
        // 0x8020F994: cvt.s.w     $f22, $f16
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8020F9DC;
    }
    // 0x8020F994: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
L_8020F998:
    // 0x8020F998: mul.s       $f18, $f20, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020F99C: andi        $t4, $v1, 0xF
    ctx->r12 = ctx->r3 & 0XF;
    // 0x8020F9A0: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x8020F9A4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020F9A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020F9AC: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020F9B0: sra         $t2, $t8, 4
    ctx->r10 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020F9B4: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F9B8: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8020F9BC: nop

    // 0x8020F9C0: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020F9C4: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020F9C8: nop

    // 0x8020F9CC: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x8020F9D0: or          $t1, $t4, $t3
    ctx->r9 = ctx->r12 | ctx->r11;
    // 0x8020F9D4: bne         $a0, $t0, L_8020F998
    if (ctx->r4 != ctx->r8) {
        // 0x8020F9D8: sb          $t1, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r9;
            goto L_8020F998;
    }
    // 0x8020F9D8: sb          $t1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r9;
L_8020F9DC:
    // 0x8020F9DC: mul.s       $f18, $f20, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020F9E0: andi        $t4, $v1, 0xF
    ctx->r12 = ctx->r3 & 0XF;
    // 0x8020F9E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020F9E8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020F9EC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8020F9F0: nop

    // 0x8020F9F4: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x8020F9F8: or          $t1, $t4, $t3
    ctx->r9 = ctx->r12 | ctx->r11;
    // 0x8020F9FC: sb          $t1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r9;
    // 0x8020FA00: beql        $t0, $s0, L_802109DC
    if (ctx->r8 == ctx->r16) {
        // 0x8020FA04: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802109DC;
    }
    goto skip_5;
    // 0x8020FA04: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_5:
L_8020FA08:
    // 0x8020FA08: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020FA0C: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020FA10: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020FA14: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020FA18: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020FA1C: andi        $t7, $v1, 0xF0
    ctx->r15 = ctx->r3 & 0XF0;
    // 0x8020FA20: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020FA24: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020FA28: andi        $t1, $a0, 0xF0
    ctx->r9 = ctx->r4 & 0XF0;
    // 0x8020FA2C: sra         $t7, $t1, 4
    ctx->r15 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8020FA30: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FA34: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020FA38: nop

    // 0x8020FA3C: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FA40: mul.s       $f18, $f20, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FA44: beq         $t0, $s0, L_8020FB28
    if (ctx->r8 == ctx->r16) {
        // 0x8020FA48: nop
    
            goto L_8020FB28;
    }
    // 0x8020FA48: nop

L_8020FA4C:
    // 0x8020FA4C: mul.s       $f16, $f20, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FA50: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020FA54: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020FA58: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020FA5C: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8020FA60: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8020FA64: trunc.w.s   $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FA68: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020FA6C: lbu         $a0, 0x5($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X5);
    // 0x8020FA70: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FA74: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020FA78: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020FA7C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020FA80: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020FA84: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020FA88: or          $t3, $t2, $t4
    ctx->r11 = ctx->r10 | ctx->r12;
    // 0x8020FA8C: sb          $t3, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r11;
    // 0x8020FA90: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020FA94: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020FA98: andi        $t3, $a1, 0xF0
    ctx->r11 = ctx->r5 & 0XF0;
    // 0x8020FA9C: sb          $t4, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r12;
    // 0x8020FAA0: sra         $t1, $t3, 4
    ctx->r9 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020FAA4: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8020FAA8: andi        $t4, $a2, 0xF0
    ctx->r12 = ctx->r6 & 0XF0;
    // 0x8020FAAC: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020FAB0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FAB4: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020FAB8: andi        $t1, $a2, 0xF
    ctx->r9 = ctx->r6 & 0XF;
    // 0x8020FABC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FAC0: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FAC4: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FAC8: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FACC: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020FAD0: nop

    // 0x8020FAD4: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x8020FAD8: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020FADC: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020FAE0: sb          $t2, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r10;
    // 0x8020FAE4: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020FAE8: nop

    // 0x8020FAEC: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8020FAF0: or          $t8, $t1, $t7
    ctx->r24 = ctx->r9 | ctx->r15;
    // 0x8020FAF4: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x8020FAF8: andi        $t7, $v1, 0xF0
    ctx->r15 = ctx->r3 & 0XF0;
    // 0x8020FAFC: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020FB00: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020FB04: andi        $t1, $a0, 0xF0
    ctx->r9 = ctx->r4 & 0XF0;
    // 0x8020FB08: sra         $t7, $t1, 4
    ctx->r15 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8020FB0C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FB10: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020FB14: nop

    // 0x8020FB18: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FB1C: mul.s       $f18, $f20, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FB20: bne         $t0, $s0, L_8020FA4C
    if (ctx->r8 != ctx->r16) {
        // 0x8020FB24: nop
    
            goto L_8020FA4C;
    }
    // 0x8020FB24: nop

L_8020FB28:
    // 0x8020FB28: mul.s       $f16, $f20, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FB2C: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020FB30: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020FB34: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020FB38: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8020FB3C: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020FB40: trunc.w.s   $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FB44: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020FB48: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FB4C: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020FB50: nop

    // 0x8020FB54: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8020FB58: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020FB5C: or          $t3, $t2, $t4
    ctx->r11 = ctx->r10 | ctx->r12;
    // 0x8020FB60: sb          $t3, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r11;
    // 0x8020FB64: andi        $t3, $a1, 0xF0
    ctx->r11 = ctx->r5 & 0XF0;
    // 0x8020FB68: sra         $t1, $t3, 4
    ctx->r9 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8020FB6C: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8020FB70: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8020FB74: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x8020FB78: sb          $t4, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r12;
    // 0x8020FB7C: andi        $t4, $a2, 0xF0
    ctx->r12 = ctx->r6 & 0XF0;
    // 0x8020FB80: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FB84: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020FB88: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020FB8C: andi        $t1, $a2, 0xF
    ctx->r9 = ctx->r6 & 0XF;
    // 0x8020FB90: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FB94: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FB98: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FB9C: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FBA0: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020FBA4: nop

    // 0x8020FBA8: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x8020FBAC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020FBB0: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8020FBB4: sb          $t2, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r10;
    // 0x8020FBB8: mfc1        $t9, $f14
    ctx->r25 = (int32_t)ctx->f14.u32l;
    // 0x8020FBBC: nop

    // 0x8020FBC0: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8020FBC4: or          $t8, $t1, $t7
    ctx->r24 = ctx->r9 | ctx->r15;
    // 0x8020FBC8: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x8020FBCC: b           L_802109DC
    // 0x8020FBD0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802109DC;
    // 0x8020FBD0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020FBD4:
    // 0x8020FBD4: bgez        $s0, L_8020FBE4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8020FBD8: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8020FBE4;
    }
    // 0x8020FBD8: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8020FBDC: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x8020FBE0: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_8020FBE4:
    // 0x8020FBE4: blez        $a0, L_802109D8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8020FBE8: andi        $a1, $a0, 0x3
        ctx->r5 = ctx->r4 & 0X3;
            goto L_802109D8;
    }
    // 0x8020FBE8: andi        $a1, $a0, 0x3
    ctx->r5 = ctx->r4 & 0X3;
    // 0x8020FBEC: beq         $a1, $zero, L_8020FC88
    if (ctx->r5 == 0) {
        // 0x8020FBF0: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020FC88;
    }
    // 0x8020FBF0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020FBF4: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x8020FBF8: addu        $s0, $s1, $t2
    ctx->r16 = ADD32(ctx->r17, ctx->r10);
    // 0x8020FBFC: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020FC00: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020FC04: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020FC08: andi        $t4, $v0, 0xFF00
    ctx->r12 = ctx->r2 & 0XFF00;
    // 0x8020FC0C: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020FC10: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020FC14: beq         $v1, $t0, L_8020FC60
    if (ctx->r3 == ctx->r8) {
        // 0x8020FC18: cvt.s.w     $f22, $f16
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8020FC60;
    }
    // 0x8020FC18: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
L_8020FC1C:
    // 0x8020FC1C: mul.s       $f18, $f20, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FC20: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8020FC24: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8020FC28: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020FC2C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020FC30: andi        $t4, $v0, 0xFF00
    ctx->r12 = ctx->r2 & 0XFF00;
    // 0x8020FC34: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020FC38: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FC3C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020FC40: nop

    // 0x8020FC44: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FC48: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020FC4C: nop

    // 0x8020FC50: sll         $t7, $t1, 8
    ctx->r15 = S32(ctx->r9 << 8);
    // 0x8020FC54: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8020FC58: bne         $v1, $t0, L_8020FC1C
    if (ctx->r3 != ctx->r8) {
        // 0x8020FC5C: sh          $t8, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r24;
            goto L_8020FC1C;
    }
    // 0x8020FC5C: sh          $t8, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r24;
L_8020FC60:
    // 0x8020FC60: mul.s       $f18, $f20, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FC64: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8020FC68: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8020FC6C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FC70: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020FC74: nop

    // 0x8020FC78: sll         $t7, $t1, 8
    ctx->r15 = S32(ctx->r9 << 8);
    // 0x8020FC7C: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8020FC80: sh          $t8, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r24;
    // 0x8020FC84: beq         $t0, $a0, L_802109D8
    if (ctx->r8 == ctx->r4) {
        // 0x8020FC88: sll         $t2, $a0, 1
        ctx->r10 = S32(ctx->r4 << 1);
            goto L_802109D8;
    }
L_8020FC88:
    // 0x8020FC88: sll         $t2, $a0, 1
    ctx->r10 = S32(ctx->r4 << 1);
    // 0x8020FC8C: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x8020FC90: addu        $s0, $s1, $t4
    ctx->r16 = ADD32(ctx->r17, ctx->r12);
    // 0x8020FC94: addu        $a2, $t2, $s1
    ctx->r6 = ADD32(ctx->r10, ctx->r17);
    // 0x8020FC98: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020FC9C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020FCA0: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x8020FCA4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8020FCA8: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020FCAC: sra         $t6, $t3, 8
    ctx->r14 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020FCB0: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020FCB4: andi        $t4, $v1, 0xFF00
    ctx->r12 = ctx->r3 & 0XFF00;
    // 0x8020FCB8: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020FCBC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FCC0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020FCC4: nop

    // 0x8020FCC8: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FCCC: mul.s       $f18, $f20, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FCD0: beq         $s0, $a2, L_8020FDB0
    if (ctx->r16 == ctx->r6) {
        // 0x8020FCD4: nop
    
            goto L_8020FDB0;
    }
    // 0x8020FCD4: nop

L_8020FCD8:
    // 0x8020FCD8: mul.s       $f16, $f20, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FCDC: lhu         $a0, -0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, -0X4);
    // 0x8020FCE0: lhu         $a1, -0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, -0X2);
    // 0x8020FCE4: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8020FCE8: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020FCEC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8020FCF0: trunc.w.s   $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FCF4: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x8020FCF8: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x8020FCFC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FD00: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020FD04: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8020FD08: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8020FD0C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020FD10: or          $t2, $t9, $t8
    ctx->r10 = ctx->r25 | ctx->r24;
    // 0x8020FD14: sh          $t2, -0x10($s0)
    MEM_H(-0X10, ctx->r16) = ctx->r10;
    // 0x8020FD18: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x8020FD1C: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020FD20: andi        $t2, $a0, 0xFF00
    ctx->r10 = ctx->r4 & 0XFF00;
    // 0x8020FD24: sh          $t8, -0xE($s0)
    MEM_H(-0XE, ctx->r16) = ctx->r24;
    // 0x8020FD28: sra         $t4, $t2, 8
    ctx->r12 = S32(SIGNED(ctx->r10) >> 8);
    // 0x8020FD2C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020FD30: andi        $t8, $a1, 0xFF00
    ctx->r24 = ctx->r5 & 0XFF00;
    // 0x8020FD34: sra         $t2, $t8, 8
    ctx->r10 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020FD38: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FD3C: mtc1        $t2, $f14
    ctx->f14.u32l = ctx->r10;
    // 0x8020FD40: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8020FD44: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FD48: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FD4C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FD50: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FD54: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020FD58: nop

    // 0x8020FD5C: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8020FD60: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020FD64: or          $t9, $t3, $t6
    ctx->r25 = ctx->r11 | ctx->r14;
    // 0x8020FD68: sh          $t9, -0xC($s0)
    MEM_H(-0XC, ctx->r16) = ctx->r25;
    // 0x8020FD6C: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020FD70: nop

    // 0x8020FD74: sll         $t3, $t7, 8
    ctx->r11 = S32(ctx->r15 << 8);
    // 0x8020FD78: or          $t6, $t4, $t3
    ctx->r14 = ctx->r12 | ctx->r11;
    // 0x8020FD7C: sh          $t6, -0xA($s0)
    MEM_H(-0XA, ctx->r16) = ctx->r14;
    // 0x8020FD80: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020FD84: sra         $t6, $t3, 8
    ctx->r14 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020FD88: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020FD8C: andi        $t4, $v1, 0xFF00
    ctx->r12 = ctx->r3 & 0XFF00;
    // 0x8020FD90: sra         $t3, $t4, 8
    ctx->r11 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8020FD94: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FD98: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020FD9C: nop

    // 0x8020FDA0: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FDA4: mul.s       $f18, $f20, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FDA8: bne         $s0, $a2, L_8020FCD8
    if (ctx->r16 != ctx->r6) {
        // 0x8020FDAC: nop
    
            goto L_8020FCD8;
    }
    // 0x8020FDAC: nop

L_8020FDB0:
    // 0x8020FDB0: mul.s       $f16, $f20, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8020FDB4: lhu         $a0, -0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, -0X4);
    // 0x8020FDB8: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8020FDBC: lhu         $a1, -0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, -0X2);
    // 0x8020FDC0: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020FDC4: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x8020FDC8: trunc.w.s   $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FDCC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FDD0: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020FDD4: nop

    // 0x8020FDD8: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8020FDDC: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020FDE0: or          $t2, $t9, $t8
    ctx->r10 = ctx->r25 | ctx->r24;
    // 0x8020FDE4: sh          $t2, -0x8($s0)
    MEM_H(-0X8, ctx->r16) = ctx->r10;
    // 0x8020FDE8: andi        $t2, $a0, 0xFF00
    ctx->r10 = ctx->r4 & 0XFF00;
    // 0x8020FDEC: sra         $t4, $t2, 8
    ctx->r12 = S32(SIGNED(ctx->r10) >> 8);
    // 0x8020FDF0: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x8020FDF4: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020FDF8: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8020FDFC: sh          $t8, -0x6($s0)
    MEM_H(-0X6, ctx->r16) = ctx->r24;
    // 0x8020FE00: andi        $t8, $a1, 0xFF00
    ctx->r24 = ctx->r5 & 0XFF00;
    // 0x8020FE04: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FE08: sra         $t2, $t8, 8
    ctx->r10 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020FE0C: mtc1        $t2, $f14
    ctx->f14.u32l = ctx->r10;
    // 0x8020FE10: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8020FE14: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FE18: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FE1C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FE20: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FE24: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020FE28: nop

    // 0x8020FE2C: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8020FE30: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020FE34: or          $t9, $t3, $t6
    ctx->r25 = ctx->r11 | ctx->r14;
    // 0x8020FE38: sh          $t9, -0x4($s0)
    MEM_H(-0X4, ctx->r16) = ctx->r25;
    // 0x8020FE3C: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020FE40: nop

    // 0x8020FE44: sll         $t3, $t7, 8
    ctx->r11 = S32(ctx->r15 << 8);
    // 0x8020FE48: or          $t6, $t4, $t3
    ctx->r14 = ctx->r12 | ctx->r11;
    // 0x8020FE4C: sh          $t6, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r14;
    // 0x8020FE50: b           L_802109DC
    // 0x8020FE54: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802109DC;
    // 0x8020FE54: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020FE58:
    // 0x8020FE58: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020FE5C: beq         $a1, $at, L_8020FE7C
    if (ctx->r5 == ctx->r1) {
        // 0x8020FE60: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020FE7C;
    }
    // 0x8020FE60: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020FE64: beq         $a1, $at, L_8021027C
    if (ctx->r5 == ctx->r1) {
        // 0x8020FE68: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8021027C;
    }
    // 0x8020FE68: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020FE6C: beq         $a1, $at, L_80210624
    if (ctx->r5 == ctx->r1) {
        // 0x8020FE70: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80210624;
    }
    // 0x8020FE70: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020FE74: b           L_802109DC
    // 0x8020FE78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802109DC;
    // 0x8020FE78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8020FE7C:
    // 0x8020FE7C: blez        $s0, L_802109D8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8020FE80: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_802109D8;
    }
    // 0x8020FE80: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8020FE84: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x8020FE88: beq         $a1, $zero, L_8020FF74
    if (ctx->r5 == 0) {
        // 0x8020FE8C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8020FF74;
    }
    // 0x8020FE8C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8020FE90: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8020FE94: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020FE98: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020FE9C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020FEA0: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020FEA4: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020FEA8: nop

    // 0x8020FEAC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FEB0: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FEB4: beq         $a0, $t0, L_8020FF24
    if (ctx->r4 == ctx->r8) {
        // 0x8020FEB8: trunc.w.s   $f22, $f16
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.u32l = TRUNC_W_S(ctx->f16.fl);
            goto L_8020FF24;
    }
    // 0x8020FEB8: trunc.w.s   $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.u32l = TRUNC_W_S(ctx->f16.fl);
L_8020FEBC:
    // 0x8020FEBC: mfc1        $t1, $f22
    ctx->r9 = (int32_t)ctx->f22.u32l;
    // 0x8020FEC0: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020FEC4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8020FEC8: andi        $t5, $t1, 0xF
    ctx->r13 = ctx->r9 & 0XF;
    // 0x8020FECC: or          $v1, $t8, $t5
    ctx->r3 = ctx->r24 | ctx->r13;
    // 0x8020FED0: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020FED4: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020FED8: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020FEDC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8020FEE0: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020FEE4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020FEE8: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x8020FEEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020FEF0: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x8020FEF4: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020FEF8: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020FEFC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FF00: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FF04: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FF08: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020FF0C: nop

    // 0x8020FF10: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x8020FF14: trunc.w.s   $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020FF18: or          $t5, $t6, $t8
    ctx->r13 = ctx->r14 | ctx->r24;
    // 0x8020FF1C: bne         $a0, $t0, L_8020FEBC
    if (ctx->r4 != ctx->r8) {
        // 0x8020FF20: sb          $t5, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r13;
            goto L_8020FEBC;
    }
    // 0x8020FF20: sb          $t5, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r13;
L_8020FF24:
    // 0x8020FF24: mfc1        $t1, $f22
    ctx->r9 = (int32_t)ctx->f22.u32l;
    // 0x8020FF28: andi        $t8, $v1, 0xF0
    ctx->r24 = ctx->r3 & 0XF0;
    // 0x8020FF2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020FF30: andi        $t5, $t1, 0xF
    ctx->r13 = ctx->r9 & 0XF;
    // 0x8020FF34: or          $v1, $t8, $t5
    ctx->r3 = ctx->r24 | ctx->r13;
    // 0x8020FF38: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020FF3C: sra         $t3, $t4, 4
    ctx->r11 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020FF40: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8020FF44: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020FF48: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x8020FF4C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020FF50: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020FF54: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FF58: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8020FF5C: nop

    // 0x8020FF60: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x8020FF64: or          $t5, $t6, $t8
    ctx->r13 = ctx->r14 | ctx->r24;
    // 0x8020FF68: sb          $t5, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r13;
    // 0x8020FF6C: beql        $t0, $s0, L_802109DC
    if (ctx->r8 == ctx->r16) {
        // 0x8020FF70: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802109DC;
    }
    goto skip_6;
    // 0x8020FF70: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_6:
L_8020FF74:
    // 0x8020FF74: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8020FF78: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
    // 0x8020FF7C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8020FF80: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020FF84: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x8020FF88: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020FF8C: nop

    // 0x8020FF90: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020FF94: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8020FF98: beq         $t0, $s0, L_8021011C
    if (ctx->r8 == ctx->r16) {
        // 0x8020FF9C: trunc.w.s   $f22, $f14
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.u32l = TRUNC_W_S(ctx->f14.fl);
            goto L_8021011C;
    }
    // 0x8020FF9C: trunc.w.s   $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.u32l = TRUNC_W_S(ctx->f14.fl);
L_8020FFA0:
    // 0x8020FFA0: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x8020FFA4: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8020FFA8: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8020FFAC: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020FFB0: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x8020FFB4: or          $v1, $t4, $t2
    ctx->r3 = ctx->r12 | ctx->r10;
    // 0x8020FFB8: andi        $t6, $v1, 0xF0
    ctx->r14 = ctx->r3 & 0XF0;
    // 0x8020FFBC: sra         $t8, $t6, 4
    ctx->r24 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8020FFC0: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8020FFC4: andi        $t5, $v1, 0xF
    ctx->r13 = ctx->r3 & 0XF;
    // 0x8020FFC8: andi        $t1, $a0, 0xF
    ctx->r9 = ctx->r4 & 0XF;
    // 0x8020FFCC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020FFD0: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8020FFD4: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8020FFD8: andi        $t6, $a0, 0xF0
    ctx->r14 = ctx->r4 & 0XF0;
    // 0x8020FFDC: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8020FFE0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FFE4: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8020FFE8: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8020FFEC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8020FFF0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020FFF4: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8020FFF8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8020FFFC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80210000: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80210004: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x80210008: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x8021000C: or          $t2, $t5, $t4
    ctx->r10 = ctx->r13 | ctx->r12;
    // 0x80210010: andi        $t3, $t7, 0xF
    ctx->r11 = ctx->r15 & 0XF;
    // 0x80210014: or          $a0, $t6, $t3
    ctx->r4 = ctx->r14 | ctx->r11;
    // 0x80210018: sb          $t2, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r10;
    // 0x8021001C: andi        $t5, $a0, 0xF0
    ctx->r13 = ctx->r4 & 0XF0;
    // 0x80210020: sra         $t4, $t5, 4
    ctx->r12 = S32(SIGNED(ctx->r13) >> 4);
    // 0x80210024: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80210028: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8021002C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80210030: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80210034: andi        $t2, $a0, 0xF
    ctx->r10 = ctx->r4 & 0XF;
    // 0x80210038: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x8021003C: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x80210040: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80210044: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80210048: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8021004C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x80210050: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x80210054: nop

    // 0x80210058: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x8021005C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80210060: or          $t3, $t2, $t6
    ctx->r11 = ctx->r10 | ctx->r14;
    // 0x80210064: sb          $t3, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r11;
    // 0x80210068: andi        $t7, $a2, 0xF
    ctx->r15 = ctx->r6 & 0XF;
    // 0x8021006C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80210070: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80210074: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x80210078: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x8021007C: or          $a1, $t5, $t8
    ctx->r5 = ctx->r13 | ctx->r24;
    // 0x80210080: andi        $t2, $a1, 0xF0
    ctx->r10 = ctx->r5 & 0XF0;
    // 0x80210084: sra         $t6, $t2, 4
    ctx->r14 = S32(SIGNED(ctx->r10) >> 4);
    // 0x80210088: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8021008C: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x80210090: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x80210094: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80210098: andi        $t2, $a2, 0xF0
    ctx->r10 = ctx->r6 & 0XF0;
    // 0x8021009C: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x802100A0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802100A4: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x802100A8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802100AC: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x802100B0: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x802100B4: nop

    // 0x802100B8: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x802100BC: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802100C0: or          $t8, $t3, $t5
    ctx->r24 = ctx->r11 | ctx->r13;
    // 0x802100C4: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x802100C8: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x802100CC: nop

    // 0x802100D0: andi        $t4, $t9, 0xF
    ctx->r12 = ctx->r25 & 0XF;
    // 0x802100D4: or          $a2, $t2, $t4
    ctx->r6 = ctx->r10 | ctx->r12;
    // 0x802100D8: andi        $t3, $a2, 0xF0
    ctx->r11 = ctx->r6 & 0XF0;
    // 0x802100DC: sra         $t5, $t3, 4
    ctx->r13 = S32(SIGNED(ctx->r11) >> 4);
    // 0x802100E0: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x802100E4: andi        $t8, $a2, 0xF
    ctx->r24 = ctx->r6 & 0XF;
    // 0x802100E8: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x802100EC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802100F0: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x802100F4: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x802100F8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802100FC: mul.s       $f14, $f20, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x80210100: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80210104: nop

    // 0x80210108: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8021010C: trunc.w.s   $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x80210110: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x80210114: bne         $t0, $s0, L_8020FFA0
    if (ctx->r8 != ctx->r16) {
        // 0x80210118: sb          $t4, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r12;
            goto L_8020FFA0;
    }
    // 0x80210118: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
L_8021011C:
    // 0x8021011C: mfc1        $t9, $f22
    ctx->r25 = (int32_t)ctx->f22.u32l;
    // 0x80210120: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x80210124: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x80210128: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x8021012C: or          $v1, $t4, $t2
    ctx->r3 = ctx->r12 | ctx->r10;
    // 0x80210130: andi        $t6, $v1, 0xF0
    ctx->r14 = ctx->r3 & 0XF0;
    // 0x80210134: sra         $t8, $t6, 4
    ctx->r24 = S32(SIGNED(ctx->r14) >> 4);
    // 0x80210138: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8021013C: andi        $t1, $a0, 0xF
    ctx->r9 = ctx->r4 & 0XF;
    // 0x80210140: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80210144: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80210148: andi        $t5, $v1, 0xF
    ctx->r13 = ctx->r3 & 0XF;
    // 0x8021014C: andi        $t6, $a0, 0xF0
    ctx->r14 = ctx->r4 & 0XF0;
    // 0x80210150: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x80210154: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80210158: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021015C: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x80210160: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x80210164: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80210168: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8021016C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80210170: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80210174: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80210178: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8021017C: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x80210180: or          $t2, $t5, $t4
    ctx->r10 = ctx->r13 | ctx->r12;
    // 0x80210184: andi        $t3, $t7, 0xF
    ctx->r11 = ctx->r15 & 0XF;
    // 0x80210188: or          $a0, $t6, $t3
    ctx->r4 = ctx->r14 | ctx->r11;
    // 0x8021018C: andi        $t5, $a0, 0xF0
    ctx->r13 = ctx->r4 & 0XF0;
    // 0x80210190: sra         $t4, $t5, 4
    ctx->r12 = S32(SIGNED(ctx->r13) >> 4);
    // 0x80210194: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80210198: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8021019C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x802101A0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802101A4: sb          $t2, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r10;
    // 0x802101A8: andi        $t2, $a0, 0xF
    ctx->r10 = ctx->r4 & 0XF;
    // 0x802101AC: andi        $t5, $a1, 0xF0
    ctx->r13 = ctx->r5 & 0XF0;
    // 0x802101B0: sb          $a0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r4;
    // 0x802101B4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802101B8: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x802101BC: nop

    // 0x802101C0: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x802101C4: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802101C8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802101CC: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x802101D0: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x802101D4: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x802101D8: or          $t3, $t2, $t6
    ctx->r11 = ctx->r10 | ctx->r14;
    // 0x802101DC: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x802101E0: or          $a1, $t5, $t8
    ctx->r5 = ctx->r13 | ctx->r24;
    // 0x802101E4: andi        $t2, $a1, 0xF0
    ctx->r10 = ctx->r5 & 0XF0;
    // 0x802101E8: sra         $t6, $t2, 4
    ctx->r14 = S32(SIGNED(ctx->r10) >> 4);
    // 0x802101EC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x802101F0: andi        $t7, $a2, 0xF
    ctx->r15 = ctx->r6 & 0XF;
    // 0x802101F4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x802101F8: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802101FC: sb          $t3, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r11;
    // 0x80210200: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x80210204: andi        $t2, $a2, 0xF0
    ctx->r10 = ctx->r6 & 0XF0;
    // 0x80210208: sb          $a1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r5;
    // 0x8021020C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80210210: mul.s       $f16, $f20, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80210214: nop

    // 0x80210218: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8021021C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80210220: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80210224: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80210228: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8021022C: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x80210230: or          $t8, $t3, $t5
    ctx->r24 = ctx->r11 | ctx->r13;
    // 0x80210234: andi        $t4, $t9, 0xF
    ctx->r12 = ctx->r25 & 0XF;
    // 0x80210238: or          $a2, $t2, $t4
    ctx->r6 = ctx->r10 | ctx->r12;
    // 0x8021023C: andi        $t3, $a2, 0xF0
    ctx->r11 = ctx->r6 & 0XF0;
    // 0x80210240: sra         $t5, $t3, 4
    ctx->r13 = S32(SIGNED(ctx->r11) >> 4);
    // 0x80210244: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80210248: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x8021024C: andi        $t8, $a2, 0xF
    ctx->r24 = ctx->r6 & 0XF;
    // 0x80210250: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80210254: sb          $a2, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r6;
    // 0x80210258: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8021025C: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80210260: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80210264: nop

    // 0x80210268: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x8021026C: or          $t4, $t8, $t2
    ctx->r12 = ctx->r24 | ctx->r10;
    // 0x80210270: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
    // 0x80210274: b           L_802109DC
    // 0x80210278: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802109DC;
    // 0x80210278: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8021027C:
    // 0x8021027C: blez        $s0, L_802109D8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80210280: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_802109D8;
    }
    // 0x80210280: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80210284: andi        $a1, $s0, 0x3
    ctx->r5 = ctx->r16 & 0X3;
    // 0x80210288: beq         $a1, $zero, L_80210358
    if (ctx->r5 == 0) {
        // 0x8021028C: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80210358;
    }
    // 0x8021028C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80210290: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80210294: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
L_80210298:
    // 0x80210298: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8021029C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x802102A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802102A4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x802102A8: bgez        $t1, L_802102BC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802102AC: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802102BC;
    }
    // 0x802102AC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802102B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802102B4: nop

    // 0x802102B8: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_802102BC:
    // 0x802102BC: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802102C0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802102C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802102C8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802102CC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802102D0: nop

    // 0x802102D4: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802102D8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802102DC: nop

    // 0x802102E0: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802102E4: beql        $t5, $zero, L_80210334
    if (ctx->r13 == 0) {
        // 0x802102E8: mfc1        $t5, $f10
        ctx->r13 = (int32_t)ctx->f10.u32l;
            goto L_80210334;
    }
    goto skip_7;
    // 0x802102E8: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    skip_7:
    // 0x802102EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802102F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802102F4: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x802102F8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802102FC: nop

    // 0x80210300: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80210304: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80210308: nop

    // 0x8021030C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210310: bne         $t5, $zero, L_80210328
    if (ctx->r13 != 0) {
        // 0x80210314: nop
    
            goto L_80210328;
    }
    // 0x80210314: nop

    // 0x80210318: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8021031C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210320: b           L_80210340
    // 0x80210324: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_80210340;
    // 0x80210324: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80210328:
    // 0x80210328: b           L_80210340
    // 0x8021032C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_80210340;
    // 0x8021032C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80210330: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
L_80210334:
    // 0x80210334: nop

    // 0x80210338: bltz        $t5, L_80210328
    if (SIGNED(ctx->r13) < 0) {
        // 0x8021033C: nop
    
            goto L_80210328;
    }
    // 0x8021033C: nop

L_80210340:
    // 0x80210340: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80210344: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x80210348: bne         $v1, $t0, L_80210298
    if (ctx->r3 != ctx->r8) {
        // 0x8021034C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80210298;
    }
    // 0x8021034C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80210350: beql        $t0, $s0, L_802109DC
    if (ctx->r8 == ctx->r16) {
        // 0x80210354: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802109DC;
    }
    goto skip_8;
    // 0x80210354: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_8:
L_80210358:
    // 0x80210358: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8021035C: addu        $v0, $s1, $t0
    ctx->r2 = ADD32(ctx->r17, ctx->r8);
L_80210360:
    // 0x80210360: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80210364: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80210368: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021036C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80210370: bgez        $t7, L_80210384
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80210374: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80210384;
    }
    // 0x80210374: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80210378: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021037C: nop

    // 0x80210380: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
L_80210384:
    // 0x80210384: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210388: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021038C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210390: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80210394: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210398: nop

    // 0x8021039C: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802103A0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802103A4: nop

    // 0x802103A8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802103AC: beql        $t9, $zero, L_802103FC
    if (ctx->r25 == 0) {
        // 0x802103B0: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_802103FC;
    }
    goto skip_9;
    // 0x802103B0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_9:
    // 0x802103B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802103B8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802103BC: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802103C0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802103C4: nop

    // 0x802103C8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802103CC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802103D0: nop

    // 0x802103D4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802103D8: bne         $t9, $zero, L_802103F0
    if (ctx->r25 != 0) {
        // 0x802103DC: nop
    
            goto L_802103F0;
    }
    // 0x802103DC: nop

    // 0x802103E0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x802103E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802103E8: b           L_80210408
    // 0x802103EC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_80210408;
    // 0x802103EC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_802103F0:
    // 0x802103F0: b           L_80210408
    // 0x802103F4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_80210408;
    // 0x802103F4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802103F8: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_802103FC:
    // 0x802103FC: nop

    // 0x80210400: bltz        $t9, L_802103F0
    if (SIGNED(ctx->r25) < 0) {
        // 0x80210404: nop
    
            goto L_802103F0;
    }
    // 0x80210404: nop

L_80210408:
    // 0x80210408: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x8021040C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80210410: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210414: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80210418: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8021041C: bgez        $t8, L_80210430
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80210420: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80210430;
    }
    // 0x80210420: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80210424: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210428: nop

    // 0x8021042C: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_80210430:
    // 0x80210430: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210434: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80210438: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021043C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80210440: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80210444: nop

    // 0x80210448: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021044C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80210450: nop

    // 0x80210454: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80210458: beql        $t4, $zero, L_802104A8
    if (ctx->r12 == 0) {
        // 0x8021045C: mfc1        $t4, $f18
        ctx->r12 = (int32_t)ctx->f18.u32l;
            goto L_802104A8;
    }
    goto skip_10;
    // 0x8021045C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    skip_10:
    // 0x80210460: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210464: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80210468: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8021046C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80210470: nop

    // 0x80210474: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80210478: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8021047C: nop

    // 0x80210480: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80210484: bne         $t4, $zero, L_8021049C
    if (ctx->r12 != 0) {
        // 0x80210488: nop
    
            goto L_8021049C;
    }
    // 0x80210488: nop

    // 0x8021048C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80210490: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210494: b           L_802104B4
    // 0x80210498: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_802104B4;
    // 0x80210498: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8021049C:
    // 0x8021049C: b           L_802104B4
    // 0x802104A0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_802104B4;
    // 0x802104A0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x802104A4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
L_802104A8:
    // 0x802104A8: nop

    // 0x802104AC: bltz        $t4, L_8021049C
    if (SIGNED(ctx->r12) < 0) {
        // 0x802104B0: nop
    
            goto L_8021049C;
    }
    // 0x802104B0: nop

L_802104B4:
    // 0x802104B4: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x802104B8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802104BC: sb          $t4, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r12;
    // 0x802104C0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x802104C4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802104C8: bgez        $t1, L_802104DC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802104CC: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802104DC;
    }
    // 0x802104CC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802104D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802104D4: nop

    // 0x802104D8: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_802104DC:
    // 0x802104DC: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802104E0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802104E4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802104E8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802104EC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802104F0: nop

    // 0x802104F4: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802104F8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802104FC: nop

    // 0x80210500: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210504: beql        $t5, $zero, L_80210554
    if (ctx->r13 == 0) {
        // 0x80210508: mfc1        $t5, $f10
        ctx->r13 = (int32_t)ctx->f10.u32l;
            goto L_80210554;
    }
    goto skip_11;
    // 0x80210508: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    skip_11:
    // 0x8021050C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210510: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210514: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x80210518: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021051C: nop

    // 0x80210520: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80210524: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80210528: nop

    // 0x8021052C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210530: bne         $t5, $zero, L_80210548
    if (ctx->r13 != 0) {
        // 0x80210534: nop
    
            goto L_80210548;
    }
    // 0x80210534: nop

    // 0x80210538: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8021053C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210540: b           L_80210560
    // 0x80210544: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_80210560;
    // 0x80210544: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80210548:
    // 0x80210548: b           L_80210560
    // 0x8021054C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_80210560;
    // 0x8021054C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80210550: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
L_80210554:
    // 0x80210554: nop

    // 0x80210558: bltz        $t5, L_80210548
    if (SIGNED(ctx->r13) < 0) {
        // 0x8021055C: nop
    
            goto L_80210548;
    }
    // 0x8021055C: nop

L_80210560:
    // 0x80210560: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
    // 0x80210564: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80210568: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x8021056C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80210570: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210574: bgez        $t7, L_80210588
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80210578: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80210588;
    }
    // 0x80210578: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021057C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210580: nop

    // 0x80210584: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
L_80210588:
    // 0x80210588: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8021058C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80210590: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210594: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80210598: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021059C: nop

    // 0x802105A0: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802105A4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802105A8: nop

    // 0x802105AC: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802105B0: beql        $t9, $zero, L_80210600
    if (ctx->r25 == 0) {
        // 0x802105B4: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_80210600;
    }
    goto skip_12;
    // 0x802105B4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_12:
    // 0x802105B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802105BC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802105C0: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802105C4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802105C8: nop

    // 0x802105CC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802105D0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802105D4: nop

    // 0x802105D8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802105DC: bne         $t9, $zero, L_802105F4
    if (ctx->r25 != 0) {
        // 0x802105E0: nop
    
            goto L_802105F4;
    }
    // 0x802105E0: nop

    // 0x802105E4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x802105E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802105EC: b           L_8021060C
    // 0x802105F0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8021060C;
    // 0x802105F0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_802105F4:
    // 0x802105F4: b           L_8021060C
    // 0x802105F8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8021060C;
    // 0x802105F8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802105FC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_80210600:
    // 0x80210600: nop

    // 0x80210604: bltz        $t9, L_802105F4
    if (SIGNED(ctx->r25) < 0) {
        // 0x80210608: nop
    
            goto L_802105F4;
    }
    // 0x80210608: nop

L_8021060C:
    // 0x8021060C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80210610: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x80210614: bne         $t0, $s0, L_80210360
    if (ctx->r8 != ctx->r16) {
        // 0x80210618: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80210360;
    }
    // 0x80210618: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8021061C: b           L_802109DC
    // 0x80210620: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802109DC;
    // 0x80210620: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80210624:
    // 0x80210624: bgez        $s0, L_80210634
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80210628: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80210634;
    }
    // 0x80210628: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8021062C: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x80210630: sra         $a0, $at, 1
    ctx->r4 = S32(SIGNED(ctx->r1) >> 1);
L_80210634:
    // 0x80210634: blez        $a0, L_802109D8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80210638: andi        $a1, $a0, 0x3
        ctx->r5 = ctx->r4 & 0X3;
            goto L_802109D8;
    }
    // 0x80210638: andi        $a1, $a0, 0x3
    ctx->r5 = ctx->r4 & 0X3;
    // 0x8021063C: beq         $a1, $zero, L_8021070C
    if (ctx->r5 == 0) {
        // 0x80210640: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_8021070C;
    }
    // 0x80210640: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80210644: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x80210648: addu        $s0, $s1, $t8
    ctx->r16 = ADD32(ctx->r17, ctx->r24);
    // 0x8021064C: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
L_80210650:
    // 0x80210650: lhu         $t2, 0x0($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X0);
    // 0x80210654: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80210658: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021065C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80210660: bgez        $t2, L_80210674
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80210664: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80210674;
    }
    // 0x80210664: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80210668: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021066C: nop

    // 0x80210670: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_80210674:
    // 0x80210674: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210678: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8021067C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210680: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80210684: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80210688: nop

    // 0x8021068C: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80210690: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80210694: nop

    // 0x80210698: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8021069C: beql        $t1, $zero, L_802106EC
    if (ctx->r9 == 0) {
        // 0x802106A0: mfc1        $t1, $f18
        ctx->r9 = (int32_t)ctx->f18.u32l;
            goto L_802106EC;
    }
    goto skip_13;
    // 0x802106A0: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    skip_13:
    // 0x802106A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802106A8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802106AC: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x802106B0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802106B4: nop

    // 0x802106B8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802106BC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802106C0: nop

    // 0x802106C4: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x802106C8: bne         $t1, $zero, L_802106E0
    if (ctx->r9 != 0) {
        // 0x802106CC: nop
    
            goto L_802106E0;
    }
    // 0x802106CC: nop

    // 0x802106D0: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x802106D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802106D8: b           L_802106F8
    // 0x802106DC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_802106F8;
    // 0x802106DC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_802106E0:
    // 0x802106E0: b           L_802106F8
    // 0x802106E4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_802106F8;
    // 0x802106E4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x802106E8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
L_802106EC:
    // 0x802106EC: nop

    // 0x802106F0: bltz        $t1, L_802106E0
    if (SIGNED(ctx->r9) < 0) {
        // 0x802106F4: nop
    
            goto L_802106E0;
    }
    // 0x802106F4: nop

L_802106F8:
    // 0x802106F8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802106FC: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
    // 0x80210700: bne         $v0, $t0, L_80210650
    if (ctx->r2 != ctx->r8) {
        // 0x80210704: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80210650;
    }
    // 0x80210704: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80210708: beq         $t0, $a0, L_802109D8
    if (ctx->r8 == ctx->r4) {
        // 0x8021070C: sll         $t3, $a0, 1
        ctx->r11 = S32(ctx->r4 << 1);
            goto L_802109D8;
    }
L_8021070C:
    // 0x8021070C: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x80210710: sll         $t5, $t0, 1
    ctx->r13 = S32(ctx->r8 << 1);
    // 0x80210714: addu        $s0, $s1, $t5
    ctx->r16 = ADD32(ctx->r17, ctx->r13);
    // 0x80210718: addu        $v0, $t3, $s1
    ctx->r2 = ADD32(ctx->r11, ctx->r17);
    // 0x8021071C: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
L_80210720:
    // 0x80210720: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x80210724: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210728: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8021072C: bgez        $t7, L_80210740
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80210730: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80210740;
    }
    // 0x80210730: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210734: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210738: nop

    // 0x8021073C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80210740:
    // 0x80210740: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210744: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80210748: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021074C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80210750: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210754: nop

    // 0x80210758: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8021075C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80210760: nop

    // 0x80210764: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80210768: beql        $t9, $zero, L_802107B8
    if (ctx->r25 == 0) {
        // 0x8021076C: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_802107B8;
    }
    goto skip_14;
    // 0x8021076C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_14:
    // 0x80210770: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210774: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80210778: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8021077C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210780: nop

    // 0x80210784: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80210788: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021078C: nop

    // 0x80210790: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80210794: bne         $t9, $zero, L_802107AC
    if (ctx->r25 != 0) {
        // 0x80210798: nop
    
            goto L_802107AC;
    }
    // 0x80210798: nop

    // 0x8021079C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x802107A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802107A4: b           L_802107C4
    // 0x802107A8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_802107C4;
    // 0x802107A8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_802107AC:
    // 0x802107AC: b           L_802107C4
    // 0x802107B0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_802107C4;
    // 0x802107B0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802107B4: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_802107B8:
    // 0x802107B8: nop

    // 0x802107BC: bltz        $t9, L_802107AC
    if (SIGNED(ctx->r25) < 0) {
        // 0x802107C0: nop
    
            goto L_802107AC;
    }
    // 0x802107C0: nop

L_802107C4:
    // 0x802107C4: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x802107C8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802107CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802107D0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802107D4: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x802107D8: bgez        $t8, L_802107EC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802107DC: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802107EC;
    }
    // 0x802107DC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802107E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802107E4: nop

    // 0x802107E8: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
L_802107EC:
    // 0x802107EC: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802107F0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802107F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802107F8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802107FC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80210800: nop

    // 0x80210804: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80210808: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8021080C: nop

    // 0x80210810: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80210814: beql        $t4, $zero, L_80210864
    if (ctx->r12 == 0) {
        // 0x80210818: mfc1        $t4, $f6
        ctx->r12 = (int32_t)ctx->f6.u32l;
            goto L_80210864;
    }
    goto skip_15;
    // 0x80210818: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    skip_15:
    // 0x8021081C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210820: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80210824: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80210828: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8021082C: nop

    // 0x80210830: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80210834: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80210838: nop

    // 0x8021083C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80210840: bne         $t4, $zero, L_80210858
    if (ctx->r12 != 0) {
        // 0x80210844: nop
    
            goto L_80210858;
    }
    // 0x80210844: nop

    // 0x80210848: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8021084C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210850: b           L_80210870
    // 0x80210854: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_80210870;
    // 0x80210854: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_80210858:
    // 0x80210858: b           L_80210870
    // 0x8021085C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_80210870;
    // 0x8021085C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80210860: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
L_80210864:
    // 0x80210864: nop

    // 0x80210868: bltz        $t4, L_80210858
    if (SIGNED(ctx->r12) < 0) {
        // 0x8021086C: nop
    
            goto L_80210858;
    }
    // 0x8021086C: nop

L_80210870:
    // 0x80210870: lhu         $t1, 0x4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X4);
    // 0x80210874: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80210878: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
    // 0x8021087C: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80210880: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210884: bgez        $t1, L_80210898
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80210888: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80210898;
    }
    // 0x80210888: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8021088C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210890: nop

    // 0x80210894: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_80210898:
    // 0x80210898: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8021089C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802108A0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802108A4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802108A8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802108AC: nop

    // 0x802108B0: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802108B4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802108B8: nop

    // 0x802108BC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802108C0: beql        $t5, $zero, L_80210910
    if (ctx->r13 == 0) {
        // 0x802108C4: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_80210910;
    }
    goto skip_16;
    // 0x802108C4: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_16:
    // 0x802108C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802108CC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802108D0: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x802108D4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802108D8: nop

    // 0x802108DC: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802108E0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802108E4: nop

    // 0x802108E8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802108EC: bne         $t5, $zero, L_80210904
    if (ctx->r13 != 0) {
        // 0x802108F0: nop
    
            goto L_80210904;
    }
    // 0x802108F0: nop

    // 0x802108F4: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x802108F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802108FC: b           L_8021091C
    // 0x80210900: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8021091C;
    // 0x80210900: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80210904:
    // 0x80210904: b           L_8021091C
    // 0x80210908: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8021091C;
    // 0x80210908: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8021090C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_80210910:
    // 0x80210910: nop

    // 0x80210914: bltz        $t5, L_80210904
    if (SIGNED(ctx->r13) < 0) {
        // 0x80210918: nop
    
            goto L_80210904;
    }
    // 0x80210918: nop

L_8021091C:
    // 0x8021091C: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
    // 0x80210920: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80210924: sh          $t5, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r13;
    // 0x80210928: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8021092C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210930: bgez        $t7, L_80210944
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80210934: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80210944;
    }
    // 0x80210934: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210938: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021093C: nop

    // 0x80210940: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80210944:
    // 0x80210944: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80210948: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021094C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210950: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80210954: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210958: nop

    // 0x8021095C: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80210960: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80210964: nop

    // 0x80210968: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021096C: beql        $t9, $zero, L_802109BC
    if (ctx->r25 == 0) {
        // 0x80210970: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_802109BC;
    }
    goto skip_17;
    // 0x80210970: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_17:
    // 0x80210974: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210978: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021097C: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x80210980: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210984: nop

    // 0x80210988: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8021098C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80210990: nop

    // 0x80210994: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80210998: bne         $t9, $zero, L_802109B0
    if (ctx->r25 != 0) {
        // 0x8021099C: nop
    
            goto L_802109B0;
    }
    // 0x8021099C: nop

    // 0x802109A0: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x802109A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802109A8: b           L_802109C8
    // 0x802109AC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_802109C8;
    // 0x802109AC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_802109B0:
    // 0x802109B0: b           L_802109C8
    // 0x802109B4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_802109C8;
    // 0x802109B4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802109B8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_802109BC:
    // 0x802109BC: nop

    // 0x802109C0: bltz        $t9, L_802109B0
    if (SIGNED(ctx->r25) < 0) {
        // 0x802109C4: nop
    
            goto L_802109B0;
    }
    // 0x802109C4: nop

L_802109C8:
    // 0x802109C8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802109CC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802109D0: bne         $s0, $v0, L_80210720
    if (ctx->r16 != ctx->r2) {
        // 0x802109D4: sh          $t9, -0x2($s0)
        MEM_H(-0X2, ctx->r16) = ctx->r25;
            goto L_80210720;
    }
    // 0x802109D4: sh          $t9, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r25;
L_802109D8:
    // 0x802109D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802109DC:
    // 0x802109DC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802109E0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802109E4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802109E8: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802109EC: jr          $ra
    // 0x802109F0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x802109F0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void D_802D51BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D523C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D5240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D5244: jal         0x80317DA0
    // 0x802D5248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80317DA0(rdram, ctx);
        goto after_0;
    // 0x802D5248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D524C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802D5250: jal         0x8021BAE0
    // 0x802D5254: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x802D5254: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    after_1:
    // 0x802D5258: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x802D525C: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x802D5260: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x802D5264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D5268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D526C: jr          $ra
    // 0x802D5270: nop

    return;
    // 0x802D5270: nop

;}
RECOMP_FUNC void D_8029D1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029D264: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029D268: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029D26C: bne         $a0, $zero, L_8029D284
    if (ctx->r4 != 0) {
        // 0x8029D270: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8029D284;
    }
    // 0x8029D270: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029D274: jal         0x802C67EC
    // 0x8029D278: addiu       $a0, $zero, 0x6AC
    ctx->r4 = ADD32(0, 0X6AC);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x8029D278: addiu       $a0, $zero, 0x6AC
    ctx->r4 = ADD32(0, 0X6AC);
    after_0:
    // 0x8029D27C: beq         $v0, $zero, L_8029D2C0
    if (ctx->r2 == 0) {
        // 0x8029D280: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8029D2C0;
    }
    // 0x8029D280: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8029D284:
    // 0x8029D284: jal         0x80317344
    // 0x8029D288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x8029D288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8029D28C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8029D290: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8029D294: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x8029D298: jal         0x802D3D30
    // 0x8029D29C: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D3D30(rdram, ctx);
        goto after_2;
    // 0x8029D29C: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_2:
    // 0x8029D2A0: jal         0x802C498C
    // 0x8029D2A4: addiu       $a0, $s0, 0x294
    ctx->r4 = ADD32(ctx->r16, 0X294);
    static_3_802C498C(rdram, ctx);
        goto after_3;
    // 0x8029D2A4: addiu       $a0, $s0, 0x294
    ctx->r4 = ADD32(ctx->r16, 0X294);
    after_3:
    // 0x8029D2A8: jal         0x802C498C
    // 0x8029D2AC: addiu       $a0, $s0, 0x428
    ctx->r4 = ADD32(ctx->r16, 0X428);
    static_3_802C498C(rdram, ctx);
        goto after_4;
    // 0x8029D2AC: addiu       $a0, $s0, 0x428
    ctx->r4 = ADD32(ctx->r16, 0X428);
    after_4:
    // 0x8029D2B0: jal         0x8031CB84
    // 0x8029D2B4: addiu       $a0, $s0, 0x5BC
    ctx->r4 = ADD32(ctx->r16, 0X5BC);
    static_3_8031CB84(rdram, ctx);
        goto after_5;
    // 0x8029D2B4: addiu       $a0, $s0, 0x5BC
    ctx->r4 = ADD32(ctx->r16, 0X5BC);
    after_5:
    // 0x8029D2B8: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x8029D2BC: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
L_8029D2C0:
    // 0x8029D2C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029D2C4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8029D2C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029D2CC: jr          $ra
    // 0x8029D2D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8029D2D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802D28AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D292C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2934: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D2938: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x802D293C: beq         $t6, $zero, L_802D298C
    if (ctx->r14 == 0) {
        // 0x802D2940: nop
    
            goto L_802D298C;
    }
    // 0x802D2940: nop

    // 0x802D2944: jal         0x80303128
    // 0x802D2948: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80303128(rdram, ctx);
        goto after_0;
    // 0x802D2948: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D294C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802D2950: bne         $v0, $at, L_802D2960
    if (ctx->r2 != ctx->r1) {
        // 0x802D2954: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_802D2960;
    }
    // 0x802D2954: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D2958: b           L_802D2994
    // 0x802D295C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802D2994;
    // 0x802D295C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D2960:
    // 0x802D2960: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802D2964: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802D2968: lbu         $t7, 0x3($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X3);
    // 0x802D296C: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x802D2970: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802D2974: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    // 0x802D2978: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802D297C: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802D2980: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802D2984: b           L_802D2994
    // 0x802D2988: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
        goto L_802D2994;
    // 0x802D2988: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
L_802D298C:
    // 0x802D298C: jal         0x80303128
    // 0x802D2990: nop

    static_3_80303128(rdram, ctx);
        goto after_1;
    // 0x802D2990: nop

    after_1:
L_802D2994:
    // 0x802D2994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D299C: jr          $ra
    // 0x802D29A0: nop

    return;
    // 0x802D29A0: nop

;}
RECOMP_FUNC void D_80282D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282DBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282DC0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80282DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282DC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80282DCC: jal         0x80228DE0
    // 0x80282DD0: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80282DD0: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    after_0:
    // 0x80282DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282DDC: jr          $ra
    // 0x80282DE0: nop

    return;
    // 0x80282DE0: nop

;}
RECOMP_FUNC void D_80232F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80232F90: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80232F94: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80232F98: lhu         $s7, 0xCA($sp)
    ctx->r23 = MEM_HU(ctx->r29, 0XCA);
    // 0x80232F9C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80232FA0: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80232FA4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80232FA8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80232FAC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80232FB0: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80232FB4: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80232FB8: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80232FBC: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80232FC0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80232FC4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80232FC8: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x80232FCC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x80232FD0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x80232FD4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80232FD8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80232FDC: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x80232FE0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80232FE4: beq         $s7, $zero, L_8023312C
    if (ctx->r23 == 0) {
        // 0x80232FE8: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_8023312C;
    }
    // 0x80232FE8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80232FEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80232FF0: lwc1        $f28, 0x0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80232FF4: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80232FF8: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x80232FFC: lbu         $fp, 0xCF($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0XCF);
L_80233000:
    // 0x80233000: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x80233004: and         $t8, $s6, $t7
    ctx->r24 = ctx->r22 & ctx->r15;
    // 0x80233008: beql        $t8, $zero, L_80233124
    if (ctx->r24 == 0) {
        // 0x8023300C: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80233124;
    }
    goto skip_0;
    // 0x8023300C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80233010: lwc1        $f4, 0x108($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X108);
    // 0x80233014: lwc1        $f6, 0x30($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X30);
    // 0x80233018: sll         $a0, $fp, 16
    ctx->r4 = S32(ctx->r30 << 16);
    // 0x8023301C: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80233020: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80233024: negu        $s1, $t9
    ctx->r17 = SUB32(0, ctx->r25);
    // 0x80233028: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x8023302C: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80233030: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x80233034: lwc1        $f16, 0x34($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X34);
    // 0x80233038: lwc1        $f10, 0x10C($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X10C);
    // 0x8023303C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80233040: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x80233044: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80233048: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x8023304C: addiu       $s2, $s3, 0x218
    ctx->r18 = ADD32(ctx->r19, 0X218);
    // 0x80233050: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x80233054: lwc1        $f6, 0x38($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X38);
    // 0x80233058: lwc1        $f4, 0x110($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X110);
    // 0x8023305C: jal         0x80218C74
    // 0x80233060: sub.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f6.fl;
    static_3_80218C74(rdram, ctx);
        goto after_0;
    // 0x80233060: sub.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x80233064: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80233068: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8023306C: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80233070: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80233074: sub.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80233078: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8023307C: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x80233080: sub.s       $f22, $f16, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80233084: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80233088: swc1        $f20, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f20.u32l;
    // 0x8023308C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80233090: swc1        $f22, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f22.u32l;
    // 0x80233094: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x80233098: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x8023309C: jal         0x80218C74
    // 0x802330A0: sub.s       $f24, $f4, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f26.fl;
    static_3_80218C74(rdram, ctx);
        goto after_1;
    // 0x802330A0: sub.s       $f24, $f4, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f26.fl;
    after_1:
    // 0x802330A4: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802330A8: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x802330AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802330B0: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x802330B4: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802330B8: jal         0x8020802C
    // 0x802330BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_8020802C(rdram, ctx);
        goto after_2;
    // 0x802330BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x802330C0: beql        $v0, $zero, L_80233124
    if (ctx->r2 == 0) {
        // 0x802330C4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80233124;
    }
    goto skip_1;
    // 0x802330C4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_1:
    // 0x802330C8: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x802330CC: nop

    // 0x802330D0: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x802330D4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802330D8: mul.s       $f18, $f24, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x802330DC: jal         0x8022AA40
    // 0x802330E0: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_3;
    // 0x802330E0: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_3:
    // 0x802330E4: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802330E8: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x802330EC: div.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802330F0: c.lt.s      $f6, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f6.fl < ctx->f28.fl;
    // 0x802330F4: nop

    // 0x802330F8: bc1f        L_80233110
    if (!c1cs) {
        // 0x802330FC: nop
    
            goto L_80233110;
    }
    // 0x802330FC: nop

    // 0x80233100: jal         0x8022363C
    // 0x80233104: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8022363C(rdram, ctx);
        goto after_4;
    // 0x80233104: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80233108: b           L_80233118
    // 0x8023310C: nop

        goto L_80233118;
    // 0x8023310C: nop

L_80233110:
    // 0x80233110: jal         0x8022363C
    // 0x80233114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8022363C(rdram, ctx);
        goto after_5;
    // 0x80233114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
L_80233118:
    // 0x80233118: jal         0x802331C0
    // 0x8023311C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802331C0(rdram, ctx);
        goto after_6;
    // 0x8023311C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80233120: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80233124:
    // 0x80233124: bne         $s4, $s7, L_80233000
    if (ctx->r20 != ctx->r23) {
        // 0x80233128: addiu       $s0, $s0, 0x2C
        ctx->r16 = ADD32(ctx->r16, 0X2C);
            goto L_80233000;
    }
    // 0x80233128: addiu       $s0, $s0, 0x2C
    ctx->r16 = ADD32(ctx->r16, 0X2C);
L_8023312C:
    // 0x8023312C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80233130: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80233134: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80233138: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8023313C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80233140: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x80233144: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80233148: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8023314C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80233150: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80233154: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80233158: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8023315C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80233160: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80233164: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80233168: jr          $ra
    // 0x8023316C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8023316C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void D_8023D114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D114: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D118: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D11C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D120: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D124: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D128: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D12C: dsllv       $v0, $t6, $t7
    ctx->r2 = ctx->r14 << (ctx->r15 & 63);
    // 0x8023D130: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D134: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D138: jr          $ra
    // 0x8023D13C: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D13C: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void D_80248C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248C00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80248C04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80248C08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80248C0C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80248C10: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80248C14: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80248C18: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80248C1C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80248C20: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80248C24: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
    // 0x80248C28: andi        $t7, $s0, 0x3
    ctx->r15 = ctx->r16 & 0X3;
    // 0x80248C2C: beq         $t7, $zero, L_80248C48
    if (ctx->r15 == 0) {
        // 0x80248C30: nop
    
            goto L_80248C48;
    }
    // 0x80248C30: nop

L_80248C34:
    // 0x80248C34: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80248C38: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x80248C3C: andi        $t9, $s0, 0x3
    ctx->r25 = ctx->r16 & 0X3;
    // 0x80248C40: bne         $t9, $zero, L_80248C34
    if (ctx->r25 != 0) {
        // 0x80248C44: nop
    
            goto L_80248C34;
    }
    // 0x80248C44: nop

L_80248C48:
    // 0x80248C48: jal         0x802375F0
    // 0x80248C4C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x80248C4C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_0:
    // 0x80248C50: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80248C54: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x80248C58: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80248C5C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80248C60: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80248C64: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x80248C68: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80248C6C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80248C70: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x80248C74: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80248C78: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80248C7C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80248C80: beq         $s1, $zero, L_80248C98
    if (ctx->r17 == 0) {
        // 0x80248C84: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80248C98;
    }
    // 0x80248C84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80248C88: beq         $s1, $at, L_80248CAC
    if (ctx->r17 == ctx->r1) {
        // 0x80248C8C: nop
    
            goto L_80248CAC;
    }
    // 0x80248C8C: nop

    // 0x80248C90: b           L_80248CC0
    // 0x80248C94: nop

        goto L_80248CC0;
    // 0x80248C94: nop

L_80248C98:
    // 0x80248C98: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80248C9C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80248CA0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80248CA4: b           L_80248CC8
    // 0x80248CA8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
        goto L_80248CC8;
    // 0x80248CA8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_80248CAC:
    // 0x80248CAC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80248CB0: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80248CB4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80248CB8: b           L_80248CC8
    // 0x80248CBC: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
        goto L_80248CC8;
    // 0x80248CBC: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_80248CC0:
    // 0x80248CC0: b           L_80248CCC
    // 0x80248CC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80248CCC;
    // 0x80248CC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80248CC8:
    // 0x80248CC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80248CCC:
    // 0x80248CCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80248CD0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80248CD4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80248CD8: jr          $ra
    // 0x80248CDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80248CDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8021AC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021AC60: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8021AC64: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021AC68: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021AC6C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8021AC70: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8021AC74: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8021AC78: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8021AC7C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021AC80: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8021AC84: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021AC88: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021AC8C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021AC90: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021AC94: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021AC98: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021AC9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021ACA0: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8021ACA4: addu        $s7, $t6, $t7
    ctx->r23 = ADD32(ctx->r14, ctx->r15);
    // 0x8021ACA8: lhu         $v1, 0x0($s7)
    ctx->r3 = MEM_HU(ctx->r23, 0X0);
    // 0x8021ACAC: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021ACB0: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8021ACB4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021ACB8: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x8021ACBC: beq         $a1, $v1, L_8021B1C0
    if (ctx->r5 == ctx->r3) {
        // 0x8021ACC0: lw          $v0, 0x1C($t8)
        ctx->r2 = MEM_W(ctx->r24, 0X1C);
            goto L_8021B1C0;
    }
    // 0x8021ACC0: lw          $v0, 0x1C($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X1C);
    // 0x8021ACC4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8021ACC8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8021ACCC: lhu         $t1, 0x26($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X26);
    // 0x8021ACD0: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x8021ACD4: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8021ACD8: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8021ACDC: bne         $at, $zero, L_8021ACF8
    if (ctx->r1 != 0) {
        // 0x8021ACE0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8021ACF8;
    }
    // 0x8021ACE0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021ACE4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021ACE8: jal         0x80231A24
    // 0x8021ACEC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021ACEC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x8021ACF0: b           L_8021B1C4
    // 0x8021ACF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8021B1C4;
    // 0x8021ACF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021ACF8:
    // 0x8021ACF8: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x8021ACFC: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8021AD00: bne         $t4, $a1, L_8021AED0
    if (ctx->r12 != ctx->r5) {
        // 0x8021AD04: lw          $a0, 0x0($t3)
        ctx->r4 = MEM_W(ctx->r11, 0X0);
            goto L_8021AED0;
    }
    // 0x8021AD04: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x8021AD08: lbu         $a1, 0x18($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X18);
    // 0x8021AD0C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021AD10: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8021AD14: blez        $a1, L_8021AE38
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021AD18: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8021AE38;
    }
    // 0x8021AD18: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8021AD1C: andi        $a0, $a1, 0x3
    ctx->r4 = ctx->r5 & 0X3;
    // 0x8021AD20: beq         $a0, $zero, L_8021AD74
    if (ctx->r4 == 0) {
        // 0x8021AD24: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8021AD74;
    }
    // 0x8021AD24: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021AD28: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8021AD2C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021AD30: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021AD34: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8021AD38: sll         $s1, $zero, 1
    ctx->r17 = S32(0 << 1);
L_8021AD3C:
    // 0x8021AD3C: lw          $t5, 0x4($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X4);
    // 0x8021AD40: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8021AD44: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8021AD48: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x8021AD4C: lhu         $s0, 0x0($t6)
    ctx->r16 = MEM_HU(ctx->r14, 0X0);
    // 0x8021AD50: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8021AD54: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x8021AD58: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x8021AD5C: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8021AD60: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8021AD64: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8021AD68: bne         $v0, $s2, L_8021AD3C
    if (ctx->r2 != ctx->r18) {
        // 0x8021AD6C: sw          $zero, 0x0($t2)
        MEM_W(0X0, ctx->r10) = 0;
            goto L_8021AD3C;
    }
    // 0x8021AD6C: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x8021AD70: beq         $s2, $v1, L_8021AE34
    if (ctx->r18 == ctx->r3) {
        // 0x8021AD74: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8021AE34;
    }
L_8021AD74:
    // 0x8021AD74: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021AD78: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8021AD7C: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8021AD80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021AD84: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x8021AD88: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
L_8021AD8C:
    // 0x8021AD8C: lw          $t3, 0x4($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X4);
    // 0x8021AD90: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8021AD94: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x8021AD98: lhu         $s0, 0x0($t4)
    ctx->r16 = MEM_HU(ctx->r12, 0X0);
    // 0x8021AD9C: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x8021ADA0: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x8021ADA4: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8021ADA8: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x8021ADAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021ADB0: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x8021ADB4: lw          $t1, 0x4($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X4);
    // 0x8021ADB8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x8021ADBC: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x8021ADC0: lhu         $s0, 0x2($t2)
    ctx->r16 = MEM_HU(ctx->r10, 0X2);
    // 0x8021ADC4: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x8021ADC8: sb          $zero, 0x0($t4)
    MEM_B(0X0, ctx->r12) = 0;
    // 0x8021ADCC: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x8021ADD0: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8021ADD4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8021ADD8: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x8021ADDC: lw          $t8, 0x4($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X4);
    // 0x8021ADE0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8021ADE4: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8021ADE8: lhu         $s0, 0x4($t9)
    ctx->r16 = MEM_HU(ctx->r25, 0X4);
    // 0x8021ADEC: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x8021ADF0: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x8021ADF4: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x8021ADF8: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x8021ADFC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8021AE00: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x8021AE04: lw          $t6, 0x4($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X4);
    // 0x8021AE08: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8021AE0C: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x8021AE10: lhu         $s0, 0x6($t7)
    ctx->r16 = MEM_HU(ctx->r15, 0X6);
    // 0x8021AE14: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8021AE18: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x8021AE1C: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x8021AE20: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8021AE24: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8021AE28: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8021AE2C: bne         $s1, $v0, L_8021AD8C
    if (ctx->r17 != ctx->r2) {
        // 0x8021AE30: sw          $zero, 0x0($t3)
        MEM_W(0X0, ctx->r11) = 0;
            goto L_8021AD8C;
    }
    // 0x8021AE30: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
L_8021AE34:
    // 0x8021AE34: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8021AE38:
    // 0x8021AE38: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8021AE3C: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x8021AE40: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8021AE44: sh          $t4, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r12;
    // 0x8021AE48: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8021AE4C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021AE50: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8021AE54: blez        $a0, L_8021B1C0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8021AE58: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8021B1C0;
    }
    // 0x8021AE58: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8021AE5C:
    // 0x8021AE5C: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x8021AE60: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021AE64: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x8021AE68: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x8021AE6C: bnel        $a3, $t7, L_8021AEBC
    if (ctx->r7 != ctx->r15) {
        // 0x8021AE70: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8021AEBC;
    }
    goto skip_0;
    // 0x8021AE70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8021AE74: beq         $at, $zero, L_8021AEA8
    if (ctx->r1 == 0) {
        // 0x8021AE78: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8021AEA8;
    }
    // 0x8021AE78: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8021AE7C: sll         $v1, $s0, 1
    ctx->r3 = S32(ctx->r16 << 1);
    // 0x8021AE80: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
L_8021AE84:
    // 0x8021AE84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021AE88: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
    // 0x8021AE8C: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x8021AE90: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8021AE94: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x8021AE98: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8021AE9C: slt         $at, $s0, $a0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021AEA0: bnel        $at, $zero, L_8021AE84
    if (ctx->r1 != 0) {
        // 0x8021AEA4: lw          $t8, 0x0($a2)
        ctx->r24 = MEM_W(ctx->r6, 0X0);
            goto L_8021AE84;
    }
    goto skip_1;
    // 0x8021AEA4: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    skip_1:
L_8021AEA8:
    // 0x8021AEA8: addiu       $t1, $a0, -0x1
    ctx->r9 = ADD32(ctx->r4, -0X1);
    // 0x8021AEAC: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    // 0x8021AEB0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021AEB4: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x8021AEB8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8021AEBC:
    // 0x8021AEBC: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021AEC0: bne         $at, $zero, L_8021AE5C
    if (ctx->r1 != 0) {
        // 0x8021AEC4: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_8021AE5C;
    }
    // 0x8021AEC4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8021AEC8: b           L_8021B1C4
    // 0x8021AECC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8021B1C4;
    // 0x8021AECC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021AED0:
    // 0x8021AED0: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x8021AED4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8021AED8: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8021AEDC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8021AEE0: bne         $t5, $zero, L_8021AF04
    if (ctx->r13 != 0) {
        // 0x8021AEE4: sw          $t5, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r13;
            goto L_8021AF04;
    }
    // 0x8021AEE4: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x8021AEE8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021AEEC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021AEF0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8021AEF4: jal         0x80231A24
    // 0x8021AEF8: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021AEF8: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_1:
    // 0x8021AEFC: b           L_8021B1C4
    // 0x8021AF00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8021B1C4;
    // 0x8021AF00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021AF04:
    // 0x8021AF04: sw          $zero, 0x10($s7)
    MEM_W(0X10, ctx->r23) = 0;
    // 0x8021AF08: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8021AF0C: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8021AF10: bne         $a1, $t0, L_8021AF24
    if (ctx->r5 != ctx->r8) {
        // 0x8021AF14: swc1        $f4, 0xC($s7)
        MEM_W(0XC, ctx->r23) = ctx->f4.u32l;
            goto L_8021AF24;
    }
    // 0x8021AF14: swc1        $f4, 0xC($s7)
    MEM_W(0XC, ctx->r23) = ctx->f4.u32l;
    // 0x8021AF18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021AF1C: b           L_8021AF94
    // 0x8021AF20: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
        goto L_8021AF94;
    // 0x8021AF20: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
L_8021AF24:
    // 0x8021AF24: beq         $a0, $zero, L_8021AF34
    if (ctx->r4 == 0) {
        // 0x8021AF28: lw          $s0, 0x44($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X44);
            goto L_8021AF34;
    }
    // 0x8021AF28: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x8021AF2C: b           L_8021AF94
    // 0x8021AF30: lbu         $a1, 0x18($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X18);
        goto L_8021AF94;
    // 0x8021AF30: lbu         $a1, 0x18($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X18);
L_8021AF34:
    // 0x8021AF34: lhu         $t7, 0x28($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X28);
    // 0x8021AF38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021AF3C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8021AF40: blez        $t7, L_8021AF94
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8021AF44: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8021AF94;
    }
    // 0x8021AF44: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021AF48: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021AF4C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021AF50: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021AF54: lw          $t8, 0x4($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X4);
L_8021AF58:
    // 0x8021AF58: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8021AF5C: lhu         $v0, 0x0($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X0);
    // 0x8021AF60: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021AF64: beql        $at, $zero, L_8021AF98
    if (ctx->r1 == 0) {
        // 0x8021AF68: lw          $t5, 0x54($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X54);
            goto L_8021AF98;
    }
    goto skip_2;
    // 0x8021AF68: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    skip_2:
    // 0x8021AF6C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8021AF70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8021AF74: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8021AF78: addu        $t3, $t1, $v0
    ctx->r11 = ADD32(ctx->r9, ctx->r2);
    // 0x8021AF7C: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x8021AF80: lhu         $t4, 0x28($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X28);
    // 0x8021AF84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021AF88: slt         $at, $s2, $t4
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8021AF8C: bnel        $at, $zero, L_8021AF58
    if (ctx->r1 != 0) {
        // 0x8021AF90: lw          $t8, 0x4($s7)
        ctx->r24 = MEM_W(ctx->r23, 0X4);
            goto L_8021AF58;
    }
    goto skip_3;
    // 0x8021AF90: lw          $t8, 0x4($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X4);
    skip_3:
L_8021AF94:
    // 0x8021AF94: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
L_8021AF98:
    // 0x8021AF98: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021AF9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021AFA0: lbu         $t0, 0x18($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X18);
    // 0x8021AFA4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8021AFA8: slt         $at, $t0, $a1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8021AFAC: beq         $at, $zero, L_8021B044
    if (ctx->r1 == 0) {
        // 0x8021AFB0: or          $fp, $t0, $zero
        ctx->r30 = ctx->r8 | 0;
            goto L_8021B044;
    }
    // 0x8021AFB0: or          $fp, $t0, $zero
    ctx->r30 = ctx->r8 | 0;
    // 0x8021AFB4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8021AFB8: slt         $at, $a1, $fp
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x8021AFBC: bne         $at, $zero, L_8021B01C
    if (ctx->r1 != 0) {
        // 0x8021AFC0: or          $s2, $a1, $zero
        ctx->r18 = ctx->r5 | 0;
            goto L_8021B01C;
    }
    // 0x8021AFC0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8021AFC4: subu        $a2, $a1, $fp
    ctx->r6 = SUB32(ctx->r5, ctx->r30);
    // 0x8021AFC8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8021AFCC: andi        $t2, $a2, 0x3
    ctx->r10 = ctx->r6 & 0X3;
    // 0x8021AFD0: negu        $a2, $t2
    ctx->r6 = SUB32(0, ctx->r10);
    // 0x8021AFD4: beq         $a2, $zero, L_8021B000
    if (ctx->r6 == 0) {
        // 0x8021AFD8: lw          $a3, 0x4($s7)
        ctx->r7 = MEM_W(ctx->r23, 0X4);
            goto L_8021B000;
    }
    // 0x8021AFD8: lw          $a3, 0x4($s7)
    ctx->r7 = MEM_W(ctx->r23, 0X4);
    // 0x8021AFDC: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8021AFE0: addu        $v0, $a3, $t6
    ctx->r2 = ADD32(ctx->r7, ctx->r14);
    // 0x8021AFE4: addu        $v1, $a2, $a1
    ctx->r3 = ADD32(ctx->r6, ctx->r5);
L_8021AFE8:
    // 0x8021AFE8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8021AFEC: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x8021AFF0: bne         $v1, $s2, L_8021AFE8
    if (ctx->r3 != ctx->r18) {
        // 0x8021AFF4: addiu       $v0, $v0, -0x2
        ctx->r2 = ADD32(ctx->r2, -0X2);
            goto L_8021AFE8;
    }
    // 0x8021AFF4: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8021AFF8: addiu       $t7, $s2, 0x1
    ctx->r15 = ADD32(ctx->r18, 0X1);
    // 0x8021AFFC: beq         $t7, $fp, L_8021B01C
    if (ctx->r15 == ctx->r30) {
        // 0x8021B000: sll         $t8, $s2, 1
        ctx->r24 = S32(ctx->r18 << 1);
            goto L_8021B01C;
    }
L_8021B000:
    // 0x8021B000: sll         $t8, $s2, 1
    ctx->r24 = S32(ctx->r18 << 1);
    // 0x8021B004: addu        $v0, $a3, $t8
    ctx->r2 = ADD32(ctx->r7, ctx->r24);
    // 0x8021B008: addiu       $v1, $fp, -0x1
    ctx->r3 = ADD32(ctx->r30, -0X1);
L_8021B00C:
    // 0x8021B00C: addiu       $s2, $s2, -0x4
    ctx->r18 = ADD32(ctx->r18, -0X4);
    // 0x8021B010: lhu         $s0, -0x6($v0)
    ctx->r16 = MEM_HU(ctx->r2, -0X6);
    // 0x8021B014: bne         $s2, $v1, L_8021B00C
    if (ctx->r18 != ctx->r3) {
        // 0x8021B018: addiu       $v0, $v0, -0x8
        ctx->r2 = ADD32(ctx->r2, -0X8);
            goto L_8021B00C;
    }
    // 0x8021B018: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_8021B01C:
    // 0x8021B01C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8021B020: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8021B024: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8021B028: addu        $t1, $t9, $s0
    ctx->r9 = ADD32(ctx->r25, ctx->r16);
    // 0x8021B02C: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x8021B030: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x8021B034: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x8021B038: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8021B03C: b           L_8021B104
    // 0x8021B040: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
        goto L_8021B104;
    // 0x8021B040: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
L_8021B044:
    // 0x8021B044: slt         $at, $v1, $fp
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x8021B048: beq         $at, $zero, L_8021B104
    if (ctx->r1 == 0) {
        // 0x8021B04C: slt         $at, $v1, $fp
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r30) ? 1 : 0;
            goto L_8021B104;
    }
    // 0x8021B04C: slt         $at, $v1, $fp
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x8021B050: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021B054: beq         $at, $zero, L_8021B104
    if (ctx->r1 == 0) {
        // 0x8021B058: or          $s2, $v1, $zero
        ctx->r18 = ctx->r3 | 0;
            goto L_8021B104;
    }
    // 0x8021B058: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x8021B05C: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8021B060: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8021B064: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8021B068:
    // 0x8021B068: lhu         $v1, 0x2A($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2A);
    // 0x8021B06C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8021B070: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021B074: beql        $at, $zero, L_8021B0A4
    if (ctx->r1 == 0) {
        // 0x8021B078: slt         $at, $s0, $v1
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8021B0A4;
    }
    goto skip_4;
    // 0x8021B078: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    skip_4:
    // 0x8021B07C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8021B080: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
L_8021B084:
    // 0x8021B084: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8021B088: beql        $t6, $zero, L_8021B0A4
    if (ctx->r14 == 0) {
        // 0x8021B08C: slt         $at, $s0, $v1
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8021B0A4;
    }
    goto skip_5;
    // 0x8021B08C: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    skip_5:
    // 0x8021B090: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021B094: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021B098: bne         $at, $zero, L_8021B084
    if (ctx->r1 != 0) {
        // 0x8021B09C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8021B084;
    }
    // 0x8021B09C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8021B0A0: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
L_8021B0A4:
    // 0x8021B0A4: bne         $at, $zero, L_8021B0CC
    if (ctx->r1 != 0) {
        // 0x8021B0A8: addu        $t7, $fp, $s0
        ctx->r15 = ADD32(ctx->r30, ctx->r16);
            goto L_8021B0CC;
    }
    // 0x8021B0A8: addu        $t7, $fp, $s0
    ctx->r15 = ADD32(ctx->r30, ctx->r16);
    // 0x8021B0AC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8021B0B0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8021B0B4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8021B0B8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8021B0BC: jal         0x80231C58
    // 0x8021B0C0: subu        $a0, $t7, $s2
    ctx->r4 = SUB32(ctx->r15, ctx->r18);
    static_3_80231C58(rdram, ctx);
        goto after_2;
    // 0x8021B0C0: subu        $a0, $t7, $s2
    ctx->r4 = SUB32(ctx->r15, ctx->r18);
    after_2:
    // 0x8021B0C4: b           L_8021B1C4
    // 0x8021B0C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8021B1C4;
    // 0x8021B0C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021B0CC:
    // 0x8021B0CC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8021B0D0: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x8021B0D4: sll         $t2, $s2, 1
    ctx->r10 = S32(ctx->r18 << 1);
    // 0x8021B0D8: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x8021B0DC: sb          $a1, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r5;
    // 0x8021B0E0: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8021B0E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8021B0E8: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8021B0EC: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8021B0F0: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    // 0x8021B0F4: lw          $t5, 0x4($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X4);
    // 0x8021B0F8: addu        $t6, $t5, $t2
    ctx->r14 = ADD32(ctx->r13, ctx->r10);
    // 0x8021B0FC: bne         $s2, $fp, L_8021B068
    if (ctx->r18 != ctx->r30) {
        // 0x8021B100: sh          $s0, 0x0($t6)
        MEM_H(0X0, ctx->r14) = ctx->r16;
            goto L_8021B068;
    }
    // 0x8021B100: sh          $s0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r16;
L_8021B104:
    // 0x8021B104: lw          $t7, 0x4($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X4);
    // 0x8021B108: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x8021B10C: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8021B110: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021B114: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8021B118: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x8021B11C: blez        $fp, L_8021B1B0
    if (SIGNED(ctx->r30) <= 0) {
        // 0x8021B120: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8021B1B0;
    }
    // 0x8021B120: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021B124: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8021B128: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x8021B12C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021B130: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_8021B134:
    // 0x8021B134: lw          $t1, 0x4($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X4);
    // 0x8021B138: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x8021B13C: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x8021B140: addu        $t3, $t1, $s1
    ctx->r11 = ADD32(ctx->r9, ctx->r17);
    // 0x8021B144: lhu         $s0, 0x0($t3)
    ctx->r16 = MEM_HU(ctx->r11, 0X0);
    // 0x8021B148: lw          $t2, 0x14($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X14);
    // 0x8021B14C: sll         $s3, $s0, 6
    ctx->r19 = S32(ctx->r16 << 6);
    // 0x8021B150: addu        $a0, $t4, $s3
    ctx->r4 = ADD32(ctx->r12, ctx->r19);
    // 0x8021B154: jal         0x80228DE0
    // 0x8021B158: addu        $a1, $t2, $s5
    ctx->r5 = ADD32(ctx->r10, ctx->r21);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x8021B158: addu        $a1, $t2, $s5
    ctx->r5 = ADD32(ctx->r10, ctx->r21);
    after_3:
    // 0x8021B15C: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8021B160: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8021B164: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021B168: bne         $s2, $zero, L_8021B1A0
    if (ctx->r18 != 0) {
        // 0x8021B16C: sw          $zero, 0x0($t8)
        MEM_W(0X0, ctx->r24) = 0;
            goto L_8021B1A0;
    }
    // 0x8021B16C: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8021B170: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8021B174: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021B178: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021B17C: lwc1        $f8, 0x20($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X20);
    // 0x8021B180: lw          $t1, 0x0($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X0);
    // 0x8021B184: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021B188: addu        $a0, $t1, $s3
    ctx->r4 = ADD32(ctx->r9, ctx->r19);
    // 0x8021B18C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021B190: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021B194: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8021B198: jal         0x8022A210
    // 0x8021B19C: nop

    static_3_8022A210(rdram, ctx);
        goto after_4;
    // 0x8021B19C: nop

    after_4:
L_8021B1A0:
    // 0x8021B1A0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8021B1A4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8021B1A8: bne         $s2, $fp, L_8021B134
    if (ctx->r18 != ctx->r30) {
        // 0x8021B1AC: addiu       $s5, $s5, 0x40
        ctx->r21 = ADD32(ctx->r21, 0X40);
            goto L_8021B134;
    }
    // 0x8021B1AC: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
L_8021B1B0:
    // 0x8021B1B0: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8021B1B4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8021B1B8: sb          $t4, 0x8($s7)
    MEM_B(0X8, ctx->r23) = ctx->r12;
    // 0x8021B1BC: sh          $t3, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r11;
L_8021B1C0:
    // 0x8021B1C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8021B1C4:
    // 0x8021B1C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021B1C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021B1CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021B1D0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021B1D4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021B1D8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021B1DC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021B1E0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8021B1E4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8021B1E8: jr          $ra
    // 0x8021B1EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8021B1EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_802054D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802054D8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802054DC: lhu         $a2, 0x0($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X0);
    // 0x802054E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802054E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802054E8: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x802054EC: beq         $at, $zero, L_80205510
    if (ctx->r1 == 0) {
        // 0x802054F0: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80205510;
    }
    // 0x802054F0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802054F4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802054F8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802054FC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80205500: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80205504: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80205508: bne         $a0, $zero, L_80205524
    if (ctx->r4 != 0) {
        // 0x8020550C: nop
    
            goto L_80205524;
    }
    // 0x8020550C: nop

L_80205510:
    // 0x80205510: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205514: jal         0x80231A24
    // 0x80205518: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80205518: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8020551C: b           L_802055E4
    // 0x80205520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802055E4;
    // 0x80205520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80205524:
    // 0x80205524: jal         0x80223840
    // 0x80205528: nop

    func_80223840(rdram, ctx);
        goto after_1;
    // 0x80205528: nop

    after_1:
    // 0x8020552C: lui         $a3, 0x2E43
    ctx->r7 = S32(0X2E43 << 16);
    // 0x80205530: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80205534: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80205538: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8020553C: ori         $a3, $a3, 0x544C
    ctx->r7 = ctx->r7 | 0X544C;
    // 0x80205540: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80205544: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80205548: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x8020554C: jal         0x80223B30
    // 0x80205550: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_80223B30(rdram, ctx);
        goto after_2;
    // 0x80205550: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80205554: lui         $a3, 0x2E54
    ctx->r7 = S32(0X2E54 << 16);
    // 0x80205558: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8020555C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80205560: ori         $a3, $a3, 0x424C
    ctx->r7 = ctx->r7 | 0X424C;
    // 0x80205564: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80205568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020556C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80205570: jal         0x80223B30
    // 0x80205574: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_80223B30(rdram, ctx);
        goto after_3;
    // 0x80205574: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80205578: jal         0x802238F0
    // 0x8020557C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802238F0(rdram, ctx);
        goto after_4;
    // 0x8020557C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x80205580: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80205584: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80205588: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8020558C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80205590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205594: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80205598: jal         0x80236CD0
    // 0x8020559C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    static_3_80236CD0(rdram, ctx);
        goto after_5;
    // 0x8020559C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_5:
    // 0x802055A0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x802055A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802055A8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802055AC: jal         0x8022B460
    // 0x802055B0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_8022B460(rdram, ctx);
        goto after_6;
    // 0x802055B0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x802055B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802055B8: jal         0x80236E34
    // 0x802055BC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    static_3_80236E34(rdram, ctx);
        goto after_7;
    // 0x802055BC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_7:
    // 0x802055C0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802055C4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802055C8: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802055CC: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    // 0x802055D0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802055D4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x802055D8: jal         0x80237F20
    // 0x802055DC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_80237F20(rdram, ctx);
        goto after_8;
    // 0x802055DC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_8:
    // 0x802055E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802055E4:
    // 0x802055E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802055E8: jr          $ra
    // 0x802055EC: nop

    return;
    // 0x802055EC: nop

;}
RECOMP_FUNC void D_802D4FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D5028: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D502C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D5030: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D5034: bne         $a0, $zero, L_802D504C
    if (ctx->r4 != 0) {
        // 0x802D5038: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802D504C;
    }
    // 0x802D5038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D503C: jal         0x802C67EC
    // 0x802D5040: addiu       $a0, $zero, 0xC5C
    ctx->r4 = ADD32(0, 0XC5C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D5040: addiu       $a0, $zero, 0xC5C
    ctx->r4 = ADD32(0, 0XC5C);
    after_0:
    // 0x802D5044: beq         $v0, $zero, L_802D5098
    if (ctx->r2 == 0) {
        // 0x802D5048: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802D5098;
    }
    // 0x802D5048: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802D504C:
    // 0x802D504C: jal         0x8028BF30
    // 0x802D5050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8028BF30(rdram, ctx);
        goto after_1;
    // 0x802D5050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802D5054: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D5058: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D505C: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x802D5060: jal         0x802C498C
    // 0x802D5064: addiu       $a0, $s0, 0x448
    ctx->r4 = ADD32(ctx->r16, 0X448);
    static_3_802C498C(rdram, ctx);
        goto after_2;
    // 0x802D5064: addiu       $a0, $s0, 0x448
    ctx->r4 = ADD32(ctx->r16, 0X448);
    after_2:
    // 0x802D5068: jal         0x802C498C
    // 0x802D506C: addiu       $a0, $s0, 0x5DC
    ctx->r4 = ADD32(ctx->r16, 0X5DC);
    static_3_802C498C(rdram, ctx);
        goto after_3;
    // 0x802D506C: addiu       $a0, $s0, 0x5DC
    ctx->r4 = ADD32(ctx->r16, 0X5DC);
    after_3:
    // 0x802D5070: jal         0x802C498C
    // 0x802D5074: addiu       $a0, $s0, 0x770
    ctx->r4 = ADD32(ctx->r16, 0X770);
    static_3_802C498C(rdram, ctx);
        goto after_4;
    // 0x802D5074: addiu       $a0, $s0, 0x770
    ctx->r4 = ADD32(ctx->r16, 0X770);
    after_4:
    // 0x802D5078: jal         0x802C498C
    // 0x802D507C: addiu       $a0, $s0, 0x904
    ctx->r4 = ADD32(ctx->r16, 0X904);
    static_3_802C498C(rdram, ctx);
        goto after_5;
    // 0x802D507C: addiu       $a0, $s0, 0x904
    ctx->r4 = ADD32(ctx->r16, 0X904);
    after_5:
    // 0x802D5080: jal         0x802C498C
    // 0x802D5084: addiu       $a0, $s0, 0xA98
    ctx->r4 = ADD32(ctx->r16, 0XA98);
    static_3_802C498C(rdram, ctx);
        goto after_6;
    // 0x802D5084: addiu       $a0, $s0, 0xA98
    ctx->r4 = ADD32(ctx->r16, 0XA98);
    after_6:
    // 0x802D5088: addiu       $v1, $zero, 0x37
    ctx->r3 = ADD32(0, 0X37);
    // 0x802D508C: sb          $v1, 0xC40($s0)
    MEM_B(0XC40, ctx->r16) = ctx->r3;
    // 0x802D5090: sb          $v1, 0xC41($s0)
    MEM_B(0XC41, ctx->r16) = ctx->r3;
    // 0x802D5094: sb          $zero, 0xC54($s0)
    MEM_B(0XC54, ctx->r16) = 0;
L_802D5098:
    // 0x802D5098: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D509C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802D50A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D50A4: jr          $ra
    // 0x802D50A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802D50A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8021FF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021FF64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021FF68: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8021FF6C: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x8021FF70: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x8021FF74: lhu         $a0, 0x20($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X20);
    // 0x8021FF78: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021FF7C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8021FF80: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8021FF84: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8021FF88: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8021FF8C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8021FF90: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8021FF94: jal         0x8022BA58
    // 0x8021FF98: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x8021FF98: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8021FF9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021FFA0: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8021FFA4: lhu         $a0, 0x20($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X20);
    // 0x8021FFA8: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x8021FFAC: jal         0x8022BA58
    // 0x8021FFB0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_1;
    // 0x8021FFB0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x8021FFB4: lhu         $a2, 0x20($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X20);
    // 0x8021FFB8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8021FFBC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8021FFC0: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x8021FFC4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8021FFC8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8021FFCC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8021FFD0: jal         0x8022B780
    // 0x8021FFD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_2;
    // 0x8021FFD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8021FFD8: lhu         $a2, 0x20($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X20);
    // 0x8021FFDC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021FFE0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8021FFE4: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x8021FFE8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8021FFEC: jal         0x8022B780
    // 0x8021FFF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_3;
    // 0x8021FFF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8021FFF4: lhu         $s0, 0x2E($s5)
    ctx->r16 = MEM_HU(ctx->r21, 0X2E);
    // 0x8021FFF8: addiu       $s0, $s0, 0x21
    ctx->r16 = ADD32(ctx->r16, 0X21);
    // 0x8021FFFC: sll         $s1, $s0, 5
    ctx->r17 = S32(ctx->r16 << 5);
    // 0x80220000: jal         0x8022BA58
    // 0x80220004: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_4;
    // 0x80220004: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80220008: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022000C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80220010: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80220014: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80220018: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022001C: jal         0x8022B780
    // 0x80220020: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_5;
    // 0x80220020: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x80220024: lhu         $a0, 0x22($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X22);
    // 0x80220028: sll         $t4, $a0, 6
    ctx->r12 = S32(ctx->r4 << 6);
    // 0x8022002C: jal         0x8022BA58
    // 0x80220030: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_6;
    // 0x80220030: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_6:
    // 0x80220034: lhu         $a0, 0x22($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X22);
    // 0x80220038: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8022003C: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80220040: sll         $t5, $a0, 6
    ctx->r13 = S32(ctx->r4 << 6);
    // 0x80220044: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80220048: jal         0x8022BA58
    // 0x8022004C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_7;
    // 0x8022004C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_7:
    // 0x80220050: lhu         $a0, 0x22($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X22);
    // 0x80220054: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80220058: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8022005C: jal         0x8022BA58
    // 0x80220060: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_8;
    // 0x80220060: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_8:
    // 0x80220064: lhu         $a2, 0x22($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X22);
    // 0x80220068: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8022006C: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80220070: sll         $t7, $a2, 6
    ctx->r15 = S32(ctx->r6 << 6);
    // 0x80220074: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80220078: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8022007C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80220080: jal         0x8022B780
    // 0x80220084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_9;
    // 0x80220084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80220088: lhu         $a2, 0x22($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X22);
    // 0x8022008C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80220090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80220094: sll         $t8, $a2, 6
    ctx->r24 = S32(ctx->r6 << 6);
    // 0x80220098: jal         0x8022B780
    // 0x8022009C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_10;
    // 0x8022009C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_10:
    // 0x802200A0: lhu         $a2, 0x22($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X22);
    // 0x802200A4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802200A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802200AC: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x802200B0: jal         0x8022B780
    // 0x802200B4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_11;
    // 0x802200B4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_11:
    // 0x802200B8: lhu         $a0, 0x28($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X28);
    // 0x802200BC: sll         $t4, $a0, 6
    ctx->r12 = S32(ctx->r4 << 6);
    // 0x802200C0: jal         0x8022BA58
    // 0x802200C4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_12;
    // 0x802200C4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_12:
    // 0x802200C8: lhu         $a2, 0x28($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X28);
    // 0x802200CC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802200D0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802200D4: sll         $t5, $a2, 6
    ctx->r13 = S32(ctx->r6 << 6);
    // 0x802200D8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x802200DC: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x802200E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802200E4: jal         0x8022B780
    // 0x802200E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_13;
    // 0x802200E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x802200EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802200F0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802200F4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802200F8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802200FC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80220100: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80220104: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80220108: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8022010C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80220110: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80220114: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80220118: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022011C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80220120: ori         $t5, $t5, 0xA800
    ctx->r13 = ctx->r13 | 0XA800;
    // 0x80220124: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80220128: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x8022012C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80220130: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80220134: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80220138: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8022013C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80220140: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80220144: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80220148: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8022014C: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x80220150: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80220154: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80220158: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x8022015C: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x80220160: ori         $t7, $t7, 0xA800
    ctx->r15 = ctx->r15 | 0XA800;
    // 0x80220164: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220168: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
    // 0x8022016C: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80220170: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x80220174: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80220178: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022017C: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    // 0x80220180: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x80220184: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80220188: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022018C: addu        $t9, $t1, $v1
    ctx->r25 = ADD32(ctx->r9, ctx->r3);
    // 0x80220190: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x80220194: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x80220198: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x8022019C: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x802201A0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802201A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802201A8: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x802201AC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802201B0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802201B4: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x802201B8: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802201BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802201C0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x802201C4: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802201C8: lhu         $t4, 0x2E($s5)
    ctx->r12 = MEM_HU(ctx->r21, 0X2E);
    // 0x802201CC: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802201D0: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802201D4: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802201D8: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x802201DC: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x802201E0: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x802201E4: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802201E8: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802201EC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802201F0: addiu       $t8, $zero, 0x13E
    ctx->r24 = ADD32(0, 0X13E);
    // 0x802201F4: addiu       $t9, $zero, 0xEE
    ctx->r25 = ADD32(0, 0XEE);
    // 0x802201F8: sh          $t8, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r24;
    // 0x802201FC: sh          $t3, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r11;
    // 0x80220200: sh          $t9, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r25;
    // 0x80220204: sh          $t3, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r11;
    // 0x80220208: blez        $t4, L_80220240
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8022020C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80220240;
    }
    // 0x8022020C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80220210: lh          $t5, 0x0($s4)
    ctx->r13 = MEM_H(ctx->r20, 0X0);
L_80220214:
    // 0x80220214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80220218: lh          $a1, 0x0($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X0);
    // 0x8022021C: lh          $a2, 0x0($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X0);
    // 0x80220220: lh          $a3, 0x0($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X0);
    // 0x80220224: jal         0x80222AA8
    // 0x80220228: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    static_3_80222AA8(rdram, ctx);
        goto after_14;
    // 0x80220228: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_14:
    // 0x8022022C: lhu         $t6, 0x2E($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X2E);
    // 0x80220230: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80220234: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80220238: bnel        $at, $zero, L_80220214
    if (ctx->r1 != 0) {
        // 0x8022023C: lh          $t5, 0x0($s4)
        ctx->r13 = MEM_H(ctx->r20, 0X0);
            goto L_80220214;
    }
    goto skip_0;
    // 0x8022023C: lh          $t5, 0x0($s4)
    ctx->r13 = MEM_H(ctx->r20, 0X0);
    skip_0:
L_80220240:
    // 0x80220240: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80220244: jal         0x8022970C
    // 0x80220248: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x80220248: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_15:
    // 0x8022024C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80220250: jal         0x8022970C
    // 0x80220254: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x80220254: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_16:
    // 0x80220258: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022025C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80220260: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220264: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80220268: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022026C: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80220270: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80220274: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80220278: jal         0x80223600
    // 0x8022027C: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    static_3_80223600(rdram, ctx);
        goto after_17;
    // 0x8022027C: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    after_17:
    // 0x80220280: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80220284: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80220288: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022028C: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x80220290: beq         $t7, $zero, L_802202B0
    if (ctx->r15 == 0) {
        // 0x80220294: sw          $zero, 0x0($at)
        MEM_W(0X0, ctx->r1) = 0;
            goto L_802202B0;
    }
    // 0x80220294: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80220298: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022029C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802202A0: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802202A4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802202A8: b           L_802202BC
    // 0x802202AC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_802202BC;
    // 0x802202AC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_802202B0:
    // 0x802202B0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802202B4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802202B8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_802202BC:
    // 0x802202BC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802202C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802202C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802202C8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802202CC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802202D0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x802202D4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x802202D8: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x802202DC: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x802202E0: addiu       $t4, $t9, 0x2000
    ctx->r12 = ADD32(ctx->r25, 0X2000);
    // 0x802202E4: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802202E8: jr          $ra
    // 0x802202EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802202EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802ABC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABCF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802ABCF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802ABCFC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802ABD00: lbu         $t6, 0x1D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1D);
    // 0x802ABD04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ABD08: bne         $t6, $zero, L_802ABD24
    if (ctx->r14 != 0) {
        // 0x802ABD0C: lui         $t7, 0x0
        ctx->r15 = S32(0X0 << 16);
            goto L_802ABD24;
    }
    // 0x802ABD0C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802ABD10: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802ABD14: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802ABD18: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    // 0x802ABD1C: bne         $t7, $at, L_802ABD2C
    if (ctx->r15 != ctx->r1) {
        // 0x802ABD20: nop
    
            goto L_802ABD2C;
    }
    // 0x802ABD20: nop

L_802ABD24:
    // 0x802ABD24: b           L_802ABD2C
    // 0x802ABD28: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
        goto L_802ABD2C;
    // 0x802ABD28: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
L_802ABD2C:
    // 0x802ABD2C: jal         0x8021ACB0
    // 0x802ABD30: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802ABD30: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x802ABD34: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802ABD38: jal         0x8021B838
    // 0x802ABD3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802ABD3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802ABD40: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802ABD44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ABD48: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802ABD4C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ABD50: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x802ABD54: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802ABD58: lh          $t9, 0xB8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XB8);
    // 0x802ABD5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802ABD60: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x802ABD64: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802ABD68: jalr        $t9
    // 0x802ABD6C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802ABD6C: nop

    after_2:
    // 0x802ABD70: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802ABD74: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802ABD78: jal         0x802FD4B0
    // 0x802ABD7C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802ABD7C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x802ABD80: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABD84: jal         0x802FD498
    // 0x802ABD88: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802ABD88: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802ABD8C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABD90: jal         0x802FD4A4
    // 0x802ABD94: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802ABD94: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    after_5:
    // 0x802ABD98: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABD9C: jal         0x802FD480
    // 0x802ABDA0: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802ABDA0: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    after_6:
    // 0x802ABDA4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABDA8: jal         0x802FD48C
    // 0x802ABDAC: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802ABDAC: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    after_7:
    // 0x802ABDB0: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x802ABDB4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802ABDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802ABDBC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802ABDC0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802ABDC4: jal         0x80317194
    // 0x802ABDC8: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802ABDC8: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802ABDCC: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
    // 0x802ABDD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802ABDD4: sw          $v0, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r2;
    // 0x802ABDD8: sw          $v0, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r2;
    // 0x802ABDDC: sw          $v0, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r2;
    // 0x802ABDE0: bne         $t1, $zero, L_802ABDF8
    if (ctx->r9 != 0) {
        // 0x802ABDE4: sw          $v0, 0x2AC($s0)
        MEM_W(0X2AC, ctx->r16) = ctx->r2;
            goto L_802ABDF8;
    }
    // 0x802ABDE4: sw          $v0, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r2;
    // 0x802ABDE8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802ABDEC: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802ABDF0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802ABDF4: bne         $t2, $at, L_802ABE10
    if (ctx->r10 != ctx->r1) {
        // 0x802ABDF8: addiu       $t3, $zero, 0x26
        ctx->r11 = ADD32(0, 0X26);
            goto L_802ABE10;
    }
L_802ABDF8:
    // 0x802ABDF8: addiu       $t3, $zero, 0x26
    ctx->r11 = ADD32(0, 0X26);
    // 0x802ABDFC: addiu       $t4, $zero, 0x25
    ctx->r12 = ADD32(0, 0X25);
    // 0x802ABE00: addiu       $t5, $zero, 0x27
    ctx->r13 = ADD32(0, 0X27);
    // 0x802ABE04: sw          $t3, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r11;
    // 0x802ABE08: sw          $t4, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r12;
    // 0x802ABE0C: sw          $t5, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r13;
L_802ABE10:
    // 0x802ABE10: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802ABE14: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ABE18: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802ABE1C: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802ABE20: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802ABE24: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802ABE28: jal         0x802D51DC
    // 0x802ABE2C: nop

    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802ABE2C: nop

    after_9:
    // 0x802ABE30: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802ABE34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ABE38: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802ABE3C: jal         0x802C4A20
    // 0x802ABE40: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802ABE40: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802ABE44: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802ABE48: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802ABE4C: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802ABE50: jal         0x802C4A20
    // 0x802ABE54: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_11;
    // 0x802ABE54: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_11:
    // 0x802ABE58: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802ABE5C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x802ABE60: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802ABE64: jal         0x802C4A20
    // 0x802ABE68: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802ABE68: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802ABE6C: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802ABE70: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802ABE74: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    // 0x802ABE78: jal         0x802C4A20
    // 0x802ABE7C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_13;
    // 0x802ABE7C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_13:
    // 0x802ABE80: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x802ABE84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ABE88: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x802ABE8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802ABE90: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802ABE94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802ABE98: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ABE9C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802ABEA0: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x802ABEA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802ABEA8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802ABEAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ABEB0: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802ABEB4: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802ABEB8: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802ABEBC: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802ABEC0: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
    // 0x802ABEC4: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x802ABEC8: swc1        $f4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f4.u32l;
    // 0x802ABECC: jal         0x8022970C
    // 0x802ABED0: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_14;
    // 0x802ABED0: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_14:
    // 0x802ABED4: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802ABED8: jal         0x8022970C
    // 0x802ABEDC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x802ABEDC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_15:
    // 0x802ABEE0: lui         $a1, 0xC0FF
    ctx->r5 = S32(0XC0FF << 16);
    // 0x802ABEE4: lui         $a2, 0xC062
    ctx->r6 = S32(0XC062 << 16);
    // 0x802ABEE8: lui         $a3, 0xBE8B
    ctx->r7 = S32(0XBE8B << 16);
    // 0x802ABEEC: ori         $a3, $a3, 0xC6A8
    ctx->r7 = ctx->r7 | 0XC6A8;
    // 0x802ABEF0: ori         $a2, $a2, 0x7EFA
    ctx->r6 = ctx->r6 | 0X7EFA;
    // 0x802ABEF4: ori         $a1, $a1, 0xA5E3
    ctx->r5 = ctx->r5 | 0XA5E3;
    // 0x802ABEF8: jal         0x8022A0D0
    // 0x802ABEFC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8022A0D0(rdram, ctx);
        goto after_16;
    // 0x802ABEFC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_16:
    // 0x802ABF00: lui         $a1, 0x40FF
    ctx->r5 = S32(0X40FF << 16);
    // 0x802ABF04: lui         $a2, 0xC062
    ctx->r6 = S32(0XC062 << 16);
    // 0x802ABF08: lui         $a3, 0xBE8B
    ctx->r7 = S32(0XBE8B << 16);
    // 0x802ABF0C: ori         $a3, $a3, 0xC6A8
    ctx->r7 = ctx->r7 | 0XC6A8;
    // 0x802ABF10: ori         $a2, $a2, 0x7EFA
    ctx->r6 = ctx->r6 | 0X7EFA;
    // 0x802ABF14: ori         $a1, $a1, 0xA5E3
    ctx->r5 = ctx->r5 | 0XA5E3;
    // 0x802ABF18: jal         0x8022A0D0
    // 0x802ABF1C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802ABF1C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_17:
    // 0x802ABF20: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802ABF24: jal         0x803169A0
    // 0x802ABF28: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_18;
    // 0x802ABF28: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x802ABF2C: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802ABF30: jal         0x803169A0
    // 0x802ABF34: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    static_3_803169A0(rdram, ctx);
        goto after_19;
    // 0x802ABF34: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_19:
    // 0x802ABF38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802ABF3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802ABF40: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802ABF44: jr          $ra
    // 0x802ABF48: nop

    return;
    // 0x802ABF48: nop

;}
RECOMP_FUNC void D_802D0E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D0F18: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802D0F1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D0F20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D0F24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D0F28: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802D0F2C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802D0F30: lw          $a0, 0x4170($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4170);
    // 0x802D0F34: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x802D0F38: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x802D0F3C: jal         0x80318498
    // 0x802D0F40: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    static_3_80318498(rdram, ctx);
        goto after_0;
    // 0x802D0F40: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x802D0F44: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802D0F48: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802D0F4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D0F50: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802D0F54: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802D0F58: nop

    // 0x802D0F5C: bc1fl       L_802D0F90
    if (!c1cs) {
        // 0x802D0F60: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_802D0F90;
    }
    goto skip_0;
    // 0x802D0F60: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_0:
    // 0x802D0F64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0F68: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0F6C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802D0F70: mul.s       $f0, $f12, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x802D0F74: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802D0F78: nop

    // 0x802D0F7C: bc1f        L_802D0FD8
    if (!c1cs) {
        // 0x802D0F80: nop
    
            goto L_802D0FD8;
    }
    // 0x802D0F80: nop

    // 0x802D0F84: b           L_802D0FD8
    // 0x802D0F88: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
        goto L_802D0FD8;
    // 0x802D0F88: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x802D0F8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_802D0F90:
    // 0x802D0F90: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802D0F94: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x802D0F98: nop

    // 0x802D0F9C: bc1fl       L_802D0FD4
    if (!c1cs) {
        // 0x802D0FA0: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_802D0FD4;
    }
    goto skip_1;
    // 0x802D0FA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x802D0FA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D0FA8: sub.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x802D0FAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0FB0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0FB4: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802D0FB8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802D0FBC: nop

    // 0x802D0FC0: bc1f        L_802D0FD8
    if (!c1cs) {
        // 0x802D0FC4: nop
    
            goto L_802D0FD8;
    }
    // 0x802D0FC4: nop

    // 0x802D0FC8: b           L_802D0FD8
    // 0x802D0FCC: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_802D0FD8;
    // 0x802D0FCC: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x802D0FD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_802D0FD4:
    // 0x802D0FD4: nop

L_802D0FD8:
    // 0x802D0FD8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802D0FDC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0FE0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0FE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802D0FE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D0FEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D0FF0: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802D0FF4: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802D0FF8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802D0FFC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802D1000: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x802D1004: jal         0x8021CEF8
    // 0x802D1008: nop

    static_3_8021CEF8(rdram, ctx);
        goto after_1;
    // 0x802D1008: nop

    after_1:
    // 0x802D100C: lbu         $t6, 0x70($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X70);
    // 0x802D1010: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802D1014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D1018: beql        $t6, $zero, L_802D1038
    if (ctx->r14 == 0) {
        // 0x802D101C: lbu         $t7, 0x71($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X71);
            goto L_802D1038;
    }
    goto skip_2;
    // 0x802D101C: lbu         $t7, 0x71($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X71);
    skip_2:
    // 0x802D1020: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x802D1024: jal         0x80300E14
    // 0x802D1028: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    static_3_80300E14(rdram, ctx);
        goto after_2;
    // 0x802D1028: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x802D102C: b           L_802D10E4
    // 0x802D1030: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802D10E4;
    // 0x802D1030: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802D1034: lbu         $t7, 0x71($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X71);
L_802D1038:
    // 0x802D1038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D103C: beql        $t7, $zero, L_802D105C
    if (ctx->r15 == 0) {
        // 0x802D1040: lbu         $t8, 0xE0A($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0XE0A);
            goto L_802D105C;
    }
    goto skip_3;
    // 0x802D1040: lbu         $t8, 0xE0A($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE0A);
    skip_3:
    // 0x802D1044: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x802D1048: jal         0x80301074
    // 0x802D104C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    static_3_80301074(rdram, ctx);
        goto after_3;
    // 0x802D104C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_3:
    // 0x802D1050: b           L_802D10E4
    // 0x802D1054: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802D10E4;
    // 0x802D1054: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802D1058: lbu         $t8, 0xE0A($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE0A);
L_802D105C:
    // 0x802D105C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D1060: beq         $t8, $zero, L_802D10BC
    if (ctx->r24 == 0) {
        // 0x802D1064: nop
    
            goto L_802D10BC;
    }
    // 0x802D1064: nop

    // 0x802D1068: jal         0x80309740
    // 0x802D106C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    static_3_80309740(rdram, ctx);
        goto after_4;
    // 0x802D106C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_4:
    // 0x802D1070: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D1074: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802D1078: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802D107C: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802D1080: addiu       $v1, $a0, 0x6D0
    ctx->r3 = ADD32(ctx->r4, 0X6D0);
    // 0x802D1084: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D1088: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x802D108C: swc1        $f4, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f4.u32l;
    // 0x802D1090: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D1094: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802D1098: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802D109C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802D10A0: jal         0x802B0078
    // 0x802D10A4: nop

    static_3_802B0078(rdram, ctx);
        goto after_5;
    // 0x802D10A4: nop

    after_5:
    // 0x802D10A8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802D10AC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802D10B0: sb          $t9, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r25;
    // 0x802D10B4: b           L_802D10E0
    // 0x802D10B8: sh          $t0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r8;
        goto L_802D10E0;
    // 0x802D10B8: sh          $t0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r8;
L_802D10BC:
    // 0x802D10BC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D10C0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802D10C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802D10C8: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x802D10CC: nop

    // 0x802D10D0: bc1fl       L_802D10E4
    if (!c1cs) {
        // 0x802D10D4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802D10E4;
    }
    goto skip_4;
    // 0x802D10D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x802D10D8: sb          $t1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r9;
    // 0x802D10DC: sh          $t2, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r10;
L_802D10E0:
    // 0x802D10E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802D10E4:
    // 0x802D10E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D10E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802D10EC: jr          $ra
    // 0x802D10F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D10F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8027FAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027FB48: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8027FB4C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8027FB50: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8027FB54: addiu       $a0, $sp, 0x8
    ctx->r4 = ADD32(ctx->r29, 0X8);
    // 0x8027FB58: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8027FB5C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8027FB60: addiu       $t9, $t6, 0x30
    ctx->r25 = ADD32(ctx->r14, 0X30);
    // 0x8027FB64: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
L_8027FB68:
    // 0x8027FB68: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8027FB6C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8027FB70: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8027FB74: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x8027FB78: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8027FB7C: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8027FB80: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8027FB84: bne         $t6, $t9, L_8027FB68
    if (ctx->r14 != ctx->r25) {
        // 0x8027FB88: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8027FB68;
    }
    // 0x8027FB88: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8027FB8C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FB90: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FB94: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FB98: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FB9C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8027FBA0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8027FBA4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8027FBA8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8027FBAC: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x8027FBB0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8027FBB4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8027FBB8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8027FBBC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8027FBC0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8027FBC4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8027FBC8: mul.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x8027FBCC: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x8027FBD0: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8027FBD4: nop

    // 0x8027FBD8: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x8027FBDC: bne         $at, $zero, L_8027FBF4
    if (ctx->r1 != 0) {
        // 0x8027FBE0: nop
    
            goto L_8027FBF4;
    }
    // 0x8027FBE0: nop

    // 0x8027FBE4: addiu       $v1, $v1, -0xC
    ctx->r3 = ADD32(ctx->r3, -0XC);
L_8027FBE8:
    // 0x8027FBE8: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x8027FBEC: beql        $at, $zero, L_8027FBE8
    if (ctx->r1 == 0) {
        // 0x8027FBF0: addiu       $v1, $v1, -0xC
        ctx->r3 = ADD32(ctx->r3, -0XC);
            goto L_8027FBE8;
    }
    goto skip_0;
    // 0x8027FBF0: addiu       $v1, $v1, -0xC
    ctx->r3 = ADD32(ctx->r3, -0XC);
    skip_0:
L_8027FBF4:
    // 0x8027FBF4: bgezl       $v1, L_8027FC0C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8027FBF8: sll         $t2, $v1, 2
        ctx->r10 = S32(ctx->r3 << 2);
            goto L_8027FC0C;
    }
    goto skip_1;
    // 0x8027FBF8: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    skip_1:
    // 0x8027FBFC: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_8027FC00:
    // 0x8027FC00: bltzl       $v1, L_8027FC00
    if (SIGNED(ctx->r3) < 0) {
        // 0x8027FC04: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_8027FC00;
    }
    goto skip_2;
    // 0x8027FC04: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    skip_2:
    // 0x8027FC08: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
L_8027FC0C:
    // 0x8027FC0C: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x8027FC10: jr          $ra
    // 0x8027FC14: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    return;
    // 0x8027FC14: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
;}
RECOMP_FUNC void D_802D2858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D28D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D28DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D28E0: jal         0x8030301C
    // 0x802D28E4: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    static_3_8030301C(rdram, ctx);
        goto after_0;
    // 0x802D28E4: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    after_0:
    // 0x802D28E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D28EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D28F0: jr          $ra
    // 0x802D28F4: nop

    return;
    // 0x802D28F4: nop

;}
RECOMP_FUNC void D_802DD62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD6AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DD6B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802DD6B4: jr          $ra
    // 0x802DD6B8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802DD6B8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80299320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802993A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802993A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802993A8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802993AC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802993B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802993B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802993B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802993BC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802993C0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802993C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802993C8: lwc1        $f6, 0x32A8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X32A8);
    // 0x802993CC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802993D0: nop

    // 0x802993D4: bc1fl       L_80299498
    if (!c1cs) {
        // 0x802993D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80299498;
    }
    goto skip_0;
    // 0x802993D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802993DC: lw          $v1, 0x65FC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X65FC);
    // 0x802993E0: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
    // 0x802993E4: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802993E8: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x802993EC: jalr        $t9
    // 0x802993F0: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802993F0: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_0:
    // 0x802993F4: jal         0x802AED98
    // 0x802993F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802AED98(rdram, ctx);
        goto after_1;
    // 0x802993F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802993FC: beq         $v0, $zero, L_8029941C
    if (ctx->r2 == 0) {
        // 0x80299400: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8029941C;
    }
    // 0x80299400: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80299404: lw          $v0, 0x6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6C);
    // 0x80299408: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8029940C: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x80299410: lh          $t7, 0x8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8);
    // 0x80299414: jalr        $t9
    // 0x80299418: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80299418: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_2:
L_8029941C:
    // 0x8029941C: sw          $zero, 0x65FC($s0)
    MEM_W(0X65FC, ctx->r16) = 0;
    // 0x80299420: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80299424: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80299428: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029942C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80299430: lbu         $t0, 0x8F0($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X8F0);
    // 0x80299434: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80299438: beq         $t0, $zero, L_80299448
    if (ctx->r8 == 0) {
        // 0x8029943C: nop
    
            goto L_80299448;
    }
    // 0x8029943C: nop

    // 0x80299440: jal         0x80231A24
    // 0x80299444: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80299444: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_3:
L_80299448:
    // 0x80299448: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029944C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80299450: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80299454: jal         0x80231A24
    // 0x80299458: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80299458: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x8029945C: jal         0x8022BD80
    // 0x80299460: nop

    static_3_8022BD80(rdram, ctx);
        goto after_5;
    // 0x80299460: nop

    after_5:
    // 0x80299464: jal         0x80224CA8
    // 0x80299468: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x80299468: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_6:
    // 0x8029946C: addiu       $t1, $zero, 0x1F
    ctx->r9 = ADD32(0, 0X1F);
    // 0x80299470: sw          $t1, 0x32A4($s0)
    MEM_W(0X32A4, ctx->r16) = ctx->r9;
    // 0x80299474: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    // 0x80299478: jal         0x802902DC
    // 0x8029947C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802902DC(rdram, ctx);
        goto after_7;
    // 0x8029947C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80299480: addiu       $t2, $zero, 0x1F
    ctx->r10 = ADD32(0, 0X1F);
    // 0x80299484: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80299488: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x8029948C: jal         0x802A9C04
    // 0x80299490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802A9C04(rdram, ctx);
        goto after_8;
    // 0x80299490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80299494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80299498:
    // 0x80299498: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029949C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802994A0: jr          $ra
    // 0x802994A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802994A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8028A72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A7AC: addiu       $sp, $sp, -0x2A8
    ctx->r29 = ADD32(ctx->r29, -0X2A8);
    // 0x8028A7B0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028A7B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028A7B8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8028A7BC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8028A7C0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8028A7C4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8028A7C8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8028A7CC: sw          $a1, 0x2AC($sp)
    MEM_W(0X2AC, ctx->r29) = ctx->r5;
    // 0x8028A7D0: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x8028A7D4: sb          $zero, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = 0;
    // 0x8028A7D8: sb          $zero, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = 0;
    // 0x8028A7DC: swc1        $f0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->f0.u32l;
    // 0x8028A7E0: swc1        $f0, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->f0.u32l;
    // 0x8028A7E4: lw          $t7, 0x78($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X78);
    // 0x8028A7E8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8028A7EC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8028A7F0: beql        $t8, $zero, L_8028B610
    if (ctx->r24 == 0) {
        // 0x8028A7F4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8028B610;
    }
    goto skip_0;
    // 0x8028A7F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x8028A7F8: jal         0x8022970C
    // 0x8028A7FC: addiu       $a0, $sp, 0x224
    ctx->r4 = ADD32(ctx->r29, 0X224);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x8028A7FC: addiu       $a0, $sp, 0x224
    ctx->r4 = ADD32(ctx->r29, 0X224);
    after_0:
    // 0x8028A800: jal         0x8022970C
    // 0x8028A804: addiu       $a0, $sp, 0x1E4
    ctx->r4 = ADD32(ctx->r29, 0X1E4);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x8028A804: addiu       $a0, $sp, 0x1E4
    ctx->r4 = ADD32(ctx->r29, 0X1E4);
    after_1:
    // 0x8028A808: jal         0x8022970C
    // 0x8028A80C: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x8028A80C: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    after_2:
    // 0x8028A810: jal         0x8022970C
    // 0x8028A814: addiu       $a0, $sp, 0x164
    ctx->r4 = ADD32(ctx->r29, 0X164);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x8028A814: addiu       $a0, $sp, 0x164
    ctx->r4 = ADD32(ctx->r29, 0X164);
    after_3:
    // 0x8028A818: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8028A81C: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x8028A820: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8028A824: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028A828: bne         $t9, $at, L_8028A838
    if (ctx->r25 != ctx->r1) {
        // 0x8028A82C: nop
    
            goto L_8028A838;
    }
    // 0x8028A82C: nop

    // 0x8028A830: b           L_8028A838
    // 0x8028A834: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8028A838;
    // 0x8028A834: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028A838:
    // 0x8028A838: beq         $v0, $zero, L_8028AB48
    if (ctx->r2 == 0) {
        // 0x8028A83C: nop
    
            goto L_8028AB48;
    }
    // 0x8028A83C: nop

    // 0x8028A840: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028A844: jal         0x80317E10
    // 0x8028A848: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_80317E10(rdram, ctx);
        goto after_4;
    // 0x8028A848: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_4:
    // 0x8028A84C: beq         $v0, $zero, L_8028A864
    if (ctx->r2 == 0) {
        // 0x8028A850: nop
    
            goto L_8028A864;
    }
    // 0x8028A850: nop

    // 0x8028A854: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028A858: jal         0x80317E10
    // 0x8028A85C: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_80317E10(rdram, ctx);
        goto after_5;
    // 0x8028A85C: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_5:
    // 0x8028A860: bne         $v0, $zero, L_8028A894
    if (ctx->r2 != 0) {
        // 0x8028A864: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_8028A894;
    }
L_8028A864:
    // 0x8028A864: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8028A868: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8028A86C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028A870: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028A874: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8028A878: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8028A87C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8028A880: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8028A884: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8028A888: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028A88C: b           L_8028B60C
    // 0x8028A890: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
        goto L_8028B60C;
    // 0x8028A890: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
L_8028A894:
    // 0x8028A894: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8028A898: lw          $t2, 0x4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X4);
    // 0x8028A89C: addiu       $a2, $v0, 0x365C
    ctx->r6 = ADD32(ctx->r2, 0X365C);
    // 0x8028A8A0: bne         $a2, $t2, L_8028A9A0
    if (ctx->r6 != ctx->r10) {
        // 0x8028A8A4: addiu       $a0, $v0, 0x4E3C
        ctx->r4 = ADD32(ctx->r2, 0X4E3C);
            goto L_8028A9A0;
    }
    // 0x8028A8A4: addiu       $a0, $v0, 0x4E3C
    ctx->r4 = ADD32(ctx->r2, 0X4E3C);
    // 0x8028A8A8: jal         0x80318510
    // 0x8028A8AC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80318510(rdram, ctx);
        goto after_6;
    // 0x8028A8AC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_6:
    // 0x8028A8B0: swc1        $f0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f0.u32l;
    // 0x8028A8B4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028A8B8: jal         0x802E6E4C
    // 0x8028A8BC: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_802E6E4C(rdram, ctx);
        goto after_7;
    // 0x8028A8BC: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_7:
    // 0x8028A8C0: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8028A8C4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8028A8C8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8028A8CC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8028A8D0: swc1        $f0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f0.u32l;
    // 0x8028A8D4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8028A8D8: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8028A8DC: bc1f        L_8028A978
    if (!c1cs) {
        // 0x8028A8E0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8028A978;
    }
    // 0x8028A8E0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028A8E4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028A8E8: addiu       $a1, $sp, 0x290
    ctx->r5 = ADD32(ctx->r29, 0X290);
    // 0x8028A8EC: addiu       $a2, $sp, 0x28C
    ctx->r6 = ADD32(ctx->r29, 0X28C);
    // 0x8028A8F0: addiu       $a3, $sp, 0x288
    ctx->r7 = ADD32(ctx->r29, 0X288);
    // 0x8028A8F4: jal         0x80318498
    // 0x8028A8F8: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_80318498(rdram, ctx);
        goto after_8;
    // 0x8028A8F8: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_8:
    // 0x8028A8FC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8028A900: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x8028A904: lw          $s0, 0x4FDC($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4FDC);
    // 0x8028A908: lh          $t3, 0x60($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X60);
    // 0x8028A90C: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8028A910: addu        $a0, $t3, $v0
    ctx->r4 = ADD32(ctx->r11, ctx->r2);
    // 0x8028A914: jalr        $t9
    // 0x8028A918: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8028A918: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_9:
    // 0x8028A91C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8028A920: addiu       $s1, $sp, 0xB8
    ctx->r17 = ADD32(ctx->r29, 0XB8);
    // 0x8028A924: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8028A928: lw          $s0, 0x37FC($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X37FC);
    // 0x8028A92C: lh          $t4, 0x60($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X60);
    // 0x8028A930: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8028A934: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    // 0x8028A938: jalr        $t9
    // 0x8028A93C: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x8028A93C: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_10:
    // 0x8028A940: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028A944: addiu       $t6, $zero, 0x393
    ctx->r14 = ADD32(0, 0X393);
    // 0x8028A948: sb          $t5, 0x235($s2)
    MEM_B(0X235, ctx->r18) = ctx->r13;
    // 0x8028A94C: sw          $t6, 0x238($s2)
    MEM_W(0X238, ctx->r18) = ctx->r14;
    // 0x8028A950: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028A954: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028A958: jal         0x8020664C
    // 0x8028A95C: addiu       $a2, $sp, 0x224
    ctx->r6 = ADD32(ctx->r29, 0X224);
    static_3_8020664C(rdram, ctx);
        goto after_11;
    // 0x8028A95C: addiu       $a2, $sp, 0x224
    ctx->r6 = ADD32(ctx->r29, 0X224);
    after_11:
    // 0x8028A960: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028A964: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028A968: jal         0x8020664C
    // 0x8028A96C: addiu       $a2, $sp, 0x1E4
    ctx->r6 = ADD32(ctx->r29, 0X1E4);
    static_3_8020664C(rdram, ctx);
        goto after_12;
    // 0x8028A96C: addiu       $a2, $sp, 0x1E4
    ctx->r6 = ADD32(ctx->r29, 0X1E4);
    after_12:
    // 0x8028A970: b           L_8028AAA8
    // 0x8028A974: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_8028AAA8;
    // 0x8028A974: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8028A978:
    // 0x8028A978: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028A97C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8028A980: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8028A984: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8028A988: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028A98C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8028A990: addiu       $t0, $zero, 0x11DF
    ctx->r8 = ADD32(0, 0X11DF);
    // 0x8028A994: sb          $zero, 0x235($s2)
    MEM_B(0X235, ctx->r18) = 0;
    // 0x8028A998: b           L_8028B60C
    // 0x8028A99C: sw          $t0, 0x238($s2)
    MEM_W(0X238, ctx->r18) = ctx->r8;
        goto L_8028B60C;
    // 0x8028A99C: sw          $t0, 0x238($s2)
    MEM_W(0X238, ctx->r18) = ctx->r8;
L_8028A9A0:
    // 0x8028A9A0: addiu       $a1, $v0, 0x4E3C
    ctx->r5 = ADD32(ctx->r2, 0X4E3C);
    // 0x8028A9A4: jal         0x80318510
    // 0x8028A9A8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_80318510(rdram, ctx);
        goto after_13;
    // 0x8028A9A8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_13:
    // 0x8028A9AC: swc1        $f0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f0.u32l;
    // 0x8028A9B0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028A9B4: jal         0x802E6E4C
    // 0x8028A9B8: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_802E6E4C(rdram, ctx);
        goto after_14;
    // 0x8028A9B8: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_14:
    // 0x8028A9BC: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8028A9C0: swc1        $f0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f0.u32l;
    // 0x8028A9C4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8028A9C8: nop

    // 0x8028A9CC: bc1f        L_8028AA68
    if (!c1cs) {
        // 0x8028A9D0: nop
    
            goto L_8028AA68;
    }
    // 0x8028A9D0: nop

    // 0x8028A9D4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028A9D8: addiu       $a1, $sp, 0x290
    ctx->r5 = ADD32(ctx->r29, 0X290);
    // 0x8028A9DC: addiu       $a2, $sp, 0x28C
    ctx->r6 = ADD32(ctx->r29, 0X28C);
    // 0x8028A9E0: addiu       $a3, $sp, 0x288
    ctx->r7 = ADD32(ctx->r29, 0X288);
    // 0x8028A9E4: jal         0x80318498
    // 0x8028A9E8: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_80318498(rdram, ctx);
        goto after_15;
    // 0x8028A9E8: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_15:
    // 0x8028A9EC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8028A9F0: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x8028A9F4: lw          $s0, 0x37FC($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X37FC);
    // 0x8028A9F8: lh          $t1, 0x60($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X60);
    // 0x8028A9FC: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8028AA00: addu        $a0, $t1, $v0
    ctx->r4 = ADD32(ctx->r9, ctx->r2);
    // 0x8028AA04: jalr        $t9
    // 0x8028AA08: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x8028AA08: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_16:
    // 0x8028AA0C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8028AA10: addiu       $s1, $sp, 0xB8
    ctx->r17 = ADD32(ctx->r29, 0XB8);
    // 0x8028AA14: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8028AA18: lw          $s0, 0x4FDC($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4FDC);
    // 0x8028AA1C: lh          $t2, 0x60($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X60);
    // 0x8028AA20: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8028AA24: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    // 0x8028AA28: jalr        $t9
    // 0x8028AA2C: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x8028AA2C: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_17:
    // 0x8028AA30: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8028AA34: addiu       $t4, $zero, 0x393
    ctx->r12 = ADD32(0, 0X393);
    // 0x8028AA38: sb          $t3, 0x235($s2)
    MEM_B(0X235, ctx->r18) = ctx->r11;
    // 0x8028AA3C: sw          $t4, 0x238($s2)
    MEM_W(0X238, ctx->r18) = ctx->r12;
    // 0x8028AA40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8028AA44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028AA48: jal         0x8020664C
    // 0x8028AA4C: addiu       $a2, $sp, 0x224
    ctx->r6 = ADD32(ctx->r29, 0X224);
    static_3_8020664C(rdram, ctx);
        goto after_18;
    // 0x8028AA4C: addiu       $a2, $sp, 0x224
    ctx->r6 = ADD32(ctx->r29, 0X224);
    after_18:
    // 0x8028AA50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8028AA54: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028AA58: jal         0x8020664C
    // 0x8028AA5C: addiu       $a2, $sp, 0x1E4
    ctx->r6 = ADD32(ctx->r29, 0X1E4);
    static_3_8020664C(rdram, ctx);
        goto after_19;
    // 0x8028AA5C: addiu       $a2, $sp, 0x1E4
    ctx->r6 = ADD32(ctx->r29, 0X1E4);
    after_19:
    // 0x8028AA60: b           L_8028AAA8
    // 0x8028AA64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_8028AAA8;
    // 0x8028AA64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8028AA68:
    // 0x8028AA68: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8028AA6C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8028AA70: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028AA74: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028AA78: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8028AA7C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8028AA80: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8028AA84: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8028AA88: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8028AA8C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028AA90: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8028AA94: addiu       $t7, $zero, 0x11DF
    ctx->r15 = ADD32(0, 0X11DF);
    // 0x8028AA98: sb          $zero, 0x235($s2)
    MEM_B(0X235, ctx->r18) = 0;
    // 0x8028AA9C: b           L_8028B60C
    // 0x8028AAA0: sw          $t7, 0x238($s2)
    MEM_W(0X238, ctx->r18) = ctx->r15;
        goto L_8028B60C;
    // 0x8028AAA0: sw          $t7, 0x238($s2)
    MEM_W(0X238, ctx->r18) = ctx->r15;
    // 0x8028AAA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8028AAA8:
    // 0x8028AAA8: jal         0x802CF718
    // 0x8028AAAC: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    static_3_802CF718(rdram, ctx);
        goto after_20;
    // 0x8028AAAC: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    after_20:
    // 0x8028AAB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028AAB4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028AAB8: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    // 0x8028AABC: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x8028AAC0: nop

    // 0x8028AAC4: bc1fl       L_8028AAD8
    if (!c1cs) {
        // 0x8028AAC8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8028AAD8;
    }
    goto skip_1;
    // 0x8028AAC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_1:
    // 0x8028AACC: b           L_8028AAD8
    // 0x8028AAD0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_8028AAD8;
    // 0x8028AAD0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8028AAD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8028AAD8:
    // 0x8028AAD8: jal         0x8022970C
    // 0x8028AADC: sb          $s0, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r16;
    func_8022970C(rdram, ctx);
        goto after_21;
    // 0x8028AADC: sb          $s0, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r16;
    after_21:
    // 0x8028AAE0: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x8028AAE4: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x8028AAE8: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    // 0x8028AAEC: jal         0x802D01D4
    // 0x8028AAF0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_22;
    // 0x8028AAF0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_22:
    // 0x8028AAF4: addiu       $a0, $sp, 0x164
    ctx->r4 = ADD32(ctx->r29, 0X164);
    // 0x8028AAF8: addiu       $a1, $sp, 0x224
    ctx->r5 = ADD32(ctx->r29, 0X224);
    // 0x8028AAFC: jal         0x802297A8
    // 0x8028AB00: addiu       $a2, $sp, 0x1A4
    ctx->r6 = ADD32(ctx->r29, 0X1A4);
    static_3_802297A8(rdram, ctx);
        goto after_23;
    // 0x8028AB00: addiu       $a2, $sp, 0x1A4
    ctx->r6 = ADD32(ctx->r29, 0X1A4);
    after_23:
    // 0x8028AB04: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    // 0x8028AB08: addiu       $a1, $sp, 0x164
    ctx->r5 = ADD32(ctx->r29, 0X164);
    // 0x8028AB0C: jal         0x802297A8
    // 0x8028AB10: addiu       $a2, $sp, 0x1E4
    ctx->r6 = ADD32(ctx->r29, 0X1E4);
    static_3_802297A8(rdram, ctx);
        goto after_24;
    // 0x8028AB10: addiu       $a2, $sp, 0x1E4
    ctx->r6 = ADD32(ctx->r29, 0X1E4);
    after_24:
    // 0x8028AB14: lwc1        $f10, 0x290($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X290);
    // 0x8028AB18: lwc1        $f18, 0x28C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28C);
    // 0x8028AB1C: lwc1        $f4, 0x288($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X288);
    // 0x8028AB20: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    // 0x8028AB24: addiu       $a1, $sp, 0x274
    ctx->r5 = ADD32(ctx->r29, 0X274);
    // 0x8028AB28: addiu       $a2, $sp, 0x270
    ctx->r6 = ADD32(ctx->r29, 0X270);
    // 0x8028AB2C: addiu       $a3, $sp, 0x26C
    ctx->r7 = ADD32(ctx->r29, 0X26C);
    // 0x8028AB30: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8028AB34: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8028AB38: jal         0x802B4550
    // 0x8028AB3C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    static_3_802B4550(rdram, ctx);
        goto after_25;
    // 0x8028AB3C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_25:
    // 0x8028AB40: b           L_8028ADE0
    // 0x8028AB44: nop

        goto L_8028ADE0;
    // 0x8028AB44: nop

L_8028AB48:
    // 0x8028AB48: jal         0x802E6E4C
    // 0x8028AB4C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    static_3_802E6E4C(rdram, ctx);
        goto after_26;
    // 0x8028AB4C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_26:
    // 0x8028AB50: swc1        $f0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f0.u32l;
    // 0x8028AB54: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8028AB58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8028AB5C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8028AB60: lbu         $t8, 0x6FB8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6FB8);
    // 0x8028AB64: blez        $t8, L_8028AC5C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8028AB68: addu        $t0, $v0, $s1
        ctx->r8 = ADD32(ctx->r2, ctx->r17);
            goto L_8028AC5C;
    }
    // 0x8028AB68: addu        $t0, $v0, $s1
    ctx->r8 = ADD32(ctx->r2, ctx->r17);
L_8028AB6C:
    // 0x8028AB6C: lw          $a0, 0x6F94($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6F94);
    // 0x8028AB70: sw          $v1, 0x2A4($sp)
    MEM_W(0X2A4, ctx->r29) = ctx->r3;
    // 0x8028AB74: beql        $a0, $zero, L_8028AC40
    if (ctx->r4 == 0) {
        // 0x8028AB78: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028AC40;
    }
    goto skip_2;
    // 0x8028AB78: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x8028AB7C: jal         0x80317E10
    // 0x8028AB80: sw          $v1, 0x2A4($sp)
    MEM_W(0X2A4, ctx->r29) = ctx->r3;
    static_3_80317E10(rdram, ctx);
        goto after_27;
    // 0x8028AB80: sw          $v1, 0x2A4($sp)
    MEM_W(0X2A4, ctx->r29) = ctx->r3;
    after_27:
    // 0x8028AB84: beql        $v0, $zero, L_8028AC40
    if (ctx->r2 == 0) {
        // 0x8028AB88: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028AC40;
    }
    goto skip_3;
    // 0x8028AB88: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_3:
    // 0x8028AB8C: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8028AB90: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x8028AB94: jal         0x803183C0
    // 0x8028AB98: lw          $a0, 0x6F94($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X6F94);
    static_3_803183C0(rdram, ctx);
        goto after_28;
    // 0x8028AB98: lw          $a0, 0x6F94($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X6F94);
    after_28:
    // 0x8028AB9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028ABA0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028ABA4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8028ABA8: nop

    // 0x8028ABAC: bc1fl       L_8028AC40
    if (!c1cs) {
        // 0x8028ABB0: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028AC40;
    }
    goto skip_4;
    // 0x8028ABB0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_4:
    // 0x8028ABB4: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8028ABB8: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x8028ABBC: addu        $t3, $t9, $s1
    ctx->r11 = ADD32(ctx->r25, ctx->r17);
    // 0x8028ABC0: jal         0x80318510
    // 0x8028ABC4: lw          $a0, 0x6F94($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X6F94);
    static_3_80318510(rdram, ctx);
        goto after_29;
    // 0x8028ABC4: lw          $a0, 0x6F94($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X6F94);
    after_29:
    // 0x8028ABC8: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8028ABCC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8028ABD0: nop

    // 0x8028ABD4: bc1fl       L_8028AC40
    if (!c1cs) {
        // 0x8028ABD8: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028AC40;
    }
    goto skip_5;
    // 0x8028ABD8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_5:
    // 0x8028ABDC: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x8028ABE0: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x8028ABE4: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x8028ABE8: jal         0x80318510
    // 0x8028ABEC: lw          $a0, 0x6F94($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X6F94);
    static_3_80318510(rdram, ctx);
        goto after_30;
    // 0x8028ABEC: lw          $a0, 0x6F94($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X6F94);
    after_30:
    // 0x8028ABF0: swc1        $f0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f0.u32l;
    // 0x8028ABF4: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8028ABF8: lw          $s0, 0x4($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X4);
    // 0x8028ABFC: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x8028AC00: jal         0x803187F4
    // 0x8028AC04: lw          $a0, 0x6F94($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X6F94);
    static_3_803187F4(rdram, ctx);
        goto after_31;
    // 0x8028AC04: lw          $a0, 0x6F94($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X6F94);
    after_31:
    // 0x8028AC08: bne         $v0, $s0, L_8028AC1C
    if (ctx->r2 != ctx->r16) {
        // 0x8028AC0C: lwc1        $f10, 0x15C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X15C);
            goto L_8028AC1C;
    }
    // 0x8028AC0C: lwc1        $f10, 0x15C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8028AC10: lw          $t8, 0x2A4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2A4);
    // 0x8028AC14: b           L_8028AC5C
    // 0x8028AC18: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
        goto L_8028AC5C;
    // 0x8028AC18: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
L_8028AC1C:
    // 0x8028AC1C: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x8028AC20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028AC24: lw          $t0, 0x2A4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2A4);
    // 0x8028AC28: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8028AC2C: nop

    // 0x8028AC30: bc1fl       L_8028AC40
    if (!c1cs) {
        // 0x8028AC34: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028AC40;
    }
    goto skip_6;
    // 0x8028AC34: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_6:
    // 0x8028AC38: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x8028AC3C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_8028AC40:
    // 0x8028AC40: lw          $v1, 0x2A4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2A4);
    // 0x8028AC44: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8028AC48: lbu         $t1, 0x6FB8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X6FB8);
    // 0x8028AC4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8028AC50: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8028AC54: bnel        $at, $zero, L_8028AB6C
    if (ctx->r1 != 0) {
        // 0x8028AC58: addu        $t0, $v0, $s1
        ctx->r8 = ADD32(ctx->r2, ctx->r17);
            goto L_8028AB6C;
    }
    goto skip_7;
    // 0x8028AC58: addu        $t0, $v0, $s1
    ctx->r8 = ADD32(ctx->r2, ctx->r17);
    skip_7:
L_8028AC5C:
    // 0x8028AC5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028AC60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028AC64: jal         0x8020664C
    // 0x8028AC68: addiu       $a2, $sp, 0x224
    ctx->r6 = ADD32(ctx->r29, 0X224);
    static_3_8020664C(rdram, ctx);
        goto after_32;
    // 0x8028AC68: addiu       $a2, $sp, 0x224
    ctx->r6 = ADD32(ctx->r29, 0X224);
    after_32:
    // 0x8028AC6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028AC70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028AC74: jal         0x8020664C
    // 0x8028AC78: addiu       $a2, $sp, 0x1E4
    ctx->r6 = ADD32(ctx->r29, 0X1E4);
    static_3_8020664C(rdram, ctx);
        goto after_33;
    // 0x8028AC78: addiu       $a2, $sp, 0x1E4
    ctx->r6 = ADD32(ctx->r29, 0X1E4);
    after_33:
    // 0x8028AC7C: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x8028AC80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8028AC84: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8028AC88: bne         $t2, $at, L_8028ACC4
    if (ctx->r10 != ctx->r1) {
        // 0x8028AC8C: addiu       $v0, $v0, 0x0
        ctx->r2 = ADD32(ctx->r2, 0X0);
            goto L_8028ACC4;
    }
    // 0x8028AC8C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8028AC90: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8028AC94: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028AC98: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028AC9C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8028ACA0: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8028ACA4: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8028ACA8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8028ACAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028ACB0: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8028ACB4: addiu       $t4, $zero, 0x11DF
    ctx->r12 = ADD32(0, 0X11DF);
    // 0x8028ACB8: sb          $zero, 0x235($s2)
    MEM_B(0X235, ctx->r18) = 0;
    // 0x8028ACBC: b           L_8028B60C
    // 0x8028ACC0: sw          $t4, 0x238($s2)
    MEM_W(0X238, ctx->r18) = ctx->r12;
        goto L_8028B60C;
    // 0x8028ACC0: sw          $t4, 0x238($s2)
    MEM_W(0X238, ctx->r18) = ctx->r12;
L_8028ACC4:
    // 0x8028ACC4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028ACC8: addiu       $t6, $zero, 0x393
    ctx->r14 = ADD32(0, 0X393);
    // 0x8028ACCC: sb          $t5, 0x235($s2)
    MEM_B(0X235, ctx->r18) = ctx->r13;
    // 0x8028ACD0: sw          $t6, 0x238($s2)
    MEM_W(0X238, ctx->r18) = ctx->r14;
    // 0x8028ACD4: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x8028ACD8: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8028ACDC: addiu       $a1, $sp, 0x290
    ctx->r5 = ADD32(ctx->r29, 0X290);
    // 0x8028ACE0: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x8028ACE4: addu        $t0, $t8, $t7
    ctx->r8 = ADD32(ctx->r24, ctx->r15);
    // 0x8028ACE8: lw          $a0, 0x6F94($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6F94);
    // 0x8028ACEC: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8028ACF0: addiu       $a2, $sp, 0x28C
    ctx->r6 = ADD32(ctx->r29, 0X28C);
    // 0x8028ACF4: jal         0x80318498
    // 0x8028ACF8: addiu       $a3, $sp, 0x288
    ctx->r7 = ADD32(ctx->r29, 0X288);
    static_3_80318498(rdram, ctx);
        goto after_34;
    // 0x8028ACF8: addiu       $a3, $sp, 0x288
    ctx->r7 = ADD32(ctx->r29, 0X288);
    after_34:
    // 0x8028ACFC: jal         0x8022970C
    // 0x8028AD00: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    func_8022970C(rdram, ctx);
        goto after_35;
    // 0x8028AD00: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    after_35:
    // 0x8028AD04: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x8028AD08: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x8028AD0C: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    // 0x8028AD10: jal         0x802D01D4
    // 0x8028AD14: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_36;
    // 0x8028AD14: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_36:
    // 0x8028AD18: addiu       $a0, $sp, 0x164
    ctx->r4 = ADD32(ctx->r29, 0X164);
    // 0x8028AD1C: addiu       $a1, $sp, 0x224
    ctx->r5 = ADD32(ctx->r29, 0X224);
    // 0x8028AD20: jal         0x802297A8
    // 0x8028AD24: addiu       $a2, $sp, 0x1A4
    ctx->r6 = ADD32(ctx->r29, 0X1A4);
    static_3_802297A8(rdram, ctx);
        goto after_37;
    // 0x8028AD24: addiu       $a2, $sp, 0x1A4
    ctx->r6 = ADD32(ctx->r29, 0X1A4);
    after_37:
    // 0x8028AD28: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    // 0x8028AD2C: addiu       $a1, $sp, 0x164
    ctx->r5 = ADD32(ctx->r29, 0X164);
    // 0x8028AD30: jal         0x802297A8
    // 0x8028AD34: addiu       $a2, $sp, 0x1E4
    ctx->r6 = ADD32(ctx->r29, 0X1E4);
    static_3_802297A8(rdram, ctx);
        goto after_38;
    // 0x8028AD34: addiu       $a2, $sp, 0x1E4
    ctx->r6 = ADD32(ctx->r29, 0X1E4);
    after_38:
    // 0x8028AD38: lwc1        $f4, 0x290($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X290);
    // 0x8028AD3C: lwc1        $f6, 0x28C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28C);
    // 0x8028AD40: lwc1        $f8, 0x288($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X288);
    // 0x8028AD44: addiu       $a0, $sp, 0x1A4
    ctx->r4 = ADD32(ctx->r29, 0X1A4);
    // 0x8028AD48: addiu       $a1, $sp, 0x274
    ctx->r5 = ADD32(ctx->r29, 0X274);
    // 0x8028AD4C: addiu       $a2, $sp, 0x270
    ctx->r6 = ADD32(ctx->r29, 0X270);
    // 0x8028AD50: addiu       $a3, $sp, 0x26C
    ctx->r7 = ADD32(ctx->r29, 0X26C);
    // 0x8028AD54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8028AD58: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8028AD5C: jal         0x802B4550
    // 0x8028AD60: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    static_3_802B4550(rdram, ctx);
        goto after_39;
    // 0x8028AD60: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_39:
    // 0x8028AD64: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8028AD68: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x8028AD6C: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x8028AD70: lw          $v0, 0x6F94($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X6F94);
    // 0x8028AD74: lw          $s0, 0x1A0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1A0);
    // 0x8028AD78: lh          $t9, 0x60($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X60);
    // 0x8028AD7C: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    // 0x8028AD80: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8028AD84: jalr        $t9
    // 0x8028AD88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x8028AD88: nop

    after_40:
    // 0x8028AD8C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x8028AD90: addiu       $s1, $sp, 0xB8
    ctx->r17 = ADD32(ctx->r29, 0XB8);
    // 0x8028AD94: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8028AD98: lw          $s0, 0x1A0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X1A0);
    // 0x8028AD9C: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8028ADA0: lh          $t3, 0x60($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X60);
    // 0x8028ADA4: jalr        $t9
    // 0x8028ADA8: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x8028ADA8: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    after_41:
    // 0x8028ADAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8028ADB0: jal         0x802CF718
    // 0x8028ADB4: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    static_3_802CF718(rdram, ctx);
        goto after_42;
    // 0x8028ADB4: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    after_42:
    // 0x8028ADB8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028ADBC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028ADC0: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8028ADC4: nop

    // 0x8028ADC8: bc1fl       L_8028ADDC
    if (!c1cs) {
        // 0x8028ADCC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8028ADDC;
    }
    goto skip_8;
    // 0x8028ADCC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_8:
    // 0x8028ADD0: b           L_8028ADDC
    // 0x8028ADD4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_8028ADDC;
    // 0x8028ADD4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8028ADD8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8028ADDC:
    // 0x8028ADDC: sb          $s0, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r16;
L_8028ADE0:
    // 0x8028ADE0: jal         0x80318214
    // 0x8028ADE4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    static_3_80318214(rdram, ctx);
        goto after_43;
    // 0x8028ADE4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_43:
    // 0x8028ADE8: swc1        $f0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f0.u32l;
    // 0x8028ADEC: jal         0x80318804
    // 0x8028ADF0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    static_3_80318804(rdram, ctx);
        goto after_44;
    // 0x8028ADF0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_44:
    // 0x8028ADF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028ADF8: bne         $v0, $at, L_8028AE0C
    if (ctx->r2 != ctx->r1) {
        // 0x8028ADFC: lwc1        $f18, 0x148($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X148);
            goto L_8028AE0C;
    }
    // 0x8028ADFC: lwc1        $f18, 0x148($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X148);
    // 0x8028AE00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028AE04: b           L_8028AE18
    // 0x8028AE08: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
        goto L_8028AE18;
    // 0x8028AE08: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
L_8028AE0C:
    // 0x8028AE0C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x8028AE10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028AE14: nop

L_8028AE18:
    // 0x8028AE18: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8028AE1C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8028AE20: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x8028AE24: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x8028AE28: bne         $t4, $zero, L_8028AE5C
    if (ctx->r12 != 0) {
        // 0x8028AE2C: swc1        $f4, 0x148($sp)
        MEM_W(0X148, ctx->r29) = ctx->f4.u32l;
            goto L_8028AE5C;
    }
    // 0x8028AE2C: swc1        $f4, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f4.u32l;
    // 0x8028AE30: jal         0x8022970C
    // 0x8028AE34: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    func_8022970C(rdram, ctx);
        goto after_45;
    // 0x8028AE34: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_45:
    // 0x8028AE38: addiu       $t5, $sp, 0x264
    ctx->r13 = ADD32(ctx->r29, 0X264);
    // 0x8028AE3C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8028AE40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8028AE44: lw          $a1, 0x2AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2AC);
    // 0x8028AE48: addiu       $a2, $sp, 0x1A4
    ctx->r6 = ADD32(ctx->r29, 0X1A4);
    // 0x8028AE4C: jal         0x802BBD34
    // 0x8028AE50: addiu       $a3, $sp, 0x268
    ctx->r7 = ADD32(ctx->r29, 0X268);
    static_3_802BBD34(rdram, ctx);
        goto after_46;
    // 0x8028AE50: addiu       $a3, $sp, 0x268
    ctx->r7 = ADD32(ctx->r29, 0X268);
    after_46:
    // 0x8028AE54: b           L_8028AE64
    // 0x8028AE58: lwc1        $f6, 0x2AC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2AC);
        goto L_8028AE64;
    // 0x8028AE58: lwc1        $f6, 0x2AC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2AC);
L_8028AE5C:
    // 0x8028AE5C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8028AE60: lwc1        $f6, 0x2AC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2AC);
L_8028AE64:
    // 0x8028AE64: lw          $t6, 0x220($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X220);
    // 0x8028AE68: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x8028AE6C: lwc1        $f10, 0x148($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X148);
    // 0x8028AE70: lwc1        $f8, 0x15C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8028AE74: lw          $t7, 0x220($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X220);
    // 0x8028AE78: div.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8028AE7C: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x8028AE80: lw          $a0, 0x220($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X220);
    // 0x8028AE84: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x8028AE88: jal         0x8022970C
    // 0x8028AE8C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_8022970C(rdram, ctx);
        goto after_47;
    // 0x8028AE8C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_47:
    // 0x8028AE90: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x8028AE94: lw          $a1, 0x220($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X220);
    // 0x8028AE98: lw          $s0, 0x1A0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X1A0);
    // 0x8028AE9C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8028AEA0: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x8028AEA4: lh          $t8, 0x60($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X60);
    // 0x8028AEA8: jalr        $t9
    // 0x8028AEAC: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x8028AEAC: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    after_48:
    // 0x8028AEB0: jal         0x802E6EAC
    // 0x8028AEB4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    static_3_802E6EAC(rdram, ctx);
        goto after_49;
    // 0x8028AEB4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_49:
    // 0x8028AEB8: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x8028AEBC: lw          $a0, 0x220($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X220);
    // 0x8028AEC0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8028AEC4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x8028AEC8: jal         0x802D01D4
    // 0x8028AECC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    static_3_802D01D4(rdram, ctx);
        goto after_50;
    // 0x8028AECC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_50:
    // 0x8028AED0: lw          $a0, 0x220($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X220);
    // 0x8028AED4: addiu       $a1, $sp, 0x284
    ctx->r5 = ADD32(ctx->r29, 0X284);
    // 0x8028AED8: addiu       $t0, $sp, 0x280
    ctx->r8 = ADD32(ctx->r29, 0X280);
    // 0x8028AEDC: addiu       $t1, $sp, 0x27C
    ctx->r9 = ADD32(ctx->r29, 0X27C);
    // 0x8028AEE0: addiu       $t2, $sp, 0x278
    ctx->r10 = ADD32(ctx->r29, 0X278);
    // 0x8028AEE4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8028AEE8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8028AEEC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8028AEF0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8028AEF4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8028AEF8: jal         0x802CF1C8
    // 0x8028AEFC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    static_3_802CF1C8(rdram, ctx);
        goto after_51;
    // 0x8028AEFC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_51:
    // 0x8028AF00: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028AF04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028AF08: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8028AF0C: lwc1        $f12, 0x27C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X27C);
    // 0x8028AF10: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028AF14: jal         0x80300424
    // 0x8028AF18: swc1        $f8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f8.u32l;
    static_3_80300424(rdram, ctx);
        goto after_52;
    // 0x8028AF18: swc1        $f8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f8.u32l;
    after_52:
    // 0x8028AF1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028AF20: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028AF24: lwc1        $f10, 0x27C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X27C);
    // 0x8028AF28: jal         0x80300424
    // 0x8028AF2C: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    static_3_80300424(rdram, ctx);
        goto after_53;
    // 0x8028AF2C: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_53:
    // 0x8028AF30: jal         0x80234B48
    // 0x8028AF34: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    static_3_80234B48(rdram, ctx);
        goto after_54;
    // 0x8028AF34: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_54:
    // 0x8028AF38: lwc1        $f6, 0x140($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X140);
    // 0x8028AF3C: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x8028AF40: lw          $a0, 0x220($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X220);
    // 0x8028AF44: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028AF48: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8028AF4C: lw          $a2, 0x14C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14C);
    // 0x8028AF50: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8028AF54: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8028AF58: jal         0x8022A0D0
    // 0x8028AF5C: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_55;
    // 0x8028AF5C: nop

    after_55:
    // 0x8028AF60: lw          $t3, 0x220($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X220);
    // 0x8028AF64: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x8028AF68: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028AF6C: lw          $t4, 0x48($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X48);
    // 0x8028AF70: lui         $at, 0x4310
    ctx->r1 = S32(0X4310 << 16);
    // 0x8028AF74: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8028AF78: sw          $t4, 0x220($s2)
    MEM_W(0X220, ctx->r18) = ctx->r12;
    // 0x8028AF7C: lwc1        $f10, 0x274($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X274);
    // 0x8028AF80: lwc1        $f8, 0x270($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X270);
    // 0x8028AF84: lbu         $t9, 0x77($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X77);
    // 0x8028AF88: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8028AF8C: addiu       $t3, $zero, 0x91
    ctx->r11 = ADD32(0, 0X91);
    // 0x8028AF90: addiu       $t0, $zero, 0x130
    ctx->r8 = ADD32(0, 0X130);
    // 0x8028AF94: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8028AF98: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028AF9C: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x8028AFA0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8028AFA4: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x8028AFA8: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8028AFAC: addiu       $t6, $zero, 0x91
    ctx->r14 = ADD32(0, 0X91);
    // 0x8028AFB0: add.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8028AFB4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028AFB8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8028AFBC: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8028AFC0: lwc1        $f6, 0x268($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X268);
    // 0x8028AFC4: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x8028AFC8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8028AFCC: lwc1        $f4, 0x264($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X264);
    // 0x8028AFD0: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x8028AFD4: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x8028AFD8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8028AFDC: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x8028AFE0: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8028AFE4: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8028AFE8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8028AFEC: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x8028AFF0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8028AFF4: beq         $t9, $zero, L_8028B02C
    if (ctx->r25 == 0) {
        // 0x8028AFF8: addiu       $a2, $v1, 0x10
        ctx->r6 = ADD32(ctx->r3, 0X10);
            goto L_8028B02C;
    }
    // 0x8028AFF8: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x8028AFFC: subu        $a0, $t0, $v0
    ctx->r4 = SUB32(ctx->r8, ctx->r2);
    // 0x8028B000: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8028B004: addiu       $a2, $v1, 0x10
    ctx->r6 = ADD32(ctx->r3, 0X10);
    // 0x8028B008: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8028B00C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8028B010: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8028B014: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8028B018: sw          $v1, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r3;
    // 0x8028B01C: jal         0x802B461C
    // 0x8028B020: sw          $a3, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r7;
    static_3_802B461C(rdram, ctx);
        goto after_56;
    // 0x8028B020: sw          $a3, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r7;
    after_56:
    // 0x8028B024: b           L_8028B048
    // 0x8028B028: nop

        goto L_8028B048;
    // 0x8028B028: nop

L_8028B02C:
    // 0x8028B02C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028B030: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8028B034: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8028B038: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8028B03C: sw          $v1, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r3;
    // 0x8028B040: jal         0x802B461C
    // 0x8028B044: sw          $a3, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r7;
    static_3_802B461C(rdram, ctx);
        goto after_57;
    // 0x8028B044: sw          $a3, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r7;
    after_57:
L_8028B048:
    // 0x8028B048: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8028B04C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x8028B050: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8028B054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8028B058: bne         $t7, $at, L_8028B068
    if (ctx->r15 != ctx->r1) {
        // 0x8028B05C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8028B068;
    }
    // 0x8028B05C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028B060: b           L_8028B068
    // 0x8028B064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8028B068;
    // 0x8028B064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8028B068:
    // 0x8028B068: beq         $v0, $zero, L_8028B3D0
    if (ctx->r2 == 0) {
        // 0x8028B06C: lw          $s1, 0x298($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X298);
            goto L_8028B3D0;
    }
    // 0x8028B06C: lw          $s1, 0x298($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X298);
    // 0x8028B070: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8028B074: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x8028B078: addiu       $t8, $v0, 0x4E3C
    ctx->r24 = ADD32(ctx->r2, 0X4E3C);
    // 0x8028B07C: bnel        $t8, $v1, L_8028B288
    if (ctx->r24 != ctx->r3) {
        // 0x8028B080: addiu       $t2, $v0, 0x365C
        ctx->r10 = ADD32(ctx->r2, 0X365C);
            goto L_8028B288;
    }
    goto skip_9;
    // 0x8028B080: addiu       $t2, $v0, 0x365C
    ctx->r10 = ADD32(ctx->r2, 0X365C);
    skip_9:
    // 0x8028B084: lw          $t9, 0x294($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X294);
    // 0x8028B088: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028B08C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028B090: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8028B094: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028B098: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028B09C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8028B0A0: lw          $s1, 0x298($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X298);
    // 0x8028B0A4: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x8028B0A8: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x8028B0AC: addiu       $t2, $zero, 0x39
    ctx->r10 = ADD32(0, 0X39);
    // 0x8028B0B0: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8028B0B4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028B0B8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8028B0BC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8028B0C0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8028B0C4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8028B0C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028B0CC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8028B0D0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8028B0D4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8028B0D8: nop

    // 0x8028B0DC: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x8028B0E0: jal         0x802344F4
    // 0x8028B0E4: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    static_3_802344F4(rdram, ctx);
        goto after_58;
    // 0x8028B0E4: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_58:
    // 0x8028B0E8: jal         0x8023413C
    // 0x8028B0EC: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    static_3_8023413C(rdram, ctx);
        goto after_59;
    // 0x8028B0EC: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    after_59:
    // 0x8028B0F0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8028B0F4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8028B0F8: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x8028B0FC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8028B100: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028B104: bne         $t3, $zero, L_8028B114
    if (ctx->r11 != 0) {
        // 0x8028B108: lui         $at, 0x42D0
        ctx->r1 = S32(0X42D0 << 16);
            goto L_8028B114;
    }
    // 0x8028B108: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x8028B10C: sb          $t4, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r12;
    // 0x8028B110: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
L_8028B114:
    // 0x8028B114: lbu         $t6, 0x77($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X77);
    // 0x8028B118: lwc1        $f6, 0x274($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X274);
    // 0x8028B11C: bnel        $t6, $zero, L_8028B280
    if (ctx->r14 != 0) {
        // 0x8028B120: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028B280;
    }
    goto skip_10;
    // 0x8028B120: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_10:
    // 0x8028B124: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028B128: lui         $at, 0x4310
    ctx->r1 = S32(0X4310 << 16);
    // 0x8028B12C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8028B130: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8028B134: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028B138: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8028B13C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028B140: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028B144: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028B148: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028B14C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8028B150: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028B154: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x8028B158: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8028B15C: lwc1        $f10, 0x270($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X270);
    // 0x8028B160: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8028B164: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8028B168: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028B16C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8028B170: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x8028B174: nop

    // 0x8028B178: mul.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8028B17C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8028B180: nop

    // 0x8028B184: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8028B188: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028B18C: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8028B190: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8028B194: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028B198: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8028B19C: nop

    // 0x8028B1A0: sw          $a3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r7;
    // 0x8028B1A4: lw          $a0, 0x34($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X34);
    // 0x8028B1A8: jal         0x802344F4
    // 0x8028B1AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_802344F4(rdram, ctx);
        goto after_60;
    // 0x8028B1AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_60:
    // 0x8028B1B0: jal         0x8023413C
    // 0x8028B1B4: lw          $a0, 0x34($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X34);
    static_3_8023413C(rdram, ctx);
        goto after_61;
    // 0x8028B1B4: lw          $a0, 0x34($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X34);
    after_61:
    // 0x8028B1B8: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8028B1BC: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x8028B1C0: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x8028B1C4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028B1C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028B1CC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028B1D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028B1D4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028B1D8: add.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8028B1DC: add.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x8028B1E0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8028B1E4: nop

    // 0x8028B1E8: bc1fl       L_8028B1FC
    if (!c1cs) {
        // 0x8028B1EC: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8028B1FC;
    }
    goto skip_11;
    // 0x8028B1EC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_11:
    // 0x8028B1F0: b           L_8028B200
    // 0x8028B1F4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
        goto L_8028B200;
    // 0x8028B1F4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8028B1F8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8028B1FC:
    // 0x8028B1FC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8028B200:
    // 0x8028B200: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8028B204: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8028B208: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028B20C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8028B210: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8028B214: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028B218: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028B21C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8028B220: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028B224: lui         $at, 0x4148
    ctx->r1 = S32(0X4148 << 16);
    // 0x8028B228: add.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8028B22C: add.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x8028B230: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8028B234: nop

    // 0x8028B238: bc1fl       L_8028B24C
    if (!c1cs) {
        // 0x8028B23C: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8028B24C;
    }
    goto skip_12;
    // 0x8028B23C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_12:
    // 0x8028B240: b           L_8028B250
    // 0x8028B244: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
        goto L_8028B250;
    // 0x8028B244: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8028B248: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8028B24C:
    // 0x8028B24C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8028B250:
    // 0x8028B250: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8028B254: nop

    // 0x8028B258: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x8028B25C: nop

    // 0x8028B260: bc1fl       L_8028B280
    if (!c1cs) {
        // 0x8028B264: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028B280;
    }
    goto skip_13;
    // 0x8028B264: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_13:
    // 0x8028B268: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8028B26C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8028B270: bc1fl       L_8028B280
    if (!c1cs) {
        // 0x8028B274: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028B280;
    }
    goto skip_14;
    // 0x8028B274: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_14:
    // 0x8028B278: sb          $t1, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r9;
    // 0x8028B27C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_8028B280:
    // 0x8028B280: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x8028B284: addiu       $t2, $v0, 0x365C
    ctx->r10 = ADD32(ctx->r2, 0X365C);
L_8028B288:
    // 0x8028B288: bnel        $t2, $v1, L_8028B580
    if (ctx->r10 != ctx->r3) {
        // 0x8028B28C: lbu         $t3, 0x5E($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X5E);
            goto L_8028B580;
    }
    goto skip_15;
    // 0x8028B28C: lbu         $t3, 0x5E($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5E);
    skip_15:
    // 0x8028B290: lw          $t3, 0x298($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X298);
    // 0x8028B294: lw          $t5, 0x294($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X294);
    // 0x8028B298: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028B29C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x8028B2A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028B2A4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028B2A8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028B2AC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8028B2B0: lw          $a0, 0x48($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X48);
    // 0x8028B2B4: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8028B2B8: addiu       $t8, $zero, 0x39
    ctx->r24 = ADD32(0, 0X39);
    // 0x8028B2BC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8028B2C0: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8028B2C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028B2C8: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x8028B2CC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028B2D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8028B2D4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8028B2D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028B2DC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028B2E0: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8028B2E4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8028B2E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028B2EC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028B2F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028B2F4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028B2F8: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x8028B2FC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8028B300: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8028B304: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8028B308: jal         0x802344F4
    // 0x8028B30C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    static_3_802344F4(rdram, ctx);
        goto after_62;
    // 0x8028B30C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    after_62:
    // 0x8028B310: jal         0x8023413C
    // 0x8028B314: lw          $a0, 0x48($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X48);
    static_3_8023413C(rdram, ctx);
        goto after_63;
    // 0x8028B314: lw          $a0, 0x48($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X48);
    after_63:
    // 0x8028B318: lbu         $t9, 0x77($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X77);
    // 0x8028B31C: lui         $at, 0x4310
    ctx->r1 = S32(0X4310 << 16);
    // 0x8028B320: lwc1        $f6, 0x274($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X274);
    // 0x8028B324: bnel        $t9, $zero, L_8028B580
    if (ctx->r25 != 0) {
        // 0x8028B328: lbu         $t3, 0x5E($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X5E);
            goto L_8028B580;
    }
    goto skip_16;
    // 0x8028B328: lbu         $t3, 0x5E($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5E);
    skip_16:
    // 0x8028B32C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028B330: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028B334: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028B338: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8028B33C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8028B340: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028B344: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x8028B348: lw          $a0, 0x38($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X38);
    // 0x8028B34C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028B350: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028B354: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8028B358: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8028B35C: lwc1        $f18, 0x270($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X270);
    // 0x8028B360: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028B364: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028B368: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028B36C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028B370: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8028B374: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028B378: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x8028B37C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028B380: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8028B384: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8028B388: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8028B38C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028B390: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8028B394: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028B398: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028B39C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8028B3A0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8028B3A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028B3A8: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8028B3AC: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8028B3B0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8028B3B4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8028B3B8: jal         0x802344F4
    // 0x8028B3BC: nop

    static_3_802344F4(rdram, ctx);
        goto after_64;
    // 0x8028B3BC: nop

    after_64:
    // 0x8028B3C0: jal         0x8023413C
    // 0x8028B3C4: lw          $a0, 0x38($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X38);
    static_3_8023413C(rdram, ctx);
        goto after_65;
    // 0x8028B3C4: lw          $a0, 0x38($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X38);
    after_65:
    // 0x8028B3C8: b           L_8028B580
    // 0x8028B3CC: lbu         $t3, 0x5E($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5E);
        goto L_8028B580;
    // 0x8028B3CC: lbu         $t3, 0x5E($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5E);
L_8028B3D0:
    // 0x8028B3D0: lw          $a3, 0x294($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X294);
    // 0x8028B3D4: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x8028B3D8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8028B3DC: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x8028B3E0: addiu       $t3, $zero, 0x39
    ctx->r11 = ADD32(0, 0X39);
    // 0x8028B3E4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x8028B3E8: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x8028B3EC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8028B3F0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8028B3F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8028B3F8: jal         0x802344F4
    // 0x8028B3FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    static_3_802344F4(rdram, ctx);
        goto after_66;
    // 0x8028B3FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_66:
    // 0x8028B400: jal         0x8023413C
    // 0x8028B404: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    static_3_8023413C(rdram, ctx);
        goto after_67;
    // 0x8028B404: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    after_67:
    // 0x8028B408: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8028B40C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8028B410: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x8028B414: bne         $t4, $zero, L_8028B428
    if (ctx->r12 != 0) {
        // 0x8028B418: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_8028B428;
    }
    // 0x8028B418: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028B41C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028B420: sb          $t5, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r13;
    // 0x8028B424: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_8028B428:
    // 0x8028B428: lbu         $t7, 0x77($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X77);
    // 0x8028B42C: bne         $t7, $zero, L_8028B57C
    if (ctx->r15 != 0) {
        // 0x8028B430: lui         $at, 0x4310
        ctx->r1 = S32(0X4310 << 16);
            goto L_8028B57C;
    }
    // 0x8028B430: lui         $at, 0x4310
    ctx->r1 = S32(0X4310 << 16);
    // 0x8028B434: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028B438: lwc1        $f18, 0x274($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X274);
    // 0x8028B43C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028B440: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028B444: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028B448: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028B44C: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x8028B450: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028B454: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8028B458: lwc1        $f6, 0x270($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X270);
    // 0x8028B45C: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8028B460: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028B464: nop

    // 0x8028B468: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8028B46C: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8028B470: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028B474: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8028B478: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028B47C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8028B480: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8028B484: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x8028B488: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8028B48C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8028B490: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8028B494: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8028B498: nop

    // 0x8028B49C: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x8028B4A0: sw          $a3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r7;
    // 0x8028B4A4: lw          $a0, 0x34($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X34);
    // 0x8028B4A8: jal         0x802344F4
    // 0x8028B4AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_802344F4(rdram, ctx);
        goto after_68;
    // 0x8028B4AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_68:
    // 0x8028B4B0: jal         0x8023413C
    // 0x8028B4B4: lw          $a0, 0x34($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X34);
    static_3_8023413C(rdram, ctx);
        goto after_69;
    // 0x8028B4B4: lw          $a0, 0x34($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X34);
    after_69:
    // 0x8028B4B8: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x8028B4BC: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x8028B4C0: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x8028B4C4: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028B4C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028B4CC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028B4D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028B4D4: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028B4D8: add.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8028B4DC: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8028B4E0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8028B4E4: nop

    // 0x8028B4E8: bc1fl       L_8028B4FC
    if (!c1cs) {
        // 0x8028B4EC: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8028B4FC;
    }
    goto skip_17;
    // 0x8028B4EC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_17:
    // 0x8028B4F0: b           L_8028B500
    // 0x8028B4F4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
        goto L_8028B500;
    // 0x8028B4F4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8028B4F8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8028B4FC:
    // 0x8028B4FC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8028B500:
    // 0x8028B500: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8028B504: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8028B508: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028B50C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8028B510: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8028B514: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028B518: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028B51C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8028B520: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8028B524: lui         $at, 0x4148
    ctx->r1 = S32(0X4148 << 16);
    // 0x8028B528: add.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8028B52C: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8028B530: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8028B534: nop

    // 0x8028B538: bc1fl       L_8028B54C
    if (!c1cs) {
        // 0x8028B53C: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8028B54C;
    }
    goto skip_18;
    // 0x8028B53C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_18:
    // 0x8028B540: b           L_8028B550
    // 0x8028B544: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
        goto L_8028B550;
    // 0x8028B544: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8028B548: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8028B54C:
    // 0x8028B54C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8028B550:
    // 0x8028B550: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8028B554: nop

    // 0x8028B558: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x8028B55C: nop

    // 0x8028B560: bc1fl       L_8028B580
    if (!c1cs) {
        // 0x8028B564: lbu         $t3, 0x5E($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X5E);
            goto L_8028B580;
    }
    goto skip_19;
    // 0x8028B564: lbu         $t3, 0x5E($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5E);
    skip_19:
    // 0x8028B568: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8028B56C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8028B570: bc1fl       L_8028B580
    if (!c1cs) {
        // 0x8028B574: lbu         $t3, 0x5E($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X5E);
            goto L_8028B580;
    }
    goto skip_20;
    // 0x8028B574: lbu         $t3, 0x5E($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5E);
    skip_20:
    // 0x8028B578: sb          $t2, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r10;
L_8028B57C:
    // 0x8028B57C: lbu         $t3, 0x5E($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5E);
L_8028B580:
    // 0x8028B580: addiu       $a0, $zero, 0x1388
    ctx->r4 = ADD32(0, 0X1388);
    // 0x8028B584: beql        $t3, $zero, L_8028B5D8
    if (ctx->r11 == 0) {
        // 0x8028B588: lbu         $t5, 0x5F($sp)
        ctx->r13 = MEM_BU(ctx->r29, 0X5F);
            goto L_8028B5D8;
    }
    goto skip_21;
    // 0x8028B588: lbu         $t5, 0x5F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X5F);
    skip_21:
    // 0x8028B58C: jal         0x80305E90
    // 0x8028B590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_70;
    // 0x8028B590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_70:
    // 0x8028B594: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028B598: addiu       $s0, $s2, 0x22C
    ctx->r16 = ADD32(ctx->r18, 0X22C);
    // 0x8028B59C: addiu       $t4, $zero, 0x38
    ctx->r12 = ADD32(0, 0X38);
    // 0x8028B5A0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8028B5A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8028B5A8: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x8028B5AC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8028B5B0: jal         0x80302238
    // 0x8028B5B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_71;
    // 0x8028B5B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_71:
    // 0x8028B5B8: beql        $v0, $zero, L_8028B5D8
    if (ctx->r2 == 0) {
        // 0x8028B5BC: lbu         $t5, 0x5F($sp)
        ctx->r13 = MEM_BU(ctx->r29, 0X5F);
            goto L_8028B5D8;
    }
    goto skip_22;
    // 0x8028B5BC: lbu         $t5, 0x5F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X5F);
    skip_22:
    // 0x8028B5C0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028B5C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8028B5C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028B5CC: jal         0x8030276C
    // 0x8028B5D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030276C(rdram, ctx);
        goto after_72;
    // 0x8028B5D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_72:
    // 0x8028B5D4: lbu         $t5, 0x5F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X5F);
L_8028B5D8:
    // 0x8028B5D8: addiu       $a0, $zero, 0x1388
    ctx->r4 = ADD32(0, 0X1388);
    // 0x8028B5DC: beql        $t5, $zero, L_8028B610
    if (ctx->r13 == 0) {
        // 0x8028B5E0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8028B610;
    }
    goto skip_23;
    // 0x8028B5E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_23:
    // 0x8028B5E4: jal         0x80305E90
    // 0x8028B5E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_73;
    // 0x8028B5E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_73:
    // 0x8028B5EC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028B5F0: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x8028B5F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028B5F8: addiu       $a1, $s2, 0x224
    ctx->r5 = ADD32(ctx->r18, 0X224);
    // 0x8028B5FC: addiu       $a2, $zero, 0x36
    ctx->r6 = ADD32(0, 0X36);
    // 0x8028B600: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8028B604: jal         0x80302238
    // 0x8028B608: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_74;
    // 0x8028B608: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_74:
L_8028B60C:
    // 0x8028B60C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8028B610:
    // 0x8028B610: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8028B614: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8028B618: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8028B61C: jr          $ra
    // 0x8028B620: addiu       $sp, $sp, 0x2A8
    ctx->r29 = ADD32(ctx->r29, 0X2A8);
    return;
    // 0x8028B620: addiu       $sp, $sp, 0x2A8
    ctx->r29 = ADD32(ctx->r29, 0X2A8);
;}
RECOMP_FUNC void D_802D8044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D80C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D80C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D80CC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D80D0: jr          $ra
    // 0x802D80D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802D80D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_8022B80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B80C: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x8022B810: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x8022B814: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x8022B818: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022B81C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8022B820: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x8022B824: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x8022B828: nor         $s5, $s5, $zero
    ctx->r21 = ~(ctx->r21 | 0);
    // 0x8022B82C: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x8022B830: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8022B834: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
L_8022B838:
    // 0x8022B838: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8022B83C: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x8022B840: addu        $t9, $t8, $s4
    ctx->r25 = ADD32(ctx->r24, ctx->r20);
    // 0x8022B844: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8022B848: and         $v1, $t0, $s5
    ctx->r3 = ctx->r8 & ctx->r21;
    // 0x8022B84C: addu        $a0, $v1, $fp
    ctx->r4 = ADD32(ctx->r3, ctx->r30);
    // 0x8022B850: sltu        $at, $t1, $a0
    ctx->r1 = ctx->r9 < ctx->r4 ? 1 : 0;
    // 0x8022B854: bne         $at, $zero, L_8022B878
    if (ctx->r1 != 0) {
        // 0x8022B858: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_8022B878;
    }
    // 0x8022B858: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022B85C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8022B860: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x8022B864: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x8022B868: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8022B86C: addu        $t3, $t2, $fp
    ctx->r11 = ADD32(ctx->r10, ctx->r30);
    // 0x8022B870: b           L_8022B8C8
    // 0x8022B874: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
        goto L_8022B8C8;
    // 0x8022B874: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
L_8022B878:
    // 0x8022B878: addiu       $t4, $s0, 0x1
    ctx->r12 = ADD32(ctx->r16, 0X1);
    // 0x8022B87C: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x8022B880: addiu       $a1, $t4, 0x1
    ctx->r5 = ADD32(ctx->r12, 0X1);
    // 0x8022B884: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8022B888: jal         0x80231A24
    // 0x8022B88C: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022B88C: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    after_0:
    // 0x8022B890: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8022B894: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x8022B898: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8022B89C: bne         $at, $zero, L_8022B8B4
    if (ctx->r1 != 0) {
        // 0x8022B8A0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8022B8B4;
    }
    // 0x8022B8A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022B8A4: jal         0x80231A24
    // 0x8022B8A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022B8A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x8022B8AC: b           L_8022B8C8
    // 0x8022B8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022B8C8;
    // 0x8022B8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022B8B4:
    // 0x8022B8B4: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x8022B8B8: addu        $v0, $s7, $t6
    ctx->r2 = ADD32(ctx->r23, ctx->r14);
    // 0x8022B8BC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8022B8C0: b           L_8022B838
    // 0x8022B8C4: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
        goto L_8022B838;
    // 0x8022B8C4: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8022B8C8:
    // 0x8022B8C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B8CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B8D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B8D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B8D8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B8DC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B8E0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B8E4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022B8E8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022B8EC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8022B8F0: jr          $ra
    // 0x8022B8F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8022B8F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802255D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802255D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802255D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802255DC: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x802255E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802255E4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x802255E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802255EC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802255F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802255F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802255F8: addiu       $a0, $sp, 0x3D
    ctx->r4 = ADD32(ctx->r29, 0X3D);
    // 0x802255FC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225600: jal         0x80225424
    // 0x80225604: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80225604: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80225608: lbu         $a0, 0x3D($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3D);
    // 0x8022560C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80225610: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80225614: jal         0x8022B948
    // 0x80225618: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_1;
    // 0x80225618: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x8022561C: lbu         $t7, 0x3D($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3D);
    // 0x80225620: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80225624: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80225628: blez        $t7, L_8022567C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8022562C: addiu       $s4, $zero, 0xFF
        ctx->r20 = ADD32(0, 0XFF);
            goto L_8022567C;
    }
    // 0x8022562C: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
L_80225630:
    // 0x80225630: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x80225634: addu        $s1, $t8, $s3
    ctx->r17 = ADD32(ctx->r24, ctx->r19);
    // 0x80225638: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022563C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225640: jal         0x80225424
    // 0x80225644: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x80225644: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80225648: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    // 0x8022564C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225650: jal         0x80225424
    // 0x80225654: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x80225654: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x80225658: sll         $t9, $s0, 3
    ctx->r25 = S32(ctx->r16 << 3);
    // 0x8022565C: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x80225660: sb          $s4, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r20;
    // 0x80225664: lbu         $t2, 0x3D($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3D);
    // 0x80225668: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022566C: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x80225670: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80225674: bne         $at, $zero, L_80225630
    if (ctx->r1 != 0) {
        // 0x80225678: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_80225630;
    }
    // 0x80225678: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
L_8022567C:
    // 0x8022567C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80225680: jal         0x8022B948
    // 0x80225684: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_4;
    // 0x80225684: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x80225688: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8022568C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80225690: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225694: jal         0x80225424
    // 0x80225698: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x80225698: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8022569C: addiu       $a0, $s0, 0x9
    ctx->r4 = ADD32(ctx->r16, 0X9);
    // 0x802256A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802256A4: jal         0x80225424
    // 0x802256A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x802256A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x802256AC: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x802256B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802256B4: jal         0x80225424
    // 0x802256B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_7;
    // 0x802256B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_7:
    // 0x802256BC: sw          $s3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r19;
    // 0x802256C0: lbu         $t3, 0x3D($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3D);
    // 0x802256C4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802256C8: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    // 0x802256CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802256D0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802256D4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802256D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802256DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802256E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802256E4: jr          $ra
    // 0x802256E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802256E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8029CAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029CB64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8029CB68: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8029CB6C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8029CB70: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8029CB74: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8029CB78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029CB7C: sb          $a1, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r5;
    // 0x8029CB80: sb          $zero, 0x34($a0)
    MEM_B(0X34, ctx->r4) = 0;
    // 0x8029CB84: beq         $v0, $at, L_8029CBA0
    if (ctx->r2 == ctx->r1) {
        // 0x8029CB88: sb          $zero, 0x35($a0)
        MEM_B(0X35, ctx->r4) = 0;
            goto L_8029CBA0;
    }
    // 0x8029CB88: sb          $zero, 0x35($a0)
    MEM_B(0X35, ctx->r4) = 0;
    // 0x8029CB8C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8029CB90: beql        $v0, $at, L_8029CBD8
    if (ctx->r2 == ctx->r1) {
        // 0x8029CB94: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_8029CBD8;
    }
    goto skip_0;
    // 0x8029CB94: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x8029CB98: b           L_8029CC38
    // 0x8029CB9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8029CC38;
    // 0x8029CB9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8029CBA0:
    // 0x8029CBA0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8029CBA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8029CBA8: beql        $a0, $at, L_8029CBC4
    if (ctx->r4 == ctx->r1) {
        // 0x8029CBAC: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_8029CBC4;
    }
    goto skip_1;
    // 0x8029CBAC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_1:
    // 0x8029CBB0: jal         0x80233D58
    // 0x8029CBB4: nop

    static_3_80233D58(rdram, ctx);
        goto after_0;
    // 0x8029CBB4: nop

    after_0:
    // 0x8029CBB8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8029CBBC: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x8029CBC0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_8029CBC4:
    // 0x8029CBC4: jal         0x802FA670
    // 0x8029CBC8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    static_3_802FA670(rdram, ctx);
        goto after_1;
    // 0x8029CBC8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x8029CBCC: b           L_8029CC38
    // 0x8029CBD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_8029CC38;
    // 0x8029CBD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8029CBD4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_8029CBD8:
    // 0x8029CBD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8029CBDC: beq         $a0, $at, L_8029CBF4
    if (ctx->r4 == ctx->r1) {
        // 0x8029CBE0: nop
    
            goto L_8029CBF4;
    }
    // 0x8029CBE0: nop

    // 0x8029CBE4: jal         0x80233D58
    // 0x8029CBE8: nop

    static_3_80233D58(rdram, ctx);
        goto after_2;
    // 0x8029CBE8: nop

    after_2:
    // 0x8029CBEC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8029CBF0: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
L_8029CBF4:
    // 0x8029CBF4: jal         0x80233CE8
    // 0x8029CBF8: nop

    static_3_80233CE8(rdram, ctx);
        goto after_3;
    // 0x8029CBF8: nop

    after_3:
    // 0x8029CBFC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8029CC00: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x8029CC04: addiu       $t9, $zero, 0xE0
    ctx->r25 = ADD32(0, 0XE0);
    // 0x8029CC08: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8029CC0C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8029CC10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029CC14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029CC18: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8029CC1C: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x8029CC20: jal         0x802344F4
    // 0x8029CC24: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_4;
    // 0x8029CC24: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_4:
    // 0x8029CC28: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x8029CC2C: jal         0x802FBFF4
    // 0x8029CC30: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    static_3_802FBFF4(rdram, ctx);
        goto after_5;
    // 0x8029CC30: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_5:
    // 0x8029CC34: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8029CC38:
    // 0x8029CC38: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8029CC3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8029CC40: jr          $ra
    // 0x8029CC44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8029CC44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_80233A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233A68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233A6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233A70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233A74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80233A78: lhu         $t6, 0xC($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XC);
    // 0x80233A7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80233A80: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80233A84: bne         $t6, $at, L_80233A98
    if (ctx->r14 != ctx->r1) {
        // 0x80233A88: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80233A98;
    }
    // 0x80233A88: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80233A8C: jal         0x80231A24
    // 0x80233A90: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80233A90: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80233A94: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
L_80233A98:
    // 0x80233A98: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x80233A9C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80233AA0: bnel        $t7, $zero, L_80233AB8
    if (ctx->r15 != 0) {
        // 0x80233AA4: lw          $t8, 0x5C($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X5C);
            goto L_80233AB8;
    }
    goto skip_0;
    // 0x80233AA4: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    skip_0:
    // 0x80233AA8: jal         0x8022B948
    // 0x80233AAC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_1;
    // 0x80233AAC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80233AB0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80233AB4: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
L_80233AB8:
    // 0x80233AB8: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    // 0x80233ABC: bnel        $t8, $zero, L_80233AE4
    if (ctx->r24 != 0) {
        // 0x80233AC0: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_80233AE4;
    }
    goto skip_1;
    // 0x80233AC0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80233AC4: jal         0x8022B948
    // 0x80233AC8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_2;
    // 0x80233AC8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x80233ACC: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x80233AD0: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    // 0x80233AD4: jal         0x8022B948
    // 0x80233AD8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_3;
    // 0x80233AD8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x80233ADC: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x80233AE0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_80233AE4:
    // 0x80233AE4: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x80233AE8: lhu         $t0, 0xA($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XA);
    // 0x80233AEC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80233AF0: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x80233AF4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80233AF8: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x80233AFC: lhu         $t4, 0xA($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XA);
    // 0x80233B00: sh          $t4, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r12;
    // 0x80233B04: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x80233B08: sh          $zero, 0x4($t6)
    MEM_H(0X4, ctx->r14) = 0;
    // 0x80233B0C: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x80233B10: sh          $zero, 0x6($t7)
    MEM_H(0X6, ctx->r15) = 0;
    // 0x80233B14: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80233B18: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x80233B1C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80233B20: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x80233B24: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80233B28: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x80233B2C: lhu         $t2, 0xC($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XC);
    // 0x80233B30: sh          $t2, 0xC($t3)
    MEM_H(0XC, ctx->r11) = ctx->r10;
    // 0x80233B34: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x80233B38: sh          $zero, 0xE($t4)
    MEM_H(0XE, ctx->r12) = 0;
    // 0x80233B3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233B40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233B44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80233B48: jr          $ra
    // 0x80233B4C: nop

    return;
    // 0x80233B4C: nop

;}
RECOMP_FUNC void D_80241444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241444: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80241448: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024144C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80241450: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80241454: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x80241458: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x8024145C: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80241460: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80241464: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80241468: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8024146C: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x80241470: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x80241474: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x80241478: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    // 0x8024147C: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80241480: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80241484: sh          $t9, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r25;
    // 0x80241488: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x8024148C: lbu         $t0, 0x9($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X9);
    // 0x80241490: addiu       $t1, $zero, 0x3E80
    ctx->r9 = ADD32(0, 0X3E80);
    // 0x80241494: sw          $t1, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r9;
    // 0x80241498: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x8024149C: sb          $t0, 0x35($a0)
    MEM_B(0X35, ctx->r4) = ctx->r8;
    // 0x802414A0: lw          $t2, 0x10($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X10);
    // 0x802414A4: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x802414A8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x802414AC: sw          $t2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r10;
    // 0x802414B0: lw          $t3, 0x14($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X14);
    // 0x802414B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802414B8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x802414BC: sw          $t3, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r11;
    // 0x802414C0: lw          $t4, 0x18($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X18);
    // 0x802414C4: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x802414C8: sw          $zero, 0x80($a0)
    MEM_W(0X80, ctx->r4) = 0;
    // 0x802414CC: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
    // 0x802414D0: sh          $t5, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r13;
    // 0x802414D4: sw          $t4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r12;
    // 0x802414D8: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x802414DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802414E0: sb          $t6, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r14;
    // 0x802414E4: lbu         $a3, 0x8($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X8);
    // 0x802414E8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802414EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802414F0: jal         0x80236CD0
    // 0x802414F4: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    static_3_80236CD0(rdram, ctx);
        goto after_0;
    // 0x802414F4: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x802414F8: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x802414FC: jal         0x80241424
    // 0x80241500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241424(rdram, ctx);
        goto after_1;
    // 0x80241500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80241504: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x80241508: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x8024150C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80241510: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80241514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80241518: jal         0x80236CD0
    // 0x8024151C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    static_3_80236CD0(rdram, ctx);
        goto after_2;
    // 0x8024151C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80241520: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x80241524: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80241528: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8024152C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80241530: blez        $t9, L_80241560
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80241534: addiu       $t2, $zero, 0x1C
        ctx->r10 = ADD32(0, 0X1C);
            goto L_80241560;
    }
    // 0x80241534: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x80241538: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8024153C: lw          $t0, 0x6C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X6C);
L_80241540:
    // 0x80241540: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80241544: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80241548: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x8024154C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80241550: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x80241554: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80241558: bnel        $at, $zero, L_80241540
    if (ctx->r1 != 0) {
        // 0x8024155C: lw          $t0, 0x6C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X6C);
            goto L_80241540;
    }
    goto skip_0;
    // 0x8024155C: lw          $t0, 0x6C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X6C);
    skip_0:
L_80241560:
    // 0x80241560: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80241564: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x80241568: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x8024156C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80241570: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80241574: jal         0x80236CD0
    // 0x80241578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80236CD0(rdram, ctx);
        goto after_3;
    // 0x80241578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8024157C: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x80241580: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80241584: jal         0x8023F52C
    // 0x80241588: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    static_3_8023F52C(rdram, ctx);
        goto after_4;
    // 0x80241588: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    after_4:
    // 0x8024158C: lui         $t3, 0x8024
    ctx->r11 = S32(0X8024 << 16);
    // 0x80241590: addiu       $t3, $t3, 0xCFC
    ctx->r11 = ADD32(ctx->r11, 0XCFC);
    // 0x80241594: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80241598: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x8024159C: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x802415A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802415A4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802415A8: jal         0x8023F5A0
    // 0x802415AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023F5A0(rdram, ctx);
        goto after_5;
    // 0x802415AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x802415B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802415B4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802415B8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802415BC: jr          $ra
    // 0x802415C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802415C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_80215168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80215168: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8021516C: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x80215170: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x80215174: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x80215178: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8021517C: c.eq.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl == ctx->f20.fl;
    // 0x80215180: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x80215184: mtc1        $a2, $f30
    ctx->f30.u32l = ctx->r6;
    // 0x80215188: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8021518C: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x80215190: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x80215194: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
    // 0x80215198: mov.s       $f28, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    ctx->f28.fl = ctx->f14.fl;
    // 0x8021519C: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x802151A0: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x802151A4: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x802151A8: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x802151AC: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x802151B0: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x802151B4: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x802151B8: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x802151BC: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x802151C0: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x802151C4: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x802151C8: bc1f        L_802152AC
    if (!c1cs) {
        // 0x802151CC: sw          $zero, 0x0($s2)
        MEM_W(0X0, ctx->r18) = 0;
            goto L_802152AC;
    }
    // 0x802151CC: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x802151D0: lwc1        $f22, 0xC0($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802151D4: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x802151D8: c.eq.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl == ctx->f22.fl;
    // 0x802151DC: nop

    // 0x802151E0: bc1f        L_802152AC
    if (!c1cs) {
        // 0x802151E4: nop
    
            goto L_802152AC;
    }
    // 0x802151E4: nop

    // 0x802151E8: c.eq.s      $f30, $f24
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f30.fl == ctx->f24.fl;
    // 0x802151EC: nop

    // 0x802151F0: bc1f        L_802152AC
    if (!c1cs) {
        // 0x802151F4: nop
    
            goto L_802152AC;
    }
    // 0x802151F4: nop

    // 0x802151F8: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x802151FC: jal         0x80214CE0
    // 0x80215200: nop

    static_3_80214CE0(rdram, ctx);
        goto after_0;
    // 0x80215200: nop

    after_0:
    // 0x80215204: ori         $s6, $zero, 0xFFFF
    ctx->r22 = 0 | 0XFFFF;
    // 0x80215208: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x8021520C: bne         $s6, $t6, L_80215234
    if (ctx->r22 != ctx->r14) {
        // 0x80215210: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_80215234;
    }
    // 0x80215210: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80215214: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x80215218: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021521C: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80215220: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x80215224: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x80215228: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x8021522C: b           L_802154E0
    // 0x80215230: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
        goto L_802154E0;
    // 0x80215230: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
L_80215234:
    // 0x80215234: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80215238: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021523C: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80215240: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80215244: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80215248: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x8021524C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80215250: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x80215254: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80215258: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x8021525C: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x80215260: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x80215264: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215268: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021526C: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x80215270: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80215274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80215278: swc1        $f0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f0.u32l;
    // 0x8021527C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80215280: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    // 0x80215284: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x80215288: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8021528C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80215290: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x80215294: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80215298: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8021529C: lw          $t0, 0xD0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD0);
    // 0x802152A0: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x802152A4: b           L_802154E0
    // 0x802152A8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
        goto L_802154E0;
    // 0x802152A8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
L_802152AC:
    // 0x802152AC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802152B0: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x802152B4: lwc1        $f22, 0xC0($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802152B8: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x802152BC: blez        $v1, L_802154A4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802152C0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_802154A4;
    }
    // 0x802152C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802152C4: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x802152C8: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x802152CC: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x802152D0: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x802152D4: addiu       $s7, $zero, 0x24
    ctx->r23 = ADD32(0, 0X24);
    // 0x802152D8: ori         $s6, $zero, 0xFFFF
    ctx->r22 = 0 | 0XFFFF;
L_802152DC:
    // 0x802152DC: multu       $s3, $s7
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802152E0: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
    // 0x802152E4: mflo        $t1
    ctx->r9 = lo;
    // 0x802152E8: addu        $s1, $t1, $t2
    ctx->r17 = ADD32(ctx->r9, ctx->r10);
    // 0x802152EC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802152F0: beql        $s6, $v0, L_80215494
    if (ctx->r22 == ctx->r2) {
        // 0x802152F4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80215494;
    }
    goto skip_0;
    // 0x802152F4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x802152F8: lbu         $t3, 0x8($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X8);
    // 0x802152FC: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80215300: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80215304: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80215308: beql        $t4, $zero, L_80215494
    if (ctx->r12 == 0) {
        // 0x8021530C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80215494;
    }
    goto skip_1;
    // 0x8021530C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
    // 0x80215310: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80215314: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x80215318: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8021531C: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x80215320: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80215324: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80215328: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8021532C: lw          $s4, 0x0($t2)
    ctx->r20 = MEM_W(ctx->r10, 0X0);
    // 0x80215330: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x80215334: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x80215338: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x8021533C: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80215340: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80215344: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x80215348: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021534C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80215350: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x80215354: addiu       $t3, $sp, 0x98
    ctx->r11 = ADD32(ctx->r29, 0X98);
    // 0x80215358: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x8021535C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80215360: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80215364: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    // 0x80215368: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8021536C: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80215370: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80215374: jal         0x80219210
    // 0x80215378: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    static_3_80219210(rdram, ctx);
        goto after_1;
    // 0x80215378: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x8021537C: beq         $v0, $zero, L_80215488
    if (ctx->r2 == 0) {
        // 0x80215380: nop
    
            goto L_80215488;
    }
    // 0x80215380: nop

    // 0x80215384: lbu         $t4, 0x11($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X11);
    // 0x80215388: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021538C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80215390: andi        $t5, $t4, 0x6
    ctx->r13 = ctx->r12 & 0X6;
    // 0x80215394: bne         $t5, $zero, L_80215464
    if (ctx->r13 != 0) {
        // 0x80215398: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_80215464;
    }
    // 0x80215398: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021539C: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x802153A0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802153A4: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x802153A8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802153AC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x802153B0: sw          $s3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r19;
    // 0x802153B4: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x802153B8: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x802153BC: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802153C0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802153C4: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x802153C8: swc1        $f18, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f18.u32l;
    // 0x802153CC: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802153D0: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802153D4: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x802153D8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802153DC: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x802153E0: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x802153E4: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x802153E8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x802153EC: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802153F0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802153F4: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802153F8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x802153FC: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80215400: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80215404: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80215408: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x8021540C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80215410: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x80215414: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    // 0x80215418: jal         0x8021A370
    // 0x8021541C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_8021A370(rdram, ctx);
        goto after_2;
    // 0x8021541C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80215420: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80215424: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80215428: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8021542C: addiu       $a0, $t8, 0x1
    ctx->r4 = ADD32(ctx->r24, 0X1);
    // 0x80215430: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x80215434: lhu         $t1, 0x0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X0);
    // 0x80215438: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8021543C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80215440: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80215444: bne         $at, $zero, L_80215488
    if (ctx->r1 != 0) {
        // 0x80215448: nop
    
            goto L_80215488;
    }
    // 0x80215448: nop

    // 0x8021544C: jal         0x80231C58
    // 0x80215450: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_3;
    // 0x80215450: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_3:
    // 0x80215454: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80215458: addiu       $t2, $t0, -0x1
    ctx->r10 = ADD32(ctx->r8, -0X1);
    // 0x8021545C: b           L_80215488
    // 0x80215460: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
        goto L_80215488;
    // 0x80215460: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
L_80215464:
    // 0x80215464: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x80215468: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021546C: sw          $s3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r19;
    // 0x80215470: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x80215474: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    // 0x80215478: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x8021547C: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x80215480: jal         0x802171F0
    // 0x80215484: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    static_3_802171F0(rdram, ctx);
        goto after_4;
    // 0x80215484: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_4:
L_80215488:
    // 0x80215488: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8021548C: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x80215490: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80215494:
    // 0x80215494: andi        $t3, $s3, 0xFFFF
    ctx->r11 = ctx->r19 & 0XFFFF;
    // 0x80215498: slt         $at, $t3, $v1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021549C: bne         $at, $zero, L_802152DC
    if (ctx->r1 != 0) {
        // 0x802154A0: or          $s3, $t3, $zero
        ctx->r19 = ctx->r11 | 0;
            goto L_802152DC;
    }
    // 0x802154A0: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
L_802154A4:
    // 0x802154A4: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802154A8: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x802154AC: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x802154B0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802154B4: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x802154B8: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x802154BC: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x802154C0: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802154C4: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x802154C8: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x802154CC: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x802154D0: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x802154D4: jal         0x80209508
    // 0x802154D8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    static_3_80209508(rdram, ctx);
        goto after_5;
    // 0x802154D8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    after_5:
    // 0x802154DC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_802154E0:
    // 0x802154E0: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x802154E4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x802154E8: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x802154EC: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x802154F0: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x802154F4: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x802154F8: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x802154FC: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x80215500: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x80215504: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x80215508: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x8021550C: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x80215510: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x80215514: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x80215518: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x8021551C: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x80215520: jr          $ra
    // 0x80215524: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80215524: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void D_802E0F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0F84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E0F88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E0F8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E0F90: beq         $a0, $zero, L_802E0FDC
    if (ctx->r4 == 0) {
        // 0x802E0F94: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802E0FDC;
    }
    // 0x802E0F94: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E0F98: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E0F9C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E0FA0: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802E0FA4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802E0FA8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x802E0FAC: jal         0x8028D2B8
    // 0x802E0FB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028D2B8(rdram, ctx);
        goto after_0;
    // 0x802E0FB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802E0FB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802E0FB8: jal         0x803086D4
    // 0x802E0FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_1;
    // 0x802E0FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802E0FC0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802E0FC4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E0FC8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802E0FCC: beql        $t8, $zero, L_802E0FE0
    if (ctx->r24 == 0) {
        // 0x802E0FD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802E0FE0;
    }
    goto skip_0;
    // 0x802E0FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802E0FD4: jal         0x802C681C
    // 0x802E0FD8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x802E0FD8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_802E0FDC:
    // 0x802E0FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802E0FE0:
    // 0x802E0FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E0FE4: jr          $ra
    // 0x802E0FE8: nop

    return;
    // 0x802E0FE8: nop

;}
RECOMP_FUNC void D_80243AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243AE8: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x80243AEC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80243AF0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80243AF4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80243AF8: c.eq.d      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.d == ctx->f2.d;
    // 0x80243AFC: nop

    // 0x80243B00: bc1fl       L_80243B14
    if (!c1cs) {
        // 0x80243B04: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_80243B14;
    }
    goto skip_0;
    // 0x80243B04: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_0:
    // 0x80243B08: jr          $ra
    // 0x80243B0C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x80243B0C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x80243B10: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_80243B14:
    // 0x80243B14: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x80243B18: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80243B1C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80243B20: bc1fl       L_80243B34
    if (!c1cs) {
        // 0x80243B24: neg.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
            goto L_80243B34;
    }
    goto skip_1;
    // 0x80243B24: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
    skip_1:
    // 0x80243B28: b           L_80243B34
    // 0x80243B2C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
        goto L_80243B34;
    // 0x80243B2C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x80243B30: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
L_80243B34:
    // 0x80243B34: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x80243B38: nop

    // 0x80243B3C: bc1fl       L_80243B74
    if (!c1cs) {
        // 0x80243B40: lui         $at, 0x3FE0
        ctx->r1 = S32(0X3FE0 << 16);
            goto L_80243B74;
    }
    goto skip_2;
    // 0x80243B40: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    skip_2:
    // 0x80243B44: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80243B48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80243B4C: nop

L_80243B50:
    // 0x80243B50: mul.d       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f16.d);
    // 0x80243B54: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80243B58: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80243B5C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80243B60: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x80243B64: nop

    // 0x80243B68: bc1t        L_80243B50
    if (c1cs) {
        // 0x80243B6C: nop
    
            goto L_80243B50;
    }
    // 0x80243B6C: nop

    // 0x80243B70: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
L_80243B74:
    // 0x80243B74: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80243B78: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80243B7C: nop

    // 0x80243B80: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x80243B84: nop

    // 0x80243B88: bc1fl       L_80243BB0
    if (!c1cs) {
        // 0x80243B8C: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_80243BB0;
    }
    goto skip_3;
    // 0x80243B8C: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_3:
    // 0x80243B90: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
L_80243B94:
    // 0x80243B94: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80243B98: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x80243B9C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80243BA0: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80243BA4: bc1tl       L_80243B94
    if (c1cs) {
        // 0x80243BA8: add.d       $f0, $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
            goto L_80243B94;
    }
    goto skip_4;
    // 0x80243BA8: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
    skip_4:
    // 0x80243BAC: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_80243BB0:
    // 0x80243BB0: nop

    // 0x80243BB4: bc1fl       L_80243BC8
    if (!c1cs) {
        // 0x80243BB8: neg.d       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
            goto L_80243BC8;
    }
    goto skip_5;
    // 0x80243BB8: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
    skip_5:
    // 0x80243BBC: b           L_80243BC8
    // 0x80243BC0: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
        goto L_80243BC8;
    // 0x80243BC0: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
    // 0x80243BC4: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
L_80243BC8:
    // 0x80243BC8: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x80243BCC: jr          $ra
    // 0x80243BD0: nop

    return;
    // 0x80243BD0: nop

;}
RECOMP_FUNC void D_802CF180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF200: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802CF204: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802CF208: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CF20C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CF210: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802CF214: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802CF218: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802CF21C: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802CF220: jal         0x80302DC8
    // 0x802CF224: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802CF224: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802CF228: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802CF22C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF230: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802CF234: jal         0x80302DC8
    // 0x802CF238: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802CF238: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802CF23C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802CF240: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF244: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802CF248: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x802CF24C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802CF250: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802CF254: jal         0x80290474
    // 0x802CF258: nop

    static_3_80290474(rdram, ctx);
        goto after_2;
    // 0x802CF258: nop

    after_2:
    // 0x802CF25C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF260: jal         0x80302980
    // 0x802CF264: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_3;
    // 0x802CF264: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802CF268: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF26C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802CF270: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802CF274: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802CF278: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CF27C: jal         0x80302988
    // 0x802CF280: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_4;
    // 0x802CF280: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802CF284: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF288: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802CF28C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802CF290: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802CF294: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CF298: jal         0x80302988
    // 0x802CF29C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802CF29C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802CF2A0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF2A4: jal         0x80302A7C
    // 0x802CF2A8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_6;
    // 0x802CF2A8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802CF2AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802CF2B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802CF2B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802CF2B8: jr          $ra
    // 0x802CF2BC: nop

    return;
    // 0x802CF2BC: nop

;}
RECOMP_FUNC void D_802D0684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D0704: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802D0708: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802D070C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802D0710: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802D0714: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x802D0718: lbu         $t6, 0x72($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X72);
    // 0x802D071C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D0720: bnel        $t6, $zero, L_802D078C
    if (ctx->r14 != 0) {
        // 0x802D0724: lwc1        $f10, 0x1AC($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X1AC);
            goto L_802D078C;
    }
    goto skip_0;
    // 0x802D0724: lwc1        $f10, 0x1AC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1AC);
    skip_0:
    // 0x802D0728: lw          $v0, 0x354($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X354);
    // 0x802D072C: addiu       $a1, $s0, 0x174
    ctx->r5 = ADD32(ctx->r16, 0X174);
    // 0x802D0730: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x802D0734: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D0738: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    // 0x802D073C: jalr        $t9
    // 0x802D0740: addiu       $a0, $a0, 0x1B4
    ctx->r4 = ADD32(ctx->r4, 0X1B4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D0740: addiu       $a0, $a0, 0x1B4
    ctx->r4 = ADD32(ctx->r4, 0X1B4);
    after_0:
    // 0x802D0744: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802D0748: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D074C: lwc1        $f4, 0x1A4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x802D0750: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0754: lwc1        $f10, 0x1A8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x802D0758: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802D075C: lwc1        $f4, 0x1AC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1AC);
    // 0x802D0760: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802D0764: swc1        $f8, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f8.u32l;
    // 0x802D0768: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D076C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802D0770: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D0774: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802D0778: sb          $t8, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r24;
    // 0x802D077C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802D0780: swc1        $f18, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f18.u32l;
    // 0x802D0784: swc1        $f8, 0x1AC($s0)
    MEM_W(0X1AC, ctx->r16) = ctx->f8.u32l;
    // 0x802D0788: lwc1        $f10, 0x1AC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1AC);
L_802D078C:
    // 0x802D078C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D0790: lw          $a2, 0x1A4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1A4);
    // 0x802D0794: lw          $a3, 0x1A8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1A8);
    // 0x802D0798: addiu       $a1, $s0, 0x1B4
    ctx->r5 = ADD32(ctx->r16, 0X1B4);
    // 0x802D079C: jal         0x802AFF70
    // 0x802D07A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_1;
    // 0x802D07A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x802D07A4: lh          $v0, 0x78($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X78);
    // 0x802D07A8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802D07AC: beq         $v0, $at, L_802D07C4
    if (ctx->r2 == ctx->r1) {
        // 0x802D07B0: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_802D07C4;
    }
    // 0x802D07B0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802D07B4: beql        $v0, $at, L_802D08F8
    if (ctx->r2 == ctx->r1) {
        // 0x802D07B8: lui         $at, 0x4130
        ctx->r1 = S32(0X4130 << 16);
            goto L_802D08F8;
    }
    goto skip_1;
    // 0x802D07B8: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    skip_1:
    // 0x802D07BC: b           L_802D0944
    // 0x802D07C0: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
        goto L_802D0944;
    // 0x802D07C0: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
L_802D07C4:
    // 0x802D07C4: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x802D07C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D07CC: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x802D07D0: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x802D07D4: nop

    // 0x802D07D8: bc1fl       L_802D0948
    if (!c1cs) {
        // 0x802D07DC: lwc1        $f8, 0x38($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
            goto L_802D0948;
    }
    goto skip_2;
    // 0x802D07DC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    skip_2:
    // 0x802D07E0: jal         0x8023499C
    // 0x802D07E4: nop

    static_3_8023499C(rdram, ctx);
        goto after_2;
    // 0x802D07E4: nop

    after_2:
    // 0x802D07E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802D07EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D07F0: nop

    // 0x802D07F4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802D07F8: nop

    // 0x802D07FC: bc1fl       L_802D087C
    if (!c1cs) {
        // 0x802D0800: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_802D087C;
    }
    goto skip_3;
    // 0x802D0800: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_3:
    // 0x802D0804: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D0808: jal         0x80302980
    // 0x802D080C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_3;
    // 0x802D080C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802D0810: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D0814: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D0818: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D081C: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x802D0820: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D0824: jal         0x80302988
    // 0x802D0828: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_4;
    // 0x802D0828: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802D082C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D0830: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D0834: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D0838: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    // 0x802D083C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D0840: jal         0x80302988
    // 0x802D0844: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802D0844: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802D0848: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D084C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D0850: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D0854: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    // 0x802D0858: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D085C: jal         0x80302988
    // 0x802D0860: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_6;
    // 0x802D0860: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802D0864: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D0868: jal         0x80302A7C
    // 0x802D086C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_7;
    // 0x802D086C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802D0870: b           L_802D08E8
    // 0x802D0874: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
        goto L_802D08E8;
    // 0x802D0874: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x802D0878: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_802D087C:
    // 0x802D087C: jal         0x80302980
    // 0x802D0880: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_8;
    // 0x802D0880: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802D0884: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D0888: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D088C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D0890: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x802D0894: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D0898: jal         0x80302988
    // 0x802D089C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_9;
    // 0x802D089C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_9:
    // 0x802D08A0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D08A4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D08A8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D08AC: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    // 0x802D08B0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D08B4: jal         0x80302988
    // 0x802D08B8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_10;
    // 0x802D08B8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_10:
    // 0x802D08BC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D08C0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D08C4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D08C8: addiu       $a1, $zero, 0x8F
    ctx->r5 = ADD32(0, 0X8F);
    // 0x802D08CC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D08D0: jal         0x80302988
    // 0x802D08D4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_11;
    // 0x802D08D4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_11:
    // 0x802D08D8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D08DC: jal         0x80302A7C
    // 0x802D08E0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_12;
    // 0x802D08E0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_12:
    // 0x802D08E4: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
L_802D08E8:
    // 0x802D08E8: sh          $t0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r8;
    // 0x802D08EC: b           L_802D0944
    // 0x802D08F0: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
        goto L_802D0944;
    // 0x802D08F0: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x802D08F4: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
L_802D08F8:
    // 0x802D08F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D08FC: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x802D0900: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802D0904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D0908: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x802D090C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D0910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D0914: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802D0918: bc1f        L_802D0944
    if (!c1cs) {
        // 0x802D091C: addiu       $t1, $zero, 0x80
        ctx->r9 = ADD32(0, 0X80);
            goto L_802D0944;
    }
    // 0x802D091C: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x802D0920: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D0924: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802D0928: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802D092C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D0930: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802D0934: jal         0x8030890C
    // 0x802D0938: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_13;
    // 0x802D0938: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x802D093C: sh          $zero, 0x78($s0)
    MEM_H(0X78, ctx->r16) = 0;
    // 0x802D0940: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
L_802D0944:
    // 0x802D0944: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
L_802D0948:
    // 0x802D0948: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x802D094C: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    // 0x802D0950: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802D0954: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802D0958: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802D095C: jr          $ra
    // 0x802D0960: nop

    return;
    // 0x802D0960: nop

;}
RECOMP_FUNC void D_802E79F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7A70: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802E7A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7A78: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802E7A7C: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E7A80: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E7A84: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7A88: bne         $v1, $zero, L_802E7AB0
    if (ctx->r3 != 0) {
        // 0x802E7A8C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E7AB0;
    }
    // 0x802E7A8C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7A90: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7A94: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E7A98: jal         0x80231A24
    // 0x802E7A9C: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7A9C: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E7AA0: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802E7AA4: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E7AA8: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E7AAC: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E7AB0:
    // 0x802E7AB0: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E7AB4: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802E7AB8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E7ABC: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802E7AC0: jalr        $t9
    // 0x802E7AC4: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E7AC4: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E7AC8: jal         0x803183D0
    // 0x802E7ACC: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    static_3_803183D0(rdram, ctx);
        goto after_2;
    // 0x802E7ACC: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_2:
    // 0x802E7AD0: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E7AD4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802E7AD8: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E7ADC: lh          $t8, 0x10($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X10);
    // 0x802E7AE0: jalr        $t9
    // 0x802E7AE4: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802E7AE4: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_3:
    // 0x802E7AE8: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802E7AEC: jal         0x802CF9B8
    // 0x802E7AF0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_802CF9B8(rdram, ctx);
        goto after_4;
    // 0x802E7AF0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x802E7AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7AF8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802E7AFC: jr          $ra
    // 0x802E7B00: nop

    return;
    // 0x802E7B00: nop

;}
RECOMP_FUNC void D_8023DB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DB10: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023DB14: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8023DB18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023DB1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DB20: bne         $t6, $zero, L_8023DC88
    if (ctx->r14 != 0) {
        // 0x8023DB24: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_8023DC88;
    }
    // 0x8023DB24: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023DB28: jal         0x80247090
    // 0x8023DB2C: nop

    static_3_80247090(rdram, ctx);
        goto after_0;
    // 0x8023DB2C: nop

    after_0:
    // 0x8023DB30: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023DB34: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023DB38: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023DB3C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8023DB40: jal         0x802371E0
    // 0x8023DB44: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    static_3_802371E0(rdram, ctx);
        goto after_1;
    // 0x8023DB44: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x8023DB48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DB4C: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x8023DB50: sh          $t7, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r15;
    // 0x8023DB54: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8023DB58: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023DB5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DB60: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x8023DB64: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023DB68: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023DB6C: sh          $t8, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r24;
    // 0x8023DB70: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8023DB74: sw          $zero, 0x4C6C($at)
    MEM_W(0X4C6C, ctx->r1) = 0;
    // 0x8023DB78: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8023DB7C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023DB80: jal         0x8023DF30
    // 0x8023DB84: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8023DF30(rdram, ctx);
        goto after_2;
    // 0x8023DB84: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x8023DB88: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023DB8C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023DB90: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8023DB94: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023DB98: jal         0x8023DF30
    // 0x8023DB9C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    static_3_8023DF30(rdram, ctx);
        goto after_3;
    // 0x8023DB9C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x8023DBA0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8023DBA4: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8023DBA8: jal         0x80247490
    // 0x8023DBAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80247490(rdram, ctx);
        goto after_4;
    // 0x8023DBAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8023DBB0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8023DBB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8023DBB8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8023DBBC: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8023DBC0: beq         $at, $zero, L_8023DBD8
    if (ctx->r1 == 0) {
        // 0x8023DBC4: nop
    
            goto L_8023DBD8;
    }
    // 0x8023DBC4: nop

    // 0x8023DBC8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8023DBCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8023DBD0: jal         0x8023E840
    // 0x8023DBD4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    static_3_8023E840(rdram, ctx);
        goto after_5;
    // 0x8023DBD4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_5:
L_8023DBD8:
    // 0x8023DBD8: jal         0x80241760
    // 0x8023DBDC: nop

    static_3_80241760(rdram, ctx);
        goto after_6;
    // 0x8023DBDC: nop

    after_6:
    // 0x8023DBE0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DBE4: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8023DBE8: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8023DBEC: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x8023DBF0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8023DBF4: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x8023DBF8: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x8023DBFC: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x8023DC00: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x8023DC04: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x8023DC08: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8023DC0C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8023DC10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DC14: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x8023DC18: addiu       $t6, $t5, 0x1000
    ctx->r14 = ADD32(ctx->r13, 0X1000);
    // 0x8023DC1C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023DC20: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8023DC24: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8023DC28: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023DC2C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023DC30: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023DC34: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8023DC38: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8023DC3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8023DC40: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8023DC44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023DC48: jal         0x80237210
    // 0x8023DC4C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    static_3_80237210(rdram, ctx);
        goto after_7;
    // 0x8023DC4C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_7:
    // 0x8023DC50: jal         0x802420E0
    // 0x8023DC54: nop

    static_3_802420E0(rdram, ctx);
        goto after_8;
    // 0x8023DC54: nop

    after_8:
    // 0x8023DC58: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023DC5C: jal         0x80237360
    // 0x8023DC60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80237360(rdram, ctx);
        goto after_9;
    // 0x8023DC60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_9:
    // 0x8023DC64: jal         0x80241780
    // 0x8023DC68: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_80241780(rdram, ctx);
        goto after_10;
    // 0x8023DC68: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_10:
    // 0x8023DC6C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8023DC70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023DC74: beq         $t8, $at, L_8023DC88
    if (ctx->r24 == ctx->r1) {
        // 0x8023DC78: nop
    
            goto L_8023DC88;
    }
    // 0x8023DC78: nop

    // 0x8023DC7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8023DC80: jal         0x8023E840
    // 0x8023DC84: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    static_3_8023E840(rdram, ctx);
        goto after_11;
    // 0x8023DC84: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_11:
L_8023DC88:
    // 0x8023DC88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DC8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023DC90: jr          $ra
    // 0x8023DC94: nop

    return;
    // 0x8023DC94: nop

;}
RECOMP_FUNC void D_80203F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203F74: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80203F78: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80203F7C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80203F80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80203F84: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80203F88: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80203F8C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80203F90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80203F94: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80203F98: beq         $a0, $zero, L_80203FB8
    if (ctx->r4 == 0) {
        // 0x80203F9C: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_80203FB8;
    }
    // 0x80203F9C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80203FA0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203FA4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80203FA8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80203FAC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203FB0: jal         0x80231C9C
    // 0x80203FB4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80203FB4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
L_80203FB8:
    // 0x80203FB8: beq         $s0, $zero, L_80203FD4
    if (ctx->r16 == 0) {
        // 0x80203FBC: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80203FD4;
    }
    // 0x80203FBC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203FC0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80203FC4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80203FC8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203FCC: jal         0x80231C9C
    // 0x80203FD0: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80203FD0: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    after_1:
L_80203FD4:
    // 0x80203FD4: beq         $s4, $zero, L_80203FF0
    if (ctx->r20 == 0) {
        // 0x80203FD8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80203FF0;
    }
    // 0x80203FD8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203FDC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80203FE0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80203FE4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203FE8: jal         0x80231C9C
    // 0x80203FEC: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80203FEC: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    after_2:
L_80203FF0:
    // 0x80203FF0: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x80203FF4: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x80203FF8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80203FFC: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x80204000: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80204004: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80204008: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8020400C: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x80204010: lw          $s2, 0x50($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X50);
    // 0x80204014: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80204018: blez        $s2, L_802040F8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8020401C: andi        $a0, $s2, 0x3
        ctx->r4 = ctx->r18 & 0X3;
            goto L_802040F8;
    }
    // 0x8020401C: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x80204020: beq         $a0, $zero, L_8020405C
    if (ctx->r4 == 0) {
        // 0x80204024: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8020405C;
    }
    // 0x80204024: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80204028: sll         $t2, $zero, 3
    ctx->r10 = S32(0 << 3);
    // 0x8020402C: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x80204030: addu        $s0, $t2, $t8
    ctx->r16 = ADD32(ctx->r10, ctx->r24);
    // 0x80204034: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
L_80204038:
    // 0x80204038: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x8020403C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80204040: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80204044: sw          $at, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r1;
    // 0x80204048: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x8020404C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80204050: bne         $v1, $s1, L_80204038
    if (ctx->r3 != ctx->r17) {
        // 0x80204054: sw          $t4, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r12;
            goto L_80204038;
    }
    // 0x80204054: sw          $t4, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r12;
    // 0x80204058: beq         $s1, $s2, L_802040F4
    if (ctx->r17 == ctx->r18) {
        // 0x8020405C: sll         $t2, $s1, 3
        ctx->r10 = S32(ctx->r17 << 3);
            goto L_802040F4;
    }
L_8020405C:
    // 0x8020405C: sll         $t2, $s1, 3
    ctx->r10 = S32(ctx->r17 << 3);
    // 0x80204060: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x80204064: addu        $s0, $t2, $t5
    ctx->r16 = ADD32(ctx->r10, ctx->r13);
    // 0x80204068: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
    // 0x8020406C: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x80204070: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x80204074: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80204078: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x8020407C: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x80204080: addiu       $t0, $v0, 0x18
    ctx->r8 = ADD32(ctx->r2, 0X18);
    // 0x80204084: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80204088: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x8020408C: addiu       $v1, $s0, 0x18
    ctx->r3 = ADD32(ctx->r16, 0X18);
L_80204090:
    // 0x80204090: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80204094: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x80204098: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x8020409C: sw          $at, -0x20($s0)
    MEM_W(-0X20, ctx->r16) = ctx->r1;
    // 0x802040A0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x802040A4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x802040A8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x802040AC: sw          $t9, -0x1C($s0)
    MEM_W(-0X1C, ctx->r16) = ctx->r25;
    // 0x802040B0: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x802040B4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x802040B8: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x802040BC: sw          $at, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = ctx->r1;
    // 0x802040C0: lw          $t5, -0x1C($a2)
    ctx->r13 = MEM_W(ctx->r6, -0X1C);
    // 0x802040C4: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x802040C8: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x802040CC: sw          $t5, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = ctx->r13;
    // 0x802040D0: lw          $at, -0x20($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X20);
    // 0x802040D4: sw          $at, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r1;
    // 0x802040D8: lw          $t7, -0x1C($a3)
    ctx->r15 = MEM_W(ctx->r7, -0X1C);
    // 0x802040DC: sw          $t7, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r15;
    // 0x802040E0: lw          $at, -0x20($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X20);
    // 0x802040E4: sw          $at, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r1;
    // 0x802040E8: lw          $t9, -0x1C($t0)
    ctx->r25 = MEM_W(ctx->r8, -0X1C);
    // 0x802040EC: bne         $v1, $t1, L_80204090
    if (ctx->r3 != ctx->r9) {
        // 0x802040F0: sw          $t9, -0x1C($v1)
        MEM_W(-0X1C, ctx->r3) = ctx->r25;
            goto L_80204090;
    }
    // 0x802040F0: sw          $t9, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r25;
L_802040F4:
    // 0x802040F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802040F8:
    // 0x802040F8: blez        $s2, L_80204120
    if (SIGNED(ctx->r18) <= 0) {
        // 0x802040FC: addiu       $s0, $sp, 0x64
        ctx->r16 = ADD32(ctx->r29, 0X64);
            goto L_80204120;
    }
    // 0x802040FC: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
L_80204100:
    // 0x80204100: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80204104: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80204108: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8020410C: jalr        $t9
    // 0x80204110: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80204110: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_3:
    // 0x80204114: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80204118: bne         $s1, $s2, L_80204100
    if (ctx->r17 != ctx->r18) {
        // 0x8020411C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80204100;
    }
    // 0x8020411C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80204120:
    // 0x80204120: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80204124: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80204128: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8020412C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80204130: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80204134: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80204138: jr          $ra
    // 0x8020413C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x8020413C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void D_802EA6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA768: jr          $ra
    // 0x802EA76C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EA76C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802D1FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D205C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D2068: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D206C: jal         0x80301EA0
    // 0x802D2070: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D2070: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x802D2074: beq         $v0, $zero, L_802D2094
    if (ctx->r2 == 0) {
        // 0x802D2078: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_802D2094;
    }
    // 0x802D2078: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x802D207C: lbu         $t9, 0x4($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X4);
    // 0x802D2080: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802D2084: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x802D2088: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x802D208C: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x802D2090: sb          $t6, 0x1F($t1)
    MEM_B(0X1F, ctx->r9) = ctx->r14;
L_802D2094:
    // 0x802D2094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D209C: jr          $ra
    // 0x802D20A0: nop

    return;
    // 0x802D20A0: nop

;}
RECOMP_FUNC void D_802A9570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A95F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A95F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A95F8: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802A95FC: jal         0x80300424
    // 0x802A9600: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80300424(rdram, ctx);
        goto after_0;
    // 0x802A9600: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A9604: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802A9608: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802A960C: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    // 0x802A9610: swc1        $f0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f0.u32l;
    // 0x802A9614: lw          $a0, 0x28($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X28);
    // 0x802A9618: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802A961C: jal         0x80200B20
    // 0x802A9620: nop

    static_3_80200B20(rdram, ctx);
        goto after_1;
    // 0x802A9620: nop

    after_1:
    // 0x802A9624: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802A9628: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A962C: lwc1        $f0, 0xC($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XC);
    // 0x802A9630: lwc1        $f6, 0x80($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X80);
    // 0x802A9634: lwc1        $f10, 0x84($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X84);
    // 0x802A9638: lwc1        $f2, 0x4($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X4);
    // 0x802A963C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A9640: nop

    // 0x802A9644: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A9648: swc1        $f8, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f8.u32l;
    // 0x802A964C: swc1        $f16, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f16.u32l;
    // 0x802A9650: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9654: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x802A9658: nop

    // 0x802A965C: bc1f        L_802A966C
    if (!c1cs) {
        // 0x802A9660: nop
    
            goto L_802A966C;
    }
    // 0x802A9660: nop

    // 0x802A9664: b           L_802A9674
    // 0x802A9668: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
        goto L_802A9674;
    // 0x802A9668: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
L_802A966C:
    // 0x802A966C: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x802A9670: add.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f4.fl;
L_802A9674:
    // 0x802A9674: swc1        $f0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f0.u32l;
    // 0x802A9678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A967C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A9680: jr          $ra
    // 0x802A9684: nop

    return;
    // 0x802A9684: nop

;}
RECOMP_FUNC void D_802EFAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFB60: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x802EFB64: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
    // 0x802EFB68: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802EFB6C: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x802EFB70: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x802EFB74: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802EFB78: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802EFB7C: mul.s       $f6, $f14, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x802EFB80: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x802EFB84: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802EFB88: swc1        $f10, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f10.u32l;
    // 0x802EFB8C: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x802EFB90: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802EFB94: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802EFB98: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x802EFB9C: nop

    // 0x802EFBA0: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x802EFBA4: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802EFBA8: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x802EFBAC: nop

    // 0x802EFBB0: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802EFBB4: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802EFBB8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802EFBBC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x802EFBC0: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    // 0x802EFBC4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802EFBC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802EFBCC: jr          $ra
    // 0x802EFBD0: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802EFBD0: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802D8868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D88E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D88EC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D88F0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802D88F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D88F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D88FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D8900: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D8904: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D8908: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802D890C: sw          $t6, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r14;
    // 0x802D8910: jal         0x8022970C
    // 0x802D8914: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802D8914: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D8918: jal         0x8021BA90
    // 0x802D891C: nop

    func_8021BA90(rdram, ctx);
        goto after_1;
    // 0x802D891C: nop

    after_1:
    // 0x802D8920: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802D8924: bne         $v0, $at, L_802D894C
    if (ctx->r2 != ctx->r1) {
        // 0x802D8928: sw          $v0, 0x64($s0)
        MEM_W(0X64, ctx->r16) = ctx->r2;
            goto L_802D894C;
    }
    // 0x802D8928: sw          $v0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r2;
    // 0x802D892C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D8930: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802D8934: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802D8938: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802D893C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802D8940: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D8944: jal         0x80231A24
    // 0x802D8948: addiu       $a3, $zero, 0x43
    ctx->r7 = ADD32(0, 0X43);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x802D8948: addiu       $a3, $zero, 0x43
    ctx->r7 = ADD32(0, 0X43);
    after_2:
L_802D894C:
    // 0x802D894C: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    // 0x802D8950: jal         0x8021ACB0
    // 0x802D8954: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    static_3_8021ACB0(rdram, ctx);
        goto after_3;
    // 0x802D8954: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_3:
    // 0x802D8958: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    // 0x802D895C: jal         0x8021B838
    // 0x802D8960: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B838(rdram, ctx);
        goto after_4;
    // 0x802D8960: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x802D8964: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802D8968: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D896C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8970: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802D8974: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802D8978: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D897C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802D8980: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
    // 0x802D8984: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8988: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802D898C: sb          $t7, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r15;
    // 0x802D8990: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D8994: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D8998: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802D899C: swc1        $f10, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f10.u32l;
    // 0x802D89A0: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
    // 0x802D89A4: jal         0x8022A210
    // 0x802D89A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_8022A210(rdram, ctx);
        goto after_5;
    // 0x802D89A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x802D89AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D89B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D89B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D89B8: jr          $ra
    // 0x802D89BC: nop

    return;
    // 0x802D89BC: nop

;}
RECOMP_FUNC void D_8029A544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029A5C4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8029A5C8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8029A5CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8029A5D0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029A5D4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8029A5D8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8029A5DC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8029A5E0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8029A5E4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8029A5E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8029A5EC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8029A5F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8029A5F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029A5F8: jal         0x802CB994
    // 0x8029A5FC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_802CB994(rdram, ctx);
        goto after_0;
    // 0x8029A5FC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x8029A600: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029A604: jal         0x802CB8E0
    // 0x8029A608: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    static_3_802CB8E0(rdram, ctx);
        goto after_1;
    // 0x8029A608: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    after_1:
    // 0x8029A60C: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8029A610: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x8029A614: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x8029A618: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x8029A61C: addiu       $s2, $zero, 0x9D
    ctx->r18 = ADD32(0, 0X9D);
    // 0x8029A620: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x8029A624: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x8029A628: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8029A62C: addiu       $fp, $zero, 0x6
    ctx->r30 = ADD32(0, 0X6);
    // 0x8029A630: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
    // 0x8029A634: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
L_8029A638:
    // 0x8029A638: lbu         $t6, 0x1B($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X1B);
    // 0x8029A63C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029A640: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8029A644: bne         $s0, $t6, L_8029A668
    if (ctx->r16 != ctx->r14) {
        // 0x8029A648: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029A668;
    }
    // 0x8029A648: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029A64C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029A650: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029A654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029A658: jal         0x8021E708
    // 0x8029A65C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_2;
    // 0x8029A65C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x8029A660: b           L_8029A670
    // 0x8029A664: nop

        goto L_8029A670;
    // 0x8029A664: nop

L_8029A668:
    // 0x8029A668: jal         0x8021E708
    // 0x8029A66C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_3;
    // 0x8029A66C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
L_8029A670:
    // 0x8029A670: bne         $s0, $s4, L_8029A6B0
    if (ctx->r16 != ctx->r20) {
        // 0x8029A674: nop
    
            goto L_8029A6B0;
    }
    // 0x8029A674: nop

    // 0x8029A678: lbu         $t7, 0x7C($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X7C);
    // 0x8029A67C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x8029A680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029A684: bne         $t7, $zero, L_8029A6B0
    if (ctx->r15 != 0) {
        // 0x8029A688: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029A6B0;
    }
    // 0x8029A688: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029A68C: jal         0x8021E708
    // 0x8029A690: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_4;
    // 0x8029A690: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
    // 0x8029A694: lbu         $t8, 0x1B($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X1B);
    // 0x8029A698: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8029A69C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029A6A0: bne         $s4, $t8, L_8029A6B0
    if (ctx->r20 != ctx->r24) {
        // 0x8029A6A4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029A6B0;
    }
    // 0x8029A6A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029A6A8: jal         0x8021E708
    // 0x8029A6AC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_5;
    // 0x8029A6AC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
L_8029A6B0:
    // 0x8029A6B0: bnel        $s0, $s5, L_8029A71C
    if (ctx->r16 != ctx->r21) {
        // 0x8029A6B4: addiu       $a0, $zero, 0x6E
        ctx->r4 = ADD32(0, 0X6E);
            goto L_8029A71C;
    }
    goto skip_0;
    // 0x8029A6B4: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    skip_0:
    // 0x8029A6B8: lhu         $v1, 0x52($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X52);
    // 0x8029A6BC: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x8029A6C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029A6C4: beq         $v1, $zero, L_8029A6F0
    if (ctx->r3 == 0) {
        // 0x8029A6C8: andi        $t9, $v1, 0x400
        ctx->r25 = ctx->r3 & 0X400;
            goto L_8029A6F0;
    }
    // 0x8029A6C8: andi        $t9, $v1, 0x400
    ctx->r25 = ctx->r3 & 0X400;
    // 0x8029A6CC: bnel        $t9, $zero, L_8029A6F4
    if (ctx->r25 != 0) {
        // 0x8029A6D0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029A6F4;
    }
    goto skip_1;
    // 0x8029A6D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    skip_1:
    // 0x8029A6D4: lbu         $t0, 0x0($s7)
    ctx->r8 = MEM_BU(ctx->r23, 0X0);
    // 0x8029A6D8: andi        $t1, $v1, 0x40
    ctx->r9 = ctx->r3 & 0X40;
    // 0x8029A6DC: bnel        $t0, $zero, L_8029A6F4
    if (ctx->r8 != 0) {
        // 0x8029A6E0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029A6F4;
    }
    goto skip_2;
    // 0x8029A6E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    skip_2:
    // 0x8029A6E4: beq         $t1, $zero, L_8029A718
    if (ctx->r9 == 0) {
        // 0x8029A6E8: andi        $t2, $v1, 0x200
        ctx->r10 = ctx->r3 & 0X200;
            goto L_8029A718;
    }
    // 0x8029A6E8: andi        $t2, $v1, 0x200
    ctx->r10 = ctx->r3 & 0X200;
    // 0x8029A6EC: bne         $t2, $zero, L_8029A718
    if (ctx->r10 != 0) {
        // 0x8029A6F0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029A718;
    }
L_8029A6F0:
    // 0x8029A6F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8029A6F4:
    // 0x8029A6F4: jal         0x8021E708
    // 0x8029A6F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_6;
    // 0x8029A6F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
    // 0x8029A6FC: lbu         $t3, 0x1B($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X1B);
    // 0x8029A700: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8029A704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029A708: bne         $s5, $t3, L_8029A718
    if (ctx->r21 != ctx->r11) {
        // 0x8029A70C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8029A718;
    }
    // 0x8029A70C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029A710: jal         0x8021E708
    // 0x8029A714: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_7;
    // 0x8029A714: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_7:
L_8029A718:
    // 0x8029A718: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
L_8029A71C:
    // 0x8029A71C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8029A720: jal         0x8021E87C
    // 0x8029A724: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    static_3_8021E87C(rdram, ctx);
        goto after_8;
    // 0x8029A724: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    after_8:
    // 0x8029A728: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8029A72C: addiu       $s2, $s2, -0x12
    ctx->r18 = ADD32(ctx->r18, -0X12);
    // 0x8029A730: bne         $s0, $fp, L_8029A638
    if (ctx->r16 != ctx->r30) {
        // 0x8029A734: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_8029A638;
    }
    // 0x8029A734: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8029A738: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8029A73C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029A740: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8029A744: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8029A748: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8029A74C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8029A750: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8029A754: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8029A758: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8029A75C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8029A760: jr          $ra
    // 0x8029A764: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8029A764: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802E544C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E54CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802E54D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E54D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802E54D8: lbu         $t7, 0xDD6($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XDD6);
    // 0x802E54DC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802E54E0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802E54E4: beq         $t7, $at, L_802E556C
    if (ctx->r15 == ctx->r1) {
        // 0x802E54E8: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_802E556C;
    }
    // 0x802E54E8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802E54EC: beq         $t6, $zero, L_802E555C
    if (ctx->r14 == 0) {
        // 0x802E54F0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E555C;
    }
    // 0x802E54F0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E54F4: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x802E54F8: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802E54FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802E5500: jal         0x80305E90
    // 0x802E5504: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    static_3_80305E90(rdram, ctx);
        goto after_0;
    // 0x802E5504: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x802E5508: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x802E550C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E5510: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E5514: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802E5518: addiu       $a1, $v1, 0xDE0
    ctx->r5 = ADD32(ctx->r3, 0XDE0);
    // 0x802E551C: lbu         $a2, 0xDD6($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0XDD6);
    // 0x802E5520: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x802E5524: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802E5528: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802E552C: jal         0x80302238
    // 0x802E5530: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x802E5530: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802E5534: beq         $v0, $zero, L_802E556C
    if (ctx->r2 == 0) {
        // 0x802E5538: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_802E556C;
    }
    // 0x802E5538: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802E553C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E5540: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E5544: lui         $a2, 0x3F63
    ctx->r6 = S32(0X3F63 << 16);
    // 0x802E5548: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x802E554C: jal         0x80302664
    // 0x802E5550: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_2;
    // 0x802E5550: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802E5554: b           L_802E5570
    // 0x802E5558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802E5570;
    // 0x802E5558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E555C:
    // 0x802E555C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E5560: addiu       $a1, $a3, 0xDE0
    ctx->r5 = ADD32(ctx->r7, 0XDE0);
    // 0x802E5564: jal         0x80302414
    // 0x802E5568: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_3;
    // 0x802E5568: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
L_802E556C:
    // 0x802E556C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E5570:
    // 0x802E5570: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802E5574: jr          $ra
    // 0x802E5578: nop

    return;
    // 0x802E5578: nop

;}
RECOMP_FUNC void D_802080D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802080D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802080DC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802080E0: lbu         $a2, 0x2A8($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X2A8);
    // 0x802080E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802080E8: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802080EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802080F0: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x802080F4: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x802080F8: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x802080FC: swc1        $f2, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f2.u32l;
    // 0x80208100: swc1        $f2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f2.u32l;
    // 0x80208104: blez        $a2, L_802081D0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80208108: swc1        $f2, 0xC($a1)
        MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
            goto L_802081D0;
    }
    // 0x80208108: swc1        $f2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
    // 0x8020810C: addiu       $v0, $a0, 0x260
    ctx->r2 = ADD32(ctx->r4, 0X260);
    // 0x80208110: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
L_80208114:
    // 0x80208114: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80208118: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8020811C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80208120: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80208124: slt         $at, $t7, $a2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80208128: mflo        $t6
    ctx->r14 = lo;
    // 0x8020812C: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x80208130: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80208134: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80208138: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8020813C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80208140: nop

    // 0x80208144: bc1fl       L_80208154
    if (!c1cs) {
        // 0x80208148: lwc1        $f6, 0xC($a1)
        ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
            goto L_80208154;
    }
    goto skip_0;
    // 0x80208148: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    skip_0:
    // 0x8020814C: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x80208150: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
L_80208154:
    // 0x80208154: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80208158: nop

    // 0x8020815C: bc1fl       L_8020816C
    if (!c1cs) {
        // 0x80208160: lwc1        $f8, 0x4($a1)
        ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
            goto L_8020816C;
    }
    goto skip_1;
    // 0x80208160: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    skip_1:
    // 0x80208164: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x80208168: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
L_8020816C:
    // 0x8020816C: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80208170: nop

    // 0x80208174: bc1fl       L_80208184
    if (!c1cs) {
        // 0x80208178: lwc1        $f10, 0x10($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
            goto L_80208184;
    }
    goto skip_2;
    // 0x80208178: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    skip_2:
    // 0x8020817C: swc1        $f2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f2.u32l;
    // 0x80208180: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
L_80208184:
    // 0x80208184: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x80208188: nop

    // 0x8020818C: bc1fl       L_8020819C
    if (!c1cs) {
        // 0x80208190: lwc1        $f16, 0x8($a1)
        ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
            goto L_8020819C;
    }
    goto skip_3;
    // 0x80208190: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    skip_3:
    // 0x80208194: swc1        $f2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f2.u32l;
    // 0x80208198: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
L_8020819C:
    // 0x8020819C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x802081A0: nop

    // 0x802081A4: bc1fl       L_802081B4
    if (!c1cs) {
        // 0x802081A8: lwc1        $f18, 0x14($a1)
        ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
            goto L_802081B4;
    }
    goto skip_4;
    // 0x802081A8: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    skip_4:
    // 0x802081AC: swc1        $f12, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f12.u32l;
    // 0x802081B0: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
L_802081B4:
    // 0x802081B4: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x802081B8: nop

    // 0x802081BC: bc1f        L_802081C8
    if (!c1cs) {
        // 0x802081C0: nop
    
            goto L_802081C8;
    }
    // 0x802081C0: nop

    // 0x802081C4: swc1        $f12, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f12.u32l;
L_802081C8:
    // 0x802081C8: bne         $at, $zero, L_80208114
    if (ctx->r1 != 0) {
        // 0x802081CC: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_80208114;
    }
    // 0x802081CC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_802081D0:
    // 0x802081D0: jr          $ra
    // 0x802081D4: nop

    return;
    // 0x802081D4: nop

;}
RECOMP_FUNC void D_802A1E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1EE4: jr          $ra
    // 0x802A1EE8: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    return;
    // 0x802A1EE8: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
;}
RECOMP_FUNC void D_802C5AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C5B20: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802C5B24: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802C5B28: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x802C5B2C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x802C5B30: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802C5B34: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802C5B38: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x802C5B3C: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x802C5B40: andi        $s3, $a1, 0xFF
    ctx->r19 = ctx->r5 & 0XFF;
    // 0x802C5B44: addiu       $s0, $sp, 0x5C
    ctx->r16 = ADD32(ctx->r29, 0X5C);
    // 0x802C5B48: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x802C5B4C: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x802C5B50: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802C5B54: addiu       $s2, $zero, 0xB7
    ctx->r18 = ADD32(0, 0XB7);
    // 0x802C5B58: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x802C5B5C: lw          $t9, 0x40($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X40);
    // 0x802C5B60: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x802C5B64: lw          $t0, 0x44($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X44);
    // 0x802C5B68: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x802C5B6C: lw          $t1, 0x48($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X48);
    // 0x802C5B70: blez        $s3, L_802C5BC4
    if (SIGNED(ctx->r19) <= 0) {
        // 0x802C5B74: sw          $t1, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r9;
            goto L_802C5BC4;
    }
    // 0x802C5B74: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
L_802C5B78:
    // 0x802C5B78: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802C5B7C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802C5B80: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802C5B84: addiu       $t4, $zero, 0x9C
    ctx->r12 = ADD32(0, 0X9C);
    // 0x802C5B88: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802C5B8C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802C5B90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802C5B94: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802C5B98: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802C5B9C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802C5BA0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x802C5BA4: jal         0x802344F4
    // 0x802C5BA8: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_0;
    // 0x802C5BA8: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_0:
    // 0x802C5BAC: jal         0x8023413C
    // 0x802C5BB0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_8023413C(rdram, ctx);
        goto after_1;
    // 0x802C5BB0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x802C5BB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802C5BB8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802C5BBC: bne         $s1, $s3, L_802C5B78
    if (ctx->r17 != ctx->r19) {
        // 0x802C5BC0: addiu       $s2, $s2, -0x18
        ctx->r18 = ADD32(ctx->r18, -0X18);
            goto L_802C5B78;
    }
    // 0x802C5BC0: addiu       $s2, $s2, -0x18
    ctx->r18 = ADD32(ctx->r18, -0X18);
L_802C5BC4:
    // 0x802C5BC4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802C5BC8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802C5BCC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802C5BD0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x802C5BD4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x802C5BD8: jr          $ra
    // 0x802C5BDC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x802C5BDC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_802F28A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2920: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802F2924: jr          $ra
    // 0x802F2928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802F2928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802941FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029427C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80294280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80294284: bne         $a0, $zero, L_8029429C
    if (ctx->r4 != 0) {
        // 0x80294288: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8029429C;
    }
    // 0x80294288: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8029428C: jal         0x802C67EC
    // 0x80294290: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80294290: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_0:
    // 0x80294294: beq         $v0, $zero, L_802942AC
    if (ctx->r2 == 0) {
        // 0x80294298: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802942AC;
    }
    // 0x80294298: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8029429C:
    // 0x8029429C: addiu       $a0, $a1, 0x10C
    ctx->r4 = ADD32(ctx->r5, 0X10C);
    // 0x802942A0: jal         0x80311700
    // 0x802942A4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_80311700(rdram, ctx);
        goto after_1;
    // 0x802942A4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802942A8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802942AC:
    // 0x802942AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802942B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802942B4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802942B8: jr          $ra
    // 0x802942BC: nop

    return;
    // 0x802942BC: nop

;}
RECOMP_FUNC void D_802CE428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CE4A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802CE4AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802CE4B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CE4B4: bne         $a0, $zero, L_802CE4CC
    if (ctx->r4 != 0) {
        // 0x802CE4B8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802CE4CC;
    }
    // 0x802CE4B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CE4BC: jal         0x802C67EC
    // 0x802CE4C0: ori         $a0, $zero, 0x9B34
    ctx->r4 = 0 | 0X9B34;
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802CE4C0: ori         $a0, $zero, 0x9B34
    ctx->r4 = 0 | 0X9B34;
    after_0:
    // 0x802CE4C4: beq         $v0, $zero, L_802CE530
    if (ctx->r2 == 0) {
        // 0x802CE4C8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802CE530;
    }
    // 0x802CE4C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802CE4CC:
    // 0x802CE4CC: jal         0x80308668
    // 0x802CE4D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x802CE4D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802CE4D4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CE4D8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802CE4DC: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x802CE4E0: jal         0x802FFD08
    // 0x802CE4E4: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    static_3_802FFD08(rdram, ctx);
        goto after_2;
    // 0x802CE4E4: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    after_2:
    // 0x802CE4E8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802CE4EC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802CE4F0: addiu       $a0, $s0, 0x414
    ctx->r4 = ADD32(ctx->r16, 0X414);
    // 0x802CE4F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CE4F8: jal         0x802C6930
    // 0x802CE4FC: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    static_3_802C6930(rdram, ctx);
        goto after_3;
    // 0x802CE4FC: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    after_3:
    // 0x802CE500: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802CE504: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802CE508: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802CE50C: addiu       $a0, $s0, 0x17F4
    ctx->r4 = ADD32(ctx->r16, 0X17F4);
    // 0x802CE510: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802CE514: jal         0x802C6930
    // 0x802CE518: addiu       $a2, $zero, 0x68C
    ctx->r6 = ADD32(0, 0X68C);
    static_3_802C6930(rdram, ctx);
        goto after_4;
    // 0x802CE518: addiu       $a2, $zero, 0x68C
    ctx->r6 = ADD32(0, 0X68C);
    after_4:
    // 0x802CE51C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802CE520: addiu       $a0, $s0, 0x5FF8
    ctx->r4 = ADD32(ctx->r16, 0X5FF8);
    // 0x802CE524: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CE528: jal         0x802C6930
    // 0x802CE52C: addiu       $a2, $zero, 0x68C
    ctx->r6 = ADD32(0, 0X68C);
    static_3_802C6930(rdram, ctx);
        goto after_5;
    // 0x802CE52C: addiu       $a2, $zero, 0x68C
    ctx->r6 = ADD32(0, 0X68C);
    after_5:
L_802CE530:
    // 0x802CE530: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802CE534: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802CE538: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802CE53C: jr          $ra
    // 0x802CE540: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802CE540: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
