#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802C9AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9B78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802C9B7C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802C9B80: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802C9B84: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802C9B88: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802C9B8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802C9B90: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802C9B94: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802C9B98: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802C9B9C: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_802C9BA0:
    // 0x802C9BA0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802C9BA4: beql        $a0, $zero, L_802C9BCC
    if (ctx->r4 == 0) {
        // 0x802C9BA8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802C9BCC;
    }
    goto skip_0;
    // 0x802C9BA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802C9BAC: jal         0x802F9244
    // 0x802C9BB0: nop

    static_3_802F9244(rdram, ctx);
        goto after_0;
    // 0x802C9BB0: nop

    after_0:
    // 0x802C9BB4: beq         $v0, $zero, L_802C9BC0
    if (ctx->r2 == 0) {
        // 0x802C9BB8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802C9BC0;
    }
    // 0x802C9BB8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802C9BBC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_802C9BC0:
    // 0x802C9BC0: bne         $s0, $s2, L_802C9BA0
    if (ctx->r16 != ctx->r18) {
        // 0x802C9BC4: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802C9BA0;
    }
    // 0x802C9BC4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802C9BC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802C9BCC:
    // 0x802C9BCC: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x802C9BD0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802C9BD4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802C9BD8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802C9BDC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802C9BE0: jr          $ra
    // 0x802C9BE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802C9BE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802B798C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7A0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B7A10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B7A14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B7A18: lbu         $t6, 0x968($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7A1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B7A20: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    // 0x802B7A24: beql        $t6, $zero, L_802B7A94
    if (ctx->r14 == 0) {
        // 0x802B7A28: sb          $zero, 0x7D0($s0)
        MEM_B(0X7D0, ctx->r16) = 0;
            goto L_802B7A94;
    }
    goto skip_0;
    // 0x802B7A28: sb          $zero, 0x7D0($s0)
    MEM_B(0X7D0, ctx->r16) = 0;
    skip_0:
    // 0x802B7A2C: lbu         $t7, 0x7D0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X7D0);
    // 0x802B7A30: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x802B7A34: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7A38: bnel        $t7, $zero, L_802B7A94
    if (ctx->r15 != 0) {
        // 0x802B7A3C: sb          $zero, 0x7D0($s0)
        MEM_B(0X7D0, ctx->r16) = 0;
            goto L_802B7A94;
    }
    goto skip_1;
    // 0x802B7A3C: sb          $zero, 0x7D0($s0)
    MEM_B(0X7D0, ctx->r16) = 0;
    skip_1:
    // 0x802B7A40: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802B7A44: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802B7A48: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7A4C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B7A50: addiu       $a0, $v0, 0x8F4
    ctx->r4 = ADD32(ctx->r2, 0X8F4);
    // 0x802B7A54: jal         0x80302988
    // 0x802B7A58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80302988(rdram, ctx);
        goto after_0;
    // 0x802B7A58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802B7A5C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802B7A60: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802B7A64: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B7A68: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    // 0x802B7A6C: jal         0x80302988
    // 0x802B7A70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x802B7A70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x802B7A74: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B7A78: sb          $t8, 0x7D0($s0)
    MEM_B(0X7D0, ctx->r16) = ctx->r24;
    // 0x802B7A7C: sb          $zero, 0x7D1($s0)
    MEM_B(0X7D1, ctx->r16) = 0;
    // 0x802B7A80: sb          $zero, 0x7D2($s0)
    MEM_B(0X7D2, ctx->r16) = 0;
    // 0x802B7A84: sb          $zero, 0x7D3($s0)
    MEM_B(0X7D3, ctx->r16) = 0;
    // 0x802B7A88: b           L_802B7A94
    // 0x802B7A8C: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
        goto L_802B7A94;
    // 0x802B7A8C: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x802B7A90: sb          $zero, 0x7D0($s0)
    MEM_B(0X7D0, ctx->r16) = 0;
L_802B7A94:
    // 0x802B7A94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B7A98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B7A9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B7AA0: jr          $ra
    // 0x802B7AA4: nop

    return;
    // 0x802B7AA4: nop

;}
RECOMP_FUNC void D_802E9C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9CAC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E9CB0: jr          $ra
    // 0x802E9CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802E9CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_8023D420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D420: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8023D424: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8023D428: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023D42C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023D430: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023D434: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023D438: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8023D43C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8023D440: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023D444: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023D448: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023D44C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023D450: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8023D454: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8023D458: jal         0x80245AD0
    // 0x8023D45C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8023D45C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    after_0:
    // 0x8023D460: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x8023D464: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x8023D468: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x8023D46C: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x8023D470: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023D474: addiu       $s7, $sp, 0x54
    ctx->r23 = ADD32(ctx->r29, 0X54);
    // 0x8023D478: addiu       $s6, $sp, 0x67
    ctx->r22 = ADD32(ctx->r29, 0X67);
    // 0x8023D47C: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
L_8023D480:
    // 0x8023D480: jal         0x8023D604
    // 0x8023D484: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8023D604(rdram, ctx);
        goto after_1;
    // 0x8023D484: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8023D488: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023D48C: jal         0x802465B0
    // 0x8023D490: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_2;
    // 0x8023D490: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8023D494: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023D498: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8023D49C: jal         0x802374B0
    // 0x8023D4A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_3;
    // 0x8023D4A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8023D4A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8023D4A8: jal         0x802465B0
    // 0x8023D4AC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_4;
    // 0x8023D4AC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x8023D4B0: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x8023D4B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023D4B8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8023D4BC: jal         0x802374B0
    // 0x8023D4C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_5;
    // 0x8023D4C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8023D4C4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8023D4C8: jal         0x8023D6E4
    // 0x8023D4CC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    static_3_8023D6E4(rdram, ctx);
        goto after_6;
    // 0x8023D4CC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_6:
    // 0x8023D4D0: lbu         $v1, 0x0($fp)
    ctx->r3 = MEM_BU(ctx->r30, 0X0);
    // 0x8023D4D4: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x8023D4D8: blez        $v1, L_8023D50C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023D4DC: nop
    
            goto L_8023D50C;
    }
    // 0x8023D4DC: nop

L_8023D4E0:
    // 0x8023D4E0: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x8023D4E4: nop

    // 0x8023D4E8: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8023D4EC: bne         $t7, $zero, L_8023D4FC
    if (ctx->r15 != 0) {
        // 0x8023D4F0: nop
    
            goto L_8023D4FC;
    }
    // 0x8023D4F0: nop

    // 0x8023D4F4: b           L_8023D50C
    // 0x8023D4F8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
        goto L_8023D50C;
    // 0x8023D4F8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_8023D4FC:
    // 0x8023D4FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023D500: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023D504: bne         $at, $zero, L_8023D4E0
    if (ctx->r1 != 0) {
        // 0x8023D508: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8023D4E0;
    }
    // 0x8023D508: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8023D50C:
    // 0x8023D50C: xor         $v0, $s0, $v1
    ctx->r2 = ctx->r16 ^ ctx->r3;
    // 0x8023D510: bne         $v0, $zero, L_8023D51C
    if (ctx->r2 != 0) {
        // 0x8023D514: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8023D51C;
    }
    // 0x8023D514: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023D518: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8023D51C:
    // 0x8023D51C: bgtz        $s1, L_8023D480
    if (SIGNED(ctx->r17) > 0) {
        // 0x8023D520: nop
    
            goto L_8023D480;
    }
    // 0x8023D520: nop

    // 0x8023D524: blez        $v1, L_8023D56C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8023D528: addiu       $v0, $sp, 0x54
        ctx->r2 = ADD32(ctx->r29, 0X54);
            goto L_8023D56C;
    }
    // 0x8023D528: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
L_8023D52C:
    // 0x8023D52C: lbu         $t8, 0x3($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3);
    // 0x8023D530: nop

    // 0x8023D534: bne         $t8, $zero, L_8023D55C
    if (ctx->r24 != 0) {
        // 0x8023D538: nop
    
            goto L_8023D55C;
    }
    // 0x8023D538: nop

    // 0x8023D53C: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x8023D540: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8023D544: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8023D548: beq         $t0, $zero, L_8023D55C
    if (ctx->r8 == 0) {
        // 0x8023D54C: sllv        $t2, $t1, $s0
        ctx->r10 = S32(ctx->r9 << (ctx->r16 & 31));
            goto L_8023D55C;
    }
    // 0x8023D54C: sllv        $t2, $t1, $s0
    ctx->r10 = S32(ctx->r9 << (ctx->r16 & 31));
    // 0x8023D550: or          $s5, $s5, $t2
    ctx->r21 = ctx->r21 | ctx->r10;
    // 0x8023D554: andi        $t3, $s5, 0xFF
    ctx->r11 = ctx->r21 & 0XFF;
    // 0x8023D558: or          $s5, $t3, $zero
    ctx->r21 = ctx->r11 | 0;
L_8023D55C:
    // 0x8023D55C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023D560: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023D564: bne         $at, $zero, L_8023D52C
    if (ctx->r1 != 0) {
        // 0x8023D568: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8023D52C;
    }
    // 0x8023D568: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8023D56C:
    // 0x8023D56C: jal         0x80245B14
    // 0x8023D570: nop

    static_3_80245B14(rdram, ctx);
        goto after_7;
    // 0x8023D570: nop

    after_7:
    // 0x8023D574: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x8023D578: nop

    // 0x8023D57C: sb          $s5, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r21;
    // 0x8023D580: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8023D584: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8023D588: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8023D58C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023D590: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8023D594: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023D598: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023D59C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023D5A0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D5A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023D5A8: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8023D5AC: jr          $ra
    // 0x8023D5B0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8023D5B0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_802B1A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B1AD4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802B1AD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B1ADC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B1AE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B1AE4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x802B1AE8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x802B1AEC: jal         0x80318678
    // 0x802B1AF0: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    static_3_80318678(rdram, ctx);
        goto after_0;
    // 0x802B1AF0: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    after_0:
    // 0x802B1AF4: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    // 0x802B1AF8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x802B1AFC: jal         0x80317EC0
    // 0x802B1B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317EC0(rdram, ctx);
        goto after_1;
    // 0x802B1B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802B1B04: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802B1B08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B1B0C: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802B1B10: bne         $v0, $at, L_802B1B54
    if (ctx->r2 != ctx->r1) {
        // 0x802B1B14: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_802B1B54;
    }
    // 0x802B1B14: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x802B1B18: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x802B1B1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1B20: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1B24: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x802B1B28: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B1B2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B1B30: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802B1B34: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B1B38: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B1B3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B1B40: nop

    // 0x802B1B44: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802B1B48: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802B1B4C: b           L_802B1B98
    // 0x802B1B50: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
        goto L_802B1B98;
    // 0x802B1B50: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
L_802B1B54:
    // 0x802B1B54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B1B58: bne         $v0, $at, L_802B1B98
    if (ctx->r2 != ctx->r1) {
        // 0x802B1B5C: nop
    
            goto L_802B1B98;
    }
    // 0x802B1B5C: nop

    // 0x802B1B60: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x802B1B64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1B68: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1B6C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x802B1B70: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B1B74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B1B78: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802B1B7C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B1B80: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802B1B84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B1B88: nop

    // 0x802B1B8C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B1B90: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x802B1B94: swc1        $f16, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f16.u32l;
L_802B1B98:
    // 0x802B1B98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1B9C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1BA0: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B1BA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1BA8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1BAC: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802B1BB0: lwc1        $f16, 0x118($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X118);
    // 0x802B1BB4: sub.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x802B1BB8: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802B1BBC: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x802B1BC0: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802B1BC4: div.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802B1BC8: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x802B1BCC: swc1        $f2, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f2.u32l;
    // 0x802B1BD0: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802B1BD4: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x802B1BD8: jal         0x802CF4D0
    // 0x802B1BDC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    static_3_802CF4D0(rdram, ctx);
        goto after_2;
    // 0x802B1BDC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x802B1BE0: lbu         $t8, 0x104($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X104);
    // 0x802B1BE4: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802B1BE8: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
    // 0x802B1BEC: beq         $t8, $zero, L_802B1DD4
    if (ctx->r24 == 0) {
        // 0x802B1BF0: lwc1        $f18, 0x34($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
            goto L_802B1DD4;
    }
    // 0x802B1BF0: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802B1BF4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B1BF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B1BFC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802B1C00: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x802B1C04: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x802B1C08: nop

    // 0x802B1C0C: bc1t        L_802B1C2C
    if (c1cs) {
        // 0x802B1C10: nop
    
            goto L_802B1C2C;
    }
    // 0x802B1C10: nop

    // 0x802B1C14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B1C18: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1C1C: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x802B1C20: nop

    // 0x802B1C24: bc1fl       L_802B1C70
    if (!c1cs) {
        // 0x802B1C28: lwc1        $f6, 0x10C($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X10C);
            goto L_802B1C70;
    }
    goto skip_0;
    // 0x802B1C28: lwc1        $f6, 0x10C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10C);
    skip_0:
L_802B1C2C:
    // 0x802B1C2C: jal         0x80234AF0
    // 0x802B1C30: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    static_3_80234AF0(rdram, ctx);
        goto after_3;
    // 0x802B1C30: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    after_3:
    // 0x802B1C34: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B1C38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B1C3C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802B1C40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B1C44: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802B1C48: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802B1C4C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B1C50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802B1C54: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x802B1C58: sb          $zero, 0x104($s0)
    MEM_B(0X104, ctx->r16) = 0;
    // 0x802B1C5C: swc1        $f4, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f4.u32l;
    // 0x802B1C60: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802B1C64: b           L_802B1EC8
    // 0x802B1C68: swc1        $f8, 0x5CC($s0)
    MEM_W(0X5CC, ctx->r16) = ctx->f8.u32l;
        goto L_802B1EC8;
    // 0x802B1C68: swc1        $f8, 0x5CC($s0)
    MEM_W(0X5CC, ctx->r16) = ctx->f8.u32l;
    // 0x802B1C6C: lwc1        $f6, 0x10C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10C);
