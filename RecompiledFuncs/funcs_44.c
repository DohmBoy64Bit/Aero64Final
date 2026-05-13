#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80285378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802853F8: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x802853FC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80285400: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80285404: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
    // 0x80285408: sw          $a1, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r5;
    // 0x8028540C: sw          $a2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r6;
    // 0x80285410: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80285414: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x80285418: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8028541C: addiu       $t6, $sp, 0xC0
    ctx->r14 = ADD32(ctx->r29, 0XC0);
    // 0x80285420: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80285424: swl         $at, 0x0($t6)
    do_swl(rdram, 0X0, ctx->r14, ctx->r1);
    // 0x80285428: swr         $at, 0x3($t6)
    do_swr(rdram, 0X3, ctx->r14, ctx->r1);
    // 0x8028542C: lhu         $at, 0x4($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X4);
    // 0x80285430: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80285434: addiu       $t1, $sp, 0xA8
    ctx->r9 = ADD32(ctx->r29, 0XA8);
    // 0x80285438: sh          $at, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r1;
    // 0x8028543C: lwl         $t5, 0x4($t2)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r10, 0X4);
    // 0x80285440: lwl         $at, 0x0($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X0);
    // 0x80285444: lwr         $t5, 0x7($t2)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r10, 0X7);
    // 0x80285448: lwr         $at, 0x3($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X3);
    // 0x8028544C: swl         $t5, 0x4($t1)
    do_swl(rdram, 0X4, ctx->r9, ctx->r13);
    // 0x80285450: swl         $at, 0x0($t1)
    do_swl(rdram, 0X0, ctx->r9, ctx->r1);
    // 0x80285454: swr         $t5, 0x7($t1)
    do_swr(rdram, 0X7, ctx->r9, ctx->r13);
    // 0x80285458: swr         $at, 0x3($t1)
    do_swr(rdram, 0X3, ctx->r9, ctx->r1);
    // 0x8028545C: lwl         $t5, 0xC($t2)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r10, 0XC);
    // 0x80285460: lwl         $at, 0x8($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X8);
    // 0x80285464: lwr         $t5, 0xF($t2)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r10, 0XF);
    // 0x80285468: lwr         $at, 0xB($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0XB);
    // 0x8028546C: swl         $t5, 0xC($t1)
    do_swl(rdram, 0XC, ctx->r9, ctx->r13);
    // 0x80285470: swl         $at, 0x8($t1)
    do_swl(rdram, 0X8, ctx->r9, ctx->r1);
    // 0x80285474: swr         $t5, 0xF($t1)
    do_swr(rdram, 0XF, ctx->r9, ctx->r13);
    // 0x80285478: swr         $at, 0xB($t1)
    do_swr(rdram, 0XB, ctx->r9, ctx->r1);
    // 0x8028547C: lwl         $t5, 0x14($t2)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r10, 0X14);
    // 0x80285480: lwl         $at, 0x10($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X10);
    // 0x80285484: lwr         $t5, 0x17($t2)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r10, 0X17);
    // 0x80285488: lwr         $at, 0x13($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X13);
    // 0x8028548C: swl         $t5, 0x14($t1)
    do_swl(rdram, 0X14, ctx->r9, ctx->r13);
    // 0x80285490: swl         $at, 0x10($t1)
    do_swl(rdram, 0X10, ctx->r9, ctx->r1);
    // 0x80285494: swr         $t5, 0x17($t1)
    do_swr(rdram, 0X17, ctx->r9, ctx->r13);
    // 0x80285498: swr         $at, 0x13($t1)
    do_swr(rdram, 0X13, ctx->r9, ctx->r1);
    // 0x8028549C: lw          $t9, 0x120($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X120);
    // 0x802854A0: lw          $t8, 0x78($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X78);
    // 0x802854A4: andi        $t6, $t8, 0x1
    ctx->r14 = ctx->r24 & 0X1;
    // 0x802854A8: beql        $t6, $zero, L_80285D08
    if (ctx->r14 == 0) {
        // 0x802854AC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80285D08;
    }
    goto skip_0;
    // 0x802854AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802854B0: jal         0x8022331C
    // 0x802854B4: nop

    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802854B4: nop

    after_0:
    // 0x802854B8: lw          $t7, 0x120($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X120);
    // 0x802854BC: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x802854C0: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x802854C4: jal         0x80228DE0
    // 0x802854C8: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802854C8: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    after_1:
    // 0x802854CC: lw          $t0, 0x120($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X120);
    // 0x802854D0: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x802854D4: lw          $a1, 0x1A0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X1A0);
    // 0x802854D8: lw          $t9, 0x84($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X84);
    // 0x802854DC: lh          $t4, 0x80($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X80);
    // 0x802854E0: jalr        $t9
    // 0x802854E4: addu        $a0, $t4, $a2
    ctx->r4 = ADD32(ctx->r12, ctx->r6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802854E4: addu        $a0, $t4, $a2
    ctx->r4 = ADD32(ctx->r12, ctx->r6);
    after_2:
    // 0x802854E8: lw          $v0, 0x120($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X120);
    // 0x802854EC: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x802854F0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x802854F4: jal         0x802AED60
    // 0x802854F8: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    static_3_802AED60(rdram, ctx);
        goto after_3;
    // 0x802854F8: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    after_3:
    // 0x802854FC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80285500: bne         $v0, $at, L_80285550
    if (ctx->r2 != ctx->r1) {
        // 0x80285504: nop
    
            goto L_80285550;
    }
    // 0x80285504: nop

    // 0x80285508: lw          $t3, 0x120($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X120);
    // 0x8028550C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80285510: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80285514: lw          $a2, 0x4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X4);
    // 0x80285518: lwc1        $f6, 0x128($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X128);
    // 0x8028551C: lhu         $v0, 0x10($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X10);
    // 0x80285520: beql        $v0, $zero, L_80285534
    if (ctx->r2 == 0) {
        // 0x80285524: sub.s       $f8, $f4, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
            goto L_80285534;
    }
    goto skip_1;
    // 0x80285524: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    skip_1:
    // 0x80285528: bne         $v0, $at, L_8028553C
    if (ctx->r2 != ctx->r1) {
        // 0x8028552C: nop
    
            goto L_8028553C;
    }
    // 0x8028552C: nop

    // 0x80285530: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
L_80285534:
    // 0x80285534: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80285538: swc1        $f10, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f10.u32l;
L_8028553C:
    // 0x8028553C: jal         0x802E6EAC
    // 0x80285540: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802E6EAC(rdram, ctx);
        goto after_4;
    // 0x80285540: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_4:
    // 0x80285544: lwc1        $f16, 0x128($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80285548: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8028554C: swc1        $f18, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f18.u32l;
L_80285550:
    // 0x80285550: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80285554: ldc1        $f0, 0x0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X0);
    // 0x80285558: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028555C: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80285560: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80285564: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80285568: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8028556C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80285570: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x80285574: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x80285578: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x8028557C: nop

    // 0x80285580: blezl       $v1, L_80285594
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80285584: negu        $v0, $v1
        ctx->r2 = SUB32(0, ctx->r3);
            goto L_80285594;
    }
    goto skip_2;
    // 0x80285584: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    skip_2:
    // 0x80285588: b           L_80285594
    // 0x8028558C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80285594;
    // 0x8028558C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80285590: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_80285594:
    // 0x80285594: slti        $at, $v0, 0x5B
    ctx->r1 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
    // 0x80285598: bnel        $at, $zero, L_802855AC
    if (ctx->r1 != 0) {
        // 0x8028559C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802855AC;
    }
    goto skip_3;
    // 0x8028559C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    skip_3:
    // 0x802855A0: b           L_802855AC
    // 0x802855A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_802855AC;
    // 0x802855A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802855A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_802855AC:
    // 0x802855AC: lwc1        $f18, 0x124($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X124);
    // 0x802855B0: sb          $a1, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r5;
    // 0x802855B4: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x802855B8: div.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x802855BC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802855C0: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x802855C4: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x802855C8: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x802855CC: nop

    // 0x802855D0: bltzl       $v1, L_802855FC
    if (SIGNED(ctx->r3) < 0) {
        // 0x802855D4: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_802855FC;
    }
    goto skip_4;
    // 0x802855D4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    skip_4:
    // 0x802855D8: andi        $t5, $a1, 0xFF
    ctx->r13 = ctx->r5 & 0XFF;
    // 0x802855DC: beq         $t5, $zero, L_802855F0
    if (ctx->r13 == 0) {
        // 0x802855E0: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_802855F0;
    }
    // 0x802855E0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x802855E4: addiu       $t8, $zero, 0xB4
    ctx->r24 = ADD32(0, 0XB4);
    // 0x802855E8: b           L_802855F0
    // 0x802855EC: subu        $a1, $t8, $v1
    ctx->r5 = SUB32(ctx->r24, ctx->r3);
        goto L_802855F0;
    // 0x802855EC: subu        $a1, $t8, $v1
    ctx->r5 = SUB32(ctx->r24, ctx->r3);
L_802855F0:
    // 0x802855F0: b           L_80285620
    // 0x802855F4: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
        goto L_80285620;
    // 0x802855F4: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x802855F8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
L_802855FC:
    // 0x802855FC: beq         $t6, $zero, L_8028561C
    if (ctx->r14 == 0) {
        // 0x80285600: addiu       $a1, $v1, 0x168
        ctx->r5 = ADD32(ctx->r3, 0X168);
            goto L_8028561C;
    }
    // 0x80285600: addiu       $a1, $v1, 0x168
    ctx->r5 = ADD32(ctx->r3, 0X168);
    // 0x80285604: blez        $v1, L_80285614
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80285608: negu        $v0, $v1
        ctx->r2 = SUB32(0, ctx->r3);
            goto L_80285614;
    }
    // 0x80285608: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x8028560C: b           L_8028561C
    // 0x80285610: addiu       $a1, $v1, 0xB4
    ctx->r5 = ADD32(ctx->r3, 0XB4);
        goto L_8028561C;
    // 0x80285610: addiu       $a1, $v1, 0xB4
    ctx->r5 = ADD32(ctx->r3, 0XB4);
L_80285614:
    // 0x80285614: b           L_8028561C
    // 0x80285618: addiu       $a1, $v0, 0xB4
    ctx->r5 = ADD32(ctx->r2, 0XB4);
        goto L_8028561C;
    // 0x80285618: addiu       $a1, $v0, 0xB4
    ctx->r5 = ADD32(ctx->r2, 0XB4);
L_8028561C:
    // 0x8028561C: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
L_80285620:
    // 0x80285620: addiu       $v0, $a1, 0xF
    ctx->r2 = ADD32(ctx->r5, 0XF);
    // 0x80285624: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80285628: mfhi        $t7
    ctx->r15 = hi;
    // 0x8028562C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80285630: addiu       $v1, $sp, 0xA8
    ctx->r3 = ADD32(ctx->r29, 0XA8);
    // 0x80285634: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x80285638: mflo        $t0
    ctx->r8 = lo;
    // 0x8028563C: sll         $t4, $t0, 16
    ctx->r12 = S32(ctx->r8 << 16);
    // 0x80285640: sra         $t9, $t4, 16
    ctx->r25 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80285644: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x80285648: div         $zero, $t3, $a2
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r6)));
    // 0x8028564C: mfhi        $t1
    ctx->r9 = hi;
    // 0x80285650: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80285654: bne         $a2, $zero, L_80285660
    if (ctx->r6 != 0) {
        // 0x80285658: nop
    
            goto L_80285660;
    }
    // 0x80285658: nop

    // 0x8028565C: break       7
    do_break(2150127196);
L_80285660:
    // 0x80285660: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80285664: bne         $a2, $at, L_80285678
    if (ctx->r6 != ctx->r1) {
        // 0x80285668: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80285678;
    }
    // 0x80285668: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8028566C: bne         $t3, $at, L_80285678
    if (ctx->r11 != ctx->r1) {
        // 0x80285670: nop
    
            goto L_80285678;
    }
    // 0x80285670: nop

    // 0x80285674: break       6
    do_break(2150127220);
L_80285678:
    // 0x80285678: addiu       $t3, $v0, 0xB
    ctx->r11 = ADD32(ctx->r2, 0XB);
    // 0x8028567C: div         $zero, $t3, $a2
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r6)));
    // 0x80285680: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x80285684: sra         $t5, $t2, 16
    ctx->r13 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80285688: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x8028568C: addu        $t6, $v1, $t8
    ctx->r14 = ADD32(ctx->r3, ctx->r24);
    // 0x80285690: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x80285694: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x80285698: addu        $t4, $v1, $t0
    ctx->r12 = ADD32(ctx->r3, ctx->r8);
    // 0x8028569C: mfhi        $t1
    ctx->r9 = hi;
    // 0x802856A0: sh          $t7, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r15;
    // 0x802856A4: lh          $t9, 0x0($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X0);
    // 0x802856A8: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x802856AC: sra         $t5, $t2, 16
    ctx->r13 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802856B0: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x802856B4: addu        $t6, $v1, $t8
    ctx->r14 = ADD32(ctx->r3, ctx->r24);
    // 0x802856B8: sh          $t9, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r25;
    // 0x802856BC: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x802856C0: bne         $a2, $zero, L_802856CC
    if (ctx->r6 != 0) {
        // 0x802856C4: nop
    
            goto L_802856CC;
    }
    // 0x802856C4: nop

    // 0x802856C8: break       7
    do_break(2150127304);
L_802856CC:
    // 0x802856CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802856D0: bne         $a2, $at, L_802856E4
    if (ctx->r6 != ctx->r1) {
        // 0x802856D4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802856E4;
    }
    // 0x802856D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802856D8: bne         $t3, $at, L_802856E4
    if (ctx->r11 != ctx->r1) {
        // 0x802856DC: nop
    
            goto L_802856E4;
    }
    // 0x802856DC: nop

    // 0x802856E0: break       6
    do_break(2150127328);
L_802856E4:
    // 0x802856E4: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x802856E8: jal         0x8022970C
    // 0x802856EC: sh          $t7, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r15;
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x802856EC: sh          $t7, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r15;
    after_5:
    // 0x802856F0: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802856F4: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802856F8: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x802856FC: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x80285700: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x80285704: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80285708: swc1        $f16, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f16.u32l;
    // 0x8028570C: jal         0x8022A0D0
    // 0x80285710: swc1        $f18, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f18.u32l;
    static_3_8022A0D0(rdram, ctx);
        goto after_6;
    // 0x80285710: swc1        $f18, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x80285714: lw          $t0, 0x120($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X120);
    // 0x80285718: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    // 0x8028571C: lhu         $v0, 0x10($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X10);
    // 0x80285720: beq         $v0, $zero, L_80285740
    if (ctx->r2 == 0) {
        // 0x80285724: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80285740;
    }
    // 0x80285724: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80285728: beq         $v0, $at, L_80285740
    if (ctx->r2 == ctx->r1) {
        // 0x8028572C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80285740;
    }
    // 0x8028572C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80285730: beql        $v0, $at, L_80285788
    if (ctx->r2 == ctx->r1) {
        // 0x80285734: addiu       $a0, $sp, 0xE0
        ctx->r4 = ADD32(ctx->r29, 0XE0);
            goto L_80285788;
    }
    goto skip_5;
    // 0x80285734: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    skip_5:
    // 0x80285738: b           L_80285788
    // 0x8028573C: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
        goto L_80285788;
    // 0x8028573C: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
L_80285740:
    // 0x80285740: lw          $t4, 0x120($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X120);
    // 0x80285744: jal         0x802AED60
    // 0x80285748: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    static_3_802AED60(rdram, ctx);
        goto after_7;
    // 0x80285748: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    after_7:
    // 0x8028574C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80285750: beq         $v0, $at, L_80285784
    if (ctx->r2 == ctx->r1) {
        // 0x80285754: lwc1        $f4, 0x128($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
            goto L_80285784;
    }
    // 0x80285754: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80285758: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028575C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285760: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80285764: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x80285768: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028576C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80285770: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80285774: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x80285778: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8028577C: jal         0x802D01D4
    // 0x80285780: nop

    static_3_802D01D4(rdram, ctx);
        goto after_8;
    // 0x80285780: nop

    after_8:
L_80285784:
    // 0x80285784: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
L_80285788:
    // 0x80285788: jal         0x80222E98
    // 0x8028578C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80222E98(rdram, ctx);
        goto after_9;
    // 0x8028578C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80285790: jal         0x80223468
    // 0x80285794: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    static_3_80223468(rdram, ctx);
        goto after_10;
    // 0x80285794: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    after_10:
    // 0x80285798: jal         0x8021F4E4
    // 0x8028579C: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_11;
    // 0x8028579C: nop

    after_11:
    // 0x802857A0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802857A4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802857A8: addiu       $t1, $zero, 0xE1
    ctx->r9 = ADD32(0, 0XE1);
    // 0x802857AC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802857B0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802857B4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802857B8: addiu       $a0, $zero, -0x12
    ctx->r4 = ADD32(0, -0X12);
    // 0x802857BC: addiu       $a1, $zero, -0x12
    ctx->r5 = ADD32(0, -0X12);
    // 0x802857C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802857C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802857C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802857CC: jal         0x8021F35C
    // 0x802857D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x802857D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_12:
    // 0x802857D4: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802857D8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802857DC: addiu       $t8, $zero, 0xE1
    ctx->r24 = ADD32(0, 0XE1);
    // 0x802857E0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802857E4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802857E8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802857EC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x802857F0: addiu       $a1, $zero, -0x12
    ctx->r5 = ADD32(0, -0X12);
    // 0x802857F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802857F8: addiu       $a3, $zero, 0x420
    ctx->r7 = ADD32(0, 0X420);
    // 0x802857FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80285800: jal         0x8021F35C
    // 0x80285804: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_13;
    // 0x80285804: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_13:
    // 0x80285808: addiu       $t6, $zero, 0x420
    ctx->r14 = ADD32(0, 0X420);
    // 0x8028580C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80285810: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80285814: addiu       $t4, $zero, 0xE1
    ctx->r12 = ADD32(0, 0XE1);
    // 0x80285818: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8028581C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80285820: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80285824: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80285828: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x8028582C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80285830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80285834: addiu       $a3, $zero, 0x420
    ctx->r7 = ADD32(0, 0X420);
    // 0x80285838: jal         0x8021F35C
    // 0x8028583C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x8028583C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_14:
    // 0x80285840: addiu       $t9, $zero, 0x420
    ctx->r25 = ADD32(0, 0X420);
    // 0x80285844: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x80285848: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028584C: addiu       $t2, $zero, 0xE1
    ctx->r10 = ADD32(0, 0XE1);
    // 0x80285850: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80285854: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80285858: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8028585C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80285860: addiu       $a0, $zero, -0x12
    ctx->r4 = ADD32(0, -0X12);
    // 0x80285864: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80285868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028586C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80285870: jal         0x8021F35C
    // 0x80285874: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x80285874: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_15:
    // 0x80285878: jal         0x8021FCD0
    // 0x8028587C: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_16;
    // 0x8028587C: nop

    after_16:
    // 0x80285880: jal         0x802230E4
    // 0x80285884: nop

    static_3_802230E4(rdram, ctx);
        goto after_17;
    // 0x80285884: nop

    after_17:
    // 0x80285888: jal         0x8022970C
    // 0x8028588C: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    func_8022970C(rdram, ctx);
        goto after_18;
    // 0x8028588C: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    after_18:
    // 0x80285890: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80285894: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80285898: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x8028589C: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x802858A0: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x802858A4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802858A8: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x802858AC: jal         0x8022A0D0
    // 0x802858B0: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    static_3_8022A0D0(rdram, ctx);
        goto after_19;
    // 0x802858B0: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
    after_19:
    // 0x802858B4: lw          $t5, 0x120($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X120);
    // 0x802858B8: lw          $a1, 0x4($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X4);
    // 0x802858BC: lhu         $v0, 0x10($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X10);
    // 0x802858C0: beq         $v0, $zero, L_802858E0
    if (ctx->r2 == 0) {
        // 0x802858C4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802858E0;
    }
    // 0x802858C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802858C8: beq         $v0, $at, L_802858E0
    if (ctx->r2 == ctx->r1) {
        // 0x802858CC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802858E0;
    }
    // 0x802858CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802858D0: beq         $v0, $at, L_80285984
    if (ctx->r2 == ctx->r1) {
        // 0x802858D4: lbu         $t0, 0xA7($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0XA7);
            goto L_80285984;
    }
    // 0x802858D4: lbu         $t0, 0xA7($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XA7);
    // 0x802858D8: b           L_802859BC
    // 0x802858DC: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
        goto L_802859BC;
    // 0x802858DC: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
L_802858E0:
    // 0x802858E0: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
    // 0x802858E4: jal         0x802AED60
    // 0x802858E8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    static_3_802AED60(rdram, ctx);
        goto after_20;
    // 0x802858E8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_20:
    // 0x802858EC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802858F0: bne         $v0, $at, L_8028593C
    if (ctx->r2 != ctx->r1) {
        // 0x802858F4: lbu         $t7, 0xA7($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0XA7);
            goto L_8028593C;
    }
    // 0x802858F4: lbu         $t7, 0xA7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XA7);
    // 0x802858F8: lbu         $t6, 0xA7($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XA7);
    // 0x802858FC: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80285900: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80285904: beql        $t6, $zero, L_80285918
    if (ctx->r14 == 0) {
        // 0x80285908: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80285918;
    }
    goto skip_6;
    // 0x80285908: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_6:
    // 0x8028590C: b           L_8028591C
    // 0x80285910: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
        goto L_8028591C;
    // 0x80285910: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80285914: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80285918:
    // 0x80285918: nop

L_8028591C:
    // 0x8028591C: add.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80285920: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x80285924: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80285928: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8028592C: jal         0x802D01D4
    // 0x80285930: nop

    static_3_802D01D4(rdram, ctx);
        goto after_21;
    // 0x80285930: nop

    after_21:
    // 0x80285934: b           L_802859BC
    // 0x80285938: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
        goto L_802859BC;
    // 0x80285938: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
L_8028593C:
    // 0x8028593C: beq         $t7, $zero, L_80285950
    if (ctx->r15 == 0) {
        // 0x80285940: lwc1        $f16, 0x128($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
            goto L_80285950;
    }
    // 0x80285940: lwc1        $f16, 0x128($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80285944: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80285948: b           L_80285958
    // 0x8028594C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
        goto L_80285958;
    // 0x8028594C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
L_80285950:
    // 0x80285950: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80285954: nop

L_80285958:
    // 0x80285958: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8028595C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80285960: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80285964: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x80285968: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x8028596C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80285970: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80285974: jal         0x802D01D4
    // 0x80285978: nop

    static_3_802D01D4(rdram, ctx);
        goto after_22;
    // 0x80285978: nop

    after_22:
    // 0x8028597C: b           L_802859BC
    // 0x80285980: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
        goto L_802859BC;
    // 0x80285980: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
L_80285984:
    // 0x80285984: beq         $t0, $zero, L_80285998
    if (ctx->r8 == 0) {
        // 0x80285988: lwc1        $f10, 0x128($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
            goto L_80285998;
    }
    // 0x80285988: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x8028598C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80285990: b           L_802859A0
    // 0x80285994: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
        goto L_802859A0;
    // 0x80285994: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
L_80285998:
    // 0x80285998: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028599C: nop

L_802859A0:
    // 0x802859A0: add.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x802859A4: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x802859A8: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802859AC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802859B0: jal         0x802D01D4
    // 0x802859B4: nop

    static_3_802D01D4(rdram, ctx);
        goto after_23;
    // 0x802859B4: nop

    after_23:
    // 0x802859B8: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
L_802859BC:
    // 0x802859BC: jal         0x80222E98
    // 0x802859C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80222E98(rdram, ctx);
        goto after_24;
    // 0x802859C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x802859C4: lbu         $t4, 0xA7($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XA7);
    // 0x802859C8: beq         $t4, $zero, L_802859E0
    if (ctx->r12 == 0) {
        // 0x802859CC: nop
    
            goto L_802859E0;
    }
    // 0x802859CC: nop

    // 0x802859D0: jal         0x80223468
    // 0x802859D4: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    static_3_80223468(rdram, ctx);
        goto after_25;
    // 0x802859D4: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_25:
    // 0x802859D8: b           L_802859E8
    // 0x802859DC: nop

        goto L_802859E8;
    // 0x802859DC: nop

L_802859E0:
    // 0x802859E0: jal         0x80223468
    // 0x802859E4: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    static_3_80223468(rdram, ctx);
        goto after_26;
    // 0x802859E4: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    after_26:
L_802859E8:
    // 0x802859E8: jal         0x8021F4E4
    // 0x802859EC: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_27;
    // 0x802859EC: nop

    after_27:
    // 0x802859F0: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x802859F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802859F8: ldc1        $f6, 0x0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X0);
    // 0x802859FC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80285A00: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80285A04: addiu       $t5, $zero, 0x91
    ctx->r13 = ADD32(0, 0X91);
    // 0x80285A08: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80285A0C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80285A10: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80285A14: addiu       $a0, $zero, -0x30
    ctx->r4 = ADD32(0, -0X30);
    // 0x80285A18: addiu       $a1, $zero, -0x30
    ctx->r5 = ADD32(0, -0X30);
    // 0x80285A1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80285A20: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80285A24: addiu       $a3, $zero, -0x640
    ctx->r7 = ADD32(0, -0X640);
    // 0x80285A28: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80285A2C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80285A30: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80285A34: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x80285A38: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80285A3C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80285A40: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80285A44: nop

    // 0x80285A48: addiu       $v1, $v0, -0x20
    ctx->r3 = ADD32(ctx->r2, -0X20);
    // 0x80285A4C: sll         $t1, $v1, 5
    ctx->r9 = S32(ctx->r3 << 5);
    // 0x80285A50: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80285A54: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80285A58: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80285A5C: jal         0x8021F35C
    // 0x80285A60: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    static_3_8021F35C(rdram, ctx);
        goto after_28;
    // 0x80285A60: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_28:
    // 0x80285A64: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80285A68: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80285A6C: addiu       $t6, $zero, 0x91
    ctx->r14 = ADD32(0, 0X91);
    // 0x80285A70: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80285A74: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80285A78: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80285A7C: addiu       $a1, $zero, -0x30
    ctx->r5 = ADD32(0, -0X30);
    // 0x80285A80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80285A84: addiu       $a3, $zero, 0x640
    ctx->r7 = ADD32(0, 0X640);
    // 0x80285A88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80285A8C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80285A90: jal         0x8021F35C
    // 0x80285A94: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    static_3_8021F35C(rdram, ctx);
        goto after_29;
    // 0x80285A94: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_29:
    // 0x80285A98: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80285A9C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80285AA0: addiu       $t4, $zero, 0x91
    ctx->r12 = ADD32(0, 0X91);
    // 0x80285AA4: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x80285AA8: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x80285AAC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x80285AB0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80285AB4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80285AB8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80285ABC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80285AC0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80285AC4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80285AC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80285ACC: addiu       $a3, $zero, 0x640
    ctx->r7 = ADD32(0, 0X640);
    // 0x80285AD0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80285AD4: jal         0x8021F35C
    // 0x80285AD8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_30;
    // 0x80285AD8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_30:
    // 0x80285ADC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80285AE0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80285AE4: addiu       $t3, $zero, 0x91
    ctx->r11 = ADD32(0, 0X91);
    // 0x80285AE8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80285AEC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80285AF0: addiu       $a0, $zero, -0x30
    ctx->r4 = ADD32(0, -0X30);
    // 0x80285AF4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80285AF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80285AFC: addiu       $a3, $zero, -0x640
    ctx->r7 = ADD32(0, -0X640);
    // 0x80285B00: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80285B04: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80285B08: jal         0x8021F35C
    // 0x80285B0C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    static_3_8021F35C(rdram, ctx);
        goto after_31;
    // 0x80285B0C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_31:
    // 0x80285B10: jal         0x8021FCD0
    // 0x80285B14: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_32;
    // 0x80285B14: nop

    after_32:
    // 0x80285B18: jal         0x802230E4
    // 0x80285B1C: nop

    static_3_802230E4(rdram, ctx);
        goto after_33;
    // 0x80285B1C: nop

    after_33:
    // 0x80285B20: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80285B24: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x80285B28: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80285B2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80285B30: bne         $t1, $at, L_80285B40
    if (ctx->r9 != ctx->r1) {
        // 0x80285B34: nop
    
            goto L_80285B40;
    }
    // 0x80285B34: nop

    // 0x80285B38: b           L_80285B40
    // 0x80285B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80285B40;
    // 0x80285B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80285B40:
    // 0x80285B40: beq         $v0, $zero, L_80285B58
    if (ctx->r2 == 0) {
        // 0x80285B44: nop
    
            goto L_80285B58;
    }
    // 0x80285B44: nop

    // 0x80285B48: jal         0x8021E66C
    // 0x80285B4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    static_3_8021E66C(rdram, ctx);
        goto after_34;
    // 0x80285B4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_34:
    // 0x80285B50: b           L_80285B60
    // 0x80285B54: nop

        goto L_80285B60;
    // 0x80285B54: nop

