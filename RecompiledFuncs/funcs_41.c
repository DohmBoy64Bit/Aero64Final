#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_8029BD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029BDA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029BDA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029BDA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029BDAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8029BDB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029BDB4: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x8029BDB8: jal         0x802CBA18
    // 0x8029BDBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802CBA18(rdram, ctx);
        goto after_0;
    // 0x8029BDBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8029BDC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029BDC4: jal         0x80223FC4
    // 0x8029BDC8: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_1;
    // 0x8029BDC8: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_1:
    // 0x8029BDCC: bne         $v0, $zero, L_8029BDE4
    if (ctx->r2 != 0) {
        // 0x8029BDD0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8029BDE4;
    }
    // 0x8029BDD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029BDD4: jal         0x80223FC4
    // 0x8029BDD8: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    static_3_80223FC4(rdram, ctx);
        goto after_2;
    // 0x8029BDD8: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_2:
    // 0x8029BDDC: beq         $v0, $zero, L_8029BE74
    if (ctx->r2 == 0) {
        // 0x8029BDE0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8029BE74;
    }
    // 0x8029BDE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8029BDE4:
    // 0x8029BDE4: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x8029BDE8: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x8029BDEC: bnel        $v0, $zero, L_8029BE54
    if (ctx->r2 != 0) {
        // 0x8029BDF0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8029BE54;
    }
    goto skip_0;
    // 0x8029BDF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x8029BDF4: jal         0x8030BF98
    // 0x8029BDF8: nop

    static_3_8030BF98(rdram, ctx);
        goto after_3;
    // 0x8029BDF8: nop

    after_3:
    // 0x8029BDFC: jal         0x8030C020
    // 0x8029BE00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8030C020(rdram, ctx);
        goto after_4;
    // 0x8029BE00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8029BE04: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8029BE08: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8029BE0C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x8029BE10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029BE14: beq         $t8, $zero, L_8029BE2C
    if (ctx->r24 == 0) {
        // 0x8029BE18: nop
    
            goto L_8029BE2C;
    }
    // 0x8029BE18: nop

    // 0x8029BE1C: jal         0x802CA380
    // 0x8029BE20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA380(rdram, ctx);
        goto after_5;
    // 0x8029BE20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8029BE24: b           L_8029BE4C
    // 0x8029BE28: lw          $t0, 0x28($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X28);
        goto L_8029BE4C;
    // 0x8029BE28: lw          $t0, 0x28($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X28);
L_8029BE2C:
    // 0x8029BE2C: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x8029BE30: jal         0x802B18BC
    // 0x8029BE34: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_6;
    // 0x8029BE34: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_6:
    // 0x8029BE38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029BE3C: jal         0x802CD274
    // 0x8029BE40: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    static_3_802CD274(rdram, ctx);
        goto after_7;
    // 0x8029BE40: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x8029BE44: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x8029BE48: lw          $t0, 0x28($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X28);
L_8029BE4C:
    // 0x8029BE4C: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x8029BE50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8029BE54:
    // 0x8029BE54: bne         $v0, $at, L_8029BE64
    if (ctx->r2 != ctx->r1) {
        // 0x8029BE58: nop
    
            goto L_8029BE64;
    }
    // 0x8029BE58: nop

    // 0x8029BE5C: jal         0x802CA14C
    // 0x8029BE60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA14C(rdram, ctx);
        goto after_8;
    // 0x8029BE60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_8029BE64:
    // 0x8029BE64: jal         0x802B18BC
    // 0x8029BE68: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_9;
    // 0x8029BE68: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_9:
    // 0x8029BE6C: b           L_8029BE98
    // 0x8029BE70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8029BE98;
    // 0x8029BE70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029BE74:
    // 0x8029BE74: jal         0x80223FC4
    // 0x8029BE78: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    static_3_80223FC4(rdram, ctx);
        goto after_10;
    // 0x8029BE78: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_10:
    // 0x8029BE7C: beql        $v0, $zero, L_8029BE98
    if (ctx->r2 == 0) {
        // 0x8029BE80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8029BE98;
    }
    goto skip_1;
    // 0x8029BE80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8029BE84: jal         0x802B18BC
    // 0x8029BE88: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_11;
    // 0x8029BE88: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_11:
    // 0x8029BE8C: jal         0x802CA14C
    // 0x8029BE90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA14C(rdram, ctx);
        goto after_12;
    // 0x8029BE90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8029BE94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029BE98:
    // 0x8029BE98: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x8029BE9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029BEA0: jr          $ra
    // 0x8029BEA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8029BEA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802D8030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D80B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D80B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D80B8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D80BC: jr          $ra
    // 0x802D80C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802D80C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void D_802D8020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D80A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D80A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D80A8: jr          $ra
    // 0x802D80AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802D80AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802A755C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A75DC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802A75E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A75E4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802A75E8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802A75EC: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802A75F0: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x802A75F4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802A75F8: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x802A75FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A7600: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x802A7604: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802A7608: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802A760C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802A7610: nop

    // 0x802A7614: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802A7618: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802A761C: nop

    // 0x802A7620: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802A7624: beql        $t9, $zero, L_802A7674
    if (ctx->r25 == 0) {
        // 0x802A7628: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_802A7674;
    }
    goto skip_0;
    // 0x802A7628: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x802A762C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A7630: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802A7634: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802A7638: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802A763C: nop

    // 0x802A7640: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802A7644: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802A7648: nop

    // 0x802A764C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x802A7650: bne         $t9, $zero, L_802A7668
    if (ctx->r25 != 0) {
        // 0x802A7654: nop
    
            goto L_802A7668;
    }
    // 0x802A7654: nop

    // 0x802A7658: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x802A765C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802A7660: b           L_802A7680
    // 0x802A7664: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_802A7680;
    // 0x802A7664: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_802A7668:
    // 0x802A7668: b           L_802A7680
    // 0x802A766C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_802A7680;
    // 0x802A766C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x802A7670: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_802A7674:
    // 0x802A7674: nop

    // 0x802A7678: bltz        $t9, L_802A7668
    if (SIGNED(ctx->r25) < 0) {
        // 0x802A767C: nop
    
            goto L_802A7668;
    }
    // 0x802A767C: nop

L_802A7680:
    // 0x802A7680: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802A7684: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802A7688: sb          $t9, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r25;
    // 0x802A768C: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x802A7690: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802A7694: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x802A7698: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802A769C: nop

    // 0x802A76A0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802A76A4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802A76A8: nop

    // 0x802A76AC: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x802A76B0: beql        $t1, $zero, L_802A7700
    if (ctx->r9 == 0) {
        // 0x802A76B4: mfc1        $t1, $f10
        ctx->r9 = (int32_t)ctx->f10.u32l;
            goto L_802A7700;
    }
    goto skip_1;
    // 0x802A76B4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x802A76B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A76BC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802A76C0: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802A76C4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802A76C8: nop

    // 0x802A76CC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802A76D0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802A76D4: nop

    // 0x802A76D8: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x802A76DC: bne         $t1, $zero, L_802A76F4
    if (ctx->r9 != 0) {
        // 0x802A76E0: nop
    
            goto L_802A76F4;
    }
    // 0x802A76E0: nop

    // 0x802A76E4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x802A76E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802A76EC: b           L_802A770C
    // 0x802A76F0: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_802A770C;
    // 0x802A76F0: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_802A76F4:
    // 0x802A76F4: b           L_802A770C
    // 0x802A76F8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_802A770C;
    // 0x802A76F8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x802A76FC: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
L_802A7700:
    // 0x802A7700: nop

    // 0x802A7704: bltz        $t1, L_802A76F4
    if (SIGNED(ctx->r9) < 0) {
        // 0x802A7708: nop
    
            goto L_802A76F4;
    }
    // 0x802A7708: nop

L_802A770C:
    // 0x802A770C: sb          $t1, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r9;
    // 0x802A7710: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x802A7714: lwc1        $f16, 0x10($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802A7718: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802A771C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802A7720: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802A7724: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802A7728: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802A772C: nop

    // 0x802A7730: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802A7734: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802A7738: nop

    // 0x802A773C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x802A7740: beql        $t3, $zero, L_802A7790
    if (ctx->r11 == 0) {
        // 0x802A7744: mfc1        $t3, $f4
        ctx->r11 = (int32_t)ctx->f4.u32l;
            goto L_802A7790;
    }
    goto skip_2;
    // 0x802A7744: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x802A7748: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A774C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802A7750: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802A7754: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802A7758: nop

    // 0x802A775C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802A7760: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802A7764: nop

    // 0x802A7768: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x802A776C: bne         $t3, $zero, L_802A7784
    if (ctx->r11 != 0) {
        // 0x802A7770: nop
    
            goto L_802A7784;
    }
    // 0x802A7770: nop

    // 0x802A7774: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x802A7778: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802A777C: b           L_802A779C
    // 0x802A7780: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_802A779C;
    // 0x802A7780: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_802A7784:
    // 0x802A7784: b           L_802A779C
    // 0x802A7788: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_802A779C;
    // 0x802A7788: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x802A778C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
L_802A7790:
    // 0x802A7790: nop

    // 0x802A7794: bltz        $t3, L_802A7784
    if (SIGNED(ctx->r11) < 0) {
        // 0x802A7798: nop
    
            goto L_802A7784;
    }
    // 0x802A7798: nop

L_802A779C:
    // 0x802A779C: sb          $t3, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r11;
    // 0x802A77A0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802A77A4: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802A77A8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802A77AC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802A77B0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A77B4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802A77B8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802A77BC: nop

    // 0x802A77C0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802A77C4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802A77C8: nop

    // 0x802A77CC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802A77D0: beql        $t5, $zero, L_802A7820
    if (ctx->r13 == 0) {
        // 0x802A77D4: mfc1        $t5, $f10
        ctx->r13 = (int32_t)ctx->f10.u32l;
            goto L_802A7820;
    }
    goto skip_3;
    // 0x802A77D4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x802A77D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A77DC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802A77E0: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802A77E4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802A77E8: nop

    // 0x802A77EC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802A77F0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802A77F4: nop

    // 0x802A77F8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802A77FC: bne         $t5, $zero, L_802A7814
    if (ctx->r13 != 0) {
        // 0x802A7800: nop
    
            goto L_802A7814;
    }
    // 0x802A7800: nop

    // 0x802A7804: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x802A7808: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802A780C: b           L_802A782C
    // 0x802A7810: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_802A782C;
    // 0x802A7810: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_802A7814:
    // 0x802A7814: b           L_802A782C
    // 0x802A7818: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_802A782C;
    // 0x802A7818: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x802A781C: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
L_802A7820:
    // 0x802A7820: nop

    // 0x802A7824: bltz        $t5, L_802A7814
    if (SIGNED(ctx->r13) < 0) {
        // 0x802A7828: nop
    
            goto L_802A7814;
    }
    // 0x802A7828: nop

L_802A782C:
    // 0x802A782C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802A7830: jr          $ra
    // 0x802A7834: sb          $t5, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r13;
    return;
    // 0x802A7834: sb          $t5, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r13;
;}
RECOMP_FUNC void D_802E805C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E80DC: jr          $ra
    // 0x802E80E0: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    return;
    // 0x802E80E0: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
;}
RECOMP_FUNC void D_802B86B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B8738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B873C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B8740: lh          $t6, 0x80($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X80);
    // 0x802B8744: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B8748: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802B874C: bnel        $t6, $at, L_802B877C
    if (ctx->r14 != ctx->r1) {
        // 0x802B8750: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_802B877C;
    }
    goto skip_0;
    // 0x802B8750: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_0:
    // 0x802B8754: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x802B8758: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802B875C: beql        $a0, $at, L_802B877C
    if (ctx->r4 == ctx->r1) {
        // 0x802B8760: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_802B877C;
    }
    goto skip_1;
    // 0x802B8760: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_1:
    // 0x802B8764: jal         0x8021BAE0
    // 0x802B8768: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802B8768: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802B876C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802B8770: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x802B8774: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x802B8778: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_802B877C:
    // 0x802B877C: jal         0x80320D7C
    // 0x802B8780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320D7C(rdram, ctx);
        goto after_1;
    // 0x802B8780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802B8784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B8788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B878C: jr          $ra
    // 0x802B8790: nop

    return;
    // 0x802B8790: nop

;}
RECOMP_FUNC void D_802A1EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F38: jr          $ra
    // 0x802A1F3C: lwc1        $f0, 0x8C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8C);
    return;
    // 0x802A1F3C: lwc1        $f0, 0x8C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8C);
;}
RECOMP_FUNC void D_8022CE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CE18: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022CE1C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022CE20: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022CE24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CE28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CE2C: bne         $v0, $zero, L_8022CE48
    if (ctx->r2 != 0) {
        // 0x8022CE30: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_8022CE48;
    }
    // 0x8022CE30: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CE34: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CE38: jal         0x80231A24
    // 0x8022CE3C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022CE3C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022CE40: b           L_8022CF50
    // 0x8022CE44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022CF50;
    // 0x8022CE44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022CE48:
    // 0x8022CE48: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022CE4C: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x8022CE50: bne         $v0, $at, L_8022CE68
    if (ctx->r2 != ctx->r1) {
        // 0x8022CE54: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_8022CE68;
    }
    // 0x8022CE54: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022CE58: jal         0x8022C584
    // 0x8022CE5C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    static_3_8022C584(rdram, ctx);
        goto after_1;
    // 0x8022CE5C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    after_1:
    // 0x8022CE60: b           L_8022CF50
    // 0x8022CE64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022CF50;
    // 0x8022CE64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022CE68:
    // 0x8022CE68: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8022CE6C: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8022CE70: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022CE74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CE78: beq         $t6, $zero, L_8022CF18
    if (ctx->r14 == 0) {
        // 0x8022CE7C: nop
    
            goto L_8022CF18;
    }
    // 0x8022CE7C: nop

    // 0x8022CE80: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x8022CE84: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CE88: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8022CE8C: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8022CE90: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8022CE94: jal         0x8023E030
    // 0x8022CE98: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_8023E030(rdram, ctx);
        goto after_2;
    // 0x8022CE98: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_2:
    // 0x8022CE9C: beq         $v0, $zero, L_8022CEE8
    if (ctx->r2 == 0) {
        // 0x8022CEA0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8022CEE8;
    }
    // 0x8022CEA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CEA4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022CEA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CEAC: sb          $t9, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r25;
    // 0x8022CEB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CEB4: jal         0x8022D560
    // 0x8022CEB8: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    static_3_8022D560(rdram, ctx);
        goto after_3;
    // 0x8022CEB8: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    after_3:
    // 0x8022CEBC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8022CEC0: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8022CEC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CEC8: beq         $t0, $zero, L_8022CEF0
    if (ctx->r8 == 0) {
        // 0x8022CECC: nop
    
            goto L_8022CEF0;
    }
    // 0x8022CECC: nop

    // 0x8022CED0: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022CED4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CED8: jal         0x8022C6A4
    // 0x8022CEDC: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    static_3_8022C6A4(rdram, ctx);
        goto after_4;
    // 0x8022CEDC: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    after_4:
    // 0x8022CEE0: b           L_8022CF50
    // 0x8022CEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022CF50;
    // 0x8022CEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022CEE8:
    // 0x8022CEE8: jal         0x8022D560
    // 0x8022CEEC: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    static_3_8022D560(rdram, ctx);
        goto after_5;
    // 0x8022CEEC: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    after_5:
L_8022CEF0:
    // 0x8022CEF0: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8022CEF4: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x8022CEF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CEFC: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022CF00: beq         $t1, $zero, L_8022CF20
    if (ctx->r9 == 0) {
        // 0x8022CF04: nop
    
            goto L_8022CF20;
    }
    // 0x8022CF04: nop

    // 0x8022CF08: jal         0x8022C620
    // 0x8022CF0C: nop

    static_3_8022C620(rdram, ctx);
        goto after_6;
    // 0x8022CF0C: nop

    after_6:
    // 0x8022CF10: b           L_8022CF20
    // 0x8022CF14: nop

        goto L_8022CF20;
    // 0x8022CF14: nop

L_8022CF18:
    // 0x8022CF18: jal         0x8022D560
    // 0x8022CF1C: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    static_3_8022D560(rdram, ctx);
        goto after_7;
    // 0x8022CF1C: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    after_7:
L_8022CF20:
    // 0x8022CF20: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8022CF24: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x8022CF28: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x8022CF2C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8022CF30: beql        $t2, $at, L_8022CF50
    if (ctx->r10 == ctx->r1) {
        // 0x8022CF34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022CF50;
    }
    goto skip_0;
    // 0x8022CF34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022CF38: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x8022CF3C: bnel        $t3, $zero, L_8022CF50
    if (ctx->r11 != 0) {
        // 0x8022CF40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022CF50;
    }
    goto skip_1;
    // 0x8022CF40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8022CF44: jal         0x8022C480
    // 0x8022CF48: nop

    static_3_8022C480(rdram, ctx);
        goto after_8;
    // 0x8022CF48: nop

    after_8:
    // 0x8022CF4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022CF50:
    // 0x8022CF50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022CF54: jr          $ra
    // 0x8022CF58: nop

    return;
    // 0x8022CF58: nop

;}
RECOMP_FUNC void D_802370D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802370D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802370D4: beql        $v0, $zero, L_802370E8
    if (ctx->r2 == 0) {
        // 0x802370D8: lw          $v0, 0x4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X4);
            goto L_802370E8;
    }
    goto skip_0;
    // 0x802370D8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    skip_0:
    // 0x802370DC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x802370E0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802370E4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
L_802370E8:
    // 0x802370E8: beq         $v0, $zero, L_802370F8
    if (ctx->r2 == 0) {
        // 0x802370EC: nop
    
            goto L_802370F8;
    }
    // 0x802370EC: nop

    // 0x802370F0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x802370F4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_802370F8:
    // 0x802370F8: jr          $ra
    // 0x802370FC: nop

    return;
    // 0x802370FC: nop

;}
RECOMP_FUNC void D_802A363C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A36BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A36C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802A36C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A36C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A36CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802A36D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A36D4: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802A36D8: addiu       $s1, $a0, 0x2C
    ctx->r17 = ADD32(ctx->r4, 0X2C);
    // 0x802A36DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802A36E0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x802A36E4: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802A36E8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802A36EC: jal         0x802D01D4
    // 0x802A36F0: nop

    static_3_802D01D4(rdram, ctx);
        goto after_0;
    // 0x802A36F0: nop

    after_0:
    // 0x802A36F4: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A36F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802A36FC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802A3700: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802A3704: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802A3708: jal         0x802D01D4
    // 0x802A370C: nop

    static_3_802D01D4(rdram, ctx);
        goto after_1;
    // 0x802A370C: nop

    after_1:
    // 0x802A3710: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802A3714: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802A3718: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A371C: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x802A3720: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802A3724: jal         0x802D01D4
    // 0x802A3728: nop

    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802A3728: nop

    after_2:
    // 0x802A372C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A3730: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3734: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A3738: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802A373C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A3740: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A3744: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A3748: jal         0x802D01D4
    // 0x802A374C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_3;
    // 0x802A374C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x802A3750: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802A3754: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x802A3758: jal         0x802D01D4
    // 0x802A375C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x802A375C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_4:
    // 0x802A3760: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802A3764: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x802A3768: jal         0x802D01D4
    // 0x802A376C: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802A376C: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_5:
    // 0x802A3770: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A3774: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802A3778: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802A377C: jr          $ra
    // 0x802A3780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802A3780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8027E608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E688: lw          $v1, 0x65FC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X65FC);
    // 0x8027E68C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027E690: beq         $v1, $zero, L_8027E6A0
    if (ctx->r3 == 0) {
        // 0x8027E694: nop
    
            goto L_8027E6A0;
    }
    // 0x8027E694: nop

    // 0x8027E698: b           L_8027E6AC
    // 0x8027E69C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8027E6AC;
    // 0x8027E69C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8027E6A0:
    // 0x8027E6A0: jal         0x80231A24
    // 0x8027E6A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8027E6A4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8027E6A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8027E6AC:
    // 0x8027E6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E6B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E6B4: jr          $ra
    // 0x8027E6B8: nop

    return;
    // 0x8027E6B8: nop

;}
RECOMP_FUNC void D_8023D208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D208: lh          $t7, 0x12($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X12);
    // 0x8023D20C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D210: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D214: ld          $t6, 0x8($sp)
    ctx->r14 = LD(ctx->r29, 0X8);
    // 0x8023D218: or          $t8, $t7, $zero
    ctx->r24 = ctx->r15 | 0;
    // 0x8023D21C: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x8023D220: ddivu       $zero, $t6, $t9
    DDIVU(U64(ctx->r14), U64(ctx->r25), &lo, &hi);
    // 0x8023D224: bne         $t9, $zero, L_8023D230
    if (ctx->r25 != 0) {
        // 0x8023D228: nop
    
            goto L_8023D230;
    }
    // 0x8023D228: nop

    // 0x8023D22C: break       7
    do_break(2149831212);
L_8023D230:
    // 0x8023D230: mflo        $t0
    ctx->r8 = lo;
    // 0x8023D234: sd          $t0, 0x0($a0)
    SD(ctx->r8, 0X0, ctx->r4);
    // 0x8023D238: lh          $t2, 0x12($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X12);
    // 0x8023D23C: ld          $t1, 0x8($sp)
    ctx->r9 = LD(ctx->r29, 0X8);
    // 0x8023D240: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
    // 0x8023D244: or          $t4, $t3, $zero
    ctx->r12 = ctx->r11 | 0;
    // 0x8023D248: ddivu       $zero, $t1, $t4
    DDIVU(U64(ctx->r9), U64(ctx->r12), &lo, &hi);
    // 0x8023D24C: bne         $t4, $zero, L_8023D258
    if (ctx->r12 != 0) {
        // 0x8023D250: nop
    
            goto L_8023D258;
    }
    // 0x8023D250: nop

    // 0x8023D254: break       7
    do_break(2149831252);
L_8023D258:
    // 0x8023D258: mfhi        $t5
    ctx->r13 = hi;
    // 0x8023D25C: sd          $t5, 0x0($a1)
    SD(ctx->r13, 0X0, ctx->r5);
    // 0x8023D260: jr          $ra
    // 0x8023D264: nop

    return;
    // 0x8023D264: nop

;}
RECOMP_FUNC void D_802ED114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED19C: beq         $a0, $zero, L_802ED1CC
    if (ctx->r4 == 0) {
        // 0x802ED1A0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ED1CC;
    }
    // 0x802ED1A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ED1A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ED1A8: jal         0x8031C514
    // 0x802ED1AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ED1AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ED1B0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ED1B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED1B8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ED1BC: beql        $t7, $zero, L_802ED1D0
    if (ctx->r15 == 0) {
        // 0x802ED1C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ED1D0;
    }
    goto skip_0;
    // 0x802ED1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ED1C4: jal         0x802C681C
    // 0x802ED1C8: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ED1C8: nop

    after_1:
L_802ED1CC:
    // 0x802ED1CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ED1D0:
    // 0x802ED1D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED1D4: jr          $ra
    // 0x802ED1D8: nop

    return;
    // 0x802ED1D8: nop

;}
RECOMP_FUNC void D_802A204C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A20CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A20D0: jr          $ra
    // 0x802A20D4: swc1        $f12, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802A20D4: swc1        $f12, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802E69A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6A28: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E6A2C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E6A30: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802E6A34: jr          $ra
    // 0x802E6A38: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    return;
    // 0x802E6A38: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void D_80223578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223578: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022357C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80223580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80223584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223588: beql        $t6, $zero, L_802235A4
    if (ctx->r14 == 0) {
        // 0x8022358C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802235A4;
    }
    goto skip_0;
    // 0x8022358C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80223590: jal         0x80230F68
    // 0x80223594: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80230F68(rdram, ctx);
        goto after_0;
    // 0x80223594: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x80223598: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022359C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802235A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802235A4:
    // 0x802235A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802235A8: jr          $ra
    // 0x802235AC: nop

    return;
    // 0x802235AC: nop

;}
RECOMP_FUNC void D_802E80A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8120: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E8124: jr          $ra
    // 0x802E8128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802E8128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_8028F04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028F0CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8028F0D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8028F0D4: jr          $ra
    // 0x8028F0D8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x8028F0D8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80242E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242E44: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80242E48: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80242E4C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80242E50: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80242E54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80242E58: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80242E5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80242E60: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80242E64: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80242E68: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80242E6C: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x80242E70: bne         $a2, $zero, L_80242E80
    if (ctx->r6 != 0) {
        // 0x80242E74: or          $t1, $t0, $zero
        ctx->r9 = ctx->r8 | 0;
            goto L_80242E80;
    }
    // 0x80242E74: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x80242E78: b           L_802431D4
    // 0x80242E7C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_802431D4;
    // 0x80242E7C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80242E80:
    // 0x80242E80: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80242E84: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80242E88: addu        $t6, $v0, $s3
    ctx->r14 = ADD32(ctx->r2, ctx->r19);
    // 0x80242E8C: sltu        $at, $v1, $t6
    ctx->r1 = ctx->r3 < ctx->r14 ? 1 : 0;
    // 0x80242E90: beql        $at, $zero, L_802430A4
    if (ctx->r1 == 0) {
        // 0x80242E94: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_802430A4;
    }
    goto skip_0;
    // 0x80242E94: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_0:
    // 0x80242E98: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80242E9C: subu        $s2, $v1, $v0
    ctx->r18 = SUB32(ctx->r3, ctx->r2);
    // 0x80242EA0: beql        $t7, $zero, L_802430A4
    if (ctx->r15 == 0) {
        // 0x80242EA4: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_802430A4;
    }
    goto skip_1;
    // 0x80242EA4: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_1:
    // 0x80242EA8: blez        $s2, L_80242F24
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80242EAC: sll         $s1, $s2, 1
        ctx->r17 = S32(ctx->r18 << 1);
            goto L_80242F24;
    }
    // 0x80242EAC: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x80242EB0: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80242EB4: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80242EB8: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x80242EBC: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80242EC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80242EC4: jalr        $t9
    // 0x80242EC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80242EC8: nop

    after_0:
    // 0x80242ECC: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80242ED0: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x80242ED4: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80242ED8: lh          $t8, 0x0($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X0);
    // 0x80242EDC: addu        $a3, $s1, $a2
    ctx->r7 = ADD32(ctx->r17, ctx->r6);
    // 0x80242EE0: andi        $t5, $a3, 0x7
    ctx->r13 = ctx->r7 & 0X7;
    // 0x80242EE4: subu        $t6, $a3, $t5
    ctx->r14 = SUB32(ctx->r7, ctx->r13);
    // 0x80242EE8: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80242EEC: andi        $t3, $t8, 0xFFFF
    ctx->r11 = ctx->r24 & 0XFFFF;
    // 0x80242EF0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80242EF4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80242EF8: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80242EFC: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80242F00: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80242F04: subu        $t3, $v0, $a2
    ctx->r11 = SUB32(ctx->r2, ctx->r6);
    // 0x80242F08: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80242F0C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80242F10: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80242F14: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x80242F18: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80242F1C: b           L_80242F28
    // 0x80242F20: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_80242F28;
    // 0x80242F20: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80242F24:
    // 0x80242F24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80242F28:
    // 0x80242F28: lh          $t4, 0x0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X0);
    // 0x80242F2C: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80242F30: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x80242F34: sh          $t5, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r13;
    // 0x80242F38: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x80242F3C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80242F40: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80242F44: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x80242F48: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80242F4C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80242F50: sw          $t8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r24;
    // 0x80242F54: beq         $at, $zero, L_8024307C
    if (ctx->r1 == 0) {
        // 0x80242F58: lh          $t0, 0x0($t2)
        ctx->r8 = MEM_H(ctx->r10, 0X0);
            goto L_8024307C;
    }
    // 0x80242F58: lh          $t0, 0x0($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X0);
    // 0x80242F5C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
L_80242F60:
    // 0x80242F60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80242F64: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x80242F68: beq         $v0, $at, L_80242F7C
    if (ctx->r2 == ctx->r1) {
        // 0x80242F6C: subu        $s3, $s3, $s2
        ctx->r19 = SUB32(ctx->r19, ctx->r18);
            goto L_80242F7C;
    }
    // 0x80242F6C: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x80242F70: beq         $v0, $zero, L_80242F7C
    if (ctx->r2 == 0) {
        // 0x80242F74: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_80242F7C;
    }
    // 0x80242F74: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80242F78: sw          $t3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r11;
L_80242F7C:
    // 0x80242F7C: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x80242F80: lw          $t5, 0x1C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C);
    // 0x80242F84: subu        $v0, $t4, $t5
    ctx->r2 = SUB32(ctx->r12, ctx->r13);
    // 0x80242F88: sltu        $at, $s3, $v0
    ctx->r1 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x80242F8C: beq         $at, $zero, L_80242F9C
    if (ctx->r1 == 0) {
        // 0x80242F90: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80242F9C;
    }
    // 0x80242F90: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80242F94: b           L_80242F9C
    // 0x80242F98: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
        goto L_80242F9C;
    // 0x80242F98: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_80242F9C:
    // 0x80242F9C: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80242FA0: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80242FA4: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80242FA8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80242FAC: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80242FB0: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x80242FB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80242FB8: jalr        $t9
    // 0x80242FBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80242FBC: nop

    after_1:
    // 0x80242FC0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80242FC4: andi        $a1, $v0, 0x7
    ctx->r5 = ctx->r2 & 0X7;
    // 0x80242FC8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80242FCC: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x80242FD0: beq         $v1, $zero, L_80242FE4
    if (ctx->r3 == 0) {
        // 0x80242FD4: addu        $a3, $s1, $a1
        ctx->r7 = ADD32(ctx->r17, ctx->r5);
            goto L_80242FE4;
    }
    // 0x80242FD4: addu        $a3, $s1, $a1
    ctx->r7 = ADD32(ctx->r17, ctx->r5);
    // 0x80242FD8: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80242FDC: b           L_80242FE8
    // 0x80242FE0: subu        $a2, $t6, $v1
    ctx->r6 = SUB32(ctx->r14, ctx->r3);
        goto L_80242FE8;
    // 0x80242FE0: subu        $a2, $t6, $v1
    ctx->r6 = SUB32(ctx->r14, ctx->r3);
