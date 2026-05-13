#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_8023A764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023A764: addiu       $sp, $sp, -0x1F0
    ctx->r29 = ADD32(ctx->r29, -0X1F0);
    // 0x8023A768: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A76C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8023A770: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8023A774: lh          $t7, 0x2E($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2E);
    // 0x8023A778: lw          $t8, 0x1F0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F0);
    // 0x8023A77C: lh          $s4, 0x2($t2)
    ctx->r20 = MEM_H(ctx->r10, 0X2);
    // 0x8023A780: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023A784: sw          $t7, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r15;
    // 0x8023A788: beq         $at, $zero, L_8023BE2C
    if (ctx->r1 == 0) {
        // 0x8023A78C: lw          $t1, 0x0($t8)
        ctx->r9 = MEM_W(ctx->r24, 0X0);
            goto L_8023BE2C;
    }
    // 0x8023A78C: lw          $t1, 0x0($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X0);
    // 0x8023A790: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023A794: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8023A798: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8023A79C: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8023A7A0: beq         $at, $zero, L_8023BE2C
    if (ctx->r1 == 0) {
        // 0x8023A7A4: nop
    
            goto L_8023BE2C;
    }
    // 0x8023A7A4: nop

    // 0x8023A7A8: lw          $t5, 0x39E8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X39E8);
    // 0x8023A7AC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8023A7B0: slt         $at, $a3, $t5
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8023A7B4: bne         $at, $zero, L_8023BE2C
    if (ctx->r1 != 0) {
        // 0x8023A7B8: nop
    
            goto L_8023BE2C;
    }
    // 0x8023A7B8: nop

    // 0x8023A7BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023A7C0: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023A7C4: bne         $at, $zero, L_8023BE2C
    if (ctx->r1 != 0) {
        // 0x8023A7C8: slt         $at, $a0, $t5
        ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r13) ? 1 : 0;
            goto L_8023BE2C;
    }
    // 0x8023A7C8: slt         $at, $a0, $t5
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8023A7CC: beq         $at, $zero, L_8023A808
    if (ctx->r1 == 0) {
        // 0x8023A7D0: sll         $t7, $a0, 2
        ctx->r15 = S32(ctx->r4 << 2);
            goto L_8023A808;
    }
    // 0x8023A7D0: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8023A7D4: lw          $t7, 0x214($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X214);
    // 0x8023A7D8: subu        $t6, $t5, $a0
    ctx->r14 = SUB32(ctx->r13, ctx->r4);
    // 0x8023A7DC: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x8023A7E0: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023A7E4: sw          $t9, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r25;
    // 0x8023A7E8: lh          $t6, 0x4($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X4);
    // 0x8023A7EC: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8023A7F0: mflo        $t8
    ctx->r24 = lo;
    // 0x8023A7F4: sra         $t9, $t8, 5
    ctx->r25 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8023A7F8: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x8023A7FC: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8023A800: b           L_8023A81C
    // 0x8023A804: sw          $t6, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r14;
        goto L_8023A81C;
    // 0x8023A804: sw          $t6, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r14;
L_8023A808:
    // 0x8023A808: sw          $t7, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r15;
    // 0x8023A80C: lh          $t8, 0x4($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X4);
    // 0x8023A810: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8023A814: addu        $t6, $t9, $t0
    ctx->r14 = ADD32(ctx->r25, ctx->r8);
    // 0x8023A818: sw          $t6, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r14;
L_8023A81C:
    // 0x8023A81C: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023A820: beq         $at, $zero, L_8023A85C
    if (ctx->r1 == 0) {
        // 0x8023A824: sll         $t9, $a1, 2
        ctx->r25 = S32(ctx->r5 << 2);
            goto L_8023A85C;
    }
    // 0x8023A824: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x8023A828: lw          $t9, 0x218($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X218);
    // 0x8023A82C: subu        $t8, $v0, $a1
    ctx->r24 = SUB32(ctx->r2, ctx->r5);
    // 0x8023A830: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8023A834: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023A838: sw          $t7, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->r15;
    // 0x8023A83C: lh          $t8, 0x6($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X6);
    // 0x8023A840: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8023A844: mflo        $t6
    ctx->r14 = lo;
    // 0x8023A848: sra         $t7, $t6, 5
    ctx->r15 = S32(SIGNED(ctx->r14) >> 5);
    // 0x8023A84C: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x8023A850: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8023A854: b           L_8023A870
    // 0x8023A858: sw          $t8, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r24;
        goto L_8023A870;
    // 0x8023A858: sw          $t8, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r24;
L_8023A85C:
    // 0x8023A85C: sw          $t9, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->r25;
    // 0x8023A860: lh          $t6, 0x6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X6);
    // 0x8023A864: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8023A868: addu        $t8, $t7, $t4
    ctx->r24 = ADD32(ctx->r15, ctx->r12);
    // 0x8023A86C: sw          $t8, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->r24;
L_8023A870:
    // 0x8023A870: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023A874: bne         $at, $zero, L_8023A888
    if (ctx->r1 != 0) {
        // 0x8023A878: sll         $t6, $a3, 2
        ctx->r14 = S32(ctx->r7 << 2);
            goto L_8023A888;
    }
    // 0x8023A878: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x8023A87C: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8023A880: b           L_8023A88C
    // 0x8023A884: sw          $t9, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r25;
        goto L_8023A88C;
    // 0x8023A884: sw          $t9, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r25;
L_8023A888:
    // 0x8023A888: sw          $t6, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r14;
L_8023A88C:
    // 0x8023A88C: slt         $at, $t3, $a2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8023A890: bne         $at, $zero, L_8023A8A8
    if (ctx->r1 != 0) {
        // 0x8023A894: sll         $t8, $t3, 2
        ctx->r24 = S32(ctx->r11 << 2);
            goto L_8023A8A8;
    }
    // 0x8023A894: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x8023A898: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8023A89C: sw          $t7, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r15;
    // 0x8023A8A0: b           L_8023A8B0
    // 0x8023A8A4: sw          $t2, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->r10;
        goto L_8023A8B0;
    // 0x8023A8A4: sw          $t2, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->r10;
L_8023A8A8:
    // 0x8023A8A8: sw          $t8, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r24;
    // 0x8023A8AC: sw          $t2, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->r10;
L_8023A8B0:
    // 0x8023A8B0: lw          $a1, 0x1F8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023A8B4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8023A8B8: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8023A8BC: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8023A8C0: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A8C4: beql        $t9, $v0, L_8023BC9C
    if (ctx->r25 == ctx->r2) {
        // 0x8023A8C8: addiu       $v0, $sp, 0x1BC
        ctx->r2 = ADD32(ctx->r29, 0X1BC);
            goto L_8023BC9C;
    }
    goto skip_0;
    // 0x8023A8C8: addiu       $v0, $sp, 0x1BC
    ctx->r2 = ADD32(ctx->r29, 0X1BC);
    skip_0:
    // 0x8023A8CC: lbu         $a0, 0x31($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X31);
    // 0x8023A8D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023A8D4: lw          $t7, 0x1F4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A8D8: beql        $a0, $zero, L_8023A90C
    if (ctx->r4 == 0) {
        // 0x8023A8DC: lhu         $t8, 0x14($t7)
        ctx->r24 = MEM_HU(ctx->r15, 0X14);
            goto L_8023A90C;
    }
    goto skip_1;
    // 0x8023A8DC: lhu         $t8, 0x14($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X14);
    skip_1:
    // 0x8023A8E0: beq         $a0, $at, L_8023AC44
    if (ctx->r4 == ctx->r1) {
        // 0x8023A8E4: lw          $t6, 0x1F4($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1F4);
            goto L_8023AC44;
    }
    // 0x8023A8E4: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A8E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8023A8EC: beq         $a0, $at, L_8023AFA0
    if (ctx->r4 == ctx->r1) {
        // 0x8023A8F0: lw          $a2, 0x1F4($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1F4);
            goto L_8023AFA0;
    }
    // 0x8023A8F0: lw          $a2, 0x1F4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A8F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8023A8F8: beq         $a0, $at, L_8023B950
    if (ctx->r4 == ctx->r1) {
        // 0x8023A8FC: lw          $t8, 0x1F4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1F4);
            goto L_8023B950;
    }
    // 0x8023A8FC: lw          $t8, 0x1F4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A900: b           L_8023BC90
    // 0x8023A904: nop

        goto L_8023BC90;
    // 0x8023A904: nop

    // 0x8023A908: lhu         $t8, 0x14($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X14);
L_8023A90C:
    // 0x8023A90C: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023A910: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023A914: andi        $t9, $t8, 0x200
    ctx->r25 = ctx->r24 & 0X200;
    // 0x8023A918: beq         $t9, $zero, L_8023AA7C
    if (ctx->r25 == 0) {
        // 0x8023A91C: lui         $s2, 0xE600
        ctx->r18 = S32(0XE600 << 16);
            goto L_8023AA7C;
    }
    // 0x8023A91C: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023A920: lbu         $t6, 0x30($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X30);
    // 0x8023A924: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023A928: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023A92C: andi        $t8, $t6, 0x7
    ctx->r24 = ctx->r14 & 0X7;
    // 0x8023A930: sll         $t9, $t8, 21
    ctx->r25 = S32(ctx->r24 << 21);
    // 0x8023A934: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8023A938: or          $t6, $t7, $a3
    ctx->r14 = ctx->r15 | ctx->r7;
    // 0x8023A93C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023A940: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023A944: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x8023A948: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023A94C: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023A950: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023A954: lw          $t9, 0x1F4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A958: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023A95C: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023A960: lbu         $t7, 0x30($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X30);
    // 0x8023A964: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023A968: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023A96C: andi        $t6, $t7, 0x7
    ctx->r14 = ctx->r15 & 0X7;
    // 0x8023A970: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x8023A974: or          $t9, $t8, $t3
    ctx->r25 = ctx->r24 | ctx->r11;
    // 0x8023A978: or          $t7, $t9, $a3
    ctx->r15 = ctx->r25 | ctx->r7;
    // 0x8023A97C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023A980: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023A984: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023A988: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023A98C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023A990: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023A994: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023A998: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023A99C: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023A9A0: sw          $fp, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r30;
    // 0x8023A9A4: lw          $t6, 0x1CC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023A9A8: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    // 0x8023A9AC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023A9B0: multu       $s4, $t6
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023A9B4: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023A9B8: mflo        $v0
    ctx->r2 = lo;
    // 0x8023A9BC: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8023A9C0: sra         $t8, $v0, 2
    ctx->r24 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8023A9C4: addiu       $v0, $t8, -0x1
    ctx->r2 = ADD32(ctx->r24, -0X1);
    // 0x8023A9C8: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023A9CC: beq         $at, $zero, L_8023A9DC
    if (ctx->r1 == 0) {
        // 0x8023A9D0: lui         $t8, 0xE700
        ctx->r24 = S32(0XE700 << 16);
            goto L_8023A9DC;
    }
    // 0x8023A9D0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8023A9D4: b           L_8023A9DC
    // 0x8023A9D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8023A9DC;
    // 0x8023A9D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023A9DC:
    // 0x8023A9DC: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x8023A9E0: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8023A9E4: or          $t6, $t7, $s5
    ctx->r14 = ctx->r15 | ctx->r21;
    // 0x8023A9E8: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x8023A9EC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023A9F0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023A9F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023A9F8: lw          $t9, 0x1F4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023A9FC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AA00: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AA04: lbu         $t7, 0x30($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X30);
    // 0x8023AA08: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AA0C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023AA10: andi        $t6, $t7, 0x7
    ctx->r14 = ctx->r15 & 0X7;
    // 0x8023AA14: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x8023AA18: sra         $t7, $s4, 1
    ctx->r15 = S32(SIGNED(ctx->r20) >> 1);
    // 0x8023AA1C: addiu       $t6, $t7, 0x7
    ctx->r14 = ADD32(ctx->r15, 0X7);
    // 0x8023AA20: or          $t9, $t8, $t3
    ctx->r25 = ctx->r24 | ctx->r11;
    // 0x8023AA24: sra         $t8, $t6, 3
    ctx->r24 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8023AA28: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x8023AA2C: sll         $t6, $t7, 9
    ctx->r14 = S32(ctx->r15 << 9);
    // 0x8023AA30: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8023AA34: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x8023AA38: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x8023AA3C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8023AA40: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8023AA44: addiu       $t6, $s4, -0x1
    ctx->r14 = ADD32(ctx->r20, -0X1);
    // 0x8023AA48: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8023AA4C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8023AA50: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8023AA54: lw          $t6, 0x1CC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AA58: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023AA5C: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8023AA60: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x8023AA64: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8023AA68: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8023AA6C: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8023AA70: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x8023AA74: b           L_8023AC38
    // 0x8023AA78: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023AC38;
    // 0x8023AA78: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023AA7C:
    // 0x8023AA7C: lw          $t7, 0x1F4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AA80: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023AA84: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AA88: lbu         $t9, 0x30($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X30);
    // 0x8023AA8C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AA90: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AA94: andi        $t6, $t9, 0x7
    ctx->r14 = ctx->r25 & 0X7;
    // 0x8023AA98: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x8023AA9C: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x8023AAA0: or          $t9, $t7, $a3
    ctx->r25 = ctx->r15 | ctx->r7;
    // 0x8023AAA4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023AAA8: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023AAAC: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023AAB0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AAB4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023AAB8: lw          $t8, 0x1F4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AABC: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023AAC0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023AAC4: lbu         $t7, 0x30($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X30);
    // 0x8023AAC8: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023AACC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AAD0: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023AAD4: sll         $t6, $t9, 21
    ctx->r14 = S32(ctx->r25 << 21);
    // 0x8023AAD8: or          $t8, $t6, $t3
    ctx->r24 = ctx->r14 | ctx->r11;
    // 0x8023AADC: or          $t7, $t8, $a3
    ctx->r15 = ctx->r24 | ctx->r7;
    // 0x8023AAE0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023AAE4: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023AAE8: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023AAEC: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8023AAF0: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023AAF4: sw          $fp, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r30;
    // 0x8023AAF8: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AAFC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AB00: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023AB04: multu       $s4, $t9
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023AB08: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023AB0C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023AB10: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8023AB14: sra         $t6, $v0, 2
    ctx->r14 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8023AB18: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x8023AB1C: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023AB20: beq         $at, $zero, L_8023AB30
    if (ctx->r1 == 0) {
        // 0x8023AB24: nop
    
            goto L_8023AB30;
    }
    // 0x8023AB24: nop

    // 0x8023AB28: b           L_8023AB30
    // 0x8023AB2C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023AB30;
    // 0x8023AB2C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023AB30:
    // 0x8023AB30: bgez        $s4, L_8023AB40
    if (SIGNED(ctx->r20) >= 0) {
        // 0x8023AB34: sra         $v0, $s4, 4
        ctx->r2 = S32(SIGNED(ctx->r20) >> 4);
            goto L_8023AB40;
    }
    // 0x8023AB34: sra         $v0, $s4, 4
    ctx->r2 = S32(SIGNED(ctx->r20) >> 4);
    // 0x8023AB38: addiu       $at, $s4, 0xF
    ctx->r1 = ADD32(ctx->r20, 0XF);
    // 0x8023AB3C: sra         $v0, $at, 4
    ctx->r2 = S32(SIGNED(ctx->r1) >> 4);
L_8023AB40:
    // 0x8023AB40: bgtz        $v0, L_8023AB50
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023AB44: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8023AB50;
    }
    // 0x8023AB44: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8023AB48: b           L_8023AB50
    // 0x8023AB4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023AB50;
    // 0x8023AB4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023AB50:
    // 0x8023AB50: bgtz        $v0, L_8023AB60
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023AB54: addiu       $t8, $a1, 0x7FF
        ctx->r24 = ADD32(ctx->r5, 0X7FF);
            goto L_8023AB60;
    }
    // 0x8023AB54: addiu       $t8, $a1, 0x7FF
    ctx->r24 = ADD32(ctx->r5, 0X7FF);
    // 0x8023AB58: b           L_8023AB64
    // 0x8023AB5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023AB64;
    // 0x8023AB5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023AB60:
    // 0x8023AB60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023AB64:
    // 0x8023AB64: div         $zero, $t8, $a0
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r4)));
    // 0x8023AB68: mflo        $t7
    ctx->r15 = lo;
    // 0x8023AB6C: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8023AB70: bne         $a0, $zero, L_8023AB7C
    if (ctx->r4 != 0) {
        // 0x8023AB74: nop
    
            goto L_8023AB7C;
    }
    // 0x8023AB74: nop

    // 0x8023AB78: break       7
    do_break(2149821304);
L_8023AB7C:
    // 0x8023AB7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023AB80: bne         $a0, $at, L_8023AB94
    if (ctx->r4 != ctx->r1) {
        // 0x8023AB84: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023AB94;
    }
    // 0x8023AB84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023AB88: bne         $t8, $at, L_8023AB94
    if (ctx->r24 != ctx->r1) {
        // 0x8023AB8C: nop
    
            goto L_8023AB94;
    }
    // 0x8023AB8C: nop

    // 0x8023AB90: break       6
    do_break(2149821328);
L_8023AB94:
    // 0x8023AB94: andi        $t8, $a2, 0xFFF
    ctx->r24 = ctx->r6 & 0XFFF;
    // 0x8023AB98: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x8023AB9C: or          $t6, $t9, $s5
    ctx->r14 = ctx->r25 | ctx->r21;
    // 0x8023ABA0: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8023ABA4: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x8023ABA8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023ABAC: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8023ABB0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023ABB4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023ABB8: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023ABBC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023ABC0: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023ABC4: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023ABC8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023ABCC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023ABD0: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023ABD4: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023ABD8: sra         $t7, $s4, 1
    ctx->r15 = S32(SIGNED(ctx->r20) >> 1);
    // 0x8023ABDC: addiu       $t9, $t7, 0x7
    ctx->r25 = ADD32(ctx->r15, 0X7);
    // 0x8023ABE0: or          $t6, $t8, $t3
    ctx->r14 = ctx->r24 | ctx->r11;
    // 0x8023ABE4: sra         $t8, $t9, 3
    ctx->r24 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8023ABE8: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x8023ABEC: sll         $t9, $t7, 9
    ctx->r25 = S32(ctx->r15 << 9);
    // 0x8023ABF0: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8023ABF4: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x8023ABF8: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x8023ABFC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8023AC00: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8023AC04: addiu       $t9, $s4, -0x1
    ctx->r25 = ADD32(ctx->r20, -0X1);
    // 0x8023AC08: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8023AC0C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023AC10: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8023AC14: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AC18: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023AC1C: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8023AC20: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8023AC24: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8023AC28: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8023AC2C: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8023AC30: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023AC34: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023AC38:
    // 0x8023AC38: lw          $t7, 0x1F8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023AC3C: b           L_8023BC90
    // 0x8023AC40: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
        goto L_8023BC90;
    // 0x8023AC40: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
L_8023AC44:
    // 0x8023AC44: lhu         $t9, 0x14($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X14);
    // 0x8023AC48: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023AC4C: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023AC50: andi        $t8, $t9, 0x200
    ctx->r24 = ctx->r25 & 0X200;
    // 0x8023AC54: beq         $t8, $zero, L_8023ADC0
    if (ctx->r24 == 0) {
        // 0x8023AC58: or          $t2, $s4, $zero
        ctx->r10 = ctx->r20 | 0;
            goto L_8023ADC0;
    }
    // 0x8023AC58: or          $t2, $s4, $zero
    ctx->r10 = ctx->r20 | 0;
    // 0x8023AC5C: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023AC60: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023AC64: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023AC68: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023AC6C: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023AC70: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8023AC74: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x8023AC78: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AC7C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023AC80: lw          $t9, 0x1F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023AC84: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AC88: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023AC8C: lw          $t8, 0x8($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X8);
    // 0x8023AC90: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AC94: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023AC98: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023AC9C: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023ACA0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023ACA4: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023ACA8: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023ACAC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023ACB0: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023ACB4: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023ACB8: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023ACBC: or          $t6, $t8, $t3
    ctx->r14 = ctx->r24 | ctx->r11;
    // 0x8023ACC0: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x8023ACC4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023ACC8: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023ACCC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023ACD0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023ACD4: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023ACD8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023ACDC: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023ACE0: sw          $fp, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r30;
    // 0x8023ACE4: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023ACE8: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    // 0x8023ACEC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023ACF0: multu       $s4, $t9
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023ACF4: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023ACF8: mflo        $v0
    ctx->r2 = lo;
    // 0x8023ACFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AD00: sra         $t8, $v0, 1
    ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023AD04: addiu       $v0, $t8, -0x1
    ctx->r2 = ADD32(ctx->r24, -0X1);
    // 0x8023AD08: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023AD0C: beq         $at, $zero, L_8023AD1C
    if (ctx->r1 == 0) {
        // 0x8023AD10: lui         $t8, 0xE700
        ctx->r24 = S32(0XE700 << 16);
            goto L_8023AD1C;
    }
    // 0x8023AD10: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8023AD14: b           L_8023AD1C
    // 0x8023AD18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8023AD1C;
    // 0x8023AD18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023AD1C:
    // 0x8023AD1C: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x8023AD20: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8023AD24: or          $t9, $t7, $s5
    ctx->r25 = ctx->r15 | ctx->r21;
    // 0x8023AD28: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8023AD2C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AD30: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023AD34: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023AD38: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AD3C: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8023AD40: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AD44: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023AD48: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AD4C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AD50: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023AD54: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023AD58: or          $t6, $t8, $t3
    ctx->r14 = ctx->r24 | ctx->r11;
    // 0x8023AD5C: addiu       $t9, $s4, 0x7
    ctx->r25 = ADD32(ctx->r20, 0X7);
    // 0x8023AD60: sra         $t8, $t9, 3
    ctx->r24 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8023AD64: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8023AD68: andi        $t6, $t8, 0x1FF
    ctx->r14 = ctx->r24 & 0X1FF;
    // 0x8023AD6C: sll         $t9, $t6, 9
    ctx->r25 = S32(ctx->r14 << 9);
    // 0x8023AD70: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8023AD74: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x8023AD78: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8023AD7C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8023AD80: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8023AD84: addiu       $t9, $s4, -0x1
    ctx->r25 = ADD32(ctx->r20, -0X1);
    // 0x8023AD88: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x8023AD8C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023AD90: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8023AD94: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8023AD98: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AD9C: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8023ADA0: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8023ADA4: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8023ADA8: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8023ADAC: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8023ADB0: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8023ADB4: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x8023ADB8: b           L_8023AF94
    // 0x8023ADBC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023AF94;
    // 0x8023ADBC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023ADC0:
    // 0x8023ADC0: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023ADC4: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023ADC8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023ADCC: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023ADD0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023ADD4: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023ADD8: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023ADDC: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023ADE0: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8023ADE4: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x8023ADE8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023ADEC: lw          $t9, 0x1F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023ADF0: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023ADF4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023ADF8: lw          $t8, 0x8($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X8);
    // 0x8023ADFC: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023AE00: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023AE04: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023AE08: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AE0C: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023AE10: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AE14: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023AE18: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023AE1C: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023AE20: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023AE24: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023AE28: or          $t6, $t8, $t3
    ctx->r14 = ctx->r24 | ctx->r11;
    // 0x8023AE2C: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x8023AE30: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023AE34: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023AE38: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023AE3C: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8023AE40: sw          $fp, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r30;
    // 0x8023AE44: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AE48: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AE4C: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023AE50: multu       $s4, $t9
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023AE54: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023AE58: mflo        $v0
    ctx->r2 = lo;
    // 0x8023AE5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AE60: sra         $t8, $v0, 1
    ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023AE64: addiu       $v0, $t8, -0x1
    ctx->r2 = ADD32(ctx->r24, -0X1);
    // 0x8023AE68: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023AE6C: beq         $at, $zero, L_8023AE7C
    if (ctx->r1 == 0) {
        // 0x8023AE70: nop
    
            goto L_8023AE7C;
    }
    // 0x8023AE70: nop

    // 0x8023AE74: b           L_8023AE7C
    // 0x8023AE78: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023AE7C;
    // 0x8023AE78: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023AE7C:
    // 0x8023AE7C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023AE80: bgez        $t2, L_8023AE90
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8023AE84: sra         $t6, $t2, 3
        ctx->r14 = S32(SIGNED(ctx->r10) >> 3);
            goto L_8023AE90;
    }
    // 0x8023AE84: sra         $t6, $t2, 3
    ctx->r14 = S32(SIGNED(ctx->r10) >> 3);
    // 0x8023AE88: addiu       $at, $t2, 0x7
    ctx->r1 = ADD32(ctx->r10, 0X7);
    // 0x8023AE8C: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8023AE90:
    // 0x8023AE90: bgtz        $t6, L_8023AEA0
    if (SIGNED(ctx->r14) > 0) {
        // 0x8023AE94: or          $t2, $t6, $zero
        ctx->r10 = ctx->r14 | 0;
            goto L_8023AEA0;
    }
    // 0x8023AE94: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x8023AE98: b           L_8023AEA4
    // 0x8023AE9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023AEA4;
    // 0x8023AE9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023AEA0:
    // 0x8023AEA0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_8023AEA4:
    // 0x8023AEA4: bgtz        $t2, L_8023AEB4
    if (SIGNED(ctx->r10) > 0) {
        // 0x8023AEA8: addiu       $t7, $a1, 0x7FF
        ctx->r15 = ADD32(ctx->r5, 0X7FF);
            goto L_8023AEB4;
    }
    // 0x8023AEA8: addiu       $t7, $a1, 0x7FF
    ctx->r15 = ADD32(ctx->r5, 0X7FF);
    // 0x8023AEAC: b           L_8023AEB8
    // 0x8023AEB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023AEB8;
    // 0x8023AEB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023AEB4:
    // 0x8023AEB4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
L_8023AEB8:
    // 0x8023AEB8: div         $zero, $t7, $a0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r4)));
    // 0x8023AEBC: mflo        $t9
    ctx->r25 = lo;
    // 0x8023AEC0: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8023AEC4: bne         $a0, $zero, L_8023AED0
    if (ctx->r4 != 0) {
        // 0x8023AEC8: nop
    
            goto L_8023AED0;
    }
    // 0x8023AEC8: nop

    // 0x8023AECC: break       7
    do_break(2149822156);
L_8023AED0:
    // 0x8023AED0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023AED4: bne         $a0, $at, L_8023AEE8
    if (ctx->r4 != ctx->r1) {
        // 0x8023AED8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023AEE8;
    }
    // 0x8023AED8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023AEDC: bne         $t7, $at, L_8023AEE8
    if (ctx->r15 != ctx->r1) {
        // 0x8023AEE0: nop
    
            goto L_8023AEE8;
    }
    // 0x8023AEE0: nop

    // 0x8023AEE4: break       6
    do_break(2149822180);
L_8023AEE8:
    // 0x8023AEE8: andi        $t7, $a2, 0xFFF
    ctx->r15 = ctx->r6 & 0XFFF;
    // 0x8023AEEC: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8023AEF0: or          $t6, $t8, $s5
    ctx->r14 = ctx->r24 | ctx->r21;
    // 0x8023AEF4: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8023AEF8: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x8023AEFC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AF00: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8023AF04: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023AF08: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023AF0C: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023AF10: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8023AF14: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AF18: lbu         $t9, 0x30($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X30);
    // 0x8023AF1C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AF20: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AF24: andi        $t8, $t9, 0x7
    ctx->r24 = ctx->r25 & 0X7;
    // 0x8023AF28: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8023AF2C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8023AF30: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x8023AF34: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8023AF38: addiu       $t7, $t8, 0x7
    ctx->r15 = ADD32(ctx->r24, 0X7);
    // 0x8023AF3C: sra         $t6, $t7, 3
    ctx->r14 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8023AF40: andi        $t8, $t6, 0x1FF
    ctx->r24 = ctx->r14 & 0X1FF;
    // 0x8023AF44: sll         $t7, $t8, 9
    ctx->r15 = S32(ctx->r24 << 9);
    // 0x8023AF48: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8023AF4C: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x8023AF50: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8023AF54: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023AF58: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8023AF5C: addiu       $t7, $s4, -0x1
    ctx->r15 = ADD32(ctx->r20, -0X1);
    // 0x8023AF60: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8023AF64: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AF68: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023AF6C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8023AF70: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023AF74: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8023AF78: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x8023AF7C: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8023AF80: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8023AF84: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023AF88: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8023AF8C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023AF90: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023AF94:
    // 0x8023AF94: lw          $t8, 0x1F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023AF98: b           L_8023BC90
    // 0x8023AF9C: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
        goto L_8023BC90;
    // 0x8023AF9C: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
L_8023AFA0:
    // 0x8023AFA0: lbu         $a0, 0x30($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X30);
    // 0x8023AFA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023AFA8: bnel        $a0, $at, L_8023B620
    if (ctx->r4 != ctx->r1) {
        // 0x8023AFAC: lhu         $t6, 0x14($a2)
        ctx->r14 = MEM_HU(ctx->r6, 0X14);
            goto L_8023B620;
    }
    goto skip_2;
    // 0x8023AFAC: lhu         $t6, 0x14($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X14);
    skip_2:
    // 0x8023AFB0: lhu         $t9, 0x14($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X14);
    // 0x8023AFB4: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023AFB8: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023AFBC: andi        $t7, $t9, 0x200
    ctx->r15 = ctx->r25 & 0X200;
    // 0x8023AFC0: beq         $t7, $zero, L_8023B114
    if (ctx->r15 == 0) {
        // 0x8023AFC4: lw          $a1, 0x1F8($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1F8);
            goto L_8023B114;
    }
    // 0x8023AFC4: lw          $a1, 0x1F8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023AFC8: andi        $t6, $a0, 0x7
    ctx->r14 = ctx->r4 & 0X7;
    // 0x8023AFCC: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x8023AFD0: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023AFD4: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8023AFD8: or          $t7, $t9, $a3
    ctx->r15 = ctx->r25 | ctx->r7;
    // 0x8023AFDC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023AFE0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023AFE4: lw          $t6, 0x1F8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023AFE8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023AFEC: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023AFF0: lw          $t8, 0x8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X8);
    // 0x8023AFF4: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023AFF8: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023AFFC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023B000: lbu         $t9, 0x30($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X30);
    // 0x8023B004: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B008: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B00C: andi        $t7, $t9, 0x7
    ctx->r15 = ctx->r25 & 0X7;
    // 0x8023B010: sll         $t6, $t7, 21
    ctx->r14 = S32(ctx->r15 << 21);
    // 0x8023B014: or          $t8, $t6, $t3
    ctx->r24 = ctx->r14 | ctx->r11;
    // 0x8023B018: or          $t9, $t8, $a3
    ctx->r25 = ctx->r24 | ctx->r7;
    // 0x8023B01C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B020: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8023B024: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B028: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B02C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023B030: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8023B034: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x8023B038: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B03C: sw          $fp, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r30;
    // 0x8023B040: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B044: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B048: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    // 0x8023B04C: multu       $s4, $t7
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B050: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8023B054: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023B058: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B05C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B060: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B064: beq         $at, $zero, L_8023B074
    if (ctx->r1 == 0) {
        // 0x8023B068: nop
    
            goto L_8023B074;
    }
    // 0x8023B068: nop

    // 0x8023B06C: b           L_8023B074
    // 0x8023B070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8023B074;
    // 0x8023B070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023B074:
    // 0x8023B074: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x8023B078: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8023B07C: or          $t9, $t8, $s5
    ctx->r25 = ctx->r24 | ctx->r21;
    // 0x8023B080: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8023B084: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B088: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023B08C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B090: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B094: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B098: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B09C: lbu         $t8, 0x30($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X30);
    // 0x8023B0A0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B0A4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B0A8: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8023B0AC: sll         $t7, $t9, 21
    ctx->r15 = S32(ctx->r25 << 21);
    // 0x8023B0B0: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x8023B0B4: addiu       $t9, $s4, 0x7
    ctx->r25 = ADD32(ctx->r20, 0X7);
    // 0x8023B0B8: sra         $t7, $t9, 3
    ctx->r15 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8023B0BC: or          $t8, $t6, $a3
    ctx->r24 = ctx->r14 | ctx->r7;
    // 0x8023B0C0: andi        $t6, $t7, 0x1FF
    ctx->r14 = ctx->r15 & 0X1FF;
    // 0x8023B0C4: sll         $t9, $t6, 9
    ctx->r25 = S32(ctx->r14 << 9);
    // 0x8023B0C8: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8023B0CC: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x8023B0D0: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8023B0D4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023B0D8: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8023B0DC: addiu       $t9, $s4, -0x1
    ctx->r25 = ADD32(ctx->r20, -0X1);
    // 0x8023B0E0: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x8023B0E4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8023B0E8: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8023B0EC: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B0F0: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8023B0F4: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8023B0F8: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8023B0FC: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8023B100: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8023B104: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8023B108: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8023B10C: b           L_8023B944
    // 0x8023B110: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023B944;
    // 0x8023B110: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023B114:
    // 0x8023B114: lh          $t6, 0xE($a1)
    ctx->r14 = MEM_H(ctx->r5, 0XE);
    // 0x8023B118: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023B11C: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023B120: beq         $t6, $zero, L_8023B460
    if (ctx->r14 == 0) {
        // 0x8023B124: lui         $s7, 0x708
        ctx->r23 = S32(0X708 << 16);
            goto L_8023B460;
    }
    // 0x8023B124: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B128: lui         $s6, 0xFD88
    ctx->r22 = S32(0XFD88 << 16);
    // 0x8023B12C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B130: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8023B134: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x8023B138: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B13C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B140: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B144: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B148: lui         $t9, 0xF588
    ctx->r25 = S32(0XF588 << 16);
    // 0x8023B14C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023B150: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B154: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x8023B158: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023B15C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8023B160: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B164: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023B168: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B16C: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023B170: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023B174: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8023B178: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B17C: sw          $fp, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r30;
    // 0x8023B180: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B184: sll         $t5, $s4, 2
    ctx->r13 = S32(ctx->r20 << 2);
    // 0x8023B188: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B18C: multu       $s4, $t7
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B190: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023B194: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023B198: subu        $t5, $t5, $s4
    ctx->r13 = SUB32(ctx->r13, ctx->r20);
    // 0x8023B19C: mflo        $v1
    ctx->r3 = lo;
    // 0x8023B1A0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023B1A4: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B1A8: beq         $at, $zero, L_8023B1B8
    if (ctx->r1 == 0) {
        // 0x8023B1AC: nop
    
            goto L_8023B1B8;
    }
    // 0x8023B1AC: nop

    // 0x8023B1B0: b           L_8023B1B8
    // 0x8023B1B4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023B1B8;
    // 0x8023B1B4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023B1B8:
    // 0x8023B1B8: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x8023B1BC: bgez        $v0, L_8023B1CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023B1C0: sra         $t2, $v0, 3
        ctx->r10 = S32(SIGNED(ctx->r2) >> 3);
            goto L_8023B1CC;
    }
    // 0x8023B1C0: sra         $t2, $v0, 3
    ctx->r10 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8023B1C4: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x8023B1C8: sra         $t2, $at, 3
    ctx->r10 = S32(SIGNED(ctx->r1) >> 3);