L_802B1C70:
    // 0x802B1C70: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1C74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802B1C78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802B1C7C: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x802B1C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B1C84: bc1fl       L_802B1C94
    if (!c1cs) {
        // 0x802B1C88: mtc1        $v0, $f16
        ctx->f16.u32l = ctx->r2;
            goto L_802B1C94;
    }
    goto skip_1;
    // 0x802B1C88: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    skip_1:
    // 0x802B1C8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802B1C90: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
L_802B1C94:
    // 0x802B1C94: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B1C98: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    // 0x802B1C9C: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802B1CA0: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802B1CA4: nop

    // 0x802B1CA8: bc1f        L_802B1CB8
    if (!c1cs) {
        // 0x802B1CAC: nop
    
            goto L_802B1CB8;
    }
    // 0x802B1CAC: nop

    // 0x802B1CB0: b           L_802B1CB8
    // 0x802B1CB4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_802B1CB8;
    // 0x802B1CB4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_802B1CB8:
    // 0x802B1CB8: beql        $v1, $zero, L_802B1D3C
    if (ctx->r3 == 0) {
        // 0x802B1CBC: lwc1        $f8, 0xAC($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0XAC);
            goto L_802B1D3C;
    }
    goto skip_2;
    // 0x802B1CBC: lwc1        $f8, 0xAC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XAC);
    skip_2:
    // 0x802B1CC0: sw          $t9, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r25;
    // 0x802B1CC4: jal         0x8031809C
    // 0x802B1CC8: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    static_3_8031809C(rdram, ctx);
        goto after_4;
    // 0x802B1CC8: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    after_4:
    // 0x802B1CCC: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x802B1CD0: lwc1        $f12, 0xB4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802B1CD4: jal         0x802CF4D0
    // 0x802B1CD8: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    static_3_802CF4D0(rdram, ctx);
        goto after_5;
    // 0x802B1CD8: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    after_5:
    // 0x802B1CDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B1CE0: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802B1CE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B1CE8: swc1        $f0, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f0.u32l;
    // 0x802B1CEC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B1CF0: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x802B1CF4: swc1        $f2, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f2.u32l;
    // 0x802B1CF8: bc1fl       L_802B1D14
    if (!c1cs) {
        // 0x802B1CFC: lwc1        $f18, 0xA0($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_802B1D14;
    }
    goto skip_3;
    // 0x802B1CFC: lwc1        $f18, 0xA0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA0);
    skip_3:
    // 0x802B1D00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B1D04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B1D08: b           L_802B1D44
    // 0x802B1D0C: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
        goto L_802B1D44;
    // 0x802B1D0C: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
    // 0x802B1D10: lwc1        $f18, 0xA0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA0);
L_802B1D14:
    // 0x802B1D14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B1D18: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B1D1C: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x802B1D20: nop

    // 0x802B1D24: bc1fl       L_802B1D48
    if (!c1cs) {
        // 0x802B1D28: lwc1        $f12, 0x110($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
            goto L_802B1D48;
    }
    goto skip_4;
    // 0x802B1D28: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
    skip_4:
    // 0x802B1D2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B1D30: b           L_802B1D44
    // 0x802B1D34: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
        goto L_802B1D44;
    // 0x802B1D34: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    // 0x802B1D38: lwc1        $f8, 0xAC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XAC);
L_802B1D3C:
    // 0x802B1D3C: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    // 0x802B1D40: swc1        $f8, 0x5CC($s0)
    MEM_W(0X5CC, ctx->r16) = ctx->f8.u32l;
L_802B1D44:
    // 0x802B1D44: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
L_802B1D48:
    // 0x802B1D48: jal         0x802CF4D0
    // 0x802B1D4C: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    static_3_802CF4D0(rdram, ctx);
        goto after_6;
    // 0x802B1D4C: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    after_6:
    // 0x802B1D50: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802B1D54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B1D58: lwc1        $f4, 0x10C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802B1D5C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802B1D60: mul.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B1D64: nop

    // 0x802B1D68: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802B1D6C: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x802B1D70: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x802B1D74: jal         0x802D2658
    // 0x802B1D78: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2658(rdram, ctx);
        goto after_7;
    // 0x802B1D78: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_7:
    // 0x802B1D7C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802B1D80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B1D84: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B1D88: swc1        $f4, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f4.u32l;
    // 0x802B1D8C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802B1D90: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B1D94: neg.s       $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = -ctx->f6.fl;
    // 0x802B1D98: div.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B1D9C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802B1DA0: swc1        $f2, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f2.u32l;
    // 0x802B1DA4: bc1fl       L_802B1DB8
    if (!c1cs) {
        // 0x802B1DA8: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802B1DB8;
    }
    goto skip_5;
    // 0x802B1DA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_5:
    // 0x802B1DAC: b           L_802B1EC8
    // 0x802B1DB0: swc1        $f12, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f12.u32l;
        goto L_802B1EC8;
    // 0x802B1DB0: swc1        $f12, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f12.u32l;
    // 0x802B1DB4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802B1DB8:
    // 0x802B1DB8: lwc1        $f10, 0x9C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802B1DBC: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x802B1DC0: nop

    // 0x802B1DC4: bc1fl       L_802B1ECC
    if (!c1cs) {
        // 0x802B1DC8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B1ECC;
    }
    goto skip_6;
    // 0x802B1DC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x802B1DCC: b           L_802B1EC8
    // 0x802B1DD0: swc1        $f0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f0.u32l;
        goto L_802B1EC8;
    // 0x802B1DD0: swc1        $f0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f0.u32l;
L_802B1DD4:
    // 0x802B1DD4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802B1DD8: nop

    // 0x802B1DDC: swc1        $f18, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f18.u32l;
    // 0x802B1DE0: jal         0x80234AF0
    // 0x802B1DE4: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    static_3_80234AF0(rdram, ctx);
        goto after_8;
    // 0x802B1DE4: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x802B1DE8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B1DEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B1DF0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802B1DF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B1DF8: sub.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x802B1DFC: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802B1E00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B1E04: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802B1E08: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B1E0C: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x802B1E10: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x802B1E14: nop

    // 0x802B1E18: bc1fl       L_802B1ECC
    if (!c1cs) {
        // 0x802B1E1C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B1ECC;
    }
    goto skip_7;
    // 0x802B1E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x802B1E20: lwc1        $f8, 0x10C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802B1E24: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B1E28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B1E2C: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x802B1E30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B1E34: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B1E38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B1E3C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B1E40: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802B1E44: swc1        $f0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f0.u32l;
    // 0x802B1E48: bc1fl       L_802B1E64
    if (!c1cs) {
        // 0x802B1E4C: lwc1        $f18, 0x9C($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X9C);
            goto L_802B1E64;
    }
    goto skip_8;
    // 0x802B1E4C: lwc1        $f18, 0x9C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X9C);
    skip_8:
    // 0x802B1E50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B1E54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B1E58: b           L_802B1E88
    // 0x802B1E5C: swc1        $f10, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f10.u32l;
        goto L_802B1E88;
    // 0x802B1E5C: swc1        $f10, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f10.u32l;
    // 0x802B1E60: lwc1        $f18, 0x9C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X9C);
L_802B1E64:
    // 0x802B1E64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B1E68: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B1E6C: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x802B1E70: nop

    // 0x802B1E74: bc1f        L_802B1E88
    if (!c1cs) {
        // 0x802B1E78: nop
    
            goto L_802B1E88;
    }
    // 0x802B1E78: nop

    // 0x802B1E7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B1E80: nop

    // 0x802B1E84: swc1        $f4, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f4.u32l;
L_802B1E88:
    // 0x802B1E88: jal         0x80234AF0
    // 0x802B1E8C: nop

    static_3_80234AF0(rdram, ctx);
        goto after_9;
    // 0x802B1E8C: nop

    after_9:
    // 0x802B1E90: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B1E94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B1E98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1E9C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1EA0: sub.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802B1EA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B1EA8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B1EAC: lwc1        $f6, 0x8C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802B1EB0: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x802B1EB4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B1EB8: sb          $t0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r8;
    // 0x802B1EBC: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x802B1EC0: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B1EC4: swc1        $f16, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f16.u32l;
L_802B1EC8:
    // 0x802B1EC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B1ECC:
    // 0x802B1ECC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B1ED0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802B1ED4: jr          $ra
    // 0x802B1ED8: nop

    return;
    // 0x802B1ED8: nop

;}
RECOMP_FUNC void D_802D8FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9030: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D9034: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802D9038: lwc1        $f4, 0x58($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X58);
    // 0x802D903C: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x802D9040: jr          $ra
    // 0x802D9044: swc1        $f6, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f6.u32l;
    return;
    // 0x802D9044: swc1        $f6, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_802D1E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1ED0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D1ED4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D1ED8: jal         0x80301EA0
    // 0x802D1EDC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D1EDC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x802D1EE0: beq         $v0, $zero, L_802D1F0C
    if (ctx->r2 == 0) {
        // 0x802D1EE4: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_802D1F0C;
    }
    // 0x802D1EE4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1EE8: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    // 0x802D1EEC: jal         0x8020164C
    // 0x802D1EF0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    static_3_8020164C(rdram, ctx);
        goto after_1;
    // 0x802D1EF0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x802D1EF4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1EF8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802D1EFC: lbu         $t9, 0x4($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X4);
    // 0x802D1F00: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x802D1F04: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x802D1F08: sb          $zero, 0x1E($t1)
    MEM_B(0X1E, ctx->r9) = 0;
L_802D1F0C:
    // 0x802D1F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1F14: jr          $ra
    // 0x802D1F18: nop

    return;
    // 0x802D1F18: nop

;}
RECOMP_FUNC void D_80237FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237FC0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80237FC4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80237FC8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80237FCC: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x80237FD0: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80237FD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80237FD8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80237FDC: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x80237FE0: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x80237FE4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80237FE8: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x80237FEC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_80237FF0:
    // 0x80237FF0: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    // 0x80237FF4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80237FF8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80237FFC: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x80238000: lw          $t1, 0x4C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4C);
    // 0x80238004: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80238008: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x8023800C: sw          $t1, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r9;
    // 0x80238010: lbu         $t2, 0x8C($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X8C);
    // 0x80238014: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80238018: sb          $t2, 0x96($a3)
    MEM_B(0X96, ctx->r7) = ctx->r10;
    // 0x8023801C: lbu         $t3, 0x9A($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X9A);
    // 0x80238020: sb          $t3, 0xA6($a3)
    MEM_B(0XA6, ctx->r7) = ctx->r11;
    // 0x80238024: lw          $t4, 0xA4($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XA4);
    // 0x80238028: sw          $t4, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->r12;
    // 0x8023802C: lw          $t5, 0x8($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X8);
    // 0x80238030: sw          $t5, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r13;
    // 0x80238034: lw          $t6, 0x48($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X48);
    // 0x80238038: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
    // 0x8023803C: lbu         $t7, 0x8B($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X8B);
    // 0x80238040: sb          $t7, 0x97($a3)
    MEM_B(0X97, ctx->r7) = ctx->r15;
    // 0x80238044: lbu         $t8, 0x9B($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X9B);
    // 0x80238048: sb          $t8, 0xA7($a3)
    MEM_B(0XA7, ctx->r7) = ctx->r24;
    // 0x8023804C: lw          $t9, 0xA8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XA8);
    // 0x80238050: bne         $v0, $a0, L_80237FF0
    if (ctx->r2 != ctx->r4) {
        // 0x80238054: sw          $t9, 0xB4($v1)
        MEM_W(0XB4, ctx->r3) = ctx->r25;
            goto L_80237FF0;
    }
    // 0x80238054: sw          $t9, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r25;
    // 0x80238058: jr          $ra
    // 0x8023805C: nop

    return;
    // 0x8023805C: nop

;}
RECOMP_FUNC void D_8029CDF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029CE74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029CE78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8029CE7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029CE80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8029CE84: jal         0x80233D58
    // 0x8029CE88: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    static_3_80233D58(rdram, ctx);
        goto after_0;
    // 0x8029CE88: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x8029CE8C: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x8029CE90: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8029CE94: beql        $a0, $at, L_8029CEA8
    if (ctx->r4 == ctx->r1) {
        // 0x8029CE98: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_8029CEA8;
    }
    goto skip_0;
    // 0x8029CE98: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_0:
    // 0x8029CE9C: jal         0x8021BAE0
    // 0x8029CEA0: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x8029CEA0: nop

    after_1:
    // 0x8029CEA4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_8029CEA8:
    // 0x8029CEA8: jal         0x802FA254
    // 0x8029CEAC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA254(rdram, ctx);
        goto after_2;
    // 0x8029CEAC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_2:
    // 0x8029CEB0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8029CEB4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8029CEB8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029CEBC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8029CEC0: lbu         $t7, 0x8F0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8F0);
    // 0x8029CEC4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029CEC8: beq         $t7, $zero, L_8029CED8
    if (ctx->r15 == 0) {
        // 0x8029CECC: nop
    
            goto L_8029CED8;
    }
    // 0x8029CECC: nop

    // 0x8029CED0: jal         0x80231A24
    // 0x8029CED4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x8029CED4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_3:
L_8029CED8:
    // 0x8029CED8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029CEDC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029CEE0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8029CEE4: jal         0x80231A24
    // 0x8029CEE8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x8029CEE8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x8029CEEC: jal         0x8022BD80
    // 0x8029CEF0: nop

    static_3_8022BD80(rdram, ctx);
        goto after_5;
    // 0x8029CEF0: nop

    after_5:
    // 0x8029CEF4: jal         0x80224CA8
    // 0x8029CEF8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x8029CEF8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_6:
    // 0x8029CEFC: jal         0x802B14E8
    // 0x8029CF00: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B14E8(rdram, ctx);
        goto after_7;
    // 0x8029CF00: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_7:
    // 0x8029CF04: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8029CF08: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x8029CF0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029CF10: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8029CF14: jal         0x80205E0C
    // 0x8029CF18: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    static_3_80205E0C(rdram, ctx);
        goto after_8;
    // 0x8029CF18: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    after_8:
    // 0x8029CF1C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8029CF20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8029CF24: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8029CF28: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8029CF2C: jal         0x8021CEF8
    // 0x8029CF30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021CEF8(rdram, ctx);
        goto after_9;
    // 0x8029CF30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x8029CF34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8029CF38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8029CF3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8029CF40: jr          $ra
    // 0x8029CF44: nop

    return;
    // 0x8029CF44: nop