L_80242FE4:
    // 0x80242FE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80242FE8:
    // 0x80242FE8: addu        $t7, $t0, $a2
    ctx->r15 = ADD32(ctx->r8, ctx->r6);
    // 0x80242FEC: andi        $t4, $a3, 0x7
    ctx->r12 = ctx->r7 & 0X7;
    // 0x80242FF0: subu        $t5, $a3, $t4
    ctx->r13 = SUB32(ctx->r7, ctx->r12);
    // 0x80242FF4: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80242FF8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80242FFC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243000: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x80243004: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80243008: addiu       $t9, $t5, 0x8
    ctx->r25 = ADD32(ctx->r13, 0X8);
    // 0x8024300C: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x80243010: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80243014: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80243018: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8024301C: subu        $t8, $v0, $a1
    ctx->r24 = SUB32(ctx->r2, ctx->r5);
    // 0x80243020: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x80243024: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80243028: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8024302C: bne         $a1, $zero, L_80243038
    if (ctx->r5 != 0) {
        // 0x80243030: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_80243038;
    }
    // 0x80243030: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80243034: beq         $a2, $zero, L_80243070
    if (ctx->r6 == 0) {
        // 0x80243038: addu        $t3, $t0, $a1
        ctx->r11 = ADD32(ctx->r8, ctx->r5);
            goto L_80243070;
    }
L_80243038:
    // 0x80243038: addu        $t3, $t0, $a1
    ctx->r11 = ADD32(ctx->r8, ctx->r5);
    // 0x8024303C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80243040: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80243044: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x80243048: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8024304C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80243050: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x80243054: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x80243058: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x8024305C: or          $t3, $t7, $t8
    ctx->r11 = ctx->r15 | ctx->r24;
    // 0x80243060: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x80243064: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80243068: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8024306C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80243070:
    // 0x80243070: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80243074: bnel        $at, $zero, L_80242F60
    if (ctx->r1 != 0) {
        // 0x80243078: lw          $v0, 0x24($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X24);
            goto L_80242F60;
    }
    goto skip_2;
    // 0x80243078: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    skip_2:
L_8024307C:
    // 0x8024307C: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x80243080: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x80243084: sll         $t6, $s3, 1
    ctx->r14 = S32(ctx->r19 << 1);
    // 0x80243088: addu        $t5, $t4, $s3
    ctx->r13 = ADD32(ctx->r12, ctx->r19);
    // 0x8024308C: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80243090: sw          $t5, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r13;
    // 0x80243094: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x80243098: b           L_802431D4
    // 0x8024309C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_802431D4;
    // 0x8024309C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802430A0: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
L_802430A4:
    // 0x802430A4: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x802430A8: sll         $s1, $s3, 1
    ctx->r17 = S32(ctx->r19 << 1);
    // 0x802430AC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x802430B0: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x802430B4: addu        $v1, $a0, $s1
    ctx->r3 = ADD32(ctx->r4, ctx->r17);
    // 0x802430B8: subu        $t3, $v1, $t8
    ctx->r11 = SUB32(ctx->r3, ctx->r24);
    // 0x802430BC: subu        $s2, $t3, $t4
    ctx->r18 = SUB32(ctx->r11, ctx->r12);
    // 0x802430C0: bgezl       $s2, L_802430D0
    if (SIGNED(ctx->r18) >= 0) {
        // 0x802430C4: slt         $at, $s1, $s2
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_802430D0;
    }
    goto skip_3;
    // 0x802430C4: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    skip_3:
    // 0x802430C8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802430CC: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
L_802430D0:
    // 0x802430D0: beql        $at, $zero, L_802430E0
    if (ctx->r1 == 0) {
        // 0x802430D4: slt         $at, $s2, $s1
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_802430E0;
    }
    goto skip_4;
    // 0x802430D4: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
    skip_4:
    // 0x802430D8: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    // 0x802430DC: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
L_802430E0:
    // 0x802430E0: beql        $at, $zero, L_80243194
    if (ctx->r1 == 0) {
        // 0x802430E4: sw          $v1, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r3;
            goto L_80243194;
    }
    goto skip_5;
    // 0x802430E4: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    skip_5:
    // 0x802430E8: blez        $s3, L_80243168
    if (SIGNED(ctx->r19) <= 0) {
        // 0x802430EC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80243168;
    }
    // 0x802430EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802430F0: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x802430F4: subu        $a1, $s1, $s2
    ctx->r5 = SUB32(ctx->r17, ctx->r18);
    // 0x802430F8: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x802430FC: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x80243100: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80243104: jalr        $t9
    // 0x80243108: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80243108: nop

    after_2:
    // 0x8024310C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80243110: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80243114: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x80243118: lh          $t5, 0x0($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X0);
    // 0x8024311C: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80243120: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80243124: andi        $t8, $a3, 0x7
    ctx->r24 = ctx->r7 & 0X7;
    // 0x80243128: subu        $t3, $a3, $t8
    ctx->r11 = SUB32(ctx->r7, ctx->r24);
    // 0x8024312C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243130: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80243134: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80243138: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8024313C: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80243140: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x80243144: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80243148: subu        $t6, $v0, $a2
    ctx->r14 = SUB32(ctx->r2, ctx->r6);
    // 0x8024314C: lui         $t5, 0x400
    ctx->r13 = S32(0X400 << 16);
    // 0x80243150: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80243154: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80243158: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x8024315C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x80243160: b           L_80243168
    // 0x80243164: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_80243168;
    // 0x80243164: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80243168:
    // 0x80243168: lh          $t7, 0x0($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X0);
    // 0x8024316C: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x80243170: sh          $t8, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r24;
    // 0x80243174: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x80243178: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x8024317C: addu        $t4, $t3, $s3
    ctx->r12 = ADD32(ctx->r11, ctx->r19);
    // 0x80243180: addu        $t5, $t9, $s1
    ctx->r13 = ADD32(ctx->r25, ctx->r17);
    // 0x80243184: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x80243188: b           L_80243194
    // 0x8024318C: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
        goto L_80243194;
    // 0x8024318C: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
    // 0x80243190: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
L_80243194:
    // 0x80243194: beq         $s2, $zero, L_802431D0
    if (ctx->r18 == 0) {
        // 0x80243198: subu        $v1, $s1, $s2
        ctx->r3 = SUB32(ctx->r17, ctx->r18);
            goto L_802431D0;
    }
    // 0x80243198: subu        $v1, $s1, $s2
    ctx->r3 = SUB32(ctx->r17, ctx->r18);
    // 0x8024319C: bgez        $v1, L_802431A8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802431A0: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802431A8;
    }
    // 0x802431A0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802431A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802431A8:
    // 0x802431A8: lh          $t6, 0x0($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X0);
    // 0x802431AC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802431B0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802431B4: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x802431B8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802431BC: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x802431C0: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x802431C4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x802431C8: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x802431CC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_802431D0:
    // 0x802431D0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_802431D4:
    // 0x802431D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802431D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802431DC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802431E0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802431E4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802431E8: jr          $ra
    // 0x802431EC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x802431EC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_80223AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223AE0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80223AE4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80223AE8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80223AEC: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80223AF0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80223AF4: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x80223AF8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80223AFC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80223B00: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80223B04: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80223B08: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80223B0C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80223B10: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80223B14: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80223B18: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80223B1C: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x80223B20: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80223B24: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80223B28: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80223B2C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80223B30: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80223B34: jal         0x80223C3C
    // 0x80223B38: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    static_3_80223C3C(rdram, ctx);
        goto after_0;
    // 0x80223B38: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    after_0:
    // 0x80223B3C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80223B40: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80223B44: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80223B48: bgtz        $s2, L_80223B5C
    if (SIGNED(ctx->r18) > 0) {
        // 0x80223B4C: or          $a2, $s5, $zero
        ctx->r6 = ctx->r21 | 0;
            goto L_80223B5C;
    }
    // 0x80223B4C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80223B50: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x80223B54: b           L_80223B64
    // 0x80223B58: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
        goto L_80223B64;
    // 0x80223B58: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
L_80223B5C:
    // 0x80223B5C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80223B60: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
L_80223B64:
    // 0x80223B64: jal         0x8022393C
    // 0x80223B68: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80223B68: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
    // 0x80223B6C: beq         $v0, $zero, L_80223BB0
    if (ctx->r2 == 0) {
        // 0x80223B70: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80223BB0;
    }
    // 0x80223B70: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80223B74:
    // 0x80223B74: bne         $v0, $s6, L_80223B98
    if (ctx->r2 != ctx->r22) {
        // 0x80223B78: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80223B98;
    }
    // 0x80223B78: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80223B7C: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80223B80: beq         $v0, $zero, L_80223BB0
    if (ctx->r2 == 0) {
        // 0x80223B84: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80223BB0;
    }
    // 0x80223B84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80223B88: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80223B8C: bnel        $at, $zero, L_80223B9C
    if (ctx->r1 != 0) {
        // 0x80223B90: or          $a1, $s4, $zero
        ctx->r5 = ctx->r20 | 0;
            goto L_80223B9C;
    }
    goto skip_0;
    // 0x80223B90: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    skip_0:
    // 0x80223B94: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
L_80223B98:
    // 0x80223B98: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
L_80223B9C:
    // 0x80223B9C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80223BA0: jal         0x8022393C
    // 0x80223BA4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_8022393C(rdram, ctx);
        goto after_2;
    // 0x80223BA4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_2:
    // 0x80223BA8: bne         $v0, $zero, L_80223B74
    if (ctx->r2 != 0) {
        // 0x80223BAC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80223B74;
    }
    // 0x80223BAC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80223BB0:
    // 0x80223BB0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80223BB4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80223BB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80223BBC: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x80223BC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80223BC4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80223BC8: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80223BCC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80223BD0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80223BD4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80223BD8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80223BDC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80223BE0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80223BE4: jr          $ra
    // 0x80223BE8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80223BE8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void D_80200370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200370: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80200374: lui         $t6, 0x8027
    // ROM `roms/afa.n64.us.z64` / `aero_us.z64` @ 0x80200374 (Capstone); N64Recomp regen can emit wrong immediates here.
    ctx->r14 = S32(0X8027 << 16);
    // 0x80200378: lw          $t6, 0x522C($t6)
    ctx->r14 = MEM_W(0X522C, ctx->r14);
    // 0x8020037C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80200380: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80200384: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80200388: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8020038C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80200390: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80200394: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80200398: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8020039C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802003A0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802003A4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802003A8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802003AC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802003B0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802003B4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x802003B8: jal         0x80223840
    // 0x802003BC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x802003BC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x802003C0: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x802003C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802003C8: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x802003CC: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    // 0x802003D0: jal         0x8022393C
    // 0x802003D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x802003D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802003D8: beq         $v0, $zero, L_80200914
    if (ctx->r2 == 0) {
        // 0x802003DC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80200914;
    }
    // 0x802003DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802003E0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802003E4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802003E8: addiu       $fp, $zero, 0xC
    ctx->r30 = ADD32(0, 0XC);
    // 0x802003EC: addiu       $s5, $sp, 0x78
    ctx->r21 = ADD32(ctx->r29, 0X78);
    // 0x802003F0: lui         $at, 0x434F
    ctx->r1 = S32(0X434F << 16);
L_802003F4:
    // 0x802003F4: ori         $at, $at, 0x4D4D
    ctx->r1 = ctx->r1 | 0X4D4D;
    // 0x802003F8: bne         $v0, $at, L_802008F8
    if (ctx->r2 != ctx->r1) {
        // 0x802003FC: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_802008F8;
    }
    // 0x802003FC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80200400: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x80200404: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x80200408: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8020040C: jal         0x8022B948
    // 0x80200410: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    func_8022B948(rdram, ctx);
        goto after_2;
    // 0x80200410: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
    after_2:
    // 0x80200414: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80200418: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020041C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200420: jal         0x80225424
    // 0x80200424: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x80200424: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80200428: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x8020042C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200430: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80200434: jal         0x80225424
    // 0x80200438: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_80225424(rdram, ctx);
        goto after_4;
    // 0x80200438: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_4:
    // 0x8020043C: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x80200440: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200444: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80200448: jal         0x80225424
    // 0x8020044C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x8020044C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_5:
    // 0x80200450: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x80200454: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200458: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8020045C: jal         0x80225424
    // 0x80200460: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x80200460: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_6:
    // 0x80200464: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x80200468: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8020046C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80200470: jal         0x80225424
    // 0x80200474: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    func_80225424(rdram, ctx);
        goto after_7;
    // 0x80200474: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    after_7:
    // 0x80200478: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x8020047C: lhu         $t0, 0x2($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2);
    // 0x80200480: lhu         $t1, 0x4($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X4);
    // 0x80200484: lbu         $t3, 0x9($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X9);
    // 0x80200488: div         $zero, $t0, $t1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r9)));
    // 0x8020048C: mflo        $t2
    ctx->r10 = lo;
    // 0x80200490: sh          $t2, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r10;
    // 0x80200494: bne         $t1, $zero, L_802004A0
    if (ctx->r9 != 0) {
        // 0x80200498: nop
    
            goto L_802004A0;
    }
    // 0x80200498: nop

    // 0x8020049C: break       7
    do_break(2149581980);
L_802004A0:
    // 0x802004A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802004A4: bne         $t1, $at, L_802004B8
    if (ctx->r9 != ctx->r1) {
        // 0x802004A8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802004B8;
    }
    // 0x802004A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802004AC: bne         $t0, $at, L_802004B8
    if (ctx->r8 != ctx->r1) {
        // 0x802004B0: nop
    
            goto L_802004B8;
    }
    // 0x802004B0: nop

    // 0x802004B4: break       6
    do_break(2149582004);
L_802004B8:
    // 0x802004B8: blez        $t3, L_802008F8
    if (SIGNED(ctx->r11) <= 0) {
        // 0x802004BC: addiu       $a0, $zero, 0x20
        ctx->r4 = ADD32(0, 0X20);
            goto L_802008F8;
    }
    // 0x802004BC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
L_802004C0:
    // 0x802004C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802004C4: jal         0x8022B948
    // 0x802004C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_8022B948(rdram, ctx);
        goto after_8;
    // 0x802004C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_8:
    // 0x802004CC: beq         $s6, $zero, L_802004E0
    if (ctx->r22 == 0) {
        // 0x802004D0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_802004E0;
    }
    // 0x802004D0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802004D4: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x802004D8: b           L_802004EC
    // 0x802004DC: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
        goto L_802004EC;
    // 0x802004DC: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
L_802004E0:
    // 0x802004E0: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x802004E4: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x802004E8: sw          $v0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r2;
L_802004EC:
    // 0x802004EC: addiu       $a0, $s1, 0x6
    ctx->r4 = ADD32(ctx->r17, 0X6);
    // 0x802004F0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802004F4: jal         0x80225424
    // 0x802004F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_9;
    // 0x802004F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
    // 0x802004FC: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    // 0x80200500: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200504: jal         0x80225424
    // 0x80200508: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_10;
    // 0x80200508: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_10:
    // 0x8020050C: addiu       $a0, $sp, 0x73
    ctx->r4 = ADD32(ctx->r29, 0X73);
    // 0x80200510: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200514: jal         0x80225424
    // 0x80200518: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_11;
    // 0x80200518: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x8020051C: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x80200520: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x80200524: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80200528: sll         $t5, $a0, 1
    ctx->r13 = S32(ctx->r4 << 1);
    // 0x8020052C: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x80200530: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x80200534: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x80200538: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x8020053C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80200540: jal         0x8022B948
    // 0x80200544: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8022B948(rdram, ctx);
        goto after_12;
    // 0x80200544: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x80200548: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8020054C: lbu         $v1, 0x73($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X73);
    // 0x80200550: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x80200554: beql        $t6, $zero, L_8020058C
    if (ctx->r14 == 0) {
        // 0x80200558: andi        $t8, $v1, 0x2
        ctx->r24 = ctx->r3 & 0X2;
            goto L_8020058C;
    }
    goto skip_0;
    // 0x80200558: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    skip_0:
    // 0x8020055C: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x80200560: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80200564: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x80200568: jal         0x8022B948
    // 0x8020056C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022B948(rdram, ctx);
        goto after_13;
    // 0x8020056C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_13:
    // 0x80200570: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x80200574: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x80200578: jal         0x8022B948
    // 0x8020057C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B948(rdram, ctx);
        goto after_14;
    // 0x8020057C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x80200580: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80200584: lbu         $v1, 0x73($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X73);
    // 0x80200588: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
L_8020058C:
    // 0x8020058C: beql        $t8, $zero, L_802005B8
    if (ctx->r24 == 0) {
        // 0x80200590: andi        $t0, $v1, 0x4
        ctx->r8 = ctx->r3 & 0X4;
            goto L_802005B8;
    }
    goto skip_1;
    // 0x80200590: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    skip_1:
    // 0x80200594: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x80200598: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8020059C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x802005A0: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x802005A4: jal         0x8022B948
    // 0x802005A8: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    func_8022B948(rdram, ctx);
        goto after_15;
    // 0x802005A8: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    after_15:
    // 0x802005AC: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x802005B0: lbu         $v1, 0x73($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X73);
    // 0x802005B4: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
L_802005B8:
    // 0x802005B8: beql        $t0, $zero, L_802005E0
    if (ctx->r8 == 0) {
        // 0x802005BC: lhu         $t2, 0x6($s1)
        ctx->r10 = MEM_HU(ctx->r17, 0X6);
            goto L_802005E0;
    }
    goto skip_2;
    // 0x802005BC: lhu         $t2, 0x6($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X6);
    skip_2:
    // 0x802005C0: lhu         $a0, 0x6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X6);
    // 0x802005C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802005C8: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x802005CC: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x802005D0: jal         0x8022B948
    // 0x802005D4: sll         $a0, $t1, 2
    ctx->r4 = S32(ctx->r9 << 2);
    func_8022B948(rdram, ctx);
        goto after_16;
    // 0x802005D4: sll         $a0, $t1, 2
    ctx->r4 = S32(ctx->r9 << 2);
    after_16:
    // 0x802005D8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x802005DC: lhu         $t2, 0x6($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X6);
L_802005E0:
    // 0x802005E0: blezl       $t2, L_80200834
    if (SIGNED(ctx->r10) <= 0) {
        // 0x802005E4: lw          $t0, 0x8($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X8);
            goto L_80200834;
    }
    goto skip_3;
    // 0x802005E4: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
    skip_3:
    // 0x802005E8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802005EC: addiu       $a0, $sp, 0x62
    ctx->r4 = ADD32(ctx->r29, 0X62);
L_802005F0:
    // 0x802005F0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802005F4: jal         0x80225424
    // 0x802005F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_17;
    // 0x802005F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_17:
    // 0x802005FC: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80200600: lhu         $t3, 0x62($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X62);
    // 0x80200604: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200608: beq         $v0, $zero, L_8020061C
    if (ctx->r2 == 0) {
        // 0x8020060C: andi        $t4, $t3, 0x8000
        ctx->r12 = ctx->r11 & 0X8000;
            goto L_8020061C;
    }
    // 0x8020060C: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x80200610: sltu        $t5, $zero, $t4
    ctx->r13 = 0 < ctx->r12 ? 1 : 0;
    // 0x80200614: addu        $t6, $v0, $s3
    ctx->r14 = ADD32(ctx->r2, ctx->r19);
    // 0x80200618: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
L_8020061C:
    // 0x8020061C: lhu         $v0, 0x62($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X62);
    // 0x80200620: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x80200624: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80200628: andi        $v1, $v0, 0x4000
    ctx->r3 = ctx->r2 & 0X4000;
    // 0x8020062C: andi        $s4, $v0, 0x2000
    ctx->r20 = ctx->r2 & 0X2000;
    // 0x80200630: andi        $s7, $v0, 0x1000
    ctx->r23 = ctx->r2 & 0X1000;
    // 0x80200634: sltu        $t7, $zero, $v1
    ctx->r15 = 0 < ctx->r3 ? 1 : 0;
    // 0x80200638: sltu        $t8, $zero, $s4
    ctx->r24 = 0 < ctx->r20 ? 1 : 0;
    // 0x8020063C: sltu        $t9, $zero, $s7
    ctx->r25 = 0 < ctx->r23 ? 1 : 0;
    // 0x80200640: andi        $t0, $v0, 0xFFF
    ctx->r8 = ctx->r2 & 0XFFF;
    // 0x80200644: addu        $t2, $t1, $s2
    ctx->r10 = ADD32(ctx->r9, ctx->r18);
    // 0x80200648: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x8020064C: or          $s7, $t9, $zero
    ctx->r23 = ctx->r25 | 0;
    // 0x80200650: beq         $t7, $zero, L_802006B8
    if (ctx->r15 == 0) {
        // 0x80200654: sh          $t0, 0x0($t2)
        MEM_H(0X0, ctx->r10) = ctx->r8;
            goto L_802006B8;
    }
    // 0x80200654: sh          $t0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r8;
    // 0x80200658: lw          $t3, 0x18($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X18);
    // 0x8020065C: sll         $s0, $s3, 4
    ctx->r16 = S32(ctx->r19 << 4);
    // 0x80200660: jal         0x80225424
    // 0x80200664: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    func_80225424(rdram, ctx);
        goto after_18;
    // 0x80200664: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_18:
    // 0x80200668: lw          $t4, 0x18($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X18);
    // 0x8020066C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200670: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80200674: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x80200678: jal         0x80225424
    // 0x8020067C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80225424(rdram, ctx);
        goto after_19;
    // 0x8020067C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_19:
    // 0x80200680: lw          $t5, 0x18($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X18);
    // 0x80200684: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200688: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8020068C: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x80200690: jal         0x80225424
    // 0x80200694: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80225424(rdram, ctx);
        goto after_20;
    // 0x80200694: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_20:
    // 0x80200698: lw          $t6, 0x18($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X18);
    // 0x8020069C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802006A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802006A4: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x802006A8: jal         0x80225424
    // 0x802006AC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80225424(rdram, ctx);
        goto after_21;
    // 0x802006AC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_21:
    // 0x802006B0: b           L_802006F0
    // 0x802006B4: nop

        goto L_802006F0;
    // 0x802006B4: nop

L_802006B8:
    // 0x802006B8: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x802006BC: sll         $v0, $s3, 4
    ctx->r2 = S32(ctx->r19 << 4);
    // 0x802006C0: beq         $v1, $zero, L_802006F0
    if (ctx->r3 == 0) {
        // 0x802006C4: addu        $t7, $v1, $v0
        ctx->r15 = ADD32(ctx->r3, ctx->r2);
            goto L_802006F0;
    }
    // 0x802006C4: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x802006C8: swc1        $f20, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f20.u32l;
    // 0x802006CC: lw          $t8, 0x18($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X18);
    // 0x802006D0: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x802006D4: swc1        $f20, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f20.u32l;
    // 0x802006D8: lw          $t1, 0x18($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X18);
    // 0x802006DC: addu        $t0, $t1, $v0
    ctx->r8 = ADD32(ctx->r9, ctx->r2);
    // 0x802006E0: swc1        $f20, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f20.u32l;
    // 0x802006E4: lw          $t2, 0x18($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X18);
    // 0x802006E8: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x802006EC: swc1        $f22, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f22.u32l;
L_802006F0:
    // 0x802006F0: beql        $s4, $zero, L_80200754
    if (ctx->r20 == 0) {
        // 0x802006F4: lw          $v0, 0x10($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X10);
            goto L_80200754;
    }
    goto skip_4;
    // 0x802006F4: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    skip_4:
    // 0x802006F8: multu       $s3, $fp
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802006FC: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x80200700: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200704: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80200708: mflo        $s0
    ctx->r16 = lo;
    // 0x8020070C: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x80200710: jal         0x80225424
    // 0x80200714: nop

    func_80225424(rdram, ctx);
        goto after_22;
    // 0x80200714: nop

    after_22:
    // 0x80200718: lw          $t5, 0x10($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X10);
    // 0x8020071C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200720: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80200724: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x80200728: jal         0x80225424
    // 0x8020072C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80225424(rdram, ctx);
        goto after_23;
    // 0x8020072C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_23:
    // 0x80200730: lw          $t6, 0x10($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X10);
    // 0x80200734: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200738: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8020073C: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x80200740: jal         0x80225424
    // 0x80200744: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80225424(rdram, ctx);
        goto after_24;
    // 0x80200744: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_24:
    // 0x80200748: b           L_80200784
    // 0x8020074C: nop

        goto L_80200784;
    // 0x8020074C: nop

    // 0x80200750: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
L_80200754:
    // 0x80200754: beq         $v0, $zero, L_80200784
    if (ctx->r2 == 0) {
        // 0x80200758: nop
    
            goto L_80200784;
    }
    // 0x80200758: nop

    // 0x8020075C: multu       $s3, $fp
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80200760: mflo        $s0
    ctx->r16 = lo;
    // 0x80200764: addu        $t7, $v0, $s0
    ctx->r15 = ADD32(ctx->r2, ctx->r16);
    // 0x80200768: swc1        $f20, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f20.u32l;
    // 0x8020076C: lw          $t8, 0x10($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X10);
    // 0x80200770: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80200774: swc1        $f20, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f20.u32l;
    // 0x80200778: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    // 0x8020077C: addu        $t0, $t1, $s0
    ctx->r8 = ADD32(ctx->r9, ctx->r16);
    // 0x80200780: swc1        $f20, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f20.u32l;
L_80200784:
    // 0x80200784: beql        $s7, $zero, L_802007E8
    if (ctx->r23 == 0) {
        // 0x80200788: lw          $v0, 0x14($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X14);
            goto L_802007E8;
    }
    goto skip_5;
    // 0x80200788: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    skip_5:
    // 0x8020078C: multu       $s3, $fp
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80200790: lw          $t2, 0x14($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X14);
    // 0x80200794: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80200798: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8020079C: mflo        $s0
    ctx->r16 = lo;
    // 0x802007A0: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x802007A4: jal         0x80225424
    // 0x802007A8: nop

    func_80225424(rdram, ctx);
        goto after_25;
    // 0x802007A8: nop

    after_25:
    // 0x802007AC: lw          $t3, 0x14($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X14);
    // 0x802007B0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802007B4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802007B8: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x802007BC: jal         0x80225424
    // 0x802007C0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80225424(rdram, ctx);
        goto after_26;
    // 0x802007C0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_26:
    // 0x802007C4: lw          $t4, 0x14($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X14);
    // 0x802007C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802007CC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802007D0: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802007D4: jal         0x80225424
    // 0x802007D8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80225424(rdram, ctx);
        goto after_27;
    // 0x802007D8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_27:
    // 0x802007DC: b           L_8020081C
    // 0x802007E0: lhu         $t1, 0x6($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X6);
        goto L_8020081C;
    // 0x802007E0: lhu         $t1, 0x6($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X6);
    // 0x802007E4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
L_802007E8:
    // 0x802007E8: beql        $v0, $zero, L_8020081C
    if (ctx->r2 == 0) {
        // 0x802007EC: lhu         $t1, 0x6($s6)
        ctx->r9 = MEM_HU(ctx->r22, 0X6);
            goto L_8020081C;
    }
    goto skip_6;
    // 0x802007EC: lhu         $t1, 0x6($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X6);
    skip_6:
    // 0x802007F0: multu       $s3, $fp
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802007F4: mflo        $s0
    ctx->r16 = lo;
    // 0x802007F8: addu        $t5, $v0, $s0
    ctx->r13 = ADD32(ctx->r2, ctx->r16);
    // 0x802007FC: swc1        $f22, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f22.u32l;
    // 0x80200800: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x80200804: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80200808: swc1        $f22, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f22.u32l;
    // 0x8020080C: lw          $t8, 0x14($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X14);
    // 0x80200810: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80200814: swc1        $f22, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f22.u32l;
    // 0x80200818: lhu         $t1, 0x6($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X6);
L_8020081C:
    // 0x8020081C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80200820: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x80200824: slt         $at, $s3, $t1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80200828: bnel        $at, $zero, L_802005F0
    if (ctx->r1 != 0) {
        // 0x8020082C: addiu       $a0, $sp, 0x62
        ctx->r4 = ADD32(ctx->r29, 0X62);
            goto L_802005F0;
    }
    goto skip_7;
    // 0x8020082C: addiu       $a0, $sp, 0x62
    ctx->r4 = ADD32(ctx->r29, 0X62);
    skip_7:
    // 0x80200830: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
L_80200834:
    // 0x80200834: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x80200838: beql        $t0, $zero, L_802008D4
    if (ctx->r8 == 0) {
        // 0x8020083C: lw          $v0, 0x84($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X84);
            goto L_802008D4;
    }
    goto skip_8;
    // 0x8020083C: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    skip_8:
    // 0x80200840: lhu         $t2, 0x2($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X2);
    // 0x80200844: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80200848: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8020084C: blezl       $t2, L_802008D4
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80200850: lw          $v0, 0x84($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X84);
            goto L_802008D4;
    }
    goto skip_9;
    // 0x80200850: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    skip_9:
    // 0x80200854: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80200858: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