L_80285B58:
    // 0x80285B58: jal         0x8021E66C
    // 0x80285B5C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    static_3_8021E66C(rdram, ctx);
        goto after_35;
    // 0x80285B5C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_35:
L_80285B60:
    // 0x80285B60: jal         0x8022970C
    // 0x80285B64: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    func_8022970C(rdram, ctx);
        goto after_36;
    // 0x80285B64: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    after_36:
    // 0x80285B68: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80285B6C: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80285B70: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x80285B74: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x80285B78: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x80285B7C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80285B80: swc1        $f16, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f16.u32l;
    // 0x80285B84: jal         0x8022A0D0
    // 0x80285B88: swc1        $f18, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
    static_3_8022A0D0(rdram, ctx);
        goto after_37;
    // 0x80285B88: swc1        $f18, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
    after_37:
    // 0x80285B8C: lw          $t2, 0x120($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X120);
    // 0x80285B90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80285B94: lw          $t5, 0x120($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X120);
    // 0x80285B98: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    // 0x80285B9C: lhu         $v0, 0x10($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X10);
    // 0x80285BA0: beq         $v0, $zero, L_80285BC0
    if (ctx->r2 == 0) {
        // 0x80285BA4: nop
    
            goto L_80285BC0;
    }
    // 0x80285BA4: nop

    // 0x80285BA8: beq         $v0, $at, L_80285BC0
    if (ctx->r2 == ctx->r1) {
        // 0x80285BAC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80285BC0;
    }
    // 0x80285BAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80285BB0: beq         $v0, $at, L_80285C60
    if (ctx->r2 == ctx->r1) {
        // 0x80285BB4: lbu         $t7, 0xA7($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0XA7);
            goto L_80285C60;
    }
    // 0x80285BB4: lbu         $t7, 0xA7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XA7);
    // 0x80285BB8: b           L_80285C98
    // 0x80285BBC: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
        goto L_80285C98;
    // 0x80285BBC: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
L_80285BC0:
    // 0x80285BC0: jal         0x802AED60
    // 0x80285BC4: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    static_3_802AED60(rdram, ctx);
        goto after_38;
    // 0x80285BC4: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    after_38:
    // 0x80285BC8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80285BCC: bne         $v0, $at, L_80285C18
    if (ctx->r2 != ctx->r1) {
        // 0x80285BD0: lbu         $t6, 0xA7($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0XA7);
            goto L_80285C18;
    }
    // 0x80285BD0: lbu         $t6, 0xA7($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XA7);
    // 0x80285BD4: lbu         $t8, 0xA7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XA7);
    // 0x80285BD8: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80285BDC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80285BE0: beql        $t8, $zero, L_80285BF4
    if (ctx->r24 == 0) {
        // 0x80285BE4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80285BF4;
    }
    goto skip_7;
    // 0x80285BE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_7:
    // 0x80285BE8: b           L_80285BF8
    // 0x80285BEC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
        goto L_80285BF8;
    // 0x80285BEC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80285BF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80285BF4:
    // 0x80285BF4: nop

L_80285BF8:
    // 0x80285BF8: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80285BFC: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x80285C00: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80285C04: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80285C08: jal         0x802D01D4
    // 0x80285C0C: nop

    static_3_802D01D4(rdram, ctx);
        goto after_39;
    // 0x80285C0C: nop

    after_39:
    // 0x80285C10: b           L_80285C98
    // 0x80285C14: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
        goto L_80285C98;
    // 0x80285C14: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
L_80285C18:
    // 0x80285C18: beq         $t6, $zero, L_80285C2C
    if (ctx->r14 == 0) {
        // 0x80285C1C: lwc1        $f10, 0x128($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
            goto L_80285C2C;
    }
    // 0x80285C1C: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80285C20: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80285C24: b           L_80285C34
    // 0x80285C28: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
        goto L_80285C34;
    // 0x80285C28: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
L_80285C2C:
    // 0x80285C2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80285C30: nop

L_80285C34:
    // 0x80285C34: add.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80285C38: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80285C3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80285C40: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x80285C44: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80285C48: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80285C4C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80285C50: jal         0x802D01D4
    // 0x80285C54: nop

    static_3_802D01D4(rdram, ctx);
        goto after_40;
    // 0x80285C54: nop

    after_40:
    // 0x80285C58: b           L_80285C98
    // 0x80285C5C: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
        goto L_80285C98;
    // 0x80285C5C: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
L_80285C60:
    // 0x80285C60: beq         $t7, $zero, L_80285C74
    if (ctx->r15 == 0) {
        // 0x80285C64: lwc1        $f4, 0x128($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
            goto L_80285C74;
    }
    // 0x80285C64: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80285C68: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80285C6C: b           L_80285C7C
    // 0x80285C70: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
        goto L_80285C7C;
    // 0x80285C70: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
L_80285C74:
    // 0x80285C74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80285C78: nop

L_80285C7C:
    // 0x80285C7C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80285C80: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x80285C84: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80285C88: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80285C8C: jal         0x802D01D4
    // 0x80285C90: nop

    static_3_802D01D4(rdram, ctx);
        goto after_41;
    // 0x80285C90: nop

    after_41:
    // 0x80285C94: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
L_80285C98:
    // 0x80285C98: jal         0x80222E98
    // 0x80285C9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80222E98(rdram, ctx);
        goto after_42;
    // 0x80285C9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_42:
    // 0x80285CA0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80285CA4: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
L_80285CA8:
    // 0x80285CA8: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x80285CAC: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80285CB0: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80285CB4: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x80285CB8: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x80285CBC: addiu       $a3, $sp, 0xC0
    ctx->r7 = ADD32(ctx->r29, 0XC0);
    // 0x80285CC0: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x80285CC4: jal         0x802B6424
    // 0x80285CC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802B6424(rdram, ctx);
        goto after_43;
    // 0x80285CC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_43:
    // 0x80285CCC: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x80285CD0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80285CD4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80285CD8: bnel        $v1, $at, L_80285CA8
    if (ctx->r3 != ctx->r1) {
        // 0x80285CDC: lwc1        $f10, 0x3C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_80285CA8;
    }
    goto skip_8;
    // 0x80285CDC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    skip_8:
    // 0x80285CE0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80285CE4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80285CE8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80285CEC: jal         0x8021E708
    // 0x80285CF0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_44;
    // 0x80285CF0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_44:
    // 0x80285CF4: jal         0x802230E4
    // 0x80285CF8: nop

    static_3_802230E4(rdram, ctx);
        goto after_45;
    // 0x80285CF8: nop

    after_45:
    // 0x80285CFC: jal         0x8022337C
    // 0x80285D00: nop

    static_3_8022337C(rdram, ctx);
        goto after_46;
    // 0x80285D00: nop

    after_46:
    // 0x80285D04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80285D08:
    // 0x80285D08: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    // 0x80285D0C: jr          $ra
    // 0x80285D10: nop

    return;
    // 0x80285D10: nop

;}
RECOMP_FUNC void D_80296130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802961B0: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802961B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802961B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802961BC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802961C0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802961C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802961C8: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x802961CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802961D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802961D4: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x802961D8: mflo        $t6
    ctx->r14 = lo;
    // 0x802961DC: addu        $s1, $a0, $t6
    ctx->r17 = ADD32(ctx->r4, ctx->r14);
    // 0x802961E0: sltu        $at, $a0, $s1
    ctx->r1 = ctx->r4 < ctx->r17 ? 1 : 0;
    // 0x802961E4: beq         $at, $zero, L_80296204
    if (ctx->r1 == 0) {
        // 0x802961E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80296204;
    }
    // 0x802961E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802961EC:
    // 0x802961EC: jalr        $s3
    // 0x802961F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_0;
    // 0x802961F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802961F4: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x802961F8: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x802961FC: bnel        $at, $zero, L_802961EC
    if (ctx->r1 != 0) {
        // 0x80296200: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802961EC;
    }
    goto skip_0;
    // 0x80296200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_80296204:
    // 0x80296204: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80296208: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8029620C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80296210: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80296214: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80296218: jr          $ra
    // 0x8029621C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8029621C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8029FFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A004C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A0050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A0054: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A0058: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A005C: beq         $a0, $zero, L_802A00B0
    if (ctx->r4 == 0) {
        // 0x802A0060: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802A00B0;
    }
    // 0x802A0060: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A0064: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A0068: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A006C: jal         0x802D0C1C
    // 0x802A0070: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    static_3_802D0C1C(rdram, ctx);
        goto after_0;
    // 0x802A0070: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    after_0:
    // 0x802A0074: addiu       $a0, $s0, 0x1C0
    ctx->r4 = ADD32(ctx->r16, 0X1C0);
    // 0x802A0078: jal         0x8031FA40
    // 0x802A007C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031FA40(rdram, ctx);
        goto after_1;
    // 0x802A007C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802A0080: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    // 0x802A0084: jal         0x802D3EF8
    // 0x802A0088: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D3EF8(rdram, ctx);
        goto after_2;
    // 0x802A0088: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802A008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A0090: jal         0x80320C88
    // 0x802A0094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320C88(rdram, ctx);
        goto after_3;
    // 0x802A0094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802A0098: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802A009C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A00A0: beql        $t8, $zero, L_802A00B4
    if (ctx->r24 == 0) {
        // 0x802A00A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A00B4;
    }
    goto skip_0;
    // 0x802A00A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802A00A8: jal         0x802C681C
    // 0x802A00AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_4;
    // 0x802A00AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_802A00B0:
    // 0x802A00B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A00B4:
    // 0x802A00B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A00B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A00BC: jr          $ra
    // 0x802A00C0: nop

    return;
    // 0x802A00C0: nop

;}
RECOMP_FUNC void D_80299DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299E58: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80299E5C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80299E60: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80299E64: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80299E68: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80299E6C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80299E70: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80299E74: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80299E78: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80299E7C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80299E80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80299E84: lbu         $t6, 0x89($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X89);
    // 0x80299E88: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80299E8C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80299E90: bne         $s0, $t6, L_80299EAC
    if (ctx->r16 != ctx->r14) {
        // 0x80299E94: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_80299EAC;
    }
    // 0x80299E94: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80299E98: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80299E9C: jal         0x802CB994
    // 0x80299EA0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_802CB994(rdram, ctx);
        goto after_0;
    // 0x80299EA0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x80299EA4: b           L_80299EBC
    // 0x80299EA8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
        goto L_80299EBC;
    // 0x80299EA8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_80299EAC:
    // 0x80299EAC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80299EB0: jal         0x802CB994
    // 0x80299EB4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_802CB994(rdram, ctx);
        goto after_1;
    // 0x80299EB4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_1:
    // 0x80299EB8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_80299EBC:
    // 0x80299EBC: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    // 0x80299EC0: jal         0x802CB920
    // 0x80299EC4: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    static_3_802CB920(rdram, ctx);
        goto after_2;
    // 0x80299EC4: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_2:
    // 0x80299EC8: lbu         $t7, 0x89($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X89);
    // 0x80299ECC: bnel        $s0, $t7, L_80299EE0
    if (ctx->r16 != ctx->r15) {
        // 0x80299ED0: lbu         $s3, 0x1C($s4)
        ctx->r19 = MEM_BU(ctx->r20, 0X1C);
            goto L_80299EE0;
    }
    goto skip_0;
    // 0x80299ED0: lbu         $s3, 0x1C($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X1C);
    skip_0:
    // 0x80299ED4: b           L_80299EE0
    // 0x80299ED8: lbu         $s3, 0x1B($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X1B);
        goto L_80299EE0;
    // 0x80299ED8: lbu         $s3, 0x1B($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X1B);
    // 0x80299EDC: lbu         $s3, 0x1C($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X1C);
L_80299EE0:
    // 0x80299EE0: jal         0x8021E66C
    // 0x80299EE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    static_3_8021E66C(rdram, ctx);
        goto after_3;
    // 0x80299EE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x80299EE8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80299EEC: addiu       $s0, $t8, 0x0
    ctx->r16 = ADD32(ctx->r24, 0X0);
    // 0x80299EF0: sll         $t9, $s3, 2
    ctx->r25 = S32(ctx->r19 << 2);
    // 0x80299EF4: sll         $t0, $s3, 2
    ctx->r8 = S32(ctx->r19 << 2);
    // 0x80299EF8: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80299EFC: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80299F00: addiu       $s1, $zero, 0xA3
    ctx->r17 = ADD32(0, 0XA3);
    // 0x80299F04: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80299F08: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80299F0C: addu        $fp, $t0, $s0
    ctx->r30 = ADD32(ctx->r8, ctx->r16);
    // 0x80299F10: addu        $s7, $t9, $s0
    ctx->r23 = ADD32(ctx->r25, ctx->r16);
    // 0x80299F14: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80299F18:
    // 0x80299F18: bne         $s0, $fp, L_80299F28
    if (ctx->r16 != ctx->r30) {
        // 0x80299F1C: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_80299F28;
    }
    // 0x80299F1C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80299F20: b           L_80299F2C
    // 0x80299F24: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80299F2C;
    // 0x80299F24: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80299F28:
    // 0x80299F28: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80299F2C:
    // 0x80299F2C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80299F30: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80299F34: jal         0x8021E708
    // 0x80299F38: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    static_3_8021E708(rdram, ctx);
        goto after_4;
    // 0x80299F38: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_4:
    // 0x80299F3C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x80299F40: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80299F44: jal         0x8021E87C
    // 0x80299F48: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    static_3_8021E87C(rdram, ctx);
        goto after_5;
    // 0x80299F48: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    after_5:
    // 0x80299F4C: bne         $s0, $s7, L_80299F5C
    if (ctx->r16 != ctx->r23) {
        // 0x80299F50: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80299F5C;
    }
    // 0x80299F50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80299F54: b           L_80299F60
    // 0x80299F58: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80299F60;
    // 0x80299F58: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80299F5C:
    // 0x80299F5C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80299F60:
    // 0x80299F60: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x80299F64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80299F68: jal         0x8021E708
    // 0x80299F6C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_6;
    // 0x80299F6C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
    // 0x80299F70: sltu        $at, $s0, $s5
    ctx->r1 = ctx->r16 < ctx->r21 ? 1 : 0;
    // 0x80299F74: beq         $at, $zero, L_80299F90
    if (ctx->r1 == 0) {
        // 0x80299F78: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80299F90;
    }
    // 0x80299F78: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80299F7C: addu        $t1, $s4, $s2
    ctx->r9 = ADD32(ctx->r20, ctx->r18);
    // 0x80299F80: lw          $a3, 0x38($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X38);
    // 0x80299F84: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    // 0x80299F88: jal         0x802CA6E0
    // 0x80299F8C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_802CA6E0(rdram, ctx);
        goto after_7;
    // 0x80299F8C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
L_80299F90:
    // 0x80299F90: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80299F94: addiu       $s1, $s1, -0x9
    ctx->r17 = ADD32(ctx->r17, -0X9);
    // 0x80299F98: bne         $s0, $s6, L_80299F18
    if (ctx->r16 != ctx->r22) {
        // 0x80299F9C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80299F18;
    }
    // 0x80299F9C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80299FA0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80299FA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80299FA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80299FAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80299FB0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80299FB4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80299FB8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80299FBC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80299FC0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80299FC4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80299FC8: jr          $ra
    // 0x80299FCC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80299FCC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8022ED7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022ED7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ED80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ED84: bltz        $a0, L_8022EDA4
    if (SIGNED(ctx->r4) < 0) {
        // 0x8022ED88: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8022EDA4;
    }
    // 0x8022ED88: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022ED8C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022ED90: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x8022ED94: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
    // 0x8022ED98: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8022ED9C: bne         $at, $zero, L_8022EDB8
    if (ctx->r1 != 0) {
        // 0x8022EDA0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8022EDB8;
    }
    // 0x8022EDA0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
L_8022EDA4:
    // 0x8022EDA4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022EDA8: jal         0x80231A24
    // 0x8022EDAC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022EDAC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022EDB0: b           L_8022EE00
    // 0x8022EDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022EE00;
    // 0x8022EDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022EDB8:
    // 0x8022EDB8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022EDBC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8022EDC0: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022EDC4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022EDC8: addu        $v1, $t7, $v0
    ctx->r3 = ADD32(ctx->r15, ctx->r2);
    // 0x8022EDCC: lbu         $t8, 0x1($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X1);
    // 0x8022EDD0: bnel        $t8, $zero, L_8022EDF0
    if (ctx->r24 != 0) {
        // 0x8022EDD4: sb          $zero, 0x3($v1)
        MEM_B(0X3, ctx->r3) = 0;
            goto L_8022EDF0;
    }
    goto skip_0;
    // 0x8022EDD4: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    skip_0:
    // 0x8022EDD8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022EDDC: jal         0x80231A24
    // 0x8022EDE0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022EDE0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x8022EDE4: b           L_8022EE00
    // 0x8022EDE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022EE00;
    // 0x8022EDE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EDEC: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
L_8022EDF0:
    // 0x8022EDF0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8022EDF4: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x8022EDF8: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x8022EDFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022EE00:
    // 0x8022EE00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022EE04: jr          $ra
    // 0x8022EE08: nop

    return;
    // 0x8022EE08: nop

;}
RECOMP_FUNC void D_80231C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231C0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231C10: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x80231C14: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80231C18: addiu       $a2, $a3, 0x1
    ctx->r6 = ADD32(ctx->r7, 0X1);
    // 0x80231C1C: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80231C20: beq         $at, $zero, L_80231C30
    if (ctx->r1 == 0) {
        // 0x80231C24: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80231C30;
    }
    // 0x80231C24: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231C28: b           L_80231C3C
    // 0x80231C2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80231C3C;
    // 0x80231C2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80231C30:
    // 0x80231C30: jal         0x80231A24
    // 0x80231C34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80231C34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80231C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80231C3C:
    // 0x80231C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231C40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80231C44: jr          $ra
    // 0x80231C48: nop

    return;
    // 0x80231C48: nop

;}
RECOMP_FUNC void D_802D502C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D50AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D50B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D50B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D50B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D50BC: beq         $a0, $zero, L_802D5134
    if (ctx->r4 == 0) {
        // 0x802D50C0: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802D5134;
    }
    // 0x802D50C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D50C4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D50C8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D50CC: jal         0x8030594C
    // 0x802D50D0: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    static_3_8030594C(rdram, ctx);
        goto after_0;
    // 0x802D50D0: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    after_0:
    // 0x802D50D4: addiu       $a0, $s0, 0xA98
    ctx->r4 = ADD32(ctx->r16, 0XA98);
    // 0x802D50D8: jal         0x802C49D0
    // 0x802D50DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_1;
    // 0x802D50DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802D50E0: addiu       $a0, $s0, 0x904
    ctx->r4 = ADD32(ctx->r16, 0X904);
    // 0x802D50E4: jal         0x802C49D0
    // 0x802D50E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_2;
    // 0x802D50E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802D50EC: addiu       $a0, $s0, 0x770
    ctx->r4 = ADD32(ctx->r16, 0X770);
    // 0x802D50F0: jal         0x802C49D0
    // 0x802D50F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_3;
    // 0x802D50F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802D50F8: addiu       $a0, $s0, 0x5DC
    ctx->r4 = ADD32(ctx->r16, 0X5DC);
    // 0x802D50FC: jal         0x802C49D0
    // 0x802D5100: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_4;
    // 0x802D5100: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x802D5104: addiu       $a0, $s0, 0x448
    ctx->r4 = ADD32(ctx->r16, 0X448);
    // 0x802D5108: jal         0x802C49D0
    // 0x802D510C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_5;
    // 0x802D510C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x802D5110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D5114: jal         0x8028BF8C
    // 0x802D5118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8028BF8C(rdram, ctx);
        goto after_6;
    // 0x802D5118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x802D511C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802D5120: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802D5124: beql        $t8, $zero, L_802D5138
    if (ctx->r24 == 0) {
        // 0x802D5128: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802D5138;
    }
    goto skip_0;
    // 0x802D5128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802D512C: jal         0x802C681C
    // 0x802D5130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_7;
    // 0x802D5130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_802D5134:
    // 0x802D5134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D5138:
    // 0x802D5138: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D513C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D5140: jr          $ra
    // 0x802D5144: nop

    return;
    // 0x802D5144: nop

;}
RECOMP_FUNC void D_802ECD7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECDFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ECE00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ECE04: beq         $a0, $zero, L_802ECE34
    if (ctx->r4 == 0) {
        // 0x802ECE08: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ECE34;
    }
    // 0x802ECE08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ECE0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ECE10: jal         0x8031C514
    // 0x802ECE14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ECE14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ECE18: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ECE1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ECE20: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ECE24: beql        $t7, $zero, L_802ECE38
    if (ctx->r15 == 0) {
        // 0x802ECE28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ECE38;
    }
    goto skip_0;
    // 0x802ECE28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ECE2C: jal         0x802C681C
    // 0x802ECE30: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ECE30: nop

    after_1:
L_802ECE34:
    // 0x802ECE34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ECE38:
    // 0x802ECE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ECE3C: jr          $ra
    // 0x802ECE40: nop

    return;
    // 0x802ECE40: nop

;}
RECOMP_FUNC void D_802A4118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A419C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A41A0: beq         $a0, $zero, L_802A41DC
    if (ctx->r4 == 0) {
        // 0x802A41A4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802A41DC;
    }
    // 0x802A41A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A41A8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A41AC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A41B0: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A41B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A41B8: jal         0x802D1A34
    // 0x802A41BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D1A34(rdram, ctx);
        goto after_0;
    // 0x802A41BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A41C0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A41C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A41C8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A41CC: beql        $t8, $zero, L_802A41E0
    if (ctx->r24 == 0) {
        // 0x802A41D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A41E0;
    }
    goto skip_0;
    // 0x802A41D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A41D4: jal         0x802C681C
    // 0x802A41D8: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802A41D8: nop

    after_1:
L_802A41DC:
    // 0x802A41DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A41E0:
    // 0x802A41E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A41E4: jr          $ra
    // 0x802A41E8: nop

    return;
    // 0x802A41E8: nop

;}
RECOMP_FUNC void D_802B8570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B85F0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802B85F4: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x802B85F8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802B85FC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802B8600: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802B8604: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802B8608: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x802B860C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B8610: addiu       $s1, $a0, 0xC
    ctx->r17 = ADD32(ctx->r4, 0XC);
    // 0x802B8614: sh          $t6, 0x80($a0)
    MEM_H(0X80, ctx->r4) = ctx->r14;
    // 0x802B8618: jal         0x80228DE0
    // 0x802B861C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802B861C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x802B8620: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x802B8624: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x802B8628: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x802B862C: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x802B8630: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802B8634: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802B8638: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802B863C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802B8640: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802B8644: jal         0x802CF1C8
    // 0x802B8648: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802CF1C8(rdram, ctx);
        goto after_1;
    // 0x802B8648: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x802B864C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802B8650: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802B8654: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802B8658: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x802B865C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802B8660: jal         0x802D01D4
    // 0x802B8664: nop

    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802B8664: nop

    after_2:
    // 0x802B8668: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    // 0x802B866C: jal         0x80228DE0
    // 0x802B8670: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x802B8670: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x802B8674: addiu       $a0, $s0, 0xC8
    ctx->r4 = ADD32(ctx->r16, 0XC8);
    // 0x802B8678: jal         0x80228DE0
    // 0x802B867C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80228DE0(rdram, ctx);
        goto after_4;
    // 0x802B867C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x802B8680: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802B8684: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B8688: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B868C: swc1        $f8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f8.u32l;
    // 0x802B8690: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802B8694: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B8698: lh          $v0, 0x80($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X80);
    // 0x802B869C: swc1        $f10, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f10.u32l;
    // 0x802B86A0: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802B86A4: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    // 0x802B86A8: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
    // 0x802B86AC: swc1        $f16, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f16.u32l;
    // 0x802B86B0: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802B86B4: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x802B86B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B86BC: swc1        $f18, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f18.u32l;
    // 0x802B86C0: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x802B86C4: sw          $t0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r8;
    // 0x802B86C8: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x802B86CC: sw          $zero, 0x114($s0)
    MEM_W(0X114, ctx->r16) = 0;
    // 0x802B86D0: sw          $zero, 0x118($s0)
    MEM_W(0X118, ctx->r16) = 0;
    // 0x802B86D4: sw          $zero, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = 0;
    // 0x802B86D8: sw          $v1, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->r3;
    // 0x802B86DC: sw          $v1, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->r3;
    // 0x802B86E0: sw          $v1, 0x128($s0)
    MEM_W(0X128, ctx->r16) = ctx->r3;
    // 0x802B86E4: swc1        $f4, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f4.u32l;
    // 0x802B86E8: bne         $v0, $at, L_802B8724
    if (ctx->r2 != ctx->r1) {
        // 0x802B86EC: sw          $t1, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->r9;
            goto L_802B8724;
    }
    // 0x802B86EC: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x802B86F0: jal         0x8021BA90
    // 0x802B86F4: nop

    func_8021BA90(rdram, ctx);
        goto after_5;
    // 0x802B86F4: nop

    after_5:
    // 0x802B86F8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802B86FC: bne         $v0, $at, L_802B8724
    if (ctx->r2 != ctx->r1) {
        // 0x802B8700: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_802B8724;
    }
    // 0x802B8700: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x802B8704: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B8708: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802B870C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802B8710: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802B8714: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802B8718: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802B871C: jal         0x80231A24
    // 0x802B8720: addiu       $a3, $zero, 0xB7
    ctx->r7 = ADD32(0, 0XB7);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x802B8720: addiu       $a3, $zero, 0xB7
    ctx->r7 = ADD32(0, 0XB7);
    after_6:
L_802B8724:
    // 0x802B8724: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802B8728: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x802B872C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x802B8730: jr          $ra
    // 0x802B8734: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x802B8734: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_80205F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205F14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205F18: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80205F1C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80205F20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80205F24: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80205F28: jal         0x80231C58
    // 0x80205F2C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205F2C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x80205F30: bnel        $v0, $zero, L_80205F44
    if (ctx->r2 != 0) {
        // 0x80205F34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80205F44;
    }
    goto skip_0;
    // 0x80205F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80205F38: jal         0x80205FA0
    // 0x80205F3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_80205FA0(rdram, ctx);
        goto after_1;
    // 0x80205F3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80205F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205F44:
    // 0x80205F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205F48: jr          $ra
    // 0x80205F4C: nop

    return;
    // 0x80205F4C: nop

;}
RECOMP_FUNC void D_802A2FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A3064: bne         $a0, $zero, L_802A307C
    if (ctx->r4 != 0) {
        // 0x802A3068: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A307C;
    }
    // 0x802A3068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A306C: jal         0x802C67EC
    // 0x802A3070: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A3070: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_0:
    // 0x802A3074: beq         $v0, $zero, L_802A3094
    if (ctx->r2 == 0) {
        // 0x802A3078: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A3094;
    }
    // 0x802A3078: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802A307C:
    // 0x802A307C: jal         0x802D1960
    // 0x802A3080: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802D18E0(rdram, ctx);
        goto after_1;
    // 0x802A3080: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802A3084: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A3088: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A308C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A3090: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
L_802A3094:
    // 0x802A3094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A3098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A309C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A30A0: jr          $ra
    // 0x802A30A4: nop

    return;
    // 0x802A30A4: nop

;}
RECOMP_FUNC void D_80221B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80221B74: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80221B78: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80221B7C: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x80221B80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80221B84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80221B88: bne         $t6, $zero, L_80221BA4
    if (ctx->r14 != 0) {
        // 0x80221B8C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80221BA4;
    }
    // 0x80221B8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80221B90: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80221B94: jal         0x80231A24
    // 0x80221B98: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80221B98: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80221B9C: b           L_80221EE4
    // 0x80221BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80221EE4;
    // 0x80221BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80221BA4:
    // 0x80221BA4: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80221BA8: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x80221BAC: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80221BB0: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x80221BB4: lui         $t8, 0xE900
    ctx->r24 = S32(0XE900 << 16);
    // 0x80221BB8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80221BBC: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80221BC0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80221BC4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80221BC8: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80221BCC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80221BD0: lui         $t3, 0xB800
    ctx->r11 = S32(0XB800 << 16);
    // 0x80221BD4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80221BD8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80221BDC: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80221BE0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80221BE4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80221BE8: lhu         $t5, 0x0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X0);
    // 0x80221BEC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80221BF0: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x80221BF4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80221BF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80221BFC: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80221C00: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80221C04: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80221C08: subu        $t8, $t4, $t7
    ctx->r24 = SUB32(ctx->r12, ctx->r15);
    // 0x80221C0C: sra         $a0, $t8, 3
    ctx->r4 = S32(SIGNED(ctx->r24) >> 3);
    // 0x80221C10: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80221C14: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80221C18: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x80221C1C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80221C20: jal         0x80231C58
    // 0x80221C24: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_1;
    // 0x80221C24: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_1:
    // 0x80221C28: beq         $v0, $zero, L_80221C34
    if (ctx->r2 == 0) {
        // 0x80221C2C: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_80221C34;
    }
    // 0x80221C2C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80221C30: sw          $zero, 0x0($zero)
    MEM_W(0X0, 0) = 0;
L_80221C34:
    // 0x80221C34: lhu         $t3, 0x0($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X0);
    // 0x80221C38: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80221C3C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80221C40: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80221C44: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80221C48: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80221C4C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80221C50: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80221C54: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80221C58: sw          $t6, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r14;
    // 0x80221C5C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80221C60: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80221C64: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x80221C68: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80221C6C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80221C70: addiu       $t6, $zero, 0x53
    ctx->r14 = ADD32(0, 0X53);
    // 0x80221C74: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x80221C78: sw          $t8, 0x50($t9)
    MEM_W(0X50, ctx->r25) = ctx->r24;
    // 0x80221C7C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80221C80: addiu       $a2, $a2, -0x5180
    ctx->r6 = ADD32(ctx->r6, -0X5180);
    // 0x80221C84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80221C88: sw          $t3, 0x54($t5)
    MEM_W(0X54, ctx->r13) = ctx->r11;
    // 0x80221C8C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80221C90: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80221C94: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x80221C98: sw          $t6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r14;
    // 0x80221C9C: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x80221CA0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80221CA4: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80221CA8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80221CAC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80221CB0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80221CB4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80221CB8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80221CBC: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80221CC0: addu        $v0, $t9, $t3
    ctx->r2 = ADD32(ctx->r25, ctx->r11);
    // 0x80221CC4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80221CC8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80221CCC: subu        $t4, $t6, $a2
    ctx->r12 = SUB32(ctx->r14, ctx->r6);
    // 0x80221CD0: addiu       $t7, $zero, 0x1000
    ctx->r15 = ADD32(0, 0X1000);
    // 0x80221CD4: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x80221CD8: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80221CDC: addiu       $t3, $zero, 0x400
    ctx->r11 = ADD32(0, 0X400);
    // 0x80221CE0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80221CE4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80221CE8: sw          $a2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r6;
    // 0x80221CEC: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x80221CF0: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x80221CF4: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
    // 0x80221CF8: sw          $t9, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r25;
    // 0x80221CFC: sw          $t3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r11;
    // 0x80221D00: lhu         $t5, 0x0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X0);
    // 0x80221D04: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80221D08: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80221D0C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80221D10: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80221D14: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80221D18: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80221D1C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x80221D20: sw          $t4, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r12;
    // 0x80221D24: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80221D28: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80221D2C: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80221D30: addiu       $t3, $zero, 0xBA0
    ctx->r11 = ADD32(0, 0XBA0);
    // 0x80221D34: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x80221D38: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80221D3C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80221D40: sw          $t8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r24;
    // 0x80221D44: sw          $t9, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r25;
    // 0x80221D48: sw          $t3, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r11;
    // 0x80221D4C: sw          $t5, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r13;
    // 0x80221D50: sw          $t6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r14;
    // 0x80221D54: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80221D58: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80221D5C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80221D60: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x80221D64: sw          $t4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r12;
    // 0x80221D68: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80221D6C: jal         0x8022D560
    // 0x80221D70: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    static_3_8022D560(rdram, ctx);
        goto after_2;
    // 0x80221D70: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    after_2:
    // 0x80221D74: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80221D78: jal         0x8022CA28
    // 0x80221D7C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8022CA28(rdram, ctx);
        goto after_3;
    // 0x80221D7C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x80221D80: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80221D84: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80221D88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80221D8C: jal         0x80236B80
    // 0x80221D90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80236B80(rdram, ctx);
        goto after_4;
    // 0x80221D90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80221D94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80221D98: jal         0x80203C18
    // 0x80221D9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80203C18(rdram, ctx);
        goto after_5;
    // 0x80221D9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80221DA0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80221DA4: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80221DA8: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80221DAC: bne         $t8, $zero, L_80221DC4
    if (ctx->r24 != 0) {
        // 0x80221DB0: nop
    
            goto L_80221DC4;
    }
    // 0x80221DB0: nop

    // 0x80221DB4: jal         0x8023CE10
    // 0x80221DB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8023CE10(rdram, ctx);
        goto after_6;
    // 0x80221DB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80221DBC: b           L_80221DDC
    // 0x80221DC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
        goto L_80221DDC;
    // 0x80221DC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_80221DC4:
    // 0x80221DC4: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80221DC8: beql        $t9, $zero, L_80221DDC
    if (ctx->r25 == 0) {
        // 0x80221DCC: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80221DDC;
    }
    goto skip_0;
    // 0x80221DCC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    skip_0:
    // 0x80221DD0: jal         0x80230F68
    // 0x80221DD4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80230F68(rdram, ctx);
        goto after_7;
    // 0x80221DD4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_7:
    // 0x80221DD8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_80221DDC:
    // 0x80221DDC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80221DE0: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    // 0x80221DE4: lhu         $t5, 0x0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X0);
    // 0x80221DE8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80221DEC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80221DF0: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x80221DF4: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80221DF8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80221DFC: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80221E00: beq         $v0, $zero, L_80221E28
    if (ctx->r2 == 0) {
        // 0x80221E04: lw          $a0, 0x0($a0)
        ctx->r4 = MEM_W(ctx->r4, 0X0);
            goto L_80221E28;
    }
    // 0x80221E04: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80221E08: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80221E0C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80221E10: jalr        $v0
    // 0x80221E14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80221E14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_8:
    // 0x80221E18: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80221E1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80221E20: jal         0x8023CE80
    // 0x80221E24: ori         $a1, $a1, 0x5800
    ctx->r5 = ctx->r5 | 0X5800;
    func_8023CE80(rdram, ctx);
        goto after_9;
    // 0x80221E24: ori         $a1, $a1, 0x5800
    ctx->r5 = ctx->r5 | 0X5800;
    after_9:
L_80221E28:
    // 0x80221E28: jal         0x80207130
    // 0x80221E2C: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    static_3_80207130(rdram, ctx);
        goto after_10;
    // 0x80221E2C: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    after_10:
    // 0x80221E30: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x80221E34: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x80221E38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80221E3C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80221E40: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80221E44: swc1        $f4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f4.u32l;
    // 0x80221E48: jal         0x80207210
    // 0x80221E4C: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    func_80207210(rdram, ctx);
        goto after_11;
    // 0x80221E4C: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    after_11:
    // 0x80221E50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80221E54: jal         0x8022D560
    // 0x80221E58: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    static_3_8022D560(rdram, ctx);
        goto after_12;
    // 0x80221E58: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_12:
    // 0x80221E5C: lhu         $t9, 0x0($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X0);
    // 0x80221E60: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80221E64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80221E68: xori        $t3, $t9, 0x1
    ctx->r11 = ctx->r25 ^ 0X1;
    // 0x80221E6C: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
    // 0x80221E70: sh          $t5, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r13;
    // 0x80221E74: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80221E78: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80221E7C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80221E80: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80221E84: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80221E88: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80221E8C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80221E90: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80221E94: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80221E98: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x80221E9C: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x80221EA0: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80221EA4: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x80221EA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80221EAC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80221EB0: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x80221EB4: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x80221EB8: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80221EBC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80221EC0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80221EC4: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80221EC8: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x80221ECC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80221ED0: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x80221ED4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80221ED8: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80221EDC: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x80221EE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80221EE4:
    // 0x80221EE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80221EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80221EEC: jr          $ra
    // 0x80221EF0: nop

    return;
    // 0x80221EF0: nop

;}
RECOMP_FUNC void func_8024A8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A8F0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8024A8F4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8024A8F8: andi        $t6, $s3, 0xFFFF
    ctx->r14 = ctx->r19 & 0XFFFF;
    // 0x8024A8FC: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8024A900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024A904: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8024A908: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8024A90C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8024A910:
    // 0x8024A910: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024A914: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x8024A918: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8024A91C: bne         $at, $zero, L_8024A910
    if (ctx->r1 != 0) {
        // 0x8024A920: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_8024A910;
    }
    // 0x8024A920: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x8024A924: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8024A928: sw          $t7, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r15;
    // 0x8024A92C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8024A930: addiu       $t9, $zero, 0x23
    ctx->r25 = ADD32(0, 0X23);
    // 0x8024A934: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8024A938: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8024A93C: sb          $t8, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r24;
    // 0x8024A940: sb          $t9, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r25;
    // 0x8024A944: sb          $t6, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r14;
    // 0x8024A948: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    // 0x8024A94C: jal         0x8024A590
    // 0x8024A950: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    static_3_8024A590(rdram, ctx);
        goto after_0;
    // 0x8024A950: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    after_0:
    // 0x8024A954: sll         $t8, $s3, 5
    ctx->r24 = S32(ctx->r19 << 5);
    // 0x8024A958: or          $t9, $v0, $t8
    ctx->r25 = ctx->r2 | ctx->r24;
    // 0x8024A95C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8024A960: sh          $t9, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r25;
    // 0x8024A964: sb          $t6, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r14;
    // 0x8024A968: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x8024A96C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
L_8024A970:
    // 0x8024A970: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x8024A974: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8024A978: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8024A97C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8024A980: bne         $at, $zero, L_8024A970
    if (ctx->r1 != 0) {
        // 0x8024A984: sb          $t7, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r15;
            goto L_8024A970;
    }
    // 0x8024A984: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8024A988: beq         $s2, $zero, L_8024A9D4
    if (ctx->r18 == 0) {
        // 0x8024A98C: addiu       $t8, $sp, 0x24
        ctx->r24 = ADD32(ctx->r29, 0X24);
            goto L_8024A9D4;
    }
    // 0x8024A98C: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x8024A990: blez        $s2, L_8024A9D4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8024A994: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8024A9D4;
    }
    // 0x8024A994: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8024A998: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x8024A99C: beq         $a0, $zero, L_8024A9B8
    if (ctx->r4 == 0) {
        // 0x8024A9A0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8024A9B8;
    }
    // 0x8024A9A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8024A9A4:
    // 0x8024A9A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024A9A8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8024A9AC: bne         $v0, $v1, L_8024A9A4
    if (ctx->r2 != ctx->r3) {
        // 0x8024A9B0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8024A9A4;
    }
    // 0x8024A9B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8024A9B4: beq         $v1, $s2, L_8024A9D4
    if (ctx->r3 == ctx->r18) {
        // 0x8024A9B8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8024A9D4;
    }
L_8024A9B8:
    // 0x8024A9B8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8024A9BC: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x8024A9C0: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8024A9C4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8024A9C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8024A9CC: bne         $v1, $s2, L_8024A9B8
    if (ctx->r3 != ctx->r18) {
        // 0x8024A9D0: sb          $zero, -0x4($s0)
        MEM_B(-0X4, ctx->r16) = 0;
            goto L_8024A9B8;
    }
    // 0x8024A9D0: sb          $zero, -0x4($s0)
    MEM_B(-0X4, ctx->r16) = 0;
L_8024A9D4:
    // 0x8024A9D4: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x8024A9D8: addiu       $t6, $t8, 0x24
    ctx->r14 = ADD32(ctx->r24, 0X24);
L_8024A9DC:
    // 0x8024A9DC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8024A9E0: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8024A9E4: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x8024A9E8: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x8024A9EC: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8024A9F0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8024A9F4: swl         $at, -0x8($t7)
    do_swl(rdram, -0X8, ctx->r15, ctx->r1);
    // 0x8024A9F8: swr         $at, -0x5($t7)
    do_swr(rdram, -0X5, ctx->r15, ctx->r1);
    // 0x8024A9FC: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8024AA00: nop

    // 0x8024AA04: swl         $at, -0x4($t7)
    do_swl(rdram, -0X4, ctx->r15, ctx->r1);
    // 0x8024AA08: bne         $t8, $t6, L_8024A9DC
    if (ctx->r24 != ctx->r14) {
        // 0x8024AA0C: swr         $at, -0x1($t7)
        do_swr(rdram, -0X1, ctx->r15, ctx->r1);
            goto L_8024A9DC;
    }
    // 0x8024AA0C: swr         $at, -0x1($t7)
    do_swr(rdram, -0X1, ctx->r15, ctx->r1);
    // 0x8024AA10: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8024AA14: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x8024AA18: swl         $at, 0x0($t7)
    do_swl(rdram, 0X0, ctx->r15, ctx->r1);
    // 0x8024AA1C: swr         $at, 0x3($t7)
    do_swr(rdram, 0X3, ctx->r15, ctx->r1);
    // 0x8024AA20: sb          $t9, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r25;
    // 0x8024AA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024AA28: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8024AA2C: jr          $ra
    // 0x8024AA30: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8024AA30: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_802D0DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D0E3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D0E40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D0E44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D0E48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D0E4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D0E50: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802D0E54: jal         0x80300B20
    // 0x802D0E58: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    static_3_80300B20(rdram, ctx);
        goto after_0;
    // 0x802D0E58: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x802D0E5C: lbu         $t6, 0x28($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X28);
    // 0x802D0E60: bnel        $t6, $zero, L_802D0E84
    if (ctx->r14 != 0) {
        // 0x802D0E64: lw          $v1, 0x2C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X2C);
            goto L_802D0E84;
    }
    goto skip_0;
    // 0x802D0E64: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802D0E68: jal         0x80300848
    // 0x802D0E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80300848(rdram, ctx);
        goto after_1;
    // 0x802D0E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802D0E70: jal         0x803006E0
    // 0x802D0E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_803006E0(rdram, ctx);
        goto after_2;
    // 0x802D0E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802D0E78: jal         0x80300CA0
    // 0x802D0E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80300CA0(rdram, ctx);
        goto after_3;
    // 0x802D0E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802D0E80: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
L_802D0E84:
    // 0x802D0E84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802D0E88: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802D0E8C: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802D0E90: lh          $t7, 0xB0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB0);
    // 0x802D0E94: jalr        $t9
    // 0x802D0E98: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802D0E98: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_4:
    // 0x802D0E9C: lui         $a2, 0x4541
    ctx->r6 = S32(0X4541 << 16);
    // 0x802D0EA0: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802D0EA4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802D0EA8: lui         $a1, 0xC516
    ctx->r5 = S32(0XC516 << 16);
    // 0x802D0EAC: jal         0x80318E04
    // 0x802D0EB0: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_5;
    // 0x802D0EB0: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    after_5:
    // 0x802D0EB4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802D0EB8: jal         0x80318C9C
    // 0x802D0EBC: lui         $a1, 0x4307
    ctx->r5 = S32(0X4307 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_6;
    // 0x802D0EBC: lui         $a1, 0x4307
    ctx->r5 = S32(0X4307 << 16);
    after_6:
    // 0x802D0EC0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802D0EC4: jal         0x802AEDEC
    // 0x802D0EC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_7;
    // 0x802D0EC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x802D0ECC: lw          $t8, 0x78($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X78);
    // 0x802D0ED0: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x802D0ED4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D0ED8: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x802D0EDC: jal         0x802BCF20
    // 0x802D0EE0: sw          $t0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r8;
    static_3_802BCF20(rdram, ctx);
        goto after_8;
    // 0x802D0EE0: sw          $t0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r8;
    after_8:
    // 0x802D0EE4: jal         0x80309B18
    // 0x802D0EE8: nop

    static_3_80309B18(rdram, ctx);
        goto after_9;
    // 0x802D0EE8: nop

    after_9:
    // 0x802D0EEC: jal         0x803099E4
    // 0x802D0EF0: nop

    static_3_803099E4(rdram, ctx);
        goto after_10;
    // 0x802D0EF0: nop

    after_10:
    // 0x802D0EF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D0EF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D0EFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D0F00: jr          $ra
    // 0x802D0F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D0F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802CF858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF8D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802CF8DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CF8E0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802CF8E4: lui         $at, 0x4244
    ctx->r1 = S32(0X4244 << 16);
    // 0x802CF8E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CF8EC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802CF8F0: sw          $t6, 0x364($a0)
    MEM_W(0X364, ctx->r4) = ctx->r14;
    // 0x802CF8F4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CF8F8: lui         $a3, 0xC451
    ctx->r7 = S32(0XC451 << 16);
    // 0x802CF8FC: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802CF900: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802CF904: lui         $a2, 0xC268
    ctx->r6 = S32(0XC268 << 16);
    // 0x802CF908: jal         0x802AFF70
    // 0x802CF90C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_0;
    // 0x802CF90C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x802CF910: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802CF914: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802CF918: jr          $ra
    // 0x802CF91C: nop

    return;
    // 0x802CF91C: nop

;}
RECOMP_FUNC void D_80294C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294CA8: jr          $ra
    // 0x80294CAC: lwc1        $f0, 0x158($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X158);
    return;
    // 0x80294CAC: lwc1        $f0, 0x158($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X158);
;}
RECOMP_FUNC void D_80233350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233350: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80233354: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80233358: jr          $ra
    // 0x8023335C: sb          $a0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r4;
    return;
    // 0x8023335C: sb          $a0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void D_802B669C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B671C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B6720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B6724: jal         0x802C53C0
    // 0x802B6728: addiu       $a0, $a0, 0xEDC
    ctx->r4 = ADD32(ctx->r4, 0XEDC);
    static_3_802C53C0(rdram, ctx);
        goto after_0;
    // 0x802B6728: addiu       $a0, $a0, 0xEDC
    ctx->r4 = ADD32(ctx->r4, 0XEDC);
    after_0:
    // 0x802B672C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B6730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B6734: jr          $ra
    // 0x802B6738: nop

    return;
    // 0x802B6738: nop

;}
RECOMP_FUNC void D_8027F538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F5B0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8027F5B4: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8027F5B8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8027F5BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027F5C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027F5C4: bne         $t6, $zero, L_8027F5E8
    if (ctx->r14 != 0) {
        // 0x8027F5C8: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_8027F5E8;
    }
    // 0x8027F5C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027F5CC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027F5D0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8027F5D4: jal         0x80207130
    // 0x8027F5D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x8027F5D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8027F5DC: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x8027F5E0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027F5E4: swc1        $f4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f4.u32l;
L_8027F5E8:
    // 0x8027F5E8: jal         0x80207130
    // 0x8027F5EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_1;
    // 0x8027F5EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8027F5F0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8027F5F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8027F5F8: cvt.s.d     $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f14.fl = CVT_S_D(ctx->f0.d);
    // 0x8027F5FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027F600: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027F604: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8027F608: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8027F60C: sub.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x8027F610: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8027F614: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027F618: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8027F61C: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x8027F620: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8027F624: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027F628: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x8027F62C: nop

    // 0x8027F630: bc1f        L_8027F668
    if (!c1cs) {
        // 0x8027F634: nop
    
            goto L_8027F668;
    }
    // 0x8027F634: nop

    // 0x8027F638: sub.s       $f10, $f12, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x8027F63C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8027F640: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027F644: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8027F648: addiu       $a1, $t8, 0x1
    ctx->r5 = ADD32(ctx->r24, 0X1);
    // 0x8027F64C: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8027F650: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x8027F654: jal         0x80231A24
    // 0x8027F658: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x8027F658: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    after_2:
    // 0x8027F65C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8027F660: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027F664: swc1        $f14, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f14.u32l;
L_8027F668:
    // 0x8027F668: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8027F66C: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8027F670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027F674: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027F678: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8027F67C: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
    // 0x8027F680: jr          $ra
    // 0x8027F684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8027F684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8029392C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802939AC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802939B0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802939B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802939B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802939BC: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802939C0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802939C4: addiu       $t6, $sp, 0x90
    ctx->r14 = ADD32(ctx->r29, 0X90);
    // 0x802939C8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802939CC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802939D0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802939D4: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x802939D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802939DC: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x802939E0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802939E4: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x802939E8: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x802939EC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x802939F0: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x802939F4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x802939F8: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x802939FC: jal         0x802AD568
    // 0x80293A00: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x80293A00: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80293A04: blez        $v0, L_80293B5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80293A08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80293B5C;
    }
    // 0x80293A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293A0C: jal         0x802C51D0
    // 0x80293A10: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x80293A10: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x80293A14: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80293A18: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80293A1C: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80293A20: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80293A24: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x80293A28: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x80293A2C: jal         0x8022970C
    // 0x80293A30: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x80293A30: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80293A34: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80293A38: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80293A3C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80293A40: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80293A44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80293A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293A4C: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x80293A50: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    // 0x80293A54: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    // 0x80293A58: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x80293A5C: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x80293A60: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x80293A64: jal         0x802C484C
    // 0x80293A68: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802C484C(rdram, ctx);
        goto after_3;
    // 0x80293A68: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80293A6C: jal         0x802C4838
    // 0x80293A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C4838(rdram, ctx);
        goto after_4;
    // 0x80293A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80293A74: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80293A78: lwc1        $f4, 0x104($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X104);
    // 0x80293A7C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80293A80: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80293A84: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80293A88: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80293A8C: jal         0x802D01D4
    // 0x80293A90: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x80293A90: nop

    after_5:
    // 0x80293A94: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80293A98: lwc1        $f10, 0x108($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X108);
    // 0x80293A9C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80293AA0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80293AA4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80293AA8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80293AAC: jal         0x802D01D4
    // 0x80293AB0: nop

    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x80293AB0: nop

    after_6:
    // 0x80293AB4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80293AB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80293ABC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80293AC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80293AC4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80293AC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80293ACC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80293AD0: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    // 0x80293AD4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80293AD8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80293ADC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80293AE0: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80293AE4: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80293AE8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80293AEC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80293AF0: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    // 0x80293AF4: jal         0x802AB4C8
    // 0x80293AF8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    static_3_802AB4C8(rdram, ctx);
        goto after_7;
    // 0x80293AF8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_7:
    // 0x80293AFC: beq         $v0, $zero, L_80293B48
    if (ctx->r2 == 0) {
        // 0x80293B00: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80293B48;
    }
    // 0x80293B00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80293B04: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80293B08: jal         0x8029FB34
    // 0x80293B0C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    static_3_8029FB34(rdram, ctx);
        goto after_8;
    // 0x80293B0C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_8:
    // 0x80293B10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80293B14: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80293B18: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80293B1C: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80293B20: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80293B24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80293B28: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80293B2C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80293B30: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80293B34: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80293B38: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x80293B3C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x80293B40: jal         0x8029FA7C
    // 0x80293B44: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_8029FA7C(rdram, ctx);
        goto after_9;
    // 0x80293B44: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_9:
L_80293B48:
    // 0x80293B48: lw          $t0, 0x18C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18C);
    // 0x80293B4C: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80293B50: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80293B54: sw          $t1, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = ctx->r9;
    // 0x80293B58: swc1        $f10, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f10.u32l;
L_80293B5C:
    // 0x80293B5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80293B60: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80293B64: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x80293B68: jr          $ra
    // 0x80293B6C: nop

    return;
    // 0x80293B6C: nop

