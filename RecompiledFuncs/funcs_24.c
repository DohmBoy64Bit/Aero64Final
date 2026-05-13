#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80297A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297ACC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80297AD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80297AD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80297AD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80297ADC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80297AE0: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x80297AE4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80297AE8: jal         0x802AEE54
    // 0x80297AEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_0;
    // 0x80297AEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80297AF0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80297AF4: jal         0x802AEE80
    // 0x80297AF8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802AEE80(rdram, ctx);
        goto after_1;
    // 0x80297AF8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_1:
    // 0x80297AFC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80297B00: jal         0x80318510
    // 0x80297B04: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80318510(rdram, ctx);
        goto after_2;
    // 0x80297B04: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80297B08: lui         $at, 0x44F0
    ctx->r1 = S32(0X44F0 << 16);
    // 0x80297B0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80297B10: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80297B14: addiu       $t6, $s0, 0x7FFF
    ctx->r14 = ADD32(ctx->r16, 0X7FFF);
    // 0x80297B18: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80297B1C: nop

    // 0x80297B20: bc1fl       L_80297C10
    if (!c1cs) {
        // 0x80297B24: lw          $v1, 0x1120($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X1120);
            goto L_80297C10;
    }
    goto skip_0;
    // 0x80297B24: lw          $v1, 0x1120($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1120);
    skip_0:
    // 0x80297B28: lbu         $t6, 0x15AE($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X15AE);
    // 0x80297B2C: bnel        $t6, $zero, L_80297DA4
    if (ctx->r14 != 0) {
        // 0x80297B30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80297DA4;
    }
    goto skip_1;
    // 0x80297B30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80297B34: jal         0x802AED90
    // 0x80297B38: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802AED90(rdram, ctx);
        goto after_3;
    // 0x80297B38: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_3:
    // 0x80297B3C: addiu       $t7, $s0, 0x7FFF
    ctx->r15 = ADD32(ctx->r16, 0X7FFF);
    // 0x80297B40: lbu         $t7, 0x15AD($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X15AD);
    // 0x80297B44: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80297B48: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80297B4C: bne         $t7, $zero, L_80297B7C
    if (ctx->r15 != 0) {
        // 0x80297B50: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80297B7C;
    }
    // 0x80297B50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80297B54: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80297B58: jal         0x802AFF48
    // 0x80297B5C: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    static_3_802AFF48(rdram, ctx);
        goto after_4;
    // 0x80297B5C: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x80297B60: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80297B64: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80297B68: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80297B6C: sb          $t8, 0x15AD($at)
    MEM_B(0X15AD, ctx->r1) = ctx->r24;
    // 0x80297B70: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80297B74: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80297B78: swc1        $f2, -0x6A50($at)
    MEM_W(-0X6A50, ctx->r1) = ctx->f2.u32l;
L_80297B7C:
    // 0x80297B7C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80297B80: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80297B84: lwc1        $f6, -0x6A50($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6A50);
    // 0x80297B88: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80297B8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80297B90: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80297B94: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80297B98: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x80297B9C: nop

    // 0x80297BA0: bc1fl       L_80297DA4
    if (!c1cs) {
        // 0x80297BA4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80297DA4;
    }
    goto skip_2;
    // 0x80297BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80297BA8: jal         0x802AED60
    // 0x80297BAC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802AED60(rdram, ctx);
        goto after_5;
    // 0x80297BAC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_5:
    // 0x80297BB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80297BB4: bnel        $v0, $at, L_80297C00
    if (ctx->r2 != ctx->r1) {
        // 0x80297BB8: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80297C00;
    }
    goto skip_3;
    // 0x80297BB8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    skip_3:
    // 0x80297BBC: jal         0x802E7984
    // 0x80297BC0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    static_3_802E7984(rdram, ctx);
        goto after_6;
    // 0x80297BC0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_6:
    // 0x80297BC4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80297BC8: bne         $v0, $at, L_80297BDC
    if (ctx->r2 != ctx->r1) {
        // 0x80297BCC: lw          $a1, 0x3C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X3C);
            goto L_80297BDC;
    }
    // 0x80297BCC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80297BD0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80297BD4: jal         0x802AFF48
    // 0x80297BD8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    static_3_802AFF48(rdram, ctx);
        goto after_7;
    // 0x80297BD8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_7:
L_80297BDC:
    // 0x80297BDC: jal         0x802E7984
    // 0x80297BE0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    static_3_802E7984(rdram, ctx);
        goto after_8;
    // 0x80297BE0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_8:
    // 0x80297BE4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80297BE8: bne         $v0, $at, L_80297BFC
    if (ctx->r2 != ctx->r1) {
        // 0x80297BEC: lw          $a1, 0x3C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X3C);
            goto L_80297BFC;
    }
    // 0x80297BEC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80297BF0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80297BF4: jal         0x802AFF48
    // 0x80297BF8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    static_3_802AFF48(rdram, ctx);
        goto after_9;
    // 0x80297BF8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_9:
L_80297BFC:
    // 0x80297BFC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_80297C00:
    // 0x80297C00: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80297C04: b           L_80297DA0
    // 0x80297C08: sb          $t9, 0x15AE($at)
    MEM_B(0X15AE, ctx->r1) = ctx->r25;
        goto L_80297DA0;
    // 0x80297C08: sb          $t9, 0x15AE($at)
    MEM_B(0X15AE, ctx->r1) = ctx->r25;
    // 0x80297C0C: lw          $v1, 0x1120($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1120);
L_80297C10:
    // 0x80297C10: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80297C14: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80297C18: beq         $v1, $at, L_80297C28
    if (ctx->r3 == ctx->r1) {
        // 0x80297C1C: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_80297C28;
    }
    // 0x80297C1C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80297C20: bnel        $v1, $at, L_80297C30
    if (ctx->r3 != ctx->r1) {
        // 0x80297C24: lwc1        $f18, 0x38($a3)
        ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
            goto L_80297C30;
    }
    goto skip_4;
    // 0x80297C24: lwc1        $f18, 0x38($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
    skip_4:
L_80297C28:
    // 0x80297C28: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80297C2C: lwc1        $f18, 0x38($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
L_80297C30:
    // 0x80297C30: lwc1        $f16, 0x30($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X30);
    // 0x80297C34: lwc1        $f10, 0x34($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X34);
    // 0x80297C38: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x80297C3C: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x80297C40: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80297C44: addu        $v0, $s0, $t0
    ctx->r2 = ADD32(ctx->r16, ctx->r8);
    // 0x80297C48: lwc1        $f8, 0xFAC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XFAC);
    // 0x80297C4C: lwc1        $f6, 0xFA4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XFA4);
    // 0x80297C50: lwc1        $f4, 0xFA8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XFA8);
    // 0x80297C54: sub.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80297C58: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x80297C5C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80297C60: sub.s       $f12, $f16, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x80297C64: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80297C68: jal         0x802CF998
    // 0x80297C6C: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    static_3_802CF998(rdram, ctx);
        goto after_10;
    // 0x80297C6C: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    after_10:
    // 0x80297C70: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80297C74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80297C78: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80297C7C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80297C80: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80297C84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80297C88: bc1fl       L_80297C98
    if (!c1cs) {
        // 0x80297C8C: lw          $v0, 0x1120($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1120);
            goto L_80297C98;
    }
    goto skip_5;
    // 0x80297C8C: lw          $v0, 0x1120($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1120);
    skip_5:
    // 0x80297C90: sw          $v1, 0x1120($s0)
    MEM_W(0X1120, ctx->r16) = ctx->r3;
    // 0x80297C94: lw          $v0, 0x1120($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1120);
L_80297C98:
    // 0x80297C98: bne         $v0, $zero, L_80297CF8
    if (ctx->r2 != 0) {
        // 0x80297C9C: nop
    
            goto L_80297CF8;
    }
    // 0x80297C9C: nop

    // 0x80297CA0: lwc1        $f10, 0x38($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X38);
    // 0x80297CA4: lwc1        $f16, 0x1060($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1060);
    // 0x80297CA8: lwc1        $f18, 0x30($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X30);
    // 0x80297CAC: lwc1        $f4, 0x1058($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1058);
    // 0x80297CB0: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80297CB4: lwc1        $f6, 0x34($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X34);
    // 0x80297CB8: lwc1        $f8, 0x105C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X105C);
    // 0x80297CBC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80297CC0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80297CC4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80297CC8: jal         0x802CF998
    // 0x80297CCC: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    static_3_802CF998(rdram, ctx);
        goto after_11;
    // 0x80297CCC: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_11:
    // 0x80297CD0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80297CD4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80297CD8: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80297CDC: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x80297CE0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80297CE4: nop

    // 0x80297CE8: bc1fl       L_80297D58
    if (!c1cs) {
        // 0x80297CEC: lwc1        $f18, 0x38($a3)
        ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
            goto L_80297D58;
    }
    goto skip_6;
    // 0x80297CEC: lwc1        $f18, 0x38($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
    skip_6:
    // 0x80297CF0: b           L_80297D54
    // 0x80297CF4: sw          $t1, 0x1120($s0)
    MEM_W(0X1120, ctx->r16) = ctx->r9;
        goto L_80297D54;
    // 0x80297CF4: sw          $t1, 0x1120($s0)
    MEM_W(0X1120, ctx->r16) = ctx->r9;
L_80297CF8:
    // 0x80297CF8: bnel        $v0, $at, L_80297D58
    if (ctx->r2 != ctx->r1) {
        // 0x80297CFC: lwc1        $f18, 0x38($a3)
        ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
            goto L_80297D58;
    }
    goto skip_7;
    // 0x80297CFC: lwc1        $f18, 0x38($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
    skip_7:
    // 0x80297D00: lwc1        $f16, 0x38($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X38);
    // 0x80297D04: lwc1        $f18, 0x1000($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1000);
    // 0x80297D08: lwc1        $f4, 0x30($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X30);
    // 0x80297D0C: lwc1        $f6, 0xFF8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XFF8);
    // 0x80297D10: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80297D14: lwc1        $f8, 0x34($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X34);
    // 0x80297D18: lwc1        $f10, 0xFFC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XFFC);
    // 0x80297D1C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80297D20: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80297D24: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80297D28: jal         0x802CF998
    // 0x80297D2C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    static_3_802CF998(rdram, ctx);
        goto after_12;
    // 0x80297D2C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_12:
    // 0x80297D30: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80297D34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80297D38: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80297D3C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80297D40: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80297D44: nop

    // 0x80297D48: bc1fl       L_80297D58
    if (!c1cs) {
        // 0x80297D4C: lwc1        $f18, 0x38($a3)
        ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
            goto L_80297D58;
    }
    goto skip_8;
    // 0x80297D4C: lwc1        $f18, 0x38($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
    skip_8:
    // 0x80297D50: sw          $t2, 0x1120($s0)
    MEM_W(0X1120, ctx->r16) = ctx->r10;
L_80297D54:
    // 0x80297D54: lwc1        $f18, 0x38($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
L_80297D58:
    // 0x80297D58: lwc1        $f4, 0xFF4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XFF4);
    // 0x80297D5C: lwc1        $f6, 0x30($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X30);
    // 0x80297D60: lwc1        $f8, 0xFEC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XFEC);
    // 0x80297D64: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80297D68: lwc1        $f10, 0x34($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X34);
    // 0x80297D6C: lwc1        $f16, 0xFF0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XFF0);
    // 0x80297D70: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80297D74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80297D78: jal         0x802CF998
    // 0x80297D7C: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    static_3_802CF998(rdram, ctx);
        goto after_13;
    // 0x80297D7C: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    after_13:
    // 0x80297D80: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80297D84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80297D88: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x80297D8C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80297D90: nop

    // 0x80297D94: bc1fl       L_80297DA4
    if (!c1cs) {
        // 0x80297D98: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80297DA4;
    }
    goto skip_9;
    // 0x80297D98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
    // 0x80297D9C: sw          $t3, 0x1120($s0)
    MEM_W(0X1120, ctx->r16) = ctx->r11;
L_80297DA0:
    // 0x80297DA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80297DA4:
    // 0x80297DA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80297DA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80297DAC: jr          $ra
    // 0x80297DB0: nop

    return;
    // 0x80297DB0: nop

;}
RECOMP_FUNC void D_802918D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80291958: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8029195C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80291960: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80291964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80291968: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8029196C: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80291970: sw          $a1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r5;
    // 0x80291974: jal         0x8022970C
    // 0x80291978: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x80291978: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8029197C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80291980: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80291984: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80291988: jal         0x802AB410
    // 0x8029198C: lw          $a2, 0x8C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8C);
    static_3_802AB410(rdram, ctx);
        goto after_1;
    // 0x8029198C: lw          $a2, 0x8C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8C);
    after_1:
    // 0x80291990: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80291994: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80291998: lw          $t6, 0x18C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X18C);
    // 0x8029199C: swc1        $f4, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->f4.u32l;
    // 0x802919A0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802919A4: sw          $t7, 0x18C($a1)
    MEM_W(0X18C, ctx->r5) = ctx->r15;
    // 0x802919A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802919AC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802919B0: jr          $ra
    // 0x802919B4: nop

    return;
    // 0x802919B4: nop

;}
RECOMP_FUNC void D_80238EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238EC0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80238EC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80238EC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238ECC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80238ED0: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x80238ED4: jal         0x80245AD0
    // 0x80238ED8: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x80238ED8: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    after_0:
    // 0x80238EDC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80238EE0: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x80238EE4: jal         0x80238E34
    // 0x80238EE8: nop

    static_3_80238E34(rdram, ctx);
        goto after_1;
    // 0x80238EE8: nop

    after_1:
    // 0x80238EEC: jal         0x80245B14
    // 0x80238EF0: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    static_3_80245B14(rdram, ctx);
        goto after_2;
    // 0x80238EF0: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    after_2:
    // 0x80238EF4: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x80238EF8: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x80238EFC: beq         $v1, $zero, L_80238F0C
    if (ctx->r3 == 0) {
        // 0x80238F00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80238F0C;
    }
    // 0x80238F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238F04: b           L_802390B4
    // 0x80238F08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802390B4;
    // 0x80238F08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80238F0C:
    // 0x80238F0C: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x80238F10: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x80238F14: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80238F18: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80238F1C: jal         0x802456A0
    // 0x80238F20: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    static_3_802456A0(rdram, ctx);
        goto after_3;
    // 0x80238F20: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    after_3:
    // 0x80238F24: beq         $v0, $zero, L_80238F34
    if (ctx->r2 == 0) {
        // 0x80238F28: addiu       $a0, $sp, 0x5C
        ctx->r4 = ADD32(ctx->r29, 0X5C);
            goto L_80238F34;
    }
    // 0x80238F28: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x80238F2C: b           L_802390B8
    // 0x80238F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802390B8;
    // 0x80238F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238F34:
    // 0x80238F34: addiu       $a1, $sp, 0x7E
    ctx->r5 = ADD32(ctx->r29, 0X7E);
    // 0x80238F38: jal         0x80244B3C
    // 0x80238F3C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    static_3_80244B3C(rdram, ctx);
        goto after_4;
    // 0x80238F3C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    after_4:
    // 0x80238F40: lhu         $t8, 0x7E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X7E);
    // 0x80238F44: lhu         $t9, 0x78($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X78);
    // 0x80238F48: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80238F4C: bne         $t8, $t9, L_80238F64
    if (ctx->r24 != ctx->r25) {
        // 0x80238F50: or          $t1, $a1, $zero
        ctx->r9 = ctx->r5 | 0;
            goto L_80238F64;
    }
    // 0x80238F50: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x80238F54: lhu         $t2, 0x7C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X7C);
    // 0x80238F58: lhu         $t3, 0x7A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X7A);
    // 0x80238F5C: nop

    // 0x80238F60: beq         $t2, $t3, L_80238F94
    if (ctx->r10 == ctx->r11) {
        // 0x80238F64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80238F94;
    }
L_80238F64:
    // 0x80238F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238F68: jal         0x80244F84
    // 0x80238F6C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    static_3_80244F84(rdram, ctx);
        goto after_5;
    // 0x80238F6C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    after_5:
    // 0x80238F70: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80238F74: beq         $v0, $zero, L_80238F84
    if (ctx->r2 == 0) {
        // 0x80238F78: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80238F84;
    }
    // 0x80238F78: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80238F7C: b           L_802390B4
    // 0x80238F80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802390B4;
    // 0x80238F80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80238F84:
    // 0x80238F84: beq         $v0, $zero, L_80238F98
    if (ctx->r2 == 0) {
        // 0x80238F88: lhu         $t4, 0x74($sp)
        ctx->r12 = MEM_HU(ctx->r29, 0X74);
            goto L_80238F98;
    }
    // 0x80238F88: lhu         $t4, 0x74($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X74);
    // 0x80238F8C: b           L_802390B4
    // 0x80238F90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802390B4;
    // 0x80238F90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80238F94:
    // 0x80238F94: lhu         $t4, 0x74($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X74);