L_8020085C:
    // 0x8020085C: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x80200860: addu        $v1, $t3, $s2
    ctx->r3 = ADD32(ctx->r11, ctx->r18);
    // 0x80200864: lhu         $t4, 0x2($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X2);
    // 0x80200868: addu        $t8, $a1, $a0
    ctx->r24 = ADD32(ctx->r5, ctx->r4);
    // 0x8020086C: slt         $at, $a0, $t4
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80200870: bnel        $at, $zero, L_802008BC
    if (ctx->r1 != 0) {
        // 0x80200874: sb          $s3, 0x0($t8)
        MEM_B(0X0, ctx->r24) = ctx->r19;
            goto L_802008BC;
    }
    goto skip_10;
    // 0x80200874: sb          $s3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r19;
    skip_10:
    // 0x80200878: lhu         $t5, 0x6($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X6);
    // 0x8020087C: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
    // 0x80200880: slt         $at, $v0, $t5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80200884: beql        $at, $zero, L_802008BC
    if (ctx->r1 == 0) {
        // 0x80200888: sb          $s3, 0x0($t8)
        MEM_B(0X0, ctx->r24) = ctx->r19;
            goto L_802008BC;
    }
    goto skip_11;
    // 0x80200888: sb          $s3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r19;
    skip_11:
    // 0x8020088C: lhu         $t6, 0x4($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X4);
L_80200890:
    // 0x80200890: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80200894: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x80200898: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8020089C: bne         $at, $zero, L_802008B8
    if (ctx->r1 != 0) {
        // 0x802008A0: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_802008B8;
    }
    // 0x802008A0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x802008A4: lhu         $t7, 0x6($s6)
    ctx->r15 = MEM_HU(ctx->r22, 0X6);
    // 0x802008A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802008AC: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x802008B0: bnel        $at, $zero, L_80200890
    if (ctx->r1 != 0) {
        // 0x802008B4: lhu         $t6, 0x4($v1)
        ctx->r14 = MEM_HU(ctx->r3, 0X4);
            goto L_80200890;
    }
    goto skip_12;
    // 0x802008B4: lhu         $t6, 0x4($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X4);
    skip_12:
L_802008B8:
    // 0x802008B8: sb          $s3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r19;
L_802008BC:
    // 0x802008BC: lhu         $t9, 0x2($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X2);
    // 0x802008C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802008C4: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802008C8: bnel        $at, $zero, L_8020085C
    if (ctx->r1 != 0) {
        // 0x802008CC: lw          $t3, 0xC($s1)
        ctx->r11 = MEM_W(ctx->r17, 0XC);
            goto L_8020085C;
    }
    goto skip_13;
    // 0x802008CC: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    skip_13:
    // 0x802008D0: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
L_802008D4:
    // 0x802008D4: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x802008D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802008DC: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x802008E0: lbu         $t0, 0x9($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X9);
    // 0x802008E4: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x802008E8: bnel        $at, $zero, L_802004C0
    if (ctx->r1 != 0) {
        // 0x802008EC: addiu       $a0, $zero, 0x20
        ctx->r4 = ADD32(0, 0X20);
            goto L_802004C0;
    }
    goto skip_14;
    // 0x802008EC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    skip_14:
    // 0x802008F0: b           L_802008FC
    // 0x802008F4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
        goto L_802008FC;
    // 0x802008F4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_802008F8:
    // 0x802008F8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_802008FC:
    // 0x802008FC: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x80200900: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    // 0x80200904: jal         0x8022393C
    // 0x80200908: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_28;
    // 0x80200908: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_28:
    // 0x8020090C: bnel        $v0, $zero, L_802003F4
    if (ctx->r2 != 0) {
        // 0x80200910: lui         $at, 0x434F
        ctx->r1 = S32(0X434F << 16);
            goto L_802003F4;
    }
    goto skip_15;
    // 0x80200910: lui         $at, 0x434F
    ctx->r1 = S32(0X434F << 16);
    skip_15:
L_80200914:
    // 0x80200914: jal         0x802238F0
    // 0x80200918: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    static_3_802238F0(rdram, ctx);
        goto after_29;
    // 0x80200918: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    after_29:
    // 0x8020091C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80200920: lw          $v0, 0x9C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X9C);
    // 0x80200924: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80200928: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8020092C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80200930: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80200934: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80200938: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8020093C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80200940: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80200944: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80200948: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8020094C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80200950: jr          $ra
    // 0x80200954: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80200954: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void D_802A8DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8E2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A8E30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A8E34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A8E38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A8E3C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802A8E40: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802A8E44: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802A8E48: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802A8E4C: jal         0x80302DC8
    // 0x802A8E50: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802A8E50: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802A8E54: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802A8E58: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8E5C: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802A8E60: jal         0x80302DC8
    // 0x802A8E64: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802A8E64: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802A8E68: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A8E6C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8E70: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802A8E74: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x802A8E78: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802A8E7C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802A8E80: jal         0x80290474
    // 0x802A8E84: nop

    static_3_80290474(rdram, ctx);
        goto after_2;
    // 0x802A8E84: nop

    after_2:
    // 0x802A8E88: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8E8C: jal         0x80302980
    // 0x802A8E90: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_3;
    // 0x802A8E90: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802A8E94: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8E98: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8E9C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8EA0: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802A8EA4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8EA8: jal         0x80302988
    // 0x802A8EAC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_4;
    // 0x802A8EAC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802A8EB0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8EB4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802A8EB8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802A8EBC: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802A8EC0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802A8EC4: jal         0x80302988
    // 0x802A8EC8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802A8EC8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802A8ECC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802A8ED0: jal         0x80302A7C
    // 0x802A8ED4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_6;
    // 0x802A8ED4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802A8ED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A8EDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A8EE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A8EE4: jr          $ra
    // 0x802A8EE8: nop

    return;
    // 0x802A8EE8: nop

;}
RECOMP_FUNC void D_802B909C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B911C: lh          $t6, 0x80($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X80);
    // 0x802B9120: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802B9124: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B9128: bne         $t6, $at, L_802B9134
    if (ctx->r14 != ctx->r1) {
        // 0x802B912C: nop
    
            goto L_802B9134;
    }
    // 0x802B912C: nop

    // 0x802B9130: swc1        $f12, 0x110($a0)
    MEM_W(0X110, ctx->r4) = ctx->f12.u32l;
L_802B9134:
    // 0x802B9134: jr          $ra
    // 0x802B9138: nop

    return;
    // 0x802B9138: nop

;}
RECOMP_FUNC void D_802A5F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5FB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A5FB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A5FBC: beq         $a0, $zero, L_802A5FF8
    if (ctx->r4 == 0) {
        // 0x802A5FC0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802A5FF8;
    }
    // 0x802A5FC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A5FC4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A5FC8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A5FCC: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A5FD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A5FD4: jal         0x802D1A34
    // 0x802A5FD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D1A34(rdram, ctx);
        goto after_0;
    // 0x802A5FD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A5FDC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5FE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A5FE4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A5FE8: beql        $t8, $zero, L_802A5FFC
    if (ctx->r24 == 0) {
        // 0x802A5FEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5FFC;
    }
    goto skip_0;
    // 0x802A5FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A5FF0: jal         0x802C681C
    // 0x802A5FF4: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802A5FF4: nop

    after_1:
L_802A5FF8:
    // 0x802A5FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5FFC:
    // 0x802A5FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6000: jr          $ra
    // 0x802A6004: nop

    return;
    // 0x802A6004: nop

;}
RECOMP_FUNC void D_802A9564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A95E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A95E8: jr          $ra
    // 0x802A95EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A95EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80240390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80240390: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80240394: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80240398: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8024039C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x802403A0: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x802403A4: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x802403A8: addu        $t4, $t8, $t9
    ctx->r12 = ADD32(ctx->r24, ctx->r25);
    // 0x802403AC: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x802403B0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802403B4: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x802403B8: lh          $t0, 0xE($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XE);
    // 0x802403BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802403C0: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x802403C4: blez        $t0, L_80240480
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802403C8: addu        $a1, $v1, $t0
        ctx->r5 = ADD32(ctx->r3, ctx->r8);
            goto L_80240480;
    }
    // 0x802403C8: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
L_802403CC:
    // 0x802403CC: bgez        $a1, L_802403DC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x802403D0: sra         $t5, $a1, 1
        ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
            goto L_802403DC;
    }
    // 0x802403D0: sra         $t5, $a1, 1
    ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
    // 0x802403D4: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x802403D8: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_802403DC:
    // 0x802403DC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x802403E0: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x802403E4: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x802403E8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x802403EC: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x802403F0: lbu         $t2, 0x2($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X2);
    // 0x802403F4: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802403F8: bnel        $at, $zero, L_80240440
    if (ctx->r1 != 0) {
        // 0x802403FC: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80240440;
    }
    goto skip_0;
    // 0x802403FC: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_0:
    // 0x80240400: lbu         $t8, 0x3($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3);
    // 0x80240404: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80240408: bnel        $at, $zero, L_80240440
    if (ctx->r1 != 0) {
        // 0x8024040C: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80240440;
    }
    goto skip_1;
    // 0x8024040C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_1:
    // 0x80240410: lbu         $t9, 0x0($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X0);
    // 0x80240414: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80240418: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8024041C: bnel        $at, $zero, L_80240440
    if (ctx->r1 != 0) {
        // 0x80240420: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80240440;
    }
    goto skip_2;
    // 0x80240420: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_2:
    // 0x80240424: lbu         $t4, 0x1($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X1);
    // 0x80240428: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8024042C: bnel        $at, $zero, L_80240440
    if (ctx->r1 != 0) {
        // 0x80240430: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80240440;
    }
    goto skip_3;
    // 0x80240430: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_3:
    // 0x80240434: jr          $ra
    // 0x80240438: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x80240438: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8024043C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
L_80240440:
    // 0x80240440: bne         $at, $zero, L_80240468
    if (ctx->r1 != 0) {
        // 0x80240444: nop
    
            goto L_80240468;
    }
    // 0x80240444: nop

    // 0x80240448: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x8024044C: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80240450: beql        $at, $zero, L_80240474
    if (ctx->r1 == 0) {
        // 0x80240454: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_80240474;
    }
    goto skip_4;
    // 0x80240454: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    skip_4:
    // 0x80240458: lbu         $t6, 0x3($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3);
    // 0x8024045C: slt         $at, $t6, $t1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80240460: bnel        $at, $zero, L_80240474
    if (ctx->r1 != 0) {
        // 0x80240464: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_80240474;
    }
    goto skip_5;
    // 0x80240464: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    skip_5:
L_80240468:
    // 0x80240468: b           L_80240474
    // 0x8024046C: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
        goto L_80240474;
    // 0x8024046C: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
    // 0x80240470: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_80240474:
    // 0x80240474: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80240478: beql        $at, $zero, L_802403CC
    if (ctx->r1 == 0) {
        // 0x8024047C: addu        $a1, $v1, $t0
        ctx->r5 = ADD32(ctx->r3, ctx->r8);
            goto L_802403CC;
    }
    goto skip_6;
    // 0x8024047C: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
    skip_6:
L_80240480:
    // 0x80240480: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80240484: jr          $ra
    // 0x80240488: nop

    return;
    // 0x80240488: nop

;}
RECOMP_FUNC void D_8020DB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020DB28: lwc1        $f12, 0x14($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8020DB2C: lwc1        $f14, 0x10($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8020DB30: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8020DB34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020DB38: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8020DB3C: nop

    // 0x8020DB40: bc1fl       L_8020DB70
    if (!c1cs) {
        // 0x8020DB44: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_8020DB70;
    }
    goto skip_0;
    // 0x8020DB44: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_0:
    // 0x8020DB48: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8020DB4C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8020DB50: nop

    // 0x8020DB54: bc1f        L_8020DB64
    if (!c1cs) {
        // 0x8020DB58: nop
    
            goto L_8020DB64;
    }
    // 0x8020DB58: nop

    // 0x8020DB5C: b           L_8020DB88
    // 0x8020DB60: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
        goto L_8020DB88;
    // 0x8020DB60: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_8020DB64:
    // 0x8020DB64: b           L_8020DB88
    // 0x8020DB68: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_8020DB88;
    // 0x8020DB68: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8020DB6C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_8020DB70:
    // 0x8020DB70: nop

    // 0x8020DB74: bc1fl       L_8020DB88
    if (!c1cs) {
        // 0x8020DB78: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_8020DB88;
    }
    goto skip_1;
    // 0x8020DB78: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x8020DB7C: b           L_8020DB88
    // 0x8020DB80: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_8020DB88;
    // 0x8020DB80: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8020DB84: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8020DB88:
    // 0x8020DB88: beq         $a0, $at, L_8020E7E4
    if (ctx->r4 == ctx->r1) {
        // 0x8020DB8C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8020E7E4;
    }
    // 0x8020DB8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020DB90: beq         $a0, $at, L_8020DED8
    if (ctx->r4 == ctx->r1) {
        // 0x8020DB94: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8020DED8;
    }
    // 0x8020DB94: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020DB98: bne         $a0, $at, L_8020F364
    if (ctx->r4 != ctx->r1) {
        // 0x8020DB9C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F364;
    }
    // 0x8020DB9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020DBA0: bgez        $a2, L_8020DBB0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8020DBA4: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8020DBB0;
    }
    // 0x8020DBA4: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8020DBA8: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8020DBAC: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8020DBB0:
    // 0x8020DBB0: blez        $v1, L_8020F364
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020DBB4: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_8020F364;
    }
    // 0x8020DBB4: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x8020DBB8: beq         $a2, $zero, L_8020DCD4
    if (ctx->r6 == 0) {
        // 0x8020DBBC: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8020DCD4;
    }
    // 0x8020DBBC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8020DBC0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8020DBC4: addu        $a1, $a3, $t6
    ctx->r5 = ADD32(ctx->r7, ctx->r14);
    // 0x8020DBC8: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020DBCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020DBD0: andi        $t7, $a2, 0xF800
    ctx->r15 = ctx->r6 & 0XF800;
    // 0x8020DBD4: sra         $t8, $t7, 11
    ctx->r24 = S32(SIGNED(ctx->r15) >> 11);
    // 0x8020DBD8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8020DBDC: beq         $a0, $v0, L_8020DC68
    if (ctx->r4 == ctx->r2) {
        // 0x8020DBE0: andi        $t9, $a2, 0x7C0
        ctx->r25 = ctx->r6 & 0X7C0;
            goto L_8020DC68;
    }
    // 0x8020DBE0: andi        $t9, $a2, 0x7C0
    ctx->r25 = ctx->r6 & 0X7C0;
L_8020DBE4:
    // 0x8020DBE4: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020DBE8: sra         $t2, $t9, 6
    ctx->r10 = S32(SIGNED(ctx->r25) >> 6);
    // 0x8020DBEC: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020DBF0: andi        $t3, $a2, 0x3E
    ctx->r11 = ctx->r6 & 0X3E;
    // 0x8020DBF4: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020DBF8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020DBFC: mul.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8020DC00: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8020DC04: andi        $t5, $a2, 0x1
    ctx->r13 = ctx->r6 & 0X1;
    // 0x8020DC08: lhu         $a2, 0x2($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X2);
    // 0x8020DC0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020DC10: mul.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8020DC14: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020DC18: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020DC1C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020DC20: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8020DC24: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020DC28: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020DC2C: sll         $t8, $t7, 11
    ctx->r24 = S32(ctx->r15 << 11);
    // 0x8020DC30: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8020DC34: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020DC38: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8020DC3C: andi        $t7, $a2, 0xF800
    ctx->r15 = ctx->r6 & 0XF800;
    // 0x8020DC40: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020DC44: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x8020DC48: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x8020DC4C: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x8020DC50: or          $t2, $t6, $t8
    ctx->r10 = ctx->r14 | ctx->r24;
    // 0x8020DC54: sra         $t8, $t7, 11
    ctx->r24 = S32(SIGNED(ctx->r15) >> 11);
    // 0x8020DC58: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8020DC5C: sh          $t2, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r10;
    // 0x8020DC60: bne         $a0, $v0, L_8020DBE4
    if (ctx->r4 != ctx->r2) {
        // 0x8020DC64: andi        $t9, $a2, 0x7C0
        ctx->r25 = ctx->r6 & 0X7C0;
            goto L_8020DBE4;
    }
    // 0x8020DC64: andi        $t9, $a2, 0x7C0
    ctx->r25 = ctx->r6 & 0X7C0;
L_8020DC68:
    // 0x8020DC68: sra         $t2, $t9, 6
    ctx->r10 = S32(SIGNED(ctx->r25) >> 6);
    // 0x8020DC6C: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8020DC70: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020DC74: andi        $t3, $a2, 0x3E
    ctx->r11 = ctx->r6 & 0X3E;
    // 0x8020DC78: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020DC7C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8020DC80: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020DC84: mul.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8020DC88: andi        $t5, $a2, 0x1
    ctx->r13 = ctx->r6 & 0X1;
    // 0x8020DC8C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020DC90: mul.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8020DC94: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020DC98: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020DC9C: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8020DCA0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020DCA4: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020DCA8: sll         $t8, $t7, 11
    ctx->r24 = S32(ctx->r15 << 11);
    // 0x8020DCAC: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8020DCB0: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020DCB4: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8020DCB8: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020DCBC: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x8020DCC0: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x8020DCC4: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x8020DCC8: or          $t2, $t6, $t8
    ctx->r10 = ctx->r14 | ctx->r24;
    // 0x8020DCCC: sh          $t2, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r10;
    // 0x8020DCD0: beq         $v0, $v1, L_8020F364
    if (ctx->r2 == ctx->r3) {
        // 0x8020DCD4: sll         $t3, $v1, 1
        ctx->r11 = S32(ctx->r3 << 1);
            goto L_8020F364;
    }
L_8020DCD4:
    // 0x8020DCD4: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x8020DCD8: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8020DCDC: addu        $a1, $a3, $t9
    ctx->r5 = ADD32(ctx->r7, ctx->r25);
    // 0x8020DCE0: addu        $a0, $t3, $a3
    ctx->r4 = ADD32(ctx->r11, ctx->r7);
L_8020DCE4:
    // 0x8020DCE4: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020DCE8: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8020DCEC: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8020DCF0: andi        $t4, $a2, 0xF800
    ctx->r12 = ctx->r6 & 0XF800;
    // 0x8020DCF4: sra         $t7, $t4, 11
    ctx->r15 = S32(SIGNED(ctx->r12) >> 11);
    // 0x8020DCF8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8020DCFC: andi        $t5, $a2, 0x7C0
    ctx->r13 = ctx->r6 & 0X7C0;
    // 0x8020DD00: sra         $t6, $t5, 6
    ctx->r14 = S32(SIGNED(ctx->r13) >> 6);
    // 0x8020DD04: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020DD08: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8020DD0C: andi        $t8, $a2, 0x3E
    ctx->r24 = ctx->r6 & 0X3E;
    // 0x8020DD10: sra         $t2, $t8, 1
    ctx->r10 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8020DD14: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020DD18: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020DD1C: mul.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020DD20: andi        $t3, $a2, 0x1
    ctx->r11 = ctx->r6 & 0X1;
    // 0x8020DD24: lhu         $t0, 0x6($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X6);
    // 0x8020DD28: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020DD2C: mul.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8020DD30: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020DD34: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020DD38: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8020DD3C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8020DD40: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8020DD44: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8020DD48: sll         $t2, $t8, 6
    ctx->r10 = S32(ctx->r24 << 6);
    // 0x8020DD4C: andi        $t8, $v0, 0xF800
    ctx->r24 = ctx->r2 & 0XF800;
    // 0x8020DD50: sll         $t7, $t4, 11
    ctx->r15 = S32(ctx->r12 << 11);
    // 0x8020DD54: or          $t5, $t3, $t7
    ctx->r13 = ctx->r11 | ctx->r15;
    // 0x8020DD58: or          $t9, $t5, $t2
    ctx->r25 = ctx->r13 | ctx->r10;
    // 0x8020DD5C: sra         $t5, $t8, 11
    ctx->r13 = S32(SIGNED(ctx->r24) >> 11);
    // 0x8020DD60: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8020DD64: andi        $t2, $v0, 0x7C0
    ctx->r10 = ctx->r2 & 0X7C0;
    // 0x8020DD68: sra         $t4, $t2, 6
    ctx->r12 = S32(SIGNED(ctx->r10) >> 6);
    // 0x8020DD6C: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020DD70: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8020DD74: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8020DD78: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020DD7C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8020DD80: mul.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020DD84: sll         $t7, $t3, 1
    ctx->r15 = S32(ctx->r11 << 1);
    // 0x8020DD88: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8020DD8C: mul.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8020DD90: andi        $t3, $v0, 0x3E
    ctx->r11 = ctx->r2 & 0X3E;
    // 0x8020DD94: sra         $t9, $t3, 1
    ctx->r25 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8020DD98: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8020DD9C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x8020DDA0: sh          $t6, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r14;
    // 0x8020DDA4: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020DDA8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020DDAC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8020DDB0: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8020DDB4: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8020DDB8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8020DDBC: sll         $t9, $t3, 6
    ctx->r25 = S32(ctx->r11 << 6);
    // 0x8020DDC0: andi        $t3, $v1, 0xF800
    ctx->r11 = ctx->r3 & 0XF800;
    // 0x8020DDC4: sll         $t5, $t8, 11
    ctx->r13 = S32(ctx->r24 << 11);
    // 0x8020DDC8: or          $t2, $t7, $t5
    ctx->r10 = ctx->r15 | ctx->r13;
    // 0x8020DDCC: or          $t6, $t2, $t9
    ctx->r14 = ctx->r10 | ctx->r25;
    // 0x8020DDD0: sra         $t2, $t3, 11
    ctx->r10 = S32(SIGNED(ctx->r11) >> 11);
    // 0x8020DDD4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8020DDD8: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020DDDC: andi        $t9, $v1, 0x7C0
    ctx->r25 = ctx->r3 & 0X7C0;
    // 0x8020DDE0: sra         $t8, $t9, 6
    ctx->r24 = S32(SIGNED(ctx->r25) >> 6);
    // 0x8020DDE4: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020DDE8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8020DDEC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8020DDF0: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020DDF4: sll         $t5, $t7, 1
    ctx->r13 = S32(ctx->r15 << 1);
    // 0x8020DDF8: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020DDFC: or          $t4, $t6, $t5
    ctx->r12 = ctx->r14 | ctx->r13;
    // 0x8020DE00: andi        $t7, $v1, 0x3E
    ctx->r15 = ctx->r3 & 0X3E;
    // 0x8020DE04: sra         $t6, $t7, 1
    ctx->r14 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8020DE08: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8020DE0C: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8020DE10: andi        $t5, $v1, 0x1
    ctx->r13 = ctx->r3 & 0X1;
    // 0x8020DE14: sh          $t4, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r12;
    // 0x8020DE18: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020DE1C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020DE20: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8020DE24: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8020DE28: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8020DE2C: sll         $t2, $t3, 11
    ctx->r10 = S32(ctx->r11 << 11);
    // 0x8020DE30: or          $t9, $t5, $t2
    ctx->r25 = ctx->r13 | ctx->r10;
    // 0x8020DE34: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8020DE38: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8020DE3C: nop

    // 0x8020DE40: sll         $t6, $t7, 6
    ctx->r14 = S32(ctx->r15 << 6);
    // 0x8020DE44: or          $t4, $t9, $t6
    ctx->r12 = ctx->r25 | ctx->r14;
    // 0x8020DE48: andi        $t7, $t0, 0xF800
    ctx->r15 = ctx->r8 & 0XF800;
    // 0x8020DE4C: sra         $t9, $t7, 11
    ctx->r25 = S32(SIGNED(ctx->r15) >> 11);
    // 0x8020DE50: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8020DE54: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8020DE58: andi        $t6, $t0, 0x7C0
    ctx->r14 = ctx->r8 & 0X7C0;
    // 0x8020DE5C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020DE60: sra         $t3, $t6, 6
    ctx->r11 = S32(SIGNED(ctx->r14) >> 6);
    // 0x8020DE64: sll         $t2, $t5, 1
    ctx->r10 = S32(ctx->r13 << 1);
    // 0x8020DE68: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8020DE6C: or          $t8, $t4, $t2
    ctx->r24 = ctx->r12 | ctx->r10;
    // 0x8020DE70: andi        $t5, $t0, 0x3E
    ctx->r13 = ctx->r8 & 0X3E;
    // 0x8020DE74: sra         $t4, $t5, 1
    ctx->r12 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8020DE78: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020DE7C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8020DE80: mul.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020DE84: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x8020DE88: sh          $t8, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r24;
    // 0x8020DE8C: mul.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8020DE90: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020DE94: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020DE98: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8020DE9C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8020DEA0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8020DEA4: sll         $t9, $t7, 11
    ctx->r25 = S32(ctx->r15 << 11);
    // 0x8020DEA8: or          $t6, $t2, $t9
    ctx->r14 = ctx->r10 | ctx->r25;
    // 0x8020DEAC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020DEB0: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020DEB4: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x8020DEB8: sll         $t4, $t5, 6
    ctx->r12 = S32(ctx->r13 << 6);
    // 0x8020DEBC: or          $t8, $t6, $t4
    ctx->r24 = ctx->r14 | ctx->r12;
    // 0x8020DEC0: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x8020DEC4: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x8020DEC8: bne         $a1, $a0, L_8020DCE4
    if (ctx->r5 != ctx->r4) {
        // 0x8020DECC: sh          $t3, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r11;
            goto L_8020DCE4;
    }
    // 0x8020DECC: sh          $t3, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r11;
    // 0x8020DED0: jr          $ra
    // 0x8020DED4: nop

    return;
    // 0x8020DED4: nop

L_8020DED8:
    // 0x8020DED8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020DEDC: beq         $a1, $at, L_8020DEFC
    if (ctx->r5 == ctx->r1) {
        // 0x8020DEE0: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020DEFC;
    }
    // 0x8020DEE0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020DEE4: beq         $a1, $at, L_8020E348
    if (ctx->r5 == ctx->r1) {
        // 0x8020DEE8: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020E348;
    }
    // 0x8020DEE8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020DEEC: beq         $a1, $at, L_8020E58C
    if (ctx->r5 == ctx->r1) {
        // 0x8020DEF0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020E58C;
    }
    // 0x8020DEF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020DEF4: jr          $ra
    // 0x8020DEF8: nop

    return;
    // 0x8020DEF8: nop

L_8020DEFC:
    // 0x8020DEFC: blez        $a2, L_8020F364
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020DF00: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F364;
    }
    // 0x8020DF00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020DF04: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020DF08: beq         $a1, $zero, L_8020E004
    if (ctx->r5 == 0) {
        // 0x8020DF0C: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020E004;
    }
    // 0x8020DF0C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020DF10: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8020DF14: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020DF18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020DF1C: andi        $t5, $a1, 0xE
    ctx->r13 = ctx->r5 & 0XE;
    // 0x8020DF20: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8020DF24: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020DF28: nop

    // 0x8020DF2C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020DF30: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020DF34: beql        $v1, $v0, L_8020DFB4
    if (ctx->r3 == ctx->r2) {
        // 0x8020DF38: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020DFB4;
    }
    goto skip_2;
    // 0x8020DF38: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_2:
    // 0x8020DF3C: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020DF40:
    // 0x8020DF40: andi        $t4, $a1, 0xF1
    ctx->r12 = ctx->r5 & 0XF1;
    // 0x8020DF44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020DF48: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020DF4C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020DF50: nop

    // 0x8020DF54: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8020DF58: or          $a1, $t4, $t8
    ctx->r5 = ctx->r12 | ctx->r24;
    // 0x8020DF5C: andi        $t3, $a1, 0xE0
    ctx->r11 = ctx->r5 & 0XE0;
    // 0x8020DF60: sra         $t5, $t3, 5
    ctx->r13 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020DF64: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020DF68: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020DF6C: andi        $t6, $a1, 0x1F
    ctx->r14 = ctx->r5 & 0X1F;
    // 0x8020DF70: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020DF74: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020DF78: andi        $t5, $a1, 0xE
    ctx->r13 = ctx->r5 & 0XE;
    // 0x8020DF7C: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020DF80: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020DF84: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020DF88: nop

    // 0x8020DF8C: sll         $t4, $t2, 5
    ctx->r12 = S32(ctx->r10 << 5);
    // 0x8020DF90: or          $t8, $t6, $t4
    ctx->r24 = ctx->r14 | ctx->r12;
    // 0x8020DF94: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8020DF98: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020DF9C: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    // 0x8020DFA0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020DFA4: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020DFA8: bnel        $v1, $v0, L_8020DF40
    if (ctx->r3 != ctx->r2) {
        // 0x8020DFAC: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020DF40;
    }
    goto skip_3;
    // 0x8020DFAC: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_3:
    // 0x8020DFB0: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020DFB4:
    // 0x8020DFB4: andi        $t4, $a1, 0xF1
    ctx->r12 = ctx->r5 & 0XF1;
    // 0x8020DFB8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020DFBC: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020DFC0: nop

    // 0x8020DFC4: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8020DFC8: or          $a1, $t4, $t8
    ctx->r5 = ctx->r12 | ctx->r24;
    // 0x8020DFCC: andi        $t3, $a1, 0xE0
    ctx->r11 = ctx->r5 & 0XE0;
    // 0x8020DFD0: sra         $t5, $t3, 5
    ctx->r13 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020DFD4: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020DFD8: andi        $t6, $a1, 0x1F
    ctx->r14 = ctx->r5 & 0X1F;
    // 0x8020DFDC: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020DFE0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020DFE4: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020DFE8: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020DFEC: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020DFF0: nop

    // 0x8020DFF4: sll         $t4, $t2, 5
    ctx->r12 = S32(ctx->r10 << 5);
    // 0x8020DFF8: or          $t8, $t6, $t4
    ctx->r24 = ctx->r14 | ctx->r12;
    // 0x8020DFFC: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    // 0x8020E000: beq         $v0, $a2, L_8020F364
    if (ctx->r2 == ctx->r6) {
        // 0x8020E004: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020F364;
    }
