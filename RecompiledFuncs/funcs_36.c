#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80287470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802874F0: addiu       $sp, $sp, -0x1C0
    ctx->r29 = ADD32(ctx->r29, -0X1C0);
    // 0x802874F4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802874F8: sw          $s5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r21;
    // 0x802874FC: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x80287500: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x80287504: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x80287508: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x8028750C: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x80287510: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x80287514: sw          $a0, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->r4;
    // 0x80287518: sw          $a1, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r5;
    // 0x8028751C: sw          $a2, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r6;
    // 0x80287520: lw          $t7, 0x78($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X78);
    // 0x80287524: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80287528: beql        $t8, $zero, L_80288054
    if (ctx->r24 == 0) {
        // 0x8028752C: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_80288054;
    }
    goto skip_0;
    // 0x8028752C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x80287530: jal         0x8022331C
    // 0x80287534: nop

    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x80287534: nop

    after_0:
    // 0x80287538: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8028753C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80287540: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x80287544: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80287548: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x8028754C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80287550: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80287554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80287558: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x8028755C: jal         0x8022A848
    // 0x80287560: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_1;
    // 0x80287560: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80287564: jal         0x80221B2C
    // 0x80287568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80221B2C(rdram, ctx);
        goto after_2;
    // 0x80287568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8028756C: jal         0x8022342C
    // 0x80287570: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_3;
    // 0x80287570: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_3:
    // 0x80287574: jal         0x802233EC
    // 0x80287578: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_4;
    // 0x80287578: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    after_4:
    // 0x8028757C: lw          $t9, 0x1C0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287580: addiu       $a0, $sp, 0x174
    ctx->r4 = ADD32(ctx->r29, 0X174);
    // 0x80287584: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x80287588: jal         0x80228DE0
    // 0x8028758C: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    func_80228DE0(rdram, ctx);
        goto after_5;
    // 0x8028758C: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    after_5:
    // 0x80287590: addiu       $s0, $sp, 0x134
    ctx->r16 = ADD32(ctx->r29, 0X134);
    // 0x80287594: jal         0x8022970C
    // 0x80287598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_6;
    // 0x80287598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8028759C: lwc1        $f6, 0x174($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802875A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802875A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802875A8: jal         0x80222E98
    // 0x802875AC: swc1        $f6, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f6.u32l;
    static_3_80222E98(rdram, ctx);
        goto after_7;
    // 0x802875AC: swc1        $f6, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x802875B0: lw          $t0, 0x1C0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C0);
    // 0x802875B4: jal         0x803183C8
    // 0x802875B8: lw          $a0, 0x4($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4);
    static_3_803183C8(rdram, ctx);
        goto after_8;
    // 0x802875B8: lw          $a0, 0x4($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4);
    after_8:
    // 0x802875BC: lw          $t1, 0x1C0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C0);
    // 0x802875C0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802875C4: jal         0x803183C0
    // 0x802875C8: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    static_3_803183C0(rdram, ctx);
        goto after_9;
    // 0x802875C8: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    after_9:
    // 0x802875CC: div.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802875D0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802875D4: lw          $t2, 0x1C0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C0);
    // 0x802875D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802875DC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x802875E0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x802875E4: bc1fl       L_802875F8
    if (!c1cs) {
        // 0x802875E8: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_802875F8;
    }
    goto skip_1;
    // 0x802875E8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    skip_1:
    // 0x802875EC: b           L_80287614
    // 0x802875F0: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_80287614;
    // 0x802875F0: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x802875F4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
L_802875F8:
    // 0x802875F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802875FC: nop

    // 0x80287600: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x80287604: nop

    // 0x80287608: bc1f        L_80287614
    if (!c1cs) {
        // 0x8028760C: nop
    
            goto L_80287614;
    }
    // 0x8028760C: nop

    // 0x80287610: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
L_80287614:
    // 0x80287614: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80287618: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028761C: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x80287620: nop

    // 0x80287624: bc1fl       L_80287644
    if (!c1cs) {
        // 0x80287628: lw          $a0, 0x0($t2)
        ctx->r4 = MEM_W(ctx->r10, 0X0);
            goto L_80287644;
    }
    goto skip_2;
    // 0x80287628: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    skip_2:
    // 0x8028762C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x80287630: nop

    // 0x80287634: bc1fl       L_80287644
    if (!c1cs) {
        // 0x80287638: lw          $a0, 0x0($t2)
        ctx->r4 = MEM_W(ctx->r10, 0X0);
            goto L_80287644;
    }
    goto skip_3;
    // 0x80287638: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    skip_3:
    // 0x8028763C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x80287640: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
L_80287644:
    // 0x80287644: jal         0x802AEE54
    // 0x80287648: swc1        $f12, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f12.u32l;
    static_3_802AEE54(rdram, ctx);
        goto after_10;
    // 0x80287648: swc1        $f12, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f12.u32l;
    after_10:
    // 0x8028764C: lw          $t3, 0x1C0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287650: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x80287654: bne         $v0, $t4, L_80287688
    if (ctx->r2 != ctx->r12) {
        // 0x80287658: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_80287688;
    }
    // 0x80287658: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8028765C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80287660: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80287664: bnel        $v0, $at, L_8028767C
    if (ctx->r2 != ctx->r1) {
        // 0x80287668: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_8028767C;
    }
    goto skip_4;
    // 0x80287668: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    skip_4:
    // 0x8028766C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80287670: b           L_80287698
    // 0x80287674: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
        goto L_80287698;
    // 0x80287674: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80287678: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
L_8028767C:
    // 0x8028767C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80287680: b           L_80287698
    // 0x80287684: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
        goto L_80287698;
    // 0x80287684: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_80287688:
    // 0x80287688: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8028768C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80287690: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80287694: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_80287698:
    // 0x80287698: bnel        $v0, $at, L_802876AC
    if (ctx->r2 != ctx->r1) {
        // 0x8028769C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802876AC;
    }
    goto skip_5;
    // 0x8028769C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_5:
    // 0x802876A0: b           L_802876AC
    // 0x802876A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802876AC;
    // 0x802876A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802876A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802876AC:
    // 0x802876AC: beq         $v0, $zero, L_802876BC
    if (ctx->r2 == 0) {
        // 0x802876B0: addiu       $s4, $zero, 0x3B
        ctx->r20 = ADD32(0, 0X3B);
            goto L_802876BC;
    }
    // 0x802876B0: addiu       $s4, $zero, 0x3B
    ctx->r20 = ADD32(0, 0X3B);
    // 0x802876B4: b           L_802876C4
    // 0x802876B8: addiu       $s5, $zero, 0x59
    ctx->r21 = ADD32(0, 0X59);
        goto L_802876C4;
    // 0x802876B8: addiu       $s5, $zero, 0x59
    ctx->r21 = ADD32(0, 0X59);
L_802876BC:
    // 0x802876BC: addiu       $s4, $zero, 0x1F
    ctx->r20 = ADD32(0, 0X1F);
    // 0x802876C0: addiu       $s5, $zero, 0x3C
    ctx->r21 = ADD32(0, 0X3C);
L_802876C4:
    // 0x802876C4: jal         0x80223468
    // 0x802876C8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    static_3_80223468(rdram, ctx);
        goto after_11;
    // 0x802876C8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_11:
    // 0x802876CC: jal         0x8021F4E4
    // 0x802876D0: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_12;
    // 0x802876D0: nop

    after_12:
    // 0x802876D4: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x802876D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802876DC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802876E0: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x802876E4: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x802876E8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802876EC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802876F0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802876F4: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802876F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802876FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287700: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80287704: mfc1        $s0, $f18
    ctx->r16 = (int32_t)ctx->f18.u32l;
    // 0x80287708: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8028770C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80287710: jal         0x8021F35C
    // 0x80287714: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_13;
    // 0x80287714: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x80287718: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8028771C: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x80287720: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80287724: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80287728: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8028772C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80287730: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287734: addiu       $a3, $zero, 0x3C0
    ctx->r7 = ADD32(0, 0X3C0);
    // 0x80287738: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8028773C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287740: jal         0x8021F35C
    // 0x80287744: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x80287744: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_14:
    // 0x80287748: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x8028774C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80287750: lwc1        $f6, 0x1B4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x80287754: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x80287758: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8028775C: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80287760: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x80287764: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80287768: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8028776C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80287770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287774: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80287778: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x8028777C: addiu       $a3, $zero, 0x3C0
    ctx->r7 = ADD32(0, 0X3C0);
    // 0x80287780: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287784: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80287788: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8028778C: add.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80287790: mfc1        $s1, $f6
    ctx->r17 = (int32_t)ctx->f6.u32l;
    // 0x80287794: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80287798: sll         $t2, $s1, 5
    ctx->r10 = S32(ctx->r17 << 5);
    // 0x8028779C: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x802877A0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802877A4: mfc1        $s2, $f4
    ctx->r18 = (int32_t)ctx->f4.u32l;
    // 0x802877A8: jal         0x8021F35C
    // 0x802877AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x802877AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_15:
    // 0x802877B0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802877B4: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x802877B8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x802877BC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802877C0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802877C4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802877C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802877CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802877D0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x802877D4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802877D8: jal         0x8021F35C
    // 0x802877DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802877DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_16:
    // 0x802877E0: jal         0x8021FCD0
    // 0x802877E4: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_17;
    // 0x802877E4: nop

    after_17:
    // 0x802877E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802877EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802877F0: lwc1        $f8, 0x1B4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x802877F4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802877F8: nop

    // 0x802877FC: bc1f        L_802878FC
    if (!c1cs) {
        // 0x80287800: nop
    
            goto L_802878FC;
    }
    // 0x80287800: nop

    // 0x80287804: jal         0x8021F4E4
    // 0x80287808: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_18;
    // 0x80287808: nop

    after_18:
    // 0x8028780C: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x80287810: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80287814: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80287818: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x8028781C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80287820: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80287824: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80287828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028782C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287830: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x80287834: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80287838: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8028783C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80287840: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80287844: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80287848: mfc1        $s0, $f10
    ctx->r16 = (int32_t)ctx->f10.u32l;
    // 0x8028784C: jal         0x8021F35C
    // 0x80287850: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_19;
    // 0x80287850: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_19:
    // 0x80287854: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x80287858: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8028785C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80287860: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80287864: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287868: addiu       $a3, $zero, 0x3C0
    ctx->r7 = ADD32(0, 0X3C0);
    // 0x8028786C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80287870: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287874: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80287878: jal         0x8021F35C
    // 0x8028787C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_20;
    // 0x8028787C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_20:
    // 0x80287880: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80287884: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80287888: addiu       $t1, $zero, 0x4C0
    ctx->r9 = ADD32(0, 0X4C0);
    // 0x8028788C: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x80287890: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x80287894: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80287898: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8028789C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802878A0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802878A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802878A8: addiu       $a3, $zero, 0x3C0
    ctx->r7 = ADD32(0, 0X3C0);
    // 0x802878AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802878B0: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x802878B4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802878B8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802878BC: jal         0x8021F35C
    // 0x802878C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_21;
    // 0x802878C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_21:
    // 0x802878C4: addiu       $t3, $zero, 0x4C0
    ctx->r11 = ADD32(0, 0X4C0);
    // 0x802878C8: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x802878CC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802878D0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802878D4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802878D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802878DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802878E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802878E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802878E8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802878EC: jal         0x8021F35C
    // 0x802878F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_22;
    // 0x802878F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_22:
    // 0x802878F4: jal         0x8021FCD0
    // 0x802878F8: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_23;
    // 0x802878F8: nop

    after_23:
L_802878FC:
    // 0x802878FC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80287900: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80287904: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80287908: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x8028790C: addiu       $t5, $sp, 0xC0
    ctx->r13 = ADD32(ctx->r29, 0XC0);
    // 0x80287910: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80287914: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80287918: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x8028791C: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x80287920: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x80287924: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80287928: addiu       $t9, $sp, 0xB8
    ctx->r25 = ADD32(ctx->r29, 0XB8);
    // 0x8028792C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80287930: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x80287934: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x80287938: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x8028793C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80287940: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x80287944: addiu       $t3, $sp, 0xB0
    ctx->r11 = ADD32(ctx->r29, 0XB0);
    // 0x80287948: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8028794C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x80287950: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x80287954: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x80287958: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8028795C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80287960: addiu       $t6, $sp, 0xA8
    ctx->r14 = ADD32(ctx->r29, 0XA8);
    // 0x80287964: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    // 0x80287968: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x8028796C: jal         0x80223468
    // 0x80287970: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    static_3_80223468(rdram, ctx);
        goto after_24;
    // 0x80287970: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    after_24:
    // 0x80287974: lw          $v1, 0x1C8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C8);
    // 0x80287978: addiu       $s1, $sp, 0xA8
    ctx->r17 = ADD32(ctx->r29, 0XA8);
    // 0x8028797C: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x80287980: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x80287984: addu        $t7, $t0, $s1
    ctx->r15 = ADD32(ctx->r8, ctx->r17);
    // 0x80287988: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x8028798C: addiu       $s2, $sp, 0xC0
    ctx->r18 = ADD32(ctx->r29, 0XC0);
    // 0x80287990: addiu       $s3, $sp, 0xB0
    ctx->r19 = ADD32(ctx->r29, 0XB0);
L_80287994:
    // 0x80287994: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x80287998: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8028799C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802879A0: sltu        $at, $s1, $t3
    ctx->r1 = ctx->r17 < ctx->r11 ? 1 : 0;
    // 0x802879A4: beq         $at, $zero, L_802879B4
    if (ctx->r1 == 0) {
        // 0x802879A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802879B4;
    }
    // 0x802879A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802879AC: b           L_802879B4
    // 0x802879B0: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
        goto L_802879B4;
    // 0x802879B0: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
L_802879B4:
    // 0x802879B4: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802879B8: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x802879BC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802879C0: bne         $t4, $at, L_802879D0
    if (ctx->r12 != ctx->r1) {
        // 0x802879C4: addu        $s5, $sp, $t6
        ctx->r21 = ADD32(ctx->r29, ctx->r14);
            goto L_802879D0;
    }
    // 0x802879C4: addu        $s5, $sp, $t6
    ctx->r21 = ADD32(ctx->r29, ctx->r14);
    // 0x802879C8: b           L_802879D0
    // 0x802879CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802879D0;
    // 0x802879CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802879D0:
    // 0x802879D0: beql        $v0, $zero, L_80287A08
    if (ctx->r2 == 0) {
        // 0x802879D4: lw          $s4, 0x0($s2)
        ctx->r20 = MEM_W(ctx->r18, 0X0);
            goto L_80287A08;
    }
    goto skip_6;
    // 0x802879D4: lw          $s4, 0x0($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X0);
    skip_6:
    // 0x802879D8: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x802879DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802879E0: ldc1        $f18, 0x0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X0);
    // 0x802879E4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802879E8: nop

    // 0x802879EC: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x802879F0: add.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d + ctx->f18.d;
    // 0x802879F4: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x802879F8: mfc1        $s4, $f6
    ctx->r20 = (int32_t)ctx->f6.u32l;
    // 0x802879FC: b           L_80287A0C
    // 0x80287A00: addiu       $s5, $s4, 0x5
    ctx->r21 = ADD32(ctx->r20, 0X5);
        goto L_80287A0C;
    // 0x80287A00: addiu       $s5, $s4, 0x5
    ctx->r21 = ADD32(ctx->r20, 0X5);
    // 0x80287A04: lw          $s4, 0x0($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X0);
L_80287A08:
    // 0x80287A08: lw          $s5, 0xB8($s5)
    ctx->r21 = MEM_W(ctx->r21, 0XB8);
L_80287A0C:
    // 0x80287A0C: jal         0x8021F4E4
    // 0x80287A10: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_25;
    // 0x80287A10: nop

    after_25:
    // 0x80287A14: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80287A18: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x80287A1C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80287A20: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80287A24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80287A28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80287A2C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80287A30: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287A34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80287A38: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80287A3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287A40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287A44: sub.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x80287A48: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80287A4C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80287A50: jal         0x8021F35C
    // 0x80287A54: nop

    static_3_8021F35C(rdram, ctx);
        goto after_26;
    // 0x80287A54: nop

    after_26:
    // 0x80287A58: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80287A5C: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x80287A60: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80287A64: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80287A68: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80287A6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80287A70: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80287A74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287A78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80287A7C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80287A80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287A84: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    // 0x80287A88: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x80287A8C: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80287A90: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80287A94: jal         0x8021F35C
    // 0x80287A98: nop

    static_3_8021F35C(rdram, ctx);
        goto after_27;
    // 0x80287A98: nop

    after_27:
    // 0x80287A9C: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80287AA0: addiu       $t1, $zero, 0x2A0
    ctx->r9 = ADD32(0, 0X2A0);
    // 0x80287AA4: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x80287AA8: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80287AAC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80287AB0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80287AB4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80287AB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80287ABC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80287AC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287AC4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80287AC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287ACC: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x80287AD0: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
    // 0x80287AD4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80287AD8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80287ADC: jal         0x8021F35C
    // 0x80287AE0: nop

    static_3_8021F35C(rdram, ctx);
        goto after_28;
    // 0x80287AE0: nop

    after_28:
    // 0x80287AE4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80287AE8: addiu       $t0, $zero, 0x2A0
    ctx->r8 = ADD32(0, 0X2A0);
    // 0x80287AEC: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x80287AF0: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80287AF4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80287AF8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80287AFC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80287B00: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80287B04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80287B08: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287B0C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80287B10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287B14: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x80287B18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287B1C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80287B20: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80287B24: jal         0x8021F35C
    // 0x80287B28: nop

    static_3_8021F35C(rdram, ctx);
        goto after_29;
    // 0x80287B28: nop

    after_29:
    // 0x80287B2C: jal         0x8021FCD0
    // 0x80287B30: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_30;
    // 0x80287B30: nop

    after_30:
    // 0x80287B34: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x80287B38: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80287B3C: addiu       $t4, $sp, 0xB0
    ctx->r12 = ADD32(ctx->r29, 0XB0);
    // 0x80287B40: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x80287B44: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
    // 0x80287B48: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80287B4C: bne         $s1, $t4, L_80287994
    if (ctx->r17 != ctx->r12) {
        // 0x80287B50: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80287994;
    }
    // 0x80287B50: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80287B54: lw          $v1, 0x1C0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287B58: lw          $t5, 0x78($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X78);
    // 0x80287B5C: andi        $t1, $t5, 0x800
    ctx->r9 = ctx->r13 & 0X800;
    // 0x80287B60: beql        $t1, $zero, L_80287E48
    if (ctx->r9 == 0) {
        // 0x80287B64: lw          $v0, 0x4($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X4);
            goto L_80287E48;
    }
    goto skip_7;
    // 0x80287B64: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    skip_7:
    // 0x80287B68: lw          $t6, 0x1C4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C4);
    // 0x80287B6C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80287B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80287B74: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x80287B78: bne         $at, $zero, L_80287B84
    if (ctx->r1 != 0) {
        // 0x80287B7C: addiu       $t8, $zero, 0xA
        ctx->r24 = ADD32(0, 0XA);
            goto L_80287B84;
    }
    // 0x80287B7C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80287B80: sw          $t8, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r24;
