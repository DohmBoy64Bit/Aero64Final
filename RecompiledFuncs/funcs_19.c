#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_8027A7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A858: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027A85C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A860: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A864: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027A868: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8027A86C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8027A870: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8027A874: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8027A878: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A87C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8027A880: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A884: addiu       $a3, $t6, 0x6DA9
    ctx->r7 = ADD32(ctx->r14, 0X6DA9);
    // 0x8027A888: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x8027A88C: addiu       $a1, $t6, 0x6DA8
    ctx->r5 = ADD32(ctx->r14, 0X6DA8);
    // 0x8027A890: jal         0x802A32E0
    // 0x8027A894: addiu       $a0, $a0, 0x6D48
    ctx->r4 = ADD32(ctx->r4, 0X6D48);
    static_3_802A32E0(rdram, ctx);
        goto after_0;
    // 0x8027A894: addiu       $a0, $a0, 0x6D48
    ctx->r4 = ADD32(ctx->r4, 0X6D48);
    after_0:
    // 0x8027A898: beq         $v0, $zero, L_8027A8EC
    if (ctx->r2 == 0) {
        // 0x8027A89C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8027A8EC;
    }
    // 0x8027A89C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027A8A0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8027A8A4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027A8A8: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8027A8AC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8027A8B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A8B4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8027A8B8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x8027A8BC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A8C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8027A8C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8027A8C8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8027A8CC: jal         0x802C137C
    // 0x8027A8D0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    static_3_802C137C(rdram, ctx);
        goto after_1;
    // 0x8027A8D0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_1:
    // 0x8027A8D4: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8027A8D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027A8DC: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x8027A8E0: lh          $t0, 0x28($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X28);
    // 0x8027A8E4: jalr        $t9
    // 0x8027A8E8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027A8E8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_2:
L_8027A8EC:
    // 0x8027A8EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A8F0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8027A8F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8027A8F8: jr          $ra
    // 0x8027A8FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027A8FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_8029CC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029CD0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029CD10: bne         $a0, $zero, L_8029CD24
    if (ctx->r4 != 0) {
        // 0x8029CD14: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8029CD24;
    }
    // 0x8029CD14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029CD18: jal         0x802C67EC
    // 0x8029CD1C: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x8029CD1C: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    after_0:
    // 0x8029CD20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8029CD24:
    // 0x8029CD24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029CD28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029CD2C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8029CD30: jr          $ra
    // 0x8029CD34: nop

    return;
    // 0x8029CD34: nop

;}
RECOMP_FUNC void D_8029994C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802999CC: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x802999D0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802999D4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802999D8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802999DC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802999E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802999E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802999E8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x802999EC: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802999F0: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802999F4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x802999F8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802999FC: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
    // 0x80299A00: sb          $zero, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = 0;
    // 0x80299A04: sb          $v0, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r2;
    // 0x80299A08: sb          $t9, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r25;
    // 0x80299A0C: sb          $t9, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r25;
    // 0x80299A10: sw          $a1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r5;
    // 0x80299A14: sw          $a1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r5;
    // 0x80299A18: sw          $t7, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r15;
    // 0x80299A1C: sw          $t8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r24;
    // 0x80299A20: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x80299A24: sb          $t0, 0x32($a0)
    MEM_B(0X32, ctx->r4) = ctx->r8;
    // 0x80299A28: sb          $v0, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r2;
    // 0x80299A2C: sb          $t1, 0x33($a0)
    MEM_B(0X33, ctx->r4) = ctx->r9;
    // 0x80299A30: sb          $a2, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r6;
    // 0x80299A34: jr          $ra
    // 0x80299A38: sb          $a2, 0x35($a0)
    MEM_B(0X35, ctx->r4) = ctx->r6;
    return;
    // 0x80299A38: sb          $a2, 0x35($a0)
    MEM_B(0X35, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void D_802412D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802412D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802412D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802412D8: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x802412DC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x802412E0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802412E4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802412E8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802412EC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802412F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802412F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802412F8: lw          $s0, 0x50($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X50);
    // 0x802412FC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80241300: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80241304: beq         $s0, $zero, L_802413A8
    if (ctx->r16 == 0) {
        // 0x80241308: addiu       $s7, $zero, 0x17
        ctx->r23 = ADD32(0, 0X17);
            goto L_802413A8;
    }
    // 0x80241308: addiu       $s7, $zero, 0x17
    ctx->r23 = ADD32(0, 0X17);
    // 0x8024130C: addiu       $s6, $zero, 0x16
    ctx->r22 = ADD32(0, 0X16);
L_80241310:
    // 0x80241310: lh          $s3, 0xC($s0)
    ctx->r19 = MEM_H(ctx->r16, 0XC);
    // 0x80241314: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80241318: beql        $s3, $s6, L_8024132C
    if (ctx->r19 == ctx->r22) {
        // 0x8024131C: lw          $t6, 0x10($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X10);
            goto L_8024132C;
    }
    goto skip_0;
    // 0x8024131C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x80241320: bne         $s3, $s7, L_802413A0
    if (ctx->r19 != ctx->r23) {
        // 0x80241324: nop
    
            goto L_802413A0;
    }
    // 0x80241324: nop

    // 0x80241328: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
L_8024132C:
    // 0x8024132C: bne         $s2, $t6, L_802413A0
    if (ctx->r18 != ctx->r14) {
        // 0x80241330: nop
    
            goto L_802413A0;
    }
    // 0x80241330: nop

    // 0x80241334: lw          $t9, 0x78($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X78);
    // 0x80241338: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8024133C: addiu       $s4, $s5, 0x48
    ctx->r20 = ADD32(ctx->r21, 0X48);
    // 0x80241340: jalr        $t9
    // 0x80241344: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80241344: nop

    after_0:
    // 0x80241348: jal         0x80237120
    // 0x8024134C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237120(rdram, ctx);
        goto after_1;
    // 0x8024134C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80241350: beq         $s1, $zero, L_80241368
    if (ctx->r17 == 0) {
        // 0x80241354: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80241368;
    }
    // 0x80241354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80241358: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x8024135C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x80241360: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x80241364: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
L_80241368:
    // 0x80241368: jal         0x80237150
    // 0x8024136C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    static_3_80237150(rdram, ctx);
        goto after_2;
    // 0x8024136C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x80241370: bnel        $s3, $s6, L_8024138C
    if (ctx->r19 != ctx->r22) {
        // 0x80241374: lbu         $t3, 0x37($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X37);
            goto L_8024138C;
    }
    goto skip_1;
    // 0x80241374: lbu         $t3, 0x37($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X37);
    skip_1:
    // 0x80241378: lbu         $t1, 0x37($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X37);
    // 0x8024137C: andi        $t2, $t1, 0xFE
    ctx->r10 = ctx->r9 & 0XFE;
    // 0x80241380: b           L_80241394
    // 0x80241384: sb          $t2, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r10;
        goto L_80241394;
    // 0x80241384: sb          $t2, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r10;
    // 0x80241388: lbu         $t3, 0x37($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X37);
L_8024138C:
    // 0x8024138C: andi        $t4, $t3, 0xFD
    ctx->r12 = ctx->r11 & 0XFD;
    // 0x80241390: sb          $t4, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r12;
L_80241394:
    // 0x80241394: lbu         $t5, 0x37($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X37);
    // 0x80241398: beql        $t5, $zero, L_802413AC
    if (ctx->r13 == 0) {
        // 0x8024139C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802413AC;
    }
    goto skip_2;
    // 0x8024139C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
L_802413A0:
    // 0x802413A0: bne         $s1, $zero, L_80241310
    if (ctx->r17 != 0) {
        // 0x802413A4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80241310;
    }
    // 0x802413A4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_802413A8:
    // 0x802413A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802413AC:
    // 0x802413AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802413B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802413B4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802413B8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802413BC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802413C0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802413C4: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x802413C8: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x802413CC: jr          $ra
    // 0x802413D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802413D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_80244720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244720: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80244724: bne         $a1, $at, L_80244748
    if (ctx->r5 != ctx->r1) {
        // 0x80244728: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_80244748;
    }
    // 0x80244728: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x8024472C: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80244730: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80244734: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80244738: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x8024473C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80244740: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80244744: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_80244748:
    // 0x80244748: jr          $ra
    // 0x8024474C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024474C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_80297228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802972A8: addiu       $sp, $sp, -0x1A8
    ctx->r29 = ADD32(ctx->r29, -0X1A8);
    // 0x802972AC: sw          $a2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r6;
    // 0x802972B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802972B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802972B8: sw          $a1, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r5;
    // 0x802972BC: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802972C0: lwc1        $f6, 0x1B0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x802972C4: lbu         $t6, 0xF8C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XF8C);
    // 0x802972C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802972CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802972D0: bne         $t6, $zero, L_802976C4
    if (ctx->r14 != 0) {
        // 0x802972D4: swc1        $f8, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = ctx->f8.u32l;
            goto L_802976C4;
    }
    // 0x802972D4: swc1        $f8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f8.u32l;
    // 0x802972D8: lw          $t7, 0x1120($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1120);
    // 0x802972DC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802972E0: beq         $t7, $at, L_80297438
    if (ctx->r15 == ctx->r1) {
        // 0x802972E4: nop
    
            goto L_80297438;
    }
    // 0x802972E4: nop

    // 0x802972E8: jal         0x8022970C
    // 0x802972EC: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802972EC: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    after_0:
    // 0x802972F0: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x802972F4: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x802972F8: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    // 0x802972FC: jal         0x802D01D4
    // 0x80297300: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_1;
    // 0x80297300: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_1:
    // 0x80297304: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297308: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029730C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297310: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297314: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297318: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029731C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80297320: addiu       $a0, $s0, 0x1128
    ctx->r4 = ADD32(ctx->r16, 0X1128);
    // 0x80297324: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80297328: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    // 0x8029732C: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    // 0x80297330: addiu       $a3, $sp, 0x120
    ctx->r7 = ADD32(ctx->r29, 0X120);
    // 0x80297334: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    // 0x80297338: swc1        $f16, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f16.u32l;
    // 0x8029733C: swc1        $f18, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f18.u32l;
    // 0x80297340: jal         0x802C53E4
    // 0x80297344: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_2;
    // 0x80297344: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80297348: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029734C: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    // 0x80297350: jal         0x802C5468
    // 0x80297354: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    static_3_802C5468(rdram, ctx);
        goto after_3;
    // 0x80297354: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    after_3:
    // 0x80297358: jal         0x8022970C
    // 0x8029735C: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x8029735C: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    after_4:
    // 0x80297360: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x80297364: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x80297368: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    // 0x8029736C: jal         0x802D01D4
    // 0x80297370: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x80297370: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_5:
    // 0x80297374: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297378: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029737C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297380: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297384: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297388: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029738C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80297390: addiu       $a0, $s0, 0x12BC
    ctx->r4 = ADD32(ctx->r16, 0X12BC);
    // 0x80297394: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80297398: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    // 0x8029739C: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    // 0x802973A0: addiu       $a3, $sp, 0x120
    ctx->r7 = ADD32(ctx->r29, 0X120);
    // 0x802973A4: swc1        $f6, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f6.u32l;
    // 0x802973A8: swc1        $f8, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f8.u32l;
    // 0x802973AC: swc1        $f10, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f10.u32l;
    // 0x802973B0: jal         0x802C53E4
    // 0x802973B4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_6;
    // 0x802973B4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x802973B8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802973BC: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    // 0x802973C0: jal         0x802C5468
    // 0x802973C4: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    static_3_802C5468(rdram, ctx);
        goto after_7;
    // 0x802973C4: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    after_7:
    // 0x802973C8: jal         0x8022970C
    // 0x802973CC: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    func_8022970C(rdram, ctx);
        goto after_8;
    // 0x802973CC: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    after_8:
    // 0x802973D0: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x802973D4: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    // 0x802973D8: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    // 0x802973DC: jal         0x802D01D4
    // 0x802973E0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_9;
    // 0x802973E0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_9:
    // 0x802973E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802973E8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802973EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802973F0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802973F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802973F8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802973FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80297400: addiu       $a0, $s0, 0x1450
    ctx->r4 = ADD32(ctx->r16, 0X1450);
    // 0x80297404: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80297408: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    // 0x8029740C: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    // 0x80297410: addiu       $a3, $sp, 0x120
    ctx->r7 = ADD32(ctx->r29, 0X120);
    // 0x80297414: swc1        $f18, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f18.u32l;
    // 0x80297418: swc1        $f4, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f4.u32l;
    // 0x8029741C: swc1        $f6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f6.u32l;
    // 0x80297420: jal         0x802C53E4
    // 0x80297424: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_10;
    // 0x80297424: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x80297428: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8029742C: lw          $a1, 0x1AC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1AC);
    // 0x80297430: jal         0x802C5468
    // 0x80297434: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    static_3_802C5468(rdram, ctx);
        goto after_11;
    // 0x80297434: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    after_11:
L_80297438:
    // 0x80297438: jal         0x8022970C
    // 0x8029743C: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    func_8022970C(rdram, ctx);
        goto after_12;
    // 0x8029743C: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    after_12:
    // 0x80297440: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80297444: jal         0x802AEE54
    // 0x80297448: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_13;
    // 0x80297448: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x8029744C: jal         0x803183D0
    // 0x80297450: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_14;
    // 0x80297450: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_14:
    // 0x80297454: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x80297458: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    // 0x8029745C: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x80297460: lh          $t8, 0x10($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X10);
    // 0x80297464: jalr        $t9
    // 0x80297468: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x80297468: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_15:
    // 0x8029746C: lw          $v0, 0x1124($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1124);
    // 0x80297470: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80297474: lwc1        $f10, 0x194($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X194);
    // 0x80297478: bne         $v0, $at, L_80297510
    if (ctx->r2 != ctx->r1) {
        // 0x8029747C: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_80297510;
    }
    // 0x8029747C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297480: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297484: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80297488: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8029748C: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80297490: nop

    // 0x80297494: bc1fl       L_80297650
    if (!c1cs) {
        // 0x80297498: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_80297650;
    }
    goto skip_0;
    // 0x80297498: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    skip_0:
    // 0x8029749C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x802974A0: addiu       $v0, $sp, 0xFC
    ctx->r2 = ADD32(ctx->r29, 0XFC);
    // 0x802974A4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802974A8: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802974AC: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x802974B0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802974B4: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x802974B8: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x802974BC: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802974C0: lw          $t2, 0xC($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XC);
    // 0x802974C4: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x802974C8: lw          $at, 0x10($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X10);
    // 0x802974CC: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802974D0: lw          $t2, 0x14($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X14);
    // 0x802974D4: sw          $t2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r10;
    // 0x802974D8: lw          $at, 0x18($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X18);
    // 0x802974DC: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802974E0: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802974E4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802974E8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802974EC: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x802974F0: lwc1        $f0, 0x0($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0X0);
    // 0x802974F4: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802974F8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802974FC: jal         0x80303778
    // 0x80297500: nop

    static_3_80303778(rdram, ctx);
        goto after_16;
    // 0x80297500: nop

    after_16:
    // 0x80297504: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80297508: b           L_8029764C
    // 0x8029750C: sw          $t6, 0x1124($s0)
    MEM_W(0X1124, ctx->r16) = ctx->r14;
        goto L_8029764C;
    // 0x8029750C: sw          $t6, 0x1124($s0)
    MEM_W(0X1124, ctx->r16) = ctx->r14;
L_80297510:
    // 0x80297510: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80297514: bne         $v0, $at, L_802975CC
    if (ctx->r2 != ctx->r1) {
        // 0x80297518: lwc1        $f18, 0x190($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X190);
            goto L_802975CC;
    }
    // 0x80297518: lwc1        $f18, 0x190($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X190);
    // 0x8029751C: lui         $at, 0xC19C
    ctx->r1 = S32(0XC19C << 16);
    // 0x80297520: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80297524: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297528: lwc1        $f6, 0x194($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8029752C: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80297530: nop

    // 0x80297534: bc1fl       L_80297650
    if (!c1cs) {
        // 0x80297538: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_80297650;
    }
    goto skip_1;
    // 0x80297538: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    skip_1:
    // 0x8029753C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297540: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80297544: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80297548: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8029754C: nop

    // 0x80297550: bc1fl       L_80297650
    if (!c1cs) {
        // 0x80297554: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_80297650;
    }
    goto skip_2;
    // 0x80297554: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    skip_2:
    // 0x80297558: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8029755C: addiu       $v0, $sp, 0xE0
    ctx->r2 = ADD32(ctx->r29, 0XE0);
    // 0x80297560: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80297564: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x80297568: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8029756C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80297570: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80297574: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80297578: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x8029757C: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x80297580: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x80297584: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x80297588: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x8029758C: lw          $t9, 0x14($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X14);
    // 0x80297590: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x80297594: lw          $at, 0x18($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X18);
    // 0x80297598: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x8029759C: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802975A0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802975A4: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x802975A8: addu        $t2, $v0, $t0
    ctx->r10 = ADD32(ctx->r2, ctx->r8);
    // 0x802975AC: lwc1        $f0, 0x0($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X0);
    // 0x802975B0: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802975B4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802975B8: jal         0x80303778
    // 0x802975BC: nop

    static_3_80303778(rdram, ctx);
        goto after_17;
    // 0x802975BC: nop

    after_17:
    // 0x802975C0: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x802975C4: b           L_8029764C
    // 0x802975C8: sw          $t3, 0x1124($s0)
    MEM_W(0X1124, ctx->r16) = ctx->r11;
        goto L_8029764C;
    // 0x802975C8: sw          $t3, 0x1124($s0)
    MEM_W(0X1124, ctx->r16) = ctx->r11;
L_802975CC:
    // 0x802975CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802975D0: beq         $v0, $at, L_8029764C
    if (ctx->r2 == ctx->r1) {
        // 0x802975D4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8029764C;
    }
    // 0x802975D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802975D8: beq         $v0, $at, L_8029764C
    if (ctx->r2 == ctx->r1) {
        // 0x802975DC: lui         $t4, 0x0
        ctx->r12 = S32(0X0 << 16);
            goto L_8029764C;
    }
    // 0x802975DC: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802975E0: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x802975E4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x802975E8: addiu       $v0, $sp, 0xC4
    ctx->r2 = ADD32(ctx->r29, 0XC4);
    // 0x802975EC: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802975F0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802975F4: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x802975F8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802975FC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80297600: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x80297604: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x80297608: lw          $t6, 0xC($t4)
    ctx->r14 = MEM_W(ctx->r12, 0XC);
    // 0x8029760C: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x80297610: lw          $at, 0x10($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X10);
    // 0x80297614: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x80297618: lw          $t6, 0x14($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X14);
    // 0x8029761C: sw          $t6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r14;
    // 0x80297620: lw          $at, 0x18($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X18);
    // 0x80297624: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x80297628: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8029762C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80297630: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80297634: addu        $t9, $v0, $t7
    ctx->r25 = ADD32(ctx->r2, ctx->r15);
    // 0x80297638: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8029763C: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x80297640: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80297644: jal         0x80303778
    // 0x80297648: nop

    static_3_80303778(rdram, ctx);
        goto after_18;
    // 0x80297648: nop

    after_18:
L_8029764C:
    // 0x8029764C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
L_80297650:
    // 0x80297650: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80297654: sh          $t1, 0x15B7($at)
    MEM_H(0X15B7, ctx->r1) = ctx->r9;
    // 0x80297658: addiu       $t0, $s0, 0x7FFF
    ctx->r8 = ADD32(ctx->r16, 0X7FFF);
    // 0x8029765C: lbu         $t0, 0x15B6($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X15B6);
    // 0x80297660: bnel        $t0, $zero, L_802979D4
    if (ctx->r8 != 0) {
        // 0x80297664: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802979D4;
    }
    goto skip_3;
    // 0x80297664: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x80297668: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8029766C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297670: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297674: lwc1        $f10, 0x32A8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X32A8);
    // 0x80297678: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x8029767C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80297680: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80297684: lui         $a1, 0x4561
    ctx->r5 = S32(0X4561 << 16);
    // 0x80297688: bc1fl       L_802979D4
    if (!c1cs) {
        // 0x8029768C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802979D4;
    }
    goto skip_4;
    // 0x8029768C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x80297690: jal         0x802B0078
    // 0x80297694: sb          $t2, 0x15B6($at)
    MEM_B(0X15B6, ctx->r1) = ctx->r10;
    static_3_802B0078(rdram, ctx);
        goto after_19;
    // 0x80297694: sb          $t2, 0x15B6($at)
    MEM_B(0X15B6, ctx->r1) = ctx->r10;
    after_19:
    // 0x80297698: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8029769C: jal         0x802AEDEC
    // 0x802976A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_20;
    // 0x802976A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x802976A4: lw          $t3, 0x78($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X78);
    // 0x802976A8: lw          $t4, 0x248($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X248);
    // 0x802976AC: addiu       $v1, $zero, -0x5
    ctx->r3 = ADD32(0, -0X5);
    // 0x802976B0: and         $t5, $t3, $v1
    ctx->r13 = ctx->r11 & ctx->r3;
    // 0x802976B4: and         $t6, $t4, $v1
    ctx->r14 = ctx->r12 & ctx->r3;
    // 0x802976B8: sw          $t5, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r13;
    // 0x802976BC: b           L_802979D0
    // 0x802976C0: sw          $t6, 0x248($v0)
    MEM_W(0X248, ctx->r2) = ctx->r14;
        goto L_802979D0;
    // 0x802976C0: sw          $t6, 0x248($v0)
    MEM_W(0X248, ctx->r2) = ctx->r14;
L_802976C4:
    // 0x802976C4: jal         0x802C84C4
    // 0x802976C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C84C4(rdram, ctx);
        goto after_21;
    // 0x802976C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x802976CC: addiu       $t8, $s0, 0x7FFF
    ctx->r24 = ADD32(ctx->r16, 0X7FFF);
    // 0x802976D0: lh          $t8, 0x15B7($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X15B7);
    // 0x802976D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802976D8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802976DC: bne         $t8, $at, L_802977DC
    if (ctx->r24 != ctx->r1) {
        // 0x802976E0: addiu       $a0, $sp, 0x80
        ctx->r4 = ADD32(ctx->r29, 0X80);
            goto L_802977DC;
    }
    // 0x802976E0: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x802976E4: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802976E8: ori         $at, $zero, 0x94D4
    ctx->r1 = 0 | 0X94D4;
    // 0x802976EC: addu        $a1, $s0, $at
    ctx->r5 = ADD32(ctx->r16, ctx->r1);
    // 0x802976F0: jal         0x80228DE0
    // 0x802976F4: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    func_80228DE0(rdram, ctx);
        goto after_22;
    // 0x802976F4: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    after_22:
    // 0x802976F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802976FC: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x80297700: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    // 0x80297704: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80297708: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8029770C: jal         0x8022A0D0
    // 0x80297710: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_23;
    // 0x80297710: nop

    after_23:
    // 0x80297714: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80297718: ori         $at, $zero, 0x952C
    ctx->r1 = 0 | 0X952C;
    // 0x8029771C: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x80297720: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80297724: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80297728: jal         0x8022A0D0
    // 0x8029772C: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_24;
    // 0x8029772C: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    after_24:
    // 0x80297730: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80297734: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80297738: lw          $v0, 0x71C4($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X71C4);
    // 0x8029773C: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x80297740: jal         0x80228DE0
    // 0x80297744: sw          $v0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r2;
    func_80228DE0(rdram, ctx);
        goto after_25;
    // 0x80297744: sw          $v0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r2;
    after_25:
    // 0x80297748: lw          $v0, 0x1A4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A4);
    // 0x8029774C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80297750: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80297754: sb          $t1, 0xAC($v0)
    MEM_B(0XAC, ctx->r2) = ctx->r9;
    // 0x80297758: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8029775C: lw          $v0, 0x71C8($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X71C8);
    // 0x80297760: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x80297764: jal         0x80228DE0
    // 0x80297768: sw          $v0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r2;
    func_80228DE0(rdram, ctx);
        goto after_26;
    // 0x80297768: sw          $v0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r2;
    after_26:
    // 0x8029776C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80297770: lw          $v0, 0x1A4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A4);
    // 0x80297774: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80297778: ori         $at, $zero, 0x956C
    ctx->r1 = 0 | 0X956C;
    // 0x8029777C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80297780: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80297784: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x80297788: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    // 0x8029778C: jal         0x8022A0D0
    // 0x80297790: sb          $t2, 0xAC($v0)
    MEM_B(0XAC, ctx->r2) = ctx->r10;
    static_3_8022A0D0(rdram, ctx);
        goto after_27;
    // 0x80297790: sb          $t2, 0xAC($v0)
    MEM_B(0XAC, ctx->r2) = ctx->r10;
    after_27:
    // 0x80297794: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80297798: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x8029779C: lw          $v0, 0x71CC($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X71CC);
    // 0x802977A0: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x802977A4: jal         0x80228DE0
    // 0x802977A8: sw          $v0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r2;
    func_80228DE0(rdram, ctx);
        goto after_28;
    // 0x802977A8: sw          $v0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r2;
    after_28:
    // 0x802977AC: lw          $v0, 0x1A4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A4);
    // 0x802977B0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802977B4: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x802977B8: sb          $t5, 0xAC($v0)
    MEM_B(0XAC, ctx->r2) = ctx->r13;
    // 0x802977BC: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x802977C0: lw          $v0, 0x71D0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X71D0);
    // 0x802977C4: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x802977C8: jal         0x80228DE0
    // 0x802977CC: sw          $v0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r2;
    func_80228DE0(rdram, ctx);
        goto after_29;
    // 0x802977CC: sw          $v0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r2;
    after_29:
    // 0x802977D0: lw          $v0, 0x1A4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A4);
    // 0x802977D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802977D8: sb          $t6, 0xAC($v0)
    MEM_B(0XAC, ctx->r2) = ctx->r14;
L_802977DC:
    // 0x802977DC: addiu       $t8, $s0, 0x7FFF
    ctx->r24 = ADD32(ctx->r16, 0X7FFF);
    // 0x802977E0: lbu         $t8, 0x1519($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1519);
    // 0x802977E4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x802977E8: ori         $at, $zero, 0x94D4
    ctx->r1 = 0 | 0X94D4;
    // 0x802977EC: beql        $t8, $zero, L_80297838
    if (ctx->r24 == 0) {
        // 0x802977F0: addiu       $t7, $s0, 0x7FFF
        ctx->r15 = ADD32(ctx->r16, 0X7FFF);
            goto L_80297838;
    }
    goto skip_5;
    // 0x802977F0: addiu       $t7, $s0, 0x7FFF
    ctx->r15 = ADD32(ctx->r16, 0X7FFF);
    skip_5:
    // 0x802977F4: jal         0x80228DE0
    // 0x802977F8: addu        $a1, $s0, $at
    ctx->r5 = ADD32(ctx->r16, ctx->r1);
    func_80228DE0(rdram, ctx);
        goto after_30;
    // 0x802977F8: addu        $a1, $s0, $at
    ctx->r5 = ADD32(ctx->r16, ctx->r1);
    after_30:
    // 0x802977FC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80297800: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80297804: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80297808: jal         0x8022A0D0
    // 0x8029780C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_31;
    // 0x8029780C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_31:
    // 0x80297810: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x80297814: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x80297818: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8029781C: jal         0x802D01D4
    // 0x80297820: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_32;
    // 0x80297820: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_32:
    // 0x80297824: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80297828: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8029782C: jal         0x802FA318
    // 0x80297830: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA318(rdram, ctx);
        goto after_33;
    // 0x80297830: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_33:
    // 0x80297834: addiu       $t7, $s0, 0x7FFF
    ctx->r15 = ADD32(ctx->r16, 0X7FFF);
L_80297838:
    // 0x80297838: lbu         $t7, 0x151A($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X151A);
    // 0x8029783C: ori         $at, $zero, 0x94D4
    ctx->r1 = 0 | 0X94D4;
    // 0x80297840: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x80297844: beq         $t7, $zero, L_802979D0
    if (ctx->r15 == 0) {
        // 0x80297848: ori         $at, $zero, 0x952C
        ctx->r1 = 0 | 0X952C;
            goto L_802979D0;
    }
    // 0x80297848: ori         $at, $zero, 0x952C
    ctx->r1 = 0 | 0X952C;
    // 0x8029784C: addu        $a3, $s0, $at
    ctx->r7 = ADD32(ctx->r16, ctx->r1);
    // 0x80297850: ori         $at, $zero, 0x956C
    ctx->r1 = 0 | 0X956C;
    // 0x80297854: addu        $t9, $s0, $at
    ctx->r25 = ADD32(ctx->r16, ctx->r1);
    // 0x80297858: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8029785C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80297860: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80297864: lwc1        $f18, -0x6AE4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6AE4);
    // 0x80297868: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8029786C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80297870: nop

    // 0x80297874: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80297878: nop

    // 0x8029787C: bc1fl       L_80297898
    if (!c1cs) {
        // 0x80297880: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_80297898;
    }
    goto skip_6;
    // 0x80297880: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    skip_6:
    // 0x80297884: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80297888: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8029788C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80297890: swc1        $f6, -0x6AE4($at)
    MEM_W(-0X6AE4, ctx->r1) = ctx->f6.u32l;
    // 0x80297894: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
L_80297898:
    // 0x80297898: addu        $v0, $s0, $at
    ctx->r2 = ADD32(ctx->r16, ctx->r1);
    // 0x8029789C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802978A0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x802978A4: lwc1        $f10, -0x6AE0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6AE0);
    // 0x802978A8: lwc1        $f8, 0x151C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X151C);
    // 0x802978AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802978B0: lwc1        $f18, 0x1520($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1520);
    // 0x802978B4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802978B8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802978BC: swc1        $f16, 0x151C($v0)
    MEM_W(0X151C, ctx->r2) = ctx->f16.u32l;
    // 0x802978C0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802978C4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802978C8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x802978CC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802978D0: swc1        $f6, 0x1520($v0)
    MEM_W(0X1520, ctx->r2) = ctx->f6.u32l;
    // 0x802978D4: lwc1        $f0, -0x6AE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6AE0);
    // 0x802978D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802978DC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802978E0: nop

    // 0x802978E4: bc1f        L_80297900
    if (!c1cs) {
        // 0x802978E8: nop
    
            goto L_80297900;
    }
    // 0x802978E8: nop

    // 0x802978EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802978F0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802978F4: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x802978F8: b           L_80297920
    // 0x802978FC: swc1        $f10, -0x6AE0($at)
    MEM_W(-0X6AE0, ctx->r1) = ctx->f10.u32l;
        goto L_80297920;
    // 0x802978FC: swc1        $f10, -0x6AE0($at)
    MEM_W(-0X6AE0, ctx->r1) = ctx->f10.u32l;
L_80297900:
    // 0x80297900: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297904: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80297908: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8029790C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80297910: nop

    // 0x80297914: bc1fl       L_80297924
    if (!c1cs) {
        // 0x80297918: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_80297924;
    }
    goto skip_7;
    // 0x80297918: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    skip_7:
    // 0x8029791C: swc1        $f2, -0x6AE0($at)
    MEM_W(-0X6AE0, ctx->r1) = ctx->f2.u32l;
L_80297920:
    // 0x80297920: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
L_80297924:
    // 0x80297924: jal         0x8022970C
    // 0x80297928: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_8022970C(rdram, ctx);
        goto after_34;
    // 0x80297928: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_34:
    // 0x8029792C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80297930: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80297934: lwc1        $f16, -0x6AE4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6AE4);
    // 0x80297938: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x8029793C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80297940: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80297944: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80297948: addiu       $a1, $s0, 0x7FFF
    ctx->r5 = ADD32(ctx->r16, 0X7FFF);
    // 0x8029794C: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x80297950: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80297954: lw          $a1, 0x1525($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1525);
    // 0x80297958: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8029795C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80297960: jal         0x80304B84
    // 0x80297964: nop

    static_3_80304B84(rdram, ctx);
        goto after_35;
    // 0x80297964: nop

    after_35:
    // 0x80297968: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8029796C: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80297970: lwc1        $f10, -0x6AE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6AE4);
    // 0x80297974: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x80297978: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8029797C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80297980: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80297984: addiu       $a1, $s0, 0x7FFF
    ctx->r5 = ADD32(ctx->r16, 0X7FFF);
    // 0x80297988: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x8029798C: lw          $a1, 0x1525($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1525);
    // 0x80297990: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80297994: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80297998: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8029799C: jal         0x80304B84
    // 0x802979A0: nop

    static_3_80304B84(rdram, ctx);
        goto after_36;
    // 0x802979A0: nop

    after_36:
    // 0x802979A4: addiu       $a1, $s0, 0x7FFF
    ctx->r5 = ADD32(ctx->r16, 0X7FFF);
    // 0x802979A8: addiu       $a2, $s0, 0x7FFF
    ctx->r6 = ADD32(ctx->r16, 0X7FFF);
    // 0x802979AC: lw          $a2, 0x151D($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X151D);
    // 0x802979B0: lw          $a1, 0x1525($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1525);
    // 0x802979B4: jal         0x80304B84
    // 0x802979B8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    static_3_80304B84(rdram, ctx);
        goto after_37;
    // 0x802979B8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_37:
    // 0x802979BC: addiu       $a0, $s0, 0x7FFF
    ctx->r4 = ADD32(ctx->r16, 0X7FFF);
    // 0x802979C0: lw          $a0, 0x14CD($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14CD);
    // 0x802979C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802979C8: jal         0x8021B4B0
    // 0x802979CC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    static_3_8021B4B0(rdram, ctx);
        goto after_38;
    // 0x802979CC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_38:
L_802979D0:
    // 0x802979D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802979D4:
    // 0x802979D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802979D8: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
    // 0x802979DC: jr          $ra
    // 0x802979E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802979E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802A3834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A38B4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802A38B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A38BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A38C0: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x802A38C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A38C8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x802A38CC: beq         $t6, $zero, L_802A38EC
    if (ctx->r14 == 0) {
        // 0x802A38D0: sw          $t6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r14;
            goto L_802A38EC;
    }
    // 0x802A38D0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x802A38D4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x802A38D8: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x802A38DC: jal         0x8028C2C0
    // 0x802A38E0: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    static_3_8028C2C0(rdram, ctx);
        goto after_0;
    // 0x802A38E0: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x802A38E4: b           L_802A3914
    // 0x802A38E8: lwc1        $f0, 0x5C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5C);
        goto L_802A3914;
    // 0x802A38E8: lwc1        $f0, 0x5C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5C);
L_802A38EC:
    // 0x802A38EC: lw          $v1, 0xDC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XDC);
    // 0x802A38F0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x802A38F4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x802A38F8: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802A38FC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x802A3900: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802A3904: lh          $t8, 0x50($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X50);
    // 0x802A3908: jalr        $t9
    // 0x802A390C: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802A390C: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    after_1:
    // 0x802A3910: lwc1        $f0, 0x5C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5C);
L_802A3914:
    // 0x802A3914: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802A3918: lwc1        $f2, 0x60($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X60);
    // 0x802A391C: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A3920: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802A3924: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802A3928: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802A392C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x802A3930: lbu         $t0, 0x1C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1C);
    // 0x802A3934: sub.s       $f14, $f2, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x802A3938: beq         $t0, $zero, L_802A3950
    if (ctx->r8 == 0) {
        // 0x802A393C: sub.s       $f16, $f12, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f10.fl;
            goto L_802A3950;
    }
    // 0x802A393C: sub.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x802A3940: jal         0x8022ADA8
    // 0x802A3944: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    static_3_8022ADA8(rdram, ctx);
        goto after_2;
    // 0x802A3944: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x802A3948: b           L_802A3974
    // 0x802A394C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802A3974;
    // 0x802A394C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_802A3950:
    // 0x802A3950: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802A3954: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x802A3958: nop

    // 0x802A395C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802A3960: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A3964: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x802A3968: jal         0x8022AA40
    // 0x802A396C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_3;
    // 0x802A396C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_3:
    // 0x802A3970: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_802A3974:
    // 0x802A3974: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A3978: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A397C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802A3980: jr          $ra
    // 0x802A3984: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x802A3984: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void D_802EC3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC42C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802EC430: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC434: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802EC438: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802EC43C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802EC440: addiu       $t7, $zero, 0x1E9
    ctx->r15 = ADD32(0, 0X1E9);
    // 0x802EC444: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802EC448: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EC44C: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EC450: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EC454: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EC458: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EC45C: sh          $zero, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = 0;
    // 0x802EC460: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EC464: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EC468: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EC46C: jr          $ra
    // 0x802EC470: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802EC470: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802175A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802175A4: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x802175A8: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x802175AC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802175B0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802175B4: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x802175B8: sw          $fp, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r30;
    // 0x802175BC: sw          $s7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r23;
    // 0x802175C0: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x802175C4: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x802175C8: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x802175CC: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x802175D0: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x802175D4: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x802175D8: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x802175DC: sdc1        $f30, 0x78($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X78, ctx->r29);
    // 0x802175E0: sdc1        $f28, 0x70($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X70, ctx->r29);
    // 0x802175E4: sdc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X68, ctx->r29);
    // 0x802175E8: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x802175EC: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x802175F0: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x802175F4: swc1        $f12, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f12.u32l;
    // 0x802175F8: swc1        $f14, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f14.u32l;
    // 0x802175FC: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80217600: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80217604: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80217608: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8021760C: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80217610: lw          $s7, 0x0($t1)
    ctx->r23 = MEM_W(ctx->r9, 0X0);
    // 0x80217614: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80217618: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x8021761C: lw          $v0, 0x8($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X8);
    // 0x80217620: mtc1        $a3, $f30
    ctx->f30.u32l = ctx->r7;
    // 0x80217624: lbu         $t2, 0x4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4);
    // 0x80217628: sh          $t2, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r10;
    // 0x8021762C: lwc1        $f6, 0x20($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X20);
    // 0x80217630: sw          $v0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r2;
    // 0x80217634: jal         0x80228CE0
    // 0x80217638: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    static_3_80228CE0(rdram, ctx);
        goto after_0;
    // 0x80217638: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    after_0:
    // 0x8021763C: lh          $v1, 0x116($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X116);
    // 0x80217640: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80217644: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80217648: blez        $v1, L_8021787C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8021764C: lwc1        $f26, 0x12C($sp)
        ctx->f26.u32l = MEM_W(ctx->r29, 0X12C);
            goto L_8021787C;
    }
    // 0x8021764C: lwc1        $f26, 0x12C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80217650: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x80217654: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x80217658: lwc1        $f24, 0x128($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X128);
    // 0x8021765C: lwc1        $f20, 0x134($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80217660: addiu       $s6, $sp, 0xC0
    ctx->r22 = ADD32(ctx->r29, 0XC0);
    // 0x80217664: lw          $v0, 0x130($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X130);
    // 0x80217668: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