L_8023B1CC:
    // 0x8023B1CC: bgtz        $t2, L_8023B1DC
    if (SIGNED(ctx->r10) > 0) {
        // 0x8023B1D0: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_8023B1DC;
    }
    // 0x8023B1D0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023B1D4: b           L_8023B1E0
    // 0x8023B1D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023B1E0;
    // 0x8023B1D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023B1DC:
    // 0x8023B1DC: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_8023B1E0:
    // 0x8023B1E0: bgtz        $t2, L_8023B1F0
    if (SIGNED(ctx->r10) > 0) {
        // 0x8023B1E4: addiu       $t6, $a1, 0x7FF
        ctx->r14 = ADD32(ctx->r5, 0X7FF);
            goto L_8023B1F0;
    }
    // 0x8023B1E4: addiu       $t6, $a1, 0x7FF
    ctx->r14 = ADD32(ctx->r5, 0X7FF);
    // 0x8023B1E8: b           L_8023B1F4
    // 0x8023B1EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023B1F4;
    // 0x8023B1EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023B1F0:
    // 0x8023B1F0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
L_8023B1F4:
    // 0x8023B1F4: div         $zero, $t6, $a0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r4)));
    // 0x8023B1F8: mflo        $t8
    ctx->r24 = lo;
    // 0x8023B1FC: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8023B200: bne         $a0, $zero, L_8023B20C
    if (ctx->r4 != 0) {
        // 0x8023B204: nop
    
            goto L_8023B20C;
    }
    // 0x8023B204: nop

    // 0x8023B208: break       7
    do_break(2149822984);
L_8023B20C:
    // 0x8023B20C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B210: bne         $a0, $at, L_8023B224
    if (ctx->r4 != ctx->r1) {
        // 0x8023B214: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B224;
    }
    // 0x8023B214: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B218: bne         $t6, $at, L_8023B224
    if (ctx->r14 != ctx->r1) {
        // 0x8023B21C: nop
    
            goto L_8023B224;
    }
    // 0x8023B21C: nop

    // 0x8023B220: break       6
    do_break(2149823008);
L_8023B224:
    // 0x8023B224: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x8023B228: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8023B22C: or          $t7, $t9, $s5
    ctx->r15 = ctx->r25 | ctx->r21;
    // 0x8023B230: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x8023B234: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x8023B238: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B23C: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8023B240: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B244: lw          $t7, 0x1F8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B248: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B24C: bgez        $v1, L_8023B25C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023B250: sra         $t6, $v1, 1
        ctx->r14 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8023B25C;
    }
    // 0x8023B250: sra         $t6, $v1, 1
    ctx->r14 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8023B254: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x8023B258: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_8023B25C:
    // 0x8023B25C: lh          $t8, 0xE($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE);
    // 0x8023B260: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8023B264: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B268: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B26C: lw          $t6, 0x8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X8);
    // 0x8023B270: addiu       $t3, $t8, -0x2
    ctx->r11 = ADD32(ctx->r24, -0X2);
    // 0x8023B274: mflo        $t9
    ctx->r25 = lo;
    // 0x8023B278: addu        $s0, $t6, $t9
    ctx->r16 = ADD32(ctx->r14, ctx->r25);
    // 0x8023B27C: bgez        $t8, L_8023B28C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8023B280: sra         $t4, $t8, 1
        ctx->r12 = S32(SIGNED(ctx->r24) >> 1);
            goto L_8023B28C;
    }
    // 0x8023B280: sra         $t4, $t8, 1
    ctx->r12 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8023B284: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x8023B288: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_8023B28C:
    // 0x8023B28C: bltzl       $t4, L_8023B3D8
    if (SIGNED(ctx->r12) < 0) {
        // 0x8023B290: lw          $t9, 0x1F4($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1F4);
            goto L_8023B3D8;
    }
    goto skip_3;
    // 0x8023B290: lw          $t9, 0x1F4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F4);
    skip_3:
    // 0x8023B294: bgez        $s4, L_8023B2A4
    if (SIGNED(ctx->r20) >= 0) {
        // 0x8023B298: sra         $s1, $s4, 3
        ctx->r17 = S32(SIGNED(ctx->r20) >> 3);
            goto L_8023B2A4;
    }
    // 0x8023B298: sra         $s1, $s4, 3
    ctx->r17 = S32(SIGNED(ctx->r20) >> 3);
    // 0x8023B29C: addiu       $at, $s4, 0x7
    ctx->r1 = ADD32(ctx->r20, 0X7);
    // 0x8023B2A0: sra         $s1, $at, 3
    ctx->r17 = S32(SIGNED(ctx->r1) >> 3);
L_8023B2A4:
    // 0x8023B2A4: lui         $s3, 0xF588
    ctx->r19 = S32(0XF588 << 16);
L_8023B2A8:
    // 0x8023B2A8: subu        $t7, $t4, $t0
    ctx->r15 = SUB32(ctx->r12, ctx->r8);
    // 0x8023B2AC: addiu       $t6, $t7, -0x2
    ctx->r14 = ADD32(ctx->r15, -0X2);
    // 0x8023B2B0: multu       $t6, $s4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B2B4: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x8023B2B8: mflo        $t9
    ctx->r25 = lo;
    // 0x8023B2BC: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x8023B2C0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8023B2C4: multu       $s1, $t3
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B2C8: addiu       $t3, $t3, -0x2
    ctx->r11 = ADD32(ctx->r11, -0X2);
    // 0x8023B2CC: mflo        $v1
    ctx->r3 = lo;
    // 0x8023B2D0: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x8023B2D4: bgez        $v1, L_8023B2EC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023B2D8: negu        $v0, $v1
        ctx->r2 = SUB32(0, ctx->r3);
            goto L_8023B2EC;
    }
    // 0x8023B2D8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x8023B2DC: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x8023B2E0: addu        $a1, $a0, $t8
    ctx->r5 = ADD32(ctx->r4, ctx->r24);
    // 0x8023B2E4: subu        $a3, $t5, $t8
    ctx->r7 = SUB32(ctx->r13, ctx->r24);
    // 0x8023B2E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8023B2EC:
    // 0x8023B2EC: bne         $t0, $zero, L_8023B2F8
    if (ctx->r8 != 0) {
        // 0x8023B2F0: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_8023B2F8;
    }
    // 0x8023B2F0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B2F4: sll         $a3, $s4, 1
    ctx->r7 = S32(ctx->r20 << 1);
L_8023B2F8:
    // 0x8023B2F8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B2FC: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B300: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8023B304: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x8023B308: andi        $t7, $a2, 0x1FF
    ctx->r15 = ctx->r6 & 0X1FF;
    // 0x8023B30C: or          $t6, $t7, $s3
    ctx->r14 = ctx->r15 | ctx->r19;
    // 0x8023B310: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B314: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023B318: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B31C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023B320: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B324: addiu       $v0, $a3, -0x1
    ctx->r2 = ADD32(ctx->r7, -0X1);
    // 0x8023B328: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023B32C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023B330: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B334: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B338: sw          $fp, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r30;
    // 0x8023B33C: beq         $at, $zero, L_8023B34C
    if (ctx->r1 == 0) {
        // 0x8023B340: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_8023B34C;
    }
    // 0x8023B340: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B344: b           L_8023B350
    // 0x8023B348: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023B350;
    // 0x8023B348: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023B34C:
    // 0x8023B34C: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
L_8023B350:
    // 0x8023B350: bgtz        $t2, L_8023B360
    if (SIGNED(ctx->r10) > 0) {
        // 0x8023B354: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_8023B360;
    }
    // 0x8023B354: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B358: b           L_8023B364
    // 0x8023B35C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023B364;
    // 0x8023B35C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023B360:
    // 0x8023B360: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_8023B364:
    // 0x8023B364: bgtz        $t2, L_8023B374
    if (SIGNED(ctx->r10) > 0) {
        // 0x8023B368: addiu       $t9, $a1, 0x7FF
        ctx->r25 = ADD32(ctx->r5, 0X7FF);
            goto L_8023B374;
    }
    // 0x8023B368: addiu       $t9, $a1, 0x7FF
    ctx->r25 = ADD32(ctx->r5, 0X7FF);
    // 0x8023B36C: b           L_8023B378
    // 0x8023B370: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023B378;
    // 0x8023B370: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023B374:
    // 0x8023B374: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
L_8023B378:
    // 0x8023B378: div         $zero, $t9, $a0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r4)));
    // 0x8023B37C: bne         $a0, $zero, L_8023B388
    if (ctx->r4 != 0) {
        // 0x8023B380: nop
    
            goto L_8023B388;
    }
    // 0x8023B380: nop

    // 0x8023B384: break       7
    do_break(2149823364);
L_8023B388:
    // 0x8023B388: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B38C: bne         $a0, $at, L_8023B3A0
    if (ctx->r4 != ctx->r1) {
        // 0x8023B390: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B3A0;
    }
    // 0x8023B390: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B394: bne         $t9, $at, L_8023B3A0
    if (ctx->r25 != ctx->r1) {
        // 0x8023B398: nop
    
            goto L_8023B3A0;
    }
    // 0x8023B398: nop

    // 0x8023B39C: break       6
    do_break(2149823388);
L_8023B3A0:
    // 0x8023B3A0: mflo        $t8
    ctx->r24 = lo;
    // 0x8023B3A4: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023B3A8: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x8023B3AC: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x8023B3B0: or          $t6, $t7, $s5
    ctx->r14 = ctx->r15 | ctx->r21;
    // 0x8023B3B4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8023B3B8: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8023B3BC: slt         $at, $t4, $t0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8023B3C0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8023B3C4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B3C8: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x8023B3CC: beq         $at, $zero, L_8023B2A8
    if (ctx->r1 == 0) {
        // 0x8023B3D0: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_8023B2A8;
    }
    // 0x8023B3D0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B3D4: lw          $t9, 0x1F4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F4);
L_8023B3D8:
    // 0x8023B3D8: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B3DC: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023B3E0: lbu         $t6, 0x30($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X30);
    // 0x8023B3E4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B3E8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B3EC: andi        $t8, $t6, 0x7
    ctx->r24 = ctx->r14 & 0X7;
    // 0x8023B3F0: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8023B3F4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8023B3F8: or          $t9, $t7, $t3
    ctx->r25 = ctx->r15 | ctx->r11;
    // 0x8023B3FC: or          $t6, $t9, $a3
    ctx->r14 = ctx->r25 | ctx->r7;
    // 0x8023B400: addiu       $t7, $t8, 0x7
    ctx->r15 = ADD32(ctx->r24, 0X7);
    // 0x8023B404: sra         $t9, $t7, 3
    ctx->r25 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8023B408: andi        $t8, $t9, 0x1FF
    ctx->r24 = ctx->r25 & 0X1FF;
    // 0x8023B40C: sll         $t7, $t8, 9
    ctx->r15 = S32(ctx->r24 << 9);
    // 0x8023B410: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8023B414: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x8023B418: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8023B41C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023B420: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023B424: addiu       $t7, $s4, -0x1
    ctx->r15 = ADD32(ctx->r20, -0X1);
    // 0x8023B428: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8023B42C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B430: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023B434: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8023B438: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B43C: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8023B440: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x8023B444: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8023B448: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8023B44C: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023B450: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8023B454: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8023B458: b           L_8023B944
    // 0x8023B45C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023B944;
    // 0x8023B45C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023B460:
    // 0x8023B460: andi        $t8, $a0, 0x7
    ctx->r24 = ctx->r4 & 0X7;
    // 0x8023B464: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x8023B468: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023B46C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8023B470: or          $t9, $t7, $a3
    ctx->r25 = ctx->r15 | ctx->r7;
    // 0x8023B474: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B478: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023B47C: lw          $t8, 0x1F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B480: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B484: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B488: lw          $t6, 0x8($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X8);
    // 0x8023B48C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B490: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B494: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023B498: lw          $t7, 0x1F4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B49C: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B4A0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B4A4: lbu         $t9, 0x30($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X30);
    // 0x8023B4A8: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B4AC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B4B0: andi        $t8, $t9, 0x7
    ctx->r24 = ctx->r25 & 0X7;
    // 0x8023B4B4: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x8023B4B8: or          $t7, $t6, $t3
    ctx->r15 = ctx->r14 | ctx->r11;
    // 0x8023B4BC: or          $t9, $t7, $a3
    ctx->r25 = ctx->r15 | ctx->r7;
    // 0x8023B4C0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8023B4C4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8023B4C8: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x8023B4CC: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8023B4D0: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B4D4: sw          $fp, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r30;
    // 0x8023B4D8: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B4DC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B4E0: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023B4E4: multu       $s4, $t8
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B4E8: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023B4EC: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B4F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B4F4: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B4F8: beq         $at, $zero, L_8023B508
    if (ctx->r1 == 0) {
        // 0x8023B4FC: nop
    
            goto L_8023B508;
    }
    // 0x8023B4FC: nop

    // 0x8023B500: b           L_8023B508
    // 0x8023B504: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023B508;
    // 0x8023B504: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023B508:
    // 0x8023B508: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x8023B50C: bgez        $v0, L_8023B51C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023B510: sra         $t6, $v0, 3
        ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
            goto L_8023B51C;
    }
    // 0x8023B510: sra         $t6, $v0, 3
    ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8023B514: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x8023B518: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8023B51C:
    // 0x8023B51C: bgtz        $t6, L_8023B52C
    if (SIGNED(ctx->r14) > 0) {
        // 0x8023B520: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8023B52C;
    }
    // 0x8023B520: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8023B524: b           L_8023B530
    // 0x8023B528: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023B530;
    // 0x8023B528: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023B52C:
    // 0x8023B52C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8023B530:
    // 0x8023B530: bgtz        $v0, L_8023B540
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023B534: addiu       $t7, $a1, 0x7FF
        ctx->r15 = ADD32(ctx->r5, 0X7FF);
            goto L_8023B540;
    }
    // 0x8023B534: addiu       $t7, $a1, 0x7FF
    ctx->r15 = ADD32(ctx->r5, 0X7FF);
    // 0x8023B538: b           L_8023B544
    // 0x8023B53C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023B544;
    // 0x8023B53C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023B540:
    // 0x8023B540: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023B544:
    // 0x8023B544: div         $zero, $t7, $a0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r4)));
    // 0x8023B548: mflo        $t9
    ctx->r25 = lo;
    // 0x8023B54C: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8023B550: bne         $a0, $zero, L_8023B55C
    if (ctx->r4 != 0) {
        // 0x8023B554: nop
    
            goto L_8023B55C;
    }
    // 0x8023B554: nop

    // 0x8023B558: break       7
    do_break(2149823832);
L_8023B55C:
    // 0x8023B55C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B560: bne         $a0, $at, L_8023B574
    if (ctx->r4 != ctx->r1) {
        // 0x8023B564: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B574;
    }
    // 0x8023B564: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B568: bne         $t7, $at, L_8023B574
    if (ctx->r15 != ctx->r1) {
        // 0x8023B56C: nop
    
            goto L_8023B574;
    }
    // 0x8023B56C: nop

    // 0x8023B570: break       6
    do_break(2149823856);
L_8023B574:
    // 0x8023B574: andi        $t7, $a2, 0xFFF
    ctx->r15 = ctx->r6 & 0XFFF;
    // 0x8023B578: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8023B57C: or          $t6, $t8, $s5
    ctx->r14 = ctx->r24 | ctx->r21;
    // 0x8023B580: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8023B584: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8023B588: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B58C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8023B590: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023B594: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B598: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B59C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B5A0: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B5A4: lbu         $t9, 0x30($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X30);
    // 0x8023B5A8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B5AC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B5B0: andi        $t8, $t9, 0x7
    ctx->r24 = ctx->r25 & 0X7;
    // 0x8023B5B4: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8023B5B8: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x8023B5BC: addiu       $t8, $s4, 0x7
    ctx->r24 = ADD32(ctx->r20, 0X7);
    // 0x8023B5C0: sra         $t7, $t8, 3
    ctx->r15 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8023B5C4: or          $t9, $t6, $a3
    ctx->r25 = ctx->r14 | ctx->r7;
    // 0x8023B5C8: andi        $t6, $t7, 0x1FF
    ctx->r14 = ctx->r15 & 0X1FF;
    // 0x8023B5CC: sll         $t8, $t6, 9
    ctx->r24 = S32(ctx->r14 << 9);
    // 0x8023B5D0: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8023B5D4: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x8023B5D8: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x8023B5DC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023B5E0: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8023B5E4: addiu       $t8, $s4, -0x1
    ctx->r24 = ADD32(ctx->r20, -0X1);
    // 0x8023B5E8: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8023B5EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023B5F0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8023B5F4: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B5F8: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8023B5FC: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8023B600: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8023B604: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8023B608: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8023B60C: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8023B610: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8023B614: b           L_8023B944
    // 0x8023B618: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023B944;
    // 0x8023B618: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B61C: lhu         $t6, 0x14($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X14);
L_8023B620:
    // 0x8023B620: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023B624: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B628: andi        $t9, $t6, 0x200
    ctx->r25 = ctx->r14 & 0X200;
    // 0x8023B62C: beq         $t9, $zero, L_8023B790
    if (ctx->r25 == 0) {
        // 0x8023B630: lui         $s2, 0xE600
        ctx->r18 = S32(0XE600 << 16);
            goto L_8023B790;
    }
    // 0x8023B630: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023B634: andi        $t8, $a0, 0x7
    ctx->r24 = ctx->r4 & 0X7;
    // 0x8023B638: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8023B63C: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023B640: lui         $a3, 0x10
    ctx->r7 = S32(0X10 << 16);
    // 0x8023B644: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x8023B648: or          $t9, $t6, $a3
    ctx->r25 = ctx->r14 | ctx->r7;
    // 0x8023B64C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B650: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023B654: lw          $t8, 0x1F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B658: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B65C: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B660: lw          $t7, 0x8($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X8);
    // 0x8023B664: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B668: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B66C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8023B670: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B674: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B678: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B67C: lbu         $t9, 0x30($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X30);
    // 0x8023B680: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B684: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B688: andi        $t8, $t9, 0x7
    ctx->r24 = ctx->r25 & 0X7;
    // 0x8023B68C: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8023B690: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x8023B694: or          $t9, $t6, $a3
    ctx->r25 = ctx->r14 | ctx->r7;
    // 0x8023B698: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8023B69C: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023B6A0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B6A4: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023B6A8: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x8023B6AC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8023B6B0: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B6B4: sw          $fp, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r30;
    // 0x8023B6B8: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B6BC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B6C0: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    // 0x8023B6C4: multu       $s4, $t8
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B6C8: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8023B6CC: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023B6D0: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B6D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B6D8: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B6DC: beq         $at, $zero, L_8023B6EC
    if (ctx->r1 == 0) {
        // 0x8023B6E0: nop
    
            goto L_8023B6EC;
    }
    // 0x8023B6E0: nop

    // 0x8023B6E4: b           L_8023B6EC
    // 0x8023B6E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8023B6EC;
    // 0x8023B6E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023B6EC:
    // 0x8023B6EC: andi        $t7, $a0, 0xFFF
    ctx->r15 = ctx->r4 & 0XFFF;
    // 0x8023B6F0: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8023B6F4: or          $t9, $t6, $s5
    ctx->r25 = ctx->r14 | ctx->r21;
    // 0x8023B6F8: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8023B6FC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B700: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023B704: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B708: lw          $t7, 0x1F4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B70C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B710: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B714: lbu         $t6, 0x30($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X30);
    // 0x8023B718: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B71C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B720: andi        $t9, $t6, 0x7
    ctx->r25 = ctx->r14 & 0X7;
    // 0x8023B724: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8023B728: or          $t7, $t8, $t3
    ctx->r15 = ctx->r24 | ctx->r11;
    // 0x8023B72C: sll         $t9, $s4, 1
    ctx->r25 = S32(ctx->r20 << 1);
    // 0x8023B730: addiu       $t8, $t9, 0x7
    ctx->r24 = ADD32(ctx->r25, 0X7);
    // 0x8023B734: or          $t6, $t7, $a3
    ctx->r14 = ctx->r15 | ctx->r7;
    // 0x8023B738: sra         $t7, $t8, 3
    ctx->r15 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8023B73C: andi        $t9, $t7, 0x1FF
    ctx->r25 = ctx->r15 & 0X1FF;
    // 0x8023B740: sll         $t8, $t9, 9
    ctx->r24 = S32(ctx->r25 << 9);
    // 0x8023B744: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8023B748: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x8023B74C: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x8023B750: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023B754: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8023B758: addiu       $t8, $s4, -0x1
    ctx->r24 = ADD32(ctx->r20, -0X1);
    // 0x8023B75C: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8023B760: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8023B764: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8023B768: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B76C: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8023B770: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x8023B774: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8023B778: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8023B77C: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8023B780: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8023B784: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8023B788: b           L_8023B944
    // 0x8023B78C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023B944;
    // 0x8023B78C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023B790:
    // 0x8023B790: andi        $t9, $a0, 0x7
    ctx->r25 = ctx->r4 & 0X7;
    // 0x8023B794: sll         $t6, $t9, 21
    ctx->r14 = S32(ctx->r25 << 21);
    // 0x8023B798: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023B79C: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8023B7A0: or          $t7, $t8, $a3
    ctx->r15 = ctx->r24 | ctx->r7;
    // 0x8023B7A4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B7A8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023B7AC: lw          $t9, 0x1F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B7B0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B7B4: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B7B8: lw          $t6, 0x8($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X8);
    // 0x8023B7BC: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B7C0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B7C4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023B7C8: lw          $t8, 0x1F4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B7CC: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B7D0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B7D4: lbu         $t7, 0x30($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X30);
    // 0x8023B7D8: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B7DC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B7E0: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8023B7E4: sll         $t6, $t9, 21
    ctx->r14 = S32(ctx->r25 << 21);
    // 0x8023B7E8: or          $t8, $t6, $t3
    ctx->r24 = ctx->r14 | ctx->r11;
    // 0x8023B7EC: or          $t7, $t8, $a3
    ctx->r15 = ctx->r24 | ctx->r7;
    // 0x8023B7F0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023B7F4: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8023B7F8: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x8023B7FC: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
    // 0x8023B800: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B804: sw          $fp, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r30;
    // 0x8023B808: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B80C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B810: sll         $t0, $s4, 1
    ctx->r8 = S32(ctx->r20 << 1);
    // 0x8023B814: multu       $s4, $t9
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B818: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023B81C: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023B820: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B824: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B828: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023B82C: beq         $at, $zero, L_8023B83C
    if (ctx->r1 == 0) {
        // 0x8023B830: nop
    
            goto L_8023B83C;
    }
    // 0x8023B830: nop

    // 0x8023B834: b           L_8023B83C
    // 0x8023B838: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023B83C;
    // 0x8023B838: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023B83C:
    // 0x8023B83C: bgez        $t0, L_8023B84C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8023B840: sra         $v0, $t0, 3
        ctx->r2 = S32(SIGNED(ctx->r8) >> 3);
            goto L_8023B84C;
    }
    // 0x8023B840: sra         $v0, $t0, 3
    ctx->r2 = S32(SIGNED(ctx->r8) >> 3);
    // 0x8023B844: addiu       $at, $t0, 0x7
    ctx->r1 = ADD32(ctx->r8, 0X7);
    // 0x8023B848: sra         $v0, $at, 3
    ctx->r2 = S32(SIGNED(ctx->r1) >> 3);
L_8023B84C:
    // 0x8023B84C: bgtz        $v0, L_8023B85C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023B850: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8023B85C;
    }
    // 0x8023B850: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8023B854: b           L_8023B85C
    // 0x8023B858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023B85C;
    // 0x8023B858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023B85C:
    // 0x8023B85C: bgtz        $v0, L_8023B86C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023B860: addiu       $t6, $a1, 0x7FF
        ctx->r14 = ADD32(ctx->r5, 0X7FF);
            goto L_8023B86C;
    }
    // 0x8023B860: addiu       $t6, $a1, 0x7FF
    ctx->r14 = ADD32(ctx->r5, 0X7FF);
    // 0x8023B864: b           L_8023B870
    // 0x8023B868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023B870;
    // 0x8023B868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023B86C:
    // 0x8023B86C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023B870:
    // 0x8023B870: div         $zero, $t6, $a0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r4)));
    // 0x8023B874: mflo        $t8
    ctx->r24 = lo;
    // 0x8023B878: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023B87C: bne         $a0, $zero, L_8023B888
    if (ctx->r4 != 0) {
        // 0x8023B880: nop
    
            goto L_8023B888;
    }
    // 0x8023B880: nop

    // 0x8023B884: break       7
    do_break(2149824644);
L_8023B888:
    // 0x8023B888: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B88C: bne         $a0, $at, L_8023B8A0
    if (ctx->r4 != ctx->r1) {
        // 0x8023B890: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B8A0;
    }
    // 0x8023B890: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B894: bne         $t6, $at, L_8023B8A0
    if (ctx->r14 != ctx->r1) {
        // 0x8023B898: nop
    
            goto L_8023B8A0;
    }
    // 0x8023B898: nop

    // 0x8023B89C: break       6
    do_break(2149824668);
L_8023B8A0:
    // 0x8023B8A0: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x8023B8A4: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8023B8A8: or          $t9, $t7, $s5
    ctx->r25 = ctx->r15 | ctx->r21;
    // 0x8023B8AC: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8023B8B0: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x8023B8B4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B8B8: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8023B8BC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023B8C0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023B8C4: lw          $t9, 0x1F4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B8C8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B8CC: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B8D0: lbu         $t8, 0x30($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X30);
    // 0x8023B8D4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B8D8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B8DC: andi        $t7, $t8, 0x7
    ctx->r15 = ctx->r24 & 0X7;
    // 0x8023B8E0: sll         $t6, $t7, 21
    ctx->r14 = S32(ctx->r15 << 21);
    // 0x8023B8E4: or          $t9, $t6, $t3
    ctx->r25 = ctx->r14 | ctx->r11;
    // 0x8023B8E8: addiu       $t7, $t0, 0x7
    ctx->r15 = ADD32(ctx->r8, 0X7);
    // 0x8023B8EC: sra         $t6, $t7, 3
    ctx->r14 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8023B8F0: or          $t8, $t9, $a3
    ctx->r24 = ctx->r25 | ctx->r7;
    // 0x8023B8F4: andi        $t9, $t6, 0x1FF
    ctx->r25 = ctx->r14 & 0X1FF;
    // 0x8023B8F8: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x8023B8FC: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8023B900: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x8023B904: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x8023B908: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023B90C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8023B910: addiu       $t7, $s4, -0x1
    ctx->r15 = ADD32(ctx->r20, -0X1);
    // 0x8023B914: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x8023B918: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023B91C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8023B920: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B924: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8023B928: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x8023B92C: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8023B930: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8023B934: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x8023B938: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8023B93C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023B940: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023B944:
    // 0x8023B944: lw          $t9, 0x1F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B948: b           L_8023BC90
    // 0x8023B94C: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
        goto L_8023BC90;
    // 0x8023B94C: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