;}
RECOMP_FUNC void D_802940BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029413C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80294140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80294144: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x80294148: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x8029414C: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x80294150: jal         0x802C51D0
    // 0x80294154: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80294154: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    after_0:
    // 0x80294158: lw          $v1, 0xB4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB4);
    // 0x8029415C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80294160: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x80294164: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x80294168: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x8029416C: jalr        $t9
    // 0x80294170: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80294170: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_1:
    // 0x80294174: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80294178: jal         0x802CF954
    // 0x8029417C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    static_3_802CF954(rdram, ctx);
        goto after_2;
    // 0x8029417C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x80294180: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80294184: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x80294188: div.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8029418C: jal         0x80318214
    // 0x80294190: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80318214(rdram, ctx);
        goto after_3;
    // 0x80294190: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80294194: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80294198: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8029419C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802941A0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802941A4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x802941A8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802941AC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802941B0: jal         0x8022A0D0
    // 0x802941B4: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_4;
    // 0x802941B4: nop

    after_4:
    // 0x802941B8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802941BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802941C0: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802941C4: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802941C8: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802941CC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802941D0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802941D4: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802941D8: jal         0x802CF7E8
    // 0x802941DC: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    static_3_802CF7E8(rdram, ctx);
        goto after_5;
    // 0x802941DC: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x802941E0: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x802941E4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x802941E8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802941EC: jal         0x802CF888
    // 0x802941F0: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    static_3_802CF888(rdram, ctx);
        goto after_6;
    // 0x802941F0: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    after_6:
    // 0x802941F4: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x802941F8: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x802941FC: swc1        $f10, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f10.u32l;
    // 0x80294200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80294204: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x80294208: jr          $ra
    // 0x8029420C: nop

    return;
    // 0x8029420C: nop

;}
RECOMP_FUNC void D_8022AF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AF18: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022AF1C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022AF20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AF24: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8022AF28: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8022AF2C: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8022AF30: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8022AF34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AF38: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8022AF3C: ori         $t6, $t6, 0xA800
    ctx->r14 = ctx->r14 | 0XA800;
    // 0x8022AF40: ori         $t7, $t7, 0x5800
    ctx->r15 = ctx->r15 | 0X5800;
    // 0x8022AF44: ori         $t8, $t8, 0xA800
    ctx->r24 = ctx->r24 | 0XA800;
    // 0x8022AF48: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x8022AF4C: ori         $t0, $t0, 0x400
    ctx->r8 = ctx->r8 | 0X400;
    // 0x8022AF50: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8022AF54: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8022AF58: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x8022AF5C: sw          $t7, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r15;
    // 0x8022AF60: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x8022AF64: sw          $t9, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r25;
    // 0x8022AF68: jal         0x80204530
    // 0x8022AF6C: sw          $t0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r8;
    static_3_80204530(rdram, ctx);
        goto after_0;
    // 0x8022AF6C: sw          $t0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r8;
    after_0:
    // 0x8022AF70: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022AF74: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022AF78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022AF7C: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x8022AF80: addu        $t1, $v0, $at
    ctx->r9 = ADD32(ctx->r2, ctx->r1);
    // 0x8022AF84: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8022AF88: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x8022AF8C: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x8022AF90: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x8022AF94: sw          $at, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r1;
    // 0x8022AF98: sw          $t1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r9;
    // 0x8022AF9C: sw          $t2, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r10;
    // 0x8022AFA0: sw          $t3, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r11;
    // 0x8022AFA4: sw          $t4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r12;
    // 0x8022AFA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AFAC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8022AFB0: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x8022AFB4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022AFB8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AFBC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022AFC0: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022AFC4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8022AFC8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8022AFCC: jal         0x8022B1F4
    // 0x8022AFD0: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    static_3_8022B1F4(rdram, ctx);
        goto after_1;
    // 0x8022AFD0: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    after_1:
    // 0x8022AFD4: jal         0x80204530
    // 0x8022AFD8: nop

    static_3_80204530(rdram, ctx);
        goto after_2;
    // 0x8022AFD8: nop

    after_2:
    // 0x8022AFDC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022AFE0: ori         $at, $at, 0x440
    ctx->r1 = ctx->r1 | 0X440;
    // 0x8022AFE4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022AFE8: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022AFEC: addu        $t7, $v0, $at
    ctx->r15 = ADD32(ctx->r2, ctx->r1);
    // 0x8022AFF0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8022AFF4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8022AFF8: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8022AFFC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022B000: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x8022B004: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022B008: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8022B00C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022B010: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x8022B014: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022B018: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022B01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B020: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022B024: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022B028: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022B02C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022B030: jr          $ra
    // 0x8022B034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8022B034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802A1EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F60: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A1F64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A1F68: jr          $ra
    // 0x802A1F6C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802A1F6C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802460DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802460DC: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x802460E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802460E4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802460E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802460EC: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x802460F0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802460F4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802460F8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802460FC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80246100: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80246104: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80246108: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8024610C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80246110: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x80246114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80246118: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8024611C:
    // 0x8024611C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80246120: sb          $zero, 0x102($v1)
    MEM_B(0X102, ctx->r3) = 0;
    // 0x80246124: sb          $zero, 0x103($v1)
    MEM_B(0X103, ctx->r3) = 0;
    // 0x80246128: sb          $zero, 0x104($v1)
    MEM_B(0X104, ctx->r3) = 0;
    // 0x8024612C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80246130: bne         $v0, $a0, L_8024611C
    if (ctx->r2 != ctx->r4) {
        // 0x80246134: sb          $zero, 0xFD($v1)
        MEM_B(0XFD, ctx->r3) = 0;
            goto L_8024611C;
    }
    // 0x80246134: sb          $zero, 0xFD($v1)
    MEM_B(0XFD, ctx->r3) = 0;
    // 0x80246138: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8024613C: sb          $t6, 0x100($s4)
    MEM_B(0X100, ctx->r20) = ctx->r14;
    // 0x80246140: lbu         $t7, 0x64($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X64);
    // 0x80246144: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80246148: blez        $t7, L_8024638C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8024614C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8024638C;
    }
    // 0x8024614C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80246150: addiu       $fp, $zero, 0x80
    ctx->r30 = ADD32(0, 0X80);
    // 0x80246154: addiu       $s6, $sp, 0x15A
    ctx->r22 = ADD32(ctx->r29, 0X15A);
    // 0x80246158: addiu       $s5, $sp, 0x58
    ctx->r21 = ADD32(ctx->r29, 0X58);
    // 0x8024615C: addiu       $s2, $sp, 0x158
    ctx->r18 = ADD32(ctx->r29, 0X158);
L_80246160:
    // 0x80246160: blez        $s0, L_80246170
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80246164: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80246170;
    }
    // 0x80246164: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80246168: b           L_80246178
    // 0x8024616C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80246178;
    // 0x8024616C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80246170:
    // 0x80246170: lw          $s1, 0x60($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X60);
    // 0x80246174: nop

L_80246178:
    // 0x80246178: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8024617C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80246180: jal         0x80245404
    // 0x80246184: andi        $a3, $s7, 0xFF
    ctx->r7 = ctx->r23 & 0XFF;
    static_3_80245404(rdram, ctx);
        goto after_0;
    // 0x80246184: andi        $a3, $s7, 0xFF
    ctx->r7 = ctx->r23 & 0XFF;
    after_0:
    // 0x80246188: beq         $v0, $zero, L_802461A0
    if (ctx->r2 == 0) {
        // 0x8024618C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802461A0;
    }
    // 0x8024618C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80246190: beq         $v0, $at, L_802461A4
    if (ctx->r2 == ctx->r1) {
        // 0x80246194: slti        $at, $s1, 0x80
        ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
            goto L_802461A4;
    }
    // 0x80246194: slti        $at, $s1, 0x80
    ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
    // 0x80246198: b           L_80246394
    // 0x8024619C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80246394;
    // 0x8024619C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802461A0:
    // 0x802461A0: slti        $at, $s1, 0x80
    ctx->r1 = SIGNED(ctx->r17) < 0X80 ? 1 : 0;
L_802461A4:
    // 0x802461A4: beq         $at, $zero, L_80246374
    if (ctx->r1 == 0) {
        // 0x802461A8: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_80246374;
    }
    // 0x802461A8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x802461AC: subu        $v1, $fp, $s1
    ctx->r3 = SUB32(ctx->r30, ctx->r17);
    // 0x802461B0: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x802461B4: beq         $t8, $zero, L_80246250
    if (ctx->r24 == 0) {
        // 0x802461B8: sll         $t9, $s1, 1
        ctx->r25 = S32(ctx->r17 << 1);
            goto L_80246250;
    }
    // 0x802461B8: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x802461BC: addu        $t0, $s5, $t9
    ctx->r8 = ADD32(ctx->r21, ctx->r25);
    // 0x802461C0: lhu         $at, 0x0($t0)
    ctx->r1 = MEM_HU(ctx->r8, 0X0);
    // 0x802461C4: nop

    // 0x802461C8: sh          $at, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r1;
    // 0x802461CC: lw          $t4, 0x60($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X60);
    // 0x802461D0: lhu         $t3, 0x158($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X158);
    // 0x802461D4: lbu         $t5, 0x158($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X158);
    // 0x802461D8: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802461DC: bne         $at, $zero, L_8024624C
    if (ctx->r1 != 0) {
        // 0x802461E0: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8024624C;
    }
    // 0x802461E0: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x802461E4: beq         $s0, $t5, L_8024624C
    if (ctx->r16 == ctx->r13) {
        // 0x802461E8: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8024624C;
    }
    // 0x802461E8: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x802461EC: lbu         $t6, 0x159($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X159);
    // 0x802461F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802461F4: bgez        $t6, L_80246204
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802461F8: sra         $t7, $t6, 2
        ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
            goto L_80246204;
    }
    // 0x802461F8: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x802461FC: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x80246200: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_80246204:
    // 0x80246204: bgez        $t5, L_80246218
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80246208: andi        $t8, $t5, 0x7
        ctx->r24 = ctx->r13 & 0X7;
            goto L_80246218;
    }
    // 0x80246208: andi        $t8, $t5, 0x7
    ctx->r24 = ctx->r13 & 0X7;
    // 0x8024620C: beq         $t8, $zero, L_80246218
    if (ctx->r24 == 0) {
        // 0x80246210: nop
    
            goto L_80246218;
    }
    // 0x80246210: nop

    // 0x80246214: addiu       $t8, $t8, -0x8
    ctx->r24 = ADD32(ctx->r24, -0X8);
L_80246218:
    // 0x80246218: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8024621C: addu        $v1, $t7, $t9
    ctx->r3 = ADD32(ctx->r15, ctx->r25);
    // 0x80246220: addu        $v0, $s4, $v1
    ctx->r2 = ADD32(ctx->r20, ctx->r3);
    // 0x80246224: lbu         $t1, 0x101($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X101);
    // 0x80246228: bgez        $s0, L_8024623C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8024622C: andi        $t0, $s0, 0x7
        ctx->r8 = ctx->r16 & 0X7;
            goto L_8024623C;
    }
    // 0x8024622C: andi        $t0, $s0, 0x7
    ctx->r8 = ctx->r16 & 0X7;
    // 0x80246230: beq         $t0, $zero, L_8024623C
    if (ctx->r8 == 0) {
        // 0x80246234: nop
    
            goto L_8024623C;
    }
    // 0x80246234: nop

    // 0x80246238: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_8024623C:
    // 0x8024623C: sllv        $t3, $t2, $t0
    ctx->r11 = S32(ctx->r10 << (ctx->r8 & 31));
    // 0x80246240: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x80246244: sb          $t4, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r12;
    // 0x80246248: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_8024624C:
    // 0x8024624C: beq         $v0, $fp, L_80246374
    if (ctx->r2 == ctx->r30) {
        // 0x80246250: sll         $t6, $v0, 1
        ctx->r14 = S32(ctx->r2 << 1);
            goto L_80246374;
    }
L_80246250:
    // 0x80246250: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80246254: addu        $a1, $s5, $t6
    ctx->r5 = ADD32(ctx->r21, ctx->r14);
    // 0x80246258: addiu       $a0, $a1, 0x2
    ctx->r4 = ADD32(ctx->r5, 0X2);
L_8024625C:
    // 0x8024625C: lhu         $at, 0x0($a1)
    ctx->r1 = MEM_HU(ctx->r5, 0X0);
    // 0x80246260: nop

    // 0x80246264: sh          $at, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r1;
    // 0x80246268: lw          $t9, 0x60($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X60);
    // 0x8024626C: lhu         $t7, 0x158($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X158);
    // 0x80246270: lbu         $t2, 0x158($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X158);
    // 0x80246274: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80246278: bne         $at, $zero, L_802462E4
    if (ctx->r1 != 0) {
        // 0x8024627C: nop
    
            goto L_802462E4;
    }
    // 0x8024627C: nop

    // 0x80246280: beq         $s0, $t2, L_802462E4
    if (ctx->r16 == ctx->r10) {
        // 0x80246284: nop
    
            goto L_802462E4;
    }
    // 0x80246284: nop

    // 0x80246288: lbu         $t0, 0x159($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X159);
    // 0x8024628C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80246290: bgez        $t0, L_802462A0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80246294: sra         $t1, $t0, 2
        ctx->r9 = S32(SIGNED(ctx->r8) >> 2);
            goto L_802462A0;
    }
    // 0x80246294: sra         $t1, $t0, 2
    ctx->r9 = S32(SIGNED(ctx->r8) >> 2);
    // 0x80246298: addiu       $at, $t0, 0x3
    ctx->r1 = ADD32(ctx->r8, 0X3);
    // 0x8024629C: sra         $t1, $at, 2
    ctx->r9 = S32(SIGNED(ctx->r1) >> 2);
L_802462A0:
    // 0x802462A0: bgez        $t2, L_802462B4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802462A4: andi        $t3, $t2, 0x7
        ctx->r11 = ctx->r10 & 0X7;
            goto L_802462B4;
    }
    // 0x802462A4: andi        $t3, $t2, 0x7
    ctx->r11 = ctx->r10 & 0X7;
    // 0x802462A8: beq         $t3, $zero, L_802462B4
    if (ctx->r11 == 0) {
        // 0x802462AC: nop
    
            goto L_802462B4;
    }
    // 0x802462AC: nop

    // 0x802462B0: addiu       $t3, $t3, -0x8
    ctx->r11 = ADD32(ctx->r11, -0X8);
L_802462B4:
    // 0x802462B4: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x802462B8: addu        $v1, $t1, $t4
    ctx->r3 = ADD32(ctx->r9, ctx->r12);
    // 0x802462BC: addu        $v0, $s4, $v1
    ctx->r2 = ADD32(ctx->r20, ctx->r3);
    // 0x802462C0: lbu         $t6, 0x101($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X101);
    // 0x802462C4: bgez        $s0, L_802462D8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x802462C8: andi        $t5, $s0, 0x7
        ctx->r13 = ctx->r16 & 0X7;
            goto L_802462D8;
    }
    // 0x802462C8: andi        $t5, $s0, 0x7
    ctx->r13 = ctx->r16 & 0X7;
    // 0x802462CC: beq         $t5, $zero, L_802462D8
    if (ctx->r13 == 0) {
        // 0x802462D0: nop
    
            goto L_802462D8;
    }
    // 0x802462D0: nop

    // 0x802462D4: addiu       $t5, $t5, -0x8
    ctx->r13 = ADD32(ctx->r13, -0X8);
L_802462D8:
    // 0x802462D8: sllv        $t7, $t8, $t5
    ctx->r15 = S32(ctx->r24 << (ctx->r13 & 31));
    // 0x802462DC: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x802462E0: sb          $t9, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r25;
L_802462E4:
    // 0x802462E4: lhu         $at, 0x0($a0)
    ctx->r1 = MEM_HU(ctx->r4, 0X0);
    // 0x802462E8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802462EC: sh          $at, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r1;
    // 0x802462F0: lw          $t1, 0x60($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X60);
    // 0x802462F4: lhu         $t3, 0x158($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X158);
    // 0x802462F8: lbu         $t4, 0x158($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X158);
    // 0x802462FC: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80246300: bne         $at, $zero, L_8024636C
    if (ctx->r1 != 0) {
        // 0x80246304: nop
    
            goto L_8024636C;
    }
    // 0x80246304: nop

    // 0x80246308: beq         $s0, $t4, L_8024636C
    if (ctx->r16 == ctx->r12) {
        // 0x8024630C: nop
    
            goto L_8024636C;
    }
    // 0x8024630C: nop

    // 0x80246310: lbu         $t8, 0x159($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X159);
    // 0x80246314: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80246318: bgez        $t8, L_80246328
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8024631C: sra         $t5, $t8, 2
        ctx->r13 = S32(SIGNED(ctx->r24) >> 2);
            goto L_80246328;
    }
    // 0x8024631C: sra         $t5, $t8, 2
    ctx->r13 = S32(SIGNED(ctx->r24) >> 2);
    // 0x80246320: addiu       $at, $t8, 0x3
    ctx->r1 = ADD32(ctx->r24, 0X3);
    // 0x80246324: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_80246328:
    // 0x80246328: bgez        $t4, L_8024633C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8024632C: andi        $t6, $t4, 0x7
        ctx->r14 = ctx->r12 & 0X7;
            goto L_8024633C;
    }
    // 0x8024632C: andi        $t6, $t4, 0x7
    ctx->r14 = ctx->r12 & 0X7;
    // 0x80246330: beq         $t6, $zero, L_8024633C
    if (ctx->r14 == 0) {
        // 0x80246334: nop
    
            goto L_8024633C;
    }
    // 0x80246334: nop

    // 0x80246338: addiu       $t6, $t6, -0x8
    ctx->r14 = ADD32(ctx->r14, -0X8);
L_8024633C:
    // 0x8024633C: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80246340: addu        $v1, $t5, $t7
    ctx->r3 = ADD32(ctx->r13, ctx->r15);
    // 0x80246344: addu        $v0, $s4, $v1
    ctx->r2 = ADD32(ctx->r20, ctx->r3);
    // 0x80246348: lbu         $t9, 0x101($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X101);
    // 0x8024634C: bgez        $s0, L_80246360
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80246350: andi        $t0, $s0, 0x7
        ctx->r8 = ctx->r16 & 0X7;
            goto L_80246360;
    }
    // 0x80246350: andi        $t0, $s0, 0x7
    ctx->r8 = ctx->r16 & 0X7;
    // 0x80246354: beq         $t0, $zero, L_80246360
    if (ctx->r8 == 0) {
        // 0x80246358: nop
    
            goto L_80246360;
    }
    // 0x80246358: nop

    // 0x8024635C: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_80246360:
    // 0x80246360: sllv        $t3, $t2, $t0
    ctx->r11 = S32(ctx->r10 << (ctx->r8 & 31));
    // 0x80246364: or          $t1, $t9, $t3
    ctx->r9 = ctx->r25 | ctx->r11;
    // 0x80246368: sb          $t1, 0x101($v0)
    MEM_B(0X101, ctx->r2) = ctx->r9;
L_8024636C:
    // 0x8024636C: bne         $a0, $s6, L_8024625C
    if (ctx->r4 != ctx->r22) {
        // 0x80246370: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8024625C;
    }
    // 0x80246370: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_80246374:
    // 0x80246374: lbu         $t4, 0x64($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X64);
    // 0x80246378: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8024637C: andi        $s0, $s7, 0xFF
    ctx->r16 = ctx->r23 & 0XFF;
    // 0x80246380: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80246384: bne         $at, $zero, L_80246160
    if (ctx->r1 != 0) {
        // 0x80246388: or          $s7, $s0, $zero
        ctx->r23 = ctx->r16 | 0;
            goto L_80246160;
    }
    // 0x80246388: or          $s7, $s0, $zero
    ctx->r23 = ctx->r16 | 0;
L_8024638C:
    // 0x8024638C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80246390: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80246394:
    // 0x80246394: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80246398: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024639C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802463A0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802463A4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802463A8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802463AC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802463B0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802463B4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802463B8: jr          $ra
    // 0x802463BC: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x802463BC: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void D_802E6C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E6C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E6C94: beq         $a0, $zero, L_802E6CCC
    if (ctx->r4 == 0) {
        // 0x802E6C98: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802E6CCC;
    }
    // 0x802E6C98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E6C9C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E6CA0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E6CA4: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    // 0x802E6CA8: jal         0x80317DA0
    // 0x802E6CAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80317DA0(rdram, ctx);
        goto after_0;
    // 0x802E6CAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802E6CB0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802E6CB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802E6CB8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802E6CBC: beql        $t8, $zero, L_802E6CD0
    if (ctx->r24 == 0) {
        // 0x802E6CC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802E6CD0;
    }
    goto skip_0;
    // 0x802E6CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802E6CC4: jal         0x802C681C
    // 0x802E6CC8: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802E6CC8: nop

    after_1:
L_802E6CCC:
    // 0x802E6CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802E6CD0:
    // 0x802E6CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E6CD4: jr          $ra
    // 0x802E6CD8: nop

    return;
    // 0x802E6CD8: nop

;}
RECOMP_FUNC void D_802237F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802237F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802237F4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802237F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802237FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80223800: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80223804: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80223808: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022380C:
    // 0x8022380C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80223810: beq         $t6, $zero, L_80223824
    if (ctx->r14 == 0) {
        // 0x80223814: nop
    
            goto L_80223824;
    }
    // 0x80223814: nop

    // 0x80223818: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8022381C: bne         $a3, $v0, L_8022380C
    if (ctx->r7 != ctx->r2) {
        // 0x80223820: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_8022380C;
    }
    // 0x80223820: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
L_80223824:
    // 0x80223824: bne         $a3, $v0, L_80223844
    if (ctx->r7 != ctx->r2) {
        // 0x80223828: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_80223844;
    }
    // 0x80223828: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8022382C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80223830: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80223834: jal         0x80231A24
    // 0x80223838: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80223838: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8022383C: b           L_80223890
    // 0x80223840: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80223890;
    // 0x80223840: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80223844:
    // 0x80223844: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80223848: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8022384C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80223850: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80223854: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80223858: jal         0x8022B5E0
    // 0x8022385C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    static_3_8022B5E0(rdram, ctx);
        goto after_1;
    // 0x8022385C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x80223860: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80223864: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80223868: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022386C: sw          $t9, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r25;
    // 0x80223870: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80223874: jal         0x8022B5E0
    // 0x80223878: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    static_3_8022B5E0(rdram, ctx);
        goto after_2;
    // 0x80223878: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_2:
    // 0x8022387C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80223880: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80223884: jal         0x80223C3C
    // 0x80223888: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    static_3_80223C3C(rdram, ctx);
        goto after_3;
    // 0x80223888: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    after_3:
    // 0x8022388C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
L_80223890:
    // 0x80223890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80223898: jr          $ra
    // 0x8022389C: nop

    return;
    // 0x8022389C: nop

;}
RECOMP_FUNC void D_802CF240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF2C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802CF2C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802CF2C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CF2CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CF2D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802CF2D4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802CF2D8: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802CF2DC: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x802CF2E0: jal         0x80302DC8
    // 0x802CF2E4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802CF2E4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802CF2E8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802CF2EC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF2F0: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    // 0x802CF2F4: jal         0x80302DC8
    // 0x802CF2F8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802CF2F8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802CF2FC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802CF300: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF304: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x802CF308: jal         0x80302DC8
    // 0x802CF30C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_2;
    // 0x802CF30C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802CF310: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802CF314: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802CF318: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF31C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802CF320: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802CF324: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802CF328: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x802CF32C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802CF330: jal         0x80290474
    // 0x802CF334: nop

    static_3_80290474(rdram, ctx);
        goto after_3;
    // 0x802CF334: nop

    after_3:
    // 0x802CF338: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF33C: jal         0x80302980
    // 0x802CF340: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_4;
    // 0x802CF340: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802CF344: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF348: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802CF34C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802CF350: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x802CF354: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CF358: jal         0x80302988
    // 0x802CF35C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802CF35C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802CF360: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF364: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802CF368: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802CF36C: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    // 0x802CF370: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CF374: jal         0x80302988
    // 0x802CF378: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_6;
    // 0x802CF378: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802CF37C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF380: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802CF384: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802CF388: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x802CF38C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CF390: jal         0x80302988
    // 0x802CF394: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_7;
    // 0x802CF394: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802CF398: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CF39C: jal         0x80302A7C
    // 0x802CF3A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_8;
    // 0x802CF3A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802CF3A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802CF3A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802CF3AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802CF3B0: jr          $ra
    // 0x802CF3B4: nop

    return;
    // 0x802CF3B4: nop

;}
RECOMP_FUNC void D_802A9F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9FEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A9FF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A9FF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A9FF8: bne         $a0, $zero, L_802AA010
    if (ctx->r4 != 0) {
        // 0x802A9FFC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802AA010;
    }
    // 0x802A9FFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AA000: jal         0x802C67EC
    // 0x802AA004: addiu       $a0, $zero, 0x884
    ctx->r4 = ADD32(0, 0X884);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802AA004: addiu       $a0, $zero, 0x884
    ctx->r4 = ADD32(0, 0X884);
    after_0:
    // 0x802AA008: beq         $v0, $zero, L_802AA044
    if (ctx->r2 == 0) {
        // 0x802AA00C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802AA044;
    }
    // 0x802AA00C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802AA010:
    // 0x802AA010: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802AA014: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802AA018: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802AA01C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x802AA020: jal         0x802C6930
    // 0x802AA024: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    static_3_802C6930(rdram, ctx);
        goto after_1;
    // 0x802AA024: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    after_1:
    // 0x802AA028: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AA02C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802AA030: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AA034: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x802AA038: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x802AA03C: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x802AA040: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
L_802AA044:
    // 0x802AA044: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802AA048: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802AA04C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AA050: jr          $ra
    // 0x802AA054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802AA054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802837D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283854: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80283858: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028385C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80283860: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x80283864: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x80283868: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028386C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80283870: bnel        $a2, $at, L_8028388C
    if (ctx->r6 != ctx->r1) {
        // 0x80283874: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8028388C;
    }
    goto skip_0;
    // 0x80283874: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_0:
    // 0x80283878: jal         0x8021BA90
    // 0x8028387C: nop

    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x8028387C: nop

    after_0:
    // 0x80283880: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80283884: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80283888: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_8028388C:
    // 0x8028388C: jal         0x8021ACB0
    // 0x80283890: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    static_3_8021ACB0(rdram, ctx);
        goto after_1;
    // 0x80283890: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    after_1:
    // 0x80283894: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80283898: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x8028389C: bnel        $t6, $at, L_802838BC
    if (ctx->r14 != ctx->r1) {
        // 0x802838A0: lw          $a0, 0x4($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4);
            goto L_802838BC;
    }
    goto skip_1;
    // 0x802838A0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    skip_1:
    // 0x802838A4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802838A8: jal         0x8021BA1C
    // 0x802838AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021BA1C(rdram, ctx);
        goto after_2;
    // 0x802838AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x802838B0: b           L_802838C8
    // 0x802838B4: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
        goto L_802838C8;
    // 0x802838B4: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x802838B8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_802838BC:
    // 0x802838BC: jal         0x8021B838
    // 0x802838C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_3;
    // 0x802838C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x802838C4: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