L_8021766C:
    // 0x8021766C: lw          $t5, 0x1C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X1C);
    // 0x80217670: sll         $s5, $s3, 3
    ctx->r21 = S32(ctx->r19 << 3);
    // 0x80217674: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80217678: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8021767C: addu        $s5, $s5, $s3
    ctx->r21 = ADD32(ctx->r21, ctx->r19);
    // 0x80217680: sllv        $t8, $t6, $s3
    ctx->r24 = S32(ctx->r14 << (ctx->r19 & 31));
    // 0x80217684: sll         $s5, $s5, 2
    ctx->r21 = S32(ctx->r21 << 2);
    // 0x80217688: and         $t9, $t5, $t8
    ctx->r25 = ctx->r13 & ctx->r24;
    // 0x8021768C: beq         $t9, $zero, L_802176A0
    if (ctx->r25 == 0) {
        // 0x80217690: addu        $s4, $t4, $s5
        ctx->r20 = ADD32(ctx->r12, ctx->r21);
            goto L_802176A0;
    }
    // 0x80217690: addu        $s4, $t4, $s5
    ctx->r20 = ADD32(ctx->r12, ctx->r21);
    // 0x80217694: slti        $at, $s3, 0x20
    ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x80217698: bne         $at, $zero, L_802176B4
    if (ctx->r1 != 0) {
        // 0x8021769C: nop
    
            goto L_802176B4;
    }
    // 0x8021769C: nop

L_802176A0:
    // 0x802176A0: lbu         $t7, 0x7($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X7);
    // 0x802176A4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802176A8: andi        $t0, $t7, 0x1
    ctx->r8 = ctx->r15 & 0X1;
    // 0x802176AC: beq         $t0, $zero, L_802176BC
    if (ctx->r8 == 0) {
        // 0x802176B0: nop
    
            goto L_802176BC;
    }
    // 0x802176B0: nop

L_802176B4:
    // 0x802176B4: b           L_802176BC
    // 0x802176B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_802176BC;
    // 0x802176B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802176BC:
    // 0x802176BC: bne         $s0, $zero, L_802176D4
    if (ctx->r16 != 0) {
        // 0x802176C0: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_802176D4;
    }
    // 0x802176C0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802176C4: lbu         $t1, 0x7($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X7);
    // 0x802176C8: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x802176CC: bnel        $t2, $zero, L_80217864
    if (ctx->r10 != 0) {
        // 0x802176D0: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80217864;
    }
    goto skip_0;
    // 0x802176D0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
L_802176D4:
    // 0x802176D4: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x802176D8: sll         $t4, $s3, 6
    ctx->r12 = S32(ctx->r19 << 6);
    // 0x802176DC: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
    // 0x802176E0: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x802176E4: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
L_802176E8:
    // 0x802176E8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802176EC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802176F0: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x802176F4: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x802176F8: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x802176FC: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80217700: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80217704: bne         $t6, $t8, L_802176E8
    if (ctx->r14 != ctx->r24) {
        // 0x80217708: sw          $at, 0x4($t9)
        MEM_W(0X4, ctx->r25) = ctx->r1;
            goto L_802176E8;
    }
    // 0x80217708: sw          $at, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r1;
    // 0x8021770C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80217710: addiu       $s1, $v1, -0x1
    ctx->r17 = ADD32(ctx->r3, -0X1);
    // 0x80217714: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x80217718: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8021771C: jal         0x80228F38
    // 0x80217720: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    static_3_80228F38(rdram, ctx);
        goto after_1;
    // 0x80217720: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_1:
    // 0x80217724: bne         $s3, $zero, L_80217774
    if (ctx->r19 != 0) {
        // 0x80217728: lwc1        $f10, 0xF0($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
            goto L_80217774;
    }
    // 0x80217728: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x8021772C: lwc1        $f8, 0x20($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X20);
    // 0x80217730: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80217734: div.s       $f0, $f8, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80217738: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021773C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80217740: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80217744: jal         0x8022A210
    // 0x80217748: nop

    static_3_8022A210(rdram, ctx);
        goto after_2;
    // 0x80217748: nop

    after_2:
    // 0x8021774C: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80217750: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80217754: lwc1        $f6, 0xF8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80217758: div.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8021775C: div.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80217760: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x80217764: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80217768: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x8021776C: b           L_80217798
    // 0x80217770: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
        goto L_80217798;
    // 0x80217770: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