L_80238F98:
    // 0x80238F98: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x80238F9C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80238FA0: bne         $t5, $zero, L_80238FDC
    if (ctx->r13 != 0) {
        // 0x80238FA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80238FDC;
    }
    // 0x80238FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238FA8: jal         0x80244C38
    // 0x80238FAC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    static_3_80244C38(rdram, ctx);
        goto after_6;
    // 0x80238FAC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x80238FB0: beq         $v0, $zero, L_80238FC4
    if (ctx->r2 == 0) {
        // 0x80238FB4: lhu         $t6, 0x50($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X50);
            goto L_80238FC4;
    }
    // 0x80238FB4: lhu         $t6, 0x50($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X50);
    // 0x80238FB8: b           L_802390B8
    // 0x80238FBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802390B8;
    // 0x80238FBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80238FC0: lhu         $t6, 0x50($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X50);
L_80238FC4:
    // 0x80238FC4: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x80238FC8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80238FCC: bne         $t7, $zero, L_80238FE0
    if (ctx->r15 != 0) {
        // 0x80238FD0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80238FE0;
    }
    // 0x80238FD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80238FD4: b           L_802390B4
    // 0x80238FD8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_802390B4;
    // 0x80238FD8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80238FDC:
    // 0x80238FDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80238FE0:
    // 0x80238FE0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80238FE4: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80238FE8: addiu       $a1, $t1, 0x1
    ctx->r5 = ADD32(ctx->r9, 0X1);
    // 0x80238FEC: addiu       $a2, $t1, 0x2
    ctx->r6 = ADD32(ctx->r9, 0X2);
    // 0x80238FF0: addiu       $a3, $t1, 0x3
    ctx->r7 = ADD32(ctx->r9, 0X3);
    // 0x80238FF4: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
L_80238FF8:
    // 0x80238FF8: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x80238FFC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80239000: sb          $t8, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r24;
    // 0x80239004: lbu         $t9, 0x0($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X0);
    // 0x80239008: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023900C: sb          $t9, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r25;
    // 0x80239010: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    // 0x80239014: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80239018: sb          $t2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r10;
    // 0x8023901C: lbu         $t3, 0x0($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X0);
    // 0x80239020: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80239024: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80239028: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x8023902C: bne         $a0, $t0, L_80238FF8
    if (ctx->r4 != ctx->r8) {
        // 0x80239030: sb          $t3, 0xB($v0)
        MEM_B(0XB, ctx->r2) = ctx->r11;
            goto L_80238FF8;
    }
    // 0x80239030: sb          $t3, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r11;
    // 0x80239034: lbu         $t4, 0x1B($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X1B);
    // 0x80239038: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x8023903C: sw          $t4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r12;
    // 0x80239040: lbu         $t5, 0x1A($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X1A);
    // 0x80239044: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80239048: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
    // 0x8023904C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80239050: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80239054: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x80239058: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x8023905C: addu        $t2, $t0, $v1
    ctx->r10 = ADD32(ctx->r8, ctx->r3);
    // 0x80239060: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80239064: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80239068: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x8023906C: sw          $t8, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r24;
    // 0x80239070: sw          $t9, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r25;
    // 0x80239074: sw          $t0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r8;
    // 0x80239078: sw          $t2, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r10;
    // 0x8023907C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80239080: addiu       $a3, $s0, 0x2C
    ctx->r7 = ADD32(ctx->r16, 0X2C);
    // 0x80239084: jal         0x80245710
    // 0x80239088: sb          $t5, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r13;
    static_3_80245710(rdram, ctx);
        goto after_7;
    // 0x80239088: sb          $t5, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r13;
    after_7:
    // 0x8023908C: beq         $v0, $zero, L_8023909C
    if (ctx->r2 == 0) {
        // 0x80239090: nop
    
            goto L_8023909C;
    }
    // 0x80239090: nop

    // 0x80239094: b           L_802390B8
    // 0x80239098: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802390B8;
    // 0x80239098: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8023909C:
    // 0x8023909C: jal         0x80245B40
    // 0x802390A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80245B40(rdram, ctx);
        goto after_8;
    // 0x802390A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802390A4: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x802390A8: nop

    // 0x802390AC: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x802390B0: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_802390B4:
    // 0x802390B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802390B8:
    // 0x802390B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802390BC: jr          $ra
    // 0x802390C0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x802390C0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void D_8023DFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DFE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023DFE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023DFE8: jal         0x80247820
    // 0x8023DFEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80247820(rdram, ctx);
        goto after_0;
    // 0x8023DFEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8023DFF0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023DFF4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DFF8: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x8023DFFC: beq         $t7, $zero, L_8023E010
    if (ctx->r15 == 0) {
        // 0x8023E000: nop
    
            goto L_8023E010;
    }
    // 0x8023E000: nop

    // 0x8023E004: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8023E008: b           L_8023E014
    // 0x8023E00C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
        goto L_8023E014;
    // 0x8023E00C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_8023E010:
    // 0x8023E010: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8023E014:
    // 0x8023E014: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E018: andi        $t0, $t9, 0x80
    ctx->r8 = ctx->r25 & 0X80;
    // 0x8023E01C: beq         $t0, $zero, L_8023E04C
    if (ctx->r8 == 0) {
        // 0x8023E020: nop
    
            goto L_8023E04C;
    }
    // 0x8023E020: nop

    // 0x8023E024: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8023E028: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8023E02C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8023E030: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8023E034: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x8023E038: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x8023E03C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8023E040: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x8023E044: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8023E048: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
L_8023E04C:
    // 0x8023E04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E050: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8023E054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023E058: jr          $ra
    // 0x8023E05C: nop

    return;
    // 0x8023E05C: nop

;}
RECOMP_FUNC void D_8023A2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023A2D4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8023A2D8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023A2DC: lbu         $s4, 0x93($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X93);
    // 0x8023A2E0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8023A2E4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8023A2E8: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x8023A2EC: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x8023A2F0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8023A2F4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023A2F8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023A2FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023A300: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023A304: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023A308: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A30C: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x8023A310: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x8023A314: blez        $s4, L_8023A324
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8023A318: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8023A324;
    }
    // 0x8023A318: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8023A31C: b           L_8023A334
    // 0x8023A320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023A334;
    // 0x8023A320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023A324:
    // 0x8023A324: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8023A328: nop

    // 0x8023A32C: lw          $v0, 0x60($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X60);
    // 0x8023A330: nop

L_8023A334:
    // 0x8023A334: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8023A338: beq         $at, $zero, L_8023A36C
    if (ctx->r1 == 0) {
        // 0x8023A33C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8023A36C;
    }
    // 0x8023A33C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8023A340: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8023A344: addu        $s0, $fp, $t7
    ctx->r16 = ADD32(ctx->r30, ctx->r15);
    // 0x8023A348: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x8023A34C: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_8023A350:
    // 0x8023A350: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x8023A354: nop

    // 0x8023A358: beq         $s3, $t8, L_8023A36C
    if (ctx->r19 == ctx->r24) {
        // 0x8023A35C: nop
    
            goto L_8023A36C;
    }
    // 0x8023A35C: nop

    // 0x8023A360: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023A364: bne         $s1, $s6, L_8023A350
    if (ctx->r17 != ctx->r22) {
        // 0x8023A368: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8023A350;
    }
    // 0x8023A368: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8023A36C:
    // 0x8023A36C: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x8023A370: bne         $s1, $s6, L_8023A38C
    if (ctx->r17 != ctx->r22) {
        // 0x8023A374: addiu       $s3, $zero, 0x3
        ctx->r19 = ADD32(0, 0X3);
            goto L_8023A38C;
    }
    // 0x8023A374: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x8023A378: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8023A37C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8023A380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023A384: b           L_8023A4A4
    // 0x8023A388: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
        goto L_8023A4A4;
    // 0x8023A388: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
L_8023A38C:
    // 0x8023A38C: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x8023A390: addiu       $v1, $sp, 0x74
    ctx->r3 = ADD32(ctx->r29, 0X74);
L_8023A394:
    // 0x8023A394: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023A398: sb          $zero, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = 0;
    // 0x8023A39C: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x8023A3A0: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x8023A3A4: bne         $v0, $v1, L_8023A394
    if (ctx->r2 != ctx->r3) {
        // 0x8023A3A8: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_8023A394;
    }
    // 0x8023A3A8: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x8023A3AC: lw          $s2, 0x94($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X94);
    // 0x8023A3B0: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    // 0x8023A3B4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8023A3B8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8023A3BC: slti        $at, $s7, 0x2
    ctx->r1 = SIGNED(ctx->r23) < 0X2 ? 1 : 0;
    // 0x8023A3C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023A3C4: bne         $at, $zero, L_8023A448
    if (ctx->r1 != 0) {
        // 0x8023A3C8: sw          $t2, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r10;
            goto L_8023A448;
    }
    // 0x8023A3C8: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
    // 0x8023A3CC: slti        $at, $s1, 0x80
    ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x8023A3D0: beq         $at, $zero, L_8023A448
    if (ctx->r1 == 0) {
        // 0x8023A3D4: sll         $t3, $s1, 1
        ctx->r11 = S32(ctx->r17 << 1);
            goto L_8023A448;
    }
    // 0x8023A3D4: sll         $t3, $s1, 1
    ctx->r11 = S32(ctx->r17 << 1);
    // 0x8023A3D8: addu        $s0, $fp, $t3
    ctx->r16 = ADD32(ctx->r30, ctx->r11);
    // 0x8023A3DC: addiu       $s5, $sp, 0x54
    ctx->r21 = ADD32(ctx->r29, 0X54);
L_8023A3E0:
    // 0x8023A3E0: lhu         $t4, 0x0($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X0);
    // 0x8023A3E4: sll         $t5, $a1, 1
    ctx->r13 = S32(ctx->r5 << 1);
    // 0x8023A3E8: bne         $s3, $t4, L_8023A428
    if (ctx->r19 != ctx->r12) {
        // 0x8023A3EC: addu        $v0, $fp, $t5
        ctx->r2 = ADD32(ctx->r30, ctx->r13);
            goto L_8023A428;
    }
    // 0x8023A3EC: addu        $v0, $fp, $t5
    ctx->r2 = ADD32(ctx->r30, ctx->r13);
    // 0x8023A3F0: sb          $s4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r20;
    // 0x8023A3F4: sb          $s1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r17;
    // 0x8023A3F8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8023A3FC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8023A400: jal         0x8023A524
    // 0x8023A404: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    static_3_8023A524(rdram, ctx);
        goto after_0;
    // 0x8023A404: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    after_0:
    // 0x8023A408: beq         $v0, $zero, L_8023A418
    if (ctx->r2 == 0) {
        // 0x8023A40C: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_8023A418;
    }
    // 0x8023A40C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8023A410: b           L_8023A4A8
    // 0x8023A414: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8023A4A8;
    // 0x8023A414: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8023A418:
    // 0x8023A418: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8023A41C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8023A420: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8023A424: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
L_8023A428:
    // 0x8023A428: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8023A42C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023A430: slt         $at, $t8, $s7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8023A434: beq         $at, $zero, L_8023A448
    if (ctx->r1 == 0) {
        // 0x8023A438: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8023A448;
    }
    // 0x8023A438: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8023A43C: slti        $at, $s1, 0x80
    ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x8023A440: bne         $at, $zero, L_8023A3E0
    if (ctx->r1 != 0) {
        // 0x8023A444: nop
    
            goto L_8023A3E0;
    }
    // 0x8023A444: nop

L_8023A448:
    // 0x8023A448: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x8023A44C: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8023A450: addiu       $s5, $sp, 0x54
    ctx->r21 = ADD32(ctx->r29, 0X54);
    // 0x8023A454: bne         $s1, $s6, L_8023A478
    if (ctx->r17 != ctx->r22) {
        // 0x8023A458: sw          $t9, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r25;
            goto L_8023A478;
    }
    // 0x8023A458: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8023A45C: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8023A460: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x8023A464: slt         $at, $t2, $s7
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8023A468: beq         $at, $zero, L_8023A478
    if (ctx->r1 == 0) {
        // 0x8023A46C: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_8023A478;
    }
    // 0x8023A46C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8023A470: b           L_8023A4A4
    // 0x8023A474: sw          $a1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r5;
        goto L_8023A4A4;
    // 0x8023A474: sw          $a1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r5;
L_8023A478:
    // 0x8023A478: sll         $t5, $a1, 1
    ctx->r13 = S32(ctx->r5 << 1);
    // 0x8023A47C: addu        $t6, $fp, $t5
    ctx->r14 = ADD32(ctx->r30, ctx->r13);
    // 0x8023A480: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8023A484: sh          $t4, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r12;
    // 0x8023A488: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8023A48C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8023A490: jal         0x8023A524
    // 0x8023A494: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    static_3_8023A524(rdram, ctx);
        goto after_1;
    // 0x8023A494: andi        $a3, $s4, 0xFF
    ctx->r7 = ctx->r20 & 0XFF;
    after_1:
    // 0x8023A498: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x8023A49C: nop

    // 0x8023A4A0: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
L_8023A4A4:
    // 0x8023A4A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8023A4A8:
    // 0x8023A4A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023A4AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A4B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023A4B4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023A4B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023A4BC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8023A4C0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023A4C4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8023A4C8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8023A4CC: jr          $ra
    // 0x8023A4D0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8023A4D0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_802EFBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EFC64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EFC68: bne         $a0, $zero, L_802EFC80
    if (ctx->r4 != 0) {
        // 0x802EFC6C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802EFC80;
    }
    // 0x802EFC6C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802EFC70: jal         0x802C67EC
    // 0x802EFC74: addiu       $a0, $zero, 0x310
    ctx->r4 = ADD32(0, 0X310);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EFC74: addiu       $a0, $zero, 0x310
    ctx->r4 = ADD32(0, 0X310);
    after_0:
    // 0x802EFC78: beq         $v0, $zero, L_802EFC9C
    if (ctx->r2 == 0) {
        // 0x802EFC7C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802EFC9C;
    }
    // 0x802EFC7C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802EFC80:
    // 0x802EFC80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802EFC84: jal         0x8031CC98
    // 0x802EFC88: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8031CC98(rdram, ctx);
        goto after_1;
    // 0x802EFC88: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802EFC8C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802EFC90: jal         0x8031CF20
    // 0x802EFC94: addiu       $a0, $a1, 0xF0
    ctx->r4 = ADD32(ctx->r5, 0XF0);
    static_3_8031CF20(rdram, ctx);
        goto after_2;
    // 0x802EFC94: addiu       $a0, $a1, 0xF0
    ctx->r4 = ADD32(ctx->r5, 0XF0);
    after_2:
    // 0x802EFC98: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802EFC9C:
    // 0x802EFC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EFCA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EFCA4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802EFCA8: jr          $ra
    // 0x802EFCAC: nop

    return;
    // 0x802EFCAC: nop

;}
RECOMP_FUNC void D_802BAB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BAB80: jr          $ra
    // 0x802BAB84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802BAB84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_8024ABCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024ABCC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8024ABD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024ABD4: jal         0x80245AD0
    // 0x8024ABD8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8024ABD8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x8024ABDC: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8024ABE0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8024ABE4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024ABE8: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x8024ABEC: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8024ABF0: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8024ABF4: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8024ABF8: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x8024ABFC: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8024AC00: jal         0x802465B0
    // 0x8024AC04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802465B0(rdram, ctx);
        goto after_1;
    // 0x8024AC04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8024AC08: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8024AC0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024AC10: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x8024AC14: jal         0x802374B0
    // 0x8024AC18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_2;
    // 0x8024AC18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8024AC1C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8024AC20: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8024AC24: jal         0x802465B0
    // 0x8024AC28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_3;
    // 0x8024AC28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8024AC2C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8024AC30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8024AC34: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8024AC38: jal         0x802374B0
    // 0x8024AC3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_4;
    // 0x8024AC3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8024AC40: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8024AC44: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8024AC48: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    // 0x8024AC4C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8024AC50: beq         $a0, $zero, L_8024AC70
    if (ctx->r4 == 0) {
        // 0x8024AC54: addiu       $t4, $sp, 0x1C
        ctx->r12 = ADD32(ctx->r29, 0X1C);
            goto L_8024AC70;
    }
    // 0x8024AC54: addiu       $t4, $sp, 0x1C
    ctx->r12 = ADD32(ctx->r29, 0X1C);
    // 0x8024AC58: blez        $a0, L_8024AC70
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8024AC5C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8024AC70;
    }
    // 0x8024AC5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8024AC60:
    // 0x8024AC60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024AC64: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8024AC68: bne         $at, $zero, L_8024AC60
    if (ctx->r1 != 0) {
        // 0x8024AC6C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8024AC60;
    }
    // 0x8024AC6C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8024AC70:
    // 0x8024AC70: or          $t7, $v1, $zero
    ctx->r15 = ctx->r3 | 0;
    // 0x8024AC74: addiu       $t6, $v1, 0x24
    ctx->r14 = ADD32(ctx->r3, 0X24);
