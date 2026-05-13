#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802DA5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DA63C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802DA640: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802DA644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DA648: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DA64C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DA650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DA654: jal         0x80230C78
    // 0x802DA658: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    static_3_80230C78(rdram, ctx);
        goto after_0;
    // 0x802DA658: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    after_0:
    // 0x802DA65C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DA660: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DA664: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DA668: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x802DA66C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DA670: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DA674: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DA678: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802DA67C: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
L_802DA680:
    // 0x802DA680: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x802DA684: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x802DA688: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x802DA68C: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x802DA690: lbu         $t0, 0x3($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3);
    // 0x802DA694: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x802DA698: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802DA69C: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x802DA6A0: bne         $v0, $a0, L_802DA680
    if (ctx->r2 != ctx->r4) {
        // 0x802DA6A4: addu        $v1, $v1, $t0
        ctx->r3 = ADD32(ctx->r3, ctx->r8);
            goto L_802DA680;
    }
    // 0x802DA6A4: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x802DA6A8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DA6AC: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DA6B0: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x802DA6B4: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x802DA6B8: bne         $t2, $at, L_802DA6E8
    if (ctx->r10 != ctx->r1) {
        // 0x802DA6BC: lui         $t3, 0x0
        ctx->r11 = S32(0X0 << 16);
            goto L_802DA6E8;
    }
    // 0x802DA6BC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DA6C0: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DA6C4: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x802DA6C8: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DA6CC: bne         $t3, $at, L_802DA6E8
    if (ctx->r11 != ctx->r1) {
        // 0x802DA6D0: nop
    
            goto L_802DA6E8;
    }
    // 0x802DA6D0: nop

    // 0x802DA6D4: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DA6D8: andi        $t5, $t1, 0xFF
    ctx->r13 = ctx->r9 & 0XFF;
    // 0x802DA6DC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DA6E0: beq         $t4, $t5, L_802DA73C
    if (ctx->r12 == ctx->r13) {
        // 0x802DA6E4: addiu       $a1, $a1, 0x0
        ctx->r5 = ADD32(ctx->r5, 0X0);
            goto L_802DA73C;
    }
    // 0x802DA6E4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
L_802DA6E8:
    // 0x802DA6E8: jal         0x8030BF98
    // 0x802DA6EC: nop

    static_3_8030BF98(rdram, ctx);
        goto after_1;
    // 0x802DA6EC: nop

    after_1:
    // 0x802DA6F0: jal         0x8030BF68
    // 0x802DA6F4: nop

    static_3_8030BF68(rdram, ctx);
        goto after_2;
    // 0x802DA6F4: nop

    after_2:
    // 0x802DA6F8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802DA6FC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802DA700: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DA704: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DA708: sb          $zero, 0x67($a2)
    MEM_B(0X67, ctx->r6) = 0;
    // 0x802DA70C: sb          $zero, 0x68($a2)
    MEM_B(0X68, ctx->r6) = 0;
    // 0x802DA710: sb          $zero, 0x69($a2)
    MEM_B(0X69, ctx->r6) = 0;
    // 0x802DA714: sb          $zero, 0x6A($a2)
    MEM_B(0X6A, ctx->r6) = 0;
    // 0x802DA718: jal         0x8030AAD0
    // 0x802DA71C: sb          $zero, 0x6B($a2)
    MEM_B(0X6B, ctx->r6) = 0;
    static_3_8030AAD0(rdram, ctx);
        goto after_3;
    // 0x802DA71C: sb          $zero, 0x6B($a2)
    MEM_B(0X6B, ctx->r6) = 0;
    after_3:
    // 0x802DA720: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DA724: jal         0x8030AAD0
    // 0x802DA728: addiu       $a0, $a1, 0x0
    ctx->r4 = ADD32(ctx->r5, 0X0);
    static_3_8030AAD0(rdram, ctx);
        goto after_4;
    // 0x802DA728: addiu       $a0, $a1, 0x0
    ctx->r4 = ADD32(ctx->r5, 0X0);
    after_4:
    // 0x802DA72C: jal         0x8030C020
    // 0x802DA730: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8030C020(rdram, ctx);
        goto after_5;
    // 0x802DA730: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x802DA734: b           L_802DB848
    // 0x802DA738: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802DB848;
    // 0x802DA738: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802DA73C:
    // 0x802DA73C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DA740: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DA744: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DA748: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x802DA74C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x802DA750: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x802DA754: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DA758: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802DA75C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
L_802DA760:
    // 0x802DA760: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x802DA764: lbu         $t0, 0x1($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X1);
    // 0x802DA768: lbu         $t5, 0x2($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X2);
    // 0x802DA76C: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x802DA770: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DA774: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802DA778: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802DA77C: sll         $t3, $t1, 8
    ctx->r11 = S32(ctx->r9 << 8);
    // 0x802DA780: lbu         $t0, 0x3($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X3);
    // 0x802DA784: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x802DA788: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DA78C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x802DA790: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x802DA794: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802DA798: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802DA79C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802DA7A0: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x802DA7A4: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DA7A8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x802DA7AC: bne         $at, $zero, L_802DA760
    if (ctx->r1 != 0) {
        // 0x802DA7B0: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_802DA760;
    }
    // 0x802DA7B0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802DA7B4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DA7B8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DA7BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DA7C0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DA7C4: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802DA7C8: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
L_802DA7CC:
    // 0x802DA7CC: lbu         $t2, 0xC($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XC);
    // 0x802DA7D0: lbu         $t3, 0xD($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XD);
    // 0x802DA7D4: lbu         $t4, 0xE($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XE);
    // 0x802DA7D8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x802DA7DC: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x802DA7E0: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x802DA7E4: sb          $t2, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r10;
    // 0x802DA7E8: sb          $t3, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r11;
    // 0x802DA7EC: bne         $at, $zero, L_802DA7CC
    if (ctx->r1 != 0) {
        // 0x802DA7F0: sb          $t4, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r12;
            goto L_802DA7CC;
    }
    // 0x802DA7F0: sb          $t4, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r12;
    // 0x802DA7F4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DA7F8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DA7FC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DA800: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DA804: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802DA808: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
L_802DA80C:
    // 0x802DA80C: lbu         $t5, 0x15($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X15);
    // 0x802DA810: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802DA814: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x802DA818: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802DA81C: bne         $at, $zero, L_802DA80C
    if (ctx->r1 != 0) {
        // 0x802DA820: sb          $t5, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r13;
            goto L_802DA80C;
    }
    // 0x802DA820: sb          $t5, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r13;
    // 0x802DA824: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DA828: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DA82C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802DA830: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DA834: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802DA838: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DA83C: lw          $t7, 0x28($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X28);
    // 0x802DA840: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DA844: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DA848: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802DA84C: sw          $t8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r24;
    // 0x802DA850: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DA854: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DA858: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DA85C: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DA860: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DA864: lw          $t2, 0x28($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X28);
    // 0x802DA868: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DA86C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DA870: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DA874: sw          $t3, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r11;
    // 0x802DA878: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DA87C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DA880: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802DA884: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DA888: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DA88C: lw          $t7, 0x28($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X28);
    // 0x802DA890: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DA894: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802DA898: sw          $t8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r24;
    // 0x802DA89C: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DA8A0: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DA8A4: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DA8A8: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DA8AC: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DA8B0: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DA8B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DA8B8: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DA8BC: lw          $t4, 0x30($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X30);
    // 0x802DA8C0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DA8C4: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DA8C8: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DA8CC: sw          $t5, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r13;
    // 0x802DA8D0: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DA8D4: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DA8D8: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DA8DC: lw          $t9, 0x30($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X30);
    // 0x802DA8E0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DA8E4: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x802DA8E8: sw          $t0, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r8;
    // 0x802DA8EC: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DA8F0: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DA8F4: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x802DA8F8: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DA8FC: lw          $t4, 0x30($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X30);
    // 0x802DA900: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DA904: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DA908: sw          $t5, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r13;
    // 0x802DA90C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DA910: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DA914: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DA918: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DA91C: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DA920: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DA924: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DA928: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DA92C: lw          $t1, 0x38($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X38);
    // 0x802DA930: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DA934: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DA938: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x802DA93C: sw          $t2, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r10;
    // 0x802DA940: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DA944: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x802DA948: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DA94C: lw          $t6, 0x38($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X38);
    // 0x802DA950: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DA954: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DA958: sw          $t7, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r15;
    // 0x802DA95C: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DA960: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DA964: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802DA968: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DA96C: lw          $t1, 0x38($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X38);
    // 0x802DA970: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DA974: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DA978: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x802DA97C: sw          $t2, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r10;
    // 0x802DA980: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DA984: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DA988: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DA98C: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x802DA990: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DA994: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DA998: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DA99C: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DA9A0: lw          $t8, 0x40($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X40);
    // 0x802DA9A4: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DA9A8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DA9AC: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DA9B0: sw          $t9, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->r25;
    // 0x802DA9B4: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DA9B8: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DA9BC: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DA9C0: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DA9C4: lw          $t3, 0x40($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X40);
    // 0x802DA9C8: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DA9CC: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x802DA9D0: sw          $t4, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->r12;
    // 0x802DA9D4: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DA9D8: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DA9DC: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x802DA9E0: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DA9E4: lw          $t8, 0x40($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X40);
    // 0x802DA9E8: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DA9EC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DA9F0: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DA9F4: sw          $t9, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->r25;
    // 0x802DA9F8: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DA9FC: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DAA00: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DAA04: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DAA08: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DAA0C: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DAA10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DAA14: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802DAA18: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DAA1C: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DAA20: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DAA24: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DAA28: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802DAA2C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DAA30: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DAA34: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DAA38: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DAA3C: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DAA40: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DAA44: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DAA48: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DAA4C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DAA50: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DAA54: sh          $t0, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r8;
    // 0x802DAA58: lhu         $t1, 0x52($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X52);
    // 0x802DAA5C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DAA60: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DAA64: sll         $t3, $t1, 8
    ctx->r11 = S32(ctx->r9 << 8);
    // 0x802DAA68: sh          $t3, 0x52($a2)
    MEM_H(0X52, ctx->r6) = ctx->r11;
    // 0x802DAA6C: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DAA70: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DAA74: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DAA78: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x802DAA7C: sh          $t5, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r13;
    // 0x802DAA80: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DAA84: lw          $t7, 0x54($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X54);
    // 0x802DAA88: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DAA8C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DAA90: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802DAA94: sw          $t8, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r24;
    // 0x802DAA98: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DAA9C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DAAA0: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DAAA4: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DAAA8: lw          $t2, 0x54($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X54);
    // 0x802DAAAC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DAAB0: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DAAB4: sw          $t3, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r11;
    // 0x802DAAB8: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DAABC: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DAAC0: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DAAC4: lw          $t7, 0x54($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X54);
    // 0x802DAAC8: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DAACC: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DAAD0: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802DAAD4: sw          $t8, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->r24;
    // 0x802DAAD8: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DAADC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DAAE0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DAAE4: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DAAE8: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DAAEC: lw          $t2, 0x54($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X54);
    // 0x802DAAF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DAAF4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802DAAF8: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
    // 0x802DAAFC: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DAB00: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DAB04: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DAB08: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DAB0C: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DAB10: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DAB14: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DAB18: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DAB1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DAB20: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DAB24: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DAB28: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DAB2C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DAB30: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802DAB34: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DAB38: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DAB3C: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DAB40: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DAB44: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DAB48: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DAB4C: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DAB50: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DAB54: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DAB58: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DAB5C: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DAB60: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DAB64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DAB68: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DAB6C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x802DAB70: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DAB74: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DAB78: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DAB7C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x802DAB80: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DAB84: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DAB88: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DAB8C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x802DAB90: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DAB94: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x802DAB98: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x802DAB9C: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DABA0: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DABA4: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x802DABA8: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DABAC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x802DABB0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DABB4: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DABB8: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x802DABBC: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DABC0: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DABC4: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DABC8: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DABCC: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802DABD0: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x802DABD4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802DABD8: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x802DABDC: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x802DABE0: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DABE4: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802DABE8: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802DABEC: lw          $t5, 0x4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X4);
    // 0x802DABF0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DABF4: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x802DABF8: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x802DABFC: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802DAC00: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DAC04: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x802DAC08: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802DAC0C: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x802DAC10: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DAC14: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x802DAC18: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x802DAC1C: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DAC20: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DAC24: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802DAC28: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802DAC2C: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DAC30: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x802DAC34: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DAC38: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x802DAC3C: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x802DAC40: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DAC44: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DAC48: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DAC4C: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x802DAC50: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DAC54: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x802DAC58: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DAC5C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DAC60: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x802DAC64: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
    // 0x802DAC68: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DAC6C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DAC70: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802DAC74: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x802DAC78: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DAC7C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x802DAC80: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DAC84: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DAC88: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x802DAC8C: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DAC90: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DAC94: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802DAC98: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DAC9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DACA0: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DACA4: lw          $t2, 0xC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC);
    // 0x802DACA8: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DACAC: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DACB0: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x802DACB4: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DACB8: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DACBC: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DACC0: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x802DACC4: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DACC8: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802DACCC: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    // 0x802DACD0: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DACD4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DACD8: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DACDC: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DACE0: lw          $t2, 0xC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC);
    // 0x802DACE4: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DACE8: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DACEC: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x802DACF0: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DACF4: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DACF8: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DACFC: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DAD00: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DAD04: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x802DAD08: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DAD0C: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DAD10: sw          $t9, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r25;
    // 0x802DAD14: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DAD18: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DAD1C: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DAD20: lw          $t3, 0x10($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X10);
    // 0x802DAD24: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DAD28: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x802DAD2C: sw          $t4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r12;
    // 0x802DAD30: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DAD34: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DAD38: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x802DAD3C: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DAD40: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x802DAD44: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DAD48: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DAD4C: sw          $t9, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r25;
    // 0x802DAD50: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DAD54: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DAD58: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DAD5C: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DAD60: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DAD64: lw          $t4, 0x14($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X14);
    // 0x802DAD68: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DAD6C: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DAD70: sw          $t5, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r13;
    // 0x802DAD74: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DAD78: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DAD7C: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DAD80: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x802DAD84: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DAD88: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x802DAD8C: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
    // 0x802DAD90: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DAD94: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DAD98: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x802DAD9C: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DADA0: lw          $t4, 0x14($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X14);
    // 0x802DADA4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DADA8: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DADAC: sw          $t5, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r13;
    // 0x802DADB0: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DADB4: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DADB8: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DADBC: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DADC0: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802DADC4: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x802DADC8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802DADCC: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x802DADD0: sw          $t1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r9;
    // 0x802DADD4: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DADD8: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802DADDC: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802DADE0: lw          $t5, 0x18($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X18);
    // 0x802DADE4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DADE8: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x802DADEC: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x802DADF0: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802DADF4: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DADF8: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x802DADFC: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802DAE00: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x802DAE04: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DAE08: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x802DAE0C: sw          $t1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r9;
    // 0x802DAE10: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DAE14: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DAE18: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802DAE1C: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802DAE20: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DAE24: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DAE28: lw          $t6, 0x1C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C);
    // 0x802DAE2C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DAE30: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DAE34: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x802DAE38: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DAE3C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802DAE40: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DAE44: lw          $t1, 0x1C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X1C);
    // 0x802DAE48: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DAE4C: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x802DAE50: sw          $t2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r10;
    // 0x802DAE54: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DAE58: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DAE5C: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x802DAE60: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DAE64: lw          $t6, 0x1C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C);
    // 0x802DAE68: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DAE6C: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DAE70: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x802DAE74: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DAE78: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DAE7C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802DAE80: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DAE84: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DAE88: lw          $t2, 0x20($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X20);
    // 0x802DAE8C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DAE90: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DAE94: sw          $t3, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r11;
    // 0x802DAE98: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DAE9C: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DAEA0: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DAEA4: lw          $t7, 0x20($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X20);
    // 0x802DAEA8: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DAEAC: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802DAEB0: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x802DAEB4: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DAEB8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DAEBC: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DAEC0: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DAEC4: lw          $t2, 0x20($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X20);
    // 0x802DAEC8: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DAECC: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DAED0: sw          $t3, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r11;
    // 0x802DAED4: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DAED8: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DAEDC: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DAEE0: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DAEE4: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DAEE8: lw          $t8, 0x24($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X24);
    // 0x802DAEEC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DAEF0: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DAEF4: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
    // 0x802DAEF8: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DAEFC: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DAF00: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DAF04: lw          $t3, 0x24($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X24);
    // 0x802DAF08: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DAF0C: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x802DAF10: sw          $t4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r12;
    // 0x802DAF14: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DAF18: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DAF1C: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x802DAF20: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DAF24: lw          $t8, 0x24($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X24);
    // 0x802DAF28: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DAF2C: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DAF30: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
    // 0x802DAF34: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DAF38: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DAF3C: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DAF40: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DAF44: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DAF48: lw          $t4, 0x28($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X28);
    // 0x802DAF4C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DAF50: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DAF54: sw          $t5, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r13;
    // 0x802DAF58: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DAF5C: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DAF60: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DAF64: lw          $t9, 0x28($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X28);
    // 0x802DAF68: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DAF6C: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x802DAF70: sw          $t0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r8;
    // 0x802DAF74: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DAF78: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DAF7C: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x802DAF80: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DAF84: lw          $t4, 0x28($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X28);
    // 0x802DAF88: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DAF8C: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DAF90: sw          $t5, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r13;
    // 0x802DAF94: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DAF98: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DAF9C: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DAFA0: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DAFA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DAFA8: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802DAFAC: lw          $t0, 0x2C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X2C);
    // 0x802DAFB0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802DAFB4: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x802DAFB8: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x802DAFBC: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DAFC0: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802DAFC4: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802DAFC8: lw          $t5, 0x2C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X2C);
    // 0x802DAFCC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DAFD0: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x802DAFD4: sw          $t6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r14;
    // 0x802DAFD8: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802DAFDC: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DAFE0: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x802DAFE4: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802DAFE8: lw          $t0, 0x2C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X2C);
    // 0x802DAFEC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DAFF0: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x802DAFF4: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x802DAFF8: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DAFFC: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB000: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802DB004: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802DB008: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DB00C: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x802DB010: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DB014: sw          $t7, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r15;
    // 0x802DB018: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DB01C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802DB020: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DB024: lw          $t1, 0x30($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X30);
    // 0x802DB028: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DB02C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB030: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x802DB034: sw          $t2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r10;
    // 0x802DB038: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DB03C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DB040: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB044: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x802DB048: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DB04C: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x802DB050: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB054: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DB058: sw          $t7, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r15;
    // 0x802DB05C: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DB060: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB064: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DB068: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802DB06C: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DB070: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB074: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DB078: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x802DB07C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DB080: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DB084: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DB088: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x802DB08C: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB090: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DB094: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DB098: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x802DB09C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB0A0: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802DB0A4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802DB0A8: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DB0AC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB0B0: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DB0B4: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DB0B8: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x802DB0BC: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB0C0: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DB0C4: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x802DB0C8: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB0CC: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB0D0: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DB0D4: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DB0D8: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DB0DC: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x802DB0E0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DB0E4: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DB0E8: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x802DB0EC: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB0F0: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DB0F4: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DB0F8: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x802DB0FC: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB100: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x802DB104: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x802DB108: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DB10C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DB110: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x802DB114: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DB118: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x802DB11C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB120: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DB124: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x802DB128: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB12C: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DB130: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DB134: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DB138: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB13C: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DB140: lw          $t4, 0x8($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X8);
    // 0x802DB144: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DB148: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DB14C: sw          $t5, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r13;
    // 0x802DB150: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB154: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DB158: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DB15C: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x802DB160: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB164: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x802DB168: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
    // 0x802DB16C: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DB170: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DB174: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x802DB178: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DB17C: lw          $t4, 0x8($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X8);
    // 0x802DB180: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DB184: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DB188: sw          $t5, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r13;
    // 0x802DB18C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB190: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DB194: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DB198: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DB19C: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802DB1A0: lw          $t0, 0xC($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XC);
    // 0x802DB1A4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802DB1A8: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x802DB1AC: sw          $t1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r9;
    // 0x802DB1B0: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DB1B4: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802DB1B8: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802DB1BC: lw          $t5, 0xC($a1)
    ctx->r13 = MEM_W(ctx->r5, 0XC);
    // 0x802DB1C0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DB1C4: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x802DB1C8: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x802DB1CC: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802DB1D0: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB1D4: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x802DB1D8: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802DB1DC: lw          $t0, 0xC($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XC);
    // 0x802DB1E0: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DB1E4: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x802DB1E8: sw          $t1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r9;
    // 0x802DB1EC: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DB1F0: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB1F4: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802DB1F8: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802DB1FC: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DB200: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x802DB204: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DB208: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DB20C: sw          $t7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r15;
    // 0x802DB210: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DB214: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802DB218: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DB21C: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x802DB220: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DB224: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x802DB228: sw          $t2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r10;
    // 0x802DB22C: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DB230: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB234: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x802DB238: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DB23C: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x802DB240: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB244: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DB248: sw          $t7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r15;
    // 0x802DB24C: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DB250: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB254: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802DB258: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DB25C: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DB260: lw          $t2, 0x14($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X14);
    // 0x802DB264: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DB268: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DB26C: sw          $t3, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r11;
    // 0x802DB270: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB274: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DB278: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DB27C: lw          $t7, 0x14($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X14);
    // 0x802DB280: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB284: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802DB288: sw          $t8, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r24;
    // 0x802DB28C: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DB290: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB294: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DB298: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DB29C: lw          $t2, 0x14($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X14);
    // 0x802DB2A0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB2A4: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DB2A8: sw          $t3, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r11;
    // 0x802DB2AC: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB2B0: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB2B4: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DB2B8: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DB2BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB2C0: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DB2C4: lw          $t8, 0x18($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18);
    // 0x802DB2C8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DB2CC: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DB2D0: sw          $t9, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r25;
    // 0x802DB2D4: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB2D8: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DB2DC: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DB2E0: lw          $t3, 0x18($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X18);
    // 0x802DB2E4: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB2E8: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x802DB2EC: sw          $t4, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r12;
    // 0x802DB2F0: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DB2F4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DB2F8: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x802DB2FC: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DB300: lw          $t8, 0x18($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18);
    // 0x802DB304: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB308: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DB30C: sw          $t9, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r25;
    // 0x802DB310: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB314: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DB318: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DB31C: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DB320: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DB324: lw          $t4, 0x1C($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X1C);
    // 0x802DB328: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DB32C: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DB330: sw          $t5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r13;
    // 0x802DB334: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB338: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DB33C: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DB340: lw          $t9, 0x1C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X1C);
    // 0x802DB344: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB348: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x802DB34C: sw          $t0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r8;
    // 0x802DB350: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DB354: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DB358: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x802DB35C: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DB360: lw          $t4, 0x1C($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X1C);
    // 0x802DB364: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DB368: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DB36C: sw          $t5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r13;
    // 0x802DB370: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB374: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DB378: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DB37C: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DB380: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802DB384: lw          $t0, 0x20($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X20);
    // 0x802DB388: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802DB38C: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x802DB390: sw          $t1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r9;
    // 0x802DB394: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DB398: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802DB39C: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802DB3A0: lw          $t5, 0x20($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X20);
    // 0x802DB3A4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DB3A8: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x802DB3AC: sw          $t6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r14;
    // 0x802DB3B0: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802DB3B4: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB3B8: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x802DB3BC: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x802DB3C0: lw          $t0, 0x20($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X20);
    // 0x802DB3C4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DB3C8: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x802DB3CC: sw          $t1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r9;
    // 0x802DB3D0: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DB3D4: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB3D8: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802DB3DC: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x802DB3E0: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DB3E4: lw          $t6, 0x24($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X24);
    // 0x802DB3E8: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DB3EC: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DB3F0: sw          $t7, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r15;
    // 0x802DB3F4: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DB3F8: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802DB3FC: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DB400: lw          $t1, 0x24($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X24);
    // 0x802DB404: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB408: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x802DB40C: sw          $t2, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r10;
    // 0x802DB410: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DB414: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x802DB418: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x802DB41C: lw          $t6, 0x24($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X24);
    // 0x802DB420: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DB424: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB428: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x802DB42C: sw          $t7, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r15;
    // 0x802DB430: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DB434: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB438: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB43C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802DB440: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x802DB444: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB448: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DB44C: lw          $t2, 0x28($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X28);
    // 0x802DB450: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DB454: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DB458: sw          $t3, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r11;
    // 0x802DB45C: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB460: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DB464: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DB468: lw          $t7, 0x28($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X28);
    // 0x802DB46C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB470: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802DB474: sw          $t8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r24;
    // 0x802DB478: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DB47C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB480: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DB484: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x802DB488: lw          $t2, 0x28($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X28);
    // 0x802DB48C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB490: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x802DB494: sw          $t3, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r11;
    // 0x802DB498: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB49C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB4A0: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DB4A4: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802DB4A8: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DB4AC: lw          $t8, 0x2C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X2C);
    // 0x802DB4B0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DB4B4: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DB4B8: sw          $t9, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r25;
    // 0x802DB4BC: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB4C0: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DB4C4: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DB4C8: lw          $t3, 0x2C($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X2C);
    // 0x802DB4CC: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB4D0: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x802DB4D4: sw          $t4, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r12;
    // 0x802DB4D8: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DB4DC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DB4E0: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x802DB4E4: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x802DB4E8: lw          $t8, 0x2C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X2C);
    // 0x802DB4EC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB4F0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DB4F4: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x802DB4F8: sw          $t9, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r25;
    // 0x802DB4FC: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB500: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DB504: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x802DB508: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x802DB50C: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DB510: lw          $t4, 0x30($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X30);
    // 0x802DB514: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DB518: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DB51C: sw          $t5, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r13;
    // 0x802DB520: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB524: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DB528: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DB52C: lw          $t9, 0x30($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X30);
    // 0x802DB530: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB534: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x802DB538: sw          $t0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r8;
    // 0x802DB53C: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DB540: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x802DB544: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x802DB548: lw          $t4, 0x30($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X30);
    // 0x802DB54C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DB550: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DB554: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x802DB558: sw          $t5, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r13;
    // 0x802DB55C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB560: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DB564: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DB568: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x802DB56C: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x802DB570: lbu         $t9, 0x65($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X65);
    // 0x802DB574: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB578: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DB57C: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x802DB580: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DB584: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB588: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DB58C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DB590: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB594: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DB598: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DB59C: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB5A0: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DB5A4: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DB5A8: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DB5AC: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DB5B0: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DB5B4: lbu         $v0, 0x51($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X51);
    // 0x802DB5B8: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x802DB5BC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x802DB5C0: beq         $v0, $at, L_802DB634
    if (ctx->r2 == ctx->r1) {
        // 0x802DB5C4: lui         $t5, 0x0
        ctx->r13 = S32(0X0 << 16);
            goto L_802DB634;
    }
    // 0x802DB5C4: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB5C8: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x802DB5CC: beq         $v0, $at, L_802DB644
    if (ctx->r2 == ctx->r1) {
        // 0x802DB5D0: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_802DB644;
    }
    // 0x802DB5D0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802DB5D4: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x802DB5D8: beq         $v0, $at, L_802DB658
    if (ctx->r2 == ctx->r1) {
        // 0x802DB5DC: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_802DB658;
    }
    // 0x802DB5DC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802DB5E0: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x802DB5E4: beq         $v0, $at, L_802DB668
    if (ctx->r2 == ctx->r1) {
        // 0x802DB5E8: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_802DB668;
    }
    // 0x802DB5E8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802DB5EC: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x802DB5F0: beq         $v0, $at, L_802DB67C
    if (ctx->r2 == ctx->r1) {
        // 0x802DB5F4: addiu       $at, $zero, 0x84
        ctx->r1 = ADD32(0, 0X84);
            goto L_802DB67C;
    }
    // 0x802DB5F4: addiu       $at, $zero, 0x84
    ctx->r1 = ADD32(0, 0X84);
    // 0x802DB5F8: beq         $v0, $at, L_802DB690
    if (ctx->r2 == ctx->r1) {
        // 0x802DB5FC: addiu       $at, $zero, 0x48
        ctx->r1 = ADD32(0, 0X48);
            goto L_802DB690;
    }
    // 0x802DB5FC: addiu       $at, $zero, 0x48
    ctx->r1 = ADD32(0, 0X48);
    // 0x802DB600: beq         $v0, $at, L_802DB6A4
    if (ctx->r2 == ctx->r1) {
        // 0x802DB604: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_802DB6A4;
    }
    // 0x802DB604: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x802DB608: addiu       $at, $zero, 0x88
    ctx->r1 = ADD32(0, 0X88);
    // 0x802DB60C: beq         $v0, $at, L_802DB6B4
    if (ctx->r2 == ctx->r1) {
        // 0x802DB610: addiu       $t2, $zero, 0x4
        ctx->r10 = ADD32(0, 0X4);
            goto L_802DB6B4;
    }
    // 0x802DB610: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x802DB614: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802DB618: beq         $v0, $at, L_802DB6C8
    if (ctx->r2 == ctx->r1) {
        // 0x802DB61C: addiu       $t3, $zero, 0xA
        ctx->r11 = ADD32(0, 0XA);
            goto L_802DB6C8;
    }
    // 0x802DB61C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802DB620: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x802DB624: beq         $v0, $at, L_802DB6D0
    if (ctx->r2 == ctx->r1) {
        // 0x802DB628: addiu       $t4, $zero, 0xB
        ctx->r12 = ADD32(0, 0XB);
            goto L_802DB6D0;
    }
    // 0x802DB628: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x802DB62C: b           L_802DB6D4
    // 0x802DB630: nop

        goto L_802DB6D4;
    // 0x802DB630: nop