L_802838C8:
    // 0x802838C8: addiu       $at, $zero, 0x88
    ctx->r1 = ADD32(0, 0X88);
    // 0x802838CC: beq         $a2, $at, L_80283904
    if (ctx->r6 == ctx->r1) {
        // 0x802838D0: addiu       $at, $zero, 0x68
        ctx->r1 = ADD32(0, 0X68);
            goto L_80283904;
    }
    // 0x802838D0: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x802838D4: beq         $a2, $at, L_80283950
    if (ctx->r6 == ctx->r1) {
        // 0x802838D8: addiu       $at, $zero, 0x69
        ctx->r1 = ADD32(0, 0X69);
            goto L_80283950;
    }
    // 0x802838D8: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x802838DC: beq         $a2, $at, L_8028399C
    if (ctx->r6 == ctx->r1) {
        // 0x802838E0: addiu       $at, $zero, 0x86
        ctx->r1 = ADD32(0, 0X86);
            goto L_8028399C;
    }
    // 0x802838E0: addiu       $at, $zero, 0x86
    ctx->r1 = ADD32(0, 0X86);
    // 0x802838E4: beq         $a2, $at, L_802839E8
    if (ctx->r6 == ctx->r1) {
        // 0x802838E8: addiu       $at, $zero, 0x87
        ctx->r1 = ADD32(0, 0X87);
            goto L_802839E8;
    }
    // 0x802838E8: addiu       $at, $zero, 0x87
    ctx->r1 = ADD32(0, 0X87);
    // 0x802838EC: beq         $a2, $at, L_80283A34
    if (ctx->r6 == ctx->r1) {
        // 0x802838F0: addiu       $at, $zero, 0x54
        ctx->r1 = ADD32(0, 0X54);
            goto L_80283A34;
    }
    // 0x802838F0: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x802838F4: beql        $a2, $at, L_80283A84
    if (ctx->r6 == ctx->r1) {
        // 0x802838F8: lw          $v0, 0x1A0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1A0);
            goto L_80283A84;
    }
    goto skip_2;
    // 0x802838F8: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    skip_2:
    // 0x802838FC: b           L_80283ACC
    // 0x80283900: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
        goto L_80283ACC;
    // 0x80283900: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
L_80283904:
    // 0x80283904: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x80283908: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8028390C: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x80283910: lh          $t7, 0xB8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB8);
    // 0x80283914: jalr        $t9
    // 0x80283918: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80283918: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_4:
    // 0x8028391C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80283920: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80283924: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80283928: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028392C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80283930: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x80283934: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80283938: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x8028393C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80283940: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x80283944: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x80283948: b           L_80283AC8
    // 0x8028394C: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
        goto L_80283AC8;
    // 0x8028394C: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
L_80283950:
    // 0x80283950: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x80283954: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80283958: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x8028395C: lh          $t8, 0xB8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XB8);
    // 0x80283960: jalr        $t9
    // 0x80283964: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80283964: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_5:
    // 0x80283968: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8028396C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80283970: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80283974: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80283978: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028397C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80283980: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80283984: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283988: swc1        $f16, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f16.u32l;
    // 0x8028398C: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x80283990: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80283994: b           L_80283AC8
    // 0x80283998: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
        goto L_80283AC8;
    // 0x80283998: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_8028399C:
    // 0x8028399C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802839A0: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x802839A4: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802839A8: lh          $t0, 0xB8($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB8);
    // 0x802839AC: jalr        $t9
    // 0x802839B0: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802839B0: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_6:
    // 0x802839B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802839B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802839BC: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x802839C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802839C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802839C8: swc1        $f8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f8.u32l;
    // 0x802839CC: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802839D0: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x802839D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802839D8: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x802839DC: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x802839E0: b           L_80283AC8
    // 0x802839E4: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
        goto L_80283AC8;
    // 0x802839E4: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
L_802839E8:
    // 0x802839E8: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802839EC: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x802839F0: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802839F4: lh          $t1, 0xB8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XB8);
    // 0x802839F8: jalr        $t9
    // 0x802839FC: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802839FC: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    after_7:
    // 0x80283A00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80283A04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80283A08: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80283A0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283A10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80283A14: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x80283A18: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80283A1C: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x80283A20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80283A24: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x80283A28: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x80283A2C: b           L_80283AC8
    // 0x80283A30: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
        goto L_80283AC8;
    // 0x80283A30: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
L_80283A34:
    // 0x80283A34: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x80283A38: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x80283A3C: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x80283A40: lh          $t2, 0xB8($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XB8);
    // 0x80283A44: jalr        $t9
    // 0x80283A48: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x80283A48: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    after_8:
    // 0x80283A4C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80283A50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80283A54: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80283A58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80283A5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80283A60: swc1        $f16, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f16.u32l;
    // 0x80283A64: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80283A68: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x80283A6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283A70: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x80283A74: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80283A78: b           L_80283AC8
    // 0x80283A7C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
        goto L_80283AC8;
    // 0x80283A7C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80283A80: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
L_80283A84:
    // 0x80283A84: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x80283A88: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x80283A8C: lh          $t3, 0xB8($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XB8);
    // 0x80283A90: jalr        $t9
    // 0x80283A94: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x80283A94: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_9:
    // 0x80283A98: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80283A9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80283AA0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80283AA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80283AA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80283AAC: swc1        $f8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f8.u32l;
    // 0x80283AB0: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80283AB4: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x80283AB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80283ABC: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x80283AC0: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80283AC4: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
L_80283AC8:
    // 0x80283AC8: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
L_80283ACC:
    // 0x80283ACC: addiu       $v1, $s0, 0x1A4
    ctx->r3 = ADD32(ctx->r16, 0X1A4);
    // 0x80283AD0: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x80283AD4: lh          $t4, 0x18($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X18);
    // 0x80283AD8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x80283ADC: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x80283AE0: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x80283AE4: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x80283AE8: jalr        $t9
    // 0x80283AEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x80283AEC: nop

    after_10:
    // 0x80283AF0: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x80283AF4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80283AF8: lh          $t5, 0xA0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XA0);
    // 0x80283AFC: lw          $t9, 0xA4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XA4);
    // 0x80283B00: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x80283B04: jalr        $t9
    // 0x80283B08: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x80283B08: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_11:
    // 0x80283B0C: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x80283B10: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80283B14: lh          $t6, 0x98($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X98);
    // 0x80283B18: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x80283B1C: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x80283B20: jalr        $t9
    // 0x80283B24: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x80283B24: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_12:
    // 0x80283B28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80283B2C: jal         0x802D50F4
    // 0x80283B30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802D50F4(rdram, ctx);
        goto after_13;
    // 0x80283B30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x80283B34: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x80283B38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80283B3C: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80283B40: lh          $t7, 0xB0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB0);
    // 0x80283B44: jalr        $t9
    // 0x80283B48: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x80283B48: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_14:
    // 0x80283B4C: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80283B50: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x80283B54: jal         0x80309758
    // 0x80283B58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309758(rdram, ctx);
        goto after_15;
    // 0x80283B58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x80283B5C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80283B60: jal         0x80318E80
    // 0x80283B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_16;
    // 0x80283B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80283B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80283B6C: jal         0x80318EFC
    // 0x80283B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318EFC(rdram, ctx);
        goto after_17;
    // 0x80283B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x80283B74: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80283B78: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80283B7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80283B80: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80283B84: swc1        $f2, 0x698($s0)
    MEM_W(0X698, ctx->r16) = ctx->f2.u32l;
    // 0x80283B88: swc1        $f2, 0x69C($s0)
    MEM_W(0X69C, ctx->r16) = ctx->f2.u32l;
    // 0x80283B8C: swc1        $f0, 0x690($s0)
    MEM_W(0X690, ctx->r16) = ctx->f0.u32l;
    // 0x80283B90: jal         0x8022970C
    // 0x80283B94: swc1        $f0, 0x694($s0)
    MEM_W(0X694, ctx->r16) = ctx->f0.u32l;
    func_8022970C(rdram, ctx);
        goto after_18;
    // 0x80283B94: swc1        $f0, 0x694($s0)
    MEM_W(0X694, ctx->r16) = ctx->f0.u32l;
    after_18:
    // 0x80283B98: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80283B9C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80283BA0: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80283BA4: jal         0x8022A0D0
    // 0x80283BA8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    static_3_8022A0D0(rdram, ctx);
        goto after_19;
    // 0x80283BA8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x80283BAC: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x80283BB0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x80283BB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80283BB8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x80283BBC: jal         0x802C4A20
    // 0x80283BC0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    static_3_802C4A20(rdram, ctx);
        goto after_20;
    // 0x80283BC0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_20:
    // 0x80283BC4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80283BC8: jal         0x802C580C
    // 0x80283BCC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_21;
    // 0x80283BCC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_21:
    // 0x80283BD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80283BD4: jal         0x802C5818
    // 0x80283BD8: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_22;
    // 0x80283BD8: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_22:
    // 0x80283BDC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80283BE0: jal         0x802C5824
    // 0x80283BE4: lui         $a1, 0xC296
    ctx->r5 = S32(0XC296 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_23;
    // 0x80283BE4: lui         $a1, 0xC296
    ctx->r5 = S32(0XC296 << 16);
    after_23:
    // 0x80283BE8: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
    // 0x80283BEC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80283BF0: jal         0x802C5830
    // 0x80283BF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_802C5830(rdram, ctx);
        goto after_24;
    // 0x80283BF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_24:
    // 0x80283BF8: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80283BFC: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x80283C00: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80283C04: bnel        $t8, $at, L_80283C18
    if (ctx->r24 != ctx->r1) {
        // 0x80283C08: addiu       $a0, $s0, 0x4F8
        ctx->r4 = ADD32(ctx->r16, 0X4F8);
            goto L_80283C18;
    }
    goto skip_3;
    // 0x80283C08: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    skip_3:
    // 0x80283C0C: jal         0x802C583C
    // 0x80283C10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802C583C(rdram, ctx);
        goto after_25;
    // 0x80283C10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x80283C14: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
L_80283C18:
    // 0x80283C18: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x80283C1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80283C20: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80283C24: jal         0x802C4A20
    // 0x80283C28: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    static_3_802C4A20(rdram, ctx);
        goto after_26;
    // 0x80283C28: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_26:
    // 0x80283C2C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80283C30: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x80283C34: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80283C38: beq         $t0, $at, L_80283C48
    if (ctx->r8 == ctx->r1) {
        // 0x80283C3C: addiu       $at, $zero, 0x54
        ctx->r1 = ADD32(0, 0X54);
            goto L_80283C48;
    }
    // 0x80283C3C: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x80283C40: bne         $t0, $at, L_80283C58
    if (ctx->r8 != ctx->r1) {
        // 0x80283C44: addiu       $a1, $zero, 0x3E8
        ctx->r5 = ADD32(0, 0X3E8);
            goto L_80283C58;
    }
    // 0x80283C44: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
L_80283C48:
    // 0x80283C48: jal         0x802C583C
    // 0x80283C4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802C583C(rdram, ctx);
        goto after_27;
    // 0x80283C4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_27:
    // 0x80283C50: b           L_80283C64
    // 0x80283C54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_80283C64;
    // 0x80283C54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_80283C58:
    // 0x80283C58: jal         0x802C583C
    // 0x80283C5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_802C583C(rdram, ctx);
        goto after_28;
    // 0x80283C5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_28:
    // 0x80283C60: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_80283C64:
    // 0x80283C64: jal         0x802C584C
    // 0x80283C68: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802C584C(rdram, ctx);
        goto after_29;
    // 0x80283C68: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_29:
    // 0x80283C6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80283C70: jal         0x802C580C
    // 0x80283C74: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_30;
    // 0x80283C74: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_30:
    // 0x80283C78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80283C7C: jal         0x802C5818
    // 0x80283C80: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_31;
    // 0x80283C80: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    after_31:
    // 0x80283C84: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80283C88: jal         0x802C5824
    // 0x80283C8C: lui         $a1, 0xC296
    ctx->r5 = S32(0XC296 << 16);
    static_3_802C5824(rdram, ctx);
        goto after_32;
    // 0x80283C8C: lui         $a1, 0xC296
    ctx->r5 = S32(0XC296 << 16);
    after_32:
    // 0x80283C90: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
    // 0x80283C94: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80283C98: jal         0x802C5830
    // 0x80283C9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    static_3_802C5830(rdram, ctx);
        goto after_33;
    // 0x80283C9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_33:
    // 0x80283CA0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80283CA4: addiu       $at, $zero, 0x88
    ctx->r1 = ADD32(0, 0X88);
    // 0x80283CA8: beq         $t1, $at, L_80283CB8
    if (ctx->r9 == ctx->r1) {
        // 0x80283CAC: addiu       $at, $zero, 0x54
        ctx->r1 = ADD32(0, 0X54);
            goto L_80283CB8;
    }
    // 0x80283CAC: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x80283CB0: bne         $t1, $at, L_80283CC0
    if (ctx->r9 != ctx->r1) {
        // 0x80283CB4: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80283CC0;
    }
    // 0x80283CB4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_80283CB8:
    // 0x80283CB8: b           L_80283CC4
    // 0x80283CBC: sb          $zero, 0x68C($s0)
    MEM_B(0X68C, ctx->r16) = 0;
        goto L_80283CC4;
    // 0x80283CBC: sb          $zero, 0x68C($s0)
    MEM_B(0X68C, ctx->r16) = 0;
L_80283CC0:
    // 0x80283CC0: sb          $t2, 0x68C($s0)
    MEM_B(0X68C, ctx->r16) = ctx->r10;
L_80283CC4:
    // 0x80283CC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283CC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80283CCC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80283CD0: jr          $ra
    // 0x80283CD4: nop

    return;
    // 0x80283CD4: nop

;}
RECOMP_FUNC void D_8023F2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F2BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023F2C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023F2C4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023F2C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023F2CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023F2D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023F2D4: jal         0x8023FC40
    // 0x8023F2D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023F2D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8023F2DC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8023F2E0: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x8023F2E4: beq         $s0, $zero, L_8023F30C
    if (ctx->r16 == 0) {
        // 0x8023F2E8: nop
    
            goto L_8023F30C;
    }
    // 0x8023F2E8: nop

L_8023F2EC:
    // 0x8023F2EC: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8023F2F0: jal         0x80237120
    // 0x8023F2F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237120(rdram, ctx);
        goto after_1;
    // 0x8023F2F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8023F2F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023F2FC: jal         0x80237150
    // 0x8023F300: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80237150(rdram, ctx);
        goto after_2;
    // 0x8023F300: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8023F304: bne         $s1, $zero, L_8023F2EC
    if (ctx->r17 != 0) {
        // 0x8023F308: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8023F2EC;
    }
    // 0x8023F308: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8023F30C:
    // 0x8023F30C: jal         0x8023FC40
    // 0x8023F310: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8023FC40(rdram, ctx);
        goto after_3;
    // 0x8023F310: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x8023F314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023F318: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023F31C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F320: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023F324: jr          $ra
    // 0x8023F328: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8023F328: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802347B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802347B0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802347B4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802347B8: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802347BC: beq         $v0, $zero, L_802347E4
    if (ctx->r2 == 0) {
        // 0x802347C0: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_802347E4;
    }
    // 0x802347C0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802347C4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802347C8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802347CC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802347D0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x802347D4: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x802347D8: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x802347DC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x802347E0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_802347E4:
    // 0x802347E4: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x802347E8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802347EC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802347F0: beq         $v0, $zero, L_80234818
    if (ctx->r2 == 0) {
        // 0x802347F4: lui         $t2, 0x0
        ctx->r10 = S32(0X0 << 16);
            goto L_80234818;
    }
    // 0x802347F4: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802347F8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x802347FC: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x80234800: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80234804: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80234808: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x8023480C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80234810: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80234814: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_80234818:
    // 0x80234818: jr          $ra
    // 0x8023481C: nop

    return;
    // 0x8023481C: nop

;}
RECOMP_FUNC void D_8021F6A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F6A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021F6AC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021F6B0: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8021F6B4: subu        $t1, $a1, $a0
    ctx->r9 = SUB32(ctx->r5, ctx->r4);
    // 0x8021F6B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F6BC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8021F6C0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8021F6C4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8021F6C8: blez        $t1, L_8021FAF4
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8021F6CC: andi        $v1, $t0, 0xFFF
        ctx->r3 = ctx->r8 & 0XFFF;
            goto L_8021FAF4;
    }
    // 0x8021F6CC: andi        $v1, $t0, 0xFFF
    ctx->r3 = ctx->r8 & 0XFFF;
    // 0x8021F6D0: subu        $a0, $a3, $a2
    ctx->r4 = SUB32(ctx->r7, ctx->r6);
    // 0x8021F6D4: blez        $a0, L_8021FAF4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8021F6D8: slti        $at, $v1, 0xFFE
        ctx->r1 = SIGNED(ctx->r3) < 0XFFE ? 1 : 0;
            goto L_8021FAF4;
    }
    // 0x8021F6D8: slti        $at, $v1, 0xFFE
    ctx->r1 = SIGNED(ctx->r3) < 0XFFE ? 1 : 0;
    // 0x8021F6DC: beq         $at, $zero, L_8021F8D8
    if (ctx->r1 == 0) {
        // 0x8021F6E0: lui         $t9, 0x0
        ctx->r25 = S32(0X0 << 16);
            goto L_8021F8D8;
    }
    // 0x8021F6E0: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8021F6E4: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8021F6E8: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8021F6EC: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021F6F0: lw          $t6, 0x2C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X2C);
    // 0x8021F6F4: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021F6F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021F6FC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021F700: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x8021F704: lhu         $t9, 0xA($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XA);
    // 0x8021F708: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8021F70C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8021F710: bgez        $t9, L_8021F724
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8021F714: cvt.s.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021F724;
    }
    // 0x8021F714: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021F718: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021F71C: nop

    // 0x8021F720: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_8021F724:
    // 0x8021F724: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x8021F728: mul.s       $f4, $f2, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8021F72C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021F730: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8021F734: bgez        $t6, L_8021F748
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021F738: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021F748;
    }
    // 0x8021F738: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021F73C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021F740: nop

    // 0x8021F744: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_8021F748:
    // 0x8021F748: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8021F74C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021F750: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021F754: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021F758: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8021F75C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021F760: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8021F764: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021F768: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021F76C: mul.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x8021F770: add.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8021F774: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8021F778: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021F77C: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8021F780: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8021F784: sll         $t8, $t5, 16
    ctx->r24 = S32(ctx->r13 << 16);
    // 0x8021F788: sra         $t5, $t8, 16
    ctx->r13 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021F78C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021F790: nop

    // 0x8021F794: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021F798: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021F79C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021F7A0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8021F7A4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021F7A8: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021F7AC: mfc1        $ra, $f10
    ctx->r31 = (int32_t)ctx->f10.u32l;
    // 0x8021F7B0: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8021F7B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021F7B8: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8021F7BC: sll         $t7, $ra, 16
    ctx->r15 = S32(ctx->r31 << 16);
    // 0x8021F7C0: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021F7C4: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8021F7C8: sra         $ra, $t7, 16
    ctx->r31 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8021F7CC: lhu         $t7, 0x12($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X12);
    // 0x8021F7D0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021F7D4: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8021F7D8: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021F7DC: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021F7E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021F7E4: nop

    // 0x8021F7E8: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8021F7EC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021F7F0: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021F7F4: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x8021F7F8: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x8021F7FC: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x8021F800: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021F804: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8021F808: div.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8021F80C: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021F810: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8021F814: nop

    // 0x8021F818: sll         $t9, $t4, 16
    ctx->r25 = S32(ctx->r12 << 16);
    // 0x8021F81C: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8021F820: beq         $t8, $zero, L_8021F868
    if (ctx->r24 == 0) {
        // 0x8021F824: or          $t4, $t6, $zero
        ctx->r12 = ctx->r14 | 0;
            goto L_8021F868;
    }
    // 0x8021F824: or          $t4, $t6, $zero
    ctx->r12 = ctx->r14 | 0;
    // 0x8021F828: sll         $t9, $t0, 5
    ctx->r25 = S32(ctx->r8 << 5);
    // 0x8021F82C: bltz        $t9, L_8021F868
    if (SIGNED(ctx->r25) < 0) {
        // 0x8021F830: lui         $a0, 0x480
        ctx->r4 = S32(0X480 << 16);
            goto L_8021F868;
    }
    // 0x8021F830: lui         $a0, 0x480
    ctx->r4 = S32(0X480 << 16);
    // 0x8021F834: sh          $ra, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r31;
    // 0x8021F838: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021F83C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8021F840: sh          $t2, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r10;
    // 0x8021F844: sh          $t6, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r14;
    // 0x8021F848: jal         0x802233EC
    // 0x8021F84C: sh          $t5, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r13;
    static_3_802233EC(rdram, ctx);
        goto after_0;
    // 0x8021F84C: sh          $t5, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r13;
    after_0:
    // 0x8021F850: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8021F854: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8021F858: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x8021F85C: lh          $t4, 0x24($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X24);
    // 0x8021F860: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x8021F864: lh          $ra, 0x28($sp)
    ctx->r31 = MEM_H(ctx->r29, 0X28);
L_8021F868:
    // 0x8021F868: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8021F86C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8021F870: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8021F874: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8021F878: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021F87C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021F880: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021F884: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021F888: lhu         $t8, 0x12($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X12);
    // 0x8021F88C: lui         $t7, 0xFC11
    ctx->r15 = S32(0XFC11 << 16);
    // 0x8021F890: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x8021F894: bnel        $t9, $zero, L_8021F8BC
    if (ctx->r25 != 0) {
        // 0x8021F898: lw          $v0, 0x0($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X0);
            goto L_8021F8BC;
    }
    goto skip_0;
    // 0x8021F898: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x8021F89C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8021F8A0: ori         $t7, $t7, 0x97FF
    ctx->r15 = ctx->r15 | 0X97FF;
    // 0x8021F8A4: addiu       $t8, $zero, -0x1C8
    ctx->r24 = ADD32(0, -0X1C8);
    // 0x8021F8A8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021F8AC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021F8B0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021F8B4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8021F8B8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
L_8021F8BC:
    // 0x8021F8BC: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8021F8C0: ori         $t6, $t6, 0x1301
    ctx->r14 = ctx->r14 | 0X1301;
    // 0x8021F8C4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021F8C8: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8021F8CC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021F8D0: b           L_8021F8F0
    // 0x8021F8D4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_8021F8F0;
    // 0x8021F8D4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_8021F8D8:
    // 0x8021F8D8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8021F8DC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8021F8E0: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x8021F8E4: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x8021F8E8: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x8021F8EC: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_8021F8F0:
    // 0x8021F8F0: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8021F8F4: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x8021F8F8: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
    // 0x8021F8FC: sll         $t6, $v1, 18
    ctx->r14 = S32(ctx->r3 << 18);
    // 0x8021F900: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8021F904: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021F908: addiu       $t9, $t0, 0x8
    ctx->r25 = ADD32(ctx->r8, 0X8);
    // 0x8021F90C: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x8021F910: blez        $t7, L_8021F920
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8021F914: sw          $t9, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r25;
            goto L_8021F920;
    }
    // 0x8021F914: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8021F918: b           L_8021F924
    // 0x8021F91C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_8021F924;
    // 0x8021F91C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_8021F920:
    // 0x8021F920: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8021F924:
    // 0x8021F924: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8021F928: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x8021F92C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8021F930: subu        $t9, $t3, $t8
    ctx->r25 = SUB32(ctx->r11, ctx->r24);
    // 0x8021F934: sll         $t6, $t9, 18
    ctx->r14 = S32(ctx->r25 << 18);
    // 0x8021F938: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021F93C: blez        $t7, L_8021F94C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8021F940: andi        $t6, $a0, 0xFFF
        ctx->r14 = ctx->r4 & 0XFFF;
            goto L_8021F94C;
    }
    // 0x8021F940: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x8021F944: b           L_8021F950
    // 0x8021F948: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_8021F950;
    // 0x8021F948: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_8021F94C:
    // 0x8021F94C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8021F950:
    // 0x8021F950: andi        $t8, $v1, 0xFFF
    ctx->r24 = ctx->r3 & 0XFFF;
    // 0x8021F954: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8021F958: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8021F95C: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8021F960: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8021F964: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8021F968: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8021F96C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x8021F970: sll         $t9, $t6, 18
    ctx->r25 = S32(ctx->r14 << 18);
    // 0x8021F974: sra         $t7, $t9, 16
    ctx->r15 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8021F978: blez        $t7, L_8021F988
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8021F97C: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_8021F988;
    }
    // 0x8021F97C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8021F980: b           L_8021F98C
    // 0x8021F984: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_8021F98C;
    // 0x8021F984: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_8021F988:
    // 0x8021F988: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8021F98C:
    // 0x8021F98C: subu        $t1, $t3, $t8
    ctx->r9 = SUB32(ctx->r11, ctx->r24);
    // 0x8021F990: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8021F994: sll         $a2, $t6, 16
    ctx->r6 = S32(ctx->r14 << 16);
    // 0x8021F998: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8021F99C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8021F9A0: blez        $t9, L_8021F9B0
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8021F9A4: or          $t1, $t6, $zero
        ctx->r9 = ctx->r14 | 0;
            goto L_8021F9B0;
    }
    // 0x8021F9A4: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x8021F9A8: b           L_8021F9B4
    // 0x8021F9AC: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_8021F9B4;
    // 0x8021F9AC: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_8021F9B0:
    // 0x8021F9B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8021F9B4:
    // 0x8021F9B4: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x8021F9B8: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x8021F9BC: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8021F9C0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8021F9C4: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8021F9C8: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x8021F9CC: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x8021F9D0: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x8021F9D4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8021F9D8: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8021F9DC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8021F9E0: bgez        $a1, L_8021FA44
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8021F9E4: sw          $t8, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r24;
            goto L_8021FA44;
    }
    // 0x8021F9E4: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x8021F9E8: bgez        $t2, L_8021FA18
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8021F9EC: nop
    
            goto L_8021FA18;
    }
    // 0x8021F9EC: nop

    // 0x8021F9F0: multu       $a1, $t2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021F9F4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021F9F8: mflo        $v0
    ctx->r2 = lo;
    // 0x8021F9FC: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8021FA00: blez        $t9, L_8021FA10
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8021FA04: nop
    
            goto L_8021FA10;
    }
    // 0x8021FA04: nop

    // 0x8021FA08: b           L_8021FA44
    // 0x8021FA0C: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
        goto L_8021FA44;
    // 0x8021FA0C: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
L_8021FA10:
    // 0x8021FA10: b           L_8021FA44
    // 0x8021FA14: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
        goto L_8021FA44;
    // 0x8021FA14: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