L_8020E004:
    // 0x8020E004: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x8020E008: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E00C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E010: andi        $t9, $a1, 0xE
    ctx->r25 = ctx->r5 & 0XE;
    // 0x8020E014: sra         $t3, $t9, 1
    ctx->r11 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8020E018: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020E01C: nop

    // 0x8020E020: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E024: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E028: beql        $v0, $a2, L_8020E1CC
    if (ctx->r2 == ctx->r6) {
        // 0x8020E02C: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E1CC;
    }
    goto skip_4;
    // 0x8020E02C: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_4:
    // 0x8020E030: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E034:
    // 0x8020E034: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020E038: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020E03C: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020E040: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E044: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020E048: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020E04C: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x8020E050: or          $a1, $t5, $t6
    ctx->r5 = ctx->r13 | ctx->r14;
    // 0x8020E054: andi        $t8, $a1, 0xE0
    ctx->r24 = ctx->r5 & 0XE0;
    // 0x8020E058: sra         $t9, $t8, 5
    ctx->r25 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020E05C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020E060: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020E064: andi        $t3, $a1, 0x1F
    ctx->r11 = ctx->r5 & 0X1F;
    // 0x8020E068: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E06C: sra         $t8, $t4, 1
    ctx->r24 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020E070: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020E074: andi        $t9, $v1, 0xF1
    ctx->r25 = ctx->r3 & 0XF1;
    // 0x8020E078: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020E07C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E080: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E084: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E088: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020E08C: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E090: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E094: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E098: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E09C: nop

    // 0x8020E0A0: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020E0A4: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E0A8: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E0AC: sb          $t6, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r14;
    // 0x8020E0B0: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8020E0B4: or          $v1, $t9, $t3
    ctx->r3 = ctx->r25 | ctx->r11;
    // 0x8020E0B8: andi        $t6, $v1, 0xE0
    ctx->r14 = ctx->r3 & 0XE0;
    // 0x8020E0BC: sra         $t4, $t6, 5
    ctx->r12 = S32(SIGNED(ctx->r14) >> 5);
    // 0x8020E0C0: mtc1        $t4, $f14
    ctx->f14.u32l = ctx->r12;
    // 0x8020E0C4: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020E0C8: andi        $t5, $t0, 0xE
    ctx->r13 = ctx->r8 & 0XE;
    // 0x8020E0CC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E0D0: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8020E0D4: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020E0D8: andi        $t8, $v1, 0x1F
    ctx->r24 = ctx->r3 & 0X1F;
    // 0x8020E0DC: andi        $t4, $t0, 0xF1
    ctx->r12 = ctx->r8 & 0XF1;
    // 0x8020E0E0: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E0E4: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E0E8: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E0EC: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E0F0: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E0F4: nop

    // 0x8020E0F8: sll         $t9, $t2, 5
    ctx->r25 = S32(ctx->r10 << 5);
    // 0x8020E0FC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E100: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x8020E104: sb          $t3, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r11;
    // 0x8020E108: andi        $t9, $t1, 0xE
    ctx->r25 = ctx->r9 & 0XE;
    // 0x8020E10C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E110: nop

    // 0x8020E114: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8020E118: or          $t0, $t4, $t8
    ctx->r8 = ctx->r12 | ctx->r24;
    // 0x8020E11C: andi        $t3, $t0, 0xE0
    ctx->r11 = ctx->r8 & 0XE0;
    // 0x8020E120: sra         $t5, $t3, 5
    ctx->r13 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020E124: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020E128: sra         $t3, $t9, 1
    ctx->r11 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8020E12C: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020E130: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E134: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020E138: andi        $t6, $t0, 0x1F
    ctx->r14 = ctx->r8 & 0X1F;
    // 0x8020E13C: andi        $t5, $t1, 0xF1
    ctx->r13 = ctx->r9 & 0XF1;
    // 0x8020E140: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E144: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E148: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E14C: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E150: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E154: nop

    // 0x8020E158: sll         $t4, $t2, 5
    ctx->r12 = S32(ctx->r10 << 5);
    // 0x8020E15C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E160: or          $t8, $t6, $t4
    ctx->r24 = ctx->r14 | ctx->r12;
    // 0x8020E164: sb          $t8, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r24;
    // 0x8020E168: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E16C: nop

    // 0x8020E170: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x8020E174: or          $t1, $t5, $t6
    ctx->r9 = ctx->r13 | ctx->r14;
    // 0x8020E178: andi        $t8, $t1, 0xE0
    ctx->r24 = ctx->r9 & 0XE0;
    // 0x8020E17C: sra         $t9, $t8, 5
    ctx->r25 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020E180: mtc1        $t9, $f14
    ctx->f14.u32l = ctx->r25;
    // 0x8020E184: andi        $t3, $t1, 0x1F
    ctx->r11 = ctx->r9 & 0X1F;
    // 0x8020E188: andi        $t9, $a1, 0xE
    ctx->r25 = ctx->r5 & 0XE;
    // 0x8020E18C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E190: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020E194: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E198: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E19C: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E1A0: nop

    // 0x8020E1A4: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020E1A8: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E1AC: sra         $t3, $t9, 1
    ctx->r11 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8020E1B0: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020E1B4: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x8020E1B8: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E1BC: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E1C0: bnel        $v0, $a2, L_8020E034
    if (ctx->r2 != ctx->r6) {
        // 0x8020E1C4: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E034;
    }
    goto skip_5;
    // 0x8020E1C4: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_5:
    // 0x8020E1C8: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E1CC:
    // 0x8020E1CC: andi        $t5, $a1, 0xF1
    ctx->r13 = ctx->r5 & 0XF1;
    // 0x8020E1D0: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020E1D4: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020E1D8: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E1DC: andi        $t4, $v1, 0xE
    ctx->r12 = ctx->r3 & 0XE;
    // 0x8020E1E0: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020E1E4: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x8020E1E8: or          $a1, $t5, $t6
    ctx->r5 = ctx->r13 | ctx->r14;
    // 0x8020E1EC: andi        $t8, $a1, 0xE0
    ctx->r24 = ctx->r5 & 0XE0;
    // 0x8020E1F0: sra         $t9, $t8, 5
    ctx->r25 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020E1F4: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020E1F8: sra         $t8, $t4, 1
    ctx->r24 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020E1FC: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020E200: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E204: andi        $t3, $a1, 0x1F
    ctx->r11 = ctx->r5 & 0X1F;
    // 0x8020E208: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020E20C: andi        $t9, $v1, 0xF1
    ctx->r25 = ctx->r3 & 0XF1;
    // 0x8020E210: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020E214: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E218: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E21C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E220: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E224: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E228: nop

    // 0x8020E22C: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020E230: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E234: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E238: sb          $t6, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r14;
    // 0x8020E23C: andi        $t5, $t0, 0xE
    ctx->r13 = ctx->r8 & 0XE;
    // 0x8020E240: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E244: nop

    // 0x8020E248: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8020E24C: or          $v1, $t9, $t3
    ctx->r3 = ctx->r25 | ctx->r11;
    // 0x8020E250: andi        $t6, $v1, 0xE0
    ctx->r14 = ctx->r3 & 0XE0;
    // 0x8020E254: sra         $t4, $t6, 5
    ctx->r12 = S32(SIGNED(ctx->r14) >> 5);
    // 0x8020E258: mtc1        $t4, $f14
    ctx->f14.u32l = ctx->r12;
    // 0x8020E25C: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x8020E260: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8020E264: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E268: andi        $t8, $v1, 0x1F
    ctx->r24 = ctx->r3 & 0X1F;
    // 0x8020E26C: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020E270: andi        $t4, $t0, 0xF1
    ctx->r12 = ctx->r8 & 0XF1;
    // 0x8020E274: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E278: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E27C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E280: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E284: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E288: nop

    // 0x8020E28C: sll         $t9, $t2, 5
    ctx->r25 = S32(ctx->r10 << 5);
    // 0x8020E290: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E294: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x8020E298: sb          $t3, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r11;
    // 0x8020E29C: andi        $t9, $t1, 0xE
    ctx->r25 = ctx->r9 & 0XE;
    // 0x8020E2A0: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E2A4: nop

    // 0x8020E2A8: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x8020E2AC: or          $t0, $t4, $t8
    ctx->r8 = ctx->r12 | ctx->r24;
    // 0x8020E2B0: andi        $t3, $t0, 0xE0
    ctx->r11 = ctx->r8 & 0XE0;
    // 0x8020E2B4: sra         $t5, $t3, 5
    ctx->r13 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8020E2B8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8020E2BC: sra         $t3, $t9, 1
    ctx->r11 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8020E2C0: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020E2C4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E2C8: andi        $t6, $t0, 0x1F
    ctx->r14 = ctx->r8 & 0X1F;
    // 0x8020E2CC: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020E2D0: andi        $t5, $t1, 0xF1
    ctx->r13 = ctx->r9 & 0XF1;
    // 0x8020E2D4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E2D8: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E2DC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E2E0: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E2E4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E2E8: nop

    // 0x8020E2EC: sll         $t4, $t2, 5
    ctx->r12 = S32(ctx->r10 << 5);
    // 0x8020E2F0: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E2F4: or          $t8, $t6, $t4
    ctx->r24 = ctx->r14 | ctx->r12;
    // 0x8020E2F8: sb          $t8, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r24;
    // 0x8020E2FC: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E300: nop

    // 0x8020E304: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x8020E308: or          $t1, $t5, $t6
    ctx->r9 = ctx->r13 | ctx->r14;
    // 0x8020E30C: andi        $t8, $t1, 0xE0
    ctx->r24 = ctx->r9 & 0XE0;
    // 0x8020E310: sra         $t9, $t8, 5
    ctx->r25 = S32(SIGNED(ctx->r24) >> 5);
    // 0x8020E314: mtc1        $t9, $f14
    ctx->f14.u32l = ctx->r25;
    // 0x8020E318: andi        $t3, $t1, 0x1F
    ctx->r11 = ctx->r9 & 0X1F;
    // 0x8020E31C: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020E320: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E324: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E328: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E32C: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E330: nop

    // 0x8020E334: sll         $t5, $t2, 5
    ctx->r13 = S32(ctx->r10 << 5);
    // 0x8020E338: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E33C: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x8020E340: jr          $ra
    // 0x8020E344: nop

    return;
    // 0x8020E344: nop

L_8020E348:
    // 0x8020E348: blez        $a2, L_8020F364
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020E34C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F364;
    }
    // 0x8020E34C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020E350: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020E354: beq         $a1, $zero, L_8020E3E8
    if (ctx->r5 == 0) {
        // 0x8020E358: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020E3E8;
    }
    // 0x8020E358: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020E35C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8020E360: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E364: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E368: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020E36C: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E370: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020E374: beq         $v1, $v0, L_8020E3C0
    if (ctx->r3 == ctx->r2) {
        // 0x8020E378: cvt.s.w     $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
            goto L_8020E3C0;
    }
    // 0x8020E378: cvt.s.w     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
L_8020E37C:
    // 0x8020E37C: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E380: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8020E384: lbu         $a1, 0x1($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X1);
    // 0x8020E388: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E38C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020E390: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020E394: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E398: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E39C: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020E3A0: nop

    // 0x8020E3A4: cvt.s.w     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E3A8: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020E3AC: nop

    // 0x8020E3B0: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8020E3B4: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8020E3B8: bne         $v1, $v0, L_8020E37C
    if (ctx->r3 != ctx->r2) {
        // 0x8020E3BC: sb          $t6, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r14;
            goto L_8020E37C;
    }
    // 0x8020E3BC: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
L_8020E3C0:
    // 0x8020E3C0: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E3C4: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8020E3C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020E3CC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E3D0: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020E3D4: nop

    // 0x8020E3D8: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8020E3DC: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8020E3E0: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x8020E3E4: beq         $v0, $a2, L_8020F364
    if (ctx->r2 == ctx->r6) {
        // 0x8020E3E8: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020F364;
    }
L_8020E3E8:
    // 0x8020E3E8: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x8020E3EC: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E3F0: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020E3F4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E3F8: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020E3FC: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E400: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E404: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020E408: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E40C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E410: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020E414: mul.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E418: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E41C: beq         $v0, $a2, L_8020E4F0
    if (ctx->r2 == ctx->r6) {
        // 0x8020E420: cvt.s.w     $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
            goto L_8020E4F0;
    }
    // 0x8020E420: cvt.s.w     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
L_8020E424:
    // 0x8020E424: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E428: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020E42C: andi        $t4, $t0, 0xF0
    ctx->r12 = ctx->r8 & 0XF0;
    // 0x8020E430: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E434: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E438: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020E43C: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E440: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020E444: andi        $t4, $t1, 0xF0
    ctx->r12 = ctx->r9 & 0XF0;
    // 0x8020E448: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E44C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8020E450: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E454: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8020E458: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x8020E45C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E460: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E464: or          $t6, $t7, $t5
    ctx->r14 = ctx->r15 | ctx->r13;
    // 0x8020E468: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x8020E46C: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020E470: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020E474: lbu         $v1, 0x5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5);
    // 0x8020E478: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020E47C: sll         $t5, $t7, 4
    ctx->r13 = S32(ctx->r15 << 4);
    // 0x8020E480: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x8020E484: sb          $t6, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r14;
    // 0x8020E488: andi        $t3, $t0, 0xF
    ctx->r11 = ctx->r8 & 0XF;
    // 0x8020E48C: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8020E490: mul.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8020E494: andi        $t4, $a1, 0xF0
    ctx->r12 = ctx->r5 & 0XF0;
    // 0x8020E498: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E49C: mfc1        $t2, $f12
    ctx->r10 = (int32_t)ctx->f12.u32l;
    // 0x8020E4A0: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E4A4: andi        $t9, $t1, 0xF
    ctx->r25 = ctx->r9 & 0XF;
    // 0x8020E4A8: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x8020E4AC: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E4B0: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E4B4: sb          $t6, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r14;
    // 0x8020E4B8: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020E4BC: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E4C0: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020E4C4: mul.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E4C8: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E4CC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E4D0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8020E4D4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020E4D8: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020E4DC: cvt.s.w     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E4E0: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8020E4E4: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8020E4E8: bne         $v0, $a2, L_8020E424
    if (ctx->r2 != ctx->r6) {
        // 0x8020E4EC: sb          $t6, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r14;
            goto L_8020E424;
    }
    // 0x8020E4EC: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
L_8020E4F0:
    // 0x8020E4F0: andi        $t4, $t0, 0xF0
    ctx->r12 = ctx->r8 & 0XF0;
    // 0x8020E4F4: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E4F8: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E4FC: mtc1        $t8, $f12
    ctx->f12.u32l = ctx->r24;
    // 0x8020E500: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020E504: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E508: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8020E50C: andi        $t4, $t1, 0xF0
    ctx->r12 = ctx->r9 & 0XF0;
    // 0x8020E510: sra         $t8, $t4, 4
    ctx->r24 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020E514: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8020E518: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8020E51C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E520: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x8020E524: or          $t6, $t7, $t5
    ctx->r14 = ctx->r15 | ctx->r13;
    // 0x8020E528: andi        $t2, $v1, 0xF
    ctx->r10 = ctx->r3 & 0XF;
    // 0x8020E52C: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x8020E530: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020E534: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E538: andi        $t3, $t0, 0xF
    ctx->r11 = ctx->r8 & 0XF;
    // 0x8020E53C: andi        $t9, $t1, 0xF
    ctx->r25 = ctx->r9 & 0XF;
    // 0x8020E540: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020E544: mul.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8020E548: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E54C: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8020E550: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8020E554: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020E558: sll         $t5, $t7, 4
    ctx->r13 = S32(ctx->r15 << 4);
    // 0x8020E55C: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x8020E560: mfc1        $t2, $f12
    ctx->r10 = (int32_t)ctx->f12.u32l;
    // 0x8020E564: sb          $t6, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r14;
    // 0x8020E568: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x8020E56C: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8020E570: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8020E574: sb          $t6, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r14;
    // 0x8020E578: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x8020E57C: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x8020E580: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x8020E584: jr          $ra
    // 0x8020E588: nop

    return;
    // 0x8020E588: nop

L_8020E58C:
    // 0x8020E58C: bgez        $a2, L_8020E59C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8020E590: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8020E59C;
    }
    // 0x8020E590: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8020E594: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8020E598: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8020E59C:
    // 0x8020E59C: blez        $v1, L_8020F364
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020E5A0: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_8020F364;
    }
    // 0x8020E5A0: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x8020E5A4: beq         $a2, $zero, L_8020E63C
    if (ctx->r6 == 0) {
        // 0x8020E5A8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8020E63C;
    }
    // 0x8020E5A8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8020E5AC: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x8020E5B0: addu        $a1, $a3, $t4
    ctx->r5 = ADD32(ctx->r7, ctx->r12);
    // 0x8020E5B4: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020E5B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E5BC: andi        $t8, $a2, 0xFF00
    ctx->r24 = ctx->r6 & 0XFF00;
    // 0x8020E5C0: sra         $t7, $t8, 8
    ctx->r15 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020E5C4: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020E5C8: beq         $a0, $v0, L_8020E614
    if (ctx->r4 == ctx->r2) {
        // 0x8020E5CC: cvt.s.w     $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
            goto L_8020E614;
    }
    // 0x8020E5CC: cvt.s.w     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
L_8020E5D0:
    // 0x8020E5D0: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E5D4: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x8020E5D8: lhu         $a2, 0x2($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X2);
    // 0x8020E5DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E5E0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020E5E4: andi        $t8, $a2, 0xFF00
    ctx->r24 = ctx->r6 & 0XFF00;
    // 0x8020E5E8: sra         $t7, $t8, 8
    ctx->r15 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8020E5EC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E5F0: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020E5F4: nop

    // 0x8020E5F8: cvt.s.w     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E5FC: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8020E600: nop

    // 0x8020E604: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8020E608: or          $t4, $t2, $t6
    ctx->r12 = ctx->r10 | ctx->r14;
    // 0x8020E60C: bne         $a0, $v0, L_8020E5D0
    if (ctx->r4 != ctx->r2) {
        // 0x8020E610: sh          $t4, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r12;
            goto L_8020E5D0;
    }
    // 0x8020E610: sh          $t4, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r12;
L_8020E614:
    // 0x8020E614: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E618: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x8020E61C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020E620: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E624: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8020E628: nop

    // 0x8020E62C: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8020E630: or          $t4, $t2, $t6
    ctx->r12 = ctx->r10 | ctx->r14;
    // 0x8020E634: sh          $t4, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r12;
    // 0x8020E638: beq         $v0, $v1, L_8020F364
    if (ctx->r2 == ctx->r3) {
        // 0x8020E63C: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_8020F364;
    }
L_8020E63C:
    // 0x8020E63C: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x8020E640: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8020E644: addu        $a1, $a3, $t7
    ctx->r5 = ADD32(ctx->r7, ctx->r15);
    // 0x8020E648: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    // 0x8020E64C: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020E650: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8020E654: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020E658: andi        $t3, $a2, 0xFF00
    ctx->r11 = ctx->r6 & 0XFF00;
    // 0x8020E65C: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E660: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E664: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020E668: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E66C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E670: lhu         $v1, -0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, -0X4);
    // 0x8020E674: mul.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E678: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E67C: beq         $a1, $a0, L_8020E74C
    if (ctx->r5 == ctx->r4) {
        // 0x8020E680: cvt.s.w     $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
            goto L_8020E74C;
    }
    // 0x8020E680: cvt.s.w     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
L_8020E684:
    // 0x8020E684: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E688: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x8020E68C: andi        $t3, $v1, 0xFF00
    ctx->r11 = ctx->r3 & 0XFF00;
    // 0x8020E690: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E694: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E698: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x8020E69C: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E6A0: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8020E6A4: andi        $t3, $t0, 0xFF00
    ctx->r11 = ctx->r8 & 0XFF00;
    // 0x8020E6A8: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E6AC: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8020E6B0: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E6B4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8020E6B8: sll         $t8, $t4, 8
    ctx->r24 = S32(ctx->r12 << 8);
    // 0x8020E6BC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E6C0: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E6C4: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x8020E6C8: sh          $t7, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r15;
    // 0x8020E6CC: mfc1        $t5, $f14
    ctx->r13 = (int32_t)ctx->f14.u32l;
    // 0x8020E6D0: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8020E6D4: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8020E6D8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020E6DC: sll         $t8, $t5, 8
    ctx->r24 = S32(ctx->r13 << 8);
    // 0x8020E6E0: or          $t7, $t2, $t8
    ctx->r15 = ctx->r10 | ctx->r24;
    // 0x8020E6E4: sh          $t7, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r15;
    // 0x8020E6E8: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020E6EC: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8020E6F0: mul.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8020E6F4: andi        $t3, $a2, 0xFF00
    ctx->r11 = ctx->r6 & 0XFF00;
    // 0x8020E6F8: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E6FC: mfc1        $t2, $f12
    ctx->r10 = (int32_t)ctx->f12.u32l;
    // 0x8020E700: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E704: andi        $t4, $t0, 0xFF
    ctx->r12 = ctx->r8 & 0XFF;
    // 0x8020E708: sll         $t8, $t2, 8
    ctx->r24 = S32(ctx->r10 << 8);
    // 0x8020E70C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E710: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8020E714: sh          $t7, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r15;
    // 0x8020E718: andi        $t3, $v0, 0xFF00
    ctx->r11 = ctx->r2 & 0XFF00;
    // 0x8020E71C: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E720: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020E724: mul.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E728: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E72C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020E730: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8020E734: lhu         $v1, -0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, -0X4);
    // 0x8020E738: cvt.s.w     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E73C: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x8020E740: or          $t7, $t4, $t8
    ctx->r15 = ctx->r12 | ctx->r24;
    // 0x8020E744: bne         $a1, $a0, L_8020E684
    if (ctx->r5 != ctx->r4) {
        // 0x8020E748: sh          $t7, -0xA($a1)
        MEM_H(-0XA, ctx->r5) = ctx->r15;
            goto L_8020E684;
    }
    // 0x8020E748: sh          $t7, -0xA($a1)
    MEM_H(-0XA, ctx->r5) = ctx->r15;
L_8020E74C:
    // 0x8020E74C: andi        $t3, $v1, 0xFF00
    ctx->r11 = ctx->r3 & 0XFF00;
    // 0x8020E750: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E754: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E758: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x8020E75C: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x8020E760: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8020E764: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8020E768: andi        $t3, $t0, 0xFF00
    ctx->r11 = ctx->r8 & 0XFF00;
    // 0x8020E76C: sra         $t9, $t3, 8
    ctx->r25 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8020E770: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8020E774: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x8020E778: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8020E77C: sll         $t8, $t4, 8
    ctx->r24 = S32(ctx->r12 << 8);
    // 0x8020E780: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x8020E784: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8020E788: sh          $t7, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r15;
    // 0x8020E78C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020E790: mul.s       $f12, $f2, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8020E794: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x8020E798: andi        $t4, $t0, 0xFF
    ctx->r12 = ctx->r8 & 0XFF;
    // 0x8020E79C: mul.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8020E7A0: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E7A4: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8020E7A8: mfc1        $t5, $f14
    ctx->r13 = (int32_t)ctx->f14.u32l;
    // 0x8020E7AC: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8020E7B0: sll         $t8, $t5, 8
    ctx->r24 = S32(ctx->r13 << 8);
    // 0x8020E7B4: or          $t7, $t2, $t8
    ctx->r15 = ctx->r10 | ctx->r24;
    // 0x8020E7B8: mfc1        $t2, $f12
    ctx->r10 = (int32_t)ctx->f12.u32l;
    // 0x8020E7BC: sh          $t7, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r15;
    // 0x8020E7C0: sll         $t8, $t2, 8
    ctx->r24 = S32(ctx->r10 << 8);
    // 0x8020E7C4: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8020E7C8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8020E7CC: sh          $t7, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r15;
    // 0x8020E7D0: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x8020E7D4: or          $t7, $t4, $t8
    ctx->r15 = ctx->r12 | ctx->r24;
    // 0x8020E7D8: sh          $t7, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r15;
    // 0x8020E7DC: jr          $ra
    // 0x8020E7E0: nop

    return;
    // 0x8020E7E0: nop

L_8020E7E4:
    // 0x8020E7E4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8020E7E8: beq         $a1, $at, L_8020E808
    if (ctx->r5 == ctx->r1) {
        // 0x8020E7EC: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8020E808;
    }
    // 0x8020E7EC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8020E7F0: beq         $a1, $at, L_8020EC1C
    if (ctx->r5 == ctx->r1) {
        // 0x8020E7F4: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8020EC1C;
    }
    // 0x8020E7F4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8020E7F8: beq         $a1, $at, L_8020EFB8
    if (ctx->r5 == ctx->r1) {
        // 0x8020E7FC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020EFB8;
    }
    // 0x8020E7FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020E800: jr          $ra
    // 0x8020E804: nop

    return;
    // 0x8020E804: nop

L_8020E808:
    // 0x8020E808: blez        $a2, L_8020F364
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020E80C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F364;
    }
    // 0x8020E80C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020E810: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020E814: beq         $a1, $zero, L_8020E908
    if (ctx->r5 == 0) {
        // 0x8020E818: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020E908;
    }
    // 0x8020E818: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020E81C: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8020E820: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E828: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020E82C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020E830: nop

    // 0x8020E834: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E838: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E83C: beql        $v1, $v0, L_8020E8B8
    if (ctx->r3 == ctx->r2) {
        // 0x8020E840: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E8B8;
    }
    goto skip_6;
    // 0x8020E840: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_6:
    // 0x8020E844: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E848:
    // 0x8020E848: andi        $t9, $a1, 0xF0
    ctx->r25 = ctx->r5 & 0XF0;
    // 0x8020E84C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020E850: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020E854: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E858: nop

    // 0x8020E85C: andi        $t6, $t2, 0xF
    ctx->r14 = ctx->r10 & 0XF;
    // 0x8020E860: or          $a1, $t9, $t6
    ctx->r5 = ctx->r25 | ctx->r14;
    // 0x8020E864: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020E868: sra         $t7, $t8, 4
    ctx->r15 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020E86C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020E870: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020E874: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020E878: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E87C: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E880: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E884: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E888: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020E88C: nop

    // 0x8020E890: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x8020E894: or          $t4, $t3, $t6
    ctx->r12 = ctx->r11 | ctx->r14;
    // 0x8020E898: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020E89C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8020E8A0: sb          $t4, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r12;
    // 0x8020E8A4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E8A8: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E8AC: bnel        $v1, $v0, L_8020E848
    if (ctx->r3 != ctx->r2) {
        // 0x8020E8B0: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E848;
    }
    goto skip_7;
    // 0x8020E8B0: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_7:
    // 0x8020E8B4: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E8B8:
    // 0x8020E8B8: andi        $t9, $a1, 0xF0
    ctx->r25 = ctx->r5 & 0XF0;
    // 0x8020E8BC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020E8C0: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E8C4: nop

    // 0x8020E8C8: andi        $t6, $t2, 0xF
    ctx->r14 = ctx->r10 & 0XF;
    // 0x8020E8CC: or          $a1, $t9, $t6
    ctx->r5 = ctx->r25 | ctx->r14;
    // 0x8020E8D0: andi        $t8, $a1, 0xF0
    ctx->r24 = ctx->r5 & 0XF0;
    // 0x8020E8D4: sra         $t7, $t8, 4
    ctx->r15 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8020E8D8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8020E8DC: andi        $t3, $a1, 0xF
    ctx->r11 = ctx->r5 & 0XF;
    // 0x8020E8E0: sb          $a1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r5;
    // 0x8020E8E4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E8E8: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E8EC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E8F0: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8020E8F4: nop

    // 0x8020E8F8: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x8020E8FC: or          $t4, $t3, $t6
    ctx->r12 = ctx->r11 | ctx->r14;
    // 0x8020E900: sb          $t4, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r12;
    // 0x8020E904: beq         $v0, $a2, L_8020F364
    if (ctx->r2 == ctx->r6) {
        // 0x8020E908: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020F364;
    }