L_802DB634:
    // 0x802DB634: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB638: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802DB63C: b           L_802DB6D4
    // 0x802DB640: sb          $t7, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r15;
        goto L_802DB6D4;
    // 0x802DB640: sb          $t7, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r15;
L_802DB644:
    // 0x802DB644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DB648: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB64C: sb          $v0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r2;
    // 0x802DB650: b           L_802DB6D4
    // 0x802DB654: sb          $t8, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r24;
        goto L_802DB6D4;
    // 0x802DB654: sb          $t8, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r24;
L_802DB658:
    // 0x802DB658: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB65C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802DB660: b           L_802DB6D4
    // 0x802DB664: sb          $t9, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r25;
        goto L_802DB6D4;
    // 0x802DB664: sb          $t9, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r25;
L_802DB668:
    // 0x802DB668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DB66C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB670: sb          $v0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r2;
    // 0x802DB674: b           L_802DB6D4
    // 0x802DB678: sb          $t0, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r8;
        goto L_802DB6D4;
    // 0x802DB678: sb          $t0, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r8;
L_802DB67C:
    // 0x802DB67C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DB684: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802DB688: b           L_802DB6D4
    // 0x802DB68C: sb          $v0, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r2;
        goto L_802DB6D4;
    // 0x802DB68C: sb          $v0, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r2;
L_802DB690:
    // 0x802DB690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DB694: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB698: sb          $v0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r2;
    // 0x802DB69C: b           L_802DB6D4
    // 0x802DB6A0: sb          $v0, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r2;
        goto L_802DB6D4;
    // 0x802DB6A0: sb          $v0, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r2;
L_802DB6A4:
    // 0x802DB6A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB6A8: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802DB6AC: b           L_802DB6D4
    // 0x802DB6B0: sb          $t1, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r9;
        goto L_802DB6D4;
    // 0x802DB6B0: sb          $t1, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r9;
L_802DB6B4:
    // 0x802DB6B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DB6B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB6BC: sb          $v0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r2;
    // 0x802DB6C0: b           L_802DB6D4
    // 0x802DB6C4: sb          $t2, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r10;
        goto L_802DB6D4;
    // 0x802DB6C4: sb          $t2, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r10;
L_802DB6C8:
    // 0x802DB6C8: b           L_802DB6D4
    // 0x802DB6CC: sb          $t3, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r11;
        goto L_802DB6D4;
    // 0x802DB6CC: sb          $t3, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r11;
L_802DB6D0:
    // 0x802DB6D0: sb          $t4, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r12;
L_802DB6D4:
    // 0x802DB6D4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DB6D8: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
L_802DB6DC:
    // 0x802DB6DC: lbu         $t6, 0xBD($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XBD);
    // 0x802DB6E0: lbu         $t9, 0xBE($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XBE);
    // 0x802DB6E4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x802DB6E8: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x802DB6EC: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x802DB6F0: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x802DB6F4: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x802DB6F8: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x802DB6FC: bne         $v1, $a0, L_802DB6DC
    if (ctx->r3 != ctx->r4) {
        // 0x802DB700: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_802DB6DC;
    }
    // 0x802DB700: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802DB704: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB708: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DB70C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DB710: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB714: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DB718: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DB71C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB720: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DB724: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DB728: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DB72C: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DB730: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DB734: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DB738: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB73C: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802DB740: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB744: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB748: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802DB74C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DB750: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DB754: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DB758: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802DB75C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB760: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x802DB764: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x802DB768: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB76C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DB770: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DB774: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB778: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802DB77C: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x802DB780: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
    // 0x802DB784: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x802DB788: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB78C: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802DB790: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB794: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DB798: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802DB79C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB7A0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB7A4: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB7A8: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB7AC: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x802DB7B0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802DB7B4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802DB7B8: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x802DB7BC: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x802DB7C0: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802DB7C4: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802DB7C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB7CC: sll         $t6, $v0, 8
    ctx->r14 = S32(ctx->r2 << 8);
    // 0x802DB7D0: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x802DB7D4: or          $v0, $t6, $t7
    ctx->r2 = ctx->r14 | ctx->r15;
    // 0x802DB7D8: sll         $t8, $v0, 8
    ctx->r24 = S32(ctx->r2 << 8);
    // 0x802DB7DC: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802DB7E0: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802DB7E4: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
    // 0x802DB7E8: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802DB7EC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802DB7F0: sll         $t3, $t1, 8
    ctx->r11 = S32(ctx->r9 << 8);
    // 0x802DB7F4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802DB7F8: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DB7FC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802DB800: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802DB804: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DB808: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802DB80C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802DB810: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x802DB814: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802DB818: swc1        $f4, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->f4.u32l;
    // 0x802DB81C: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802DB820: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DB824: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DB828: sh          $t7, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r15;
    // 0x802DB82C: lhu         $t8, 0x0($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X0);
    // 0x802DB830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DB834: sll         $t0, $t8, 8
    ctx->r8 = S32(ctx->r24 << 8);
    // 0x802DB838: sh          $t0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r8;
    // 0x802DB83C: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802DB840: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x802DB844: sh          $t2, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r10;
L_802DB848:
    // 0x802DB848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802DB84C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802DB850: jr          $ra
    // 0x802DB854: nop

    return;
    // 0x802DB854: nop

;}
RECOMP_FUNC void D_802E0C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E0CEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E0CF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802E0CF4: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802E0CF8: jal         0x8028ED24
    // 0x802E0CFC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_8028ED24(rdram, ctx);
        goto after_0;
    // 0x802E0CFC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_0:
    // 0x802E0D00: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802E0D04: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x802E0D08: jal         0x802FA254
    // 0x802E0D0C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA254(rdram, ctx);
        goto after_1;
    // 0x802E0D0C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_1:
    // 0x802E0D10: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x802E0D14: jal         0x802B0B44
    // 0x802E0D18: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    static_3_802B0B44(rdram, ctx);
        goto after_2;
    // 0x802E0D18: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    after_2:
    // 0x802E0D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E0D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E0D24: jr          $ra
    // 0x802E0D28: nop

    return;
    // 0x802E0D28: nop

;}
RECOMP_FUNC void D_802A948C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A950C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A9510: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A9514: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A9518: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A951C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A9520: jal         0x80318C7C
    // 0x802A9524: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    static_3_80318C7C(rdram, ctx);
        goto after_0;
    // 0x802A9524: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    after_0:
    // 0x802A9528: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x802A952C: bnel        $t6, $zero, L_802A9554
    if (ctx->r14 != 0) {
        // 0x802A9530: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A9554;
    }
    goto skip_0;
    // 0x802A9530: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802A9534: jal         0x8021BAE0
    // 0x802A9538: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x802A9538: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_1:
    // 0x802A953C: jal         0x8021BAE0
    // 0x802A9540: lw          $a0, 0x280($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X280);
    static_3_8021BAE0(rdram, ctx);
        goto after_2;
    // 0x802A9540: lw          $a0, 0x280($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X280);
    after_2:
    // 0x802A9544: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x802A9548: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x802A954C: sw          $v0, 0x280($s0)
    MEM_W(0X280, ctx->r16) = ctx->r2;
    // 0x802A9550: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A9554:
    // 0x802A9554: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A9558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A955C: jr          $ra
    // 0x802A9560: nop

    return;
    // 0x802A9560: nop

;}
RECOMP_FUNC void D_802D1710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1798: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x802D179C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802D17A0: bne         $v0, $at, L_802D17B0
    if (ctx->r2 != ctx->r1) {
        // 0x802D17A4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802D17B0;
    }
    // 0x802D17A4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802D17A8: b           L_802D17FC
    // 0x802D17AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D17FC;
    // 0x802D17AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D17B0:
    // 0x802D17B0: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x802D17B4: bne         $at, $zero, L_802D17D4
    if (ctx->r1 != 0) {
        // 0x802D17B8: sll         $t6, $v0, 5
        ctx->r14 = S32(ctx->r2 << 5);
            goto L_802D17D4;
    }
    // 0x802D17B8: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x802D17BC: jal         0x80302BC8
    // 0x802D17C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80302BC8(rdram, ctx);
        goto after_0;
    // 0x802D17C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D17C4: jal         0x803020F4
    // 0x802D17C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_803020F4(rdram, ctx);
        goto after_1;
    // 0x802D17C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x802D17CC: b           L_802D17FC
    // 0x802D17D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D17FC;
    // 0x802D17D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D17D4:
    // 0x802D17D4: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x802D17D8: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x802D17DC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802D17E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D17E4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802D17E8: nop

    // 0x802D17EC: bc1f        L_802D17FC
    if (!c1cs) {
        // 0x802D17F0: nop
    
            goto L_802D17FC;
    }
    // 0x802D17F0: nop

    // 0x802D17F4: b           L_802D17FC
    // 0x802D17F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802D17FC;
    // 0x802D17F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D17FC:
    // 0x802D17FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1804: jr          $ra
    // 0x802D1808: nop

    return;
    // 0x802D1808: nop

;}
RECOMP_FUNC void D_802ECCF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECD78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ECD7C: bne         $a0, $zero, L_802ECD94
    if (ctx->r4 != 0) {
        // 0x802ECD80: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802ECD94;
    }
    // 0x802ECD80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ECD84: jal         0x802C67EC
    // 0x802ECD88: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ECD88: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802ECD8C: beq         $v0, $zero, L_802ECDE8
    if (ctx->r2 == 0) {
        // 0x802ECD90: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802ECDE8;
    }
    // 0x802ECD90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802ECD94:
    // 0x802ECD94: jal         0x8031C47C
    // 0x802ECD98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ECD98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802ECD9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ECDA0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802ECDA4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ECDA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ECDAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ECDB0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802ECDB4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802ECDB8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802ECDBC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x802ECDC0: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802ECDC4: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802ECDC8: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802ECDCC: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x802ECDD0: sh          $t8, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r24;
    // 0x802ECDD4: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802ECDD8: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802ECDDC: jal         0x8031D554
    // 0x802ECDE0: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031D554(rdram, ctx);
        goto after_2;
    // 0x802ECDE0: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802ECDE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802ECDE8:
    // 0x802ECDE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ECDEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ECDF0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802ECDF4: jr          $ra
    // 0x802ECDF8: nop

    return;
    // 0x802ECDF8: nop

;}
RECOMP_FUNC void D_80245650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245650: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80245654: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80245658: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024565C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80245660: addiu       $v0, $sp, 0x38
    ctx->r2 = ADD32(ctx->r29, 0X38);
    // 0x80245664: addiu       $v1, $sp, 0x58
    ctx->r3 = ADD32(ctx->r29, 0X58);
L_80245668:
    // 0x80245668: lbu         $t6, 0x65($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X65);
    // 0x8024566C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80245670: sb          $t6, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r14;
    // 0x80245674: lbu         $t7, 0x65($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X65);
    // 0x80245678: nop

    // 0x8024567C: sb          $t7, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r15;
    // 0x80245680: lbu         $t8, 0x65($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X65);
    // 0x80245684: nop

    // 0x80245688: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x8024568C: lbu         $t9, 0x65($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X65);
    // 0x80245690: bne         $v0, $v1, L_80245668
    if (ctx->r2 != ctx->r3) {
        // 0x80245694: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_80245668;
    }
    // 0x80245694: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
    // 0x80245698: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8024569C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x802456A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802456A4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x802456A8: jal         0x80246660
    // 0x802456AC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    static_3_80246660(rdram, ctx);
        goto after_0;
    // 0x802456AC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x802456B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802456B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802456B8: jr          $ra
    // 0x802456BC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x802456BC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void D_802CEE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CEEEC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802CEEF0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802CEEF4: jr          $ra
    // 0x802CEEF8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802CEEF8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802B7870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B78F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B78F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B78F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B78FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802B7900: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802B7904: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7908: addiu       $s0, $a0, 0xC98
    ctx->r16 = ADD32(ctx->r4, 0XC98);
    // 0x802B790C: beql        $v1, $zero, L_802B79E0
    if (ctx->r3 == 0) {
        // 0x802B7910: sltu        $a0, $zero, $v1
        ctx->r4 = 0 < ctx->r3 ? 1 : 0;
            goto L_802B79E0;
    }
    goto skip_0;
    // 0x802B7910: sltu        $a0, $zero, $v1
    ctx->r4 = 0 < ctx->r3 ? 1 : 0;
    skip_0:
    // 0x802B7914: jal         0x803034FC
    // 0x802B7918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_803034FC(rdram, ctx);
        goto after_0;
    // 0x802B7918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802B791C: jal         0x80318804
    // 0x802B7920: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_80318804(rdram, ctx);
        goto after_1;
    // 0x802B7920: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x802B7924: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B7928: bne         $v0, $at, L_802B797C
    if (ctx->r2 != ctx->r1) {
        // 0x802B792C: lbu         $t7, 0x27($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X27);
            goto L_802B797C;
    }
    // 0x802B792C: lbu         $t7, 0x27($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X27);
    // 0x802B7930: beq         $t7, $zero, L_802B7954
    if (ctx->r15 == 0) {
        // 0x802B7934: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802B7954;
    }
    // 0x802B7934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B7938: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x802B793C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7940: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x802B7944: jal         0x803034A8
    // 0x802B7948: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_803034A8(rdram, ctx);
        goto after_2;
    // 0x802B7948: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x802B794C: b           L_802B79CC
    // 0x802B7950: nop

        goto L_802B79CC;
    // 0x802B7950: nop

L_802B7954:
    // 0x802B7954: jal         0x803034FC
    // 0x802B7958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_803034FC(rdram, ctx);
        goto after_3;
    // 0x802B7958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802B795C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x802B7960: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B7968: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x802B796C: jal         0x803034A8
    // 0x802B7970: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_803034A8(rdram, ctx);
        goto after_4;
    // 0x802B7970: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_4:
    // 0x802B7974: b           L_802B79CC
    // 0x802B7978: nop

        goto L_802B79CC;
    // 0x802B7978: nop

L_802B797C:
    // 0x802B797C: jal         0x80318804
    // 0x802B7980: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_80318804(rdram, ctx);
        goto after_5;
    // 0x802B7980: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x802B7984: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B7988: bne         $v0, $at, L_802B79CC
    if (ctx->r2 != ctx->r1) {
        // 0x802B798C: lbu         $t8, 0x27($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X27);
            goto L_802B79CC;
    }
    // 0x802B798C: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x802B7990: beq         $t8, $zero, L_802B79B8
    if (ctx->r24 == 0) {
        // 0x802B7994: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802B79B8;
    }
    // 0x802B7994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B7998: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x802B799C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B79A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B79A4: addiu       $a1, $zero, 0x6B
    ctx->r5 = ADD32(0, 0X6B);
    // 0x802B79A8: jal         0x803034A8
    // 0x802B79AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_803034A8(rdram, ctx);
        goto after_6;
    // 0x802B79AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_6:
    // 0x802B79B0: b           L_802B79CC
    // 0x802B79B4: nop

        goto L_802B79CC;
    // 0x802B79B4: nop