L_80287B84:
    // 0x80287B84: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x80287B88: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80287B8C: bnel        $t9, $at, L_80287BA0
    if (ctx->r25 != ctx->r1) {
        // 0x80287B90: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80287BA0;
    }
    goto skip_8;
    // 0x80287B90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_8:
    // 0x80287B94: b           L_80287BA0
    // 0x80287B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80287BA0;
    // 0x80287B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80287B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80287BA0:
    // 0x80287BA0: beq         $v0, $zero, L_80287BB0
    if (ctx->r2 == 0) {
        // 0x80287BA4: addiu       $s5, $zero, 0x36
        ctx->r21 = ADD32(0, 0X36);
            goto L_80287BB0;
    }
    // 0x80287BA4: addiu       $s5, $zero, 0x36
    ctx->r21 = ADD32(0, 0X36);
    // 0x80287BA8: b           L_80287BB8
    // 0x80287BAC: addiu       $s4, $zero, 0x29
    ctx->r20 = ADD32(0, 0X29);
        goto L_80287BB8;
    // 0x80287BAC: addiu       $s4, $zero, 0x29
    ctx->r20 = ADD32(0, 0X29);
L_80287BB0:
    // 0x80287BB0: addiu       $s5, $zero, 0x1A
    ctx->r21 = ADD32(0, 0X1A);
    // 0x80287BB4: addiu       $s4, $zero, 0x1C
    ctx->r20 = ADD32(0, 0X1C);
L_80287BB8:
    // 0x80287BB8: addiu       $t0, $s4, 0x8
    ctx->r8 = ADD32(ctx->r20, 0X8);
    // 0x80287BBC: sw          $t0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r8;
    // 0x80287BC0: jal         0x802AEE54
    // 0x80287BC4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_31;
    // 0x80287BC4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_31:
    // 0x80287BC8: lw          $t7, 0x1C0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287BCC: lw          $t5, 0x120($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X120);
    // 0x80287BD0: mtc1        $s4, $f10
    ctx->f10.u32l = ctx->r20;
    // 0x80287BD4: lw          $t2, 0x4($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X4);
    // 0x80287BD8: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80287BDC: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80287BE0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80287BE4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80287BE8: bne         $v0, $t2, L_80287C18
    if (ctx->r2 != ctx->r10) {
        // 0x80287BEC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80287C18;
    }
    // 0x80287BEC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80287BF0: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x80287BF4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80287BF8: bne         $t3, $at, L_80287C0C
    if (ctx->r11 != ctx->r1) {
        // 0x80287BFC: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80287C0C;
    }
    // 0x80287BFC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80287C00: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80287C04: b           L_80287C24
    // 0x80287C08: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
        goto L_80287C24;
    // 0x80287C08: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
L_80287C0C:
    // 0x80287C0C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80287C10: b           L_80287C24
    // 0x80287C14: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
        goto L_80287C24;
    // 0x80287C14: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
L_80287C18:
    // 0x80287C18: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80287C1C: nop

    // 0x80287C20: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
L_80287C24:
    // 0x80287C24: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    // 0x80287C28: sub.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x80287C2C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80287C30: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80287C34: mfc1        $s4, $f6
    ctx->r20 = (int32_t)ctx->f6.u32l;
    // 0x80287C38: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80287C3C: jal         0x80223468
    // 0x80287C40: sw          $t6, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r14;
    static_3_80223468(rdram, ctx);
        goto after_32;
    // 0x80287C40: sw          $t6, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r14;
    after_32:
    // 0x80287C44: jal         0x8021F4E4
    // 0x80287C48: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_33;
    // 0x80287C48: nop

    after_33:
    // 0x80287C4C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80287C50: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x80287C54: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80287C58: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80287C5C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80287C60: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80287C64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287C68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287C6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80287C70: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287C74: jal         0x8021F35C
    // 0x80287C78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_34;
    // 0x80287C78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_34:
    // 0x80287C7C: lw          $s0, 0x1C4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C4);
    // 0x80287C80: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80287C84: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x80287C88: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80287C8C: addiu       $s1, $t0, -0x1
    ctx->r17 = ADD32(ctx->r8, -0X1);
    // 0x80287C90: sll         $s2, $s1, 5
    ctx->r18 = S32(ctx->r17 << 5);
    // 0x80287C94: addu        $s3, $s5, $t0
    ctx->r19 = ADD32(ctx->r21, ctx->r8);
    // 0x80287C98: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80287C9C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80287CA0: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80287CA4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80287CA8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80287CAC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80287CB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287CB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80287CB8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287CBC: jal         0x8021F35C
    // 0x80287CC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_35;
    // 0x80287CC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_35:
    // 0x80287CC4: addiu       $t3, $zero, 0xE0
    ctx->r11 = ADD32(0, 0XE0);
    // 0x80287CC8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80287CCC: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x80287CD0: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80287CD4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80287CD8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80287CDC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80287CE0: lw          $a1, 0x120($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X120);
    // 0x80287CE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287CE8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80287CEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287CF0: jal         0x8021F35C
    // 0x80287CF4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_36;
    // 0x80287CF4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_36:
    // 0x80287CF8: addiu       $t1, $zero, 0xE0
    ctx->r9 = ADD32(0, 0XE0);
    // 0x80287CFC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80287D00: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x80287D04: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80287D08: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80287D0C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80287D10: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80287D14: lw          $a1, 0x120($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X120);
    // 0x80287D18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287D1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287D20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287D24: jal         0x8021F35C
    // 0x80287D28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_37;
    // 0x80287D28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_37:
    // 0x80287D2C: jal         0x8021FCD0
    // 0x80287D30: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_38;
    // 0x80287D30: nop

    after_38:
    // 0x80287D34: slti        $at, $s1, 0x27
    ctx->r1 = SIGNED(ctx->r17) < 0X27 ? 1 : 0;
    // 0x80287D38: beq         $at, $zero, L_80287E40
    if (ctx->r1 == 0) {
        // 0x80287D3C: lui         $t9, 0x0
        ctx->r25 = S32(0X0 << 16);
            goto L_80287E40;
    }
    // 0x80287D3C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80287D40: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x80287D44: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80287D48: addiu       $s5, $s0, 0x1A
    ctx->r21 = ADD32(ctx->r16, 0X1A);
    // 0x80287D4C: bne         $t9, $at, L_80287D80
    if (ctx->r25 != ctx->r1) {
        // 0x80287D50: addiu       $s1, $zero, 0x42
        ctx->r17 = ADD32(0, 0X42);
            goto L_80287D80;
    }
    // 0x80287D50: addiu       $s1, $zero, 0x42
    ctx->r17 = ADD32(0, 0X42);
    // 0x80287D54: addiu       $t0, $s0, 0x1A
    ctx->r8 = ADD32(ctx->r16, 0X1A);
    // 0x80287D58: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80287D5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80287D60: ldc1        $f10, 0x0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X0);
    // 0x80287D64: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80287D68: addiu       $s1, $zero, 0x5E
    ctx->r17 = ADD32(0, 0X5E);
    // 0x80287D6C: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x80287D70: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x80287D74: mfc1        $s5, $f4
    ctx->r21 = (int32_t)ctx->f4.u32l;
    // 0x80287D78: b           L_80287D80
    // 0x80287D7C: nop

        goto L_80287D80;
    // 0x80287D7C: nop

L_80287D80:
    // 0x80287D80: jal         0x8021F4E4
    // 0x80287D84: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_39;
    // 0x80287D84: nop

    after_39:
    // 0x80287D88: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x80287D8C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80287D90: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80287D94: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80287D98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287D9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287DA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80287DA4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287DA8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80287DAC: jal         0x8021F35C
    // 0x80287DB0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_40;
    // 0x80287DB0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_40:
    // 0x80287DB4: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x80287DB8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80287DBC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80287DC0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80287DC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287DC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287DCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80287DD0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287DD4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80287DD8: jal         0x8021F35C
    // 0x80287DDC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_41;
    // 0x80287DDC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_41:
    // 0x80287DE0: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x80287DE4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80287DE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80287DEC: lw          $a1, 0x120($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X120);
    // 0x80287DF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287DF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287DF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80287DFC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287E00: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80287E04: jal         0x8021F35C
    // 0x80287E08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_42;
    // 0x80287E08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_42:
    // 0x80287E0C: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x80287E10: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80287E14: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80287E18: lw          $a1, 0x120($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X120);
    // 0x80287E1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287E20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80287E24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80287E28: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80287E2C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80287E30: jal         0x8021F35C
    // 0x80287E34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_43;
    // 0x80287E34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_43:
    // 0x80287E38: jal         0x8021FCD0
    // 0x80287E3C: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_44;
    // 0x80287E3C: nop

    after_44:
L_80287E40:
    // 0x80287E40: lw          $v1, 0x1C0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287E44: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
L_80287E48:
    // 0x80287E48: jal         0x802C5244
    // 0x80287E4C: addiu       $a0, $v0, 0x1204
    ctx->r4 = ADD32(ctx->r2, 0X1204);
    static_3_802C5244(rdram, ctx);
        goto after_45;
    // 0x80287E4C: addiu       $a0, $v0, 0x1204
    ctx->r4 = ADD32(ctx->r2, 0X1204);
    after_45:
    // 0x80287E50: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80287E54: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x80287E58: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80287E5C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80287E60: bne         $t1, $at, L_80287E70
    if (ctx->r9 != ctx->r1) {
        // 0x80287E64: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80287E70;
    }
    // 0x80287E64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80287E68: b           L_80287E70
    // 0x80287E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80287E70;
    // 0x80287E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80287E70:
    // 0x80287E70: beq         $v0, $zero, L_80287E80
    if (ctx->r2 == 0) {
        // 0x80287E74: lw          $t6, 0x1C0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C0);
            goto L_80287E80;
    }
    // 0x80287E74: lw          $t6, 0x1C0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287E78: b           L_80287E8C
    // 0x80287E7C: addiu       $s4, $zero, 0x189
    ctx->r20 = ADD32(0, 0X189);
        goto L_80287E8C;
    // 0x80287E7C: addiu       $s4, $zero, 0x189
    ctx->r20 = ADD32(0, 0X189);
L_80287E80:
    // 0x80287E80: jal         0x8023413C
    // 0x80287E84: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    static_3_8023413C(rdram, ctx);
        goto after_46;
    // 0x80287E84: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    after_46:
    // 0x80287E88: addiu       $s4, $zero, 0xED
    ctx->r20 = ADD32(0, 0XED);
L_80287E8C:
    // 0x80287E8C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80287E90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80287E94: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80287E98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80287E9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80287EA0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80287EA4: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80287EA8: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x80287EAC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80287EB0: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80287EB4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80287EB8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80287EBC: lw          $a0, 0x1C0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287EC0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80287EC4: addiu       $a3, $zero, 0x54
    ctx->r7 = ADD32(0, 0X54);
    // 0x80287EC8: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x80287ECC: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x80287ED0: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80287ED4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80287ED8: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x80287EDC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80287EE0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80287EE4: jal         0x802B8788
    // 0x80287EE8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    static_3_802B8788(rdram, ctx);
        goto after_47;
    // 0x80287EE8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_47:
    // 0x80287EEC: lw          $t7, 0x1C0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287EF0: lw          $v0, 0x4($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X4);
    // 0x80287EF4: jal         0x802C5244
    // 0x80287EF8: addiu       $a0, $v0, 0x1070
    ctx->r4 = ADD32(ctx->r2, 0X1070);
    static_3_802C5244(rdram, ctx);
        goto after_48;
    // 0x80287EF8: addiu       $a0, $v0, 0x1070
    ctx->r4 = ADD32(ctx->r2, 0X1070);
    after_48:
    // 0x80287EFC: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80287F00: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x80287F04: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80287F08: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80287F0C: bne         $t2, $at, L_80287F1C
    if (ctx->r10 != ctx->r1) {
        // 0x80287F10: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80287F1C;
    }
    // 0x80287F10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80287F14: b           L_80287F1C
    // 0x80287F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80287F1C;
    // 0x80287F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80287F1C:
    // 0x80287F1C: beq         $v0, $zero, L_80287F2C
    if (ctx->r2 == 0) {
        // 0x80287F20: lw          $t3, 0x1C0($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X1C0);
            goto L_80287F2C;
    }
    // 0x80287F20: lw          $t3, 0x1C0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287F24: b           L_80287F38
    // 0x80287F28: addiu       $s4, $zero, 0xF0
    ctx->r20 = ADD32(0, 0XF0);
        goto L_80287F38;
    // 0x80287F28: addiu       $s4, $zero, 0xF0
    ctx->r20 = ADD32(0, 0XF0);
L_80287F2C:
    // 0x80287F2C: jal         0x8023413C
    // 0x80287F30: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    static_3_8023413C(rdram, ctx);
        goto after_49;
    // 0x80287F30: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    after_49:
    // 0x80287F34: addiu       $s4, $zero, 0x4E
    ctx->r20 = ADD32(0, 0X4E);
L_80287F38:
    // 0x80287F38: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80287F3C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80287F40: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80287F44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80287F48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80287F4C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80287F50: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x80287F54: addiu       $t5, $zero, 0x50
    ctx->r13 = ADD32(0, 0X50);
    // 0x80287F58: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80287F5C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x80287F60: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80287F64: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80287F68: lw          $a0, 0x1C0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287F6C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80287F70: addiu       $a3, $zero, 0x54
    ctx->r7 = ADD32(0, 0X54);
    // 0x80287F74: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x80287F78: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x80287F7C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80287F80: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80287F84: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x80287F88: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80287F8C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80287F90: jal         0x802B8788
    // 0x80287F94: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    static_3_802B8788(rdram, ctx);
        goto after_50;
    // 0x80287F94: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_50:
    // 0x80287F98: lw          $t6, 0x1C0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287F9C: addiu       $s0, $sp, 0x7C
    ctx->r16 = ADD32(ctx->r29, 0X7C);
    // 0x80287FA0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80287FA4: lw          $t8, 0x78($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X78);
    // 0x80287FA8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80287FAC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80287FB0: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80287FB4: beq         $t9, $zero, L_80288040
    if (ctx->r25 == 0) {
        // 0x80287FB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80288040;
    }
    // 0x80287FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80287FBC: jal         0x8023072C
    // 0x80287FC0: lbu         $a2, 0x0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_51;
    // 0x80287FC0: lbu         $a2, 0x0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X0);
    after_51:
    // 0x80287FC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80287FC8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80287FCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80287FD0: jal         0x8021E708
    // 0x80287FD4: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    static_3_8021E708(rdram, ctx);
        goto after_52;
    // 0x80287FD4: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_52:
    // 0x80287FD8: jal         0x8021E66C
    // 0x80287FDC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_8021E66C(rdram, ctx);
        goto after_53;
    // 0x80287FDC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_53:
    // 0x80287FE0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80287FE4: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    // 0x80287FE8: jal         0x8021E87C
    // 0x80287FEC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_54;
    // 0x80287FEC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_54:
    // 0x80287FF0: lw          $t0, 0x1C0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C0);
    // 0x80287FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80287FF8: jal         0x802AEE88
    // 0x80287FFC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    static_3_802AEE88(rdram, ctx);
        goto after_55;
    // 0x80287FFC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_55:
    // 0x80288000: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80288004: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80288008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028800C: jal         0x8023072C
    // 0x80288010: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    static_3_8023072C(rdram, ctx);
        goto after_56;
    // 0x80288010: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_56:
    // 0x80288014: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80288018: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8028801C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80288020: jal         0x8021E708
    // 0x80288024: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    static_3_8021E708(rdram, ctx);
        goto after_57;
    // 0x80288024: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_57:
    // 0x80288028: jal         0x8021E66C
    // 0x8028802C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    static_3_8021E66C(rdram, ctx);
        goto after_58;
    // 0x8028802C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_58:
    // 0x80288030: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80288034: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80288038: jal         0x8021E87C
    // 0x8028803C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_59;
    // 0x8028803C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_59:
L_80288040:
    // 0x80288040: jal         0x802230E4
    // 0x80288044: nop

    static_3_802230E4(rdram, ctx);
        goto after_60;
    // 0x80288044: nop

    after_60:
    // 0x80288048: jal         0x8022337C
    // 0x8028804C: nop

    static_3_8022337C(rdram, ctx);
        goto after_61;
    // 0x8028804C: nop

    after_61:
    // 0x80288050: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80288054:
    // 0x80288054: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x80288058: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x8028805C: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80288060: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80288064: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x80288068: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x8028806C: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80288070: jr          $ra
    // 0x80288074: addiu       $sp, $sp, 0x1C0
    ctx->r29 = ADD32(ctx->r29, 0X1C0);
    return;
    // 0x80288074: addiu       $sp, $sp, 0x1C0
    ctx->r29 = ADD32(ctx->r29, 0X1C0);
;}
RECOMP_FUNC void D_80242B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242B50: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80242B54: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80242B58: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80242B5C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80242B60: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80242B64: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80242B68: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80242B6C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80242B70: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80242B74: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80242B78: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80242B7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80242B80: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80242B84: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x80242B88: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80242B8C: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x80242B90: ori         $t6, $t6, 0x440
    ctx->r14 = ctx->r14 | 0X440;
    // 0x80242B94: ori         $t7, $t7, 0x580
    ctx->r15 = ctx->r15 | 0X580;
    // 0x80242B98: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80242B9C: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x80242BA0: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x80242BA4: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x80242BA8: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x80242BAC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80242BB0: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x80242BB4: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x80242BB8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80242BBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80242BC0: blez        $t8, L_80242C3C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80242BC4: addiu       $s3, $t0, 0x10
        ctx->r19 = ADD32(ctx->r8, 0X10);
            goto L_80242C3C;
    }
    // 0x80242BC4: addiu       $s3, $t0, 0x10
    ctx->r19 = ADD32(ctx->r8, 0X10);
    // 0x80242BC8: lui         $s2, 0xC00
    ctx->r18 = S32(0XC00 << 16);
    // 0x80242BCC: ori         $s2, $s2, 0x7FFF
    ctx->r18 = ctx->r18 | 0X7FFF;
    // 0x80242BD0: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x80242BD4: andi        $s6, $v0, 0xFFFF
    ctx->r22 = ctx->r2 & 0XFFFF;