L_8024AC78:
    // 0x8024AC78: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x8024AC7C: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8024AC80: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8024AC84: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8024AC88: lwl         $at, -0x8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, -0X8);
    // 0x8024AC8C: lwr         $at, -0x5($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, -0X5);
    // 0x8024AC90: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x8024AC94: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x8024AC98: lwl         $at, -0x4($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, -0X4);
    // 0x8024AC9C: lwr         $at, -0x1($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, -0X1);
    // 0x8024ACA0: bne         $t7, $t6, L_8024AC78
    if (ctx->r15 != ctx->r14) {
        // 0x8024ACA4: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_8024AC78;
    }
    // 0x8024ACA4: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x8024ACA8: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x8024ACAC: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8024ACB0: nop

    // 0x8024ACB4: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8024ACB8: lbu         $v0, 0x1E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1E);
    // 0x8024ACBC: lbu         $t0, 0x42($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X42);
    // 0x8024ACC0: andi        $t8, $v0, 0xC0
    ctx->r24 = ctx->r2 & 0XC0;
    // 0x8024ACC4: sra         $a0, $t8, 4
    ctx->r4 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8024ACC8: bne         $a0, $zero, L_8024ACDC
    if (ctx->r4 != 0) {
        // 0x8024ACCC: addiu       $at, $zero, 0xEB
        ctx->r1 = ADD32(0, 0XEB);
            goto L_8024ACDC;
    }
    // 0x8024ACCC: addiu       $at, $zero, 0xEB
    ctx->r1 = ADD32(0, 0XEB);
    // 0x8024ACD0: beq         $t0, $at, L_8024ACDC
    if (ctx->r8 == ctx->r1) {
        // 0x8024ACD4: nop
    
            goto L_8024ACDC;
    }
    // 0x8024ACD4: nop

    // 0x8024ACD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8024ACDC:
    // 0x8024ACDC: jal         0x80245B14
    // 0x8024ACE0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    static_3_80245B14(rdram, ctx);
        goto after_5;
    // 0x8024ACE0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_5:
    // 0x8024ACE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024ACE8: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x8024ACEC: jr          $ra
    // 0x8024ACF0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024ACF0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_802D127C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D12FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1304: jal         0x8028D994
    // 0x802D1308: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D994(rdram, ctx);
        goto after_0;
    // 0x802D1308: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802D130C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1314: jr          $ra
    // 0x802D1318: nop

    return;
    // 0x802D1318: nop

;}
RECOMP_FUNC void D_80241750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241750: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80241754: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x80241758: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024175C: beq         $a3, $zero, L_80241788
    if (ctx->r7 == 0) {
        // 0x80241760: nop
    
            goto L_80241788;
    }
    // 0x80241760: nop

L_80241764:
    // 0x80241764: bne         $a3, $a1, L_80241778
    if (ctx->r7 != ctx->r5) {
        // 0x80241768: nop
    
            goto L_80241778;
    }
    // 0x80241768: nop

    // 0x8024176C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80241770: b           L_80241788
    // 0x80241774: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
        goto L_80241788;
    // 0x80241774: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
L_80241778:
    // 0x80241778: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8024177C: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x80241780: bne         $a3, $zero, L_80241764
    if (ctx->r7 != 0) {
        // 0x80241784: nop
    
            goto L_80241764;
    }
    // 0x80241784: nop

L_80241788:
    // 0x80241788: jr          $ra
    // 0x8024178C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8024178C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_802E3AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3B64: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E3B68: jr          $ra
    // 0x802E3B6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802E3B6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_80223EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223EB8: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80223EC0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223EC4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80223EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223ECC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80223ED0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80223ED4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223ED8: jal         0x80231848
    // 0x80223EDC: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    static_3_80231848(rdram, ctx);
        goto after_0;
    // 0x80223EDC: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80223EE0: bgez        $v0, L_80223EF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80223EE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80223EF0;
    }
    // 0x80223EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223EE8: b           L_80223EF4
    // 0x80223EEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223EF4;
    // 0x80223EEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223EF0:
    // 0x80223EF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223EF4:
    // 0x80223EF4: jr          $ra
    // 0x80223EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80223EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023CE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CE80: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8023CE84: addu        $t1, $t0, $t3
    ctx->r9 = ADD32(ctx->r8, ctx->r11);
    // 0x8023CE88: addiu       $t1, $t1, -0x10
    ctx->r9 = ADD32(ctx->r9, -0X10);
L_8023CE8C:
    // 0x8023CE8C: cache       0x01, 0x0($t0)

    // 0x8023CE90: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8023CE94: bne         $at, $zero, L_8023CE8C
    if (ctx->r1 != 0) {
        // 0x8023CE98: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_8023CE8C;
    }
    // 0x8023CE98: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x8023CE9C: jr          $ra
    // 0x8023CEA0: nop

    return;
    // 0x8023CEA0: nop

    // 0x8023CEA4: nop

    // 0x8023CEA8: nop

    // 0x8023CEAC: nop

    // 0x8023CEB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023CEB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023CEB8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023CEBC: jal         0x80241760
    // 0x8023CEC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8023CEC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023CEC4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023CEC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023CECC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8023CED0: beq         $t7, $zero, L_8023CEEC
    if (ctx->r15 == 0) {
        // 0x8023CED4: nop
    
            goto L_8023CEEC;
    }
    // 0x8023CED4: nop

    // 0x8023CED8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023CEDC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8023CEE0: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x8023CEE4: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x8023CEE8: sw          $t0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r8;
L_8023CEEC:
    // 0x8023CEEC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023CEF0: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x8023CEF4: beq         $t2, $zero, L_8023CF14
    if (ctx->r10 == 0) {
        // 0x8023CEF8: nop
    
            goto L_8023CF14;
    }
    // 0x8023CEF8: nop

    // 0x8023CEFC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8023CF00: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x8023CF04: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x8023CF08: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x8023CF0C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8023CF10: sw          $t5, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r13;
L_8023CF14:
    // 0x8023CF14: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023CF18: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8023CF1C: beq         $t7, $zero, L_8023CF38
    if (ctx->r15 == 0) {
        // 0x8023CF20: nop
    
            goto L_8023CF38;
    }
    // 0x8023CF20: nop

    // 0x8023CF24: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8023CF28: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8023CF2C: lw          $t0, 0xC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC);
    // 0x8023CF30: ori         $t8, $t0, 0x4
    ctx->r24 = ctx->r8 | 0X4;
    // 0x8023CF34: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
L_8023CF38:
    // 0x8023CF38: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023CF3C: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
;}
RECOMP_FUNC void D_8020008C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020008C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80200090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200094: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80200098: jal         0x8022970C
    // 0x8020009C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x8020009C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x802000A0: lhu         $t6, 0x62($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X62);
    // 0x802000A4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802000A8: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802000AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802000B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802000B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x802000B8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x802000BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802000C0: jal         0x80228DE0
    // 0x802000C4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802000C4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x802000C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802000CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802000D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802000D4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802000D8: sw          $t9, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r25;
    // 0x802000DC: swc1        $f0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f0.u32l;
    // 0x802000E0: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802000E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802000E8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802000EC: jr          $ra
    // 0x802000F0: nop

    return;
    // 0x802000F0: nop

;}
RECOMP_FUNC void D_8023CCCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CCCC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023CCD0: sw          $a0, 0x39E8($at)
    MEM_W(0X39E8, ctx->r1) = ctx->r4;
    // 0x8023CCD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023CCD8: sw          $a2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r6;
    // 0x8023CCDC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023CCE0: sw          $a1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r5;
    // 0x8023CCE4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023CCE8: jr          $ra
    // 0x8023CCEC: sw          $a3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r7;
    return;
    // 0x8023CCEC: sw          $a3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r7;
;}
RECOMP_FUNC void D_8021DE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021DE10: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8021DE14: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021DE18: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021DE1C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8021DE20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021DE24: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8021DE28: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8021DE2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021DE30: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8021DE34: bne         $a1, $at, L_8021DE44
    if (ctx->r5 != ctx->r1) {
        // 0x8021DE38: addu        $v0, $t6, $t7
        ctx->r2 = ADD32(ctx->r14, ctx->r15);
            goto L_8021DE44;
    }
    // 0x8021DE38: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8021DE3C: b           L_8021DED8
    // 0x8021DE40: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
        goto L_8021DED8;
    // 0x8021DE40: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_8021DE44:
    // 0x8021DE44: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021DE48: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8021DE4C: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x8021DE50: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8021DE54: lw          $t9, 0x34($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X34);
    // 0x8021DE58: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x8021DE5C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8021DE60: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x8021DE64: bnel        $a1, $zero, L_8021DE88
    if (ctx->r5 != 0) {
        // 0x8021DE68: sb          $t2, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r10;
            goto L_8021DE88;
    }
    goto skip_0;
    // 0x8021DE68: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    skip_0:
    // 0x8021DE6C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021DE70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021DE74: jal         0x80231A24
    // 0x8021DE78: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021DE78: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8021DE7C: b           L_8021DEDC
    // 0x8021DE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021DEDC;
    // 0x8021DE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021DE84: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_8021DE88:
    // 0x8021DE88: lbu         $t3, 0x9($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X9);
    // 0x8021DE8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021DE90: bnel        $t3, $at, L_8021DEAC
    if (ctx->r11 != ctx->r1) {
        // 0x8021DE94: sb          $zero, 0x2($v0)
        MEM_B(0X2, ctx->r2) = 0;
            goto L_8021DEAC;
    }
    goto skip_1;
    // 0x8021DE94: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    skip_1:
    // 0x8021DE98: lbu         $t4, 0x0($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X0);
    // 0x8021DE9C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8021DEA0: b           L_8021DEAC
    // 0x8021DEA4: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
        goto L_8021DEAC;
    // 0x8021DEA4: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x8021DEA8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
L_8021DEAC:
    // 0x8021DEAC: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8021DEB0: beq         $t6, $zero, L_8021DED0
    if (ctx->r14 == 0) {
        // 0x8021DEB4: nop
    
            goto L_8021DED0;
    }
    // 0x8021DEB4: nop

    // 0x8021DEB8: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x8021DEBC: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8021DEC0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8021DEC4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8021DEC8: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8021DECC: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
L_8021DED0:
    // 0x8021DED0: jal         0x8022B460
    // 0x8021DED4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8022B460(rdram, ctx);
        goto after_1;
    // 0x8021DED4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
L_8021DED8:
    // 0x8021DED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021DEDC:
    // 0x8021DEDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021DEE0: jr          $ra
    // 0x8021DEE4: nop

    return;
    // 0x8021DEE4: nop