L_802B79B8:
    // 0x802B79B8: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x802B79BC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B79C0: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    // 0x802B79C4: jal         0x803034A8
    // 0x802B79C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_803034A8(rdram, ctx);
        goto after_7;
    // 0x802B79C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_7:
L_802B79CC:
    // 0x802B79CC: jal         0x80303578
    // 0x802B79D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80303578(rdram, ctx);
        goto after_8;
    // 0x802B79D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802B79D4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x802B79D8: lbu         $v1, 0x968($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X968);
    // 0x802B79DC: sltu        $a0, $zero, $v1
    ctx->r4 = 0 < ctx->r3 ? 1 : 0;
L_802B79E0:
    // 0x802B79E0: beql        $a0, $zero, L_802B79FC
    if (ctx->r4 == 0) {
        // 0x802B79E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B79FC;
    }
    goto skip_1;
    // 0x802B79E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x802B79E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802B79EC: jal         0x80303578
    // 0x802B79F0: addiu       $a0, $a0, 0xC98
    ctx->r4 = ADD32(ctx->r4, 0XC98);
    static_3_80303578(rdram, ctx);
        goto after_9;
    // 0x802B79F0: addiu       $a0, $a0, 0xC98
    ctx->r4 = ADD32(ctx->r4, 0XC98);
    after_9:
    // 0x802B79F4: sltu        $a0, $zero, $v0
    ctx->r4 = 0 < ctx->r2 ? 1 : 0;
    // 0x802B79F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B79FC:
    // 0x802B79FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B7A00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B7A04: jr          $ra
    // 0x802B7A08: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    return;
    // 0x802B7A08: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
;}
RECOMP_FUNC void D_802D363C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D36BC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802D36C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802D36C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802D36C8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802D36CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D36D0: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x802D36D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D36D8: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802D36DC: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
    // 0x802D36E0: sb          $zero, 0x1404($a0)
    MEM_B(0X1404, ctx->r4) = 0;
    // 0x802D36E4: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x802D36E8: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x802D36EC: jal         0x80224CA8
    // 0x802D36F0: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802D36F0: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    after_0:
    // 0x802D36F4: jal         0x80224CA8
    // 0x802D36F8: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802D36F8: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_1:
    // 0x802D36FC: jal         0x8030A9AC
    // 0x802D3700: nop

    static_3_8030A9AC(rdram, ctx);
        goto after_2;
    // 0x802D3700: nop

    after_2:
    // 0x802D3704: jal         0x80224CA8
    // 0x802D3708: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802D3708: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_3:
    // 0x802D370C: jal         0x80224CA8
    // 0x802D3710: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802D3710: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_4:
    // 0x802D3714: jal         0x80224CA8
    // 0x802D3718: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x802D3718: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_5:
    // 0x802D371C: jal         0x80224CA8
    // 0x802D3720: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x802D3720: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_6:
    // 0x802D3724: jal         0x80224CA8
    // 0x802D3728: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    static_3_80224CA8(rdram, ctx);
        goto after_7;
    // 0x802D3728: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_7:
    // 0x802D372C: jal         0x80224CA8
    // 0x802D3730: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    static_3_80224CA8(rdram, ctx);
        goto after_8;
    // 0x802D3730: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_8:
    // 0x802D3734: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D3738: jal         0x80205AA0
    // 0x802D373C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_9;
    // 0x802D373C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x802D3740: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D3744: jal         0x80205EBC
    // 0x802D3748: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    static_3_80205EBC(rdram, ctx);
        goto after_10;
    // 0x802D3748: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_10:
    // 0x802D374C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802D3750: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x802D3754: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D3758: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802D375C: jal         0x80205E0C
    // 0x802D3760: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    static_3_80205E0C(rdram, ctx);
        goto after_11;
    // 0x802D3760: sw          $t7, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r15;
    after_11:
    // 0x802D3764: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D3768: jal         0x802B0078
    // 0x802D376C: lui         $a1, 0x43AA
    ctx->r5 = S32(0X43AA << 16);
    static_3_802B0078(rdram, ctx);
        goto after_12;
    // 0x802D376C: lui         $a1, 0x43AA
    ctx->r5 = S32(0X43AA << 16);
    after_12:
    // 0x802D3770: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802D3774: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802D3778: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x802D377C: sb          $t8, 0x716C($v0)
    MEM_B(0X716C, ctx->r2) = ctx->r24;
    // 0x802D3780: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802D3784: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802D3788: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D378C: sb          $t9, 0x716D($v0)
    MEM_B(0X716D, ctx->r2) = ctx->r25;
    // 0x802D3790: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802D3794: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802D3798: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802D379C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D37A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D37A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D37A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D37AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802D37B0: jal         0x8030890C
    // 0x802D37B4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_13;
    // 0x802D37B4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x802D37B8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802D37BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D37C0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802D37C4: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802D37C8: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x802D37CC: swc1        $f8, 0x7160($v0)
    MEM_W(0X7160, ctx->r2) = ctx->f8.u32l;
    // 0x802D37D0: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802D37D4: addiu       $v1, $sp, 0x34
    ctx->r3 = ADD32(ctx->r29, 0X34);
    // 0x802D37D8: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802D37DC: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x802D37E0: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x802D37E4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x802D37E8: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x802D37EC: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x802D37F0: sw          $at, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r1;
    // 0x802D37F4: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x802D37F8: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x802D37FC: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x802D3800: sw          $at, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r1;
    // 0x802D3804: lw          $t3, 0x14($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X14);
    // 0x802D3808: sw          $t3, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r11;
    // 0x802D380C: lw          $at, 0x18($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X18);
    // 0x802D3810: sw          $at, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r1;
    // 0x802D3814: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802D3818: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D381C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802D3820: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x802D3824: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802D3828: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802D382C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D3830: jal         0x80303778
    // 0x802D3834: nop

    static_3_80303778(rdram, ctx);
        goto after_14;
    // 0x802D3834: nop

    after_14:
    // 0x802D3838: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D383C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D3840: jal         0x80309B88
    // 0x802D3844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309B88(rdram, ctx);
        goto after_15;
    // 0x802D3844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x802D3848: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802D384C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802D3850: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802D3854: jr          $ra
    // 0x802D3858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D3858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802AB7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB864: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AB868: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AB86C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AB870: lbu         $t6, 0x1D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1D);
    // 0x802AB874: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AB878: bne         $t6, $zero, L_802AB894
    if (ctx->r14 != 0) {
        // 0x802AB87C: lui         $t7, 0x0
        ctx->r15 = S32(0X0 << 16);
            goto L_802AB894;
    }
    // 0x802AB87C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802AB880: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802AB884: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802AB888: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802AB88C: bne         $t7, $at, L_802AB89C
    if (ctx->r15 != ctx->r1) {
        // 0x802AB890: nop
    
            goto L_802AB89C;
    }
    // 0x802AB890: nop

L_802AB894:
    // 0x802AB894: b           L_802AB89C
    // 0x802AB898: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
        goto L_802AB89C;
    // 0x802AB898: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
L_802AB89C:
    // 0x802AB89C: jal         0x8021ACB0
    // 0x802AB8A0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AB8A0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x802AB8A4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AB8A8: jal         0x8021B838
    // 0x802AB8AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AB8AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AB8B0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802AB8B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AB8B8: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AB8BC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802AB8C0: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x802AB8C4: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AB8C8: lh          $t9, 0xB8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XB8);
    // 0x802AB8CC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802AB8D0: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x802AB8D4: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AB8D8: jalr        $t9
    // 0x802AB8DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AB8DC: nop

    after_2:
    // 0x802AB8E0: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802AB8E4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AB8E8: jal         0x802FD4B0
    // 0x802AB8EC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802AB8EC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_3:
    // 0x802AB8F0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB8F4: jal         0x802FD498
    // 0x802AB8F8: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802AB8F8: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802AB8FC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB900: jal         0x802FD4A4
    // 0x802AB904: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802AB904: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    after_5:
    // 0x802AB908: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB90C: jal         0x802FD480
    // 0x802AB910: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802AB910: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    after_6:
    // 0x802AB914: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB918: jal         0x802FD48C
    // 0x802AB91C: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802AB91C: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    after_7:
    // 0x802AB920: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x802AB924: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802AB928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AB92C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AB930: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AB934: jal         0x80317194
    // 0x802AB938: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802AB938: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802AB93C: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
    // 0x802AB940: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802AB944: sw          $v0, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r2;
    // 0x802AB948: sw          $v0, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r2;
    // 0x802AB94C: sw          $v0, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r2;
    // 0x802AB950: bne         $t1, $zero, L_802AB968
    if (ctx->r9 != 0) {
        // 0x802AB954: sw          $v0, 0x2AC($s0)
        MEM_W(0X2AC, ctx->r16) = ctx->r2;
            goto L_802AB968;
    }
    // 0x802AB954: sw          $v0, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r2;
    // 0x802AB958: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802AB95C: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802AB960: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802AB964: bne         $t2, $at, L_802AB980
    if (ctx->r10 != ctx->r1) {
        // 0x802AB968: addiu       $t3, $zero, 0x28
        ctx->r11 = ADD32(0, 0X28);
            goto L_802AB980;
    }
L_802AB968:
    // 0x802AB968: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x802AB96C: addiu       $t4, $zero, 0x2A
    ctx->r12 = ADD32(0, 0X2A);
    // 0x802AB970: addiu       $t5, $zero, 0x29
    ctx->r13 = ADD32(0, 0X29);
    // 0x802AB974: sw          $t3, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r11;
    // 0x802AB978: sw          $t4, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r12;
    // 0x802AB97C: sw          $t5, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r13;
L_802AB980:
    // 0x802AB980: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AB984: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AB988: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x802AB98C: jal         0x802D51DC
    // 0x802AB990: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802AB990: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    after_9:
    // 0x802AB994: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802AB998: jal         0x8022970C
    // 0x802AB99C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_10;
    // 0x802AB99C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_10:
    // 0x802AB9A0: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802AB9A4: jal         0x8022970C
    // 0x802AB9A8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_11;
    // 0x802AB9A8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_11:
    // 0x802AB9AC: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AB9B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AB9B4: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AB9B8: jal         0x802C4A20
    // 0x802AB9BC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802AB9BC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802AB9C0: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AB9C4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802AB9C8: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AB9CC: jal         0x802C4A20
    // 0x802AB9D0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_13;
    // 0x802AB9D0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_13:
    // 0x802AB9D4: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AB9D8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802AB9DC: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802AB9E0: jal         0x802C4A20
    // 0x802AB9E4: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_14;
    // 0x802AB9E4: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_14:
    // 0x802AB9E8: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AB9EC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x802AB9F0: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    // 0x802AB9F4: jal         0x802C4A20
    // 0x802AB9F8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_15;
    // 0x802AB9F8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_15:
    // 0x802AB9FC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ABA00: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ABA04: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x802ABA08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ABA0C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802ABA10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802ABA14: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802ABA18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802ABA1C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802ABA20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802ABA24: lui         $a1, 0xC082
    ctx->r5 = S32(0XC082 << 16);
    // 0x802ABA28: lui         $a2, 0xC068
    ctx->r6 = S32(0XC068 << 16);
    // 0x802ABA2C: lui         $a3, 0xBF41
    ctx->r7 = S32(0XBF41 << 16);
    // 0x802ABA30: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x802ABA34: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x802ABA38: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802ABA3C: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802ABA40: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802ABA44: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
    // 0x802ABA48: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABA4C: ori         $a3, $a3, 0x47AE
    ctx->r7 = ctx->r7 | 0X47AE;
    // 0x802ABA50: ori         $a2, $a2, 0xD4FE
    ctx->r6 = ctx->r6 | 0XD4FE;
    // 0x802ABA54: jal         0x8022A0D0
    // 0x802ABA58: ori         $a1, $a1, 0xC083
    ctx->r5 = ctx->r5 | 0XC083;
    static_3_8022A0D0(rdram, ctx);
        goto after_16;
    // 0x802ABA58: ori         $a1, $a1, 0xC083
    ctx->r5 = ctx->r5 | 0XC083;
    after_16:
    // 0x802ABA5C: lui         $a1, 0x4082
    ctx->r5 = S32(0X4082 << 16);
    // 0x802ABA60: lui         $a2, 0xC068
    ctx->r6 = S32(0XC068 << 16);
    // 0x802ABA64: lui         $a3, 0xBF41
    ctx->r7 = S32(0XBF41 << 16);
    // 0x802ABA68: ori         $a3, $a3, 0x47AE
    ctx->r7 = ctx->r7 | 0X47AE;
    // 0x802ABA6C: ori         $a2, $a2, 0xD4FE
    ctx->r6 = ctx->r6 | 0XD4FE;
    // 0x802ABA70: ori         $a1, $a1, 0xC083
    ctx->r5 = ctx->r5 | 0XC083;
    // 0x802ABA74: jal         0x8022A0D0
    // 0x802ABA78: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802ABA78: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_17:
    // 0x802ABA7C: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802ABA80: jal         0x803169A0
    // 0x802ABA84: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_18;
    // 0x802ABA84: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x802ABA88: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802ABA8C: jal         0x803169A0
    // 0x802ABA90: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    static_3_803169A0(rdram, ctx);
        goto after_19;
    // 0x802ABA90: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_19:
    // 0x802ABA94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802ABA98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802ABA9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802ABAA0: jr          $ra
    // 0x802ABAA4: nop

    return;
    // 0x802ABAA4: nop

;}
RECOMP_FUNC void D_8027ADE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AE58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027AE5C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027AE60: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027AE64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027AE68: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027AE6C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027AE70: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027AE74: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027AE78: addiu       $a1, $t6, 0x6FB8
    ctx->r5 = ADD32(ctx->r14, 0X6FB8);
    // 0x8027AE7C: addiu       $a0, $a0, 0x6F94
    ctx->r4 = ADD32(ctx->r4, 0X6F94);
    // 0x8027AE80: addiu       $a3, $t6, 0x6FB9
    ctx->r7 = ADD32(ctx->r14, 0X6FB9);
    // 0x8027AE84: jal         0x802A2900
    // 0x8027AE88: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    static_3_802A2900(rdram, ctx);
        goto after_0;
    // 0x8027AE88: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x8027AE8C: beq         $v0, $zero, L_8027AED8
    if (ctx->r2 == 0) {
        // 0x8027AE90: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8027AED8;
    }
    // 0x8027AE90: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8027AE94: lw          $v0, 0x1A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A0);
    // 0x8027AE98: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027AE9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027AEA0: lh          $t8, 0x70($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X70);
    // 0x8027AEA4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8027AEA8: lw          $t9, 0x74($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X74);
    // 0x8027AEAC: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    // 0x8027AEB0: jalr        $t9
    // 0x8027AEB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8027AEB4: nop

    after_1:
    // 0x8027AEB8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8027AEBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027AEC0: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x8027AEC4: lw          $t9, 0xAC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XAC);
    // 0x8027AEC8: lh          $t0, 0xA8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XA8);
    // 0x8027AECC: jalr        $t9
    // 0x8027AED0: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027AED0: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    after_2:
    // 0x8027AED4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_8027AED8:
    // 0x8027AED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027AEDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027AEE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8027AEE4: jr          $ra
    // 0x8027AEE8: nop

    return;
    // 0x8027AEE8: nop

;}
RECOMP_FUNC void D_80219098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80219098: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8021909C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802190A0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802190A4: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x802190A8: mul.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802190AC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802190B0: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x802190B4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x802190B8: sh          $t6, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r14;
    // 0x802190BC: lwc1        $f0, 0x30($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X30);
    // 0x802190C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802190C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802190C8: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802190CC: mul.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x802190D0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802190D4: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x802190D8: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x802190DC: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x802190E0: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x802190E4: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x802190E8: lwc1        $f16, 0x34($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X34);
    // 0x802190EC: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802190F0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x802190F4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802190F8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x802190FC: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219100: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80219104: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x80219108: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021910C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80219110: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x80219114: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80219118: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8021911C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80219120: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80219124: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219128: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021912C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80219130: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80219134: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80219138: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021913C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80219140: addiu       $a2, $sp, 0x52
    ctx->r6 = ADD32(ctx->r29, 0X52);
    // 0x80219144: div.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80219148: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8021914C: div.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x80219150: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80219154: jal         0x8023288C
    // 0x80219158: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    static_3_8023288C(rdram, ctx);
        goto after_0;
    // 0x80219158: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8021915C: lh          $t8, 0x50($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X50);
    // 0x80219160: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x80219164: lh          $a2, 0x4E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X4E);
    // 0x80219168: bltz        $t8, L_802191AC
    if (SIGNED(ctx->r24) < 0) {
        // 0x8021916C: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_802191AC;
    }
    // 0x8021916C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80219170: lbu         $a0, 0x48($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X48);
    // 0x80219174: jal         0x802326D0
    // 0x80219178: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802326D0(rdram, ctx);
        goto after_1;
    // 0x80219178: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8021917C: lhu         $t0, 0x52($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X52);
    // 0x80219180: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x80219184: lh          $a1, 0x50($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X50);
    // 0x80219188: and         $t1, $t0, $v0
    ctx->r9 = ctx->r8 & ctx->r2;
    // 0x8021918C: sh          $t1, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r9;
    // 0x80219190: lh          $a2, 0x4E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X4E);
    // 0x80219194: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80219198: jal         0x802326D0
    // 0x8021919C: lbu         $a0, 0x48($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X48);
    static_3_802326D0(rdram, ctx);
        goto after_2;
    // 0x8021919C: lbu         $a0, 0x48($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X48);
    after_2:
    // 0x802191A0: lhu         $t3, 0x52($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X52);
    // 0x802191A4: and         $t4, $t3, $v0
    ctx->r12 = ctx->r11 & ctx->r2;
    // 0x802191A8: sh          $t4, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r12;
L_802191AC:
    // 0x802191AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802191B0: lhu         $v0, 0x52($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X52);
    // 0x802191B4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802191B8: jr          $ra
    // 0x802191BC: nop

    return;
    // 0x802191BC: nop

;}
RECOMP_FUNC void D_802B6E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B6EDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B6EE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B6EE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B6EE8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802B6EEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B6EF0: jal         0x80318C7C
    // 0x802B6EF4: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    static_3_80318C7C(rdram, ctx);
        goto after_0;
    // 0x802B6EF4: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    after_0:
    // 0x802B6EF8: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x802B6EFC: bnel        $t6, $zero, L_802B6FB0
    if (ctx->r14 != 0) {
        // 0x802B6F00: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B6FB0;
    }
    goto skip_0;
    // 0x802B6F00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802B6F04: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802B6F08: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802B6F0C: beql        $a0, $at, L_802B6F28
    if (ctx->r4 == ctx->r1) {
        // 0x802B6F10: lw          $v0, 0x368($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X368);
            goto L_802B6F28;
    }
    goto skip_1;
    // 0x802B6F10: lw          $v0, 0x368($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X368);
    skip_1:
    // 0x802B6F14: jal         0x8021BAE0
    // 0x802B6F18: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x802B6F18: nop

    after_1:
    // 0x802B6F1C: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x802B6F20: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x802B6F24: lw          $v0, 0x368($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X368);
L_802B6F28:
    // 0x802B6F28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B6F2C: lh          $t8, 0x50($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X50);
    // 0x802B6F30: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802B6F34: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802B6F38: jalr        $t9
    // 0x802B6F3C: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802B6F3C: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    after_2:
    // 0x802B6F40: lw          $v0, 0x458($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X458);
    // 0x802B6F44: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B6F48: lh          $t0, 0x50($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X50);
    // 0x802B6F4C: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802B6F50: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x802B6F54: jalr        $t9
    // 0x802B6F58: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802B6F58: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    after_3:
    // 0x802B6F5C: lw          $a1, 0x770($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X770);
    // 0x802B6F60: beql        $a1, $zero, L_802B6F88
    if (ctx->r5 == 0) {
        // 0x802B6F64: lw          $a1, 0x774($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X774);
            goto L_802B6F88;
    }
    goto skip_2;
    // 0x802B6F64: lw          $a1, 0x774($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X774);
    skip_2:
    // 0x802B6F68: lw          $v1, 0x100($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X100);
    // 0x802B6F6C: sh          $zero, 0x1B4($a1)
    MEM_H(0X1B4, ctx->r5) = 0;
    // 0x802B6F70: lh          $t1, 0x78($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X78);
    // 0x802B6F74: lw          $t9, 0x7C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X7C);
    // 0x802B6F78: addu        $a0, $t1, $a1
    ctx->r4 = ADD32(ctx->r9, ctx->r5);
    // 0x802B6F7C: jalr        $t9
    // 0x802B6F80: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802B6F80: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    after_4:
    // 0x802B6F84: lw          $a1, 0x774($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X774);
L_802B6F88:
    // 0x802B6F88: beql        $a1, $zero, L_802B6FB0
    if (ctx->r5 == 0) {
        // 0x802B6F8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B6FB0;
    }
    goto skip_3;
    // 0x802B6F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x802B6F90: lw          $v1, 0x100($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X100);
    // 0x802B6F94: sh          $zero, 0x1B4($a1)
    MEM_H(0X1B4, ctx->r5) = 0;
    // 0x802B6F98: lh          $t2, 0x78($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X78);
    // 0x802B6F9C: lw          $t9, 0x7C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X7C);
    // 0x802B6FA0: addu        $a0, $t2, $a1
    ctx->r4 = ADD32(ctx->r10, ctx->r5);
    // 0x802B6FA4: jalr        $t9
    // 0x802B6FA8: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802B6FA8: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    after_5:
    // 0x802B6FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B6FB0:
    // 0x802B6FB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B6FB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B6FB8: jr          $ra
    // 0x802B6FBC: nop

    return;
    // 0x802B6FBC: nop

;}
RECOMP_FUNC void D_802EA584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA604: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802EA608: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802EA60C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802EA610: lh          $a1, 0x0($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X0);
    // 0x802EA614: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802EA618: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802EA61C: blez        $a1, L_802EA68C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802EA620: addiu       $t4, $zero, -0x2
        ctx->r12 = ADD32(0, -0X2);
            goto L_802EA68C;
    }
    // 0x802EA620: addiu       $t4, $zero, -0x2
    ctx->r12 = ADD32(0, -0X2);
    // 0x802EA624: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802EA628: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802EA62C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
