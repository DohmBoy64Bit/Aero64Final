#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80238060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238060: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x80238064: lbu         $t6, 0x98($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X98);
    // 0x80238068: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8023806C: addu        $a2, $a0, $t7
    ctx->r6 = ADD32(ctx->r4, ctx->r15);
    // 0x80238070: beql        $t6, $zero, L_802380A8
    if (ctx->r14 == 0) {
        // 0x80238074: lw          $a3, 0x18($a2)
        ctx->r7 = MEM_W(ctx->r6, 0X18);
            goto L_802380A8;
    }
    goto skip_0;
    // 0x80238074: lw          $a3, 0x18($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X18);
    skip_0:
    // 0x80238078: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8023807C: addu        $a2, $a0, $t7
    ctx->r6 = ADD32(ctx->r4, ctx->r15);
    // 0x80238080: lw          $a3, 0x58($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X58);
    // 0x80238084: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x80238088: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x8023808C: sw          $t8, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r24;
    // 0x80238090: lbu         $t9, 0x98($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X98);
    // 0x80238094: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80238098: sb          $t6, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r14;
    // 0x8023809C: jr          $ra
    // 0x802380A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x802380A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802380A4: lw          $a3, 0x18($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X18);
L_802380A8:
    // 0x802380A8: addiu       $t0, $zero, 0xFE
    ctx->r8 = ADD32(0, 0XFE);
    // 0x802380AC: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x802380B0: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x802380B4: sw          $t8, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r24;
    // 0x802380B8: bne         $t0, $v1, L_8023811C
    if (ctx->r8 != ctx->r3) {
        // 0x802380BC: nop
    
            goto L_8023811C;
    }
    // 0x802380BC: nop

    // 0x802380C0: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    // 0x802380C4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802380C8: sw          $t9, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r25;
    // 0x802380CC: beq         $t0, $a0, L_8023811C
    if (ctx->r8 == ctx->r4) {
        // 0x802380D0: addiu       $t6, $t9, 0x1
        ctx->r14 = ADD32(ctx->r25, 0X1);
            goto L_8023811C;
    }
    // 0x802380D0: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x802380D4: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
    // 0x802380D8: sw          $t6, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r14;
    // 0x802380DC: lbu         $a1, 0x0($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X0);
    // 0x802380E0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802380E4: sll         $t9, $a0, 8
    ctx->r25 = S32(ctx->r4 << 8);
    // 0x802380E8: sw          $t7, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r15;
    // 0x802380EC: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x802380F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802380F4: addiu       $t9, $t7, -0x4
    ctx->r25 = ADD32(ctx->r15, -0X4);
    // 0x802380F8: sw          $t9, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r25;
    // 0x802380FC: sb          $a1, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r5;
    // 0x80238100: lw          $a3, 0x58($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X58);
    // 0x80238104: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x80238108: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x8023810C: sw          $t8, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r24;
    // 0x80238110: lbu         $t6, 0x98($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X98);
    // 0x80238114: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80238118: sb          $t7, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r15;
L_8023811C:
    // 0x8023811C: jr          $ra
    // 0x80238120: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80238120: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_80299480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299500: addiu       $sp, $sp, -0x7288
    ctx->r29 = ADD32(ctx->r29, -0X7288);
    // 0x80299504: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x80299508: addiu       $t7, $zero, 0x960
    ctx->r15 = ADD32(0, 0X960);
    // 0x8029950C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80299510: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x80299514: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x80299518: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8029951C: addiu       $t2, $zero, 0x23
    ctx->r10 = ADD32(0, 0X23);
    // 0x80299520: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x80299524: addiu       $t4, $zero, 0x24
    ctx->r12 = ADD32(0, 0X24);
    // 0x80299528: addiu       $t5, $zero, 0x20D
    ctx->r13 = ADD32(0, 0X20D);
    // 0x8029952C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80299530: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x80299534: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80299538: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8029953C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80299540: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80299544: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80299548: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8029954C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80299550: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80299554: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x80299558: addiu       $t7, $zero, 0x1F4
    ctx->r15 = ADD32(0, 0X1F4);
    // 0x8029955C: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x80299560: addiu       $t9, $zero, 0x2336
    ctx->r25 = ADD32(0, 0X2336);
    // 0x80299564: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x80299568: addiu       $t1, $zero, 0xFB2
    ctx->r9 = ADD32(0, 0XFB2);
    // 0x8029956C: addiu       $t2, $zero, 0x1F
    ctx->r10 = ADD32(0, 0X1F);
    // 0x80299570: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x80299574: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x80299578: addiu       $t5, $zero, 0x6E
    ctx->r13 = ADD32(0, 0X6E);
    // 0x8029957C: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x80299580: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x80299584: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
    // 0x80299588: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x8029958C: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80299590: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x80299594: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80299598: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x8029959C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x802995A0: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x802995A4: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x802995A8: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x802995AC: addiu       $t7, $zero, 0x2D
    ctx->r15 = ADD32(0, 0X2D);
    // 0x802995B0: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x802995B4: addiu       $t9, $zero, 0x1F4
    ctx->r25 = ADD32(0, 0X1F4);
    // 0x802995B8: addiu       $t0, $zero, 0x15
    ctx->r8 = ADD32(0, 0X15);
    // 0x802995BC: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x802995C0: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x802995C4: addiu       $t3, $zero, 0x41
    ctx->r11 = ADD32(0, 0X41);
    // 0x802995C8: addiu       $t4, $zero, 0x21
    ctx->r12 = ADD32(0, 0X21);
    // 0x802995CC: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x802995D0: sw          $t5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r13;
    // 0x802995D4: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
    // 0x802995D8: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
    // 0x802995DC: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x802995E0: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x802995E4: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x802995E8: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x802995EC: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x802995F0: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x802995F4: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x802995F8: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x802995FC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x80299600: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80299604: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80299608: jal         0x80231D58
    // 0x8029960C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    static_3_80231D58(rdram, ctx);
        goto after_0;
    // 0x8029960C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_0:
    // 0x80299610: jal         0x80230D70
    // 0x80299614: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80230D70(rdram, ctx);
        goto after_1;
    // 0x80299614: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80299618: jal         0x8022BD80
    // 0x8029961C: nop

    static_3_8022BD80(rdram, ctx);
        goto after_2;
    // 0x8029961C: nop

    after_2:
    // 0x80299620: jal         0x802A9FF0
    // 0x80299624: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    static_3_802A9FF0(rdram, ctx);
        goto after_3;
    // 0x80299624: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    after_3:
    // 0x80299628: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x8029962C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80299630: jal         0x802AC63C
    // 0x80299634: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
    static_3_802AC63C(rdram, ctx);
        goto after_4;
    // 0x80299634: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
    after_4:
    // 0x80299638: jal         0x802AF958
    // 0x8029963C: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    static_3_802AF958(rdram, ctx);
        goto after_5;
    // 0x8029963C: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    after_5:
    // 0x80299640: jal         0x80230F60
    // 0x80299644: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80230F60(rdram, ctx);
        goto after_6;
    // 0x80299644: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80299648: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x8029964C: jal         0x802AA1A0
    // 0x80299650: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802AA1A0(rdram, ctx);
        goto after_7;
    // 0x80299650: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80299654: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x80299658: addiu       $sp, $sp, 0x7288
    ctx->r29 = ADD32(ctx->r29, 0X7288);
    // 0x8029965C: jr          $ra
    // 0x80299660: nop

    return;
    // 0x80299660: nop

;}
RECOMP_FUNC void D_8022B7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B7BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022B7C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B7C4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8022B7C8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8022B7CC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022B7D0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022B7D4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022B7D8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022B7DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B7E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B7E4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022B7E8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8022B7EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022B7F0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8022B7F4: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8022B7F8: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8022B7FC: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x8022B800: addiu       $s5, $a1, -0x1
    ctx->r21 = ADD32(ctx->r5, -0X1);
    // 0x8022B804: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8022B808: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
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
RECOMP_FUNC void D_802EFE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFE90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802EFE94: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802EFE98: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802EFE9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EFEA0: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802EFEA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802EFEA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802EFEAC: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802EFEB0: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x802EFEB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EFEB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802EFEBC: lh          $t6, 0x20($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X20);
    // 0x802EFEC0: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802EFEC4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802EFEC8: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x802EFECC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802EFED0: jalr        $t9
    // 0x802EFED4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802EFED4: nop

    after_0:
    // 0x802EFED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802EFEDC: jal         0x8031C568
    // 0x802EFEE0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_8031C568(rdram, ctx);
        goto after_1;
    // 0x802EFEE0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x802EFEE4: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802EFEE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802EFEEC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802EFEF0: lh          $t7, 0x20($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X20);
    // 0x802EFEF4: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x802EFEF8: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802EFEFC: jalr        $t9
    // 0x802EFF00: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802EFF00: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    after_2:
    // 0x802EFF04: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x802EFF08: jal         0x8031C568
    // 0x802EFF0C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_8031C568(rdram, ctx);
        goto after_3;
    // 0x802EFF0C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x802EFF10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802EFF14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802EFF18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802EFF1C: jr          $ra
    // 0x802EFF20: nop

    return;
    // 0x802EFF20: nop