;}
RECOMP_FUNC void D_802CD018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CD098: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802CD09C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802CD0A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802CD0A4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802CD0A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802CD0AC: addiu       $s0, $a0, 0x414
    ctx->r16 = ADD32(ctx->r4, 0X414);
    // 0x802CD0B0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802CD0B4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802CD0B8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802CD0BC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802CD0C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD0C4: jal         0x802B3F64
    // 0x802CD0C8: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_0;
    // 0x802CD0C8: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_0:
    // 0x802CD0CC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x802CD0D0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802CD0D4: lui         $a2, 0x455C
    ctx->r6 = S32(0X455C << 16);
    // 0x802CD0D8: lui         $a3, 0xC50D
    ctx->r7 = S32(0XC50D << 16);
    // 0x802CD0DC: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802CD0E0: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802CD0E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD0E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CD0EC: jal         0x802B447C
    // 0x802CD0F0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_1;
    // 0x802CD0F0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x802CD0F4: lui         $a2, 0x4553
    ctx->r6 = S32(0X4553 << 16);
    // 0x802CD0F8: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802CD0FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD100: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CD104: lui         $a3, 0xC439
    ctx->r7 = S32(0XC439 << 16);
    // 0x802CD108: jal         0x802B447C
    // 0x802CD10C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_2;
    // 0x802CD10C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_2:
    // 0x802CD110: lui         $a2, 0x452F
    ctx->r6 = S32(0X452F << 16);
    // 0x802CD114: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802CD118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD11C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CD120: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x802CD124: jal         0x802B447C
    // 0x802CD128: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_3;
    // 0x802CD128: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x802CD12C: lui         $a3, 0x44CB
    ctx->r7 = S32(0X44CB << 16);
    // 0x802CD130: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CD134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD138: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CD13C: lui         $a2, 0x44DC
    ctx->r6 = S32(0X44DC << 16);
    // 0x802CD140: jal         0x802B447C
    // 0x802CD144: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_4;
    // 0x802CD144: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x802CD148: lui         $a2, 0x4413
    ctx->r6 = S32(0X4413 << 16);
    // 0x802CD14C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD154: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CD158: lui         $a3, 0x4511
    ctx->r7 = S32(0X4511 << 16);
    // 0x802CD15C: jal         0x802B447C
    // 0x802CD160: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_5;
    // 0x802CD160: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x802CD164: lui         $a2, 0xC454
    ctx->r6 = S32(0XC454 << 16);
    // 0x802CD168: lui         $a3, 0x4507
    ctx->r7 = S32(0X4507 << 16);
    // 0x802CD16C: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802CD170: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD178: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CD17C: jal         0x802B447C
    // 0x802CD180: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_6;
    // 0x802CD180: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x802CD184: lui         $a2, 0xC4E9
    ctx->r6 = S32(0XC4E9 << 16);
    // 0x802CD188: lui         $a3, 0x449E
    ctx->r7 = S32(0X449E << 16);
    // 0x802CD18C: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CD190: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CD194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD198: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802CD19C: jal         0x802B447C
    // 0x802CD1A0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_7;
    // 0x802CD1A0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_7:
    // 0x802CD1A4: lui         $a2, 0xC527
    ctx->r6 = S32(0XC527 << 16);
    // 0x802CD1A8: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD1AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD1B0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802CD1B4: lui         $a3, 0xC366
    ctx->r7 = S32(0XC366 << 16);
    // 0x802CD1B8: jal         0x802B447C
    // 0x802CD1BC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_8;
    // 0x802CD1BC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_8:
    // 0x802CD1C0: lui         $a2, 0xC51E
    ctx->r6 = S32(0XC51E << 16);
    // 0x802CD1C4: ori         $a2, $a2, 0x2000
    ctx->r6 = ctx->r6 | 0X2000;
    // 0x802CD1C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD1CC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802CD1D0: lui         $a3, 0xC4CD
    ctx->r7 = S32(0XC4CD << 16);
    // 0x802CD1D4: jal         0x802B447C
    // 0x802CD1D8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_9;
    // 0x802CD1D8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_9:
    // 0x802CD1DC: lui         $a2, 0xC4CB
    ctx->r6 = S32(0XC4CB << 16);
    // 0x802CD1E0: lui         $a3, 0xC52B
    ctx->r7 = S32(0XC52B << 16);
    // 0x802CD1E4: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802CD1E8: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CD1EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD1F0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CD1F4: jal         0x802B447C
    // 0x802CD1F8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_10;
    // 0x802CD1F8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_10:
    // 0x802CD1FC: lui         $a3, 0xC54B
    ctx->r7 = S32(0XC54B << 16);
    // 0x802CD200: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CD204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD208: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802CD20C: lui         $a2, 0xC38C
    ctx->r6 = S32(0XC38C << 16);
    // 0x802CD210: jal         0x802B447C
    // 0x802CD214: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_11;
    // 0x802CD214: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_11:
    // 0x802CD218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD21C: jal         0x80318C9C
    // 0x802CD220: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_12;
    // 0x802CD220: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x802CD224: addiu       $s0, $s4, 0xAB4
    ctx->r16 = ADD32(ctx->r20, 0XAB4);
    // 0x802CD228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD22C: jal         0x802B3F64
    // 0x802CD230: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_13;
    // 0x802CD230: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_13:
    // 0x802CD234: lui         $a2, 0xC570
    ctx->r6 = S32(0XC570 << 16);
    // 0x802CD238: lui         $a3, 0x456C
    ctx->r7 = S32(0X456C << 16);
    // 0x802CD23C: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802CD240: ori         $a2, $a2, 0xA000
    ctx->r6 = ctx->r6 | 0XA000;
    // 0x802CD244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CD24C: jal         0x802B447C
    // 0x802CD250: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_14;
    // 0x802CD250: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_14:
    // 0x802CD254: lui         $a3, 0x451E
    ctx->r7 = S32(0X451E << 16);
    // 0x802CD258: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802CD25C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CD264: lui         $a2, 0xC54D
    ctx->r6 = S32(0XC54D << 16);
    // 0x802CD268: jal         0x802B447C
    // 0x802CD26C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_15;
    // 0x802CD26C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_15:
    // 0x802CD270: lui         $a3, 0x44C4
    ctx->r7 = S32(0X44C4 << 16);
    // 0x802CD274: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CD278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD27C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CD280: lui         $a2, 0xC502
    ctx->r6 = S32(0XC502 << 16);
    // 0x802CD284: jal         0x802B447C
    // 0x802CD288: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_16;
    // 0x802CD288: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_16:
    // 0x802CD28C: lui         $a2, 0xC436
    ctx->r6 = S32(0XC436 << 16);
    // 0x802CD290: lui         $a3, 0x4497
    ctx->r7 = S32(0X4497 << 16);
    // 0x802CD294: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CD298: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD2A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CD2A4: jal         0x802B447C
    // 0x802CD2A8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_17;
    // 0x802CD2A8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_17:
    // 0x802CD2AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD2B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CD2B4: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x802CD2B8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x802CD2BC: jal         0x802B447C
    // 0x802CD2C0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_18;
    // 0x802CD2C0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_18:
    // 0x802CD2C4: lui         $a2, 0x44AF
    ctx->r6 = S32(0X44AF << 16);
    // 0x802CD2C8: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CD2CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD2D0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CD2D4: lui         $a3, 0xC457
    ctx->r7 = S32(0XC457 << 16);
    // 0x802CD2D8: jal         0x802B447C
    // 0x802CD2DC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_19;
    // 0x802CD2DC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_19:
    // 0x802CD2E0: lui         $a2, 0x44A3
    ctx->r6 = S32(0X44A3 << 16);
    // 0x802CD2E4: lui         $a3, 0xC517
    ctx->r7 = S32(0XC517 << 16);
    // 0x802CD2E8: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802CD2EC: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CD2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD2F4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802CD2F8: jal         0x802B447C
    // 0x802CD2FC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_20;
    // 0x802CD2FC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_20:
    // 0x802CD300: lui         $a3, 0xC55C
    ctx->r7 = S32(0XC55C << 16);
    // 0x802CD304: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802CD308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD30C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802CD310: lui         $a2, 0x43CD
    ctx->r6 = S32(0X43CD << 16);
    // 0x802CD314: jal         0x802B447C
    // 0x802CD318: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_21;
    // 0x802CD318: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_21:
    // 0x802CD31C: lui         $a3, 0xC56B
    ctx->r7 = S32(0XC56B << 16);
    // 0x802CD320: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802CD324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD328: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802CD32C: lui         $a2, 0xC47A
    ctx->r6 = S32(0XC47A << 16);
    // 0x802CD330: jal         0x802B447C
    // 0x802CD334: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_22;
    // 0x802CD334: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_22:
    // 0x802CD338: lui         $a2, 0xC518
    ctx->r6 = S32(0XC518 << 16);
    // 0x802CD33C: lui         $a3, 0xC55E
    ctx->r7 = S32(0XC55E << 16);
    // 0x802CD340: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CD344: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD34C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CD350: jal         0x802B447C
    // 0x802CD354: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_23;
    // 0x802CD354: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_23:
    // 0x802CD358: lui         $a2, 0xC55A
    ctx->r6 = S32(0XC55A << 16);
    // 0x802CD35C: lui         $a3, 0xC522
    ctx->r7 = S32(0XC522 << 16);
    // 0x802CD360: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CD364: ori         $a2, $a2, 0x2000
    ctx->r6 = ctx->r6 | 0X2000;
    // 0x802CD368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD36C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802CD370: jal         0x802B447C
    // 0x802CD374: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_24;
    // 0x802CD374: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_24:
    // 0x802CD378: lui         $a1, 0x439F
    ctx->r5 = S32(0X439F << 16);
    // 0x802CD37C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x802CD380: jal         0x80318C9C
    // 0x802CD384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318C9C(rdram, ctx);
        goto after_25;
    // 0x802CD384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x802CD388: addiu       $s0, $s4, 0x1154
    ctx->r16 = ADD32(ctx->r20, 0X1154);
    // 0x802CD38C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD390: jal         0x802B3F64
    // 0x802CD394: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_26;
    // 0x802CD394: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_26:
    // 0x802CD398: lui         $a2, 0xC56E
    ctx->r6 = S32(0XC56E << 16);
    // 0x802CD39C: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CD3A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD3A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CD3A8: lui         $a3, 0x43D7
    ctx->r7 = S32(0X43D7 << 16);
    // 0x802CD3AC: jal         0x802B447C
    // 0x802CD3B0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_27;
    // 0x802CD3B0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_27:
    // 0x802CD3B4: lui         $a2, 0xC53F
    ctx->r6 = S32(0XC53F << 16);
    // 0x802CD3B8: lui         $a3, 0xC440
    ctx->r7 = S32(0XC440 << 16);
    // 0x802CD3BC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802CD3C0: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x802CD3C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD3C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CD3CC: jal         0x802B447C
    // 0x802CD3D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_28;
    // 0x802CD3D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_28:
    // 0x802CD3D4: lui         $a2, 0xC4DE
    ctx->r6 = S32(0XC4DE << 16);
    // 0x802CD3D8: lui         $a3, 0xC4D0
    ctx->r7 = S32(0XC4D0 << 16);
    // 0x802CD3DC: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CD3E0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD3E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CD3EC: jal         0x802B447C
    // 0x802CD3F0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_29;
    // 0x802CD3F0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_29:
    // 0x802CD3F4: lui         $a3, 0xC508
    ctx->r7 = S32(0XC508 << 16);
    // 0x802CD3F8: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802CD3FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD400: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CD404: lui         $a2, 0xC3D7
    ctx->r6 = S32(0XC3D7 << 16);
    // 0x802CD408: jal         0x802B447C
    // 0x802CD40C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_30;
    // 0x802CD40C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_30:
    // 0x802CD410: lui         $a2, 0x446D
    ctx->r6 = S32(0X446D << 16);
    // 0x802CD414: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD41C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802CD420: lui         $a3, 0xC4CD
    ctx->r7 = S32(0XC4CD << 16);
    // 0x802CD424: jal         0x802B447C
    // 0x802CD428: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_31;
    // 0x802CD428: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_31:
    // 0x802CD42C: lui         $a2, 0x44F2
    ctx->r6 = S32(0X44F2 << 16);
    // 0x802CD430: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802CD434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD438: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CD43C: lui         $a3, 0xC40C
    ctx->r7 = S32(0XC40C << 16);
    // 0x802CD440: jal         0x802B447C
    // 0x802CD444: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_32;
    // 0x802CD444: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_32:
    // 0x802CD448: lui         $a2, 0x4519
    ctx->r6 = S32(0X4519 << 16);
    // 0x802CD44C: ori         $a2, $a2, 0x2000
    ctx->r6 = ctx->r6 | 0X2000;
    // 0x802CD450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD454: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802CD458: lui         $a3, 0x443E
    ctx->r7 = S32(0X443E << 16);
    // 0x802CD45C: jal         0x802B447C
    // 0x802CD460: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_33;
    // 0x802CD460: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_33:
    // 0x802CD464: lui         $a2, 0x451B
    ctx->r6 = S32(0X451B << 16);
    // 0x802CD468: ori         $a2, $a2, 0x6000
    ctx->r6 = ctx->r6 | 0X6000;
    // 0x802CD46C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD470: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802CD474: lui         $a3, 0x4511
    ctx->r7 = S32(0X4511 << 16);
    // 0x802CD478: jal         0x802B447C
    // 0x802CD47C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_34;
    // 0x802CD47C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_34:
    // 0x802CD480: lui         $a2, 0x44B2
    ctx->r6 = S32(0X44B2 << 16);
    // 0x802CD484: lui         $a3, 0x454E
    ctx->r7 = S32(0X454E << 16);
    // 0x802CD488: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802CD48C: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802CD490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD494: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802CD498: jal         0x802B447C
    // 0x802CD49C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_35;
    // 0x802CD49C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_35:
    // 0x802CD4A0: lui         $a3, 0x456C
    ctx->r7 = S32(0X456C << 16);
    // 0x802CD4A4: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802CD4A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD4AC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CD4B0: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    // 0x802CD4B4: jal         0x802B447C
    // 0x802CD4B8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_36;
    // 0x802CD4B8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_36:
    // 0x802CD4BC: lui         $a3, 0x4565
    ctx->r7 = S32(0X4565 << 16);
    // 0x802CD4C0: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802CD4C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CD4C8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802CD4CC: lui         $a2, 0xC4B9
    ctx->r6 = S32(0XC4B9 << 16);
    // 0x802CD4D0: jal         0x802B447C
    // 0x802CD4D4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_37;
    // 0x802CD4D4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_37:
    // 0x802CD4D8: lui         $a1, 0x43B0
    ctx->r5 = S32(0X43B0 << 16);
    // 0x802CD4DC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x802CD4E0: jal         0x80318C9C
    // 0x802CD4E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318C9C(rdram, ctx);
        goto after_38;
    // 0x802CD4E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x802CD4E8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802CD4EC: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x802CD4F0: addiu       $s1, $s4, 0x414
    ctx->r17 = ADD32(ctx->r20, 0X414);
L_802CD4F4:
    // 0x802CD4F4: lw          $s0, 0x5B4($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X5B4);
    // 0x802CD4F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CD4FC: lh          $t6, 0xA8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA8);
    // 0x802CD500: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x802CD504: addu        $a0, $t6, $s2
    ctx->r4 = ADD32(ctx->r14, ctx->r18);
    // 0x802CD508: jalr        $t9
    // 0x802CD50C: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, 0X414);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x802CD50C: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, 0X414);
    after_39:
    // 0x802CD510: lw          $s0, 0x5B4($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X5B4);
    // 0x802CD514: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802CD518: lh          $t7, 0xB0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XB0);
    // 0x802CD51C: lw          $t9, 0xB4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB4);
    // 0x802CD520: addu        $a0, $t7, $s2
    ctx->r4 = ADD32(ctx->r15, ctx->r18);
    // 0x802CD524: jalr        $t9
    // 0x802CD528: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, 0X414);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x802CD528: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, 0X414);
    after_40:
    // 0x802CD52C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CD530: jal         0x80319008
    // 0x802CD534: lui         $a1, 0x4128
    ctx->r5 = S32(0X4128 << 16);
    static_3_80319008(rdram, ctx);
        goto after_41;
    // 0x802CD534: lui         $a1, 0x4128
    ctx->r5 = S32(0X4128 << 16);
    after_41:
    // 0x802CD538: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CD53C: jal         0x80318EFC
    // 0x802CD540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318EFC(rdram, ctx);
        goto after_42;
    // 0x802CD540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_42:
    // 0x802CD544: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CD548: jal         0x80318F04
    // 0x802CD54C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F04(rdram, ctx);
        goto after_43;
    // 0x802CD54C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_43:
    // 0x802CD550: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CD554: jal         0x80318F14
    // 0x802CD558: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318F14(rdram, ctx);
        goto after_44;
    // 0x802CD558: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_44:
    // 0x802CD55C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802CD560: jal         0x80318EF4
    // 0x802CD564: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318EF4(rdram, ctx);
        goto after_45;
    // 0x802CD564: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_45:
    // 0x802CD568: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x802CD56C: jal         0x802AB2AC
    // 0x802CD570: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_46;
    // 0x802CD570: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_46:
    // 0x802CD574: addiu       $s3, $s3, 0x6A0
    ctx->r19 = ADD32(ctx->r19, 0X6A0);
    // 0x802CD578: addiu       $at, $zero, 0x13E0
    ctx->r1 = ADD32(0, 0X13E0);
    // 0x802CD57C: addiu       $s2, $s2, 0x6A0
    ctx->r18 = ADD32(ctx->r18, 0X6A0);
    // 0x802CD580: bne         $s3, $at, L_802CD4F4
    if (ctx->r19 != ctx->r1) {
        // 0x802CD584: addiu       $s1, $s1, 0x6A0
        ctx->r17 = ADD32(ctx->r17, 0X6A0);
            goto L_802CD4F4;
    }
    // 0x802CD584: addiu       $s1, $s1, 0x6A0
    ctx->r17 = ADD32(ctx->r17, 0X6A0);
    // 0x802CD588: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802CD58C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802CD590: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802CD594: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802CD598: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802CD59C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802CD5A0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802CD5A4: jr          $ra
    // 0x802CD5A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802CD5A8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802E9BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9C5C: jr          $ra
    // 0x802E9C60: lbu         $v0, 0x198($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X198);
    return;
    // 0x802E9C60: lbu         $v0, 0x198($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X198);
;}
RECOMP_FUNC void D_80298F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80299004: bne         $a0, $zero, L_8029901C
    if (ctx->r4 != 0) {
        // 0x80299008: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8029901C;
    }
    // 0x80299008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029900C: jal         0x802C67EC
    // 0x80299010: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80299010: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_0:
    // 0x80299014: beq         $v0, $zero, L_80299034
    if (ctx->r2 == 0) {
        // 0x80299018: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80299034;
    }
    // 0x80299018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8029901C:
    // 0x8029901C: jal         0x80308668
    // 0x80299020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x80299020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80299024: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80299028: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8029902C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80299030: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
L_80299034:
    // 0x80299034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80299038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029903C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80299040: jr          $ra
    // 0x80299044: nop

    return;
    // 0x80299044: nop

;}
RECOMP_FUNC void D_80294240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802942C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802942C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802942C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802942CC: beq         $a0, $zero, L_80294300
    if (ctx->r4 == 0) {
        // 0x802942D0: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80294300;
    }
    // 0x802942D0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802942D4: addiu       $a0, $a0, 0x10C
    ctx->r4 = ADD32(ctx->r4, 0X10C);
    // 0x802942D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802942DC: jal         0x8031172C
    // 0x802942E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_8031172C(rdram, ctx);
        goto after_0;
    // 0x802942E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802942E4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802942E8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802942EC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802942F0: beql        $t7, $zero, L_80294304
    if (ctx->r15 == 0) {
        // 0x802942F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80294304;
    }
    goto skip_0;
    // 0x802942F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802942F8: jal         0x802C681C
    // 0x802942FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802942FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
L_80294300:
    // 0x80294300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80294304:
    // 0x80294304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80294308: jr          $ra
    // 0x8029430C: nop

    return;
    // 0x8029430C: nop

;}
RECOMP_FUNC void D_802227C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802227C8: beq         $a0, $zero, L_8022283C
    if (ctx->r4 == 0) {
        // 0x802227CC: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_8022283C;
    }
    // 0x802227CC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802227D0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802227D4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802227D8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802227DC: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x802227E0: lui         $t8, 0xC18
    ctx->r24 = S32(0XC18 << 16);
    // 0x802227E4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802227E8: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802227EC: ori         $t8, $t8, 0x2078
    ctx->r24 = ctx->r24 | 0X2078;
    // 0x802227F0: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x802227F4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802227F8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802227FC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222800: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80222804: lui         $t0, 0xB700
    ctx->r8 = S32(0XB700 << 16);
    // 0x80222808: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8022280C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80222810: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80222814: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222818: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x8022281C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80222820: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80222824: sb          $a2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r6;
    // 0x80222828: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x8022282C: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x80222830: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x80222834: jr          $ra
    // 0x80222838: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    return;
    // 0x80222838: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
L_8022283C:
    // 0x8022283C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80222840: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222844: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x80222848: lui         $t5, 0xC18
    ctx->r13 = S32(0XC18 << 16);
    // 0x8022284C: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x80222850: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x80222854: ori         $t5, $t5, 0x2048
    ctx->r13 = ctx->r13 | 0X2048;
    // 0x80222858: ori         $t4, $t4, 0x31D
    ctx->r12 = ctx->r12 | 0X31D;
    // 0x8022285C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80222860: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80222864: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80222868: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022286C: lui         $t7, 0xB600
    ctx->r15 = S32(0XB600 << 16);
    // 0x80222870: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222874: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80222878: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8022287C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222880: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x80222884: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222888: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8022288C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x80222890: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x80222894: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x80222898: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8022289C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x802228A0: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x802228A4: jr          $ra
    // 0x802228A8: nop

    return;
    // 0x802228A8: nop

;}
RECOMP_FUNC void D_80298B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298C1C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80298C20: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80298C24: jr          $ra
    // 0x80298C28: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x80298C28: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802E8574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E85F4: jr          $ra
    // 0x802E85F8: sw          $a1, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->r5;
    return;
    // 0x802E85F8: sw          $a1, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_80234830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234830: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80234834: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80234838: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023483C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80234840: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234844: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80234848: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8023484C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80234850: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80234854: jal         0x802235C8
    // 0x80234858: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    static_3_802235C8(rdram, ctx);
        goto after_0;
    // 0x80234858: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_0:
    // 0x8023485C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80234860: lhu         $t2, 0x0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X0);
    // 0x80234864: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80234868: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023486C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80234870: bne         $at, $zero, L_80234888
    if (ctx->r1 != 0) {
        // 0x80234874: nop
    
            goto L_80234888;
    }
    // 0x80234874: nop

    // 0x80234878: jal         0x80231A24
    // 0x8023487C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8023487C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80234880: b           L_80234928
    // 0x80234884: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80234928;
    // 0x80234884: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80234888:
    // 0x80234888: jal         0x80223840
    // 0x8023488C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80223840(rdram, ctx);
        goto after_2;
    // 0x8023488C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x80234890: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80234894: jal         0x80223914
    // 0x80234898: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80223914(rdram, ctx);
        goto after_3;
    // 0x80234898: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x8023489C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x802348A0: jal         0x80223928
    // 0x802348A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_80223928(rdram, ctx);
        goto after_4;
    // 0x802348A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x802348A8: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x802348AC: ori         $at, $at, 0x5257
    ctx->r1 = ctx->r1 | 0X5257;
    // 0x802348B0: bne         $v0, $at, L_802348D4
    if (ctx->r2 != ctx->r1) {
        // 0x802348B4: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_802348D4;
    }
    // 0x802348B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802348B8: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x802348BC: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x802348C0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x802348C4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x802348C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802348CC: jal         0x80223B30
    // 0x802348D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_80223B30(rdram, ctx);
        goto after_5;
    // 0x802348D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