L_80217774:
    // 0x80217774: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80217778: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x8021777C: lwc1        $f6, 0xF8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80217780: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x80217784: nop

    // 0x80217788: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8021778C: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x80217790: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x80217794: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
L_80217798:
    // 0x80217798: jal         0x80228D0C
    // 0x8021779C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    static_3_80228D0C(rdram, ctx);
        goto after_3;
    // 0x8021779C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x802177A0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802177A4: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x802177A8: beq         $s0, $zero, L_802177F8
    if (ctx->r16 == 0) {
        // 0x802177AC: sra         $s2, $t7, 16
        ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
            goto L_802177F8;
    }
    // 0x802177AC: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802177B0: lw          $t1, 0x0($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X0);
    // 0x802177B4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802177B8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802177BC: sll         $t3, $s3, 24
    ctx->r11 = S32(ctx->r19 << 24);
    // 0x802177C0: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x802177C4: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x802177C8: jal         0x80228CF0
    // 0x802177CC: sw          $t4, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r12;
    static_3_80228CF0(rdram, ctx);
        goto after_4;
    // 0x802177CC: sw          $t4, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r12;
    after_4:
    // 0x802177D0: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x802177D4: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x802177D8: lwc1        $f12, 0x118($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X118);
    // 0x802177DC: lwc1        $f14, 0x11C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x802177E0: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x802177E4: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x802177E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802177EC: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x802177F0: jal         0x80219500
    // 0x802177F4: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    static_3_80219500(rdram, ctx);
        goto after_5;
    // 0x802177F4: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    after_5:
L_802177F8:
    // 0x802177F8: bne         $s3, $s1, L_80217808
    if (ctx->r19 != ctx->r17) {
        // 0x802177FC: lw          $t8, 0x108($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X108);
            goto L_80217808;
    }
    // 0x802177FC: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x80217800: b           L_8021787C
    // 0x80217804: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_8021787C;
    // 0x80217804: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80217808:
    // 0x80217808: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x8021780C: lbu         $t5, 0x6($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X6);
    // 0x80217810: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217814: addu        $t9, $t6, $s5
    ctx->r25 = ADD32(ctx->r14, ctx->r21);
    // 0x80217818: lbu         $t7, 0x2A($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X2A);
    // 0x8021781C: subu        $s1, $t5, $t7
    ctx->r17 = SUB32(ctx->r13, ctx->r15);
    // 0x80217820: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x80217824: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80217828: bltzl       $s1, L_8021785C
    if (SIGNED(ctx->r17) < 0) {
        // 0x8021782C: lh          $v1, 0x116($sp)
        ctx->r3 = MEM_H(ctx->r29, 0X116);
            goto L_8021785C;
    }
    goto skip_1;
    // 0x8021782C: lh          $v1, 0x116($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X116);
    skip_1:
L_80217830:
    // 0x80217830: jal         0x80228D9C
    // 0x80217834: nop

    static_3_80228D9C(rdram, ctx);
        goto after_6;
    // 0x80217834: nop

    after_6:
    // 0x80217838: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021783C: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x80217840: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80217844: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80217848: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x8021784C: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80217850: beq         $at, $zero, L_80217830
    if (ctx->r1 == 0) {
        // 0x80217854: sra         $s2, $t2, 16
        ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
            goto L_80217830;
    }
    // 0x80217854: sra         $s2, $t2, 16
    ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80217858: lh          $v1, 0x116($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X116);
L_8021785C:
    // 0x8021785C: lw          $v0, 0x130($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X130);
    // 0x80217860: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80217864:
    // 0x80217864: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80217868: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021786C: slt         $at, $s3, $v1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80217870: bnel        $at, $zero, L_8021766C
    if (ctx->r1 != 0) {
        // 0x80217874: lw          $t3, 0x108($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X108);
            goto L_8021766C;
    }
    goto skip_2;
    // 0x80217874: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    skip_2:
    // 0x80217878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8021787C:
    // 0x8021787C: blezl       $s2, L_802178A8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80217880: lw          $ra, 0xA4($sp)
        ctx->r31 = MEM_W(ctx->r29, 0XA4);
            goto L_802178A8;
    }
    goto skip_3;
    // 0x80217880: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    skip_3:
L_80217884:
    // 0x80217884: jal         0x80228D9C
    // 0x80217888: nop

    static_3_80228D9C(rdram, ctx);
        goto after_7;
    // 0x80217888: nop

    after_7:
    // 0x8021788C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80217890: sll         $t5, $s3, 16
    ctx->r13 = S32(ctx->r19 << 16);
    // 0x80217894: sra         $s3, $t5, 16
    ctx->r19 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80217898: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8021789C: bne         $at, $zero, L_80217884
    if (ctx->r1 != 0) {
        // 0x802178A0: nop
    
            goto L_80217884;
    }
    // 0x802178A0: nop

    // 0x802178A4: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
L_802178A8:
    // 0x802178A8: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x802178AC: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x802178B0: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x802178B4: ldc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X68);
    // 0x802178B8: ldc1        $f28, 0x70($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X70);
    // 0x802178BC: ldc1        $f30, 0x78($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X78);
    // 0x802178C0: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x802178C4: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x802178C8: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x802178CC: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x802178D0: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x802178D4: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x802178D8: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x802178DC: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x802178E0: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x802178E4: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    // 0x802178E8: jr          $ra
    // 0x802178EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802178EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void D_80248210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248210: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80248214: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80248218: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8024821C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80248220: jal         0x80241760
    // 0x80248224: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x80248224: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80248228: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8024822C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80248230: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80248234: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80248238: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024823C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80248240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80248244: jal         0x80241780
    // 0x80248248: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x80248248: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    after_1:
    // 0x8024824C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80248250: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80248254: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80248258: jr          $ra
    // 0x8024825C: nop

    return;
    // 0x8024825C: nop

;}
RECOMP_FUNC void D_802D26A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D272C: bne         $a0, $zero, L_802D2744
    if (ctx->r4 != 0) {
        // 0x802D2730: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802D2744;
    }
    // 0x802D2730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2734: jal         0x802C67EC
    // 0x802D2738: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D2738: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x802D273C: beq         $v0, $zero, L_802D2750
    if (ctx->r2 == 0) {
        // 0x802D2740: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D2750;
    }
    // 0x802D2740: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802D2744:
    // 0x802D2744: jal         0x80302EB8
    // 0x802D2748: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80302EB8(rdram, ctx);
        goto after_1;
    // 0x802D2748: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802D274C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802D2750:
    // 0x802D2750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2758: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802D275C: jr          $ra
    // 0x802D2760: nop

    return;
    // 0x802D2760: nop

;}
RECOMP_FUNC void D_802D6C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D6CD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D6CDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D6CE0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D6CE4: lbu         $t7, 0x381($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X381);
    // 0x802D6CE8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802D6CEC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802D6CF0: beq         $t7, $at, L_802D6D78
    if (ctx->r15 == ctx->r1) {
        // 0x802D6CF4: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_802D6D78;
    }
    // 0x802D6CF4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802D6CF8: beq         $t6, $zero, L_802D6D68
    if (ctx->r14 == 0) {
        // 0x802D6CFC: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802D6D68;
    }
    // 0x802D6CFC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6D00: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x802D6D04: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802D6D08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D6D0C: jal         0x80305E90
    // 0x802D6D10: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    static_3_80305E90(rdram, ctx);
        goto after_0;
    // 0x802D6D10: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x802D6D14: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x802D6D18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6D1C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6D20: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802D6D24: addiu       $a1, $v1, 0x38C
    ctx->r5 = ADD32(ctx->r3, 0X38C);
    // 0x802D6D28: lbu         $a2, 0x381($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X381);
    // 0x802D6D2C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x802D6D30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802D6D34: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802D6D38: jal         0x80302238
    // 0x802D6D3C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x802D6D3C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802D6D40: beq         $v0, $zero, L_802D6D78
    if (ctx->r2 == 0) {
        // 0x802D6D44: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_802D6D78;
    }
    // 0x802D6D44: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802D6D48: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D6D4C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6D50: lui         $a2, 0x3F4B
    ctx->r6 = S32(0X3F4B << 16);
    // 0x802D6D54: ori         $a2, $a2, 0x20C
    ctx->r6 = ctx->r6 | 0X20C;
    // 0x802D6D58: jal         0x80302664
    // 0x802D6D5C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_2;
    // 0x802D6D5C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802D6D60: b           L_802D6D7C
    // 0x802D6D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802D6D7C;
    // 0x802D6D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D6D68:
    // 0x802D6D68: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D6D6C: addiu       $a1, $a3, 0x38C
    ctx->r5 = ADD32(ctx->r7, 0X38C);
    // 0x802D6D70: jal         0x80302414
    // 0x802D6D74: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_3;
    // 0x802D6D74: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
L_802D6D78:
    // 0x802D6D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D6D7C:
    // 0x802D6D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D6D80: jr          $ra
    // 0x802D6D84: nop

    return;
    // 0x802D6D84: nop

;}
RECOMP_FUNC void D_802D4DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D4E68: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x802D4E6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802D4E70: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802D4E74: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x802D4E78: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802D4E7C: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802D4E80: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x802D4E84: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x802D4E88: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D4E8C: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x802D4E90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D4E94: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x802D4E98: jalr        $t9
    // 0x802D4E9C: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D4E9C: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x802D4EA0: lbu         $t7, 0xC55($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC55);
    // 0x802D4EA4: beq         $t7, $zero, L_802D4FDC
    if (ctx->r15 == 0) {
        // 0x802D4EA8: nop
    
            goto L_802D4FDC;
    }
    // 0x802D4EA8: nop

    // 0x802D4EAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D4EB0: lwc1        $f6, 0xC2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC2C);
    // 0x802D4EB4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802D4EB8: nop

    // 0x802D4EBC: bc1fl       L_802D4EFC
    if (!c1cs) {
        // 0x802D4EC0: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_802D4EFC;
    }
    goto skip_0;
    // 0x802D4EC0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_0:
    // 0x802D4EC4: jal         0x80318214
    // 0x802D4EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318214(rdram, ctx);
        goto after_1;
    // 0x802D4EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802D4ECC: addiu       $a0, $s0, 0x448
    ctx->r4 = ADD32(ctx->r16, 0X448);
    // 0x802D4ED0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D4ED4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D4ED8: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x802D4EDC: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x802D4EE0: jal         0x802C53E4
    // 0x802D4EE4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_2;
    // 0x802D4EE4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x802D4EE8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D4EEC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D4EF0: jal         0x802C5468
    // 0x802D4EF4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    static_3_802C5468(rdram, ctx);
        goto after_3;
    // 0x802D4EF4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_3:
    // 0x802D4EF8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_802D4EFC:
    // 0x802D4EFC: lwc1        $f10, 0xC30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC30);
    // 0x802D4F00: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802D4F04: nop

    // 0x802D4F08: bc1fl       L_802D4F48
    if (!c1cs) {
        // 0x802D4F0C: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_802D4F48;
    }
    goto skip_1;
    // 0x802D4F0C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_1:
    // 0x802D4F10: jal         0x80318214
    // 0x802D4F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318214(rdram, ctx);
        goto after_4;
    // 0x802D4F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802D4F18: addiu       $a0, $s0, 0x5DC
    ctx->r4 = ADD32(ctx->r16, 0X5DC);
    // 0x802D4F1C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D4F20: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D4F24: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x802D4F28: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x802D4F2C: jal         0x802C53E4
    // 0x802D4F30: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_5;
    // 0x802D4F30: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x802D4F34: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D4F38: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D4F3C: jal         0x802C5468
    // 0x802D4F40: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    static_3_802C5468(rdram, ctx);
        goto after_6;
    // 0x802D4F40: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_6:
    // 0x802D4F44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_802D4F48:
    // 0x802D4F48: lwc1        $f18, 0xC34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC34);
    // 0x802D4F4C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802D4F50: nop

    // 0x802D4F54: bc1fl       L_802D4F94
    if (!c1cs) {
        // 0x802D4F58: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_802D4F94;
    }
    goto skip_2;
    // 0x802D4F58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_2:
    // 0x802D4F5C: jal         0x80318214
    // 0x802D4F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318214(rdram, ctx);
        goto after_7;
    // 0x802D4F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x802D4F64: addiu       $a0, $s0, 0x770
    ctx->r4 = ADD32(ctx->r16, 0X770);
    // 0x802D4F68: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D4F6C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D4F70: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x802D4F74: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x802D4F78: jal         0x802C53E4
    // 0x802D4F7C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_8;
    // 0x802D4F7C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x802D4F80: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D4F84: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D4F88: jal         0x802C5468
    // 0x802D4F8C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    static_3_802C5468(rdram, ctx);
        goto after_9;
    // 0x802D4F8C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_9:
    // 0x802D4F90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_802D4F94:
    // 0x802D4F94: lwc1        $f6, 0xC38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC38);
    // 0x802D4F98: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802D4F9C: nop

    // 0x802D4FA0: bc1f        L_802D4FDC
    if (!c1cs) {
        // 0x802D4FA4: nop
    
            goto L_802D4FDC;
    }
    // 0x802D4FA4: nop

    // 0x802D4FA8: jal         0x80318214
    // 0x802D4FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318214(rdram, ctx);
        goto after_10;
    // 0x802D4FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x802D4FB0: addiu       $a0, $s0, 0x904
    ctx->r4 = ADD32(ctx->r16, 0X904);
    // 0x802D4FB4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D4FB8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D4FBC: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x802D4FC0: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x802D4FC4: jal         0x802C53E4
    // 0x802D4FC8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_11;
    // 0x802D4FC8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x802D4FCC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D4FD0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D4FD4: jal         0x802C5468
    // 0x802D4FD8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    static_3_802C5468(rdram, ctx);
        goto after_12;
    // 0x802D4FD8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_12:
L_802D4FDC:
    // 0x802D4FDC: jal         0x80318214
    // 0x802D4FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318214(rdram, ctx);
        goto after_13;
    // 0x802D4FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x802D4FE4: addiu       $a0, $s0, 0xA98
    ctx->r4 = ADD32(ctx->r16, 0XA98);
    // 0x802D4FE8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D4FEC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D4FF0: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x802D4FF4: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x802D4FF8: jal         0x802C53E4
    // 0x802D4FFC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_14;
    // 0x802D4FFC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_14:
    // 0x802D5000: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D5004: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D5008: jal         0x802C5468
    // 0x802D500C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    static_3_802C5468(rdram, ctx);
        goto after_15;
    // 0x802D500C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_15:
    // 0x802D5010: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802D5014: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802D5018: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x802D501C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802D5020: jr          $ra
    // 0x802D5024: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x802D5024: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void D_802E0FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1060: lw          $v1, 0x300($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X300);
    // 0x802E1064: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802E1068: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802E106C: blez        $v1, L_802E108C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802E1070: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_802E108C;
    }
    // 0x802E1070: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x802E1074: addu        $a1, $t6, $a0
    ctx->r5 = ADD32(ctx->r14, ctx->r4);
L_802E1078:
    // 0x802E1078: lwc1        $f4, 0x2AC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2AC);
    // 0x802E107C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802E1080: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x802E1084: bne         $at, $zero, L_802E1078
    if (ctx->r1 != 0) {
        // 0x802E1088: add.s       $f2, $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
            goto L_802E1078;
    }
    // 0x802E1088: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
L_802E108C:
    // 0x802E108C: lwc1        $f6, 0x284($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X284);
    // 0x802E1090: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x802E1094: jr          $ra
    // 0x802E1098: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x802E1098: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void D_802B8024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B80A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B80A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B80AC: beq         $a0, $zero, L_802B80E4
    if (ctx->r4 == 0) {
        // 0x802B80B0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802B80E4;
    }
    // 0x802B80B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B80B4: jal         0x802E88F8
    // 0x802B80B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802E8878(rdram, ctx);
        goto after_0;
    // 0x802B80B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802B80BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802B80C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802B80C4: jal         0x8031E3B8
    // 0x802B80C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    static_3_8031E3B8(rdram, ctx);
        goto after_1;
    // 0x802B80C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x802B80CC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802B80D0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802B80D4: beql        $t7, $zero, L_802B80E8
    if (ctx->r15 == 0) {
        // 0x802B80D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B80E8;
    }
    goto skip_0;
    // 0x802B80D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802B80DC: jal         0x802C681C
    // 0x802B80E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x802B80E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_802B80E4:
    // 0x802B80E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B80E8:
    // 0x802B80E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B80EC: jr          $ra
    // 0x802B80F0: nop

    return;
    // 0x802B80F0: nop

;}
RECOMP_FUNC void D_802A6790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6810: jr          $ra
    // 0x802A6814: sb          $zero, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = 0;
    return;
    // 0x802A6814: sb          $zero, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = 0;
;}
RECOMP_FUNC void D_802B9154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B91D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B91D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802B91DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B91E0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802B91E4: jal         0x80228DE0
    // 0x802B91E8: addiu       $a1, $a2, 0x8
    ctx->r5 = ADD32(ctx->r6, 0X8);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802B91E8: addiu       $a1, $a2, 0x8
    ctx->r5 = ADD32(ctx->r6, 0X8);
    after_0:
    // 0x802B91EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B91F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B91F4: jr          $ra
    // 0x802B91F8: nop

    return;
    // 0x802B91F8: nop

;}
RECOMP_FUNC void D_8024DAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024DB6C: sll         $at, $t9, 8
    ctx->r1 = S32(ctx->r25 << 8);
    // 0x8024DB70: srl         $at, $at, 8
    ctx->r1 = S32(U32(ctx->r1) >> 8);
    // 0x8024DB74: srl         $v1, $t9, 24
    ctx->r3 = S32(U32(ctx->r25) >> 24);
    // 0x8024DB78: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024DB7C: lw          $v0, 0x320($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X320);
    // 0x8024DB80: add         $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024DB84: sw          $at, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r1;
    // 0x8024DB88: lui         $t9, 0x8400
    ctx->r25 = S32(0X8400 << 16);
    // 0x8024DB8C: ori         $t9, $t9, 0x1118
    ctx->r25 = ctx->r25 | 0X1118;
    // 0x8024DB90: jr          $t9
    // 0x8024DB94: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
    return;
    // 0x8024DB94: nop

;}
RECOMP_FUNC void D_802D1C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1D04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1D0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D1D10: jal         0x80301EA0
    // 0x802D1D14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D1D14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802D1D18: beq         $v0, $zero, L_802D1D2C
    if (ctx->r2 == 0) {
        // 0x802D1D1C: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_802D1D2C;
    }
    // 0x802D1D1C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1D20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D1D24: jal         0x80301DE0
    // 0x802D1D28: lbu         $a1, 0x4($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X4);
    static_3_80301DE0(rdram, ctx);
        goto after_1;
    // 0x802D1D28: lbu         $a1, 0x4($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X4);
    after_1:
L_802D1D2C:
    // 0x802D1D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1D34: jr          $ra
    // 0x802D1D38: nop

    return;
    // 0x802D1D38: nop