L_802EA630:
    // 0x802EA630: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802EA634: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802EA638: bne         $a0, $t6, L_802EA66C
    if (ctx->r4 != ctx->r14) {
        // 0x802EA63C: sll         $t1, $a1, 2
        ctx->r9 = S32(ctx->r5 << 2);
            goto L_802EA66C;
    }
    // 0x802EA63C: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x802EA640: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x802EA644: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
    // 0x802EA648: lh          $a1, 0x0($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X0);
    // 0x802EA64C: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x802EA650: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802EA654: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802EA658: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x802EA65C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802EA660: addu        $a2, $t9, $t0
    ctx->r6 = ADD32(ctx->r25, ctx->r8);
    // 0x802EA664: b           L_802EA67C
    // 0x802EA668: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_802EA67C;
    // 0x802EA668: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_802EA66C:
    // 0x802EA66C: beq         $v0, $zero, L_802EA67C
    if (ctx->r2 == 0) {
        // 0x802EA670: addu        $a2, $t1, $t2
        ctx->r6 = ADD32(ctx->r9, ctx->r10);
            goto L_802EA67C;
    }
    // 0x802EA670: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    // 0x802EA674: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x802EA678: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_802EA67C:
    // 0x802EA67C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802EA680: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x802EA684: bnel        $at, $zero, L_802EA630
    if (ctx->r1 != 0) {
        // 0x802EA688: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_802EA630;
    }
    goto skip_0;
    // 0x802EA688: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_0:
L_802EA68C:
    // 0x802EA68C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EA690: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EA694: sh          $t4, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r12;
    // 0x802EA698: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x802EA69C: swc1        $f6, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f6.u32l;
    // 0x802EA6A0: jr          $ra
    // 0x802EA6A4: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802EA6A4: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802771A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277218: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x8027721C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80277220: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80277224: lw          $t6, 0x65B4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X65B4);
    // 0x80277228: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8027722C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80277230: bnel        $t6, $at, L_80277284
    if (ctx->r14 != ctx->r1) {
        // 0x80277234: lw          $v0, 0x4E18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X4E18);
            goto L_80277284;
    }
    goto skip_0;
    // 0x80277234: lw          $v0, 0x4E18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4E18);
    skip_0:
    // 0x80277238: jal         0x8022970C
    // 0x8027723C: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x8027723C: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    after_0:
    // 0x80277240: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x80277244: lw          $a1, 0x4E2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4E2C);
    // 0x80277248: lw          $a2, 0x4E30($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4E30);
    // 0x8027724C: jal         0x8022A0D0
    // 0x80277250: lw          $a3, 0x4E34($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4E34);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x80277250: lw          $a3, 0x4E34($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4E34);
    after_1:
    // 0x80277254: lw          $v0, 0x4FDC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4FDC);
    // 0x80277258: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    // 0x8027725C: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x80277260: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x80277264: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x80277268: jalr        $t9
    // 0x8027726C: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027726C: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_2:
    // 0x80277270: addiu       $a0, $s0, 0x65B8
    ctx->r4 = ADD32(ctx->r16, 0X65B8);
    // 0x80277274: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    // 0x80277278: jal         0x8022A614
    // 0x8027727C: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    static_3_8022A614(rdram, ctx);
        goto after_3;
    // 0x8027727C: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    after_3:
    // 0x80277280: lw          $v0, 0x4E18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4E18);
L_80277284:
    // 0x80277284: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80277288: bnel        $v0, $at, L_802772E0
    if (ctx->r2 != ctx->r1) {
        // 0x8027728C: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_802772E0;
    }
    goto skip_1;
    // 0x8027728C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    skip_1:
    // 0x80277290: jal         0x8022970C
    // 0x80277294: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x80277294: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x80277298: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8027729C: lw          $a1, 0x4E20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4E20);
    // 0x802772A0: lw          $a2, 0x4E24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4E24);
    // 0x802772A4: jal         0x8022A0D0
    // 0x802772A8: lw          $a3, 0x4E28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4E28);
    static_3_8022A0D0(rdram, ctx);
        goto after_5;
    // 0x802772A8: lw          $a3, 0x4E28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4E28);
    after_5:
    // 0x802772AC: lw          $v1, 0x4E1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4E1C);
    // 0x802772B0: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x802772B4: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802772B8: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802772BC: lh          $t8, 0x60($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X60);
    // 0x802772C0: jalr        $t9
    // 0x802772C4: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802772C4: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    after_6:
    // 0x802772C8: addiu       $a0, $s0, 0x4DD4
    ctx->r4 = ADD32(ctx->r16, 0X4DD4);
    // 0x802772CC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x802772D0: jal         0x8022A614
    // 0x802772D4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    static_3_8022A614(rdram, ctx);
        goto after_7;
    // 0x802772D4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_7:
    // 0x802772D8: lw          $v0, 0x4E18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4E18);
    // 0x802772DC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_802772E0:
    // 0x802772E0: beq         $v0, $at, L_802772F4
    if (ctx->r2 == ctx->r1) {
        // 0x802772E4: addiu       $a1, $s0, 0x4DD4
        ctx->r5 = ADD32(ctx->r16, 0X4DD4);
            goto L_802772F4;
    }
    // 0x802772E4: addiu       $a1, $s0, 0x4DD4
    ctx->r5 = ADD32(ctx->r16, 0X4DD4);
    // 0x802772E8: lw          $a0, 0x4E1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4E1C);
    // 0x802772EC: jal         0x803176AC
    // 0x802772F0: addiu       $a2, $s0, 0x4E18
    ctx->r6 = ADD32(ctx->r16, 0X4E18);
    static_3_803176AC(rdram, ctx);
        goto after_8;
    // 0x802772F0: addiu       $a2, $s0, 0x4E18
    ctx->r6 = ADD32(ctx->r16, 0X4E18);
    after_8:
L_802772F4:
    // 0x802772F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802772F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802772FC: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    // 0x80277300: jr          $ra
    // 0x80277304: nop

    return;
    // 0x80277304: nop

;}
RECOMP_FUNC void D_8020806C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020806C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80208070: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80208074: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80208078: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8020807C: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x80208080: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80208084: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80208088: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8020808C: sub.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x80208090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80208094: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80208098: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8020809C: lwc1        $f8, 0x34($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X34);
    // 0x802080A0: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802080A4: lwc1        $f8, 0x38($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X38);
    // 0x802080A8: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802080AC: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x802080B0: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802080B4: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802080B8: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x802080BC: nop

    // 0x802080C0: bc1f        L_802080D0
    if (!c1cs) {
        // 0x802080C4: nop
    
            goto L_802080D0;
    }
    // 0x802080C4: nop

    // 0x802080C8: jr          $ra
    // 0x802080CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802080CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802080D0:
    // 0x802080D0: jr          $ra
    // 0x802080D4: nop

    return;
    // 0x802080D4: nop

;}
RECOMP_FUNC void D_8029630C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029638C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80296390: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80296394: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80296398: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8029639C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802963A0: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802963A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802963A8: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x802963AC: beq         $v0, $zero, L_802963E0
    if (ctx->r2 == 0) {
        // 0x802963B0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802963E0;
    }
    // 0x802963B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802963B4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_802963B8:
    // 0x802963B8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x802963BC: beql        $v1, $zero, L_802963D0
    if (ctx->r3 == 0) {
        // 0x802963C0: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_802963D0;
    }
    goto skip_0;
    // 0x802963C0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x802963C4: jalr        $v1
    // 0x802963C8: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x802963C8: nop

    after_0:
    // 0x802963CC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_802963D0:
    // 0x802963D0: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x802963D4: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x802963D8: bnel        $v0, $zero, L_802963B8
    if (ctx->r2 != 0) {
        // 0x802963DC: addu        $s0, $s0, $v0
        ctx->r16 = ADD32(ctx->r16, ctx->r2);
            goto L_802963B8;
    }
    goto skip_1;
    // 0x802963DC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    skip_1:
L_802963E0:
    // 0x802963E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802963E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802963E8: sw          $s1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r17;
    // 0x802963EC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802963F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802963F4: jr          $ra
    // 0x802963F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802963F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802DE140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DE1C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DE1C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DE1C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DE1CC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802DE1D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802DE1D4: lwc1        $f0, 0x1BF0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1BF0);
    // 0x802DE1D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DE1DC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x802DE1E0: nop

    // 0x802DE1E4: bc1fl       L_802DE1FC
    if (!c1cs) {
        // 0x802DE1E8: sb          $zero, 0x1BF4($s0)
        MEM_B(0X1BF4, ctx->r16) = 0;
            goto L_802DE1FC;
    }
    goto skip_0;
    // 0x802DE1E8: sb          $zero, 0x1BF4($s0)
    MEM_B(0X1BF4, ctx->r16) = 0;
    skip_0:
    // 0x802DE1EC: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802DE1F0: b           L_802DE1FC
    // 0x802DE1F4: swc1        $f4, 0x1BF0($a0)
    MEM_W(0X1BF0, ctx->r4) = ctx->f4.u32l;
        goto L_802DE1FC;
    // 0x802DE1F4: swc1        $f4, 0x1BF0($a0)
    MEM_W(0X1BF0, ctx->r4) = ctx->f4.u32l;
    // 0x802DE1F8: sb          $zero, 0x1BF4($s0)
    MEM_B(0X1BF4, ctx->r16) = 0;
L_802DE1FC:
    // 0x802DE1FC: lbu         $t6, 0x1BF4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1BF4);
    // 0x802DE200: beql        $t6, $zero, L_802DE22C
    if (ctx->r14 == 0) {
        // 0x802DE204: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802DE22C;
    }
    goto skip_1;
    // 0x802DE204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x802DE208: lwc1        $f6, 0x1BF0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1BF0);
    // 0x802DE20C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802DE210: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802DE214: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802DE218: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802DE21C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802DE220: jal         0x80309DEC
    // 0x802DE224: nop

    static_3_80309DEC(rdram, ctx);
        goto after_0;
    // 0x802DE224: nop

    after_0:
    // 0x802DE228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802DE22C:
    // 0x802DE22C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DE230: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802DE234: jr          $ra
    // 0x802DE238: nop

    return;
    // 0x802DE238: nop

;}
RECOMP_FUNC void D_802D8FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9020: jr          $ra
    // 0x802D9024: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    return;
    // 0x802D9024: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
;}
RECOMP_FUNC void D_802EDA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDA88: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802EDA8C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EDA90: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802EDA94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EDA98: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802EDA9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EDAA0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802EDAA4: addiu       $t6, $zero, 0x1C
    ctx->r14 = ADD32(0, 0X1C);
    // 0x802EDAA8: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802EDAAC: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802EDAB0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EDAB4: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EDAB8: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802EDABC: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EDAC0: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EDAC4: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EDAC8: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EDACC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EDAD0: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EDAD4: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EDAD8: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EDADC: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802EDAE0: swc1        $f6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f6.u32l;
    // 0x802EDAE4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EDAE8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802EDAEC: sb          $t0, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r8;
    // 0x802EDAF0: jr          $ra
    // 0x802EDAF4: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802EDAF4: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_80294C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294CB0: jr          $ra
    // 0x80294CB4: lw          $v0, 0x18C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18C);
    return;
    // 0x80294CB4: lw          $v0, 0x18C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18C);
;}
RECOMP_FUNC void D_8022FF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FF78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FF7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FF80: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8022FF84: jal         0x8022FF90
    // 0x8022FF88: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_8022FF90(rdram, ctx);
        goto after_0;
    // 0x8022FF88: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8022FF8C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8022FF90: jal         0x8022FF90
    // 0x8022FF94: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_8022FF90(rdram, ctx);
        goto after_1;
    // 0x8022FF94: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022FF98: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FF9C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8022FFA0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8022FFA4: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022FFA8: beq         $at, $zero, L_8022FFB8
    if (ctx->r1 == 0) {
        // 0x8022FFAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022FFB8;
    }
    // 0x8022FFAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FFB0: b           L_8023010C
    // 0x8022FFB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023010C;
    // 0x8022FFB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8022FFB8:
    // 0x8022FFB8: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8022FFBC: beq         $at, $zero, L_8022FFCC
    if (ctx->r1 == 0) {
        // 0x8022FFC0: nop
    
            goto L_8022FFCC;
    }
    // 0x8022FFC0: nop

    // 0x8022FFC4: b           L_8023010C
    // 0x8022FFC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023010C;
    // 0x8022FFC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022FFCC:
    // 0x8022FFCC: blez        $t0, L_80230108
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8022FFD0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80230108;
    }
    // 0x8022FFD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8022FFD4: andi        $v0, $t0, 0x3
    ctx->r2 = ctx->r8 & 0X3;
    // 0x8022FFD8: beq         $v0, $zero, L_80230028
    if (ctx->r2 == 0) {
        // 0x8022FFDC: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80230028;
    }
    // 0x8022FFDC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_8022FFE0:
    // 0x8022FFE0: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8022FFE4: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8022FFE8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022FFEC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FFF0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022FFF4: beql        $at, $zero, L_80230008
    if (ctx->r1 == 0) {
        // 0x8022FFF8: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80230008;
    }
    goto skip_0;
    // 0x8022FFF8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_0:
    // 0x8022FFFC: b           L_8023010C
    // 0x80230000: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023010C;
    // 0x80230000: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230004: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_80230008:
    // 0x80230008: beq         $at, $zero, L_80230018
    if (ctx->r1 == 0) {
        // 0x8023000C: nop
    
            goto L_80230018;
    }
    // 0x8023000C: nop

    // 0x80230010: b           L_8023010C
    // 0x80230014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023010C;
    // 0x80230014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230018:
    // 0x80230018: bne         $a3, $a0, L_8022FFE0
    if (ctx->r7 != ctx->r4) {
        // 0x8023001C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8022FFE0;
    }
    // 0x8023001C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80230020: beql        $a0, $t0, L_8023010C
    if (ctx->r4 == ctx->r8) {
        // 0x80230024: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8023010C;
    }
    goto skip_1;
    // 0x80230024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
L_80230028:
    // 0x80230028: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8023002C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80230030: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230034: beql        $at, $zero, L_80230048
    if (ctx->r1 == 0) {
        // 0x80230038: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80230048;
    }
    goto skip_2;
    // 0x80230038: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_2:
    // 0x8023003C: b           L_8023010C
    // 0x80230040: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023010C;
    // 0x80230040: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230044: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_80230048:
    // 0x80230048: beql        $at, $zero, L_8023005C
    if (ctx->r1 == 0) {
        // 0x8023004C: lbu         $v0, 0x1($a2)
        ctx->r2 = MEM_BU(ctx->r6, 0X1);
            goto L_8023005C;
    }
    goto skip_3;
    // 0x8023004C: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    skip_3:
    // 0x80230050: b           L_8023010C
    // 0x80230054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023010C;
    // 0x80230054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230058: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
L_8023005C:
    // 0x8023005C: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80230060: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80230064: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80230068: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023006C: beql        $at, $zero, L_80230080
    if (ctx->r1 == 0) {
        // 0x80230070: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80230080;
    }
    goto skip_4;
    // 0x80230070: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_4:
    // 0x80230074: b           L_8023010C
    // 0x80230078: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023010C;
    // 0x80230078: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023007C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_80230080:
    // 0x80230080: beq         $at, $zero, L_80230090
    if (ctx->r1 == 0) {
        // 0x80230084: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80230090;
    }
    // 0x80230084: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80230088: b           L_8023010C
    // 0x8023008C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023010C;
    // 0x8023008C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230090:
    // 0x80230090: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    // 0x80230094: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80230098: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023009C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802300A0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802300A4: beql        $at, $zero, L_802300B8
    if (ctx->r1 == 0) {
        // 0x802300A8: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_802300B8;
    }
    goto skip_5;
    // 0x802300A8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_5:
    // 0x802300AC: b           L_8023010C
    // 0x802300B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023010C;
    // 0x802300B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802300B4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_802300B8:
    // 0x802300B8: beql        $at, $zero, L_802300CC
    if (ctx->r1 == 0) {
        // 0x802300BC: lbu         $v0, 0x1($a2)
        ctx->r2 = MEM_BU(ctx->r6, 0X1);
            goto L_802300CC;
    }
    goto skip_6;
    // 0x802300BC: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    skip_6:
    // 0x802300C0: b           L_8023010C
    // 0x802300C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023010C;
    // 0x802300C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802300C8: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
L_802300CC:
    // 0x802300CC: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x802300D0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802300D4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802300D8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802300DC: beq         $at, $zero, L_802300EC
    if (ctx->r1 == 0) {
        // 0x802300E0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_802300EC;
    }
    // 0x802300E0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802300E4: b           L_8023010C
    // 0x802300E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023010C;
    // 0x802300E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802300EC:
    // 0x802300EC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802300F0: beq         $at, $zero, L_80230100
    if (ctx->r1 == 0) {
        // 0x802300F4: nop
    
            goto L_80230100;
    }
    // 0x802300F4: nop

    // 0x802300F8: b           L_8023010C
    // 0x802300FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023010C;
    // 0x802300FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230100:
    // 0x80230100: bne         $a0, $t0, L_80230028
    if (ctx->r4 != ctx->r8) {
        // 0x80230104: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80230028;
    }
    // 0x80230104: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80230108:
    // 0x80230108: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8023010C:
    // 0x8023010C: jr          $ra
    // 0x80230110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80230110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802A1E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F14: jr          $ra
    // 0x802A1F18: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
    return;
    // 0x802A1F18: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
;}
RECOMP_FUNC void D_80244F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244F34: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80244F38: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80244F3C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80244F40: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80244F44: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80244F48: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80244F4C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80244F50: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80244F54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80244F58: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x80244F5C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80244F60: beq         $t6, $zero, L_80244F80
    if (ctx->r14 == 0) {
        // 0x80244F64: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_80244F80;
    }
    // 0x80244F64: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80244F68: jal         0x802456A0
    // 0x80244F6C: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_0;
    // 0x80244F6C: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x80244F70: beq         $v0, $zero, L_80244F84
    if (ctx->r2 == 0) {
        // 0x80244F74: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80244F84;
    }
    // 0x80244F74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80244F78: b           L_80245074
    // 0x80244F7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80245074;
    // 0x80244F7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244F80:
    // 0x80244F80: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_80244F84:
    // 0x80244F84: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80244F88: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80244F8C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80244F90: sh          $t7, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r15;
    // 0x80244F94: sh          $t8, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r24;
    // 0x80244F98: sh          $t9, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r25;
    // 0x80244F9C: sh          $t0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r8;
    // 0x80244FA0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80244FA4: addiu       $s0, $sp, 0x5A
    ctx->r16 = ADD32(ctx->r29, 0X5A);
    // 0x80244FA8: addiu       $s6, $sp, 0x50
    ctx->r22 = ADD32(ctx->r29, 0X50);
    // 0x80244FAC: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80244FB0: addiu       $s4, $sp, 0x52
    ctx->r20 = ADD32(ctx->r29, 0X52);
L_80244FB4:
    // 0x80244FB4: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80244FB8: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80244FBC: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x80244FC0: jal         0x80245710
    // 0x80244FC4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    static_3_80245710(rdram, ctx);
        goto after_1;
    // 0x80244FC4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_1:
    // 0x80244FC8: beq         $v0, $zero, L_80244FD8
    if (ctx->r2 == 0) {
        // 0x80244FCC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80244FD8;
    }
    // 0x80244FCC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80244FD0: b           L_80245074
    // 0x80244FD4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80245074;
    // 0x80244FD4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244FD8:
    // 0x80244FD8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80244FDC: jal         0x80244B3C
    // 0x80244FE0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    static_3_80244B3C(rdram, ctx);
        goto after_2;
    // 0x80244FE0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_2:
    // 0x80244FE4: lhu         $t1, 0x52($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X52);
    // 0x80244FE8: lhu         $t2, 0x1C($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X1C);
    // 0x80244FEC: lhu         $t3, 0x50($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X50);
    // 0x80244FF0: bne         $t1, $t2, L_80245008
    if (ctx->r9 != ctx->r10) {
        // 0x80244FF4: nop
    
            goto L_80245008;
    }
    // 0x80244FF4: nop

    // 0x80244FF8: lhu         $t4, 0x1E($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X1E);
    // 0x80244FFC: nop

    // 0x80245000: beq         $t3, $t4, L_80245014
    if (ctx->r11 == ctx->r12) {
        // 0x80245004: nop
    
            goto L_80245014;
    }
    // 0x80245004: nop

L_80245008:
    // 0x80245008: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8024500C: bne         $s1, $s5, L_80244FB4
    if (ctx->r17 != ctx->r21) {
        // 0x80245010: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80244FB4;
    }
    // 0x80245010: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80245014:
    // 0x80245014: bne         $s1, $s5, L_80245024
    if (ctx->r17 != ctx->r21) {
        // 0x80245018: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80245024;
    }
    // 0x80245018: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8024501C: b           L_80245070
    // 0x80245020: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80245070;
    // 0x80245020: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80245024:
    // 0x80245024: addiu       $s4, $sp, 0x58
    ctx->r20 = ADD32(ctx->r29, 0X58);