;}
RECOMP_FUNC void D_802BBFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BC068: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802BC06C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802BC070: jal         0x802EE050
    // 0x802BC074: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    static_3_802EE050(rdram, ctx);
        goto after_0;
    // 0x802BC074: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    after_0:
    // 0x802BC078: jal         0x8022331C
    // 0x802BC07C: nop

    static_3_8022331C(rdram, ctx);
        goto after_1;
    // 0x802BC07C: nop

    after_1:
    // 0x802BC080: jal         0x8022970C
    // 0x802BC084: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802BC084: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x802BC088: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802BC08C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802BC090: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802BC094: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802BC098: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802BC09C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802BC0A0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802BC0A4: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802BC0A8: jal         0x8022A848
    // 0x802BC0AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_3;
    // 0x802BC0AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x802BC0B0: jal         0x80221B2C
    // 0x802BC0B4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_80221B2C(rdram, ctx);
        goto after_4;
    // 0x802BC0B4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x802BC0B8: jal         0x8022970C
    // 0x802BC0BC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x802BC0BC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x802BC0C0: jal         0x8022149C
    // 0x802BC0C4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_8022149C(rdram, ctx);
        goto after_6;
    // 0x802BC0C4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x802BC0C8: jal         0x802233EC
    // 0x802BC0CC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_7;
    // 0x802BC0CC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    after_7:
    // 0x802BC0D0: jal         0x8021F4E4
    // 0x802BC0D4: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_8;
    // 0x802BC0D4: nop

    after_8:
    // 0x802BC0D8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802BC0DC: addiu       $t7, $zero, 0xCA
    ctx->r15 = ADD32(0, 0XCA);
    // 0x802BC0E0: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802BC0E4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802BC0E8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BC0EC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BC0F0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BC0F4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BC0F8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802BC0FC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802BC100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC104: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC108: jal         0x8021F35C
    // 0x802BC10C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802BC10C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x802BC110: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BC114: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BC118: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BC11C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BC120: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BC124: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BC128: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BC12C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BC130: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802BC134: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802BC138: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC13C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802BC140: jal         0x8021F35C
    // 0x802BC144: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802BC144: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x802BC148: addiu       $t4, $zero, 0x1E0
    ctx->r12 = ADD32(0, 0X1E0);
    // 0x802BC14C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802BC150: addiu       $t6, $zero, 0xCA
    ctx->r14 = ADD32(0, 0XCA);
    // 0x802BC154: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x802BC158: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802BC15C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802BC160: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802BC164: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802BC168: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802BC16C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802BC170: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802BC174: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802BC178: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC17C: jal         0x8021F35C
    // 0x802BC180: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802BC180: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_11:
    // 0x802BC184: addiu       $t9, $zero, 0x1E0
    ctx->r25 = ADD32(0, 0X1E0);
    // 0x802BC188: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BC18C: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BC190: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BC194: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BC198: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BC19C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BC1A0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BC1A4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BC1A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802BC1AC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802BC1B0: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802BC1B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC1B8: jal         0x8021F35C
    // 0x802BC1BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x802BC1BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x802BC1C0: jal         0x8021FCD0
    // 0x802BC1C4: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_13;
    // 0x802BC1C4: nop

    after_13:
    // 0x802BC1C8: jal         0x8021F4E4
    // 0x802BC1CC: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_14;
    // 0x802BC1CC: nop

    after_14:
    // 0x802BC1D0: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802BC1D4: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802BC1D8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802BC1DC: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x802BC1E0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802BC1E4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802BC1E8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802BC1EC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802BC1F0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802BC1F4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x802BC1F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC1FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC200: jal         0x8021F35C
    // 0x802BC204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x802BC204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x802BC208: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802BC20C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802BC210: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802BC214: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x802BC218: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802BC21C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802BC220: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802BC224: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802BC228: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802BC22C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x802BC230: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC234: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC238: jal         0x8021F35C
    // 0x802BC23C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802BC23C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x802BC240: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802BC244: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802BC248: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802BC24C: addiu       $t5, $zero, 0x96
    ctx->r13 = ADD32(0, 0X96);
    // 0x802BC250: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802BC254: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802BC258: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802BC25C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802BC260: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802BC264: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802BC268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC26C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC270: jal         0x8021F35C
    // 0x802BC274: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x802BC274: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x802BC278: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802BC27C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802BC280: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802BC284: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802BC288: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BC28C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BC290: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BC294: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BC298: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802BC29C: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
    // 0x802BC2A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC2A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BC2A8: jal         0x8021F35C
    // 0x802BC2AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x802BC2AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x802BC2B0: jal         0x8021FCD0
    // 0x802BC2B4: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_19;
    // 0x802BC2B4: nop

    after_19:
    // 0x802BC2B8: jal         0x802230E4
    // 0x802BC2BC: nop

    static_3_802230E4(rdram, ctx);
        goto after_20;
    // 0x802BC2BC: nop

    after_20:
    // 0x802BC2C0: jal         0x8022337C
    // 0x802BC2C4: nop

    static_3_8022337C(rdram, ctx);
        goto after_21;
    // 0x802BC2C4: nop

    after_21:
    // 0x802BC2C8: jal         0x8021E66C
    // 0x802BC2CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_22;
    // 0x802BC2CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
    // 0x802BC2D0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BC2D4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BC2D8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BC2DC: jal         0x8021E708
    // 0x802BC2E0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_23;
    // 0x802BC2E0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_23:
    // 0x802BC2E4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC2E8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BC2EC: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802BC2F0: jal         0x8021E87C
    // 0x802BC2F4: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    static_3_8021E87C(rdram, ctx);
        goto after_24;
    // 0x802BC2F4: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    after_24:
    // 0x802BC2F8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802BC2FC: ldc1        $f12, 0x0($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, 0X0);
    // 0x802BC300: jal         0x8021E6EC
    // 0x802BC304: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_25;
    // 0x802BC304: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_25:
    // 0x802BC308: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802BC30C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802BC310: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BC314: jal         0x8021E708
    // 0x802BC318: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_26;
    // 0x802BC318: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_26:
    // 0x802BC31C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC320: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BC324: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802BC328: jal         0x8021E87C
    // 0x802BC32C: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    static_3_8021E87C(rdram, ctx);
        goto after_27;
    // 0x802BC32C: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_27:
    // 0x802BC330: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC334: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BC338: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802BC33C: jal         0x8021E87C
    // 0x802BC340: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    static_3_8021E87C(rdram, ctx);
        goto after_28;
    // 0x802BC340: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_28:
    // 0x802BC344: jal         0x8021EC9C
    // 0x802BC348: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_29;
    // 0x802BC348: nop

    after_29:
    // 0x802BC34C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802BC350: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802BC354: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802BC358: blezl       $t0, L_802BC43C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802BC35C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802BC43C;
    }
    goto skip_0;
    // 0x802BC35C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802BC360: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x802BC364: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802BC368: jal         0x8021E6EC
    // 0x802BC36C: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_30;
    // 0x802BC36C: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_30:
    // 0x802BC370: jal         0x8021E66C
    // 0x802BC374: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_31;
    // 0x802BC374: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_31:
    // 0x802BC378: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BC37C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BC380: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BC384: jal         0x8021E708
    // 0x802BC388: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_32;
    // 0x802BC388: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_32:
    // 0x802BC38C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BC390: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BC394: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC398: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802BC39C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BC3A0: jal         0x8023072C
    // 0x802BC3A4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_33;
    // 0x802BC3A4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_33:
    // 0x802BC3A8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC3AC: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802BC3B0: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x802BC3B4: jal         0x8021E87C
    // 0x802BC3B8: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    static_3_8021E87C(rdram, ctx);
        goto after_34;
    // 0x802BC3B8: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_34:
    // 0x802BC3BC: jal         0x8021E66C
    // 0x802BC3C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_35;
    // 0x802BC3C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_35:
    // 0x802BC3C4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BC3C8: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802BC3CC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802BC3D0: jal         0x8021E708
    // 0x802BC3D4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_36;
    // 0x802BC3D4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_36:
    // 0x802BC3D8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802BC3DC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802BC3E0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802BC3E4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802BC3E8: jal         0x8022B460
    // 0x802BC3EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022B460(rdram, ctx);
        goto after_37;
    // 0x802BC3EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_37:
    // 0x802BC3F0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802BC3F4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802BC3F8: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x802BC3FC: jal         0x8021E87C
    // 0x802BC400: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    static_3_8021E87C(rdram, ctx);
        goto after_38;
    // 0x802BC400: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    after_38:
    // 0x802BC404: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802BC408: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802BC40C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802BC410: jal         0x8021E708
    // 0x802BC414: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_39;
    // 0x802BC414: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_39:
    // 0x802BC418: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x802BC41C: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x802BC420: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802BC424: jal         0x802F14C4
    // 0x802BC428: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802F14C4(rdram, ctx);
        goto after_40;
    // 0x802BC428: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_40:
    // 0x802BC42C: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x802BC430: jal         0x8023413C
    // 0x802BC434: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    static_3_8023413C(rdram, ctx);
        goto after_41;
    // 0x802BC434: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    after_41:
    // 0x802BC438: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802BC43C:
    // 0x802BC43C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802BC440: jr          $ra
    // 0x802BC444: nop

    return;
    // 0x802BC444: nop

;}
RECOMP_FUNC void D_80241710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241710: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80241714: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80241718: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8024171C: mtc0        $t1, Status
    cop0_status_write(ctx, ctx->r9);    // 0x80241720: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x80241724: nop

    // 0x80241728: jr          $ra
    // 0x8024172C: nop

    return;
    // 0x8024172C: nop

;}
RECOMP_FUNC void D_80228CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228CBC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80228CC0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80228CC4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80228CC8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80228CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228CD0: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x80228CD4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80228CD8: lhu         $t8, 0x0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X0);
    // 0x80228CDC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80228CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228CE4: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80228CE8: bne         $at, $zero, L_80228D00
    if (ctx->r1 != 0) {
        // 0x80228CEC: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80228D00;
    }
    // 0x80228CEC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80228CF0: jal         0x80231A24
    // 0x80228CF4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80228CF4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80228CF8: b           L_80228D40
    // 0x80228CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80228D40;
    // 0x80228CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228D00:
    // 0x80228D00: bne         $v0, $zero, L_80228D28
    if (ctx->r2 != 0) {
        // 0x80228D04: lui         $t1, 0x0
        ctx->r9 = S32(0X0 << 16);
            goto L_80228D28;
    }
    // 0x80228D04: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80228D08: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80228D0C: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80228D10: sll         $t0, $v0, 6
    ctx->r8 = S32(ctx->r2 << 6);
    // 0x80228D14: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80228D18: jal         0x80228DE0
    // 0x80228D1C: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80228D1C: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    after_1:
    // 0x80228D20: b           L_80228D40
    // 0x80228D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80228D40;
    // 0x80228D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228D28:
    // 0x80228D28: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80228D2C: sll         $t2, $v0, 6
    ctx->r10 = S32(ctx->r2 << 6);
    // 0x80228D30: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80228D34: jal         0x802297A8
    // 0x80228D38: addiu       $a1, $a0, -0x40
    ctx->r5 = ADD32(ctx->r4, -0X40);
    static_3_802297A8(rdram, ctx);
        goto after_2;
    // 0x80228D38: addiu       $a1, $a0, -0x40
    ctx->r5 = ADD32(ctx->r4, -0X40);
    after_2:
    // 0x80228D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228D40:
    // 0x80228D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228D44: jr          $ra
    // 0x80228D48: nop

    return;
    // 0x80228D48: nop

;}
RECOMP_FUNC void D_802D3DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3E70: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D3E74: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D3E78: jr          $ra
    // 0x802D3E7C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D3E7C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802C8E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C8F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C8F20: bne         $a0, $zero, L_802C8F38
    if (ctx->r4 != 0) {
        // 0x802C8F24: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_802C8F38;
    }
    // 0x802C8F24: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802C8F28: jal         0x802C67EC
    // 0x802C8F2C: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802C8F2C: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    after_0:
    // 0x802C8F30: beq         $v0, $zero, L_802C8F74
    if (ctx->r2 == 0) {
        // 0x802C8F34: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_802C8F74;
    }
    // 0x802C8F34: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_802C8F38:
    // 0x802C8F38: addiu       $a0, $a3, 0x10
    ctx->r4 = ADD32(ctx->r7, 0X10);
    // 0x802C8F3C: jal         0x80291630
    // 0x802C8F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    static_3_80291630(rdram, ctx);
        goto after_1;
    // 0x802C8F40: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x802C8F44: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802C8F48: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802C8F4C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802C8F50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802C8F54: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802C8F58: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
L_802C8F5C:
    // 0x802C8F5C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x802C8F60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802C8F64: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x802C8F68: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802C8F6C: bne         $v1, $a2, L_802C8F5C
    if (ctx->r3 != ctx->r6) {
        // 0x802C8F70: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_802C8F5C;
    }
    // 0x802C8F70: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_802C8F74:
    // 0x802C8F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C8F78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C8F7C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x802C8F80: jr          $ra
    // 0x802C8F84: nop

    return;
    // 0x802C8F84: nop

;}
RECOMP_FUNC void D_8027E6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E73C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027E740: beq         $a1, $at, L_8027E758
    if (ctx->r5 == ctx->r1) {
        // 0x8027E744: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8027E758;
    }
    // 0x8027E744: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027E748: beq         $a1, $at, L_8027E760
    if (ctx->r5 == ctx->r1) {
        // 0x8027E74C: addiu       $v1, $a0, 0x4E3C
        ctx->r3 = ADD32(ctx->r4, 0X4E3C);
            goto L_8027E760;
    }
    // 0x8027E74C: addiu       $v1, $a0, 0x4E3C
    ctx->r3 = ADD32(ctx->r4, 0X4E3C);
    // 0x8027E750: jr          $ra
    // 0x8027E754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8027E754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027E758:
    // 0x8027E758: jr          $ra
    // 0x8027E75C: addiu       $v0, $a0, 0x365C
    ctx->r2 = ADD32(ctx->r4, 0X365C);
    return;
    // 0x8027E75C: addiu       $v0, $a0, 0x365C
    ctx->r2 = ADD32(ctx->r4, 0X365C);