L_8021FA18:
    // 0x8021FA18: multu       $a1, $t2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021FA1C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021FA20: mflo        $v0
    ctx->r2 = lo;
    // 0x8021FA24: sra         $t7, $v0, 7
    ctx->r15 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8021FA28: bgez        $t7, L_8021FA38
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021FA2C: nop
    
            goto L_8021FA38;
    }
    // 0x8021FA2C: nop

    // 0x8021FA30: b           L_8021FA38
    // 0x8021FA34: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_8021FA38;
    // 0x8021FA34: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_8021FA38:
    // 0x8021FA38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8021FA3C: b           L_8021FA44
    // 0x8021FA40: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_8021FA44;
    // 0x8021FA40: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_8021FA44:
    // 0x8021FA44: bgez        $t1, L_8021FAB4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8021FA48: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8021FAB4;
    }
    // 0x8021FA48: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021FA4C: negu        $a1, $t4
    ctx->r5 = SUB32(0, ctx->r12);
    // 0x8021FA50: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x8021FA54: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8021FA58: bgez        $t6, L_8021FA88
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021FA5C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8021FA88;
    }
    // 0x8021FA5C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8021FA60: multu       $a2, $t6
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021FA64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021FA68: mflo        $v0
    ctx->r2 = lo;
    // 0x8021FA6C: sra         $t8, $v0, 7
    ctx->r24 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8021FA70: blez        $t8, L_8021FA80
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8021FA74: nop
    
            goto L_8021FA80;
    }
    // 0x8021FA74: nop

    // 0x8021FA78: b           L_8021FAB8
    // 0x8021FA7C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_8021FAB8;
    // 0x8021FA7C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_8021FA80:
    // 0x8021FA80: b           L_8021FABC
    // 0x8021FA84: subu        $t7, $ra, $v1
    ctx->r15 = SUB32(ctx->r31, ctx->r3);
        goto L_8021FABC;
    // 0x8021FA84: subu        $t7, $ra, $v1
    ctx->r15 = SUB32(ctx->r31, ctx->r3);
L_8021FA88:
    // 0x8021FA88: multu       $a2, $v1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021FA8C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021FA90: mflo        $v0
    ctx->r2 = lo;
    // 0x8021FA94: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8021FA98: bgez        $t9, L_8021FAA8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8021FA9C: nop
    
            goto L_8021FAA8;
    }
    // 0x8021FA9C: nop

    // 0x8021FAA0: b           L_8021FAA8
    // 0x8021FAA4: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_8021FAA8;
    // 0x8021FAA4: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_8021FAA8:
    // 0x8021FAA8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8021FAAC: b           L_8021FAB8
    // 0x8021FAB0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8021FAB8;
    // 0x8021FAB0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8021FAB4:
    // 0x8021FAB4: negu        $a1, $t4
    ctx->r5 = SUB32(0, ctx->r12);
L_8021FAB8:
    // 0x8021FAB8: subu        $t7, $ra, $v1
    ctx->r15 = SUB32(ctx->r31, ctx->r3);
L_8021FABC:
    // 0x8021FABC: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x8021FAC0: subu        $t9, $t5, $t0
    ctx->r25 = SUB32(ctx->r13, ctx->r8);
    // 0x8021FAC4: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x8021FAC8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8021FACC: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x8021FAD0: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8021FAD4: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x8021FAD8: sll         $t8, $t2, 16
    ctx->r24 = S32(ctx->r10 << 16);
    // 0x8021FADC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8021FAE0: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8021FAE4: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x8021FAE8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8021FAEC: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8021FAF0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_8021FAF4:
    // 0x8021FAF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021FAF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021FAFC: jr          $ra
    // 0x8021FB00: nop

    return;
    // 0x8021FB00: nop

;}
RECOMP_FUNC void D_8021152C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021152C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80211530: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80211534: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80211538: bne         $a0, $at, L_80211560
    if (ctx->r4 != ctx->r1) {
        // 0x8021153C: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_80211560;
    }
    // 0x8021153C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80211540: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80211544: swc1        $f12, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f12.u32l;
    // 0x80211548: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021154C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80211550: swc1        $f14, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f14.u32l;
    // 0x80211554: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80211558: jr          $ra
    // 0x8021155C: swc1        $f4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f4.u32l;
    return;
    // 0x8021155C: swc1        $f4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f4.u32l;
L_80211560:
    // 0x80211560: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80211564: swc1        $f12, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f12.u32l;
    // 0x80211568: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8021156C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80211570: swc1        $f14, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f14.u32l;
    // 0x80211574: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80211578: swc1        $f6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f6.u32l;
    // 0x8021157C: jr          $ra
    // 0x80211580: nop

    return;
    // 0x80211580: nop

;}
RECOMP_FUNC void D_802EFD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFE08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EFE0C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802EFE10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EFE14: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802EFE18: jal         0x80228DE0
    // 0x802EFE1C: addiu       $a1, $a2, 0xF4
    ctx->r5 = ADD32(ctx->r6, 0XF4);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802EFE1C: addiu       $a1, $a2, 0xF4
    ctx->r5 = ADD32(ctx->r6, 0XF4);
    after_0:
    // 0x802EFE20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EFE24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EFE28: jr          $ra
    // 0x802EFE2C: nop

    return;
    // 0x802EFE2C: nop

;}
RECOMP_FUNC void D_802CC1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CC27C: jr          $ra
    // 0x802CC280: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    return;
    // 0x802CC280: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
;}
RECOMP_FUNC void D_8020CE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020CE40: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8020CE44: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8020CE48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020CE4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8020CE50: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8020CE54: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8020CE58: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8020CE5C: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x8020CE60: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x8020CE64: sdc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X30, ctx->r29);
    // 0x8020CE68: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8020CE6C: mul.s       $f16, $f4, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8020CE70: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x8020CE74: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x8020CE78: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8020CE7C: lwc1        $f20, 0x74($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8020CE80: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x8020CE84: sdc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X28, ctx->r29);
    // 0x8020CE88: sub.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x8020CE8C: lwc1        $f28, 0x68($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020CE90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020CE94: andi        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 & 0X1;
    // 0x8020CE98: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8020CE9C: nop

    // 0x8020CEA0: mul.s       $f30, $f8, $f22
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f30.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x8020CEA4: nop

    // 0x8020CEA8: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8020CEAC: nop

    // 0x8020CEB0: mul.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8020CEB4: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x8020CEB8: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8020CEBC: nop

    // 0x8020CEC0: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x8020CEC4: nop

    // 0x8020CEC8: mul.s       $f10, $f20, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8020CECC: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x8020CED0: mul.s       $f26, $f10, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8020CED4: sub.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x8020CED8: sub.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f26.fl;
    // 0x8020CEDC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8020CEE0: nop

    // 0x8020CEE4: mul.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8020CEE8: sub.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x8020CEEC: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8020CEF0: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x8020CEF4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x8020CEF8: mul.s       $f22, $f4, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8020CEFC: nop

    // 0x8020CF00: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8020CF04: nop

    // 0x8020CF08: mul.s       $f24, $f8, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x8020CF0C: nop

    // 0x8020CF10: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8020CF14: nop

    // 0x8020CF18: mul.s       $f28, $f4, $f28
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f28.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x8020CF1C: blez        $a1, L_8020D720
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8020CF20: nop
    
            goto L_8020D720;
    }
    // 0x8020CF20: nop

    // 0x8020CF24: beq         $v1, $zero, L_8020D1D8
    if (ctx->r3 == 0) {
        // 0x8020CF28: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_8020D1D8;
    }
    // 0x8020CF28: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CF2C: lhu         $a2, 0x6($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X6);
    // 0x8020CF30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8020CF34: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8020CF38: beq         $a2, $zero, L_8020CF6C
    if (ctx->r6 == 0) {
        // 0x8020CF3C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_8020CF6C;
    }
    // 0x8020CF3C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020CF40: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x8020CF44: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CF48: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8020CF4C: bgez        $t6, L_8020CF60
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020CF50: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020CF60;
    }
    // 0x8020CF50: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020CF54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020CF58: nop

    // 0x8020CF5C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8020CF60:
    // 0x8020CF60: mul.s       $f4, $f12, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8020CF64: b           L_8020CF94
    // 0x8020CF68: add.s       $f0, $f4, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f22.fl;
        goto L_8020CF94;
    // 0x8020CF68: add.s       $f0, $f4, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f22.fl;
L_8020CF6C:
    // 0x8020CF6C: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
    // 0x8020CF70: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020CF74: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8020CF78: bgez        $t7, L_8020CF8C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8020CF7C: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020CF8C;
    }
    // 0x8020CF7C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020CF80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020CF84: nop

    // 0x8020CF88: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_8020CF8C:
    // 0x8020CF8C: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8020CF90: add.s       $f0, $f4, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f30.fl;
L_8020CF94:
    // 0x8020CF94: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020CF98: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CF9C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020CFA0: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020CFA4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CFA8: nop

    // 0x8020CFAC: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CFB0: beql        $t9, $zero, L_8020D000
    if (ctx->r25 == 0) {
        // 0x8020CFB4: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_8020D000;
    }
    goto skip_0;
    // 0x8020CFB4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x8020CFB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020CFBC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020CFC0: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8020CFC4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8020CFC8: nop

    // 0x8020CFCC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020CFD0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8020CFD4: nop

    // 0x8020CFD8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8020CFDC: bne         $t9, $zero, L_8020CFF4
    if (ctx->r25 != 0) {
        // 0x8020CFE0: nop
    
            goto L_8020CFF4;
    }
    // 0x8020CFE0: nop

    // 0x8020CFE4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8020CFE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020CFEC: b           L_8020D00C
    // 0x8020CFF0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8020D00C;
    // 0x8020CFF0: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8020CFF4:
    // 0x8020CFF4: b           L_8020D00C
    // 0x8020CFF8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8020D00C;
    // 0x8020CFF8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8020CFFC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_8020D000:
    // 0x8020D000: nop

    // 0x8020D004: bltz        $t9, L_8020CFF4
    if (SIGNED(ctx->r25) < 0) {
        // 0x8020D008: nop
    
            goto L_8020CFF4;
    }
    // 0x8020D008: nop

L_8020D00C:
    // 0x8020D00C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D010: beq         $a2, $zero, L_8020D044
    if (ctx->r6 == 0) {
        // 0x8020D014: sb          $t9, 0xC($v0)
        MEM_B(0XC, ctx->r2) = ctx->r25;
            goto L_8020D044;
    }
    // 0x8020D014: sb          $t9, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r25;
    // 0x8020D018: lbu         $t1, 0xD($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD);
    // 0x8020D01C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D020: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8020D024: bgez        $t1, L_8020D038
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020D028: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D038;
    }
    // 0x8020D028: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D02C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D030: nop

    // 0x8020D034: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_8020D038:
    // 0x8020D038: mul.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x8020D03C: b           L_8020D070
    // 0x8020D040: add.s       $f0, $f6, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f24.fl;
        goto L_8020D070;
    // 0x8020D040: add.s       $f0, $f6, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f24.fl;
L_8020D044:
    // 0x8020D044: lbu         $t2, 0xD($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XD);
    // 0x8020D048: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D04C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8020D050: bgez        $t2, L_8020D064
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8020D054: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D064;
    }
    // 0x8020D054: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D058: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D05C: nop

    // 0x8020D060: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_8020D064:
    // 0x8020D064: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8020D068: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8020D06C: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D070:
    // 0x8020D070: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D074: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D078: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D07C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D080: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D084: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D088: nop

    // 0x8020D08C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D090: beql        $t4, $zero, L_8020D0E0
    if (ctx->r12 == 0) {
        // 0x8020D094: mfc1        $t4, $f10
        ctx->r12 = (int32_t)ctx->f10.u32l;
            goto L_8020D0E0;
    }
    goto skip_1;
    // 0x8020D094: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x8020D098: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D09C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020D0A0: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8020D0A4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D0A8: nop

    // 0x8020D0AC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020D0B0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D0B4: nop

    // 0x8020D0B8: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D0BC: bne         $t4, $zero, L_8020D0D4
    if (ctx->r12 != 0) {
        // 0x8020D0C0: nop
    
            goto L_8020D0D4;
    }
    // 0x8020D0C0: nop

    // 0x8020D0C4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x8020D0C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D0CC: b           L_8020D0EC
    // 0x8020D0D0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020D0EC;
    // 0x8020D0D0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020D0D4:
    // 0x8020D0D4: b           L_8020D0EC
    // 0x8020D0D8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020D0EC;
    // 0x8020D0D8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020D0DC: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
L_8020D0E0:
    // 0x8020D0E0: nop

    // 0x8020D0E4: bltz        $t4, L_8020D0D4
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020D0E8: nop
    
            goto L_8020D0D4;
    }
    // 0x8020D0E8: nop

L_8020D0EC:
    // 0x8020D0EC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D0F0: beq         $a2, $zero, L_8020D124
    if (ctx->r6 == 0) {
        // 0x8020D0F4: sb          $t4, 0xD($v0)
        MEM_B(0XD, ctx->r2) = ctx->r12;
            goto L_8020D124;
    }
    // 0x8020D0F4: sb          $t4, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r12;
    // 0x8020D0F8: lbu         $t5, 0xE($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XE);
    // 0x8020D0FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D100: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8020D104: bgez        $t5, L_8020D118
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8020D108: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D118;
    }
    // 0x8020D108: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D10C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D110: nop

    // 0x8020D114: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D118:
    // 0x8020D118: mul.s       $f10, $f20, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x8020D11C: b           L_8020D150
    // 0x8020D120: add.s       $f0, $f10, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f28.fl;
        goto L_8020D150;
    // 0x8020D120: add.s       $f0, $f10, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f28.fl;
L_8020D124:
    // 0x8020D124: lbu         $t6, 0xE($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XE);
    // 0x8020D128: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D12C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8020D130: bgez        $t6, L_8020D144
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020D134: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D144;
    }
    // 0x8020D134: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D138: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D13C: nop

    // 0x8020D140: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8020D144:
    // 0x8020D144: mul.s       $f10, $f26, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f26.fl, ctx->f8.fl);
    // 0x8020D148: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8020D14C: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
L_8020D150:
    // 0x8020D150: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020D154: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8020D15C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D160: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D164: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D168: nop

    // 0x8020D16C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D170: beql        $t8, $zero, L_8020D1C0
    if (ctx->r24 == 0) {
        // 0x8020D174: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_8020D1C0;
    }
    goto skip_2;
    // 0x8020D174: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x8020D178: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D17C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D180: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8020D184: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D188: nop

    // 0x8020D18C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020D190: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D194: nop

    // 0x8020D198: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D19C: bne         $t8, $zero, L_8020D1B4
    if (ctx->r24 != 0) {
        // 0x8020D1A0: nop
    
            goto L_8020D1B4;
    }
    // 0x8020D1A0: nop

    // 0x8020D1A4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8020D1A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D1AC: b           L_8020D1CC
    // 0x8020D1B0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020D1CC;
    // 0x8020D1B0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020D1B4:
    // 0x8020D1B4: b           L_8020D1CC
    // 0x8020D1B8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020D1CC;
    // 0x8020D1B8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020D1BC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_8020D1C0:
    // 0x8020D1C0: nop

    // 0x8020D1C4: bltz        $t8, L_8020D1B4
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020D1C8: nop
    
            goto L_8020D1B4;
    }
    // 0x8020D1C8: nop

L_8020D1CC:
    // 0x8020D1CC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020D1D0: beq         $v0, $a1, L_8020D720
    if (ctx->r2 == ctx->r5) {
        // 0x8020D1D4: sb          $t8, 0xE($v1)
        MEM_B(0XE, ctx->r3) = ctx->r24;
            goto L_8020D720;
    }
    // 0x8020D1D4: sb          $t8, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r24;
L_8020D1D8:
    // 0x8020D1D8: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x8020D1DC: addu        $a2, $t9, $a0
    ctx->r6 = ADD32(ctx->r25, ctx->r4);
    // 0x8020D1E0: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x8020D1E4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020D1E8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D1EC: beql        $v1, $zero, L_8020D224
    if (ctx->r3 == 0) {
        // 0x8020D1F0: lbu         $t2, 0xC($a2)
        ctx->r10 = MEM_BU(ctx->r6, 0XC);
            goto L_8020D224;
    }
    goto skip_3;
    // 0x8020D1F0: lbu         $t2, 0xC($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0XC);
    skip_3:
    // 0x8020D1F4: lbu         $t1, 0xC($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XC);
    // 0x8020D1F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D1FC: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8020D200: bgez        $t1, L_8020D214
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020D204: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D214;
    }
    // 0x8020D204: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D208: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D20C: nop

    // 0x8020D210: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_8020D214:
    // 0x8020D214: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8020D218: b           L_8020D248
    // 0x8020D21C: add.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f22.fl;
        goto L_8020D248;
    // 0x8020D21C: add.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x8020D220: lbu         $t2, 0xC($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0XC);
L_8020D224:
    // 0x8020D224: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D228: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8020D22C: bgez        $t2, L_8020D240
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8020D230: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D240;
    }
    // 0x8020D230: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D234: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D238: nop

    // 0x8020D23C: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_8020D240:
    // 0x8020D240: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8020D244: add.s       $f0, $f6, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f30.fl;
L_8020D248:
    // 0x8020D248: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D24C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D250: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D254: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D258: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D25C: nop

    // 0x8020D260: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D264: beql        $t4, $zero, L_8020D2B4
    if (ctx->r12 == 0) {
        // 0x8020D268: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_8020D2B4;
    }
    goto skip_4;
    // 0x8020D268: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_4:
    // 0x8020D26C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D270: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020D274: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8020D278: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8020D27C: nop

    // 0x8020D280: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020D284: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8020D288: nop

    // 0x8020D28C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x8020D290: bne         $t4, $zero, L_8020D2A8
    if (ctx->r12 != 0) {
        // 0x8020D294: nop
    
            goto L_8020D2A8;
    }
    // 0x8020D294: nop

    // 0x8020D298: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8020D29C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D2A0: b           L_8020D2C0
    // 0x8020D2A4: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_8020D2C0;
    // 0x8020D2A4: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_8020D2A8:
    // 0x8020D2A8: b           L_8020D2C0
    // 0x8020D2AC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_8020D2C0;
    // 0x8020D2AC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8020D2B0: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_8020D2B4:
    // 0x8020D2B4: nop

    // 0x8020D2B8: bltz        $t4, L_8020D2A8
    if (SIGNED(ctx->r12) < 0) {
        // 0x8020D2BC: nop
    
            goto L_8020D2A8;
    }
    // 0x8020D2BC: nop

L_8020D2C0:
    // 0x8020D2C0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D2C4: beq         $v1, $zero, L_8020D2F8
    if (ctx->r3 == 0) {
        // 0x8020D2C8: sb          $t4, 0xC($a2)
        MEM_B(0XC, ctx->r6) = ctx->r12;
            goto L_8020D2F8;
    }
    // 0x8020D2C8: sb          $t4, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r12;
    // 0x8020D2CC: lbu         $t5, 0xD($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0XD);
    // 0x8020D2D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D2D4: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8020D2D8: bgez        $t5, L_8020D2EC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8020D2DC: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020D2EC;
    }
    // 0x8020D2DC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D2E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D2E4: nop

    // 0x8020D2E8: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_8020D2EC:
    // 0x8020D2EC: mul.s       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x8020D2F0: b           L_8020D324
    // 0x8020D2F4: add.s       $f0, $f8, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f24.fl;
        goto L_8020D324;
    // 0x8020D2F4: add.s       $f0, $f8, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f24.fl;
L_8020D2F8:
    // 0x8020D2F8: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
    // 0x8020D2FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D300: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8020D304: bgez        $t6, L_8020D318
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020D308: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020D318;
    }
    // 0x8020D308: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D30C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D310: nop

    // 0x8020D314: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_8020D318:
    // 0x8020D318: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8020D31C: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8020D320: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
L_8020D324:
    // 0x8020D324: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020D328: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D32C: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x8020D330: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x8020D334: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D338: addu        $a3, $t5, $a0
    ctx->r7 = ADD32(ctx->r13, ctx->r4);
    // 0x8020D33C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8020D340: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D344: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D348: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020D34C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D350: beql        $t8, $zero, L_8020D3A0
    if (ctx->r24 == 0) {
        // 0x8020D354: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_8020D3A0;
    }
    goto skip_5;
    // 0x8020D354: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_5:
    // 0x8020D358: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D35C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D360: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8020D364: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D368: nop

    // 0x8020D36C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020D370: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D374: nop

    // 0x8020D378: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D37C: bne         $t8, $zero, L_8020D394
    if (ctx->r24 != 0) {
        // 0x8020D380: nop
    
            goto L_8020D394;
    }
    // 0x8020D380: nop

    // 0x8020D384: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8020D388: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D38C: b           L_8020D3AC
    // 0x8020D390: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020D3AC;
    // 0x8020D390: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020D394:
    // 0x8020D394: b           L_8020D3AC
    // 0x8020D398: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020D3AC;
    // 0x8020D398: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020D39C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_8020D3A0:
    // 0x8020D3A0: nop

    // 0x8020D3A4: bltz        $t8, L_8020D394
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020D3A8: nop
    
            goto L_8020D394;
    }
    // 0x8020D3A8: nop

L_8020D3AC:
    // 0x8020D3AC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020D3B0: beq         $v1, $zero, L_8020D3E4
    if (ctx->r3 == 0) {
        // 0x8020D3B4: sb          $t8, 0xD($a2)
        MEM_B(0XD, ctx->r6) = ctx->r24;
            goto L_8020D3E4;
    }
    // 0x8020D3B4: sb          $t8, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r24;
    // 0x8020D3B8: lbu         $t9, 0xE($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XE);
    // 0x8020D3BC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D3C0: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8020D3C4: bgez        $t9, L_8020D3D8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8020D3C8: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020D3D8;
    }
    // 0x8020D3C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020D3CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D3D0: nop

    // 0x8020D3D4: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8020D3D8:
    // 0x8020D3D8: mul.s       $f4, $f20, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x8020D3DC: b           L_8020D410
    // 0x8020D3E0: add.s       $f0, $f4, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f28.fl;
        goto L_8020D410;
    // 0x8020D3E0: add.s       $f0, $f4, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f28.fl;
L_8020D3E4:
    // 0x8020D3E4: lbu         $t1, 0xE($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XE);
    // 0x8020D3E8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D3EC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8020D3F0: bgez        $t1, L_8020D404
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020D3F4: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8020D404;
    }
    // 0x8020D3F4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8020D3F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D3FC: nop

    // 0x8020D400: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_8020D404:
    // 0x8020D404: mul.s       $f4, $f26, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f10.fl);
    // 0x8020D408: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8020D40C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
L_8020D410:
    // 0x8020D410: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020D414: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D418: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D41C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D420: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D424: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D428: nop

    // 0x8020D42C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020D430: beql        $t3, $zero, L_8020D480
    if (ctx->r11 == 0) {
        // 0x8020D434: mfc1        $t3, $f8
        ctx->r11 = (int32_t)ctx->f8.u32l;
            goto L_8020D480;
    }
    goto skip_6;
    // 0x8020D434: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    skip_6:
    // 0x8020D438: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D43C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020D440: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8020D444: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D448: nop

    // 0x8020D44C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8020D450: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D454: nop

    // 0x8020D458: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020D45C: bne         $t3, $zero, L_8020D474
    if (ctx->r11 != 0) {
        // 0x8020D460: nop
    
            goto L_8020D474;
    }
    // 0x8020D460: nop

    // 0x8020D464: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x8020D468: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D46C: b           L_8020D48C
    // 0x8020D470: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8020D48C;
    // 0x8020D470: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8020D474:
    // 0x8020D474: b           L_8020D48C
    // 0x8020D478: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8020D48C;
    // 0x8020D478: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8020D47C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
L_8020D480:
    // 0x8020D480: nop

    // 0x8020D484: bltz        $t3, L_8020D474
    if (SIGNED(ctx->r11) < 0) {
        // 0x8020D488: nop
    
            goto L_8020D474;
    }
    // 0x8020D488: nop

L_8020D48C:
    // 0x8020D48C: sb          $t3, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r11;
    // 0x8020D490: lbu         $t6, 0xC($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0XC);
    // 0x8020D494: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020D498: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020D49C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8020D4A0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x8020D4A4: bgez        $t6, L_8020D4BC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020D4A8: cvt.s.w     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8020D4BC;
    }
    // 0x8020D4A8: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8020D4AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D4B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D4B4: nop

    // 0x8020D4B8: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
L_8020D4BC:
    // 0x8020D4BC: lhu         $t0, 0x6($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X6);
    // 0x8020D4C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D4C4: beq         $t0, $zero, L_8020D4D8
    if (ctx->r8 == 0) {
        // 0x8020D4C8: nop
    
            goto L_8020D4D8;
    }
    // 0x8020D4C8: nop

    // 0x8020D4CC: mul.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8020D4D0: b           L_8020D4E0
    // 0x8020D4D4: add.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f22.fl;
        goto L_8020D4E0;
    // 0x8020D4D4: add.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f22.fl;
L_8020D4D8:
    // 0x8020D4D8: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8020D4DC: add.s       $f0, $f8, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f30.fl;
L_8020D4E0:
    // 0x8020D4E0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020D4E4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D4E8: nop

    // 0x8020D4EC: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D4F0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D4F4: nop

    // 0x8020D4F8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D4FC: beql        $t8, $zero, L_8020D54C
    if (ctx->r24 == 0) {
        // 0x8020D500: mfc1        $t8, $f10
        ctx->r24 = (int32_t)ctx->f10.u32l;
            goto L_8020D54C;
    }
    goto skip_7;
    // 0x8020D500: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    skip_7:
    // 0x8020D504: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D508: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020D50C: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8020D510: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8020D514: nop

    // 0x8020D518: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020D51C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8020D520: nop

    // 0x8020D524: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020D528: bne         $t8, $zero, L_8020D540
    if (ctx->r24 != 0) {
        // 0x8020D52C: nop
    
            goto L_8020D540;
    }
    // 0x8020D52C: nop

    // 0x8020D530: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8020D534: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D538: b           L_8020D558
    // 0x8020D53C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8020D558;
    // 0x8020D53C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8020D540:
    // 0x8020D540: b           L_8020D558
    // 0x8020D544: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8020D558;
    // 0x8020D544: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8020D548: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
L_8020D54C:
    // 0x8020D54C: nop

    // 0x8020D550: bltz        $t8, L_8020D540
    if (SIGNED(ctx->r24) < 0) {
        // 0x8020D554: nop
    
            goto L_8020D540;
    }
    // 0x8020D554: nop