L_802348D4:
    // 0x802348D4: jal         0x802238F0
    // 0x802348D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_802238F0(rdram, ctx);
        goto after_6;
    // 0x802348D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x802348DC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x802348E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802348E4: bne         $v0, $at, L_802348F4
    if (ctx->r2 != ctx->r1) {
        // 0x802348E8: nop
    
            goto L_802348F4;
    }
    // 0x802348E8: nop

    // 0x802348EC: b           L_80234928
    // 0x802348F0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
        goto L_80234928;
    // 0x802348F0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
L_802348F4:
    // 0x802348F4: bne         $v0, $zero, L_80234910
    if (ctx->r2 != 0) {
        // 0x802348F8: lui         $a0, 0x803D
        ctx->r4 = S32(0X803D << 16);
            goto L_80234910;
    }
    // 0x802348F8: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x802348FC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80234900: jal         0x8022B948
    // 0x80234904: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_7;
    // 0x80234904: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x80234908: b           L_80234914
    // 0x8023490C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_80234914;
    // 0x8023490C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80234910:
    // 0x80234910: ori         $a0, $a0, 0xA800
    ctx->r4 = ctx->r4 | 0XA800;
L_80234914:
    // 0x80234914: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80234918: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8023491C: jal         0x8022B460
    // 0x80234920: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022B460(rdram, ctx);
        goto after_8;
    // 0x80234920: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_8:
    // 0x80234924: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_80234928:
    // 0x80234928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023492C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80234930: jr          $ra
    // 0x80234934: nop

    return;
    // 0x80234934: nop

;}
RECOMP_FUNC void D_802EC508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC58C: bne         $a0, $zero, L_802EC5A4
    if (ctx->r4 != 0) {
        // 0x802EC590: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EC5A4;
    }
    // 0x802EC590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC594: jal         0x802C67EC
    // 0x802EC598: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EC598: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EC59C: beq         $v0, $zero, L_802EC5FC
    if (ctx->r2 == 0) {
        // 0x802EC5A0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EC5FC;
    }
    // 0x802EC5A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EC5A4:
    // 0x802EC5A4: jal         0x8031C47C
    // 0x802EC5A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EC5A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EC5AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC5B0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802EC5B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC5B8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802EC5BC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802EC5C0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802EC5C4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802EC5C8: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x802EC5CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EC5D0: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EC5D4: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802EC5D8: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802EC5DC: sh          $t8, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r24;
    // 0x802EC5E0: sh          $t9, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r25;
    // 0x802EC5E4: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802EC5E8: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EC5EC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EC5F0: jal         0x8031CD68
    // 0x802EC5F4: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031CD68(rdram, ctx);
        goto after_2;
    // 0x802EC5F4: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802EC5F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802EC5FC:
    // 0x802EC5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EC600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC604: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EC608: jr          $ra
    // 0x802EC60C: nop

    return;
    // 0x802EC60C: nop

;}
RECOMP_FUNC void D_802B77C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B784C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7850: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7854: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B7858: beq         $t6, $zero, L_802B786C
    if (ctx->r14 == 0) {
        // 0x802B785C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B786C;
    }
    // 0x802B785C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B7860: jal         0x80303578
    // 0x802B7864: addiu       $a0, $a0, 0xB3C
    ctx->r4 = ADD32(ctx->r4, 0XB3C);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B7864: addiu       $a0, $a0, 0xB3C
    ctx->r4 = ADD32(ctx->r4, 0XB3C);
    after_0:
    // 0x802B7868: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B786C:
    // 0x802B786C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B7874: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B7878: jr          $ra
    // 0x802B787C: nop

    return;
    // 0x802B787C: nop

;}
RECOMP_FUNC void D_802E88D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8954: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E8958: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E895C: jr          $ra
    // 0x802E8960: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E8960: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80227FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227FB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227FB8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80227FBC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80227FC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227FC4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227FC8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227FCC: jal         0x80223840
    // 0x80227FD0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227FD0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227FD4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227FD8: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227FDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227FE0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227FE4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227FE8: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227FEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227FF0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227FF4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227FF8: jal         0x80223B30
    // 0x80227FFC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    static_3_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227FFC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80228000: beq         $v0, $zero, L_80228014
    if (ctx->r2 == 0) {
        // 0x80228004: nop
    
            goto L_80228014;
    }
    // 0x80228004: nop

    // 0x80228008: jal         0x80225624
    // 0x8022800C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_80225624(rdram, ctx);
        goto after_2;
    // 0x8022800C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80228010: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80228014:
    // 0x80228014: jal         0x802238F0
    // 0x80228018: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802238F0(rdram, ctx);
        goto after_3;
    // 0x80228018: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x8022801C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228020: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80228024: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80228028: jr          $ra
    // 0x8022802C: nop

    return;
    // 0x8022802C: nop

;}
RECOMP_FUNC void D_8029D2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D364: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8029D368: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029D36C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029D370: jal         0x8021BA90
    // 0x8029D374: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x8029D374: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8029D378: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8029D37C: bne         $v0, $at, L_8029D3A4
    if (ctx->r2 != ctx->r1) {
        // 0x8029D380: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_8029D3A4;
    }
    // 0x8029D380: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8029D384: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029D388: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029D38C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8029D390: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8029D394: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8029D398: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8029D39C: jal         0x80231A24
    // 0x8029D3A0: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8029D3A0: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    after_1:
L_8029D3A4:
    // 0x8029D3A4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8029D3A8: jal         0x8021ACB0
    // 0x8029D3AC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x8029D3AC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_2:
    // 0x8029D3B0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8029D3B4: jal         0x8021B838
    // 0x8029D3B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_3;
    // 0x8029D3B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8029D3BC: jal         0x8022970C
    // 0x8029D3C0: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x8029D3C0: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_4:
    // 0x8029D3C4: lui         $a1, 0xC54B
    ctx->r5 = S32(0XC54B << 16);
    // 0x8029D3C8: lui         $a2, 0x43AB
    ctx->r6 = S32(0X43AB << 16);
    // 0x8029D3CC: ori         $a2, $a2, 0x199A
    ctx->r6 = ctx->r6 | 0X199A;
    // 0x8029D3D0: ori         $a1, $a1, 0x1800
    ctx->r5 = ctx->r5 | 0X1800;
    // 0x8029D3D4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x8029D3D8: jal         0x8022A0D0
    // 0x8029D3DC: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_5;
    // 0x8029D3DC: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    after_5:
    // 0x8029D3E0: lui         $a1, 0x4096
    ctx->r5 = S32(0X4096 << 16);
    // 0x8029D3E4: ori         $a1, $a1, 0xCBE8
    ctx->r5 = ctx->r5 | 0XCBE8;
    // 0x8029D3E8: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x8029D3EC: jal         0x802D01D4
    // 0x8029D3F0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x8029D3F0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_6:
    // 0x8029D3F4: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x8029D3F8: addiu       $v1, $s0, 0x1A4
    ctx->r3 = ADD32(ctx->r16, 0X1A4);
    // 0x8029D3FC: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x8029D400: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x8029D404: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8029D408: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8029D40C: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x8029D410: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x8029D414: jalr        $t9
    // 0x8029D418: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x8029D418: nop

    after_7:
    // 0x8029D41C: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x8029D420: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8029D424: lh          $t7, 0xA0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA0);
    // 0x8029D428: lw          $t9, 0xA4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XA4);
    // 0x8029D42C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x8029D430: jalr        $t9
    // 0x8029D434: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x8029D434: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_8:
    // 0x8029D438: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x8029D43C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x8029D440: lh          $t8, 0xA8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XA8);
    // 0x8029D444: lw          $t9, 0xAC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XAC);
    // 0x8029D448: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x8029D44C: jalr        $t9
    // 0x8029D450: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8029D450: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_9:
    // 0x8029D454: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x8029D458: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8029D45C: lh          $t0, 0x98($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X98);
    // 0x8029D460: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x8029D464: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x8029D468: jalr        $t9
    // 0x8029D46C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x8029D46C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_10:
    // 0x8029D470: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8029D474: jal         0x802D3DCC
    // 0x8029D478: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    static_3_802D3DCC(rdram, ctx);
        goto after_11;
    // 0x8029D478: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    after_11:
    // 0x8029D47C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8029D480: jal         0x802D27F4
    // 0x8029D484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802D27F4(rdram, ctx);
        goto after_12;
    // 0x8029D484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x8029D488: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8029D48C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8029D490: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8029D494: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8029D498: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8029D49C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8029D4A0: jal         0x80309758
    // 0x8029D4A4: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    static_3_80309758(rdram, ctx);
        goto after_13;
    // 0x8029D4A4: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    after_13:
    // 0x8029D4A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8029D4AC: jal         0x80318E80
    // 0x8029D4B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_14;
    // 0x8029D4B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8029D4B4: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8029D4B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8029D4BC: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x8029D4C0: lh          $t1, 0xB0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XB0);
    // 0x8029D4C4: jalr        $t9
    // 0x8029D4C8: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x8029D4C8: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    after_15:
    // 0x8029D4CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029D4D0: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x8029D4D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8029D4D8: sw          $zero, 0x280($s0)
    MEM_W(0X280, ctx->r16) = 0;
    // 0x8029D4DC: sh          $zero, 0x284($s0)
    MEM_H(0X284, ctx->r16) = 0;
    // 0x8029D4E0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8029D4E4: swc1        $f0, 0x28C($s0)
    MEM_W(0X28C, ctx->r16) = ctx->f0.u32l;
    // 0x8029D4E8: swc1        $f0, 0x290($s0)
    MEM_W(0X290, ctx->r16) = ctx->f0.u32l;
    // 0x8029D4EC: swc1        $f0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f0.u32l;
    // 0x8029D4F0: jal         0x8022970C
    // 0x8029D4F4: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x8029D4F4: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    after_16:
    // 0x8029D4F8: addiu       $a0, $s0, 0x294
    ctx->r4 = ADD32(ctx->r16, 0X294);
    // 0x8029D4FC: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8029D500: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8029D504: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8029D508: jal         0x802C4A20
    // 0x8029D50C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802C4A20(rdram, ctx);
        goto after_17;
    // 0x8029D50C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_17:
    // 0x8029D510: lui         $a1, 0x451C
    ctx->r5 = S32(0X451C << 16);
    // 0x8029D514: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x8029D518: jal         0x802C5830
    // 0x8029D51C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_802C5830(rdram, ctx);
        goto after_18;
    // 0x8029D51C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_18:
    // 0x8029D520: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8029D524: jal         0x802C584C
    // 0x8029D528: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    static_3_802C584C(rdram, ctx);
        goto after_19;
    // 0x8029D528: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_19:
    // 0x8029D52C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8029D530: jal         0x802C580C
    // 0x8029D534: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_20;
    // 0x8029D534: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_20:
    // 0x8029D538: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8029D53C: jal         0x802C5818
    // 0x8029D540: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_21;
    // 0x8029D540: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_21:
    // 0x8029D544: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8029D548: jal         0x802C5824
    // 0x8029D54C: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_22;
    // 0x8029D54C: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    after_22:
    // 0x8029D550: jal         0x8022970C
    // 0x8029D554: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_23;
    // 0x8029D554: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_23:
    // 0x8029D558: addiu       $a0, $s0, 0x428
    ctx->r4 = ADD32(ctx->r16, 0X428);
    // 0x8029D55C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8029D560: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8029D564: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8029D568: jal         0x802C4A20
    // 0x8029D56C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802C4A20(rdram, ctx);
        goto after_24;
    // 0x8029D56C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_24:
    // 0x8029D570: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8029D574: lui         $a1, 0x451C
    ctx->r5 = S32(0X451C << 16);
    // 0x8029D578: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x8029D57C: jal         0x802C5830
    // 0x8029D580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C5830(rdram, ctx);
        goto after_25;
    // 0x8029D580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x8029D584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029D588: jal         0x802C584C
    // 0x8029D58C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    static_3_802C584C(rdram, ctx);
        goto after_26;
    // 0x8029D58C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_26:
    // 0x8029D590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029D594: jal         0x802C580C
    // 0x8029D598: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_27;
    // 0x8029D598: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_27:
    // 0x8029D59C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029D5A0: jal         0x802C5818
    // 0x8029D5A4: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_28;
    // 0x8029D5A4: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_28:
    // 0x8029D5A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029D5AC: jal         0x802C5824
    // 0x8029D5B0: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_29;
    // 0x8029D5B0: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    after_29:
    // 0x8029D5B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029D5B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029D5BC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x8029D5C0: jr          $ra
    // 0x8029D5C4: nop

    return;
    // 0x8029D5C4: nop

;}
RECOMP_FUNC void D_802A66B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A673C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A6740: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A6744: sh          $a1, 0xE2($a0)
    MEM_H(0XE2, ctx->r4) = ctx->r5;
    // 0x802A6748: lh          $v0, 0xE2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE2);
    // 0x802A674C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802A6750: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A6754: bne         $v0, $at, L_802A678C
    if (ctx->r2 != ctx->r1) {
        // 0x802A6758: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802A678C;
    }
    // 0x802A6758: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A675C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A6760: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A6764: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A6768: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A676C: swc1        $f12, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->f12.u32l;
    // 0x802A6770: sw          $a3, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r7;
    // 0x802A6774: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x802A6778: sb          $zero, 0xE4($a0)
    MEM_B(0XE4, ctx->r4) = 0;
    // 0x802A677C: swc1        $f0, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->f0.u32l;
    // 0x802A6780: swc1        $f2, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->f2.u32l;
    // 0x802A6784: b           L_802A67DC
    // 0x802A6788: swc1        $f4, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->f4.u32l;
        goto L_802A67DC;
    // 0x802A6788: swc1        $f4, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->f4.u32l;
L_802A678C:
    // 0x802A678C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A6790: bne         $v0, $at, L_802A67C4
    if (ctx->r2 != ctx->r1) {
        // 0x802A6794: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802A67C4;
    }
    // 0x802A6794: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6798: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A679C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A67A0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A67A4: swc1        $f12, 0xEC($a2)
    MEM_W(0XEC, ctx->r6) = ctx->f12.u32l;
    // 0x802A67A8: sw          $a3, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = ctx->r7;
    // 0x802A67AC: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x802A67B0: sb          $zero, 0xE4($a2)
    MEM_B(0XE4, ctx->r6) = 0;
    // 0x802A67B4: swc1        $f0, 0xF4($a2)
    MEM_W(0XF4, ctx->r6) = ctx->f0.u32l;
    // 0x802A67B8: swc1        $f2, 0xF8($a2)
    MEM_W(0XF8, ctx->r6) = ctx->f2.u32l;
    // 0x802A67BC: b           L_802A67DC
    // 0x802A67C0: swc1        $f6, 0xF0($a2)
    MEM_W(0XF0, ctx->r6) = ctx->f6.u32l;
        goto L_802A67DC;
    // 0x802A67C0: swc1        $f6, 0xF0($a2)
    MEM_W(0XF0, ctx->r6) = ctx->f6.u32l;
L_802A67C4:
    // 0x802A67C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A67C8: bne         $v0, $at, L_802A67DC
    if (ctx->r2 != ctx->r1) {
        // 0x802A67CC: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_802A67DC;
    }
    // 0x802A67CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A67D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A67D4: nop

    // 0x802A67D8: swc1        $f8, 0xF8($a2)
    MEM_W(0XF8, ctx->r6) = ctx->f8.u32l;
L_802A67DC:
    // 0x802A67DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802A67E0: sb          $t8, 0xE0($a2)
    MEM_B(0XE0, ctx->r6) = ctx->r24;
    // 0x802A67E4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A67E8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A67EC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802A67F0: jal         0x802AEE54
    // 0x802A67F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_0;
    // 0x802A67F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802A67F8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802A67FC: sw          $v0, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = ctx->r2;
    // 0x802A6800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6808: jr          $ra
    // 0x802A680C: nop

    return;
    // 0x802A680C: nop