L_8027E760:
    // 0x8027E760: jr          $ra
    // 0x8027E764: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8027E764: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_8022C9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C9C4: sw          $a2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r6;
    // 0x8022C9C8: lw          $t6, 0x260($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X260);
    // 0x8022C9CC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8022C9D0: jr          $ra
    // 0x8022C9D4: sw          $a1, 0x260($a0)
    MEM_W(0X260, ctx->r4) = ctx->r5;
    return;
    // 0x8022C9D4: sw          $a1, 0x260($a0)
    MEM_W(0X260, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802AC92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC9AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802AC9B0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802AC9B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AC9B8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802AC9BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AC9C0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802AC9C4: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AC9C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802AC9CC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802AC9D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AC9D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AC9D8: addiu       $t7, $zero, 0x82
    ctx->r15 = ADD32(0, 0X82);
    // 0x802AC9DC: addiu       $t8, $zero, 0xB4
    ctx->r24 = ADD32(0, 0XB4);
    // 0x802AC9E0: addiu       $t9, $zero, 0x8B
    ctx->r25 = ADD32(0, 0X8B);
    // 0x802AC9E4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC9E8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802AC9EC: sb          $t6, 0x968($a0)
    MEM_B(0X968, ctx->r4) = ctx->r14;
    // 0x802AC9F0: sw          $t7, 0x944($a0)
    MEM_W(0X944, ctx->r4) = ctx->r15;
    // 0x802AC9F4: sw          $t8, 0x948($a0)
    MEM_W(0X948, ctx->r4) = ctx->r24;
    // 0x802AC9F8: sw          $t9, 0x94C($a0)
    MEM_W(0X94C, ctx->r4) = ctx->r25;
    // 0x802AC9FC: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    // 0x802ACA00: jal         0x803034A8
    // 0x802ACA04: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    static_3_803034A8(rdram, ctx);
        goto after_0;
    // 0x802ACA04: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    after_0:
    // 0x802ACA08: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACA0C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACA10: addiu       $a0, $s0, 0x9E0
    ctx->r4 = ADD32(ctx->r16, 0X9E0);
    // 0x802ACA14: jal         0x803034A8
    // 0x802ACA18: addiu       $a1, $zero, 0x53
    ctx->r5 = ADD32(0, 0X53);
    static_3_803034A8(rdram, ctx);
        goto after_1;
    // 0x802ACA18: addiu       $a1, $zero, 0x53
    ctx->r5 = ADD32(0, 0X53);
    after_1:
    // 0x802ACA1C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACA20: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACA24: addiu       $a0, $s0, 0xA54
    ctx->r4 = ADD32(ctx->r16, 0XA54);
    // 0x802ACA28: jal         0x803034A8
    // 0x802ACA2C: addiu       $a1, $zero, 0x59
    ctx->r5 = ADD32(0, 0X59);
    static_3_803034A8(rdram, ctx);
        goto after_2;
    // 0x802ACA2C: addiu       $a1, $zero, 0x59
    ctx->r5 = ADD32(0, 0X59);
    after_2:
    // 0x802ACA30: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACA34: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACA38: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    // 0x802ACA3C: jal         0x803034A8
    // 0x802ACA40: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    static_3_803034A8(rdram, ctx);
        goto after_3;
    // 0x802ACA40: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    after_3:
    // 0x802ACA44: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACA48: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACA4C: addiu       $a0, $s0, 0xB3C
    ctx->r4 = ADD32(ctx->r16, 0XB3C);
    // 0x802ACA50: jal         0x803034A8
    // 0x802ACA54: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    static_3_803034A8(rdram, ctx);
        goto after_4;
    // 0x802ACA54: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    after_4:
    // 0x802ACA58: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACA5C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACA60: addiu       $a0, $s0, 0xBB0
    ctx->r4 = ADD32(ctx->r16, 0XBB0);
    // 0x802ACA64: jal         0x803034A8
    // 0x802ACA68: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    static_3_803034A8(rdram, ctx);
        goto after_5;
    // 0x802ACA68: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_5:
    // 0x802ACA6C: addiu       $a0, $s0, 0xC24
    ctx->r4 = ADD32(ctx->r16, 0XC24);
    // 0x802ACA70: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACA74: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACA78: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x802ACA7C: jal         0x803034A8
    // 0x802ACA80: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    static_3_803034A8(rdram, ctx);
        goto after_6;
    // 0x802ACA80: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    after_6:
    // 0x802ACA84: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACA88: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACA8C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802ACA90: jal         0x803034A8
    // 0x802ACA94: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    static_3_803034A8(rdram, ctx);
        goto after_7;
    // 0x802ACA94: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    after_7:
    // 0x802ACA98: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACA9C: addiu       $a0, $s0, 0xD0C
    ctx->r4 = ADD32(ctx->r16, 0XD0C);
    // 0x802ACAA0: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    // 0x802ACAA4: jal         0x803034A8
    // 0x802ACAA8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    static_3_803034A8(rdram, ctx);
        goto after_8;
    // 0x802ACAA8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    after_8:
    // 0x802ACAAC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACAB0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACAB4: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    // 0x802ACAB8: jal         0x803034A8
    // 0x802ACABC: addiu       $a1, $zero, 0x56
    ctx->r5 = ADD32(0, 0X56);
    static_3_803034A8(rdram, ctx);
        goto after_9;
    // 0x802ACABC: addiu       $a1, $zero, 0x56
    ctx->r5 = ADD32(0, 0X56);
    after_9:
    // 0x802ACAC0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACAC4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACAC8: addiu       $a0, $s0, 0xE68
    ctx->r4 = ADD32(ctx->r16, 0XE68);
    // 0x802ACACC: jal         0x803034A8
    // 0x802ACAD0: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    static_3_803034A8(rdram, ctx);
        goto after_10;
    // 0x802ACAD0: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    after_10:
    // 0x802ACAD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802ACAD8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802ACADC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802ACAE0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802ACAE4: jr          $ra
    // 0x802ACAE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802ACAE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_8021E7EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E7EC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021E7F0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021E7F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021E7F8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021E7FC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8021E800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E804: lw          $t7, 0x44($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X44);
    // 0x8021E808: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8021E80C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021E810: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8021E814: jal         0x8021E73C
    // 0x8021E818: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    static_3_8021E73C(rdram, ctx);
        goto after_0;
    // 0x8021E818: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_0:
    // 0x8021E81C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021E824: jr          $ra
    // 0x8021E828: nop

    return;
    // 0x8021E828: nop

;}
RECOMP_FUNC void D_8023E2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E2E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023E2E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023E2E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023E2EC: jal         0x80245AD0
    // 0x8023E2F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8023E2F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8023E2F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023E2F8: jal         0x80247AEC
    // 0x8023E2FC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    static_3_80247AEC(rdram, ctx);
        goto after_1;
    // 0x8023E2FC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8023E300: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023E304: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E308: bne         $t6, $zero, L_8023E32C
    if (ctx->r14 != 0) {
        // 0x8023E30C: nop
    
            goto L_8023E32C;
    }
    // 0x8023E30C: nop

    // 0x8023E310: lhu         $t7, 0x18($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X18);
    // 0x8023E314: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8023E318: beq         $t8, $zero, L_8023E32C
    if (ctx->r24 == 0) {
        // 0x8023E31C: nop
    
            goto L_8023E32C;
    }
    // 0x8023E31C: nop

    // 0x8023E320: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8023E324: b           L_8023E330
    // 0x8023E328: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_8023E330;
    // 0x8023E328: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_8023E32C:
    // 0x8023E32C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8023E330:
    // 0x8023E330: jal         0x80245B14
    // 0x8023E334: nop

    static_3_80245B14(rdram, ctx);
        goto after_2;
    // 0x8023E334: nop

    after_2:
    // 0x8023E338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E33C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023E344: jr          $ra
    // 0x8023E348: nop

    return;
    // 0x8023E348: nop

;}
RECOMP_FUNC void D_80237460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237460: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80237464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237468: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023746C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80237470: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80237474: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80237478: jal         0x80241760
    // 0x8023747C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023747C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80237480: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80237484: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80237488: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8023748C: bne         $t7, $zero, L_802374D8
    if (ctx->r15 != 0) {
        // 0x80237490: nop
    
            goto L_802374D8;
    }
    // 0x80237490: nop

L_80237494:
    // 0x80237494: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80237498: bne         $t8, $zero, L_802374B0
    if (ctx->r24 != 0) {
        // 0x8023749C: nop
    
            goto L_802374B0;
    }
    // 0x8023749C: nop

    // 0x802374A0: jal         0x80241780
    // 0x802374A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x802374A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802374A8: b           L_80237584
    // 0x802374AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80237584;
    // 0x802374AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802374B0:
    // 0x802374B0: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802374B4: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x802374B8: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x802374BC: sh          $t9, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r25;
    // 0x802374C0: jal         0x80241DFC
    // 0x802374C4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_80241DFC(rdram, ctx);
        goto after_2;
    // 0x802374C4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x802374C8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x802374CC: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x802374D0: beq         $t2, $zero, L_80237494
    if (ctx->r10 == 0) {
        // 0x802374D4: nop
    
            goto L_80237494;
    }
    // 0x802374D4: nop

L_802374D8:
    // 0x802374D8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x802374DC: beq         $t3, $zero, L_80237500
    if (ctx->r11 == 0) {
        // 0x802374E0: nop
    
            goto L_80237500;
    }
    // 0x802374E0: nop

    // 0x802374E4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x802374E8: lw          $t6, 0xC($t4)
    ctx->r14 = MEM_W(ctx->r12, 0XC);
    // 0x802374EC: lw          $t5, 0x14($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X14);
    // 0x802374F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802374F4: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x802374F8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x802374FC: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
L_80237500:
    // 0x80237500: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80237504: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x80237508: lw          $t4, 0x10($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X10);
    // 0x8023750C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80237510: div         $zero, $t2, $t4
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r12)));
    // 0x80237514: mfhi        $t6
    ctx->r14 = hi;
    // 0x80237518: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
    // 0x8023751C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80237520: bne         $t4, $zero, L_8023752C
    if (ctx->r12 != 0) {
        // 0x80237524: nop
    
            goto L_8023752C;
    }
    // 0x80237524: nop

    // 0x80237528: break       7
    do_break(2149807400);
L_8023752C:
    // 0x8023752C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80237530: bne         $t4, $at, L_80237544
    if (ctx->r12 != ctx->r1) {
        // 0x80237534: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80237544;
    }
    // 0x80237534: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80237538: bne         $t2, $at, L_80237544
    if (ctx->r10 != ctx->r1) {
        // 0x8023753C: nop
    
            goto L_80237544;
    }
    // 0x8023753C: nop

    // 0x80237540: break       6
    do_break(2149807424);
L_80237544:
    // 0x80237544: lw          $t7, 0x8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X8);
    // 0x80237548: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8023754C: sw          $t8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r24;
    // 0x80237550: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80237554: lw          $t3, 0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X4);
    // 0x80237558: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x8023755C: beq         $t1, $zero, L_80237578
    if (ctx->r9 == 0) {
        // 0x80237560: nop
    
            goto L_80237578;
    }
    // 0x80237560: nop

    // 0x80237564: jal         0x80241F44
    // 0x80237568: addiu       $a0, $t9, 0x4
    ctx->r4 = ADD32(ctx->r25, 0X4);
    static_3_80241F44(rdram, ctx);
        goto after_3;
    // 0x80237568: addiu       $a0, $t9, 0x4
    ctx->r4 = ADD32(ctx->r25, 0X4);
    after_3:
    // 0x8023756C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80237570: jal         0x80237360
    // 0x80237574: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80237360(rdram, ctx);
        goto after_4;
    // 0x80237574: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
L_80237578:
    // 0x80237578: jal         0x80241780
    // 0x8023757C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_5;
    // 0x8023757C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80237580: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80237584:
    // 0x80237584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237588: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8023758C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80237590: jr          $ra
    // 0x80237594: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80237594: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802ED374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED3F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED3F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED3FC: beq         $a0, $zero, L_802ED42C
    if (ctx->r4 == 0) {
        // 0x802ED400: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ED42C;
    }
    // 0x802ED400: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ED404: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ED408: jal         0x8031C514
    // 0x802ED40C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ED40C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ED410: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED414: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED418: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ED41C: beql        $t7, $zero, L_802ED430
    if (ctx->r15 == 0) {
        // 0x802ED420: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ED430;
    }
    goto skip_0;
    // 0x802ED420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ED424: jal         0x802C681C
    // 0x802ED428: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ED428: nop

    after_1:
L_802ED42C:
    // 0x802ED42C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ED430:
    // 0x802ED430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED434: jr          $ra
    // 0x802ED438: nop

    return;
    // 0x802ED438: nop

;}
RECOMP_FUNC void D_80279BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279C54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80279C58: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80279C5C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80279C60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80279C64: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80279C68: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80279C6C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80279C70: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80279C74: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80279C78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80279C7C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80279C80: addiu       $a3, $t6, 0x6E3D
    ctx->r7 = ADD32(ctx->r14, 0X6E3D);
    // 0x80279C84: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80279C88: addiu       $a1, $t6, 0x6E3C
    ctx->r5 = ADD32(ctx->r14, 0X6E3C);
    // 0x80279C8C: jal         0x802A1BE0
    // 0x80279C90: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    static_3_802A1BE0(rdram, ctx);
        goto after_0;
    // 0x80279C90: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_0:
    // 0x80279C94: beq         $v0, $zero, L_80279CD8
    if (ctx->r2 == 0) {
        // 0x80279C98: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80279CD8;
    }
    // 0x80279C98: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80279C9C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80279CA0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80279CA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80279CA8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80279CAC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80279CB0: lbu         $a3, 0x37($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X37);
    // 0x80279CB4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80279CB8: jal         0x802891A8
    // 0x80279CBC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    static_3_802891A8(rdram, ctx);
        goto after_1;
    // 0x80279CBC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x80279CC0: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x80279CC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80279CC8: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x80279CCC: lh          $t0, 0x28($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X28);
    // 0x80279CD0: jalr        $t9
    // 0x80279CD4: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80279CD4: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_2:
L_80279CD8:
    // 0x80279CD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80279CDC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80279CE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80279CE4: jr          $ra
    // 0x80279CE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80279CE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8022C9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C9E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C9E4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022C9E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C9EC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022C9F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022C9F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022C9F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C9FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022CA00: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8022CA04: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8022CA08: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022CA0C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8022CA10: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8022CA14: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x8022CA18: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x8022CA1C: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
    // 0x8022CA20: addiu       $s2, $zero, 0x29A
    ctx->r18 = ADD32(0, 0X29A);
    // 0x8022CA24: addiu       $s3, $zero, 0x29B
    ctx->r19 = ADD32(0, 0X29B);
    // 0x8022CA28: addiu       $s4, $zero, 0x29C
    ctx->r20 = ADD32(0, 0X29C);
    // 0x8022CA2C: addiu       $s5, $zero, 0x29D
    ctx->r21 = ADD32(0, 0X29D);
    // 0x8022CA30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8022CA34:
    // 0x8022CA34: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022CA38: jal         0x802374B0
    // 0x8022CA3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_0;
    // 0x8022CA3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8022CA40: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8022CA44: beq         $t6, $s2, L_8022CA6C
    if (ctx->r14 == ctx->r18) {
        // 0x8022CA48: nop
    
            goto L_8022CA6C;
    }
    // 0x8022CA48: nop

    // 0x8022CA4C: beq         $t6, $s3, L_8022CA7C
    if (ctx->r14 == ctx->r19) {
        // 0x8022CA50: nop
    
            goto L_8022CA7C;
    }
    // 0x8022CA50: nop

    // 0x8022CA54: beq         $t6, $s4, L_8022CA8C
    if (ctx->r14 == ctx->r20) {
        // 0x8022CA58: nop
    
            goto L_8022CA8C;
    }
    // 0x8022CA58: nop

    // 0x8022CA5C: beq         $t6, $s5, L_8022CA9C
    if (ctx->r14 == ctx->r21) {
        // 0x8022CA60: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_8022CA9C;
    }
    // 0x8022CA60: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8022CA64: b           L_8022CAAC
    // 0x8022CA68: nop

        goto L_8022CAAC;
    // 0x8022CA68: nop