L_8020E908:
    // 0x8020E908: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
    // 0x8020E90C: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x8020E910: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E914: andi        $t8, $a1, 0xF
    ctx->r24 = ctx->r5 & 0XF;
    // 0x8020E918: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020E91C: nop

    // 0x8020E920: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E924: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E928: beql        $v0, $a2, L_8020EAB8
    if (ctx->r2 == ctx->r6) {
        // 0x8020E92C: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020EAB8;
    }
    goto skip_8;
    // 0x8020E92C: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_8:
    // 0x8020E930: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020E934:
    // 0x8020E934: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020E938: andi        $t7, $a1, 0xF0
    ctx->r15 = ctx->r5 & 0XF0;
    // 0x8020E93C: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020E940: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020E944: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020E948: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020E94C: andi        $t9, $t2, 0xF
    ctx->r25 = ctx->r10 & 0XF;
    // 0x8020E950: or          $a1, $t7, $t9
    ctx->r5 = ctx->r15 | ctx->r25;
    // 0x8020E954: andi        $t6, $a1, 0xF0
    ctx->r14 = ctx->r5 & 0XF0;
    // 0x8020E958: sra         $t4, $t6, 4
    ctx->r12 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8020E95C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020E960: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8020E964: andi        $t8, $a1, 0xF
    ctx->r24 = ctx->r5 & 0XF;
    // 0x8020E968: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E96C: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020E970: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020E974: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020E978: lbu         $a1, 0x4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4);
    // 0x8020E97C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E980: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E984: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020E988: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E98C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E990: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E994: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020E998: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020E99C: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x8020E9A0: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x8020E9A4: sb          $t3, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r11;
    // 0x8020E9A8: andi        $t7, $t2, 0xF
    ctx->r15 = ctx->r10 & 0XF;
    // 0x8020E9AC: or          $v1, $t4, $t7
    ctx->r3 = ctx->r12 | ctx->r15;
    // 0x8020E9B0: andi        $t9, $v1, 0xF0
    ctx->r25 = ctx->r3 & 0XF0;
    // 0x8020E9B4: sra         $t3, $t9, 4
    ctx->r11 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8020E9B8: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020E9BC: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020E9C0: andi        $t9, $t0, 0xF
    ctx->r25 = ctx->r8 & 0XF;
    // 0x8020E9C4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020E9C8: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020E9CC: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020E9D0: andi        $t3, $t0, 0xF0
    ctx->r11 = ctx->r8 & 0XF0;
    // 0x8020E9D4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020E9D8: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020E9DC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020E9E0: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020E9E4: mfc1        $t4, $f14
    ctx->r12 = (int32_t)ctx->f14.u32l;
    // 0x8020E9E8: nop

    // 0x8020E9EC: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x8020E9F0: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020E9F4: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8020E9F8: sb          $t8, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r24;
    // 0x8020E9FC: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020EA00: nop

    // 0x8020EA04: andi        $t4, $t2, 0xF
    ctx->r12 = ctx->r10 & 0XF;
    // 0x8020EA08: or          $t0, $t3, $t4
    ctx->r8 = ctx->r11 | ctx->r12;
    // 0x8020EA0C: andi        $t7, $t0, 0xF0
    ctx->r15 = ctx->r8 & 0XF0;
    // 0x8020EA10: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020EA14: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020EA18: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020EA1C: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020EA20: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020EA24: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020EA28: andi        $t9, $t0, 0xF
    ctx->r25 = ctx->r8 & 0XF;
    // 0x8020EA2C: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020EA30: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EA34: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020EA38: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020EA3C: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EA40: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020EA44: nop

    // 0x8020EA48: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x8020EA4C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EA50: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x8020EA54: sb          $t6, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r14;
    // 0x8020EA58: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020EA5C: nop

    // 0x8020EA60: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x8020EA64: or          $t1, $t8, $t3
    ctx->r9 = ctx->r24 | ctx->r11;
    // 0x8020EA68: andi        $t4, $t1, 0xF0
    ctx->r12 = ctx->r9 & 0XF0;
    // 0x8020EA6C: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020EA70: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020EA74: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020EA78: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020EA7C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EA80: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EA84: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EA88: mfc1        $t8, $f14
    ctx->r24 = (int32_t)ctx->f14.u32l;
    // 0x8020EA8C: nop

    // 0x8020EA90: sll         $t3, $t8, 4
    ctx->r11 = S32(ctx->r24 << 4);
    // 0x8020EA94: andi        $t8, $a1, 0xF
    ctx->r24 = ctx->r5 & 0XF;
    // 0x8020EA98: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8020EA9C: or          $t9, $t7, $t3
    ctx->r25 = ctx->r15 | ctx->r11;
    // 0x8020EAA0: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020EAA4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EAA8: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EAAC: bnel        $v0, $a2, L_8020E934
    if (ctx->r2 != ctx->r6) {
        // 0x8020EAB0: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8020E934;
    }
    goto skip_9;
    // 0x8020EAB0: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_9:
    // 0x8020EAB4: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8020EAB8:
    // 0x8020EAB8: andi        $t7, $a1, 0xF0
    ctx->r15 = ctx->r5 & 0XF0;
    // 0x8020EABC: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x8020EAC0: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8020EAC4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020EAC8: lbu         $t1, 0x3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3);
    // 0x8020EACC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020EAD0: andi        $t9, $t2, 0xF
    ctx->r25 = ctx->r10 & 0XF;
    // 0x8020EAD4: or          $a1, $t7, $t9
    ctx->r5 = ctx->r15 | ctx->r25;
    // 0x8020EAD8: andi        $t6, $a1, 0xF0
    ctx->r14 = ctx->r5 & 0XF0;
    // 0x8020EADC: sra         $t4, $t6, 4
    ctx->r12 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8020EAE0: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8020EAE4: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020EAE8: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020EAEC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020EAF0: andi        $t8, $a1, 0xF
    ctx->r24 = ctx->r5 & 0XF;
    // 0x8020EAF4: andi        $t4, $v1, 0xF0
    ctx->r12 = ctx->r3 & 0XF0;
    // 0x8020EAF8: sb          $a1, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r5;
    // 0x8020EAFC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EB00: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020EB04: nop

    // 0x8020EB08: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EB0C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020EB10: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EB14: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8020EB18: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020EB1C: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x8020EB20: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x8020EB24: andi        $t7, $t2, 0xF
    ctx->r15 = ctx->r10 & 0XF;
    // 0x8020EB28: or          $v1, $t4, $t7
    ctx->r3 = ctx->r12 | ctx->r15;
    // 0x8020EB2C: andi        $t9, $v1, 0xF0
    ctx->r25 = ctx->r3 & 0XF0;
    // 0x8020EB30: sb          $t3, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r11;
    // 0x8020EB34: sra         $t3, $t9, 4
    ctx->r11 = S32(SIGNED(ctx->r25) >> 4);
    // 0x8020EB38: mtc1        $t3, $f14
    ctx->f14.u32l = ctx->r11;
    // 0x8020EB3C: andi        $t9, $t0, 0xF
    ctx->r25 = ctx->r8 & 0XF;
    // 0x8020EB40: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8020EB44: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EB48: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x8020EB4C: andi        $t3, $t0, 0xF0
    ctx->r11 = ctx->r8 & 0XF0;
    // 0x8020EB50: sb          $v1, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r3;
    // 0x8020EB54: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020EB58: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EB5C: nop

    // 0x8020EB60: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020EB64: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EB68: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020EB6C: mfc1        $t4, $f14
    ctx->r12 = (int32_t)ctx->f14.u32l;
    // 0x8020EB70: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8020EB74: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x8020EB78: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8020EB7C: andi        $t4, $t2, 0xF
    ctx->r12 = ctx->r10 & 0XF;
    // 0x8020EB80: or          $t0, $t3, $t4
    ctx->r8 = ctx->r11 | ctx->r12;
    // 0x8020EB84: andi        $t7, $t0, 0xF0
    ctx->r15 = ctx->r8 & 0XF0;
    // 0x8020EB88: sb          $t8, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r24;
    // 0x8020EB8C: sra         $t8, $t7, 4
    ctx->r24 = S32(SIGNED(ctx->r15) >> 4);
    // 0x8020EB90: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020EB94: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020EB98: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x8020EB9C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020EBA0: andi        $t9, $t0, 0xF
    ctx->r25 = ctx->r8 & 0XF;
    // 0x8020EBA4: andi        $t8, $t1, 0xF0
    ctx->r24 = ctx->r9 & 0XF0;
    // 0x8020EBA8: sb          $t0, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r8;
    // 0x8020EBAC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EBB0: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8020EBB4: nop

    // 0x8020EBB8: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EBBC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8020EBC0: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EBC4: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8020EBC8: mfc1        $t2, $f14
    ctx->r10 = (int32_t)ctx->f14.u32l;
    // 0x8020EBCC: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x8020EBD0: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x8020EBD4: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x8020EBD8: or          $t1, $t8, $t3
    ctx->r9 = ctx->r24 | ctx->r11;
    // 0x8020EBDC: andi        $t4, $t1, 0xF0
    ctx->r12 = ctx->r9 & 0XF0;
    // 0x8020EBE0: sb          $t6, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r14;
    // 0x8020EBE4: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8020EBE8: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x8020EBEC: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x8020EBF0: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x8020EBF4: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8020EBF8: mul.s       $f14, $f2, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8020EBFC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8020EC00: mfc1        $t8, $f14
    ctx->r24 = (int32_t)ctx->f14.u32l;
    // 0x8020EC04: nop

    // 0x8020EC08: sll         $t3, $t8, 4
    ctx->r11 = S32(ctx->r24 << 4);
    // 0x8020EC0C: or          $t9, $t7, $t3
    ctx->r25 = ctx->r15 | ctx->r11;
    // 0x8020EC10: sb          $t9, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r25;
    // 0x8020EC14: jr          $ra
    // 0x8020EC18: nop

    return;
    // 0x8020EC18: nop

L_8020EC1C:
    // 0x8020EC1C: blez        $a2, L_8020F364
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8020EC20: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8020F364;
    }
    // 0x8020EC20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020EC24: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x8020EC28: beq         $a1, $zero, L_8020ECF0
    if (ctx->r5 == 0) {
        // 0x8020EC2C: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8020ECF0;
    }
    // 0x8020EC2C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020EC30: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
L_8020EC34:
    // 0x8020EC34: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x8020EC38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020EC3C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020EC40: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8020EC44: bgez        $t4, L_8020EC58
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8020EC48: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020EC58;
    }
    // 0x8020EC48: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020EC4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EC50: nop

    // 0x8020EC54: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020EC58:
    // 0x8020EC58: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020EC5C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020EC60: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020EC64: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020EC68: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020EC6C: nop

    // 0x8020EC70: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020EC74: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020EC78: nop

    // 0x8020EC7C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020EC80: beql        $t5, $zero, L_8020ECD0
    if (ctx->r13 == 0) {
        // 0x8020EC84: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_8020ECD0;
    }
    goto skip_10;
    // 0x8020EC84: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_10:
    // 0x8020EC88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020EC8C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020EC90: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020EC94: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020EC98: nop

    // 0x8020EC9C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020ECA0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020ECA4: nop

    // 0x8020ECA8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020ECAC: bne         $t5, $zero, L_8020ECC4
    if (ctx->r13 != 0) {
        // 0x8020ECB0: nop
    
            goto L_8020ECC4;
    }
    // 0x8020ECB0: nop

    // 0x8020ECB4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020ECB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020ECBC: b           L_8020ECDC
    // 0x8020ECC0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020ECDC;
    // 0x8020ECC0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020ECC4:
    // 0x8020ECC4: b           L_8020ECDC
    // 0x8020ECC8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020ECDC;
    // 0x8020ECC8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020ECCC: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_8020ECD0:
    // 0x8020ECD0: nop

    // 0x8020ECD4: bltz        $t5, L_8020ECC4
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020ECD8: nop
    
            goto L_8020ECC4;
    }
    // 0x8020ECD8: nop

L_8020ECDC:
    // 0x8020ECDC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020ECE0: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
    // 0x8020ECE4: bne         $v1, $v0, L_8020EC34
    if (ctx->r3 != ctx->r2) {
        // 0x8020ECE8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8020EC34;
    }
    // 0x8020ECE8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020ECEC: beq         $v0, $a2, L_8020F364
    if (ctx->r2 == ctx->r6) {
        // 0x8020ECF0: addu        $a0, $a3, $v0
        ctx->r4 = ADD32(ctx->r7, ctx->r2);
            goto L_8020F364;
    }
L_8020ECF0:
    // 0x8020ECF0: addu        $a0, $a3, $v0
    ctx->r4 = ADD32(ctx->r7, ctx->r2);
L_8020ECF4:
    // 0x8020ECF4: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x8020ECF8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020ECFC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020ED00: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020ED04: bgez        $t2, L_8020ED18
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8020ED08: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020ED18;
    }
    // 0x8020ED08: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020ED0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020ED10: nop

    // 0x8020ED14: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020ED18:
    // 0x8020ED18: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020ED1C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020ED20: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020ED24: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020ED28: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020ED2C: nop

    // 0x8020ED30: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020ED34: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020ED38: nop

    // 0x8020ED3C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020ED40: beql        $t7, $zero, L_8020ED90
    if (ctx->r15 == 0) {
        // 0x8020ED44: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_8020ED90;
    }
    goto skip_11;
    // 0x8020ED44: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_11:
    // 0x8020ED48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020ED4C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020ED50: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020ED54: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020ED58: nop

    // 0x8020ED5C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020ED60: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020ED64: nop

    // 0x8020ED68: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020ED6C: bne         $t7, $zero, L_8020ED84
    if (ctx->r15 != 0) {
        // 0x8020ED70: nop
    
            goto L_8020ED84;
    }
    // 0x8020ED70: nop

    // 0x8020ED74: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8020ED78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020ED7C: b           L_8020ED9C
    // 0x8020ED80: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8020ED9C;
    // 0x8020ED80: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8020ED84:
    // 0x8020ED84: b           L_8020ED9C
    // 0x8020ED88: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8020ED9C;
    // 0x8020ED88: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8020ED8C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_8020ED90:
    // 0x8020ED90: nop

    // 0x8020ED94: bltz        $t7, L_8020ED84
    if (SIGNED(ctx->r15) < 0) {
        // 0x8020ED98: nop
    
            goto L_8020ED84;
    }
    // 0x8020ED98: nop

L_8020ED9C:
    // 0x8020ED9C: lbu         $t3, 0x1($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1);
    // 0x8020EDA0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020EDA4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020EDA8: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8020EDAC: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x8020EDB0: bgez        $t3, L_8020EDC4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8020EDB4: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020EDC4;
    }
    // 0x8020EDB4: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020EDB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EDBC: nop

    // 0x8020EDC0: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020EDC4:
    // 0x8020EDC4: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020EDC8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020EDCC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020EDD0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020EDD4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020EDD8: nop

    // 0x8020EDDC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020EDE0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020EDE4: nop

    // 0x8020EDE8: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020EDEC: beql        $t4, $zero, L_8020EE3C
    if (ctx->r12 == 0) {
        // 0x8020EDF0: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_8020EE3C;
    }
    goto skip_12;
    // 0x8020EDF0: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_12:
    // 0x8020EDF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020EDF8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020EDFC: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020EE00: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020EE04: nop

    // 0x8020EE08: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020EE0C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020EE10: nop

    // 0x8020EE14: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020EE18: bne         $t4, $zero, L_8020EE30
    if (ctx->r12 != 0) {
        // 0x8020EE1C: nop
    
            goto L_8020EE30;
    }
    // 0x8020EE1C: nop

    // 0x8020EE20: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8020EE24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020EE28: b           L_8020EE48
    // 0x8020EE2C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020EE48;
    // 0x8020EE2C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020EE30:
    // 0x8020EE30: b           L_8020EE48
    // 0x8020EE34: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020EE48;
    // 0x8020EE34: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020EE38: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_8020EE3C:
    // 0x8020EE3C: nop

    // 0x8020EE40: bltz        $t4, L_8020EE30
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020EE44: nop
    
            goto L_8020EE30;
    }
    // 0x8020EE44: nop

L_8020EE48:
    // 0x8020EE48: lbu         $t6, 0x2($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2);
    // 0x8020EE4C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020EE50: sb          $t4, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r12;
    // 0x8020EE54: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8020EE58: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020EE5C: bgez        $t6, L_8020EE70
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020EE60: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020EE70;
    }
    // 0x8020EE60: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020EE64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EE68: nop

    // 0x8020EE6C: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020EE70:
    // 0x8020EE70: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020EE74: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020EE78: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020EE7C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020EE80: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020EE84: nop

    // 0x8020EE88: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020EE8C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020EE90: nop

    // 0x8020EE94: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020EE98: beql        $t2, $zero, L_8020EEE8
    if (ctx->r10 == 0) {
        // 0x8020EE9C: mfc1        $t2, $f8
        ctx->r10 = (int32_t)ctx->f8.u32l;
            goto L_8020EEE8;
    }
    goto skip_13;
    // 0x8020EE9C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    skip_13:
    // 0x8020EEA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020EEA4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020EEA8: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020EEAC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020EEB0: nop

    // 0x8020EEB4: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020EEB8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020EEBC: nop

    // 0x8020EEC0: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8020EEC4: bne         $t2, $zero, L_8020EEDC
    if (ctx->r10 != 0) {
        // 0x8020EEC8: nop
    
            goto L_8020EEDC;
    }
    // 0x8020EEC8: nop

    // 0x8020EECC: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8020EED0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020EED4: b           L_8020EEF4
    // 0x8020EED8: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8020EEF4;
    // 0x8020EED8: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8020EEDC:
    // 0x8020EEDC: b           L_8020EEF4
    // 0x8020EEE0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8020EEF4;
    // 0x8020EEE0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8020EEE4: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_8020EEE8:
    // 0x8020EEE8: nop

    // 0x8020EEEC: bltz        $t2, L_8020EEDC
    if (SIGNED(ctx->r10) < 0) {
        // 0x8020EEF0: nop
    
            goto L_8020EEDC;
    }
    // 0x8020EEF0: nop

L_8020EEF4:
    // 0x8020EEF4: lbu         $t8, 0x3($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X3);
    // 0x8020EEF8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020EEFC: sb          $t2, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r10;
    // 0x8020EF00: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8020EF04: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020EF08: bgez        $t8, L_8020EF1C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8020EF0C: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020EF1C;
    }
    // 0x8020EF0C: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020EF10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EF14: nop

    // 0x8020EF18: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020EF1C:
    // 0x8020EF1C: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020EF20: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020EF24: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020EF28: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020EF2C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020EF30: nop

    // 0x8020EF34: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020EF38: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020EF3C: nop

    // 0x8020EF40: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020EF44: beql        $t3, $zero, L_8020EF94
    if (ctx->r11 == 0) {
        // 0x8020EF48: mfc1        $t3, $f8
        ctx->r11 = (int32_t)ctx->f8.u32l;
            goto L_8020EF94;
    }
    goto skip_14;
    // 0x8020EF48: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    skip_14:
    // 0x8020EF4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020EF50: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020EF54: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020EF58: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020EF5C: nop

    // 0x8020EF60: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020EF64: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020EF68: nop

    // 0x8020EF6C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020EF70: bne         $t3, $zero, L_8020EF88
    if (ctx->r11 != 0) {
        // 0x8020EF74: nop
    
            goto L_8020EF88;
    }
    // 0x8020EF74: nop

    // 0x8020EF78: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x8020EF7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020EF80: b           L_8020EFA0
    // 0x8020EF84: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8020EFA0;
    // 0x8020EF84: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8020EF88:
    // 0x8020EF88: b           L_8020EFA0
    // 0x8020EF8C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8020EFA0;
    // 0x8020EF8C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8020EF90: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
L_8020EF94:
    // 0x8020EF94: nop

    // 0x8020EF98: bltz        $t3, L_8020EF88
    if (SIGNED(ctx->r11) < 0) {
        // 0x8020EF9C: nop
    
            goto L_8020EF88;
    }
    // 0x8020EF9C: nop

L_8020EFA0:
    // 0x8020EFA0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020EFA4: sb          $t3, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r11;
    // 0x8020EFA8: bne         $v0, $a2, L_8020ECF4
    if (ctx->r2 != ctx->r6) {
        // 0x8020EFAC: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8020ECF4;
    }
    // 0x8020EFAC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020EFB0: jr          $ra
    // 0x8020EFB4: nop

    return;
    // 0x8020EFB4: nop

L_8020EFB8:
    // 0x8020EFB8: bgez        $a2, L_8020EFC8
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8020EFBC: sra         $v1, $a2, 1
        ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8020EFC8;
    }
    // 0x8020EFBC: sra         $v1, $a2, 1
    ctx->r3 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8020EFC0: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8020EFC4: sra         $v1, $at, 1
    ctx->r3 = S32(SIGNED(ctx->r1) >> 1);
L_8020EFC8:
    // 0x8020EFC8: blez        $v1, L_8020F364
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020EFCC: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_8020F364;
    }
    // 0x8020EFCC: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x8020EFD0: beq         $a2, $zero, L_8020F09C
    if (ctx->r6 == 0) {
        // 0x8020EFD4: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8020F09C;
    }
    // 0x8020EFD4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8020EFD8: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8020EFDC: addu        $a1, $a3, $t9
    ctx->r5 = ADD32(ctx->r7, ctx->r25);
L_8020EFE0:
    // 0x8020EFE0: lhu         $t4, 0x0($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X0);
    // 0x8020EFE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8020EFE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020EFEC: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8020EFF0: bgez        $t4, L_8020F004
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8020EFF4: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020F004;
    }
    // 0x8020EFF4: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020EFF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EFFC: nop

    // 0x8020F000: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020F004:
    // 0x8020F004: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020F008: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020F00C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020F010: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020F014: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020F018: nop

    // 0x8020F01C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020F020: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020F024: nop

    // 0x8020F028: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020F02C: beql        $t5, $zero, L_8020F07C
    if (ctx->r13 == 0) {
        // 0x8020F030: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_8020F07C;
    }
    goto skip_15;
    // 0x8020F030: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_15:
    // 0x8020F034: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F038: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020F03C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020F040: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020F044: nop

    // 0x8020F048: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020F04C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020F050: nop

    // 0x8020F054: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020F058: bne         $t5, $zero, L_8020F070
    if (ctx->r13 != 0) {
        // 0x8020F05C: nop
    
            goto L_8020F070;
    }
    // 0x8020F05C: nop

    // 0x8020F060: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020F064: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020F068: b           L_8020F088
    // 0x8020F06C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020F088;
    // 0x8020F06C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020F070:
    // 0x8020F070: b           L_8020F088
    // 0x8020F074: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020F088;
    // 0x8020F074: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020F078: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_8020F07C:
    // 0x8020F07C: nop

    // 0x8020F080: bltz        $t5, L_8020F070
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020F084: nop
    
            goto L_8020F070;
    }
    // 0x8020F084: nop

L_8020F088:
    // 0x8020F088: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020F08C: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
    // 0x8020F090: bne         $a0, $v0, L_8020EFE0
    if (ctx->r4 != ctx->r2) {
        // 0x8020F094: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_8020EFE0;
    }
    // 0x8020F094: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8020F098: beq         $v0, $v1, L_8020F364
    if (ctx->r2 == ctx->r3) {
        // 0x8020F09C: sll         $t2, $v1, 1
        ctx->r10 = S32(ctx->r3 << 1);
            goto L_8020F364;
    }
L_8020F09C:
    // 0x8020F09C: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x8020F0A0: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8020F0A4: addu        $a1, $a3, $t8
    ctx->r5 = ADD32(ctx->r7, ctx->r24);
    // 0x8020F0A8: addu        $a0, $t2, $a3
    ctx->r4 = ADD32(ctx->r10, ctx->r7);
L_8020F0AC:
    // 0x8020F0AC: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8020F0B0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020F0B4: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8020F0B8: bgez        $t7, L_8020F0CC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020F0BC: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020F0CC;
    }
    // 0x8020F0BC: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020F0C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F0C4: nop

    // 0x8020F0C8: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020F0CC:
    // 0x8020F0CC: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020F0D0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020F0D4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020F0D8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020F0DC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020F0E0: nop

    // 0x8020F0E4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020F0E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020F0EC: nop

    // 0x8020F0F0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020F0F4: beql        $t9, $zero, L_8020F144
    if (ctx->r25 == 0) {
        // 0x8020F0F8: mfc1        $t9, $f8
        ctx->r25 = (int32_t)ctx->f8.u32l;
            goto L_8020F144;
    }
    goto skip_16;
    // 0x8020F0F8: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    skip_16:
    // 0x8020F0FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F100: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020F104: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020F108: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020F10C: nop

    // 0x8020F110: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020F114: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020F118: nop

    // 0x8020F11C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020F120: bne         $t9, $zero, L_8020F138
    if (ctx->r25 != 0) {
        // 0x8020F124: nop
    
            goto L_8020F138;
    }
    // 0x8020F124: nop

    // 0x8020F128: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8020F12C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020F130: b           L_8020F150
    // 0x8020F134: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020F150;
    // 0x8020F134: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020F138:
    // 0x8020F138: b           L_8020F150
    // 0x8020F13C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020F150;
    // 0x8020F13C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020F140: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
L_8020F144:
    // 0x8020F144: nop

    // 0x8020F148: bltz        $t9, L_8020F138
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020F14C: nop
    
            goto L_8020F138;
    }
    // 0x8020F14C: nop

L_8020F150:
    // 0x8020F150: lhu         $t4, 0x2($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X2);
    // 0x8020F154: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020F158: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020F15C: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8020F160: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x8020F164: bgez        $t4, L_8020F178
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8020F168: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020F178;
    }
    // 0x8020F168: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020F16C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F170: nop

    // 0x8020F174: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020F178:
    // 0x8020F178: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020F17C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020F180: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020F184: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020F188: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020F18C: nop

    // 0x8020F190: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020F194: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020F198: nop

    // 0x8020F19C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020F1A0: beql        $t5, $zero, L_8020F1F0
    if (ctx->r13 == 0) {
        // 0x8020F1A4: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_8020F1F0;
    }
    goto skip_17;
    // 0x8020F1A4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_17:
    // 0x8020F1A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F1AC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020F1B0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020F1B4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8020F1B8: nop

    // 0x8020F1BC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020F1C0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8020F1C4: nop

    // 0x8020F1C8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8020F1CC: bne         $t5, $zero, L_8020F1E4
    if (ctx->r13 != 0) {
        // 0x8020F1D0: nop
    
            goto L_8020F1E4;
    }
    // 0x8020F1D0: nop

    // 0x8020F1D4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8020F1D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020F1DC: b           L_8020F1FC
    // 0x8020F1E0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8020F1FC;
    // 0x8020F1E0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8020F1E4:
    // 0x8020F1E4: b           L_8020F1FC
    // 0x8020F1E8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8020F1FC;
    // 0x8020F1E8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8020F1EC: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_8020F1F0:
    // 0x8020F1F0: nop

    // 0x8020F1F4: bltz        $t5, L_8020F1E4
    if (SIGNED(ctx->r13) < 0) {
        // 0x8020F1F8: nop
    
            goto L_8020F1E4;
    }
    // 0x8020F1F8: nop

L_8020F1FC:
    // 0x8020F1FC: lhu         $t2, 0x4($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X4);
    // 0x8020F200: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020F204: sh          $t5, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r13;
    // 0x8020F208: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8020F20C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020F210: bgez        $t2, L_8020F224
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8020F214: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020F224;
    }
    // 0x8020F214: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020F218: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F21C: nop

    // 0x8020F220: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020F224:
    // 0x8020F224: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020F228: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020F22C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020F230: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020F234: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020F238: nop

    // 0x8020F23C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020F240: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020F244: nop

    // 0x8020F248: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020F24C: beql        $t7, $zero, L_8020F29C
    if (ctx->r15 == 0) {
        // 0x8020F250: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_8020F29C;
    }
    goto skip_18;
    // 0x8020F250: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_18:
    // 0x8020F254: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F258: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020F25C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020F260: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020F264: nop

    // 0x8020F268: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020F26C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020F270: nop

    // 0x8020F274: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020F278: bne         $t7, $zero, L_8020F290
    if (ctx->r15 != 0) {
        // 0x8020F27C: nop
    
            goto L_8020F290;
    }
    // 0x8020F27C: nop

    // 0x8020F280: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8020F284: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020F288: b           L_8020F2A8
    // 0x8020F28C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8020F2A8;
    // 0x8020F28C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8020F290:
    // 0x8020F290: b           L_8020F2A8
    // 0x8020F294: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8020F2A8;
    // 0x8020F294: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8020F298: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_8020F29C:
    // 0x8020F29C: nop

    // 0x8020F2A0: bltz        $t7, L_8020F290
    if (SIGNED(ctx->r15) < 0) {
        // 0x8020F2A4: nop
    
            goto L_8020F290;
    }
    // 0x8020F2A4: nop

L_8020F2A8:
    // 0x8020F2A8: lhu         $t3, 0x6($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X6);
    // 0x8020F2AC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020F2B0: sh          $t7, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r15;
    // 0x8020F2B4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8020F2B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020F2BC: bgez        $t3, L_8020F2D0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8020F2C0: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020F2D0;
    }
    // 0x8020F2C0: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020F2C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F2C8: nop

    // 0x8020F2CC: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8020F2D0:
    // 0x8020F2D0: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8020F2D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020F2D8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020F2DC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020F2E0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020F2E4: nop

    // 0x8020F2E8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020F2EC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020F2F0: nop

    // 0x8020F2F4: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020F2F8: beql        $t4, $zero, L_8020F348
    if (ctx->r12 == 0) {
        // 0x8020F2FC: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_8020F348;
    }
    goto skip_19;
    // 0x8020F2FC: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_19:
    // 0x8020F300: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F304: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020F308: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020F30C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020F310: nop

    // 0x8020F314: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020F318: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020F31C: nop

    // 0x8020F320: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020F324: bne         $t4, $zero, L_8020F33C
    if (ctx->r12 != 0) {
        // 0x8020F328: nop
    
            goto L_8020F33C;
    }
    // 0x8020F328: nop

    // 0x8020F32C: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8020F330: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020F334: b           L_8020F354
    // 0x8020F338: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020F354;
    // 0x8020F338: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020F33C:
    // 0x8020F33C: b           L_8020F354
    // 0x8020F340: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020F354;
    // 0x8020F340: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020F344: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_8020F348:
    // 0x8020F348: nop

    // 0x8020F34C: bltz        $t4, L_8020F33C
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020F350: nop
    
            goto L_8020F33C;
    }
    // 0x8020F350: nop