L_8020D558:
    // 0x8020D558: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020D55C: beq         $t0, $zero, L_8020D590
    if (ctx->r8 == 0) {
        // 0x8020D560: sb          $t8, 0xC($a3)
        MEM_B(0XC, ctx->r7) = ctx->r24;
            goto L_8020D590;
    }
    // 0x8020D560: sb          $t8, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r24;
    // 0x8020D564: lbu         $t9, 0xD($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0XD);
    // 0x8020D568: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D56C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8020D570: bgez        $t9, L_8020D584
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8020D574: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D584;
    }
    // 0x8020D574: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D578: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020D57C: nop

    // 0x8020D580: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D584:
    // 0x8020D584: mul.s       $f10, $f14, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x8020D588: b           L_8020D5BC
    // 0x8020D58C: add.s       $f0, $f10, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f24.fl;
        goto L_8020D5BC;
    // 0x8020D58C: add.s       $f0, $f10, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f24.fl;
L_8020D590:
    // 0x8020D590: lbu         $t1, 0xD($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0XD);
    // 0x8020D594: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D598: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8020D59C: bgez        $t1, L_8020D5B0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8020D5A0: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8020D5B0;
    }
    // 0x8020D5A0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020D5A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D5A8: nop

    // 0x8020D5AC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8020D5B0:
    // 0x8020D5B0: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8020D5B4: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8020D5B8: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
L_8020D5BC:
    // 0x8020D5BC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8020D5C0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D5C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020D5C8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D5CC: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D5D0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D5D4: nop

    // 0x8020D5D8: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020D5DC: beql        $t3, $zero, L_8020D62C
    if (ctx->r11 == 0) {
        // 0x8020D5E0: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_8020D62C;
    }
    goto skip_8;
    // 0x8020D5E0: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_8:
    // 0x8020D5E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020D5E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020D5EC: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8020D5F0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8020D5F4: nop

    // 0x8020D5F8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8020D5FC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8020D600: nop

    // 0x8020D604: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8020D608: bne         $t3, $zero, L_8020D620
    if (ctx->r11 != 0) {
        // 0x8020D60C: nop
    
            goto L_8020D620;
    }
    // 0x8020D60C: nop

    // 0x8020D610: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8020D614: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D618: b           L_8020D638
    // 0x8020D61C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8020D638;
    // 0x8020D61C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8020D620:
    // 0x8020D620: b           L_8020D638
    // 0x8020D624: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8020D638;
    // 0x8020D624: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8020D628: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_8020D62C:
    // 0x8020D62C: nop

    // 0x8020D630: bltz        $t3, L_8020D620
    if (SIGNED(ctx->r11) < 0) {
        // 0x8020D634: nop
    
            goto L_8020D620;
    }
    // 0x8020D634: nop

L_8020D638:
    // 0x8020D638: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8020D63C: beq         $t0, $zero, L_8020D670
    if (ctx->r8 == 0) {
        // 0x8020D640: sb          $t3, 0xD($a3)
        MEM_B(0XD, ctx->r7) = ctx->r11;
            goto L_8020D670;
    }
    // 0x8020D640: sb          $t3, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r11;
    // 0x8020D644: lbu         $t4, 0xE($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0XE);
    // 0x8020D648: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D64C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8020D650: bgez        $t4, L_8020D664
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8020D654: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D664;
    }
    // 0x8020D654: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D658: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D65C: nop

    // 0x8020D660: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_8020D664:
    // 0x8020D664: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8020D668: b           L_8020D69C
    // 0x8020D66C: add.s       $f0, $f6, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f28.fl;
        goto L_8020D69C;
    // 0x8020D66C: add.s       $f0, $f6, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f28.fl;
L_8020D670:
    // 0x8020D670: lbu         $t5, 0xE($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0XE);
    // 0x8020D674: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8020D678: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8020D67C: bgez        $t5, L_8020D690
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8020D680: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8020D690;
    }
    // 0x8020D680: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8020D684: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D688: nop

    // 0x8020D68C: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_8020D690:
    // 0x8020D690: mul.s       $f6, $f26, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f4.fl);
    // 0x8020D694: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8020D698: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
L_8020D69C:
    // 0x8020D69C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8020D6A0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020D6A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020D6A8: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8020D6AC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020D6B0: nop

    // 0x8020D6B4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020D6B8: beql        $t7, $zero, L_8020D708
    if (ctx->r15 == 0) {
        // 0x8020D6BC: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_8020D708;
    }
    goto skip_9;
    // 0x8020D6BC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_9:
    // 0x8020D6C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020D6C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020D6C8: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8020D6CC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020D6D0: nop

    // 0x8020D6D4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020D6D8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020D6DC: nop

    // 0x8020D6E0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8020D6E4: bne         $t7, $zero, L_8020D6FC
    if (ctx->r15 != 0) {
        // 0x8020D6E8: nop
    
            goto L_8020D6FC;
    }
    // 0x8020D6E8: nop

    // 0x8020D6EC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8020D6F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020D6F4: b           L_8020D714
    // 0x8020D6F8: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8020D714;
    // 0x8020D6F8: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8020D6FC:
    // 0x8020D6FC: b           L_8020D714
    // 0x8020D700: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8020D714;
    // 0x8020D700: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8020D704: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_8020D708:
    // 0x8020D708: nop

    // 0x8020D70C: bltz        $t7, L_8020D6FC
    if (SIGNED(ctx->r15) < 0) {
        // 0x8020D710: nop
    
            goto L_8020D6FC;
    }
    // 0x8020D710: nop

L_8020D714:
    // 0x8020D714: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8020D718: bne         $v0, $a1, L_8020D1D8
    if (ctx->r2 != ctx->r5) {
        // 0x8020D71C: sb          $t7, 0xE($v1)
        MEM_B(0XE, ctx->r3) = ctx->r15;
            goto L_8020D1D8;
    }
    // 0x8020D71C: sb          $t7, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r15;
L_8020D720:
    // 0x8020D720: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8020D724: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x8020D728: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x8020D72C: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x8020D730: ldc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X28);
    // 0x8020D734: ldc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X30);
    // 0x8020D738: jr          $ra
    // 0x8020D73C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8020D73C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void D_80294C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294CA0: jr          $ra
    // 0x80294CA4: lwc1        $f0, 0x154($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X154);
    return;
    // 0x80294CA4: lwc1        $f0, 0x154($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X154);
;}
RECOMP_FUNC void D_80211934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80211934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211938: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021193C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211940: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80211944: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80211948: swc1        $f12, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f12.u32l;
    // 0x8021194C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80211950: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80211954: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80211958: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8021195C: swc1        $f14, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f14.u32l;
    // 0x80211960: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80211964: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80211968: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8021196C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80211970: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80211974: bnel        $v1, $zero, L_80211994
    if (ctx->r3 != 0) {
        // 0x80211978: lwc1        $f4, 0x0($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
            goto L_80211994;
    }
    goto skip_0;
    // 0x80211978: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x8021197C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80211980: jal         0x80231A24
    // 0x80211984: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80211984: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80211988: b           L_80211AA8
    // 0x8021198C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80211AA8;
    // 0x8021198C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80211990: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
L_80211994:
    // 0x80211994: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80211998: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8021199C: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802119A0: lbu         $t0, 0x18($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X18);
    // 0x802119A4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802119A8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802119AC: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x802119B0: sub.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x802119B4: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x802119B8: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x802119BC: div         $zero, $t4, $t6
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r14)));
    // 0x802119C0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802119C4: mflo        $a1
    ctx->r5 = lo;
    // 0x802119C8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802119CC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x802119D0: bne         $t6, $zero, L_802119DC
    if (ctx->r14 != 0) {
        // 0x802119D4: nop
    
            goto L_802119DC;
    }
    // 0x802119D4: nop

    // 0x802119D8: break       7
    do_break(2149652952);
L_802119DC:
    // 0x802119DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802119E0: bne         $t6, $at, L_802119F4
    if (ctx->r14 != ctx->r1) {
        // 0x802119E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802119F4;
    }
    // 0x802119E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802119E8: bne         $t4, $at, L_802119F4
    if (ctx->r12 != ctx->r1) {
        // 0x802119EC: nop
    
            goto L_802119F4;
    }
    // 0x802119EC: nop

    // 0x802119F0: break       6
    do_break(2149652976);
L_802119F4:
    // 0x802119F4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x802119F8: nop

    // 0x802119FC: div         $zero, $t8, $t1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r9)));
    // 0x80211A00: bne         $t1, $zero, L_80211A0C
    if (ctx->r9 != 0) {
        // 0x80211A04: nop
    
            goto L_80211A0C;
    }
    // 0x80211A04: nop

    // 0x80211A08: break       7
    do_break(2149653000);
L_80211A0C:
    // 0x80211A0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80211A10: bne         $t1, $at, L_80211A24
    if (ctx->r9 != ctx->r1) {
        // 0x80211A14: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80211A24;
    }
    // 0x80211A14: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211A18: bne         $t8, $at, L_80211A24
    if (ctx->r24 != ctx->r1) {
        // 0x80211A1C: nop
    
            goto L_80211A24;
    }
    // 0x80211A1C: nop

    // 0x80211A20: break       6
    do_break(2149653024);
L_80211A24:
    // 0x80211A24: mflo        $a2
    ctx->r6 = lo;
    // 0x80211A28: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80211A2C: beq         $at, $zero, L_80211A54
    if (ctx->r1 == 0) {
        // 0x80211A30: nop
    
            goto L_80211A54;
    }
    // 0x80211A30: nop

    // 0x80211A34: bltz        $a1, L_80211A54
    if (SIGNED(ctx->r5) < 0) {
        // 0x80211A38: nop
    
            goto L_80211A54;
    }
    // 0x80211A38: nop

    // 0x80211A3C: lbu         $t2, 0x19($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X19);
    // 0x80211A40: slt         $at, $a2, $t2
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80211A44: beq         $at, $zero, L_80211A54
    if (ctx->r1 == 0) {
        // 0x80211A48: nop
    
            goto L_80211A54;
    }
    // 0x80211A48: nop

    // 0x80211A4C: bgez        $a2, L_80211A5C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80211A50: nop
    
            goto L_80211A5C;
    }
    // 0x80211A50: nop

L_80211A54:
    // 0x80211A54: b           L_80211AA8
    // 0x80211A58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80211AA8;
    // 0x80211A58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80211A5C:
    // 0x80211A5C: multu       $t0, $a2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80211A60: lw          $t5, 0x28($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X28);
    // 0x80211A64: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80211A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80211A6C: mflo        $t3
    ctx->r11 = lo;
    // 0x80211A70: addu        $a3, $t3, $a1
    ctx->r7 = ADD32(ctx->r11, ctx->r5);
    // 0x80211A74: sll         $a0, $a3, 2
    ctx->r4 = S32(ctx->r7 << 2);
    // 0x80211A78: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80211A7C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80211A80: subu        $a0, $a0, $a3
    ctx->r4 = SUB32(ctx->r4, ctx->r7);
    // 0x80211A84: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80211A88: addu        $t4, $t5, $a0
    ctx->r12 = ADD32(ctx->r13, ctx->r4);
    // 0x80211A8C: lwc1        $f16, 0x30($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X30);
    // 0x80211A90: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
    // 0x80211A94: lw          $t7, 0x28($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X28);
    // 0x80211A98: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80211A9C: addu        $t9, $t7, $a0
    ctx->r25 = ADD32(ctx->r15, ctx->r4);
    // 0x80211AA0: lwc1        $f18, 0x34($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X34);
    // 0x80211AA4: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
L_80211AA8:
    // 0x80211AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211AB0: jr          $ra
    // 0x80211AB4: nop

    return;
    // 0x80211AB4: nop

;}
RECOMP_FUNC void D_802E6884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6904: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E6908: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802E690C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802E6910: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802E6914: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802E6918: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    // 0x802E691C: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x802E6920: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x802E6924: sb          $zero, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = 0;
    // 0x802E6928: sb          $zero, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = 0;
    // 0x802E692C: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x802E6930: sh          $zero, 0x60($a0)
    MEM_H(0X60, ctx->r4) = 0;
    // 0x802E6934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802E6938: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802E693C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802E6940: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802E6944: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802E6948: swc1        $f0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f0.u32l;
    // 0x802E694C: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    // 0x802E6950: swc1        $f0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f0.u32l;
    // 0x802E6954: swc1        $f0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f0.u32l;
    // 0x802E6958: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802E695C: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x802E6960: swc1        $f0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f0.u32l;
    // 0x802E6964: swc1        $f0, 0x11C($a0)
    MEM_W(0X11C, ctx->r4) = ctx->f0.u32l;
    // 0x802E6968: swc1        $f4, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f4.u32l;
    // 0x802E696C: swc1        $f6, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->f6.u32l;
L_802E6970:
    // 0x802E6970: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802E6974: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x802E6978: swc1        $f0, 0x120($v1)
    MEM_W(0X120, ctx->r3) = ctx->f0.u32l;
    // 0x802E697C: bne         $at, $zero, L_802E6970
    if (ctx->r1 != 0) {
        // 0x802E6980: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_802E6970;
    }
    // 0x802E6980: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802E6984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802E6988: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_802E698C:
    // 0x802E698C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802E6990: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x802E6994: swc1        $f0, 0x148($v1)
    MEM_W(0X148, ctx->r3) = ctx->f0.u32l;
    // 0x802E6998: bne         $at, $zero, L_802E698C
    if (ctx->r1 != 0) {
        // 0x802E699C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_802E698C;
    }
    // 0x802E699C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802E69A0: swc1        $f0, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f0.u32l;
    // 0x802E69A4: swc1        $f0, 0x174($a0)
    MEM_W(0X174, ctx->r4) = ctx->f0.u32l;
    // 0x802E69A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802E69AC: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x802E69B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_802E69B4:
    // 0x802E69B4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802E69B8: swc1        $f0, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f0.u32l;
    // 0x802E69BC: swc1        $f0, 0x174($v1)
    MEM_W(0X174, ctx->r3) = ctx->f0.u32l;
    // 0x802E69C0: swc1        $f0, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f0.u32l;
    // 0x802E69C4: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x802E69C8: bne         $v0, $a1, L_802E69B4
    if (ctx->r2 != ctx->r5) {
        // 0x802E69CC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_802E69B4;
    }
    // 0x802E69CC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x802E69D0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802E69D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802E69D8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802E69DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802E69E0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802E69E4: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x802E69E8: sw          $zero, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = 0;
    // 0x802E69EC: sb          $zero, 0xF8($a0)
    MEM_B(0XF8, ctx->r4) = 0;
    // 0x802E69F0: sb          $zero, 0xF9($a0)
    MEM_B(0XF9, ctx->r4) = 0;
    // 0x802E69F4: sb          $zero, 0xFA($a0)
    MEM_B(0XFA, ctx->r4) = 0;
    // 0x802E69F8: sb          $zero, 0x104($a0)
    MEM_B(0X104, ctx->r4) = 0;
    // 0x802E69FC: sb          $zero, 0x19B($a0)
    MEM_B(0X19B, ctx->r4) = 0;
    // 0x802E6A00: sb          $zero, 0x19C($a0)
    MEM_B(0X19C, ctx->r4) = 0;
    // 0x802E6A04: sb          $v0, 0xB8($a0)
    MEM_B(0XB8, ctx->r4) = ctx->r2;
    // 0x802E6A08: sb          $v0, 0xB9($a0)
    MEM_B(0XB9, ctx->r4) = ctx->r2;
    // 0x802E6A0C: sb          $zero, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = 0;
    // 0x802E6A10: sb          $zero, 0x24($a0)
    MEM_B(0X24, ctx->r4) = 0;
    // 0x802E6A14: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x802E6A18: sw          $zero, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = 0;
    // 0x802E6A1C: swc1        $f8, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->f8.u32l;
    // 0x802E6A20: jr          $ra
    // 0x802E6A24: swc1        $f10, 0x108($a0)
    MEM_W(0X108, ctx->r4) = ctx->f10.u32l;
    return;
    // 0x802E6A24: swc1        $f10, 0x108($a0)
    MEM_W(0X108, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void D_802C1FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C202C: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x802C2030: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802C2034: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802C2038: addiu       $s4, $sp, 0xA8
    ctx->r20 = ADD32(ctx->r29, 0XA8);
    // 0x802C203C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802C2040: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802C2044: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802C2048: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802C204C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802C2050: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802C2054: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802C2058: addiu       $t9, $t6, 0x78
    ctx->r25 = ADD32(ctx->r14, 0X78);
    // 0x802C205C: or          $t0, $s4, $zero
    ctx->r8 = ctx->r20 | 0;
L_802C2060:
    // 0x802C2060: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802C2064: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802C2068: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x802C206C: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x802C2070: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x802C2074: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x802C2078: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x802C207C: bne         $t6, $t9, L_802C2060
    if (ctx->r14 != ctx->r25) {
        // 0x802C2080: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_802C2060;
    }
    // 0x802C2080: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x802C2084: lh          $t1, 0x110($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X110);
    // 0x802C2088: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802C208C: addiu       $t2, $t1, -0x3
    ctx->r10 = ADD32(ctx->r9, -0X3);
    // 0x802C2090: jal         0x802EE050
    // 0x802C2094: sh          $t2, 0x12A($s2)
    MEM_H(0X12A, ctx->r18) = ctx->r10;
    static_3_802EE050(rdram, ctx);
        goto after_0;
    // 0x802C2094: sh          $t2, 0x12A($s2)
    MEM_H(0X12A, ctx->r18) = ctx->r10;
    after_0:
    // 0x802C2098: jal         0x8022331C
    // 0x802C209C: nop

    static_3_8022331C(rdram, ctx);
        goto after_1;
    // 0x802C209C: nop

    after_1:
    // 0x802C20A0: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
    // 0x802C20A4: jal         0x8022970C
    // 0x802C20A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802C20A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802C20AC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802C20B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802C20B4: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802C20B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802C20BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802C20C0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802C20C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802C20C8: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802C20CC: jal         0x8022A848
    // 0x802C20D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_3;
    // 0x802C20D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x802C20D4: jal         0x80221B2C
    // 0x802C20D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80221B2C(rdram, ctx);
        goto after_4;
    // 0x802C20D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802C20DC: jal         0x8022970C
    // 0x802C20E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x802C20E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802C20E4: jal         0x8022149C
    // 0x802C20E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022149C(rdram, ctx);
        goto after_6;
    // 0x802C20E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802C20EC: jal         0x802233EC
    // 0x802C20F0: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_7;
    // 0x802C20F0: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    after_7:
    // 0x802C20F4: jal         0x8021F4E4
    // 0x802C20F8: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_8;
    // 0x802C20F8: nop

    after_8:
    // 0x802C20FC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802C2100: addiu       $t4, $zero, 0xCA
    ctx->r12 = ADD32(0, 0XCA);
    // 0x802C2104: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x802C2108: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802C210C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802C2110: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802C2114: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802C2118: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802C211C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C2120: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802C2124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2128: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C212C: jal         0x8021F35C
    // 0x802C2130: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802C2130: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x802C2134: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802C2138: addiu       $t9, $zero, 0xCA
    ctx->r25 = ADD32(0, 0XCA);
    // 0x802C213C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802C2140: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802C2144: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x802C2148: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802C214C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802C2150: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802C2154: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802C2158: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802C215C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2160: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802C2164: jal         0x8021F35C
    // 0x802C2168: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802C2168: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x802C216C: addiu       $t1, $zero, 0x1E0
    ctx->r9 = ADD32(0, 0X1E0);
    // 0x802C2170: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x802C2174: addiu       $t3, $zero, 0xCA
    ctx->r11 = ADD32(0, 0XCA);
    // 0x802C2178: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x802C217C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802C2180: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802C2184: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802C2188: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802C218C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802C2190: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802C2194: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802C2198: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802C219C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C21A0: jal         0x8021F35C
    // 0x802C21A4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802C21A4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_11:
    // 0x802C21A8: addiu       $t8, $zero, 0x1E0
    ctx->r24 = ADD32(0, 0X1E0);
    // 0x802C21AC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802C21B0: addiu       $t9, $zero, 0xCA
    ctx->r25 = ADD32(0, 0XCA);
    // 0x802C21B4: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802C21B8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802C21BC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x802C21C0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802C21C4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802C21C8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802C21CC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802C21D0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C21D4: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    // 0x802C21D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C21DC: jal         0x8021F35C
    // 0x802C21E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x802C21E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x802C21E4: jal         0x8021FCD0
    // 0x802C21E8: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_13;
    // 0x802C21E8: nop

    after_13:
    // 0x802C21EC: jal         0x8021F4E4
    // 0x802C21F0: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_14;
    // 0x802C21F0: nop

    after_14:
    // 0x802C21F4: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802C21F8: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802C21FC: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802C2200: addiu       $t4, $zero, 0x96
    ctx->r12 = ADD32(0, 0X96);
    // 0x802C2204: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802C2208: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802C220C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802C2210: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802C2214: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C2218: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    // 0x802C221C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2220: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C2224: jal         0x8021F35C
    // 0x802C2228: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x802C2228: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x802C222C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802C2230: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802C2234: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802C2238: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802C223C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802C2240: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802C2244: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802C2248: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802C224C: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    // 0x802C2250: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    // 0x802C2254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2258: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C225C: jal         0x8021F35C
    // 0x802C2260: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802C2260: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x802C2264: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802C2268: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802C226C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802C2270: addiu       $t2, $zero, 0x96
    ctx->r10 = ADD32(0, 0X96);
    // 0x802C2274: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x802C2278: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802C227C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802C2280: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802C2284: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    // 0x802C2288: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    // 0x802C228C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2290: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C2294: jal         0x8021F35C
    // 0x802C2298: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x802C2298: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x802C229C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802C22A0: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802C22A4: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802C22A8: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x802C22AC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802C22B0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802C22B4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802C22B8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802C22BC: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x802C22C0: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    // 0x802C22C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C22C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C22CC: jal         0x8021F35C
    // 0x802C22D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_18;
    // 0x802C22D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x802C22D4: jal         0x8021FCD0
    // 0x802C22D8: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_19;
    // 0x802C22D8: nop

    after_19:
    // 0x802C22DC: jal         0x8021F4E4
    // 0x802C22E0: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_20;
    // 0x802C22E0: nop

    after_20:
    // 0x802C22E4: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802C22E8: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802C22EC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802C22F0: addiu       $t0, $zero, 0x96
    ctx->r8 = ADD32(0, 0X96);
    // 0x802C22F4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x802C22F8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802C22FC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802C2300: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802C2304: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    // 0x802C2308: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    // 0x802C230C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2310: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C2314: jal         0x8021F35C
    // 0x802C2318: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_21;
    // 0x802C2318: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_21:
    // 0x802C231C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802C2320: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802C2324: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802C2328: addiu       $t4, $zero, 0x96
    ctx->r12 = ADD32(0, 0X96);
    // 0x802C232C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802C2330: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802C2334: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802C2338: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802C233C: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802C2340: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    // 0x802C2344: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2348: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C234C: jal         0x8021F35C
    // 0x802C2350: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_22;
    // 0x802C2350: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_22:
    // 0x802C2354: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802C2358: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802C235C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802C2360: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802C2364: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802C2368: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802C236C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802C2370: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802C2374: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802C2378: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    // 0x802C237C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2380: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C2384: jal         0x8021F35C
    // 0x802C2388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_23;
    // 0x802C2388: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
    // 0x802C238C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802C2390: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802C2394: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802C2398: addiu       $t2, $zero, 0x96
    ctx->r10 = ADD32(0, 0X96);
    // 0x802C239C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x802C23A0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802C23A4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802C23A8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802C23AC: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    // 0x802C23B0: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    // 0x802C23B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C23B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C23BC: jal         0x8021F35C
    // 0x802C23C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_24;
    // 0x802C23C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_24:
    // 0x802C23C4: jal         0x8021FCD0
    // 0x802C23C8: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_25;
    // 0x802C23C8: nop

    after_25:
    // 0x802C23CC: jal         0x8021F4E4
    // 0x802C23D0: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_26;
    // 0x802C23D0: nop

    after_26:
    // 0x802C23D4: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802C23D8: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802C23DC: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802C23E0: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x802C23E4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802C23E8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802C23EC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802C23F0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802C23F4: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    // 0x802C23F8: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    // 0x802C23FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2400: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C2404: jal         0x8021F35C
    // 0x802C2408: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_27;
    // 0x802C2408: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_27:
    // 0x802C240C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802C2410: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802C2414: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802C2418: addiu       $t0, $zero, 0x96
    ctx->r8 = ADD32(0, 0X96);
    // 0x802C241C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x802C2420: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802C2424: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802C2428: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802C242C: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802C2430: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    // 0x802C2434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2438: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C243C: jal         0x8021F35C
    // 0x802C2440: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_28;
    // 0x802C2440: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_28:
    // 0x802C2444: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x802C2448: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802C244C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802C2450: addiu       $t4, $zero, 0x96
    ctx->r12 = ADD32(0, 0X96);
    // 0x802C2454: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802C2458: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802C245C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802C2460: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802C2464: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    // 0x802C2468: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    // 0x802C246C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C2470: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C2474: jal         0x8021F35C
    // 0x802C2478: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_29;
    // 0x802C2478: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_29:
    // 0x802C247C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x802C2480: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802C2484: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802C2488: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802C248C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802C2490: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802C2494: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802C2498: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802C249C: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    // 0x802C24A0: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    // 0x802C24A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C24A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802C24AC: jal         0x8021F35C
    // 0x802C24B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_30;
    // 0x802C24B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_30:
    // 0x802C24B4: jal         0x8021FCD0
    // 0x802C24B8: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_31;
    // 0x802C24B8: nop

    after_31:
    // 0x802C24BC: jal         0x802230E4
    // 0x802C24C0: nop

    static_3_802230E4(rdram, ctx);
        goto after_32;
    // 0x802C24C0: nop

    after_32:
    // 0x802C24C4: jal         0x8022337C
    // 0x802C24C8: nop

    static_3_8022337C(rdram, ctx);
        goto after_33;
    // 0x802C24C8: nop

    after_33:
    // 0x802C24CC: jal         0x8021E66C
    // 0x802C24D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_34;
    // 0x802C24D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_34:
    // 0x802C24D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C24D8: ldc1        $f12, 0x0($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, 0X0);
    // 0x802C24DC: jal         0x8021E6EC
    // 0x802C24E0: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    func_8021E6EC(rdram, ctx);
        goto after_35;
    // 0x802C24E0: mov.d       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.d = ctx->f12.d;
    after_35:
    // 0x802C24E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802C24E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802C24EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802C24F0: jal         0x8021E708
    // 0x802C24F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_36;
    // 0x802C24F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_36:
    // 0x802C24F8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C24FC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C2500: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    // 0x802C2504: jal         0x8021E87C
    // 0x802C2508: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    static_3_8021E87C(rdram, ctx);
        goto after_37;
    // 0x802C2508: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_37:
    // 0x802C250C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802C2510: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802C2514: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802C2518: jal         0x8021E87C
    // 0x802C251C: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    static_3_8021E87C(rdram, ctx);
        goto after_38;
    // 0x802C251C: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_38:
    // 0x802C2520: jal         0x8021EC9C
    // 0x802C2524: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_39;
    // 0x802C2524: nop

    after_39:
    // 0x802C2528: jal         0x8021E66C
    // 0x802C252C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_40;
    // 0x802C252C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_40:
    // 0x802C2530: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C2534: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C2538: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C253C: jal         0x8021E708
    // 0x802C2540: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_41;
    // 0x802C2540: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_41:
    // 0x802C2544: sh          $zero, 0x12A($s2)
    MEM_H(0X12A, ctx->r18) = 0;
    // 0x802C2548: addiu       $s1, $zero, 0xAA
    ctx->r17 = ADD32(0, 0XAA);
    // 0x802C254C: addiu       $s3, $zero, 0x118
    ctx->r19 = ADD32(0, 0X118);
    // 0x802C2550: addiu       $s0, $zero, 0xA0
    ctx->r16 = ADD32(0, 0XA0);
L_802C2554:
    // 0x802C2554: lh          $v0, 0x12A($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X12A);
L_802C2558:
    // 0x802C2558: lh          $t6, 0x110($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X110);
    // 0x802C255C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C2560: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802C2564: bne         $v0, $t6, L_802C2578
    if (ctx->r2 != ctx->r14) {
        // 0x802C2568: addiu       $a2, $zero, 0x7
        ctx->r6 = ADD32(0, 0X7);
            goto L_802C2578;
    }
    // 0x802C2568: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802C256C: jal         0x8021E708
    // 0x802C2570: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_42;
    // 0x802C2570: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_42:
    // 0x802C2574: lh          $v0, 0x12A($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X12A);
L_802C2578:
    // 0x802C2578: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x802C257C: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x802C2580: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x802C2584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802C2588: jal         0x8021E87C
    // 0x802C258C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_43;
    // 0x802C258C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_43:
    // 0x802C2590: lh          $t2, 0x12A($s2)
    ctx->r10 = MEM_H(ctx->r18, 0X12A);
    // 0x802C2594: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C2598: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802C259C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802C25A0: sh          $t3, 0x12A($s2)
    MEM_H(0X12A, ctx->r18) = ctx->r11;
    // 0x802C25A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802C25A8: jal         0x8021E708
    // 0x802C25AC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_44;
    // 0x802C25AC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_44:
    // 0x802C25B0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x802C25B4: bnel        $s0, $s3, L_802C2558
    if (ctx->r16 != ctx->r19) {
        // 0x802C25B8: lh          $v0, 0x12A($s2)
        ctx->r2 = MEM_H(ctx->r18, 0X12A);
            goto L_802C2558;
    }
    goto skip_0;
    // 0x802C25B8: lh          $v0, 0x12A($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X12A);
    skip_0:
    // 0x802C25BC: jal         0x8021EC9C
    // 0x802C25C0: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_45;
    // 0x802C25C0: nop

    after_45:
    // 0x802C25C4: addiu       $s1, $s1, -0x14
    ctx->r17 = ADD32(ctx->r17, -0X14);
    // 0x802C25C8: slti        $at, $s1, 0x47
    ctx->r1 = SIGNED(ctx->r17) < 0X47 ? 1 : 0;
    // 0x802C25CC: beql        $at, $zero, L_802C2554
    if (ctx->r1 == 0) {
        // 0x802C25D0: addiu       $s0, $zero, 0xA0
        ctx->r16 = ADD32(0, 0XA0);
            goto L_802C2554;
    }
    goto skip_1;
    // 0x802C25D0: addiu       $s0, $zero, 0xA0
    ctx->r16 = ADD32(0, 0XA0);
    skip_1:
    // 0x802C25D4: addiu       $s0, $zero, 0xBE
    ctx->r16 = ADD32(0, 0XBE);
    // 0x802C25D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802C25DC: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    // 0x802C25E0: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
L_802C25E4:
    // 0x802C25E4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802C25E8: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802C25EC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802C25F0: jal         0x8021E708
    // 0x802C25F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_46;
    // 0x802C25F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_46:
    // 0x802C25F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802C25FC: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    // 0x802C2600: jal         0x8021E87C
    // 0x802C2604: lw          $a2, 0x118($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X118);
    static_3_8021E87C(rdram, ctx);
        goto after_47;
    // 0x802C2604: lw          $a2, 0x118($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X118);
    after_47:
    // 0x802C2608: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802C260C: addiu       $s0, $s0, 0xF
    ctx->r16 = ADD32(ctx->r16, 0XF);
    // 0x802C2610: bne         $s1, $s4, L_802C25E4
    if (ctx->r17 != ctx->r20) {
        // 0x802C2614: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_802C25E4;
    }
    // 0x802C2614: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802C2618: jal         0x8023413C
    // 0x802C261C: lw          $a0, 0x5C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X5C);
    static_3_8023413C(rdram, ctx);
        goto after_48;
    // 0x802C261C: lw          $a0, 0x5C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X5C);
    after_48:
    // 0x802C2620: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802C2624: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x802C2628: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    // 0x802C262C: jal         0x802F14C4
    // 0x802C2630: lw          $a3, 0x114($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X114);
    static_3_802F14C4(rdram, ctx);
        goto after_49;
    // 0x802C2630: lw          $a3, 0x114($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X114);
    after_49:
    // 0x802C2634: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802C2638: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802C263C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802C2640: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802C2644: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802C2648: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802C264C: jr          $ra
    // 0x802C2650: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    // 0x802C2650: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void D_8028C524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C5A4: addiu       $sp, $sp, -0x178
    ctx->r29 = ADD32(ctx->r29, -0X178);
    // 0x8028C5A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028C5AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028C5B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028C5B4: sw          $a1, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r5;
    // 0x8028C5B8: sw          $a2, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r6;
    // 0x8028C5BC: sw          $a3, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r7;
    // 0x8028C5C0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x8028C5C4: addiu       $a2, $sp, 0x138
    ctx->r6 = ADD32(ctx->r29, 0X138);
    // 0x8028C5C8: jal         0x8020664C
    // 0x8028C5CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8020664C(rdram, ctx);
        goto after_0;
    // 0x8028C5CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8028C5D0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8028C5D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028C5D8: jal         0x8020664C
    // 0x8028C5DC: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    static_3_8020664C(rdram, ctx);
        goto after_1;
    // 0x8028C5DC: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    after_1:
    // 0x8028C5E0: jal         0x8022970C
    // 0x8028C5E4: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x8028C5E4: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    after_2:
    // 0x8028C5E8: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x8028C5EC: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x8028C5F0: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x8028C5F4: jal         0x802D01D4
    // 0x8028C5F8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_3;
    // 0x8028C5F8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_3:
    // 0x8028C5FC: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x8028C600: addiu       $a1, $sp, 0x138
    ctx->r5 = ADD32(ctx->r29, 0X138);
    // 0x8028C604: jal         0x802297A8
    // 0x8028C608: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    static_3_802297A8(rdram, ctx);
        goto after_4;
    // 0x8028C608: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    after_4:
    // 0x8028C60C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8028C610: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x8028C614: jal         0x802297A8
    // 0x8028C618: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    static_3_802297A8(rdram, ctx);
        goto after_5;
    // 0x8028C618: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    after_5:
    // 0x8028C61C: jal         0x8022331C
    // 0x8028C620: nop

    static_3_8022331C(rdram, ctx);
        goto after_6;
    // 0x8028C620: nop

    after_6:
    // 0x8028C624: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8028C628: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028C62C: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x8028C630: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028C634: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8028C638: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8028C63C: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    // 0x8028C640: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x8028C644: jal         0x8022A848
    // 0x8028C648: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_7;
    // 0x8028C648: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x8028C64C: jal         0x80221B2C
    // 0x8028C650: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    static_3_80221B2C(rdram, ctx);
        goto after_8;
    // 0x8028C650: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    after_8:
    // 0x8028C654: jal         0x8022970C
    // 0x8028C658: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    func_8022970C(rdram, ctx);
        goto after_9;
    // 0x8028C658: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    after_9:
    // 0x8028C65C: jal         0x8022149C
    // 0x8028C660: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    static_3_8022149C(rdram, ctx);
        goto after_10;
    // 0x8028C660: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    after_10:
    // 0x8028C664: lui         $a0, 0xC2
    ctx->r4 = S32(0XC2 << 16);
    // 0x8028C668: jal         0x802233EC
    // 0x8028C66C: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    static_3_802233EC(rdram, ctx);
        goto after_11;
    // 0x8028C66C: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    after_11:
    // 0x8028C670: jal         0x802B4CEC
    // 0x8028C674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B4CEC(rdram, ctx);
        goto after_12;
    // 0x8028C674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8028C678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C67C: jal         0x802B4F88
    // 0x8028C680: lw          $a1, 0x17C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X17C);
    static_3_802B4F88(rdram, ctx);
        goto after_13;
    // 0x8028C680: lw          $a1, 0x17C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X17C);
    after_13:
    // 0x8028C684: lbu         $t6, 0x187($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X187);
    // 0x8028C688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C68C: beql        $t6, $zero, L_8028C764
    if (ctx->r14 == 0) {
        // 0x8028C690: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_8028C764;
    }
    goto skip_0;
    // 0x8028C690: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x8028C694: jal         0x802B8C18
    // 0x8028C698: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    static_3_802B8C18(rdram, ctx);
        goto after_14;
    // 0x8028C698: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_14:
    // 0x8028C69C: jal         0x803182BC
    // 0x8028C6A0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_803182BC(rdram, ctx);
        goto after_15;
    // 0x8028C6A0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_15:
    // 0x8028C6A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8028C6A8: jal         0x802B50E4
    // 0x8028C6AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B50E4(rdram, ctx);
        goto after_16;
    // 0x8028C6AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8028C6B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C6B4: jal         0x802B66E4
    // 0x8028C6B8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    static_3_802B66E4(rdram, ctx);
        goto after_17;
    // 0x8028C6B8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_17:
    // 0x8028C6BC: jal         0x802E6E2C
    // 0x8028C6C0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_802E6E2C(rdram, ctx);
        goto after_18;
    // 0x8028C6C0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_18:
    // 0x8028C6C4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028C6C8: jal         0x802E6ED4
    // 0x8028C6CC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    static_3_802E6ED4(rdram, ctx);
        goto after_19;
    // 0x8028C6CC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_19:
    // 0x8028C6D0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8028C6D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C6D8: jal         0x802B7C00
    // 0x8028C6DC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    static_3_802B7C00(rdram, ctx);
        goto after_20;
    // 0x8028C6DC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_20:
    // 0x8028C6E0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8028C6E4: lw          $a1, 0x1A0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1A0);
    // 0x8028C6E8: lw          $t9, 0x7C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X7C);
    // 0x8028C6EC: lh          $t7, 0x78($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X78);
    // 0x8028C6F0: jalr        $t9
    // 0x8028C6F4: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x8028C6F4: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    after_21:
    // 0x8028C6F8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8028C6FC: jal         0x80318774
    // 0x8028C700: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80318774(rdram, ctx);
        goto after_22;
    // 0x8028C700: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_22:
    // 0x8028C704: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8028C708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C70C: jal         0x802B5B08
    // 0x8028C710: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    static_3_802B5B08(rdram, ctx);
        goto after_23;
    // 0x8028C710: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_23:
    // 0x8028C714: jal         0x80318214
    // 0x8028C718: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80318214(rdram, ctx);
        goto after_24;
    // 0x8028C718: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_24:
    // 0x8028C71C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028C720: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028C724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C728: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8028C72C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8028C730: jal         0x802B7774
    // 0x8028C734: nop

    static_3_802B7774(rdram, ctx);
        goto after_25;
    // 0x8028C734: nop

    after_25:
    // 0x8028C738: jal         0x80317DA8
    // 0x8028C73C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80317DA8(rdram, ctx);
        goto after_26;
    // 0x8028C73C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_26:
    // 0x8028C740: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8028C744: jal         0x802B48C8
    // 0x8028C748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B48C8(rdram, ctx);
        goto after_27;
    // 0x8028C748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x8028C74C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028C750: jal         0x802BAEBC
    // 0x8028C754: lw          $a1, 0x17C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X17C);
    static_3_802BAEBC(rdram, ctx);
        goto after_28;
    // 0x8028C754: lw          $a1, 0x17C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X17C);
    after_28:
    // 0x8028C758: b           L_8028C774
    // 0x8028C75C: lw          $t8, 0x78($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X78);
        goto L_8028C774;
    // 0x8028C75C: lw          $t8, 0x78($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X78);
    // 0x8028C760: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_8028C764:
    // 0x8028C764: addiu       $a1, $s0, 0x22C
    ctx->r5 = ADD32(ctx->r16, 0X22C);
    // 0x8028C768: jal         0x80302414
    // 0x8028C76C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_29;
    // 0x8028C76C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_29:
    // 0x8028C770: lw          $t8, 0x78($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X78);
L_8028C774:
    // 0x8028C774: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x8028C778: bne         $t0, $zero, L_8028C790
    if (ctx->r8 != 0) {
        // 0x8028C77C: nop
    
            goto L_8028C790;
    }
    // 0x8028C77C: nop

    // 0x8028C780: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8028C784: addiu       $a1, $s0, 0x22C
    ctx->r5 = ADD32(ctx->r16, 0X22C);
    // 0x8028C788: jal         0x80302414
    // 0x8028C78C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_30;
    // 0x8028C78C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_30:
L_8028C790:
    // 0x8028C790: jal         0x8021EC9C
    // 0x8028C794: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_31;
    // 0x8028C794: nop

    after_31:
    // 0x8028C798: jal         0x802230E4
    // 0x8028C79C: nop

    static_3_802230E4(rdram, ctx);
        goto after_32;
    // 0x8028C79C: nop

    after_32:
    // 0x8028C7A0: jal         0x8022337C
    // 0x8028C7A4: nop

    static_3_8022337C(rdram, ctx);
        goto after_33;
    // 0x8028C7A4: nop

    after_33:
    // 0x8028C7A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8028C7AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8028C7B0: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
    // 0x8028C7B4: jr          $ra
    // 0x8028C7B8: nop

    return;
    // 0x8028C7B8: nop

;}
RECOMP_FUNC void D_802A1E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F04: jr          $ra
    // 0x802A1F08: lbu         $v0, 0x1D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1D);
    return;
    // 0x802A1F08: lbu         $v0, 0x1D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1D);