L_8022CA6C:
    // 0x8022CA6C: jal         0x8022CB48
    // 0x8022CA70: nop

    static_3_8022CB48(rdram, ctx);
        goto after_1;
    // 0x8022CA70: nop

    after_1:
    // 0x8022CA74: b           L_8022CA34
    // 0x8022CA78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8022CA34;
    // 0x8022CA78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8022CA7C:
    // 0x8022CA7C: jal         0x8022CE68
    // 0x8022CA80: nop

    static_3_8022CE68(rdram, ctx);
        goto after_2;
    // 0x8022CA80: nop

    after_2:
    // 0x8022CA84: b           L_8022CA34
    // 0x8022CA88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8022CA34;
    // 0x8022CA88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8022CA8C:
    // 0x8022CA8C: jal         0x8022CFAC
    // 0x8022CA90: nop

    static_3_8022CFAC(rdram, ctx);
        goto after_3;
    // 0x8022CA90: nop

    after_3:
    // 0x8022CA94: b           L_8022CA34
    // 0x8022CA98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8022CA34;
    // 0x8022CA98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8022CA9C:
    // 0x8022CA9C: jal         0x8022D00C
    // 0x8022CAA0: nop

    static_3_8022D00C(rdram, ctx);
        goto after_4;
    // 0x8022CAA0: nop

    after_4:
    // 0x8022CAA4: b           L_8022CA34
    // 0x8022CAA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8022CA34;
    // 0x8022CAA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8022CAAC:
    // 0x8022CAAC: jal         0x80231A24
    // 0x8022CAB0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x8022CAB0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_5:
    // 0x8022CAB4: b           L_8022CA34
    // 0x8022CAB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8022CA34;
    // 0x8022CAB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022CABC: nop

    // 0x8022CAC0: nop

    // 0x8022CAC4: nop

    // 0x8022CAC8: nop

    // 0x8022CACC: nop

    // 0x8022CAD0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022CAD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CAD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CADC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022CAE0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022CAE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022CAE8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CAEC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022CAF0: jr          $ra
    // 0x8022CAF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8022CAF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802D2FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D303C: lbu         $t6, 0x10($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X10);
    // 0x802D3040: beql        $t6, $zero, L_802D3054
    if (ctx->r14 == 0) {
        // 0x802D3044: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_802D3054;
    }
    goto skip_0;
    // 0x802D3044: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x802D3048: jr          $ra
    // 0x802D304C: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    return;
    // 0x802D304C: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802D3050: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_802D3054:
    // 0x802D3054: nop

    // 0x802D3058: jr          $ra
    // 0x802D305C: nop

    return;
    // 0x802D305C: nop

;}
RECOMP_FUNC void D_802D807C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D80FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8100: jr          $ra
    // 0x802D8104: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802D8104: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80234DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234DA4: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x80234DA8: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x80234DAC: add         $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x80234DB0: add         $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x80234DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80234DB8: addi        $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80234DBC: add         $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
L_80234DC0:
    // 0x80234DC0: bne         $a2, $zero, L_80234DD4
    if (ctx->r6 != 0) {
        // 0x80234DC4: nop
    
            goto L_80234DD4;
    }
    // 0x80234DC4: nop

    // 0x80234DC8: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80234DCC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80234DD0: addi        $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_80234DD4:
    // 0x80234DD4: slt         $t1, $t0, $zero
    ctx->r9 = SIGNED(ctx->r8) < SIGNED(0) ? 1 : 0;
    // 0x80234DD8: beq         $t1, $zero, L_80234DF4
    if (ctx->r9 == 0) {
        // 0x80234DDC: nop
    
            goto L_80234DF4;
    }
    // 0x80234DDC: nop

    // 0x80234DE0: lb          $t2, 0x0($t9)
    ctx->r10 = MEM_B(ctx->r25, 0X0);
    // 0x80234DE4: addi        $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x80234DE8: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80234DEC: b           L_80234E24
    // 0x80234DF0: sb          $t2, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r10;
        goto L_80234E24;
    // 0x80234DF0: sb          $t2, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r10;
L_80234DF4:
    // 0x80234DF4: lhu         $t2, 0x0($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X0);
    // 0x80234DF8: addi        $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80234DFC: srl         $t3, $t2, 12
    ctx->r11 = S32(U32(ctx->r10) >> 12);
    // 0x80234E00: andi        $t2, $t2, 0xFFF
    ctx->r10 = ctx->r10 & 0XFFF;
    // 0x80234E04: sub         $t1, $a1, $t2
    ctx->r9 = SUB32(ctx->r5, ctx->r10);
    // 0x80234E08: addi        $t3, $t3, 0x3
    ctx->r11 = ADD32(ctx->r11, 0X3);
L_80234E0C:
    // 0x80234E0C: lb          $t2, -0x1($t1)
    ctx->r10 = MEM_B(ctx->r9, -0X1);
    // 0x80234E10: addi        $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x80234E14: addi        $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80234E18: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80234E1C: bne         $t3, $zero, L_80234E0C
    if (ctx->r11 != 0) {
        // 0x80234E20: sb          $t2, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r10;
            goto L_80234E0C;
    }
    // 0x80234E20: sb          $t2, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r10;
L_80234E24:
    // 0x80234E24: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80234E28: bne         $a1, $t8, L_80234DC0
    if (ctx->r5 != ctx->r24) {
        // 0x80234E2C: addi        $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80234DC0;
    }
    // 0x80234E2C: addi        $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80234E30: jr          $ra
    // 0x80234E34: nop

    return;
    // 0x80234E34: nop

;}
RECOMP_FUNC void D_802D2B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2C20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D2C24: jal         0x803030B4
    // 0x802D2C28: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    static_3_803030B4(rdram, ctx);
        goto after_0;
    // 0x802D2C28: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x802D2C2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802D2C30: bnel        $v0, $at, L_802D2C4C
    if (ctx->r2 != ctx->r1) {
        // 0x802D2C34: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802D2C4C;
    }
    goto skip_0;
    // 0x802D2C34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x802D2C38: jal         0x803031B0
    // 0x802D2C3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_803031B0(rdram, ctx);
        goto after_1;
    // 0x802D2C3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x802D2C40: b           L_802D2C50
    // 0x802D2C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D2C50;
    // 0x802D2C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2C48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D2C4C:
    // 0x802D2C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D2C50:
    // 0x802D2C50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2C54: jr          $ra
    // 0x802D2C58: nop

    return;
    // 0x802D2C58: nop

;}
RECOMP_FUNC void D_802DCF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DCFD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802DCFDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DCFE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802DCFE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802DCFE8: jal         0x80318C7C
    // 0x802DCFEC: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    static_3_80318C7C(rdram, ctx);
        goto after_0;
    // 0x802DCFEC: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    after_0:
    // 0x802DCFF0: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x802DCFF4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802DCFF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DCFFC: bne         $t6, $zero, L_802DD028
    if (ctx->r14 != 0) {
        // 0x802DD000: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802DD028;
    }
    // 0x802DD000: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802DD004: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x802DD008: jal         0x8021B240
    // 0x802DD00C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_1;
    // 0x802DD00C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x802DD010: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x802DD014: jal         0x8021BAE0
    // 0x802DD018: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_2;
    // 0x802DD018: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    after_2:
    // 0x802DD01C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x802DD020: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x802DD024: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
L_802DD028:
    // 0x802DD028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802DD02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802DD030: jr          $ra
    // 0x802DD034: nop

    return;
    // 0x802DD034: nop

;}
RECOMP_FUNC void D_802E7730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E77B0: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802E77B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E77B8: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802E77BC: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E77C0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E77C4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E77C8: bne         $v1, $zero, L_802E77F0
    if (ctx->r3 != 0) {
        // 0x802E77CC: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E77F0;
    }
    // 0x802E77CC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E77D0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E77D4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E77D8: jal         0x80231A24
    // 0x802E77DC: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E77DC: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E77E0: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802E77E4: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E77E8: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E77EC: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E77F0:
    // 0x802E77F0: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E77F4: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802E77F8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E77FC: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802E7800: jalr        $t9
    // 0x802E7804: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E7804: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E7808: jal         0x803183D0
    // 0x802E780C: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    static_3_803183D0(rdram, ctx);
        goto after_2;
    // 0x802E780C: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_2:
    // 0x802E7810: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E7814: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802E7818: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E781C: lh          $t8, 0x10($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X10);
    // 0x802E7820: jalr        $t9
    // 0x802E7824: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802E7824: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_3:
    // 0x802E7828: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802E782C: jal         0x802CF7E8
    // 0x802E7830: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_802CF7E8(rdram, ctx);
        goto after_4;
    // 0x802E7830: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x802E7834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7838: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802E783C: jr          $ra
    // 0x802E7840: nop

    return;
    // 0x802E7840: nop

;}
RECOMP_FUNC void D_802F001C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F009C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802F00A0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802F00A4: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x802F00A8: bne         $at, $zero, L_802F00D0
    if (ctx->r1 != 0) {
        // 0x802F00AC: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_802F00D0;
    }
    // 0x802F00AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802F00B0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802F00B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802F00B8: nop

    // 0x802F00BC: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
L_802F00C0:
    // 0x802F00C0: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x802F00C4: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x802F00C8: beql        $at, $zero, L_802F00C0
    if (ctx->r1 == 0) {
        // 0x802F00CC: addiu       $a1, $a1, -0xC
        ctx->r5 = ADD32(ctx->r5, -0XC);
            goto L_802F00C0;
    }
    goto skip_0;
    // 0x802F00CC: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    skip_0:
L_802F00D0:
    // 0x802F00D0: slti        $at, $a1, -0xB
    ctx->r1 = SIGNED(ctx->r5) < -0XB ? 1 : 0;
    // 0x802F00D4: beq         $at, $zero, L_802F00F8
    if (ctx->r1 == 0) {
        // 0x802F00D8: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_802F00F8;
    }
    // 0x802F00D8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802F00DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802F00E0: nop

    // 0x802F00E4: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
L_802F00E8:
    // 0x802F00E8: slti        $at, $a1, -0xB
    ctx->r1 = SIGNED(ctx->r5) < -0XB ? 1 : 0;
    // 0x802F00EC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x802F00F0: bnel        $at, $zero, L_802F00E8
    if (ctx->r1 != 0) {
        // 0x802F00F4: addiu       $a1, $a1, 0xC
        ctx->r5 = ADD32(ctx->r5, 0XC);
            goto L_802F00E8;
    }
    goto skip_1;
    // 0x802F00F4: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    skip_1:
L_802F00F8:
    // 0x802F00F8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x802F00FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0100: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802F0104: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F0108: mul.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802F010C: jr          $ra
    // 0x802F0110: nop

    return;
    // 0x802F0110: nop

;}
RECOMP_FUNC void D_8023EBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023EBA8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023EBAC: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x8023EBB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023EBB4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023EBB8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8023EBBC: sb          $zero, 0x7($sp)
    MEM_B(0X7, ctx->r29) = 0;
    // 0x8023EBC0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8023EBC4: blez        $t7, L_8023EC68
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8023EBC8: sw          $zero, 0x8($sp)
        MEM_W(0X8, ctx->r29) = 0;
            goto L_8023EC68;
    }
    // 0x8023EBC8: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_8023EBCC:
    // 0x8023EBCC: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x8023EBD0: addiu       $t8, $sp, 0xC
    ctx->r24 = ADD32(ctx->r29, 0XC);
    // 0x8023EBD4: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8023EBD8: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x8023EBDC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x8023EBE0: lwl         $t1, 0x4($t9)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r25, 0X4);
    // 0x8023EBE4: lwr         $t1, 0x7($t9)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r25, 0X7);
    // 0x8023EBE8: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x8023EBEC: lbu         $t2, 0xE($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XE);
    // 0x8023EBF0: andi        $t3, $t2, 0xC0
    ctx->r11 = ctx->r10 & 0XC0;
    // 0x8023EBF4: sra         $t4, $t3, 4
    ctx->r12 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8023EBF8: sb          $t4, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r12;
    // 0x8023EBFC: lbu         $t5, 0x3($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X3);
    // 0x8023EC00: bne         $t5, $zero, L_8023EC3C
    if (ctx->r13 != 0) {
        // 0x8023EC04: nop
    
            goto L_8023EC3C;
    }
    // 0x8023EC04: nop

    // 0x8023EC08: lbu         $t6, 0x11($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X11);
    // 0x8023EC0C: lbu         $t0, 0x10($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X10);
    // 0x8023EC10: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8023EC14: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8023EC18: or          $t8, $t7, $t0
    ctx->r24 = ctx->r15 | ctx->r8;
    // 0x8023EC1C: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x8023EC20: lbu         $t9, 0x12($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X12);
    // 0x8023EC24: sb          $t9, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r25;
    // 0x8023EC28: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8023EC2C: lbu         $t1, 0x7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X7);
    // 0x8023EC30: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x8023EC34: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x8023EC38: sb          $t5, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r13;