;}
RECOMP_FUNC void D_802A2300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A2384: bne         $a0, $zero, L_802A239C
    if (ctx->r4 != 0) {
        // 0x802A2388: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A239C;
    }
    // 0x802A2388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A238C: jal         0x802C67EC
    // 0x802A2390: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A2390: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_0:
    // 0x802A2394: beq         $v0, $zero, L_802A23B4
    if (ctx->r2 == 0) {
        // 0x802A2398: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A23B4;
    }
    // 0x802A2398: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802A239C:
    // 0x802A239C: jal         0x802D1960
    // 0x802A23A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802D18E0(rdram, ctx);
        goto after_1;
    // 0x802A23A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802A23A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A23A8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A23AC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A23B0: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
L_802A23B4:
    // 0x802A23B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A23B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A23BC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A23C0: jr          $ra
    // 0x802A23C4: nop

    return;
    // 0x802A23C4: nop

;}
RECOMP_FUNC void D_802A98B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A993C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A9940: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A9944: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802A9948: sb          $t6, 0x24($a0)
    MEM_B(0X24, ctx->r4) = ctx->r14;
    // 0x802A994C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A9954: jr          $ra
    // 0x802A9958: nop

    return;
    // 0x802A9958: nop

;}
RECOMP_FUNC void D_80207084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80207088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020708C: jal         0x80238B80
    // 0x80207090: nop

    static_3_80238B80(rdram, ctx);
        goto after_0;
    // 0x80207090: nop

    after_0:
    // 0x80207094: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80207098: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8020709C: lui         $at, 0xF000
    ctx->r1 = S32(0XF000 << 16);
    // 0x802070A0: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x802070A4: sltu        $at, $t6, $at
    ctx->r1 = ctx->r14 < ctx->r1 ? 1 : 0;
    // 0x802070A8: bne         $at, $zero, L_802070CC
    if (ctx->r1 != 0) {
        // 0x802070AC: lui         $at, 0x1000
        ctx->r1 = S32(0X1000 << 16);
            goto L_802070CC;
    }
    // 0x802070AC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802070B0: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x802070B4: beq         $at, $zero, L_802070CC
    if (ctx->r1 == 0) {
        // 0x802070B8: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_802070CC;
    }
    // 0x802070B8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802070BC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802070C0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802070C4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802070C8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_802070CC:
    // 0x802070CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802070D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802070D4: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802070D8: jr          $ra
    // 0x802070DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802070DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802185B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802185B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802185B4: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x802185B8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802185BC: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802185C0: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802185C4: lwc1        $f14, 0x0($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X0);
    // 0x802185C8: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x802185CC: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802185D0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802185D4: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802185D8: bc1fl       L_8021868C
    if (!c1cs) {
        // 0x802185DC: sub.s       $f4, $f14, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
            goto L_8021868C;
    }
    goto skip_0;
    // 0x802185DC: sub.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
    skip_0:
    // 0x802185E0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802185E4: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802185E8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802185EC: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802185F0: bc1fl       L_80218608
    if (!c1cs) {
        // 0x802185F4: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_80218608;
    }
    goto skip_1;
    // 0x802185F4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_1:
    // 0x802185F8: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x802185FC: b           L_8021861C
    // 0x80218600: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
        goto L_8021861C;
    // 0x80218600: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x80218604: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_80218608:
    // 0x80218608: nop

    // 0x8021860C: bc1fl       L_80218620
    if (!c1cs) {
        // 0x80218610: c.lt.s      $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
            goto L_80218620;
    }
    goto skip_2;
    // 0x80218610: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    skip_2:
    // 0x80218614: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x80218618: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_8021861C:
    // 0x8021861C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
L_80218620:
    // 0x80218620: nop

    // 0x80218624: bc1fl       L_80218638
    if (!c1cs) {
        // 0x80218628: c.lt.s      $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
            goto L_80218638;
    }
    goto skip_3;
    // 0x80218628: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    skip_3:
    // 0x8021862C: b           L_80218648
    // 0x80218630: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
        goto L_80218648;
    // 0x80218630: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
    // 0x80218634: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
L_80218638:
    // 0x80218638: nop

    // 0x8021863C: bc1fl       L_8021864C
    if (!c1cs) {
        // 0x80218640: c.lt.s      $f14, $f8
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
            goto L_8021864C;
    }
    goto skip_4;
    // 0x80218640: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    skip_4:
    // 0x80218644: mov.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = ctx->f6.fl;
L_80218648:
    // 0x80218648: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
L_8021864C:
    // 0x8021864C: nop

    // 0x80218650: bc1fl       L_80218664
    if (!c1cs) {
        // 0x80218654: c.lt.s      $f10, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
            goto L_80218664;
    }
    goto skip_5;
    // 0x80218654: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    skip_5:
    // 0x80218658: b           L_80218674
    // 0x8021865C: mov.s       $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = ctx->f8.fl;
        goto L_80218674;
    // 0x8021865C: mov.s       $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = ctx->f8.fl;
    // 0x80218660: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
L_80218664:
    // 0x80218664: nop

    // 0x80218668: bc1fl       L_80218678
    if (!c1cs) {
        // 0x8021866C: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_80218678;
    }
    goto skip_6;
    // 0x8021866C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    skip_6:
    // 0x80218670: mov.s       $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = ctx->f10.fl;
L_80218674:
    // 0x80218674: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_80218678:
    // 0x80218678: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x8021867C: swc1        $f12, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f12.u32l;
    // 0x80218680: b           L_80218828
    // 0x80218684: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
        goto L_80218828;
    // 0x80218684: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
    // 0x80218688: sub.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
L_8021868C:
    // 0x8021868C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80218690: sub.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80218694: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80218698: div.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021869C: mul.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x802186A0: mov.s       $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = ctx->f18.fl;
    // 0x802186A4: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x802186A8: bc1f        L_802186C8
    if (!c1cs) {
        // 0x802186AC: swc1        $f10, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
            goto L_802186C8;
    }
    // 0x802186AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802186B0: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x802186B4: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802186B8: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802186BC: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x802186C0: b           L_802186EC
    // 0x802186C4: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
        goto L_802186EC;
    // 0x802186C4: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
L_802186C8:
    // 0x802186C8: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802186CC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802186D0: nop

    // 0x802186D4: bc1fl       L_802186F0
    if (!c1cs) {
        // 0x802186D8: lwc1        $f4, 0x30($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
            goto L_802186F0;
    }
    goto skip_7;
    // 0x802186D8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    skip_7:
    // 0x802186DC: mul.s       $f8, $f20, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x802186E0: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802186E4: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x802186E8: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
L_802186EC:
    // 0x802186EC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
L_802186F0:
    // 0x802186F0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802186F4: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x802186F8: nop

    // 0x802186FC: bc1fl       L_80218730
    if (!c1cs) {
        // 0x80218700: c.lt.s      $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
            goto L_80218730;
    }
    goto skip_8;
    // 0x80218700: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    skip_8:
    // 0x80218704: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80218708: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
    // 0x8021870C: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218710: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x80218714: nop

    // 0x80218718: bc1tl       L_80218764
    if (c1cs) {
        // 0x8021871C: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_80218764;
    }
    goto skip_9;
    // 0x8021871C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_9:
    // 0x80218720: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80218724: b           L_80218760
    // 0x80218728: div.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
        goto L_80218760;
    // 0x80218728: div.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8021872C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
L_80218730:
    // 0x80218730: nop

    // 0x80218734: bc1fl       L_80218764
    if (!c1cs) {
        // 0x80218738: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_80218764;
    }
    goto skip_10;
    // 0x80218738: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_10:
    // 0x8021873C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80218740: mov.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = ctx->f6.fl;
    // 0x80218744: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218748: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x8021874C: nop

    // 0x80218750: bc1tl       L_80218764
    if (c1cs) {
        // 0x80218754: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_80218764;
    }
    goto skip_11;
    // 0x80218754: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_11:
    // 0x80218758: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021875C: div.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
L_80218760:
    // 0x80218760: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_80218764:
    // 0x80218764: nop

    // 0x80218768: bc1fl       L_80218788
    if (!c1cs) {
        // 0x8021876C: c.lt.s      $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
            goto L_80218788;
    }
    goto skip_12;
    // 0x8021876C: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    skip_12:
    // 0x80218770: mul.s       $f4, $f20, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80218774: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218778: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x8021877C: b           L_802187A4
    // 0x80218780: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
        goto L_802187A4;
    // 0x80218780: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80218784: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
L_80218788:
    // 0x80218788: nop

    // 0x8021878C: bc1fl       L_802187A8
    if (!c1cs) {
        // 0x80218790: lwc1        $f4, 0x30($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
            goto L_802187A8;
    }
    goto skip_13;
    // 0x80218790: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    skip_13:
    // 0x80218794: mul.s       $f8, $f20, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x80218798: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8021879C: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x802187A0: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
L_802187A4:
    // 0x802187A4: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
L_802187A8:
    // 0x802187A8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802187AC: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x802187B0: nop

    // 0x802187B4: bc1fl       L_802187E8
    if (!c1cs) {
        // 0x802187B8: c.lt.s      $f6, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
            goto L_802187E8;
    }
    goto skip_14;
    // 0x802187B8: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    skip_14:
    // 0x802187BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802187C0: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
    // 0x802187C4: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802187C8: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x802187CC: nop

    // 0x802187D0: bc1tl       L_8021881C
    if (c1cs) {
        // 0x802187D4: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_8021881C;
    }
    goto skip_15;
    // 0x802187D4: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    skip_15:
    // 0x802187D8: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x802187DC: b           L_80218818
    // 0x802187E0: div.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
        goto L_80218818;
    // 0x802187E0: div.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802187E4: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
L_802187E8:
    // 0x802187E8: nop

    // 0x802187EC: bc1fl       L_8021881C
    if (!c1cs) {
        // 0x802187F0: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_8021881C;
    }
    goto skip_16;
    // 0x802187F0: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    skip_16:
    // 0x802187F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802187F8: mov.s       $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = ctx->f6.fl;
    // 0x802187FC: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218800: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x80218804: nop

    // 0x80218808: bc1tl       L_8021881C
    if (c1cs) {
        // 0x8021880C: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_8021881C;
    }
    goto skip_17;
    // 0x8021880C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    skip_17:
    // 0x80218810: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80218814: div.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
L_80218818:
    // 0x80218818: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_8021881C:
    // 0x8021881C: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x80218820: swc1        $f12, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f12.u32l;
    // 0x80218824: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
L_80218828:
    // 0x80218828: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021882C: jr          $ra
    // 0x80218830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80218830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_8023FE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FE44: lbu         $t6, 0x36($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X36);
    // 0x8023FE48: lbu         $t7, 0x33($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X33);
    // 0x8023FE4C: lbu         $t9, 0x30($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X30);
    // 0x8023FE50: lbu         $t2, 0x31($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X31);
    // 0x8023FE54: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023FE58: lw          $t1, 0x60($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X60);
    // 0x8023FE5C: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x8023FE60: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8023FE64: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8023FE68: lbu         $t5, 0x9($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X9);
    // 0x8023FE6C: lbu         $t7, 0xD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XD);
    // 0x8023FE70: mflo        $t8
    ctx->r24 = lo;
    // 0x8023FE74: nop

    // 0x8023FE78: nop

    // 0x8023FE7C: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023FE80: lh          $t9, 0x32($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X32);
    // 0x8023FE84: mflo        $v1
    ctx->r3 = lo;
    // 0x8023FE88: sra         $t0, $v1, 6
    ctx->r8 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8023FE8C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8023FE90: multu       $t5, $t7
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023FE94: mflo        $t8
    ctx->r24 = lo;
    // 0x8023FE98: nop

    // 0x8023FE9C: nop

    // 0x8023FEA0: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023FEA4: mflo        $a2
    ctx->r6 = lo;
    // 0x8023FEA8: sra         $t0, $a2, 14
    ctx->r8 = S32(SIGNED(ctx->r6) >> 14);
    // 0x8023FEAC: nop

    // 0x8023FEB0: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023FEB4: mflo        $v1
    ctx->r3 = lo;
    // 0x8023FEB8: srl         $t2, $v1, 15
    ctx->r10 = S32(U32(ctx->r3) >> 15);
    // 0x8023FEBC: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x8023FEC0: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FEC4: jr          $ra
    // 0x8023FEC8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8023FEC8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void D_802A8B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8B88: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A8B8C: jr          $ra
    // 0x802A8B90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802A8B90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802A307C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A30FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A3100: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3104: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3108: swc1        $f0, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->f0.u32l;
    // 0x802A310C: swc1        $f0, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->f0.u32l;
    // 0x802A3110: swc1        $f0, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->f0.u32l;
    // 0x802A3114: swc1        $f0, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->f0.u32l;
    // 0x802A3118: swc1        $f0, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = ctx->f0.u32l;
    // 0x802A311C: swc1        $f0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->f0.u32l;
    // 0x802A3120: swc1        $f0, 0x104($a0)
    MEM_W(0X104, ctx->r4) = ctx->f0.u32l;
    // 0x802A3124: swc1        $f0, 0x108($a0)
    MEM_W(0X108, ctx->r4) = ctx->f0.u32l;
    // 0x802A3128: swc1        $f0, 0x10C($a0)
    MEM_W(0X10C, ctx->r4) = ctx->f0.u32l;
    // 0x802A312C: jr          $ra
    // 0x802A3130: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802A3130: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_80294C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294CC0: jr          $ra
    // 0x80294CC4: sw          $a1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r5;
    return;
    // 0x80294CC4: sw          $a1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802A5E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5F04: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A5F08: jr          $ra
    // 0x802A5F0C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A5F0C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80294C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294CC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80294CCC: jr          $ra
    // 0x80294CD0: sb          $a1, 0xFC($a0)
    MEM_B(0XFC, ctx->r4) = ctx->r5;
    return;
    // 0x80294CD0: sb          $a1, 0xFC($a0)
    MEM_B(0XFC, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802A9C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9CE8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9CEC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9CF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9CF4: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x802A9CF8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9CFC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9D00: swc1        $f6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f6.u32l;
    // 0x802A9D04: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9D08: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9D0C: swc1        $f8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f8.u32l;
    // 0x802A9D10: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9D14: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9D18: swc1        $f10, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f10.u32l;
    // 0x802A9D1C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9D20: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9D24: swc1        $f16, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f16.u32l;
    // 0x802A9D28: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9D2C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9D30: swc1        $f18, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f18.u32l;
    // 0x802A9D34: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9D38: jr          $ra
    // 0x802A9D3C: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802A9D3C: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802EC0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC16C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC174: beq         $a0, $zero, L_802EC1A4
    if (ctx->r4 == 0) {
        // 0x802EC178: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EC1A4;
    }
    // 0x802EC178: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EC17C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EC180: jal         0x8031C514
    // 0x802EC184: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EC184: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EC188: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EC18C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC190: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EC194: beql        $t7, $zero, L_802EC1A8
    if (ctx->r15 == 0) {
        // 0x802EC198: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EC1A8;
    }
    goto skip_0;
    // 0x802EC198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EC19C: jal         0x802C681C
    // 0x802EC1A0: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EC1A0: nop

    after_1:
L_802EC1A4:
    // 0x802EC1A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EC1A8:
    // 0x802EC1A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC1AC: jr          $ra
    // 0x802EC1B0: nop

    return;
    // 0x802EC1B0: nop

;}
RECOMP_FUNC void D_802D961C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D969C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D96A0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802D96A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802D96A8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D96AC: lw          $v1, 0x7168($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X7168);
    // 0x802D96B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D96B4: bne         $v1, $at, L_802D96D4
    if (ctx->r3 != ctx->r1) {
        // 0x802D96B8: nop
    
            goto L_802D96D4;
    }
    // 0x802D96B8: nop

    // 0x802D96BC: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802D96C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802D96C4: beq         $t6, $at, L_802D96D4
    if (ctx->r14 == ctx->r1) {
        // 0x802D96C8: nop
    
            goto L_802D96D4;
    }
    // 0x802D96C8: nop

    // 0x802D96CC: jr          $ra
    // 0x802D96D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D96D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D96D4:
    // 0x802D96D4: jr          $ra
    // 0x802D96D8: nop

    return;
    // 0x802D96D8: nop