;}
RECOMP_FUNC void D_802ECBB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECC34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802ECC38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802ECC3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ECC40: bne         $a0, $zero, L_802ECC58
    if (ctx->r4 != 0) {
        // 0x802ECC44: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802ECC58;
    }
    // 0x802ECC44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802ECC48: jal         0x802C67EC
    // 0x802ECC4C: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ECC4C: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    after_0:
    // 0x802ECC50: beq         $v0, $zero, L_802ECCC8
    if (ctx->r2 == 0) {
        // 0x802ECC54: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802ECCC8;
    }
    // 0x802ECC54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802ECC58:
    // 0x802ECC58: jal         0x8031C47C
    // 0x802ECC5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ECC5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802ECC60: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x802ECC64: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802ECC68: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802ECC6C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802ECC70: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802ECC74: jal         0x802C6930
    // 0x802ECC78: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802ECC78: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802ECC7C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802ECC80: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802ECC84: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ECC88: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802ECC8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ECC90: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802ECC94: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x802ECC98: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802ECC9C: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x802ECCA0: sh          $t7, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r15;
    // 0x802ECCA4: sw          $t8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r24;
    // 0x802ECCA8: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
    // 0x802ECCAC: sh          $t9, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r25;
    // 0x802ECCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802ECCB4: sw          $t6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r14;
    // 0x802ECCB8: swc1        $f0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f0.u32l;
    // 0x802ECCBC: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x802ECCC0: jal         0x8031D434
    // 0x802ECCC4: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    static_3_8031D434(rdram, ctx);
        goto after_3;
    // 0x802ECCC4: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    after_3:
L_802ECCC8:
    // 0x802ECCC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802ECCCC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802ECCD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802ECCD4: jr          $ra
    // 0x802ECCD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802ECCD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8020867C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020867C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80208680: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80208684: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80208688: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8020868C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80208690: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80208694: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80208698: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8020869C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802086A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802086A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802086A8: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x802086AC: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x802086B0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x802086B4: lbu         $v0, 0x10($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X10);
    // 0x802086B8: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x802086BC: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x802086C0: blez        $v0, L_80208860
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802086C4: lw          $s5, 0x78($sp)
        ctx->r21 = MEM_W(ctx->r29, 0X78);
            goto L_80208860;
    }
    // 0x802086C4: lw          $s5, 0x78($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X78);
L_802086C8:
    // 0x802086C8: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x802086CC: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x802086D0: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x802086D4: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x802086D8: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x802086DC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x802086E0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x802086E4: lbu         $v1, 0x4($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X4);
    // 0x802086E8: blezl       $v1, L_80208850
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802086EC: lw          $t0, 0x64($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X64);
            goto L_80208850;
    }
    goto skip_0;
    // 0x802086EC: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x802086F0: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_802086F4:
    // 0x802086F4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x802086F8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x802086FC: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80208700: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80208704: andi        $s7, $fp, 0x200
    ctx->r23 = ctx->r30 & 0X200;
    // 0x80208708: addu        $s1, $t3, $t4
    ctx->r17 = ADD32(ctx->r11, ctx->r12);
    // 0x8020870C: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80208710: blezl       $v0, L_80208828
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80208714: lw          $t5, 0x60($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X60);
            goto L_80208828;
    }
    goto skip_1;
    // 0x80208714: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    skip_1:
    // 0x80208718: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
L_8020871C:
    // 0x8020871C: sll         $t6, $s6, 4
    ctx->r14 = S32(ctx->r22 << 4);
    // 0x80208720: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x80208724: addu        $s3, $t5, $t6
    ctx->r19 = ADD32(ctx->r13, ctx->r14);
    // 0x80208728: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x8020872C: andi        $t7, $s0, 0xFFF
    ctx->r15 = ctx->r16 & 0XFFF;
    // 0x80208730: beq         $s7, $zero, L_80208794
    if (ctx->r23 == 0) {
        // 0x80208734: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_80208794;
    }
    // 0x80208734: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80208738: beq         $t7, $at, L_8020880C
    if (ctx->r15 == ctx->r1) {
        // 0x8020873C: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_8020880C;
    }
    // 0x8020873C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80208740: jal         0x802331E0
    // 0x80208744: andi        $s2, $s4, 0x1
    ctx->r18 = ctx->r20 & 0X1;
    static_3_802331E0(rdram, ctx);
        goto after_0;
    // 0x80208744: andi        $s2, $s4, 0x1
    ctx->r18 = ctx->r20 & 0X1;
    after_0:
    // 0x80208748: beq         $s2, $zero, L_80208760
    if (ctx->r18 == 0) {
        // 0x8020874C: andi        $t9, $s4, 0x2
        ctx->r25 = ctx->r20 & 0X2;
            goto L_80208760;
    }
    // 0x8020874C: andi        $t9, $s4, 0x2
    ctx->r25 = ctx->r20 & 0X2;
    // 0x80208750: beq         $v0, $s5, L_80208760
    if (ctx->r2 == ctx->r21) {
        // 0x80208754: nop
    
            goto L_80208760;
    }
    // 0x80208754: nop

    // 0x80208758: b           L_8020880C
    // 0x8020875C: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020880C;
    // 0x8020875C: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_80208760:
    // 0x80208760: beq         $t9, $zero, L_80208778
    if (ctx->r25 == 0) {
        // 0x80208764: slt         $at, $s5, $v0
        ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80208778;
    }
    // 0x80208764: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208768: beql        $at, $zero, L_8020877C
    if (ctx->r1 == 0) {
        // 0x8020876C: andi        $t8, $s4, 0x4
        ctx->r24 = ctx->r20 & 0X4;
            goto L_8020877C;
    }
    goto skip_2;
    // 0x8020876C: andi        $t8, $s4, 0x4
    ctx->r24 = ctx->r20 & 0X4;
    skip_2:
    // 0x80208770: b           L_8020880C
    // 0x80208774: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020880C;
    // 0x80208774: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_80208778:
    // 0x80208778: andi        $t8, $s4, 0x4
    ctx->r24 = ctx->r20 & 0X4;
L_8020877C:
    // 0x8020877C: beq         $t8, $zero, L_80208794
    if (ctx->r24 == 0) {
        // 0x80208780: slt         $at, $v0, $s5
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
            goto L_80208794;
    }
    // 0x80208780: slt         $at, $v0, $s5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80208784: beql        $at, $zero, L_80208798
    if (ctx->r1 == 0) {
        // 0x80208788: andi        $t0, $fp, 0x400
        ctx->r8 = ctx->r30 & 0X400;
            goto L_80208798;
    }
    goto skip_3;
    // 0x80208788: andi        $t0, $fp, 0x400
    ctx->r8 = ctx->r30 & 0X400;
    skip_3:
    // 0x8020878C: b           L_8020880C
    // 0x80208790: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020880C;
    // 0x80208790: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_80208794:
    // 0x80208794: andi        $t0, $fp, 0x400
    ctx->r8 = ctx->r30 & 0X400;
L_80208798:
    // 0x80208798: beq         $t0, $zero, L_802087EC
    if (ctx->r8 == 0) {
        // 0x8020879C: andi        $t1, $s4, 0x1
        ctx->r9 = ctx->r20 & 0X1;
            goto L_802087EC;
    }
    // 0x8020879C: andi        $t1, $s4, 0x1
    ctx->r9 = ctx->r20 & 0X1;
    // 0x802087A0: beq         $t1, $zero, L_802087B8
    if (ctx->r9 == 0) {
        // 0x802087A4: andi        $t2, $s4, 0x2
        ctx->r10 = ctx->r20 & 0X2;
            goto L_802087B8;
    }
    // 0x802087A4: andi        $t2, $s4, 0x2
    ctx->r10 = ctx->r20 & 0X2;
    // 0x802087A8: beq         $s0, $s5, L_802087B8
    if (ctx->r16 == ctx->r21) {
        // 0x802087AC: nop
    
            goto L_802087B8;
    }
    // 0x802087AC: nop

    // 0x802087B0: b           L_8020880C
    // 0x802087B4: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020880C;
    // 0x802087B4: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_802087B8:
    // 0x802087B8: beq         $t2, $zero, L_802087D0
    if (ctx->r10 == 0) {
        // 0x802087BC: slt         $at, $s5, $s0
        ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_802087D0;
    }
    // 0x802087BC: slt         $at, $s5, $s0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x802087C0: beql        $at, $zero, L_802087D4
    if (ctx->r1 == 0) {
        // 0x802087C4: andi        $t3, $s4, 0x4
        ctx->r11 = ctx->r20 & 0X4;
            goto L_802087D4;
    }
    goto skip_4;
    // 0x802087C4: andi        $t3, $s4, 0x4
    ctx->r11 = ctx->r20 & 0X4;
    skip_4:
    // 0x802087C8: b           L_8020880C
    // 0x802087CC: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020880C;
    // 0x802087CC: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_802087D0:
    // 0x802087D0: andi        $t3, $s4, 0x4
    ctx->r11 = ctx->r20 & 0X4;
L_802087D4:
    // 0x802087D4: beq         $t3, $zero, L_802087EC
    if (ctx->r11 == 0) {
        // 0x802087D8: slt         $at, $s0, $s5
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r21) ? 1 : 0;
            goto L_802087EC;
    }
    // 0x802087D8: slt         $at, $s0, $s5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x802087DC: beql        $at, $zero, L_802087F0
    if (ctx->r1 == 0) {
        // 0x802087E0: lw          $a0, 0x6C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X6C);
            goto L_802087F0;
    }
    goto skip_5;
    // 0x802087E0: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    skip_5:
    // 0x802087E4: b           L_8020880C
    // 0x802087E8: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020880C;
    // 0x802087E8: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_802087EC:
    // 0x802087EC: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
L_802087F0:
    // 0x802087F0: jal         0x80208650
    // 0x802087F4: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    static_3_80208650(rdram, ctx);
        goto after_1;
    // 0x802087F4: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    after_1:
    // 0x802087F8: beql        $v0, $zero, L_8020880C
    if (ctx->r2 == 0) {
        // 0x802087FC: lbu         $v0, 0x4($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X4);
            goto L_8020880C;
    }
    goto skip_6;
    // 0x802087FC: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    skip_6:
    // 0x80208800: b           L_80208864
    // 0x80208804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80208864;
    // 0x80208804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80208808: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_8020880C:
    // 0x8020880C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80208810: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208814: bnel        $at, $zero, L_8020871C
    if (ctx->r1 != 0) {
        // 0x80208818: lw          $t5, 0x0($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X0);
            goto L_8020871C;
    }
    goto skip_7;
    // 0x80208818: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    skip_7:
    // 0x8020881C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80208820: lbu         $v1, 0x4($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X4);
    // 0x80208824: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
L_80208828:
    // 0x80208828: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8020882C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80208830: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80208834: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x80208838: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8020883C: bne         $at, $zero, L_802086F4
    if (ctx->r1 != 0) {
        // 0x80208840: sw          $t6, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r14;
            goto L_802086F4;
    }
    // 0x80208840: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x80208844: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x80208848: lbu         $v0, 0x10($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X10);
    // 0x8020884C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
L_80208850:
    // 0x80208850: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80208854: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208858: bne         $at, $zero, L_802086C8
    if (ctx->r1 != 0) {
        // 0x8020885C: sw          $t1, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r9;
            goto L_802086C8;
    }
    // 0x8020885C: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
L_80208860:
    // 0x80208860: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80208864:
    // 0x80208864: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80208868: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8020886C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80208870: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80208874: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80208878: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8020887C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80208880: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80208884: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80208888: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8020888C: jr          $ra
    // 0x80208890: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80208890: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void D_802A10A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A112C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A1130: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A1134: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A1138: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802A113C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802A1140: jal         0x80320D7C
    // 0x802A1144: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    static_3_80320D7C(rdram, ctx);
        goto after_0;
    // 0x802A1144: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x802A1148: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802A114C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A1150: beql        $v0, $zero, L_802A116C
    if (ctx->r2 == 0) {
        // 0x802A1154: lw          $v0, 0x270($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X270);
            goto L_802A116C;
    }
    goto skip_0;
    // 0x802A1154: lw          $v0, 0x270($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X270);
    skip_0:
    // 0x802A1158: beq         $v0, $at, L_802A1194
    if (ctx->r2 == ctx->r1) {
        // 0x802A115C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_802A1194;
    }
    // 0x802A115C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802A1160: b           L_802A11A8
    // 0x802A1164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A11A8;
    // 0x802A1164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A1168: lw          $v0, 0x270($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X270);
L_802A116C:
    // 0x802A116C: lh          $t7, 0x78($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X78);
    // 0x802A1170: lw          $t9, 0x7C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X7C);
    // 0x802A1174: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802A1178: jalr        $t9
    // 0x802A117C: addiu       $a0, $a0, 0x1C0
    ctx->r4 = ADD32(ctx->r4, 0X1C0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802A117C: addiu       $a0, $a0, 0x1C0
    ctx->r4 = ADD32(ctx->r4, 0X1C0);
    after_1:
    // 0x802A1180: jal         0x8021BAE0
    // 0x802A1184: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_2;
    // 0x802A1184: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_2:
    // 0x802A1188: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x802A118C: b           L_802A11A4
    // 0x802A1190: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
        goto L_802A11A4;
    // 0x802A1190: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
L_802A1194:
    // 0x802A1194: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802A1198: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A119C: jal         0x8021B240
    // 0x802A11A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_3;
    // 0x802A11A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
L_802A11A4:
    // 0x802A11A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A11A8:
    // 0x802A11A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A11AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A11B0: jr          $ra
    // 0x802A11B4: nop

    return;
    // 0x802A11B4: nop

;}
RECOMP_FUNC void D_80216414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80216414: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80216418: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8021641C: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80216420: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80216424: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x80216428: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8021642C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80216430: sub.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x80216434: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80216438: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8021643C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80216440: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80216444: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80216448: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021644C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80216450: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80216454: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80216458: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8021645C: nop

    // 0x80216460: bc1f        L_80216470
    if (!c1cs) {
        // 0x80216464: nop
    
            goto L_80216470;
    }
    // 0x80216464: nop

    // 0x80216468: jr          $ra
    // 0x8021646C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8021646C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80216470:
    // 0x80216470: jr          $ra
    // 0x80216474: nop

    return;
    // 0x80216474: nop

;}
RECOMP_FUNC void D_802E7FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E8068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E806C: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E8070: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E8074: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E8078: bne         $v1, $zero, L_802E80A0
    if (ctx->r3 != 0) {
        // 0x802E807C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E80A0;
    }
    // 0x802E807C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E8080: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E8084: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E8088: jal         0x80231A24
    // 0x802E808C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E808C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E8090: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E8094: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E8098: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E809C: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E80A0:
    // 0x802E80A0: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E80A4: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x802E80A8: lh          $t7, 0x68($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X68);
    // 0x802E80AC: jalr        $t9
    // 0x802E80B0: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E80B0: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E80B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E80B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E80BC: jr          $ra
    // 0x802E80C0: nop

    return;
    // 0x802E80C0: nop

;}
RECOMP_FUNC void D_802E8B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8B80: jr          $ra
    // 0x802E8B84: lbu         $v0, 0xF9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF9);
    return;
    // 0x802E8B84: lbu         $v0, 0xF9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF9);
;}
RECOMP_FUNC void D_802D2FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3034: jr          $ra
    // 0x802D3038: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    return;
    // 0x802D3038: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