L_8023EC3C:
    // 0x8023EC3C: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8023EC40: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8023EC44: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x8023EC48: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8023EC4C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8023EC50: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023EC54: addiu       $t8, $t0, 0x8
    ctx->r24 = ADD32(ctx->r8, 0X8);
    // 0x8023EC58: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8023EC5C: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8023EC60: bne         $at, $zero, L_8023EBCC
    if (ctx->r1 != 0) {
        // 0x8023EC64: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8023EBCC;
    }
    // 0x8023EC64: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_8023EC68:
    // 0x8023EC68: lbu         $t3, 0x7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X7);
    // 0x8023EC6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023EC70: jr          $ra
    // 0x8023EC74: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
    return;
    // 0x8023EC74: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void D_8023FB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FB40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FB44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023FB48: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x8023FB4C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8023FB50: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8023FB54: beql        $a2, $zero, L_8023FBE4
    if (ctx->r6 == 0) {
        // 0x8023FB58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023FBE4;
    }
    goto skip_0;
    // 0x8023FB58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023FB5C: lw          $t6, 0xD8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XD8);
    // 0x8023FB60: beql        $t6, $zero, L_8023FBCC
    if (ctx->r14 == 0) {
        // 0x8023FB64: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_8023FBCC;
    }
    goto skip_1;
    // 0x8023FB64: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    skip_1:
    // 0x8023FB68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8023FB6C: jal         0x80237840
    // 0x8023FB70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80237840(rdram, ctx);
        goto after_0;
    // 0x8023FB70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8023FB74: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FB78: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8023FB7C: beq         $v0, $zero, L_8023FBE0
    if (ctx->r2 == 0) {
        // 0x8023FB80: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023FBE0;
    }
    // 0x8023FB80: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023FB84: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x8023FB88: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x8023FB8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023FB90: lw          $t9, 0xD8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XD8);
    // 0x8023FB94: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x8023FB98: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x8023FB9C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023FBA0: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x8023FBA4: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8023FBA8: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x8023FBAC: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8023FBB0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8023FBB4: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023FBB8: jalr        $t9
    // 0x8023FBBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023FBBC: nop

    after_1:
    // 0x8023FBC0: b           L_8023FBDC
    // 0x8023FBC4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
        goto L_8023FBDC;
    // 0x8023FBC4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FBC8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
L_8023FBCC:
    // 0x8023FBCC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8023FBD0: jal         0x80237790
    // 0x8023FBD4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    static_3_80237790(rdram, ctx);
        goto after_2;
    // 0x8023FBD4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x8023FBD8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_8023FBDC:
    // 0x8023FBDC: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
L_8023FBE0:
    // 0x8023FBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023FBE4:
    // 0x8023FBE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023FBE8: jr          $ra
    // 0x8023FBEC: nop

    return;
    // 0x8023FBEC: nop

;}
RECOMP_FUNC void D_80298CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80298D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298D54: jal         0x8028D750
    // 0x80298D58: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D750(rdram, ctx);
        goto after_0;
    // 0x80298D58: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x80298D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298D64: jr          $ra
    // 0x80298D68: nop

    return;
    // 0x80298D68: nop

;}
RECOMP_FUNC void D_802E8064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E80E4: jr          $ra
    // 0x802E80E8: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    return;
    // 0x802E80E8: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
;}
RECOMP_FUNC void D_802E9280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9300: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802E9304: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802E9308: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802E930C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802E9310: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802E9314: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802E9318: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E931C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802E9320: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802E9324: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802E9328: beq         $v0, $at, L_802E9338
    if (ctx->r2 == ctx->r1) {
        // 0x802E932C: addiu       $s4, $zero, 0x4
        ctx->r20 = ADD32(0, 0X4);
            goto L_802E9338;
    }
    // 0x802E932C: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x802E9330: bnel        $s4, $v0, L_802E9344
    if (ctx->r20 != ctx->r2) {
        // 0x802E9334: lbu         $t6, 0x19B($s3)
        ctx->r14 = MEM_BU(ctx->r19, 0X19B);
            goto L_802E9344;
    }
    goto skip_0;
    // 0x802E9334: lbu         $t6, 0x19B($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X19B);
    skip_0:
L_802E9338:
    // 0x802E9338: b           L_802E93F8
    // 0x802E933C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802E93F8;
    // 0x802E933C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802E9340: lbu         $t6, 0x19B($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X19B);
L_802E9344:
    // 0x802E9344: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802E9348: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802E934C: beql        $t6, $zero, L_802E9360
    if (ctx->r14 == 0) {
        // 0x802E9350: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_802E9360;
    }
    goto skip_1;
    // 0x802E9350: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x802E9354: b           L_802E93F8
    // 0x802E9358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802E93F8;
    // 0x802E9358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802E935C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_802E9360:
    // 0x802E9360: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802E9364: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802E9368: lbu         $t7, 0x6EFC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6EFC);
    // 0x802E936C: blez        $t7, L_802E93F4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802E9370: addu        $t8, $v0, $s0
        ctx->r24 = ADD32(ctx->r2, ctx->r16);
            goto L_802E93F4;
    }
    // 0x802E9370: addu        $t8, $v0, $s0
    ctx->r24 = ADD32(ctx->r2, ctx->r16);
L_802E9374:
    // 0x802E9374: lw          $a0, 0x6EEC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X6EEC);
    // 0x802E9378: beql        $a0, $zero, L_802E93DC
    if (ctx->r4 == 0) {
        // 0x802E937C: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_802E93DC;
    }
    goto skip_2;
    // 0x802E937C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x802E9380: jal         0x80317E10
    // 0x802E9384: nop

    static_3_80317E10(rdram, ctx);
        goto after_0;
    // 0x802E9384: nop

    after_0:
    // 0x802E9388: beql        $v0, $zero, L_802E93DC
    if (ctx->r2 == 0) {
        // 0x802E938C: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_802E93DC;
    }
    goto skip_3;
    // 0x802E938C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_3:
    // 0x802E9390: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x802E9394: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x802E9398: jal         0x802E45C4
    // 0x802E939C: lw          $a0, 0x6EEC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6EEC);
    static_3_802E45C4(rdram, ctx);
        goto after_1;
    // 0x802E939C: lw          $a0, 0x6EEC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6EEC);
    after_1:
    // 0x802E93A0: beql        $v0, $zero, L_802E93DC
    if (ctx->r2 == 0) {
        // 0x802E93A4: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_802E93DC;
    }
    goto skip_4;
    // 0x802E93A4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_4:
    // 0x802E93A8: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x802E93AC: lw          $a0, 0xD8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XD8);
    // 0x802E93B0: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x802E93B4: lw          $v0, 0x6EEC($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X6EEC);
    // 0x802E93B8: bnel        $v0, $a0, L_802E93DC
    if (ctx->r2 != ctx->r4) {
        // 0x802E93BC: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_802E93DC;
    }
    goto skip_5;
    // 0x802E93BC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_5:
    // 0x802E93C0: jal         0x80318804
    // 0x802E93C4: nop

    static_3_80318804(rdram, ctx);
        goto after_2;
    // 0x802E93C4: nop

    after_2:
    // 0x802E93C8: bnel        $v0, $s4, L_802E93DC
    if (ctx->r2 != ctx->r20) {
        // 0x802E93CC: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_802E93DC;
    }
    goto skip_6;
    // 0x802E93CC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_6:
    // 0x802E93D0: b           L_802E93F8
    // 0x802E93D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802E93F8;
    // 0x802E93D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802E93D8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_802E93DC:
    // 0x802E93DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802E93E0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E93E4: lbu         $t3, 0x6EFC($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X6EFC);
    // 0x802E93E8: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802E93EC: bnel        $at, $zero, L_802E9374
    if (ctx->r1 != 0) {
        // 0x802E93F0: addu        $t8, $v0, $s0
        ctx->r24 = ADD32(ctx->r2, ctx->r16);
            goto L_802E9374;
    }
    goto skip_7;
    // 0x802E93F0: addu        $t8, $v0, $s0
    ctx->r24 = ADD32(ctx->r2, ctx->r16);
    skip_7:
L_802E93F4:
    // 0x802E93F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802E93F8:
    // 0x802E93F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802E93FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E9400: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802E9404: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802E9408: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802E940C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802E9410: jr          $ra
    // 0x802E9414: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802E9414: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_80282974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802829F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802829F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802829FC: jal         0x8028D994
    // 0x80282A00: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D994(rdram, ctx);
        goto after_0;
    // 0x80282A00: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x80282A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282A0C: jr          $ra
    // 0x80282A10: nop

    return;
    // 0x80282A10: nop

;}
RECOMP_FUNC void D_80282AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282B24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282B28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80282B2C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80282B30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282B34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80282B38: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80282B3C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x80282B40: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x80282B44: jal         0x80302DC8
    // 0x80282B48: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x80282B48: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x80282B4C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80282B50: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282B54: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    // 0x80282B58: jal         0x80302DC8
    // 0x80282B5C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x80282B5C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x80282B60: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80282B64: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282B68: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x80282B6C: jal         0x80302DC8
    // 0x80282B70: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_2;
    // 0x80282B70: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x80282B74: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80282B78: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80282B7C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282B80: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80282B84: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80282B88: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80282B8C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x80282B90: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80282B94: jal         0x80290474
    // 0x80282B98: nop

    static_3_80290474(rdram, ctx);
        goto after_3;
    // 0x80282B98: nop

    after_3:
    // 0x80282B9C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282BA0: jal         0x80302980
    // 0x80282BA4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_4;
    // 0x80282BA4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x80282BA8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282BAC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80282BB0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80282BB4: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x80282BB8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80282BBC: jal         0x80302988
    // 0x80282BC0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x80282BC0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x80282BC4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282BC8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80282BCC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80282BD0: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    // 0x80282BD4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80282BD8: jal         0x80302988
    // 0x80282BDC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_6;
    // 0x80282BDC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x80282BE0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282BE4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x80282BE8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80282BEC: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x80282BF0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80282BF4: jal         0x80302988
    // 0x80282BF8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_7;
    // 0x80282BF8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x80282BFC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80282C00: jal         0x80302A7C
    // 0x80282C04: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_8;
    // 0x80282C04: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x80282C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282C0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80282C10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282C14: jr          $ra
    // 0x80282C18: nop

    return;
    // 0x80282C18: nop

;}
RECOMP_FUNC void D_802B7758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B77D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B77DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B77E0: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B77E4: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B77E8: beq         $t6, $zero, L_802B77FC
    if (ctx->r14 == 0) {
        // 0x802B77EC: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B77FC;
    }
    // 0x802B77EC: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B77F0: jal         0x80303578
    // 0x802B77F4: addiu       $a0, $a0, 0xA54
    ctx->r4 = ADD32(ctx->r4, 0XA54);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B77F4: addiu       $a0, $a0, 0xA54
    ctx->r4 = ADD32(ctx->r4, 0XA54);
    after_0:
    // 0x802B77F8: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B77FC:
    // 0x802B77FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B7804: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B7808: jr          $ra
    // 0x802B780C: nop

    return;
    // 0x802B780C: nop

;}
RECOMP_FUNC void D_802425A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802425A0: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x802425A4: addiu       $t9, $zero, 0x4000
    ctx->r25 = ADD32(0, 0X4000);
    // 0x802425A8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802425AC: sll         $t6, $v0, 14
    ctx->r14 = S32(ctx->r2 << 14);
    // 0x802425B0: sra         $v1, $t6, 15
    ctx->r3 = S32(SIGNED(ctx->r14) >> 15);
    // 0x802425B4: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x802425B8: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802425BC: subu        $t0, $t9, $v1
    ctx->r8 = SUB32(ctx->r25, ctx->r3);
    // 0x802425C0: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
    // 0x802425C4: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x802425C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802425CC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_802425D0:
    // 0x802425D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802425D4: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x802425D8: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x802425DC: bne         $at, $zero, L_802425D0
    if (ctx->r1 != 0) {
        // 0x802425E0: sh          $zero, 0x6($a2)
        MEM_H(0X6, ctx->r6) = 0;
            goto L_802425D0;
    }
    // 0x802425E0: sh          $zero, 0x6($a2)
    MEM_H(0X6, ctx->r6) = 0;
    // 0x802425E4: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x802425E8: lui         $at, 0x40D0
    ctx->r1 = S32(0X40D0 << 16);
    // 0x802425EC: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x802425F0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802425F4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802425F8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802425FC: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80242600: sh          $v1, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r3;
    // 0x80242604: div.d       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f12.d);
    // 0x80242608: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8024260C: beq         $at, $zero, L_80242638
    if (ctx->r1 == 0) {
        // 0x80242610: mov.d       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
            goto L_80242638;
    }
    // 0x80242610: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
L_80242614:
    // 0x80242614: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x80242618: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8024261C: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80242620: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80242624: mul.d       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x80242628: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x8024262C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80242630: bne         $at, $zero, L_80242614
    if (ctx->r1 != 0) {
        // 0x80242634: sh          $t3, 0x6($a2)
        MEM_H(0X6, ctx->r6) = ctx->r11;
            goto L_80242614;
    }
    // 0x80242634: sh          $t3, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r11;