;}
RECOMP_FUNC void D_8022A2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A2A0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8022A2A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A2A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A2AC: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x8022A2B0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8022A2B4: jal         0x80228DE0
    // 0x8022A2B8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x8022A2B8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x8022A2BC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8022A2C0: addiu       $ra, $zero, 0x3
    ctx->r31 = ADD32(0, 0X3);
L_8022A2C4:
    // 0x8022A2C4: blez        $t0, L_8022A3C0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8022A2C8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8022A3C0;
    }
    // 0x8022A2C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8022A2CC: sll         $t6, $t0, 4
    ctx->r14 = S32(ctx->r8 << 4);
    // 0x8022A2D0: addiu       $t7, $sp, 0x50
    ctx->r15 = ADD32(ctx->r29, 0X50);
    // 0x8022A2D4: sll         $t8, $t0, 4
    ctx->r24 = S32(ctx->r8 << 4);
    // 0x8022A2D8: andi        $t3, $t0, 0x3
    ctx->r11 = ctx->r8 & 0X3;
    // 0x8022A2DC: addu        $t5, $s0, $t8
    ctx->r13 = ADD32(ctx->r16, ctx->r24);
    // 0x8022A2E0: addu        $t4, $t6, $t7
    ctx->r12 = ADD32(ctx->r14, ctx->r15);
    // 0x8022A2E4: beq         $t3, $zero, L_8022A340
    if (ctx->r11 == 0) {
        // 0x8022A2E8: sll         $t2, $t0, 2
        ctx->r10 = S32(ctx->r8 << 2);
            goto L_8022A340;
    }
    // 0x8022A2E8: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8022A2EC: sll         $t9, $zero, 4
    ctx->r25 = S32(0 << 4);
    // 0x8022A2F0: addu        $t6, $s0, $t9
    ctx->r14 = ADD32(ctx->r16, ctx->r25);
    // 0x8022A2F4: sll         $t1, $zero, 2
    ctx->r9 = S32(0 << 2);
    // 0x8022A2F8: sll         $t8, $zero, 4
    ctx->r24 = S32(0 << 4);
    // 0x8022A2FC: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x8022A300: addu        $a0, $t9, $t7
    ctx->r4 = ADD32(ctx->r25, ctx->r15);
    // 0x8022A304: addu        $v0, $t4, $t1
    ctx->r2 = ADD32(ctx->r12, ctx->r9);
    // 0x8022A308: addu        $a1, $t5, $t1
    ctx->r5 = ADD32(ctx->r13, ctx->r9);
    // 0x8022A30C: addu        $v1, $t6, $t2
    ctx->r3 = ADD32(ctx->r14, ctx->r10);
    // 0x8022A310: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
L_8022A314:
    // 0x8022A314: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8022A318: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022A31C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022A320: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x8022A324: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8022A328: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8022A32C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022A330: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8022A334: bne         $a3, $a2, L_8022A314
    if (ctx->r7 != ctx->r6) {
        // 0x8022A338: swc1        $f6, -0x10($a0)
        MEM_W(-0X10, ctx->r4) = ctx->f6.u32l;
            goto L_8022A314;
    }
    // 0x8022A338: swc1        $f6, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = ctx->f6.u32l;
    // 0x8022A33C: beq         $a2, $t0, L_8022A3C0
    if (ctx->r6 == ctx->r8) {
        // 0x8022A340: sll         $t6, $a2, 4
        ctx->r14 = S32(ctx->r6 << 4);
            goto L_8022A3C0;
    }
L_8022A340:
    // 0x8022A340: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
    // 0x8022A344: addu        $t8, $s0, $t6
    ctx->r24 = ADD32(ctx->r16, ctx->r14);
    // 0x8022A348: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8022A34C: sll         $t9, $a2, 4
    ctx->r25 = S32(ctx->r6 << 4);
    // 0x8022A350: addu        $t7, $t9, $t2
    ctx->r15 = ADD32(ctx->r25, ctx->r10);
    // 0x8022A354: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x8022A358: addu        $a0, $t7, $t6
    ctx->r4 = ADD32(ctx->r15, ctx->r14);
    // 0x8022A35C: addu        $v0, $t4, $t1
    ctx->r2 = ADD32(ctx->r12, ctx->r9);
    // 0x8022A360: addu        $a1, $t5, $t1
    ctx->r5 = ADD32(ctx->r13, ctx->r9);
    // 0x8022A364: addu        $v1, $t8, $t2
    ctx->r3 = ADD32(ctx->r24, ctx->r10);
L_8022A368:
    // 0x8022A368: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8022A36C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8022A370: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8022A374: swc1        $f8, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f8.u32l;
    // 0x8022A378: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8022A37C: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x8022A380: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x8022A384: swc1        $f10, -0x40($a0)
    MEM_W(-0X40, ctx->r4) = ctx->f10.u32l;
    // 0x8022A388: lwc1        $f16, -0x30($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, -0X30);
    // 0x8022A38C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8022A390: swc1        $f16, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f16.u32l;
    // 0x8022A394: lwc1        $f18, -0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, -0XC);
    // 0x8022A398: swc1        $f18, -0x30($a0)
    MEM_W(-0X30, ctx->r4) = ctx->f18.u32l;
    // 0x8022A39C: lwc1        $f4, -0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, -0X20);
    // 0x8022A3A0: swc1        $f4, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8022A3A4: lwc1        $f6, -0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, -0X8);
    // 0x8022A3A8: swc1        $f6, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = ctx->f6.u32l;
    // 0x8022A3AC: lwc1        $f8, -0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, -0X10);
    // 0x8022A3B0: swc1        $f8, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f8.u32l;
    // 0x8022A3B4: lwc1        $f10, -0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0X4);
    // 0x8022A3B8: bne         $a2, $t0, L_8022A368
    if (ctx->r6 != ctx->r8) {
        // 0x8022A3BC: swc1        $f10, -0x10($a0)
        MEM_W(-0X10, ctx->r4) = ctx->f10.u32l;
            goto L_8022A368;
    }
    // 0x8022A3BC: swc1        $f10, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = ctx->f10.u32l;
L_8022A3C0:
    // 0x8022A3C0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8022A3C4: bne         $t0, $ra, L_8022A2C4
    if (ctx->r8 != ctx->r31) {
        // 0x8022A3C8: nop
    
            goto L_8022A2C4;
    }
    // 0x8022A3C8: nop

    // 0x8022A3CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8022A3D0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8022A3D4: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x8022A3D8: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8022A3DC: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x8022A3E0: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8022A3E4: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8022A3E8: lwc1        $f16, 0x30($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8022A3EC: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8022A3F0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8022A3F4: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x8022A3F8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8022A3FC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8022A400: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8022A404: jal         0x8022A0D0
    // 0x8022A408: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x8022A408: nop

    after_1:
    // 0x8022A40C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x8022A410: jal         0x80228DE0
    // 0x8022A414: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x8022A414: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_2:
    // 0x8022A418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A41C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A420: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x8022A424: jr          $ra
    // 0x8022A428: nop

    return;
    // 0x8022A428: nop

;}
RECOMP_FUNC void D_80215528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80215528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021552C: lhu         $t0, 0x2A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2A);
    // 0x80215530: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80215534: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80215538: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x8021553C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80215540: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80215544: addu        $v1, $a2, $t1
    ctx->r3 = ADD32(ctx->r6, ctx->r9);
    // 0x80215548: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    // 0x8021554C: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x80215550: andi        $t6, $a3, 0xFFFF
    ctx->r14 = ctx->r7 & 0XFFFF;
    // 0x80215554: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80215558: lhu         $t4, 0x2E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X2E);
    // 0x8021555C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80215560: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80215564: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x80215568: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x8021556C: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x80215570: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80215574: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x80215578: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021557C: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80215580: addu        $a0, $a2, $t5
    ctx->r4 = ADD32(ctx->r6, ctx->r13);
    // 0x80215584: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80215588: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8021558C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80215590: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80215594: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80215598: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x8021559C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802155A0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802155A4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802155A8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802155AC: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802155B0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x802155B4: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802155B8: bc1t        L_802155FC
    if (c1cs) {
        // 0x802155BC: cvt.s.w     $f22, $f6
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
            goto L_802155FC;
    }
    // 0x802155BC: cvt.s.w     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802155C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802155C4: nop

    // 0x802155C8: div.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802155CC: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x802155D0: nop

    // 0x802155D4: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x802155D8: nop

    // 0x802155DC: mul.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x802155E0: nop

    // 0x802155E4: mul.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x802155E8: nop

    // 0x802155EC: mul.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x802155F0: nop

    // 0x802155F4: mul.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x802155F8: nop

L_802155FC:
    // 0x802155FC: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x80215600: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80215604: sub.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x80215608: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021560C: sub.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x80215610: sub.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80215614: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215618: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8021561C: nop

    // 0x80215620: bc1fl       L_80215634
    if (!c1cs) {
        // 0x80215624: sub.s       $f6, $f14, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f18.fl;
            goto L_80215634;
    }
    goto skip_0;
    // 0x80215624: sub.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f18.fl;
    skip_0:
    // 0x80215628: b           L_8021569C
    // 0x8021562C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021569C;
    // 0x8021562C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215630: sub.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f18.fl;
L_80215634:
    // 0x80215634: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80215638: sub.s       $f10, $f20, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f16.fl;
    // 0x8021563C: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215640: sub.s       $f10, $f22, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f22.fl - ctx->f18.fl;
    // 0x80215644: sub.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80215648: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021564C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80215650: nop

    // 0x80215654: bc1fl       L_80215668
    if (!c1cs) {
        // 0x80215658: sub.s       $f6, $f14, $f22
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f22.fl;
            goto L_80215668;
    }
    goto skip_1;
    // 0x80215658: sub.s       $f6, $f14, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f22.fl;
    skip_1:
    // 0x8021565C: b           L_8021569C
    // 0x80215660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021569C;
    // 0x80215660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215664: sub.s       $f6, $f14, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f22.fl;
L_80215668:
    // 0x80215668: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8021566C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80215670: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x80215674: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215678: sub.s       $f10, $f2, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f22.fl;
    // 0x8021567C: sub.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x80215680: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80215684: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80215688: nop

    // 0x8021568C: bc1f        L_8021569C
    if (!c1cs) {
        // 0x80215690: nop
    
            goto L_8021569C;
    }
    // 0x80215690: nop

    // 0x80215694: b           L_8021569C
    // 0x80215698: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021569C;
    // 0x80215698: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021569C:
    // 0x8021569C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x802156A0: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x802156A4: jr          $ra
    // 0x802156A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802156A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802A12DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A135C: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802A1360: lwc1        $f2, 0x10($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802A1364: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x802A1368: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x802A136C: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802A1370: bc1t        L_802A13E8
    if (c1cs) {
        // 0x802A1374: swc1        $f4, 0x88($a0)
        MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
            goto L_802A13E8;
    }
    // 0x802A1374: swc1        $f4, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f4.u32l;
    // 0x802A1378: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802A137C: lwc1        $f0, 0x88($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X88);
    // 0x802A1380: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802A1384: nop

    // 0x802A1388: bc1fl       L_802A139C
    if (!c1cs) {
        // 0x802A138C: neg.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
            goto L_802A139C;
    }
    goto skip_0;
    // 0x802A138C: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    skip_0:
    // 0x802A1390: b           L_802A139C
    // 0x802A1394: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_802A139C;
    // 0x802A1394: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802A1398: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_802A139C:
    // 0x802A139C: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x802A13A0: mul.s       $f16, $f6, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x802A13A4: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x802A13A8: nop

    // 0x802A13AC: bc1f        L_802A13DC
    if (!c1cs) {
        // 0x802A13B0: nop
    
            goto L_802A13DC;
    }
    // 0x802A13B0: nop

    // 0x802A13B4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802A13B8: nop

    // 0x802A13BC: bc1fl       L_802A13D4
    if (!c1cs) {
        // 0x802A13C0: sub.s       $f10, $f2, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f16.fl;
            goto L_802A13D4;
    }
    goto skip_1;
    // 0x802A13C0: sub.s       $f10, $f2, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f16.fl;
    skip_1:
    // 0x802A13C4: add.s       $f8, $f2, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x802A13C8: jr          $ra
    // 0x802A13CC: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802A13CC: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    // 0x802A13D0: sub.s       $f10, $f2, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f16.fl;