L_8020F354:
    // 0x8020F354: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020F358: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8020F35C: bne         $a1, $a0, L_8020F0AC
    if (ctx->r5 != ctx->r4) {
        // 0x8020F360: sh          $t4, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r12;
            goto L_8020F0AC;
    }
    // 0x8020F360: sh          $t4, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r12;
L_8020F364:
    // 0x8020F364: jr          $ra
    // 0x8020F368: nop

    return;
    // 0x8020F368: nop

;}
RECOMP_FUNC void D_802E6DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6E70: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802E6E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E6E78: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802E6E7C: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E6E80: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E6E84: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E6E88: bne         $v1, $zero, L_802E6EB0
    if (ctx->r3 != 0) {
        // 0x802E6E8C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E6EB0;
    }
    // 0x802E6E8C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E6E90: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E6E94: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E6E98: jal         0x80231A24
    // 0x802E6E9C: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E6E9C: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E6EA0: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802E6EA4: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E6EA8: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E6EAC: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E6EB0:
    // 0x802E6EB0: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E6EB4: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802E6EB8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E6EBC: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x802E6EC0: jalr        $t9
    // 0x802E6EC4: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E6EC4: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E6EC8: jal         0x803183D0
    // 0x802E6ECC: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    static_3_803183D0(rdram, ctx);
        goto after_2;
    // 0x802E6ECC: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_2:
    // 0x802E6ED0: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E6ED4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802E6ED8: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E6EDC: lh          $t8, 0x10($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X10);
    // 0x802E6EE0: jalr        $t9
    // 0x802E6EE4: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802E6EE4: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_3:
    // 0x802E6EE8: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802E6EEC: jal         0x802CF718
    // 0x802E6EF0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_802CF718(rdram, ctx);
        goto after_4;
    // 0x802E6EF0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x802E6EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E6EF8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802E6EFC: jr          $ra
    // 0x802E6F00: nop

    return;
    // 0x802E6F00: nop

;}
RECOMP_FUNC void D_802E69EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6A6C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E6A70: jr          $ra
    // 0x802E6A74: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802E6A74: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80230F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230F10: jr          $ra
    // 0x80230F14: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80230F14: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void D_80234E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234E80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80234E84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234E88: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80234E8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80234E90: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x80234E94: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x80234E98: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80234E9C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80234EA0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80234EA4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80234EA8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80234EAC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80234EB0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80234EB4: jal         0x8023F37C
    // 0x80234EB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80234EB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80234EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234EC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80234EC4: jr          $ra
    // 0x80234EC8: nop

    return;
    // 0x80234EC8: nop

;}
RECOMP_FUNC void D_80299454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802994D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802994D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802994DC: jr          $ra
    // 0x802994E0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802994E0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802497D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802497D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802497D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802497D8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802497DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802497E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802497E4: jal         0x80241760
    // 0x802497E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x802497E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802497EC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x802497F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802497F4: bne         $t6, $zero, L_8024980C
    if (ctx->r14 != 0) {
        // 0x802497F8: nop
    
            goto L_8024980C;
    }
    // 0x802497F8: nop

    // 0x802497FC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80249800: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80249804: b           L_8024982C
    // 0x80249808: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
        goto L_8024982C;
    // 0x80249808: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_8024980C:
    // 0x8024980C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80249810: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80249814: lhu         $t9, 0x10($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X10);
    // 0x80249818: beq         $t9, $at, L_8024982C
    if (ctx->r25 == ctx->r1) {
        // 0x8024981C: nop
    
            goto L_8024982C;
    }
    // 0x8024981C: nop

    // 0x80249820: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x80249824: jal         0x802417A0
    // 0x80249828: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    static_3_802417A0(rdram, ctx);
        goto after_1;
    // 0x80249828: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
L_8024982C:
    // 0x8024982C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80249830: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80249834: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80249838: bne         $t0, $t1, L_80249850
    if (ctx->r8 != ctx->r9) {
        // 0x8024983C: nop
    
            goto L_80249850;
    }
    // 0x8024983C: nop

    // 0x80249840: lw          $t2, 0xC($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XC);
    // 0x80249844: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80249848: b           L_8024988C
    // 0x8024984C: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
        goto L_8024988C;
    // 0x8024984C: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
L_80249850:
    // 0x80249850: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80249854: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80249858: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x8024985C: beq         $s2, $zero, L_8024988C
    if (ctx->r18 == 0) {
        // 0x80249860: nop
    
            goto L_8024988C;
    }
    // 0x80249860: nop

L_80249864:
    // 0x80249864: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80249868: bne         $s2, $t3, L_8024987C
    if (ctx->r18 != ctx->r11) {
        // 0x8024986C: nop
    
            goto L_8024987C;
    }
    // 0x8024986C: nop

    // 0x80249870: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x80249874: b           L_8024988C
    // 0x80249878: sw          $t4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r12;
        goto L_8024988C;
    // 0x80249878: sw          $t4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r12;
L_8024987C:
    // 0x8024987C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x80249880: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x80249884: bne         $s2, $zero, L_80249864
    if (ctx->r18 != 0) {
        // 0x80249888: nop
    
            goto L_80249864;
    }
    // 0x80249888: nop

L_8024988C:
    // 0x8024988C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80249890: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80249894: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80249898: bne         $t5, $t6, L_802498A8
    if (ctx->r13 != ctx->r14) {
        // 0x8024989C: nop
    
            goto L_802498A8;
    }
    // 0x8024989C: nop

    // 0x802498A0: jal         0x80241F54
    // 0x802498A4: nop

    static_3_80241F54(rdram, ctx);
        goto after_2;
    // 0x802498A4: nop

    after_2:
L_802498A8:
    // 0x802498A8: jal         0x80241780
    // 0x802498AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_3;
    // 0x802498AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802498B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802498B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802498B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802498BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802498C0: jr          $ra
    // 0x802498C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802498C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_80227260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227260: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80227264: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80227268: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8022726C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80227270: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80227274: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80227278: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8022727C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80227280: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80227284: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80227288: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8022728C: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x80227290: jal         0x8022B948
    // 0x80227294: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_0;
    // 0x80227294: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80227298: addiu       $s3, $sp, 0x50
    ctx->r19 = ADD32(ctx->r29, 0X50);
    // 0x8022729C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x802272A0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802272A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802272A8: jal         0x80225424
    // 0x802272AC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_80225424(rdram, ctx);
        goto after_1;
    // 0x802272AC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_1:
    // 0x802272B0: addiu       $a0, $s4, 0x18
    ctx->r4 = ADD32(ctx->r20, 0X18);
    // 0x802272B4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802272B8: jal         0x80225424
    // 0x802272BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x802272BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802272C0: addiu       $a0, $s4, 0x19
    ctx->r4 = ADD32(ctx->r20, 0X19);
    // 0x802272C4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802272C8: jal         0x80225424
    // 0x802272CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x802272CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x802272D0: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x802272D4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802272D8: jal         0x80225424
    // 0x802272DC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_4;
    // 0x802272DC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x802272E0: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x802272E4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802272E8: jal         0x80225424
    // 0x802272EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x802272EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x802272F0: addiu       $a0, $s4, 0x24
    ctx->r4 = ADD32(ctx->r20, 0X24);
    // 0x802272F4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802272F8: jal         0x80225424
    // 0x802272FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x802272FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x80227300: lbu         $t6, 0x18($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X18);
    // 0x80227304: lbu         $t7, 0x19($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X19);
    // 0x80227308: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022730C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227310: mflo        $s7
    ctx->r23 = lo;
    // 0x80227314: sll         $a0, $s7, 2
    ctx->r4 = S32(ctx->r23 << 2);
    // 0x80227318: addu        $a0, $a0, $s7
    ctx->r4 = ADD32(ctx->r4, ctx->r23);
    // 0x8022731C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80227320: subu        $a0, $a0, $s7
    ctx->r4 = SUB32(ctx->r4, ctx->r23);
    // 0x80227324: jal         0x8022B948
    // 0x80227328: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    func_8022B948(rdram, ctx);
        goto after_7;
    // 0x80227328: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    after_7:
    // 0x8022732C: sw          $v0, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r2;
    // 0x80227330: blez        $s7, L_802273D8
    if (SIGNED(ctx->r23) <= 0) {
        // 0x80227334: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802273D8;
    }
    // 0x80227334: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80227338: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x8022733C: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80227340: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80227344: addiu       $s5, $sp, 0x3F
    ctx->r21 = ADD32(ctx->r29, 0X3F);
L_80227348:
    // 0x80227348: lw          $t8, 0x28($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X28);
    // 0x8022734C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80227350: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227358: jal         0x80225424
    // 0x8022735C: addu        $s0, $t8, $s2
    ctx->r16 = ADD32(ctx->r24, ctx->r18);
    func_80225424(rdram, ctx);
        goto after_8;
    // 0x8022735C: addu        $s0, $t8, $s2
    ctx->r16 = ADD32(ctx->r24, ctx->r18);
    after_8:
    // 0x80227360: lbu         $t9, 0x3F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3F);
    // 0x80227364: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    // 0x80227368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022736C: bne         $t9, $zero, L_80227388
    if (ctx->r25 != 0) {
        // 0x80227370: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80227388;
    }
    // 0x80227370: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227378: jal         0x8022B780
    // 0x8022737C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_9;
    // 0x8022737C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80227380: b           L_802273D0
    // 0x80227384: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_802273D0;
    // 0x80227384: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80227388:
    // 0x80227388: jal         0x80225424
    // 0x8022738C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_80225424(rdram, ctx);
        goto after_10;
    // 0x8022738C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_10:
    // 0x80227390: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x80227394: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227398: jal         0x80225424
    // 0x8022739C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_11;
    // 0x8022739C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x802273A0: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x802273A4: addiu       $a0, $s0, 0x4A
    ctx->r4 = ADD32(ctx->r16, 0X4A);
    // 0x802273A8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802273AC: jal         0x80225424
    // 0x802273B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_12;
    // 0x802273B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_12:
    // 0x802273B4: lhu         $t1, 0x4A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X4A);
    // 0x802273B8: lw          $t0, 0x24($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X24);
    // 0x802273BC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802273C0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x802273C4: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x802273C8: sw          $t4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r12;
    // 0x802273CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802273D0:
    // 0x802273D0: bne         $s1, $s7, L_80227348
    if (ctx->r17 != ctx->r23) {
        // 0x802273D4: addiu       $s2, $s2, 0x4C
        ctx->r18 = ADD32(ctx->r18, 0X4C);
            goto L_80227348;
    }
    // 0x802273D4: addiu       $s2, $s2, 0x4C
    ctx->r18 = ADD32(ctx->r18, 0X4C);
L_802273D8:
    // 0x802273D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802273DC: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x802273E0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802273E4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802273E8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802273EC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802273F0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802273F4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802273F8: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x802273FC: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80227400: jr          $ra
    // 0x80227404: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80227404: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_802803B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028042C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280430: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80280434: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80280438: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8028043C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80280440: jal         0x8031A6BC
    // 0x80280444: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_8031A6BC(rdram, ctx);
        goto after_0;
    // 0x80280444: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80280448: lbu         $v0, 0x6790($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6790);
    // 0x8028044C: sb          $zero, 0x716C($s2)
    MEM_B(0X716C, ctx->r18) = 0;
    // 0x80280450: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80280454: blez        $v0, L_8028048C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280458: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8028048C;
    }
    // 0x80280458: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8028045C:
    // 0x8028045C: lw          $a0, 0x676C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X676C);
    // 0x80280460: beql        $a0, $zero, L_8028047C
    if (ctx->r4 == 0) {
        // 0x80280464: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8028047C;
    }
    goto skip_0;
    // 0x80280464: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80280468: jal         0x8028A810
    // 0x8028046C: nop

    static_3_8028A810(rdram, ctx);
        goto after_1;
    // 0x8028046C: nop

    after_1:
    // 0x80280470: sw          $zero, 0x676C($s0)
    MEM_W(0X676C, ctx->r16) = 0;
    // 0x80280474: lbu         $v0, 0x6790($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6790);
    // 0x80280478: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8028047C:
    // 0x8028047C: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280480: bne         $at, $zero, L_8028045C
    if (ctx->r1 != 0) {
        // 0x80280484: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8028045C;
    }
    // 0x80280484: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280488: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8028048C:
    // 0x8028048C: lbu         $v0, 0x67A8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X67A8);
    // 0x80280490: sb          $zero, 0x6790($s2)
    MEM_B(0X6790, ctx->r18) = 0;
    // 0x80280494: sb          $zero, 0x6791($s2)
    MEM_B(0X6791, ctx->r18) = 0;
    // 0x80280498: blez        $v0, L_802804D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8028049C: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_802804D0;
    }
    // 0x8028049C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_802804A0:
    // 0x802804A0: lw          $a0, 0x6794($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6794);
    // 0x802804A4: beql        $a0, $zero, L_802804C0
    if (ctx->r4 == 0) {
        // 0x802804A8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802804C0;
    }
    goto skip_1;
    // 0x802804A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x802804AC: jal         0x802B34F4
    // 0x802804B0: nop

    static_3_802B34F4(rdram, ctx);
        goto after_2;
    // 0x802804B0: nop

    after_2:
    // 0x802804B4: sw          $zero, 0x6794($s0)
    MEM_W(0X6794, ctx->r16) = 0;
    // 0x802804B8: lbu         $v0, 0x67A8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X67A8);
    // 0x802804BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802804C0:
    // 0x802804C0: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802804C4: bne         $at, $zero, L_802804A0
    if (ctx->r1 != 0) {
        // 0x802804C8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802804A0;
    }
    // 0x802804C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802804CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802804D0:
    // 0x802804D0: lbu         $v0, 0x680C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X680C);
    // 0x802804D4: sb          $zero, 0x67A8($s2)
    MEM_B(0X67A8, ctx->r18) = 0;
    // 0x802804D8: sb          $zero, 0x67A9($s2)
    MEM_B(0X67A9, ctx->r18) = 0;
    // 0x802804DC: blez        $v0, L_80280514
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802804E0: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280514;
    }
    // 0x802804E0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_802804E4:
    // 0x802804E4: lw          $a0, 0x6800($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6800);
    // 0x802804E8: beql        $a0, $zero, L_80280504
    if (ctx->r4 == 0) {
        // 0x802804EC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280504;
    }
    goto skip_2;
    // 0x802804EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x802804F0: jal         0x80289BA0
    // 0x802804F4: nop

    static_3_80289BA0(rdram, ctx);
        goto after_3;
    // 0x802804F4: nop

    after_3:
    // 0x802804F8: sw          $zero, 0x6800($s0)
    MEM_W(0X6800, ctx->r16) = 0;
    // 0x802804FC: lbu         $v0, 0x680C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X680C);
    // 0x80280500: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280504:
    // 0x80280504: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280508: bne         $at, $zero, L_802804E4
    if (ctx->r1 != 0) {
        // 0x8028050C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802804E4;
    }
    // 0x8028050C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280510: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280514:
    // 0x80280514: lbu         $v0, 0x68A8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X68A8);
    // 0x80280518: sb          $zero, 0x680C($s2)
    MEM_B(0X680C, ctx->r18) = 0;
    // 0x8028051C: sb          $zero, 0x680D($s2)
    MEM_B(0X680D, ctx->r18) = 0;
    // 0x80280520: blez        $v0, L_80280558
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280524: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280558;
    }
    // 0x80280524: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280528:
    // 0x80280528: lw          $t6, 0x6888($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X6888);
    // 0x8028052C: beql        $t6, $zero, L_80280548
    if (ctx->r14 == 0) {
        // 0x80280530: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280548;
    }
    goto skip_3;
    // 0x80280530: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x80280534: jal         0x802B39D8
    // 0x80280538: lw          $a0, 0x68A4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68A4);
    static_3_802B39D8(rdram, ctx);
        goto after_4;
    // 0x80280538: lw          $a0, 0x68A4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68A4);
    after_4:
    // 0x8028053C: sw          $zero, 0x68A4($s0)
    MEM_W(0X68A4, ctx->r16) = 0;
    // 0x80280540: lbu         $v0, 0x68A8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X68A8);
    // 0x80280544: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280548:
    // 0x80280548: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8028054C: bne         $at, $zero, L_80280528
    if (ctx->r1 != 0) {
        // 0x80280550: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280528;
    }
    // 0x80280550: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280554: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280558:
    // 0x80280558: lbu         $v0, 0x68A0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X68A0);
    // 0x8028055C: sb          $zero, 0x68A8($s2)
    MEM_B(0X68A8, ctx->r18) = 0;
    // 0x80280560: sb          $zero, 0x68A9($s2)
    MEM_B(0X68A9, ctx->r18) = 0;
    // 0x80280564: blez        $v0, L_8028059C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280568: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8028059C;
    }
    // 0x80280568: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8028056C:
    // 0x8028056C: lw          $a0, 0x689C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X689C);
    // 0x80280570: beql        $a0, $zero, L_8028058C
    if (ctx->r4 == 0) {
        // 0x80280574: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8028058C;
    }
    goto skip_4;
    // 0x80280574: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x80280578: jal         0x802C6430
    // 0x8028057C: nop

    static_3_802C6430(rdram, ctx);
        goto after_5;
    // 0x8028057C: nop

    after_5:
    // 0x80280580: sw          $zero, 0x689C($s0)
    MEM_W(0X689C, ctx->r16) = 0;
    // 0x80280584: lbu         $v0, 0x68A0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X68A0);
    // 0x80280588: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8028058C:
    // 0x8028058C: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280590: bne         $at, $zero, L_8028056C
    if (ctx->r1 != 0) {
        // 0x80280594: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8028056C;
    }
    // 0x80280594: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280598: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8028059C:
    // 0x8028059C: lbu         $v0, 0x68B0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X68B0);
    // 0x802805A0: sb          $zero, 0x68A0($s2)
    MEM_B(0X68A0, ctx->r18) = 0;
    // 0x802805A4: sb          $zero, 0x68A1($s2)
    MEM_B(0X68A1, ctx->r18) = 0;
    // 0x802805A8: blez        $v0, L_802805E0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802805AC: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_802805E0;
    }
    // 0x802805AC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_802805B0:
    // 0x802805B0: lw          $a0, 0x68AC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68AC);
    // 0x802805B4: beql        $a0, $zero, L_802805D0
    if (ctx->r4 == 0) {
        // 0x802805B8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802805D0;
    }
    goto skip_5;
    // 0x802805B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x802805BC: jal         0x8029DBFC
    // 0x802805C0: nop

    static_3_8029DBFC(rdram, ctx);
        goto after_6;
    // 0x802805C0: nop

    after_6:
    // 0x802805C4: sw          $zero, 0x68AC($s0)
    MEM_W(0X68AC, ctx->r16) = 0;
    // 0x802805C8: lbu         $v0, 0x68B0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X68B0);
    // 0x802805CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802805D0:
    // 0x802805D0: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802805D4: bne         $at, $zero, L_802805B0
    if (ctx->r1 != 0) {
        // 0x802805D8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802805B0;
    }
    // 0x802805D8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802805DC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802805E0:
    // 0x802805E0: lbu         $v0, 0x6898($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6898);
    // 0x802805E4: sb          $zero, 0x68B0($s2)
    MEM_B(0X68B0, ctx->r18) = 0;
    // 0x802805E8: sb          $zero, 0x68B1($s2)
    MEM_B(0X68B1, ctx->r18) = 0;
    // 0x802805EC: blez        $v0, L_80280624
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802805F0: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280624;
    }
    // 0x802805F0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_802805F4:
    // 0x802805F4: lw          $a0, 0x6888($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6888);
    // 0x802805F8: beql        $a0, $zero, L_80280614
    if (ctx->r4 == 0) {
        // 0x802805FC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280614;
    }
    goto skip_6;
    // 0x802805FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x80280600: jal         0x8029F000
    // 0x80280604: nop

    static_3_8029F000(rdram, ctx);
        goto after_7;
    // 0x80280604: nop

    after_7:
    // 0x80280608: sw          $zero, 0x6888($s0)
    MEM_W(0X6888, ctx->r16) = 0;
    // 0x8028060C: lbu         $v0, 0x6898($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6898);
    // 0x80280610: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280614:
    // 0x80280614: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280618: bne         $at, $zero, L_802805F4
    if (ctx->r1 != 0) {
        // 0x8028061C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802805F4;
    }
    // 0x8028061C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280620: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280624:
    // 0x80280624: lbu         $v0, 0x6824($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6824);
    // 0x80280628: sb          $zero, 0x6898($s2)
    MEM_B(0X6898, ctx->r18) = 0;
    // 0x8028062C: sb          $zero, 0x6899($s2)
    MEM_B(0X6899, ctx->r18) = 0;
    // 0x80280630: blez        $v0, L_80280668
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280634: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280668;
    }
    // 0x80280634: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280638:
    // 0x80280638: lw          $a0, 0x6810($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6810);
    // 0x8028063C: beql        $a0, $zero, L_80280658
    if (ctx->r4 == 0) {
        // 0x80280640: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280658;
    }
    goto skip_7;
    // 0x80280640: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x80280644: jal         0x8028AD9C
    // 0x80280648: nop

    static_3_8028AD9C(rdram, ctx);
        goto after_8;
    // 0x80280648: nop

    after_8:
    // 0x8028064C: sw          $zero, 0x6810($s0)
    MEM_W(0X6810, ctx->r16) = 0;
    // 0x80280650: lbu         $v0, 0x6824($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6824);
    // 0x80280654: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280658:
    // 0x80280658: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8028065C: bne         $at, $zero, L_80280638
    if (ctx->r1 != 0) {
        // 0x80280660: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280638;
    }
    // 0x80280660: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280664: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280668:
    // 0x80280668: lbu         $v0, 0x71E4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X71E4);
    // 0x8028066C: sb          $zero, 0x6824($s2)
    MEM_B(0X6824, ctx->r18) = 0;
    // 0x80280670: sb          $zero, 0x6825($s2)
    MEM_B(0X6825, ctx->r18) = 0;
    // 0x80280674: blez        $v0, L_802806AC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280678: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_802806AC;
    }
    // 0x80280678: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8028067C:
    // 0x8028067C: lw          $a0, 0x71C4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X71C4);
    // 0x80280680: beql        $a0, $zero, L_8028069C
    if (ctx->r4 == 0) {
        // 0x80280684: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8028069C;
    }
    goto skip_8;
    // 0x80280684: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
    // 0x80280688: jal         0x80308C8C
    // 0x8028068C: nop

    static_3_80308C8C(rdram, ctx);
        goto after_9;
    // 0x8028068C: nop

    after_9:
    // 0x80280690: sw          $zero, 0x71C4($s0)
    MEM_W(0X71C4, ctx->r16) = 0;
    // 0x80280694: lbu         $v0, 0x71E4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X71E4);
    // 0x80280698: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8028069C:
    // 0x8028069C: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802806A0: bne         $at, $zero, L_8028067C
    if (ctx->r1 != 0) {
        // 0x802806A4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8028067C;
    }
    // 0x802806A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802806A8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802806AC:
    // 0x802806AC: lbu         $v0, 0x6884($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6884);
    // 0x802806B0: sb          $zero, 0x71E4($s2)
    MEM_B(0X71E4, ctx->r18) = 0;
    // 0x802806B4: sb          $zero, 0x71E5($s2)
    MEM_B(0X71E5, ctx->r18) = 0;
    // 0x802806B8: blez        $v0, L_802806F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802806BC: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_802806F0;
    }
    // 0x802806BC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_802806C0:
    // 0x802806C0: lw          $a0, 0x6854($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6854);
    // 0x802806C4: beql        $a0, $zero, L_802806E0
    if (ctx->r4 == 0) {
        // 0x802806C8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802806E0;
    }
    goto skip_9;
    // 0x802806C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x802806CC: jal         0x802C11E4
    // 0x802806D0: nop

    static_3_802C11E4(rdram, ctx);
        goto after_10;
    // 0x802806D0: nop

    after_10:
    // 0x802806D4: sw          $zero, 0x6854($s0)
    MEM_W(0X6854, ctx->r16) = 0;
    // 0x802806D8: lbu         $v0, 0x6884($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6884);
    // 0x802806DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802806E0:
    // 0x802806E0: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802806E4: bne         $at, $zero, L_802806C0
    if (ctx->r1 != 0) {
        // 0x802806E8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802806C0;
    }
    // 0x802806E8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802806EC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802806F0:
    // 0x802806F0: lbu         $v0, 0x6830($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6830);
    // 0x802806F4: sb          $zero, 0x6884($s2)
    MEM_B(0X6884, ctx->r18) = 0;
    // 0x802806F8: sb          $zero, 0x6885($s2)
    MEM_B(0X6885, ctx->r18) = 0;
    // 0x802806FC: blez        $v0, L_80280734
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280700: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280734;
    }
    // 0x80280700: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280704:
    // 0x80280704: lw          $a0, 0x6828($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6828);
    // 0x80280708: beql        $a0, $zero, L_80280724
    if (ctx->r4 == 0) {
        // 0x8028070C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280724;
    }
    goto skip_10;
    // 0x8028070C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_10:
    // 0x80280710: jal         0x802D711C
    // 0x80280714: nop

    static_3_802D711C(rdram, ctx);
        goto after_11;
    // 0x80280714: nop

    after_11:
    // 0x80280718: sw          $zero, 0x6828($s0)
    MEM_W(0X6828, ctx->r16) = 0;
    // 0x8028071C: lbu         $v0, 0x6830($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6830);
    // 0x80280720: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280724:
    // 0x80280724: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280728: bne         $at, $zero, L_80280704
    if (ctx->r1 != 0) {
        // 0x8028072C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280704;
    }
    // 0x8028072C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280730: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280734:
    // 0x80280734: lbu         $v0, 0x6850($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6850);
    // 0x80280738: sb          $zero, 0x6830($s2)
    MEM_B(0X6830, ctx->r18) = 0;
    // 0x8028073C: sb          $zero, 0x6831($s2)
    MEM_B(0X6831, ctx->r18) = 0;
    // 0x80280740: blez        $v0, L_80280778
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280744: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280778;
    }
    // 0x80280744: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280748:
    // 0x80280748: lw          $a0, 0x6834($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6834);
    // 0x8028074C: beql        $a0, $zero, L_80280768
    if (ctx->r4 == 0) {
        // 0x80280750: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280768;
    }
    goto skip_11;
    // 0x80280750: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_11:
    // 0x80280754: jal         0x80320540
    // 0x80280758: nop

    static_3_80320540(rdram, ctx);
        goto after_12;
    // 0x80280758: nop

    after_12:
    // 0x8028075C: sw          $zero, 0x6834($s0)
    MEM_W(0X6834, ctx->r16) = 0;
    // 0x80280760: lbu         $v0, 0x6850($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6850);
    // 0x80280764: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280768:
    // 0x80280768: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8028076C: bne         $at, $zero, L_80280748
    if (ctx->r1 != 0) {
        // 0x80280770: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280748;
    }
    // 0x80280770: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280774: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280778:
    // 0x80280778: lbu         $v0, 0x6648($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6648);
    // 0x8028077C: sb          $zero, 0x6850($s2)
    MEM_B(0X6850, ctx->r18) = 0;
    // 0x80280780: sb          $zero, 0x6851($s2)
    MEM_B(0X6851, ctx->r18) = 0;
    // 0x80280784: blez        $v0, L_802807BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280788: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_802807BC;
    }
    // 0x80280788: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8028078C:
    // 0x8028078C: lw          $a0, 0x6600($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6600);
    // 0x80280790: beql        $a0, $zero, L_802807AC
    if (ctx->r4 == 0) {
        // 0x80280794: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802807AC;
    }
    goto skip_12;
    // 0x80280794: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_12:
    // 0x80280798: jal         0x80316558
    // 0x8028079C: nop

    static_3_80316558(rdram, ctx);
        goto after_13;
    // 0x8028079C: nop

    after_13:
    // 0x802807A0: sw          $zero, 0x6600($s0)
    MEM_W(0X6600, ctx->r16) = 0;
    // 0x802807A4: lbu         $v0, 0x6648($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6648);
    // 0x802807A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802807AC:
    // 0x802807AC: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802807B0: bne         $at, $zero, L_8028078C
    if (ctx->r1 != 0) {
        // 0x802807B4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8028078C;
    }
    // 0x802807B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802807B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802807BC:
    // 0x802807BC: lbu         $v0, 0x67BC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X67BC);
    // 0x802807C0: sb          $zero, 0x6648($s2)
    MEM_B(0X6648, ctx->r18) = 0;
    // 0x802807C4: sb          $zero, 0x6649($s2)
    MEM_B(0X6649, ctx->r18) = 0;
    // 0x802807C8: blez        $v0, L_80280800
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802807CC: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280800;
    }
    // 0x802807CC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_802807D0:
    // 0x802807D0: lw          $a0, 0x67AC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X67AC);
    // 0x802807D4: beql        $a0, $zero, L_802807F0
    if (ctx->r4 == 0) {
        // 0x802807D8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802807F0;
    }
    goto skip_13;
    // 0x802807D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_13:
    // 0x802807DC: jal         0x802E88F8
    // 0x802807E0: nop

    func_802E8878(rdram, ctx);
        goto after_14;
    // 0x802807E0: nop

    after_14:
    // 0x802807E4: sw          $zero, 0x67AC($s0)
    MEM_W(0X67AC, ctx->r16) = 0;
    // 0x802807E8: lbu         $v0, 0x67BC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X67BC);
    // 0x802807EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802807F0:
    // 0x802807F0: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802807F4: bne         $at, $zero, L_802807D0
    if (ctx->r1 != 0) {
        // 0x802807F8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802807D0;
    }
    // 0x802807F8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802807FC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280800:
    // 0x80280800: lbu         $v0, 0x6674($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6674);
    // 0x80280804: sb          $zero, 0x67BC($s2)
    MEM_B(0X67BC, ctx->r18) = 0;
    // 0x80280808: sb          $zero, 0x67BD($s2)
    MEM_B(0X67BD, ctx->r18) = 0;
    // 0x8028080C: blez        $v0, L_80280844
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280810: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280844;
    }
    // 0x80280810: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280814:
    // 0x80280814: lw          $a0, 0x664C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X664C);
    // 0x80280818: beql        $a0, $zero, L_80280834
    if (ctx->r4 == 0) {
        // 0x8028081C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280834;
    }
    goto skip_14;
    // 0x8028081C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_14:
    // 0x80280820: jal         0x802D738C
    // 0x80280824: nop

    static_3_802D738C(rdram, ctx);
        goto after_15;
    // 0x80280824: nop

    after_15:
    // 0x80280828: sw          $zero, 0x664C($s0)
    MEM_W(0X664C, ctx->r16) = 0;
    // 0x8028082C: lbu         $v0, 0x6674($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6674);
    // 0x80280830: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280834:
    // 0x80280834: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280838: bne         $at, $zero, L_80280814
    if (ctx->r1 != 0) {
        // 0x8028083C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280814;
    }
    // 0x8028083C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280840: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280844:
    // 0x80280844: lbu         $v0, 0x6768($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6768);
    // 0x80280848: sb          $zero, 0x6674($s2)
    MEM_B(0X6674, ctx->r18) = 0;
    // 0x8028084C: sb          $zero, 0x6675($s2)
    MEM_B(0X6675, ctx->r18) = 0;
    // 0x80280850: blez        $v0, L_80280888
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280854: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280888;
    }
    // 0x80280854: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280858:
    // 0x80280858: lw          $a0, 0x6678($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6678);
    // 0x8028085C: beql        $a0, $zero, L_80280878
    if (ctx->r4 == 0) {
        // 0x80280860: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280878;
    }
    goto skip_15;
    // 0x80280860: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_15:
    // 0x80280864: jal         0x80287A08
    // 0x80280868: nop

    static_3_80287A08(rdram, ctx);
        goto after_16;
    // 0x80280868: nop

    after_16:
    // 0x8028086C: sw          $zero, 0x6678($s0)
    MEM_W(0X6678, ctx->r16) = 0;
    // 0x80280870: lbu         $v0, 0x6768($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6768);
    // 0x80280874: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280878:
    // 0x80280878: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8028087C: bne         $at, $zero, L_80280858
    if (ctx->r1 != 0) {
        // 0x80280880: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280858;
    }
    // 0x80280880: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280884: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280888:
    // 0x80280888: lbu         $v0, 0x67FC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X67FC);
    // 0x8028088C: sb          $zero, 0x6768($s2)
    MEM_B(0X6768, ctx->r18) = 0;
    // 0x80280890: sb          $zero, 0x6769($s2)
    MEM_B(0X6769, ctx->r18) = 0;
    // 0x80280894: blez        $v0, L_802808CC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280898: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_802808CC;
    }
    // 0x80280898: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8028089C:
    // 0x8028089C: lw          $a0, 0x67C0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X67C0);
    // 0x802808A0: beql        $a0, $zero, L_802808BC
    if (ctx->r4 == 0) {
        // 0x802808A4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802808BC;
    }
    goto skip_16;
    // 0x802808A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_16:
    // 0x802808A8: jal         0x802E9AA8
    // 0x802808AC: nop

    static_3_802E9AA8(rdram, ctx);
        goto after_17;
    // 0x802808AC: nop

    after_17:
    // 0x802808B0: sw          $zero, 0x67C0($s0)
    MEM_W(0X67C0, ctx->r16) = 0;
    // 0x802808B4: lbu         $v0, 0x67FC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X67FC);
    // 0x802808B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802808BC:
    // 0x802808BC: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802808C0: bne         $at, $zero, L_8028089C
    if (ctx->r1 != 0) {
        // 0x802808C4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8028089C;
    }
    // 0x802808C4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802808C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802808CC:
    // 0x802808CC: sb          $zero, 0x67FC($s2)
    MEM_B(0X67FC, ctx->r18) = 0;
    // 0x802808D0: sb          $zero, 0x67FD($s2)
    MEM_B(0X67FD, ctx->r18) = 0;
    // 0x802808D4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x802808D8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_802808DC:
    // 0x802808DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802808E0: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
    // 0x802808E4: sw          $v0, 0x68B4($s0)
    MEM_W(0X68B4, ctx->r16) = ctx->r2;
    // 0x802808E8: sw          $v0, 0x69E0($s0)
    MEM_W(0X69E0, ctx->r16) = ctx->r2;
    // 0x802808EC: sw          $zero, 0x6B0C($s0)
    MEM_W(0X6B0C, ctx->r16) = 0;
    // 0x802808F0: bne         $at, $zero, L_802808DC
    if (ctx->r1 != 0) {
        // 0x802808F4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802808DC;
    }
    // 0x802808F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802808F8: lbu         $v0, 0x6EFC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6EFC);
    // 0x802808FC: sh          $zero, 0x6C38($s2)
    MEM_H(0X6C38, ctx->r18) = 0;
    // 0x80280900: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80280904: blez        $v0, L_8028093C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280908: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8028093C;
    }
    // 0x80280908: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8028090C:
    // 0x8028090C: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
    // 0x80280910: beql        $a0, $zero, L_8028092C
    if (ctx->r4 == 0) {
        // 0x80280914: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8028092C;
    }
    goto skip_17;
    // 0x80280914: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_17:
    // 0x80280918: jal         0x802E5564
    // 0x8028091C: nop

    static_3_802E5564(rdram, ctx);
        goto after_18;
    // 0x8028091C: nop

    after_18:
    // 0x80280920: sw          $zero, 0x6EEC($s0)
    MEM_W(0X6EEC, ctx->r16) = 0;
    // 0x80280924: lbu         $v0, 0x6EFC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6EFC);
    // 0x80280928: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8028092C:
    // 0x8028092C: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280930: bne         $at, $zero, L_8028090C
    if (ctx->r1 != 0) {
        // 0x80280934: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8028090C;
    }
    // 0x80280934: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280938: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8028093C:
    // 0x8028093C: lbu         $v0, 0x6FB8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6FB8);
    // 0x80280940: sb          $zero, 0x6EFC($s2)
    MEM_B(0X6EFC, ctx->r18) = 0;
    // 0x80280944: sb          $zero, 0x6EFD($s2)
    MEM_B(0X6EFD, ctx->r18) = 0;
    // 0x80280948: blez        $v0, L_80280980
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8028094C: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280980;
    }
    // 0x8028094C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280950:
    // 0x80280950: lw          $a0, 0x6F94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6F94);
    // 0x80280954: beql        $a0, $zero, L_80280970
    if (ctx->r4 == 0) {
        // 0x80280958: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280970;
    }
    goto skip_18;
    // 0x80280958: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_18:
    // 0x8028095C: jal         0x802E5564
    // 0x80280960: nop

    static_3_802E5564(rdram, ctx);
        goto after_19;
    // 0x80280960: nop

    after_19:
    // 0x80280964: sw          $zero, 0x6F94($s0)
    MEM_W(0X6F94, ctx->r16) = 0;
    // 0x80280968: lbu         $v0, 0x6FB8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6FB8);
    // 0x8028096C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280970:
    // 0x80280970: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280974: bne         $at, $zero, L_80280950
    if (ctx->r1 != 0) {
        // 0x80280978: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280950;
    }
    // 0x80280978: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8028097C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280980:
    // 0x80280980: lbu         $t7, 0x70F0($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X70F0);
    // 0x80280984: sb          $zero, 0x6FB8($s2)
    MEM_B(0X6FB8, ctx->r18) = 0;
    // 0x80280988: sb          $zero, 0x6FB9($s2)
    MEM_B(0X6FB9, ctx->r18) = 0;
    // 0x8028098C: blez        $t7, L_802809B4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80280990: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_802809B4;
    }
    // 0x80280990: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x80280994: sw          $zero, 0x7050($s0)
    MEM_W(0X7050, ctx->r16) = 0;