L_8023B950:
    // 0x8023B950: lhu         $t7, 0x14($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X14);
    // 0x8023B954: lw          $a1, 0x1F4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023B958: lui         $a3, 0x18
    ctx->r7 = S32(0X18 << 16);
    // 0x8023B95C: andi        $t6, $t7, 0x200
    ctx->r14 = ctx->r15 & 0X200;
    // 0x8023B960: beq         $t6, $zero, L_8023BAC8
    if (ctx->r14 == 0) {
        // 0x8023B964: lui         $t3, 0xF500
        ctx->r11 = S32(0XF500 << 16);
            goto L_8023BAC8;
    }
    // 0x8023B964: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B968: lbu         $t9, 0x30($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X30);
    // 0x8023B96C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8023B970: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023B974: andi        $t7, $t9, 0x7
    ctx->r15 = ctx->r25 & 0X7;
    // 0x8023B978: sll         $t6, $t7, 21
    ctx->r14 = S32(ctx->r15 << 21);
    // 0x8023B97C: lui         $a3, 0x18
    ctx->r7 = S32(0X18 << 16);
    // 0x8023B980: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8023B984: or          $t9, $t8, $a3
    ctx->r25 = ctx->r24 | ctx->r7;
    // 0x8023B988: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023B98C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023B990: lw          $t7, 0x1F8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023B994: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B998: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8023B99C: lw          $t6, 0x8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X8);
    // 0x8023B9A0: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023B9A4: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023B9A8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023B9AC: lbu         $t8, 0x30($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X30);
    // 0x8023B9B0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B9B4: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023B9B8: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8023B9BC: sll         $t7, $t9, 21
    ctx->r15 = S32(ctx->r25 << 21);
    // 0x8023B9C0: or          $t6, $t7, $t3
    ctx->r14 = ctx->r15 | ctx->r11;
    // 0x8023B9C4: or          $t8, $t6, $a3
    ctx->r24 = ctx->r14 | ctx->r7;
    // 0x8023B9C8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023B9CC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8023B9D0: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023B9D4: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023B9D8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B9DC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8023B9E0: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023B9E4: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023B9E8: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023B9EC: sw          $fp, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r30;
    // 0x8023B9F0: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023B9F4: addiu       $a0, $zero, 0x7FF
    ctx->r4 = ADD32(0, 0X7FF);
    // 0x8023B9F8: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023B9FC: multu       $s4, $t9
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023BA00: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8023BA04: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023BA08: mflo        $v0
    ctx->r2 = lo;
    // 0x8023BA0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023BA10: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023BA14: beq         $at, $zero, L_8023BA24
    if (ctx->r1 == 0) {
        // 0x8023BA18: nop
    
            goto L_8023BA24;
    }
    // 0x8023BA18: nop

    // 0x8023BA1C: b           L_8023BA24
    // 0x8023BA20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8023BA24;
    // 0x8023BA20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023BA24:
    // 0x8023BA24: andi        $t7, $a0, 0xFFF
    ctx->r15 = ctx->r4 & 0XFFF;
    // 0x8023BA28: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8023BA2C: or          $t8, $t6, $s5
    ctx->r24 = ctx->r14 | ctx->r21;
    // 0x8023BA30: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x8023BA34: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023BA38: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023BA3C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023BA40: lw          $t7, 0x1F4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023BA44: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BA48: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023BA4C: lbu         $t6, 0x30($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X30);
    // 0x8023BA50: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BA54: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023BA58: andi        $t8, $t6, 0x7
    ctx->r24 = ctx->r14 & 0X7;
    // 0x8023BA5C: sll         $t9, $t8, 21
    ctx->r25 = S32(ctx->r24 << 21);
    // 0x8023BA60: or          $t7, $t9, $t3
    ctx->r15 = ctx->r25 | ctx->r11;
    // 0x8023BA64: sll         $t8, $s4, 1
    ctx->r24 = S32(ctx->r20 << 1);
    // 0x8023BA68: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x8023BA6C: or          $t6, $t7, $a3
    ctx->r14 = ctx->r15 | ctx->r7;
    // 0x8023BA70: sra         $t7, $t9, 3
    ctx->r15 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8023BA74: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x8023BA78: sll         $t9, $t8, 9
    ctx->r25 = S32(ctx->r24 << 9);
    // 0x8023BA7C: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8023BA80: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x8023BA84: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8023BA88: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023BA8C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8023BA90: addiu       $t9, $s4, -0x1
    ctx->r25 = ADD32(ctx->r20, -0X1);
    // 0x8023BA94: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8023BA98: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8023BA9C: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8023BAA0: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023BAA4: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8023BAA8: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x8023BAAC: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8023BAB0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8023BAB4: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8023BAB8: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8023BABC: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x8023BAC0: b           L_8023BC88
    // 0x8023BAC4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_8023BC88;
    // 0x8023BAC4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023BAC8:
    // 0x8023BAC8: lbu         $t8, 0x30($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X30);
    // 0x8023BACC: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8023BAD0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023BAD4: andi        $t6, $t8, 0x7
    ctx->r14 = ctx->r24 & 0X7;
    // 0x8023BAD8: sll         $t9, $t6, 21
    ctx->r25 = S32(ctx->r14 << 21);
    // 0x8023BADC: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8023BAE0: or          $t8, $t7, $a3
    ctx->r24 = ctx->r15 | ctx->r7;
    // 0x8023BAE4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023BAE8: lw          $t6, 0x1F8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023BAEC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BAF0: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023BAF4: lw          $t9, 0x8($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X8);
    // 0x8023BAF8: lui         $s7, 0x708
    ctx->r23 = S32(0X708 << 16);
    // 0x8023BAFC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BB00: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8023BB04: lbu         $t7, 0x30($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X30);
    // 0x8023BB08: ori         $s7, $s7, 0x200
    ctx->r23 = ctx->r23 | 0X200;
    // 0x8023BB0C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023BB10: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x8023BB14: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x8023BB18: or          $t9, $t6, $t3
    ctx->r25 = ctx->r14 | ctx->r11;
    // 0x8023BB1C: or          $t7, $t9, $a3
    ctx->r15 = ctx->r25 | ctx->r7;
    // 0x8023BB20: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8023BB24: sw          $s7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r23;
    // 0x8023BB28: lui         $s2, 0xE600
    ctx->r18 = S32(0XE600 << 16);
    // 0x8023BB2C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BB30: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8023BB34: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x8023BB38: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8023BB3C: lui         $fp, 0xF300
    ctx->r30 = S32(0XF300 << 16);
    // 0x8023BB40: sw          $fp, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r30;
    // 0x8023BB44: lw          $t8, 0x1CC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023BB48: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BB4C: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
    // 0x8023BB50: multu       $s4, $t8
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023BB54: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8023BB58: mflo        $v0
    ctx->r2 = lo;
    // 0x8023BB5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023BB60: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x8023BB64: beq         $at, $zero, L_8023BB74
    if (ctx->r1 == 0) {
        // 0x8023BB68: nop
    
            goto L_8023BB74;
    }
    // 0x8023BB68: nop

    // 0x8023BB6C: b           L_8023BB74
    // 0x8023BB70: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_8023BB74;
    // 0x8023BB70: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_8023BB74:
    // 0x8023BB74: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x8023BB78: bgez        $v0, L_8023BB88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023BB7C: sra         $t6, $v0, 3
        ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
            goto L_8023BB88;
    }
    // 0x8023BB7C: sra         $t6, $v0, 3
    ctx->r14 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8023BB80: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x8023BB84: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8023BB88:
    // 0x8023BB88: bgtz        $t6, L_8023BB98
    if (SIGNED(ctx->r14) > 0) {
        // 0x8023BB8C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8023BB98;
    }
    // 0x8023BB8C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8023BB90: b           L_8023BB9C
    // 0x8023BB94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8023BB9C;
    // 0x8023BB94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023BB98:
    // 0x8023BB98: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8023BB9C:
    // 0x8023BB9C: bgtz        $v0, L_8023BBAC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023BBA0: addiu       $t9, $a1, 0x7FF
        ctx->r25 = ADD32(ctx->r5, 0X7FF);
            goto L_8023BBAC;
    }
    // 0x8023BBA0: addiu       $t9, $a1, 0x7FF
    ctx->r25 = ADD32(ctx->r5, 0X7FF);
    // 0x8023BBA4: b           L_8023BBB0
    // 0x8023BBA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8023BBB0;
    // 0x8023BBA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023BBAC:
    // 0x8023BBAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8023BBB0:
    // 0x8023BBB0: div         $zero, $t9, $a0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r4)));
    // 0x8023BBB4: mflo        $t7
    ctx->r15 = lo;
    // 0x8023BBB8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8023BBBC: bne         $a0, $zero, L_8023BBC8
    if (ctx->r4 != 0) {
        // 0x8023BBC0: nop
    
            goto L_8023BBC8;
    }
    // 0x8023BBC0: nop

    // 0x8023BBC4: break       7
    do_break(2149825476);
L_8023BBC8:
    // 0x8023BBC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023BBCC: bne         $a0, $at, L_8023BBE0
    if (ctx->r4 != ctx->r1) {
        // 0x8023BBD0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023BBE0;
    }
    // 0x8023BBD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023BBD4: bne         $t9, $at, L_8023BBE0
    if (ctx->r25 != ctx->r1) {
        // 0x8023BBD8: nop
    
            goto L_8023BBE0;
    }
    // 0x8023BBD8: nop

    // 0x8023BBDC: break       6
    do_break(2149825500);
L_8023BBE0:
    // 0x8023BBE0: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x8023BBE4: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8023BBE8: or          $t6, $t8, $s5
    ctx->r14 = ctx->r24 | ctx->r21;
    // 0x8023BBEC: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8023BBF0: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8023BBF4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023BBF8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8023BBFC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8023BC00: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023BC04: lw          $t6, 0x1F4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023BC08: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BC0C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x8023BC10: lbu         $t7, 0x30($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X30);
    // 0x8023BC14: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8023BC18: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8023BC1C: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x8023BC20: sll         $t9, $t8, 21
    ctx->r25 = S32(ctx->r24 << 21);
    // 0x8023BC24: or          $t6, $t9, $t3
    ctx->r14 = ctx->r25 | ctx->r11;
    // 0x8023BC28: sll         $t8, $s4, 1
    ctx->r24 = S32(ctx->r20 << 1);
    // 0x8023BC2C: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x8023BC30: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x8023BC34: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8023BC38: andi        $t8, $t6, 0x1FF
    ctx->r24 = ctx->r14 & 0X1FF;
    // 0x8023BC3C: sll         $t9, $t8, 9
    ctx->r25 = S32(ctx->r24 << 9);
    // 0x8023BC40: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x8023BC44: lui         $t8, 0x8
    ctx->r24 = S32(0X8 << 16);
    // 0x8023BC48: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x8023BC4C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023BC50: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8023BC54: addiu       $t9, $s4, -0x1
    ctx->r25 = ADD32(ctx->r20, -0X1);
    // 0x8023BC58: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x8023BC5C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023BC60: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8023BC64: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x8023BC68: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8023BC6C: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x8023BC70: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8023BC74: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8023BC78: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8023BC7C: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x8023BC80: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023BC84: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_8023BC88:
    // 0x8023BC88: lw          $t8, 0x1F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1F8);
    // 0x8023BC8C: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
L_8023BC90:
    // 0x8023BC90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023BC94: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8023BC98: addiu       $v0, $sp, 0x1BC
    ctx->r2 = ADD32(ctx->r29, 0X1BC);
L_8023BC9C:
    // 0x8023BC9C: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x8023BCA0: addiu       $t7, $zero, 0xE4
    ctx->r15 = ADD32(0, 0XE4);
    // 0x8023BCA4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8023BCA8: andi        $t6, $t9, 0xFFF8
    ctx->r14 = ctx->r25 & 0XFFF8;
    // 0x8023BCAC: sb          $t6, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r14;
    // 0x8023BCB0: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8023BCB4: lw          $t7, 0x1E4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1E4);
    // 0x8023BCB8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8023BCBC: srl         $t9, $v1, 12
    ctx->r25 = S32(U32(ctx->r3) >> 12);
    // 0x8023BCC0: xor         $t6, $t7, $t9
    ctx->r14 = ctx->r15 ^ ctx->r25;
    // 0x8023BCC4: sll         $t8, $t6, 20
    ctx->r24 = S32(ctx->r14 << 20);
    // 0x8023BCC8: srl         $t7, $t8, 8
    ctx->r15 = S32(U32(ctx->r24) >> 8);
    // 0x8023BCCC: xor         $t9, $t7, $v1
    ctx->r25 = ctx->r15 ^ ctx->r3;
    // 0x8023BCD0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8023BCD4: lw          $t8, 0x1DC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1DC);
    // 0x8023BCD8: srl         $t7, $a0, 12
    ctx->r15 = S32(U32(ctx->r4) >> 12);
    // 0x8023BCDC: addiu       $a1, $t1, 0x8
    ctx->r5 = ADD32(ctx->r9, 0X8);
    // 0x8023BCE0: xor         $t9, $t8, $t7
    ctx->r25 = ctx->r24 ^ ctx->r15;
    // 0x8023BCE4: sll         $t6, $t9, 20
    ctx->r14 = S32(ctx->r25 << 20);
    // 0x8023BCE8: srl         $t8, $t6, 8
    ctx->r24 = S32(U32(ctx->r14) >> 8);
    // 0x8023BCEC: xor         $t7, $t8, $a0
    ctx->r15 = ctx->r24 ^ ctx->r4;
    // 0x8023BCF0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023BCF4: lw          $t6, 0x1E0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1E0);
    // 0x8023BCF8: lhu         $t7, 0x6($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6);
    // 0x8023BCFC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8023BD00: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8023BD04: andi        $t9, $t7, 0xF000
    ctx->r25 = ctx->r15 & 0XF000;
    // 0x8023BD08: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8023BD0C: sh          $t6, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r14;
    // 0x8023BD10: lw          $t8, 0x1D8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D8);
    // 0x8023BD14: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x8023BD18: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x8023BD1C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8023BD20: andi        $t7, $t6, 0xF000
    ctx->r15 = ctx->r14 & 0XF000;
    // 0x8023BD24: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8023BD28: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x8023BD2C: lw          $t6, 0x1EC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1EC);
    // 0x8023BD30: lw          $t9, 0x1E8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1E8);
    // 0x8023BD34: lw          $v1, 0x1F4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1F4);
    // 0x8023BD38: sh          $t6, 0x1C4($sp)
    MEM_H(0X1C4, ctx->r29) = ctx->r14;
    // 0x8023BD3C: sh          $t9, 0x1C6($sp)
    MEM_H(0X1C6, ctx->r29) = ctx->r25;
    // 0x8023BD40: lhu         $t7, 0x14($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X14);
    // 0x8023BD44: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x8023BD48: beql        $t8, $zero, L_8023BD70
    if (ctx->r24 == 0) {
        // 0x8023BD4C: lw          $t8, 0x214($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X214);
            goto L_8023BD70;
    }
    goto skip_4;
    // 0x8023BD4C: lw          $t8, 0x214($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X214);
    skip_4:
    // 0x8023BD50: lbu         $t6, 0x30($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X30);
    // 0x8023BD54: lw          $t9, 0x214($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X214);
    // 0x8023BD58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023BD5C: beq         $t6, $at, L_8023BD6C
    if (ctx->r14 == ctx->r1) {
        // 0x8023BD60: sll         $t7, $t9, 2
        ctx->r15 = S32(ctx->r25 << 2);
            goto L_8023BD6C;
    }
    // 0x8023BD60: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8023BD64: b           L_8023BD74
    // 0x8023BD68: sh          $t7, 0x1C8($sp)
    MEM_H(0X1C8, ctx->r29) = ctx->r15;
        goto L_8023BD74;
    // 0x8023BD68: sh          $t7, 0x1C8($sp)
    MEM_H(0X1C8, ctx->r29) = ctx->r15;
L_8023BD6C:
    // 0x8023BD6C: lw          $t8, 0x214($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X214);
L_8023BD70:
    // 0x8023BD70: sh          $t8, 0x1C8($sp)
    MEM_H(0X1C8, ctx->r29) = ctx->r24;
L_8023BD74:
    // 0x8023BD74: lw          $t9, 0x1BC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1BC);
    // 0x8023BD78: lw          $t6, 0x218($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X218);
    // 0x8023BD7C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8023BD80: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x8023BD84: srl         $t8, $t7, 20
    ctx->r24 = S32(U32(ctx->r15) >> 20);
    // 0x8023BD88: sh          $t6, 0x1CA($sp)
    MEM_H(0X1CA, ctx->r29) = ctx->r14;
    // 0x8023BD8C: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8023BD90: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8023BD94: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8023BD98: or          $t6, $t9, $zero
    ctx->r14 = ctx->r25 | 0;
    // 0x8023BD9C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8023BDA0: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8023BDA4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8023BDA8: lbu         $t8, 0x1C0($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1C0);
    // 0x8023BDAC: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8023BDB0: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x8023BDB4: andi        $t7, $t8, 0x7
    ctx->r15 = ctx->r24 & 0X7;
    // 0x8023BDB8: sll         $t6, $v1, 8
    ctx->r14 = S32(ctx->r3 << 8);
    // 0x8023BDBC: srl         $t8, $t6, 20
    ctx->r24 = S32(U32(ctx->r14) >> 20);
    // 0x8023BDC0: sll         $t9, $t7, 24
    ctx->r25 = S32(ctx->r15 << 24);
    // 0x8023BDC4: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8023BDC8: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8023BDCC: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8023BDD0: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x8023BDD4: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8023BDD8: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x8023BDDC: lui         $t7, 0xB400
    ctx->r15 = S32(0XB400 << 16);
    // 0x8023BDE0: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8023BDE4: lhu         $t9, 0x1C4($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1C4);
    // 0x8023BDE8: lhu         $t8, 0x1C6($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X1C6);
    // 0x8023BDEC: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x8023BDF0: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x8023BDF4: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8023BDF8: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8023BDFC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8023BE00: lhu         $t8, 0x1C8($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X1C8);
    // 0x8023BE04: lhu         $t6, 0x1CA($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1CA);
    // 0x8023BE08: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8023BE0C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8023BE10: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8023BE14: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x8023BE18: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023BE1C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8023BE20: lw          $t9, 0x1F0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1F0);
    // 0x8023BE24: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x8023BE28: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
L_8023BE2C:
    // 0x8023BE2C: jr          $ra
    // 0x8023BE30: addiu       $sp, $sp, 0x1F0
    ctx->r29 = ADD32(ctx->r29, 0X1F0);
    return;
    // 0x8023BE30: addiu       $sp, $sp, 0x1F0
    ctx->r29 = ADD32(ctx->r29, 0X1F0);
;}
RECOMP_FUNC void D_802E84F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8578: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802E857C: jr          $ra
    // 0x802E8580: swc1        $f12, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802E8580: swc1        $f12, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_80299F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299FD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80299FD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80299FD8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80299FDC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80299FE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80299FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80299FE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80299FEC: beq         $a3, $at, L_8029A060
    if (ctx->r7 == ctx->r1) {
        // 0x80299FF0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8029A060;
    }
    // 0x80299FF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80299FF4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80299FF8: beq         $a3, $at, L_8029A06C
    if (ctx->r7 == ctx->r1) {
        // 0x80299FFC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8029A06C;
    }
    // 0x80299FFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8029A000: beq         $a3, $at, L_8029A078
    if (ctx->r7 == ctx->r1) {
        // 0x8029A004: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8029A078;
    }
    // 0x8029A004: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8029A008: beq         $a3, $at, L_8029A084
    if (ctx->r7 == ctx->r1) {
        // 0x8029A00C: addiu       $at, $zero, 0x2000
        ctx->r1 = ADD32(0, 0X2000);
            goto L_8029A084;
    }
    // 0x8029A00C: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x8029A010: beq         $a3, $at, L_8029A090
    if (ctx->r7 == ctx->r1) {
        // 0x8029A014: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_8029A090;
    }
    // 0x8029A014: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8029A018: beq         $a3, $at, L_8029A09C
    if (ctx->r7 == ctx->r1) {
        // 0x8029A01C: addiu       $at, $zero, 0x4000
        ctx->r1 = ADD32(0, 0X4000);
            goto L_8029A09C;
    }
    // 0x8029A01C: addiu       $at, $zero, 0x4000
    ctx->r1 = ADD32(0, 0X4000);
    // 0x8029A020: beq         $a3, $at, L_8029A0A8
    if (ctx->r7 == ctx->r1) {
        // 0x8029A024: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8029A0A8;
    }
    // 0x8029A024: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8029A028: beq         $a3, $at, L_8029A0B4
    if (ctx->r7 == ctx->r1) {
        // 0x8029A02C: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_8029A0B4;
    }
    // 0x8029A02C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8029A030: beq         $a3, $at, L_8029A0C0
    if (ctx->r7 == ctx->r1) {
        // 0x8029A034: addiu       $at, $zero, 0x800
        ctx->r1 = ADD32(0, 0X800);
            goto L_8029A0C0;
    }
    // 0x8029A034: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x8029A038: beq         $a3, $at, L_8029A0CC
    if (ctx->r7 == ctx->r1) {
        // 0x8029A03C: addiu       $at, $zero, 0x400
        ctx->r1 = ADD32(0, 0X400);
            goto L_8029A0CC;
    }
    // 0x8029A03C: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x8029A040: beq         $a3, $at, L_8029A0D8
    if (ctx->r7 == ctx->r1) {
        // 0x8029A044: addiu       $at, $zero, 0x200
        ctx->r1 = ADD32(0, 0X200);
            goto L_8029A0D8;
    }
    // 0x8029A044: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x8029A048: beq         $a3, $at, L_8029A0E4
    if (ctx->r7 == ctx->r1) {
        // 0x8029A04C: addiu       $at, $zero, 0x100
        ctx->r1 = ADD32(0, 0X100);
            goto L_8029A0E4;
    }
    // 0x8029A04C: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x8029A050: beq         $a3, $at, L_8029A0F0
    if (ctx->r7 == ctx->r1) {
        // 0x8029A054: nop
    
            goto L_8029A0F0;
    }
    // 0x8029A054: nop

    // 0x8029A058: b           L_8029A0F8
    // 0x8029A05C: nop

        goto L_8029A0F8;
    // 0x8029A05C: nop

L_8029A060:
    // 0x8029A060: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A064: b           L_8029A0F8
    // 0x8029A068: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A068: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A06C:
    // 0x8029A06C: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A070: b           L_8029A0F8
    // 0x8029A074: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A074: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A078:
    // 0x8029A078: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A07C: b           L_8029A0F8
    // 0x8029A080: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A080: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A084:
    // 0x8029A084: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A088: b           L_8029A0F8
    // 0x8029A08C: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A08C: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A090:
    // 0x8029A090: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A094: b           L_8029A0F8
    // 0x8029A098: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A098: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A09C:
    // 0x8029A09C: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A0A0: b           L_8029A0F8
    // 0x8029A0A4: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A0A4: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A0A8:
    // 0x8029A0A8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A0AC: b           L_8029A0F8
    // 0x8029A0B0: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A0B0: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A0B4:
    // 0x8029A0B4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A0B8: b           L_8029A0F8
    // 0x8029A0BC: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A0BC: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A0C0:
    // 0x8029A0C0: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A0C4: b           L_8029A0F8
    // 0x8029A0C8: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A0C8: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A0CC:
    // 0x8029A0CC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A0D0: b           L_8029A0F8
    // 0x8029A0D4: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A0D4: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A0D8:
    // 0x8029A0D8: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A0DC: b           L_8029A0F8
    // 0x8029A0E0: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A0E0: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A0E4:
    // 0x8029A0E4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A0E8: b           L_8029A0F8
    // 0x8029A0EC: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
        goto L_8029A0F8;
    // 0x8029A0EC: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A0F0:
    // 0x8029A0F0: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8029A0F4: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
L_8029A0F8:
    // 0x8029A0F8: beq         $s0, $zero, L_8029A108
    if (ctx->r16 == 0) {
        // 0x8029A0FC: lw          $a1, 0x28($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X28);
            goto L_8029A108;
    }
    // 0x8029A0FC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8029A100: jal         0x8021E87C
    // 0x8029A104: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_0;
    // 0x8029A104: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
L_8029A108:
    // 0x8029A108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029A10C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029A110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029A114: jr          $ra
    // 0x8029A118: nop

    return;
    // 0x8029A118: nop

;}
RECOMP_FUNC void D_802ED15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED1DC: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x802ED1E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED1E4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802ED1E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ED1EC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802ED1F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ED1F4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ED1F8: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x802ED1FC: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802ED200: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802ED204: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ED208: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ED20C: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802ED210: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ED214: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ED218: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ED21C: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ED220: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED224: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ED228: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ED22C: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802ED230: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x802ED234: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED238: jr          $ra
    // 0x802ED23C: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802ED23C: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_802D10EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D116C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D1170: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D1174: jr          $ra
    // 0x802D1178: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D1178: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8023D304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D304: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D308: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D30C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D310: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D314: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D318: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D31C: dsrav       $v0, $t6, $t7
    ctx->r2 = SIGNED(ctx->r14) >> (ctx->r15 & 63);
    // 0x8023D320: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D324: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D328: jr          $ra
    // 0x8023D32C: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D32C: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void D_80283DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283E40: lwc1        $f12, 0x10($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80283E44: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80283E48: lwc1        $f14, 0x14($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80283E4C: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80283E50: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80283E54: nop

    // 0x80283E58: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80283E5C: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80283E60: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80283E64: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80283E68: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80283E6C: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80283E70: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80283E74: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80283E78: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80283E7C: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80283E80: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80283E84: mul.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x80283E88: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80283E8C: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80283E90: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80283E94: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80283E98: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x80283E9C: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80283EA0: add.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80283EA4: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80283EA8: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80283EAC: mul.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x80283EB0: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80283EB4: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80283EB8: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80283EBC: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80283EC0: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80283EC4: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80283EC8: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80283ECC: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80283ED0: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80283ED4: mul.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x80283ED8: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80283EDC: lwc1        $f6, 0x2C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80283EE0: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80283EE4: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x80283EE8: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80283EEC: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80283EF0: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80283EF4: div.s       $f10, $f2, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f18.fl);
    // 0x80283EF8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80283EFC: div.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80283F00: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x80283F04: jr          $ra
    // 0x80283F08: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    return;
    // 0x80283F08: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_802498D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802498D0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x802498D4: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x802498D8: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x802498DC: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x802498E0: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x802498E4: jr          $ra
    // 0x802498E8: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    return;
    // 0x802498E8: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void D_8022A540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A540: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8022A544: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8022A548: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8022A54C: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8022A550: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8022A554: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8022A558: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A55C: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8022A560: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8022A564: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8022A568: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8022A56C: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x8022A570: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A574: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A578: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A57C: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8022A580: nop

    // 0x8022A584: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8022A588: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8022A58C: mul.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8022A590: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x8022A594: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
    // 0x8022A598: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A59C: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A5A0: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A5A4: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8022A5A8: nop

    // 0x8022A5AC: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8022A5B0: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022A5B4: mul.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8022A5B8: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8022A5BC: jr          $ra
    // 0x8022A5C0: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x8022A5C0: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_80228D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228D90: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80228D94: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80228D98: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80228D9C: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80228DA0: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80228DA4: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x80228DA8: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80228DAC: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x80228DB0: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80228DB4: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x80228DB8: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80228DBC: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x80228DC0: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80228DC4: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x80228DC8: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80228DCC: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x80228DD0: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80228DD4: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    // 0x80228DD8: lwc1        $f10, 0x24($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80228DDC: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x80228DE0: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80228DE4: swc1        $f16, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f16.u32l;
    // 0x80228DE8: lwc1        $f18, 0x2C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x80228DEC: swc1        $f18, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f18.u32l;
    // 0x80228DF0: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x80228DF4: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x80228DF8: lwc1        $f6, 0x34($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X34);
    // 0x80228DFC: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x80228E00: lwc1        $f8, 0x38($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80228E04: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x80228E08: lwc1        $f10, 0x3C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x80228E0C: jr          $ra
    // 0x80228E10: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    return;
    // 0x80228E10: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void D_802AC7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC85C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802AC860: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802AC864: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AC868: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802AC86C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AC870: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802AC874: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AC878: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802AC87C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802AC880: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AC884: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AC888: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x802AC88C: addiu       $t8, $zero, 0xB1
    ctx->r24 = ADD32(0, 0XB1);
    // 0x802AC890: addiu       $t9, $zero, 0xC6
    ctx->r25 = ADD32(0, 0XC6);
    // 0x802AC894: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC898: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC89C: sb          $t6, 0x968($a0)
    MEM_B(0X968, ctx->r4) = ctx->r14;
    // 0x802AC8A0: sw          $t7, 0x944($a0)
    MEM_W(0X944, ctx->r4) = ctx->r15;
    // 0x802AC8A4: sw          $t8, 0x948($a0)
    MEM_W(0X948, ctx->r4) = ctx->r24;
    // 0x802AC8A8: sw          $t9, 0x94C($a0)
    MEM_W(0X94C, ctx->r4) = ctx->r25;
    // 0x802AC8AC: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    // 0x802AC8B0: jal         0x803034A8
    // 0x802AC8B4: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    static_3_803034A8(rdram, ctx);
        goto after_0;
    // 0x802AC8B4: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    after_0:
    // 0x802AC8B8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC8BC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC8C0: addiu       $a0, $s0, 0x9E0
    ctx->r4 = ADD32(ctx->r16, 0X9E0);
    // 0x802AC8C4: jal         0x803034A8
    // 0x802AC8C8: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    static_3_803034A8(rdram, ctx);
        goto after_1;
    // 0x802AC8C8: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    after_1:
    // 0x802AC8CC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC8D0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC8D4: addiu       $a0, $s0, 0xA54
    ctx->r4 = ADD32(ctx->r16, 0XA54);
    // 0x802AC8D8: jal         0x803034A8
    // 0x802AC8DC: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    static_3_803034A8(rdram, ctx);
        goto after_2;
    // 0x802AC8DC: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    after_2:
    // 0x802AC8E0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC8E4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC8E8: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    // 0x802AC8EC: jal         0x803034A8
    // 0x802AC8F0: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    static_3_803034A8(rdram, ctx);
        goto after_3;
    // 0x802AC8F0: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    after_3:
    // 0x802AC8F4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC8F8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC8FC: addiu       $a0, $s0, 0xB3C
    ctx->r4 = ADD32(ctx->r16, 0XB3C);
    // 0x802AC900: jal         0x803034A8
    // 0x802AC904: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    static_3_803034A8(rdram, ctx);
        goto after_4;
    // 0x802AC904: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_4:
    // 0x802AC908: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC90C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC910: addiu       $a0, $s0, 0xBB0
    ctx->r4 = ADD32(ctx->r16, 0XBB0);
    // 0x802AC914: jal         0x803034A8
    // 0x802AC918: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    static_3_803034A8(rdram, ctx);
        goto after_5;
    // 0x802AC918: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_5:
    // 0x802AC91C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC920: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC924: addiu       $a0, $s0, 0xC24
    ctx->r4 = ADD32(ctx->r16, 0XC24);
    // 0x802AC928: jal         0x803034A8
    // 0x802AC92C: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    static_3_803034A8(rdram, ctx);
        goto after_6;
    // 0x802AC92C: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    after_6:
    // 0x802AC930: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC934: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC938: addiu       $a0, $s0, 0xC98
    ctx->r4 = ADD32(ctx->r16, 0XC98);
    // 0x802AC93C: jal         0x803034A8
    // 0x802AC940: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    static_3_803034A8(rdram, ctx);
        goto after_7;
    // 0x802AC940: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    after_7:
    // 0x802AC944: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC948: addiu       $a0, $s0, 0xD0C
    ctx->r4 = ADD32(ctx->r16, 0XD0C);
    // 0x802AC94C: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    // 0x802AC950: jal         0x803034A8
    // 0x802AC954: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    static_3_803034A8(rdram, ctx);
        goto after_8;
    // 0x802AC954: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    after_8:
    // 0x802AC958: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC95C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC960: addiu       $a0, $s0, 0xD80
    ctx->r4 = ADD32(ctx->r16, 0XD80);
    // 0x802AC964: jal         0x803034A8
    // 0x802AC968: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    static_3_803034A8(rdram, ctx);
        goto after_9;
    // 0x802AC968: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    after_9:
    // 0x802AC96C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC970: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC974: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    // 0x802AC978: jal         0x803034A8
    // 0x802AC97C: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    static_3_803034A8(rdram, ctx);
        goto after_10;
    // 0x802AC97C: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    after_10:
    // 0x802AC980: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC984: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC988: addiu       $a0, $s0, 0xE68
    ctx->r4 = ADD32(ctx->r16, 0XE68);
    // 0x802AC98C: jal         0x803034A8
    // 0x802AC990: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    static_3_803034A8(rdram, ctx);
        goto after_11;
    // 0x802AC990: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_11:
    // 0x802AC994: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802AC998: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802AC99C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802AC9A0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802AC9A4: jr          $ra
    // 0x802AC9A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802AC9A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802EC590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC618: beq         $a0, $zero, L_802EC648
    if (ctx->r4 == 0) {
        // 0x802EC61C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EC648;
    }
    // 0x802EC61C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EC620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EC624: jal         0x8031C514
    // 0x802EC628: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EC628: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EC62C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EC630: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC634: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EC638: beql        $t7, $zero, L_802EC64C
    if (ctx->r15 == 0) {
        // 0x802EC63C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EC64C;
    }
    goto skip_0;
    // 0x802EC63C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EC640: jal         0x802C681C
    // 0x802EC644: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EC644: nop

    after_1:
L_802EC648:
    // 0x802EC648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EC64C:
    // 0x802EC64C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC650: jr          $ra
    // 0x802EC654: nop

    return;
    // 0x802EC654: nop

;}
RECOMP_FUNC void D_8023CD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CD10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023CD14: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023CD18: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023CD1C: sb          $a1, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r5;
    // 0x8023CD20: sb          $a2, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r6;
    // 0x8023CD24: sb          $a3, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r7;
    // 0x8023CD28: lbu         $t9, 0x13($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X13);
    // 0x8023CD2C: jr          $ra
    // 0x8023CD30: sb          $t9, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r25;
    return;
    // 0x8023CD30: sb          $t9, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void D_80228E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228E60: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80228E64: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80228E68: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x80228E6C: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80228E70: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80228E74: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x80228E78: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x80228E7C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80228E80: sw          $t9, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r25;
    // 0x80228E84: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80228E88: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
    // 0x80228E8C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80228E90: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    // 0x80228E94: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80228E98: sw          $t2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r10;
    // 0x80228E9C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80228EA0: sw          $t3, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r11;
    // 0x80228EA4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80228EA8: sw          $t4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r12;
    // 0x80228EAC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80228EB0: sw          $t5, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r13;
    // 0x80228EB4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80228EB8: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
    // 0x80228EBC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80228EC0: sw          $t7, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r15;
    // 0x80228EC4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80228EC8: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    // 0x80228ECC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80228ED0: sw          $t9, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r25;
    // 0x80228ED4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80228ED8: sw          $t0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r8;
    // 0x80228EDC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80228EE0: jr          $ra
    // 0x80228EE4: sw          $t1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r9;
    return;
    // 0x80228EE4: sw          $t1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void D_802E8504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8584: jr          $ra
    // 0x802E8588: sw          $a1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r5;
    return;
    // 0x802E8588: sw          $a1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802EDF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDF84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EDF88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EDF8C: beq         $a0, $zero, L_802EDFBC
    if (ctx->r4 == 0) {
        // 0x802EDF90: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EDFBC;
    }
    // 0x802EDF90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EDF94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EDF98: jal         0x8031C514
    // 0x802EDF9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EDF9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EDFA0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EDFA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EDFA8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EDFAC: beql        $t7, $zero, L_802EDFC0
    if (ctx->r15 == 0) {
        // 0x802EDFB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EDFC0;
    }
    goto skip_0;
    // 0x802EDFB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EDFB4: jal         0x802C681C
    // 0x802EDFB8: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EDFB8: nop

    after_1:
L_802EDFBC:
    // 0x802EDFBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EDFC0:
    // 0x802EDFC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EDFC4: jr          $ra
    // 0x802EDFC8: nop

    return;
    // 0x802EDFC8: nop

;}
RECOMP_FUNC void D_802999BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299A3C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80299A40: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80299A44: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80299A48: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x80299A4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80299A50: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80299A54: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80299A58: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80299A5C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80299A60: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80299A64: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80299A68: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80299A6C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80299A70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80299A74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80299A78: sb          $v0, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r2;
    // 0x80299A7C: sb          $t0, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r8;
    // 0x80299A80: sb          $v0, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r2;
    // 0x80299A84: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
    // 0x80299A88: sw          $t8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r24;
    // 0x80299A8C: sw          $t9, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r25;
    // 0x80299A90: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x80299A94: sb          $t1, 0x32($a0)
    MEM_B(0X32, ctx->r4) = ctx->r9;
    // 0x80299A98: beq         $a1, $at, L_80299AB0
    if (ctx->r5 == ctx->r1) {
        // 0x80299A9C: sb          $v0, 0x34($a0)
        MEM_B(0X34, ctx->r4) = ctx->r2;
            goto L_80299AB0;
    }
    // 0x80299A9C: sb          $v0, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r2;
    // 0x80299AA0: jal         0x80233D58
    // 0x80299AA4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80233D58(rdram, ctx);
        goto after_0;
    // 0x80299AA4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80299AA8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80299AAC: sw          $t2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r10;
L_80299AB0:
    // 0x80299AB0: jal         0x80233CE8
    // 0x80299AB4: nop

    static_3_80233CE8(rdram, ctx);
        goto after_1;
    // 0x80299AB4: nop

    after_1:
    // 0x80299AB8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80299ABC: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x80299AC0: addiu       $t4, $zero, 0xE0
    ctx->r12 = ADD32(0, 0XE0);
    // 0x80299AC4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80299AC8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80299ACC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80299AD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80299AD4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80299AD8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80299ADC: jal         0x802344F4
    // 0x80299AE0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_2;
    // 0x80299AE0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x80299AE4: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80299AE8: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80299AEC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80299AF0: addiu       $v0, $sp, 0x38
    ctx->r2 = ADD32(ctx->r29, 0X38);
    // 0x80299AF4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80299AF8: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x80299AFC: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x80299B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80299B04: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80299B08: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x80299B0C: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x80299B10: lw          $t7, 0xC($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XC);
    // 0x80299B14: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x80299B18: lw          $at, 0x10($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X10);
    // 0x80299B1C: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x80299B20: lw          $t7, 0x14($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X14);
    // 0x80299B24: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x80299B28: lw          $at, 0x18($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X18);
    // 0x80299B2C: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x80299B30: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x80299B34: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80299B38: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80299B3C: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x80299B40: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80299B44: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x80299B48: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80299B4C: jal         0x80303778
    // 0x80299B50: nop

    static_3_80303778(rdram, ctx);
        goto after_3;
    // 0x80299B50: nop

    after_3:
    // 0x80299B54: lw          $t2, 0x28($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X28);
    // 0x80299B58: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x80299B5C: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x80299B60: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80299B64: sb          $t1, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r9;
    // 0x80299B68: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80299B6C: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x80299B70: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
    // 0x80299B74: sw          $v1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r3;
    // 0x80299B78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80299B7C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80299B80: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80299B84: jr          $ra
    // 0x80299B88: nop

    return;
    // 0x80299B88: nop

;}
RECOMP_FUNC void D_802D2650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D26D0: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x802D26D4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D26D8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x802D26DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D26E0: jr          $ra
    // 0x802D26E4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x802D26E4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_802EFC88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFD08: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x802EFD0C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802EFD10: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EFD14: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802EFD18: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x802EFD1C: jal         0x8022970C
    // 0x802EFD20: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802EFD20: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x802EFD24: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x802EFD28: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x802EFD2C: addiu       $t6, $sp, 0x40
    ctx->r14 = ADD32(ctx->r29, 0X40);
    // 0x802EFD30: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x802EFD34: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x802EFD38: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x802EFD3C: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x802EFD40: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x802EFD44: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802EFD48: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802EFD4C: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x802EFD50: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x802EFD54: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802EFD58: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802EFD5C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802EFD60: jal         0x802CF1C8
    // 0x802EFD64: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    static_3_802CF1C8(rdram, ctx);
        goto after_1;
    // 0x802EFD64: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x802EFD68: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x802EFD6C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x802EFD70: jal         0x802D01D4
    // 0x802EFD74: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802EFD74: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_2:
    // 0x802EFD78: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x802EFD7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802EFD80: lh          $t9, 0x18($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X18);
    // 0x802EFD84: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x802EFD88: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802EFD8C: jalr        $t9
    // 0x802EFD90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802EFD90: nop

    after_3:
    // 0x802EFD94: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802EFD98: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802EFD9C: lh          $t0, 0x18($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X18);
    // 0x802EFDA0: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802EFDA4: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x802EFDA8: jalr        $t9
    // 0x802EFDAC: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802EFDAC: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    after_4:
    // 0x802EFDB0: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x802EFDB4: jal         0x80228DE0
    // 0x802EFDB8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_80228DE0(rdram, ctx);
        goto after_5;
    // 0x802EFDB8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x802EFDBC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802EFDC0: sb          $t1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r9;
    // 0x802EFDC4: addiu       $a0, $s0, 0xF4
    ctx->r4 = ADD32(ctx->r16, 0XF4);
    // 0x802EFDC8: jal         0x80228DE0
    // 0x802EFDCC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_80228DE0(rdram, ctx);
        goto after_6;
    // 0x802EFDCC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x802EFDD0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802EFDD4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EFDD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802EFDDC: sb          $t2, 0x19C($s0)
    MEM_B(0X19C, ctx->r16) = ctx->r10;
    // 0x802EFDE0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802EFDE4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802EFDE8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802EFDEC: jal         0x80320634
    // 0x802EFDF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80320634(rdram, ctx);
        goto after_7;
    // 0x802EFDF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x802EFDF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802EFDF8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802EFDFC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x802EFE00: jr          $ra
    // 0x802EFE04: nop

    return;
    // 0x802EFE04: nop

;}
RECOMP_FUNC void D_8022C40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C40C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022C410: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022C414: jr          $ra
    // 0x8022C418: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    return;
    // 0x8022C418: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_802C83AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C842C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802C8430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C8434: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x802C8438: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C843C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802C8440: lh          $v0, 0x0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X0);
    // 0x802C8444: addiu       $a0, $v1, 0x6B8
    ctx->r4 = ADD32(ctx->r3, 0X6B8);
    // 0x802C8448: jal         0x80303690
    // 0x802C844C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    static_3_80303690(rdram, ctx);
        goto after_0;
    // 0x802C844C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_0:
    // 0x802C8450: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802C8454: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802C8458: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802C845C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802C8460: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802C8464: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x802C8468: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802C846C: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x802C8470: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802C8474: addiu       $a0, $v1, 0x6B8
    ctx->r4 = ADD32(ctx->r3, 0X6B8);
    // 0x802C8478: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x802C847C: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x802C8480: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802C8484: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x802C8488: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    // 0x802C848C: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x802C8490: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802C8494: lw          $t0, 0x14($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X14);
    // 0x802C8498: sw          $t0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r8;
    // 0x802C849C: lw          $at, 0x18($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X18);
    // 0x802C84A0: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802C84A4: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802C84A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802C84AC: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x802C84B0: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802C84B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802C84B8: jal         0x803036BC
    // 0x802C84BC: nop

    static_3_803036BC(rdram, ctx);
        goto after_1;
    // 0x802C84BC: nop

    after_1:
    // 0x802C84C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C84C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802C84C8: jr          $ra
    // 0x802C84CC: nop

    return;
    // 0x802C84CC: nop

;}
RECOMP_FUNC void D_802E7434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E74B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E74B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E74BC: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802E74C0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802E74C4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802E74C8: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802E74CC: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x802E74D0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802E74D4: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802E74D8: jalr        $t9
    // 0x802E74DC: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802E74DC: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x802E74E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E74E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E74E8: jr          $ra
    // 0x802E74EC: nop

    return;
    // 0x802E74EC: nop

;}
RECOMP_FUNC void D_802E7864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E78E4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x802E78E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E78EC: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x802E78F0: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E78F4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E78F8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E78FC: bne         $v1, $zero, L_802E7924
    if (ctx->r3 != 0) {
        // 0x802E7900: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E7924;
    }
    // 0x802E7900: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7904: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7908: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E790C: jal         0x80231A24
    // 0x802E7910: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7910: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E7914: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    // 0x802E7918: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E791C: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E7920: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E7924:
    // 0x802E7924: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E7928: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x802E792C: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E7930: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802E7934: jalr        $t9
    // 0x802E7938: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E7938: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E793C: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x802E7940: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x802E7944: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x802E7948: jal         0x8028C2C0
    // 0x802E794C: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    static_3_8028C2C0(rdram, ctx);
        goto after_2;
    // 0x802E794C: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x802E7950: jal         0x8022970C
    // 0x802E7954: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802E7954: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x802E7958: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802E795C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802E7960: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802E7964: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802E7968: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802E796C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x802E7970: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x802E7974: jal         0x802CF888
    // 0x802E7978: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    static_3_802CF888(rdram, ctx);
        goto after_4;
    // 0x802E7978: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x802E797C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7980: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x802E7984: jr          $ra
    // 0x802E7988: nop

    return;
    // 0x802E7988: nop

;}
RECOMP_FUNC void D_80204C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80204C40: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80204C44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80204C48: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80204C4C: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
    // 0x80204C50: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80204C54: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80204C58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80204C5C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204C60: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80204C64: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80204C68: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80204C6C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80204C70: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80204C74: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80204C78: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80204C7C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x80204C80: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80204C84: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204C88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80204C8C: jal         0x802374B0
    // 0x80204C90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_0;
    // 0x80204C90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80204C94: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204C98: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80204C9C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80204CA0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204CA4: jal         0x8022CA14
    // 0x80204CA8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    static_3_8022CA14(rdram, ctx);
        goto after_1;
    // 0x80204CA8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x80204CAC: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80204CB0: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80204CB4: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80204CB8: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80204CBC: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x80204CC0: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x80204CC4: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x80204CC8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80204CCC:
    // 0x80204CCC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204CD0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204CD4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80204CD8: jal         0x802374B0
    // 0x80204CDC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    static_3_802374B0(rdram, ctx);
        goto after_2;
    // 0x80204CDC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x80204CE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204CE4: jal         0x8022D560
    // 0x80204CE8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    static_3_8022D560(rdram, ctx);
        goto after_3;
    // 0x80204CE8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_3:
    // 0x80204CEC: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80204CF0: lh          $v0, 0x0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X0);
    // 0x80204CF4: beql        $v0, $s3, L_80204D18
    if (ctx->r2 == ctx->r19) {
        // 0x80204CF8: lw          $t7, 0x0($s7)
        ctx->r15 = MEM_W(ctx->r23, 0X0);
            goto L_80204D18;
    }
    goto skip_0;
    // 0x80204CF8: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    skip_0:
    // 0x80204CFC: beq         $v0, $s4, L_80204D78
    if (ctx->r2 == ctx->r20) {
        // 0x80204D00: nop
    
            goto L_80204D78;
    }
    // 0x80204D00: nop

    // 0x80204D04: beql        $v0, $s5, L_80204D78
    if (ctx->r2 == ctx->r21) {
        // 0x80204D08: or          $s1, $s3, $zero
        ctx->r17 = ctx->r19 | 0;
            goto L_80204D78;
    }
    goto skip_1;
    // 0x80204D08: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    skip_1:
    // 0x80204D0C: b           L_80204D78
    // 0x80204D10: nop

        goto L_80204D78;
    // 0x80204D10: nop

    // 0x80204D14: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
L_80204D18:
    // 0x80204D18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80204D1C: divu        $zero, $t7, $fp
    lo = S32(U32(ctx->r15) / U32(ctx->r30)); hi = S32(U32(ctx->r15) % U32(ctx->r30));
    // 0x80204D20: mfhi        $t8
    ctx->r24 = hi;
    // 0x80204D24: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80204D28: addu        $t0, $s6, $t9
    ctx->r8 = ADD32(ctx->r22, ctx->r25);
    // 0x80204D2C: bne         $fp, $zero, L_80204D38
    if (ctx->r30 != 0) {
        // 0x80204D30: nop
    
            goto L_80204D38;
    }
    // 0x80204D30: nop

    // 0x80204D34: break       7
    do_break(2149600564);
L_80204D38:
    // 0x80204D38: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x80204D3C: jal         0x80204E0C
    // 0x80204D40: nop

    static_3_80204E0C(rdram, ctx);
        goto after_4;
    // 0x80204D40: nop

    after_4:
    // 0x80204D44: beq         $v0, $zero, L_80204D78
    if (ctx->r2 == 0) {
        // 0x80204D48: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80204D78;
    }
    // 0x80204D48: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204D4C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204D50: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80204D54: jal         0x802374B0
    // 0x80204D58: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    static_3_802374B0(rdram, ctx);
        goto after_5;
    // 0x80204D58: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_5:
    // 0x80204D5C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80204D60: jal         0x80205010
    // 0x80204D64: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    static_3_80205010(rdram, ctx);
        goto after_6;
    // 0x80204D64: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    after_6:
    // 0x80204D68: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80204D6C: b           L_80204D78
    // 0x80204D70: lw          $s0, 0x4($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X4);
        goto L_80204D78;
    // 0x80204D70: lw          $s0, 0x4($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X4);
    // 0x80204D74: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_80204D78:
    // 0x80204D78: beq         $s1, $zero, L_80204CCC
    if (ctx->r17 == 0) {
        // 0x80204D7C: nop
    
            goto L_80204CCC;
    }
    // 0x80204D7C: nop

    // 0x80204D80: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204D84: jal         0x80237174
    // 0x80204D88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80237174(rdram, ctx);
        goto after_7;
    // 0x80204D88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_7:
    // 0x80204D8C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80204D90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80204D94: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80204D98: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80204D9C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80204DA0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80204DA4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80204DA8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80204DAC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80204DB0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80204DB4: jr          $ra
    // 0x80204DB8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80204DB8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_802477E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802477E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802477E4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802477E8: lbu         $t7, 0x3F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3F);
    // 0x802477EC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802477F0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802477F4: slti        $at, $t7, 0x41
    ctx->r1 = SIGNED(ctx->r15) < 0X41 ? 1 : 0;
    // 0x802477F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802477FC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80247800: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80247804: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80247808: bne         $at, $zero, L_80247818
    if (ctx->r1 != 0) {
        // 0x8024780C: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_80247818;
    }
    // 0x8024780C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80247810: b           L_80247980
    // 0x80247814: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80247980;
    // 0x80247814: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80247818:
    // 0x80247818: jal         0x80245AD0
    // 0x8024781C: nop

    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8024781C: nop

    after_0:
    // 0x80247820: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247824: jal         0x80247AEC
    // 0x80247828: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    static_3_80247AEC(rdram, ctx);
        goto after_1;
    // 0x80247828: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8024782C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80247830: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80247834: bne         $t8, $zero, L_8024784C
    if (ctx->r24 != 0) {
        // 0x80247838: nop
    
            goto L_8024784C;
    }
    // 0x80247838: nop

    // 0x8024783C: lhu         $t9, 0x1C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1C);
    // 0x80247840: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80247844: beq         $t9, $at, L_80247854
    if (ctx->r25 == ctx->r1) {
        // 0x80247848: nop
    
            goto L_80247854;
    }
    // 0x80247848: nop

L_8024784C:
    // 0x8024784C: b           L_80247980
    // 0x80247850: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80247980;
    // 0x80247850: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80247854:
    // 0x80247854: lbu         $t0, 0x1E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1E);
    // 0x80247858: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x8024785C: beq         $t1, $zero, L_80247880
    if (ctx->r9 == 0) {
        // 0x80247860: nop
    
            goto L_80247880;
    }
    // 0x80247860: nop

L_80247864:
    // 0x80247864: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80247868: jal         0x80247AEC
    // 0x8024786C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    static_3_80247AEC(rdram, ctx);
        goto after_2;
    // 0x8024786C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x80247870: lbu         $t2, 0x1E($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1E);
    // 0x80247874: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x80247878: bne         $t3, $zero, L_80247864
    if (ctx->r11 != 0) {
        // 0x8024787C: nop
    
            goto L_80247864;
    }
    // 0x8024787C: nop

L_80247880:
    // 0x80247880: lbu         $a0, 0x3F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3F);
    // 0x80247884: jal         0x802479E0
    // 0x80247888: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    static_3_802479E0(rdram, ctx);
        goto after_3;
    // 0x80247888: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x8024788C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80247890: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80247894: jal         0x802465B0
    // 0x80247898: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802465B0(rdram, ctx);
        goto after_4;
    // 0x80247898: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8024789C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802478A0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802478A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802478A8: jal         0x802374B0
    // 0x802478AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_5;
    // 0x802478AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x802478B0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_802478B4:
    // 0x802478B4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x802478B8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x802478BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802478C0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x802478C4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802478C8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x802478CC: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802478D0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802478D4: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x802478D8: bne         $at, $zero, L_802478B4
    if (ctx->r1 != 0) {
        // 0x802478DC: sw          $t8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r24;
            goto L_802478B4;
    }
    // 0x802478DC: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x802478E0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802478E4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802478E8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802478EC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802478F0: jal         0x802465B0
    // 0x802478F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_6;
    // 0x802478F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x802478F8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x802478FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247900: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80247904: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x80247908: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8024790C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80247910: jal         0x802374B0
    // 0x80247914: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_7;
    // 0x80247914: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80247918: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8024791C:
    // 0x8024791C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80247920: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80247924: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80247928: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x8024792C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80247930: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80247934: bne         $at, $zero, L_8024791C
    if (ctx->r1 != 0) {
        // 0x80247938: sw          $t1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r9;
            goto L_8024791C;
    }
    // 0x80247938: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8024793C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80247940: addiu       $t5, $sp, 0x20
    ctx->r13 = ADD32(ctx->r29, 0X20);
    // 0x80247944: lwl         $at, 0x0($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X0);
    // 0x80247948: lwr         $at, 0x3($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X3);
    // 0x8024794C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x80247950: lwl         $t7, 0x4($t4)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r12, 0X4);
    // 0x80247954: lwr         $t7, 0x7($t4)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r12, 0X7);
    // 0x80247958: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x8024795C: lwl         $at, 0x8($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X8);
    // 0x80247960: lwr         $at, 0xB($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0XB);
    // 0x80247964: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x80247968: lbu         $t8, 0x21($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X21);
    // 0x8024796C: andi        $t9, $t8, 0xC0
    ctx->r25 = ctx->r24 & 0XC0;
    // 0x80247970: sra         $t0, $t9, 4
    ctx->r8 = S32(SIGNED(ctx->r25) >> 4);
    // 0x80247974: jal         0x80245B14
    // 0x80247978: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    static_3_80245B14(rdram, ctx);
        goto after_8;
    // 0x80247978: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_8:
    // 0x8024797C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_80247980:
    // 0x80247980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247984: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80247988: jr          $ra
    // 0x8024798C: nop

    return;
    // 0x8024798C: nop

;}
RECOMP_FUNC void D_802B3E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3ECC: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x802B3ED0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B3ED4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B3ED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B3EDC: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x802B3EE0: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x802B3EE4: jal         0x802D2770
    // 0x802B3EE8: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    static_3_802D2770(rdram, ctx);
        goto after_0;
    // 0x802B3EE8: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    after_0:
    // 0x802B3EEC: sb          $v0, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r2;
    // 0x802B3EF0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802B3EF4: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x802B3EF8: lw          $a3, 0xD8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XD8);
    // 0x802B3EFC: lw          $t9, 0x14($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X14);
    // 0x802B3F00: lh          $t6, 0x10($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X10);
    // 0x802B3F04: jalr        $t9
    // 0x802B3F08: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802B3F08: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_1:
    // 0x802B3F0C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802B3F10: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802B3F14: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x802B3F18: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B3F1C: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x802B3F20: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x802B3F24: beq         $t7, $at, L_802B3F48
    if (ctx->r15 == ctx->r1) {
        // 0x802B3F28: swc1        $f4, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
            goto L_802B3F48;
    }
    // 0x802B3F28: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x802B3F2C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x802B3F30: bne         $t7, $at, L_802B3FD8
    if (ctx->r15 != ctx->r1) {
        // 0x802B3F34: lui         $t8, 0x0
        ctx->r24 = S32(0X0 << 16);
            goto L_802B3FD8;
    }
    // 0x802B3F34: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802B3F38: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802B3F3C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B3F40: lw          $t0, 0x7168($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X7168);
    // 0x802B3F44: bne         $t0, $at, L_802B3FD8
    if (ctx->r8 != ctx->r1) {
        // 0x802B3F48: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802B3FD8;
    }
L_802B3F48:
    // 0x802B3F48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3F4C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3F50: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802B3F54: lui         $at, 0xC57A
    ctx->r1 = S32(0XC57A << 16);
    // 0x802B3F58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B3F5C: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802B3F60: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3F64: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3F68: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x802B3F6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B3F70: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3F74: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x802B3F78: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x802B3F7C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802B3F80: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3F84: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3F88: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3F8C: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802B3F90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3F94: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x802B3F98: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
    // 0x802B3F9C: bc1f        L_802B3FA8
    if (!c1cs) {
        // 0x802B3FA0: nop
    
            goto L_802B3FA8;
    }
    // 0x802B3FA0: nop

    // 0x802B3FA4: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
L_802B3FA8:
    // 0x802B3FA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3FAC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3FB0: lui         $at, 0xC57A
    ctx->r1 = S32(0XC57A << 16);
    // 0x802B3FB4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802B3FB8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802B3FBC: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x802B3FC0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B3FC4: bc1f        L_802B3FD0
    if (!c1cs) {
        // 0x802B3FC8: nop
    
            goto L_802B3FD0;
    }
    // 0x802B3FC8: nop

    // 0x802B3FCC: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_802B3FD0:
    // 0x802B3FD0: b           L_802B3FFC
    // 0x802B3FD4: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
        goto L_802B3FFC;
    // 0x802B3FD4: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
L_802B3FD8:
    // 0x802B3FD8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3FDC: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3FE0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3FE4: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3FE8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3FEC: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3FF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B3FF4: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B3FF8: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
L_802B3FFC:
    // 0x802B3FFC: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x802B4000: bne         $t1, $zero, L_802B4020
    if (ctx->r9 != 0) {
        // 0x802B4004: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_802B4020;
    }
    // 0x802B4004: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802B4008: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802B400C: nop

    // 0x802B4010: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x802B4014: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x802B4018: sub.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x802B401C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
L_802B4020:
    // 0x802B4020: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802B4024: bnel        $t2, $at, L_802B4074
    if (ctx->r10 != ctx->r1) {
        // 0x802B4028: lwc1        $f8, 0xC4($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
            goto L_802B4074;
    }
    goto skip_0;
    // 0x802B4028: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    skip_0:
    // 0x802B402C: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802B4030: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x802B4034: nop

    // 0x802B4038: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x802B403C: jal         0x8022AA40
    // 0x802B4040: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_2;
    // 0x802B4040: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    after_2:
    // 0x802B4044: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x802B4048: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B404C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802B4050: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802B4054: nop

    // 0x802B4058: bc1f        L_802B4068
    if (!c1cs) {
        // 0x802B405C: nop
    
            goto L_802B4068;
    }
    // 0x802B405C: nop

    // 0x802B4060: b           L_802B40C4
    // 0x802B4064: sb          $t3, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r11;
        goto L_802B40C4;
    // 0x802B4064: sb          $t3, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r11;
L_802B4068:
    // 0x802B4068: b           L_802B40C4
    // 0x802B406C: sb          $zero, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = 0;
        goto L_802B40C4;
    // 0x802B406C: sb          $zero, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = 0;
    // 0x802B4070: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
L_802B4074:
    // 0x802B4074: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802B4078: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x802B407C: nop

    // 0x802B4080: bc1t        L_802B40B8
    if (c1cs) {
        // 0x802B4084: nop
    
            goto L_802B40B8;
    }
    // 0x802B4084: nop

    // 0x802B4088: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x802B408C: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x802B4090: bc1t        L_802B40B8
    if (c1cs) {
        // 0x802B4094: nop
    
            goto L_802B40B8;
    }
    // 0x802B4094: nop

    // 0x802B4098: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x802B409C: nop

    // 0x802B40A0: bc1t        L_802B40B8
    if (c1cs) {
        // 0x802B40A4: nop
    
            goto L_802B40B8;
    }
    // 0x802B40A4: nop

    // 0x802B40A8: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802B40AC: nop

    // 0x802B40B0: bc1fl       L_802B40C4
    if (!c1cs) {
        // 0x802B40B4: sb          $zero, 0xD6($sp)
        MEM_B(0XD6, ctx->r29) = 0;
            goto L_802B40C4;
    }
    goto skip_1;
    // 0x802B40B4: sb          $zero, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = 0;
    skip_1:
L_802B40B8:
    // 0x802B40B8: b           L_802B40C4
    // 0x802B40BC: sb          $t4, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r12;
        goto L_802B40C4;
    // 0x802B40BC: sb          $t4, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r12;
    // 0x802B40C0: sb          $zero, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = 0;
L_802B40C4:
    // 0x802B40C4: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x802B40C8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B40CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B40D0: bne         $t5, $at, L_802B40DC
    if (ctx->r13 != ctx->r1) {
        // 0x802B40D4: nop
    
            goto L_802B40DC;
    }
    // 0x802B40D4: nop

    // 0x802B40D8: sb          $zero, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = 0;
L_802B40DC:
    // 0x802B40DC: jal         0x80223F4C
    // 0x802B40E0: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    static_3_80223F4C(rdram, ctx);
        goto after_3;
    // 0x802B40E0: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_3:
    // 0x802B40E4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x802B40E8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802B40EC: jal         0x80223F4C
    // 0x802B40F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80223F4C(rdram, ctx);
        goto after_4;
    // 0x802B40F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x802B40F4: lbu         $v0, 0x1D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1D);
    // 0x802B40F8: lbu         $t9, 0xD6($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XD6);
    // 0x802B40FC: lbu         $t6, 0xD6($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XD6);
    // 0x802B4100: beq         $v0, $zero, L_802B414C
    if (ctx->r2 == 0) {
        // 0x802B4104: sltu        $t7, $zero, $t9
        ctx->r15 = 0 < ctx->r25 ? 1 : 0;
            goto L_802B414C;
    }
    // 0x802B4104: sltu        $t7, $zero, $t9
    ctx->r15 = 0 < ctx->r25 ? 1 : 0;
    // 0x802B4108: bne         $t6, $zero, L_802B414C
    if (ctx->r14 != 0) {
        // 0x802B410C: nop
    
            goto L_802B414C;
    }
    // 0x802B410C: nop

    // 0x802B4110: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B4114: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802B4118: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x802B411C: nop

    // 0x802B4120: bc1fl       L_802B4144
    if (!c1cs) {
        // 0x802B4124: sb          $zero, 0xD6($sp)
        MEM_B(0XD6, ctx->r29) = 0;
            goto L_802B4144;
    }
    goto skip_2;
    // 0x802B4124: sb          $zero, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = 0;
    skip_2:
    // 0x802B4128: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802B412C: nop

    // 0x802B4130: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x802B4134: nop

    // 0x802B4138: bc1t        L_802B414C
    if (c1cs) {
        // 0x802B413C: nop
    
            goto L_802B414C;
    }
    // 0x802B413C: nop

    // 0x802B4140: sb          $zero, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = 0;