L_80242BD8:
    // 0x80242BD8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80242BDC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80242BE0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80242BE4: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80242BE8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80242BEC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x80242BF0: jalr        $t9
    // 0x80242BF4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80242BF4: nop

    after_0:
    // 0x80242BF8: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x80242BFC: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x80242C00: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x80242C04: ori         $t2, $t2, 0x440
    ctx->r10 = ctx->r10 | 0X440;
    // 0x80242C08: ori         $t3, $t3, 0x580
    ctx->r11 = ctx->r11 | 0X580;
    // 0x80242C0C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80242C10: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    // 0x80242C14: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80242C18: sw          $s2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r18;
    // 0x80242C1C: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x80242C20: sw          $s2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r18;
    // 0x80242C24: lw          $t4, 0x14($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X14);
    // 0x80242C28: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80242C2C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80242C30: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80242C34: bne         $at, $zero, L_80242BD8
    if (ctx->r1 != 0) {
        // 0x80242C38: addiu       $s3, $v0, 0x18
        ctx->r19 = ADD32(ctx->r2, 0X18);
            goto L_80242BD8;
    }
    // 0x80242C38: addiu       $s3, $v0, 0x18
    ctx->r19 = ADD32(ctx->r2, 0X18);
L_80242C3C:
    // 0x80242C3C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80242C40: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80242C44: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80242C48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80242C4C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80242C50: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80242C54: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80242C58: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80242C5C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80242C60: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80242C64: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80242C68: jr          $ra
    // 0x80242C6C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80242C6C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802907B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290834: jr          $ra
    // 0x80290838: lbu         $v0, 0xF1C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF1C);
    return;
    // 0x80290838: lbu         $v0, 0xF1C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF1C);
;}
RECOMP_FUNC void D_802C6A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C6AB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C6ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C6AC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802C6AC4: beq         $a0, $zero, L_802C6B00
    if (ctx->r4 == 0) {
        // 0x802C6AC8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802C6B00;
    }
    // 0x802C6AC8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802C6ACC: addiu       $at, $zero, -0x180
    ctx->r1 = ADD32(0, -0X180);
    // 0x802C6AD0: beq         $a0, $at, L_802C6AE8
    if (ctx->r4 == ctx->r1) {
        // 0x802C6AD4: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_802C6AE8;
    }
    // 0x802C6AD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802C6AD8: addiu       $a0, $a0, 0x1A0
    ctx->r4 = ADD32(ctx->r4, 0X1A0);
    // 0x802C6ADC: jal         0x80302FA4
    // 0x802C6AE0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80302FA4(rdram, ctx);
        goto after_0;
    // 0x802C6AE0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802C6AE4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_802C6AE8:
    // 0x802C6AE8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802C6AEC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802C6AF0: beql        $t7, $zero, L_802C6B04
    if (ctx->r15 == 0) {
        // 0x802C6AF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802C6B04;
    }
    goto skip_0;
    // 0x802C6AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802C6AF8: jal         0x802C681C
    // 0x802C6AFC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802C6AFC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
L_802C6B00:
    // 0x802C6B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802C6B04:
    // 0x802C6B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C6B08: jr          $ra
    // 0x802C6B0C: nop

    return;
    // 0x802C6B0C: nop

;}
RECOMP_FUNC void D_802386FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802386FC: jr          $ra
    // 0x80238700: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    return;
    // 0x80238700: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void D_8027A370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A3E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A3EC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A3F0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A3F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027A3F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027A3FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027A400: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A404: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A408: addiu       $a1, $t6, 0x6824
    ctx->r5 = ADD32(ctx->r14, 0X6824);
    // 0x8027A40C: addiu       $a0, $a0, 0x6810
    ctx->r4 = ADD32(ctx->r4, 0X6810);
    // 0x8027A410: addiu       $a3, $t6, 0x6825
    ctx->r7 = ADD32(ctx->r14, 0X6825);
    // 0x8027A414: jal         0x802A2570
    // 0x8027A418: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    static_3_802A2570(rdram, ctx);
        goto after_0;
    // 0x8027A418: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x8027A41C: beq         $v0, $zero, L_8027A43C
    if (ctx->r2 == 0) {
        // 0x8027A420: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027A43C;
    }
    // 0x8027A420: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A424: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A428: jal         0x8028AA50
    // 0x8027A42C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_8028AA50(rdram, ctx);
        goto after_1;
    // 0x8027A42C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027A430: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027A434: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027A438: sh          $t8, 0x1304($a0)
    MEM_H(0X1304, ctx->r4) = ctx->r24;
L_8027A43C:
    // 0x8027A43C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027A444: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8027A448: jr          $ra
    // 0x8027A44C: nop

    return;
    // 0x8027A44C: nop

;}
RECOMP_FUNC void D_80222C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222C6C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80222C70: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80222C74: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x80222C78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80222C7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222C80: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80222C84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80222C88: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
    // 0x80222C8C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80222C90: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80222C94: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80222C98: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80222C9C: jal         0x80231C58
    // 0x80222CA0: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80222CA0: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    after_0:
    // 0x80222CA4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80222CA8: beq         $v0, $zero, L_80222CC0
    if (ctx->r2 == 0) {
        // 0x80222CAC: addiu       $v1, $v1, 0x0
        ctx->r3 = ADD32(ctx->r3, 0X0);
            goto L_80222CC0;
    }
    // 0x80222CAC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80222CB0: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80222CB4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80222CB8: b           L_80222CEC
    // 0x80222CBC: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
        goto L_80222CEC;
    // 0x80222CBC: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
L_80222CC0:
    // 0x80222CC0: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80222CC4: lhu         $t0, 0x0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X0);
    // 0x80222CC8: lh          $t3, 0x0($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X0);
    // 0x80222CCC: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80222CD0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80222CD4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80222CD8: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x80222CDC: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x80222CE0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80222CE4: jal         0x802291F8
    // 0x80222CE8: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    static_3_802291F8(rdram, ctx);
        goto after_1;
    // 0x80222CE8: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    after_1:
L_80222CEC:
    // 0x80222CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80222CF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80222CF4: jr          $ra
    // 0x80222CF8: nop

    return;
    // 0x80222CF8: nop

;}
RECOMP_FUNC void D_8021E380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E380: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021E384: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021E388: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8021E38C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8021E390: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8021E394: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8021E398: lbu         $t9, 0x2($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2);
    // 0x8021E39C: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x8021E3A0: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8021E3A4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8021E3A8: jr          $ra
    // 0x8021E3AC: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
    return;
    // 0x8021E3AC: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
;}
RECOMP_FUNC void D_802CFE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CFE90: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802CFE94: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802CFE98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CFE9C: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CFEA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CFEA4: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x802CFEA8: lwc1        $f28, 0x0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CFEAC: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x802CFEB0: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x802CFEB4: c.lt.s      $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f20.fl < ctx->f28.fl;
    // 0x802CFEB8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802CFEBC: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x802CFEC0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802CFEC4: bc1f        L_802CFF14
    if (!c1cs) {
        // 0x802CFEC8: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802CFF14;
    }
    // 0x802CFEC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CFECC: ldc1        $f24, 0x0($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, 0X0);
L_802CFED0:
    // 0x802CFED0: jal         0x8022AA60
    // 0x802CFED4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    static_3_8022AA60(rdram, ctx);
        goto after_0;
    // 0x802CFED4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x802CFED8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x802CFEDC: jal         0x80300424
    // 0x802CFEE0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    static_3_80300424(rdram, ctx);
        goto after_1;
    // 0x802CFEE0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x802CFEE4: jal         0x80234B48
    // 0x802CFEE8: sub.s       $f12, $f22, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f22.fl - ctx->f0.fl;
    static_3_80234B48(rdram, ctx);
        goto after_2;
    // 0x802CFEE8: sub.s       $f12, $f22, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f22.fl - ctx->f0.fl;
    after_2:
    // 0x802CFEEC: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x802CFEF0: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x802CFEF4: add.d       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = ctx->f4.d + ctx->f24.d;
    // 0x802CFEF8: bc1f        L_802CFF04
    if (!c1cs) {
        // 0x802CFEFC: cvt.s.d     $f20, $f6
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
            goto L_802CFF04;
    }
    // 0x802CFEFC: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x802CFF00: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
L_802CFF04:
    // 0x802CFF04: c.lt.s      $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f20.fl < ctx->f28.fl;
    // 0x802CFF08: nop

    // 0x802CFF0C: bc1t        L_802CFED0
    if (c1cs) {
        // 0x802CFF10: nop
    
            goto L_802CFED0;
    }
    // 0x802CFF10: nop

L_802CFF14:
    // 0x802CFF14: cvt.d.s     $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f8.d = CVT_D_S(ctx->f26.fl);
    // 0x802CFF18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CFF1C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802CFF20: mfc1        $a2, $f9
    ctx->r6 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x802CFF24: jal         0x80231A24
    // 0x802CFF28: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802CFF28: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x802CFF2C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802CFF30: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802CFF34: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x802CFF38: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x802CFF3C: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x802CFF40: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x802CFF44: jr          $ra
    // 0x802CFF48: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802CFF48: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_80202238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80202238: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8020223C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80202240: lhu         $a1, 0x0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X0);
    // 0x80202244: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80202248: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8020224C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80202250: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80202254: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80202258: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8020225C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80202260: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80202264: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80202268: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8020226C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80202270: blez        $a1, L_802023A4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80202274: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_802023A4;
    }
    // 0x80202274: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80202278: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x8020227C: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80202280: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80202284: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x80202288: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8020228C: addiu       $s7, $zero, 0x10
    ctx->r23 = ADD32(0, 0X10);
    // 0x80202290: addiu       $s6, $zero, 0x8
    ctx->r22 = ADD32(0, 0X8);
    // 0x80202294: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x80202298: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
L_8020229C:
    // 0x8020229C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802022A0: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x802022A4: lbu         $t6, 0xAC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XAC);
    // 0x802022A8: bnel        $s5, $t6, L_80202398
    if (ctx->r21 != ctx->r14) {
        // 0x802022AC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80202398;
    }
    goto skip_0;
    // 0x802022AC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x802022B0: lw          $v1, 0xA0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XA0);
    // 0x802022B4: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    // 0x802022B8: beq         $s5, $v1, L_802022DC
    if (ctx->r21 == ctx->r3) {
        // 0x802022BC: nop
    
            goto L_802022DC;
    }
    // 0x802022BC: nop

    // 0x802022C0: beq         $s4, $v1, L_802022DC
    if (ctx->r20 == ctx->r3) {
        // 0x802022C4: nop
    
            goto L_802022DC;
    }
    // 0x802022C4: nop

    // 0x802022C8: beq         $s6, $v1, L_802022DC
    if (ctx->r22 == ctx->r3) {
        // 0x802022CC: nop
    
            goto L_802022DC;
    }
    // 0x802022CC: nop

    // 0x802022D0: lw          $t7, 0xA8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA8);
    // 0x802022D4: bnel        $s7, $t7, L_80202398
    if (ctx->r23 != ctx->r15) {
        // 0x802022D8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80202398;
    }
    goto skip_1;
    // 0x802022D8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
L_802022DC:
    // 0x802022DC: bne         $s4, $v1, L_802022F0
    if (ctx->r20 != ctx->r3) {
        // 0x802022E0: addu        $v0, $a0, $s1
        ctx->r2 = ADD32(ctx->r4, ctx->r17);
            goto L_802022F0;
    }
    // 0x802022E0: addu        $v0, $a0, $s1
    ctx->r2 = ADD32(ctx->r4, ctx->r17);
    // 0x802022E4: lbu         $t8, 0xB0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XB0);
    // 0x802022E8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802022EC: sb          $t9, 0xB0($v0)
    MEM_B(0XB0, ctx->r2) = ctx->r25;
L_802022F0:
    // 0x802022F0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x802022F4: jal         0x80202424
    // 0x802022F8: lhu         $a1, 0x42($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X42);
    static_3_80202424(rdram, ctx);
        goto after_0;
    // 0x802022F8: lhu         $a1, 0x42($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X42);
    after_0:
    // 0x802022FC: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80202300: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80202304: addu        $v0, $t0, $s1
    ctx->r2 = ADD32(ctx->r8, ctx->r17);
    // 0x80202308: lw          $t1, 0x88($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X88);
    // 0x8020230C: lw          $t2, 0xA4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XA4);
    // 0x80202310: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80202314: beq         $t3, $zero, L_80202338
    if (ctx->r11 == 0) {
        // 0x80202318: nop
    
            goto L_80202338;
    }
    // 0x80202318: nop

    // 0x8020231C: lw          $t4, 0xA0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XA0);
    // 0x80202320: bne         $s4, $t4, L_80202384
    if (ctx->r20 != ctx->r12) {
        // 0x80202324: nop
    
            goto L_80202384;
    }
    // 0x80202324: nop

    // 0x80202328: lbu         $t5, 0xB0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XB0);
    // 0x8020232C: slti        $at, $t5, 0x5
    ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
    // 0x80202330: bne         $at, $zero, L_80202384
    if (ctx->r1 != 0) {
        // 0x80202334: nop
    
            goto L_80202384;
    }
    // 0x80202334: nop

L_80202338:
    // 0x80202338: jal         0x802011D0
    // 0x8020233C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802011D0(rdram, ctx);
        goto after_1;
    // 0x8020233C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x80202340: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80202344: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x80202348: lw          $t8, 0x98($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X98);
    // 0x8020234C: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x80202350: beq         $t9, $zero, L_80202368
    if (ctx->r25 == 0) {
        // 0x80202354: nop
    
            goto L_80202368;
    }
    // 0x80202354: nop

    // 0x80202358: jal         0x80201FB8
    // 0x8020235C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    static_3_80201FB8(rdram, ctx);
        goto after_2;
    // 0x8020235C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x80202360: b           L_80202378
    // 0x80202364: nop

        goto L_80202378;
    // 0x80202364: nop

L_80202368:
    // 0x80202368: jal         0x80201FB8
    // 0x8020236C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    static_3_80201FB8(rdram, ctx);
        goto after_3;
    // 0x8020236C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_3:
    // 0x80202370: jal         0x80201F14
    // 0x80202374: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    static_3_80201F14(rdram, ctx);
        goto after_4;
    // 0x80202374: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_4:
L_80202378:
    // 0x80202378: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8020237C: b           L_80202394
    // 0x80202380: lhu         $a1, 0x0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X0);
        goto L_80202394;
    // 0x80202380: lhu         $a1, 0x0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X0);
L_80202384:
    // 0x80202384: jal         0x8020292C
    // 0x80202388: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    static_3_8020292C(rdram, ctx);
        goto after_5;
    // 0x80202388: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_5:
    // 0x8020238C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80202390: lhu         $a1, 0x0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X0);
L_80202394:
    // 0x80202394: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80202398:
    // 0x80202398: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8020239C: bne         $at, $zero, L_8020229C
    if (ctx->r1 != 0) {
        // 0x802023A0: addiu       $s1, $s1, 0xB4
        ctx->r17 = ADD32(ctx->r17, 0XB4);
            goto L_8020229C;
    }
    // 0x802023A0: addiu       $s1, $s1, 0xB4
    ctx->r17 = ADD32(ctx->r17, 0XB4);
L_802023A4:
    // 0x802023A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802023A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802023AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802023B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802023B4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802023B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802023BC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802023C0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802023C4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802023C8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802023CC: jr          $ra
    // 0x802023D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802023D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802D2F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2FAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D2FB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D2FB4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D2FB8: lbu         $t6, 0x10($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X10);
    // 0x802D2FBC: beql        $t6, $zero, L_802D3028
    if (ctx->r14 == 0) {
        // 0x802D2FC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802D3028;
    }
    goto skip_0;
    // 0x802D2FC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802D2FC4: jal         0x80303770
    // 0x802D2FC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80303770(rdram, ctx);
        goto after_0;
    // 0x802D2FC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D2FCC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x802D2FD0: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x802D2FD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802D2FD8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D2FDC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802D2FE0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D2FE4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802D2FE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D2FEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D2FF0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802D2FF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802D2FF8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802D2FFC: swc1        $f16, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f16.u32l;
    // 0x802D3000: jal         0x8022AA40
    // 0x802D3004: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    static_3_8022AA40(rdram, ctx);
        goto after_1;
    // 0x802D3004: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    after_1:
    // 0x802D3008: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x802D300C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D3010: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802D3014: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x802D3018: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802D301C: jal         0x802001AC
    // 0x802D3020: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_802001AC(rdram, ctx);
        goto after_2;
    // 0x802D3020: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802D3024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D3028:
    // 0x802D3028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D302C: jr          $ra
    // 0x802D3030: nop

    return;
    // 0x802D3030: nop

;}
RECOMP_FUNC void D_8029E40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029E48C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8029E490: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8029E494: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8029E498: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8029E49C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8029E4A0: jal         0x8021F4E4
    // 0x8029E4A4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    static_3_8021F4E4(rdram, ctx);
        goto after_0;
    // 0x8029E4A4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8029E4A8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8029E4AC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8029E4B0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8029E4B4: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x8029E4B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E4BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E4C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E4C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E4C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E4CC: jal         0x8021F35C
    // 0x8029E4D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_1;
    // 0x8029E4D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x8029E4D4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8029E4D8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8029E4DC: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8029E4E0: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x8029E4E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E4E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E4EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E4F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E4F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E4F8: jal         0x8021F35C
    // 0x8029E4FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_2;
    // 0x8029E4FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_2:
    // 0x8029E500: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8029E504: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8029E508: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8029E50C: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8029E510: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E514: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E518: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E51C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E520: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E524: jal         0x8021F35C
    // 0x8029E528: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_3;
    // 0x8029E528: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
    // 0x8029E52C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8029E530: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8029E534: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8029E538: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8029E53C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E540: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E544: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E548: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E54C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E550: jal         0x8021F35C
    // 0x8029E554: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_4;
    // 0x8029E554: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_4:
    // 0x8029E558: jal         0x8021FCD0
    // 0x8029E55C: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_5;
    // 0x8029E55C: nop

    after_5:
    // 0x8029E560: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x8029E564: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x8029E568: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x8029E56C: jal         0x8021E708
    // 0x8029E570: lbu         $a3, 0x43($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X43);
    static_3_8021E708(rdram, ctx);
        goto after_6;
    // 0x8029E570: lbu         $a3, 0x43($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X43);
    after_6:
    // 0x8029E574: jal         0x8021E66C
    // 0x8029E578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_7;
    // 0x8029E578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x8029E57C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8029E580: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8029E584: jal         0x802CE360
    // 0x8029E588: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    static_3_802CE360(rdram, ctx);
        goto after_8;
    // 0x8029E588: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    after_8:
    // 0x8029E58C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029E590: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x8029E594: jal         0x8021E87C
    // 0x8029E598: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    static_3_8021E87C(rdram, ctx);
        goto after_9;
    // 0x8029E598: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_9:
    // 0x8029E59C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8029E5A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8029E5A4: jr          $ra
    // 0x8029E5A8: nop

    return;
    // 0x8029E5A8: nop