L_80245028:
    // 0x80245028: beq         $s0, $s1, L_80245060
    if (ctx->r16 == ctx->r17) {
        // 0x8024502C: sll         $t5, $s0, 1
        ctx->r13 = S32(ctx->r16 << 1);
            goto L_80245060;
    }
    // 0x8024502C: sll         $t5, $s0, 1
    ctx->r13 = S32(ctx->r16 << 1);
    // 0x80245030: addu        $t6, $s4, $t5
    ctx->r14 = ADD32(ctx->r20, ctx->r13);
    // 0x80245034: lhu         $a2, 0x0($t6)
    ctx->r6 = MEM_HU(ctx->r14, 0X0);
    // 0x80245038: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x8024503C: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80245040: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80245044: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80245048: jal         0x80246660
    // 0x8024504C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    static_3_80246660(rdram, ctx);
        goto after_3;
    // 0x8024504C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_3:
    // 0x80245050: beq         $v0, $zero, L_80245064
    if (ctx->r2 == 0) {
        // 0x80245054: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80245064;
    }
    // 0x80245054: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80245058: b           L_80245074
    // 0x8024505C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80245074;
    // 0x8024505C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80245060:
    // 0x80245060: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80245064:
    // 0x80245064: bne         $s0, $s5, L_80245028
    if (ctx->r16 != ctx->r21) {
        // 0x80245068: nop
    
            goto L_80245028;
    }
    // 0x80245068: nop

    // 0x8024506C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80245070:
    // 0x80245070: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80245074:
    // 0x80245074: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80245078: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024507C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80245080: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80245084: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80245088: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8024508C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80245090: jr          $ra
    // 0x80245094: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80245094: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_802BD8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BD940: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802BD944: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802BD948: jal         0x8022331C
    // 0x802BD94C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802BD94C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    after_0:
    // 0x802BD950: jal         0x8022970C
    // 0x802BD954: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802BD954: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x802BD958: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802BD95C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802BD960: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802BD964: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802BD968: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802BD96C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802BD970: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802BD974: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802BD978: jal         0x8022A848
    // 0x802BD97C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_2;
    // 0x802BD97C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x802BD980: jal         0x80221B2C
    // 0x802BD984: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_80221B2C(rdram, ctx);
        goto after_3;
    // 0x802BD984: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x802BD988: jal         0x8022970C
    // 0x802BD98C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x802BD98C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x802BD990: jal         0x8022149C
    // 0x802BD994: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_8022149C(rdram, ctx);
        goto after_5;
    // 0x802BD994: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x802BD998: jal         0x802233EC
    // 0x802BD99C: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_6;
    // 0x802BD99C: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    after_6:
    // 0x802BD9A0: jal         0x8021F4E4
    // 0x802BD9A4: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_7;
    // 0x802BD9A4: nop

    after_7:
    // 0x802BD9A8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802BD9AC: addiu       $t7, $zero, 0xCA
    ctx->r15 = ADD32(0, 0XCA);
    // 0x802BD9B0: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802BD9B4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802BD9B8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802BD9BC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802BD9C0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802BD9C4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802BD9C8: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BD9CC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x802BD9D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD9D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD9D8: jal         0x8021F35C
    // 0x802BD9DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x802BD9DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x802BD9E0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BD9E4: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BD9E8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BD9EC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BD9F0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BD9F4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BD9F8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BD9FC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BDA00: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BDA04: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x802BDA08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BDA0C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802BDA10: jal         0x8021F35C
    // 0x802BDA14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802BDA14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x802BDA18: addiu       $t4, $zero, 0x1E0
    ctx->r12 = ADD32(0, 0X1E0);
    // 0x802BDA1C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802BDA20: addiu       $t6, $zero, 0xCA
    ctx->r14 = ADD32(0, 0XCA);
    // 0x802BDA24: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x802BDA28: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802BDA2C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802BDA30: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802BDA34: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802BDA38: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802BDA3C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802BDA40: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x802BDA44: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802BDA48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BDA4C: jal         0x8021F35C
    // 0x802BDA50: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802BDA50: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_10:
    // 0x802BDA54: addiu       $t9, $zero, 0x1E0
    ctx->r25 = ADD32(0, 0X1E0);
    // 0x802BDA58: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802BDA5C: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802BDA60: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802BDA64: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802BDA68: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802BDA6C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802BDA70: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802BDA74: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802BDA78: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802BDA7C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802BDA80: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802BDA84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BDA88: jal         0x8021F35C
    // 0x802BDA8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802BDA8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x802BDA90: jal         0x8021FCD0
    // 0x802BDA94: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_12;
    // 0x802BDA94: nop

    after_12:
    // 0x802BDA98: jal         0x802230E4
    // 0x802BDA9C: nop

    static_3_802230E4(rdram, ctx);
        goto after_13;
    // 0x802BDA9C: nop

    after_13:
    // 0x802BDAA0: jal         0x8022337C
    // 0x802BDAA4: nop

    static_3_8022337C(rdram, ctx);
        goto after_14;
    // 0x802BDAA4: nop

    after_14:
    // 0x802BDAA8: jal         0x802233EC
    // 0x802BDAAC: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_15;
    // 0x802BDAAC: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    after_15:
    // 0x802BDAB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802BDAB4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802BDAB8: jr          $ra
    // 0x802BDABC: nop

    return;
    // 0x802BDABC: nop

;}
RECOMP_FUNC void D_80246980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246980: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x80246984: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80246988: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8024698C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80246990: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80246994: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80246998: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8024699C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802469A0: sw          $a1, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r5;
    // 0x802469A4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x802469A8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802469AC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802469B0: bne         $t7, $zero, L_802469C0
    if (ctx->r15 != 0) {
        // 0x802469B4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_802469C0;
    }
    // 0x802469B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802469B8: b           L_80246B04
    // 0x802469BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80246B04;
    // 0x802469BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802469C0:
    // 0x802469C0: jal         0x802452EC
    // 0x802469C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_802452EC(rdram, ctx);
        goto after_0;
    // 0x802469C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x802469C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802469CC: bne         $v0, $at, L_802469DC
    if (ctx->r2 != ctx->r1) {
        // 0x802469D0: nop
    
            goto L_802469DC;
    }
    // 0x802469D0: nop

    // 0x802469D4: b           L_80246B04
    // 0x802469D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80246B04;
    // 0x802469D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802469DC:
    // 0x802469DC: lbu         $t8, 0x64($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X64);
    // 0x802469E0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802469E4: blez        $t8, L_80246AF4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x802469E8: addiu       $s5, $zero, 0x80
        ctx->r21 = ADD32(0, 0X80);
            goto L_80246AF4;
    }
    // 0x802469E8: addiu       $s5, $zero, 0x80
    ctx->r21 = ADD32(0, 0X80);
    // 0x802469EC: addiu       $s2, $sp, 0x148
    ctx->r18 = ADD32(ctx->r29, 0X148);
    // 0x802469F0: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_802469F4:
    // 0x802469F4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802469F8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x802469FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80246A00: jal         0x80245404
    // 0x80246A04: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    static_3_80245404(rdram, ctx);
        goto after_1;
    // 0x80246A04: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    after_1:
    // 0x80246A08: beq         $v0, $zero, L_80246A18
    if (ctx->r2 == 0) {
        // 0x80246A0C: nop
    
            goto L_80246A18;
    }
    // 0x80246A0C: nop

    // 0x80246A10: b           L_80246B08
    // 0x80246A14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80246B08;
    // 0x80246A14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80246A18:
    // 0x80246A18: blez        $s3, L_80246A28
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80246A1C: nop
    
            goto L_80246A28;
    }
    // 0x80246A1C: nop

    // 0x80246A20: b           L_80246A30
    // 0x80246A24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80246A30;
    // 0x80246A24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80246A28:
    // 0x80246A28: lw          $a1, 0x60($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X60);
    // 0x80246A2C: nop

L_80246A30:
    // 0x80246A30: slti        $at, $a1, 0x80
    ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x80246A34: beq         $at, $zero, L_80246ADC
    if (ctx->r1 == 0) {
        // 0x80246A38: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80246ADC;
    }
    // 0x80246A38: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80246A3C: subu        $a2, $s5, $a1
    ctx->r6 = SUB32(ctx->r21, ctx->r5);
    // 0x80246A40: andi        $t9, $a2, 0x3
    ctx->r25 = ctx->r6 & 0X3;
    // 0x80246A44: beq         $t9, $zero, L_80246A78
    if (ctx->r25 == 0) {
        // 0x80246A48: addu        $a0, $t9, $a1
        ctx->r4 = ADD32(ctx->r25, ctx->r5);
            goto L_80246A78;
    }
    // 0x80246A48: addu        $a0, $t9, $a1
    ctx->r4 = ADD32(ctx->r25, ctx->r5);
    // 0x80246A4C: sll         $t0, $a1, 1
    ctx->r8 = S32(ctx->r5 << 1);
    // 0x80246A50: addiu       $t1, $sp, 0x48
    ctx->r9 = ADD32(ctx->r29, 0X48);
    // 0x80246A54: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
L_80246A58:
    // 0x80246A58: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x80246A5C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80246A60: bne         $s1, $t2, L_80246A6C
    if (ctx->r17 != ctx->r10) {
        // 0x80246A64: nop
    
            goto L_80246A6C;
    }
    // 0x80246A64: nop

    // 0x80246A68: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80246A6C:
    // 0x80246A6C: bne         $a0, $v1, L_80246A58
    if (ctx->r4 != ctx->r3) {
        // 0x80246A70: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_80246A58;
    }
    // 0x80246A70: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80246A74: beq         $v1, $s5, L_80246ADC
    if (ctx->r3 == ctx->r21) {
        // 0x80246A78: sll         $t3, $v1, 1
        ctx->r11 = S32(ctx->r3 << 1);
            goto L_80246ADC;
    }
L_80246A78:
    // 0x80246A78: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x80246A7C: addiu       $t4, $sp, 0x48
    ctx->r12 = ADD32(ctx->r29, 0X48);
    // 0x80246A80: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
L_80246A84:
    // 0x80246A84: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x80246A88: nop

    // 0x80246A8C: bne         $s1, $t5, L_80246A98
    if (ctx->r17 != ctx->r13) {
        // 0x80246A90: nop
    
            goto L_80246A98;
    }
    // 0x80246A90: nop

    // 0x80246A94: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80246A98:
    // 0x80246A98: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80246A9C: nop

    // 0x80246AA0: bne         $s1, $t6, L_80246AAC
    if (ctx->r17 != ctx->r14) {
        // 0x80246AA4: nop
    
            goto L_80246AAC;
    }
    // 0x80246AA4: nop

    // 0x80246AA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80246AAC:
    // 0x80246AAC: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x80246AB0: nop

    // 0x80246AB4: bne         $s1, $t7, L_80246AC0
    if (ctx->r17 != ctx->r15) {
        // 0x80246AB8: nop
    
            goto L_80246AC0;
    }
    // 0x80246AB8: nop

    // 0x80246ABC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80246AC0:
    // 0x80246AC0: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x80246AC4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80246AC8: bne         $s1, $t8, L_80246AD4
    if (ctx->r17 != ctx->r24) {
        // 0x80246ACC: nop
    
            goto L_80246AD4;
    }
    // 0x80246ACC: nop

    // 0x80246AD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80246AD4:
    // 0x80246AD4: bne         $v0, $s2, L_80246A84
    if (ctx->r2 != ctx->r18) {
        // 0x80246AD8: nop
    
            goto L_80246A84;
    }
    // 0x80246AD8: nop

L_80246ADC:
    // 0x80246ADC: lbu         $t0, 0x64($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X64);
    // 0x80246AE0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80246AE4: andi        $t9, $s3, 0xFF
    ctx->r25 = ctx->r19 & 0XFF;
    // 0x80246AE8: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80246AEC: bne         $at, $zero, L_802469F4
    if (ctx->r1 != 0) {
        // 0x80246AF0: or          $s3, $t9, $zero
        ctx->r19 = ctx->r25 | 0;
            goto L_802469F4;
    }
    // 0x80246AF0: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
L_80246AF4:
    // 0x80246AF4: lw          $t2, 0x154($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X154);
    // 0x80246AF8: sll         $t1, $s0, 8
    ctx->r9 = S32(ctx->r16 << 8);
    // 0x80246AFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80246B00: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_80246B04:
    // 0x80246B04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80246B08:
    // 0x80246B08: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80246B0C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80246B10: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80246B14: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80246B18: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80246B1C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80246B20: jr          $ra
    // 0x80246B24: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    // 0x80246B24: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void D_80222E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222E00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222E04: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80222E08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80222E0C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80222E10: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x80222E14: nop

    // 0x80222E18: bc1f        L_80222E28
    if (!c1cs) {
        // 0x80222E1C: nop
    
            goto L_80222E28;
    }
    // 0x80222E1C: nop

    // 0x80222E20: jr          $ra
    // 0x80222E24: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80222E24: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80222E28:
    // 0x80222E28: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x80222E2C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222E30: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x80222E34: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80222E38: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80222E3C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80222E40: jr          $ra
    // 0x80222E44: nop

    return;
    // 0x80222E44: nop

;}
RECOMP_FUNC void D_80242324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242328: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8024232C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80242330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242334: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80242338: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8024233C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80242340: addiu       $a2, $a2, 0x2B70
    ctx->r6 = ADD32(ctx->r6, 0X2B70);
    // 0x80242344: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80242348: jal         0x80249920
    // 0x8024234C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    static_3_80249920(rdram, ctx);
        goto after_0;
    // 0x8024234C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_0:
    // 0x80242350: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80242354: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80242358: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8024235C: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x80242360: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80242364: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x80242368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024236C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80242370: jr          $ra
    // 0x80242374: nop

    return;
    // 0x80242374: nop

;}
RECOMP_FUNC void D_802E2EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E2F6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802E2F70: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802E2F74: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802E2F78: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802E2F7C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802E2F80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802E2F84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E2F88: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802E2F8C: ori         $s2, $zero, 0xFFFF
    ctx->r18 = 0 | 0XFFFF;
    // 0x802E2F90: addiu       $s3, $zero, 0xC8
    ctx->r19 = ADD32(0, 0XC8);
L_802E2F94:
    // 0x802E2F94: lw          $t6, 0x550($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X550);
    // 0x802E2F98: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x802E2F9C: beql        $s2, $a0, L_802E2FB8
    if (ctx->r18 == ctx->r4) {
        // 0x802E2FA0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802E2FB8;
    }
    goto skip_0;
    // 0x802E2FA0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_0:
    // 0x802E2FA4: jal         0x8021BAE0
    // 0x802E2FA8: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802E2FA8: nop

    after_0:
    // 0x802E2FAC: lw          $t7, 0x550($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X550);
    // 0x802E2FB0: sw          $s2, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r18;
    // 0x802E2FB4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_802E2FB8:
    // 0x802E2FB8: bne         $s1, $s3, L_802E2F94
    if (ctx->r17 != ctx->r19) {
        // 0x802E2FBC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E2F94;
    }
    // 0x802E2FBC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802E2FC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802E2FC4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802E2FC8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802E2FCC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802E2FD0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802E2FD4: jr          $ra
    // 0x802E2FD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802E2FD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802B71EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B726C: jr          $ra
    // 0x802B7270: sb          $zero, 0x77C($a0)
    MEM_B(0X77C, ctx->r4) = 0;
    return;
    // 0x802B7270: sb          $zero, 0x77C($a0)
    MEM_B(0X77C, ctx->r4) = 0;
;}
RECOMP_FUNC void D_80243AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243AC0: beq         $a2, $zero, L_80243AE0
    if (ctx->r6 == 0) {
        // 0x80243AC4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80243AE0;
    }
    // 0x80243AC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80243AC8: sllv        $t7, $t6, $a2
    ctx->r15 = S32(ctx->r14 << (ctx->r6 & 31));
    // 0x80243ACC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80243AD0: nop

    // 0x80243AD4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80243AD8: mul.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f6.d);
    // 0x80243ADC: nop

L_80243AE0:
    // 0x80243AE0: jr          $ra
    // 0x80243AE4: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x80243AE4: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
;}
RECOMP_FUNC void D_802031CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802031CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802031D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802031D4: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x802031D8: sll         $s0, $a1, 2
    ctx->r16 = S32(ctx->r5 << 2);
    // 0x802031DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802031E0: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x802031E4: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802031E8: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x802031EC: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802031F0: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x802031F4: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x802031F8: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x802031FC: addu        $s0, $s0, $a1
    ctx->r16 = ADD32(ctx->r16, ctx->r5);
    // 0x80203200: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80203204: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80203208: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8020320C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80203210: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80203214: lbu         $a2, 0xAD($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0XAD);
    // 0x80203218: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020321C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203220: jal         0x802011D0
    // 0x80203224: sb          $a1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r5;
    static_3_802011D0(rdram, ctx);
        goto after_0;
    // 0x80203224: sb          $a1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r5;
    after_0:
    // 0x80203228: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8020322C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80203230: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80203234: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x80203238: sw          $t8, 0xA0($t0)
    MEM_W(0XA0, ctx->r8) = ctx->r24;
    // 0x8020323C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80203240: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80203244: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x80203248: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8020324C: lbu         $t4, 0xAD($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XAD);
    // 0x80203250: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x80203254: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80203258: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8020325C: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x80203260: jal         0x80234E90
    // 0x80203264: lh          $a1, 0x0($t6)
    ctx->r5 = MEM_H(ctx->r14, 0X0);
    static_3_80234E90(rdram, ctx);
        goto after_1;
    // 0x80203264: lh          $a1, 0x0($t6)
    ctx->r5 = MEM_H(ctx->r14, 0X0);
    after_1:
    // 0x80203268: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8020326C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80203270: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80203274: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x80203278: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8020327C: addiu       $a2, $zero, 0x42C
    ctx->r6 = ADD32(0, 0X42C);
    // 0x80203280: bne         $t7, $at, L_80203298
    if (ctx->r15 != ctx->r1) {
        // 0x80203284: nop
    
            goto L_80203298;
    }
    // 0x80203284: nop

    // 0x80203288: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020328C: jal         0x80231C9C
    // 0x80203290: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80203290: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x80203294: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_80203298:
    // 0x80203298: jal         0x80234EB0
    // 0x8020329C: nop

    static_3_80234EB0(rdram, ctx);
        goto after_3;
    // 0x8020329C: nop

    after_3:
    // 0x802032A0: beql        $v0, $zero, L_802032BC
    if (ctx->r2 == 0) {
        // 0x802032A4: lw          $t8, 0x0($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X0);
            goto L_802032BC;
    }
    goto skip_0;
    // 0x802032A4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x802032A8: jal         0x80234ED0
    // 0x802032AC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_80234ED0(rdram, ctx);
        goto after_4;
    // 0x802032AC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_4:
    // 0x802032B0: b           L_80203400
    // 0x802032B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80203400;
    // 0x802032B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802032B8: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
L_802032BC:
    // 0x802032BC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802032C0: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x802032C4: addu        $t0, $t8, $s0
    ctx->r8 = ADD32(ctx->r24, ctx->r16);
    // 0x802032C8: lbu         $t2, 0xAD($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0XAD);
    // 0x802032CC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802032D0: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x802032D4: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x802032D8: jal         0x80234F20
    // 0x802032DC: lh          $a1, 0x0($t4)
    ctx->r5 = MEM_H(ctx->r12, 0X0);
    func_80234F20(rdram, ctx);
        goto after_5;
    // 0x802032DC: lh          $a1, 0x0($t4)
    ctx->r5 = MEM_H(ctx->r12, 0X0);
    after_5:
    // 0x802032E0: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x802032E4: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802032E8: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x802032EC: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x802032F0: lbu         $t7, 0x8C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8C);
    // 0x802032F4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802032F8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802032FC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80203300: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x80203304: lw          $v0, 0xC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC);
    // 0x80203308: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8020330C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80203310: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x80203314: addiu       $a2, $zero, 0x43A
    ctx->r6 = ADD32(0, 0X43A);
    // 0x80203318: bnel        $a3, $zero, L_80203330
    if (ctx->r7 != 0) {
        // 0x8020331C: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_80203330;
    }
    goto skip_1;
    // 0x8020331C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x80203320: jal         0x80231C9C
    // 0x80203324: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    static_3_80231C9C(rdram, ctx);
        goto after_6;
    // 0x80203324: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_6:
    // 0x80203328: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8020332C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_80203330:
    // 0x80203330: jal         0x80234F70
    // 0x80203334: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80234F70(rdram, ctx);
        goto after_7;
    // 0x80203334: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_7:
    // 0x80203338: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8020333C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80203340: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80203344: addu        $t3, $t9, $s0
    ctx->r11 = ADD32(ctx->r25, ctx->r16);
    // 0x80203348: lbu         $t4, 0xAD($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XAD);
    // 0x8020334C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80203350: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80203354: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x80203358: sh          $v0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r2;
    // 0x8020335C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80203360: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80203364: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80203368: addu        $t8, $t1, $s0
    ctx->r24 = ADD32(ctx->r9, ctx->r16);
    // 0x8020336C: lbu         $t0, 0xAD($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0XAD);
    // 0x80203370: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x80203374: addu        $t3, $t7, $t9
    ctx->r11 = ADD32(ctx->r15, ctx->r25);
    // 0x80203378: jal         0x80234E90
    // 0x8020337C: lh          $a1, 0x0($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X0);
    static_3_80234E90(rdram, ctx);
        goto after_8;
    // 0x8020337C: lh          $a1, 0x0($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X0);
    after_8:
    // 0x80203380: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80203384: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80203388: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020338C: lw          $t2, 0x3C($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X3C);
    // 0x80203390: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80203394: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80203398: bne         $t2, $at, L_802033A8
    if (ctx->r10 != ctx->r1) {
        // 0x8020339C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802033A8;
    }
    // 0x8020339C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802033A0: jal         0x80231C9C
    // 0x802033A4: addiu       $a2, $zero, 0x43E
    ctx->r6 = ADD32(0, 0X43E);
    static_3_80231C9C(rdram, ctx);
        goto after_9;
    // 0x802033A4: addiu       $a2, $zero, 0x43E
    ctx->r6 = ADD32(0, 0X43E);
    after_9:
L_802033A8:
    // 0x802033A8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x802033AC: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802033B0: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802033B4: addu        $t1, $t6, $s0
    ctx->r9 = ADD32(ctx->r14, ctx->r16);
    // 0x802033B8: lbu         $t8, 0xAD($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0XAD);
    // 0x802033BC: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x802033C0: addu        $t7, $t5, $t0
    ctx->r15 = ADD32(ctx->r13, ctx->r8);
    // 0x802033C4: lh          $t9, 0x0($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X0);
    // 0x802033C8: bltzl       $t9, L_80203400
    if (SIGNED(ctx->r25) < 0) {
        // 0x802033CC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80203400;
    }
    goto skip_2;
    // 0x802033CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x802033D0: jal         0x80203464
    // 0x802033D4: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    static_3_80203464(rdram, ctx);
        goto after_10;
    // 0x802033D4: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    after_10:
    // 0x802033D8: jal         0x80235010
    // 0x802033DC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    static_3_80235010(rdram, ctx);
        goto after_11;
    // 0x802033DC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_11:
    // 0x802033E0: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x802033E4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802033E8: addu        $t2, $t4, $s0
    ctx->r10 = ADD32(ctx->r12, ctx->r16);
    // 0x802033EC: sw          $t3, 0xA0($t2)
    MEM_W(0XA0, ctx->r10) = ctx->r11;
    // 0x802033F0: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x802033F4: addu        $t1, $t6, $s0
    ctx->r9 = ADD32(ctx->r14, ctx->r16);
    // 0x802033F8: sw          $zero, 0xA8($t1)
    MEM_W(0XA8, ctx->r9) = 0;
    // 0x802033FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80203400:
    // 0x80203400: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80203404: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80203408: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8020340C: jr          $ra
    // 0x80203410: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80203410: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802238EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802238EC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802238F0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802238F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802238F8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802238FC: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80223900: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80223904: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80223908: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8022390C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80223910: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80223914: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x80223918: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022391C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80223920: bne         $at, $zero, L_80223930
    if (ctx->r1 != 0) {
        // 0x80223924: sw          $a3, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r7;
            goto L_80223930;
    }
    // 0x80223924: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80223928: b           L_80223ACC
    // 0x8022392C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223ACC;
    // 0x8022392C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223930:
    // 0x80223930: bnel        $s1, $zero, L_80223940
    if (ctx->r17 != 0) {
        // 0x80223934: lw          $t9, 0x0($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X0);
            goto L_80223940;
    }
    goto skip_0;
    // 0x80223934: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80223938: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
    // 0x8022393C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