;}
RECOMP_FUNC void D_8027C9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CA30: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8027CA34: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8027CA38: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8027CA3C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8027CA40: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8027CA44: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8027CA48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027CA4C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8027CA50: bne         $t6, $at, L_8027CA60
    if (ctx->r14 != ctx->r1) {
        // 0x8027CA54: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_8027CA60;
    }
    // 0x8027CA54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8027CA58: b           L_8027CA64
    // 0x8027CA5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027CA64;
    // 0x8027CA5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8027CA60:
    // 0x8027CA60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027CA64:
    // 0x8027CA64: beql        $v0, $zero, L_8027CCF0
    if (ctx->r2 == 0) {
        // 0x8027CA68: lw          $t3, 0x32A4($s2)
        ctx->r11 = MEM_W(ctx->r18, 0X32A4);
            goto L_8027CCF0;
    }
    goto skip_0;
    // 0x8027CA68: lw          $t3, 0x32A4($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X32A4);
    skip_0:
    // 0x8027CA6C: lw          $v0, 0x32A4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X32A4);
    // 0x8027CA70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027CA74: beq         $v0, $at, L_8027CCEC
    if (ctx->r2 == ctx->r1) {
        // 0x8027CA78: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8027CCEC;
    }
    // 0x8027CA78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027CA7C: beq         $v0, $at, L_8027CCEC
    if (ctx->r2 == ctx->r1) {
        // 0x8027CA80: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8027CCEC;
    }
    // 0x8027CA80: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027CA84: beq         $v0, $at, L_8027CCEC
    if (ctx->r2 == ctx->r1) {
        // 0x8027CA88: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8027CCEC;
    }
    // 0x8027CA88: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8027CA8C: beq         $v0, $at, L_8027CCEC
    if (ctx->r2 == ctx->r1) {
        // 0x8027CA90: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8027CCEC;
    }
    // 0x8027CA90: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027CA94: beq         $v0, $at, L_8027CCEC
    if (ctx->r2 == ctx->r1) {
        // 0x8027CA98: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8027CCEC;
    }
    // 0x8027CA98: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8027CA9C: beq         $v0, $at, L_8027CCEC
    if (ctx->r2 == ctx->r1) {
        // 0x8027CAA0: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8027CCEC;
    }
    // 0x8027CAA0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8027CAA4: beql        $v0, $at, L_8027CCF0
    if (ctx->r2 == ctx->r1) {
        // 0x8027CAA8: lw          $t3, 0x32A4($s2)
        ctx->r11 = MEM_W(ctx->r18, 0X32A4);
            goto L_8027CCF0;
    }
    goto skip_1;
    // 0x8027CAA8: lw          $t3, 0x32A4($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X32A4);
    skip_1:
    // 0x8027CAAC: lw          $t7, 0x7168($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X7168);
    // 0x8027CAB0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8027CAB4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x8027CAB8: bltz        $t7, L_8027CAE4
    if (SIGNED(ctx->r15) < 0) {
        // 0x8027CABC: sw          $t7, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r15;
            goto L_8027CAE4;
    }
    // 0x8027CABC: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x8027CAC0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8027CAC4: jal         0x8021D228
    // 0x8027CAC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021D228(rdram, ctx);
        goto after_0;
    // 0x8027CAC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8027CACC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8027CAD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8027CAD4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8027CAD8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8027CADC: jal         0x8021CEF8
    // 0x8027CAE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021CEF8(rdram, ctx);
        goto after_1;
    // 0x8027CAE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8027CAE4:
    // 0x8027CAE4: lbu         $t9, 0x6D44($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X6D44);
    // 0x8027CAE8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027CAEC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027CAF0: blezl       $t9, L_8027CB4C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8027CAF4: lbu         $t2, 0x6DA8($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X6DA8);
            goto L_8027CB4C;
    }
    goto skip_2;
    // 0x8027CAF4: lbu         $t2, 0x6DA8($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6DA8);
    skip_2:
    // 0x8027CAF8: lw          $a1, 0x6CE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6CE0);
L_8027CAFC:
    // 0x8027CAFC: beql        $a1, $zero, L_8027CB30
    if (ctx->r5 == 0) {
        // 0x8027CB00: lbu         $t1, 0x6D44($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
            goto L_8027CB30;
    }
    goto skip_3;
    // 0x8027CB00: lbu         $t1, 0x6D44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
    skip_3:
    // 0x8027CB04: jal         0x80320D60
    // 0x8027CB08: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_2;
    // 0x8027CB08: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x8027CB0C: beql        $v0, $zero, L_8027CB30
    if (ctx->r2 == 0) {
        // 0x8027CB10: lbu         $t1, 0x6D44($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
            goto L_8027CB30;
    }
    goto skip_4;
    // 0x8027CB10: lbu         $t1, 0x6D44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
    skip_4:
    // 0x8027CB14: lw          $a1, 0x6CE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6CE0);
    // 0x8027CB18: lw          $v0, 0x7C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X7C);
    // 0x8027CB1C: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8027CB20: lh          $t0, 0x18($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X18);
    // 0x8027CB24: jalr        $t9
    // 0x8027CB28: addu        $a0, $t0, $a1
    ctx->r4 = ADD32(ctx->r8, ctx->r5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x8027CB28: addu        $a0, $t0, $a1
    ctx->r4 = ADD32(ctx->r8, ctx->r5);
    after_3:
    // 0x8027CB2C: lbu         $t1, 0x6D44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
L_8027CB30:
    // 0x8027CB30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027CB34: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027CB38: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8027CB3C: bnel        $at, $zero, L_8027CAFC
    if (ctx->r1 != 0) {
        // 0x8027CB40: lw          $a1, 0x6CE0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X6CE0);
            goto L_8027CAFC;
    }
    goto skip_5;
    // 0x8027CB40: lw          $a1, 0x6CE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6CE0);
    skip_5:
    // 0x8027CB44: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027CB48: lbu         $t2, 0x6DA8($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6DA8);
L_8027CB4C:
    // 0x8027CB4C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027CB50: blezl       $t2, L_8027CBAC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8027CB54: lbu         $t5, 0x6E3C($s2)
        ctx->r13 = MEM_BU(ctx->r18, 0X6E3C);
            goto L_8027CBAC;
    }
    goto skip_6;
    // 0x8027CB54: lbu         $t5, 0x6E3C($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6E3C);
    skip_6:
    // 0x8027CB58: lw          $a1, 0x6D48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6D48);
L_8027CB5C:
    // 0x8027CB5C: beql        $a1, $zero, L_8027CB90
    if (ctx->r5 == 0) {
        // 0x8027CB60: lbu         $t4, 0x6DA8($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6DA8);
            goto L_8027CB90;
    }
    goto skip_7;
    // 0x8027CB60: lbu         $t4, 0x6DA8($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6DA8);
    skip_7:
    // 0x8027CB64: jal         0x80320D60
    // 0x8027CB68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_4;
    // 0x8027CB68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_4:
    // 0x8027CB6C: beql        $v0, $zero, L_8027CB90
    if (ctx->r2 == 0) {
        // 0x8027CB70: lbu         $t4, 0x6DA8($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6DA8);
            goto L_8027CB90;
    }
    goto skip_8;
    // 0x8027CB70: lbu         $t4, 0x6DA8($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6DA8);
    skip_8:
    // 0x8027CB74: lw          $a1, 0x6D48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6D48);
    // 0x8027CB78: lw          $v0, 0x7C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X7C);
    // 0x8027CB7C: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8027CB80: lh          $t3, 0x18($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X18);
    // 0x8027CB84: jalr        $t9
    // 0x8027CB88: addu        $a0, $t3, $a1
    ctx->r4 = ADD32(ctx->r11, ctx->r5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x8027CB88: addu        $a0, $t3, $a1
    ctx->r4 = ADD32(ctx->r11, ctx->r5);
    after_5:
    // 0x8027CB8C: lbu         $t4, 0x6DA8($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6DA8);
L_8027CB90:
    // 0x8027CB90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027CB94: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027CB98: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8027CB9C: bnel        $at, $zero, L_8027CB5C
    if (ctx->r1 != 0) {
        // 0x8027CBA0: lw          $a1, 0x6D48($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X6D48);
            goto L_8027CB5C;
    }
    goto skip_9;
    // 0x8027CBA0: lw          $a1, 0x6D48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6D48);
    skip_9:
    // 0x8027CBA4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027CBA8: lbu         $t5, 0x6E3C($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6E3C);
L_8027CBAC:
    // 0x8027CBAC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027CBB0: blezl       $t5, L_8027CC0C
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8027CBB4: lbu         $t8, 0x6EE8($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X6EE8);
            goto L_8027CC0C;
    }
    goto skip_10;
    // 0x8027CBB4: lbu         $t8, 0x6EE8($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6EE8);
    skip_10:
    // 0x8027CBB8: lw          $a1, 0x6E28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6E28);
L_8027CBBC:
    // 0x8027CBBC: beql        $a1, $zero, L_8027CBF0
    if (ctx->r5 == 0) {
        // 0x8027CBC0: lbu         $t7, 0x6E3C($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
            goto L_8027CBF0;
    }
    goto skip_11;
    // 0x8027CBC0: lbu         $t7, 0x6E3C($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
    skip_11:
    // 0x8027CBC4: jal         0x80320D60
    // 0x8027CBC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_6;
    // 0x8027CBC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_6:
    // 0x8027CBCC: beql        $v0, $zero, L_8027CBF0
    if (ctx->r2 == 0) {
        // 0x8027CBD0: lbu         $t7, 0x6E3C($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
            goto L_8027CBF0;
    }
    goto skip_12;
    // 0x8027CBD0: lbu         $t7, 0x6E3C($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
    skip_12:
    // 0x8027CBD4: lw          $a1, 0x6E28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6E28);
    // 0x8027CBD8: lw          $v0, 0x7C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X7C);
    // 0x8027CBDC: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8027CBE0: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x8027CBE4: jalr        $t9
    // 0x8027CBE8: addu        $a0, $t6, $a1
    ctx->r4 = ADD32(ctx->r14, ctx->r5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x8027CBE8: addu        $a0, $t6, $a1
    ctx->r4 = ADD32(ctx->r14, ctx->r5);
    after_7:
    // 0x8027CBEC: lbu         $t7, 0x6E3C($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
L_8027CBF0:
    // 0x8027CBF0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027CBF4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027CBF8: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8027CBFC: bnel        $at, $zero, L_8027CBBC
    if (ctx->r1 != 0) {
        // 0x8027CC00: lw          $a1, 0x6E28($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X6E28);
            goto L_8027CBBC;
    }
    goto skip_13;
    // 0x8027CC00: lw          $a1, 0x6E28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6E28);
    skip_13:
    // 0x8027CC04: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027CC08: lbu         $t8, 0x6EE8($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6EE8);
L_8027CC0C:
    // 0x8027CC0C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027CC10: blezl       $t8, L_8027CC6C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8027CC14: lbu         $v1, 0x6674($s2)
        ctx->r3 = MEM_BU(ctx->r18, 0X6674);
            goto L_8027CC6C;
    }
    goto skip_14;
    // 0x8027CC14: lbu         $v1, 0x6674($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X6674);
    skip_14:
    // 0x8027CC18: lw          $a1, 0x6EE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6EE0);
L_8027CC1C:
    // 0x8027CC1C: beql        $a1, $zero, L_8027CC50
    if (ctx->r5 == 0) {
        // 0x8027CC20: lbu         $t1, 0x6EE8($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6EE8);
            goto L_8027CC50;
    }
    goto skip_15;
    // 0x8027CC20: lbu         $t1, 0x6EE8($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6EE8);
    skip_15:
    // 0x8027CC24: jal         0x80320D60
    // 0x8027CC28: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_8;
    // 0x8027CC28: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_8:
    // 0x8027CC2C: beql        $v0, $zero, L_8027CC50
    if (ctx->r2 == 0) {
        // 0x8027CC30: lbu         $t1, 0x6EE8($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6EE8);
            goto L_8027CC50;
    }
    goto skip_16;
    // 0x8027CC30: lbu         $t1, 0x6EE8($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6EE8);
    skip_16:
    // 0x8027CC34: lw          $a1, 0x6EE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6EE0);
    // 0x8027CC38: lw          $v0, 0x7C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X7C);
    // 0x8027CC3C: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8027CC40: lh          $t0, 0x18($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X18);
    // 0x8027CC44: jalr        $t9
    // 0x8027CC48: addu        $a0, $t0, $a1
    ctx->r4 = ADD32(ctx->r8, ctx->r5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8027CC48: addu        $a0, $t0, $a1
    ctx->r4 = ADD32(ctx->r8, ctx->r5);
    after_9:
    // 0x8027CC4C: lbu         $t1, 0x6EE8($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6EE8);
L_8027CC50:
    // 0x8027CC50: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027CC54: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027CC58: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8027CC5C: bnel        $at, $zero, L_8027CC1C
    if (ctx->r1 != 0) {
        // 0x8027CC60: lw          $a1, 0x6EE0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X6EE0);
            goto L_8027CC1C;
    }
    goto skip_17;
    // 0x8027CC60: lw          $a1, 0x6EE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6EE0);
    skip_17:
    // 0x8027CC64: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027CC68: lbu         $v1, 0x6674($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X6674);
L_8027CC6C:
    // 0x8027CC6C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027CC70: blezl       $v1, L_8027CCB0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8027CC74: addiu       $s0, $s2, 0x365C
        ctx->r16 = ADD32(ctx->r18, 0X365C);
            goto L_8027CCB0;
    }
    goto skip_18;
    // 0x8027CC74: addiu       $s0, $s2, 0x365C
    ctx->r16 = ADD32(ctx->r18, 0X365C);
    skip_18:
L_8027CC78:
    // 0x8027CC78: lw          $a0, 0x664C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X664C);
    // 0x8027CC7C: beql        $a0, $zero, L_8027CCA0
    if (ctx->r4 == 0) {
        // 0x8027CC80: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8027CCA0;
    }
    goto skip_19;
    // 0x8027CC80: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_19:
    // 0x8027CC84: lbu         $t2, 0x14($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X14);
    // 0x8027CC88: beql        $t2, $zero, L_8027CCA0
    if (ctx->r10 == 0) {
        // 0x8027CC8C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8027CCA0;
    }
    goto skip_20;
    // 0x8027CC8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_20:
    // 0x8027CC90: jal         0x802D7394
    // 0x8027CC94: nop

    static_3_802D7394(rdram, ctx);
        goto after_10;
    // 0x8027CC94: nop

    after_10:
    // 0x8027CC98: lbu         $v1, 0x6674($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X6674);
    // 0x8027CC9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8027CCA0:
    // 0x8027CCA0: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8027CCA4: bne         $at, $zero, L_8027CC78
    if (ctx->r1 != 0) {
        // 0x8027CCA8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027CC78;
    }
    // 0x8027CCA8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027CCAC: addiu       $s0, $s2, 0x365C
    ctx->r16 = ADD32(ctx->r18, 0X365C);
L_8027CCB0:
    // 0x8027CCB0: jal         0x80317E10
    // 0x8027CCB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_11;
    // 0x8027CCB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8027CCB8: beql        $v0, $zero, L_8027CCCC
    if (ctx->r2 == 0) {
        // 0x8027CCBC: addiu       $s0, $s2, 0x4E3C
        ctx->r16 = ADD32(ctx->r18, 0X4E3C);
            goto L_8027CCCC;
    }
    goto skip_21;
    // 0x8027CCBC: addiu       $s0, $s2, 0x4E3C
    ctx->r16 = ADD32(ctx->r18, 0X4E3C);
    skip_21:
    // 0x8027CCC0: jal         0x802E55DC
    // 0x8027CCC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802E55DC(rdram, ctx);
        goto after_12;
    // 0x8027CCC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8027CCC8: addiu       $s0, $s2, 0x4E3C
    ctx->r16 = ADD32(ctx->r18, 0X4E3C);
L_8027CCCC:
    // 0x8027CCCC: jal         0x80317E10
    // 0x8027CCD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_13;
    // 0x8027CCD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8027CCD4: beq         $v0, $zero, L_8027CCE4
    if (ctx->r2 == 0) {
        // 0x8027CCD8: nop
    
            goto L_8027CCE4;
    }
    // 0x8027CCD8: nop

    // 0x8027CCDC: jal         0x802E55DC
    // 0x8027CCE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802E55DC(rdram, ctx);
        goto after_14;
    // 0x8027CCE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
L_8027CCE4:
    // 0x8027CCE4: jal         0x8031A81C
    // 0x8027CCE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8031A81C(rdram, ctx);
        goto after_15;
    // 0x8027CCE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
L_8027CCEC:
    // 0x8027CCEC: lw          $t3, 0x32A4($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X32A4);
L_8027CCF0:
    // 0x8027CCF0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8027CCF4: beq         $t3, $at, L_8027CDA0
    if (ctx->r11 == ctx->r1) {
        // 0x8027CCF8: nop
    
            goto L_8027CDA0;
    }
    // 0x8027CCF8: nop

    // 0x8027CCFC: jal         0x8022970C
    // 0x8027CD00: addiu       $a0, $s2, 0x7174
    ctx->r4 = ADD32(ctx->r18, 0X7174);
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x8027CD00: addiu       $a0, $s2, 0x7174
    ctx->r4 = ADD32(ctx->r18, 0X7174);
    after_16:
    // 0x8027CD04: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8027CD08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027CD0C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8027CD10: lwc1        $f4, 0x71BC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X71BC);
    // 0x8027CD14: lwc1        $f6, 0x71C0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X71C0);
    // 0x8027CD18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8027CD1C: addiu       $s0, $s2, 0x6368
    ctx->r16 = ADD32(ctx->r18, 0X6368);
    // 0x8027CD20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027CD24: swc1        $f8, 0x71A4($s2)
    MEM_W(0X71A4, ctx->r18) = ctx->f8.u32l;
    // 0x8027CD28: swc1        $f4, 0x7174($s2)
    MEM_W(0X7174, ctx->r18) = ctx->f4.u32l;
    // 0x8027CD2C: swc1        $f6, 0x7188($s2)
    MEM_W(0X7188, ctx->r18) = ctx->f6.u32l;
    // 0x8027CD30: jal         0x802BCCAC
    // 0x8027CD34: swc1        $f10, 0x71A8($s2)
    MEM_W(0X71A8, ctx->r18) = ctx->f10.u32l;
    static_3_802BCCAC(rdram, ctx);
        goto after_17;
    // 0x8027CD34: swc1        $f10, 0x71A8($s2)
    MEM_W(0X71A8, ctx->r18) = ctx->f10.u32l;
    after_17:
    // 0x8027CD38: beq         $v0, $zero, L_8027CDA0
    if (ctx->r2 == 0) {
        // 0x8027CD3C: nop
    
            goto L_8027CDA0;
    }
    // 0x8027CD3C: nop

    // 0x8027CD40: jal         0x802AFDA0
    // 0x8027CD44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802AFDA0(rdram, ctx);
        goto after_18;
    // 0x8027CD44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_18:
    // 0x8027CD48: bne         $v0, $zero, L_8027CDA0
    if (ctx->r2 != 0) {
        // 0x8027CD4C: nop
    
            goto L_8027CDA0;
    }
    // 0x8027CD4C: nop

    // 0x8027CD50: lw          $v0, 0x65B4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X65B4);
    // 0x8027CD54: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027CD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027CD5C: beq         $v0, $at, L_8027CD78
    if (ctx->r2 == ctx->r1) {
        // 0x8027CD60: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_8027CD78;
    }
    // 0x8027CD60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8027CD64: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027CD68: beq         $v0, $at, L_8027CD78
    if (ctx->r2 == ctx->r1) {
        // 0x8027CD6C: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_8027CD78;
    }
    // 0x8027CD6C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8027CD70: bnel        $v0, $at, L_8027CD90
    if (ctx->r2 != ctx->r1) {
        // 0x8027CD74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027CD90;
    }
    goto skip_22;
    // 0x8027CD74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_22:
L_8027CD78:
    // 0x8027CD78: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x8027CD7C: jal         0x802BCCB4
    // 0x8027CD80: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_802BCCB4(rdram, ctx);
        goto after_19;
    // 0x8027CD80: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_19:
    // 0x8027CD84: b           L_8027CDA0
    // 0x8027CD88: nop

        goto L_8027CDA0;
    // 0x8027CD88: nop

    // 0x8027CD8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8027CD90:
    // 0x8027CD90: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x8027CD94: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x8027CD98: jal         0x802BCCB4
    // 0x8027CD9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802BCCB4(rdram, ctx);
        goto after_20;
    // 0x8027CD9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
L_8027CDA0:
    // 0x8027CDA0: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8027CDA4: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x8027CDA8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8027CDAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027CDB0: bne         $t4, $at, L_8027CDC0
    if (ctx->r12 != ctx->r1) {
        // 0x8027CDB4: nop
    
            goto L_8027CDC0;
    }
    // 0x8027CDB4: nop

    // 0x8027CDB8: b           L_8027CDC0
    // 0x8027CDBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027CDC0;
    // 0x8027CDBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8027CDC0:
    // 0x8027CDC0: beql        $v0, $zero, L_8027CDF8
    if (ctx->r2 == 0) {
        // 0x8027CDC4: lw          $t6, 0x4C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X4C);
            goto L_8027CDF8;
    }
    goto skip_23;
    // 0x8027CDC4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    skip_23:
    // 0x8027CDC8: lbu         $t5, 0x4E38($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X4E38);
    // 0x8027CDCC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8027CDD0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027CDD4: beq         $t5, $zero, L_8027CDEC
    if (ctx->r13 == 0) {
        // 0x8027CDD8: nop
    
            goto L_8027CDEC;
    }
    // 0x8027CDD8: nop

    // 0x8027CDDC: jal         0x802ABFD4
    // 0x8027CDE0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802ABFD4(rdram, ctx);
        goto after_21;
    // 0x8027CDE0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_21:
    // 0x8027CDE4: b           L_8027CDF8
    // 0x8027CDE8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
        goto L_8027CDF8;
    // 0x8027CDE8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
L_8027CDEC:
    // 0x8027CDEC: jal         0x802AC6F8
    // 0x8027CDF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AC6F8(rdram, ctx);
        goto after_22;
    // 0x8027CDF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x8027CDF4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
L_8027CDF8:
    // 0x8027CDF8: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8027CDFC: bltzl       $t6, L_8027CE24
    if (SIGNED(ctx->r14) < 0) {
        // 0x8027CE00: lw          $t7, 0x32A4($s2)
        ctx->r15 = MEM_W(ctx->r18, 0X32A4);
            goto L_8027CE24;
    }
    goto skip_24;
    // 0x8027CE00: lw          $t7, 0x32A4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X32A4);
    skip_24:
    // 0x8027CE04: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8027CE08: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8027CE0C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8027CE10: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x8027CE14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8027CE18: jal         0x8021CEF8
    // 0x8027CE1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021CEF8(rdram, ctx);
        goto after_23;
    // 0x8027CE1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
    // 0x8027CE20: lw          $t7, 0x32A4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X32A4);