L_802A13D4:
    // 0x802A13D4: jr          $ra
    // 0x802A13D8: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
    return;
    // 0x802A13D8: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
L_802A13DC:
    // 0x802A13DC: mul.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802A13E0: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x802A13E4: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
L_802A13E8:
    // 0x802A13E8: jr          $ra
    // 0x802A13EC: nop

    return;
    // 0x802A13EC: nop

;}
RECOMP_FUNC void D_802D2638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D26B8: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x802D26BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D26C0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802D26C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D26C8: jr          $ra
    // 0x802D26CC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    return;
    // 0x802D26CC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
;}
RECOMP_FUNC void D_802495BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802495BC: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x802495C0: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x802495C4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802495C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802495CC: bgez        $a2, L_802495E0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x802495D0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802495E0;
    }
    // 0x802495D0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802495D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802495D8: nop

    // 0x802495DC: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_802495E0:
    // 0x802495E0: lh          $t6, 0x18($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X18);
    // 0x802495E4: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802495E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802495EC: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x802495F0: ldc1        $f10, 0x0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X0);
    // 0x802495F4: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802495F8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802495FC: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x80249600: mul.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80249604: div.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f18.d);
    // 0x80249608: jr          $ra
    // 0x8024960C: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    return;
    // 0x8024960C: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
;}
RECOMP_FUNC void D_80233E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233E50: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80233E54: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x80233E58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233E5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233E60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233E64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80233E68: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80233E6C: lw          $t9, 0x5C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X5C);
    // 0x80233E70: lhu         $v1, 0xC($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XC);
    // 0x80233E74: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80233E78: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80233E7C: sw          $t9, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r25;
    // 0x80233E80: beq         $v1, $at, L_80233F24
    if (ctx->r3 == ctx->r1) {
        // 0x80233E84: sw          $t9, 0x54($a0)
        MEM_W(0X54, ctx->r4) = ctx->r25;
            goto L_80233F24;
    }
    // 0x80233E84: sw          $t9, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r25;
    // 0x80233E88: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80233E8C: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80233E90: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x80233E94: lh          $t5, 0x4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4);
    // 0x80233E98: lw          $t2, 0x2C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X2C);
    // 0x80233E9C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80233EA0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80233EA4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80233EA8: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x80233EAC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80233EB0: lhu         $t6, 0xA($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XA);
    // 0x80233EB4: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80233EB8: bgez        $t6, L_80233ECC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80233EBC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80233ECC;
    }
    // 0x80233EBC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80233EC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80233EC4: nop

    // 0x80233EC8: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80233ECC:
    // 0x80233ECC: lh          $t7, 0x6($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X6);
    // 0x80233ED0: lhu         $t8, 0xC($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC);
    // 0x80233ED4: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80233ED8: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80233EDC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80233EE0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80233EE4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80233EE8: bgez        $t8, L_80233EFC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80233EEC: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80233EFC;
    }
    // 0x80233EEC: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80233EF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80233EF4: nop

    // 0x80233EF8: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_80233EFC:
    // 0x80233EFC: div.s       $f2, $f4, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80233F00: addiu       $s0, $a3, 0x18
    ctx->r16 = ADD32(ctx->r7, 0X18);
    // 0x80233F04: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80233F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80233F0C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80233F10: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80233F14: jal         0x8023CD90
    // 0x80233F18: nop

    static_3_8023CD90(rdram, ctx);
        goto after_0;
    // 0x80233F18: nop

    after_0:
    // 0x80233F1C: b           L_80233F48
    // 0x80233F20: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
        goto L_80233F48;
    // 0x80233F20: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_80233F24:
    // 0x80233F24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80233F28: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80233F2C: addiu       $s0, $a3, 0x18
    ctx->r16 = ADD32(ctx->r7, 0X18);
    // 0x80233F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80233F34: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80233F38: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80233F3C: jal         0x8023CD90
    // 0x80233F40: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    static_3_8023CD90(rdram, ctx);
        goto after_1;
    // 0x80233F40: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x80233F44: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_80233F48:
    // 0x80233F48: lbu         $t9, 0xE($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0XE);
    // 0x80233F4C: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x80233F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80233F54: sb          $t9, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r25;
    // 0x80233F58: lbu         $t0, 0xF($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0XF);
    // 0x80233F5C: sb          $t0, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r8;
    // 0x80233F60: lbu         $t1, 0x10($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X10);
    // 0x80233F64: sb          $t1, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = ctx->r9;
    // 0x80233F68: lbu         $t2, 0x11($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X11);
    // 0x80233F6C: sb          $t2, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r10;
    // 0x80233F70: lh          $t3, 0xA($a3)
    ctx->r11 = MEM_H(ctx->r7, 0XA);
    // 0x80233F74: lh          $a1, 0x8($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X8);
    // 0x80233F78: subu        $a2, $t4, $t3
    ctx->r6 = SUB32(ctx->r12, ctx->r11);
    // 0x80233F7C: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x80233F80: jal         0x8023CD40
    // 0x80233F84: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    func_8023CD40(rdram, ctx);
        goto after_2;
    // 0x80233F84: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    after_2:
    // 0x80233F88: jal         0x8023BE84
    // 0x80233F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8023BE84(rdram, ctx);
        goto after_3;
    // 0x80233F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80233F90: beq         $v0, $zero, L_80233FB8
    if (ctx->r2 == 0) {
        // 0x80233F94: addiu       $at, $zero, -0x1000
        ctx->r1 = ADD32(0, -0X1000);
            goto L_80233FB8;
    }
    // 0x80233F94: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x80233F98: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80233F9C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80233FA0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80233FA4: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80233FA8: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x80233FAC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80233FB0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80233FB4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
L_80233FB8:
    // 0x80233FB8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80233FBC: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80233FC0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80233FC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233FC8: addiu       $t2, $zero, 0xFFE
    ctx->r10 = ADD32(0, 0XFFE);
    // 0x80233FCC: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80233FD0: ori         $t1, $t0, 0xFFE
    ctx->r9 = ctx->r8 | 0XFFE;
    // 0x80233FD4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80233FD8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80233FDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233FE0: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x80233FE4: jr          $ra
    // 0x80233FE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80233FE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802376D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802376D0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802376D4: jr          $ra
    // 0x802376D8: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    return;
    // 0x802376D8: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void D_802CE368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CE3E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802CE3EC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802CE3F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802CE3F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802CE3F8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802CE3FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802CE400: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802CE404: addiu       $s1, $a0, 0x5FF8
    ctx->r17 = ADD32(ctx->r4, 0X5FF8);
L_802CE408:
    // 0x802CE408: jal         0x80317E10
    // 0x802CE40C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_0;
    // 0x802CE40C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x802CE410: beq         $v0, $zero, L_802CE420
    if (ctx->r2 == 0) {
        // 0x802CE414: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802CE420;
    }
    // 0x802CE414: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CE418: jal         0x80318EF4
    // 0x802CE41C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80318EF4(rdram, ctx);
        goto after_1;
    // 0x802CE41C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_802CE420:
    // 0x802CE420: addiu       $s0, $s0, 0x68C
    ctx->r16 = ADD32(ctx->r16, 0X68C);
    // 0x802CE424: slti        $at, $s0, 0x3AEC
    ctx->r1 = SIGNED(ctx->r16) < 0X3AEC ? 1 : 0;
    // 0x802CE428: bne         $at, $zero, L_802CE408
    if (ctx->r1 != 0) {
        // 0x802CE42C: addiu       $s1, $s1, 0x68C
        ctx->r17 = ADD32(ctx->r17, 0X68C);
            goto L_802CE408;
    }
    // 0x802CE42C: addiu       $s1, $s1, 0x68C
    ctx->r17 = ADD32(ctx->r17, 0X68C);
    // 0x802CE430: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802CE434: addiu       $s1, $s2, 0x17F4
    ctx->r17 = ADD32(ctx->r18, 0X17F4);
L_802CE438:
    // 0x802CE438: jal         0x80317E10
    // 0x802CE43C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_2;
    // 0x802CE43C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x802CE440: beq         $v0, $zero, L_802CE450
    if (ctx->r2 == 0) {
        // 0x802CE444: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802CE450;
    }
    // 0x802CE444: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CE448: jal         0x80318EF4
    // 0x802CE44C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80318EF4(rdram, ctx);
        goto after_3;
    // 0x802CE44C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_802CE450:
    // 0x802CE450: addiu       $s0, $s0, 0x68C
    ctx->r16 = ADD32(ctx->r16, 0X68C);
    // 0x802CE454: slti        $at, $s0, 0x4804
    ctx->r1 = SIGNED(ctx->r16) < 0X4804 ? 1 : 0;
    // 0x802CE458: bne         $at, $zero, L_802CE438
    if (ctx->r1 != 0) {
        // 0x802CE45C: addiu       $s1, $s1, 0x68C
        ctx->r17 = ADD32(ctx->r17, 0X68C);
            goto L_802CE438;
    }
    // 0x802CE45C: addiu       $s1, $s1, 0x68C
    ctx->r17 = ADD32(ctx->r17, 0X68C);
    // 0x802CE460: addiu       $s0, $s2, 0x414
    ctx->r16 = ADD32(ctx->r18, 0X414);
    // 0x802CE464: addiu       $s2, $zero, 0x13E0
    ctx->r18 = ADD32(0, 0X13E0);
    // 0x802CE468: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802CE46C:
    // 0x802CE46C: jal         0x80317E10
    // 0x802CE470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_4;
    // 0x802CE470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802CE474: beq         $v0, $zero, L_802CE484
    if (ctx->r2 == 0) {
        // 0x802CE478: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802CE484;
    }
    // 0x802CE478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CE47C: jal         0x80318EF4
    // 0x802CE480: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80318EF4(rdram, ctx);
        goto after_5;
    // 0x802CE480: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
L_802CE484:
    // 0x802CE484: addiu       $s1, $s1, 0x6A0
    ctx->r17 = ADD32(ctx->r17, 0X6A0);
    // 0x802CE488: bne         $s1, $s2, L_802CE46C
    if (ctx->r17 != ctx->r18) {
        // 0x802CE48C: addiu       $s0, $s0, 0x6A0
        ctx->r16 = ADD32(ctx->r16, 0X6A0);
            goto L_802CE46C;
    }
    // 0x802CE48C: addiu       $s0, $s0, 0x6A0
    ctx->r16 = ADD32(ctx->r16, 0X6A0);
    // 0x802CE490: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802CE494: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802CE498: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802CE49C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802CE4A0: jr          $ra
    // 0x802CE4A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802CE4A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802CC944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CC9C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CC9C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CC9CC: bne         $a0, $zero, L_802CC9E4
    if (ctx->r4 != 0) {
        // 0x802CC9D0: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802CC9E4;
    }
    // 0x802CC9D0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802CC9D4: jal         0x802C67EC
    // 0x802CC9D8: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802CC9D8: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    after_0:
    // 0x802CC9DC: beq         $v0, $zero, L_802CCA28
    if (ctx->r2 == 0) {
        // 0x802CC9E0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802CCA28;
    }
    // 0x802CC9E0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802CC9E4:
    // 0x802CC9E4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CC9E8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802CC9EC: sw          $t6, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = ctx->r14;
    // 0x802CC9F0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802CC9F4: jal         0x8022970C
    // 0x802CC9F8: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802CC9F8: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    after_1:
    // 0x802CC9FC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802CCA00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802CCA04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802CCA08: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802CCA0C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802CCA10: sh          $t7, 0x84($a1)
    MEM_H(0X84, ctx->r5) = ctx->r15;
    // 0x802CCA14: sb          $t8, 0xA9($a1)
    MEM_B(0XA9, ctx->r5) = ctx->r24;
    // 0x802CCA18: swc1        $f0, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->f0.u32l;
    // 0x802CCA1C: swc1        $f0, 0x8C($a1)
    MEM_W(0X8C, ctx->r5) = ctx->f0.u32l;
    // 0x802CCA20: swc1        $f0, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->f0.u32l;
    // 0x802CCA24: swc1        $f0, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f0.u32l;
L_802CCA28:
    // 0x802CCA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CCA2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CCA30: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802CCA34: jr          $ra
    // 0x802CCA38: nop

    return;
    // 0x802CCA38: nop