L_802B4144:
    // 0x802B4144: b           L_802B441C
    // 0x802B4148: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_802B441C;
    // 0x802B4148: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_802B414C:
    // 0x802B414C: beq         $v0, $zero, L_802B4370
    if (ctx->r2 == 0) {
        // 0x802B4150: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_802B4370;
    }
    // 0x802B4150: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x802B4154: bne         $t7, $zero, L_802B4370
    if (ctx->r15 != 0) {
        // 0x802B4158: lui         $t8, 0x0
        ctx->r24 = S32(0X0 << 16);
            goto L_802B4370;
    }
    // 0x802B4158: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802B415C: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802B4160: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B4164: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4168: bnel        $t8, $at, L_802B4420
    if (ctx->r24 != ctx->r1) {
        // 0x802B416C: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_802B4420;
    }
    goto skip_3;
    // 0x802B416C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_3:
    // 0x802B4170: jal         0x802AEE80
    // 0x802B4174: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEE80(rdram, ctx);
        goto after_5;
    // 0x802B4174: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_5:
    // 0x802B4178: beq         $v0, $zero, L_802B4364
    if (ctx->r2 == 0) {
        // 0x802B417C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B4364;
    }
    // 0x802B417C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4180: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B4184: jal         0x802AEE54
    // 0x802B4188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_6;
    // 0x802B4188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x802B418C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4190: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B4194: jal         0x802AEE80
    // 0x802B4198: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    static_3_802AEE80(rdram, ctx);
        goto after_7;
    // 0x802B4198: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_7:
    // 0x802B419C: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802B41A0: jal         0x803192A0
    // 0x802B41A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_803192A0(rdram, ctx);
        goto after_8;
    // 0x802B41A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_8:
    // 0x802B41A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B41AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B41B0: jal         0x802B0260
    // 0x802B41B4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802B0260(rdram, ctx);
        goto after_9;
    // 0x802B41B4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_9:
    // 0x802B41B8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B41BC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x802B41C0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B41C4: jal         0x802AEE54
    // 0x802B41C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_10;
    // 0x802B41C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x802B41CC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B41D0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B41D4: jal         0x802AEE80
    // 0x802B41D8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    static_3_802AEE80(rdram, ctx);
        goto after_11;
    // 0x802B41D8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_11:
    // 0x802B41DC: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802B41E0: jal         0x80318510
    // 0x802B41E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80318510(rdram, ctx);
        goto after_12;
    // 0x802B41E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_12:
    // 0x802B41E8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B41EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B41F0: jal         0x802B0084
    // 0x802B41F4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802B0084(rdram, ctx);
        goto after_13;
    // 0x802B41F4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_13:
    // 0x802B41F8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B41FC: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x802B4200: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B4204: jal         0x802AEE54
    // 0x802B4208: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_14;
    // 0x802B4208: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x802B420C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4210: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B4214: jal         0x802AEE80
    // 0x802B4218: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    static_3_802AEE80(rdram, ctx);
        goto after_15;
    // 0x802B4218: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_15:
    // 0x802B421C: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802B4220: jal         0x80318180
    // 0x802B4224: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80318180(rdram, ctx);
        goto after_16;
    // 0x802B4224: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_16:
    // 0x802B4228: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B422C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B4230: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B4234: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x802B4238: jal         0x802B0330
    // 0x802B423C: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    static_3_802B0330(rdram, ctx);
        goto after_17;
    // 0x802B423C: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_17:
    // 0x802B4240: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4244: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B4248: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B424C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B4250: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    // 0x802B4254: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B4258: jal         0x80302988
    // 0x802B425C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_18;
    // 0x802B425C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_18:
    // 0x802B4260: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4264: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B4268: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B426C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B4270: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x802B4274: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B4278: jal         0x80302988
    // 0x802B427C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_19;
    // 0x802B427C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_19:
    // 0x802B4280: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4284: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B4288: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B428C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B4290: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x802B4294: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B4298: jal         0x80302988
    // 0x802B429C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_20;
    // 0x802B429C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_20:
    // 0x802B42A0: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x802B42A4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802B42A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B42AC: beq         $t0, $at, L_802B42EC
    if (ctx->r8 == ctx->r1) {
        // 0x802B42B0: addiu       $a1, $zero, 0x97
        ctx->r5 = ADD32(0, 0X97);
            goto L_802B42EC;
    }
    // 0x802B42B0: addiu       $a1, $zero, 0x97
    ctx->r5 = ADD32(0, 0X97);
    // 0x802B42B4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B42B8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B42BC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B42C0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B42C4: jal         0x80302988
    // 0x802B42C8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_21;
    // 0x802B42C8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_21:
    // 0x802B42CC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B42D0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B42D4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B42D8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B42DC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x802B42E0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B42E4: jal         0x80302988
    // 0x802B42E8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_22;
    // 0x802B42E8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_22:
L_802B42EC:
    // 0x802B42EC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x802B42F0: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x802B42F4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x802B42F8: bne         $t1, $v0, L_802B4308
    if (ctx->r9 != ctx->r2) {
        // 0x802B42FC: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802B4308;
    }
    // 0x802B42FC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4300: beq         $t2, $v0, L_802B4364
    if (ctx->r10 == ctx->r2) {
        // 0x802B4304: nop
    
            goto L_802B4364;
    }
    // 0x802B4304: nop

L_802B4308:
    // 0x802B4308: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B430C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B4310: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B4314: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x802B4318: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B431C: jal         0x80302988
    // 0x802B4320: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_23;
    // 0x802B4320: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_23:
    // 0x802B4324: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4328: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B432C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B4330: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B4334: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802B4338: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B433C: jal         0x80302988
    // 0x802B4340: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_24;
    // 0x802B4340: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_24:
    // 0x802B4344: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4348: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B434C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B4350: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B4354: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x802B4358: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B435C: jal         0x80302988
    // 0x802B4360: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_25;
    // 0x802B4360: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_25:
L_802B4364:
    // 0x802B4364: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B4368: b           L_802B441C
    // 0x802B436C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
        goto L_802B441C;
    // 0x802B436C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
L_802B4370:
    // 0x802B4370: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x802B4374: lbu         $t4, 0xD7($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XD7);
    // 0x802B4378: beql        $t3, $zero, L_802B4420
    if (ctx->r11 == 0) {
        // 0x802B437C: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_802B4420;
    }
    goto skip_4;
    // 0x802B437C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_4:
    // 0x802B4380: beql        $t4, $zero, L_802B4420
    if (ctx->r12 == 0) {
        // 0x802B4384: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_802B4420;
    }
    goto skip_5;
    // 0x802B4384: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_5:
    // 0x802B4388: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802B438C: lw          $a3, 0xD8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XD8);
    // 0x802B4390: lw          $t9, 0x6C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X6C);
    // 0x802B4394: lh          $t5, 0x68($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X68);
    // 0x802B4398: jalr        $t9
    // 0x802B439C: addu        $a0, $t5, $v1
    ctx->r4 = ADD32(ctx->r13, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x802B439C: addu        $a0, $t5, $v1
    ctx->r4 = ADD32(ctx->r13, ctx->r3);
    after_26:
    // 0x802B43A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802B43A4: nop

    // 0x802B43A8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802B43AC: nop

    // 0x802B43B0: bc1fl       L_802B43DC
    if (!c1cs) {
        // 0x802B43B4: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_802B43DC;
    }
    goto skip_6;
    // 0x802B43B4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_6:
    // 0x802B43B8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802B43BC: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802B43C0: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x802B43C4: lh          $t6, 0x68($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X68);
    // 0x802B43C8: jalr        $t9
    // 0x802B43CC: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x802B43CC: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_27:
    // 0x802B43D0: b           L_802B43F4
    // 0x802B43D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802B43F4;
    // 0x802B43D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802B43D8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_802B43DC:
    // 0x802B43DC: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802B43E0: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x802B43E4: lh          $t7, 0x68($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X68);
    // 0x802B43E8: jalr        $t9
    // 0x802B43EC: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x802B43EC: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_28:
    // 0x802B43F0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802B43F4:
    // 0x802B43F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B43F8: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B43FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B4400: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B4404: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802B4408: nop

    // 0x802B440C: bc1fl       L_802B4420
    if (!c1cs) {
        // 0x802B4410: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_802B4420;
    }
    goto skip_7;
    // 0x802B4410: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_7:
    // 0x802B4414: sb          $t8, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r24;
    // 0x802B4418: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_802B441C:
    // 0x802B441C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_802B4420:
    // 0x802B4420: jal         0x802D2778
    // 0x802B4424: lbu         $a1, 0xD6($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XD6);
    static_3_802D2778(rdram, ctx);
        goto after_29;
    // 0x802B4424: lbu         $a1, 0xD6($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XD6);
    after_29:
    // 0x802B4428: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802B442C: lw          $a3, 0xD8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XD8);
    // 0x802B4430: lw          $t9, 0x3C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X3C);
    // 0x802B4434: lh          $t1, 0x38($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X38);
    // 0x802B4438: jalr        $t9
    // 0x802B443C: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x802B443C: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    after_30:
    // 0x802B4440: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802B4444: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x802B4448: lw          $a3, 0xD8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XD8);
    // 0x802B444C: lw          $t9, 0x4C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4C);
    // 0x802B4450: lh          $t2, 0x48($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X48);
    // 0x802B4454: jalr        $t9
    // 0x802B4458: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x802B4458: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    after_31:
    // 0x802B445C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802B4460: swc1        $f0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f0.u32l;
    // 0x802B4464: lw          $a3, 0xD8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XD8);
    // 0x802B4468: lw          $t9, 0x44($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X44);
    // 0x802B446C: lh          $t3, 0x40($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X40);
    // 0x802B4470: jalr        $t9
    // 0x802B4474: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x802B4474: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    after_32:
    // 0x802B4478: swc1        $f0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f0.u32l;
    // 0x802B447C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x802B4480: lbu         $t5, 0xD7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XD7);
    // 0x802B4484: beql        $t4, $zero, L_802B451C
    if (ctx->r12 == 0) {
        // 0x802B4488: lw          $t0, 0x24($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X24);
            goto L_802B451C;
    }
    goto skip_8;
    // 0x802B4488: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    skip_8:
    // 0x802B448C: bne         $t5, $zero, L_802B4518
    if (ctx->r13 != 0) {
        // 0x802B4490: lui         $at, 0x4448
        ctx->r1 = S32(0X4448 << 16);
            goto L_802B4518;
    }
    // 0x802B4490: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802B4494: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802B4498: lwc1        $f0, 0xAC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x802B449C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802B44A0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802B44A4: swc1        $f0, 0x5CC($s0)
    MEM_W(0X5CC, ctx->r16) = ctx->f0.u32l;
    // 0x802B44A8: bc1fl       L_802B44B8
    if (!c1cs) {
        // 0x802B44AC: lbu         $t6, 0x1D($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X1D);
            goto L_802B44B8;
    }
    goto skip_9;
    // 0x802B44AC: lbu         $t6, 0x1D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1D);
    skip_9:
    // 0x802B44B0: swc1        $f2, 0x5CC($s0)
    MEM_W(0X5CC, ctx->r16) = ctx->f2.u32l;
    // 0x802B44B4: lbu         $t6, 0x1D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1D);
L_802B44B8:
    // 0x802B44B8: beql        $t6, $zero, L_802B451C
    if (ctx->r14 == 0) {
        // 0x802B44BC: lw          $t0, 0x24($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X24);
            goto L_802B451C;
    }
    goto skip_10;
    // 0x802B44BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    skip_10:
    // 0x802B44C0: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802B44C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B44C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B44CC: beq         $t7, $at, L_802B4518
    if (ctx->r15 == ctx->r1) {
        // 0x802B44D0: addiu       $a1, $zero, 0x8D
        ctx->r5 = ADD32(0, 0X8D);
            goto L_802B4518;
    }
    // 0x802B44D0: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    // 0x802B44D4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B44D8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B44DC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B44E0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B44E4: jal         0x80302988
    // 0x802B44E8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_33;
    // 0x802B44E8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_33:
    // 0x802B44EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B44F0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B44F4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B44F8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B44FC: addiu       $a1, $zero, 0x8E
    ctx->r5 = ADD32(0, 0X8E);
    // 0x802B4500: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B4504: jal         0x80302988
    // 0x802B4508: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_34;
    // 0x802B4508: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_34:
    // 0x802B450C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B4510: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B4514: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
L_802B4518:
    // 0x802B4518: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
L_802B451C:
    // 0x802B451C: beql        $t0, $zero, L_802B4730
    if (ctx->r8 == 0) {
        // 0x802B4520: lbu         $t9, 0x1D($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X1D);
            goto L_802B4730;
    }
    goto skip_11;
    // 0x802B4520: lbu         $t9, 0x1D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1D);
    skip_11:
    // 0x802B4524: jal         0x802D25D4
    // 0x802B4528: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D25D4(rdram, ctx);
        goto after_35;
    // 0x802B4528: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_35:
    // 0x802B452C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B4530: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    // 0x802B4534: jal         0x802D2990
    // 0x802B4538: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2990(rdram, ctx);
        goto after_36;
    // 0x802B4538: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_36:
    // 0x802B453C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B4540: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B4544: lwc1        $f0, 0x7BC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7BC);
    // 0x802B4548: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802B454C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B4550: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802B4554: nop

    // 0x802B4558: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802B455C: sub.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802B4560: swc1        $f6, 0x7BC($s0)
    MEM_W(0X7BC, ctx->r16) = ctx->f6.u32l;
    // 0x802B4564: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x802B4568: beq         $t1, $at, L_802B458C
    if (ctx->r9 == ctx->r1) {
        // 0x802B456C: nop
    
            goto L_802B458C;
    }
    // 0x802B456C: nop

    // 0x802B4570: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x802B4574: bne         $t1, $at, L_802B45CC
    if (ctx->r9 != ctx->r1) {
        // 0x802B4578: lui         $t2, 0x0
        ctx->r10 = S32(0X0 << 16);
            goto L_802B45CC;
    }
    // 0x802B4578: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802B457C: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x802B4580: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B4584: lw          $t3, 0x7168($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X7168);
    // 0x802B4588: bne         $t3, $at, L_802B45CC
    if (ctx->r11 != ctx->r1) {
        // 0x802B458C: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802B45CC;
    }
L_802B458C:
    // 0x802B458C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B4590: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B4594: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802B4598: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B459C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B45A0: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802B45A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B45A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B45AC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802B45B0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802B45B4: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802B45B8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802B45BC: jal         0x80317F54
    // 0x802B45C0: nop

    static_3_80317F54(rdram, ctx);
        goto after_37;
    // 0x802B45C0: nop

    after_37:
    // 0x802B45C4: b           L_802B45E4
    // 0x802B45C8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_802B45E4;
    // 0x802B45C8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_802B45CC:
    // 0x802B45CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B45D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B45D4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802B45D8: jal         0x80317F54
    // 0x802B45DC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_80317F54(rdram, ctx);
        goto after_38;
    // 0x802B45DC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_38:
    // 0x802B45E0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_802B45E4:
    // 0x802B45E4: jal         0x802CF4D0
    // 0x802B45E8: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    static_3_802CF4D0(rdram, ctx);
        goto after_39;
    // 0x802B45E8: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    after_39:
    // 0x802B45EC: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x802B45F0: jal         0x80234B48
    // 0x802B45F4: swc1        $f12, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f12.u32l;
    static_3_80234B48(rdram, ctx);
        goto after_40;
    // 0x802B45F4: swc1        $f12, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f12.u32l;
    after_40:
    // 0x802B45F8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B45FC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B4600: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802B4604: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802B4608: nop

    // 0x802B460C: bc1fl       L_802B4624
    if (!c1cs) {
        // 0x802B4610: lwc1        $f6, 0x5CC($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X5CC);
            goto L_802B4624;
    }
    goto skip_12;
    // 0x802B4610: lwc1        $f6, 0x5CC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5CC);
    skip_12:
    // 0x802B4614: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B4618: nop

    // 0x802B461C: swc1        $f10, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f10.u32l;
    // 0x802B4620: lwc1        $f6, 0x5CC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5CC);
L_802B4624:
    // 0x802B4624: lwc1        $f8, 0xAC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x802B4628: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B462C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B4630: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802B4634: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B4638: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B463C: lwc1        $f14, 0x9C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802B4640: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802B4644: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B4648: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x802B464C: nop

    // 0x802B4650: bc1f        L_802B4668
    if (!c1cs) {
        // 0x802B4654: swc1        $f10, 0xA0($s0)
        MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
            goto L_802B4668;
    }
    // 0x802B4654: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    // 0x802B4658: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B465C: nop

    // 0x802B4660: swc1        $f8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f8.u32l;
    // 0x802B4664: lwc1        $f14, 0x9C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X9C);
L_802B4668:
    // 0x802B4668: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B466C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B4670: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B4674: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B4678: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x802B467C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B4680: bc1fl       L_802B4690
    if (!c1cs) {
        // 0x802B4684: lwc1        $f0, 0xA0($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_802B4690;
    }
    goto skip_13;
    // 0x802B4684: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    skip_13:
    // 0x802B4688: swc1        $f18, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f18.u32l;
    // 0x802B468C: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
L_802B4690:
    // 0x802B4690: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802B4694: nop

    // 0x802B4698: bc1fl       L_802B46B4
    if (!c1cs) {
        // 0x802B469C: c.lt.s      $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
            goto L_802B46B4;
    }
    goto skip_14;
    // 0x802B469C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    skip_14:
    // 0x802B46A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B46A4: nop

    // 0x802B46A8: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    // 0x802B46AC: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802B46B0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
L_802B46B4:
    // 0x802B46B4: nop

    // 0x802B46B8: bc1fl       L_802B46CC
    if (!c1cs) {
        // 0x802B46BC: lwc1        $f6, 0xB4($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0XB4);
            goto L_802B46CC;
    }
    goto skip_15;
    // 0x802B46BC: lwc1        $f6, 0xB4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB4);
    skip_15:
    // 0x802B46C0: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
    // 0x802B46C4: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802B46C8: lwc1        $f6, 0xB4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB4);
L_802B46CC:
    // 0x802B46CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B46D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B46D4: sub.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802B46D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B46DC: lwc1        $f14, 0x9C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802B46E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B46E4: mul.s       $f12, $f16, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x802B46E8: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x802B46EC: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x802B46F0: nop

    // 0x802B46F4: bc1fl       L_802B4708
    if (!c1cs) {
        // 0x802B46F8: c.lt.s      $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
            goto L_802B4708;
    }
    goto skip_16;
    // 0x802B46F8: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    skip_16:
    // 0x802B46FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B4700: nop

    // 0x802B4704: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
L_802B4708:
    // 0x802B4708: nop

    // 0x802B470C: bc1fl       L_802B471C
    if (!c1cs) {
        // 0x802B4710: mfc1        $a2, $f12
        ctx->r6 = (int32_t)ctx->f12.u32l;
            goto L_802B471C;
    }
    goto skip_17;
    // 0x802B4710: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    skip_17:
    // 0x802B4714: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x802B4718: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
L_802B471C:
    // 0x802B471C: jal         0x802D27BC
    // 0x802B4720: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_802D273C(rdram, ctx);
        goto after_41;
    // 0x802B4720: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_41:
    // 0x802B4724: b           L_802B4784
    // 0x802B4728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802B4784;
    // 0x802B4728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B472C: lbu         $t9, 0x1D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1D);
L_802B4730:
    // 0x802B4730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B4734: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    // 0x802B4738: beq         $t9, $zero, L_802B4750
    if (ctx->r25 == 0) {
        // 0x802B473C: lwc1        $f6, 0xDC($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_802B4750;
    }
    // 0x802B473C: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802B4740: jal         0x802E32FC
    // 0x802B4744: lw          $a2, 0xE0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE0);
    static_3_802E32FC(rdram, ctx);
        goto after_42;
    // 0x802B4744: lw          $a2, 0xE0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE0);
    after_42:
    // 0x802B4748: b           L_802B4784
    // 0x802B474C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802B4784;
    // 0x802B474C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B4750:
    // 0x802B4750: lwc1        $f10, 0x7DC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7DC);
    // 0x802B4754: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x802B4758: nop

    // 0x802B475C: bc1fl       L_802B4784
    if (!c1cs) {
        // 0x802B4760: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B4784;
    }
    goto skip_18;
    // 0x802B4760: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_18:
    // 0x802B4764: lw          $a3, 0x1A0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1A0);
    // 0x802B4768: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802B476C: lw          $a2, 0xE0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE0);
    // 0x802B4770: lw          $t9, 0x1C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X1C);
    // 0x802B4774: lh          $t4, 0x18($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X18);
    // 0x802B4778: jalr        $t9
    // 0x802B477C: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x802B477C: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    after_43:
    // 0x802B4780: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B4784:
    // 0x802B4784: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B4788: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x802B478C: jr          $ra
    // 0x802B4790: nop

    return;
    // 0x802B4790: nop

;}
RECOMP_FUNC void D_802E0CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0D7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E0D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E0D84: jal         0x8028D9B4
    // 0x802E0D88: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D9B4(rdram, ctx);
        goto after_0;
    // 0x802E0D88: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802E0D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E0D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E0D94: jr          $ra
    // 0x802E0D98: nop

    return;
    // 0x802E0D98: nop

;}
RECOMP_FUNC void D_802D2790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2814: bne         $a0, $zero, L_802D282C
    if (ctx->r4 != 0) {
        // 0x802D2818: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802D282C;
    }
    // 0x802D2818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D281C: jal         0x802C67EC
    // 0x802D2820: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D2820: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_0:
    // 0x802D2824: beq         $v0, $zero, L_802D283C
    if (ctx->r2 == 0) {
        // 0x802D2828: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D283C;
    }
    // 0x802D2828: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802D282C:
    // 0x802D282C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D2830: jal         0x80302FE8
    // 0x802D2834: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80302FE8(rdram, ctx);
        goto after_1;
    // 0x802D2834: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802D2838: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802D283C:
    // 0x802D283C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2844: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802D2848: jr          $ra
    // 0x802D284C: nop

    return;
    // 0x802D284C: nop

;}
RECOMP_FUNC void D_80281A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281B14: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80281B18: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80281B1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281B20: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80281B24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281B28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80281B2C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80281B30: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80281B34: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x80281B38: jal         0x802D5010
    // 0x80281B3C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802D5010(rdram, ctx);
        goto after_0;
    // 0x80281B3C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80281B40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281B44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281B48: jr          $ra
    // 0x80281B4C: nop

    return;
    // 0x80281B4C: nop

;}
RECOMP_FUNC void D_802D3F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D3FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D3FD4: jal         0x8028D994
    // 0x802D3FD8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D994(rdram, ctx);
        goto after_0;
    // 0x802D3FD8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802D3FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D3FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D3FE4: jr          $ra
    // 0x802D3FE8: nop

    return;
    // 0x802D3FE8: nop

;}
RECOMP_FUNC void D_80290A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290AD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80290AD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80290ADC: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x80290AE0: sh          $zero, 0x648($a0)
    MEM_H(0X648, ctx->r4) = 0;
    // 0x80290AE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80290AE8: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80290AEC: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x80290AF0: jalr        $t9
    // 0x80290AF4: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80290AF4: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    after_0:
    // 0x80290AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80290AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80290B00: jr          $ra
    // 0x80290B04: nop

    return;
    // 0x80290B04: nop

;}
RECOMP_FUNC void D_80215830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80215830: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80215834: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x80215838: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021583C: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80215840: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80215844: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80215848: sub.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8021584C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80215850: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x80215854: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80215858: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021585C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80215860: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80215864: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80215868: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8021586C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80215870: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80215874: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80215878: swc1        $f10, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f10.u32l;
    // 0x8021587C: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80215880: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80215884: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80215888: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021588C: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80215890: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
    // 0x80215894: mul.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80215898: sub.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8021589C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802158A0: mul.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802158A4: nop

    // 0x802158A8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802158AC: nop

    // 0x802158B0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802158B4: sub.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802158B8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802158BC: mul.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802158C0: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802158C4: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802158C8: nop

    // 0x802158CC: mul.s       $f6, $f2, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x802158D0: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802158D4: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802158D8: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802158DC: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x802158E0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802158E4: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802158E8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802158EC: nop

    // 0x802158F0: bc1f        L_80215900
    if (!c1cs) {
        // 0x802158F4: nop
    
            goto L_80215900;
    }
    // 0x802158F4: nop

    // 0x802158F8: b           L_80215A50
    // 0x802158FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215A50;
    // 0x802158FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215900:
    // 0x80215900: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80215904: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80215908: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021590C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80215910: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80215914: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80215918: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021591C: sub.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80215920: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80215924: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80215928: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8021592C: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80215930: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80215934: sub.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80215938: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8021593C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80215940: mul.s       $f8, $f12, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80215944: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80215948: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021594C: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215950: nop

    // 0x80215954: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80215958: nop

    // 0x8021595C: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80215960: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80215964: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80215968: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8021596C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80215970: mul.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80215974: nop

    // 0x80215978: mul.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8021597C: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80215980: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215984: mul.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80215988: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8021598C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80215990: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80215994: nop

    // 0x80215998: bc1f        L_802159A8
    if (!c1cs) {
        // 0x8021599C: nop
    
            goto L_802159A8;
    }
    // 0x8021599C: nop

    // 0x802159A0: b           L_80215A50
    // 0x802159A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215A50;
    // 0x802159A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802159A8:
    // 0x802159A8: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802159AC: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802159B0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802159B4: sub.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802159B8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802159BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802159C0: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802159C4: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802159C8: sub.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x802159CC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802159D0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802159D4: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802159D8: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802159DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802159E0: sub.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x802159E4: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x802159E8: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802159EC: mul.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x802159F0: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802159F4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802159F8: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802159FC: nop

    // 0x80215A00: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80215A04: nop

    // 0x80215A08: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80215A0C: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80215A10: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80215A14: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80215A18: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80215A1C: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80215A20: nop

    // 0x80215A24: mul.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80215A28: sub.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80215A2C: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80215A30: mul.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215A34: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80215A38: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80215A3C: nop

    // 0x80215A40: bc1f        L_80215A50
    if (!c1cs) {
        // 0x80215A44: nop
    
            goto L_80215A50;
    }
    // 0x80215A44: nop

    // 0x80215A48: b           L_80215A50
    // 0x80215A4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215A50;
    // 0x80215A4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80215A50:
    // 0x80215A50: jr          $ra
    // 0x80215A54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80215A54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802B84EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B856C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B8570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B8574: beq         $a0, $zero, L_802B85B8
    if (ctx->r4 == 0) {
        // 0x802B8578: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802B85B8;
    }
    // 0x802B8578: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B857C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802B8580: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802B8584: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x802B8588: jal         0x802E8E48
    // 0x802B858C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802E8E48(rdram, ctx);
        goto after_0;
    // 0x802B858C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802B8590: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802B8594: jal         0x80320C88
    // 0x802B8598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320C88(rdram, ctx);
        goto after_1;
    // 0x802B8598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802B859C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802B85A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802B85A4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802B85A8: beql        $t8, $zero, L_802B85BC
    if (ctx->r24 == 0) {
        // 0x802B85AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B85BC;
    }
    goto skip_0;
    // 0x802B85AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802B85B0: jal         0x802C681C
    // 0x802B85B4: nop

    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x802B85B4: nop

    after_2:
L_802B85B8:
    // 0x802B85B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B85BC:
    // 0x802B85BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B85C0: jr          $ra
    // 0x802B85C4: nop

    return;
    // 0x802B85C4: nop

;}
RECOMP_FUNC void D_80230FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230FA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230FAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80230FB0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230FB4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80230FB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230FBC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80230FC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230FC4: jal         0x802371E0
    // 0x80230FC8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_802371E0(rdram, ctx);
        goto after_0;
    // 0x80230FC8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x80230FCC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80230FD0: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80230FD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80230FD8: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x80230FDC: beq         $a1, $zero, L_80231000
    if (ctx->r5 == 0) {
        // 0x80230FE0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80231000;
    }
    // 0x80230FE0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230FE4: beq         $a1, $at, L_80231010
    if (ctx->r5 == ctx->r1) {
        // 0x80230FE8: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_80231010;
    }
    // 0x80230FE8: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80230FEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80230FF0: beq         $a1, $at, L_80231024
    if (ctx->r5 == ctx->r1) {
        // 0x80230FF4: addiu       $s0, $zero, 0x1E
        ctx->r16 = ADD32(0, 0X1E);
            goto L_80231024;
    }
    // 0x80230FF4: addiu       $s0, $zero, 0x1E
    ctx->r16 = ADD32(0, 0X1E);
    // 0x80230FF8: b           L_80231038
    // 0x80230FFC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
        goto L_80231038;
    // 0x80230FFC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
L_80231000:
    // 0x80231000: jal         0x80231A24
    // 0x80231004: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80231004: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80231008: b           L_80231044
    // 0x8023100C: nop

        goto L_80231044;
    // 0x8023100C: nop

L_80231010:
    // 0x80231010: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231014: jal         0x80231A24
    // 0x80231018: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80231018: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x8023101C: b           L_80231044
    // 0x80231020: nop

        goto L_80231044;
    // 0x80231020: nop

L_80231024:
    // 0x80231024: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231028: jal         0x80231A24
    // 0x8023102C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x8023102C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x80231030: b           L_80231044
    // 0x80231034: nop

        goto L_80231044;
    // 0x80231034: nop

L_80231038:
    // 0x80231038: jal         0x80231A24
    // 0x8023103C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x8023103C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x80231040: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
L_80231044:
    // 0x80231044: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231048: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023104C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80231050: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80231054: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80231058: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8023105C: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    // 0x80231060: jal         0x8022C838
    // 0x80231064: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    static_3_8022C838(rdram, ctx);
        goto after_5;
    // 0x80231064: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    after_5:
    // 0x80231068: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023106C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80231070: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80231074: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80231078: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023107C: jal         0x8022CA14
    // 0x80231080: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8022CA14(rdram, ctx);
        goto after_6;
    // 0x80231080: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x80231084: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80231088: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023108C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80231090: jr          $ra
    // 0x80231094: nop

    return;
    // 0x80231094: nop

;}
RECOMP_FUNC void D_802B8498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B8518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B851C: bne         $a0, $zero, L_802B8534
    if (ctx->r4 != 0) {
        // 0x802B8520: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B8534;
    }
    // 0x802B8520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B8524: jal         0x802C67EC
    // 0x802B8528: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802B8528: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_0:
    // 0x802B852C: beq         $v0, $zero, L_802B8558
    if (ctx->r2 == 0) {
        // 0x802B8530: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802B8558;
    }
    // 0x802B8530: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802B8534:
    // 0x802B8534: jal         0x80320C38
    // 0x802B8538: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80320C38(rdram, ctx);
        goto after_1;
    // 0x802B8538: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802B853C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802B8540: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802B8544: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802B8548: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x802B854C: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x802B8550: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x802B8554: sh          $zero, 0x80($a0)
    MEM_H(0X80, ctx->r4) = 0;
L_802B8558:
    // 0x802B8558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B855C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B8560: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802B8564: jr          $ra
    // 0x802B8568: nop

    return;
    // 0x802B8568: nop

;}
RECOMP_FUNC void D_802EDF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EE008: jr          $ra
    // 0x802EE00C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EE00C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802438AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802438AC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802438B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802438B4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802438B8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x802438BC: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x802438C0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x802438C4: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x802438C8: bne         $a2, $zero, L_802438D8
    if (ctx->r6 != 0) {
        // 0x802438CC: sh          $t6, 0x46($sp)
        MEM_H(0X46, ctx->r29) = ctx->r14;
            goto L_802438D8;
    }
    // 0x802438CC: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
    // 0x802438D0: b           L_80243AA4
    // 0x802438D4: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
        goto L_80243AA4;
    // 0x802438D4: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
L_802438D8:
    // 0x802438D8: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x802438DC: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x802438E0: beql        $t7, $zero, L_8024394C
    if (ctx->r15 == 0) {
        // 0x802438E4: lwc1        $f2, 0x18($t0)
        ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
            goto L_8024394C;
    }
    goto skip_0;
    // 0x802438E4: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
    skip_0:
    // 0x802438E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802438EC: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x802438F0: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x802438F4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x802438F8: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x802438FC: jalr        $t9
    // 0x80243900: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80243900: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_0:
    // 0x80243904: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x80243908: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8024390C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80243910: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x80243914: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x80243918: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8024391C: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80243920: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80243924: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80243928: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8024392C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x80243930: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x80243934: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x80243938: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8024393C: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x80243940: b           L_80243AA0
    // 0x80243944: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
        goto L_80243AA0;
    // 0x80243944: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80243948: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
L_8024394C:
    // 0x8024394C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80243950: ldc1        $f4, 0x0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X0);
    // 0x80243954: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x80243958: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024395C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80243960: nop

    // 0x80243964: bc1fl       L_8024397C
    if (!c1cs) {
        // 0x80243968: lui         $at, 0x4700
        ctx->r1 = S32(0X4700 << 16);
            goto L_8024397C;
    }
    goto skip_1;
    // 0x80243968: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    skip_1:
    // 0x8024396C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80243970: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x80243974: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80243978: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