L_8027CE24:
    // 0x8027CE24: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8027CE28: bnel        $t7, $at, L_8027CE3C
    if (ctx->r15 != ctx->r1) {
        // 0x8027CE2C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8027CE3C;
    }
    goto skip_25;
    // 0x8027CE2C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_25:
    // 0x8027CE30: jal         0x8029DF88
    // 0x8027CE34: addiu       $a0, $s2, 0x3570
    ctx->r4 = ADD32(ctx->r18, 0X3570);
    static_3_8029DF88(rdram, ctx);
        goto after_24;
    // 0x8027CE34: addiu       $a0, $s2, 0x3570
    ctx->r4 = ADD32(ctx->r18, 0X3570);
    after_24:
    // 0x8027CE38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8027CE3C:
    // 0x8027CE3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8027CE40: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8027CE44: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8027CE48: jr          $ra
    // 0x8027CE4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8027CE4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_802D2FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3060: jr          $ra
    // 0x802D3064: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    return;
    // 0x802D3064: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
;}
RECOMP_FUNC void D_80229C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80229C84: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80229C88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80229C8C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80229C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229C94: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80229C98: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x80229C9C: bc1tl       L_8022A074
    if (c1cs) {
        // 0x80229CA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022A074;
    }
    goto skip_0;
    // 0x80229CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80229CA4: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x80229CA8: jal         0x8022AA60
    // 0x80229CAC: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    static_3_8022AA60(rdram, ctx);
        goto after_0;
    // 0x80229CAC: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80229CB0: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80229CB4: jal         0x8022AC20
    // 0x80229CB8: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    static_3_8022AC20(rdram, ctx);
        goto after_1;
    // 0x80229CB8: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80229CBC: lbu         $v0, 0x7B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7B);
    // 0x80229CC0: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80229CC4: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x80229CC8: beq         $v0, $at, L_80229CEC
    if (ctx->r2 == ctx->r1) {
        // 0x80229CCC: lwc1        $f2, 0x6C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_80229CEC;
    }
    // 0x80229CCC: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80229CD0: addiu       $at, $zero, 0x79
    ctx->r1 = ADD32(0, 0X79);
    // 0x80229CD4: beq         $v0, $at, L_80229E10
    if (ctx->r2 == ctx->r1) {
        // 0x80229CD8: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_80229E10;
    }
    // 0x80229CD8: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x80229CDC: beql        $v0, $at, L_80229F38
    if (ctx->r2 == ctx->r1) {
        // 0x80229CE0: lwc1        $f6, 0x10($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
            goto L_80229F38;
    }
    goto skip_1;
    // 0x80229CE0: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    skip_1:
    // 0x80229CE4: b           L_8022A058
    // 0x80229CE8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
        goto L_8022A058;
    // 0x80229CE8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
L_80229CEC:
    // 0x80229CEC: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80229CF0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80229CF4: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80229CF8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80229CFC: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80229D00: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80229D04: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80229D08: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80229D0C: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80229D10: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80229D14: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80229D18: nop

    // 0x80229D1C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229D20: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80229D24: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80229D28: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80229D2C: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80229D30: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80229D34: nop

    // 0x80229D38: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229D3C: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80229D40: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80229D44: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80229D48: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80229D4C: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80229D50: nop

    // 0x80229D54: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229D58: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80229D5C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80229D60: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80229D64: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80229D68: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229D6C: nop

    // 0x80229D70: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229D74: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80229D78: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x80229D7C: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80229D80: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80229D84: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80229D88: nop

    // 0x80229D8C: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80229D90: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80229D94: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x80229D98: lwc1        $f18, 0x24($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80229D9C: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80229DA0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229DA4: nop

    // 0x80229DA8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80229DAC: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80229DB0: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80229DB4: lwc1        $f16, 0x28($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80229DB8: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80229DBC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80229DC0: nop

    // 0x80229DC4: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80229DC8: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80229DCC: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x80229DD0: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80229DD4: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80229DD8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80229DDC: nop

    // 0x80229DE0: mul.s       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80229DE4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80229DE8: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80229DEC: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80229DF0: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x80229DF4: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x80229DF8: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x80229DFC: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80229E00: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x80229E04: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x80229E08: b           L_8022A068
    // 0x80229E0C: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
        goto L_8022A068;
    // 0x80229E0C: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
L_80229E10:
    // 0x80229E10: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80229E14: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80229E18: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229E1C: nop

    // 0x80229E20: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229E24: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80229E28: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80229E2C: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80229E30: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80229E34: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80229E38: nop

    // 0x80229E3C: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229E40: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80229E44: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80229E48: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80229E4C: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80229E50: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229E54: nop

    // 0x80229E58: mul.s       $f18, $f8, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229E5C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80229E60: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80229E64: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80229E68: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80229E6C: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80229E70: nop

    // 0x80229E74: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229E78: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80229E7C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80229E80: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80229E84: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80229E88: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80229E8C: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x80229E90: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80229E94: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80229E98: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80229E9C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x80229EA0: lwc1        $f16, 0x20($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80229EA4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80229EA8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229EAC: nop

    // 0x80229EB0: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80229EB4: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x80229EB8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80229EBC: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80229EC0: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80229EC4: mul.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80229EC8: nop

    // 0x80229ECC: mul.s       $f18, $f2, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80229ED0: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80229ED4: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80229ED8: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80229EDC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80229EE0: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80229EE4: nop

    // 0x80229EE8: mul.s       $f16, $f2, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80229EEC: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80229EF0: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x80229EF4: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80229EF8: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80229EFC: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80229F00: nop

    // 0x80229F04: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80229F08: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80229F0C: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x80229F10: lwc1        $f18, 0x30($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80229F14: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x80229F18: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x80229F1C: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x80229F20: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80229F24: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x80229F28: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x80229F2C: b           L_8022A068
    // 0x80229F30: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
        goto L_8022A068;
    // 0x80229F30: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x80229F34: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
L_80229F38:
    // 0x80229F38: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80229F3C: mul.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80229F40: nop

    // 0x80229F44: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229F48: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80229F4C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80229F50: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80229F54: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80229F58: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80229F5C: nop

    // 0x80229F60: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229F64: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80229F68: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80229F6C: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80229F70: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80229F74: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80229F78: nop

    // 0x80229F7C: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229F80: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80229F84: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x80229F88: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80229F8C: lwc1        $f18, 0xC($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80229F90: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80229F94: nop

    // 0x80229F98: mul.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80229F9C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80229FA0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80229FA4: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80229FA8: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80229FAC: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80229FB0: nop

    // 0x80229FB4: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80229FB8: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80229FBC: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x80229FC0: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80229FC4: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80229FC8: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80229FCC: nop

    // 0x80229FD0: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80229FD4: sub.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x80229FD8: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x80229FDC: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80229FE0: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80229FE4: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80229FE8: nop

    // 0x80229FEC: mul.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80229FF0: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80229FF4: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x80229FF8: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80229FFC: lwc1        $f18, 0xC($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8022A000: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8022A004: nop

    // 0x8022A008: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8022A00C: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8022A010: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x8022A014: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A018: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x8022A01C: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A020: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x8022A024: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A028: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x8022A02C: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8022A030: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8022A034: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8022A038: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x8022A03C: lwc1        $f16, 0x34($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8022A040: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x8022A044: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8022A048: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x8022A04C: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8022A050: b           L_8022A068
    // 0x8022A054: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
        goto L_8022A068;
    // 0x8022A054: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
L_8022A058:
    // 0x8022A058: jal         0x80231A24
    // 0x8022A05C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022A05C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x8022A060: b           L_8022A074
    // 0x8022A064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022A074;
    // 0x8022A064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022A068:
    // 0x8022A068: jal         0x80228DE0
    // 0x8022A06C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x8022A06C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x8022A070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022A074:
    // 0x8022A074: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8022A078: jr          $ra
    // 0x8022A07C: nop

    return;
    // 0x8022A07C: nop

;}
RECOMP_FUNC void D_802E7E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7EB4: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802E7EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7EBC: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x802E7EC0: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802E7EC4: bne         $a1, $zero, L_802E7EE8
    if (ctx->r5 != 0) {
        // 0x802E7EC8: sw          $a2, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->r6;
            goto L_802E7EE8;
    }
    // 0x802E7EC8: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x802E7ECC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7ED0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7ED4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E7ED8: jal         0x80231A24
    // 0x802E7EDC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7EDC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802E7EE0: addiu       $t7, $zero, 0x29A
    ctx->r15 = ADD32(0, 0X29A);
    // 0x802E7EE4: sw          $t7, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r15;
L_802E7EE8:
    // 0x802E7EE8: lw          $t8, 0xB0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB0);
    // 0x802E7EEC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7EF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7EF4: bne         $t8, $zero, L_802E7F0C
    if (ctx->r24 != 0) {
        // 0x802E7EF8: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_802E7F0C;
    }
    // 0x802E7EF8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7EFC: jal         0x80231A24
    // 0x802E7F00: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802E7F00: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_1:
    // 0x802E7F04: addiu       $t9, $zero, 0x29A
    ctx->r25 = ADD32(0, 0X29A);
    // 0x802E7F08: sw          $t9, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r25;
L_802E7F0C:
    // 0x802E7F0C: jal         0x803183D0
    // 0x802E7F10: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    static_3_803183D0(rdram, ctx);
        goto after_2;
    // 0x802E7F10: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_2:
    // 0x802E7F14: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E7F18: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802E7F1C: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E7F20: lh          $t0, 0x10($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X10);
    // 0x802E7F24: jalr        $t9
    // 0x802E7F28: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802E7F28: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    after_3:
    // 0x802E7F2C: jal         0x803183D0
    // 0x802E7F30: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    static_3_803183D0(rdram, ctx);
        goto after_4;
    // 0x802E7F30: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    after_4:
    // 0x802E7F34: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E7F38: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802E7F3C: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E7F40: lh          $t1, 0x10($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X10);
    // 0x802E7F44: jalr        $t9
    // 0x802E7F48: addu        $a0, $t1, $v0
    ctx->r4 = ADD32(ctx->r9, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802E7F48: addu        $a0, $t1, $v0
    ctx->r4 = ADD32(ctx->r9, ctx->r2);
    after_5:
    // 0x802E7F4C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802E7F50: jal         0x802CF954
    // 0x802E7F54: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_802CF954(rdram, ctx);
        goto after_6;
    // 0x802E7F54: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x802E7F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7F5C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802E7F60: jr          $ra
    // 0x802E7F64: nop

    return;
    // 0x802E7F64: nop

;}
RECOMP_FUNC void D_802E207C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E20FC: lw          $v0, 0x54C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54C);
    // 0x802E2100: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802E2104: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x802E2108: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x802E210C: sw          $v0, 0x54C($a0)
    MEM_W(0X54C, ctx->r4) = ctx->r2;
    // 0x802E2110: lh          $t8, 0x402($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X402);
    // 0x802E2114: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x802E2118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802E211C: slt         $at, $t8, $a1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802E2120: beql        $at, $zero, L_802E2134
    if (ctx->r1 == 0) {
        // 0x802E2124: lw          $t1, 0x54C($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X54C);
            goto L_802E2134;
    }
    goto skip_0;
    // 0x802E2124: lw          $t1, 0x54C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X54C);
    skip_0:
    // 0x802E2128: jr          $ra
    // 0x802E212C: sw          $t0, 0x54C($a0)
    MEM_W(0X54C, ctx->r4) = ctx->r8;
    return;
    // 0x802E212C: sw          $t0, 0x54C($a0)
    MEM_W(0X54C, ctx->r4) = ctx->r8;
    // 0x802E2130: lw          $t1, 0x54C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X54C);
L_802E2134:
    // 0x802E2134: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x802E2138: addiu       $v0, $t2, 0x1
    ctx->r2 = ADD32(ctx->r10, 0X1);
    // 0x802E213C: sw          $t2, 0x54C($a0)
    MEM_W(0X54C, ctx->r4) = ctx->r10;
    // 0x802E2140: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x802E2144: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x802E2148: sw          $v0, 0x54C($a0)
    MEM_W(0X54C, ctx->r4) = ctx->r2;
    // 0x802E214C: lh          $t5, 0x402($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X402);
    // 0x802E2150: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x802E2154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802E2158: slt         $at, $a1, $t5
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x802E215C: beql        $at, $zero, L_802E2170
    if (ctx->r1 == 0) {
        // 0x802E2160: lw          $t8, 0x54C($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X54C);
            goto L_802E2170;
    }
    goto skip_1;
    // 0x802E2160: lw          $t8, 0x54C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X54C);
    skip_1:
    // 0x802E2164: jr          $ra
    // 0x802E2168: sw          $t7, 0x54C($a0)
    MEM_W(0X54C, ctx->r4) = ctx->r15;
    return;
    // 0x802E2168: sw          $t7, 0x54C($a0)
    MEM_W(0X54C, ctx->r4) = ctx->r15;
    // 0x802E216C: lw          $t8, 0x54C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X54C);
L_802E2170:
    // 0x802E2170: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x802E2174: addiu       $v0, $t9, 0x1
    ctx->r2 = ADD32(ctx->r25, 0X1);
    // 0x802E2178: sw          $t9, 0x54C($a0)
    MEM_W(0X54C, ctx->r4) = ctx->r25;
    // 0x802E217C: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x802E2180: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x802E2184: sw          $v0, 0x54C($a0)
    MEM_W(0X54C, ctx->r4) = ctx->r2;
    // 0x802E2188: lh          $t2, 0x402($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X402);
    // 0x802E218C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802E2190: bne         $a1, $t2, L_802E21A0
    if (ctx->r5 != ctx->r10) {
        // 0x802E2194: nop
    
            goto L_802E21A0;
    }
    // 0x802E2194: nop

    // 0x802E2198: jr          $ra
    // 0x802E219C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E219C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802E21A0:
    // 0x802E21A0: jr          $ra
    // 0x802E21A4: nop

    return;
    // 0x802E21A4: nop

;}
RECOMP_FUNC void D_8027A308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A380: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A384: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A388: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A38C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027A390: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027A394: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027A398: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A39C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A3A0: addiu       $a1, $t6, 0x6898
    ctx->r5 = ADD32(ctx->r14, 0X6898);
    // 0x8027A3A4: addiu       $a0, $a0, 0x6888
    ctx->r4 = ADD32(ctx->r4, 0X6888);
    // 0x8027A3A8: addiu       $a3, $t6, 0x6899
    ctx->r7 = ADD32(ctx->r14, 0X6899);
    // 0x8027A3AC: jal         0x802A2440
    // 0x8027A3B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    static_3_802A2440(rdram, ctx);
        goto after_0;
    // 0x8027A3B0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x8027A3B4: beq         $v0, $zero, L_8027A3D4
    if (ctx->r2 == 0) {
        // 0x8027A3B8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027A3D4;
    }
    // 0x8027A3B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A3BC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A3C0: jal         0x8029EE9C
    // 0x8027A3C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_8029EE9C(rdram, ctx);
        goto after_1;
    // 0x8027A3C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027A3C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027A3CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027A3D0: sh          $t8, 0x1390($a0)
    MEM_H(0X1390, ctx->r4) = ctx->r24;
L_8027A3D4:
    // 0x8027A3D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A3D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027A3DC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8027A3E0: jr          $ra
    // 0x8027A3E4: nop

    return;
    // 0x8027A3E4: nop

;}
RECOMP_FUNC void D_802A4070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A40F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A40F4: bne         $a0, $zero, L_802A410C
    if (ctx->r4 != 0) {
        // 0x802A40F8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A410C;
    }
    // 0x802A40F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A40FC: jal         0x802C67EC
    // 0x802A4100: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A4100: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    after_0:
    // 0x802A4104: beq         $v0, $zero, L_802A4184
    if (ctx->r2 == 0) {
        // 0x802A4108: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A4184;
    }
    // 0x802A4108: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802A410C:
    // 0x802A410C: jal         0x802D1960
    // 0x802A4110: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802D18E0(rdram, ctx);
        goto after_1;
    // 0x802A4110: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802A4114: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A4118: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A411C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802A4120: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4124: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A4128: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A412C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4130: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A4134: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x802A4138: swc1        $f0, 0x1B8($a0)
    MEM_W(0X1B8, ctx->r4) = ctx->f0.u32l;
    // 0x802A413C: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x802A4140: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A4144: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4148: sw          $zero, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = 0;
    // 0x802A414C: sw          $zero, 0x19C($a0)
    MEM_W(0X19C, ctx->r4) = 0;
    // 0x802A4150: sb          $zero, 0x194($a0)
    MEM_B(0X194, ctx->r4) = 0;
    // 0x802A4154: sb          $zero, 0x195($a0)
    MEM_B(0X195, ctx->r4) = 0;
    // 0x802A4158: sb          $zero, 0x196($a0)
    MEM_B(0X196, ctx->r4) = 0;
    // 0x802A415C: sb          $zero, 0x198($a0)
    MEM_B(0X198, ctx->r4) = 0;
    // 0x802A4160: sb          $zero, 0x197($a0)
    MEM_B(0X197, ctx->r4) = 0;
    // 0x802A4164: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x802A4168: swc1        $f0, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->f0.u32l;
    // 0x802A416C: swc1        $f0, 0x1AC($a0)
    MEM_W(0X1AC, ctx->r4) = ctx->f0.u32l;
    // 0x802A4170: swc1        $f0, 0x1A8($a0)
    MEM_W(0X1A8, ctx->r4) = ctx->f0.u32l;
    // 0x802A4174: swc1        $f6, 0x1BC($a0)
    MEM_W(0X1BC, ctx->r4) = ctx->f6.u32l;
    // 0x802A4178: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A417C: swc1        $f0, 0x1B0($a0)
    MEM_W(0X1B0, ctx->r4) = ctx->f0.u32l;
    // 0x802A4180: swc1        $f8, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->f8.u32l;
L_802A4184:
    // 0x802A4184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A4188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A418C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A4190: jr          $ra
    // 0x802A4194: nop

    return;
    // 0x802A4194: nop

;}
RECOMP_FUNC void D_802E7C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7D10: jr          $ra
    // 0x802E7D14: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    return;
    // 0x802E7D14: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void D_802EDBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDC28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EDC2C: bne         $a0, $zero, L_802EDC44
    if (ctx->r4 != 0) {
        // 0x802EDC30: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EDC44;
    }
    // 0x802EDC30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EDC34: jal         0x802C67EC
    // 0x802EDC38: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EDC38: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EDC3C: beq         $v0, $zero, L_802EDC94
    if (ctx->r2 == 0) {
        // 0x802EDC40: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EDC94;
    }
    // 0x802EDC40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EDC44:
    // 0x802EDC44: jal         0x8031C47C
    // 0x802EDC48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EDC48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EDC4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EDC50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EDC54: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EDC58: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802EDC5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EDC60: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802EDC64: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802EDC68: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802EDC6C: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EDC70: sh          $v1, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r3;
    // 0x802EDC74: sw          $t6, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r14;
    // 0x802EDC78: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x802EDC7C: sh          $v1, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r3;
    // 0x802EDC80: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802EDC84: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EDC88: jal         0x8031E400
    // 0x802EDC8C: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031E400(rdram, ctx);
        goto after_2;
    // 0x802EDC8C: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802EDC90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802EDC94:
    // 0x802EDC94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EDC98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EDC9C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EDCA0: jr          $ra
    // 0x802EDCA4: nop

    return;
    // 0x802EDCA4: nop

;}
RECOMP_FUNC void D_802C9D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9DCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802C9DD0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802C9DD4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802C9DD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802C9DDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802C9DE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802C9DE4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802C9DE8: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_802C9DEC:
    // 0x802C9DEC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802C9DF0: beql        $a0, $zero, L_802C9E14
    if (ctx->r4 == 0) {
        // 0x802C9DF4: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802C9E14;
    }
    goto skip_0;
    // 0x802C9DF4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_0:
    // 0x802C9DF8: jal         0x802F9244
    // 0x802C9DFC: nop

    static_3_802F9244(rdram, ctx);
        goto after_0;
    // 0x802C9DFC: nop

    after_0:
    // 0x802C9E00: beql        $v0, $zero, L_802C9E14
    if (ctx->r2 == 0) {
        // 0x802C9E04: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802C9E14;
    }
    goto skip_1;
    // 0x802C9E04: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_1:
    // 0x802C9E08: jal         0x802F94F0
    // 0x802C9E0C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_802F94F0(rdram, ctx);
        goto after_1;
    // 0x802C9E0C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x802C9E10: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_802C9E14:
    // 0x802C9E14: bne         $s1, $s2, L_802C9DEC
    if (ctx->r17 != ctx->r18) {
        // 0x802C9E18: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802C9DEC;
    }
    // 0x802C9E18: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802C9E1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802C9E20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802C9E24: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802C9E28: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802C9E2C: jr          $ra
    // 0x802C9E30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802C9E30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8022FE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FE0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FE10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FE14: jal         0x8022FB4C
    // 0x8022FE18: nop

    static_3_8022FB4C(rdram, ctx);
        goto after_0;
    // 0x8022FE18: nop

    after_0:
    // 0x8022FE1C: bne         $v0, $zero, L_8022FE2C
    if (ctx->r2 != 0) {
        // 0x8022FE20: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8022FE2C;
    }
    // 0x8022FE20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8022FE24: b           L_8022FE30
    // 0x8022FE28: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
        goto L_8022FE30;
    // 0x8022FE28: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_8022FE2C:
    // 0x8022FE2C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