L_80223940:
    // 0x80223940: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80223944: jal         0x8022B5E0
    // 0x80223948: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    static_3_8022B5E0(rdram, ctx);
        goto after_0;
    // 0x80223948: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    after_0:
    // 0x8022394C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80223950: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x80223954: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80223958: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022395C: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80223960: jal         0x8022B5E0
    // 0x80223964: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    static_3_8022B5E0(rdram, ctx);
        goto after_1;
    // 0x80223964: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x80223968: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8022396C: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x80223970: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x80223974: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80223978: lui         $at, 0x475A
    ctx->r1 = S32(0X475A << 16);
    // 0x8022397C: ori         $at, $at, 0x4950
    ctx->r1 = ctx->r1 | 0X4950;
    // 0x80223980: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80223984: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80223988: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8022398C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80223990: bnel        $t8, $at, L_80223A60
    if (ctx->r24 != ctx->r1) {
        // 0x80223994: lw          $t6, 0x0($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X0);
            goto L_80223A60;
    }
    goto skip_1;
    // 0x80223994: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    skip_1:
    // 0x80223998: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8022399C: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x802239A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802239A4: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x802239A8: jal         0x8022B5E0
    // 0x802239AC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    static_3_8022B5E0(rdram, ctx);
        goto after_2;
    // 0x802239AC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_2:
    // 0x802239B0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x802239B4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x802239B8: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x802239BC: bnel        $t2, $zero, L_80223ACC
    if (ctx->r10 != 0) {
        // 0x802239C0: lw          $v0, 0x40($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X40);
            goto L_80223ACC;
    }
    goto skip_2;
    // 0x802239C0: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    skip_2:
    // 0x802239C4: jal         0x8022BB00
    // 0x802239C8: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    static_3_8022BB00(rdram, ctx);
        goto after_3;
    // 0x802239C8: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_3:
    // 0x802239CC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802239D0: lhu         $t3, 0x0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X0);
    // 0x802239D4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x802239D8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802239DC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802239E0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x802239E4: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x802239E8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x802239EC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x802239F0: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x802239F4: jal         0x8022B460
    // 0x802239F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8022B460(rdram, ctx);
        goto after_4;
    // 0x802239F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_4:
    // 0x802239FC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80223A00: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80223A04: jal         0x80234DF0
    // 0x80223A08: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    static_3_80234DF0(rdram, ctx);
        goto after_5;
    // 0x80223A08: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    after_5:
    // 0x80223A0C: jal         0x8022BA94
    // 0x80223A10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_8022BA94(rdram, ctx);
        goto after_6;
    // 0x80223A10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x80223A14: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80223A18: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80223A1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80223A20: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80223A24: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80223A28: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80223A2C: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80223A30: jal         0x8022B5E0
    // 0x80223A34: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    static_3_8022B5E0(rdram, ctx);
        goto after_7;
    // 0x80223A34: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_7:
    // 0x80223A38: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80223A3C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80223A40: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x80223A44: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80223A48: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80223A4C: sw          $t4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r12;
    // 0x80223A50: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80223A54: b           L_80223AC8
    // 0x80223A58: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
        goto L_80223AC8;
    // 0x80223A58: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x80223A5C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
L_80223A60:
    // 0x80223A60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80223A64: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80223A68: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80223A6C: sltu        $t8, $zero, $t7
    ctx->r24 = 0 < ctx->r15 ? 1 : 0;
    // 0x80223A70: bne         $t8, $zero, L_80223AB4
    if (ctx->r24 != 0) {
        // 0x80223A74: andi        $t0, $t9, 0x1
        ctx->r8 = ctx->r25 & 0X1;
            goto L_80223AB4;
    }
    // 0x80223A74: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80223A78: beql        $t0, $zero, L_80223AB8
    if (ctx->r8 == 0) {
        // 0x80223A7C: lw          $t4, 0xC($s0)
        ctx->r12 = MEM_W(ctx->r16, 0XC);
            goto L_80223AB8;
    }
    goto skip_3;
    // 0x80223A7C: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    skip_3:
    // 0x80223A80: jal         0x8022BB00
    // 0x80223A84: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    static_3_8022BB00(rdram, ctx);
        goto after_8;
    // 0x80223A84: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_8:
    // 0x80223A88: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80223A8C: jal         0x8022BA94
    // 0x80223A90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_8022BA94(rdram, ctx);
        goto after_9;
    // 0x80223A90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x80223A94: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80223A98: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80223A9C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x80223AA0: jal         0x8022B460
    // 0x80223AA4: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    func_8022B460(rdram, ctx);
        goto after_10;
    // 0x80223AA4: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    after_10:
    // 0x80223AA8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80223AAC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80223AB0: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
L_80223AB4:
    // 0x80223AB4: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
L_80223AB8:
    // 0x80223AB8: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x80223ABC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80223AC0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80223AC4: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
L_80223AC8:
    // 0x80223AC8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
L_80223ACC:
    // 0x80223ACC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80223AD0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80223AD4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80223AD8: jr          $ra
    // 0x80223ADC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80223ADC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802D8770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D87F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D87F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D87F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D87FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D8800: beq         $a0, $zero, L_802D8848
    if (ctx->r4 == 0) {
        // 0x802D8804: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802D8848;
    }
    // 0x802D8804: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D8808: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D880C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D8810: jal         0x8028BC58
    // 0x802D8814: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    static_3_8028BC58(rdram, ctx);
        goto after_0;
    // 0x802D8814: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    after_0:
    // 0x802D8818: addiu       $a0, $s0, 0x2F0
    ctx->r4 = ADD32(ctx->r16, 0X2F0);
    // 0x802D881C: jal         0x802C49D0
    // 0x802D8820: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_1;
    // 0x802D8820: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802D8824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D8828: jal         0x8028BAC8
    // 0x802D882C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8028BAC8(rdram, ctx);
        goto after_2;
    // 0x802D882C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802D8830: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802D8834: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802D8838: beql        $t8, $zero, L_802D884C
    if (ctx->r24 == 0) {
        // 0x802D883C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802D884C;
    }
    goto skip_0;
    // 0x802D883C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802D8840: jal         0x802C681C
    // 0x802D8844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_3;
    // 0x802D8844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_802D8848:
    // 0x802D8848: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D884C:
    // 0x802D884C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D8850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D8854: jr          $ra
    // 0x802D8858: nop

    return;
    // 0x802D8858: nop

;}
RECOMP_FUNC void D_80281654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802816D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802816D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802816DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802816E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802816E4: beq         $a0, $zero, L_80281744
    if (ctx->r4 == 0) {
        // 0x802816E8: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80281744;
    }
    // 0x802816E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802816EC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802816F0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802816F4: jal         0x802B21A4
    // 0x802816F8: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    static_3_802B21A4(rdram, ctx);
        goto after_0;
    // 0x802816F8: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    after_0:
    // 0x802816FC: addiu       $a0, $s0, 0x458
    ctx->r4 = ADD32(ctx->r16, 0X458);
    // 0x80281700: jal         0x8031C75C
    // 0x80281704: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031C75C(rdram, ctx);
        goto after_1;
    // 0x80281704: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80281708: addiu       $a0, $s0, 0x368
    ctx->r4 = ADD32(ctx->r16, 0X368);
    // 0x8028170C: jal         0x8031C75C
    // 0x80281710: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031C75C(rdram, ctx);
        goto after_2;
    // 0x80281710: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80281714: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x80281718: jal         0x802D48A8
    // 0x8028171C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D48A8(rdram, ctx);
        goto after_3;
    // 0x8028171C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80281720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281724: jal         0x8031739C
    // 0x80281728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_4;
    // 0x80281728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8028172C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80281730: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80281734: beql        $t8, $zero, L_80281748
    if (ctx->r24 == 0) {
        // 0x80281738: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80281748;
    }
    goto skip_0;
    // 0x80281738: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8028173C: jal         0x802C681C
    // 0x80281740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_5;
    // 0x80281740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_80281744:
    // 0x80281744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80281748:
    // 0x80281748: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028174C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281750: jr          $ra
    // 0x80281754: nop

    return;
    // 0x80281754: nop

;}
RECOMP_FUNC void D_8024A7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A7F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024A7F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024A7F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8024A7FC: jal         0x80241760
    // 0x8024A800: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8024A800: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8024A804: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8024A808: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8024A80C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8024A810: addiu       $at, $zero, -0x402
    ctx->r1 = ADD32(0, -0X402);
    // 0x8024A814: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8024A818: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x8024A81C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024A820: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024A824: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x8024A828: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x8024A82C: jal         0x80241780
    // 0x8024A830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_1;
    // 0x8024A830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8024A834: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024A838: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024A83C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024A840: jr          $ra
    // 0x8024A844: nop

    return;
    // 0x8024A844: nop

;}
RECOMP_FUNC void D_80201EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201EC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201EC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201ECC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201ED0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201ED4: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
    // 0x80201ED8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201EDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201EE0: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201EE4: bne         $at, $zero, L_80201F0C
    if (ctx->r1 != 0) {
        // 0x80201EE8: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_80201F0C;
    }
    // 0x80201EE8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201EEC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201EF0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201EF4: addiu       $a2, $zero, 0x20D
    ctx->r6 = ADD32(0, 0X20D);
    // 0x80201EF8: jal         0x80231C9C
    // 0x80201EFC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201EFC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80201F00: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201F04: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201F08: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_80201F0C:
    // 0x80201F0C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201F10: beq         $at, $zero, L_80201F58
    if (ctx->r1 == 0) {
        // 0x80201F14: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80201F58;
    }
    // 0x80201F14: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201F18: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201F1C: jal         0x802011D0
    // 0x80201F20: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_1;
    // 0x80201F20: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80201F24: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x80201F28: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80201F2C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80201F30: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80201F34: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80201F38: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80201F3C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80201F40: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80201F44: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80201F48: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80201F4C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80201F50: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80201F54: sw          $t6, 0xA8($t0)
    MEM_W(0XA8, ctx->r8) = ctx->r14;
L_80201F58:
    // 0x80201F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201F60: jr          $ra
    // 0x80201F64: nop

    return;
    // 0x80201F64: nop

;}
RECOMP_FUNC void D_802194B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802194B0: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x802194B4: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x802194B8: lw          $fp, 0x168($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X168);
    // 0x802194BC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802194C0: addiu       $s0, $sp, 0x110
    ctx->r16 = ADD32(ctx->r29, 0X110);
    // 0x802194C4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802194C8: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x802194CC: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x802194D0: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x802194D4: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x802194D8: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x802194DC: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x802194E0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x802194E4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x802194E8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802194EC: swc1        $f14, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f14.u32l;
    // 0x802194F0: sw          $a2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r6;
    // 0x802194F4: sw          $a3, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r7;
    // 0x802194F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802194FC: jal         0x8022A2F0
    // 0x80219500: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    static_3_8022A2F0(rdram, ctx);
        goto after_0;
    // 0x80219500: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_0:
    // 0x80219504: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    // 0x80219508: lwc1        $f6, 0x158($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8021950C: lwc1        $f8, 0x15C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x80219510: lwc1        $f10, 0x160($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X160);
    // 0x80219514: lwc1        $f16, 0x164($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X164);
    // 0x80219518: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x8021951C: swc1        $f20, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f20.u32l;
    // 0x80219520: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80219524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80219528: swc1        $f4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f4.u32l;
    // 0x8021952C: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    // 0x80219530: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x80219534: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x80219538: jal         0x8022A4F4
    // 0x8021953C: swc1        $f16, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f16.u32l;
    static_3_8022A4F4(rdram, ctx);
        goto after_1;
    // 0x8021953C: swc1        $f16, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x80219540: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x80219544: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80219548: jal         0x8022A4F4
    // 0x8021954C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022A4F4(rdram, ctx);
        goto after_2;
    // 0x8021954C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80219550: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80219554: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80219558: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x8021955C: lw          $s7, 0x170($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X170);
    // 0x80219560: lw          $a2, 0x10C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10C);
    // 0x80219564: sh          $t6, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r14;
    // 0x80219568: lbu         $t7, 0x11($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X11);
    // 0x8021956C: addiu       $t3, $sp, 0xEC
    ctx->r11 = ADD32(ctx->r29, 0XEC);
    // 0x80219570: addiu       $t4, $sp, 0xE8
    ctx->r12 = ADD32(ctx->r29, 0XE8);
    // 0x80219574: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80219578: beq         $t8, $zero, L_802195D0
    if (ctx->r24 == 0) {
        // 0x8021957C: addiu       $t5, $sp, 0xE0
        ctx->r13 = ADD32(ctx->r29, 0XE0);
            goto L_802195D0;
    }
    // 0x8021957C: addiu       $t5, $sp, 0xE0
    ctx->r13 = ADD32(ctx->r29, 0XE0);
    // 0x80219580: lw          $t9, 0x16C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X16C);
    // 0x80219584: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80219588: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x8021958C: addiu       $t6, $sp, 0xDE
    ctx->r14 = ADD32(ctx->r29, 0XDE);
    // 0x80219590: addiu       $t2, $t9, 0x8
    ctx->r10 = ADD32(ctx->r25, 0X8);
    // 0x80219594: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80219598: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8021959C: lwc1        $f12, 0x104($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802195A0: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x802195A4: lw          $a3, 0xF8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF8);
    // 0x802195A8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802195AC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802195B0: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x802195B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802195B8: jal         0x80219B84
    // 0x802195BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    static_3_80219B84(rdram, ctx);
        goto after_3;
    // 0x802195BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x802195C0: bne         $v0, $zero, L_802195D0
    if (ctx->r2 != 0) {
        // 0x802195C4: sb          $v0, 0xF7($sp)
        MEM_B(0XF7, ctx->r29) = ctx->r2;
            goto L_802195D0;
    }
    // 0x802195C4: sb          $v0, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r2;
    // 0x802195C8: b           L_80219B00
    // 0x802195CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80219B00;
    // 0x802195CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802195D0:
    // 0x802195D0: lbu         $t7, 0x11($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X11);
    // 0x802195D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802195D8: addiu       $s0, $sp, 0x98
    ctx->r16 = ADD32(ctx->r29, 0X98);
    // 0x802195DC: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x802195E0: bne         $t8, $zero, L_802197AC
    if (ctx->r24 != 0) {
        // 0x802195E4: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_802197AC;
    }
    // 0x802195E4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802195E8: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x802195EC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802195F0: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x802195F4: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x802195F8: subu        $t2, $t2, $t9
    ctx->r10 = SUB32(ctx->r10, ctx->r25);
    // 0x802195FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80219600: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80219604: lh          $a1, 0xE0($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XE0);
    // 0x80219608: jal         0x8021A528
    // 0x8021960C: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    static_3_8021A528(rdram, ctx);
        goto after_4;
    // 0x8021960C: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    after_4:
    // 0x80219610: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80219614: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80219618: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x8021961C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80219620: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80219624: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80219628: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8021962C: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80219630: lbu         $v0, 0xF7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF7);
    // 0x80219634: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80219638: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8021963C: bnel        $v0, $at, L_80219664
    if (ctx->r2 != ctx->r1) {
        // 0x80219640: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80219664;
    }
    goto skip_0;
    // 0x80219640: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x80219644: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x80219648: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8021964C: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80219650: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80219654: addu        $t6, $t9, $t3
    ctx->r14 = ADD32(ctx->r25, ctx->r11);
    // 0x80219658: b           L_80219754
    // 0x8021965C: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
        goto L_80219754;
    // 0x8021965C: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x80219660: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_80219664:
    // 0x80219664: bne         $v0, $at, L_8021972C
    if (ctx->r2 != ctx->r1) {
        // 0x80219668: lui         $t5, 0x0
        ctx->r13 = S32(0X0 << 16);
            goto L_8021972C;
    }
    // 0x80219668: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8021966C: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80219670: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x80219674: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80219678: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x8021967C: addu        $t8, $t5, $t4
    ctx->r24 = ADD32(ctx->r13, ctx->r12);
    // 0x80219680: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x80219684: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x80219688: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8021968C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80219690: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x80219694: sw          $t9, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r25;
    // 0x80219698: lhu         $t3, 0x0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X0);
    // 0x8021969C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x802196A0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x802196A4: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802196A8: bne         $at, $zero, L_802196C8
    if (ctx->r1 != 0) {
        // 0x802196AC: addiu       $a1, $a1, 0x0
        ctx->r5 = ADD32(ctx->r5, 0X0);
            goto L_802196C8;
    }
    // 0x802196AC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802196B0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802196B4: jal         0x80231C58
    // 0x802196B8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_5;
    // 0x802196B8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_5:
    // 0x802196BC: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x802196C0: addiu       $s1, $t6, -0x1
    ctx->r17 = ADD32(ctx->r14, -0X1);
    // 0x802196C4: sw          $s1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r17;
L_802196C8:
    // 0x802196C8: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802196CC: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x802196D0: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802196D4: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802196D8: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x802196DC: addu        $t2, $t4, $t8
    ctx->r10 = ADD32(ctx->r12, ctx->r24);
    // 0x802196E0: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x802196E4: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x802196E8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802196EC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802196F0: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x802196F4: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x802196F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x802196FC: lh          $a1, 0xDE($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XDE);
    // 0x80219700: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80219704: jal         0x8021A528
    // 0x80219708: addu        $a2, $t3, $t6
    ctx->r6 = ADD32(ctx->r11, ctx->r14);
    static_3_8021A528(rdram, ctx);
        goto after_6;
    // 0x80219708: addu        $a2, $t3, $t6
    ctx->r6 = ADD32(ctx->r11, ctx->r14);
    after_6:
    // 0x8021970C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80219710: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80219714: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80219718: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x8021971C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80219720: addu        $t5, $t7, $t8
    ctx->r13 = ADD32(ctx->r15, ctx->r24);
    // 0x80219724: b           L_80219754
    // 0x80219728: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
        goto L_80219754;
    // 0x80219728: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
L_8021972C:
    // 0x8021972C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80219730: bne         $v0, $at, L_80219754
    if (ctx->r2 != ctx->r1) {
        // 0x80219734: lui         $t2, 0x0
        ctx->r10 = S32(0X0 << 16);
            goto L_80219754;
    }
    // 0x80219734: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80219738: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x8021973C: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x80219740: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80219744: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80219748: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x8021974C: addu        $t6, $t2, $t3
    ctx->r14 = ADD32(ctx->r10, ctx->r11);
    // 0x80219750: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
L_80219754:
    // 0x80219754: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80219758: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021975C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80219760: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x80219764: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
    // 0x80219768: lhu         $t8, 0x0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X0);
    // 0x8021976C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80219770: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80219774: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80219778: bne         $at, $zero, L_80219798
    if (ctx->r1 != 0) {
        // 0x8021977C: addiu       $a1, $a1, 0x0
        ctx->r5 = ADD32(ctx->r5, 0X0);
            goto L_80219798;
    }
    // 0x8021977C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80219780: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80219784: jal         0x80231C58
    // 0x80219788: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_7;
    // 0x80219788: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_7:
    // 0x8021978C: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80219790: addiu       $s1, $t5, -0x1
    ctx->r17 = ADD32(ctx->r13, -0X1);
    // 0x80219794: sw          $s1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r17;
L_80219798:
    // 0x80219798: lh          $t2, 0xE6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XE6);
    // 0x8021979C: subu        $v0, $s1, $t2
    ctx->r2 = SUB32(ctx->r17, ctx->r10);
    // 0x802197A0: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x802197A4: b           L_80219B00
    // 0x802197A8: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
        goto L_80219B00;
    // 0x802197A8: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
L_802197AC:
    // 0x802197AC: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x802197B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802197B4: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x802197B8: sra         $t5, $t8, 16
    ctx->r13 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802197BC: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x802197C0: addu        $t7, $s0, $t4
    ctx->r15 = ADD32(ctx->r16, ctx->r12);
    // 0x802197C4: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    // 0x802197C8: bne         $at, $zero, L_802197AC
    if (ctx->r1 != 0) {
        // 0x802197CC: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_802197AC;
    }
    // 0x802197CC: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x802197D0: lw          $t9, 0x16C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X16C);
    // 0x802197D4: sh          $zero, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = 0;
    // 0x802197D8: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
    // 0x802197DC: lbu         $t2, 0x4($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X4);
    // 0x802197E0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802197E4: blezl       $t2, L_80219ADC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x802197E8: lw          $t3, 0x0($s5)
        ctx->r11 = MEM_W(ctx->r21, 0X0);
            goto L_80219ADC;
    }
    goto skip_1;
    // 0x802197E8: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    skip_1:
    // 0x802197EC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802197F0: lui         $v1, 0xB800
    ctx->r3 = S32(0XB800 << 16);
L_802197F4:
    // 0x802197F4: lw          $t3, 0x16C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X16C);
    // 0x802197F8: lh          $t4, 0xE4($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XE4);
    // 0x802197FC: lw          $t6, 0x0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X0);
    // 0x80219800: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x80219804: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80219808: lw          $s4, 0xC($t8)
    ctx->r20 = MEM_W(ctx->r24, 0XC);
    // 0x8021980C: or          $s4, $s4, $a0
    ctx->r20 = ctx->r20 | ctx->r4;
L_80219810:
    // 0x80219810: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x80219814: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80219818: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x8021981C: and         $v0, $a2, $at
    ctx->r2 = ctx->r6 & ctx->r1;
    // 0x80219820: bne         $v1, $v0, L_80219838
    if (ctx->r3 != ctx->r2) {
        // 0x80219824: lui         $at, 0x400
        ctx->r1 = S32(0X400 << 16);
            goto L_80219838;
    }
    // 0x80219824: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x80219828: lw          $t5, 0x16C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X16C);
    // 0x8021982C: lbu         $v0, 0x4($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X4);
    // 0x80219830: b           L_80219AC0
    // 0x80219834: lh          $t5, 0xE4($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XE4);
        goto L_80219AC0;
    // 0x80219834: lh          $t5, 0xE4($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XE4);