L_8024397C:
    // 0x8024397C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80243980: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80243984: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x80243988: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8024398C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80243990: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x80243994: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80243998: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8024399C: nop

    // 0x802439A0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802439A4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802439A8: swc1        $f4, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f4.u32l;
    // 0x802439AC: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x802439B0: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802439B4: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x802439B8: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x802439BC: lwc1        $f10, 0x18($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X18);
    // 0x802439C0: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x802439C4: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802439C8: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x802439CC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802439D0: nop

    // 0x802439D4: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x802439D8: nop

    // 0x802439DC: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802439E0: sub.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802439E4: swc1        $f18, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f18.u32l;
    // 0x802439E8: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x802439EC: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x802439F0: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x802439F4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802439F8: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x802439FC: jalr        $t9
    // 0x80243A00: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80243A00: nop

    after_1:
    // 0x80243A04: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80243A08: lh          $t5, 0x46($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X46);
    // 0x80243A0C: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80243A10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80243A14: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80243A18: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243A1C: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80243A20: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80243A24: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80243A28: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80243A2C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80243A30: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80243A34: sll         $t5, $t2, 1
    ctx->r13 = S32(ctx->r10 << 1);
    // 0x80243A38: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x80243A3C: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80243A40: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80243A44: sll         $t4, $t9, 16
    ctx->r12 = S32(ctx->r25 << 16);
    // 0x80243A48: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x80243A4C: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80243A50: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80243A54: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80243A58: lw          $t3, 0x24($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X24);
    // 0x80243A5C: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x80243A60: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x80243A64: andi        $t9, $t3, 0xFF
    ctx->r25 = ctx->r11 & 0XFF;
    // 0x80243A68: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x80243A6C: or          $t4, $t5, $at
    ctx->r12 = ctx->r13 | ctx->r1;
    // 0x80243A70: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x80243A74: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x80243A78: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x80243A7C: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x80243A80: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x80243A84: jal         0x802375F0
    // 0x80243A88: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x80243A88: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_2:
    // 0x80243A8C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80243A90: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80243A94: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80243A98: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x80243A9C: sw          $zero, 0x24($t0)
    MEM_W(0X24, ctx->r8) = 0;
L_80243AA0:
    // 0x80243AA0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80243AA4:
    // 0x80243AA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80243AA8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80243AAC: jr          $ra
    // 0x80243AB0: nop

    return;
    // 0x80243AB0: nop

;}
RECOMP_FUNC void func_8029C46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void D_802814A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281524: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80281528: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028152C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80281530: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x80281534: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x80281538: lbu         $t6, 0x364($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X364);
    // 0x8028153C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80281540: beql        $t6, $zero, L_80281608
    if (ctx->r14 == 0) {
        // 0x80281544: lbu         $t2, 0x555($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X555);
            goto L_80281608;
    }
    goto skip_0;
    // 0x80281544: lbu         $t2, 0x555($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X555);
    skip_0:
    // 0x80281548: jal         0x802D25F4
    // 0x8028154C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    static_3_802D25F4(rdram, ctx);
        goto after_0;
    // 0x8028154C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x80281550: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x80281554: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281558: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8028155C: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x80281560: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80281564: lh          $t7, 0x98($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X98);
    // 0x80281568: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x8028156C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x80281570: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x80281574: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80281578: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8028157C: jalr        $t9
    // 0x80281580: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80281580: nop

    after_1:
    // 0x80281584: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x80281588: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8028158C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80281590: lh          $t8, 0x50($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X50);
    // 0x80281594: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80281598: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x8028159C: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802815A0: jalr        $t9
    // 0x802815A4: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802815A4: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_2:
    // 0x802815A8: jal         0x8022970C
    // 0x802815AC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802815AC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x802815B0: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802815B4: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802815B8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802815BC: lui         $a1, 0x4049
    ctx->r5 = S32(0X4049 << 16);
    // 0x802815C0: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802815C4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x802815C8: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802815CC: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x802815D0: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x802815D4: jal         0x802D01D4
    // 0x802815D8: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x802815D8: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x802815DC: addiu       $a0, $s0, 0x45C
    ctx->r4 = ADD32(ctx->r16, 0X45C);
    // 0x802815E0: jal         0x80228DE0
    // 0x802815E4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80228DE0(rdram, ctx);
        goto after_5;
    // 0x802815E4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x802815E8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802815EC: sb          $t0, 0x504($s0)
    MEM_B(0X504, ctx->r16) = ctx->r8;
    // 0x802815F0: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x802815F4: jal         0x80228DE0
    // 0x802815F8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80228DE0(rdram, ctx);
        goto after_6;
    // 0x802815F8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_6:
    // 0x802815FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80281600: sb          $t1, 0x414($s0)
    MEM_B(0X414, ctx->r16) = ctx->r9;
    // 0x80281604: lbu         $t2, 0x555($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X555);
L_80281608:
    // 0x80281608: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8028160C: beql        $t2, $zero, L_80281660
    if (ctx->r10 == 0) {
        // 0x80281610: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80281660;
    }
    goto skip_1;
    // 0x80281610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80281614: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x80281618: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8028161C: beq         $t3, $at, L_8028165C
    if (ctx->r11 == ctx->r1) {
        // 0x80281620: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_8028165C;
    }
    // 0x80281620: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80281624: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281628: lwc1        $f0, 0x548($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X548);
    // 0x8028162C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80281630: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80281634: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80281638: nop

    // 0x8028163C: bc1fl       L_80281658
    if (!c1cs) {
        // 0x80281640: add.s       $f16, $f0, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
            goto L_80281658;
    }
    goto skip_2;
    // 0x80281640: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    skip_2:
    // 0x80281644: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80281648: sb          $t4, 0x19B($s0)
    MEM_B(0X19B, ctx->r16) = ctx->r12;
    // 0x8028164C: b           L_8028165C
    // 0x80281650: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
        goto L_8028165C;
    // 0x80281650: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
    // 0x80281654: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
L_80281658:
    // 0x80281658: swc1        $f16, 0x548($s0)
    MEM_W(0X548, ctx->r16) = ctx->f16.u32l;
L_8028165C:
    // 0x8028165C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80281660:
    // 0x80281660: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80281664: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80281668: jr          $ra
    // 0x8028166C: nop

    return;
    // 0x8028166C: nop

;}
RECOMP_FUNC void D_8022EF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022EF90: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022EF94: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022EF98: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x8022EF9C: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x8022EFA0: subu        $t7, $a0, $t6
    ctx->r15 = SUB32(ctx->r4, ctx->r14);
    // 0x8022EFA4: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8022EFA8: mflo        $t8
    ctx->r24 = lo;
    // 0x8022EFAC: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x8022EFB0: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x8022EFB4: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x8022EFB8: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x8022EFBC: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x8022EFC0: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x8022EFC4: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x8022EFC8: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x8022EFCC: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x8022EFD0: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x8022EFD4: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x8022EFD8: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x8022EFDC: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x8022EFE0: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x8022EFE4: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x8022EFE8: sw          $a2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r6;
    // 0x8022EFEC: sw          $a3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r7;
    // 0x8022EFF0: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x8022EFF4: lw          $v0, 0x40($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X40);
    // 0x8022EFF8: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8022EFFC: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x8022F000: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x8022F004: lhu         $s0, 0x14($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X14);
    // 0x8022F008: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8022F00C: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
    // 0x8022F010: lbu         $v1, 0x48($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X48);
    // 0x8022F014: lhu         $s7, 0x4A($a1)
    ctx->r23 = MEM_HU(ctx->r5, 0X4A);
    // 0x8022F018: lwc1        $f26, 0x2C($v0)
    ctx->f26.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8022F01C: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x8022F020: lwc1        $f6, 0x30($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8022F024: lwc1        $f4, 0x108($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X108);
    // 0x8022F028: sll         $fp, $v1, 16
    ctx->r30 = S32(ctx->r3 << 16);
    // 0x8022F02C: sra         $t0, $fp, 16
    ctx->r8 = S32(SIGNED(ctx->r30) >> 16);
    // 0x8022F030: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022F034: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x8022F038: or          $fp, $t0, $zero
    ctx->r30 = ctx->r8 | 0;
    // 0x8022F03C: addiu       $a2, $sp, 0xD4
    ctx->r6 = ADD32(ctx->r29, 0XD4);
    // 0x8022F040: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x8022F044: lwc1        $f16, 0x34($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8022F048: lwc1        $f10, 0x10C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10C);
    // 0x8022F04C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8022F050: swc1        $f18, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f18.u32l;
    // 0x8022F054: lwc1        $f4, 0x110($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X110);
    // 0x8022F058: lwc1        $f6, 0x38($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8022F05C: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x8022F060: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022F064: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8022F068: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x8022F06C: jal         0x80218C74
    // 0x8022F070: sub.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl - ctx->f6.fl;
    static_3_80218C74(rdram, ctx);
        goto after_0;
    // 0x8022F070: sub.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x8022F074: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8022F078: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8022F07C: sll         $t4, $s7, 12
    ctx->r12 = S32(ctx->r23 << 12);
    // 0x8022F080: or          $s7, $t4, $zero
    ctx->r23 = ctx->r12 | 0;
    // 0x8022F084: lw          $t3, 0x1C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X1C);
    // 0x8022F088: sw          $s0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r16;
    // 0x8022F08C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022F090: blez        $s0, L_8022F2E4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8022F094: sw          $t3, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = ctx->r11;
            goto L_8022F2E4;
    }
    // 0x8022F094: sw          $t3, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r11;
    // 0x8022F098: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
L_8022F09C:
    // 0x8022F09C: sll         $t6, $s3, 5
    ctx->r14 = S32(ctx->r19 << 5);
    // 0x8022F0A0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8022F0A4: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x8022F0A8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022F0AC: lhu         $t8, 0x112($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X112);
    // 0x8022F0B0: beql        $v0, $at, L_8022F2D8
    if (ctx->r2 == ctx->r1) {
        // 0x8022F0B4: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_8022F2D8;
    }
    goto skip_0;
    // 0x8022F0B4: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    skip_0:
    // 0x8022F0B8: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x8022F0BC: lw          $t0, 0xF8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF8);
    // 0x8022F0C0: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8022F0C4: and         $t9, $v1, $t8
    ctx->r25 = ctx->r3 & ctx->r24;
    // 0x8022F0C8: beq         $t9, $zero, L_8022F2D4
    if (ctx->r25 == 0) {
        // 0x8022F0CC: addu        $t2, $t0, $t1
        ctx->r10 = ADD32(ctx->r8, ctx->r9);
            goto L_8022F2D4;
    }
    // 0x8022F0CC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8022F0D0: lw          $s1, 0x0($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X0);
    // 0x8022F0D4: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8022F0D8: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8022F0DC: bne         $s1, $zero, L_8022F0F8
    if (ctx->r17 != 0) {
        // 0x8022F0E0: lhu         $t3, 0x116($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X116);
            goto L_8022F0F8;
    }
    // 0x8022F0E0: lhu         $t3, 0x116($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X116);
    // 0x8022F0E4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022F0E8: jal         0x80231A24
    // 0x8022F0EC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022F0EC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x8022F0F0: b           L_8022F2D8
    // 0x8022F0F4: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
        goto L_8022F2D8;
    // 0x8022F0F4: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_8022F0F8:
    // 0x8022F0F8: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8022F0FC: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8022F100: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8022F104: and         $t4, $v1, $t3
    ctx->r12 = ctx->r3 & ctx->r11;
    // 0x8022F108: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022F10C: sub.s       $f24, $f16, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8022F110: bne         $t4, $zero, L_8022F160
    if (ctx->r12 != 0) {
        // 0x8022F114: sub.s       $f20, $f4, $f28
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f28.fl;
            goto L_8022F160;
    }
    // 0x8022F114: sub.s       $f20, $f4, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f28.fl;
    // 0x8022F118: negu        $a0, $fp
    ctx->r4 = SUB32(0, ctx->r30);
    // 0x8022F11C: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x8022F120: swc1        $f22, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f22.u32l;
    // 0x8022F124: swc1        $f24, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f24.u32l;
    // 0x8022F128: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8022F12C: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x8022F130: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x8022F134: jal         0x80218C74
    // 0x8022F138: addiu       $s2, $s5, 0x218
    ctx->r18 = ADD32(ctx->r21, 0X218);
    static_3_80218C74(rdram, ctx);
        goto after_2;
    // 0x8022F138: addiu       $s2, $s5, 0x218
    ctx->r18 = ADD32(ctx->r21, 0X218);
    after_2:
    // 0x8022F13C: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x8022F140: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8022F144: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022F148: lw          $a1, 0xE0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE0);
    // 0x8022F14C: lw          $a2, 0xDC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XDC);
    // 0x8022F150: jal         0x8020802C
    // 0x8022F154: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_8020802C(rdram, ctx);
        goto after_3;
    // 0x8022F154: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8022F158: beql        $v0, $zero, L_8022F2D8
    if (ctx->r2 == 0) {
        // 0x8022F15C: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_8022F2D8;
    }
    goto skip_1;
    // 0x8022F15C: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    skip_1:
L_8022F160:
    // 0x8022F160: mul.s       $f8, $f22, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8022F164: nop

    // 0x8022F168: mul.s       $f10, $f24, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x8022F16C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022F170: mul.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8022F174: jal         0x8022AA40
    // 0x8022F178: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_4;
    // 0x8022F178: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_4:
    // 0x8022F17C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022F180: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022F184: lwc1        $f2, 0x138($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X138);
    // 0x8022F188: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8022F18C: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x8022F190: nop

    // 0x8022F194: bc1f        L_8022F1B0
    if (!c1cs) {
        // 0x8022F198: nop
    
            goto L_8022F1B0;
    }
    // 0x8022F198: nop

    // 0x8022F19C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8022F1A0: jal         0x8022F378
    // 0x8022F1A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8022F378(rdram, ctx);
        goto after_5;
    // 0x8022F1A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8022F1A8: b           L_8022F1C8
    // 0x8022F1AC: andi        $s2, $v0, 0xFF
    ctx->r18 = ctx->r2 & 0XFF;
        goto L_8022F1C8;
    // 0x8022F1AC: andi        $s2, $v0, 0xFF
    ctx->r18 = ctx->r2 & 0XFF;
L_8022F1B0:
    // 0x8022F1B0: mul.s       $f6, $f2, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8022F1B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022F1B8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8022F1BC: jal         0x8022F378
    // 0x8022F1C0: nop

    static_3_8022F378(rdram, ctx);
        goto after_6;
    // 0x8022F1C0: nop

    after_6:
    // 0x8022F1C4: andi        $s2, $v0, 0xFF
    ctx->r18 = ctx->r2 & 0XFF;
L_8022F1C8:
    // 0x8022F1C8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8022F1CC: beql        $v0, $at, L_8022F2D8
    if (ctx->r2 == ctx->r1) {
        // 0x8022F1D0: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_8022F2D8;
    }
    goto skip_2;
    // 0x8022F1D0: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    skip_2:
    // 0x8022F1D4: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x8022F1D8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022F1DC: or          $t8, $s7, $s3
    ctx->r24 = ctx->r23 | ctx->r19;
    // 0x8022F1E0: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8022F1E4: bne         $at, $zero, L_8022F210
    if (ctx->r1 != 0) {
        // 0x8022F1E8: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_8022F210;
    }
    // 0x8022F1E8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8022F1EC: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8022F1F0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022F1F4: beql        $t7, $zero, L_8022F228
    if (ctx->r15 == 0) {
        // 0x8022F1F8: lbu         $t1, 0x11($s1)
        ctx->r9 = MEM_BU(ctx->r17, 0X11);
            goto L_8022F228;
    }
    goto skip_3;
    // 0x8022F1F8: lbu         $t1, 0x11($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X11);
    skip_3:
    // 0x8022F1FC: jal         0x80231A24
    // 0x8022F200: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_7;
    // 0x8022F200: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_7:
    // 0x8022F204: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022F208: b           L_8022F224
    // 0x8022F20C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
        goto L_8022F224;
    // 0x8022F20C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_8022F210:
    // 0x8022F210: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022F214: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8022F218: sw          $t8, -0x7638($at)
    MEM_W(-0X7638, ctx->r1) = ctx->r24;
    // 0x8022F21C: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x8022F220: sw          $t0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r8;
L_8022F224:
    // 0x8022F224: lbu         $t1, 0x11($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X11);
L_8022F228:
    // 0x8022F228: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022F22C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8022F230: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8022F234: beq         $t2, $zero, L_8022F284
    if (ctx->r10 == 0) {
        // 0x8022F238: lw          $a3, 0xC8($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XC8);
            goto L_8022F284;
    }
    // 0x8022F238: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
    // 0x8022F23C: lwc1        $f8, 0x30($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X30);
    // 0x8022F240: lw          $t3, 0x118($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X118);
    // 0x8022F244: cvt.d.s     $f16, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f16.d = CVT_D_S(ctx->f22.fl);
    // 0x8022F248: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8022F24C: lwc1        $f10, 0x34($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X34);
    // 0x8022F250: cvt.d.s     $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f18.d = CVT_D_S(ctx->f24.fl);
    // 0x8022F254: cvt.d.s     $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f4.d = CVT_D_S(ctx->f26.fl);
    // 0x8022F258: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8022F25C: sdc1        $f4, 0x38($sp)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X38, ctx->r29);
    // 0x8022F260: sdc1        $f18, 0x20($sp)
    CHECK_FR(ctx, 18);
    SD(ctx->f18.u64, 0X20, ctx->r29);
    // 0x8022F264: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022F268: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022F26C: sdc1        $f16, 0x18($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X18, ctx->r29);
    // 0x8022F270: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8022F274: jal         0x8020672C
    // 0x8022F278: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    static_3_8020672C(rdram, ctx);
        goto after_8;
    // 0x8022F278: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x8022F27C: b           L_8022F2D8
    // 0x8022F280: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
        goto L_8022F2D8;
    // 0x8022F280: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_8022F284:
    // 0x8022F284: lw          $t4, 0x8($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X8);
    // 0x8022F288: sll         $t5, $s2, 3
    ctx->r13 = S32(ctx->r18 << 3);
    // 0x8022F28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022F290: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8022F294: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x8022F298: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022F29C: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x8022F2A0: beq         $t7, $zero, L_8022F2CC
    if (ctx->r15 == 0) {
        // 0x8022F2A4: nop
    
            goto L_8022F2CC;
    }
    // 0x8022F2A4: nop

    // 0x8022F2A8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8022F2AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022F2B0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022F2B4: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x8022F2B8: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x8022F2BC: jal         0x8022F7F4
    // 0x8022F2C0: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    static_3_8022F7F4(rdram, ctx);
        goto after_9;
    // 0x8022F2C0: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    after_9:
    // 0x8022F2C4: b           L_8022F2D8
    // 0x8022F2C8: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
        goto L_8022F2D8;
    // 0x8022F2C8: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_8022F2CC:
    // 0x8022F2CC: jal         0x8022F490
    // 0x8022F2D0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    static_3_8022F490(rdram, ctx);
        goto after_10;
    // 0x8022F2D0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_10:
L_8022F2D4:
    // 0x8022F2D4: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_8022F2D8:
    // 0x8022F2D8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022F2DC: bnel        $s3, $t8, L_8022F09C
    if (ctx->r19 != ctx->r24) {
        // 0x8022F2E0: lw          $t7, 0xBC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XBC);
            goto L_8022F09C;
    }
    goto skip_4;
    // 0x8022F2E0: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    skip_4:
L_8022F2E4:
    // 0x8022F2E4: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x8022F2E8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x8022F2EC: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x8022F2F0: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x8022F2F4: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x8022F2F8: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x8022F2FC: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x8022F300: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x8022F304: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x8022F308: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x8022F30C: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x8022F310: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x8022F314: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x8022F318: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x8022F31C: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x8022F320: jr          $ra
    // 0x8022F324: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x8022F324: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void D_80285F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285FD4: addiu       $sp, $sp, -0x1A0
    ctx->r29 = ADD32(ctx->r29, -0X1A0);
    // 0x80285FD8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80285FDC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80285FE0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80285FE4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80285FE8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80285FEC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80285FF0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x80285FF4: sw          $a1, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r5;
    // 0x80285FF8: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x80285FFC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80286000: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x80286004: beql        $t7, $zero, L_80286A40
    if (ctx->r15 == 0) {
        // 0x80286008: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_80286A40;
    }
    goto skip_0;
    // 0x80286008: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x8028600C: jal         0x8022331C
    // 0x80286010: nop

    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x80286010: nop

    after_0:
    // 0x80286014: jal         0x802233EC
    // 0x80286018: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_1;
    // 0x80286018: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    after_1:
    // 0x8028601C: jal         0x8022342C
    // 0x80286020: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_2;
    // 0x80286020: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_2:
    // 0x80286024: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x80286028: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x8028602C: jal         0x80228DE0
    // 0x80286030: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x80286030: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    after_3:
    // 0x80286034: addiu       $s0, $sp, 0xD0
    ctx->r16 = ADD32(ctx->r29, 0XD0);
    // 0x80286038: jal         0x8022970C
    // 0x8028603C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x8028603C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80286040: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80286044: addiu       $a0, $zero, 0xFFF
    ctx->r4 = ADD32(0, 0XFFF);
    // 0x80286048: jal         0x802233EC
    // 0x8028604C: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    static_3_802233EC(rdram, ctx);
        goto after_5;
    // 0x8028604C: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80286050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80286054: jal         0x80222E98
    // 0x80286058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80222E98(rdram, ctx);
        goto after_6;
    // 0x80286058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8028605C: jal         0x80317DA8
    // 0x80286060: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    static_3_80317DA8(rdram, ctx);
        goto after_7;
    // 0x80286060: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_7:
    // 0x80286064: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80286068: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x8028606C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80286070: swc1        $f0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f0.u32l;
    // 0x80286074: bnel        $v1, $at, L_80286088
    if (ctx->r3 != ctx->r1) {
        // 0x80286078: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80286088;
    }
    goto skip_1;
    // 0x80286078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8028607C: b           L_80286088
    // 0x80286080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80286088;
    // 0x80286080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80286084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80286088:
    // 0x80286088: beq         $v0, $zero, L_802861B0
    if (ctx->r2 == 0) {
        // 0x8028608C: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_802861B0;
    }
    // 0x8028608C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80286090: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80286094: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80286098: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    // 0x8028609C: jal         0x802AEE54
    // 0x802860A0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_8;
    // 0x802860A0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_8:
    // 0x802860A4: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x802860A8: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x802860AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802860B0: bne         $v0, $t8, L_802860D4
    if (ctx->r2 != ctx->r24) {
        // 0x802860B4: lwc1        $f6, 0xD0($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
            goto L_802860D4;
    }
    // 0x802860B4: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x802860B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802860BC: nop

    // 0x802860C0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802860C4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802860C8: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x802860CC: b           L_802860DC
    // 0x802860D0: lui         $at, 0x4368
    ctx->r1 = S32(0X4368 << 16);
        goto L_802860DC;
    // 0x802860D0: lui         $at, 0x4368
    ctx->r1 = S32(0X4368 << 16);
L_802860D4:
    // 0x802860D4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802860D8: lui         $at, 0x4368
    ctx->r1 = S32(0X4368 << 16);
L_802860DC:
    // 0x802860DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802860E0: lwc1        $f10, 0x100($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X100);
    // 0x802860E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802860E8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802860EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802860F0: lui         $at, 0x42A6
    ctx->r1 = S32(0X42A6 << 16);
    // 0x802860F4: lbu         $t3, 0x235($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X235);
    // 0x802860F8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802860FC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80286100: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80286104: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80286108: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8028610C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80286110: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x80286114: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80286118: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x8028611C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80286120: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80286124: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80286128: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8028612C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80286130: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80286134: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x80286138: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8028613C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80286140: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80286144: beql        $t3, $zero, L_80286188
    if (ctx->r11 == 0) {
        // 0x80286148: lw          $a0, 0x70($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X70);
            goto L_80286188;
    }
    goto skip_2;
    // 0x80286148: lw          $a0, 0x70($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X70);
    skip_2:
    // 0x8028614C: lw          $a0, 0x6C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6C);
    // 0x80286150: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80286154: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80286158: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8028615C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80286160: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80286164: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80286168: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x8028616C: jal         0x802344F4
    // 0x80286170: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_9;
    // 0x80286170: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_9:
    // 0x80286174: jal         0x8023413C
    // 0x80286178: lw          $a0, 0x6C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6C);
    static_3_8023413C(rdram, ctx);
        goto after_10;
    // 0x80286178: lw          $a0, 0x6C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6C);
    after_10:
    // 0x8028617C: b           L_802861A8
    // 0x80286180: nop

        goto L_802861A8;
    // 0x80286180: nop

    // 0x80286184: lw          $a0, 0x70($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X70);
L_80286188:
    // 0x80286188: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8028618C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80286190: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80286194: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80286198: jal         0x802344F4
    // 0x8028619C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    static_3_802344F4(rdram, ctx);
        goto after_11;
    // 0x8028619C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_11:
    // 0x802861A0: jal         0x8023413C
    // 0x802861A4: lw          $a0, 0x70($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X70);
    static_3_8023413C(rdram, ctx);
        goto after_12;
    // 0x802861A4: lw          $a0, 0x70($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X70);
    after_12:
L_802861A8:
    // 0x802861A8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802861AC: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
L_802861B0:
    // 0x802861B0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802861B4: bnel        $v1, $at, L_802861C8
    if (ctx->r3 != ctx->r1) {
        // 0x802861B8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802861C8;
    }
    goto skip_3;
    // 0x802861B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x802861BC: b           L_802861C8
    // 0x802861C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802861C8;
    // 0x802861C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802861C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802861C8:
    // 0x802861C8: bnel        $v0, $zero, L_80286264
    if (ctx->r2 != 0) {
        // 0x802861CC: lw          $v0, 0x4($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X4);
            goto L_80286264;
    }
    goto skip_4;
    // 0x802861CC: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    skip_4:
    // 0x802861D0: lbu         $t8, 0x235($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X235);
    // 0x802861D4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802861D8: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802861DC: beq         $t8, $zero, L_8028622C
    if (ctx->r24 == 0) {
        // 0x802861E0: addiu       $a3, $zero, 0x2
        ctx->r7 = ADD32(0, 0X2);
            goto L_8028622C;
    }
    // 0x802861E0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802861E4: lw          $a0, 0x70($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X70);
    // 0x802861E8: addiu       $t9, $zero, 0xE8
    ctx->r25 = ADD32(0, 0XE8);
    // 0x802861EC: addiu       $t1, $zero, 0x53
    ctx->r9 = ADD32(0, 0X53);
    // 0x802861F0: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x802861F4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802861F8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802861FC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80286200: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80286204: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80286208: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8028620C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80286210: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    // 0x80286214: jal         0x802344F4
    // 0x80286218: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_13;
    // 0x80286218: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_13:
    // 0x8028621C: jal         0x8023413C
    // 0x80286220: lw          $a0, 0x70($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X70);
    static_3_8023413C(rdram, ctx);
        goto after_14;
    // 0x80286220: lw          $a0, 0x70($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X70);
    after_14:
    // 0x80286224: b           L_80286264
    // 0x80286228: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
        goto L_80286264;
    // 0x80286228: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
L_8028622C:
    // 0x8028622C: lw          $a0, 0x6C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6C);
    // 0x80286230: addiu       $t4, $zero, 0xE8
    ctx->r12 = ADD32(0, 0XE8);
    // 0x80286234: addiu       $t5, $zero, 0x53
    ctx->r13 = ADD32(0, 0X53);
    // 0x80286238: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8028623C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80286240: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80286244: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80286248: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8028624C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80286250: jal         0x802344F4
    // 0x80286254: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    static_3_802344F4(rdram, ctx);
        goto after_15;
    // 0x80286254: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_15:
    // 0x80286258: jal         0x8023413C
    // 0x8028625C: lw          $a0, 0x6C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6C);
    static_3_8023413C(rdram, ctx);
        goto after_16;
    // 0x8028625C: lw          $a0, 0x6C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X6C);
    after_16:
    // 0x80286260: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
L_80286264:
    // 0x80286264: beql        $v0, $zero, L_80286294
    if (ctx->r2 == 0) {
        // 0x80286268: lw          $t1, 0x78($s2)
        ctx->r9 = MEM_W(ctx->r18, 0X78);
            goto L_80286294;
    }
    goto skip_5;
    // 0x80286268: lw          $t1, 0x78($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X78);
    skip_5:
    // 0x8028626C: lw          $a2, 0x1A0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1A0);
    // 0x80286270: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x80286274: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x80286278: lh          $t8, 0x60($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X60);
    // 0x8028627C: jalr        $t9
    // 0x80286280: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x80286280: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_17:
    // 0x80286284: jal         0x803182BC
    // 0x80286288: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    static_3_803182BC(rdram, ctx);
        goto after_18;
    // 0x80286288: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_18:
    // 0x8028628C: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    // 0x80286290: lw          $t1, 0x78($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X78);
L_80286294:
    // 0x80286294: andi        $t2, $t1, 0x2000
    ctx->r10 = ctx->r9 & 0X2000;
    // 0x80286298: beql        $t2, $zero, L_80286340
    if (ctx->r10 == 0) {
        // 0x8028629C: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_80286340;
    }
    goto skip_6;
    // 0x8028629C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_6:
    // 0x802862A0: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x802862A4: lw          $a3, 0x6F00($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X6F00);
    // 0x802862A8: beq         $a3, $zero, L_8028633C
    if (ctx->r7 == 0) {
        // 0x802862AC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8028633C;
    }
    // 0x802862AC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802862B0: jal         0x80318510
    // 0x802862B4: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    static_3_80318510(rdram, ctx);
        goto after_19;
    // 0x802862B4: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    after_19:
    // 0x802862B8: lw          $t4, 0x238($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X238);
    // 0x802862BC: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x802862C0: nop

    // 0x802862C4: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802862C8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802862CC: nop

    // 0x802862D0: bc1f        L_8028633C
    if (!c1cs) {
        // 0x802862D4: nop
    
            goto L_8028633C;
    }
    // 0x802862D4: nop

    // 0x802862D8: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x802862DC: addiu       $s4, $sp, 0x160
    ctx->r20 = ADD32(ctx->r29, 0X160);
    // 0x802862E0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x802862E4: lw          $a3, 0x6F00($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X6F00);
    // 0x802862E8: lw          $a2, 0x1A0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X1A0);
    // 0x802862EC: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x802862F0: lh          $t6, 0x60($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X60);
    // 0x802862F4: jalr        $t9
    // 0x802862F8: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x802862F8: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    after_20:
    // 0x802862FC: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x80286300: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x80286304: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x80286308: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8028630C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80286310: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80286314: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80286318: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8028631C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80286320: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80286324: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80286328: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x8028632C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80286330: addiu       $a3, $sp, 0x118
    ctx->r7 = ADD32(ctx->r29, 0X118);
    // 0x80286334: jal         0x802B7170
    // 0x80286338: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_802B7170(rdram, ctx);
        goto after_21;
    // 0x80286338: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_21:
L_8028633C:
    // 0x8028633C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_80286340:
    // 0x80286340: addiu       $s4, $sp, 0x160
    ctx->r20 = ADD32(ctx->r29, 0X160);
    // 0x80286344: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80286348: lbu         $t4, 0x6EFC($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X6EFC);
    // 0x8028634C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80286350: blez        $t4, L_80286478
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80286354: addu        $t5, $v0, $s0
        ctx->r13 = ADD32(ctx->r2, ctx->r16);
            goto L_80286478;
    }
    // 0x80286354: addu        $t5, $v0, $s0
    ctx->r13 = ADD32(ctx->r2, ctx->r16);