;}
RECOMP_FUNC void D_802D0C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D0CE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802D0CE8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802D0CEC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802D0CF0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802D0CF4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802D0CF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D0CFC: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x802D0D00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D0D04: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802D0D08: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x802D0D0C: sb          $zero, 0x70($a0)
    MEM_B(0X70, ctx->r4) = 0;
    // 0x802D0D10: sb          $zero, 0x71($a0)
    MEM_B(0X71, ctx->r4) = 0;
    // 0x802D0D14: sb          $zero, 0x72($a0)
    MEM_B(0X72, ctx->r4) = 0;
    // 0x802D0D18: sh          $zero, 0x78($a0)
    MEM_H(0X78, ctx->r4) = 0;
    // 0x802D0D1C: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x802D0D20: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x802D0D24: jal         0x80224CA8
    // 0x802D0D28: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802D0D28: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_0:
    // 0x802D0D2C: jal         0x80224CA8
    // 0x802D0D30: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802D0D30: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_1:
    // 0x802D0D34: jal         0x80224CA8
    // 0x802D0D38: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802D0D38: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_2:
    // 0x802D0D3C: jal         0x8030A9AC
    // 0x802D0D40: nop

    static_3_8030A9AC(rdram, ctx);
        goto after_3;
    // 0x802D0D40: nop

    after_3:
    // 0x802D0D44: jal         0x80224CA8
    // 0x802D0D48: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802D0D48: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_4:
    // 0x802D0D4C: jal         0x80224CA8
    // 0x802D0D50: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x802D0D50: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_5:
    // 0x802D0D54: jal         0x80224CA8
    // 0x802D0D58: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x802D0D58: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_6:
    // 0x802D0D5C: jal         0x80224CA8
    // 0x802D0D60: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    static_3_80224CA8(rdram, ctx);
        goto after_7;
    // 0x802D0D60: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_7:
    // 0x802D0D64: jal         0x80224CA8
    // 0x802D0D68: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    static_3_80224CA8(rdram, ctx);
        goto after_8;
    // 0x802D0D68: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_8:
    // 0x802D0D6C: jal         0x80224CA8
    // 0x802D0D70: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    static_3_80224CA8(rdram, ctx);
        goto after_9;
    // 0x802D0D70: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_9:
    // 0x802D0D74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D0D78: jal         0x80205AA0
    // 0x802D0D7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_10;
    // 0x802D0D7C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x802D0D80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D0D84: jal         0x80205EBC
    // 0x802D0D88: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    static_3_80205EBC(rdram, ctx);
        goto after_11;
    // 0x802D0D88: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_11:
    // 0x802D0D8C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x802D0D90: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802D0D94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D0D98: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802D0D9C: jal         0x80205E0C
    // 0x802D0DA0: sw          $t8, 0x7168($t9)
    MEM_W(0X7168, ctx->r25) = ctx->r24;
    static_3_80205E0C(rdram, ctx);
        goto after_12;
    // 0x802D0DA0: sw          $t8, 0x7168($t9)
    MEM_W(0X7168, ctx->r25) = ctx->r24;
    after_12:
    // 0x802D0DA4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x802D0DA8: jal         0x802AEE54
    // 0x802D0DAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_13;
    // 0x802D0DAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x802D0DB0: sw          $v0, 0x4170($s0)
    MEM_W(0X4170, ctx->r16) = ctx->r2;
    // 0x802D0DB4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D0DB8: jal         0x802B0078
    // 0x802D0DBC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    static_3_802B0078(rdram, ctx);
        goto after_14;
    // 0x802D0DBC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_14:
    // 0x802D0DC0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802D0DC4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802D0DC8: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x802D0DCC: sb          $t0, 0x716C($v0)
    MEM_B(0X716C, ctx->r2) = ctx->r8;
    // 0x802D0DD0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802D0DD4: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802D0DD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D0DDC: sb          $t1, 0x716D($v0)
    MEM_B(0X716D, ctx->r2) = ctx->r9;
    // 0x802D0DE0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x802D0DE4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802D0DE8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802D0DEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D0DF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D0DF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D0DF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D0DFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802D0E00: jal         0x8030890C
    // 0x802D0E04: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_15;
    // 0x802D0E04: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x802D0E08: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802D0E0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D0E10: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802D0E14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D0E18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D0E1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D0E20: jal         0x80309B88
    // 0x802D0E24: swc1        $f8, 0x7160($v0)
    MEM_W(0X7160, ctx->r2) = ctx->f8.u32l;
    static_3_80309B88(rdram, ctx);
        goto after_16;
    // 0x802D0E24: swc1        $f8, 0x7160($v0)
    MEM_W(0X7160, ctx->r2) = ctx->f8.u32l;
    after_16:
    // 0x802D0E28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802D0E2C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802D0E30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802D0E34: jr          $ra
    // 0x802D0E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D0E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_80298FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029904C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80299050: beq         $a0, $zero, L_80299094
    if (ctx->r4 == 0) {
        // 0x80299054: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80299094;
    }
    // 0x80299054: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80299058: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8029905C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80299060: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x80299064: jal         0x802C9940
    // 0x80299068: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802C9940(rdram, ctx);
        goto after_0;
    // 0x80299068: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8029906C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80299070: jal         0x803086D4
    // 0x80299074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_1;
    // 0x80299074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80299078: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8029907C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80299080: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80299084: beql        $t8, $zero, L_80299098
    if (ctx->r24 == 0) {
        // 0x80299088: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80299098;
    }
    goto skip_0;
    // 0x80299088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8029908C: jal         0x802C681C
    // 0x80299090: nop

    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x80299090: nop

    after_2:
L_80299094:
    // 0x80299094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80299098:
    // 0x80299098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029909C: jr          $ra
    // 0x802990A0: nop

    return;
    // 0x802990A0: nop

;}
RECOMP_FUNC void D_8023CBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CBA0: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x8023CBA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023CBA8: sh          $zero, 0x0($at)
    MEM_H(0X0, ctx->r1) = 0;
    // 0x8023CBAC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023CBB0: sw          $zero, 0x39E8($at)
    MEM_W(0X39E8, ctx->r1) = 0;
    // 0x8023CBB4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023CBB8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023CBBC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023CBC0: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x8023CBC4: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x8023CBC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023CBCC: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x8023CBD0: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x8023CBD4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8023CBD8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8023CBDC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8023CBE0: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x8023CBE4: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8023CBE8: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8023CBEC: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x8023CBF0: lui         $t2, 0xBB00
    ctx->r10 = S32(0XBB00 << 16);
    // 0x8023CBF4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8023CBF8: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8023CBFC: ori         $t2, $t2, 0x1
    ctx->r10 = ctx->r10 | 0X1;
    // 0x8023CC00: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x8023CC04: ori         $t3, $t3, 0x8000
    ctx->r11 = ctx->r11 | 0X8000;
    // 0x8023CC08: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x8023CC0C: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x8023CC10: sw          $t3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r11;
    // 0x8023CC14: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x8023CC18: ori         $t4, $t4, 0x2
    ctx->r12 = ctx->r12 | 0X2;
    // 0x8023CC1C: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x8023CC20: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x8023CC24: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x8023CC28: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8023CC2C: ori         $t5, $t5, 0x1301
    ctx->r13 = ctx->r13 | 0X1301;
    // 0x8023CC30: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8023CC34: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023CC38: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x8023CC3C: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8023CC40: ori         $t6, $t6, 0xC02
    ctx->r14 = ctx->r14 | 0XC02;
    // 0x8023CC44: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8023CC48: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x8023CC4C: addiu       $t7, $zero, 0x2000
    ctx->r15 = ADD32(0, 0X2000);
    // 0x8023CC50: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8023CC54: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023CC58: ori         $t8, $t8, 0x903
    ctx->r24 = ctx->r24 | 0X903;
    // 0x8023CC5C: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x8023CC60: addiu       $t9, $zero, 0xC00
    ctx->r25 = ADD32(0, 0XC00);
    // 0x8023CC64: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8023CC68: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8023CC6C: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x8023CC70: ori         $t2, $t2, 0x1102
    ctx->r10 = ctx->r10 | 0X1102;
    // 0x8023CC74: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x8023CC78: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x8023CC7C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8023CC80: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x8023CC84: ori         $t3, $t3, 0x1001
    ctx->r11 = ctx->r11 | 0X1001;
    // 0x8023CC88: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8023CC8C: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x8023CC90: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8023CC94: lui         $t4, 0xBA00
    ctx->r12 = S32(0XBA00 << 16);
    // 0x8023CC98: ori         $t4, $t4, 0xE02
    ctx->r12 = ctx->r12 | 0XE02;
    // 0x8023CC9C: addiu       $v1, $t1, 0x8
    ctx->r3 = ADD32(ctx->r9, 0X8);
    // 0x8023CCA0: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x8023CCA4: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8023CCA8: lui         $t6, 0xF0A
    ctx->r14 = S32(0XF0A << 16);
    // 0x8023CCAC: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x8023CCB0: ori         $t5, $t5, 0x31D
    ctx->r13 = ctx->r13 | 0X31D;
    // 0x8023CCB4: ori         $t6, $t6, 0x7008
    ctx->r14 = ctx->r14 | 0X7008;
    // 0x8023CCB8: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8023CCBC: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8023CCC0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8023CCC4: jr          $ra
    // 0x8023CCC8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x8023CCC8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void D_8021C4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021C4DC: lbu         $v1, 0x10($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X10);
    // 0x8021C4E0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8021C4E4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021C4E8: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8021C4EC: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8021C4F0: lwc1        $f4, -0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, -0X4);
    // 0x8021C4F4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x8021C4F8: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x8021C4FC: nop

    // 0x8021C500: bc1f        L_8021C510
    if (!c1cs) {
        // 0x8021C504: nop
    
            goto L_8021C510;
    }
    // 0x8021C504: nop

    // 0x8021C508: jr          $ra
    // 0x8021C50C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    return;
    // 0x8021C50C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8021C510:
    // 0x8021C510: blez        $a1, L_8021C550
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021C514: andi        $a0, $v1, 0xFF
        ctx->r4 = ctx->r3 & 0XFF;
            goto L_8021C550;
    }
    // 0x8021C514: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8021C518: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8021C51C:
    // 0x8021C51C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8021C520: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8021C524: lwc1        $f6, -0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, -0X4);
    // 0x8021C528: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8021C52C: nop

    // 0x8021C530: bc1fl       L_8021C544
    if (!c1cs) {
        // 0x8021C534: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_8021C544;
    }
    goto skip_0;
    // 0x8021C534: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    skip_0:
    // 0x8021C538: jr          $ra
    // 0x8021C53C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8021C53C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021C540: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_8021C544:
    // 0x8021C544: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8021C548: bgtz        $v1, L_8021C51C
    if (SIGNED(ctx->r3) > 0) {
        // 0x8021C54C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8021C51C;
    }
    // 0x8021C54C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_8021C550:
    // 0x8021C550: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021C554: jr          $ra
    // 0x8021C558: nop

    return;
    // 0x8021C558: nop

;}
RECOMP_FUNC void D_80232E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80232E90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232E94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80232E98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232E9C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80232EA0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80232EA4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80232EA8: lw          $t6, 0x40($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X40);
    // 0x80232EAC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80232EB0: beql        $t6, $zero, L_80232F7C
    if (ctx->r14 == 0) {
        // 0x80232EB4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80232F7C;
    }
    goto skip_0;
    // 0x80232EB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80232EB8: lw          $t7, 0x44($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X44);
    // 0x80232EBC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80232EC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80232EC4: beq         $t7, $zero, L_80232EF0
    if (ctx->r15 == 0) {
        // 0x80232EC8: nop
    
            goto L_80232EF0;
    }
    // 0x80232EC8: nop

    // 0x80232ECC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80232ED0: lui         $t9, 0x106
    ctx->r25 = S32(0X106 << 16);
    // 0x80232ED4: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x80232ED8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80232EDC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80232EE0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80232EE4: lw          $t0, 0x44($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X44);
    // 0x80232EE8: b           L_80232F2C
    // 0x80232EEC: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
        goto L_80232F2C;
    // 0x80232EEC: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
L_80232EF0:
    // 0x80232EF0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80232EF4: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80232EF8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80232EFC: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80232F00: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x80232F04: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80232F08: addiu       $t1, $s0, 0x44
    ctx->r9 = ADD32(ctx->r16, 0X44);
    // 0x80232F0C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80232F10: sw          $t1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r9;
    // 0x80232F14: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80232F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80232F1C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80232F20: jal         0x80223108
    // 0x80232F24: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    static_3_80223108(rdram, ctx);
        goto after_0;
    // 0x80232F24: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_0:
    // 0x80232F28: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
L_80232F2C:
    // 0x80232F2C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x80232F30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80232F34: lhu         $a1, 0x32($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X32);
    // 0x80232F38: lhu         $t8, 0xC($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC);
    // 0x80232F3C: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x80232F40: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80232F44: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80232F48: lbu         $t9, 0x48($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X48);
    // 0x80232F4C: jal         0x80232FE0
    // 0x80232F50: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    static_3_80232FE0(rdram, ctx);
        goto after_1;
    // 0x80232F50: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x80232F54: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80232F58: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80232F5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80232F60: lhu         $a2, 0x32($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X32);
    // 0x80232F64: lhu         $a3, 0x36($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X36);
    // 0x80232F68: jal         0x8022EFE0
    // 0x80232F6C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    static_3_8022EFE0(rdram, ctx);
        goto after_2;
    // 0x80232F6C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_2:
    // 0x80232F70: jal         0x802230E4
    // 0x80232F74: nop

    static_3_802230E4(rdram, ctx);
        goto after_3;
    // 0x80232F74: nop

    after_3:
    // 0x80232F78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80232F7C:
    // 0x80232F7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80232F80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80232F84: jr          $ra
    // 0x80232F88: nop

    return;
    // 0x80232F88: nop

;}
RECOMP_FUNC void D_802ABECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ABF4C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802ABF50: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802ABF54: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802ABF58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802ABF5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ABF60: bne         $t6, $zero, L_802ABF70
    if (ctx->r14 != 0) {
        // 0x802ABF64: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_802ABF70;
    }
    // 0x802ABF64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802ABF68: b           L_802ABF74
    // 0x802ABF6C: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
        goto L_802ABF74;
    // 0x802ABF6C: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
L_802ABF70:
    // 0x802ABF70: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
L_802ABF74:
    // 0x802ABF74: jal         0x8021ACB0
    // 0x802ABF78: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802ABF78: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x802ABF7C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802ABF80: jal         0x8021B838
    // 0x802ABF84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802ABF84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802ABF88: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802ABF8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802ABF90: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802ABF94: jal         0x8021B240
    // 0x802ABF98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_2;
    // 0x802ABF98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x802ABF9C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802ABFA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ABFA4: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802ABFA8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802ABFAC: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x802ABFB0: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802ABFB4: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802ABFB8: lh          $t8, 0xB8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XB8);
    // 0x802ABFBC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802ABFC0: jalr        $t9
    // 0x802ABFC4: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802ABFC4: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_3:
    // 0x802ABFC8: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802ABFCC: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802ABFD0: jal         0x802FD4B0
    // 0x802ABFD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802FD4B0(rdram, ctx);
        goto after_4;
    // 0x802ABFD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x802ABFD8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABFDC: jal         0x802FD498
    // 0x802ABFE0: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_5;
    // 0x802ABFE0: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_5:
    // 0x802ABFE4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABFE8: jal         0x802FD4A4
    // 0x802ABFEC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_6;
    // 0x802ABFEC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_6:
    // 0x802ABFF0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ABFF4: jal         0x802FD480
    // 0x802ABFF8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_7;
    // 0x802ABFF8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_7:
    // 0x802ABFFC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AC000: jal         0x802FD48C
    // 0x802AC004: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_8;
    // 0x802AC004: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_8:
    // 0x802AC008: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x802AC00C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802AC010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AC014: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AC018: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AC01C: jal         0x80317194
    // 0x802AC020: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_9;
    // 0x802AC020: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_9:
    // 0x802AC024: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x802AC028: addiu       $t2, $zero, 0x22
    ctx->r10 = ADD32(0, 0X22);
    // 0x802AC02C: addiu       $t3, $zero, 0x17
    ctx->r11 = ADD32(0, 0X17);
    // 0x802AC030: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x802AC034: addiu       $t5, $zero, 0x15
    ctx->r13 = ADD32(0, 0X15);
    // 0x802AC038: sw          $t1, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r9;
    // 0x802AC03C: sw          $t2, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r10;
    // 0x802AC040: sw          $t3, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r11;
    // 0x802AC044: sw          $t4, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r12;
    // 0x802AC048: sw          $t5, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r13;
    // 0x802AC04C: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AC050: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AC054: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x802AC058: jal         0x802D51DC
    // 0x802AC05C: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_10;
    // 0x802AC05C: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    after_10:
    // 0x802AC060: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AC064: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AC068: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AC06C: jal         0x802C4A20
    // 0x802AC070: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_11;
    // 0x802AC070: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_11:
    // 0x802AC074: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AC078: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802AC07C: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AC080: jal         0x802C4A20
    // 0x802AC084: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802AC084: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802AC088: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AC08C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x802AC090: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802AC094: jal         0x802C4A20
    // 0x802AC098: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_13;
    // 0x802AC098: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_13:
    // 0x802AC09C: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AC0A0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802AC0A4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AC0A8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x802AC0AC: jal         0x802C4A20
    // 0x802AC0B0: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    static_3_802C4A20(rdram, ctx);
        goto after_14;
    // 0x802AC0B0: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    after_14:
    // 0x802AC0B4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AC0B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AC0BC: jal         0x802C5858
    // 0x802AC0C0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    static_3_802C5858(rdram, ctx);
        goto after_15;
    // 0x802AC0C0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_15:
    // 0x802AC0C4: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x802AC0C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AC0CC: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802AC0D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AC0D4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802AC0D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AC0DC: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x802AC0E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AC0E4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802AC0E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AC0EC: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802AC0F0: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x802AC0F4: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x802AC0F8: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x802AC0FC: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x802AC100: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
    // 0x802AC104: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
    // 0x802AC108: jal         0x8022970C
    // 0x802AC10C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x802AC10C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_16:
    // 0x802AC110: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802AC114: jal         0x8022970C
    // 0x802AC118: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_17;
    // 0x802AC118: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_17:
    // 0x802AC11C: lui         $a1, 0xC0EB
    ctx->r5 = S32(0XC0EB << 16);
    // 0x802AC120: lui         $a2, 0xC0AE
    ctx->r6 = S32(0XC0AE << 16);
    // 0x802AC124: lui         $a3, 0xBE30
    ctx->r7 = S32(0XBE30 << 16);
    // 0x802AC128: ori         $a3, $a3, 0x20C5
    ctx->r7 = ctx->r7 | 0X20C5;
    // 0x802AC12C: ori         $a2, $a2, 0x24DD
    ctx->r6 = ctx->r6 | 0X24DD;
    // 0x802AC130: ori         $a1, $a1, 0x6C8B
    ctx->r5 = ctx->r5 | 0X6C8B;
    // 0x802AC134: jal         0x8022A0D0
    // 0x802AC138: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8022A0D0(rdram, ctx);
        goto after_18;
    // 0x802AC138: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x802AC13C: lui         $a1, 0x40EB
    ctx->r5 = S32(0X40EB << 16);
    // 0x802AC140: lui         $a2, 0xC0AE
    ctx->r6 = S32(0XC0AE << 16);
    // 0x802AC144: lui         $a3, 0xBE30
    ctx->r7 = S32(0XBE30 << 16);
    // 0x802AC148: ori         $a3, $a3, 0x20C5
    ctx->r7 = ctx->r7 | 0X20C5;
    // 0x802AC14C: ori         $a2, $a2, 0x24DD
    ctx->r6 = ctx->r6 | 0X24DD;
    // 0x802AC150: ori         $a1, $a1, 0x6C8B
    ctx->r5 = ctx->r5 | 0X6C8B;
    // 0x802AC154: jal         0x8022A0D0
    // 0x802AC158: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_8022A0D0(rdram, ctx);
        goto after_19;
    // 0x802AC158: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_19:
    // 0x802AC15C: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802AC160: jal         0x803169A0
    // 0x802AC164: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_20;
    // 0x802AC164: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_20:
    // 0x802AC168: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802AC16C: jal         0x803169A0
    // 0x802AC170: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    static_3_803169A0(rdram, ctx);
        goto after_21;
    // 0x802AC170: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_21:
    // 0x802AC174: jal         0x802DD328
    // 0x802AC178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802DD328(rdram, ctx);
        goto after_22;
    // 0x802AC178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x802AC17C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AC180: sb          $t6, 0x968($s0)
    MEM_B(0X968, ctx->r16) = ctx->r14;
    // 0x802AC184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AC188: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AC18C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802AC190: jr          $ra
    // 0x802AC194: nop

    return;
    // 0x802AC194: nop