;}
RECOMP_FUNC void D_802A8C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8C80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A8C84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A8C88: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802A8C8C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802A8C90: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802A8C94: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802A8C98: jal         0x80224CA8
    // 0x802A8C9C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802A8C9C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_0:
    // 0x802A8CA0: jal         0x80224CA8
    // 0x802A8CA4: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802A8CA4: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    after_1:
    // 0x802A8CA8: jal         0x80224CA8
    // 0x802A8CAC: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802A8CAC: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_2:
    // 0x802A8CB0: jal         0x80224CA8
    // 0x802A8CB4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802A8CB4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_3:
    // 0x802A8CB8: jal         0x80224CA8
    // 0x802A8CBC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802A8CBC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_4:
    // 0x802A8CC0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x802A8CC4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802A8CC8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802A8CCC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802A8CD0: addiu       $s0, $a3, 0x70
    ctx->r16 = ADD32(ctx->r7, 0X70);
    // 0x802A8CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A8CD8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802A8CDC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802A8CE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802A8CE4: jal         0x8028D2E8
    // 0x802A8CE8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    static_3_8028D2E8(rdram, ctx);
        goto after_5;
    // 0x802A8CE8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_5:
    // 0x802A8CEC: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802A8CF0: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802A8CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A8CF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A8CFC: jal         0x8028DDD8
    // 0x802A8D00: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_8028DDD8(rdram, ctx);
        goto after_6;
    // 0x802A8D00: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_6:
    // 0x802A8D04: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802A8D08: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802A8D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A8D10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802A8D14: jal         0x8028DDD8
    // 0x802A8D18: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_8028DDD8(rdram, ctx);
        goto after_7;
    // 0x802A8D18: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_7:
    // 0x802A8D1C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802A8D20: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802A8D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A8D28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802A8D2C: jal         0x8028DDD8
    // 0x802A8D30: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    static_3_8028DDD8(rdram, ctx);
        goto after_8;
    // 0x802A8D30: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_8:
    // 0x802A8D34: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802A8D38: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802A8D3C: jal         0x8028DB8C
    // 0x802A8D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8028DB8C(rdram, ctx);
        goto after_9;
    // 0x802A8D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802A8D44: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802A8D48: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802A8D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A8D50: jal         0x8028DED0
    // 0x802A8D54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    static_3_8028DED0(rdram, ctx);
        goto after_10;
    // 0x802A8D54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_10:
    // 0x802A8D58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802A8D5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802A8D60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A8D64: jr          $ra
    // 0x802A8D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802A8D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802B71FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B727C: jr          $ra
    // 0x802B7280: sw          $a1, 0x1068($a0)
    MEM_W(0X1068, ctx->r4) = ctx->r5;
    return;
    // 0x802B7280: sw          $a1, 0x1068($a0)
    MEM_W(0X1068, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802CA494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CA514: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x802CA518: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802CA51C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802CA520: jal         0x8022331C
    // 0x802CA524: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802CA524: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x802CA528: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802CA52C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802CA530: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802CA534: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CA538: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802CA53C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802CA540: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x802CA544: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802CA548: jal         0x8022A848
    // 0x802CA54C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_1;
    // 0x802CA54C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x802CA550: jal         0x80221B2C
    // 0x802CA554: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    static_3_80221B2C(rdram, ctx);
        goto after_2;
    // 0x802CA554: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    after_2:
    // 0x802CA558: jal         0x8022970C
    // 0x802CA55C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802CA55C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_3:
    // 0x802CA560: jal         0x8022149C
    // 0x802CA564: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    static_3_8022149C(rdram, ctx);
        goto after_4;
    // 0x802CA564: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x802CA568: jal         0x802233EC
    // 0x802CA56C: lui         $a0, 0xC2
    ctx->r4 = S32(0XC2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_5;
    // 0x802CA56C: lui         $a0, 0xC2
    ctx->r4 = S32(0XC2 << 16);
    after_5:
    // 0x802CA570: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802CA574: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x802CA578: addiu       $a2, $zero, 0xD7
    ctx->r6 = ADD32(0, 0XD7);
    // 0x802CA57C: jal         0x802CE860
    // 0x802CA580: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    static_3_802CE860(rdram, ctx);
        goto after_6;
    // 0x802CA580: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    after_6:
    // 0x802CA584: jal         0x8021F4E4
    // 0x802CA588: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_7;
    // 0x802CA588: nop

    after_7:
    // 0x802CA58C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802CA590: addiu       $t7, $zero, 0xCA
    ctx->r15 = ADD32(0, 0XCA);
    // 0x802CA594: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802CA598: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802CA59C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802CA5A0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802CA5A4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802CA5A8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802CA5AC: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802CA5B0: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802CA5B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA5B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802CA5BC: jal         0x8021F35C
    // 0x802CA5C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x802CA5C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x802CA5C4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802CA5C8: addiu       $t1, $zero, 0xCA
    ctx->r9 = ADD32(0, 0XCA);
    // 0x802CA5CC: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802CA5D0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802CA5D4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802CA5D8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802CA5DC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802CA5E0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802CA5E4: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x802CA5E8: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802CA5EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA5F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802CA5F4: jal         0x8021F35C
    // 0x802CA5F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802CA5F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x802CA5FC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x802CA600: addiu       $t5, $zero, 0xCA
    ctx->r13 = ADD32(0, 0XCA);
    // 0x802CA604: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802CA608: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802CA60C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802CA610: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802CA614: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802CA618: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802CA61C: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x802CA620: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    // 0x802CA624: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA628: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802CA62C: jal         0x8021F35C
    // 0x802CA630: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802CA630: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x802CA634: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802CA638: addiu       $t9, $zero, 0xCA
    ctx->r25 = ADD32(0, 0XCA);
    // 0x802CA63C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x802CA640: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x802CA644: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802CA648: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802CA64C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802CA650: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802CA654: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802CA658: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    // 0x802CA65C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802CA664: jal         0x8021F35C
    // 0x802CA668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802CA668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x802CA66C: jal         0x8021FCD0
    // 0x802CA670: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_12;
    // 0x802CA670: nop

    after_12:
    // 0x802CA674: jal         0x8021F4E4
    // 0x802CA678: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_13;
    // 0x802CA678: nop

    after_13:
    // 0x802CA67C: addiu       $t2, $zero, 0x30
    ctx->r10 = ADD32(0, 0X30);
    // 0x802CA680: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802CA684: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802CA688: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802CA68C: addiu       $a0, $zero, 0xE3
    ctx->r4 = ADD32(0, 0XE3);
    // 0x802CA690: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    // 0x802CA694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA698: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802CA69C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CA6A0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CA6A4: jal         0x8021F35C
    // 0x802CA6A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x802CA6A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_14:
    // 0x802CA6AC: addiu       $t4, $zero, 0x30
    ctx->r12 = ADD32(0, 0X30);
    // 0x802CA6B0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802CA6B4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802CA6B8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802CA6BC: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802CA6C0: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    // 0x802CA6C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA6C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802CA6CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CA6D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CA6D4: jal         0x8021F35C
    // 0x802CA6D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x802CA6D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_15:
    // 0x802CA6DC: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x802CA6E0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802CA6E4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802CA6E8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802CA6EC: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802CA6F0: addiu       $a1, $zero, 0xBA
    ctx->r5 = ADD32(0, 0XBA);
    // 0x802CA6F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA6F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802CA6FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CA700: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CA704: jal         0x8021F35C
    // 0x802CA708: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802CA708: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_16:
    // 0x802CA70C: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x802CA710: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802CA714: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802CA718: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802CA71C: addiu       $a0, $zero, 0xE3
    ctx->r4 = ADD32(0, 0XE3);
    // 0x802CA720: addiu       $a1, $zero, 0xBA
    ctx->r5 = ADD32(0, 0XBA);
    // 0x802CA724: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA728: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802CA72C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CA730: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CA734: jal         0x8021F35C
    // 0x802CA738: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x802CA738: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_17:
    // 0x802CA73C: jal         0x8021FCD0
    // 0x802CA740: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_18;
    // 0x802CA740: nop

    after_18:
    // 0x802CA744: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x802CA748: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x802CA74C: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x802CA750: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802CA754: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x802CA758: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x802CA75C: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x802CA760: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802CA764: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802CA768: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x802CA76C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x802CA770: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x802CA774: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x802CA778: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802CA77C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802CA780: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802CA784: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802CA788: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802CA78C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802CA790: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x802CA794: addiu       $a2, $zero, 0xD7
    ctx->r6 = ADD32(0, 0XD7);
    // 0x802CA798: jal         0x802CE434
    // 0x802CA79C: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    static_3_802CE434(rdram, ctx);
        goto after_19;
    // 0x802CA79C: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    after_19:
    // 0x802CA7A0: jal         0x8022337C
    // 0x802CA7A4: nop

    static_3_8022337C(rdram, ctx);
        goto after_20;
    // 0x802CA7A4: nop

    after_20:
    // 0x802CA7A8: jal         0x8023413C
    // 0x802CA7AC: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    static_3_8023413C(rdram, ctx);
        goto after_21;
    // 0x802CA7AC: lw          $a0, 0x48($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X48);
    after_21:
    // 0x802CA7B0: jal         0x8023413C
    // 0x802CA7B4: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    static_3_8023413C(rdram, ctx);
        goto after_22;
    // 0x802CA7B4: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    after_22:
    // 0x802CA7B8: jal         0x8023413C
    // 0x802CA7BC: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    static_3_8023413C(rdram, ctx);
        goto after_23;
    // 0x802CA7BC: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    after_23:
    // 0x802CA7C0: jal         0x8023413C
    // 0x802CA7C4: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    static_3_8023413C(rdram, ctx);
        goto after_24;
    // 0x802CA7C4: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    after_24:
    // 0x802CA7C8: jal         0x8023413C
    // 0x802CA7CC: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    static_3_8023413C(rdram, ctx);
        goto after_25;
    // 0x802CA7CC: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    after_25:
    // 0x802CA7D0: jal         0x8023413C
    // 0x802CA7D4: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    static_3_8023413C(rdram, ctx);
        goto after_26;
    // 0x802CA7D4: lw          $a0, 0xB0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB0);
    after_26:
    // 0x802CA7D8: jal         0x8021E66C
    // 0x802CA7DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_27;
    // 0x802CA7DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_27:
    // 0x802CA7E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CA7E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CA7E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA7EC: jal         0x8021E708
    // 0x802CA7F0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_28;
    // 0x802CA7F0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_28:
    // 0x802CA7F4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CA7F8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802CA7FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CA800: jal         0x802CE360
    // 0x802CA804: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    static_3_802CE360(rdram, ctx);
        goto after_29;
    // 0x802CA804: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    after_29:
    // 0x802CA808: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CA80C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CA810: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CA814: jal         0x8021E87C
    // 0x802CA818: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    static_3_8021E87C(rdram, ctx);
        goto after_30;
    // 0x802CA818: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    after_30:
    // 0x802CA81C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802CA820: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CA824: lwc1        $f6, 0xB4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802CA828: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CA82C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CA830: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802CA834: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA838: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802CA83C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802CA840: jal         0x8021E708
    // 0x802CA844: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    static_3_8021E708(rdram, ctx);
        goto after_31;
    // 0x802CA844: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_31:
    // 0x802CA848: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802CA84C: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    // 0x802CA850: jal         0x8021E87C
    // 0x802CA854: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    static_3_8021E87C(rdram, ctx);
        goto after_32;
    // 0x802CA854: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    after_32:
    // 0x802CA858: lwc1        $f0, 0xB4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802CA85C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802CA860: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CA864: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802CA868: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CA86C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CA870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA874: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802CA878: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802CA87C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x802CA880: jal         0x8021E708
    // 0x802CA884: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    static_3_8021E708(rdram, ctx);
        goto after_33;
    // 0x802CA884: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_33:
    // 0x802CA888: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802CA88C: addiu       $a1, $zero, 0x9B
    ctx->r5 = ADD32(0, 0X9B);
    // 0x802CA890: jal         0x8021E87C
    // 0x802CA894: lw          $a2, 0x30($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X30);
    static_3_8021E87C(rdram, ctx);
        goto after_34;
    // 0x802CA894: lw          $a2, 0x30($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X30);
    after_34:
    // 0x802CA898: jal         0x8021E66C
    // 0x802CA89C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    static_3_8021E66C(rdram, ctx);
        goto after_35;
    // 0x802CA89C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_35:
    // 0x802CA8A0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802CA8A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802CA8A8: lwc1        $f10, 0xB4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802CA8AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CA8B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CA8B4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802CA8B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA8BC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802CA8C0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x802CA8C4: jal         0x8021E708
    // 0x802CA8C8: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    static_3_8021E708(rdram, ctx);
        goto after_36;
    // 0x802CA8C8: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_36:
    // 0x802CA8CC: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    // 0x802CA8D0: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    // 0x802CA8D4: jal         0x8021E87C
    // 0x802CA8D8: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    static_3_8021E87C(rdram, ctx);
        goto after_37;
    // 0x802CA8D8: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    after_37:
    // 0x802CA8DC: lwc1        $f0, 0xB4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802CA8E0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802CA8E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CA8E8: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802CA8EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CA8F0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CA8F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA8F8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802CA8FC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802CA900: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802CA904: jal         0x8021E708
    // 0x802CA908: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    static_3_8021E708(rdram, ctx);
        goto after_38;
    // 0x802CA908: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_38:
    // 0x802CA90C: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    // 0x802CA910: addiu       $a1, $zero, 0xA1
    ctx->r5 = ADD32(0, 0XA1);
    // 0x802CA914: jal         0x8021E87C
    // 0x802CA918: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    static_3_8021E87C(rdram, ctx);
        goto after_39;
    // 0x802CA918: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    after_39:
    // 0x802CA91C: lwc1        $f0, 0xB4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802CA920: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802CA924: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CA928: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802CA92C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CA930: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CA934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA938: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802CA93C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802CA940: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x802CA944: jal         0x8021E708
    // 0x802CA948: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    static_3_8021E708(rdram, ctx);
        goto after_40;
    // 0x802CA948: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_40:
    // 0x802CA94C: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    // 0x802CA950: addiu       $a1, $zero, 0x97
    ctx->r5 = ADD32(0, 0X97);
    // 0x802CA954: jal         0x8021E87C
    // 0x802CA958: lw          $a2, 0x38($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X38);
    static_3_8021E87C(rdram, ctx);
        goto after_41;
    // 0x802CA958: lw          $a2, 0x38($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X38);
    after_41:
    // 0x802CA95C: lwc1        $f0, 0xB4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802CA960: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802CA964: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802CA968: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802CA96C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CA970: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CA974: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA978: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802CA97C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802CA980: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x802CA984: jal         0x8021E708
    // 0x802CA988: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    static_3_8021E708(rdram, ctx);
        goto after_42;
    // 0x802CA988: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_42:
    // 0x802CA98C: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    // 0x802CA990: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    // 0x802CA994: jal         0x8021E87C
    // 0x802CA998: lw          $a2, 0x3C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X3C);
    static_3_8021E87C(rdram, ctx);
        goto after_43;
    // 0x802CA998: lw          $a2, 0x3C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X3C);
    after_43:
    // 0x802CA99C: lwc1        $f0, 0xB4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802CA9A0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802CA9A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CA9A8: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802CA9AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CA9B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CA9B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA9B8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802CA9BC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802CA9C0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802CA9C4: jal         0x8021E708
    // 0x802CA9C8: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    static_3_8021E708(rdram, ctx);
        goto after_44;
    // 0x802CA9C8: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_44:
    // 0x802CA9CC: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    // 0x802CA9D0: addiu       $a1, $zero, 0x83
    ctx->r5 = ADD32(0, 0X83);
    // 0x802CA9D4: jal         0x8021E87C
    // 0x802CA9D8: lw          $a2, 0x40($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X40);
    static_3_8021E87C(rdram, ctx);
        goto after_45;
    // 0x802CA9D8: lw          $a2, 0x40($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X40);
    after_45:
    // 0x802CA9DC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802CA9E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CA9E4: lwc1        $f18, 0xB4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802CA9E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CA9EC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CA9F0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802CA9F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA9F8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802CA9FC: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x802CAA00: jal         0x8021E708
    // 0x802CAA04: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    static_3_8021E708(rdram, ctx);
        goto after_46;
    // 0x802CAA04: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_46:
    // 0x802CAA08: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x802CAA0C: addiu       $a1, $zero, 0xE4
    ctx->r5 = ADD32(0, 0XE4);
    // 0x802CAA10: jal         0x802CE360
    // 0x802CAA14: addiu       $a2, $zero, 0x124
    ctx->r6 = ADD32(0, 0X124);
    static_3_802CE360(rdram, ctx);
        goto after_47;
    // 0x802CAA14: addiu       $a2, $zero, 0x124
    ctx->r6 = ADD32(0, 0X124);
    after_47:
    // 0x802CAA18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CAA1C: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x802CAA20: jal         0x8021E87C
    // 0x802CAA24: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    static_3_8021E87C(rdram, ctx);
        goto after_48;
    // 0x802CAA24: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    after_48:
    // 0x802CAA28: jal         0x8021E66C
    // 0x802CAA2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_49;
    // 0x802CAA2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_49:
    // 0x802CAA30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CAA34: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CAA38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CAA3C: jal         0x8021E708
    // 0x802CAA40: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_50;
    // 0x802CAA40: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_50:
    // 0x802CAA44: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CAA48: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CAA4C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802CAA50: jal         0x8021E87C
    // 0x802CAA54: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    static_3_8021E87C(rdram, ctx);
        goto after_51;
    // 0x802CAA54: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_51:
    // 0x802CAA58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CAA5C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CAA60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CAA64: jal         0x8021E708
    // 0x802CAA68: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_52;
    // 0x802CAA68: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_52:
    // 0x802CAA6C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CAA70: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CAA74: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    // 0x802CAA78: jal         0x8021E87C
    // 0x802CAA7C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    static_3_8021E87C(rdram, ctx);
        goto after_53;
    // 0x802CAA7C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_53:
    // 0x802CAA80: jal         0x8021EC9C
    // 0x802CAA84: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_54;
    // 0x802CAA84: nop

    after_54:
    // 0x802CAA88: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802CAA8C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x802CAA90: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x802CAA94: jr          $ra
    // 0x802CAA98: nop

    return;
    // 0x802CAA98: nop

;}
RECOMP_FUNC void D_80200AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200AD0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80200AD4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80200AD8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80200ADC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80200AE0: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x80200AE4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80200AE8: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x80200AEC: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80200AF0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80200AF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80200AF8: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x80200AFC: or          $fp, $sp, $zero
    ctx->r30 = ctx->r29 | 0;
    // 0x80200B00: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80200B04: bnel        $v0, $zero, L_80200B20
    if (ctx->r2 != 0) {
        // 0x80200B08: lbu         $t0, 0x9($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X9);
            goto L_80200B20;
    }
    goto skip_0;
    // 0x80200B08: lbu         $t0, 0x9($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X9);
    skip_0:
    // 0x80200B0C: jal         0x80231A24
    // 0x80200B10: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80200B10: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80200B14: b           L_80200BC8
    // 0x80200B18: lw          $ra, 0x2C($fp)
    ctx->r31 = MEM_W(ctx->r30, 0X2C);
        goto L_80200BC8;
    // 0x80200B18: lw          $ra, 0x2C($fp)
    ctx->r31 = MEM_W(ctx->r30, 0X2C);
    // 0x80200B1C: lbu         $t0, 0x9($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X9);
L_80200B20:
    // 0x80200B20: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x80200B24: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80200B28: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x80200B2C: addiu       $t2, $t1, 0x7
    ctx->r10 = ADD32(ctx->r9, 0X7);
    // 0x80200B30: and         $t3, $t2, $v1
    ctx->r11 = ctx->r10 & ctx->r3;
    // 0x80200B34: subu        $sp, $sp, $t3
    ctx->r29 = SUB32(ctx->r29, ctx->r11);
    // 0x80200B38: addiu       $t4, $sp, 0x10
    ctx->r12 = ADD32(ctx->r29, 0X10);
    // 0x80200B3C: sw          $t4, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->r12;
    // 0x80200B40: lbu         $t5, 0x9($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X9);
    // 0x80200B44: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80200B48: addiu       $a0, $fp, 0x34
    ctx->r4 = ADD32(ctx->r30, 0X34);
    // 0x80200B4C: multu       $t5, $a3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80200B50: mflo        $t6
    ctx->r14 = lo;
    // 0x80200B54: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x80200B58: and         $t8, $t7, $v1
    ctx->r24 = ctx->r15 & ctx->r3;
    // 0x80200B5C: subu        $sp, $sp, $t8
    ctx->r29 = SUB32(ctx->r29, ctx->r24);
    // 0x80200B60: addiu       $t9, $sp, 0x10
    ctx->r25 = ADD32(ctx->r29, 0X10);
    // 0x80200B64: sw          $t9, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r25;
    // 0x80200B68: lbu         $t0, 0x9($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X9);
    // 0x80200B6C: multu       $t0, $a3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80200B70: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80200B74: mflo        $t1
    ctx->r9 = lo;
    // 0x80200B78: addiu       $t2, $t1, 0x7
    ctx->r10 = ADD32(ctx->r9, 0X7);
    // 0x80200B7C: and         $t3, $t2, $v1
    ctx->r11 = ctx->r10 & ctx->r3;
    // 0x80200B80: subu        $sp, $sp, $t3
    ctx->r29 = SUB32(ctx->r29, ctx->r11);
    // 0x80200B84: addiu       $t4, $sp, 0x10
    ctx->r12 = ADD32(ctx->r29, 0X10);
    // 0x80200B88: sw          $t4, 0x3C($fp)
    MEM_W(0X3C, ctx->r30) = ctx->r12;
    // 0x80200B8C: lbu         $t5, 0x9($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X9);
    // 0x80200B90: addiu       $t6, $t5, 0x7
    ctx->r14 = ADD32(ctx->r13, 0X7);
    // 0x80200B94: and         $t7, $t6, $v1
    ctx->r15 = ctx->r14 & ctx->r3;
    // 0x80200B98: subu        $sp, $sp, $t7
    ctx->r29 = SUB32(ctx->r29, ctx->r15);
    // 0x80200B9C: addiu       $t8, $sp, 0x10
    ctx->r24 = ADD32(ctx->r29, 0X10);
    // 0x80200BA0: sw          $t8, 0x40($fp)
    MEM_W(0X40, ctx->r30) = ctx->r24;
    // 0x80200BA4: lbu         $t9, 0x9($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X9);
    // 0x80200BA8: sb          $zero, 0x44($fp)
    MEM_B(0X44, ctx->r30) = 0;
    // 0x80200BAC: sb          $t0, 0x45($fp)
    MEM_B(0X45, ctx->r30) = ctx->r8;
    // 0x80200BB0: jal         0x80200C28
    // 0x80200BB4: sh          $t9, 0x46($fp)
    MEM_H(0X46, ctx->r30) = ctx->r25;
    static_3_80200C28(rdram, ctx);
        goto after_1;
    // 0x80200BB4: sh          $t9, 0x46($fp)
    MEM_H(0X46, ctx->r30) = ctx->r25;
    after_1:
    // 0x80200BB8: lw          $a0, 0x48($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X48);
    // 0x80200BBC: jal         0x802009A8
    // 0x80200BC0: addiu       $a1, $fp, 0x34
    ctx->r5 = ADD32(ctx->r30, 0X34);
    static_3_802009A8(rdram, ctx);
        goto after_2;
    // 0x80200BC0: addiu       $a1, $fp, 0x34
    ctx->r5 = ADD32(ctx->r30, 0X34);
    after_2:
    // 0x80200BC4: lw          $ra, 0x2C($fp)
    ctx->r31 = MEM_W(ctx->r30, 0X2C);
L_80200BC8:
    // 0x80200BC8: or          $sp, $fp, $zero
    ctx->r29 = ctx->r30 | 0;
    // 0x80200BCC: lw          $fp, 0x28($fp)
    ctx->r30 = MEM_W(ctx->r30, 0X28);
    // 0x80200BD0: jr          $ra
    // 0x80200BD4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80200BD4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802ED618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED698: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802ED69C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED6A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802ED6A4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802ED6A8: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x802ED6AC: addiu       $t7, $zero, 0x1E9
    ctx->r15 = ADD32(0, 0X1E9);
    // 0x802ED6B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ED6B4: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ED6B8: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ED6BC: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ED6C0: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ED6C4: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ED6C8: sh          $zero, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = 0;
    // 0x802ED6CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED6D0: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ED6D4: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ED6D8: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802ED6DC: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802ED6E0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED6E4: sh          $zero, 0x88($a0)
    MEM_H(0X88, ctx->r4) = 0;
    // 0x802ED6E8: jr          $ra
    // 0x802ED6EC: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x802ED6EC: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void D_8023E660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E660: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023E664: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023E668: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8023E66C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023E670: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023E674: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8023E678: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8023E67C: bne         $t6, $zero, L_8023E7D8
    if (ctx->r14 != 0) {
        // 0x8023E680: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_8023E7D8;
    }
    // 0x8023E680: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8023E684: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8023E688: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8023E68C: jal         0x802371E0
    // 0x8023E690: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    static_3_802371E0(rdram, ctx);
        goto after_0;
    // 0x8023E690: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_0:
    // 0x8023E694: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023E698: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023E69C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023E6A0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8023E6A4: jal         0x802371E0
    // 0x8023E6A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802371E0(rdram, ctx);
        goto after_1;
    // 0x8023E6A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8023E6AC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023E6B0: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8023E6B4: bne         $t7, $zero, L_8023E6C4
    if (ctx->r15 != 0) {
        // 0x8023E6B8: nop
    
            goto L_8023E6C4;
    }
    // 0x8023E6B8: nop

    // 0x8023E6BC: jal         0x80246BB0
    // 0x8023E6C0: nop

    func_80246BB0(rdram, ctx);
        goto after_2;
    // 0x8023E6C0: nop

    after_2:
L_8023E6C4:
    // 0x8023E6C4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023E6C8: lui         $a2, 0x2222
    ctx->r6 = S32(0X2222 << 16);
    // 0x8023E6CC: ori         $a2, $a2, 0x2222
    ctx->r6 = ctx->r6 | 0X2222;
    // 0x8023E6D0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023E6D4: jal         0x8023DF30
    // 0x8023E6D8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    static_3_8023DF30(rdram, ctx);
        goto after_3;
    // 0x8023E6D8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x8023E6DC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8023E6E0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8023E6E4: jal         0x80247490
    // 0x8023E6E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80247490(rdram, ctx);
        goto after_4;
    // 0x8023E6E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8023E6EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8023E6F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8023E6F4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023E6F8: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8023E6FC: beq         $at, $zero, L_8023E714
    if (ctx->r1 == 0) {
        // 0x8023E700: nop
    
            goto L_8023E714;
    }
    // 0x8023E700: nop

    // 0x8023E704: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8023E708: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8023E70C: jal         0x8023E840
    // 0x8023E710: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    static_3_8023E840(rdram, ctx);
        goto after_5;
    // 0x8023E710: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_5:
L_8023E714:
    // 0x8023E714: jal         0x80241760
    // 0x8023E718: nop

    static_3_80241760(rdram, ctx);
        goto after_6;
    // 0x8023E718: nop

    after_6:
    // 0x8023E71C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023E720: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8023E724: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8023E728: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8023E72C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8023E730: addiu       $t2, $t2, 0x4D20
    ctx->r10 = ADD32(ctx->r10, 0X4D20);
    // 0x8023E734: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x8023E738: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x8023E73C: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x8023E740: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x8023E744: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023E748: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x8023E74C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023E750: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023E754: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8023E758: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023E75C: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8023E760: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8023E764: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x8023E768: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8023E76C: addiu       $t7, $t7, -0x73B0
    ctx->r15 = ADD32(ctx->r15, -0X73B0);
    // 0x8023E770: addiu       $t9, $t8, 0x1000
    ctx->r25 = ADD32(ctx->r24, 0X1000);
    // 0x8023E774: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023E778: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8023E77C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8023E780: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x8023E784: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x8023E788: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x8023E78C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8023E790: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8023E794: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8023E798: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8023E79C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023E7A0: jal         0x80237210
    // 0x8023E7A4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    static_3_80237210(rdram, ctx);
        goto after_7;
    // 0x8023E7A4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_7:
    // 0x8023E7A8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023E7AC: jal         0x80237360
    // 0x8023E7B0: addiu       $a0, $a0, 0x4D20
    ctx->r4 = ADD32(ctx->r4, 0X4D20);
    static_3_80237360(rdram, ctx);
        goto after_8;
    // 0x8023E7B0: addiu       $a0, $a0, 0x4D20
    ctx->r4 = ADD32(ctx->r4, 0X4D20);
    after_8:
    // 0x8023E7B4: jal         0x80241780
    // 0x8023E7B8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_80241780(rdram, ctx);
        goto after_9;
    // 0x8023E7B8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_9:
    // 0x8023E7BC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023E7C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023E7C4: beq         $t1, $at, L_8023E7D8
    if (ctx->r9 == ctx->r1) {
        // 0x8023E7C8: nop
    
            goto L_8023E7D8;
    }
    // 0x8023E7C8: nop

    // 0x8023E7CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8023E7D0: jal         0x8023E840
    // 0x8023E7D4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    static_3_8023E840(rdram, ctx);
        goto after_10;
    // 0x8023E7D4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_10:
L_8023E7D8:
    // 0x8023E7D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E7DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023E7E0: jr          $ra
    // 0x8023E7E4: nop

    return;
    // 0x8023E7E4: nop

;}
RECOMP_FUNC void D_802CEE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CEEB0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802CEEB4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802CEEB8: jr          $ra
    // 0x802CEEBC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802CEEBC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802C9B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C9C0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C9C10: jal         0x80291748
    // 0x802C9C14: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_80291748(rdram, ctx);
        goto after_0;
    // 0x802C9C14: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x802C9C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C9C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C9C20: jr          $ra
    // 0x802C9C24: nop

    return;
    // 0x802C9C24: nop