L_8022FE30:
    // 0x8022FE30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FE34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FE38: jr          $ra
    // 0x8022FE3C: nop

    return;
    // 0x8022FE3C: nop

;}
RECOMP_FUNC void D_802D56F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D5778: jr          $ra
    // 0x802D577C: lbu         $v0, 0xC56($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC56);
    return;
    // 0x802D577C: lbu         $v0, 0xC56($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC56);
;}
RECOMP_FUNC void D_80201F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201F68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201F6C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201F70: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201F74: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201F78: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
    // 0x80201F7C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201F80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201F84: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201F88: bne         $at, $zero, L_80201FB0
    if (ctx->r1 != 0) {
        // 0x80201F8C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_80201FB0;
    }
    // 0x80201F8C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201F90: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201F94: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201F98: addiu       $a2, $zero, 0x21C
    ctx->r6 = ADD32(0, 0X21C);
    // 0x80201F9C: jal         0x80231C9C
    // 0x80201FA0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201FA0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80201FA4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201FA8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201FAC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_80201FB0:
    // 0x80201FB0: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201FB4: beq         $at, $zero, L_80202074
    if (ctx->r1 == 0) {
        // 0x80201FB8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80202074;
    }
    // 0x80201FB8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201FBC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201FC0: jal         0x802011D0
    // 0x80201FC4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_1;
    // 0x80201FC4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80201FC8: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x80201FCC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201FD0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201FD4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80201FD8: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80201FDC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80201FE0: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80201FE4: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80201FE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80201FEC: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80201FF0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80201FF4: addu        $v1, $t7, $t6
    ctx->r3 = ADD32(ctx->r15, ctx->r14);
    // 0x80201FF8: lbu         $a0, 0xAD($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XAD);
    // 0x80201FFC: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80202000: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80202004: beql        $a0, $at, L_8020202C
    if (ctx->r4 == ctx->r1) {
        // 0x80202008: sw          $zero, 0xA8($v1)
        MEM_W(0XA8, ctx->r3) = 0;
            goto L_8020202C;
    }
    goto skip_0;
    // 0x80202008: sw          $zero, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = 0;
    skip_0:
    // 0x8020200C: jal         0x80203654
    // 0x80202010: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    static_3_80203654(rdram, ctx);
        goto after_2;
    // 0x80202010: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_2:
    // 0x80202014: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80202018: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8020201C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80202020: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80202024: addu        $v1, $t8, $v0
    ctx->r3 = ADD32(ctx->r24, ctx->r2);
    // 0x80202028: sw          $zero, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = 0;
L_8020202C:
    // 0x8020202C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x80202030: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80202034: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x80202038: sb          $t9, 0xAD($t1)
    MEM_B(0XAD, ctx->r9) = ctx->r25;
    // 0x8020203C: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x80202040: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x80202044: sw          $zero, 0xA0($t3)
    MEM_W(0XA0, ctx->r11) = 0;
    // 0x80202048: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8020204C: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x80202050: sb          $zero, 0xB0($t5)
    MEM_B(0XB0, ctx->r13) = 0;
    // 0x80202054: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x80202058: addu        $t6, $a2, $v0
    ctx->r14 = ADD32(ctx->r6, ctx->r2);
    // 0x8020205C: lw          $t7, 0x98($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X98);
    // 0x80202060: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x80202064: beql        $t8, $zero, L_80202078
    if (ctx->r24 == 0) {
        // 0x80202068: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80202078;
    }
    goto skip_1;
    // 0x80202068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8020206C: jal         0x802012BC
    // 0x80202070: addu        $a0, $v0, $a2
    ctx->r4 = ADD32(ctx->r2, ctx->r6);
    static_3_802012BC(rdram, ctx);
        goto after_3;
    // 0x80202070: addu        $a0, $v0, $a2
    ctx->r4 = ADD32(ctx->r2, ctx->r6);
    after_3:
L_80202074:
    // 0x80202074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80202078:
    // 0x80202078: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020207C: jr          $ra
    // 0x80202080: nop

    return;
    // 0x80202080: nop

;}
RECOMP_FUNC void D_802A5D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5DCC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802A5DD0: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x802A5DD4: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x802A5DD8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802A5DDC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802A5DE0: jal         0x80234AF0
    // 0x802A5DE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    static_3_80234AF0(rdram, ctx);
        goto after_0;
    // 0x802A5DE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x802A5DE8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A5DEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A5DF0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A5DF4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802A5DF8: nop

    // 0x802A5DFC: bc1f        L_802A5E14
    if (!c1cs) {
        // 0x802A5E00: nop
    
            goto L_802A5E14;
    }
    // 0x802A5E00: nop

    // 0x802A5E04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A5E08: nop

    // 0x802A5E0C: mul.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x802A5E10: nop

L_802A5E14:
    // 0x802A5E14: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5E18: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5E1C: lwc1        $f10, 0xF4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x802A5E20: mul.s       $f2, $f20, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x802A5E24: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x802A5E28: swc1        $f16, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f16.u32l;
    // 0x802A5E2C: jal         0x80234AF0
    // 0x802A5E30: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    static_3_80234AF0(rdram, ctx);
        goto after_1;
    // 0x802A5E30: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x802A5E34: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A5E38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A5E3C: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802A5E40: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A5E44: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802A5E48: nop

    // 0x802A5E4C: bc1fl       L_802A5E74
    if (!c1cs) {
        // 0x802A5E50: lwc1        $f8, 0x24($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
            goto L_802A5E74;
    }
    goto skip_0;
    // 0x802A5E50: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    skip_0:
    // 0x802A5E54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A5E58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5E5C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5E60: mul.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x802A5E64: nop

    // 0x802A5E68: mul.s       $f2, $f20, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x802A5E6C: nop

    // 0x802A5E70: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
L_802A5E74:
    // 0x802A5E74: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x802A5E78: jal         0x80234AF0
    // 0x802A5E7C: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    static_3_80234AF0(rdram, ctx);
        goto after_2;
    // 0x802A5E7C: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x802A5E80: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A5E84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A5E88: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A5E8C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802A5E90: nop

    // 0x802A5E94: bc1f        L_802A5EAC
    if (!c1cs) {
        // 0x802A5E98: nop
    
            goto L_802A5EAC;
    }
    // 0x802A5E98: nop

    // 0x802A5E9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A5EA0: nop

    // 0x802A5EA4: mul.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x802A5EA8: nop

L_802A5EAC:
    // 0x802A5EAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A5EB0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A5EB4: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802A5EB8: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A5EBC: mul.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x802A5EC0: lwc1        $f12, 0x5C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802A5EC4: lwc1        $f14, 0x60($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X60);
    // 0x802A5EC8: lw          $a2, 0x64($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X64);
    // 0x802A5ECC: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x802A5ED0: addiu       $t6, $s0, 0x2C
    ctx->r14 = ADD32(ctx->r16, 0X2C);
    // 0x802A5ED4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802A5ED8: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x802A5EDC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x802A5EE0: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802A5EE4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802A5EE8: jal         0x802CF27C
    // 0x802A5EEC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    static_3_802CF27C(rdram, ctx);
        goto after_3;
    // 0x802A5EEC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x802A5EF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802A5EF4: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x802A5EF8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802A5EFC: jr          $ra
    // 0x802A5F00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802A5F00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802D8688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8708: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802D870C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D8710: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x802D8714: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D8718: jal         0x8022970C
    // 0x802D871C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802D871C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x802D8720: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x802D8724: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D8728: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x802D872C: jal         0x8022A0D0
    // 0x802D8730: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802D8730: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_1:
    // 0x802D8734: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x802D8738: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802D873C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x802D8740: addiu       $s0, $s0, 0x2F0
    ctx->r16 = ADD32(ctx->r16, 0X2F0);
    // 0x802D8744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D8748: jal         0x802C4A20
    // 0x802D874C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    static_3_802C4A20(rdram, ctx);
        goto after_2;
    // 0x802D874C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x802D8750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D8754: jal         0x802C580C
    // 0x802D8758: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_3;
    // 0x802D8758: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_3:
    // 0x802D875C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D8760: jal         0x802C5818
    // 0x802D8764: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_4;
    // 0x802D8764: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_4:
    // 0x802D8768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D876C: jal         0x802C5824
    // 0x802D8770: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_5;
    // 0x802D8770: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x802D8774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D8778: jal         0x802C584C
    // 0x802D877C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    static_3_802C584C(rdram, ctx);
        goto after_6;
    // 0x802D877C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_6:
    // 0x802D8780: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D8784: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D8788: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x802D878C: jr          $ra
    // 0x802D8790: nop

    return;
    // 0x802D8790: nop

;}
RECOMP_FUNC void D_802A6BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6C7C: jr          $ra
    // 0x802A6C80: sb          $zero, 0x14($a0)
    MEM_B(0X14, ctx->r4) = 0;
    return;
    // 0x802A6C80: sb          $zero, 0x14($a0)
    MEM_B(0X14, ctx->r4) = 0;
;}
RECOMP_FUNC void D_80231C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231C74: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80231C78: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80231C7C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80231C80: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x80231C84: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80231C88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80231C8C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80231C90: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x80231C94: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80231C98: addiu       $t7, $zero, 0x7D0
    ctx->r15 = ADD32(0, 0X7D0);
    // 0x80231C9C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80231CA0: addiu       $t9, $zero, 0x3E8
    ctx->r25 = ADD32(0, 0X3E8);
    // 0x80231CA4: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80231CA8: sh          $t6, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r14;
    // 0x80231CAC: sh          $t7, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r15;
    // 0x80231CB0: sh          $v1, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r3;
    // 0x80231CB4: sh          $v1, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r3;
    // 0x80231CB8: sh          $a0, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r4;
    // 0x80231CBC: sh          $a1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r5;
    // 0x80231CC0: sh          $a2, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r6;
    // 0x80231CC4: sh          $a3, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r7;
    // 0x80231CC8: sh          $a2, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r6;
    // 0x80231CCC: sh          $a0, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r4;
    // 0x80231CD0: sh          $a0, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r4;
    // 0x80231CD4: sh          $a1, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r5;
    // 0x80231CD8: sh          $a0, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r4;
    // 0x80231CDC: sh          $t8, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r24;
    // 0x80231CE0: sh          $t9, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r25;
    // 0x80231CE4: sh          $a1, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r5;
    // 0x80231CE8: sb          $a3, 0x4A($v0)
    MEM_B(0X4A, ctx->r2) = ctx->r7;
    // 0x80231CEC: sh          $t0, 0x3E($v0)
    MEM_H(0X3E, ctx->r2) = ctx->r8;
    // 0x80231CF0: sh          $t0, 0x42($v0)
    MEM_H(0X42, ctx->r2) = ctx->r8;
    // 0x80231CF4: sh          $t0, 0x40($v0)
    MEM_H(0X40, ctx->r2) = ctx->r8;
    // 0x80231CF8: sh          $a3, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r7;
    // 0x80231CFC: sh          $v1, 0x46($v0)
    MEM_H(0X46, ctx->r2) = ctx->r3;
    // 0x80231D00: jr          $ra
    // 0x80231D04: sh          $t1, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r9;
    return;
    // 0x80231D04: sh          $t1, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void D_802AB100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB180: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AB184: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AB188: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AB18C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AB190: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x802AB194: jal         0x8021ACB0
    // 0x802AB198: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AB198: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    after_0:
    // 0x802AB19C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AB1A0: jal         0x8021B838
    // 0x802AB1A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AB1A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AB1A8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802AB1AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AB1B0: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AB1B4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802AB1B8: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x802AB1BC: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AB1C0: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AB1C4: lh          $t7, 0xB8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB8);
    // 0x802AB1C8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802AB1CC: jalr        $t9
    // 0x802AB1D0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AB1D0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_2:
    // 0x802AB1D4: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802AB1D8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802AB1DC: jal         0x802FD4B0
    // 0x802AB1E0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802AB1E0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x802AB1E4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802AB1E8: jal         0x802FD498
    // 0x802AB1EC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802AB1EC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802AB1F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802AB1F4: jal         0x802FD4A4
    // 0x802AB1F8: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802AB1F8: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    after_5:
    // 0x802AB1FC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802AB200: jal         0x802FD480
    // 0x802AB204: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802AB204: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    after_6:
    // 0x802AB208: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802AB20C: jal         0x802FD48C
    // 0x802AB210: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802AB210: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    after_7:
    // 0x802AB214: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x802AB218: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802AB21C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AB220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AB224: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AB228: jal         0x80317194
    // 0x802AB22C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802AB22C: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802AB230: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x802AB234: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x802AB238: addiu       $t1, $zero, 0x3E
    ctx->r9 = ADD32(0, 0X3E);
    // 0x802AB23C: addiu       $t2, $zero, 0x3F
    ctx->r10 = ADD32(0, 0X3F);
    // 0x802AB240: sw          $t0, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r8;
    // 0x802AB244: sw          $v0, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r2;
    // 0x802AB248: sw          $v0, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r2;
    // 0x802AB24C: sw          $t1, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r9;
    // 0x802AB250: sw          $t2, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r10;
    // 0x802AB254: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AB258: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AB25C: lui         $a1, 0x4198
    ctx->r5 = S32(0X4198 << 16);
    // 0x802AB260: jal         0x802D51DC
    // 0x802AB264: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802AB264: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    after_9:
    // 0x802AB268: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AB26C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AB270: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AB274: jal         0x802C4A20
    // 0x802AB278: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802AB278: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802AB27C: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AB280: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802AB284: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AB288: jal         0x802C4A20
    // 0x802AB28C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_11;
    // 0x802AB28C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_11:
    // 0x802AB290: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AB294: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x802AB298: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802AB29C: jal         0x802C4A20
    // 0x802AB2A0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802AB2A0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802AB2A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AB2A8: addiu       $a0, $s0, 0x728
    ctx->r4 = ADD32(ctx->r16, 0X728);
    // 0x802AB2AC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802AB2B0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AB2B4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802AB2B8: jal         0x8022A0D0
    // 0x802AB2BC: lui         $a2, 0x4148
    ctx->r6 = S32(0X4148 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_13;
    // 0x802AB2BC: lui         $a2, 0x4148
    ctx->r6 = S32(0X4148 << 16);
    after_13:
    // 0x802AB2C0: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AB2C4: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802AB2C8: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AB2CC: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x802AB2D0: jal         0x802C4A20
    // 0x802AB2D4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    static_3_802C4A20(rdram, ctx);
        goto after_14;
    // 0x802AB2D4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_14:
    // 0x802AB2D8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB2DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AB2E0: jal         0x802C5858
    // 0x802AB2E4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    static_3_802C5858(rdram, ctx);
        goto after_15;
    // 0x802AB2E4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_15:
    // 0x802AB2E8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802AB2EC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AB2F0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802AB2F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AB2F8: lui         $at, 0x4507
    ctx->r1 = S32(0X4507 << 16);
    // 0x802AB2FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AB300: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AB304: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AB308: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802AB30C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AB310: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AB314: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AB318: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802AB31C: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x802AB320: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x802AB324: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802AB328: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
    // 0x802AB32C: jal         0x8022970C
    // 0x802AB330: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x802AB330: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_16:
    // 0x802AB334: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802AB338: jal         0x8022970C
    // 0x802AB33C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_17;
    // 0x802AB33C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_17:
    // 0x802AB340: lui         $a1, 0xC0D1
    ctx->r5 = S32(0XC0D1 << 16);
    // 0x802AB344: lui         $a2, 0xC08D
    ctx->r6 = S32(0XC08D << 16);
    // 0x802AB348: lui         $a3, 0x3EE5
    ctx->r7 = S32(0X3EE5 << 16);
    // 0x802AB34C: ori         $a3, $a3, 0x6042
    ctx->r7 = ctx->r7 | 0X6042;
    // 0x802AB350: ori         $a2, $a2, 0x9168
    ctx->r6 = ctx->r6 | 0X9168;
    // 0x802AB354: ori         $a1, $a1, 0x374C
    ctx->r5 = ctx->r5 | 0X374C;
    // 0x802AB358: jal         0x8022A0D0
    // 0x802AB35C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_8022A0D0(rdram, ctx);
        goto after_18;
    // 0x802AB35C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_18:
    // 0x802AB360: lui         $a1, 0x40D1
    ctx->r5 = S32(0X40D1 << 16);
    // 0x802AB364: lui         $a2, 0xC08D
    ctx->r6 = S32(0XC08D << 16);
    // 0x802AB368: lui         $a3, 0x3EE5
    ctx->r7 = S32(0X3EE5 << 16);
    // 0x802AB36C: ori         $a3, $a3, 0x6042
    ctx->r7 = ctx->r7 | 0X6042;
    // 0x802AB370: ori         $a2, $a2, 0x9168
    ctx->r6 = ctx->r6 | 0X9168;
    // 0x802AB374: ori         $a1, $a1, 0x374C
    ctx->r5 = ctx->r5 | 0X374C;
    // 0x802AB378: jal         0x8022A0D0
    // 0x802AB37C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8022A0D0(rdram, ctx);
        goto after_19;
    // 0x802AB37C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x802AB380: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802AB384: jal         0x803169A0
    // 0x802AB388: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_803169A0(rdram, ctx);
        goto after_20;
    // 0x802AB388: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_20:
    // 0x802AB38C: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802AB390: jal         0x803169A0
    // 0x802AB394: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_21;
    // 0x802AB394: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_21:
    // 0x802AB398: jal         0x802DD454
    // 0x802AB39C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802DD454(rdram, ctx);
        goto after_22;
    // 0x802AB39C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x802AB3A0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802AB3A4: sb          $t3, 0x968($s0)
    MEM_B(0X968, ctx->r16) = ctx->r11;
    // 0x802AB3A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AB3AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AB3B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802AB3B4: jr          $ra
    // 0x802AB3B8: nop

    return;
    // 0x802AB3B8: nop

;}
RECOMP_FUNC void D_802EC630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC6B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC6B4: bne         $a0, $zero, L_802EC6CC
    if (ctx->r4 != 0) {
        // 0x802EC6B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EC6CC;
    }
    // 0x802EC6B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC6BC: jal         0x802C67EC
    // 0x802EC6C0: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EC6C0: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EC6C4: beq         $v0, $zero, L_802EC720
    if (ctx->r2 == 0) {
        // 0x802EC6C8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EC720;
    }
    // 0x802EC6C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EC6CC:
    // 0x802EC6CC: jal         0x8031C47C
    // 0x802EC6D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EC6D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EC6D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC6D8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EC6DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC6E0: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x802EC6E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EC6E8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802EC6EC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802EC6F0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802EC6F4: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x802EC6F8: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EC6FC: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802EC700: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802EC704: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x802EC708: sh          $t8, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r24;
    // 0x802EC70C: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802EC710: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EC714: jal         0x8031CE8C
    // 0x802EC718: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031CE8C(rdram, ctx);
        goto after_2;
    // 0x802EC718: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802EC71C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802EC720:
    // 0x802EC720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EC724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC728: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EC72C: jr          $ra
    // 0x802EC730: nop

    return;
    // 0x802EC730: nop

;}
RECOMP_FUNC void D_8023D09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D09C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D0A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D0A4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D0A8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D0AC: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D0B0: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D0B4: ddivu       $zero, $t6, $t7
    DDIVU(U64(ctx->r14), U64(ctx->r15), &lo, &hi);
    // 0x8023D0B8: bne         $t7, $zero, L_8023D0C4
    if (ctx->r15 != 0) {
        // 0x8023D0BC: nop
    
            goto L_8023D0C4;
    }
    // 0x8023D0BC: nop

    // 0x8023D0C0: break       7
    do_break(2149830848);
L_8023D0C4:
    // 0x8023D0C4: mfhi        $v0
    ctx->r2 = hi;
    // 0x8023D0C8: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D0CC: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D0D0: jr          $ra
    // 0x8023D0D4: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D0D4: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void D_802D1074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D10F4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802D10F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D10FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D1100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1104: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D1108: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802D110C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802D1110: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D1114: jal         0x8022A0D0
    // 0x802D1118: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_0;
    // 0x802D1118: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_0:
    // 0x802D111C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802D1120: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x802D1124: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D1128: lwc1        $f2, 0x20($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X20);
    // 0x802D112C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802D1130: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D1134: mul.s       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802D1138: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802D113C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D1140: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802D1144: nop

    // 0x802D1148: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802D114C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802D1150: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802D1154: jal         0x8022A0D0
    // 0x802D1158: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802D1158: nop

    after_1:
    // 0x802D115C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1164: jr          $ra
    // 0x802D1168: nop

    return;
    // 0x802D1168: nop

;}
RECOMP_FUNC void D_802C2F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C2FA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802C2FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C2FAC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802C2FB0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802C2FB4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x802C2FB8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x802C2FBC: jal         0x8021E66C
    // 0x802C2FC0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_0;
    // 0x802C2FC0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x802C2FC4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C2FC8: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802C2FCC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802C2FD0: jal         0x8021E708
    // 0x802C2FD4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_1;
    // 0x802C2FD4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x802C2FD8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x802C2FDC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802C2FE0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x802C2FE4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x802C2FE8: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802C2FEC: beq         $at, $zero, L_802C2FF8
    if (ctx->r1 == 0) {
        // 0x802C2FF0: nop
    
            goto L_802C2FF8;
    }
    // 0x802C2FF0: nop

    // 0x802C2FF4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_802C2FF8:
    // 0x802C2FF8: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x802C2FFC: mflo        $v0
    ctx->r2 = lo;
    // 0x802C3000: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x802C3004: bne         $a0, $zero, L_802C3010
    if (ctx->r4 != 0) {
        // 0x802C3008: nop
    
            goto L_802C3010;
    }
    // 0x802C3008: nop

    // 0x802C300C: break       7
    do_break(2150379532);