L_80242638:
    // 0x80242638: jr          $ra
    // 0x8024263C: nop

    return;
    // 0x8024263C: nop

;}
RECOMP_FUNC void D_802D3290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3310: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802D3314: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D3318: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D331C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802D3320: lh          $v0, 0x140C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X140C);
    // 0x802D3324: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802D3328: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D332C: bnel        $v0, $at, L_802D33C4
    if (ctx->r2 != ctx->r1) {
        // 0x802D3330: lwc1        $f18, 0x1408($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X1408);
            goto L_802D33C4;
    }
    goto skip_0;
    // 0x802D3330: lwc1        $f18, 0x1408($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1408);
    skip_0:
    // 0x802D3334: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802D3338: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802D333C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D3340: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802D3344: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x802D3348: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802D334C: jal         0x802B0078
    // 0x802D3350: nop

    static_3_802B0078(rdram, ctx);
        goto after_0;
    // 0x802D3350: nop

    after_0:
    // 0x802D3354: lw          $v0, 0x210($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X210);
    // 0x802D3358: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x802D335C: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x802D3360: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D3364: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x802D3368: jalr        $t9
    // 0x802D336C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802D336C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_1:
    // 0x802D3370: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D3374: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D3378: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802D337C: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x802D3380: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D3384: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802D3388: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802D338C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802D3390: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D3394: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802D3398: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802D339C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802D33A0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D33A4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802D33A8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802D33AC: addiu       $a1, $s0, 0x70
    ctx->r5 = ADD32(ctx->r16, 0X70);
    // 0x802D33B0: jal         0x802AFF70
    // 0x802D33B4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_2;
    // 0x802D33B4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x802D33B8: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x802D33BC: sh          $t7, 0x140C($s0)
    MEM_H(0X140C, ctx->r16) = ctx->r15;
    // 0x802D33C0: lwc1        $f18, 0x1408($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1408);
L_802D33C4:
    // 0x802D33C4: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802D33C8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802D33CC: swc1        $f6, 0x1408($s0)
    MEM_W(0X1408, ctx->r16) = ctx->f6.u32l;
    // 0x802D33D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802D33D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D33D8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802D33DC: jr          $ra
    // 0x802D33E0: nop

    return;
    // 0x802D33E0: nop

;}
RECOMP_FUNC void D_8022B410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B410: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022B414: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B418: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B41C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B420: sll         $t6, $a1, 0
    ctx->r14 = S32(ctx->r5 << 0);
    // 0x8022B424: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8022B428: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022B42C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8022B430: bgez        $t6, L_8022B46C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8022B434: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_8022B46C;
    }
    // 0x8022B434: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8022B438: beq         $a2, $zero, L_8022B578
    if (ctx->r6 == 0) {
        // 0x8022B43C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8022B578;
    }
    // 0x8022B43C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B440: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8022B444: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8022B448:
    // 0x8022B448: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x8022B44C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B450: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8022B454: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B458: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022B45C: bne         $at, $zero, L_8022B448
    if (ctx->r1 != 0) {
        // 0x8022B460: sb          $t7, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r15;
            goto L_8022B448;
    }
    // 0x8022B460: sb          $t7, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r15;
    // 0x8022B464: b           L_8022B57C
    // 0x8022B468: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8022B57C;
    // 0x8022B468: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8022B46C:
    // 0x8022B46C: sltiu       $at, $s0, 0x1001
    ctx->r1 = ctx->r16 < 0X1001 ? 1 : 0;
    // 0x8022B470: bne         $at, $zero, L_8022B498
    if (ctx->r1 != 0) {
        // 0x8022B474: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8022B498;
    }
L_8022B474:
    // 0x8022B474: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022B478: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022B47C: jal         0x8022B460
    // 0x8022B480: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    func_8022B460(rdram, ctx);
        goto after_0;
    // 0x8022B480: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    after_0:
    // 0x8022B484: addiu       $s0, $s0, -0x1000
    ctx->r16 = ADD32(ctx->r16, -0X1000);
    // 0x8022B488: sltiu       $at, $s0, 0x1001
    ctx->r1 = ctx->r16 < 0X1001 ? 1 : 0;
    // 0x8022B48C: addiu       $s2, $s2, 0x1000
    ctx->r18 = ADD32(ctx->r18, 0X1000);
    // 0x8022B490: beq         $at, $zero, L_8022B474
    if (ctx->r1 == 0) {
        // 0x8022B494: addiu       $s1, $s1, 0x1000
        ctx->r17 = ADD32(ctx->r17, 0X1000);
            goto L_8022B474;
    }
    // 0x8022B494: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
L_8022B498:
    // 0x8022B498: beq         $s0, $zero, L_8022B578
    if (ctx->r16 == 0) {
        // 0x8022B49C: or          $t8, $s1, $s2
        ctx->r24 = ctx->r17 | ctx->r18;
            goto L_8022B578;
    }
    // 0x8022B49C: or          $t8, $s1, $s2
    ctx->r24 = ctx->r17 | ctx->r18;
    // 0x8022B4A0: or          $t9, $t8, $s0
    ctx->r25 = ctx->r24 | ctx->r16;
    // 0x8022B4A4: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8022B4A8: beq         $t0, $zero, L_8022B4CC
    if (ctx->r8 == 0) {
        // 0x8022B4AC: andi        $t1, $s2, 0x7
        ctx->r9 = ctx->r18 & 0X7;
            goto L_8022B4CC;
    }
    // 0x8022B4AC: andi        $t1, $s2, 0x7
    ctx->r9 = ctx->r18 & 0X7;
    // 0x8022B4B0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022B4B4: jal         0x80231A24
    // 0x8022B4B8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022B4B8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x8022B4BC: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x8022B4C0: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x8022B4C4: b           L_8022B578
    // 0x8022B4C8: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_8022B578;
    // 0x8022B4C8: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_8022B4CC:
    // 0x8022B4CC: beq         $t1, $zero, L_8022B56C
    if (ctx->r9 == 0) {
        // 0x8022B4D0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8022B56C;
    }
    // 0x8022B4D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022B4D4: addiu       $a0, $s2, 0x7
    ctx->r4 = ADD32(ctx->r18, 0X7);
    // 0x8022B4D8: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8022B4DC: and         $t2, $a0, $at
    ctx->r10 = ctx->r4 & ctx->r1;
    // 0x8022B4E0: subu        $a3, $t2, $s2
    ctx->r7 = SUB32(ctx->r10, ctx->r18);
    // 0x8022B4E4: beq         $s0, $a3, L_8022B500
    if (ctx->r16 == ctx->r7) {
        // 0x8022B4E8: or          $a0, $t2, $zero
        ctx->r4 = ctx->r10 | 0;
            goto L_8022B500;
    }
    // 0x8022B4E8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8022B4EC: addu        $a1, $s1, $a3
    ctx->r5 = ADD32(ctx->r17, ctx->r7);
    // 0x8022B4F0: subu        $a2, $s0, $a3
    ctx->r6 = SUB32(ctx->r16, ctx->r7);
    // 0x8022B4F4: jal         0x80231A40
    // 0x8022B4F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    static_3_80231A40(rdram, ctx);
        goto after_2;
    // 0x8022B4F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_2:
    // 0x8022B4FC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_8022B500:
    // 0x8022B500: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8022B504: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8022B508: jal         0x8023D380
    // 0x8022B50C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    static_3_8023D380(rdram, ctx);
        goto after_3;
    // 0x8022B50C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_3:
    // 0x8022B510: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    // 0x8022B514: jal         0x8023D380
    // 0x8022B518: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    static_3_8023D380(rdram, ctx);
        goto after_4;
    // 0x8022B518: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x8022B51C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B520: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B524: blezl       $a3, L_8022B57C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8022B528: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8022B57C;
    }
    goto skip_0;
    // 0x8022B528: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8022B52C: beq         $s0, $zero, L_8022B578
    if (ctx->r16 == 0) {
        // 0x8022B530: addu        $v1, $s2, $zero
        ctx->r3 = ADD32(ctx->r18, 0);
            goto L_8022B578;
    }
    // 0x8022B530: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x8022B534: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x8022B538: addu        $a0, $zero, $t4
    ctx->r4 = ADD32(0, ctx->r12);
    // 0x8022B53C: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
L_8022B540:
    // 0x8022B540: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B544: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8022B548: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B54C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022B550: beq         $at, $zero, L_8022B578
    if (ctx->r1 == 0) {
        // 0x8022B554: sb          $t5, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r13;
            goto L_8022B578;
    }
    // 0x8022B554: sb          $t5, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r13;
    // 0x8022B558: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8022B55C: bnel        $at, $zero, L_8022B540
    if (ctx->r1 != 0) {
        // 0x8022B560: lbu         $t5, 0x0($a0)
        ctx->r13 = MEM_BU(ctx->r4, 0X0);
            goto L_8022B540;
    }
    goto skip_1;
    // 0x8022B560: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    skip_1:
    // 0x8022B564: b           L_8022B57C
    // 0x8022B568: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8022B57C;
    // 0x8022B568: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8022B56C:
    // 0x8022B56C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8022B570: jal         0x80231A40
    // 0x8022B574: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_80231A40(rdram, ctx);
        goto after_5;
    // 0x8022B574: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
L_8022B578:
    // 0x8022B578: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8022B57C:
    // 0x8022B57C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B580: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B584: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B588: jr          $ra
    // 0x8022B58C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8022B58C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_80234BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234BE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234BE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80234BEC: jal         0x80234BE4
    // 0x80234BF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    static_3_80234BE4(rdram, ctx);
        goto after_0;
    // 0x80234BF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80234BF4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80234BF8: jal         0x80234B80
    // 0x80234BFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_80234B80(rdram, ctx);
        goto after_1;
    // 0x80234BFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80234C00: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80234C04: jal         0x80234B80
    // 0x80234C08: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_80234B80(rdram, ctx);
        goto after_2;
    // 0x80234C08: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80234C0C: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80234C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234C14: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80234C18: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80234C1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80234C20: jr          $ra
    // 0x80234C24: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    return;
    // 0x80234C24: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
;}
RECOMP_FUNC void D_802D123C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D12BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D12C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D12C4: jal         0x8028D688
    // 0x802D12C8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D688(rdram, ctx);
        goto after_0;
    // 0x802D12C8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802D12CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D12D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D12D4: jr          $ra
    // 0x802D12D8: nop

    return;
    // 0x802D12D8: nop

;}
RECOMP_FUNC void D_802CBB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CBC04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802CBC08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802CBC0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CBC10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CBC14: jal         0x80233D58
    // 0x802CBC18: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    static_3_80233D58(rdram, ctx);
        goto after_0;
    // 0x802CBC18: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    after_0:
    // 0x802CBC1C: jal         0x80233D58
    // 0x802CBC20: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_80233D58(rdram, ctx);
        goto after_1;
    // 0x802CBC20: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_1:
    // 0x802CBC24: jal         0x80233D58
    // 0x802CBC28: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_80233D58(rdram, ctx);
        goto after_2;
    // 0x802CBC28: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_2:
    // 0x802CBC2C: jal         0x80233D58
    // 0x802CBC30: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    static_3_80233D58(rdram, ctx);
        goto after_3;
    // 0x802CBC30: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_3:
    // 0x802CBC34: jal         0x8021BAE0
    // 0x802CBC38: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    static_3_8021BAE0(rdram, ctx);
        goto after_4;
    // 0x802CBC38: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_4:
    // 0x802CBC3C: jal         0x8021BAE0
    // 0x802CBC40: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    static_3_8021BAE0(rdram, ctx);
        goto after_5;
    // 0x802CBC40: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_5:
    // 0x802CBC44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802CBC48: jal         0x802FA254
    // 0x802CBC4C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA254(rdram, ctx);
        goto after_6;
    // 0x802CBC4C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_6:
    // 0x802CBC50: jal         0x802CFF40
    // 0x802CBC54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802CFF40(rdram, ctx);
        goto after_7;
    // 0x802CBC54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x802CBC58: jal         0x802CFF40
    // 0x802CBC5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802CFF40(rdram, ctx);
        goto after_8;
    // 0x802CBC5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x802CBC60: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CBC64: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802CBC68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CBC6C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802CBC70: lbu         $t7, 0x8F0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8F0);
    // 0x802CBC74: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802CBC78: beq         $t7, $zero, L_802CBC88
    if (ctx->r15 == 0) {
        // 0x802CBC7C: nop
    
            goto L_802CBC88;
    }
    // 0x802CBC7C: nop

    // 0x802CBC80: jal         0x80231A24
    // 0x802CBC84: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_9;
    // 0x802CBC84: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_9:
L_802CBC88:
    // 0x802CBC88: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CBC8C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802CBC90: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802CBC94: jal         0x80231A24
    // 0x802CBC98: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_10;
    // 0x802CBC98: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_10:
    // 0x802CBC9C: jal         0x8022BD80
    // 0x802CBCA0: nop

    static_3_8022BD80(rdram, ctx);
        goto after_11;
    // 0x802CBCA0: nop

    after_11:
    // 0x802CBCA4: jal         0x80224CA8
    // 0x802CBCA8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    static_3_80224CA8(rdram, ctx);
        goto after_12;
    // 0x802CBCA8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_12:
    // 0x802CBCAC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802CBCB0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802CBCB4: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    // 0x802CBCB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802CBCBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802CBCC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802CBCC4: jr          $ra
    // 0x802CBCC8: nop

    return;
    // 0x802CBCC8: nop

;}
RECOMP_FUNC void D_802D8940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D89C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D89C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D89C8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D89CC: lw          $a0, 0x64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X64);
    // 0x802D89D0: jal         0x8021BAE0
    // 0x802D89D4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802D89D4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x802D89D8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802D89DC: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x802D89E0: sw          $t6, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->r14;
    // 0x802D89E4: sb          $zero, 0x60($a1)
    MEM_B(0X60, ctx->r5) = 0;
    // 0x802D89E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D89EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D89F0: jr          $ra
    // 0x802D89F4: nop

    return;
    // 0x802D89F4: nop

;}
RECOMP_FUNC void D_802E77C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7844: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802E7848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E784C: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x802E7850: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802E7854: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x802E7858: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x802E785C: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E7860: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E7864: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7868: bne         $v1, $zero, L_802E7890
    if (ctx->r3 != 0) {
        // 0x802E786C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E7890;
    }
    // 0x802E786C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7870: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7874: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E7878: jal         0x80231A24
    // 0x802E787C: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E787C: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E7880: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802E7884: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E7888: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E788C: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E7890:
    // 0x802E7890: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E7894: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802E7898: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E789C: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802E78A0: jalr        $t9
    // 0x802E78A4: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E78A4: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E78A8: jal         0x8022970C
    // 0x802E78AC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802E78AC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x802E78B0: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802E78B4: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802E78B8: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802E78BC: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802E78C0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802E78C4: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x802E78C8: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x802E78CC: jal         0x802CF7E8
    // 0x802E78D0: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    static_3_802CF7E8(rdram, ctx);
        goto after_3;
    // 0x802E78D0: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x802E78D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E78D8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802E78DC: jr          $ra
    // 0x802E78E0: nop

    return;
    // 0x802E78E0: nop

;}
RECOMP_FUNC void D_802D1118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1198: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D119C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D11A0: jr          $ra
    // 0x802D11A4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D11A4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802D9388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9408: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D940C: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802D9410: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802D9414: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D9418: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802D941C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802D9420: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802D9424: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D9428: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802D942C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D9430: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D9434: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802D9438: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D943C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802D9440: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802D9444: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D9448: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802D944C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x802D9450: nop

    // 0x802D9454: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802D9458: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802D945C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9460: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802D9464: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x802D9468: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x802D946C: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802D9470: jr          $ra
    // 0x802D9474: swc1        $f4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f4.u32l;
    return;
    // 0x802D9474: swc1        $f4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802B7CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7D5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B7D60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B7D64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B7D68: lbu         $t6, 0x968($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7D6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B7D70: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802B7D74: beq         $t6, $zero, L_802B7DFC
    if (ctx->r14 == 0) {
        // 0x802B7D78: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802B7DFC;
    }
    // 0x802B7D78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802B7D7C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802B7D80: jal         0x802E838C
    // 0x802B7D84: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    static_3_802E838C(rdram, ctx);
        goto after_0;
    // 0x802B7D84: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_0:
    // 0x802B7D88: lw          $a1, 0x944($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X944);
    // 0x802B7D8C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802B7D90: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802B7D94: beq         $a1, $at, L_802B7DAC
    if (ctx->r5 == ctx->r1) {
        // 0x802B7D98: addiu       $a0, $a0, 0x8F4
        ctx->r4 = ADD32(ctx->r4, 0X8F4);
            goto L_802B7DAC;
    }
    // 0x802B7D98: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802B7D9C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7DA0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7DA4: jal         0x80302988
    // 0x802B7DA8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x802B7DA8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
L_802B7DAC:
    // 0x802B7DAC: lw          $a1, 0x948($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X948);
    // 0x802B7DB0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802B7DB4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802B7DB8: beq         $a1, $at, L_802B7DD0
    if (ctx->r5 == ctx->r1) {
        // 0x802B7DBC: addiu       $a0, $a0, 0x8F4
        ctx->r4 = ADD32(ctx->r4, 0X8F4);
            goto L_802B7DD0;
    }
    // 0x802B7DBC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802B7DC0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7DC4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7DC8: jal         0x80302988
    // 0x802B7DCC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_2;
    // 0x802B7DCC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
L_802B7DD0:
    // 0x802B7DD0: lw          $a1, 0x94C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X94C);
    // 0x802B7DD4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802B7DD8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802B7DDC: beq         $a1, $at, L_802B7DF4
    if (ctx->r5 == ctx->r1) {
        // 0x802B7DE0: addiu       $a0, $a0, 0x8F4
        ctx->r4 = ADD32(ctx->r4, 0X8F4);
            goto L_802B7DF4;
    }
    // 0x802B7DE0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802B7DE4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7DE8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7DEC: jal         0x80302988
    // 0x802B7DF0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_3;
    // 0x802B7DF0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_3:
L_802B7DF4:
    // 0x802B7DF4: b           L_802B7DFC
    // 0x802B7DF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802B7DFC;
    // 0x802B7DF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802B7DFC:
    // 0x802B7DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B7E00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B7E04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B7E08: jr          $ra
    // 0x802B7E0C: nop

    return;
    // 0x802B7E0C: nop

;}
RECOMP_FUNC void D_802EFF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFFE0: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x802EFFE4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802EFFE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802EFFEC: beq         $v0, $at, L_802F0010
    if (ctx->r2 == ctx->r1) {
        // 0x802EFFF0: sll         $t6, $v0, 3
        ctx->r14 = S32(ctx->r2 << 3);
            goto L_802F0010;
    }
    // 0x802EFFF0: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x802EFFF4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x802EFFF8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802EFFFC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802F0000: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802F0004: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0008: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802F000C: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
L_802F0010:
    // 0x802F0010: jr          $ra
    // 0x802F0014: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x802F0014: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void D_8022144C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022144C: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x80221450: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80221454: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80221458: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022145C: jal         0x80228DE0
    // 0x80221460: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80221460: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80221464: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80221468: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8022146C: jal         0x80228DE0
    // 0x80221470: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80221470: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x80221474: jal         0x8022970C
    // 0x80221478: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x80221478: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    after_2:
    // 0x8022147C: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x80221480: ori         $a1, $a1, 0xFDA
    ctx->r5 = ctx->r5 | 0XFDA;
    // 0x80221484: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80221488: jal         0x80229CD4
    // 0x8022148C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_80229CD4(rdram, ctx);
        goto after_3;
    // 0x8022148C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_3:
    // 0x80221490: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80221494: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80221498: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x8022149C: jal         0x802297A8
    // 0x802214A0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    static_3_802297A8(rdram, ctx);
        goto after_4;
    // 0x802214A0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_4:
    // 0x802214A4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802214A8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802214AC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802214B0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802214B4: jal         0x802297A8
    // 0x802214B8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    static_3_802297A8(rdram, ctx);
        goto after_5;
    // 0x802214B8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x802214BC: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x802214C0: jal         0x802291F8
    // 0x802214C4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    static_3_802291F8(rdram, ctx);
        goto after_6;
    // 0x802214C4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x802214C8: addiu       $t6, $sp, 0xC8
    ctx->r14 = ADD32(ctx->r29, 0XC8);
    // 0x802214CC: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x802214D0: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_802214D4:
    // 0x802214D4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802214D8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802214DC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x802214E0: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x802214E4: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x802214E8: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x802214EC: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x802214F0: bne         $t6, $t8, L_802214D4
    if (ctx->r14 != ctx->r24) {
        // 0x802214F4: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_802214D4;
    }
    // 0x802214F4: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x802214F8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802214FC: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80221500: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80221504: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80221508: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8022150C: jal         0x802208B4
    // 0x80221510: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    static_3_802208B4(rdram, ctx);
        goto after_7;
    // 0x80221510: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_7:
    // 0x80221514: jal         0x8022975C
    // 0x80221518: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    static_3_8022975C(rdram, ctx);
        goto after_8;
    // 0x80221518: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    after_8:
    // 0x8022151C: addiu       $t0, $sp, 0xC8
    ctx->r8 = ADD32(ctx->r29, 0XC8);
    // 0x80221520: addiu       $t2, $t0, 0x3C
    ctx->r10 = ADD32(ctx->r8, 0X3C);
    // 0x80221524: or          $t3, $sp, $zero
    ctx->r11 = ctx->r29 | 0;
L_80221528:
    // 0x80221528: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8022152C: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80221530: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x80221534: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x80221538: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x8022153C: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x80221540: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80221544: bne         $t0, $t2, L_80221528
    if (ctx->r8 != ctx->r10) {
        // 0x80221548: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_80221528;
    }
    // 0x80221548: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x8022154C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80221550: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x80221554: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80221558: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8022155C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80221560: jal         0x802207E8
    // 0x80221564: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    static_3_802207E8(rdram, ctx);
        goto after_9;
    // 0x80221564: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_9:
    // 0x80221568: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022156C: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    // 0x80221570: jr          $ra
    // 0x80221574: nop

    return;
    // 0x80221574: nop

;}
RECOMP_FUNC void D_8022ADCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022ADCC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8022ADD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ADD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022ADD8: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x8022ADDC: nop

    // 0x8022ADE0: bc1fl       L_8022AE04
    if (!c1cs) {
        // 0x8022ADE4: c.lt.s      $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
            goto L_8022AE04;
    }
    goto skip_0;
    // 0x8022ADE4: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    skip_0:
    // 0x8022ADE8: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8022ADEC: nop

    // 0x8022ADF0: bc1fl       L_8022AE04
    if (!c1cs) {
        // 0x8022ADF4: c.lt.s      $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
            goto L_8022AE04;
    }
    goto skip_1;
    // 0x8022ADF4: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    skip_1:
    // 0x8022ADF8: b           L_8022AF04
    // 0x8022ADFC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_8022AF04;
    // 0x8022ADFC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8022AE00: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
L_8022AE04:
    // 0x8022AE04: nop

    // 0x8022AE08: bc1fl       L_8022AE1C
    if (!c1cs) {
        // 0x8022AE0C: neg.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
            goto L_8022AE1C;
    }
    goto skip_2;
    // 0x8022AE0C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    skip_2:
    // 0x8022AE10: b           L_8022AE1C
    // 0x8022AE14: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_8022AE1C;
    // 0x8022AE14: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x8022AE18: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_8022AE1C:
    // 0x8022AE1C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8022AE20: nop

    // 0x8022AE24: bc1fl       L_8022AE38
    if (!c1cs) {
        // 0x8022AE28: neg.s       $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
            goto L_8022AE38;
    }
    goto skip_3;
    // 0x8022AE28: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
    skip_3:
    // 0x8022AE2C: b           L_8022AE38
    // 0x8022AE30: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
        goto L_8022AE38;
    // 0x8022AE30: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
    // 0x8022AE34: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
L_8022AE38:
    // 0x8022AE38: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8022AE3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022AE40: bc1fl       L_8022AE5C
    if (!c1cs) {
        // 0x8022AE44: div.s       $f4, $f16, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
            goto L_8022AE5C;
    }
    goto skip_4;
    // 0x8022AE44: div.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    skip_4:
    // 0x8022AE48: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x8022AE4C: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x8022AE50: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
    // 0x8022AE54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE58: div.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
L_8022AE5C:
    // 0x8022AE5C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8022AE60: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x8022AE64: bc1f        L_8022AE78
    if (!c1cs) {
        // 0x8022AE68: lwc1        $f18, 0x4($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
            goto L_8022AE78;
    }
    // 0x8022AE68: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8022AE6C: sub.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x8022AE70: b           L_8022AE84
    // 0x8022AE74: swc1        $f6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f6.u32l;
        goto L_8022AE84;
    // 0x8022AE74: swc1        $f6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f6.u32l;
L_8022AE78:
    // 0x8022AE78: sub.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x8022AE7C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8022AE80: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
L_8022AE84:
    // 0x8022AE84: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8022AE88: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8022AE8C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AE90: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8022AE94: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8022AE98: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8022AE9C: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x8022AEA0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8022AEA4: nop

    // 0x8022AEA8: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8022AEAC: bc1f        L_8022AEC8
    if (!c1cs) {
        // 0x8022AEB0: add.s       $f16, $f8, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
            goto L_8022AEC8;
    }
    // 0x8022AEB0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022AEB4: beq         $v0, $zero, L_8022AEE8
    if (ctx->r2 == 0) {
        // 0x8022AEB8: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_8022AEE8;
    }
    // 0x8022AEB8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AEBC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8022AEC0: b           L_8022AEE8
    // 0x8022AEC4: sub.s       $f16, $f4, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f16.fl;
        goto L_8022AEE8;
    // 0x8022AEC4: sub.s       $f16, $f4, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f16.fl;