;}
RECOMP_FUNC void D_802E8764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E87E4: jr          $ra
    // 0x802E87E8: sw          $a1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r5;
    return;
    // 0x802E87E8: sw          $a1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802D7FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D807C: jr          $ra
    // 0x802D8080: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802D8080: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802A22F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2370: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A2374: jr          $ra
    // 0x802A2378: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A2378: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802A1FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2060: jr          $ra
    // 0x802A2064: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
    return;
    // 0x802A2064: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
;}
RECOMP_FUNC void D_80223DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223DCC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80223DD0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80223DD4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80223DD8: sllv        $t8, $t7, $a0
    ctx->r24 = S32(ctx->r15 << (ctx->r4 & 31));
    // 0x80223DDC: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x80223DE0: beq         $t9, $zero, L_80223DF0
    if (ctx->r25 == 0) {
        // 0x80223DE4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80223DF0;
    }
    // 0x80223DE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223DE8: jr          $ra
    // 0x80223DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80223DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223DF0:
    // 0x80223DF0: jr          $ra
    // 0x80223DF4: nop

    return;
    // 0x80223DF4: nop

;}
RECOMP_FUNC void D_802CF3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF420: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802CF424: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802CF428: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802CF42C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802CF430: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x802CF434: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x802CF438: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CF43C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x802CF440: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x802CF444: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802CF448: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802CF44C: jalr        $t9
    // 0x802CF450: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802CF450: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x802CF454: lw          $t7, 0x364($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X364);
    // 0x802CF458: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CF45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CF460: beq         $t7, $at, L_802CF48C
    if (ctx->r15 == ctx->r1) {
        // 0x802CF464: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_802CF48C;
    }
    // 0x802CF464: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802CF468: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802CF46C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802CF470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CF474: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x802CF478: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802CF47C: jal         0x80317194
    // 0x802CF480: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_80317194(rdram, ctx);
        goto after_1;
    // 0x802CF480: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x802CF484: b           L_802CF4A4
    // 0x802CF488: lw          $v0, 0x364($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X364);
        goto L_802CF4A4;
    // 0x802CF488: lw          $v0, 0x364($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X364);