L_80280998:
    // 0x80280998: lbu         $t8, 0x70F0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X70F0);
    // 0x8028099C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802809A0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802809A4: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802809A8: bnel        $at, $zero, L_80280998
    if (ctx->r1 != 0) {
        // 0x802809AC: sw          $zero, 0x7050($s0)
        MEM_W(0X7050, ctx->r16) = 0;
            goto L_80280998;
    }
    goto skip_19;
    // 0x802809AC: sw          $zero, 0x7050($s0)
    MEM_W(0X7050, ctx->r16) = 0;
    skip_19:
    // 0x802809B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802809B4:
    // 0x802809B4: lbu         $v0, 0x704C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X704C);
    // 0x802809B8: sb          $zero, 0x70F0($s2)
    MEM_B(0X70F0, ctx->r18) = 0;
    // 0x802809BC: sb          $zero, 0x70F1($s2)
    MEM_B(0X70F1, ctx->r18) = 0;
    // 0x802809C0: blez        $v0, L_802809F8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802809C4: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_802809F8;
    }
    // 0x802809C4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_802809C8:
    // 0x802809C8: lw          $a0, 0x6FC0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6FC0);
    // 0x802809CC: beql        $a0, $zero, L_802809E8
    if (ctx->r4 == 0) {
        // 0x802809D0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802809E8;
    }
    goto skip_20;
    // 0x802809D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_20:
    // 0x802809D4: jal         0x8028C298
    // 0x802809D8: nop

    static_3_8028C298(rdram, ctx);
        goto after_20;
    // 0x802809D8: nop

    after_20:
    // 0x802809DC: sw          $zero, 0x6FC0($s0)
    MEM_W(0X6FC0, ctx->r16) = 0;
    // 0x802809E0: lbu         $v0, 0x704C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X704C);
    // 0x802809E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802809E8:
    // 0x802809E8: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802809EC: bne         $at, $zero, L_802809C8
    if (ctx->r1 != 0) {
        // 0x802809F0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802809C8;
    }
    // 0x802809F0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802809F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802809F8:
    // 0x802809F8: lbu         $v0, 0x6F90($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6F90);
    // 0x802809FC: sb          $zero, 0x704C($s2)
    MEM_B(0X704C, ctx->r18) = 0;
    // 0x80280A00: sb          $zero, 0x704D($s2)
    MEM_B(0X704D, ctx->r18) = 0;
    // 0x80280A04: blez        $v0, L_80280A3C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280A08: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280A3C;
    }
    // 0x80280A08: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280A0C:
    // 0x80280A0C: lw          $a0, 0x6F04($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6F04);
    // 0x80280A10: beql        $a0, $zero, L_80280A2C
    if (ctx->r4 == 0) {
        // 0x80280A14: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280A2C;
    }
    goto skip_21;
    // 0x80280A14: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_21:
    // 0x80280A18: jal         0x8028C298
    // 0x80280A1C: nop

    static_3_8028C298(rdram, ctx);
        goto after_21;
    // 0x80280A1C: nop

    after_21:
    // 0x80280A20: sw          $zero, 0x6F04($s0)
    MEM_W(0X6F04, ctx->r16) = 0;
    // 0x80280A24: lbu         $v0, 0x6F90($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6F90);
    // 0x80280A28: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280A2C:
    // 0x80280A2C: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280A30: bne         $at, $zero, L_80280A0C
    if (ctx->r1 != 0) {
        // 0x80280A34: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280A0C;
    }
    // 0x80280A34: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280A38: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280A3C:
    // 0x80280A3C: sb          $zero, 0x6F90($s2)
    MEM_B(0X6F90, ctx->r18) = 0;
    // 0x80280A40: sb          $zero, 0x6F91($s2)
    MEM_B(0X6F91, ctx->r18) = 0;
    // 0x80280A44: sw          $zero, 0x6F00($s2)
    MEM_W(0X6F00, ctx->r18) = 0;
    // 0x80280A48: sw          $zero, 0x6FBC($s2)
    MEM_W(0X6FBC, ctx->r18) = 0;
    // 0x80280A4C: jal         0x802BCB28
    // 0x80280A50: addiu       $a0, $s2, 0x4B88
    ctx->r4 = ADD32(ctx->r18, 0X4B88);
    static_3_802BCB28(rdram, ctx);
        goto after_22;
    // 0x80280A50: addiu       $a0, $s2, 0x4B88
    ctx->r4 = ADD32(ctx->r18, 0X4B88);
    after_22:
    // 0x80280A54: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80280A58: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80280A5C: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80280A60: beql        $at, $zero, L_80280A7C
    if (ctx->r1 == 0) {
        // 0x80280A64: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80280A7C;
    }
    goto skip_22;
    // 0x80280A64: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    skip_22:
    // 0x80280A68: jal         0x802E5564
    // 0x80280A6C: addiu       $a0, $s2, 0x365C
    ctx->r4 = ADD32(ctx->r18, 0X365C);
    static_3_802E5564(rdram, ctx);
        goto after_23;
    // 0x80280A6C: addiu       $a0, $s2, 0x365C
    ctx->r4 = ADD32(ctx->r18, 0X365C);
    after_23:
    // 0x80280A70: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80280A74: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80280A78: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_80280A7C:
    // 0x80280A7C: bnel        $v0, $at, L_80280A90
    if (ctx->r2 != ctx->r1) {
        // 0x80280A80: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80280A90;
    }
    goto skip_23;
    // 0x80280A80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_23:
    // 0x80280A84: b           L_80280A90
    // 0x80280A88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80280A90;
    // 0x80280A88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80280A8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80280A90:
    // 0x80280A90: beql        $v0, $zero, L_80280AAC
    if (ctx->r2 == 0) {
        // 0x80280A94: lbu         $v0, 0x6CDC($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X6CDC);
            goto L_80280AAC;
    }
    goto skip_24;
    // 0x80280A94: lbu         $v0, 0x6CDC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6CDC);
    skip_24:
    // 0x80280A98: jal         0x802E5564
    // 0x80280A9C: addiu       $a0, $s2, 0x4E3C
    ctx->r4 = ADD32(ctx->r18, 0X4E3C);
    static_3_802E5564(rdram, ctx);
        goto after_24;
    // 0x80280A9C: addiu       $a0, $s2, 0x4E3C
    ctx->r4 = ADD32(ctx->r18, 0X4E3C);
    after_24:
    // 0x80280AA0: jal         0x802BCB28
    // 0x80280AA4: addiu       $a0, $s2, 0x6368
    ctx->r4 = ADD32(ctx->r18, 0X6368);
    static_3_802BCB28(rdram, ctx);
        goto after_25;
    // 0x80280AA4: addiu       $a0, $s2, 0x6368
    ctx->r4 = ADD32(ctx->r18, 0X6368);
    after_25:
    // 0x80280AA8: lbu         $v0, 0x6CDC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6CDC);
L_80280AAC:
    // 0x80280AAC: blez        $v0, L_80280AF4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280AB0: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280AF4;
    }
    // 0x80280AB0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280AB4:
    // 0x80280AB4: lw          $v1, 0x6C3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C3C);
    // 0x80280AB8: beql        $v1, $zero, L_80280AE4
    if (ctx->r3 == 0) {
        // 0x80280ABC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280AE4;
    }
    goto skip_25;
    // 0x80280ABC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_25:
    // 0x80280AC0: lw          $v0, 0x7C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X7C);
    // 0x80280AC4: lh          $t9, 0x10($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X10);
    // 0x80280AC8: addu        $a0, $t9, $v1
    ctx->r4 = ADD32(ctx->r25, ctx->r3);
    // 0x80280ACC: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x80280AD0: jalr        $t9
    // 0x80280AD4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x80280AD4: nop

    after_26:
    // 0x80280AD8: sw          $zero, 0x6C3C($s0)
    MEM_W(0X6C3C, ctx->r16) = 0;
    // 0x80280ADC: lbu         $v0, 0x6CDC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6CDC);
    // 0x80280AE0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280AE4:
    // 0x80280AE4: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280AE8: bne         $at, $zero, L_80280AB4
    if (ctx->r1 != 0) {
        // 0x80280AEC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280AB4;
    }
    // 0x80280AEC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280AF0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280AF4:
    // 0x80280AF4: lbu         $v0, 0x6EDC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6EDC);
    // 0x80280AF8: sb          $zero, 0x6CDC($s2)
    MEM_B(0X6CDC, ctx->r18) = 0;
    // 0x80280AFC: sb          $zero, 0x6CDD($s2)
    MEM_B(0X6CDD, ctx->r18) = 0;
    // 0x80280B00: blez        $v0, L_80280B44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280B04: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280B44;
    }
    // 0x80280B04: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280B08:
    // 0x80280B08: lw          $v1, 0x6E64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6E64);
    // 0x80280B0C: beql        $v1, $zero, L_80280B34
    if (ctx->r3 == 0) {
        // 0x80280B10: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280B34;
    }
    goto skip_26;
    // 0x80280B10: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_26:
    // 0x80280B14: lw          $v0, 0x7C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X7C);
    // 0x80280B18: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x80280B1C: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    // 0x80280B20: jalr        $t9
    // 0x80280B24: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x80280B24: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    after_27:
    // 0x80280B28: sw          $zero, 0x6E64($s0)
    MEM_W(0X6E64, ctx->r16) = 0;
    // 0x80280B2C: lbu         $v0, 0x6EDC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6EDC);
    // 0x80280B30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280B34:
    // 0x80280B34: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280B38: bne         $at, $zero, L_80280B08
    if (ctx->r1 != 0) {
        // 0x80280B3C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280B08;
    }
    // 0x80280B3C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280B40: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280B44:
    // 0x80280B44: lbu         $v0, 0x6E24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6E24);
    // 0x80280B48: sb          $zero, 0x6EDC($s2)
    MEM_B(0X6EDC, ctx->r18) = 0;
    // 0x80280B4C: sb          $zero, 0x6EDD($s2)
    MEM_B(0X6EDD, ctx->r18) = 0;
    // 0x80280B50: blez        $v0, L_80280B94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280B54: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280B94;
    }
    // 0x80280B54: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280B58:
    // 0x80280B58: lw          $v1, 0x6DAC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6DAC);
    // 0x80280B5C: beql        $v1, $zero, L_80280B84
    if (ctx->r3 == 0) {
        // 0x80280B60: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280B84;
    }
    goto skip_27;
    // 0x80280B60: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_27:
    // 0x80280B64: lw          $v0, 0x7C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X7C);
    // 0x80280B68: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x80280B6C: lh          $t1, 0x10($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X10);
    // 0x80280B70: jalr        $t9
    // 0x80280B74: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x80280B74: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    after_28:
    // 0x80280B78: sw          $zero, 0x6DAC($s0)
    MEM_W(0X6DAC, ctx->r16) = 0;
    // 0x80280B7C: lbu         $v0, 0x6E24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6E24);
    // 0x80280B80: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280B84:
    // 0x80280B84: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280B88: bne         $at, $zero, L_80280B58
    if (ctx->r1 != 0) {
        // 0x80280B8C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280B58;
    }
    // 0x80280B8C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280B90: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280B94:
    // 0x80280B94: lbu         $v0, 0x6D44($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6D44);
    // 0x80280B98: sb          $zero, 0x6E24($s2)
    MEM_B(0X6E24, ctx->r18) = 0;
    // 0x80280B9C: sb          $zero, 0x6E25($s2)
    MEM_B(0X6E25, ctx->r18) = 0;
    // 0x80280BA0: blez        $v0, L_80280BE4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280BA4: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280BE4;
    }
    // 0x80280BA4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280BA8:
    // 0x80280BA8: lw          $v1, 0x6CE0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6CE0);
    // 0x80280BAC: beql        $v1, $zero, L_80280BD4
    if (ctx->r3 == 0) {
        // 0x80280BB0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280BD4;
    }
    goto skip_28;
    // 0x80280BB0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_28:
    // 0x80280BB4: lw          $v0, 0x7C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X7C);
    // 0x80280BB8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x80280BBC: lh          $t2, 0x10($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X10);
    // 0x80280BC0: jalr        $t9
    // 0x80280BC4: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x80280BC4: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    after_29:
    // 0x80280BC8: sw          $zero, 0x6CE0($s0)
    MEM_W(0X6CE0, ctx->r16) = 0;
    // 0x80280BCC: lbu         $v0, 0x6D44($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6D44);
    // 0x80280BD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280BD4:
    // 0x80280BD4: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280BD8: bne         $at, $zero, L_80280BA8
    if (ctx->r1 != 0) {
        // 0x80280BDC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280BA8;
    }
    // 0x80280BDC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280BE0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280BE4:
    // 0x80280BE4: lbu         $v0, 0x6DA8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6DA8);
    // 0x80280BE8: sb          $zero, 0x6D44($s2)
    MEM_B(0X6D44, ctx->r18) = 0;
    // 0x80280BEC: sb          $zero, 0x6D45($s2)
    MEM_B(0X6D45, ctx->r18) = 0;
    // 0x80280BF0: blez        $v0, L_80280C34
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280BF4: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280C34;
    }
    // 0x80280BF4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280BF8:
    // 0x80280BF8: lw          $v1, 0x6D48($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6D48);
    // 0x80280BFC: beql        $v1, $zero, L_80280C24
    if (ctx->r3 == 0) {
        // 0x80280C00: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280C24;
    }
    goto skip_29;
    // 0x80280C00: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_29:
    // 0x80280C04: lw          $v0, 0x7C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X7C);
    // 0x80280C08: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x80280C0C: lh          $t3, 0x10($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X10);
    // 0x80280C10: jalr        $t9
    // 0x80280C14: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x80280C14: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    after_30:
    // 0x80280C18: sw          $zero, 0x6D48($s0)
    MEM_W(0X6D48, ctx->r16) = 0;
    // 0x80280C1C: lbu         $v0, 0x6DA8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6DA8);
    // 0x80280C20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280C24:
    // 0x80280C24: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280C28: bne         $at, $zero, L_80280BF8
    if (ctx->r1 != 0) {
        // 0x80280C2C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280BF8;
    }
    // 0x80280C2C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280C30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280C34:
    // 0x80280C34: lbu         $v0, 0x6E3C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6E3C);
    // 0x80280C38: sb          $zero, 0x6DA8($s2)
    MEM_B(0X6DA8, ctx->r18) = 0;
    // 0x80280C3C: sb          $zero, 0x6DA9($s2)
    MEM_B(0X6DA9, ctx->r18) = 0;
    // 0x80280C40: blez        $v0, L_80280C84
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280C44: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280C84;
    }
    // 0x80280C44: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280C48:
    // 0x80280C48: lw          $v1, 0x6E28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6E28);
    // 0x80280C4C: beql        $v1, $zero, L_80280C74
    if (ctx->r3 == 0) {
        // 0x80280C50: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280C74;
    }
    goto skip_30;
    // 0x80280C50: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_30:
    // 0x80280C54: lw          $v0, 0x7C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X7C);
    // 0x80280C58: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x80280C5C: lh          $t4, 0x10($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X10);
    // 0x80280C60: jalr        $t9
    // 0x80280C64: addu        $a0, $t4, $v1
    ctx->r4 = ADD32(ctx->r12, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x80280C64: addu        $a0, $t4, $v1
    ctx->r4 = ADD32(ctx->r12, ctx->r3);
    after_31:
    // 0x80280C68: sw          $zero, 0x6E28($s0)
    MEM_W(0X6E28, ctx->r16) = 0;
    // 0x80280C6C: lbu         $v0, 0x6E3C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6E3C);
    // 0x80280C70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280C74:
    // 0x80280C74: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280C78: bne         $at, $zero, L_80280C48
    if (ctx->r1 != 0) {
        // 0x80280C7C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280C48;
    }
    // 0x80280C7C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280C80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280C84:
    // 0x80280C84: lbu         $v0, 0x6E54($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6E54);
    // 0x80280C88: sb          $zero, 0x6E3C($s2)
    MEM_B(0X6E3C, ctx->r18) = 0;
    // 0x80280C8C: sb          $zero, 0x6E3D($s2)
    MEM_B(0X6E3D, ctx->r18) = 0;
    // 0x80280C90: blez        $v0, L_80280CD4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280C94: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280CD4;
    }
    // 0x80280C94: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280C98:
    // 0x80280C98: lw          $v1, 0x6E40($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6E40);
    // 0x80280C9C: beql        $v1, $zero, L_80280CC4
    if (ctx->r3 == 0) {
        // 0x80280CA0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280CC4;
    }
    goto skip_31;
    // 0x80280CA0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_31:
    // 0x80280CA4: lw          $v0, 0x7C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X7C);
    // 0x80280CA8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x80280CAC: lh          $t5, 0x10($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X10);
    // 0x80280CB0: jalr        $t9
    // 0x80280CB4: addu        $a0, $t5, $v1
    ctx->r4 = ADD32(ctx->r13, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x80280CB4: addu        $a0, $t5, $v1
    ctx->r4 = ADD32(ctx->r13, ctx->r3);
    after_32:
    // 0x80280CB8: sw          $zero, 0x6E40($s0)
    MEM_W(0X6E40, ctx->r16) = 0;
    // 0x80280CBC: lbu         $v0, 0x6E54($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6E54);
    // 0x80280CC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280CC4:
    // 0x80280CC4: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280CC8: bne         $at, $zero, L_80280C98
    if (ctx->r1 != 0) {
        // 0x80280CCC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280C98;
    }
    // 0x80280CCC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280CD0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280CD4:
    // 0x80280CD4: lbu         $v0, 0x6E60($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6E60);
    // 0x80280CD8: sb          $zero, 0x6E54($s2)
    MEM_B(0X6E54, ctx->r18) = 0;
    // 0x80280CDC: sb          $zero, 0x6E55($s2)
    MEM_B(0X6E55, ctx->r18) = 0;
    // 0x80280CE0: blez        $v0, L_80280D24
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280CE4: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280D24;
    }
    // 0x80280CE4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280CE8:
    // 0x80280CE8: lw          $v1, 0x6E58($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6E58);
    // 0x80280CEC: beql        $v1, $zero, L_80280D14
    if (ctx->r3 == 0) {
        // 0x80280CF0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280D14;
    }
    goto skip_32;
    // 0x80280CF0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_32:
    // 0x80280CF4: lw          $v0, 0x7C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X7C);
    // 0x80280CF8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x80280CFC: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x80280D00: jalr        $t9
    // 0x80280D04: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x80280D04: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_33:
    // 0x80280D08: sw          $zero, 0x6E58($s0)
    MEM_W(0X6E58, ctx->r16) = 0;
    // 0x80280D0C: lbu         $v0, 0x6E60($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6E60);
    // 0x80280D10: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280D14:
    // 0x80280D14: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280D18: bne         $at, $zero, L_80280CE8
    if (ctx->r1 != 0) {
        // 0x80280D1C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280CE8;
    }
    // 0x80280D1C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80280D20: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80280D24:
    // 0x80280D24: lbu         $v0, 0x6EE8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6EE8);
    // 0x80280D28: sb          $zero, 0x6E60($s2)
    MEM_B(0X6E60, ctx->r18) = 0;
    // 0x80280D2C: sb          $zero, 0x6E61($s2)
    MEM_B(0X6E61, ctx->r18) = 0;
    // 0x80280D30: blez        $v0, L_80280D70
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80280D34: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_80280D70;
    }
    // 0x80280D34: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80280D38:
    // 0x80280D38: lw          $v1, 0x6EE0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6EE0);
    // 0x80280D3C: beql        $v1, $zero, L_80280D64
    if (ctx->r3 == 0) {
        // 0x80280D40: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80280D64;
    }
    goto skip_33;
    // 0x80280D40: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_33:
    // 0x80280D44: lw          $v0, 0x7C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X7C);
    // 0x80280D48: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x80280D4C: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x80280D50: jalr        $t9
    // 0x80280D54: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x80280D54: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_34:
    // 0x80280D58: sw          $zero, 0x6EE0($s0)
    MEM_W(0X6EE0, ctx->r16) = 0;
    // 0x80280D5C: lbu         $v0, 0x6EE8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6EE8);
    // 0x80280D60: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80280D64:
    // 0x80280D64: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80280D68: bne         $at, $zero, L_80280D38
    if (ctx->r1 != 0) {
        // 0x80280D6C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80280D38;
    }
    // 0x80280D6C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80280D70:
    // 0x80280D70: sb          $zero, 0x6EE8($s2)
    MEM_B(0X6EE8, ctx->r18) = 0;
    // 0x80280D74: sb          $zero, 0x6EE9($s2)
    MEM_B(0X6EE9, ctx->r18) = 0;
    // 0x80280D78: jal         0x802FA254
    // 0x80280D7C: addiu       $a0, $s2, 0x10
    ctx->r4 = ADD32(ctx->r18, 0X10);
    static_3_802FA254(rdram, ctx);
        goto after_35;
    // 0x80280D7C: addiu       $a0, $s2, 0x10
    ctx->r4 = ADD32(ctx->r18, 0X10);
    after_35:
    // 0x80280D80: addiu       $s0, $s2, 0x70F8
    ctx->r16 = ADD32(ctx->r18, 0X70F8);
    // 0x80280D84: jal         0x80309730
    // 0x80280D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80309730(rdram, ctx);
        goto after_36;
    // 0x80280D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x80280D8C: beql        $v0, $zero, L_80280DA0
    if (ctx->r2 == 0) {
        // 0x80280D90: addiu       $a0, $s2, 0x20
        ctx->r4 = ADD32(ctx->r18, 0X20);
            goto L_80280DA0;
    }
    goto skip_34;
    // 0x80280D90: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
    skip_34:
    // 0x80280D94: jal         0x803090D0
    // 0x80280D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_803090D0(rdram, ctx);
        goto after_37;
    // 0x80280D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80280D9C: addiu       $a0, $s2, 0x20
    ctx->r4 = ADD32(ctx->r18, 0X20);