;}
RECOMP_FUNC void D_8027F8E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F960: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8027F964: jr          $ra
    // 0x8027F968: swc1        $f12, 0x32AC($a0)
    MEM_W(0X32AC, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x8027F968: swc1        $f12, 0x32AC($a0)
    MEM_W(0X32AC, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802B76E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B776C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7770: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7774: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B7778: beq         $t6, $zero, L_802B778C
    if (ctx->r14 == 0) {
        // 0x802B777C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B778C;
    }
    // 0x802B777C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B7780: jal         0x80303578
    // 0x802B7784: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B7784: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    after_0:
    // 0x802B7788: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B778C:
    // 0x802B778C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B7794: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B7798: jr          $ra
    // 0x802B779C: nop

    return;
    // 0x802B779C: nop

;}
RECOMP_FUNC void D_8022A4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A4A4: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8022A4A8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8022A4AC: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8022A4B0: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8022A4B4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8022A4B8: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8022A4BC: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A4C0: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8022A4C4: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8022A4C8: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x8022A4CC: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8022A4D0: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8022A4D4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8022A4D8: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x8022A4DC: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A4E0: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A4E4: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A4E8: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8022A4EC: nop

    // 0x8022A4F0: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8022A4F4: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8022A4F8: mul.s       $f18, $f12, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8022A4FC: lwc1        $f16, 0x34($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8022A500: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8022A504: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8022A508: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x8022A50C: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A510: lwc1        $f18, 0x18($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A514: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A518: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8022A51C: nop

    // 0x8022A520: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8022A524: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8022A528: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x8022A52C: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8022A530: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8022A534: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8022A538: jr          $ra
    // 0x8022A53C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    return;
    // 0x8022A53C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
;}
RECOMP_FUNC void D_802ECE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECE8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ECE90: bne         $a0, $zero, L_802ECEA8
    if (ctx->r4 != 0) {
        // 0x802ECE94: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802ECEA8;
    }
    // 0x802ECE94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ECE98: jal         0x802C67EC
    // 0x802ECE9C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ECE9C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802ECEA0: beq         $v0, $zero, L_802ECF00
    if (ctx->r2 == 0) {
        // 0x802ECEA4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802ECF00;
    }
    // 0x802ECEA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802ECEA8:
    // 0x802ECEA8: jal         0x8031C47C
    // 0x802ECEAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ECEAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802ECEB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ECEB4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802ECEB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ECEBC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802ECEC0: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802ECEC4: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802ECEC8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ECECC: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x802ECED0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ECED4: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802ECED8: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802ECEDC: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802ECEE0: sh          $t8, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r24;
    // 0x802ECEE4: sh          $t9, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r25;
    // 0x802ECEE8: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802ECEEC: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802ECEF0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ECEF4: jal         0x8031D66C
    // 0x802ECEF8: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031D66C(rdram, ctx);
        goto after_2;
    // 0x802ECEF8: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802ECEFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802ECF00:
    // 0x802ECF00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ECF04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ECF08: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802ECF0C: jr          $ra
    // 0x802ECF10: nop

    return;
    // 0x802ECF10: nop

;}
RECOMP_FUNC void D_802923D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292458: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x8029245C: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x80292460: addiu       $s2, $sp, 0xAC
    ctx->r18 = ADD32(ctx->r29, 0XAC);
    // 0x80292464: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x80292468: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x8029246C: sw          $a1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r5;
    // 0x80292470: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80292474: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x80292478: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x8029247C: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x80292480: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x80292484: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x80292488: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x8029248C: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x80292490: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x80292494: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x80292498: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x8029249C: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x802924A0: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x802924A4: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x802924A8: sw          $a2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r6;
    // 0x802924AC: jal         0x802C51D0
    // 0x802924B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x802924B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x802924B4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802924B8: addiu       $t6, $sp, 0xF8
    ctx->r14 = ADD32(ctx->r29, 0XF8);
    // 0x802924BC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802924C0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802924C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802924C8: lwc1        $f4, 0x154($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X154);
    // 0x802924CC: addiu       $s7, $sp, 0x108
    ctx->r23 = ADD32(ctx->r29, 0X108);
    // 0x802924D0: addiu       $fp, $sp, 0x100
    ctx->r30 = ADD32(ctx->r29, 0X100);
    // 0x802924D4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802924D8: lwc1        $f6, 0x158($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X158);
    // 0x802924DC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x802924E0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x802924E4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x802924E8: lw          $t8, 0x8C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X8C);
    // 0x802924EC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802924F0: jal         0x802ADA50
    // 0x802924F4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    static_3_802ADA50(rdram, ctx);
        goto after_1;
    // 0x802924F4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_1:
    // 0x802924F8: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x802924FC: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80292500: lwc1        $f22, 0xE0($s3)
    ctx->f22.u32l = MEM_W(ctx->r19, 0XE0);
    // 0x80292504: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x80292508: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x8029250C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80292510: jal         0x8022A0D0
    // 0x80292514: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x80292514: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_2:
    // 0x80292518: bne         $s6, $zero, L_80292598
    if (ctx->r22 != 0) {
        // 0x8029251C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80292598;
    }
    // 0x8029251C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80292520: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80292524: lwc1        $f28, 0x0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80292528: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8029252C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80292530: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80292534: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80292538: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8029253C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80292540: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80292544: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x80292548: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x8029254C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80292550: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80292554: lw          $t9, 0x8C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X8C);
    // 0x80292558: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8029255C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80292560: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80292564: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80292568: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8029256C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80292570: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80292574: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    // 0x80292578: jal         0x802AB018
    // 0x8029257C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    static_3_802AB018(rdram, ctx);
        goto after_3;
    // 0x8029257C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_3:
    // 0x80292580: beq         $v0, $zero, L_80292714
    if (ctx->r2 == 0) {
        // 0x80292584: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80292714;
    }
    // 0x80292584: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80292588: jal         0x802D18D4
    // 0x8029258C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802D18D4(rdram, ctx);
        goto after_4;
    // 0x8029258C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80292590: b           L_80292718
    // 0x80292594: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
        goto L_80292718;
    // 0x80292594: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
L_80292598:
    // 0x80292598: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8029259C: jal         0x802C5844
    // 0x802925A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C5844(rdram, ctx);
        goto after_5;
    // 0x802925A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x802925A4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802925A8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x802925AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802925B0: lwc1        $f28, 0x0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802925B4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802925B8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x802925BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802925C0: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x802925C4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_802925C8:
    // 0x802925C8: bgez        $s0, L_802925DC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x802925CC: andi        $t2, $s0, 0x1
        ctx->r10 = ctx->r16 & 0X1;
            goto L_802925DC;
    }
    // 0x802925CC: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x802925D0: beq         $t2, $zero, L_802925DC
    if (ctx->r10 == 0) {
        // 0x802925D4: nop
    
            goto L_802925DC;
    }
    // 0x802925D4: nop

    // 0x802925D8: addiu       $t2, $t2, -0x2
    ctx->r10 = ADD32(ctx->r10, -0X2);
L_802925DC:
    // 0x802925DC: bne         $s4, $t2, L_802925FC
    if (ctx->r20 != ctx->r10) {
        // 0x802925E0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_802925FC;
    }
    // 0x802925E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802925E4: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x802925E8: nop

    // 0x802925EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802925F0: mul.s       $f20, $f24, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x802925F4: b           L_80292620
    // 0x802925F8: sub.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f20.fl;
        goto L_80292620;
    // 0x802925F8: sub.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f20.fl;
L_802925FC:
    // 0x802925FC: negu        $t3, $s0
    ctx->r11 = SUB32(0, ctx->r16);
    // 0x80292600: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80292604: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x80292608: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8029260C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80292610: mul.s       $f20, $f24, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x80292614: nop

    // 0x80292618: mul.s       $f16, $f24, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x8029261C: sub.s       $f22, $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f16.fl;
L_80292620:
    // 0x80292620: jal         0x802C51D0
    // 0x80292624: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802C51D0(rdram, ctx);
        goto after_6;
    // 0x80292624: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x80292628: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8029262C: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80292630: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x80292634: jal         0x8022A0D0
    // 0x80292638: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_8022A0D0(rdram, ctx);
        goto after_7;
    // 0x80292638: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_7:
    // 0x8029263C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80292640: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80292644: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80292648: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8029264C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80292650: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80292654: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x80292658: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8029265C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80292660: jal         0x802D01D4
    // 0x80292664: nop

    static_3_802D01D4(rdram, ctx);
        goto after_8;
    // 0x80292664: nop

    after_8:
    // 0x80292668: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8029266C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80292670: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80292674: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80292678: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8029267C: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x80292680: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x80292684: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80292688: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x8029268C: lw          $t4, 0x8C($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X8C);
    // 0x80292690: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80292694: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x80292698: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8029269C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x802926A0: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x802926A4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x802926A8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802926AC: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    // 0x802926B0: jal         0x802AB018
    // 0x802926B4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    static_3_802AB018(rdram, ctx);
        goto after_9;
    // 0x802926B4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_9:
    // 0x802926B8: beq         $v0, $zero, L_802926F8
    if (ctx->r2 == 0) {
        // 0x802926BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802926F8;
    }
    // 0x802926BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802926C0: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x802926C4: addu        $v1, $sp, $v0
    ctx->r3 = ADD32(ctx->r29, ctx->r2);
    // 0x802926C8: lw          $v1, 0xF8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XF8);
    // 0x802926CC: addu        $t7, $s7, $v0
    ctx->r15 = ADD32(ctx->r23, ctx->r2);
    // 0x802926D0: bne         $s4, $v1, L_802926E8
    if (ctx->r20 != ctx->r3) {
        // 0x802926D4: nop
    
            goto L_802926E8;
    }
    // 0x802926D4: nop

    // 0x802926D8: jal         0x802D0CC0
    // 0x802926DC: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    static_3_802D0CC0(rdram, ctx);
        goto after_10;
    // 0x802926DC: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    after_10:
    // 0x802926E0: b           L_802926FC
    // 0x802926E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_802926FC;
    // 0x802926E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802926E8:
    // 0x802926E8: bne         $s5, $v1, L_802926F8
    if (ctx->r21 != ctx->r3) {
        // 0x802926EC: addu        $t8, $fp, $v0
        ctx->r24 = ADD32(ctx->r30, ctx->r2);
            goto L_802926F8;
    }
    // 0x802926EC: addu        $t8, $fp, $v0
    ctx->r24 = ADD32(ctx->r30, ctx->r2);
    // 0x802926F0: jal         0x802D0C7C
    // 0x802926F4: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    static_3_802D0C7C(rdram, ctx);
        goto after_11;
    // 0x802926F4: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    after_11:
L_802926F8:
    // 0x802926F8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802926FC:
    // 0x802926FC: slt         $at, $s1, $s6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80292700: bne         $at, $zero, L_8029270C
    if (ctx->r1 != 0) {
        // 0x80292704: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8029270C;
    }
    // 0x80292704: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80292708: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8029270C:
    // 0x8029270C: bne         $s0, $s5, L_802925C8
    if (ctx->r16 != ctx->r21) {
        // 0x80292710: nop
    
            goto L_802925C8;
    }
    // 0x80292710: nop

L_80292714:
    // 0x80292714: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
L_80292718:
    // 0x80292718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8029271C: swc1        $f4, 0xF4($s3)
    MEM_W(0XF4, ctx->r19) = ctx->f4.u32l;
    // 0x80292720: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x80292724: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x80292728: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x8029272C: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x80292730: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x80292734: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x80292738: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x8029273C: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x80292740: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x80292744: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x80292748: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x8029274C: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x80292750: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x80292754: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x80292758: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x8029275C: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x80292760: jr          $ra
    // 0x80292764: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x80292764: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void D_8022CAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CAF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022CAFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022CB00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CB04: jal         0x802070D4
    // 0x8022CB08: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    static_3_802070D4(rdram, ctx);
        goto after_0;
    // 0x8022CB08: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x8022CB0C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022CB10: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022CB14: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8022CB18: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8022CB1C: bnel        $t6, $zero, L_8022CE08
    if (ctx->r14 != 0) {
        // 0x8022CB20: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8022CE08;
    }
    goto skip_0;
    // 0x8022CB20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8022CB24: lbu         $a2, 0x0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X0);
    // 0x8022CB28: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022CB2C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CB30: beq         $a2, $zero, L_8022CB50
    if (ctx->r6 == 0) {
        // 0x8022CB34: sw          $t7, 0x0($at)
        MEM_W(0X0, ctx->r1) = ctx->r15;
            goto L_8022CB50;
    }
    // 0x8022CB34: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x8022CB38: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CB3C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022CB40: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8022CB44: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8022CB48: b           L_8022CB5C
    // 0x8022CB4C: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
        goto L_8022CB5C;
    // 0x8022CB4C: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
L_8022CB50:
    // 0x8022CB50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CB54: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022CB58: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_8022CB5C:
    // 0x8022CB5C: lbu         $a3, 0x0($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X0);
    // 0x8022CB60: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022CB64: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022CB68: beq         $a3, $zero, L_8022CB88
    if (ctx->r7 == 0) {
        // 0x8022CB6C: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_8022CB88;
    }
    // 0x8022CB6C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8022CB70: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022CB74: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022CB78: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x8022CB7C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8022CB80: b           L_8022CB8C
    // 0x8022CB84: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
        goto L_8022CB8C;
    // 0x8022CB84: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
L_8022CB88:
    // 0x8022CB88: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_8022CB8C:
    // 0x8022CB8C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022CB90: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CB94: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x8022CB98: bnel        $at, $zero, L_8022CBBC
    if (ctx->r1 != 0) {
        // 0x8022CB9C: lbu         $t2, 0x0($v1)
        ctx->r10 = MEM_BU(ctx->r3, 0X0);
            goto L_8022CBBC;
    }
    goto skip_1;
    // 0x8022CB9C: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    skip_1:
    // 0x8022CBA0: jal         0x80231A24
    // 0x8022CBA4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022CBA4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x8022CBA8: jal         0x8022C7C8
    // 0x8022CBAC: nop

    static_3_8022C7C8(rdram, ctx);
        goto after_2;
    // 0x8022CBAC: nop

    after_2:
    // 0x8022CBB0: b           L_8022CE08
    // 0x8022CBB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022CE08;
    // 0x8022CBB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CBB8: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
L_8022CBBC:
    // 0x8022CBBC: addiu       $t3, $v0, 0x32
    ctx->r11 = ADD32(ctx->r2, 0X32);
    // 0x8022CBC0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CBC4: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8022CBC8: beq         $at, $zero, L_8022CC04
    if (ctx->r1 == 0) {
        // 0x8022CBCC: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_8022CC04;
    }
    // 0x8022CBCC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022CBD0: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8022CBD4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8022CBD8: jal         0x80231A24
    // 0x8022CBDC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x8022CBDC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_3:
    // 0x8022CBE0: jal         0x8022D3F0
    // 0x8022CBE4: nop

    static_3_8022D3F0(rdram, ctx);
        goto after_4;
    // 0x8022CBE4: nop

    after_4:
    // 0x8022CBE8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CBEC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022CBF0: addiu       $a1, $zero, 0x29C
    ctx->r5 = ADD32(0, 0X29C);
    // 0x8022CBF4: jal         0x80236B80
    // 0x8022CBF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_5;
    // 0x8022CBF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8022CBFC: b           L_8022CE08
    // 0x8022CC00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022CE08;
    // 0x8022CC00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022CC04:
    // 0x8022CC04: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x8022CC08: bne         $a2, $at, L_8022CC24
    if (ctx->r6 != ctx->r1) {
        // 0x8022CC0C: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_8022CC24;
    }
    // 0x8022CC0C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022CC10: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CC14: jal         0x80231A24
    // 0x8022CC18: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x8022CC18: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x8022CC1C: b           L_8022CE08
    // 0x8022CC20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022CE08;
    // 0x8022CC20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022CC24:
    // 0x8022CC24: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022CC28: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CC2C: beq         $t4, $zero, L_8022CC50
    if (ctx->r12 == 0) {
        // 0x8022CC30: nop
    
            goto L_8022CC50;
    }
    // 0x8022CC30: nop

    // 0x8022CC34: jal         0x8022D4EC
    // 0x8022CC38: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    static_3_8022D4EC(rdram, ctx);
        goto after_7;
    // 0x8022CC38: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    after_7:
    // 0x8022CC3C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8022CC40: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x8022CC44: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CC48: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x8022CC4C: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
L_8022CC50:
    // 0x8022CC50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CC54: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022CC58: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8022CC5C: jal         0x802374B0
    // 0x8022CC60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802374B0(rdram, ctx);
        goto after_8;
    // 0x8022CC60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8022CC64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022CC68: beq         $v0, $at, L_8022CD0C
    if (ctx->r2 == ctx->r1) {
        // 0x8022CC6C: lui         $s0, 0x0
        ctx->r16 = S32(0X0 << 16);
            goto L_8022CD0C;
    }
    // 0x8022CC6C: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8022CC70: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x8022CC74: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_8022CC78:
    // 0x8022CC78: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8022CC7C: bne         $t7, $zero, L_8022CC94
    if (ctx->r15 != 0) {
        // 0x8022CC80: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8022CC94;
    }
    // 0x8022CC80: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CC84: jal         0x80231A24
    // 0x8022CC88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_9;
    // 0x8022CC88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_9:
    // 0x8022CC8C: b           L_8022CD0C
    // 0x8022CC90: nop

        goto L_8022CD0C;
    // 0x8022CC90: nop