L_80219838:
    // 0x80219838: bne         $v0, $at, L_802198C0
    if (ctx->r2 != ctx->r1) {
        // 0x8021983C: lw          $t1, 0x0($s7)
        ctx->r9 = MEM_W(ctx->r23, 0X0);
            goto L_802198C0;
    }
    // 0x8021983C: lw          $t1, 0x0($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X0);
    // 0x80219840: subu        $v1, $t0, $t1
    ctx->r3 = SUB32(ctx->r8, ctx->r9);
    // 0x80219844: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80219848: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8021984C: lui         $at, 0xF0
    ctx->r1 = S32(0XF0 << 16);
    // 0x80219850: and         $a1, $a2, $at
    ctx->r5 = ctx->r6 & ctx->r1;
    // 0x80219854: sra         $t2, $a1, 20
    ctx->r10 = S32(SIGNED(ctx->r5) >> 20);
    // 0x80219858: srl         $t9, $v1, 4
    ctx->r25 = S32(U32(ctx->r3) >> 4);
    // 0x8021985C: addiu       $a1, $t2, 0x1
    ctx->r5 = ADD32(ctx->r10, 0X1);
    // 0x80219860: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80219864: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80219868: blez        $a1, L_80219AB0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021986C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80219AB0;
    }
    // 0x8021986C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219870: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x80219874: and         $a1, $a2, $at
    ctx->r5 = ctx->r6 & ctx->r1;
    // 0x80219878: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8021987C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80219880: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
L_80219884:
    // 0x80219884: addu        $t6, $v0, $v1
    ctx->r14 = ADD32(ctx->r2, ctx->r3);
    // 0x80219888: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8021988C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80219890: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80219894: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80219898: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x8021989C: addu        $t5, $t8, $a1
    ctx->r13 = ADD32(ctx->r24, ctx->r5);
    // 0x802198A0: slt         $at, $t2, $a0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802198A4: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x802198A8: bne         $at, $zero, L_80219884
    if (ctx->r1 != 0) {
        // 0x802198AC: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_80219884;
    }
    // 0x802198AC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x802198B0: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x802198B4: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x802198B8: b           L_80219810
    // 0x802198BC: lui         $v1, 0xB800
    ctx->r3 = S32(0XB800 << 16);
        goto L_80219810;
    // 0x802198BC: lui         $v1, 0xB800
    ctx->r3 = S32(0XB800 << 16);
L_802198C0:
    // 0x802198C0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802198C4: and         $t3, $t0, $at
    ctx->r11 = ctx->r8 & ctx->r1;
    // 0x802198C8: div         $zero, $t3, $s6
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r22)));
    // 0x802198CC: mflo        $t4
    ctx->r12 = lo;
    // 0x802198D0: andi        $t5, $t0, 0xFF00
    ctx->r13 = ctx->r8 & 0XFF00;
    // 0x802198D4: sra         $t7, $t4, 16
    ctx->r15 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802198D8: div         $zero, $t5, $s6
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r22)));
    // 0x802198DC: mflo        $t9
    ctx->r25 = lo;
    // 0x802198E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802198E4: andi        $t7, $t0, 0xFF
    ctx->r15 = ctx->r8 & 0XFF;
    // 0x802198E8: div         $zero, $t7, $s6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r22)));
    // 0x802198EC: bne         $s6, $zero, L_802198F8
    if (ctx->r22 != 0) {
        // 0x802198F0: nop
    
            goto L_802198F8;
    }
    // 0x802198F0: nop

    // 0x802198F4: break       7
    do_break(2149685492);
L_802198F8:
    // 0x802198F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802198FC: bne         $s6, $at, L_80219910
    if (ctx->r22 != ctx->r1) {
        // 0x80219900: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80219910;
    }
    // 0x80219900: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80219904: bne         $t3, $at, L_80219910
    if (ctx->r11 != ctx->r1) {
        // 0x80219908: nop
    
            goto L_80219910;
    }
    // 0x80219908: nop

    // 0x8021990C: break       6
    do_break(2149685516);
L_80219910:
    // 0x80219910: addu        $t6, $s0, $t8
    ctx->r14 = ADD32(ctx->r16, ctx->r24);
    // 0x80219914: lw          $s1, 0x0($t6)
    ctx->r17 = MEM_W(ctx->r14, 0X0);
    // 0x80219918: sra         $t2, $t9, 8
    ctx->r10 = S32(SIGNED(ctx->r25) >> 8);
    // 0x8021991C: mflo        $t8
    ctx->r24 = lo;
    // 0x80219920: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80219924: bne         $s6, $zero, L_80219930
    if (ctx->r22 != 0) {
        // 0x80219928: nop
    
            goto L_80219930;
    }
    // 0x80219928: nop

    // 0x8021992C: break       7
    do_break(2149685548);
L_80219930:
    // 0x80219930: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80219934: bne         $s6, $at, L_80219948
    if (ctx->r22 != ctx->r1) {
        // 0x80219938: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80219948;
    }
    // 0x80219938: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021993C: bne         $t5, $at, L_80219948
    if (ctx->r13 != ctx->r1) {
        // 0x80219940: nop
    
            goto L_80219948;
    }
    // 0x80219940: nop

    // 0x80219944: break       6
    do_break(2149685572);
L_80219948:
    // 0x80219948: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8021994C: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x80219950: addu        $t5, $s0, $t6
    ctx->r13 = ADD32(ctx->r16, ctx->r14);
    // 0x80219954: lw          $s2, 0x0($t4)
    ctx->r18 = MEM_W(ctx->r12, 0X0);
    // 0x80219958: lw          $s3, 0x0($t5)
    ctx->r19 = MEM_W(ctx->r13, 0X0);
    // 0x8021995C: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80219960: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x80219964: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80219968: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021996C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80219970: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80219974: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80219978: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8021997C: lwc1        $f6, 0x20($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X20);
    // 0x80219980: bne         $s6, $zero, L_8021998C
    if (ctx->r22 != 0) {
        // 0x80219984: nop
    
            goto L_8021998C;
    }
    // 0x80219984: nop

    // 0x80219988: break       7
    do_break(2149685640);
L_8021998C:
    // 0x8021998C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80219990: bne         $s6, $at, L_802199A4
    if (ctx->r22 != ctx->r1) {
        // 0x80219994: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802199A4;
    }
    // 0x80219994: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80219998: bne         $t7, $at, L_802199A4
    if (ctx->r15 != ctx->r1) {
        // 0x8021999C: nop
    
            goto L_802199A4;
    }
    // 0x8021999C: nop

    // 0x802199A0: break       6
    do_break(2149685664);
L_802199A4:
    // 0x802199A4: addiu       $t9, $sp, 0xF0
    ctx->r25 = ADD32(ctx->r29, 0XF0);
    // 0x802199A8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x802199AC: lwc1        $f12, 0x104($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802199B0: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x802199B4: lw          $a2, 0x10C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10C);
    // 0x802199B8: lw          $a3, 0xF8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF8);
    // 0x802199BC: jal         0x80215AA8
    // 0x802199C0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80215AA8(rdram, ctx);
        goto after_8;
    // 0x802199C0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x802199C4: beq         $v0, $zero, L_80219AB0
    if (ctx->r2 == 0) {
        // 0x802199C8: lui         $t3, 0x0
        ctx->r11 = S32(0X0 << 16);
            goto L_80219AB0;
    }
    // 0x802199C8: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802199CC: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x802199D0: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x802199D4: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802199D8: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x802199DC: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x802199E0: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x802199E4: sw          $t2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r10;
    // 0x802199E8: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x802199EC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802199F0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802199F4: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x802199F8: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x802199FC: addu        $t4, $t6, $t9
    ctx->r12 = ADD32(ctx->r14, ctx->r25);
    // 0x80219A00: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x80219A04: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80219A08: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80219A0C: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x80219A10: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80219A14: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80219A18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80219A1C: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x80219A20: addu        $t8, $t7, $t2
    ctx->r24 = ADD32(ctx->r15, ctx->r10);
    // 0x80219A24: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80219A28: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80219A2C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80219A30: jal         0x80212C84
    // 0x80219A34: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    static_3_80212C84(rdram, ctx);
        goto after_9;
    // 0x80219A34: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_9:
    // 0x80219A38: swc1        $f20, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->f20.u32l;
    // 0x80219A3C: swc1        $f20, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->f20.u32l;
    // 0x80219A40: swc1        $f20, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->f20.u32l;
    // 0x80219A44: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80219A48: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80219A4C: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80219A50: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80219A54: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80219A58: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80219A5C: addu        $a1, $t6, $t9
    ctx->r5 = ADD32(ctx->r14, ctx->r25);
    // 0x80219A60: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80219A64: jal         0x8022A4F4
    // 0x80219A68: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    static_3_8022A4F4(rdram, ctx);
        goto after_10;
    // 0x80219A68: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_10:
    // 0x80219A6C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80219A70: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80219A74: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80219A78: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x80219A7C: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x80219A80: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x80219A84: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80219A88: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80219A8C: slt         $at, $t3, $t7
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80219A90: bne         $at, $zero, L_80219AB0
    if (ctx->r1 != 0) {
        // 0x80219A94: addiu       $a2, $a2, 0x0
        ctx->r6 = ADD32(ctx->r6, 0X0);
            goto L_80219AB0;
    }
    // 0x80219A94: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80219A98: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80219A9C: jal         0x80231C58
    // 0x80219AA0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_11;
    // 0x80219AA0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_11:
    // 0x80219AA4: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x80219AA8: addiu       $t8, $t2, -0x1
    ctx->r24 = ADD32(ctx->r10, -0X1);
    // 0x80219AAC: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
L_80219AB0:
    // 0x80219AB0: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x80219AB4: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x80219AB8: b           L_80219810
    // 0x80219ABC: lui         $v1, 0xB800
    ctx->r3 = S32(0XB800 << 16);
        goto L_80219810;
    // 0x80219ABC: lui         $v1, 0xB800
    ctx->r3 = S32(0XB800 << 16);
L_80219AC0:
    // 0x80219AC0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80219AC4: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x80219AC8: sra         $t4, $t9, 16
    ctx->r12 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80219ACC: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80219AD0: bne         $at, $zero, L_802197F4
    if (ctx->r1 != 0) {
        // 0x80219AD4: sh          $t6, 0xE4($sp)
        MEM_H(0XE4, ctx->r29) = ctx->r14;
            goto L_802197F4;
    }
    // 0x80219AD4: sh          $t6, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r14;
    // 0x80219AD8: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
L_80219ADC:
    // 0x80219ADC: lh          $t7, 0xE6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XE6);
    // 0x80219AE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80219AE4: subu        $v1, $t3, $t7
    ctx->r3 = SUB32(ctx->r11, ctx->r15);
    // 0x80219AE8: beq         $v1, $zero, L_80219B00
    if (ctx->r3 == 0) {
        // 0x80219AEC: nop
    
            goto L_80219B00;
    }
    // 0x80219AEC: nop

    // 0x80219AF0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80219AF4: sra         $t2, $v0, 16
    ctx->r10 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80219AF8: b           L_80219B00
    // 0x80219AFC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_80219B00;
    // 0x80219AFC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80219B00:
    // 0x80219B00: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80219B04: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x80219B08: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80219B0C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80219B10: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80219B14: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80219B18: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80219B1C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80219B20: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80219B24: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80219B28: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80219B2C: jr          $ra
    // 0x80219B30: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    // 0x80219B30: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void D_802184A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802184A0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802184A4: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x802184A8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802184AC: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802184B0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802184B4: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802184B8: bc1fl       L_802184F4
    if (!c1cs) {
        // 0x802184BC: c.lt.s      $f12, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
            goto L_802184F4;
    }
    goto skip_0;
    // 0x802184BC: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    skip_0:
    // 0x802184C0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802184C4: lwc1        $f8, 0x14($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802184C8: bc1fl       L_802184DC
    if (!c1cs) {
        // 0x802184CC: c.lt.s      $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
            goto L_802184DC;
    }
    goto skip_1;
    // 0x802184CC: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    skip_1:
    // 0x802184D0: jr          $ra
    // 0x802184D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802184D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802184D8: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
L_802184DC:
    // 0x802184DC: nop

    // 0x802184E0: bc1fl       L_80218528
    if (!c1cs) {
        // 0x802184E4: lwc1        $f4, 0xC($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
            goto L_80218528;
    }
    goto skip_2;
    // 0x802184E4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    skip_2:
    // 0x802184E8: jr          $ra
    // 0x802184EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802184EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802184F0: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
L_802184F4:
    // 0x802184F4: lwc1        $f16, 0x14($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802184F8: lwc1        $f18, 0x8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8);
    // 0x802184FC: bc1fl       L_80218510
    if (!c1cs) {
        // 0x80218500: c.lt.s      $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
            goto L_80218510;
    }
    goto skip_3;
    // 0x80218500: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    skip_3:
    // 0x80218504: jr          $ra
    // 0x80218508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80218508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021850C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
L_80218510:
    // 0x80218510: nop

    // 0x80218514: bc1fl       L_80218528
    if (!c1cs) {
        // 0x80218518: lwc1        $f4, 0xC($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
            goto L_80218528;
    }
    goto skip_4;
    // 0x80218518: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    skip_4:
    // 0x8021851C: jr          $ra
    // 0x80218520: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80218520: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218524: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
L_80218528:
    // 0x80218528: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8021852C: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80218530: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x80218534: nop

    // 0x80218538: bc1fl       L_80218574
    if (!c1cs) {
        // 0x8021853C: c.lt.s      $f14, $f10
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
            goto L_80218574;
    }
    goto skip_5;
    // 0x8021853C: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    skip_5:
    // 0x80218540: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80218544: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80218548: bc1fl       L_8021855C
    if (!c1cs) {
        // 0x8021854C: c.lt.s      $f8, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
            goto L_8021855C;
    }
    goto skip_6;
    // 0x8021854C: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    skip_6:
    // 0x80218550: jr          $ra
    // 0x80218554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80218554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218558: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
L_8021855C:
    // 0x8021855C: nop

    // 0x80218560: bc1fl       L_802185A8
    if (!c1cs) {
        // 0x80218564: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802185A8;
    }
    goto skip_7;
    // 0x80218564: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_7:
    // 0x80218568: jr          $ra
    // 0x8021856C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021856C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218570: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
L_80218574:
    // 0x80218574: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80218578: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8021857C: bc1fl       L_80218590
    if (!c1cs) {
        // 0x80218580: c.lt.s      $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
            goto L_80218590;
    }
    goto skip_8;
    // 0x80218580: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    skip_8:
    // 0x80218584: jr          $ra
    // 0x80218588: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80218588: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021858C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
L_80218590:
    // 0x80218590: nop

    // 0x80218594: bc1fl       L_802185A8
    if (!c1cs) {
        // 0x80218598: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802185A8;
    }
    goto skip_9;
    // 0x80218598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_9:
    // 0x8021859C: jr          $ra
    // 0x802185A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802185A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802185A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802185A8:
    // 0x802185A8: jr          $ra
    // 0x802185AC: nop

    return;
    // 0x802185AC: nop

;}
RECOMP_FUNC void D_802413D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802413D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802413D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802413DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802413E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802413E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802413E8: lbu         $t6, 0x34($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X34);
    // 0x802413EC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802413F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802413F4: blez        $t6, L_8024142C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802413F8: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8024142C;
    }
    // 0x802413F8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802413FC: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
L_80241400:
    // 0x80241400: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80241404: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80241408: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x8024140C: jal         0x8023FD34
    // 0x80241410: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    static_3_8023FD34(rdram, ctx);
        goto after_0;
    // 0x80241410: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    after_0:
    // 0x80241414: lbu         $t9, 0x34($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X34);
    // 0x80241418: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8024141C: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x80241420: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80241424: bnel        $at, $zero, L_80241400
    if (ctx->r1 != 0) {
        // 0x80241428: lw          $t7, 0x60($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X60);
            goto L_80241400;
    }
    goto skip_0;
    // 0x80241428: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
    skip_0:
L_8024142C:
    // 0x8024142C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80241430: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80241434: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80241438: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024143C: jr          $ra
    // 0x80241440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80241440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802A22E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2364: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A2368: jr          $ra
    // 0x802A236C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A236C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802C7C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C7CBC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802C7CC0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802C7CC4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802C7CC8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802C7CCC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802C7CD0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802C7CD4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802C7CD8: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802C7CDC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802C7CE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802C7CE4: addiu       $v0, $zero, 0x4E20
    ctx->r2 = ADD32(0, 0X4E20);
    // 0x802C7CE8: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802C7CEC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802C7CF0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802C7CF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802C7CF8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802C7CFC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802C7D00: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802C7D04: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x802C7D08: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802C7D0C: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x802C7D10: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x802C7D14: nop

    // 0x802C7D18: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C7D1C: mflo        $t8
    ctx->r24 = lo;
    // 0x802C7D20: sw          $t8, 0x134($a0)
    MEM_W(0X134, ctx->r4) = ctx->r24;
    // 0x802C7D24: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802C7D28: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802C7D2C: add.d       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f6.d + ctx->f16.d;
    // 0x802C7D30: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x802C7D34: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x802C7D38: nop

    // 0x802C7D3C: multu       $t0, $v0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C7D40: mflo        $t1
    ctx->r9 = lo;
    // 0x802C7D44: sw          $t1, 0x138($a0)
    MEM_W(0X138, ctx->r4) = ctx->r9;
    // 0x802C7D48: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802C7D4C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802C7D50: div.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x802C7D54: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802C7D58: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x802C7D5C: add.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f4.d + ctx->f16.d;
    // 0x802C7D60: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x802C7D64: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x802C7D68: nop

    // 0x802C7D6C: multu       $t3, $v0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C7D70: mflo        $t4
    ctx->r12 = lo;
    // 0x802C7D74: sw          $t4, 0x13C($a0)
    MEM_W(0X13C, ctx->r4) = ctx->r12;
    // 0x802C7D78: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802C7D7C: sub.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x802C7D80: div.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x802C7D84: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802C7D88: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802C7D8C: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x802C7D90: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x802C7D94: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x802C7D98: nop

    // 0x802C7D9C: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C7DA0: mflo        $t7
    ctx->r15 = lo;
    // 0x802C7DA4: sw          $t7, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->r15;
    // 0x802C7DA8: lwc1        $f8, 0x14($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802C7DAC: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802C7DB0: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802C7DB4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802C7DB8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802C7DBC: add.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f8.d + ctx->f16.d;
    // 0x802C7DC0: trunc.w.d   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x802C7DC4: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x802C7DC8: nop

    // 0x802C7DCC: multu       $t9, $v0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802C7DD0: mflo        $t0
    ctx->r8 = lo;
    // 0x802C7DD4: sw          $t0, 0x144($a0)
    MEM_W(0X144, ctx->r4) = ctx->r8;
    // 0x802C7DD8: jr          $ra
    // 0x802C7DDC: nop

    return;
    // 0x802C7DDC: nop

;}
RECOMP_FUNC void D_80279C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279CEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80279CF0: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80279CF4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80279CF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80279CFC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80279D00: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80279D04: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80279D08: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80279D0C: addiu       $a1, $t6, 0x6EFC
    ctx->r5 = ADD32(ctx->r14, 0X6EFC);
    // 0x80279D10: addiu       $a0, $a0, 0x6EEC
    ctx->r4 = ADD32(ctx->r4, 0X6EEC);
    // 0x80279D14: addiu       $a3, $t6, 0x6EFD
    ctx->r7 = ADD32(ctx->r14, 0X6EFD);
    // 0x80279D18: jal         0x802A2900
    // 0x80279D1C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    static_3_802A2900(rdram, ctx);
        goto after_0;
    // 0x80279D1C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x80279D20: beq         $v0, $zero, L_80279D6C
    if (ctx->r2 == 0) {
        // 0x80279D24: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80279D6C;
    }
    // 0x80279D24: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80279D28: lw          $v0, 0x1A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1A0);
    // 0x80279D2C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80279D30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80279D34: lh          $t8, 0x70($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X70);
    // 0x80279D38: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80279D3C: lw          $t9, 0x74($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X74);
    // 0x80279D40: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    // 0x80279D44: jalr        $t9
    // 0x80279D48: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80279D48: nop

    after_1:
    // 0x80279D4C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80279D50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80279D54: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x80279D58: lw          $t9, 0xAC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XAC);
    // 0x80279D5C: lh          $t0, 0xA8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XA8);
    // 0x80279D60: jalr        $t9
    // 0x80279D64: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80279D64: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    after_2:
    // 0x80279D68: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_80279D6C:
    // 0x80279D6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80279D70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80279D74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80279D78: jr          $ra
    // 0x80279D7C: nop

    return;
    // 0x80279D7C: nop