L_802C3010:
    // 0x802C3010: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C3014: bne         $a0, $at, L_802C3028
    if (ctx->r4 != ctx->r1) {
        // 0x802C3018: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802C3028;
    }
    // 0x802C3018: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802C301C: bne         $v1, $at, L_802C3028
    if (ctx->r3 != ctx->r1) {
        // 0x802C3020: nop
    
            goto L_802C3028;
    }
    // 0x802C3020: nop

    // 0x802C3024: break       6
    do_break(2150379556);
L_802C3028:
    // 0x802C3028: div         $zero, $t6, $a0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r4)));
    // 0x802C302C: bne         $a0, $zero, L_802C3038
    if (ctx->r4 != 0) {
        // 0x802C3030: nop
    
            goto L_802C3038;
    }
    // 0x802C3030: nop

    // 0x802C3034: break       7
    do_break(2150379572);
L_802C3038:
    // 0x802C3038: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C303C: bne         $a0, $at, L_802C3050
    if (ctx->r4 != ctx->r1) {
        // 0x802C3040: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802C3050;
    }
    // 0x802C3040: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802C3044: bne         $t6, $at, L_802C3050
    if (ctx->r14 != ctx->r1) {
        // 0x802C3048: nop
    
            goto L_802C3050;
    }
    // 0x802C3048: nop

    // 0x802C304C: break       6
    do_break(2150379596);
L_802C3050:
    // 0x802C3050: mflo        $t7
    ctx->r15 = lo;
    // 0x802C3054: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802C3058: beq         $at, $zero, L_802C308C
    if (ctx->r1 == 0) {
        // 0x802C305C: nop
    
            goto L_802C308C;
    }
    // 0x802C305C: nop

    // 0x802C3060: div         $zero, $a1, $a0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r4)));
    // 0x802C3064: mflo        $a2
    ctx->r6 = lo;
    // 0x802C3068: bne         $a0, $zero, L_802C3074
    if (ctx->r4 != 0) {
        // 0x802C306C: nop
    
            goto L_802C3074;
    }
    // 0x802C306C: nop

    // 0x802C3070: break       7
    do_break(2150379632);
L_802C3074:
    // 0x802C3074: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C3078: bne         $a0, $at, L_802C308C
    if (ctx->r4 != ctx->r1) {
        // 0x802C307C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802C308C;
    }
    // 0x802C307C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802C3080: bne         $a1, $at, L_802C308C
    if (ctx->r5 != ctx->r1) {
        // 0x802C3084: nop
    
            goto L_802C308C;
    }
    // 0x802C3084: nop

    // 0x802C3088: break       6
    do_break(2150379656);
L_802C308C:
    // 0x802C308C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802C3090: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802C3094: jal         0x8023072C
    // 0x802C3098: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    static_3_8023072C(rdram, ctx);
        goto after_2;
    // 0x802C3098: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x802C309C: jal         0x8022FF90
    // 0x802C30A0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    static_3_8022FF90(rdram, ctx);
        goto after_3;
    // 0x802C30A0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x802C30A4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x802C30A8: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x802C30AC: mfhi        $t9
    ctx->r25 = hi;
    // 0x802C30B0: subu        $t0, $v1, $t9
    ctx->r8 = SUB32(ctx->r3, ctx->r25);
    // 0x802C30B4: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x802C30B8: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x802C30BC: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x802C30C0: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x802C30C4: bne         $v1, $zero, L_802C30D0
    if (ctx->r3 != 0) {
        // 0x802C30C8: nop
    
            goto L_802C30D0;
    }
    // 0x802C30C8: nop

    // 0x802C30CC: break       7
    do_break(2150379724);
L_802C30D0:
    // 0x802C30D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C30D4: bne         $v1, $at, L_802C30E8
    if (ctx->r3 != ctx->r1) {
        // 0x802C30D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802C30E8;
    }
    // 0x802C30D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802C30DC: bne         $v0, $at, L_802C30E8
    if (ctx->r2 != ctx->r1) {
        // 0x802C30E0: nop
    
            goto L_802C30E8;
    }
    // 0x802C30E0: nop

    // 0x802C30E4: break       6
    do_break(2150379748);
L_802C30E8:
    // 0x802C30E8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x802C30EC: addu        $a0, $t8, $t2
    ctx->r4 = ADD32(ctx->r24, ctx->r10);
    // 0x802C30F0: jal         0x8021E87C
    // 0x802C30F4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    static_3_8021E87C(rdram, ctx);
        goto after_4;
    // 0x802C30F4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_4:
    // 0x802C30F8: jal         0x8021EC9C
    // 0x802C30FC: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_5;
    // 0x802C30FC: nop

    after_5:
    // 0x802C3100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C3104: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802C3108: jr          $ra
    // 0x802C310C: nop

    return;
    // 0x802C310C: nop

;}
RECOMP_FUNC void D_802E13F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1474: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802E1478: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E147C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E1480: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E1484: beq         $a0, $zero, L_802E14CC
    if (ctx->r4 == 0) {
        // 0x802E1488: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802E14CC;
    }
    // 0x802E1488: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802E148C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E1490: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E1494: jal         0x80311E58
    // 0x802E1498: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    static_3_80311E58(rdram, ctx);
        goto after_0;
    // 0x802E1498: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    after_0:
    // 0x802E149C: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802E14A0: jal         0x802D3D78
    // 0x802E14A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D3D78(rdram, ctx);
        goto after_1;
    // 0x802E14A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802E14A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E14AC: jal         0x8031739C
    // 0x802E14B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_2;
    // 0x802E14B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802E14B4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802E14B8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802E14BC: beql        $t8, $zero, L_802E14D0
    if (ctx->r24 == 0) {
        // 0x802E14C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802E14D0;
    }
    goto skip_0;
    // 0x802E14C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802E14C4: jal         0x802C681C
    // 0x802E14C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_3;
    // 0x802E14C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_802E14CC:
    // 0x802E14CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E14D0:
    // 0x802E14D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E14D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802E14D8: jr          $ra
    // 0x802E14DC: nop

    return;
    // 0x802E14DC: nop

;}
RECOMP_FUNC void D_8023886C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023886C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80238870: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x80238874: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80238878: bne         $t6, $zero, L_80238888
    if (ctx->r14 != 0) {
        // 0x8023887C: lw          $v0, 0x10($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X10);
            goto L_80238888;
    }
    // 0x8023887C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80238880: jr          $ra
    // 0x80238884: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80238884: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80238888:
    // 0x80238888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023888C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80238890: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
L_80238894:
    // 0x80238894: addiu       $t6, $a2, 0x1
    ctx->r14 = ADD32(ctx->r6, 0X1);
    // 0x80238898: srlv        $t7, $a1, $a2
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r6 & 31));
    // 0x8023889C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802388A0: beql        $t8, $zero, L_802388E4
    if (ctx->r24 == 0) {
        // 0x802388A4: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_802388E4;
    }
    goto skip_0;
    // 0x802388A4: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_0:
    // 0x802388A8: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x802388AC: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x802388B0: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x802388B4: beql        $t3, $zero, L_802388D0
    if (ctx->r11 == 0) {
        // 0x802388B8: lw          $t0, 0xB8($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XB8);
            goto L_802388D0;
    }
    goto skip_1;
    // 0x802388B8: lw          $t0, 0xB8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XB8);
    skip_1:
    // 0x802388BC: lw          $t4, 0xB8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XB8);
    // 0x802388C0: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x802388C4: sw          $t5, 0xB8($a3)
    MEM_W(0XB8, ctx->r7) = ctx->r13;
    // 0x802388C8: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x802388CC: lw          $t0, 0xB8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XB8);
L_802388D0:
    // 0x802388D0: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x802388D4: beql        $at, $zero, L_802388E4
    if (ctx->r1 == 0) {
        // 0x802388D8: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_802388E4;
    }
    goto skip_2;
    // 0x802388D8: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_2:
    // 0x802388DC: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x802388E0: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
L_802388E4:
    // 0x802388E4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802388E8: beq         $t8, $zero, L_80238928
    if (ctx->r24 == 0) {
        // 0x802388EC: addiu       $t6, $a2, 0x2
        ctx->r14 = ADD32(ctx->r6, 0X2);
            goto L_80238928;
    }
    // 0x802388EC: addiu       $t6, $a2, 0x2
    ctx->r14 = ADD32(ctx->r6, 0X2);
    // 0x802388F0: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x802388F4: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x802388F8: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x802388FC: beql        $t3, $zero, L_80238918
    if (ctx->r11 == 0) {
        // 0x80238900: lw          $t0, 0xBC($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XBC);
            goto L_80238918;
    }
    goto skip_3;
    // 0x80238900: lw          $t0, 0xBC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XBC);
    skip_3:
    // 0x80238904: lw          $t4, 0xBC($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XBC);
    // 0x80238908: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x8023890C: sw          $t5, 0xBC($a3)
    MEM_W(0XBC, ctx->r7) = ctx->r13;
    // 0x80238910: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x80238914: lw          $t0, 0xBC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XBC);
L_80238918:
    // 0x80238918: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x8023891C: beql        $at, $zero, L_8023892C
    if (ctx->r1 == 0) {
        // 0x80238920: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_8023892C;
    }
    goto skip_4;
    // 0x80238920: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_4:
    // 0x80238924: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_80238928:
    // 0x80238928: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
L_8023892C:
    // 0x8023892C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80238930: beq         $t8, $zero, L_80238970
    if (ctx->r24 == 0) {
        // 0x80238934: addiu       $t6, $a2, 0x3
        ctx->r14 = ADD32(ctx->r6, 0X3);
            goto L_80238970;
    }
    // 0x80238934: addiu       $t6, $a2, 0x3
    ctx->r14 = ADD32(ctx->r6, 0X3);
    // 0x80238938: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x8023893C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80238940: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x80238944: beql        $t3, $zero, L_80238960
    if (ctx->r11 == 0) {
        // 0x80238948: lw          $t0, 0xC0($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XC0);
            goto L_80238960;
    }
    goto skip_5;
    // 0x80238948: lw          $t0, 0xC0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC0);
    skip_5:
    // 0x8023894C: lw          $t4, 0xC0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XC0);
    // 0x80238950: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x80238954: sw          $t5, 0xC0($a3)
    MEM_W(0XC0, ctx->r7) = ctx->r13;
    // 0x80238958: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8023895C: lw          $t0, 0xC0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC0);
L_80238960:
    // 0x80238960: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x80238964: beql        $at, $zero, L_80238974
    if (ctx->r1 == 0) {
        // 0x80238968: srlv        $t7, $a1, $t6
        ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
            goto L_80238974;
    }
    goto skip_6;
    // 0x80238968: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
    skip_6:
    // 0x8023896C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_80238970:
    // 0x80238970: srlv        $t7, $a1, $t6
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r14 & 31));
L_80238974:
    // 0x80238974: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80238978: beql        $t8, $zero, L_802389B8
    if (ctx->r24 == 0) {
        // 0x8023897C: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_802389B8;
    }
    goto skip_7;
    // 0x8023897C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_7:
    // 0x80238980: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x80238984: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80238988: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x8023898C: beql        $t3, $zero, L_802389A4
    if (ctx->r11 == 0) {
        // 0x80238990: lw          $a1, 0xC4($a3)
        ctx->r5 = MEM_W(ctx->r7, 0XC4);
            goto L_802389A4;
    }
    goto skip_8;
    // 0x80238990: lw          $a1, 0xC4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC4);
    skip_8:
    // 0x80238994: lw          $t4, 0xC4($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XC4);
    // 0x80238998: subu        $t5, $t4, $v0
    ctx->r13 = SUB32(ctx->r12, ctx->r2);
    // 0x8023899C: sw          $t5, 0xC4($a3)
    MEM_W(0XC4, ctx->r7) = ctx->r13;
    // 0x802389A0: lw          $a1, 0xC4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC4);
L_802389A4:
    // 0x802389A4: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x802389A8: beql        $at, $zero, L_802389B8
    if (ctx->r1 == 0) {
        // 0x802389AC: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_802389B8;
    }
    goto skip_9;
    // 0x802389AC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_9:
    // 0x802389B0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x802389B4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_802389B8:
    // 0x802389B8: bnel        $a2, $t2, L_80238894
    if (ctx->r6 != ctx->r10) {
        // 0x802389BC: lw          $a1, 0x4($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X4);
            goto L_80238894;
    }
    goto skip_10;
    // 0x802389BC: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    skip_10:
    // 0x802389C0: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x802389C4: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x802389C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802389CC: jr          $ra
    // 0x802389D0: nop

    return;
    // 0x802389D0: nop

;}
RECOMP_FUNC void D_802D3F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3F8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D3F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D3F94: jal         0x8028D688
    // 0x802D3F98: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D688(rdram, ctx);
        goto after_0;
    // 0x802D3F98: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802D3F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D3FA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D3FA4: jr          $ra
    // 0x802D3FA8: nop

    return;
    // 0x802D3FA8: nop

;}
RECOMP_FUNC void D_8022FAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FAFC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022FB00: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8022FB04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FB08: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8022FB0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FB10: ori         $at, $at, 0xF000
    ctx->r1 = ctx->r1 | 0XF000;
    // 0x8022FB14: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x8022FB18: and         $a2, $a0, $at
    ctx->r6 = ctx->r4 & ctx->r1;
    // 0x8022FB1C: srl         $t6, $a2, 12
    ctx->r14 = S32(U32(ctx->r6) >> 12);
    // 0x8022FB20: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8022FB24: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8022FB28: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8022FB2C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8022FB30: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8022FB34: bnel        $v0, $zero, L_8022FB54
    if (ctx->r2 != 0) {
        // 0x8022FB38: lw          $t1, 0x10($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X10);
            goto L_8022FB54;
    }
    goto skip_0;
    // 0x8022FB38: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x8022FB3C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022FB40: jal         0x80231A24
    // 0x8022FB44: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022FB44: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022FB48: b           L_8022FB7C
    // 0x8022FB4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022FB7C;
    // 0x8022FB4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022FB50: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
L_8022FB54:
    // 0x8022FB54: andi        $a1, $a0, 0xFFF
    ctx->r5 = ctx->r4 & 0XFFF;
    // 0x8022FB58: sll         $t2, $a1, 5
    ctx->r10 = S32(ctx->r5 << 5);
    // 0x8022FB5C: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x8022FB60: bne         $v1, $zero, L_8022FB7C
    if (ctx->r3 != 0) {
        // 0x8022FB64: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8022FB7C;
    }
    // 0x8022FB64: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8022FB68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022FB6C: jal         0x80231A24
    // 0x8022FB70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022FB70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x8022FB74: b           L_8022FB7C
    // 0x8022FB78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022FB7C;
    // 0x8022FB78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022FB7C:
    // 0x8022FB7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FB80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FB84: jr          $ra
    // 0x8022FB88: nop

    return;
    // 0x8022FB88: nop

;}
RECOMP_FUNC void D_80239970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239970: addiu       $sp, $sp, -0x180
    ctx->r29 = ADD32(ctx->r29, -0X180);
    // 0x80239974: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80239978: andi        $s0, $a1, 0xFFFF
    ctx->r16 = ctx->r5 & 0XFFFF;
    // 0x8023997C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80239980: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80239984: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80239988: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8023998C: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80239990: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80239994: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80239998: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8023999C: sw          $a1, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r5;
    // 0x802399A0: beq         $s0, $zero, L_802399B0
    if (ctx->r16 == 0) {
        // 0x802399A4: sh          $zero, 0x52($sp)
        MEM_H(0X52, ctx->r29) = 0;
            goto L_802399B0;
    }
    // 0x802399A4: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x802399A8: bne         $a2, $zero, L_802399B8
    if (ctx->r6 != 0) {
        // 0x802399AC: nop
    
            goto L_802399B8;
    }
    // 0x802399AC: nop

L_802399B0:
    // 0x802399B0: b           L_80239BD0
    // 0x802399B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239BD0;
    // 0x802399B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802399B8:
    // 0x802399B8: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x802399BC: nop

    // 0x802399C0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802399C4: bne         $t7, $zero, L_802399D4
    if (ctx->r15 != 0) {
        // 0x802399C8: nop
    
            goto L_802399D4;
    }
    // 0x802399C8: nop

    // 0x802399CC: b           L_80239BD0
    // 0x802399D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239BD0;
    // 0x802399D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802399D4:
    // 0x802399D4: jal         0x802452EC
    // 0x802399D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_802452EC(rdram, ctx);
        goto after_0;
    // 0x802399D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x802399DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802399E0: bne         $v0, $at, L_802399F0
    if (ctx->r2 != ctx->r1) {
        // 0x802399E4: nop
    
            goto L_802399F0;
    }
    // 0x802399E4: nop

    // 0x802399E8: b           L_80239BD0
    // 0x802399EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80239BD0;
    // 0x802399EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802399F0:
    // 0x802399F0: lbu         $t8, 0x65($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X65);
    // 0x802399F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802399F8: beq         $t8, $zero, L_80239A1C
    if (ctx->r24 == 0) {
        // 0x802399FC: lw          $t9, 0x190($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X190);
            goto L_80239A1C;
    }
    // 0x802399FC: lw          $t9, 0x190($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X190);
    // 0x80239A00: jal         0x802456A0
    // 0x80239A04: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_1;
    // 0x80239A04: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    after_1:
    // 0x80239A08: beq         $v0, $zero, L_80239A1C
    if (ctx->r2 == 0) {
        // 0x80239A0C: lw          $t9, 0x190($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X190);
            goto L_80239A1C;
    }
    // 0x80239A0C: lw          $t9, 0x190($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X190);
    // 0x80239A10: b           L_80239BD4
    // 0x80239A14: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239BD4;
    // 0x80239A14: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80239A18: lw          $t9, 0x190($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X190);
L_80239A1C:
    // 0x80239A1C: addiu       $t0, $sp, 0x17C
    ctx->r8 = ADD32(ctx->r29, 0X17C);
    // 0x80239A20: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80239A24: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80239A28: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    // 0x80239A2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80239A30: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80239A34: jal         0x80239120
    // 0x80239A38: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    static_3_80239120(rdram, ctx);
        goto after_2;
    // 0x80239A38: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
    // 0x80239A3C: beq         $v0, $zero, L_80239A50
    if (ctx->r2 == 0) {
        // 0x80239A40: lw          $t1, 0x17C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X17C);
            goto L_80239A50;
    }
    // 0x80239A40: lw          $t1, 0x17C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X17C);
    // 0x80239A44: b           L_80239BD4
    // 0x80239A48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239BD4;
    // 0x80239A48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80239A4C: lw          $t1, 0x17C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X17C);
L_80239A50:
    // 0x80239A50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80239A54: bne         $t1, $at, L_80239A64
    if (ctx->r9 != ctx->r1) {
        // 0x80239A58: addiu       $a3, $sp, 0x54
        ctx->r7 = ADD32(ctx->r29, 0X54);
            goto L_80239A64;
    }
    // 0x80239A58: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80239A5C: b           L_80239BD0
    // 0x80239A60: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80239BD0;
    // 0x80239A60: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80239A64:
    // 0x80239A64: lw          $t2, 0x5C($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X5C);
    // 0x80239A68: lw          $t3, 0x17C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X17C);
    // 0x80239A6C: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80239A70: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    // 0x80239A74: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x80239A78: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80239A7C: jal         0x80245710
    // 0x80239A80: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    static_3_80245710(rdram, ctx);
        goto after_3;
    // 0x80239A80: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_3:
    // 0x80239A84: beq         $v0, $zero, L_80239A98
    if (ctx->r2 == 0) {
        // 0x80239A88: lbu         $s0, 0x5A($sp)
        ctx->r16 = MEM_BU(ctx->r29, 0X5A);
            goto L_80239A98;
    }
    // 0x80239A88: lbu         $s0, 0x5A($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X5A);
    // 0x80239A8C: b           L_80239BD4
    // 0x80239A90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239BD4;
    // 0x80239A90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80239A94: lbu         $s0, 0x5A($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X5A);
L_80239A98:
    // 0x80239A98: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x80239A9C: lbu         $s2, 0x5B($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X5B);
    // 0x80239AA0: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239AA4: beq         $at, $zero, L_80239B5C
    if (ctx->r1 == 0) {
        // 0x80239AA8: or          $s4, $s0, $zero
        ctx->r20 = ctx->r16 | 0;
            goto L_80239B5C;
    }
    // 0x80239AA8: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
    // 0x80239AAC: addiu       $s1, $sp, 0x74
    ctx->r17 = ADD32(ctx->r29, 0X74);