L_8022CC94:
    // 0x8022CC94: lw          $v0, 0x10($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X10);
    // 0x8022CC98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022CC9C: bnel        $v0, $at, L_8022CCC8
    if (ctx->r2 != ctx->r1) {
        // 0x8022CCA0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8022CCC8;
    }
    goto skip_2;
    // 0x8022CCA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_2:
    // 0x8022CCA4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CCA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CCAC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8022CCB0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8022CCB4: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x8022CCB8: xori        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 ^ 0X1;
    // 0x8022CCBC: b           L_8022CCEC
    // 0x8022CCC0: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_8022CCEC;
    // 0x8022CCC0: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x8022CCC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8022CCC8:
    // 0x8022CCC8: bne         $v0, $at, L_8022CCE0
    if (ctx->r2 != ctx->r1) {
        // 0x8022CCCC: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8022CCE0;
    }
    // 0x8022CCCC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CCD0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8022CCD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CCD8: b           L_8022CCEC
    // 0x8022CCDC: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
        goto L_8022CCEC;
    // 0x8022CCDC: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
L_8022CCE0:
    // 0x8022CCE0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022CCE4: jal         0x80231A24
    // 0x8022CCE8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    static_3_80231A24(rdram, ctx);
        goto after_10;
    // 0x8022CCE8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_10:
L_8022CCEC:
    // 0x8022CCEC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CCF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022CCF4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8022CCF8: jal         0x802374B0
    // 0x8022CCFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802374B0(rdram, ctx);
        goto after_11;
    // 0x8022CCFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x8022CD00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022CD04: bnel        $v0, $at, L_8022CC78
    if (ctx->r2 != ctx->r1) {
        // 0x8022CD08: lw          $t7, 0x34($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X34);
            goto L_8022CC78;
    }
    goto skip_3;
    // 0x8022CD08: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    skip_3:
L_8022CD0C:
    // 0x8022CD0C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8022CD10: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8022CD14: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8022CD18: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022CD1C: beq         $t2, $zero, L_8022CDB0
    if (ctx->r10 == 0) {
        // 0x8022CD20: nop
    
            goto L_8022CDB0;
    }
    // 0x8022CD20: nop

    // 0x8022CD24: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x8022CD28: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x8022CD2C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8022CD30: bne         $t3, $at, L_8022CDA0
    if (ctx->r11 != ctx->r1) {
        // 0x8022CD34: nop
    
            goto L_8022CDA0;
    }
    // 0x8022CD34: nop

    // 0x8022CD38: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x8022CD3C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CD40: beq         $t4, $zero, L_8022CD50
    if (ctx->r12 == 0) {
        // 0x8022CD44: nop
    
            goto L_8022CD50;
    }
    // 0x8022CD44: nop

    // 0x8022CD48: jal         0x80231A24
    // 0x8022CD4C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_12;
    // 0x8022CD4C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_12:
L_8022CD50:
    // 0x8022CD50: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022CD54: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022CD58: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CD5C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022CD60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CD64: beq         $t5, $zero, L_8022CD88
    if (ctx->r13 == 0) {
        // 0x8022CD68: addiu       $a1, $zero, 0x31
        ctx->r5 = ADD32(0, 0X31);
            goto L_8022CD88;
    }
    // 0x8022CD68: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8022CD6C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022CD70: jal         0x80231A24
    // 0x8022CD74: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_13;
    // 0x8022CD74: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_13:
    // 0x8022CD78: jal         0x8022C7C8
    // 0x8022CD7C: nop

    static_3_8022C7C8(rdram, ctx);
        goto after_14;
    // 0x8022CD7C: nop

    after_14:
    // 0x8022CD80: b           L_8022CE08
    // 0x8022CD84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022CE08;
    // 0x8022CD84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022CD88:
    // 0x8022CD88: jal         0x8022D560
    // 0x8022CD8C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    static_3_8022D560(rdram, ctx);
        goto after_15;
    // 0x8022CD8C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    after_15:
    // 0x8022CD90: jal         0x8023E010
    // 0x8022CD94: nop

    static_3_8023E010(rdram, ctx);
        goto after_16;
    // 0x8022CD94: nop

    after_16:
    // 0x8022CD98: b           L_8022CDD4
    // 0x8022CD9C: nop

        goto L_8022CDD4;
    // 0x8022CD9C: nop

L_8022CDA0:
    // 0x8022CDA0: jal         0x8022C620
    // 0x8022CDA4: nop

    static_3_8022C620(rdram, ctx);
        goto after_17;
    // 0x8022CDA4: nop

    after_17:
    // 0x8022CDA8: b           L_8022CDD4
    // 0x8022CDAC: nop

        goto L_8022CDD4;
    // 0x8022CDAC: nop

L_8022CDB0:
    // 0x8022CDB0: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x8022CDB4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8022CDB8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8022CDBC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8022CDC0: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8022CDC4: beq         $t9, $zero, L_8022CDD4
    if (ctx->r25 == 0) {
        // 0x8022CDC8: nop
    
            goto L_8022CDD4;
    }
    // 0x8022CDC8: nop

    // 0x8022CDCC: jal         0x8022C6A4
    // 0x8022CDD0: nop

    static_3_8022C6A4(rdram, ctx);
        goto after_18;
    // 0x8022CDD0: nop

    after_18:
L_8022CDD4:
    // 0x8022CDD4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022CDD8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8022CDDC: lw          $s0, 0x260($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X260);
    // 0x8022CDE0: beq         $s0, $zero, L_8022CE04
    if (ctx->r16 == 0) {
        // 0x8022CDE4: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_8022CE04;
    }
L_8022CDE4:
    // 0x8022CDE4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022CDE8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8022CDEC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8022CDF0: jal         0x80236B80
    // 0x8022CDF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_19;
    // 0x8022CDF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x8022CDF8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8022CDFC: bne         $s0, $zero, L_8022CDE4
    if (ctx->r16 != 0) {
        // 0x8022CE00: nop
    
            goto L_8022CDE4;
    }
    // 0x8022CE00: nop

L_8022CE04:
    // 0x8022CE04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022CE08:
    // 0x8022CE08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CE0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022CE10: jr          $ra
    // 0x8022CE14: nop

    return;
    // 0x8022CE14: nop

;}
RECOMP_FUNC void D_80218CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80218CE4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80218CE8: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x80218CEC: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80218CF0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80218CF4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80218CF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218CFC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80218D00: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80218D04: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80218D08: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80218D0C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80218D10: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80218D14: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80218D18: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x80218D1C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80218D20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80218D24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218D28: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    // 0x80218D2C: add.s       $f22, $f16, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f16.fl;
    // 0x80218D30: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80218D34: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80218D38: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80218D3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80218D40: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80218D44: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x80218D48: mul.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80218D4C: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x80218D50: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80218D54: bc1f        L_80218DBC
    if (!c1cs) {
        // 0x80218D58: lwc1        $f2, 0x20($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
            goto L_80218DBC;
    }
    // 0x80218D58: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80218D5C: sub.s       $f24, $f12, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f12.fl - ctx->f20.fl;
    // 0x80218D60: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
L_80218D64:
    // 0x80218D64: nop

    // 0x80218D68: bc1fl       L_80218DA0
    if (!c1cs) {
        // 0x80218D6C: add.s       $f0, $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
            goto L_80218DA0;
    }
    goto skip_0;
    // 0x80218D6C: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
    skip_0:
    // 0x80218D70: add.s       $f4, $f12, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x80218D74: ori         $t6, $zero, 0x8888
    ctx->r14 = 0 | 0X8888;
    // 0x80218D78: srav        $t7, $t6, $v0
    ctx->r15 = S32(SIGNED(ctx->r14) >> (ctx->r2 & 31));
    // 0x80218D7C: sub.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80218D80: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x80218D84: nop

    // 0x80218D88: bc1fl       L_80218DA0
    if (!c1cs) {
        // 0x80218D8C: add.s       $f0, $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
            goto L_80218DA0;
    }
    goto skip_1;
    // 0x80218D8C: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
    skip_1:
    // 0x80218D90: or          $a0, $a0, $t7
    ctx->r4 = ctx->r4 | ctx->r15;
    // 0x80218D94: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x80218D98: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80218D9C: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
L_80218DA0:
    // 0x80218DA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80218DA4: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x80218DA8: nop

    // 0x80218DAC: bc1fl       L_80218DC0
    if (!c1cs) {
        // 0x80218DB0: add.s       $f12, $f18, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f18.fl;
            goto L_80218DC0;
    }
    goto skip_2;
    // 0x80218DB0: add.s       $f12, $f18, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f18.fl;
    skip_2:
    // 0x80218DB4: bnel        $v0, $a1, L_80218D64
    if (ctx->r2 != ctx->r5) {
        // 0x80218DB8: c.le.s      $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
            goto L_80218D64;
    }
    goto skip_3;
    // 0x80218DB8: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    skip_3:
L_80218DBC:
    // 0x80218DBC: add.s       $f12, $f18, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f18.fl;
L_80218DC0:
    // 0x80218DC0: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80218DC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80218DC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218DCC: c.le.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl <= ctx->f12.fl;
    // 0x80218DD0: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x80218DD4: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x80218DD8: bc1fl       L_80218E48
    if (!c1cs) {
        // 0x80218DDC: and         $v0, $v1, $a0
        ctx->r2 = ctx->r3 & ctx->r4;
            goto L_80218E48;
    }
    goto skip_4;
    // 0x80218DDC: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
    skip_4:
    // 0x80218DE0: sub.s       $f0, $f14, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f20.fl;
    // 0x80218DE4: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
L_80218DE8:
    // 0x80218DE8: nop

    // 0x80218DEC: bc1fl       L_80218E28
    if (!c1cs) {
        // 0x80218DF0: add.s       $f2, $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
            goto L_80218E28;
    }
    goto skip_5;
    // 0x80218DF0: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    skip_5:
    // 0x80218DF4: add.s       $f6, $f14, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f20.fl;
    // 0x80218DF8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80218DFC: ori         $t0, $zero, 0xF000
    ctx->r8 = 0 | 0XF000;
    // 0x80218E00: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x80218E04: srav        $t1, $t0, $t9
    ctx->r9 = S32(SIGNED(ctx->r8) >> (ctx->r25 & 31));
    // 0x80218E08: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80218E0C: nop

    // 0x80218E10: bc1fl       L_80218E28
    if (!c1cs) {
        // 0x80218E14: add.s       $f2, $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
            goto L_80218E28;
    }
    goto skip_6;
    // 0x80218E14: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    skip_6:
    // 0x80218E18: or          $v1, $v1, $t1
    ctx->r3 = ctx->r3 | ctx->r9;
    // 0x80218E1C: andi        $t2, $v1, 0xFFFF
    ctx->r10 = ctx->r3 & 0XFFFF;
    // 0x80218E20: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x80218E24: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
L_80218E28:
    // 0x80218E28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80218E2C: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x80218E30: nop

    // 0x80218E34: bc1fl       L_80218E48
    if (!c1cs) {
        // 0x80218E38: and         $v0, $v1, $a0
        ctx->r2 = ctx->r3 & ctx->r4;
            goto L_80218E48;
    }
    goto skip_7;
    // 0x80218E38: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
    skip_7:
    // 0x80218E3C: bnel        $v0, $a1, L_80218DE8
    if (ctx->r2 != ctx->r5) {
        // 0x80218E40: c.le.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
            goto L_80218DE8;
    }
    goto skip_8;
    // 0x80218E40: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    skip_8:
    // 0x80218E44: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
L_80218E48:
    // 0x80218E48: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x80218E4C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80218E50: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80218E54: jr          $ra
    // 0x80218E58: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x80218E58: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
;}
RECOMP_FUNC void D_8029CCE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029CD68: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8029CD6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8029CD70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8029CD74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8029CD78: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8029CD7C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8029CD80: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8029CD84: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8029CD88: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8029CD8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029CD90: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x8029CD94: sw          $a2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r6;
    // 0x8029CD98: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    // 0x8029CD9C: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
    // 0x8029CDA0: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
    // 0x8029CDA4: sw          $t7, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r15;
    // 0x8029CDA8: sb          $t8, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r24;
    // 0x8029CDAC: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8029CDB0: jal         0x80224CA8
    // 0x8029CDB4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x8029CDB4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x8029CDB8: jal         0x80224CA8
    // 0x8029CDBC: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x8029CDBC: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_1:
    // 0x8029CDC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029CDC4: jal         0x80205AA0
    // 0x8029CDC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80205AA0(rdram, ctx);
        goto after_2;
    // 0x8029CDC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8029CDCC: jal         0x8022970C
    // 0x8029CDD0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x8029CDD0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x8029CDD4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8029CDD8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8029CDDC: jal         0x80228DE0
    // 0x8029CDE0: addiu       $a0, $v0, 0x4DD4
    ctx->r4 = ADD32(ctx->r2, 0X4DD4);
    func_80228DE0(rdram, ctx);
        goto after_4;
    // 0x8029CDE0: addiu       $a0, $v0, 0x4DD4
    ctx->r4 = ADD32(ctx->r2, 0X4DD4);
    after_4:
    // 0x8029CDE4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8029CDE8: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x8029CDEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029CDF0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8029CDF4: jal         0x80205E0C
    // 0x8029CDF8: sw          $t9, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r25;
    static_3_80205E0C(rdram, ctx);
        goto after_5;
    // 0x8029CDF8: sw          $t9, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r25;
    after_5:
    // 0x8029CDFC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8029CE00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8029CE04: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8029CE08: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8029CE0C: jal         0x8021CEF8
    // 0x8029CE10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021CEF8(rdram, ctx);
        goto after_6;
    // 0x8029CE10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x8029CE14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029CE18: jal         0x80205E0C
    // 0x8029CE1C: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    static_3_80205E0C(rdram, ctx);
        goto after_7;
    // 0x8029CE1C: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    after_7:
    // 0x8029CE20: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8029CE24: ori         $t1, $zero, 0xFFFF
    ctx->r9 = 0 | 0XFFFF;
    // 0x8029CE28: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x8029CE2C: sw          $t1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r9;
    // 0x8029CE30: jal         0x802CA14C
    // 0x8029CE34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA14C(rdram, ctx);
        goto after_8;
    // 0x8029CE34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8029CE38: jal         0x80223E1C
    // 0x8029CE3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_80223E1C(rdram, ctx);
        goto after_9;
    // 0x8029CE3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x8029CE40: sb          $v0, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r2;
    // 0x8029CE44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029CE48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029CE4C: jal         0x80309B88
    // 0x8029CE50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309B88(rdram, ctx);
        goto after_10;
    // 0x8029CE50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x8029CE54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8029CE58: sb          $v1, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r3;
    // 0x8029CE5C: sb          $v1, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r3;
    // 0x8029CE60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8029CE64: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8029CE68: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8029CE6C: jr          $ra
    // 0x8029CE70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8029CE70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_80298C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298D1C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80298D20: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80298D24: jr          $ra
    // 0x80298D28: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x80298D28: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802D2680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2700: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x802D2704: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D2708: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x802D270C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D2710: jr          $ra
    // 0x802D2714: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x802D2714: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_8029E64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029E6CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8029E6D0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8029E6D4: jal         0x8021F4E4
    // 0x8029E6D8: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_0;
    // 0x8029E6D8: nop

    after_0:
    // 0x8029E6DC: addiu       $t6, $zero, 0xCC
    ctx->r14 = ADD32(0, 0XCC);
    // 0x8029E6E0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8029E6E4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8029E6E8: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x8029E6EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E6F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E6F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E6F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E6FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E700: jal         0x8021F35C
    // 0x8029E704: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_1;
    // 0x8029E704: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x8029E708: addiu       $t7, $zero, 0xCC
    ctx->r15 = ADD32(0, 0XCC);
    // 0x8029E70C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8029E710: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8029E714: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x8029E718: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E71C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E724: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E728: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E72C: jal         0x8021F35C
    // 0x8029E730: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_2;
    // 0x8029E730: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_2:
    // 0x8029E734: addiu       $t8, $zero, 0xCC
    ctx->r24 = ADD32(0, 0XCC);
    // 0x8029E738: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8029E73C: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8029E740: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    // 0x8029E744: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E748: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E74C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E750: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E754: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E758: jal         0x8021F35C
    // 0x8029E75C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_3;
    // 0x8029E75C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
    // 0x8029E760: addiu       $t9, $zero, 0xCC
    ctx->r25 = ADD32(0, 0XCC);
    // 0x8029E764: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8029E768: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8029E76C: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    // 0x8029E770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E774: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E778: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E77C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E780: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E784: jal         0x8021F35C
    // 0x8029E788: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_4;
    // 0x8029E788: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_4:
    // 0x8029E78C: jal         0x8021FCD0
    // 0x8029E790: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_5;
    // 0x8029E790: nop

    after_5:
    // 0x8029E794: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8029E798: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8029E79C: jr          $ra
    // 0x8029E7A0: nop

    return;
    // 0x8029E7A0: nop

;}
RECOMP_FUNC void D_802A21E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2260: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A2264: jr          $ra
    // 0x802A2268: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A2268: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802E857C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E85FC: lw          $t6, 0xF4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF4);
    // 0x802E8600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802E8604: beq         $t6, $zero, L_802E8614
    if (ctx->r14 == 0) {
        // 0x802E8608: nop
    
            goto L_802E8614;
    }
    // 0x802E8608: nop

    // 0x802E860C: jr          $ra
    // 0x802E8610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E8610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802E8614:
    // 0x802E8614: jr          $ra
    // 0x802E8618: nop

    return;
    // 0x802E8618: nop

;}
RECOMP_FUNC void D_80234AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234AA0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80234AA4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80234AA8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80234AAC: lui         $at, 0x41C6
    ctx->r1 = S32(0X41C6 << 16);
    // 0x80234AB0: ori         $at, $at, 0x4E6D
    ctx->r1 = ctx->r1 | 0X4E6D;
    // 0x80234AB4: multu       $t6, $at
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234AB8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80234ABC: mflo        $t7
    ctx->r15 = lo;
    // 0x80234AC0: addiu       $t8, $t7, 0x3039
    ctx->r24 = ADD32(ctx->r15, 0X3039);
    // 0x80234AC4: srl         $t9, $t8, 16
    ctx->r25 = S32(U32(ctx->r24) >> 16);
    // 0x80234AC8: andi        $v0, $t9, 0x7FFF
    ctx->r2 = ctx->r25 & 0X7FFF;
    // 0x80234ACC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80234AD0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80234AD4: bgez        $v0, L_80234AE8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234AD8: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80234AE8;
    }
    // 0x80234AD8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80234ADC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80234AE0: nop

    // 0x80234AE4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80234AE8:
    // 0x80234AE8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80234AEC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80234AF0: jr          $ra
    // 0x80234AF4: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    return;
    // 0x80234AF4: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