L_802CF48C:
    // 0x802CF48C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802CF490: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802CF494: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802CF498: jal         0x80317194
    // 0x802CF49C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_80317194(rdram, ctx);
        goto after_2;
    // 0x802CF49C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x802CF4A0: lw          $v0, 0x364($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X364);
L_802CF4A4:
    // 0x802CF4A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CF4A8: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802CF4AC: beq         $v0, $at, L_802CF4CC
    if (ctx->r2 == ctx->r1) {
        // 0x802CF4B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802CF4CC;
    }
    // 0x802CF4B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802CF4B4: beq         $v0, $at, L_802CF524
    if (ctx->r2 == ctx->r1) {
        // 0x802CF4B8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802CF524;
    }
    // 0x802CF4B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802CF4BC: beq         $v0, $at, L_802CF574
    if (ctx->r2 == ctx->r1) {
        // 0x802CF4C0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802CF574;
    }
    // 0x802CF4C0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CF4C4: b           L_802CF5D8
    // 0x802CF4C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802CF5D8;
    // 0x802CF4C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802CF4CC:
    // 0x802CF4CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CF4D0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CF4D4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802CF4D8: nop

    // 0x802CF4DC: bc1fl       L_802CF5D8
    if (!c1cs) {
        // 0x802CF4E0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802CF5D8;
    }
    goto skip_0;
    // 0x802CF4E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802CF4E4: lbu         $t1, 0x36C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X36C);
    // 0x802CF4E8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802CF4EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CF4F0: bne         $t1, $zero, L_802CF5D4
    if (ctx->r9 != 0) {
        // 0x802CF4F4: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_802CF5D4;
    }
    // 0x802CF4F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802CF4F8: lui         $at, 0x4244
    ctx->r1 = S32(0X4244 << 16);
    // 0x802CF4FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CF500: sw          $t2, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r10;
    // 0x802CF504: lui         $a3, 0xC451
    ctx->r7 = S32(0XC451 << 16);
    // 0x802CF508: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CF50C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802CF510: lui         $a2, 0xC268
    ctx->r6 = S32(0XC268 << 16);
    // 0x802CF514: jal         0x802AFF70
    // 0x802CF518: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_3;
    // 0x802CF518: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x802CF51C: b           L_802CF5D8
    // 0x802CF520: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802CF5D8;
    // 0x802CF520: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802CF524:
    // 0x802CF524: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802CF528: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802CF52C: lh          $t3, 0x98($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X98);
    // 0x802CF530: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x802CF534: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x802CF538: jalr        $t9
    // 0x802CF53C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802CF53C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_4:
    // 0x802CF540: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CF544: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802CF548: jal         0x802AAD30
    // 0x802CF54C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    static_3_802AAD30(rdram, ctx);
        goto after_5;
    // 0x802CF54C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x802CF550: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CF554: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802CF558: jal         0x803000BC
    // 0x802CF55C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_803000BC(rdram, ctx);
        goto after_6;
    // 0x802CF55C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802CF560: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802CF564: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x802CF568: sw          $t4, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r12;
    // 0x802CF56C: b           L_802CF5D4
    // 0x802CF570: swc1        $f10, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f10.u32l;
        goto L_802CF5D4;
    // 0x802CF570: swc1        $f10, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f10.u32l;
L_802CF574:
    // 0x802CF574: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802CF578: beq         $a0, $zero, L_802CF588
    if (ctx->r4 == 0) {
        // 0x802CF57C: nop
    
            goto L_802CF588;
    }
    // 0x802CF57C: nop

    // 0x802CF580: jal         0x802C63D0
    // 0x802CF584: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    static_3_802C63D0(rdram, ctx);
        goto after_7;
    // 0x802CF584: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_7:
L_802CF588:
    // 0x802CF588: jal         0x802D25F4
    // 0x802CF58C: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D25F4(rdram, ctx);
        goto after_8;
    // 0x802CF58C: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_8:
    // 0x802CF590: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802CF594: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802CF598: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802CF59C: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802CF5A0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802CF5A4: lh          $t5, 0x98($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X98);
    // 0x802CF5A8: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x802CF5AC: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x802CF5B0: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x802CF5B4: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x802CF5B8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802CF5BC: jalr        $t9
    // 0x802CF5C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802CF5C0: nop

    after_9:
    // 0x802CF5C4: lwc1        $f8, 0x368($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X368);
    // 0x802CF5C8: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802CF5CC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802CF5D0: swc1        $f16, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->f16.u32l;
L_802CF5D4:
    // 0x802CF5D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802CF5D8:
    // 0x802CF5D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802CF5DC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802CF5E0: jr          $ra
    // 0x802CF5E4: nop

    return;
    // 0x802CF5E4: nop

;}
RECOMP_FUNC void D_802D129C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D131C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1324: jal         0x8028D9B4
    // 0x802D1328: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D9B4(rdram, ctx);
        goto after_0;
    // 0x802D1328: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802D132C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1334: jr          $ra
    // 0x802D1338: nop

    return;
    // 0x802D1338: nop

;}
RECOMP_FUNC void D_802A94E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9564: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802A9568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A956C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x802A9570: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x802A9574: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x802A9578: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x802A957C: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x802A9580: lh          $t7, 0x90($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X90);
    // 0x802A9584: lw          $t9, 0x94($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X94);
    // 0x802A9588: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    // 0x802A958C: jalr        $t9
    // 0x802A9590: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802A9590: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x802A9594: jal         0x8022970C
    // 0x802A9598: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802A9598: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x802A959C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802A95A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A95A4: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802A95A8: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802A95AC: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A95B0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802A95B4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x802A95B8: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x802A95BC: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x802A95C0: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x802A95C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A95C8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x802A95CC: jal         0x8021B4B0
    // 0x802A95D0: lw          $a0, 0x280($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X280);
    static_3_8021B4B0(rdram, ctx);
        goto after_2;
    // 0x802A95D0: lw          $a0, 0x280($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X280);
    after_2:
    // 0x802A95D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A95D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802A95DC: jr          $ra
    // 0x802A95E0: nop

    return;
    // 0x802A95E0: nop

;}
RECOMP_FUNC void D_80222CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222CFC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80222D00: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80222D04: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x80222D08: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80222D0C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80222D10: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80222D14: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80222D18: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80222D1C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80222D20: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
    // 0x80222D24: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80222D28: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80222D2C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80222D30: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80222D34: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80222D38: jal         0x80231C58
    // 0x80222D3C: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80222D3C: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    after_0:
    // 0x80222D40: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80222D44: beq         $v0, $zero, L_80222D5C
    if (ctx->r2 == 0) {
        // 0x80222D48: addiu       $v1, $v1, 0x0
        ctx->r3 = ADD32(ctx->r3, 0X0);
            goto L_80222D5C;
    }
    // 0x80222D48: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80222D4C: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80222D50: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80222D54: b           L_80222DC4
    // 0x80222D58: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
        goto L_80222DC4;
    // 0x80222D58: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
L_80222D5C:
    // 0x80222D5C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80222D60: lhu         $t0, 0x0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X0);
    // 0x80222D64: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80222D68: lh          $t3, 0x0($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X0);
    // 0x80222D6C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80222D70: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80222D74: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x80222D78: addiu       $t5, $sp, 0x50
    ctx->r13 = ADD32(ctx->r29, 0X50);
    // 0x80222D7C: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x80222D80: addiu       $t7, $t5, 0x3C
    ctx->r15 = ADD32(ctx->r13, 0X3C);
    // 0x80222D84: or          $t8, $sp, $zero
    ctx->r24 = ctx->r29 | 0;
    // 0x80222D88: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
L_80222D8C:
    // 0x80222D8C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80222D90: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x80222D94: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80222D98: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80222D9C: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x80222DA0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80222DA4: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x80222DA8: bne         $t5, $t7, L_80222D8C
    if (ctx->r13 != ctx->r15) {
        // 0x80222DAC: sw          $at, 0x4($t8)
        MEM_W(0X4, ctx->r24) = ctx->r1;
            goto L_80222D8C;
    }
    // 0x80222DAC: sw          $at, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r1;
    // 0x80222DB0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80222DB4: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80222DB8: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80222DBC: jal         0x80228EB0
    // 0x80222DC0: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    static_3_80228EB0(rdram, ctx);
        goto after_1;
    // 0x80222DC0: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_1:
L_80222DC4:
    // 0x80222DC4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80222DC8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80222DCC: jr          $ra
    // 0x80222DD0: nop

    return;
    // 0x80222DD0: nop

;}
RECOMP_FUNC void D_802D87F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D8874: bne         $a0, $zero, L_802D888C
    if (ctx->r4 != 0) {
        // 0x802D8878: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802D888C;
    }
    // 0x802D8878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D887C: jal         0x802C67EC
    // 0x802D8880: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D8880: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    after_0:
    // 0x802D8884: beq         $v0, $zero, L_802D8890
    if (ctx->r2 == 0) {
        // 0x802D8888: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D8890;
    }
    // 0x802D8888: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802D888C:
    // 0x802D888C: sb          $zero, 0x60($a0)
    MEM_B(0X60, ctx->r4) = 0;
L_802D8890:
    // 0x802D8890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D8894: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D8898: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802D889C: jr          $ra
    // 0x802D88A0: nop

    return;
    // 0x802D88A0: nop

;}
RECOMP_FUNC void D_80231098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231098: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023109C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802310A0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802310A4: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x802310A8: jal         0x80207130
    // 0x802310AC: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802310AC: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_0:
    // 0x802310B0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802310B4: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    // 0x802310B8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802310BC: jal         0x80207130
    // 0x802310C0: add.d       $f20, $f0, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f20.d = ctx->f0.d + ctx->f6.d;
    static_3_80207130(rdram, ctx);
        goto after_1;
    // 0x802310C0: add.d       $f20, $f0, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f20.d = ctx->f0.d + ctx->f6.d;
    after_1:
    // 0x802310C4: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
    // 0x802310C8: nop

    // 0x802310CC: bc1fl       L_802310F0
    if (!c1cs) {
        // 0x802310D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802310F0;
    }
    goto skip_0;
    // 0x802310D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_802310D4:
    // 0x802310D4: jal         0x80207130
    // 0x802310D8: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    static_3_80207130(rdram, ctx);
        goto after_2;
    // 0x802310D8: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_2:
    // 0x802310DC: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
    // 0x802310E0: nop

    // 0x802310E4: bc1t        L_802310D4
    if (c1cs) {
        // 0x802310E8: nop
    
            goto L_802310D4;
    }
    // 0x802310E8: nop

    // 0x802310EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802310F0:
    // 0x802310F0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802310F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802310F8: jr          $ra
    // 0x802310FC: nop

    return;
    // 0x802310FC: nop

;}