L_80286358:
    // 0x80286358: lw          $a3, 0x6EEC($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X6EEC);
    // 0x8028635C: beql        $a3, $zero, L_8028645C
    if (ctx->r7 == 0) {
        // 0x80286360: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028645C;
    }
    goto skip_7;
    // 0x80286360: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_7:
    // 0x80286364: jal         0x80317E10
    // 0x80286368: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_22;
    // 0x80286368: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_22:
    // 0x8028636C: beql        $v0, $zero, L_8028645C
    if (ctx->r2 == 0) {
        // 0x80286370: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028645C;
    }
    goto skip_8;
    // 0x80286370: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_8:
    // 0x80286374: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80286378: addu        $t9, $t6, $s0
    ctx->r25 = ADD32(ctx->r14, ctx->r16);
    // 0x8028637C: jal         0x803183C0
    // 0x80286380: lw          $a0, 0x6EEC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6EEC);
    static_3_803183C0(rdram, ctx);
        goto after_23;
    // 0x80286380: lw          $a0, 0x6EEC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6EEC);
    after_23:
    // 0x80286384: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80286388: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028638C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80286390: nop

    // 0x80286394: bc1fl       L_8028645C
    if (!c1cs) {
        // 0x80286398: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028645C;
    }
    goto skip_9;
    // 0x80286398: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_9:
    // 0x8028639C: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x802863A0: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x802863A4: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x802863A8: jal         0x80318510
    // 0x802863AC: lw          $a0, 0x6EEC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X6EEC);
    static_3_80318510(rdram, ctx);
        goto after_24;
    // 0x802863AC: lw          $a0, 0x6EEC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X6EEC);
    after_24:
    // 0x802863B0: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x802863B4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802863B8: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x802863BC: jal         0x80317DA8
    // 0x802863C0: lw          $a0, 0x6EEC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X6EEC);
    static_3_80317DA8(rdram, ctx);
        goto after_25;
    // 0x802863C0: lw          $a0, 0x6EEC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X6EEC);
    after_25:
    // 0x802863C4: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x802863C8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802863CC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802863D0: nop

    // 0x802863D4: bc1f        L_802863E4
    if (!c1cs) {
        // 0x802863D8: nop
    
            goto L_802863E4;
    }
    // 0x802863D8: nop

    // 0x802863DC: b           L_802863E4
    // 0x802863E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_802863E4;
    // 0x802863E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802863E4:
    // 0x802863E4: lw          $t3, 0x238($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X238);
    // 0x802863E8: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x802863EC: nop

    // 0x802863F0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802863F4: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    // 0x802863F8: nop

    // 0x802863FC: bc1fl       L_8028645C
    if (!c1cs) {
        // 0x80286400: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_8028645C;
    }
    goto skip_10;
    // 0x80286400: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_10:
    // 0x80286404: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80286408: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8028640C: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x80286410: lw          $a3, 0x6EEC($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X6EEC);
    // 0x80286414: lw          $a2, 0x1A0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X1A0);
    // 0x80286418: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x8028641C: lh          $t6, 0x60($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X60);
    // 0x80286420: jalr        $t9
    // 0x80286424: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x80286424: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    after_26:
    // 0x80286428: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8028642C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80286430: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80286434: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x80286438: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8028643C: addiu       $a3, $sp, 0x118
    ctx->r7 = ADD32(ctx->r29, 0X118);
    // 0x80286440: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80286444: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80286448: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8028644C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80286450: jal         0x802B7170
    // 0x80286454: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    static_3_802B7170(rdram, ctx);
        goto after_27;
    // 0x80286454: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_27:
    // 0x80286458: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_8028645C:
    // 0x8028645C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80286460: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80286464: lbu         $t8, 0x6EFC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6EFC);
    // 0x80286468: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8028646C: bnel        $at, $zero, L_80286358
    if (ctx->r1 != 0) {
        // 0x80286470: addu        $t5, $v0, $s0
        ctx->r13 = ADD32(ctx->r2, ctx->r16);
            goto L_80286358;
    }
    goto skip_11;
    // 0x80286470: addu        $t5, $v0, $s0
    ctx->r13 = ADD32(ctx->r2, ctx->r16);
    skip_11:
    // 0x80286474: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80286478:
    // 0x80286478: lw          $t1, 0x78($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X78);
    // 0x8028647C: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x80286480: beql        $t2, $zero, L_80286524
    if (ctx->r10 == 0) {
        // 0x80286484: lbu         $t3, 0x6FB8($v0)
        ctx->r11 = MEM_BU(ctx->r2, 0X6FB8);
            goto L_80286524;
    }
    goto skip_12;
    // 0x80286484: lbu         $t3, 0x6FB8($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X6FB8);
    skip_12:
    // 0x80286488: lw          $a3, 0x6FBC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X6FBC);
    // 0x8028648C: beq         $a3, $zero, L_80286520
    if (ctx->r7 == 0) {
        // 0x80286490: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80286520;
    }
    // 0x80286490: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80286494: jal         0x80318510
    // 0x80286498: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    static_3_80318510(rdram, ctx);
        goto after_28;
    // 0x80286498: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    after_28:
    // 0x8028649C: lw          $t3, 0x238($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X238);
    // 0x802864A0: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x802864A4: nop

    // 0x802864A8: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802864AC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802864B0: nop

    // 0x802864B4: bc1fl       L_80286520
    if (!c1cs) {
        // 0x802864B8: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_80286520;
    }
    goto skip_13;
    // 0x802864B8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_13:
    // 0x802864BC: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x802864C0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x802864C4: lw          $a3, 0x6FBC($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X6FBC);
    // 0x802864C8: lw          $a2, 0x1A0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X1A0);
    // 0x802864CC: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x802864D0: lh          $t5, 0x60($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X60);
    // 0x802864D4: jalr        $t9
    // 0x802864D8: addu        $a0, $t5, $a3
    ctx->r4 = ADD32(ctx->r13, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x802864D8: addu        $a0, $t5, $a3
    ctx->r4 = ADD32(ctx->r13, ctx->r7);
    after_29:
    // 0x802864DC: addiu       $t6, $zero, 0xF8
    ctx->r14 = ADD32(0, 0XF8);
    // 0x802864E0: addiu       $t7, $zero, 0x58
    ctx->r15 = ADD32(0, 0X58);
    // 0x802864E4: addiu       $t8, $zero, 0x58
    ctx->r24 = ADD32(0, 0X58);
    // 0x802864E8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802864EC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802864F0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x802864F4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802864F8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802864FC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80286500: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80286504: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80286508: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x8028650C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80286510: addiu       $a3, $sp, 0x118
    ctx->r7 = ADD32(ctx->r29, 0X118);
    // 0x80286514: jal         0x802B7170
    // 0x80286518: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_802B7170(rdram, ctx);
        goto after_30;
    // 0x80286518: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_30:
    // 0x8028651C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_80286520:
    // 0x80286520: lbu         $t3, 0x6FB8($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X6FB8);
L_80286524:
    // 0x80286524: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80286528: blez        $t3, L_8028668C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8028652C: addu        $t4, $v0, $s0
        ctx->r12 = ADD32(ctx->r2, ctx->r16);
            goto L_8028668C;
    }
    // 0x8028652C: addu        $t4, $v0, $s0
    ctx->r12 = ADD32(ctx->r2, ctx->r16);
L_80286530:
    // 0x80286530: lw          $a3, 0x6F94($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X6F94);
    // 0x80286534: beql        $a3, $zero, L_80286674
    if (ctx->r7 == 0) {
        // 0x80286538: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_80286674;
    }
    goto skip_14;
    // 0x80286538: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_14:
    // 0x8028653C: jal         0x80317E10
    // 0x80286540: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_31;
    // 0x80286540: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_31:
    // 0x80286544: beql        $v0, $zero, L_80286674
    if (ctx->r2 == 0) {
        // 0x80286548: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_80286674;
    }
    goto skip_15;
    // 0x80286548: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_15:
    // 0x8028654C: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x80286550: addu        $t9, $t5, $s0
    ctx->r25 = ADD32(ctx->r13, ctx->r16);
    // 0x80286554: jal         0x803183C0
    // 0x80286558: lw          $a0, 0x6F94($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6F94);
    static_3_803183C0(rdram, ctx);
        goto after_32;
    // 0x80286558: lw          $a0, 0x6F94($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6F94);
    after_32:
    // 0x8028655C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80286560: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80286564: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80286568: nop

    // 0x8028656C: bc1fl       L_80286674
    if (!c1cs) {
        // 0x80286570: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_80286674;
    }
    goto skip_16;
    // 0x80286570: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_16:
    // 0x80286574: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80286578: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x8028657C: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80286580: jal         0x80318510
    // 0x80286584: lw          $a0, 0x6F94($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X6F94);
    static_3_80318510(rdram, ctx);
        goto after_33;
    // 0x80286584: lw          $a0, 0x6F94($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X6F94);
    after_33:
    // 0x80286588: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8028658C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80286590: addu        $t1, $t8, $s0
    ctx->r9 = ADD32(ctx->r24, ctx->r16);
    // 0x80286594: jal         0x80317DA8
    // 0x80286598: lw          $a0, 0x6F94($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F94);
    static_3_80317DA8(rdram, ctx);
        goto after_34;
    // 0x80286598: lw          $a0, 0x6F94($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F94);
    after_34:
    // 0x8028659C: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x802865A0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802865A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802865A8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802865AC: lw          $a1, 0x1A4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1A4);
    // 0x802865B0: addiu       $a3, $sp, 0x88
    ctx->r7 = ADD32(ctx->r29, 0X88);
    // 0x802865B4: addiu       $t5, $sp, 0x84
    ctx->r13 = ADD32(ctx->r29, 0X84);
    // 0x802865B8: bc1f        L_802865C8
    if (!c1cs) {
        // 0x802865BC: addiu       $t9, $sp, 0x80
        ctx->r25 = ADD32(ctx->r29, 0X80);
            goto L_802865C8;
    }
    // 0x802865BC: addiu       $t9, $sp, 0x80
    ctx->r25 = ADD32(ctx->r29, 0X80);
    // 0x802865C0: b           L_802865C8
    // 0x802865C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_802865C8;
    // 0x802865C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802865C8:
    // 0x802865C8: lw          $t2, 0x238($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X238);
    // 0x802865CC: addiu       $t6, $sp, 0x7C
    ctx->r14 = ADD32(ctx->r29, 0X7C);
    // 0x802865D0: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x802865D4: nop

    // 0x802865D8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802865DC: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    // 0x802865E0: nop

    // 0x802865E4: bc1fl       L_80286674
    if (!c1cs) {
        // 0x802865E8: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_80286674;
    }
    goto skip_17;
    // 0x802865E8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_17:
    // 0x802865EC: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x802865F0: addiu       $t7, $sp, 0x78
    ctx->r15 = ADD32(ctx->r29, 0X78);
    // 0x802865F4: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x802865F8: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x802865FC: lw          $a2, 0x6F94($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X6F94);
    // 0x80286600: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80286604: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80286608: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8028660C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80286610: jal         0x802BA134
    // 0x80286614: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    static_3_802BA134(rdram, ctx);
        goto after_35;
    // 0x80286614: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_35:
    // 0x80286618: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8028661C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80286620: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80286624: lw          $a3, 0x6F94($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X6F94);
    // 0x80286628: lw          $a2, 0x1A0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X1A0);
    // 0x8028662C: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x80286630: lh          $t3, 0x60($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X60);
    // 0x80286634: jalr        $t9
    // 0x80286638: addu        $a0, $t3, $a3
    ctx->r4 = ADD32(ctx->r11, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x80286638: addu        $a0, $t3, $a3
    ctx->r4 = ADD32(ctx->r11, ctx->r7);
    after_36:
    // 0x8028663C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80286640: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80286644: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80286648: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8028664C: lbu         $t5, 0x74($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X74);
    // 0x80286650: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80286654: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80286658: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8028665C: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x80286660: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80286664: addiu       $a3, $sp, 0x118
    ctx->r7 = ADD32(ctx->r29, 0X118);
    // 0x80286668: jal         0x802B7170
    // 0x8028666C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    static_3_802B7170(rdram, ctx);
        goto after_37;
    // 0x8028666C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_37:
    // 0x80286670: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_80286674:
    // 0x80286674: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80286678: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8028667C: lbu         $t6, 0x6FB8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6FB8);
    // 0x80286680: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80286684: bnel        $at, $zero, L_80286530
    if (ctx->r1 != 0) {
        // 0x80286688: addu        $t4, $v0, $s0
        ctx->r12 = ADD32(ctx->r2, ctx->r16);
            goto L_80286530;
    }
    goto skip_18;
    // 0x80286688: addu        $t4, $v0, $s0
    ctx->r12 = ADD32(ctx->r2, ctx->r16);
    skip_18:
L_8028668C:
    // 0x8028668C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80286690: addiu       $s3, $zero, 0xA0
    ctx->r19 = ADD32(0, 0XA0);
    // 0x80286694: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
L_80286698:
    // 0x80286698: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x8028669C: lw          $a3, 0x7050($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X7050);
    // 0x802866A0: beql        $a3, $zero, L_8028678C
    if (ctx->r7 == 0) {
        // 0x802866A4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8028678C;
    }
    goto skip_19;
    // 0x802866A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_19:
    // 0x802866A8: jal         0x803183C0
    // 0x802866AC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_803183C0(rdram, ctx);
        goto after_38;
    // 0x802866AC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_38:
    // 0x802866B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802866B4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802866B8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x802866BC: nop

    // 0x802866C0: bc1fl       L_8028678C
    if (!c1cs) {
        // 0x802866C4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8028678C;
    }
    goto skip_20;
    // 0x802866C4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_20:
    // 0x802866C8: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x802866CC: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x802866D0: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x802866D4: jal         0x80318510
    // 0x802866D8: lw          $a0, 0x7050($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X7050);
    static_3_80318510(rdram, ctx);
        goto after_39;
    // 0x802866D8: lw          $a0, 0x7050($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X7050);
    after_39:
    // 0x802866DC: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x802866E0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802866E4: addu        $t9, $t3, $s0
    ctx->r25 = ADD32(ctx->r11, ctx->r16);
    // 0x802866E8: jal         0x80317DA8
    // 0x802866EC: lw          $a0, 0x7050($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X7050);
    static_3_80317DA8(rdram, ctx);
        goto after_40;
    // 0x802866EC: lw          $a0, 0x7050($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X7050);
    after_40:
    // 0x802866F0: lwc1        $f18, 0x114($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X114);
    // 0x802866F4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802866F8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802866FC: nop

    // 0x80286700: bc1f        L_80286710
    if (!c1cs) {
        // 0x80286704: nop
    
            goto L_80286710;
    }
    // 0x80286704: nop

    // 0x80286708: b           L_80286710
    // 0x8028670C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_80286710;
    // 0x8028670C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80286710:
    // 0x80286710: lw          $t4, 0x238($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X238);
    // 0x80286714: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80286718: nop

    // 0x8028671C: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80286720: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x80286724: nop

    // 0x80286728: bc1fl       L_8028678C
    if (!c1cs) {
        // 0x8028672C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8028678C;
    }
    goto skip_21;
    // 0x8028672C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_21:
    // 0x80286730: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x80286734: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80286738: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x8028673C: lw          $a3, 0x7050($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X7050);
    // 0x80286740: lw          $a2, 0x1A0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X1A0);
    // 0x80286744: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x80286748: lh          $t7, 0x60($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X60);
    // 0x8028674C: jalr        $t9
    // 0x80286750: addu        $a0, $t7, $a3
    ctx->r4 = ADD32(ctx->r15, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x80286750: addu        $a0, $t7, $a3
    ctx->r4 = ADD32(ctx->r15, ctx->r7);
    after_41:
    // 0x80286754: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x80286758: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x8028675C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80286760: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80286764: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80286768: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x8028676C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80286770: addiu       $a3, $sp, 0x118
    ctx->r7 = ADD32(ctx->r29, 0X118);
    // 0x80286774: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80286778: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8028677C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80286780: jal         0x802B7170
    // 0x80286784: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    static_3_802B7170(rdram, ctx);
        goto after_42;
    // 0x80286784: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_42:
    // 0x80286788: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8028678C:
    // 0x8028678C: bnel        $s0, $s3, L_80286698
    if (ctx->r16 != ctx->r19) {
        // 0x80286790: lw          $t7, 0x0($s2)
        ctx->r15 = MEM_W(ctx->r18, 0X0);
            goto L_80286698;
    }
    goto skip_22;
    // 0x80286790: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    skip_22:
    // 0x80286794: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80286798: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x8028679C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802867A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802867A4: bne         $v1, $at, L_802867B4
    if (ctx->r3 != ctx->r1) {
        // 0x802867A8: nop
    
            goto L_802867B4;
    }
    // 0x802867A8: nop

    // 0x802867AC: b           L_802867B4
    // 0x802867B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802867B4;
    // 0x802867B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802867B4:
    // 0x802867B4: beq         $v0, $zero, L_80286A2C
    if (ctx->r2 == 0) {
        // 0x802867B8: nop
    
            goto L_80286A2C;
    }
    // 0x802867B8: nop

    // 0x802867BC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802867C0: jal         0x80317E10
    // 0x802867C4: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_80317E10(rdram, ctx);
        goto after_43;
    // 0x802867C4: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_43:
    // 0x802867C8: beql        $v0, $zero, L_802868F0
    if (ctx->r2 == 0) {
        // 0x802867CC: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_802868F0;
    }
    goto skip_23;
    // 0x802867CC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_23:
    // 0x802867D0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802867D4: lw          $t2, 0x4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X4);
    // 0x802867D8: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    // 0x802867DC: beql        $a0, $t2, L_802868F0
    if (ctx->r4 == ctx->r10) {
        // 0x802867E0: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_802868F0;
    }
    goto skip_24;
    // 0x802867E0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_24:
    // 0x802867E4: jal         0x803183C0
    // 0x802867E8: nop

    static_3_803183C0(rdram, ctx);
        goto after_44;
    // 0x802867E8: nop

    after_44:
    // 0x802867EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802867F0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802867F4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802867F8: nop

    // 0x802867FC: bc1fl       L_802868F0
    if (!c1cs) {
        // 0x80286800: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_802868F0;
    }
    goto skip_25;
    // 0x80286800: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_25:
    // 0x80286804: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80286808: addiu       $a1, $v0, 0x4E3C
    ctx->r5 = ADD32(ctx->r2, 0X4E3C);
    // 0x8028680C: jal         0x80318510
    // 0x80286810: addiu       $a0, $v0, 0x365C
    ctx->r4 = ADD32(ctx->r2, 0X365C);
    static_3_80318510(rdram, ctx);
        goto after_45;
    // 0x80286810: addiu       $a0, $v0, 0x365C
    ctx->r4 = ADD32(ctx->r2, 0X365C);
    after_45:
    // 0x80286814: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80286818: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8028681C: jal         0x80317DA8
    // 0x80286820: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_80317DA8(rdram, ctx);
        goto after_46;
    // 0x80286820: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_46:
    // 0x80286824: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80286828: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8028682C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80286830: nop

    // 0x80286834: bc1f        L_80286844
    if (!c1cs) {
        // 0x80286838: nop
    
            goto L_80286844;
    }
    // 0x80286838: nop

    // 0x8028683C: b           L_80286844
    // 0x80286840: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_80286844;
    // 0x80286840: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80286844:
    // 0x80286844: lw          $t3, 0x238($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X238);
    // 0x80286848: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8028684C: nop

    // 0x80286850: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80286854: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x80286858: nop

    // 0x8028685C: bc1fl       L_802868F0
    if (!c1cs) {
        // 0x80286860: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_802868F0;
    }
    goto skip_26;
    // 0x80286860: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_26:
    // 0x80286864: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80286868: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x8028686C: lw          $a2, 0x4FDC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4FDC);
    // 0x80286870: lh          $t4, 0x60($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X60);
    // 0x80286874: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x80286878: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    // 0x8028687C: jalr        $t9
    // 0x80286880: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x80286880: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_47:
    // 0x80286884: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80286888: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8028688C: lw          $a2, 0x37FC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X37FC);
    // 0x80286890: lh          $t5, 0x60($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X60);
    // 0x80286894: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x80286898: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    // 0x8028689C: jalr        $t9
    // 0x802868A0: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x802868A0: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_48:
    // 0x802868A4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802868A8: jal         0x803182BC
    // 0x802868AC: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_803182BC(rdram, ctx);
        goto after_49;
    // 0x802868AC: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_49:
    // 0x802868B0: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x802868B4: addiu       $t7, $zero, 0xC0
    ctx->r15 = ADD32(0, 0XC0);
    // 0x802868B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802868BC: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    // 0x802868C0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802868C4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802868C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802868CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802868D0: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x802868D4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802868D8: addiu       $a3, $sp, 0x118
    ctx->r7 = ADD32(ctx->r29, 0X118);
    // 0x802868DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802868E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802868E4: jal         0x802B7170
    // 0x802868E8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    static_3_802B7170(rdram, ctx);
        goto after_50;
    // 0x802868E8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_50:
    // 0x802868EC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_802868F0:
    // 0x802868F0: jal         0x80317E10
    // 0x802868F4: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_80317E10(rdram, ctx);
        goto after_51;
    // 0x802868F4: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_51:
    // 0x802868F8: beq         $v0, $zero, L_80286A2C
    if (ctx->r2 == 0) {
        // 0x802868FC: nop
    
            goto L_80286A2C;
    }
    // 0x802868FC: nop

    // 0x80286900: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80286904: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x80286908: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    // 0x8028690C: beq         $a0, $t1, L_80286A2C
    if (ctx->r4 == ctx->r9) {
        // 0x80286910: nop
    
            goto L_80286A2C;
    }
    // 0x80286910: nop

    // 0x80286914: jal         0x803183C0
    // 0x80286918: nop

    static_3_803183C0(rdram, ctx);
        goto after_52;
    // 0x80286918: nop

    after_52:
    // 0x8028691C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80286920: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80286924: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80286928: nop

    // 0x8028692C: bc1f        L_80286A2C
    if (!c1cs) {
        // 0x80286930: nop
    
            goto L_80286A2C;
    }
    // 0x80286930: nop

    // 0x80286934: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80286938: addiu       $a1, $v0, 0x365C
    ctx->r5 = ADD32(ctx->r2, 0X365C);
    // 0x8028693C: jal         0x80318510
    // 0x80286940: addiu       $a0, $v0, 0x4E3C
    ctx->r4 = ADD32(ctx->r2, 0X4E3C);
    static_3_80318510(rdram, ctx);
        goto after_53;
    // 0x80286940: addiu       $a0, $v0, 0x4E3C
    ctx->r4 = ADD32(ctx->r2, 0X4E3C);
    after_53:
    // 0x80286944: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80286948: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8028694C: jal         0x80317DA8
    // 0x80286950: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_80317DA8(rdram, ctx);
        goto after_54;
    // 0x80286950: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_54:
    // 0x80286954: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x80286958: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028695C: jal         0x80317DA8
    // 0x80286960: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_80317DA8(rdram, ctx);
        goto after_55;
    // 0x80286960: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_55:
    // 0x80286964: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80286968: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8028696C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80286970: nop

    // 0x80286974: bc1f        L_80286984
    if (!c1cs) {
        // 0x80286978: nop
    
            goto L_80286984;
    }
    // 0x80286978: nop

    // 0x8028697C: b           L_80286984
    // 0x80286980: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_80286984;
    // 0x80286980: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80286984:
    // 0x80286984: lw          $t2, 0x238($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X238);
    // 0x80286988: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8028698C: nop

    // 0x80286990: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80286994: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    // 0x80286998: nop

    // 0x8028699C: bc1f        L_80286A2C
    if (!c1cs) {
        // 0x802869A0: nop
    
            goto L_80286A2C;
    }
    // 0x802869A0: nop

    // 0x802869A4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802869A8: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x802869AC: lw          $a2, 0x37FC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X37FC);
    // 0x802869B0: lh          $t3, 0x60($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X60);
    // 0x802869B4: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x802869B8: addu        $a0, $t3, $v0
    ctx->r4 = ADD32(ctx->r11, ctx->r2);
    // 0x802869BC: jalr        $t9
    // 0x802869C0: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x802869C0: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_56:
    // 0x802869C4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802869C8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x802869CC: lw          $a2, 0x4FDC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4FDC);
    // 0x802869D0: lh          $t4, 0x60($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X60);
    // 0x802869D4: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x802869D8: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    // 0x802869DC: jalr        $t9
    // 0x802869E0: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x802869E0: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_57:
    // 0x802869E4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802869E8: jal         0x803182BC
    // 0x802869EC: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_803182BC(rdram, ctx);
        goto after_58;
    // 0x802869EC: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_58:
    // 0x802869F0: addiu       $t5, $zero, 0xC0
    ctx->r13 = ADD32(0, 0XC0);
    // 0x802869F4: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x802869F8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802869FC: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    // 0x80286A00: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80286A04: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80286A08: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80286A0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80286A10: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x80286A14: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80286A18: addiu       $a3, $sp, 0x118
    ctx->r7 = ADD32(ctx->r29, 0X118);
    // 0x80286A1C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80286A20: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80286A24: jal         0x802B7170
    // 0x80286A28: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    static_3_802B7170(rdram, ctx);
        goto after_59;
    // 0x80286A28: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_59:
L_80286A2C:
    // 0x80286A2C: jal         0x802230E4
    // 0x80286A30: nop

    static_3_802230E4(rdram, ctx);
        goto after_60;
    // 0x80286A30: nop

    after_60:
    // 0x80286A34: jal         0x8022337C
    // 0x80286A38: nop

    static_3_8022337C(rdram, ctx);
        goto after_61;
    // 0x80286A38: nop

    after_61:
    // 0x80286A3C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_80286A40:
    // 0x80286A40: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x80286A44: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80286A48: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80286A4C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80286A50: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80286A54: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80286A58: jr          $ra
    // 0x80286A5C: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
    return;
    // 0x80286A5C: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
;}
RECOMP_FUNC void D_80282C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282CE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282CE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80282CEC: beq         $a0, $zero, L_80282D28
    if (ctx->r4 == 0) {
        // 0x80282CF0: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80282D28;
    }
    // 0x80282CF0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80282CF4: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x80282CF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80282CFC: jal         0x8031CC08
    // 0x80282D00: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_8031CC08(rdram, ctx);
        goto after_0;
    // 0x80282D00: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80282D04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80282D08: jal         0x8031C638
    // 0x80282D0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031C638(rdram, ctx);
        goto after_1;
    // 0x80282D0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80282D10: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80282D14: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80282D18: beql        $t7, $zero, L_80282D2C
    if (ctx->r15 == 0) {
        // 0x80282D1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80282D2C;
    }
    goto skip_0;
    // 0x80282D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80282D20: jal         0x802C681C
    // 0x80282D24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x80282D24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_80282D28:
    // 0x80282D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80282D2C:
    // 0x80282D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282D30: jr          $ra
    // 0x80282D34: nop

    return;
    // 0x80282D34: nop

;}
RECOMP_FUNC void D_8023F180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F180: div         $zero, $a1, $a2
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r6)));
    // 0x8023F184: mflo        $v0
    ctx->r2 = lo;
    // 0x8023F188: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023F18C: bne         $a2, $zero, L_8023F198
    if (ctx->r6 != 0) {
        // 0x8023F190: nop
    
            goto L_8023F198;
    }
    // 0x8023F190: nop

    // 0x8023F194: break       7
    do_break(2149839252);
L_8023F198:
    // 0x8023F198: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023F19C: bne         $a2, $at, L_8023F1B0
    if (ctx->r6 != ctx->r1) {
        // 0x8023F1A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023F1B0;
    }
    // 0x8023F1A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023F1A4: bne         $a1, $at, L_8023F1B0
    if (ctx->r5 != ctx->r1) {
        // 0x8023F1A8: nop
    
            goto L_8023F1B0;
    }
    // 0x8023F1A8: nop

    // 0x8023F1AC: break       6
    do_break(2149839276);
L_8023F1B0:
    // 0x8023F1B0: multu       $a2, $v0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F1B4: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x8023F1B8: addiu       $t7, $sp, 0x0
    ctx->r15 = ADD32(ctx->r29, 0X0);
    // 0x8023F1BC: mflo        $t6
    ctx->r14 = lo;
    // 0x8023F1C0: subu        $v1, $a1, $t6
    ctx->r3 = SUB32(ctx->r5, ctx->r14);
    // 0x8023F1C4: bgez        $v0, L_8023F1E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023F1C8: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_8023F1E8;
    }
    // 0x8023F1C8: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8023F1CC: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x8023F1D0: blez        $v1, L_8023F1E8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023F1D4: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_8023F1E8;
    }
    // 0x8023F1D4: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8023F1D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023F1DC: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8023F1E0: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8023F1E4: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
L_8023F1E8:
    // 0x8023F1E8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8023F1EC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8023F1F0: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x8023F1F4: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x8023F1F8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8023F1FC: jr          $ra
    // 0x8023F200: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    return;
    // 0x8023F200: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void D_802DA3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DA42C: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x802DA430: blez        $a3, L_802DA634
    if (SIGNED(ctx->r7) <= 0) {
        // 0x802DA434: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802DA634;
    }
    // 0x802DA434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802DA438: andi        $v1, $a3, 0x3
    ctx->r3 = ctx->r7 & 0X3;
    // 0x802DA43C: beq         $v1, $zero, L_802DA4B0
    if (ctx->r3 == 0) {
        // 0x802DA440: or          $t2, $v1, $zero
        ctx->r10 = ctx->r3 | 0;
            goto L_802DA4B0;
    }
    // 0x802DA440: or          $t2, $v1, $zero
    ctx->r10 = ctx->r3 | 0;
L_802DA444:
    // 0x802DA444: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x802DA448: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802DA44C: bgez        $t0, L_802DA45C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802DA450: sra         $t6, $t0, 5
        ctx->r14 = S32(SIGNED(ctx->r8) >> 5);
            goto L_802DA45C;
    }
    // 0x802DA450: sra         $t6, $t0, 5
    ctx->r14 = S32(SIGNED(ctx->r8) >> 5);
    // 0x802DA454: addiu       $at, $t0, 0x1F
    ctx->r1 = ADD32(ctx->r8, 0X1F);
    // 0x802DA458: sra         $t6, $at, 5
    ctx->r14 = S32(SIGNED(ctx->r1) >> 5);
L_802DA45C:
    // 0x802DA45C: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x802DA460: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x802DA464: bgez        $t0, L_802DA478
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802DA468: andi        $t1, $t0, 0x1F
        ctx->r9 = ctx->r8 & 0X1F;
            goto L_802DA478;
    }
    // 0x802DA468: andi        $t1, $t0, 0x1F
    ctx->r9 = ctx->r8 & 0X1F;
    // 0x802DA46C: beq         $t1, $zero, L_802DA478
    if (ctx->r9 == 0) {
        // 0x802DA470: nop
    
            goto L_802DA478;
    }
    // 0x802DA470: nop

    // 0x802DA474: addiu       $t1, $t1, -0x20
    ctx->r9 = ADD32(ctx->r9, -0X20);
L_802DA478:
    // 0x802DA478: sllv        $t9, $t8, $t1
    ctx->r25 = S32(ctx->r24 << (ctx->r9 & 31));
    // 0x802DA47C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x802DA480: and         $t3, $t7, $t9
    ctx->r11 = ctx->r15 & ctx->r25;
    // 0x802DA484: srav        $t4, $t3, $t1
    ctx->r12 = S32(SIGNED(ctx->r11) >> (ctx->r9 & 31));
    // 0x802DA488: sllv        $t5, $t4, $v0
    ctx->r13 = S32(ctx->r12 << (ctx->r2 & 31));
    // 0x802DA48C: or          $t8, $t6, $t5
    ctx->r24 = ctx->r14 | ctx->r13;
    // 0x802DA490: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x802DA494: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x802DA498: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802DA49C: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x802DA4A0: bne         $t2, $v0, L_802DA444
    if (ctx->r10 != ctx->r2) {
        // 0x802DA4A4: sw          $t9, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r25;
            goto L_802DA444;
    }
    // 0x802DA4A4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802DA4A8: beq         $v0, $a3, L_802DA634
    if (ctx->r2 == ctx->r7) {
        // 0x802DA4AC: nop
    
            goto L_802DA634;
    }
    // 0x802DA4AC: nop

L_802DA4B0:
    // 0x802DA4B0: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x802DA4B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802DA4B8: bgez        $t0, L_802DA4C8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802DA4BC: sra         $t3, $t0, 5
        ctx->r11 = S32(SIGNED(ctx->r8) >> 5);
            goto L_802DA4C8;
    }
    // 0x802DA4BC: sra         $t3, $t0, 5
    ctx->r11 = S32(SIGNED(ctx->r8) >> 5);
    // 0x802DA4C0: addiu       $at, $t0, 0x1F
    ctx->r1 = ADD32(ctx->r8, 0X1F);
    // 0x802DA4C4: sra         $t3, $at, 5
    ctx->r11 = S32(SIGNED(ctx->r1) >> 5);