;}
RECOMP_FUNC void D_80241730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241730: mfc0        $t0, Status
    ctx->r8 = cop0_status_read(ctx);
    // 0x80241734: or          $t0, $t0, $a0
    ctx->r8 = ctx->r8 | ctx->r4;
    // 0x80241738: mtc0        $t0, Status
    cop0_status_write(ctx, ctx->r8);    // 0x8024173C: nop

    // 0x80241740: nop

    // 0x80241744: jr          $ra
    // 0x80241748: nop

    return;
    // 0x80241748: nop

;}
RECOMP_FUNC void D_802CF828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CF8A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802CF8AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CF8B0: lwc1        $f6, 0x368($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X368);
    // 0x802CF8B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802CF8B8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802CF8BC: nop

    // 0x802CF8C0: bc1fl       L_802CF8D0
    if (!c1cs) {
        // 0x802CF8C4: andi        $t6, $v0, 0xFF
        ctx->r14 = ctx->r2 & 0XFF;
            goto L_802CF8D0;
    }
    goto skip_0;
    // 0x802CF8C4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    skip_0:
    // 0x802CF8C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802CF8CC: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
L_802CF8D0:
    // 0x802CF8D0: jr          $ra
    // 0x802CF8D4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x802CF8D4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void D_8029F9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029FA68: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x8029FA6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029FA70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8029FA74: sh          $a0, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r4;
    // 0x8029FA78: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029FA7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8029FA80: sh          $a1, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r5;
    // 0x8029FA84: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029FA88: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x8029FA8C: sb          $a2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r6;
    // 0x8029FA90: lbu         $t1, 0x13($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X13);
    // 0x8029FA94: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029FA98: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x8029FA9C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8029FAA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8029FAA4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8029FAA8: jr          $ra
    // 0x8029FAAC: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    return;
    // 0x8029FAAC: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
;}
RECOMP_FUNC void D_802ED08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED10C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ED110: bne         $a0, $zero, L_802ED128
    if (ctx->r4 != 0) {
        // 0x802ED114: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802ED128;
    }
    // 0x802ED114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ED118: jal         0x802C67EC
    // 0x802ED11C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ED11C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802ED120: beq         $v0, $zero, L_802ED180
    if (ctx->r2 == 0) {
        // 0x802ED124: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802ED180;
    }
    // 0x802ED124: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802ED128:
    // 0x802ED128: jal         0x8031C47C
    // 0x802ED12C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ED12C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802ED130: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ED134: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802ED138: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED13C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802ED140: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802ED144: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802ED148: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ED14C: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x802ED150: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED154: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802ED158: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802ED15C: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802ED160: sh          $t8, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r24;
    // 0x802ED164: sh          $t9, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r25;
    // 0x802ED168: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802ED16C: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802ED170: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED174: jal         0x8031D8EC
    // 0x802ED178: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031D8EC(rdram, ctx);
        goto after_2;
    // 0x802ED178: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802ED17C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802ED180:
    // 0x802ED180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ED184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ED188: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802ED18C: jr          $ra
    // 0x802ED190: nop

    return;
    // 0x802ED190: nop

;}
RECOMP_FUNC void D_80223F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223F74: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223F78: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223F7C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80223F80: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80223F84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223F88: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80223F8C: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x80223F90: and         $t9, $t8, $a1
    ctx->r25 = ctx->r24 & ctx->r5;
    // 0x80223F94: beql        $t9, $zero, L_80223FB8
    if (ctx->r25 == 0) {
        // 0x80223F98: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80223FB8;
    }
    goto skip_0;
    // 0x80223F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80223F9C: lw          $t0, 0x14($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X14);
    // 0x80223FA0: and         $t1, $t0, $a1
    ctx->r9 = ctx->r8 & ctx->r5;
    // 0x80223FA4: bnel        $t1, $zero, L_80223FB8
    if (ctx->r9 != 0) {
        // 0x80223FA8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80223FB8;
    }
    goto skip_1;
    // 0x80223FA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80223FAC: jr          $ra
    // 0x80223FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80223FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80223FB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223FB8:
    // 0x80223FB8: jr          $ra
    // 0x80223FBC: nop

    return;
    // 0x80223FBC: nop

;}
RECOMP_FUNC void D_802AC38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC40C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AC410: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AC414: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AC418: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AC41C: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x802AC420: jal         0x8021ACB0
    // 0x802AC424: addiu       $a1, $zero, 0x75
    ctx->r5 = ADD32(0, 0X75);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AC424: addiu       $a1, $zero, 0x75
    ctx->r5 = ADD32(0, 0X75);
    after_0:
    // 0x802AC428: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AC42C: jal         0x8021B838
    // 0x802AC430: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AC430: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AC434: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AC438: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AC43C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AC440: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802AC444: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x802AC448: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AC44C: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AC450: lh          $t7, 0xB8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB8);
    // 0x802AC454: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802AC458: jalr        $t9
    // 0x802AC45C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AC45C: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_2:
    // 0x802AC460: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802AC464: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802AC468: jal         0x802FD4B0
    // 0x802AC46C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802AC46C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x802AC470: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802AC474: jal         0x802FD498
    // 0x802AC478: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802AC478: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802AC47C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802AC480: jal         0x802FD4A4
    // 0x802AC484: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802AC484: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    after_5:
    // 0x802AC488: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802AC48C: jal         0x802FD480
    // 0x802AC490: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802AC490: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    after_6:
    // 0x802AC494: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802AC498: jal         0x802FD48C
    // 0x802AC49C: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802AC49C: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    after_7:
    // 0x802AC4A0: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x802AC4A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802AC4A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AC4AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AC4B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AC4B4: jal         0x80317194
    // 0x802AC4B8: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802AC4B8: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802AC4BC: addiu       $v0, $zero, 0x3A
    ctx->r2 = ADD32(0, 0X3A);
    // 0x802AC4C0: addiu       $t0, $zero, 0x39
    ctx->r8 = ADD32(0, 0X39);
    // 0x802AC4C4: addiu       $t1, $zero, 0x3B
    ctx->r9 = ADD32(0, 0X3B);
    // 0x802AC4C8: addiu       $t2, $zero, 0x38
    ctx->r10 = ADD32(0, 0X38);
    // 0x802AC4CC: sw          $t0, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r8;
    // 0x802AC4D0: sw          $v0, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r2;
    // 0x802AC4D4: sw          $v0, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r2;
    // 0x802AC4D8: sw          $t1, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r9;
    // 0x802AC4DC: sw          $t2, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r10;
    // 0x802AC4E0: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AC4E4: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AC4E8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x802AC4EC: jal         0x802D51DC
    // 0x802AC4F0: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802AC4F0: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_9:
    // 0x802AC4F4: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AC4F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AC4FC: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AC500: jal         0x802C4A20
    // 0x802AC504: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802AC504: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802AC508: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AC50C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802AC510: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AC514: jal         0x802C4A20
    // 0x802AC518: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_11;
    // 0x802AC518: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_11:
    // 0x802AC51C: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AC520: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x802AC524: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802AC528: jal         0x802C4A20
    // 0x802AC52C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802AC52C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802AC530: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AC534: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802AC538: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802AC53C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802AC540: jal         0x802C4A20
    // 0x802AC544: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    static_3_802C4A20(rdram, ctx);
        goto after_13;
    // 0x802AC544: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    after_13:
    // 0x802AC548: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802AC54C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AC550: jal         0x802C5858
    // 0x802AC554: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    static_3_802C5858(rdram, ctx);
        goto after_14;
    // 0x802AC554: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_14:
    // 0x802AC558: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802AC55C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AC560: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802AC564: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AC568: lui         $at, 0x4507
    ctx->r1 = S32(0X4507 << 16);
    // 0x802AC56C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AC570: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AC574: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AC578: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802AC57C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AC580: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AC584: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AC588: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802AC58C: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x802AC590: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x802AC594: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802AC598: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
    // 0x802AC59C: jal         0x8022970C
    // 0x802AC5A0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x802AC5A0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_15:
    // 0x802AC5A4: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802AC5A8: jal         0x8022970C
    // 0x802AC5AC: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x802AC5AC: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_16:
    // 0x802AC5B0: lui         $a1, 0xC082
    ctx->r5 = S32(0XC082 << 16);
    // 0x802AC5B4: lui         $a2, 0x3E16
    ctx->r6 = S32(0X3E16 << 16);
    // 0x802AC5B8: lui         $a3, 0x3CBC
    ctx->r7 = S32(0X3CBC << 16);
    // 0x802AC5BC: ori         $a3, $a3, 0x6A7F
    ctx->r7 = ctx->r7 | 0X6A7F;
    // 0x802AC5C0: ori         $a2, $a2, 0x872B
    ctx->r6 = ctx->r6 | 0X872B;
    // 0x802AC5C4: ori         $a1, $a1, 0xB852
    ctx->r5 = ctx->r5 | 0XB852;
    // 0x802AC5C8: jal         0x8022A0D0
    // 0x802AC5CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802AC5CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_17:
    // 0x802AC5D0: lui         $a1, 0x4082
    ctx->r5 = S32(0X4082 << 16);
    // 0x802AC5D4: lui         $a2, 0x3E16
    ctx->r6 = S32(0X3E16 << 16);
    // 0x802AC5D8: lui         $a3, 0x3CBC
    ctx->r7 = S32(0X3CBC << 16);
    // 0x802AC5DC: ori         $a3, $a3, 0x6A7F
    ctx->r7 = ctx->r7 | 0X6A7F;
    // 0x802AC5E0: ori         $a2, $a2, 0x872B
    ctx->r6 = ctx->r6 | 0X872B;
    // 0x802AC5E4: ori         $a1, $a1, 0xB852
    ctx->r5 = ctx->r5 | 0XB852;
    // 0x802AC5E8: jal         0x8022A0D0
    // 0x802AC5EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8022A0D0(rdram, ctx);
        goto after_18;
    // 0x802AC5EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x802AC5F0: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802AC5F4: jal         0x803169A0
    // 0x802AC5F8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_803169A0(rdram, ctx);
        goto after_19;
    // 0x802AC5F8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_19:
    // 0x802AC5FC: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802AC600: jal         0x803169A0
    // 0x802AC604: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_20;
    // 0x802AC604: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_20:
    // 0x802AC608: jal         0x802DD568
    // 0x802AC60C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802DD568(rdram, ctx);
        goto after_21;
    // 0x802AC60C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x802AC610: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802AC614: sb          $t3, 0x968($s0)
    MEM_B(0X968, ctx->r16) = ctx->r11;
    // 0x802AC618: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AC61C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AC620: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802AC624: jr          $ra
    // 0x802AC628: nop

    return;
    // 0x802AC628: nop

;}
RECOMP_FUNC void D_8029FA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029FAB0: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8029FAB4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029FAB8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8029FABC: jr          $ra
    // 0x8029FAC0: sh          $a1, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r5;
    return;
    // 0x8029FAC0: sh          $a1, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void D_802202F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802202F0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802202F4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802202F8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802202FC: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80220300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80220304: bne         $v0, $t6, L_80220320
    if (ctx->r2 != ctx->r14) {
        // 0x80220308: sw          $ra, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r31;
            goto L_80220320;
    }
    // 0x80220308: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022030C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80220310: jal         0x80231A24
    // 0x80220314: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80220314: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80220318: b           L_802204D8
    // 0x8022031C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802204D8;
    // 0x8022031C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80220320:
    // 0x80220320: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80220324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80220328: jal         0x80203C18
    // 0x8022032C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80203C18(rdram, ctx);
        goto after_1;
    // 0x8022032C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80220330: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80220334: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80220338: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8022033C: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80220340: ori         $t8, $t8, 0x6
    ctx->r24 = ctx->r24 | 0X6;
    // 0x80220344: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80220348: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8022034C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80220350: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80220354: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80220358: lui         $t0, 0xFF10
    ctx->r8 = S32(0XFF10 << 16);
    // 0x8022035C: ori         $t0, $t0, 0x13F
    ctx->r8 = ctx->r8 | 0X13F;
    // 0x80220360: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80220364: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80220368: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022036C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80220370: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80220374: jal         0x802375F0
    // 0x80220378: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x80220378: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022037C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80220380: jal         0x802206A0
    // 0x80220384: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    static_3_802206A0(rdram, ctx);
        goto after_3;
    // 0x80220384: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    after_3:
    // 0x80220388: jal         0x8021DDE4
    // 0x8022038C: nop

    static_3_8021DDE4(rdram, ctx);
        goto after_4;
    // 0x8022038C: nop

    after_4:
    // 0x80220390: jal         0x802333B0
    // 0x80220394: nop

    static_3_802333B0(rdram, ctx);
        goto after_5;
    // 0x80220394: nop

    after_5:
    // 0x80220398: jal         0x8021F440
    // 0x8022039C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8021F440(rdram, ctx);
        goto after_6;
    // 0x8022039C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x802203A0: jal         0x8022818C
    // 0x802203A4: nop

    static_3_8022818C(rdram, ctx);
        goto after_7;
    // 0x802203A4: nop

    after_7:
    // 0x802203A8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802203AC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802203B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802203B4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802203B8: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x802203BC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802203C0: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802203C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802203C8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802203CC: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802203D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802203D4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802203D8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802203DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802203E0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802203E4: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802203E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802203EC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802203F0: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802203F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802203F8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x802203FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220400: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80220404: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80220408: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8022040C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80220410: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x80220414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80220418: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8022041C: blez        $t2, L_80220468
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80220420: lui         $a2, 0x8000
        ctx->r6 = S32(0X8000 << 16);
            goto L_80220468;
    }
    // 0x80220420: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80220424: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80220428: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022042C: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
L_80220430:
    // 0x80220430: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80220434: addu        $v0, $t3, $v1
    ctx->r2 = ADD32(ctx->r11, ctx->r3);
    // 0x80220438: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8022043C: or          $t5, $t4, $a2
    ctx->r13 = ctx->r12 | ctx->r6;
    // 0x80220440: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80220444: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80220448: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8022044C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80220450: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80220454: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x80220458: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x8022045C: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80220460: bnel        $at, $zero, L_80220430
    if (ctx->r1 != 0) {
        // 0x80220464: lw          $t3, 0x0($a0)
        ctx->r11 = MEM_W(ctx->r4, 0X0);
            goto L_80220430;
    }
    goto skip_0;
    // 0x80220464: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    skip_0:
L_80220468:
    // 0x80220468: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022046C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80220470: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x80220474: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80220478: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022047C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80220480: jal         0x8022975C
    // 0x80220484: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    static_3_8022975C(rdram, ctx);
        goto after_8;
    // 0x80220484: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_8:
    // 0x80220488: addiu       $t1, $sp, 0x58
    ctx->r9 = ADD32(ctx->r29, 0X58);
    // 0x8022048C: addiu       $t3, $t1, 0x3C
    ctx->r11 = ADD32(ctx->r9, 0X3C);
    // 0x80220490: or          $t4, $sp, $zero
    ctx->r12 = ctx->r29 | 0;
L_80220494:
    // 0x80220494: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80220498: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x8022049C: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x802204A0: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x802204A4: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x802204A8: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x802204AC: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x802204B0: bne         $t1, $t3, L_80220494
    if (ctx->r9 != ctx->r11) {
        // 0x802204B4: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_80220494;
    }
    // 0x802204B4: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x802204B8: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802204BC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x802204C0: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x802204C4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x802204C8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x802204CC: jal         0x802207E8
    // 0x802204D0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    static_3_802207E8(rdram, ctx);
        goto after_9;
    // 0x802204D0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_9:
    // 0x802204D4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802204D8:
    // 0x802204D8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x802204DC: jr          $ra
    // 0x802204E0: nop

    return;
    // 0x802204E0: nop

;}
RECOMP_FUNC void D_802400A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802400A0: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x802400A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802400A8: addiu       $a2, $a1, -0x4
    ctx->r6 = ADD32(ctx->r5, -0X4);
    // 0x802400AC: beq         $v1, $zero, L_80240108
    if (ctx->r3 == 0) {
        // 0x802400B0: nop
    
            goto L_80240108;
    }
    // 0x802400B0: nop

L_802400B4:
    // 0x802400B4: bnel        $v1, $a2, L_802400FC
    if (ctx->r3 != ctx->r6) {
        // 0x802400B8: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_802400FC;
    }
    goto skip_0;
    // 0x802400B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x802400BC: beql        $v0, $zero, L_802400D4
    if (ctx->r2 == 0) {
        // 0x802400C0: lw          $t7, 0x0($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X0);
            goto L_802400D4;
    }
    goto skip_1;
    // 0x802400C0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x802400C4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802400C8: b           L_802400D8
    // 0x802400CC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_802400D8;
    // 0x802400CC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802400D0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
L_802400D4:
    // 0x802400D4: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
L_802400D8:
    // 0x802400D8: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x802400DC: bnel        $v1, $t8, L_802400EC
    if (ctx->r3 != ctx->r24) {
        // 0x802400E0: lw          $t9, 0x6C($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X6C);
            goto L_802400EC;
    }
    goto skip_2;
    // 0x802400E0: lw          $t9, 0x6C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X6C);
    skip_2:
    // 0x802400E4: sw          $v0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r2;
    // 0x802400E8: lw          $t9, 0x6C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X6C);
L_802400EC:
    // 0x802400EC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802400F0: jr          $ra
    // 0x802400F4: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    return;
    // 0x802400F4: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    // 0x802400F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802400FC:
    // 0x802400FC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80240100: bne         $v1, $zero, L_802400B4
    if (ctx->r3 != 0) {
        // 0x80240104: nop
    
            goto L_802400B4;
    }
    // 0x80240104: nop

L_80240108:
    // 0x80240108: jr          $ra
    // 0x8024010C: nop

    return;
    // 0x8024010C: nop

;}
RECOMP_FUNC void D_802D7D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D7E14: jr          $ra
    // 0x802D7E18: lbu         $v0, 0x47C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X47C);
    return;
    // 0x802D7E18: lbu         $v0, 0x47C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X47C);