;}
RECOMP_FUNC void D_8021F30C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F30C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F310: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021F314: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8021F318: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021F31C: lh          $a0, 0x0($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X0);
    // 0x8021F320: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021F324: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021F328: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021F32C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021F330: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8021F334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F338: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8021F33C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8021F340: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8021F344: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8021F348: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8021F34C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8021F350: jal         0x80231C58
    // 0x8021F354: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x8021F354: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_0:
    // 0x8021F358: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021F35C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8021F360: beq         $v0, $zero, L_8021F370
    if (ctx->r2 == 0) {
        // 0x8021F364: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_8021F370;
    }
    // 0x8021F364: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F368: b           L_8021F3E0
    // 0x8021F36C: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
        goto L_8021F3E0;
    // 0x8021F36C: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
L_8021F370:
    // 0x8021F370: lh          $t8, 0x0($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X0);
    // 0x8021F374: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8021F378: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F37C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8021F380: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x8021F384: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8021F388: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8021F38C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8021F390: sh          $t2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r10;
    // 0x8021F394: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8021F398: sh          $t3, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r11;
    // 0x8021F39C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8021F3A0: sh          $t4, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r12;
    // 0x8021F3A4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8021F3A8: sh          $t5, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r13;
    // 0x8021F3AC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8021F3B0: sb          $t6, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r14;
    // 0x8021F3B4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8021F3B8: sb          $t7, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r15;
    // 0x8021F3BC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8021F3C0: sb          $t8, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r24;
    // 0x8021F3C4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8021F3C8: sb          $t9, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r25;
    // 0x8021F3CC: sh          $t1, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r9;
    // 0x8021F3D0: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x8021F3D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8021F3D8: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x8021F3DC: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
L_8021F3E0:
    // 0x8021F3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F3E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021F3E8: jr          $ra
    // 0x8021F3EC: nop

    return;
    // 0x8021F3EC: nop

;}
RECOMP_FUNC void D_80283CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283D6C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80283D70: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80283D74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283D78: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80283D7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283D80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80283D84: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80283D88: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80283D8C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x80283D90: jal         0x802D5010
    // 0x80283D94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802D5010(rdram, ctx);
        goto after_0;
    // 0x80283D94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80283D98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283D9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283DA0: jr          $ra
    // 0x80283DA4: nop

    return;
    // 0x80283DA4: nop

;}
RECOMP_FUNC void D_802EA08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA10C: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x802EA110: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802EA114: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802EA118: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x802EA11C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802EA120: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802EA124: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x802EA128: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x802EA12C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802EA130: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x802EA134: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x802EA138: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x802EA13C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x802EA140: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x802EA144: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x802EA148: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x802EA14C: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x802EA150: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x802EA154: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x802EA158: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802EA15C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802EA160: bne         $t7, $zero, L_802EA2AC
    if (ctx->r15 != 0) {
        // 0x802EA164: sw          $t6, 0xD4($sp)
        MEM_W(0XD4, ctx->r29) = ctx->r14;
            goto L_802EA2AC;
    }
    // 0x802EA164: sw          $t6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r14;
    // 0x802EA168: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802EA16C: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x802EA170: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EA174: lwc1        $f30, 0x0($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EA178: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EA17C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x802EA180: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x802EA184: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x802EA188: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802EA18C: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802EA190: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x802EA194: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802EA198: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x802EA19C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802EA1A0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802EA1A4: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x802EA1A8: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802EA1AC: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x802EA1B0: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x802EA1B4: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
    // 0x802EA1B8: addiu       $s0, $sp, 0x7C
    ctx->r16 = ADD32(ctx->r29, 0X7C);
L_802EA1BC:
    // 0x802EA1BC: jal         0x8023499C
    // 0x802EA1C0: nop

    static_3_8023499C(rdram, ctx);
        goto after_0;
    // 0x802EA1C0: nop

    after_0:
    // 0x802EA1C4: mul.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x802EA1C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802EA1CC: mul.s       $f24, $f4, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f24.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x802EA1D0: jal         0x8022970C
    // 0x802EA1D4: nop

    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802EA1D4: nop

    after_1:
    // 0x802EA1D8: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x802EA1DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802EA1E0: jal         0x802D01D4
    // 0x802EA1E4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802EA1E4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_2:
    // 0x802EA1E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EA1EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EA1F0: swc1        $f22, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f22.u32l;
    // 0x802EA1F4: swc1        $f22, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f22.u32l;
    // 0x802EA1F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802EA1FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802EA200: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x802EA204: jal         0x803202E4
    // 0x802EA208: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    static_3_803202E4(rdram, ctx);
        goto after_3;
    // 0x802EA208: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x802EA20C: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802EA210: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802EA214: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EA218: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x802EA21C: swc1        $f26, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f26.u32l;
    // 0x802EA220: swc1        $f22, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f22.u32l;
    // 0x802EA224: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x802EA228: swc1        $f10, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f10.u32l;
    // 0x802EA22C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802EA230: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802EA234: swc1        $f18, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f18.u32l;
    // 0x802EA238: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EA23C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x802EA240: jal         0x803202E4
    // 0x802EA244: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    static_3_803202E4(rdram, ctx);
        goto after_4;
    // 0x802EA244: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x802EA248: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802EA24C: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802EA250: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EA254: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x802EA258: swc1        $f26, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f26.u32l;
    // 0x802EA25C: swc1        $f22, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f22.u32l;
    // 0x802EA260: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x802EA264: swc1        $f8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f8.u32l;
    // 0x802EA268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802EA26C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802EA270: swc1        $f16, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f16.u32l;
    // 0x802EA274: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EA278: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x802EA27C: jal         0x803202E4
    // 0x802EA280: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    static_3_803202E4(rdram, ctx);
        goto after_5;
    // 0x802EA280: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x802EA284: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802EA288: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802EA28C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x802EA290: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x802EA294: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x802EA298: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x802EA29C: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x802EA2A0: swc1        $f6, -0x8($s1)
    MEM_W(-0X8, ctx->r17) = ctx->f6.u32l;
    // 0x802EA2A4: bne         $s1, $s5, L_802EA1BC
    if (ctx->r17 != ctx->r21) {
        // 0x802EA2A8: swc1        $f10, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->f10.u32l;
            goto L_802EA1BC;
    }
    // 0x802EA2A8: swc1        $f10, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f10.u32l;
L_802EA2AC:
    // 0x802EA2AC: jal         0x8031A3E0
    // 0x802EA2B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    static_3_8031A3E0(rdram, ctx);
        goto after_6;
    // 0x802EA2B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_6:
    // 0x802EA2B4: blez        $v0, L_802EA334
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802EA2B8: lui         $s1, 0x0
        ctx->r17 = S32(0X0 << 16);
            goto L_802EA334;
    }
    // 0x802EA2B8: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802EA2BC: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
L_802EA2C0:
    // 0x802EA2C0: jal         0x8031A3EC
    // 0x802EA2C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031A3EC(rdram, ctx);
        goto after_7;
    // 0x802EA2C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x802EA2C8: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x802EA2CC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802EA2D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802EA2D4: bltz        $v1, L_802EA2E0
    if (SIGNED(ctx->r3) < 0) {
        // 0x802EA2D8: slti        $at, $v1, 0x21
        ctx->r1 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_802EA2E0;
    }
    // 0x802EA2D8: slti        $at, $v1, 0x21
    ctx->r1 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x802EA2DC: bne         $at, $zero, L_802EA2F4
    if (ctx->r1 != 0) {
        // 0x802EA2E0: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_802EA2F4;
    }
L_802EA2E0:
    // 0x802EA2E0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x802EA2E4: jal         0x80231A24
    // 0x802EA2E8: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_8;
    // 0x802EA2E8: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    after_8:
    // 0x802EA2EC: b           L_802EA31C
    // 0x802EA2F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_802EA31C;
    // 0x802EA2F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802EA2F4:
    // 0x802EA2F4: lh          $t9, 0x68($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X68);
    // 0x802EA2F8: blezl       $t9, L_802EA31C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x802EA2FC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802EA31C;
    }
    goto skip_0;
    // 0x802EA2FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x802EA300: lw          $v0, 0xB0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB0);
    // 0x802EA304: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x802EA308: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802EA30C: lh          $t0, 0x10($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X10);
    // 0x802EA310: jalr        $t9
    // 0x802EA314: addu        $a0, $t0, $a3
    ctx->r4 = ADD32(ctx->r8, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802EA314: addu        $a0, $t0, $a3
    ctx->r4 = ADD32(ctx->r8, ctx->r7);
    after_9:
    // 0x802EA318: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802EA31C:
    // 0x802EA31C: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x802EA320: jal         0x8031A3E0
    // 0x802EA324: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    static_3_8031A3E0(rdram, ctx);
        goto after_10;
    // 0x802EA324: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    after_10:
    // 0x802EA328: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802EA32C: bne         $at, $zero, L_802EA2C0
    if (ctx->r1 != 0) {
        // 0x802EA330: nop
    
            goto L_802EA2C0;
    }
    // 0x802EA330: nop

L_802EA334:
    // 0x802EA334: jal         0x802AFDA0
    // 0x802EA338: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    static_3_802AFDA0(rdram, ctx);
        goto after_11;
    // 0x802EA338: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    after_11:
    // 0x802EA33C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x802EA340: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EA344: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802EA348: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802EA34C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x802EA350: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x802EA354: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x802EA358: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x802EA35C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802EA360: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x802EA364: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x802EA368: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x802EA36C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x802EA370: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x802EA374: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x802EA378: sb          $v0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r2;
    // 0x802EA37C: jr          $ra
    // 0x802EA380: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x802EA380: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void D_8020760C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020760C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80207610: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80207614: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80207618: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8020761C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80207620: nop

    // 0x80207624: bc1fl       L_80207634
    if (!c1cs) {
        // 0x80207628: lwc1        $f2, 0x8($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
            goto L_80207634;
    }
    goto skip_0;
    // 0x80207628: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    skip_0:
    // 0x8020762C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80207630: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
L_80207634:
    // 0x80207634: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80207638: nop

    // 0x8020763C: bc1fl       L_80207650
    if (!c1cs) {
        // 0x80207640: lwc1        $f2, 0x8($a2)
        ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
            goto L_80207650;
    }
    goto skip_1;
    // 0x80207640: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    skip_1:
    // 0x80207644: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80207648: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8020764C: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
L_80207650:
    // 0x80207650: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80207654: nop

    // 0x80207658: bc1fl       L_8020766C
    if (!c1cs) {
        // 0x8020765C: lwc1        $f2, 0x8($a3)
        ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
            goto L_8020766C;
    }
    goto skip_2;
    // 0x8020765C: lwc1        $f2, 0x8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
    skip_2:
    // 0x80207660: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80207664: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80207668: lwc1        $f2, 0x8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
L_8020766C:
    // 0x8020766C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80207670: nop

    // 0x80207674: bc1f        L_80207680
    if (!c1cs) {
        // 0x80207678: nop
    
            goto L_80207680;
    }
    // 0x80207678: nop

    // 0x8020767C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80207680:
    // 0x80207680: jr          $ra
    // 0x80207684: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80207684: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_802836EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028376C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283770: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80283774: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80283778: bne         $a0, $zero, L_80283790
    if (ctx->r4 != 0) {
        // 0x8028377C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80283790;
    }
    // 0x8028377C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283780: jal         0x802C67EC
    // 0x80283784: addiu       $a0, $zero, 0x6A0
    ctx->r4 = ADD32(0, 0X6A0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80283784: addiu       $a0, $zero, 0x6A0
    ctx->r4 = ADD32(0, 0X6A0);
    after_0:
    // 0x80283788: beq         $v0, $zero, L_802837BC
    if (ctx->r2 == 0) {
        // 0x8028378C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802837BC;
    }
    // 0x8028378C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80283790:
    // 0x80283790: jal         0x80317344
    // 0x80283794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x80283794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80283798: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8028379C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802837A0: sw          $t6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r14;
    // 0x802837A4: jal         0x802D4800
    // 0x802837A8: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    static_3_802D4800(rdram, ctx);
        goto after_2;
    // 0x802837A8: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    after_2:
    // 0x802837AC: jal         0x802C498C
    // 0x802837B0: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    static_3_802C498C(rdram, ctx);
        goto after_3;
    // 0x802837B0: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    after_3:
    // 0x802837B4: jal         0x802C498C
    // 0x802837B8: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    static_3_802C498C(rdram, ctx);
        goto after_4;
    // 0x802837B8: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    after_4:
L_802837BC:
    // 0x802837BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802837C0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802837C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802837C8: jr          $ra
    // 0x802837CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802837CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_80222DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222DD4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80222DD8: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x80222DDC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80222DE0: lh          $t9, 0x0($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X0);
    // 0x80222DE4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80222DE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80222DEC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80222DF0: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80222DF4: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x80222DF8: jr          $ra
    // 0x80222DFC: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    return;
    // 0x80222DFC: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
;}
RECOMP_FUNC void D_802DED60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DEDE0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DEDE4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802DEDE8: jr          $ra
    // 0x802DEDEC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802DEDEC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