;}
RECOMP_FUNC void D_8027AA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AAB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027AABC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027AAC0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8027AAC4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8027AAC8: lbu         $a3, 0x67BC($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X67BC);
    // 0x8027AACC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8027AAD0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8027AAD4: blez        $a3, L_8027AB1C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8027AAD8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8027AB1C;
    }
    // 0x8027AAD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027AADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8027AAE0:
    // 0x8027AAE0: lw          $v0, 0x67AC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X67AC);
    // 0x8027AAE4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8027AAE8: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8027AAEC: beq         $v0, $zero, L_8027AB14
    if (ctx->r2 == 0) {
        // 0x8027AAF0: nop
    
            goto L_8027AB14;
    }
    // 0x8027AAF0: nop

    // 0x8027AAF4: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x8027AAF8: bne         $a1, $t6, L_8027AB14
    if (ctx->r5 != ctx->r14) {
        // 0x8027AAFC: nop
    
            goto L_8027AB14;
    }
    // 0x8027AAFC: nop

    // 0x8027AB00: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8027AB04: bne         $s0, $t7, L_8027AB14
    if (ctx->r16 != ctx->r15) {
        // 0x8027AB08: nop
    
            goto L_8027AB14;
    }
    // 0x8027AB08: nop

    // 0x8027AB0C: b           L_8027AB80
    // 0x8027AB10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027AB80;
    // 0x8027AB10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027AB14:
    // 0x8027AB14: bne         $at, $zero, L_8027AAE0
    if (ctx->r1 != 0) {
        // 0x8027AB18: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8027AAE0;
    }
    // 0x8027AB18: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_8027AB1C:
    // 0x8027AB1C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8027AB20: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8027AB24: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8027AB28: addiu       $a0, $s1, 0x67AC
    ctx->r4 = ADD32(ctx->r17, 0X67AC);
    // 0x8027AB2C: addiu       $a1, $s1, 0x67BC
    ctx->r5 = ADD32(ctx->r17, 0X67BC);
    // 0x8027AB30: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8027AB34: jal         0x802A3690
    // 0x8027AB38: addiu       $a3, $s1, 0x67BD
    ctx->r7 = ADD32(ctx->r17, 0X67BD);
    static_3_802A3690(rdram, ctx);
        goto after_0;
    // 0x8027AB38: addiu       $a3, $s1, 0x67BD
    ctx->r7 = ADD32(ctx->r17, 0X67BD);
    after_0:
    // 0x8027AB3C: beq         $v0, $zero, L_8027AB7C
    if (ctx->r2 == 0) {
        // 0x8027AB40: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8027AB7C;
    }
    // 0x8027AB40: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8027AB44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027AB48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8027AB4C: jal         0x802E8804
    // 0x8027AB50: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_802E8784(rdram, ctx);
        goto after_1;
    // 0x8027AB50: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027AB54: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8027AB58: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8027AB5C: lw          $v0, 0xB8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB8);
    // 0x8027AB60: sb          $t9, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r25;
    // 0x8027AB64: lh          $t0, 0x48($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X48);
    // 0x8027AB68: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x8027AB6C: addu        $a0, $t0, $a2
    ctx->r4 = ADD32(ctx->r8, ctx->r6);
    // 0x8027AB70: jalr        $t9
    // 0x8027AB74: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027AB74: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_2:
    // 0x8027AB78: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
L_8027AB7C:
    // 0x8027AB7C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_8027AB80:
    // 0x8027AB80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8027AB84: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8027AB88: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8027AB8C: jr          $ra
    // 0x8027AB90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027AB90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802C80E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8160: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x802C8164: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802C8168: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802C816C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802C8170: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x802C8174: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x802C8178: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802C817C: jal         0x80207130
    // 0x802C8180: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802C8180: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802C8184: lwc1        $f4, 0x20($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X20);
    // 0x802C8188: lw          $t6, 0x44($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X44);
    // 0x802C818C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802C8190: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802C8194: sub.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d - ctx->f6.d;
    // 0x802C8198: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x802C819C: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x802C81A0: nop

    // 0x802C81A4: bc1f        L_802C81B0
    if (!c1cs) {
        // 0x802C81A8: nop
    
            goto L_802C81B0;
    }
    // 0x802C81A8: nop

    // 0x802C81AC: sb          $zero, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = 0;
L_802C81B0:
    // 0x802C81B0: jal         0x8022331C
    // 0x802C81B4: nop

    static_3_8022331C(rdram, ctx);
        goto after_1;
    // 0x802C81B4: nop

    after_1:
    // 0x802C81B8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802C81BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802C81C0: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802C81C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802C81C8: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x802C81CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802C81D0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802C81D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802C81D8: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802C81DC: jal         0x8022A848
    // 0x802C81E0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_2;
    // 0x802C81E0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x802C81E4: jal         0x80221B2C
    // 0x802C81E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80221B2C(rdram, ctx);
        goto after_3;
    // 0x802C81E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802C81EC: jal         0x8022970C
    // 0x802C81F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x802C81F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802C81F4: jal         0x8022149C
    // 0x802C81F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022149C(rdram, ctx);
        goto after_5;
    // 0x802C81F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802C81FC: lui         $a0, 0xC2
    ctx->r4 = S32(0XC2 << 16);
    // 0x802C8200: jal         0x802233EC
    // 0x802C8204: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    static_3_802233EC(rdram, ctx);
        goto after_6;
    // 0x802C8204: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    after_6:
    // 0x802C8208: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x802C820C: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x802C8210: sb          $t7, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r15;
    // 0x802C8214: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x802C8218: sb          $t8, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r24;
    // 0x802C821C: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x802C8220: sb          $t9, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r25;
    // 0x802C8224: lbu         $t0, 0x3($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3);
    // 0x802C8228: jal         0x8021F4E4
    // 0x802C822C: sb          $t0, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r8;
    static_3_8021F4E4(rdram, ctx);
        goto after_7;
    // 0x802C822C: sb          $t0, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r8;
    after_7:
    // 0x802C8230: lbu         $s0, 0x53($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X53);
    // 0x802C8234: lbu         $s1, 0x52($sp)
    ctx->r17 = MEM_BU(ctx->r29, 0X52);
    // 0x802C8238: lbu         $s2, 0x51($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X51);
    // 0x802C823C: lbu         $s3, 0x50($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X50);
    // 0x802C8240: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802C8244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802C8248: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C824C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C8250: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802C8254: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802C8258: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802C825C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802C8260: jal         0x8021F35C
    // 0x802C8264: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x802C8264: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    after_8:
    // 0x802C8268: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    // 0x802C826C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802C8270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C8274: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C8278: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802C827C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802C8280: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802C8284: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802C8288: jal         0x8021F35C
    // 0x802C828C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802C828C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    after_9:
    // 0x802C8290: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    // 0x802C8294: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x802C8298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C829C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C82A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802C82A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802C82A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802C82AC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802C82B0: jal         0x8021F35C
    // 0x802C82B4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802C82B4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    after_10:
    // 0x802C82B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802C82BC: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x802C82C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C82C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C82C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802C82CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802C82D0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802C82D4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802C82D8: jal         0x8021F35C
    // 0x802C82DC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802C82DC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    after_11:
    // 0x802C82E0: jal         0x8021FCD0
    // 0x802C82E4: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_12;
    // 0x802C82E4: nop

    after_12:
    // 0x802C82E8: jal         0x802230E4
    // 0x802C82EC: nop

    static_3_802230E4(rdram, ctx);
        goto after_13;
    // 0x802C82EC: nop

    after_13:
    // 0x802C82F0: jal         0x8022337C
    // 0x802C82F4: nop

    static_3_8022337C(rdram, ctx);
        goto after_14;
    // 0x802C82F4: nop

    after_14:
    // 0x802C82F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802C82FC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802C8300: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802C8304: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x802C8308: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x802C830C: jr          $ra
    // 0x802C8310: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x802C8310: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void D_80291D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80291D80: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x80291D84: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x80291D88: addiu       $s4, $sp, 0xA8
    ctx->r20 = ADD32(ctx->r29, 0XA8);
    // 0x80291D8C: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x80291D90: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x80291D94: sw          $a1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r5;
    // 0x80291D98: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80291D9C: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x80291DA0: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x80291DA4: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x80291DA8: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x80291DAC: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x80291DB0: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x80291DB4: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x80291DB8: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x80291DBC: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x80291DC0: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x80291DC4: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x80291DC8: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x80291DCC: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x80291DD0: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x80291DD4: jal         0x802C51D0
    // 0x80291DD8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80291DD8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_0:
    // 0x80291DDC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80291DE0: addiu       $t6, $sp, 0xF4
    ctx->r14 = ADD32(ctx->r29, 0XF4);
    // 0x80291DE4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80291DE8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80291DEC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80291DF0: lwc1        $f4, 0x154($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X154);
    // 0x80291DF4: addiu       $s7, $sp, 0xFC
    ctx->r23 = ADD32(ctx->r29, 0XFC);
    // 0x80291DF8: addiu       $fp, $sp, 0xF8
    ctx->r30 = ADD32(ctx->r29, 0XF8);
    // 0x80291DFC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80291E00: lwc1        $f6, 0x158($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X158);
    // 0x80291E04: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x80291E08: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80291E0C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80291E10: lw          $t8, 0x8C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X8C);
    // 0x80291E14: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80291E18: jal         0x802ADA50
    // 0x80291E1C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    static_3_802ADA50(rdram, ctx);
        goto after_1;
    // 0x80291E1C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_1:
    // 0x80291E20: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80291E24: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80291E28: lwc1        $f20, 0xE0($s3)
    ctx->f20.u32l = MEM_W(ctx->r19, 0XE0);
    // 0x80291E2C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80291E30: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80291E34: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80291E38: jal         0x8022A0D0
    // 0x80291E3C: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x80291E3C: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_2:
    // 0x80291E40: bne         $s5, $zero, L_80291EB0
    if (ctx->r21 != 0) {
        // 0x80291E44: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80291EB0;
    }
    // 0x80291E44: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80291E48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80291E4C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80291E50: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80291E54: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80291E58: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80291E5C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80291E60: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80291E64: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80291E68: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80291E6C: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x80291E70: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x80291E74: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x80291E78: swc1        $f30, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f30.u32l;
    // 0x80291E7C: lw          $t9, 0x8C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X8C);
    // 0x80291E80: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80291E84: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80291E88: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80291E8C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80291E90: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80291E94: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80291E98: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80291E9C: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x80291EA0: jal         0x802AB018
    // 0x80291EA4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    static_3_802AB018(rdram, ctx);
        goto after_3;
    // 0x80291EA4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_3:
    // 0x80291EA8: b           L_80291FF0
    // 0x80291EAC: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
        goto L_80291FF0;
    // 0x80291EAC: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
L_80291EB0:
    // 0x80291EB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80291EB4: jal         0x802C5844
    // 0x80291EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802C5844(rdram, ctx);
        goto after_4;
    // 0x80291EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80291EBC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80291EC0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80291EC4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80291EC8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80291ECC: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80291ED0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80291ED4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80291ED8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80291EDC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80291EE0: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80291EE4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80291EE8:
    // 0x80291EE8: bgez        $s0, L_80291EFC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80291EEC: andi        $t2, $s0, 0x1
        ctx->r10 = ctx->r16 & 0X1;
            goto L_80291EFC;
    }
    // 0x80291EEC: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x80291EF0: beq         $t2, $zero, L_80291EFC
    if (ctx->r10 == 0) {
        // 0x80291EF4: nop
    
            goto L_80291EFC;
    }
    // 0x80291EF4: nop

    // 0x80291EF8: addiu       $t2, $t2, -0x2
    ctx->r10 = ADD32(ctx->r10, -0X2);
L_80291EFC:
    // 0x80291EFC: bne         $s2, $t2, L_80291F1C
    if (ctx->r18 != ctx->r10) {
        // 0x80291F00: negu        $t3, $s0
        ctx->r11 = SUB32(0, ctx->r16);
            goto L_80291F1C;
    }
    // 0x80291F00: negu        $t3, $s0
    ctx->r11 = SUB32(0, ctx->r16);
    // 0x80291F04: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x80291F08: nop

    // 0x80291F0C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80291F10: mul.s       $f2, $f22, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x80291F14: b           L_80291F3C
    // 0x80291F18: sub.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f2.fl;
        goto L_80291F3C;
    // 0x80291F18: sub.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f2.fl;
L_80291F1C:
    // 0x80291F1C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80291F20: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80291F24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80291F28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80291F2C: mul.s       $f2, $f22, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x80291F30: nop

    // 0x80291F34: mul.s       $f8, $f22, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x80291F38: sub.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f8.fl;
L_80291F3C:
    // 0x80291F3C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80291F40: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80291F44: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80291F48: jal         0x8022A0D0
    // 0x80291F4C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_8022A0D0(rdram, ctx);
        goto after_5;
    // 0x80291F4C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_5:
    // 0x80291F50: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80291F54: swc1        $f30, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f30.u32l;
    // 0x80291F58: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x80291F5C: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x80291F60: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x80291F64: lw          $t4, 0x8C($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X8C);
    // 0x80291F68: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80291F6C: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80291F70: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80291F74: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80291F78: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80291F7C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80291F80: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80291F84: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x80291F88: jal         0x802AB018
    // 0x80291F8C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    static_3_802AB018(rdram, ctx);
        goto after_6;
    // 0x80291F8C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_6:
    // 0x80291F90: beq         $v0, $zero, L_80291FD0
    if (ctx->r2 == 0) {
        // 0x80291F94: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80291FD0;
    }
    // 0x80291F94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80291F98: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80291F9C: addu        $v1, $sp, $v0
    ctx->r3 = ADD32(ctx->r29, ctx->r2);
    // 0x80291FA0: lw          $v1, 0xF4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XF4);
    // 0x80291FA4: addu        $t7, $s7, $v0
    ctx->r15 = ADD32(ctx->r23, ctx->r2);
    // 0x80291FA8: bne         $s2, $v1, L_80291FC0
    if (ctx->r18 != ctx->r3) {
        // 0x80291FAC: nop
    
            goto L_80291FC0;
    }
    // 0x80291FAC: nop

    // 0x80291FB0: jal         0x802D0CC0
    // 0x80291FB4: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    static_3_802D0CC0(rdram, ctx);
        goto after_7;
    // 0x80291FB4: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    after_7:
    // 0x80291FB8: b           L_80291FD4
    // 0x80291FBC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_80291FD4;
    // 0x80291FBC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80291FC0:
    // 0x80291FC0: bne         $s6, $v1, L_80291FD0
    if (ctx->r22 != ctx->r3) {
        // 0x80291FC4: addu        $t8, $fp, $v0
        ctx->r24 = ADD32(ctx->r30, ctx->r2);
            goto L_80291FD0;
    }
    // 0x80291FC4: addu        $t8, $fp, $v0
    ctx->r24 = ADD32(ctx->r30, ctx->r2);
    // 0x80291FC8: jal         0x802D0C7C
    // 0x80291FCC: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    static_3_802D0C7C(rdram, ctx);
        goto after_8;
    // 0x80291FCC: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    after_8:
L_80291FD0:
    // 0x80291FD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80291FD4:
    // 0x80291FD4: slt         $at, $s1, $s5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80291FD8: bne         $at, $zero, L_80291FE4
    if (ctx->r1 != 0) {
        // 0x80291FDC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80291FE4;
    }
    // 0x80291FDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80291FE0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80291FE4:
    // 0x80291FE4: bne         $s0, $s2, L_80291EE8
    if (ctx->r16 != ctx->r18) {
        // 0x80291FE8: nop
    
            goto L_80291EE8;
    }
    // 0x80291FE8: nop

    // 0x80291FEC: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
L_80291FF0:
    // 0x80291FF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80291FF4: swc1        $f10, 0xF4($s3)
    MEM_W(0XF4, ctx->r19) = ctx->f10.u32l;
    // 0x80291FF8: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x80291FFC: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x80292000: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x80292004: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x80292008: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x8029200C: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x80292010: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x80292014: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x80292018: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x8029201C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x80292020: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x80292024: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x80292028: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x8029202C: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x80292030: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x80292034: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x80292038: jr          $ra
    // 0x8029203C: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x8029203C: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void D_8022ABD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022ABD0: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x8022ABD4: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x8022ABD8: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022ABDC: sra         $t6, $v0, 22
    ctx->r14 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022ABE0: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x8022ABE4: slti        $at, $t7, 0x136
    ctx->r1 = SIGNED(ctx->r15) < 0X136 ? 1 : 0;
    // 0x8022ABE8: beql        $at, $zero, L_8022AD34
    if (ctx->r1 == 0) {
        // 0x8022ABEC: c.eq.s      $f6, $f6
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f6.fl == ctx->f6.fl;
            goto L_8022AD34;
    }
    goto skip_0;
    // 0x8022ABEC: c.eq.s      $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f6.fl == ctx->f6.fl;
    skip_0:
    // 0x8022ABF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022ABF4: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022ABF8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022ABFC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8022AC00: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8022AC04: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022AC08: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AC0C: bc1fl       L_8022AC20
    if (!c1cs) {
        // 0x8022AC10: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_8022AC20;
    }
    goto skip_1;
    // 0x8022AC10: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_1:
    // 0x8022AC14: b           L_8022AC20
    // 0x8022AC18: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
        goto L_8022AC20;
    // 0x8022AC18: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
    // 0x8022AC1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8022AC20:
    // 0x8022AC20: ldc1        $f8, 0x0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X0);
    // 0x8022AC24: cvt.d.s     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.d = CVT_D_S(ctx->f0.fl);
    // 0x8022AC28: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8022AC2C: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8022AC30: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x8022AC34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022AC38: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022AC3C: add.d       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f14.d = ctx->f10.d + ctx->f18.d;
    // 0x8022AC40: c.le.d      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.d <= ctx->f14.d;
    // 0x8022AC44: nop

    // 0x8022AC48: bc1fl       L_8022AC78
    if (!c1cs) {
        // 0x8022AC4C: mtc1        $at, $f5
        ctx->f_odd[(5 - 1) * 2] = ctx->r1;
            goto L_8022AC78;
    }
    goto skip_2;
    // 0x8022AC4C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    skip_2:
    // 0x8022AC50: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022AC54: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8022AC58: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8022AC5C: nop

    // 0x8022AC60: add.d       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f14.d + ctx->f6.d;
    // 0x8022AC64: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x8022AC68: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8022AC6C: b           L_8022AC94
    // 0x8022AC70: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
        goto L_8022AC94;
    // 0x8022AC70: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8022AC74: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
L_8022AC78:
    // 0x8022AC78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022AC7C: nop

    // 0x8022AC80: sub.d       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f14.d - ctx->f4.d;
    // 0x8022AC84: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x8022AC88: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8022AC8C: nop

    // 0x8022AC90: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
L_8022AC94:
    // 0x8022AC94: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AC98: ldc1        $f6, 0x0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X0);
    // 0x8022AC9C: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x8022ACA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022ACA4: ldc1        $f10, 0x0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X0);
    // 0x8022ACA8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022ACAC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022ACB0: sub.d       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = ctx->f4.d - ctx->f18.d;
    // 0x8022ACB4: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x8022ACB8: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x8022ACBC: ldc1        $f6, 0x20($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X20);
    // 0x8022ACC0: mul.d       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x8022ACC4: ldc1        $f10, 0x18($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X18);
    // 0x8022ACC8: sub.d       $f2, $f12, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = ctx->f12.d - ctx->f8.d;
    // 0x8022ACCC: sub.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d - ctx->f4.d;
    // 0x8022ACD0: mul.d       $f14, $f2, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f14.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8022ACD4: nop

    // 0x8022ACD8: mul.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f14.d);
    // 0x8022ACDC: add.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d + ctx->f10.d;
    // 0x8022ACE0: ldc1        $f8, 0x10($v1)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r3, 0X10);
    // 0x8022ACE4: mul.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f14.d);
    // 0x8022ACE8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8022ACEC: ldc1        $f6, 0x8($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X8);
    // 0x8022ACF0: mul.d       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f14.d);
    // 0x8022ACF4: bne         $t0, $zero, L_8022AD14
    if (ctx->r8 != 0) {
        // 0x8022ACF8: add.d       $f16, $f6, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f6.d + ctx->f4.d;
            goto L_8022AD14;
    }
    // 0x8022ACF8: add.d       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f6.d + ctx->f4.d;
    // 0x8022ACFC: mul.d       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f14.d);
    // 0x8022AD00: nop

    // 0x8022AD04: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8022AD08: add.d       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f10.d + ctx->f2.d;
    // 0x8022AD0C: jr          $ra
    // 0x8022AD10: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    return;
    // 0x8022AD10: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
L_8022AD14:
    // 0x8022AD14: mul.d       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f14.d);
    // 0x8022AD18: nop

    // 0x8022AD1C: mul.d       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x8022AD20: add.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d + ctx->f2.d;
    // 0x8022AD24: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x8022AD28: jr          $ra
    // 0x8022AD2C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x8022AD2C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8022AD30: c.eq.s      $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f6.fl == ctx->f6.fl;
L_8022AD34:
    // 0x8022AD34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AD38: bc1tl       L_8022AD4C
    if (c1cs) {
        // 0x8022AD3C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8022AD4C;
    }
    goto skip_3;
    // 0x8022AD3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_3:
    // 0x8022AD40: jr          $ra
    // 0x8022AD44: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    return;
    // 0x8022AD44: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8022AD48: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_8022AD4C:
    // 0x8022AD4C: nop

    // 0x8022AD50: jr          $ra
    // 0x8022AD54: nop

    return;
    // 0x8022AD54: nop

;}
RECOMP_FUNC void D_8027A04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A0C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027A0C8: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A0CC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A0D0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027A0D4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8027A0D8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8027A0DC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8027A0E0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8027A0E4: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A0E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8027A0EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A0F0: addiu       $a3, $t6, 0x6E61
    ctx->r7 = ADD32(ctx->r14, 0X6E61);
    // 0x8027A0F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8027A0F8: addiu       $a1, $t6, 0x6E60
    ctx->r5 = ADD32(ctx->r14, 0X6E60);
    // 0x8027A0FC: jal         0x802A2F30
    // 0x8027A100: addiu       $a0, $a0, 0x6E58
    ctx->r4 = ADD32(ctx->r4, 0X6E58);
    static_3_802A2F30(rdram, ctx);
        goto after_0;
    // 0x8027A100: addiu       $a0, $a0, 0x6E58
    ctx->r4 = ADD32(ctx->r4, 0X6E58);
    after_0:
    // 0x8027A104: beq         $v0, $zero, L_8027A154
    if (ctx->r2 == 0) {
        // 0x8027A108: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8027A154;
    }
    // 0x8027A108: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027A10C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8027A110: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8027A114: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8027A118: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A11C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8027A120: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x8027A124: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A128: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8027A12C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8027A130: jal         0x8029FD5C
    // 0x8027A134: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_8029FD5C(rdram, ctx);
        goto after_1;
    // 0x8027A134: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_1:
    // 0x8027A138: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8027A13C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027A140: lh          $t9, 0x28($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X28);
    // 0x8027A144: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x8027A148: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x8027A14C: jalr        $t9
    // 0x8027A150: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027A150: nop

    after_2:
L_8027A154:
    // 0x8027A154: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A158: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8027A15C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8027A160: jr          $ra
    // 0x8027A164: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027A164: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802CF150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF1D0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802CF1D4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802CF1D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CF1DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CF1E0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802CF1E4: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802CF1E8: jal         0x8028DA48
    // 0x802CF1EC: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028DA48(rdram, ctx);
        goto after_0;
    // 0x802CF1EC: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802CF1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CF1F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CF1F8: jr          $ra
    // 0x802CF1FC: nop

    return;
    // 0x802CF1FC: nop

;}
RECOMP_FUNC void func_8022B460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B460: sb          $t7, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r15;
    // 0x8022B464: b           L_8022B57C
    // 0x8022B468: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8022B57C;
    // 0x8022B468: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
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