;}
RECOMP_FUNC void D_8029EAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029EB6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029EB70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029EB74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8029EB78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029EB7C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x8029EB80: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x8029EB84: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8029EB88: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8029EB8C: jal         0x8022970C
    // 0x8029EB90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x8029EB90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8029EB94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029EB98: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8029EB9C: jal         0x802D01D4
    // 0x8029EBA0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_1;
    // 0x8029EBA0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_1:
    // 0x8029EBA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029EBA8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8029EBAC: jal         0x802D01D4
    // 0x8029EBB0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x8029EBB0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_2:
    // 0x8029EBB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029EBB8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8029EBBC: jal         0x802D01D4
    // 0x8029EBC0: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    static_3_802D01D4(rdram, ctx);
        goto after_3;
    // 0x8029EBC0: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_3:
    // 0x8029EBC4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8029EBC8: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x8029EBCC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8029EBD0: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x8029EBD4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8029EBD8: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x8029EBDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029EBE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029EBE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029EBE8: jr          $ra
    // 0x8029EBEC: nop

    return;
    // 0x8029EBEC: nop

;}
RECOMP_FUNC void D_80291BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80291C64: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80291C68: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80291C6C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80291C70: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80291C74: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x80291C78: lw          $v0, 0xF8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF8);
    // 0x80291C7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80291C80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80291C84: bgez        $v0, L_80291C98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80291C88: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_80291C98;
    }
    // 0x80291C88: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80291C8C: beq         $t6, $zero, L_80291C98
    if (ctx->r14 == 0) {
        // 0x80291C90: nop
    
            goto L_80291C98;
    }
    // 0x80291C90: nop

    // 0x80291C94: addiu       $t6, $t6, -0x2
    ctx->r14 = ADD32(ctx->r14, -0X2);
L_80291C98:
    // 0x80291C98: bne         $t6, $at, L_80291CB0
    if (ctx->r14 != ctx->r1) {
        // 0x80291C9C: addiu       $t7, $v0, 0x1
        ctx->r15 = ADD32(ctx->r2, 0X1);
            goto L_80291CB0;
    }
    // 0x80291C9C: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80291CA0: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80291CA4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80291CA8: b           L_80291CC0
    // 0x80291CAC: sw          $t7, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r15;
        goto L_80291CC0;
    // 0x80291CAC: sw          $t7, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r15;
L_80291CB0:
    // 0x80291CB0: lui         $at, 0xC020
    ctx->r1 = S32(0XC020 << 16);
    // 0x80291CB4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80291CB8: nop

    // 0x80291CBC: sw          $t7, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r15;
L_80291CC0:
    // 0x80291CC0: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x80291CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80291CC8: jal         0x802C51D0
    // 0x80291CCC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80291CCC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_0:
    // 0x80291CD0: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80291CD4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80291CD8: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x80291CDC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80291CE0: jal         0x8022A0D0
    // 0x80291CE4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x80291CE4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x80291CE8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80291CEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80291CF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80291CF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80291CF8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80291CFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80291D00: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80291D04: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80291D08: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80291D0C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80291D10: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80291D14: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80291D18: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80291D1C: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x80291D20: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x80291D24: jal         0x802AAEC0
    // 0x80291D28: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_802AAEC0(rdram, ctx);
        goto after_2;
    // 0x80291D28: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_2:
    // 0x80291D2C: beq         $v0, $zero, L_80291D64
    if (ctx->r2 == 0) {
        // 0x80291D30: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80291D64;
    }
    // 0x80291D30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80291D34: lw          $v0, 0x8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8C);
    // 0x80291D38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80291D3C: beq         $v0, $at, L_80291D4C
    if (ctx->r2 == ctx->r1) {
        // 0x80291D40: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80291D4C;
    }
    // 0x80291D40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80291D44: bne         $v0, $at, L_80291D5C
    if (ctx->r2 != ctx->r1) {
        // 0x80291D48: nop
    
            goto L_80291D5C;
    }
    // 0x80291D48: nop

L_80291D4C:
    // 0x80291D4C: jal         0x802E9790
    // 0x80291D50: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    static_3_802E9790(rdram, ctx);
        goto after_3;
    // 0x80291D50: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_3:
    // 0x80291D54: b           L_80291D68
    // 0x80291D58: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
        goto L_80291D68;
    // 0x80291D58: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
L_80291D5C:
    // 0x80291D5C: jal         0x802E9790
    // 0x80291D60: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    static_3_802E9790(rdram, ctx);
        goto after_4;
    // 0x80291D60: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_4:
L_80291D64:
    // 0x80291D64: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
L_80291D68:
    // 0x80291D68: swc1        $f8, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f8.u32l;
    // 0x80291D6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80291D70: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80291D74: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x80291D78: jr          $ra
    // 0x80291D7C: nop

    return;
    // 0x80291D7C: nop

;}
RECOMP_FUNC void D_802DCF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DCF90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802DCF94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802DCF98: jal         0x80317DA0
    // 0x802DCF9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80317DA0(rdram, ctx);
        goto after_0;
    // 0x802DCF9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802DCFA0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802DCFA4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802DCFA8: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x802DCFAC: beql        $a0, $at, L_802DCFCC
    if (ctx->r4 == ctx->r1) {
        // 0x802DCFB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802DCFCC;
    }
    goto skip_0;
    // 0x802DCFB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802DCFB4: jal         0x8021BAE0
    // 0x802DCFB8: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x802DCFB8: nop

    after_1:
    // 0x802DCFBC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x802DCFC0: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x802DCFC4: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x802DCFC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802DCFCC:
    // 0x802DCFCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802DCFD0: jr          $ra
    // 0x802DCFD4: nop

    return;
    // 0x802DCFD4: nop

;}
RECOMP_FUNC void D_80283CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283D28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80283D2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80283D30: jal         0x80318C7C
    // 0x80283D34: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    static_3_80318C7C(rdram, ctx);
        goto after_0;
    // 0x80283D34: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    after_0:
    // 0x80283D38: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x80283D3C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80283D40: bnel        $t6, $zero, L_80283D60
    if (ctx->r14 != 0) {
        // 0x80283D44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80283D60;
    }
    goto skip_0;
    // 0x80283D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80283D48: jal         0x8021BAE0
    // 0x80283D4C: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x80283D4C: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    after_1:
    // 0x80283D50: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80283D54: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x80283D58: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x80283D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80283D60:
    // 0x80283D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283D64: jr          $ra
    // 0x80283D68: nop

    return;
    // 0x80283D68: nop

;}
RECOMP_FUNC void D_80244A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244A70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80244A74: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80244A78: blez        $a1, L_80244AE4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80244A7C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80244AE4;
    }
    // 0x80244A7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80244A80: andi        $a3, $a1, 0x3
    ctx->r7 = ctx->r5 & 0X3;
    // 0x80244A84: beq         $a3, $zero, L_80244AB0
    if (ctx->r7 == 0) {
        // 0x80244A88: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80244AB0;
    }
    // 0x80244A88: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_80244A8C:
    // 0x80244A8C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80244A90: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80244A94: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x80244A98: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80244A9C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x80244AA0: bne         $a0, $a2, L_80244A8C
    if (ctx->r4 != ctx->r6) {
        // 0x80244AA4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80244A8C;
    }
    // 0x80244AA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244AA8: beq         $a2, $a1, L_80244AE4
    if (ctx->r6 == ctx->r5) {
        // 0x80244AAC: nop
    
            goto L_80244AE4;
    }
    // 0x80244AAC: nop

L_80244AB0:
    // 0x80244AB0: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x80244AB4: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80244AB8: lbu         $t2, 0x2($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2);
    // 0x80244ABC: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80244AC0: lbu         $t4, 0x3($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3);
    // 0x80244AC4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80244AC8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80244ACC: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x80244AD0: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x80244AD4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80244AD8: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x80244ADC: bne         $a2, $a1, L_80244AB0
    if (ctx->r6 != ctx->r5) {
        // 0x80244AE0: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80244AB0;
    }
    // 0x80244AE0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80244AE4:
    // 0x80244AE4: jr          $ra
    // 0x80244AE8: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x80244AE8: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
;}
RECOMP_FUNC void D_8022EC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022EC68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022EC6C: lhu         $a0, 0x0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X0);
    // 0x8022EC70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EC74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EC78: blez        $a0, L_8022ED50
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8022EC7C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8022ED50;
    }
    // 0x8022EC7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8022EC80: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022EC84: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_8022EC88:
    // 0x8022EC88: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x8022EC8C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8022EC90: bne         $t6, $zero, L_8022ED40
    if (ctx->r14 != 0) {
        // 0x8022EC94: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8022ED40;
    }
    // 0x8022EC94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022EC98: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022EC9C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8022ECA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022ECA4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8022ECA8: addiu       $t8, $zero, 0xFFF
    ctx->r24 = ADD32(0, 0XFFF);
    // 0x8022ECAC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8022ECB0: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8022ECB4: sb          $a0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r4;
    // 0x8022ECB8: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x8022ECBC: sh          $t8, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r24;
    // 0x8022ECC0: sh          $v1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r3;
    // 0x8022ECC4: sb          $v1, 0x27($v0)
    MEM_B(0X27, ctx->r2) = ctx->r3;
    // 0x8022ECC8: sb          $v1, 0x26($v0)
    MEM_B(0X26, ctx->r2) = ctx->r3;
    // 0x8022ECCC: sb          $v1, 0x25($v0)
    MEM_B(0X25, ctx->r2) = ctx->r3;
    // 0x8022ECD0: sb          $v1, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r3;
    // 0x8022ECD4: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022ECD8: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x8022ECDC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8022ECE0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x8022ECE4: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x8022ECE8: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x8022ECEC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8022ECF0: jal         0x8022AA40
    // 0x8022ECF4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8022ECF4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022ECF8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8022ECFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022ED00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022ED04: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x8022ED08: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022ED0C: sb          $zero, 0x6($v0)
    MEM_B(0X6, ctx->r2) = 0;
    // 0x8022ED10: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x8022ED14: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8022ED18: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022ED1C: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x8022ED20: sh          $zero, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = 0;
    // 0x8022ED24: sw          $zero, 0x74($v0)
    MEM_W(0X74, ctx->r2) = 0;
    // 0x8022ED28: sw          $zero, 0x70($v0)
    MEM_W(0X70, ctx->r2) = 0;
    // 0x8022ED2C: addiu       $a0, $v0, 0x30
    ctx->r4 = ADD32(ctx->r2, 0X30);
    // 0x8022ED30: jal         0x8022970C
    // 0x8022ED34: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x8022ED34: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    after_1:
    // 0x8022ED38: b           L_8022ED6C
    // 0x8022ED3C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_8022ED6C;
    // 0x8022ED3C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_8022ED40:
    // 0x8022ED40: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8022ED44: slt         $at, $a3, $a0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022ED48: bne         $at, $zero, L_8022EC88
    if (ctx->r1 != 0) {
        // 0x8022ED4C: addiu       $v1, $v1, 0x78
        ctx->r3 = ADD32(ctx->r3, 0X78);
            goto L_8022EC88;
    }
    // 0x8022ED4C: addiu       $v1, $v1, 0x78
    ctx->r3 = ADD32(ctx->r3, 0X78);
L_8022ED50:
    // 0x8022ED50: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022ED54: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8022ED58: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8022ED5C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8022ED60: jal         0x80231C58
    // 0x8022ED64: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80231C58(rdram, ctx);
        goto after_2;
    // 0x8022ED64: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8022ED68: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_8022ED6C:
    // 0x8022ED6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ED70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022ED74: jr          $ra
    // 0x8022ED78: nop

    return;
    // 0x8022ED78: nop

;}
RECOMP_FUNC void D_802E88F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8974: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E8978: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E897C: jr          $ra
    // 0x802E8980: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E8980: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802B7790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B7814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7818: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B781C: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B7820: beq         $t6, $zero, L_802B7834
    if (ctx->r14 == 0) {
        // 0x802B7824: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B7834;
    }
    // 0x802B7824: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B7828: jal         0x80303578
    // 0x802B782C: addiu       $a0, $a0, 0xAC8
    ctx->r4 = ADD32(ctx->r4, 0XAC8);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B782C: addiu       $a0, $a0, 0xAC8
    ctx->r4 = ADD32(ctx->r4, 0XAC8);
    after_0:
    // 0x802B7830: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B7834:
    // 0x802B7834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B783C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B7840: jr          $ra
    // 0x802B7844: nop

    return;
    // 0x802B7844: nop

;}
RECOMP_FUNC void D_802D4DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D4E58: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D4E5C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D4E60: jr          $ra
    // 0x802D4E64: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D4E64: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8024331C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024331C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80243320: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80243324: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x80243328: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8024332C: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x80243330: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80243334: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80243338: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8024333C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80243340: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80243344: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80243348: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8024334C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80243350: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80243354: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x80243358: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x8024335C: bne         $a2, $zero, L_8024336C
    if (ctx->r6 != 0) {
        // 0x80243360: or          $t5, $zero, $zero
        ctx->r13 = 0 | 0;
            goto L_8024336C;
    }
    // 0x80243360: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80243364: b           L_8024378C
    // 0x80243368: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
        goto L_8024378C;
    // 0x80243368: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
L_8024336C:
    // 0x8024336C: lw          $t6, 0x2C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X2C);
    // 0x80243370: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80243374: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80243378: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x8024337C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80243380: lui         $at, 0xB00
    ctx->r1 = S32(0XB00 << 16);
    // 0x80243384: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80243388: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8024338C: lw          $t9, 0x28($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X28);
    // 0x80243390: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80243394: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80243398: lw          $t6, 0x10($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X10);
    // 0x8024339C: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x802433A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802433A4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x802433A8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802433AC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x802433B0: lw          $v1, 0x38($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X38);
    // 0x802433B4: lw          $a0, 0x20($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X20);
    // 0x802433B8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x802433BC: addu        $t9, $v1, $t0
    ctx->r25 = ADD32(ctx->r3, ctx->r8);
    // 0x802433C0: sltu        $t1, $a0, $t9
    ctx->r9 = ctx->r4 < ctx->r25 ? 1 : 0;
    // 0x802433C4: beq         $t1, $zero, L_802433D8
    if (ctx->r9 == 0) {
        // 0x802433C8: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_802433D8;
    }
    // 0x802433C8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x802433CC: lw          $t1, 0x24($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X24);
    // 0x802433D0: sltu        $t6, $zero, $t1
    ctx->r14 = 0 < ctx->r9 ? 1 : 0;
    // 0x802433D4: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
L_802433D8:
    // 0x802433D8: beq         $t1, $zero, L_802433E8
    if (ctx->r9 == 0) {
        // 0x802433DC: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_802433E8;
    }
    // 0x802433DC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802433E0: b           L_802433E8
    // 0x802433E4: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
        goto L_802433E8;
    // 0x802433E4: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
L_802433E8:
    // 0x802433E8: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x802433EC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x802433F0: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x802433F4: beq         $v1, $zero, L_80243404
    if (ctx->r3 == 0) {
        // 0x802433F8: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80243404;
    }
    // 0x802433F8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802433FC: b           L_80243404
    // 0x80243400: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
        goto L_80243404;
    // 0x80243400: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
L_80243404:
    // 0x80243404: subu        $a0, $a1, $a2
    ctx->r4 = SUB32(ctx->r5, ctx->r6);
    // 0x80243408: bgez        $a0, L_80243414
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8024340C: nop
    
            goto L_80243414;
    }
    // 0x8024340C: nop

    // 0x80243410: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80243414:
    // 0x80243414: beq         $t1, $zero, L_8024361C
    if (ctx->r9 == 0) {
        // 0x80243418: addiu       $fp, $a0, 0xF
        ctx->r30 = ADD32(ctx->r4, 0XF);
            goto L_8024361C;
    }
    // 0x80243418: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x8024341C: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x80243420: sra         $t8, $fp, 4
    ctx->r24 = S32(SIGNED(ctx->r30) >> 4);
    // 0x80243424: lh          $s5, 0x0($a3)
    ctx->r21 = MEM_H(ctx->r7, 0X0);
    // 0x80243428: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x8024342C: sll         $t1, $t8, 3
    ctx->r9 = S32(ctx->r24 << 3);
    // 0x80243430: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80243434: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80243438: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x8024343C: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x80243440: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80243444: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80243448: or          $fp, $t8, $zero
    ctx->r30 = ctx->r24 | 0;
    // 0x8024344C: jal         0x80243240
    // 0x80243450: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    static_3_80243240(rdram, ctx);
        goto after_0;
    // 0x80243450: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_0:
    // 0x80243454: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x80243458: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x8024345C: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80243460: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x80243464: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80243468: beq         $v1, $zero, L_80243484
    if (ctx->r3 == 0) {
        // 0x8024346C: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_80243484;
    }
    // 0x8024346C: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x80243470: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x80243474: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80243478: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8024347C: b           L_80243490
    // 0x80243480: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
        goto L_80243490;
    // 0x80243480: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
L_80243484:
    // 0x80243484: lh          $t8, 0x0($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X0);
    // 0x80243488: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x8024348C: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
L_80243490:
    // 0x80243490: lw          $v0, 0x1C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X1C);
    // 0x80243494: lw          $t7, 0x28($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X28);
    // 0x80243498: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8024349C: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x802434A0: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x802434A4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x802434A8: srl         $t9, $v0, 4
    ctx->r25 = S32(U32(ctx->r2) >> 4);
    // 0x802434AC: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x802434B0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x802434B4: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x802434B8: addiu       $t9, $t7, 0x9
    ctx->r25 = ADD32(ctx->r15, 0X9);
    // 0x802434BC: sw          $t9, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r25;
    // 0x802434C0: sw          $v0, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r2;
    // 0x802434C4: beq         $at, $zero, L_802435EC
    if (ctx->r1 == 0) {
        // 0x802434C8: lh          $a2, 0x0($a3)
        ctx->r6 = MEM_H(ctx->r7, 0X0);
            goto L_802435EC;
    }
    // 0x802434C8: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x802434CC: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
L_802434D0:
    // 0x802434D0: addiu       $t8, $fp, 0x1
    ctx->r24 = ADD32(ctx->r30, 0X1);
    // 0x802434D4: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x802434D8: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x802434DC: addu        $a3, $t6, $a2
    ctx->r7 = ADD32(ctx->r14, ctx->r6);
    // 0x802434E0: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x802434E4: and         $t7, $a3, $at
    ctx->r15 = ctx->r7 & ctx->r1;
    // 0x802434E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802434EC: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x802434F0: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x802434F4: beq         $v0, $at, L_80243508
    if (ctx->r2 == ctx->r1) {
        // 0x802434F8: addu        $a2, $a2, $v1
        ctx->r6 = ADD32(ctx->r6, ctx->r3);
            goto L_80243508;
    }
    // 0x802434F8: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x802434FC: beq         $v0, $zero, L_80243508
    if (ctx->r2 == 0) {
        // 0x80243500: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_80243508;
    }
    // 0x80243500: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x80243504: sw          $t9, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r25;