L_80280DA0:
    // 0x80280DA0: jal         0x802916EC
    // 0x80280DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802916EC(rdram, ctx);
        goto after_38;
    // 0x80280DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_38:
    // 0x80280DA8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80280DAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280DB0: jal         0x80223E48
    // 0x80280DB4: swc1        $f4, 0x7160($s2)
    MEM_W(0X7160, ctx->r18) = ctx->f4.u32l;
    static_3_80223E48(rdram, ctx);
        goto after_39;
    // 0x80280DB4: swc1        $f4, 0x7160($s2)
    MEM_W(0X7160, ctx->r18) = ctx->f4.u32l;
    after_39:
    // 0x80280DB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80280DBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80280DC0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80280DC4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80280DC8: jr          $ra
    // 0x80280DCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80280DCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802D84B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D8538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D853C: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x802D8540: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802D8544: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D8548: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x802D854C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802D8550: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802D8554: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802D8558: jalr        $t9
    // 0x802D855C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D855C: nop

    after_0:
    // 0x802D8560: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802D8564: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802D8568: sh          $t7, 0x86($a2)
    MEM_H(0X86, ctx->r6) = ctx->r15;
    // 0x802D856C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D8570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D8574: jr          $ra
    // 0x802D8578: nop

    return;
    // 0x802D8578: nop

;}
RECOMP_FUNC void D_80247FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247FF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80247FF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80247FFC: jal         0x8024A710
    // 0x80248000: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_8024A710(rdram, ctx);
        goto after_0;
    // 0x80248000: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80248004: beq         $v0, $zero, L_80248014
    if (ctx->r2 == 0) {
        // 0x80248008: nop
    
            goto L_80248014;
    }
    // 0x80248008: nop

    // 0x8024800C: b           L_80248030
    // 0x80248010: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80248030;
    // 0x80248010: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80248014:
    // 0x80248014: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80248018: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8024801C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80248020: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80248024: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80248028: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024802C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_80248030:
    // 0x80248030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80248034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80248038: jr          $ra
    // 0x8024803C: nop

    return;
    // 0x8024803C: nop

;}
RECOMP_FUNC void D_80243BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80243BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80243BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80243BE0: beq         $a1, $v0, L_80243C80
    if (ctx->r5 == ctx->r2) {
        // 0x80243BE4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80243C80;
    }
    // 0x80243BE4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80243BE8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80243BEC: beq         $a1, $at, L_80243C0C
    if (ctx->r5 == ctx->r1) {
        // 0x80243BF0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80243C0C;
    }
    // 0x80243BF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80243BF4: beq         $a1, $at, L_80243C2C
    if (ctx->r5 == ctx->r1) {
        // 0x80243BF8: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80243C2C;
    }
    // 0x80243BF8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80243BFC: beql        $a1, $at, L_80243C5C
    if (ctx->r5 == ctx->r1) {
        // 0x80243C00: lw          $a0, 0x0($a3)
        ctx->r4 = MEM_W(ctx->r7, 0X0);
            goto L_80243C5C;
    }
    goto skip_0;
    // 0x80243C00: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x80243C04: b           L_80243C8C
    // 0x80243C08: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
        goto L_80243C8C;
    // 0x80243C08: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80243C0C:
    // 0x80243C0C: lw          $v0, 0x40($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X40);
    // 0x80243C10: beql        $v0, $zero, L_80243C24
    if (ctx->r2 == 0) {
        // 0x80243C14: sw          $a2, 0x3C($a3)
        MEM_W(0X3C, ctx->r7) = ctx->r6;
            goto L_80243C24;
    }
    goto skip_1;
    // 0x80243C14: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
    skip_1:
    // 0x80243C18: b           L_80243C24
    // 0x80243C1C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_80243C24;
    // 0x80243C1C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x80243C20: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
L_80243C24:
    // 0x80243C24: b           L_80243CA0
    // 0x80243C28: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
        goto L_80243CA0;
    // 0x80243C28: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
L_80243C2C:
    // 0x80243C2C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80243C30: sw          $v0, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->r2;
    // 0x80243C34: sw          $zero, 0x48($a3)
    MEM_W(0X48, ctx->r7) = 0;
    // 0x80243C38: beq         $a0, $zero, L_80243CA0
    if (ctx->r4 == 0) {
        // 0x80243C3C: sh          $v0, 0x1A($a3)
        MEM_H(0X1A, ctx->r7) = ctx->r2;
            goto L_80243CA0;
    }
    // 0x80243C3C: sh          $v0, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r2;
    // 0x80243C40: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80243C44: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80243C48: jalr        $t9
    // 0x80243C4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80243C4C: nop

    after_0:
    // 0x80243C50: b           L_80243CA4
    // 0x80243C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80243CA4;
    // 0x80243C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80243C58: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80243C5C:
    // 0x80243C5C: sw          $v0, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->r2;
    // 0x80243C60: beql        $a0, $zero, L_80243CA4
    if (ctx->r4 == 0) {
        // 0x80243C64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80243CA4;
    }
    goto skip_2;
    // 0x80243C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80243C68: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80243C6C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80243C70: jalr        $t9
    // 0x80243C74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80243C74: nop

    after_1:
    // 0x80243C78: b           L_80243CA4
    // 0x80243C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80243CA4;
    // 0x80243C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80243C80:
    // 0x80243C80: b           L_80243CA0
    // 0x80243C84: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_80243CA0;
    // 0x80243C84: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x80243C88: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80243C8C:
    // 0x80243C8C: beql        $a0, $zero, L_80243CA4
    if (ctx->r4 == 0) {
        // 0x80243C90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80243CA4;
    }
    goto skip_3;
    // 0x80243C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80243C94: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80243C98: jalr        $t9
    // 0x80243C9C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80243C9C: nop

    after_2:
L_80243CA0:
    // 0x80243CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80243CA4:
    // 0x80243CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80243CA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80243CAC: jr          $ra
    // 0x80243CB0: nop

    return;
    // 0x80243CB0: nop

;}
RECOMP_FUNC void D_802E3B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3B80: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E3B84: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E3B88: jr          $ra
    // 0x802E3B8C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E3B8C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80237620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237624: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80237628: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x8023762C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80237630: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80237634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237638: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8023763C: beq         $t7, $zero, L_8023764C
    if (ctx->r15 == 0) {
        // 0x80237640: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_8023764C;
    }
    // 0x80237640: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80237644: addiu       $t8, $t6, -0x2000
    ctx->r24 = ADD32(ctx->r14, -0X2000);
    // 0x80237648: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_8023764C:
    // 0x8023764C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80237650: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80237654: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x80237658: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8023765C: andi        $t2, $t1, 0x3FFF
    ctx->r10 = ctx->r9 & 0X3FFF;
    // 0x80237660: bne         $t2, $at, L_80237678
    if (ctx->r10 != ctx->r1) {
        // 0x80237664: nop
    
            goto L_80237678;
    }
    // 0x80237664: nop

    // 0x80237668: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8023766C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80237670: b           L_80237680
    // 0x80237674: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
        goto L_80237680;
    // 0x80237674: sb          $t3, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r11;
L_80237678:
    // 0x80237678: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023767C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
L_80237680:
    // 0x80237680: jal         0x80242300
    // 0x80237684: nop

    static_3_80242300(rdram, ctx);
        goto after_0;
    // 0x80237684: nop

    after_0:
    // 0x80237688: beq         $v0, $zero, L_80237698
    if (ctx->r2 == 0) {
        // 0x8023768C: nop
    
            goto L_80237698;
    }
    // 0x8023768C: nop

    // 0x80237690: b           L_802376B8
    // 0x80237694: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802376B8;
    // 0x80237694: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80237698:
    // 0x80237698: jal         0x802375F0
    // 0x8023769C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x8023769C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x802376A0: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802376A4: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    // 0x802376A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x802376AC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802376B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802376B4: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
L_802376B8:
    // 0x802376B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802376BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802376C0: jr          $ra
    // 0x802376C4: nop

    return;
    // 0x802376C4: nop

;}
RECOMP_FUNC void D_802D3A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3B0C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802D3B10: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x802D3B14: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802D3B18: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802D3B1C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802D3B20: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x802D3B24: addiu       $t7, $sp, 0x64
    ctx->r15 = ADD32(ctx->r29, 0X64);
    // 0x802D3B28: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x802D3B2C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802D3B30: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802D3B34: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802D3B38: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x802D3B3C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x802D3B40: jal         0x802CF1C8
    // 0x802D3B44: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    static_3_802CF1C8(rdram, ctx);
        goto after_0;
    // 0x802D3B44: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    after_0:
    // 0x802D3B48: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x802D3B4C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x802D3B50: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x802D3B54: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x802D3B58: jal         0x80318498
    // 0x802D3B5C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_80318498(rdram, ctx);
        goto after_1;
    // 0x802D3B5C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_1:
    // 0x802D3B60: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802D3B64: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802D3B68: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802D3B6C: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802D3B70: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802D3B74: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802D3B78: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D3B7C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D3B80: cvt.d.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.d = CVT_D_S(ctx->f18.fl);
    // 0x802D3B84: cvt.d.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f10.d = CVT_D_S(ctx->f10.fl);
    // 0x802D3B88: mul.s       $f16, $f6, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x802D3B8C: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x802D3B90: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802D3B94: mul.s       $f14, $f6, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x802D3B98: cvt.d.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.d = CVT_D_S(ctx->f8.fl);
    // 0x802D3B9C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D3BA0: mul.s       $f12, $f6, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802D3BA4: cvt.d.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.d = CVT_D_S(ctx->f16.fl);
    // 0x802D3BA8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D3BAC: sdc1        $f10, 0x10($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X10, ctx->r29);
    // 0x802D3BB0: cvt.d.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.d = CVT_D_S(ctx->f14.fl);
    // 0x802D3BB4: sdc1        $f8, 0x18($sp)
    CHECK_FR(ctx, 8);
    SD(ctx->f8.u64, 0X18, ctx->r29);
    // 0x802D3BB8: sdc1        $f16, 0x20($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X20, ctx->r29);
    // 0x802D3BBC: cvt.d.s     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.d = CVT_D_S(ctx->f12.fl);
    // 0x802D3BC0: sdc1        $f14, 0x28($sp)
    CHECK_FR(ctx, 14);
    SD(ctx->f14.u64, 0X28, ctx->r29);
    // 0x802D3BC4: jal         0x80231A24
    // 0x802D3BC8: sdc1        $f12, 0x30($sp)
    CHECK_FR(ctx, 12);
    SD(ctx->f12.u64, 0X30, ctx->r29);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x802D3BC8: sdc1        $f12, 0x30($sp)
    CHECK_FR(ctx, 12);
    SD(ctx->f12.u64, 0X30, ctx->r29);
    after_2:
    // 0x802D3BCC: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802D3BD0: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802D3BD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D3BD8: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D3BDC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802D3BE0: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802D3BE4: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x802D3BE8: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802D3BEC: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802D3BF0: swc1        $f12, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f12.u32l;
    // 0x802D3BF4: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x802D3BF8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802D3BFC: bc1f        L_802D3C0C
    if (!c1cs) {
        // 0x802D3C00: sub.s       $f18, $f12, $f4
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f4.fl;
            goto L_802D3C0C;
    }
    // 0x802D3C00: sub.s       $f18, $f12, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802D3C04: b           L_802D3C10
    // 0x802D3C08: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802D3C10;
    // 0x802D3C08: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802D3C0C:
    // 0x802D3C0C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_802D3C10:
    // 0x802D3C10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D3C14: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D3C18: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802D3C1C: nop

    // 0x802D3C20: bc1fl       L_802D3C8C
    if (!c1cs) {
        // 0x802D3C24: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_802D3C8C;
    }
    goto skip_0;
    // 0x802D3C24: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x802D3C28: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802D3C2C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802D3C30: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x802D3C34: nop

    // 0x802D3C38: bc1fl       L_802D3C54
    if (!c1cs) {
        // 0x802D3C3C: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802D3C54;
    }
    goto skip_1;
    // 0x802D3C3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_1:
    // 0x802D3C40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D3C44: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D3C48: b           L_802D3C5C
    // 0x802D3C4C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
        goto L_802D3C5C;
    // 0x802D3C4C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802D3C50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802D3C54:
    // 0x802D3C54: nop

    // 0x802D3C58: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
L_802D3C5C:
    // 0x802D3C5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D3C60: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D3C64: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D3C68: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802D3C6C: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x802D3C70: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x802D3C74: add.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x802D3C78: jal         0x80231A24
    // 0x802D3C7C: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802D3C7C: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    after_3:
    // 0x802D3C80: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802D3C84: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802D3C88: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_802D3C8C:
    // 0x802D3C8C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D3C90: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802D3C94: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x802D3C98: nop

    // 0x802D3C9C: bc1fl       L_802D3CB0
    if (!c1cs) {
        // 0x802D3CA0: neg.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
            goto L_802D3CB0;
    }
    goto skip_2;
    // 0x802D3CA0: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    skip_2:
    // 0x802D3CA4: b           L_802D3CB0
    // 0x802D3CA8: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
        goto L_802D3CB0;
    // 0x802D3CA8: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x802D3CAC: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
L_802D3CB0:
    // 0x802D3CB0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D3CB4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802D3CB8: nop

    // 0x802D3CBC: bc1fl       L_802D3D28
    if (!c1cs) {
        // 0x802D3CC0: c.lt.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
            goto L_802D3D28;
    }
    goto skip_3;
    // 0x802D3CC0: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    skip_3:
    // 0x802D3CC4: c.le.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl <= ctx->f6.fl;
    // 0x802D3CC8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802D3CCC: bc1fl       L_802D3CE8
    if (!c1cs) {
        // 0x802D3CD0: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802D3CE8;
    }
    goto skip_4;
    // 0x802D3CD0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_4:
    // 0x802D3CD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D3CD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D3CDC: b           L_802D3CF0
    // 0x802D3CE0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
        goto L_802D3CF0;
    // 0x802D3CE0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802D3CE4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802D3CE8:
    // 0x802D3CE8: nop

    // 0x802D3CEC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
L_802D3CF0:
    // 0x802D3CF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D3CF4: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802D3CF8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D3CFC: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802D3D00: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D3D04: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x802D3D08: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x802D3D0C: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802D3D10: jal         0x80231A24
    // 0x802D3D14: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x802D3D14: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x802D3D18: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802D3D1C: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802D3D20: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802D3D24: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
L_802D3D28:
    // 0x802D3D28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D3D2C: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802D3D30: bc1fl       L_802D3D44
    if (!c1cs) {
        // 0x802D3D34: neg.s       $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
            goto L_802D3D44;
    }
    goto skip_5;
    // 0x802D3D34: neg.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
    skip_5:
    // 0x802D3D38: b           L_802D3D44
    // 0x802D3D3C: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_802D3D44;
    // 0x802D3D3C: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x802D3D40: neg.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
L_802D3D44:
    // 0x802D3D44: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D3D48: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802D3D4C: nop

    // 0x802D3D50: bc1fl       L_802D3DB8
    if (!c1cs) {
        // 0x802D3D54: lwc1        $f6, 0x5C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_802D3DB8;
    }
    goto skip_6;
    // 0x802D3D54: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    skip_6:
    // 0x802D3D58: c.le.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl <= ctx->f8.fl;
    // 0x802D3D5C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802D3D60: bc1fl       L_802D3D7C
    if (!c1cs) {
        // 0x802D3D64: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802D3D7C;
    }
    goto skip_7;
    // 0x802D3D64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_7:
    // 0x802D3D68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D3D6C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D3D70: b           L_802D3D84
    // 0x802D3D74: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
        goto L_802D3D84;
    // 0x802D3D74: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802D3D78: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802D3D7C:
    // 0x802D3D7C: nop

    // 0x802D3D80: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
L_802D3D84:
    // 0x802D3D84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D3D88: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802D3D8C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D3D90: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802D3D94: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D3D98: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x802D3D9C: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x802D3DA0: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802D3DA4: jal         0x80231A24
    // 0x802D3DA8: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x802D3DA8: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x802D3DAC: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802D3DB0: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802D3DB4: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
L_802D3DB8:
    // 0x802D3DB8: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x802D3DBC: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x802D3DC0: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x802D3DC4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D3DC8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802D3DCC: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x802D3DD0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D3DD4: sdc1        $f8, 0x18($sp)
    CHECK_FR(ctx, 8);
    SD(ctx->f8.u64, 0X18, ctx->r29);
    // 0x802D3DD8: jal         0x80231A24
    // 0x802D3DDC: sdc1        $f10, 0x10($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X10, ctx->r29);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x802D3DDC: sdc1        $f10, 0x10($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X10, ctx->r29);
    after_6:
    // 0x802D3DE0: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802D3DE4: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802D3DE8: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802D3DEC: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x802D3DF0: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x802D3DF4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802D3DF8: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x802D3DFC: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x802D3E00: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D3E04: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D3E08: sdc1        $f6, 0x18($sp)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X18, ctx->r29);
    // 0x802D3E0C: jal         0x80231A24
    // 0x802D3E10: sdc1        $f10, 0x10($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X10, ctx->r29);
    static_3_80231A24(rdram, ctx);
        goto after_7;
    // 0x802D3E10: sdc1        $f10, 0x10($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X10, ctx->r29);
    after_7:
    // 0x802D3E14: jal         0x8022970C
    // 0x802D3E18: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    func_8022970C(rdram, ctx);
        goto after_8;
    // 0x802D3E18: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    after_8:
    // 0x802D3E1C: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x802D3E20: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802D3E24: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802D3E28: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x802D3E2C: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802D3E30: swc1        $f10, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f10.u32l;
    // 0x802D3E34: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802D3E38: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x802D3E3C: jal         0x802D01D4
    // 0x802D3E40: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    static_3_802D01D4(rdram, ctx);
        goto after_9;
    // 0x802D3E40: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_9:
    // 0x802D3E44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802D3E48: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802D3E4C: jr          $ra
    // 0x802D3E50: nop

    return;
    // 0x802D3E50: nop

;}
RECOMP_FUNC void D_80248170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248170: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x80248174: bne         $at, $zero, L_802481EC
    if (ctx->r1 != 0) {
        // 0x80248178: negu        $v1, $a0
        ctx->r3 = SUB32(0, ctx->r4);
            goto L_802481EC;
    }
    // 0x80248178: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x8024817C: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80248180: beq         $v1, $zero, L_80248190
    if (ctx->r3 == 0) {
        // 0x80248184: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80248190;
    }
    // 0x80248184: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80248188: swl         $zero, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, 0);
    // 0x8024818C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_80248190:
    // 0x80248190: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x80248194: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x80248198: beq         $a3, $zero, L_802481CC
    if (ctx->r7 == 0) {
        // 0x8024819C: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_802481CC;
    }
    // 0x8024819C: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x802481A0: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_802481A4:
    // 0x802481A4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x802481A8: sw          $zero, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = 0;
    // 0x802481AC: sw          $zero, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = 0;
    // 0x802481B0: sw          $zero, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = 0;
    // 0x802481B4: sw          $zero, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = 0;
    // 0x802481B8: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x802481BC: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x802481C0: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x802481C4: bne         $a0, $a3, L_802481A4
    if (ctx->r4 != ctx->r7) {
        // 0x802481C8: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_802481A4;
    }
    // 0x802481C8: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_802481CC:
    // 0x802481CC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x802481D0: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x802481D4: beq         $a3, $zero, L_802481EC
    if (ctx->r7 == 0) {
        // 0x802481D8: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_802481EC;
    }
    // 0x802481D8: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x802481DC: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_802481E0:
    // 0x802481E0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802481E4: bne         $a0, $a3, L_802481E0
    if (ctx->r4 != ctx->r7) {
        // 0x802481E8: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_802481E0;
    }
    // 0x802481E8: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_802481EC:
    // 0x802481EC: blez        $a1, L_80248204
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802481F0: nop
    
            goto L_80248204;
    }
    // 0x802481F0: nop

    // 0x802481F4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
L_802481F8:
    // 0x802481F8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802481FC: bne         $a0, $a1, L_802481F8
    if (ctx->r4 != ctx->r5) {
        // 0x80248200: sb          $zero, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = 0;
            goto L_802481F8;
    }
    // 0x80248200: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
L_80248204:
    // 0x80248204: jr          $ra
    // 0x80248208: nop

    return;
    // 0x80248208: nop

;}
RECOMP_FUNC void D_80283220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802832A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802832A4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802832A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802832AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802832B0: jal         0x80228DE0
    // 0x802832B4: addiu       $a1, $a2, 0x11D4
    ctx->r5 = ADD32(ctx->r6, 0X11D4);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802832B4: addiu       $a1, $a2, 0x11D4
    ctx->r5 = ADD32(ctx->r6, 0X11D4);
    after_0:
    // 0x802832B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802832BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802832C0: jr          $ra
    // 0x802832C4: nop

    return;
    // 0x802832C4: nop

;}
RECOMP_FUNC void D_80247460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247460: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80247464: jr          $ra
    // 0x80247468: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x80247468: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_802B1610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B1690: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802B1694: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802B1698: jr          $ra
    // 0x802B169C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802B169C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802E09FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0A7C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E0A80: jr          $ra
    // 0x802E0A84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802E0A84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802A9608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9688: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802A968C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A9690: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A9694: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A9698: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x802A969C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x802A96A0: jal         0x80228DE0
    // 0x802A96A4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802A96A4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x802A96A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A96AC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x802A96B0: lui         $a2, 0xBFC0
    ctx->r6 = S32(0XBFC0 << 16);
    // 0x802A96B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A96B8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A96BC: jal         0x8022A0D0
    // 0x802A96C0: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x802A96C0: nop

    after_1:
    // 0x802A96C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A96C8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802A96CC: jal         0x802DA450
    // 0x802A96D0: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    static_3_802DA450(rdram, ctx);
        goto after_2;
    // 0x802A96D0: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    after_2:
    // 0x802A96D4: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A96D8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x802A96DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A96E0: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x802A96E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802A96E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A96EC: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x802A96F0: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x802A96F4: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x802A96F8: bc1f        L_802A9704
    if (!c1cs) {
        // 0x802A96FC: nop
    
            goto L_802A9704;
    }
    // 0x802A96FC: nop

    // 0x802A9700: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802A9704:
    // 0x802A9704: jal         0x802DA4EC
    // 0x802A9708: sb          $v1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r3;
    static_3_802DA4EC(rdram, ctx);
        goto after_3;
    // 0x802A9708: sb          $v1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r3;
    after_3:
    // 0x802A970C: lbu         $v1, 0x33($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X33);
    // 0x802A9710: beq         $v1, $zero, L_802A973C
    if (ctx->r3 == 0) {
        // 0x802A9714: nop
    
            goto L_802A973C;
    }
    // 0x802A9714: nop

    // 0x802A9718: lbu         $t7, 0x24($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X24);
    // 0x802A971C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A9720: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802A9724: bne         $t7, $at, L_802A973C
    if (ctx->r15 != ctx->r1) {
        // 0x802A9728: nop
    
            goto L_802A973C;
    }
    // 0x802A9728: nop

    // 0x802A972C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A9730: sb          $t8, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r24;
    // 0x802A9734: b           L_802A9814
    // 0x802A9738: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
        goto L_802A9814;
    // 0x802A9738: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
L_802A973C:
    // 0x802A973C: bnel        $v1, $zero, L_802A9768
    if (ctx->r3 != 0) {
        // 0x802A9740: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_802A9768;
    }
    goto skip_0;
    // 0x802A9740: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    skip_0:
    // 0x802A9744: bnel        $v0, $zero, L_802A9768
    if (ctx->r2 != 0) {
        // 0x802A9748: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_802A9768;
    }
    goto skip_1;
    // 0x802A9748: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    skip_1:
    // 0x802A974C: jal         0x8023499C
    // 0x802A9750: nop

    static_3_8023499C(rdram, ctx);
        goto after_4;
    // 0x802A9750: nop

    after_4:
    // 0x802A9754: lwc1        $f16, 0x88($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802A9758: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802A975C: nop

    // 0x802A9760: bc1f        L_802A97A0
    if (!c1cs) {
        // 0x802A9764: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_802A97A0;
    }
    // 0x802A9764: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
L_802A9768:
    // 0x802A9768: jal         0x8023499C
    // 0x802A976C: sb          $t9, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r25;
    static_3_8023499C(rdram, ctx);
        goto after_5;
    // 0x802A976C: sb          $t9, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r25;
    after_5:
    // 0x802A9770: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A9774: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A9778: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A977C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A9780: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x802A9784: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9788: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A978C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A9790: nop

    // 0x802A9794: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802A9798: b           L_802A9814
    // 0x802A979C: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
        goto L_802A9814;
    // 0x802A979C: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
L_802A97A0:
    // 0x802A97A0: jal         0x80234B48
    // 0x802A97A4: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    static_3_80234B48(rdram, ctx);
        goto after_6;
    // 0x802A97A4: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    after_6:
    // 0x802A97A8: lwc1        $f4, 0x8C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802A97AC: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x802A97B0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802A97B4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802A97B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A97BC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x802A97C0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802A97C4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802A97C8: jal         0x8022A0D0
    // 0x802A97CC: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_7;
    // 0x802A97CC: nop

    after_7:
    // 0x802A97D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A97D4: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x802A97D8: jal         0x802DA450
    // 0x802A97DC: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    static_3_802DA450(rdram, ctx);
        goto after_8;
    // 0x802A97DC: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    after_8:
    // 0x802A97E0: jal         0x8023499C
    // 0x802A97E4: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_9;
    // 0x802A97E4: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    after_9:
    // 0x802A97E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A97EC: ldc1        $f10, 0x0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X0);
    // 0x802A97F0: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x802A97F4: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x802A97F8: nop

    // 0x802A97FC: bc1fl       L_802A9818
    if (!c1cs) {
        // 0x802A9800: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A9818;
    }
    goto skip_2;
    // 0x802A9800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x802A9804: jal         0x802DA3A8
    // 0x802A9808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802DA3A8(rdram, ctx);
        goto after_10;
    // 0x802A9808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x802A980C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x802A9810: sb          $t0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r8;
L_802A9814:
    // 0x802A9814: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A9818:
    // 0x802A9818: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A981C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802A9820: jr          $ra
    // 0x802A9824: nop

    return;
    // 0x802A9824: nop

;}
RECOMP_FUNC void D_802C9C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9CD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802C9CDC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802C9CE0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802C9CE4: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802C9CE8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802C9CEC: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802C9CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C9CF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802C9CF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802C9CFC:
    // 0x802C9CFC: lh          $t8, 0x8($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8);
    // 0x802C9D00: bnel        $a1, $t8, L_802C9D40
    if (ctx->r5 != ctx->r24) {
        // 0x802C9D04: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802C9D40;
    }
    goto skip_0;
    // 0x802C9D04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x802C9D08: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C9D0C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802C9D10: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802C9D14: jal         0x80231A24
    // 0x802C9D18: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802C9D18: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x802C9D1C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802C9D20: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802C9D24: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x802C9D28: addu        $t0, $a2, $t9
    ctx->r8 = ADD32(ctx->r6, ctx->r25);
    // 0x802C9D2C: jal         0x802F9294
    // 0x802C9D30: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    static_3_802F9294(rdram, ctx);
        goto after_1;
    // 0x802C9D30: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_1:
    // 0x802C9D34: b           L_802C9D4C
    // 0x802C9D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802C9D4C;
    // 0x802C9D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C9D3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802C9D40:
    // 0x802C9D40: bne         $v0, $a0, L_802C9CFC
    if (ctx->r2 != ctx->r4) {
        // 0x802C9D44: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_802C9CFC;
    }
    // 0x802C9D44: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x802C9D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802C9D4C:
    // 0x802C9D4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802C9D50: jr          $ra
    // 0x802C9D54: nop

    return;
    // 0x802C9D54: nop

;}
RECOMP_FUNC void D_802F0548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F05C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802F05CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F05D0: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x802F05D4: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802F05D8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802F05DC: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x802F05E0: jalr        $t9
    // 0x802F05E4: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802F05E4: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_0:
    // 0x802F05E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802F05EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802F05F0: jr          $ra
    // 0x802F05F4: nop

    return;
    // 0x802F05F4: nop

;}
RECOMP_FUNC void D_802960C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296140: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80296144: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80296148: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029614C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80296150: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80296154: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80296158: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x8029615C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80296160: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80296164: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80296168: mflo        $t6
    ctx->r14 = lo;
    // 0x8029616C: addu        $s1, $a0, $t6
    ctx->r17 = ADD32(ctx->r4, ctx->r14);
    // 0x80296170: sltu        $at, $a0, $s1
    ctx->r1 = ctx->r4 < ctx->r17 ? 1 : 0;
    // 0x80296174: beql        $at, $zero, L_80296198
    if (ctx->r1 == 0) {
        // 0x80296178: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80296198;
    }
    goto skip_0;
    // 0x80296178: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_8029617C:
    // 0x8029617C: jalr        $s3
    // 0x80296180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_0;
    // 0x80296180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80296184: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x80296188: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x8029618C: bne         $at, $zero, L_8029617C
    if (ctx->r1 != 0) {
        // 0x80296190: nop
    
            goto L_8029617C;
    }
    // 0x80296190: nop

    // 0x80296194: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80296198:
    // 0x80296198: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029619C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802961A0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802961A4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802961A8: jr          $ra
    // 0x802961AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802961AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