L_80239AB0:
    // 0x80239AB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80239AB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80239AB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80239ABC: jal         0x80245404
    // 0x80239AC0: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    static_3_80245404(rdram, ctx);
        goto after_4;
    // 0x80239AC0: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    after_4:
    // 0x80239AC4: beq         $v0, $zero, L_80239AD4
    if (ctx->r2 == 0) {
        // 0x80239AC8: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80239AD4;
    }
    // 0x80239AC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80239ACC: b           L_80239BD4
    // 0x80239AD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239BD4;
    // 0x80239AD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80239AD4:
    // 0x80239AD4: addiu       $t5, $sp, 0x50
    ctx->r13 = ADD32(ctx->r29, 0X50);
    // 0x80239AD8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80239ADC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80239AE0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80239AE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80239AE8: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x80239AEC: addiu       $a3, $sp, 0x52
    ctx->r7 = ADD32(ctx->r29, 0X52);
    // 0x80239AF0: jal         0x80239C40
    // 0x80239AF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    static_3_80239C40(rdram, ctx);
        goto after_5;
    // 0x80239AF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_5:
    // 0x80239AF8: beq         $v0, $zero, L_80239B08
    if (ctx->r2 == 0) {
        // 0x80239AFC: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80239B08;
    }
    // 0x80239AFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80239B00: b           L_80239BD4
    // 0x80239B04: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239BD4;
    // 0x80239B04: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80239B08:
    // 0x80239B08: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80239B0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80239B10: jal         0x80245404
    // 0x80239B14: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    static_3_80245404(rdram, ctx);
        goto after_6;
    // 0x80239B14: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    after_6:
    // 0x80239B18: beq         $v0, $zero, L_80239B2C
    if (ctx->r2 == 0) {
        // 0x80239B1C: lhu         $t7, 0x50($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X50);
            goto L_80239B2C;
    }
    // 0x80239B1C: lhu         $t7, 0x50($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X50);
    // 0x80239B20: b           L_80239BD4
    // 0x80239B24: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80239BD4;
    // 0x80239B24: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80239B28: lhu         $t7, 0x50($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X50);
L_80239B2C:
    // 0x80239B2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80239B30: bne         $t7, $at, L_80239B44
    if (ctx->r15 != ctx->r1) {
        // 0x80239B34: nop
    
            goto L_80239B44;
    }
    // 0x80239B34: nop

    // 0x80239B38: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x80239B3C: b           L_80239B60
    // 0x80239B40: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_80239B60;
    // 0x80239B40: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
L_80239B44:
    // 0x80239B44: lbu         $v0, 0x64($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X64);
    // 0x80239B48: lbu         $s0, 0x50($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X50);
    // 0x80239B4C: lbu         $s2, 0x51($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X51);
    // 0x80239B50: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239B54: bne         $at, $zero, L_80239AB0
    if (ctx->r1 != 0) {
        // 0x80239B58: or          $s4, $s0, $zero
        ctx->r20 = ctx->r16 | 0;
            goto L_80239AB0;
    }
    // 0x80239B58: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
L_80239B5C:
    // 0x80239B5C: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
L_80239B60:
    // 0x80239B60: bne         $at, $zero, L_80239B70
    if (ctx->r1 != 0) {
        // 0x80239B64: addiu       $v0, $sp, 0x54
        ctx->r2 = ADD32(ctx->r29, 0X54);
            goto L_80239B70;
    }
    // 0x80239B64: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x80239B68: b           L_80239BD0
    // 0x80239B6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80239BD0;
    // 0x80239B6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80239B70:
    // 0x80239B70: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x80239B74: sh          $zero, 0x58($sp)
    MEM_H(0X58, ctx->r29) = 0;
    // 0x80239B78: sh          $zero, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = 0;
    // 0x80239B7C: sh          $zero, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = 0;
    // 0x80239B80: addiu       $v1, $sp, 0x64
    ctx->r3 = ADD32(ctx->r29, 0X64);
L_80239B84:
    // 0x80239B84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239B88: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80239B8C: bne         $at, $zero, L_80239B84
    if (ctx->r1 != 0) {
        // 0x80239B90: sb          $zero, 0xF($v0)
        MEM_B(0XF, ctx->r2) = 0;
            goto L_80239B84;
    }
    // 0x80239B90: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
    // 0x80239B94: sb          $zero, 0x61($sp)
    MEM_B(0X61, ctx->r29) = 0;
    // 0x80239B98: sb          $zero, 0x62($sp)
    MEM_B(0X62, ctx->r29) = 0;
    // 0x80239B9C: sb          $zero, 0x63($sp)
    MEM_B(0X63, ctx->r29) = 0;
    // 0x80239BA0: sb          $zero, 0x60($sp)
    MEM_B(0X60, ctx->r29) = 0;
    // 0x80239BA4: sb          $zero, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = 0;
    // 0x80239BA8: lw          $t8, 0x5C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X5C);
    // 0x80239BAC: lw          $t9, 0x17C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X17C);
    // 0x80239BB0: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80239BB4: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x80239BB8: andi        $t0, $a2, 0xFFFF
    ctx->r8 = ctx->r6 & 0XFFFF;
    // 0x80239BBC: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80239BC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80239BC4: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80239BC8: jal         0x80246660
    // 0x80239BCC: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    static_3_80246660(rdram, ctx);
        goto after_7;
    // 0x80239BCC: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    after_7:
L_80239BD0:
    // 0x80239BD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80239BD4:
    // 0x80239BD4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80239BD8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80239BDC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80239BE0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80239BE4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80239BE8: jr          $ra
    // 0x80239BEC: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
    return;
    // 0x80239BEC: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
;}
RECOMP_FUNC void D_802D2FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3068: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D306C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D3070: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D3074: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D3078: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D307C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802D3080: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802D3084: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D3088: bne         $a1, $at, L_802D30D0
    if (ctx->r5 != ctx->r1) {
        // 0x802D308C: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_802D30D0;
    }
    // 0x802D308C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802D3090: jal         0x802057FC
    // 0x802D3094: nop

    static_3_802057FC(rdram, ctx);
        goto after_0;
    // 0x802D3094: nop

    after_0:
    // 0x802D3098: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D309C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D30A0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D30A4: jal         0x803036BC
    // 0x802D30A8: nop

    static_3_803036BC(rdram, ctx);
        goto after_1;
    // 0x802D30A8: nop

    after_1:
    // 0x802D30AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D30B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D30B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802D30B8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D30BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D30C0: jal         0x80303914
    // 0x802D30C4: nop

    static_3_80303914(rdram, ctx);
        goto after_2;
    // 0x802D30C4: nop

    after_2:
    // 0x802D30C8: b           L_802D3188
    // 0x802D30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802D3188;
    // 0x802D30CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D30D0:
    // 0x802D30D0: slti        $at, $a2, 0x1F
    ctx->r1 = SIGNED(ctx->r6) < 0X1F ? 1 : 0;
    // 0x802D30D4: bne         $at, $zero, L_802D311C
    if (ctx->r1 != 0) {
        // 0x802D30D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802D311C;
    }
    // 0x802D30D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D30DC: jal         0x802057FC
    // 0x802D30E0: nop

    static_3_802057FC(rdram, ctx);
        goto after_3;
    // 0x802D30E0: nop

    after_3:
    // 0x802D30E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D30E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D30EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D30F0: jal         0x803036BC
    // 0x802D30F4: nop

    static_3_803036BC(rdram, ctx);
        goto after_4;
    // 0x802D30F4: nop

    after_4:
    // 0x802D30F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D30FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D3100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802D3104: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D3108: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D310C: jal         0x80303914
    // 0x802D3110: nop

    static_3_80303914(rdram, ctx);
        goto after_5;
    // 0x802D3110: nop

    after_5:
    // 0x802D3114: b           L_802D3188
    // 0x802D3118: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802D3188;
    // 0x802D3118: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802D311C:
    // 0x802D311C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802D3120: jal         0x803036BC
    // 0x802D3124: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    static_3_803036BC(rdram, ctx);
        goto after_6;
    // 0x802D3124: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_6:
    // 0x802D3128: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802D312C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802D3130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D3134: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x802D3138: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x802D313C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D3140: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x802D3144: jal         0x8030369C
    // 0x802D3148: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    static_3_8030369C(rdram, ctx);
        goto after_7;
    // 0x802D3148: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    after_7:
    // 0x802D314C: beq         $v0, $zero, L_802D3184
    if (ctx->r2 == 0) {
        // 0x802D3150: sb          $v0, 0x27($sp)
        MEM_B(0X27, ctx->r29) = ctx->r2;
            goto L_802D3184;
    }
    // 0x802D3150: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x802D3154: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802D3158: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x802D315C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D3160: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D3164: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D3168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D316C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802D3170: jal         0x80303914
    // 0x802D3174: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    static_3_80303914(rdram, ctx);
        goto after_8;
    // 0x802D3174: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    after_8:
    // 0x802D3178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D317C: jal         0x803036BC
    // 0x802D3180: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_803036BC(rdram, ctx);
        goto after_9;
    // 0x802D3180: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_9:
L_802D3184:
    // 0x802D3184: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
L_802D3188:
    // 0x802D3188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D318C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D3190: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D3194: jr          $ra
    // 0x802D3198: nop

    return;
    // 0x802D3198: nop

;}
RECOMP_FUNC void D_802782D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278348: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8027834C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80278350: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80278354: lbu         $t6, 0x3343($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3343);
    // 0x80278358: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8027835C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80278360: beq         $t6, $zero, L_80278370
    if (ctx->r14 == 0) {
        // 0x80278364: lbu         $a1, 0x0($a1)
        ctx->r5 = MEM_BU(ctx->r5, 0X0);
            goto L_80278370;
    }
    // 0x80278364: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x80278368: b           L_8027859C
    // 0x8027836C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027859C;
    // 0x8027836C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80278370:
    // 0x80278370: lbu         $t7, 0x35E0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X35E0);
    // 0x80278374: addiu       $a0, $s0, 0x365C
    ctx->r4 = ADD32(ctx->r16, 0X365C);
    // 0x80278378: beql        $t7, $zero, L_8027838C
    if (ctx->r15 == 0) {
        // 0x8027837C: sw          $a0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r4;
            goto L_8027838C;
    }
    goto skip_0;
    // 0x8027837C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    skip_0:
    // 0x80278380: b           L_8027859C
    // 0x80278384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027859C;
    // 0x80278384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80278388: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
L_8027838C:
    // 0x8027838C: jal         0x80317E10
    // 0x80278390: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    static_3_80317E10(rdram, ctx);
        goto after_0;
    // 0x80278390: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_0:
    // 0x80278394: bne         $v0, $zero, L_80278448
    if (ctx->r2 != 0) {
        // 0x80278398: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_80278448;
    }
    // 0x80278398: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8027839C: lw          $v1, 0x6FBC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6FBC);
    // 0x802783A0: beql        $v1, $zero, L_802783D0
    if (ctx->r3 == 0) {
        // 0x802783A4: lw          $v1, 0x6F00($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X6F00);
            goto L_802783D0;
    }
    goto skip_1;
    // 0x802783A4: lw          $v1, 0x6F00($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6F00);
    skip_1:
    // 0x802783A8: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802783AC: lh          $t8, 0xF8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XF8);
    // 0x802783B0: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x802783B4: lw          $t9, 0xFC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XFC);
    // 0x802783B8: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    // 0x802783BC: jalr        $t9
    // 0x802783C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802783C0: nop

    after_1:
    // 0x802783C4: beq         $v0, $zero, L_802783FC
    if (ctx->r2 == 0) {
        // 0x802783C8: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_802783FC;
    }
    // 0x802783C8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x802783CC: lw          $v1, 0x6F00($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6F00);
L_802783D0:
    // 0x802783D0: beql        $v1, $zero, L_8027844C
    if (ctx->r3 == 0) {
        // 0x802783D4: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_8027844C;
    }
    goto skip_2;
    // 0x802783D4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x802783D8: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802783DC: lh          $t0, 0xF8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XF8);
    // 0x802783E0: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x802783E4: lw          $t9, 0xFC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XFC);
    // 0x802783E8: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    // 0x802783EC: jalr        $t9
    // 0x802783F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802783F0: nop

    after_2:
    // 0x802783F4: bne         $v0, $zero, L_80278448
    if (ctx->r2 != 0) {
        // 0x802783F8: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_80278448;
    }
    // 0x802783F8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
L_802783FC:
    // 0x802783FC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80278400: jal         0x80231A24
    // 0x80278404: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80278404: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x80278408: addiu       $a0, $s0, 0x6D0
    ctx->r4 = ADD32(ctx->r16, 0X6D0);
    // 0x8027840C: jal         0x802F7220
    // 0x80278410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802F7220(rdram, ctx);
        goto after_4;
    // 0x80278410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80278414: addiu       $a0, $s0, 0x3570
    ctx->r4 = ADD32(ctx->r16, 0X3570);
    // 0x80278418: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8027841C: jal         0x8029DE58
    // 0x80278420: addiu       $a1, $s0, 0x4DD4
    ctx->r5 = ADD32(ctx->r16, 0X4DD4);
    static_3_8029DE58(rdram, ctx);
        goto after_5;
    // 0x80278420: addiu       $a1, $s0, 0x4DD4
    ctx->r5 = ADD32(ctx->r16, 0X4DD4);
    after_5:
    // 0x80278424: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80278428: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8027842C: sb          $t1, 0x3624($s0)
    MEM_B(0X3624, ctx->r16) = ctx->r9;
    // 0x80278430: jal         0x8029E54C
    // 0x80278434: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8029E54C(rdram, ctx);
        goto after_6;
    // 0x80278434: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80278438: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8027843C: sb          $t2, 0x3628($s0)
    MEM_B(0X3628, ctx->r16) = ctx->r10;
    // 0x80278440: b           L_8027859C
    // 0x80278444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027859C;
    // 0x80278444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80278448:
    // 0x80278448: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_8027844C:
    // 0x8027844C: jal         0x80317E10
    // 0x80278450: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    static_3_80317E10(rdram, ctx);
        goto after_7;
    // 0x80278450: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_7:
    // 0x80278454: bne         $v0, $zero, L_802784C4
    if (ctx->r2 != 0) {
        // 0x80278458: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_802784C4;
    }
    // 0x80278458: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8027845C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80278460: beq         $a1, $at, L_8027847C
    if (ctx->r5 == ctx->r1) {
        // 0x80278464: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8027847C;
    }
    // 0x80278464: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80278468: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8027846C: beq         $a1, $at, L_8027847C
    if (ctx->r5 == ctx->r1) {
        // 0x80278470: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_8027847C;
    }
    // 0x80278470: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80278474: bnel        $a1, $at, L_802784C8
    if (ctx->r5 != ctx->r1) {
        // 0x80278478: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802784C8;
    }
    goto skip_3;
    // 0x80278478: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_3:
L_8027847C:
    // 0x8027847C: jal         0x80231A24
    // 0x80278480: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_8;
    // 0x80278480: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_8:
    // 0x80278484: addiu       $a0, $s0, 0x6D0
    ctx->r4 = ADD32(ctx->r16, 0X6D0);
    // 0x80278488: jal         0x802F7220
    // 0x8027848C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802F7220(rdram, ctx);
        goto after_9;
    // 0x8027848C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80278490: addiu       $a0, $s0, 0x3570
    ctx->r4 = ADD32(ctx->r16, 0X3570);
    // 0x80278494: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x80278498: jal         0x8029DE58
    // 0x8027849C: addiu       $a1, $s0, 0x4DD4
    ctx->r5 = ADD32(ctx->r16, 0X4DD4);
    static_3_8029DE58(rdram, ctx);
        goto after_10;
    // 0x8027849C: addiu       $a1, $s0, 0x4DD4
    ctx->r5 = ADD32(ctx->r16, 0X4DD4);
    after_10:
    // 0x802784A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802784A4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802784A8: sb          $t3, 0x3624($s0)
    MEM_B(0X3624, ctx->r16) = ctx->r11;
    // 0x802784AC: jal         0x8029E54C
    // 0x802784B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8029E54C(rdram, ctx);
        goto after_11;
    // 0x802784B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x802784B4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x802784B8: sb          $t4, 0x3628($s0)
    MEM_B(0X3628, ctx->r16) = ctx->r12;
    // 0x802784BC: b           L_8027859C
    // 0x802784C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027859C;
    // 0x802784C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802784C4:
    // 0x802784C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802784C8:
    // 0x802784C8: beq         $a1, $at, L_8027859C
    if (ctx->r5 == ctx->r1) {
        // 0x802784CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8027859C;
    }
    // 0x802784CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802784D0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802784D4: beq         $a1, $at, L_8027859C
    if (ctx->r5 == ctx->r1) {
        // 0x802784D8: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8027859C;
    }
    // 0x802784D8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802784DC: beq         $a1, $at, L_8027859C
    if (ctx->r5 == ctx->r1) {
        // 0x802784E0: nop
    
            goto L_8027859C;
    }
    // 0x802784E0: nop

    // 0x802784E4: lwc1        $f0, 0x32AC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X32AC);
    // 0x802784E8: lwc1        $f4, 0x32A8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X32A8);
    // 0x802784EC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802784F0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x802784F4: nop

    // 0x802784F8: bc1f        L_8027859C
    if (!c1cs) {
        // 0x802784FC: nop
    
            goto L_8027859C;
    }
    // 0x802784FC: nop

    // 0x80278500: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80278504: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80278508: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8027850C: nop

    // 0x80278510: bc1f        L_8027859C
    if (!c1cs) {
        // 0x80278514: nop
    
            goto L_8027859C;
    }
    // 0x80278514: nop

    // 0x80278518: beq         $a1, $at, L_80278534
    if (ctx->r5 == ctx->r1) {
        // 0x8027851C: addiu       $a0, $s0, 0x8F4
        ctx->r4 = ADD32(ctx->r16, 0X8F4);
            goto L_80278534;
    }
    // 0x8027851C: addiu       $a0, $s0, 0x8F4
    ctx->r4 = ADD32(ctx->r16, 0X8F4);
    // 0x80278520: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80278524: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80278528: sb          $t6, 0x3628($s0)
    MEM_B(0X3628, ctx->r16) = ctx->r14;
    // 0x8027852C: b           L_8027856C
    // 0x80278530: sb          $t5, 0x3624($s0)
    MEM_B(0X3624, ctx->r16) = ctx->r13;
        goto L_8027856C;
    // 0x80278530: sb          $t5, 0x3624($s0)
    MEM_B(0X3624, ctx->r16) = ctx->r13;
L_80278534:
    // 0x80278534: jal         0x80302980
    // 0x80278538: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    static_3_80302980(rdram, ctx);
        goto after_12;
    // 0x80278538: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_12:
    // 0x8027853C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80278540: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80278544: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80278548: addiu       $a1, $zero, 0x91
    ctx->r5 = ADD32(0, 0X91);
    // 0x8027854C: jal         0x80302988
    // 0x80278550: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_13;
    // 0x80278550: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_13:
    // 0x80278554: jal         0x80302A7C
    // 0x80278558: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_80302A7C(rdram, ctx);
        goto after_14;
    // 0x80278558: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x8027855C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80278560: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80278564: sb          $t7, 0x3624($s0)
    MEM_B(0X3624, ctx->r16) = ctx->r15;
    // 0x80278568: sb          $t8, 0x3628($s0)
    MEM_B(0X3628, ctx->r16) = ctx->r24;
L_8027856C:
    // 0x8027856C: addiu       $a0, $s0, 0x6D0
    ctx->r4 = ADD32(ctx->r16, 0X6D0);
    // 0x80278570: jal         0x802F7220
    // 0x80278574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802F7220(rdram, ctx);
        goto after_15;
    // 0x80278574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x80278578: addiu       $a0, $s0, 0x3570
    ctx->r4 = ADD32(ctx->r16, 0X3570);
    // 0x8027857C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x80278580: jal         0x8029DE58
    // 0x80278584: addiu       $a1, $s0, 0x4DD4
    ctx->r5 = ADD32(ctx->r16, 0X4DD4);
    static_3_8029DE58(rdram, ctx);
        goto after_16;
    // 0x80278584: addiu       $a1, $s0, 0x4DD4
    ctx->r5 = ADD32(ctx->r16, 0X4DD4);
    after_16:
    // 0x80278588: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027858C: jal         0x8029E54C
    // 0x80278590: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8029E54C(rdram, ctx);
        goto after_17;
    // 0x80278590: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x80278594: b           L_8027859C
    // 0x80278598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027859C;
    // 0x80278598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8027859C:
    // 0x8027859C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802785A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802785A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802785A8: jr          $ra
    // 0x802785AC: nop

    return;
    // 0x802785AC: nop

;}
RECOMP_FUNC void D_80298B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298BE0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80298BE4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80298BE8: jr          $ra
    // 0x80298BEC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x80298BEC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802D178C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D180C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1810: bne         $a0, $zero, L_802D1828
    if (ctx->r4 != 0) {
        // 0x802D1814: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802D1828;
    }
    // 0x802D1814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1818: jal         0x802C67EC
    // 0x802D181C: addiu       $a0, $zero, 0x2934
    ctx->r4 = ADD32(0, 0X2934);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D181C: addiu       $a0, $zero, 0x2934
    ctx->r4 = ADD32(0, 0X2934);
    after_0:
    // 0x802D1820: beq         $v0, $zero, L_802D1834
    if (ctx->r2 == 0) {
        // 0x802D1824: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D1834;
    }
    // 0x802D1824: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802D1828:
    // 0x802D1828: jal         0x80301F9C
    // 0x802D182C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80301F9C(rdram, ctx);
        goto after_1;
    // 0x802D182C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802D1830: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802D1834:
    // 0x802D1834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D183C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802D1840: jr          $ra
    // 0x802D1844: nop

    return;
    // 0x802D1844: nop

;}