L_80243508:
    // 0x80243508: lw          $t8, 0x20($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X20);
    // 0x8024350C: lw          $t6, 0x1C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X1C);
    // 0x80243510: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80243514: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80243518: subu        $v0, $t8, $t6
    ctx->r2 = SUB32(ctx->r24, ctx->r14);
    // 0x8024351C: sltu        $at, $t0, $v0
    ctx->r1 = ctx->r8 < ctx->r2 ? 1 : 0;
    // 0x80243520: beq         $at, $zero, L_80243530
    if (ctx->r1 == 0) {
        // 0x80243524: sll         $s5, $a3, 16
        ctx->r21 = S32(ctx->r7 << 16);
            goto L_80243530;
    }
    // 0x80243524: sll         $s5, $a3, 16
    ctx->r21 = S32(ctx->r7 << 16);
    // 0x80243528: b           L_80243534
    // 0x8024352C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
        goto L_80243534;
    // 0x8024352C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_80243530:
    // 0x80243530: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80243534:
    // 0x80243534: lw          $t7, 0x3C($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X3C);
    // 0x80243538: sra         $t8, $s5, 16
    ctx->r24 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8024353C: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x80243540: addu        $a0, $a1, $t7
    ctx->r4 = ADD32(ctx->r5, ctx->r15);
    // 0x80243544: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x80243548: bgez        $a0, L_80243554
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8024354C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80243554;
    }
    // 0x8024354C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80243550: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80243554:
    // 0x80243554: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x80243558: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x8024355C: sra         $t9, $fp, 4
    ctx->r25 = S32(SIGNED(ctx->r30) >> 4);
    // 0x80243560: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x80243564: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80243568: ori         $t6, $s4, 0x2
    ctx->r14 = ctx->r20 | 0X2;
    // 0x8024356C: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80243570: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80243574: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x80243578: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
    // 0x8024357C: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x80243580: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x80243584: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x80243588: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8024358C: jal         0x80243240
    // 0x80243590: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    static_3_80243240(rdram, ctx);
        goto after_1;
    // 0x80243590: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_1:
    // 0x80243594: lw          $t7, 0x3C($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X3C);
    // 0x80243598: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x8024359C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802435A0: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x802435A4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802435A8: addu        $t8, $t9, $a3
    ctx->r24 = ADD32(ctx->r25, ctx->r7);
    // 0x802435AC: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x802435B0: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x802435B4: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x802435B8: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x802435BC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x802435C0: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x802435C4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x802435C8: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x802435CC: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x802435D0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802435D4: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x802435D8: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x802435DC: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x802435E0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802435E4: bne         $at, $zero, L_802434D0
    if (ctx->r1 != 0) {
        // 0x802435E8: addiu       $t2, $v0, 0x8
        ctx->r10 = ADD32(ctx->r2, 0X8);
            goto L_802434D0;
    }
    // 0x802435E8: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
L_802435EC:
    // 0x802435EC: lw          $t9, 0x3C($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X3C);
    // 0x802435F0: lw          $t7, 0x38($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X38);
    // 0x802435F4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x802435F8: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x802435FC: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x80243600: lw          $t8, 0x44($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X44);
    // 0x80243604: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x80243608: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8024360C: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x80243610: sw          $t9, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r25;
    // 0x80243614: b           L_8024378C
    // 0x80243618: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
        goto L_8024378C;
    // 0x80243618: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
L_8024361C:
    // 0x8024361C: lw          $v0, 0x28($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X28);
    // 0x80243620: sra         $t7, $fp, 4
    ctx->r15 = S32(SIGNED(ctx->r30) >> 4);
    // 0x80243624: lw          $t9, 0x44($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X44);
    // 0x80243628: sll         $t1, $t7, 3
    ctx->r9 = S32(ctx->r15 << 3);
    // 0x8024362C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80243630: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80243634: or          $fp, $t7, $zero
    ctx->r30 = ctx->r15 | 0;
    // 0x80243638: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8024363C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80243640: subu        $t6, $t3, $t8
    ctx->r14 = SUB32(ctx->r11, ctx->r24);
    // 0x80243644: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x80243648: bgez        $v1, L_80243654
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024364C: sll         $a1, $fp, 4
        ctx->r5 = S32(ctx->r30 << 4);
            goto L_80243654;
    }
    // 0x8024364C: sll         $a1, $fp, 4
    ctx->r5 = S32(ctx->r30 << 4);
    // 0x80243650: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80243654:
    // 0x80243654: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80243658: mflo        $v0
    ctx->r2 = lo;
    // 0x8024365C: sll         $a0, $v0, 4
    ctx->r4 = S32(ctx->r2 << 4);
    // 0x80243660: addu        $t4, $a1, $a2
    ctx->r12 = ADD32(ctx->r5, ctx->r6);
    // 0x80243664: slt         $at, $t4, $a0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80243668: beq         $at, $zero, L_80243674
    if (ctx->r1 == 0) {
        // 0x8024366C: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_80243674;
    }
    // 0x8024366C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80243670: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_80243674:
    // 0x80243674: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x80243678: subu        $t6, $a0, $t8
    ctx->r14 = SUB32(ctx->r4, ctx->r24);
    // 0x8024367C: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80243680: beq         $at, $zero, L_80243730
    if (ctx->r1 == 0) {
        // 0x80243684: subu        $a2, $t1, $v1
        ctx->r6 = SUB32(ctx->r9, ctx->r3);
            goto L_80243730;
    }
    // 0x80243684: subu        $a2, $t1, $v1
    ctx->r6 = SUB32(ctx->r9, ctx->r3);
    // 0x80243688: lh          $s5, 0x0($a3)
    ctx->r21 = MEM_H(ctx->r7, 0X0);
    // 0x8024368C: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x80243690: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80243694: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x80243698: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x8024369C: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x802436A0: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x802436A4: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x802436A8: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x802436AC: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x802436B0: subu        $s6, $a1, $a0
    ctx->r22 = SUB32(ctx->r5, ctx->r4);
    // 0x802436B4: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x802436B8: jal         0x80243240
    // 0x802436BC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    static_3_80243240(rdram, ctx);
        goto after_2;
    // 0x802436BC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_2:
    // 0x802436C0: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x802436C4: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x802436C8: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x802436CC: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x802436D0: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x802436D4: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x802436D8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802436DC: beq         $v1, $zero, L_802436F8
    if (ctx->r3 == 0) {
        // 0x802436E0: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_802436F8;
    }
    // 0x802436E0: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x802436E4: lh          $t7, 0x0($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X0);
    // 0x802436E8: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x802436EC: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x802436F0: b           L_80243704
    // 0x802436F4: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
        goto L_80243704;
    // 0x802436F4: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
L_802436F8:
    // 0x802436F8: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
    // 0x802436FC: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x80243700: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
L_80243704:
    // 0x80243704: lw          $t9, 0x3C($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X3C);
    // 0x80243708: lw          $t7, 0x38($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X38);
    // 0x8024370C: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80243710: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x80243714: lw          $t8, 0x44($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X44);
    // 0x80243718: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x8024371C: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80243720: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x80243724: sw          $t9, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r25;
    // 0x80243728: b           L_80243738
    // 0x8024372C: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
        goto L_80243738;
    // 0x8024372C: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
L_80243730:
    // 0x80243730: sw          $zero, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = 0;
    // 0x80243734: sw          $t3, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r11;
L_80243738:
    // 0x80243738: beq         $a0, $zero, L_80243788
    if (ctx->r4 == 0) {
        // 0x8024373C: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_80243788;
    }
    // 0x8024373C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80243740: beq         $t5, $zero, L_80243758
    if (ctx->r13 == 0) {
        // 0x80243744: sw          $zero, 0x3C($s7)
        MEM_W(0X3C, ctx->r23) = 0;
            goto L_80243758;
    }
    // 0x80243744: sw          $zero, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = 0;
    // 0x80243748: subu        $v1, $t4, $a0
    ctx->r3 = SUB32(ctx->r12, ctx->r4);
    // 0x8024374C: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x80243750: b           L_8024375C
    // 0x80243754: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_8024375C;
    // 0x80243754: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80243758:
    // 0x80243758: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8024375C:
    // 0x8024375C: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x80243760: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80243764: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80243768: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x8024376C: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80243770: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x80243774: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80243778: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x8024377C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80243780: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80243784: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
L_80243788:
    // 0x80243788: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8024378C:
    // 0x8024378C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80243790: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80243794: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80243798: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8024379C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802437A0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802437A4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802437A8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x802437AC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x802437B0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x802437B4: jr          $ra
    // 0x802437B8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x802437B8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void D_80290AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290B68: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80290B6C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80290B70: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80290B74: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80290B78: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80290B7C: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80290B80: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80290B84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80290B88: mul.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80290B8C: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x80290B90: swc1        $f6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f6.u32l;
    // 0x80290B94: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80290B98: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80290B9C: swc1        $f10, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f10.u32l;
    // 0x80290BA0: lwc1        $f16, 0xC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80290BA4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80290BA8: jr          $ra
    // 0x80290BAC: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x80290BAC: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_8022CFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CFBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CFC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CFC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022CFC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CFCC: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x8022CFD0: jal         0x8023CE10
    // 0x8022CFD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8023CE10(rdram, ctx);
        goto after_0;
    // 0x8022CFD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8022CFD8: jal         0x8022C314
    // 0x8022CFDC: nop

    static_3_8022C314(rdram, ctx);
        goto after_1;
    // 0x8022CFDC: nop

    after_1:
    // 0x8022CFE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CFE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022CFE8: jr          $ra
    // 0x8022CFEC: nop

    return;
    // 0x8022CFEC: nop

;}
RECOMP_FUNC void D_80229B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80229B98: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80229B9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229BA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80229BA4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80229BA8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80229BAC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80229BB0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80229BB4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80229BB8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80229BBC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80229BC0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80229BC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80229BC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229BCC: jal         0x80231A24
    // 0x80229BD0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80229BD0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80229BD4: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80229BD8: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80229BDC: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x80229BE0: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x80229BE4: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80229BE8: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80229BEC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80229BF0: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x80229BF4: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x80229BF8: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
L_80229BFC:
    // 0x80229BFC: jal         0x80231A24
    // 0x80229C00: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80229C00: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_1:
    // 0x80229C04: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80229C08: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
L_80229C0C:
    // 0x80229C0C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80229C10: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80229C14: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80229C18: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80229C1C: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x80229C20: jal         0x80231A24
    // 0x80229C24: nop

    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80229C24: nop

    after_2:
    // 0x80229C28: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80229C2C: bne         $s0, $s3, L_80229C0C
    if (ctx->r16 != ctx->r19) {
        // 0x80229C30: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80229C0C;
    }
    // 0x80229C30: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80229C34: jal         0x80231A24
    // 0x80229C38: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80229C38: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_3:
    // 0x80229C3C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80229C40: bne         $s4, $fp, L_80229BFC
    if (ctx->r20 != ctx->r30) {
        // 0x80229C44: addiu       $s5, $s5, 0x10
        ctx->r21 = ADD32(ctx->r21, 0X10);
            goto L_80229BFC;
    }
    // 0x80229C44: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x80229C48: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80229C4C: jal         0x80231A24
    // 0x80229C50: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80229C50: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x80229C54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80229C58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229C5C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229C60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229C64: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80229C68: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80229C6C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80229C70: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80229C74: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80229C78: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80229C7C: jr          $ra
    // 0x80229C80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80229C80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_80279A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80279A88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80279A8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80279A90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80279A94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80279A98: beq         $a0, $zero, L_80279BBC
    if (ctx->r4 == 0) {
        // 0x80279A9C: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80279BBC;
    }
    // 0x80279A9C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80279AA0: jal         0x802A91F0
    // 0x80279AA4: nop

    static_3_802A91F0(rdram, ctx);
        goto after_0;
    // 0x80279AA4: nop

    after_0:
    // 0x80279AA8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80279AAC: jal         0x80231A24
    // 0x80279AB0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80279AB0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80279AB4: lw          $v1, 0x65FC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X65FC);
    // 0x80279AB8: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
    // 0x80279ABC: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80279AC0: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x80279AC4: jalr        $t9
    // 0x80279AC8: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80279AC8: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_2:
    // 0x80279ACC: sw          $zero, 0x65FC($s0)
    MEM_W(0X65FC, ctx->r16) = 0;
    // 0x80279AD0: addiu       $a0, $s0, 0x70F8
    ctx->r4 = ADD32(ctx->r16, 0X70F8);
    // 0x80279AD4: jal         0x80308FB4
    // 0x80279AD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80308FB4(rdram, ctx);
        goto after_3;
    // 0x80279AD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80279ADC: addiu       $a0, $s0, 0x6368
    ctx->r4 = ADD32(ctx->r16, 0X6368);
    // 0x80279AE0: jal         0x802BBEAC
    // 0x80279AE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802BBEAC(rdram, ctx);
        goto after_4;
    // 0x80279AE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x80279AE8: addiu       $a0, $s0, 0x4E3C
    ctx->r4 = ADD32(ctx->r16, 0X4E3C);
    // 0x80279AEC: jal         0x802E4414
    // 0x80279AF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802E4414(rdram, ctx);
        goto after_5;
    // 0x80279AF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80279AF4: addiu       $a0, $s0, 0x4B88
    ctx->r4 = ADD32(ctx->r16, 0X4B88);
    // 0x80279AF8: jal         0x802BBEAC
    // 0x80279AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802BBEAC(rdram, ctx);
        goto after_6;
    // 0x80279AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80279B00: addiu       $a0, $s0, 0x365C
    ctx->r4 = ADD32(ctx->r16, 0X365C);
    // 0x80279B04: jal         0x802E4414
    // 0x80279B08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802E4414(rdram, ctx);
        goto after_7;
    // 0x80279B08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80279B0C: addiu       $a0, $s0, 0x362C
    ctx->r4 = ADD32(ctx->r16, 0X362C);
    // 0x80279B10: jal         0x802E9B3C
    // 0x80279B14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802E9B3C(rdram, ctx);
        goto after_8;
    // 0x80279B14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80279B18: addiu       $a0, $s0, 0x3570
    ctx->r4 = ADD32(ctx->r16, 0X3570);
    // 0x80279B1C: jal         0x8029DE04
    // 0x80279B20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8029DE04(rdram, ctx);
        goto after_9;
    // 0x80279B20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x80279B24: addiu       $a0, $s0, 0x340C
    ctx->r4 = ADD32(ctx->r16, 0X340C);
    // 0x80279B28: jal         0x802FBFB0
    // 0x80279B2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802FBFB0(rdram, ctx);
        goto after_10;
    // 0x80279B2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80279B30: addiu       $a0, $s0, 0x3350
    ctx->r4 = ADD32(ctx->r16, 0X3350);
    // 0x80279B34: jal         0x802FA638
    // 0x80279B38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802FA638(rdram, ctx);
        goto after_11;
    // 0x80279B38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x80279B3C: addiu       $a0, $s0, 0x32BC
    ctx->r4 = ADD32(ctx->r16, 0X32BC);
    // 0x80279B40: jal         0x802CD448
    // 0x80279B44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802CD448(rdram, ctx);
        goto after_12;
    // 0x80279B44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x80279B48: addiu       $at, $zero, -0x3230
    ctx->r1 = ADD32(0, -0X3230);
    // 0x80279B4C: beq         $s0, $at, L_80279B5C
    if (ctx->r16 == ctx->r1) {
        // 0x80279B50: addiu       $a0, $s0, 0x3288
        ctx->r4 = ADD32(ctx->r16, 0X3288);
            goto L_80279B5C;
    }
    // 0x80279B50: addiu       $a0, $s0, 0x3288
    ctx->r4 = ADD32(ctx->r16, 0X3288);
    // 0x80279B54: jal         0x80302FA4
    // 0x80279B58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302FA4(rdram, ctx);
        goto after_13;
    // 0x80279B58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
L_80279B5C:
    // 0x80279B5C: addiu       $a0, $s0, 0x3228
    ctx->r4 = ADD32(ctx->r16, 0X3228);
    // 0x80279B60: jal         0x80302E74
    // 0x80279B64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80302E74(rdram, ctx);
        goto after_14;
    // 0x80279B64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
    // 0x80279B68: addiu       $a0, $s0, 0x8F4
    ctx->r4 = ADD32(ctx->r16, 0X8F4);
    // 0x80279B6C: jal         0x80301F58
    // 0x80279B70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80301F58(rdram, ctx);
        goto after_15;
    // 0x80279B70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_15:
    // 0x80279B74: addiu       $a0, $s0, 0x6D0
    ctx->r4 = ADD32(ctx->r16, 0X6D0);
    // 0x80279B78: jal         0x802F71C8
    // 0x80279B7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802F71C8(rdram, ctx);
        goto after_16;
    // 0x80279B7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_16:
    // 0x80279B80: addiu       $a0, $s0, 0x6B8
    ctx->r4 = ADD32(ctx->r16, 0X6B8);
    // 0x80279B84: jal         0x80303660
    // 0x80279B88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80303660(rdram, ctx);
        goto after_17;
    // 0x80279B88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_17:
    // 0x80279B8C: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    // 0x80279B90: jal         0x8028DF80
    // 0x80279B94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028DF80(rdram, ctx);
        goto after_18;
    // 0x80279B94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_18:
    // 0x80279B98: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x80279B9C: jal         0x802F9698
    // 0x80279BA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802F9698(rdram, ctx);
        goto after_19;
    // 0x80279BA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_19:
    // 0x80279BA4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80279BA8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80279BAC: beql        $t8, $zero, L_80279BC0
    if (ctx->r24 == 0) {
        // 0x80279BB0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80279BC0;
    }
    goto skip_0;
    // 0x80279BB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80279BB4: jal         0x802C681C
    // 0x80279BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_20;
    // 0x80279BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
L_80279BBC:
    // 0x80279BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80279BC0:
    // 0x80279BC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80279BC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80279BC8: jr          $ra
    // 0x80279BCC: nop

    return;
    // 0x80279BCC: nop

;}