;}
RECOMP_FUNC void D_8023D370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D370: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023D378: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023D37C: jal         0x80245AD0
    // 0x8023D380: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8023D380: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8023D384: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023D388: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8023D38C: beq         $t6, $zero, L_8023D3C0
    if (ctx->r14 == 0) {
        // 0x8023D390: nop
    
            goto L_8023D3C0;
    }
    // 0x8023D390: nop

    // 0x8023D394: jal         0x8023ECC8
    // 0x8023D398: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8023ECC8(rdram, ctx);
        goto after_1;
    // 0x8023D398: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8023D39C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023D3A0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023D3A4: jal         0x802465B0
    // 0x8023D3A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802465B0(rdram, ctx);
        goto after_2;
    // 0x8023D3A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8023D3AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023D3B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023D3B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023D3B8: jal         0x802374B0
    // 0x8023D3BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_3;
    // 0x8023D3BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_8023D3C0:
    // 0x8023D3C0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023D3C4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023D3C8: jal         0x802465B0
    // 0x8023D3CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_4;
    // 0x8023D3CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8023D3D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023D3D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023D3D8: jal         0x80245B14
    // 0x8023D3DC: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    static_3_80245B14(rdram, ctx);
        goto after_5;
    // 0x8023D3DC: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    after_5:
    // 0x8023D3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023D3E4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D3E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023D3EC: jr          $ra
    // 0x8023D3F0: nop

    return;
    // 0x8023D3F0: nop

;}
RECOMP_FUNC void D_8027E770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E7E8: jr          $ra
    // 0x8027E7EC: addiu       $v0, $a0, 0x70F8
    ctx->r2 = ADD32(ctx->r4, 0X70F8);
    return;
    // 0x8027E7EC: addiu       $v0, $a0, 0x70F8
    ctx->r2 = ADD32(ctx->r4, 0X70F8);
;}
RECOMP_FUNC void D_802A227C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A22FC: jr          $ra
    // 0x802A2300: lh          $v0, 0xC4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC4);
    return;
    // 0x802A2300: lh          $v0, 0xC4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC4);
;}
RECOMP_FUNC void D_802056F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802056F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802056FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205700: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205704: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80205708: jal         0x80237F60
    // 0x8020570C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_80237F60(rdram, ctx);
        goto after_0;
    // 0x8020570C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x80205710: beq         $v0, $zero, L_80205740
    if (ctx->r2 == 0) {
        // 0x80205714: lwc1        $f6, 0x18($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
            goto L_80205740;
    }
    // 0x80205714: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80205718: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8020571C: ldc1        $f4, 0x0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X0);
    // 0x80205720: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80205724: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205728: div.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x8020572C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80205730: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80205734: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80205738: jal         0x80238AA0
    // 0x8020573C: nop

    static_3_80238AA0(rdram, ctx);
        goto after_1;
    // 0x8020573C: nop

    after_1:
L_80205740:
    // 0x80205740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80205744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205748: jr          $ra
    // 0x8020574C: nop

    return;
    // 0x8020574C: nop

;}
RECOMP_FUNC void D_802EF064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF0E4: sh          $zero, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = 0;
    // 0x802EF0E8: jr          $ra
    // 0x802EF0EC: sh          $zero, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = 0;
    return;
    // 0x802EF0EC: sh          $zero, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = 0;
;}
RECOMP_FUNC void D_80216874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80216874: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x80216878: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x8021687C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80216880: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80216884: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x80216888: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x8021688C: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x80216890: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x80216894: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x80216898: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x8021689C: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x802168A0: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x802168A4: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x802168A8: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x802168AC: sdc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X68, ctx->r29);
    // 0x802168B0: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x802168B4: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x802168B8: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x802168BC: swc1        $f12, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f12.u32l;
    // 0x802168C0: swc1        $f14, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f14.u32l;
    // 0x802168C4: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x802168C8: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x802168CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802168D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802168D4: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x802168D8: lw          $s7, 0x0($t1)
    ctx->r23 = MEM_W(ctx->r9, 0X0);
    // 0x802168DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802168E0: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x802168E4: lw          $fp, 0x8($s7)
    ctx->r30 = MEM_W(ctx->r23, 0X8);
    // 0x802168E8: mtc1        $a3, $f26
    ctx->f26.u32l = ctx->r7;
    // 0x802168EC: lbu         $t2, 0x4($fp)
    ctx->r10 = MEM_BU(ctx->r30, 0X4);
    // 0x802168F0: sh          $t2, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r10;
    // 0x802168F4: lwc1        $f6, 0x20($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X20);
    // 0x802168F8: jal         0x80228CE0
    // 0x802168FC: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    static_3_80228CE0(rdram, ctx);
        goto after_0;
    // 0x802168FC: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    after_0:
    // 0x80216900: lh          $v0, 0x106($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X106);
    // 0x80216904: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80216908: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8021690C: blez        $v0, L_80216B20
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80216910: lwc1        $f20, 0x11C($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0X11C);
            goto L_80216B20;
    }
    // 0x80216910: lwc1        $f20, 0x11C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x80216914: addiu       $s6, $sp, 0xA8
    ctx->r22 = ADD32(ctx->r29, 0XA8);
    // 0x80216918: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
    // 0x8021691C: lw          $t4, 0x1C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X1C);
L_80216920:
    // 0x80216920: sll         $s4, $s3, 3
    ctx->r20 = S32(ctx->r19 << 3);
    // 0x80216924: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80216928: lw          $t3, 0x0($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X0);
    // 0x8021692C: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x80216930: sllv        $t6, $t5, $s3
    ctx->r14 = S32(ctx->r13 << (ctx->r19 & 31));
    // 0x80216934: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x80216938: and         $t8, $t4, $t6
    ctx->r24 = ctx->r12 & ctx->r14;
    // 0x8021693C: bne         $t8, $zero, L_80216958
    if (ctx->r24 != 0) {
        // 0x80216940: addu        $s1, $t3, $s4
        ctx->r17 = ADD32(ctx->r11, ctx->r20);
            goto L_80216958;
    }
    // 0x80216940: addu        $s1, $t3, $s4
    ctx->r17 = ADD32(ctx->r11, ctx->r20);
    // 0x80216944: lbu         $t9, 0x7($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X7);
    // 0x80216948: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8021694C: andi        $t7, $t9, 0x1
    ctx->r15 = ctx->r25 & 0X1;
    // 0x80216950: beq         $t7, $zero, L_80216960
    if (ctx->r15 == 0) {
        // 0x80216954: nop
    
            goto L_80216960;
    }
    // 0x80216954: nop

L_80216958:
    // 0x80216958: b           L_80216960
    // 0x8021695C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80216960;
    // 0x8021695C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80216960:
    // 0x80216960: bne         $s0, $zero, L_80216978
    if (ctx->r16 != 0) {
        // 0x80216964: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80216978;
    }
    // 0x80216964: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80216968: lbu         $t0, 0x7($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X7);
    // 0x8021696C: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x80216970: bnel        $t1, $zero, L_80216B08
    if (ctx->r9 != 0) {
        // 0x80216974: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80216B08;
    }
    goto skip_0;
    // 0x80216974: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
L_80216978:
    // 0x80216978: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x8021697C: sll         $t3, $s3, 6
    ctx->r11 = S32(ctx->r19 << 6);
    // 0x80216980: or          $t8, $sp, $zero
    ctx->r24 = ctx->r29 | 0;
    // 0x80216984: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x80216988: addiu       $t6, $t5, 0x3C
    ctx->r14 = ADD32(ctx->r13, 0X3C);
L_8021698C:
    // 0x8021698C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80216990: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x80216994: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80216998: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x8021699C: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x802169A0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x802169A4: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x802169A8: bne         $t5, $t6, L_8021698C
    if (ctx->r13 != ctx->r14) {
        // 0x802169AC: sw          $at, 0x4($t8)
        MEM_W(0X4, ctx->r24) = ctx->r1;
            goto L_8021698C;
    }
    // 0x802169AC: sw          $at, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r1;
    // 0x802169B0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x802169B4: addiu       $s5, $v0, -0x1
    ctx->r21 = ADD32(ctx->r2, -0X1);
    // 0x802169B8: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x802169BC: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x802169C0: jal         0x80228F38
    // 0x802169C4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    static_3_80228F38(rdram, ctx);
        goto after_1;
    // 0x802169C4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_1:
    // 0x802169C8: bne         $s3, $zero, L_80216A18
    if (ctx->r19 != 0) {
        // 0x802169CC: lwc1        $f10, 0xD8($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_80216A18;
    }
    // 0x802169CC: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802169D0: lwc1        $f8, 0x20($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X20);
    // 0x802169D4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802169D8: div.s       $f0, $f8, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x802169DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802169E0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802169E4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802169E8: jal         0x8022A210
    // 0x802169EC: nop

    static_3_8022A210(rdram, ctx);
        goto after_2;
    // 0x802169EC: nop

    after_2:
    // 0x802169F0: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802169F4: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802169F8: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802169FC: div.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80216A00: div.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80216A04: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    // 0x80216A08: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80216A0C: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x80216A10: b           L_80216A3C
    // 0x80216A14: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
        goto L_80216A3C;
    // 0x80216A14: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
L_80216A18:
    // 0x80216A18: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80216A1C: lwc1        $f18, 0xDC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80216A20: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80216A24: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x80216A28: nop

    // 0x80216A2C: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80216A30: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    // 0x80216A34: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x80216A38: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
L_80216A3C:
    // 0x80216A3C: jal         0x80228D0C
    // 0x80216A40: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    static_3_80228D0C(rdram, ctx);
        goto after_3;
    // 0x80216A40: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x80216A44: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80216A48: sll         $t9, $s2, 16
    ctx->r25 = S32(ctx->r18 << 16);
    // 0x80216A4C: beq         $s0, $zero, L_80216A9C
    if (ctx->r16 == 0) {
        // 0x80216A50: sra         $s2, $t9, 16
        ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80216A9C;
    }
    // 0x80216A50: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80216A54: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80216A58: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80216A5C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80216A60: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80216A64: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80216A68: sll         $t2, $s3, 24
    ctx->r10 = S32(ctx->r19 << 24);
    // 0x80216A6C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80216A70: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80216A74: jal         0x80228CF0
    // 0x80216A78: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    static_3_80228CF0(rdram, ctx);
        goto after_4;
    // 0x80216A78: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    after_4:
    // 0x80216A7C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80216A80: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x80216A84: lwc1        $f12, 0x108($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80216A88: lwc1        $f14, 0x10C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x80216A8C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80216A90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80216A94: jal         0x80217940
    // 0x80216A98: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    static_3_80217940(rdram, ctx);
        goto after_5;
    // 0x80216A98: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_5:
L_80216A9C:
    // 0x80216A9C: bnel        $s3, $s5, L_80216AB0
    if (ctx->r19 != ctx->r21) {
        // 0x80216AA0: lw          $t4, 0x0($fp)
        ctx->r12 = MEM_W(ctx->r30, 0X0);
            goto L_80216AB0;
    }
    goto skip_1;
    // 0x80216AA0: lw          $t4, 0x0($fp)
    ctx->r12 = MEM_W(ctx->r30, 0X0);
    skip_1:
    // 0x80216AA4: b           L_80216B20
    // 0x80216AA8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_80216B20;
    // 0x80216AA8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216AAC: lw          $t4, 0x0($fp)
    ctx->r12 = MEM_W(ctx->r30, 0X0);
L_80216AB0:
    // 0x80216AB0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80216AB4: addu        $v0, $t4, $s4
    ctx->r2 = ADD32(ctx->r12, ctx->r20);
    // 0x80216AB8: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x80216ABC: lbu         $t5, 0x2A($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2A);
    // 0x80216AC0: subu        $s1, $t6, $t5
    ctx->r17 = SUB32(ctx->r14, ctx->r13);
    // 0x80216AC4: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x80216AC8: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80216ACC: bltzl       $s1, L_80216B00
    if (SIGNED(ctx->r17) < 0) {
        // 0x80216AD0: lw          $v1, 0x118($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X118);
            goto L_80216B00;
    }
    goto skip_2;
    // 0x80216AD0: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
    skip_2:
L_80216AD4:
    // 0x80216AD4: jal         0x80228D9C
    // 0x80216AD8: nop

    static_3_80228D9C(rdram, ctx);
        goto after_6;
    // 0x80216AD8: nop

    after_6:
    // 0x80216ADC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80216AE0: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x80216AE4: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80216AE8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80216AEC: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80216AF0: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80216AF4: beq         $at, $zero, L_80216AD4
    if (ctx->r1 == 0) {
        // 0x80216AF8: sra         $s2, $t7, 16
        ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
            goto L_80216AD4;
    }
    // 0x80216AF8: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80216AFC: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
L_80216B00:
    // 0x80216B00: lh          $v0, 0x106($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X106);
    // 0x80216B04: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80216B08:
    // 0x80216B08: sll         $t3, $s3, 16
    ctx->r11 = S32(ctx->r19 << 16);
    // 0x80216B0C: sra         $s3, $t3, 16
    ctx->r19 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80216B10: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80216B14: bnel        $at, $zero, L_80216920
    if (ctx->r1 != 0) {
        // 0x80216B18: lw          $t4, 0x1C($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X1C);
            goto L_80216920;
    }
    goto skip_3;
    // 0x80216B18: lw          $t4, 0x1C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X1C);
    skip_3:
    // 0x80216B1C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80216B20:
    // 0x80216B20: blezl       $s2, L_80216B4C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80216B24: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_80216B4C;
    }
    goto skip_4;
    // 0x80216B24: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_4:
L_80216B28:
    // 0x80216B28: jal         0x80228D9C
    // 0x80216B2C: nop

    static_3_80228D9C(rdram, ctx);
        goto after_7;
    // 0x80216B2C: nop

    after_7:
    // 0x80216B30: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80216B34: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80216B38: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80216B3C: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80216B40: bne         $at, $zero, L_80216B28
    if (ctx->r1 != 0) {
        // 0x80216B44: nop
    
            goto L_80216B28;
    }
    // 0x80216B44: nop

    // 0x80216B48: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
L_80216B4C:
    // 0x80216B4C: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x80216B50: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x80216B54: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x80216B58: ldc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X68);
    // 0x80216B5C: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80216B60: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80216B64: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80216B68: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80216B6C: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x80216B70: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x80216B74: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x80216B78: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x80216B7C: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x80216B80: jr          $ra
    // 0x80216B84: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x80216B84: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void D_802A2194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A2218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A221C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A2220: addiu       $a2, $a0, 0x2C
    ctx->r6 = ADD32(ctx->r4, 0X2C);
    // 0x802A2224: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A2228: jal         0x80228DE0
    // 0x802A222C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802A222C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x802A2230: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802A2234: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802A2238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A223C: jal         0x8021B4B0
    // 0x802A2240: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    static_3_8021B4B0(rdram, ctx);
        goto after_1;
    // 0x802A2240: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_1:
    // 0x802A2244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A2248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A224C: jr          $ra
    // 0x802A2250: nop

    return;
    // 0x802A2250: nop

;}