L_802DA4C8:
    // 0x802DA4C8: addu        $v1, $a0, $t3
    ctx->r3 = ADD32(ctx->r4, ctx->r11);
    // 0x802DA4CC: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x802DA4D0: bgez        $t0, L_802DA4E4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802DA4D4: andi        $t1, $t0, 0x1F
        ctx->r9 = ctx->r8 & 0X1F;
            goto L_802DA4E4;
    }
    // 0x802DA4D4: andi        $t1, $t0, 0x1F
    ctx->r9 = ctx->r8 & 0X1F;
    // 0x802DA4D8: beq         $t1, $zero, L_802DA4E4
    if (ctx->r9 == 0) {
        // 0x802DA4DC: nop
    
            goto L_802DA4E4;
    }
    // 0x802DA4DC: nop

    // 0x802DA4E0: addiu       $t1, $t1, -0x20
    ctx->r9 = ADD32(ctx->r9, -0X20);
L_802DA4E4:
    // 0x802DA4E4: sllv        $t5, $t6, $t1
    ctx->r13 = S32(ctx->r14 << (ctx->r9 & 31));
    // 0x802DA4E8: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x802DA4EC: and         $t8, $t4, $t5
    ctx->r24 = ctx->r12 & ctx->r13;
    // 0x802DA4F0: srav        $t7, $t8, $t1
    ctx->r15 = S32(SIGNED(ctx->r24) >> (ctx->r9 & 31));
    // 0x802DA4F4: sllv        $t9, $t7, $v0
    ctx->r25 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x802DA4F8: or          $t6, $t3, $t9
    ctx->r14 = ctx->r11 | ctx->r25;
    // 0x802DA4FC: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x802DA500: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x802DA504: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802DA508: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802DA50C: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x802DA510: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x802DA514: bgez        $t0, L_802DA524
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802DA518: sra         $t8, $t0, 5
        ctx->r24 = S32(SIGNED(ctx->r8) >> 5);
            goto L_802DA524;
    }
    // 0x802DA518: sra         $t8, $t0, 5
    ctx->r24 = S32(SIGNED(ctx->r8) >> 5);
    // 0x802DA51C: addiu       $at, $t0, 0x1F
    ctx->r1 = ADD32(ctx->r8, 0X1F);
    // 0x802DA520: sra         $t8, $at, 5
    ctx->r24 = S32(SIGNED(ctx->r1) >> 5);
L_802DA524:
    // 0x802DA524: addu        $v1, $a0, $t8
    ctx->r3 = ADD32(ctx->r4, ctx->r24);
    // 0x802DA528: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x802DA52C: bgez        $t0, L_802DA540
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802DA530: andi        $t1, $t0, 0x1F
        ctx->r9 = ctx->r8 & 0X1F;
            goto L_802DA540;
    }
    // 0x802DA530: andi        $t1, $t0, 0x1F
    ctx->r9 = ctx->r8 & 0X1F;
    // 0x802DA534: beq         $t1, $zero, L_802DA540
    if (ctx->r9 == 0) {
        // 0x802DA538: nop
    
            goto L_802DA540;
    }
    // 0x802DA538: nop

    // 0x802DA53C: addiu       $t1, $t1, -0x20
    ctx->r9 = ADD32(ctx->r9, -0X20);
L_802DA540:
    // 0x802DA540: sllv        $t9, $t3, $t1
    ctx->r25 = S32(ctx->r11 << (ctx->r9 & 31));
    // 0x802DA544: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x802DA548: and         $t6, $t7, $t9
    ctx->r14 = ctx->r15 & ctx->r25;
    // 0x802DA54C: srav        $t4, $t6, $t1
    ctx->r12 = S32(SIGNED(ctx->r14) >> (ctx->r9 & 31));
    // 0x802DA550: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x802DA554: sllv        $t8, $t4, $t5
    ctx->r24 = S32(ctx->r12 << (ctx->r13 & 31));
    // 0x802DA558: or          $t7, $t3, $t8
    ctx->r15 = ctx->r11 | ctx->r24;
    // 0x802DA55C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x802DA560: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x802DA564: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802DA568: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x802DA56C: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x802DA570: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802DA574: bgez        $t0, L_802DA584
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802DA578: sra         $t4, $t0, 5
        ctx->r12 = S32(SIGNED(ctx->r8) >> 5);
            goto L_802DA584;
    }
    // 0x802DA578: sra         $t4, $t0, 5
    ctx->r12 = S32(SIGNED(ctx->r8) >> 5);
    // 0x802DA57C: addiu       $at, $t0, 0x1F
    ctx->r1 = ADD32(ctx->r8, 0X1F);
    // 0x802DA580: sra         $t4, $at, 5
    ctx->r12 = S32(SIGNED(ctx->r1) >> 5);
L_802DA584:
    // 0x802DA584: addu        $v1, $a0, $t4
    ctx->r3 = ADD32(ctx->r4, ctx->r12);
    // 0x802DA588: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x802DA58C: bgez        $t0, L_802DA5A0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802DA590: andi        $t1, $t0, 0x1F
        ctx->r9 = ctx->r8 & 0X1F;
            goto L_802DA5A0;
    }
    // 0x802DA590: andi        $t1, $t0, 0x1F
    ctx->r9 = ctx->r8 & 0X1F;
    // 0x802DA594: beq         $t1, $zero, L_802DA5A0
    if (ctx->r9 == 0) {
        // 0x802DA598: nop
    
            goto L_802DA5A0;
    }
    // 0x802DA598: nop

    // 0x802DA59C: addiu       $t1, $t1, -0x20
    ctx->r9 = ADD32(ctx->r9, -0X20);
L_802DA5A0:
    // 0x802DA5A0: sllv        $t8, $t3, $t1
    ctx->r24 = S32(ctx->r11 << (ctx->r9 & 31));
    // 0x802DA5A4: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x802DA5A8: and         $t7, $t5, $t8
    ctx->r15 = ctx->r13 & ctx->r24;
    // 0x802DA5AC: srav        $t9, $t7, $t1
    ctx->r25 = S32(SIGNED(ctx->r15) >> (ctx->r9 & 31));
    // 0x802DA5B0: addiu       $t6, $v0, 0x2
    ctx->r14 = ADD32(ctx->r2, 0X2);
    // 0x802DA5B4: sllv        $t4, $t9, $t6
    ctx->r12 = S32(ctx->r25 << (ctx->r14 & 31));
    // 0x802DA5B8: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x802DA5BC: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x802DA5C0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x802DA5C4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802DA5C8: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x802DA5CC: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x802DA5D0: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802DA5D4: bgez        $t0, L_802DA5E4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802DA5D8: sra         $t9, $t0, 5
        ctx->r25 = S32(SIGNED(ctx->r8) >> 5);
            goto L_802DA5E4;
    }
    // 0x802DA5D8: sra         $t9, $t0, 5
    ctx->r25 = S32(SIGNED(ctx->r8) >> 5);
    // 0x802DA5DC: addiu       $at, $t0, 0x1F
    ctx->r1 = ADD32(ctx->r8, 0X1F);
    // 0x802DA5E0: sra         $t9, $at, 5
    ctx->r25 = S32(SIGNED(ctx->r1) >> 5);
L_802DA5E4:
    // 0x802DA5E4: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
    // 0x802DA5E8: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x802DA5EC: bgez        $t0, L_802DA600
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802DA5F0: andi        $t1, $t0, 0x1F
        ctx->r9 = ctx->r8 & 0X1F;
            goto L_802DA600;
    }
    // 0x802DA5F0: andi        $t1, $t0, 0x1F
    ctx->r9 = ctx->r8 & 0X1F;
    // 0x802DA5F4: beq         $t1, $zero, L_802DA600
    if (ctx->r9 == 0) {
        // 0x802DA5F8: nop
    
            goto L_802DA600;
    }
    // 0x802DA5F8: nop

    // 0x802DA5FC: addiu       $t1, $t1, -0x20
    ctx->r9 = ADD32(ctx->r9, -0X20);
L_802DA600:
    // 0x802DA600: sllv        $t4, $t3, $t1
    ctx->r12 = S32(ctx->r11 << (ctx->r9 & 31));
    // 0x802DA604: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x802DA608: and         $t5, $t6, $t4
    ctx->r13 = ctx->r14 & ctx->r12;
    // 0x802DA60C: srav        $t8, $t5, $t1
    ctx->r24 = S32(SIGNED(ctx->r13) >> (ctx->r9 & 31));
    // 0x802DA610: addiu       $t7, $v0, 0x3
    ctx->r15 = ADD32(ctx->r2, 0X3);
    // 0x802DA614: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x802DA618: or          $t6, $t3, $t9
    ctx->r14 = ctx->r11 | ctx->r25;
    // 0x802DA61C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x802DA620: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x802DA624: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802DA628: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802DA62C: bne         $v0, $a3, L_802DA4B0
    if (ctx->r2 != ctx->r7) {
        // 0x802DA630: sw          $t5, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r13;
            goto L_802DA4B0;
    }
    // 0x802DA630: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_802DA634:
    // 0x802DA634: jr          $ra
    // 0x802DA638: nop

    return;
    // 0x802DA638: nop

;}
RECOMP_FUNC void D_802E55E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E5668: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802E566C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802E5670: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E5674: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802E5678: beq         $a0, $zero, L_802E5738
    if (ctx->r4 == 0) {
        // 0x802E567C: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_802E5738;
    }
    // 0x802E567C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802E5680: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E5684: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E5688: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    // 0x802E568C: jal         0x8021BAE0
    // 0x802E5690: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802E5690: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_0:
    // 0x802E5694: lw          $v0, 0xEA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEA4);
    // 0x802E5698: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802E569C: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x802E56A0: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802E56A4: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802E56A8: jalr        $t9
    // 0x802E56AC: addiu       $a0, $a0, 0xDF4
    ctx->r4 = ADD32(ctx->r4, 0XDF4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E56AC: addiu       $a0, $a0, 0xDF4
    ctx->r4 = ADD32(ctx->r4, 0XDF4);
    after_1:
    // 0x802E56B0: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    // 0x802E56B4: jal         0x8031DEAC
    // 0x802E56B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DEAC(rdram, ctx);
        goto after_2;
    // 0x802E56B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802E56BC: addiu       $a0, $s0, 0xC24
    ctx->r4 = ADD32(ctx->r16, 0XC24);
    // 0x802E56C0: jal         0x802C49D0
    // 0x802E56C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_3;
    // 0x802E56C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802E56C8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802E56CC: addiu       $a3, $a3, 0x49D0
    ctx->r7 = ADD32(ctx->r7, 0X49D0);
    // 0x802E56D0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x802E56D4: addiu       $a0, $s0, 0x768
    ctx->r4 = ADD32(ctx->r16, 0X768);
    // 0x802E56D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E56DC: addiu       $a2, $zero, 0x194
    ctx->r6 = ADD32(0, 0X194);
    // 0x802E56E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802E56E4: jal         0x802C6A00
    // 0x802E56E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_4;
    // 0x802E56E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x802E56EC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x802E56F0: addiu       $a0, $s0, 0x2AC
    ctx->r4 = ADD32(ctx->r16, 0X2AC);
    // 0x802E56F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E56F8: addiu       $a2, $zero, 0x194
    ctx->r6 = ADD32(0, 0X194);
    // 0x802E56FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802E5700: jal         0x802C6A00
    // 0x802E5704: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_5;
    // 0x802E5704: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x802E5708: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802E570C: jal         0x802D69A8
    // 0x802E5710: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D69A8(rdram, ctx);
        goto after_6;
    // 0x802E5710: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x802E5714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E5718: jal         0x8031739C
    // 0x802E571C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_7;
    // 0x802E571C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x802E5720: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x802E5724: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x802E5728: beql        $t0, $zero, L_802E573C
    if (ctx->r8 == 0) {
        // 0x802E572C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802E573C;
    }
    goto skip_0;
    // 0x802E572C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802E5730: jal         0x802C681C
    // 0x802E5734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_8;
    // 0x802E5734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_802E5738:
    // 0x802E5738: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802E573C:
    // 0x802E573C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802E5740: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802E5744: jr          $ra
    // 0x802E5748: nop

    return;
    // 0x802E5748: nop

;}
RECOMP_FUNC void D_802792A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279320: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80279324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80279328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027932C: sb          $zero, 0x32B8($a0)
    MEM_B(0X32B8, ctx->r4) = 0;
    // 0x80279330: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80279334: swc1        $f0, 0x32A8($a0)
    MEM_W(0X32A8, ctx->r4) = ctx->f0.u32l;
    // 0x80279338: swc1        $f0, 0x32AC($a0)
    MEM_W(0X32AC, ctx->r4) = ctx->f0.u32l;
    // 0x8027933C: swc1        $f0, 0x32B0($a0)
    MEM_W(0X32B0, ctx->r4) = ctx->f0.u32l;
    // 0x80279340: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80279344: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80279348: sw          $zero, 0x65F8($a0)
    MEM_W(0X65F8, ctx->r4) = 0;
    // 0x8027934C: sw          $zero, 0x4E1C($a0)
    MEM_W(0X4E1C, ctx->r4) = 0;
    // 0x80279350: sw          $zero, 0x65FC($a0)
    MEM_W(0X65FC, ctx->r4) = 0;
    // 0x80279354: sb          $zero, 0x6769($a0)
    MEM_B(0X6769, ctx->r4) = 0;
    // 0x80279358: sb          $zero, 0x6768($a0)
    MEM_B(0X6768, ctx->r4) = 0;
    // 0x8027935C: sb          $zero, 0x680D($a0)
    MEM_B(0X680D, ctx->r4) = 0;
    // 0x80279360: sb          $zero, 0x680C($a0)
    MEM_B(0X680C, ctx->r4) = 0;
    // 0x80279364: sh          $zero, 0x6C38($a0)
    MEM_H(0X6C38, ctx->r4) = 0;
    // 0x80279368: sb          $zero, 0x6825($a0)
    MEM_B(0X6825, ctx->r4) = 0;
    // 0x8027936C: sb          $zero, 0x6824($a0)
    MEM_B(0X6824, ctx->r4) = 0;
    // 0x80279370: sb          $zero, 0x6831($a0)
    MEM_B(0X6831, ctx->r4) = 0;
    // 0x80279374: sb          $zero, 0x6830($a0)
    MEM_B(0X6830, ctx->r4) = 0;
    // 0x80279378: sb          $zero, 0x6791($a0)
    MEM_B(0X6791, ctx->r4) = 0;
    // 0x8027937C: sb          $zero, 0x6790($a0)
    MEM_B(0X6790, ctx->r4) = 0;
    // 0x80279380: sb          $zero, 0x6899($a0)
    MEM_B(0X6899, ctx->r4) = 0;
    // 0x80279384: sb          $zero, 0x6898($a0)
    MEM_B(0X6898, ctx->r4) = 0;
    // 0x80279388: sb          $zero, 0x67A9($a0)
    MEM_B(0X67A9, ctx->r4) = 0;
    // 0x8027938C: sb          $zero, 0x67A8($a0)
    MEM_B(0X67A8, ctx->r4) = 0;
    // 0x80279390: sb          $zero, 0x6675($a0)
    MEM_B(0X6675, ctx->r4) = 0;
    // 0x80279394: sb          $zero, 0x6674($a0)
    MEM_B(0X6674, ctx->r4) = 0;
    // 0x80279398: sb          $zero, 0x67BD($a0)
    MEM_B(0X67BD, ctx->r4) = 0;
    // 0x8027939C: sb          $zero, 0x67BC($a0)
    MEM_B(0X67BC, ctx->r4) = 0;
    // 0x802793A0: sb          $zero, 0x67FD($a0)
    MEM_B(0X67FD, ctx->r4) = 0;
    // 0x802793A4: sb          $zero, 0x67FC($a0)
    MEM_B(0X67FC, ctx->r4) = 0;
    // 0x802793A8: sb          $zero, 0x6649($a0)
    MEM_B(0X6649, ctx->r4) = 0;
    // 0x802793AC: sb          $zero, 0x6648($a0)
    MEM_B(0X6648, ctx->r4) = 0;
    // 0x802793B0: sb          $zero, 0x6851($a0)
    MEM_B(0X6851, ctx->r4) = 0;
    // 0x802793B4: sb          $zero, 0x6850($a0)
    MEM_B(0X6850, ctx->r4) = 0;
    // 0x802793B8: sb          $zero, 0x68A9($a0)
    MEM_B(0X68A9, ctx->r4) = 0;
    // 0x802793BC: sb          $zero, 0x68A8($a0)
    MEM_B(0X68A8, ctx->r4) = 0;
    // 0x802793C0: sb          $zero, 0x68A1($a0)
    MEM_B(0X68A1, ctx->r4) = 0;
    // 0x802793C4: sb          $zero, 0x68A0($a0)
    MEM_B(0X68A0, ctx->r4) = 0;
    // 0x802793C8: sb          $zero, 0x68B1($a0)
    MEM_B(0X68B1, ctx->r4) = 0;
    // 0x802793CC: sb          $zero, 0x68B0($a0)
    MEM_B(0X68B0, ctx->r4) = 0;
    // 0x802793D0: sb          $zero, 0x71E5($a0)
    MEM_B(0X71E5, ctx->r4) = 0;
    // 0x802793D4: sb          $zero, 0x71E4($a0)
    MEM_B(0X71E4, ctx->r4) = 0;
    // 0x802793D8: sb          $zero, 0x6D45($a0)
    MEM_B(0X6D45, ctx->r4) = 0;
    // 0x802793DC: sb          $zero, 0x6D44($a0)
    MEM_B(0X6D44, ctx->r4) = 0;
    // 0x802793E0: sb          $zero, 0x6DA9($a0)
    MEM_B(0X6DA9, ctx->r4) = 0;
    // 0x802793E4: sb          $zero, 0x6DA8($a0)
    MEM_B(0X6DA8, ctx->r4) = 0;
    // 0x802793E8: sb          $zero, 0x6CDD($a0)
    MEM_B(0X6CDD, ctx->r4) = 0;
    // 0x802793EC: sb          $zero, 0x6CDC($a0)
    MEM_B(0X6CDC, ctx->r4) = 0;
    // 0x802793F0: sb          $zero, 0x6E25($a0)
    MEM_B(0X6E25, ctx->r4) = 0;
    // 0x802793F4: sb          $zero, 0x6E24($a0)
    MEM_B(0X6E24, ctx->r4) = 0;
    // 0x802793F8: sb          $zero, 0x6E3D($a0)
    MEM_B(0X6E3D, ctx->r4) = 0;
    // 0x802793FC: sb          $zero, 0x6E3C($a0)
    MEM_B(0X6E3C, ctx->r4) = 0;
    // 0x80279400: sb          $zero, 0x6E61($a0)
    MEM_B(0X6E61, ctx->r4) = 0;
    // 0x80279404: sb          $zero, 0x6E60($a0)
    MEM_B(0X6E60, ctx->r4) = 0;
    // 0x80279408: sb          $zero, 0x6EDD($a0)
    MEM_B(0X6EDD, ctx->r4) = 0;
    // 0x8027940C: sb          $zero, 0x6EDC($a0)
    MEM_B(0X6EDC, ctx->r4) = 0;
    // 0x80279410: sb          $zero, 0x6EE9($a0)
    MEM_B(0X6EE9, ctx->r4) = 0;
    // 0x80279414: sb          $zero, 0x6EE8($a0)
    MEM_B(0X6EE8, ctx->r4) = 0;
    // 0x80279418: sb          $zero, 0x6EFD($a0)
    MEM_B(0X6EFD, ctx->r4) = 0;
    // 0x8027941C: sb          $zero, 0x6EFC($a0)
    MEM_B(0X6EFC, ctx->r4) = 0;
    // 0x80279420: sb          $zero, 0x6FB9($a0)
    MEM_B(0X6FB9, ctx->r4) = 0;
    // 0x80279424: sb          $zero, 0x6FB8($a0)
    MEM_B(0X6FB8, ctx->r4) = 0;
    // 0x80279428: sw          $zero, 0x6FBC($a0)
    MEM_W(0X6FBC, ctx->r4) = 0;
    // 0x8027942C: sw          $zero, 0x6F00($a0)
    MEM_W(0X6F00, ctx->r4) = 0;
    // 0x80279430: sb          $zero, 0x704D($a0)
    MEM_B(0X704D, ctx->r4) = 0;
    // 0x80279434: sb          $zero, 0x704C($a0)
    MEM_B(0X704C, ctx->r4) = 0;
    // 0x80279438: sb          $zero, 0x6F91($a0)
    MEM_B(0X6F91, ctx->r4) = 0;
    // 0x8027943C: sb          $zero, 0x6F90($a0)
    MEM_B(0X6F90, ctx->r4) = 0;
    // 0x80279440: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80279444: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80279448: sw          $t6, 0x4E14($a0)
    MEM_W(0X4E14, ctx->r4) = ctx->r14;
L_8027944C:
    // 0x8027944C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80279450: slti        $at, $v1, 0x28
    ctx->r1 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
    // 0x80279454: sw          $zero, 0x7050($v0)
    MEM_W(0X7050, ctx->r2) = 0;
    // 0x80279458: bne         $at, $zero, L_8027944C
    if (ctx->r1 != 0) {
        // 0x8027945C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8027944C;
    }
    // 0x8027945C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80279460: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x80279464: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80279468: sb          $zero, 0x70F0($a1)
    MEM_B(0X70F0, ctx->r5) = 0;
    // 0x8027946C: sw          $zero, 0x70F4($a1)
    MEM_W(0X70F4, ctx->r5) = 0;
    // 0x80279470: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x80279474: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x80279478: sw          $a1, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r5;
    // 0x8027947C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80279480: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80279484: sw          $t7, 0x7168($a1)
    MEM_W(0X7168, ctx->r5) = ctx->r15;
    // 0x80279488: sb          $zero, 0x716C($a1)
    MEM_B(0X716C, ctx->r5) = 0;
    // 0x8027948C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80279490: jal         0x80224CA8
    // 0x80279494: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x80279494: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x80279498: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8027949C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802794A0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802794A4: sw          $zero, 0x8B4($a1)
    MEM_W(0X8B4, ctx->r5) = 0;
    // 0x802794A8: sw          $zero, 0x8B8($a1)
    MEM_W(0X8B8, ctx->r5) = 0;
    // 0x802794AC: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
L_802794B0:
    // 0x802794B0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802794B4: sw          $zero, 0x8B4($v0)
    MEM_W(0X8B4, ctx->r2) = 0;
    // 0x802794B8: sw          $zero, 0x8B8($v0)
    MEM_W(0X8B8, ctx->r2) = 0;
    // 0x802794BC: sw          $zero, 0x8BC($v0)
    MEM_W(0X8BC, ctx->r2) = 0;
    // 0x802794C0: sw          $zero, 0x8C0($v0)
    MEM_W(0X8C0, ctx->r2) = 0;
    // 0x802794C4: bne         $v1, $a0, L_802794B0
    if (ctx->r3 != ctx->r4) {
        // 0x802794C8: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_802794B0;
    }
    // 0x802794C8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x802794CC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802794D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802794D4: nop

    // 0x802794D8: swc1        $f4, 0x7160($a1)
    MEM_W(0X7160, ctx->r5) = ctx->f4.u32l;
    // 0x802794DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802794E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802794E4: jr          $ra
    // 0x802794E8: nop

    return;
    // 0x802794E8: nop

;}
RECOMP_FUNC void D_802EEF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF004: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802EF008: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802EF00C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EF010: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802EF014: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802EF018: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802EF01C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EF020: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802EF024: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802EF028: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802EF02C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802EF030: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802EF034: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EF038: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802EF03C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802EF040: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802EF044: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x802EF048: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802EF04C: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802EF050: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802EF054: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x802EF058: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802EF05C: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x802EF060: sh          $t7, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = ctx->r15;
L_802EF064:
    // 0x802EF064: jal         0x8023499C
    // 0x802EF068: nop

    static_3_8023499C(rdram, ctx);
        goto after_0;
    // 0x802EF068: nop

    after_0:
    // 0x802EF06C: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802EF070: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x802EF074: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x802EF078: mflo        $t8
    ctx->r24 = lo;
    // 0x802EF07C: addu        $s1, $s3, $t8
    ctx->r17 = ADD32(ctx->r19, ctx->r24);
    // 0x802EF080: jal         0x8023499C
    // 0x802EF084: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_1;
    // 0x802EF084: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    after_1:
    // 0x802EF088: sub.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x802EF08C: addiu       $s2, $s1, 0x8
    ctx->r18 = ADD32(ctx->r17, 0X8);
    // 0x802EF090: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x802EF094: jal         0x8023499C
    // 0x802EF098: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_2;
    // 0x802EF098: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    after_2:
    // 0x802EF09C: sub.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x802EF0A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802EF0A4: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x802EF0A8: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802EF0AC: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x802EF0B0: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x802EF0B4: bne         $at, $zero, L_802EF064
    if (ctx->r1 != 0) {
        // 0x802EF0B8: swc1        $f8, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
            goto L_802EF064;
    }
    // 0x802EF0B8: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
    // 0x802EF0BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802EF0C0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802EF0C4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802EF0C8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802EF0CC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802EF0D0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802EF0D4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802EF0D8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802EF0DC: jr          $ra
    // 0x802EF0E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802EF0E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8028270C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028278C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80282790: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80282794: jr          $ra
    // 0x80282798: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x80282798: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802D4670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D46F0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802D46F4: sdc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X8, ctx->r29);
    // 0x802D46F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802D46FC: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x802D4700: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802D4704: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802D4708: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802D470C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D4710: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802D4714: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802D4718: sub.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d - ctx->f8.d;
    // 0x802D471C: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x802D4720: sdc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X0, ctx->r29);
    // 0x802D4724: sdc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X10, ctx->r29);
    // 0x802D4728: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x802D472C: sdc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X18, ctx->r29);
    // 0x802D4730: sdc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X20, ctx->r29);
    // 0x802D4734: div.d       $f6, $f10, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f22.d);
    // 0x802D4738: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x802D473C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802D4740: sdc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X28, ctx->r29);
    // 0x802D4744: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x802D4748: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x802D474C: cvt.d.s     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f2.d = CVT_D_S(ctx->f8.fl);
    // 0x802D4750: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x802D4754: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x802D4758: cvt.d.s     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f20.d = CVT_D_S(ctx->f10.fl);
    // 0x802D475C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x802D4760: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
    // 0x802D4764: cvt.d.s     $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.d = CVT_D_S(ctx->f14.fl);
    // 0x802D4768: neg.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = -ctx->f14.fl;
    // 0x802D476C: mul.d       $f16, $f22, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f22.d, ctx->f0.d);
    // 0x802D4770: nop

    // 0x802D4774: mul.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x802D4778: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x802D477C: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802D4780: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x802D4784: mul.d       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x802D4788: add.d       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f4.d + ctx->f6.d;
    // 0x802D478C: sub.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d - ctx->f18.d;
    // 0x802D4790: sub.d       $f4, $f22, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f22.d - ctx->f0.d;
    // 0x802D4794: cvt.s.d     $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f24.fl = CVT_S_D(ctx->f6.d);
    // 0x802D4798: mul.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x802D479C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D47A0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802D47A4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802D47A8: swc1        $f24, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f24.u32l;
    // 0x802D47AC: sub.d       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f4.d = ctx->f0.d - ctx->f4.d;
    // 0x802D47B0: mul.d       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x802D47B4: add.d       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f6.d + ctx->f4.d;
    // 0x802D47B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D47BC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802D47C0: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x802D47C4: add.d       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f6.d + ctx->f4.d;
    // 0x802D47C8: sub.d       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f0.d - ctx->f22.d;
    // 0x802D47CC: cvt.s.d     $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f26.fl = CVT_S_D(ctx->f6.d);
    // 0x802D47D0: mul.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x802D47D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D47D8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802D47DC: swc1        $f26, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f26.u32l;
    // 0x802D47E0: sub.d       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f4.d - ctx->f16.d;
    // 0x802D47E4: mul.d       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x802D47E8: add.d       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f6.d + ctx->f4.d;
    // 0x802D47EC: add.d       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f6.d + ctx->f18.d;
    // 0x802D47F0: mul.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x802D47F4: cvt.s.d     $f28, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f28.fl = CVT_S_D(ctx->f4.d);
    // 0x802D47F8: mul.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x802D47FC: swc1        $f28, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f28.u32l;
    // 0x802D4800: sub.s       $f30, $f6, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f30.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802D4804: swc1        $f30, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f30.u32l;
    // 0x802D4808: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802D480C: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802D4810: mul.s       $f8, $f10, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x802D4814: nop

    // 0x802D4818: mul.s       $f4, $f6, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x802D481C: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x802D4820: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802D4824: mul.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x802D4828: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802D482C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802D4830: mul.s       $f10, $f6, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x802D4834: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802D4838: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x802D483C: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x802D4840: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x802D4844: mul.s       $f4, $f6, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x802D4848: nop

    // 0x802D484C: mul.s       $f8, $f10, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x802D4850: lwc1        $f10, 0x4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X4);
    // 0x802D4854: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802D4858: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x802D485C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802D4860: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802D4864: mul.s       $f6, $f10, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x802D4868: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802D486C: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x802D4870: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802D4874: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x802D4878: mul.s       $f8, $f10, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x802D487C: nop

    // 0x802D4880: mul.s       $f4, $f6, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x802D4884: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x802D4888: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802D488C: mul.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x802D4890: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802D4894: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802D4898: mul.s       $f10, $f6, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x802D489C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802D48A0: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x802D48A4: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802D48A8: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x802D48AC: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802D48B0: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x802D48B4: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802D48B8: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802D48BC: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802D48C0: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802D48C4: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x802D48C8: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802D48CC: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802D48D0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802D48D4: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802D48D8: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x802D48DC: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802D48E0: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x802D48E4: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802D48E8: lwc1        $f6, 0x10($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X10);
    // 0x802D48EC: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802D48F0: nop

    // 0x802D48F4: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802D48F8: lwc1        $f6, 0x10($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X10);
    // 0x802D48FC: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802D4900: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802D4904: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802D4908: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802D490C: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x802D4910: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802D4914: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    // 0x802D4918: lwc1        $f6, 0x14($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X14);
    // 0x802D491C: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x802D4920: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802D4924: nop

    // 0x802D4928: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802D492C: lwc1        $f10, 0x14($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X14);
    // 0x802D4930: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802D4934: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802D4938: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x802D493C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802D4940: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x802D4944: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802D4948: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x802D494C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x802D4950: ldc1        $f30, 0x28($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X28);
    // 0x802D4954: ldc1        $f28, 0x20($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X20);
    // 0x802D4958: ldc1        $f26, 0x18($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X18);
    // 0x802D495C: ldc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X10);
    // 0x802D4960: ldc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X8);
    // 0x802D4964: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
    // 0x802D4968: jr          $ra
    // 0x802D496C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x802D496C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void D_802ED248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED2C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED2CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED2D0: beq         $a0, $zero, L_802ED300
    if (ctx->r4 == 0) {
        // 0x802ED2D4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ED300;
    }
    // 0x802ED2D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ED2D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ED2DC: jal         0x8031C514
    // 0x802ED2E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ED2E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ED2E4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED2E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED2EC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ED2F0: beql        $t7, $zero, L_802ED304
    if (ctx->r15 == 0) {
        // 0x802ED2F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ED304;
    }
    goto skip_0;
    // 0x802ED2F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ED2F8: jal         0x802C681C
    // 0x802ED2FC: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ED2FC: nop

    after_1:
L_802ED300:
    // 0x802ED300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ED304:
    // 0x802ED304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED308: jr          $ra
    // 0x802ED30C: nop

    return;
    // 0x802ED30C: nop

;}