L_8022AEC8:
    // 0x8022AEC8: beq         $v0, $zero, L_8022AEE0
    if (ctx->r2 == 0) {
        // 0x8022AECC: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_8022AEE0;
    }
    // 0x8022AECC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AED0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AED4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8022AED8: b           L_8022AEE8
    // 0x8022AEDC: add.s       $f16, $f6, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f16.fl;
        goto L_8022AEE8;
    // 0x8022AEDC: add.s       $f16, $f6, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f16.fl;
L_8022AEE0:
    // 0x8022AEE0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8022AEE4: sub.s       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f16.fl;
L_8022AEE8:
    // 0x8022AEE8: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8022AEEC: nop

    // 0x8022AEF0: bc1fl       L_8022AF04
    if (!c1cs) {
        // 0x8022AEF4: neg.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
            goto L_8022AF04;
    }
    goto skip_5;
    // 0x8022AEF4: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    skip_5:
    // 0x8022AEF8: b           L_8022AF04
    // 0x8022AEFC: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
        goto L_8022AF04;
    // 0x8022AEFC: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x8022AF00: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
L_8022AF04:
    // 0x8022AF04: jr          $ra
    // 0x8022AF08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8022AF08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8027A730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A7A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8027A7AC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A7B0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A7B4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8027A7B8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8027A7BC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8027A7C0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8027A7C4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8027A7C8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A7CC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8027A7D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A7D4: addiu       $a3, $t6, 0x6D45
    ctx->r7 = ADD32(ctx->r14, 0X6D45);
    // 0x8027A7D8: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x8027A7DC: addiu       $a1, $t6, 0x6D44
    ctx->r5 = ADD32(ctx->r14, 0X6D44);
    // 0x8027A7E0: jal         0x802A31A0
    // 0x8027A7E4: addiu       $a0, $a0, 0x6CE0
    ctx->r4 = ADD32(ctx->r4, 0X6CE0);
    static_3_802A31A0(rdram, ctx);
        goto after_0;
    // 0x8027A7E4: addiu       $a0, $a0, 0x6CE0
    ctx->r4 = ADD32(ctx->r4, 0X6CE0);
    after_0:
    // 0x8027A7E8: beq         $v0, $zero, L_8027A844
    if (ctx->r2 == 0) {
        // 0x8027A7EC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8027A844;
    }
    // 0x8027A7EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027A7F0: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8027A7F4: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8027A7F8: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8027A7FC: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8027A800: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x8027A804: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A808: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A80C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8027A810: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8027A814: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8027A818: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8027A81C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8027A820: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8027A824: jal         0x802E8D00
    // 0x8027A828: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    static_3_802E8D00(rdram, ctx);
        goto after_1;
    // 0x8027A828: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_1:
    // 0x8027A82C: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8027A830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027A834: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x8027A838: lh          $t1, 0x28($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X28);
    // 0x8027A83C: jalr        $t9
    // 0x8027A840: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027A840: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    after_2:
L_8027A844:
    // 0x8027A844: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8027A848: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8027A84C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8027A850: jr          $ra
    // 0x8027A854: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8027A854: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_8020830C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020830C: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80208310: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80208314: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80208318: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8020831C: or          $fp, $sp, $zero
    ctx->r30 = ctx->r29 | 0;
    // 0x80208320: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80208324: bne         $a3, $zero, L_80208330
    if (ctx->r7 != 0) {
        // 0x80208328: sw          $a1, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r5;
            goto L_80208330;
    }
    // 0x80208328: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8020832C: addiu       $a3, $fp, 0x84
    ctx->r7 = ADD32(ctx->r30, 0X84);
L_80208330:
    // 0x80208330: jal         0x80208230
    // 0x80208334: sw          $a3, 0x94($fp)
    MEM_W(0X94, ctx->r30) = ctx->r7;
    static_3_80208230(rdram, ctx);
        goto after_0;
    // 0x80208334: sw          $a3, 0x94($fp)
    MEM_W(0X94, ctx->r30) = ctx->r7;
    after_0:
    // 0x80208338: beq         $v0, $zero, L_8020834C
    if (ctx->r2 == 0) {
        // 0x8020833C: nop
    
            goto L_8020834C;
    }
    // 0x8020833C: nop

    // 0x80208340: lw          $t6, 0x94($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X94);
    // 0x80208344: b           L_802084E4
    // 0x80208348: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
        goto L_802084E4;
    // 0x80208348: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
L_8020834C:
    // 0x8020834C: jal         0x8020833C
    // 0x80208350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8020833C(rdram, ctx);
        goto after_1;
    // 0x80208350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80208354: addiu       $t7, $v0, 0x7
    ctx->r15 = ADD32(ctx->r2, 0X7);
    // 0x80208358: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8020835C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80208360: subu        $sp, $sp, $t8
    ctx->r29 = SUB32(ctx->r29, ctx->r24);
    // 0x80208364: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80208368: addiu       $t1, $sp, 0x20
    ctx->r9 = ADD32(ctx->r29, 0X20);
    // 0x8020836C: blez        $s0, L_802083E4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80208370: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802083E4;
    }
    // 0x80208370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80208374: andi        $a3, $s0, 0x3
    ctx->r7 = ctx->r16 & 0X3;
    // 0x80208378: beq         $a3, $zero, L_802083A8
    if (ctx->r7 == 0) {
        // 0x8020837C: or          $a2, $a3, $zero
        ctx->r6 = ctx->r7 | 0;
            goto L_802083A8;
    }
    // 0x8020837C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80208380: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x80208384: lw          $v1, 0x8C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X8C);
L_80208388:
    // 0x80208388: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x8020838C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80208390: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80208394: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80208398: bne         $a2, $a1, L_80208388
    if (ctx->r6 != ctx->r5) {
        // 0x8020839C: sb          $t2, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r10;
            goto L_80208388;
    }
    // 0x8020839C: sb          $t2, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r10;
    // 0x802083A0: beql        $a1, $s0, L_802083E8
    if (ctx->r5 == ctx->r16) {
        // 0x802083A4: sltu        $at, $a1, $v0
        ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
            goto L_802083E8;
    }
    goto skip_0;
    // 0x802083A4: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    skip_0:
L_802083A8:
    // 0x802083A8: lw          $t3, 0x8C($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X8C);
    // 0x802083AC: addu        $a0, $t1, $a1
    ctx->r4 = ADD32(ctx->r9, ctx->r5);
    // 0x802083B0: addu        $v1, $t3, $a1
    ctx->r3 = ADD32(ctx->r11, ctx->r5);
L_802083B4:
    // 0x802083B4: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x802083B8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x802083BC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802083C0: sb          $t4, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r12;
    // 0x802083C4: lbu         $t5, 0x1($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X1);
    // 0x802083C8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802083CC: sb          $t5, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r13;
    // 0x802083D0: lbu         $t6, -0x2($v1)
    ctx->r14 = MEM_BU(ctx->r3, -0X2);
    // 0x802083D4: sb          $t6, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r14;
    // 0x802083D8: lbu         $t7, -0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, -0X1);
    // 0x802083DC: bne         $a1, $s0, L_802083B4
    if (ctx->r5 != ctx->r16) {
        // 0x802083E0: sb          $t7, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r15;
            goto L_802083B4;
    }
    // 0x802083E0: sb          $t7, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r15;
L_802083E4:
    // 0x802083E4: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
L_802083E8:
    // 0x802083E8: beq         $at, $zero, L_80208408
    if (ctx->r1 == 0) {
        // 0x802083EC: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_80208408;
    }
    // 0x802083EC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802083F0: addu        $a0, $t1, $a1
    ctx->r4 = ADD32(ctx->r9, ctx->r5);
L_802083F4:
    // 0x802083F4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802083F8: sltu        $at, $a1, $t0
    ctx->r1 = ctx->r5 < ctx->r8 ? 1 : 0;
    // 0x802083FC: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80208400: bne         $at, $zero, L_802083F4
    if (ctx->r1 != 0) {
        // 0x80208404: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_802083F4;
    }
    // 0x80208404: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80208408:
    // 0x80208408: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8020840C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80208410: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80208414: addiu       $t9, $fp, 0x58
    ctx->r25 = ADD32(ctx->r30, 0X58);
    // 0x80208418: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x8020841C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80208420: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x80208424: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80208428: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8020842C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80208430: sw          $t1, 0x60($fp)
    MEM_W(0X60, ctx->r30) = ctx->r9;
    // 0x80208434: sw          $t0, 0x5C($fp)
    MEM_W(0X5C, ctx->r30) = ctx->r8;
    // 0x80208438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020843C: jal         0x80239120
    // 0x80208440: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80239120(rdram, ctx);
        goto after_2;
    // 0x80208440: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_2:
    // 0x80208444: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80208448: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x8020844C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80208450: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80208454: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80208458: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8020845C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80208460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80208464: jal         0x802399C0
    // 0x80208468: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_802399C0(rdram, ctx);
        goto after_3;
    // 0x80208468: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_3:
    // 0x8020846C: lw          $t0, 0x5C($fp)
    ctx->r8 = MEM_W(ctx->r30, 0X5C);
    // 0x80208470: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80208474: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x80208478: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8020847C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80208480: addiu       $t4, $fp, 0x58
    ctx->r12 = ADD32(ctx->r30, 0X58);
    // 0x80208484: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80208488: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8020848C: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x80208490: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80208494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80208498: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x8020849C: jal         0x80239F30
    // 0x802084A0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    static_3_80239F30(rdram, ctx);
        goto after_4;
    // 0x802084A0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_4:
    // 0x802084A4: lw          $t0, 0x5C($fp)
    ctx->r8 = MEM_W(ctx->r30, 0X5C);
    // 0x802084A8: lw          $t1, 0x60($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X60);
    // 0x802084AC: lw          $a1, 0x58($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X58);
    // 0x802084B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802084B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802084B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802084BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802084C0: jal         0x80239650
    // 0x802084C4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    static_3_80239650(rdram, ctx);
        goto after_5;
    // 0x802084C4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_5:
    // 0x802084C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802084CC: lw          $a1, 0x58($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X58);
    // 0x802084D0: jal         0x802392C0
    // 0x802084D4: addiu       $a2, $fp, 0x64
    ctx->r6 = ADD32(ctx->r30, 0X64);
    static_3_802392C0(rdram, ctx);
        goto after_6;
    // 0x802084D4: addiu       $a2, $fp, 0x64
    ctx->r6 = ADD32(ctx->r30, 0X64);
    after_6:
    // 0x802084D8: lw          $t5, 0x64($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X64);
    // 0x802084DC: lw          $t6, 0x94($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X94);
    // 0x802084E0: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
L_802084E4:
    // 0x802084E4: lw          $ra, 0x3C($fp)
    ctx->r31 = MEM_W(ctx->r30, 0X3C);
    // 0x802084E8: or          $sp, $fp, $zero
    ctx->r29 = ctx->r30 | 0;
    // 0x802084EC: lw          $s0, 0x34($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X34);
    // 0x802084F0: lw          $fp, 0x38($fp)
    ctx->r30 = MEM_W(ctx->r30, 0X38);
    // 0x802084F4: jr          $ra
    // 0x802084F8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x802084F8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void D_80248944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248944: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80248948: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8024894C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80248950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80248954: addiu       $t7, $t6, 0x14
    ctx->r15 = ADD32(ctx->r14, 0X14);
    // 0x80248958: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8024895C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80248960: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80248964: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80248968: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8024896C: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x80248970: beq         $t1, $zero, L_80248994
    if (ctx->r9 == 0) {
        // 0x80248974: nop
    
            goto L_80248994;
    }
    // 0x80248974: nop

L_80248978:
    // 0x80248978: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8024897C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80248980: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80248984: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80248988: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x8024898C: bne         $t5, $zero, L_80248978
    if (ctx->r13 != 0) {
        // 0x80248990: nop
    
            goto L_80248978;
    }
    // 0x80248990: nop

L_80248994:
    // 0x80248994: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80248998: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8024899C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802489A0: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x802489A4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802489A8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x802489AC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x802489B0: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x802489B4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802489B8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x802489BC: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x802489C0: beq         $t3, $zero, L_802489E4
    if (ctx->r11 == 0) {
        // 0x802489C4: nop
    
            goto L_802489E4;
    }
    // 0x802489C4: nop

L_802489C8:
    // 0x802489C8: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802489CC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x802489D0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802489D4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802489D8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802489DC: bne         $t7, $zero, L_802489C8
    if (ctx->r15 != 0) {
        // 0x802489E0: nop
    
            goto L_802489C8;
    }
    // 0x802489E0: nop

L_802489E4:
    // 0x802489E4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x802489E8: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802489EC: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x802489F0: jal         0x80248A7C
    // 0x802489F4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    static_3_80248A7C(rdram, ctx);
        goto after_0;
    // 0x802489F4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    after_0:
    // 0x802489F8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802489FC: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80248A00: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80248A04: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80248A08: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80248A0C: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x80248A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80248A14: ori         $at, $at, 0x401
    ctx->r1 = ctx->r1 | 0X401;
    // 0x80248A18: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80248A1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80248A20: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x80248A24: jr          $ra
    // 0x80248A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80248A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
