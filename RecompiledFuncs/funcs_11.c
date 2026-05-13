#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802A2FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3048: jr          $ra
    // 0x802A304C: sw          $a1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r5;
    return;
    // 0x802A304C: sw          $a1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_80211584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80211584: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80211588: lhu         $a0, 0x0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X0);
    // 0x8021158C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211590: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80211594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211598: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8021159C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802115A0: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x802115A4: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x802115A8: jal         0x8022BA58
    // 0x802115AC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x802115AC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x802115B0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802115B4: lhu         $a0, 0x0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X0);
    // 0x802115B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802115BC: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802115C0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x802115C4: jal         0x8022BA58
    // 0x802115C8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_1;
    // 0x802115C8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x802115CC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802115D0: lhu         $a0, 0x0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X0);
    // 0x802115D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802115D8: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802115DC: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x802115E0: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x802115E4: jal         0x8022BA58
    // 0x802115E8: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    static_3_8022BA58(rdram, ctx);
        goto after_2;
    // 0x802115E8: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    after_2:
    // 0x802115EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802115F0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802115F4: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802115F8: jr          $ra
    // 0x802115FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802115FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802CC16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CC1EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802CC1F0: bne         $a1, $at, L_802CC210
    if (ctx->r5 != ctx->r1) {
        // 0x802CC1F4: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_802CC210;
    }
    // 0x802CC1F4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802CC1F8: lbu         $t6, 0xA4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XA4);
    // 0x802CC1FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802CC200: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x802CC204: lw          $t9, 0x130($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X130);
    // 0x802CC208: b           L_802CC230
    // 0x802CC20C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
        goto L_802CC230;
    // 0x802CC20C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
L_802CC210:
    // 0x802CC210: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802CC214: bnel        $a1, $at, L_802CC234
    if (ctx->r5 != ctx->r1) {
        // 0x802CC218: lw          $v0, 0x4($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X4);
            goto L_802CC234;
    }
    goto skip_0;
    // 0x802CC218: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    skip_0:
    // 0x802CC21C: lbu         $t0, 0xA5($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XA5);
    // 0x802CC220: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802CC224: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x802CC228: lw          $t3, 0x130($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X130);
    // 0x802CC22C: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
L_802CC230:
    // 0x802CC230: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
L_802CC234:
    // 0x802CC234: jr          $ra
    // 0x802CC238: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802CC238: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_80247FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247FC0: mtc0        $a0, Status
    cop0_status_write(ctx, ctx->r4);    // 0x80247FC4: nop

    // 0x80247FC8: jr          $ra
    // 0x80247FCC: nop

    return;
    // 0x80247FCC: nop

;}
RECOMP_FUNC void D_80204FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80204FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80204FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80204FC8: jal         0x80237720
    // 0x80204FCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80237720(rdram, ctx);
        goto after_0;
    // 0x80204FCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80204FD0: srl         $t6, $v0, 2
    ctx->r14 = S32(U32(ctx->r2) >> 2);
    // 0x80204FD4: bne         $t6, $zero, L_80204FFC
    if (ctx->r14 != 0) {
        // 0x80204FD8: lui         $t7, 0x0
        ctx->r15 = S32(0X0 << 16);
            goto L_80204FFC;
    }
    // 0x80204FD8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80204FDC: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80204FE0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204FE4: bnel        $t7, $zero, L_80205000
    if (ctx->r15 != 0) {
        // 0x80204FE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80205000;
    }
    goto skip_0;
    // 0x80204FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80204FEC: jal         0x80231A24
    // 0x80204FF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80204FF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80204FF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80204FF8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_80204FFC:
    // 0x80204FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80205000:
    // 0x80205000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205004: jr          $ra
    // 0x80205008: nop

    return;
    // 0x80205008: nop

;}
RECOMP_FUNC void D_802238D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802238D8: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x802238DC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802238E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x802238E4: jr          $ra
    // 0x802238E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x802238E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_802EF9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFA64: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802EFA68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EFA6C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802EFA70: nop

    // 0x802EFA74: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802EFA78: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EFA7C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x802EFA80: jr          $ra
    // 0x802EFA84: sh          $t7, 0xC6($a0)
    MEM_H(0XC6, ctx->r4) = ctx->r15;
    return;
    // 0x802EFA84: sh          $t7, 0xC6($a0)
    MEM_H(0XC6, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void D_802498F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802498F0: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x802498F4: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802498F8: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802498FC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80249900: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80249904: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80249908: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8024990C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80249910: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80249914: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80249918: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x8024991C: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80249920: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x80249924: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80249928: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x8024992C: nop

    // 0x80249930: bc1fl       L_80249958
    if (!c1cs) {
        // 0x80249934: cvt.s.d     $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
            goto L_80249958;
    }
    goto skip_0;
    // 0x80249934: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
    skip_0:
    // 0x80249938: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8024993C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80249940: nop

    // 0x80249944: sub.d       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f0.d - ctx->f8.d;
    // 0x80249948: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x8024994C: b           L_8024995C
    // 0x80249950: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
        goto L_8024995C;
    // 0x80249950: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x80249954: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
L_80249958:
    // 0x80249958: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
L_8024995C:
    // 0x8024995C: lwc1        $f2, 0x14($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80249960: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80249964: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80249968: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8024996C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80249970: bc1fl       L_80249980
    if (!c1cs) {
        // 0x80249974: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_80249980;
    }
    goto skip_1;
    // 0x80249974: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_1:
    // 0x80249978: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8024997C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
L_80249980:
    // 0x80249980: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80249984: sub.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f4.d - ctx->f8.d;
    // 0x80249988: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
    // 0x8024998C: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80249990: jr          $ra
    // 0x80249994: nop

    return;
    // 0x80249994: nop

;}
RECOMP_FUNC void D_8022B2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B2A4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8022B2A8: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8022B2AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8022B2B0: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x8022B2B4: blez        $a2, L_8022B318
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8022B2B8: lui         $a3, 0x0
        ctx->r7 = S32(0X0 << 16);
            goto L_8022B318;
    }
    // 0x8022B2B8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8022B2BC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
L_8022B2C0:
    // 0x8022B2C0: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x8022B2C4: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8022B2C8: bnel        $at, $zero, L_8022B2EC
    if (ctx->r1 != 0) {
        // 0x8022B2CC: sltu        $at, $a0, $a1
        ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
            goto L_8022B2EC;
    }
    goto skip_0;
    // 0x8022B2CC: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    skip_0:
    // 0x8022B2D0: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
    // 0x8022B2D4: sltu        $at, $v0, $t6
    ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
    // 0x8022B2D8: beql        $at, $zero, L_8022B2EC
    if (ctx->r1 == 0) {
        // 0x8022B2DC: sltu        $at, $a0, $a1
        ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
            goto L_8022B2EC;
    }
    goto skip_1;
    // 0x8022B2DC: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    skip_1:
    // 0x8022B2E0: jr          $ra
    // 0x8022B2E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8022B2E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B2E8: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
L_8022B2EC:
    // 0x8022B2EC: bne         $at, $zero, L_8022B30C
    if (ctx->r1 != 0) {
        // 0x8022B2F0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8022B30C;
    }
    // 0x8022B2F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B2F4: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x8022B2F8: sltu        $at, $a0, $t7
    ctx->r1 = ctx->r4 < ctx->r15 ? 1 : 0;
    // 0x8022B2FC: beql        $at, $zero, L_8022B310
    if (ctx->r1 == 0) {
        // 0x8022B300: slt         $at, $v1, $a2
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8022B310;
    }
    goto skip_2;
    // 0x8022B300: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    skip_2:
    // 0x8022B304: jr          $ra
    // 0x8022B308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8022B308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022B30C:
    // 0x8022B30C: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
L_8022B310:
    // 0x8022B310: bne         $at, $zero, L_8022B2C0
    if (ctx->r1 != 0) {
        // 0x8022B314: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_8022B2C0;
    }
    // 0x8022B314: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
L_8022B318:
    // 0x8022B318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B31C: jr          $ra
    // 0x8022B320: nop

    return;
    // 0x8022B320: nop

;}
RECOMP_FUNC void D_8022F7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022F7A4: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8022F7A8: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8022F7AC: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x8022F7B0: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8022F7B4: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8022F7B8: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8022F7BC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8022F7C0: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8022F7C4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8022F7C8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8022F7CC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8022F7D0: sw          $a2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r6;
    // 0x8022F7D4: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8022F7D8: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x8022F7DC: lw          $fp, 0x4($a0)
    ctx->r30 = MEM_W(ctx->r4, 0X4);
    // 0x8022F7E0: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8022F7E4: div.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8022F7E8: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8022F7EC: lwc1        $f8, 0xF8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8022F7F0: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8022F7F4: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    // 0x8022F7F8: lw          $t0, 0x8($fp)
    ctx->r8 = MEM_W(ctx->r30, 0X8);
    // 0x8022F7FC: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8022F800: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8022F804: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x8022F808: lw          $t1, 0x20($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X20);
    // 0x8022F80C: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8022F810: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x8022F814: sw          $t1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r9;
    // 0x8022F818: lw          $t2, 0x28($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X28);
    // 0x8022F81C: addu        $s6, $t7, $t8
    ctx->r22 = ADD32(ctx->r15, ctx->r24);
    // 0x8022F820: swc1        $f14, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f14.u32l;
    // 0x8022F824: sw          $t2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r10;
    // 0x8022F828: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8022F82C: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x8022F830: jal         0x8022AA40
    // 0x8022F834: add.s       $f12, $f18, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f10.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8022F834: add.s       $f12, $f18, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f10.fl;
    after_0:
    // 0x8022F838: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022F83C: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8022F840: lwc1        $f14, 0xF4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x8022F844: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8022F848: lwc1        $f16, 0xF8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8022F84C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8022F850: bc1tl       L_8022F864
    if (c1cs) {
        // 0x8022F854: neg.s       $f6, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
            goto L_8022F864;
    }
    goto skip_0;
    // 0x8022F854: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
    skip_0:
    // 0x8022F858: div.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8022F85C: div.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8022F860: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
L_8022F864:
    // 0x8022F864: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8022F868: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8022F86C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022F870: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8022F874: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8022F878: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022F87C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8022F880: div.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8022F884: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8022F888: add.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8022F88C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8022F890: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8022F894: add.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8022F898: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8022F89C: neg.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = -ctx->f14.fl;
    // 0x8022F8A0: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8022F8A4: sra         $a0, $a1, 16
    ctx->r4 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022F8A8: sh          $a0, 0x0($fp)
    MEM_H(0X0, ctx->r30) = ctx->r4;
    // 0x8022F8AC: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8022F8B0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8022F8B4: sh          $a0, 0xA($fp)
    MEM_H(0XA, ctx->r30) = ctx->r4;
    // 0x8022F8B8: sh          $a1, 0x20($fp)
    MEM_H(0X20, ctx->r30) = ctx->r5;
    // 0x8022F8BC: sra         $t5, $t6, 16
    ctx->r13 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8022F8C0: sh          $t5, 0x2($fp)
    MEM_H(0X2, ctx->r30) = ctx->r13;
    // 0x8022F8C4: sh          $a1, 0x2A($fp)
    MEM_H(0X2A, ctx->r30) = ctx->r5;
    // 0x8022F8C8: sh          $t6, 0x22($fp)
    MEM_H(0X22, ctx->r30) = ctx->r14;
    // 0x8022F8CC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8022F8D0: add.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8022F8D4: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8022F8D8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8022F8DC: nop

    // 0x8022F8E0: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8022F8E4: sh          $t8, 0x8($fp)
    MEM_H(0X8, ctx->r30) = ctx->r24;
    // 0x8022F8E8: sh          $t9, 0x28($fp)
    MEM_H(0X28, ctx->r30) = ctx->r25;
    // 0x8022F8EC: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    // 0x8022F8F0: blez        $v1, L_8022FA90
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022F8F4: nop
    
            goto L_8022FA90;
    }
    // 0x8022F8F4: nop

L_8022F8F8:
    // 0x8022F8F8: lw          $t0, 0x1C($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X1C);
    // 0x8022F8FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022F900: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8022F904: sllv        $t2, $t1, $s4
    ctx->r10 = S32(ctx->r9 << (ctx->r20 & 31));
    // 0x8022F908: and         $t3, $t0, $t2
    ctx->r11 = ctx->r8 & ctx->r10;
    // 0x8022F90C: bne         $t3, $zero, L_8022F928
    if (ctx->r11 != 0) {
        // 0x8022F910: addu        $s1, $a0, $s5
        ctx->r17 = ADD32(ctx->r4, ctx->r21);
            goto L_8022F928;
    }
    // 0x8022F910: addu        $s1, $a0, $s5
    ctx->r17 = ADD32(ctx->r4, ctx->r21);
    // 0x8022F914: lbu         $t4, 0x7($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X7);
    // 0x8022F918: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8022F91C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8022F920: beq         $t5, $zero, L_8022F930
    if (ctx->r13 == 0) {
        // 0x8022F924: nop
    
            goto L_8022F930;
    }
    // 0x8022F924: nop

L_8022F928:
    // 0x8022F928: b           L_8022F930
    // 0x8022F92C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8022F930;
    // 0x8022F92C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8022F930:
    // 0x8022F930: bne         $s0, $zero, L_8022F98C
    if (ctx->r16 != 0) {
        // 0x8022F934: sll         $t2, $s4, 6
        ctx->r10 = S32(ctx->r20 << 6);
            goto L_8022F98C;
    }
    // 0x8022F934: sll         $t2, $s4, 6
    ctx->r10 = S32(ctx->r20 << 6);
    // 0x8022F938: lbu         $t6, 0x7($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X7);
    // 0x8022F93C: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x8022F940: slt         $at, $s4, $t8
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8022F944: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8022F948: beql        $t7, $zero, L_8022F990
    if (ctx->r15 == 0) {
        // 0x8022F94C: lw          $t0, 0x4($s7)
        ctx->r8 = MEM_W(ctx->r23, 0X4);
            goto L_8022F990;
    }
    goto skip_1;
    // 0x8022F94C: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
    skip_1:
    // 0x8022F950: beq         $at, $zero, L_8022FA7C
    if (ctx->r1 == 0) {
        // 0x8022F954: addu        $v0, $a0, $s5
        ctx->r2 = ADD32(ctx->r4, ctx->r21);
            goto L_8022FA7C;
    }
    // 0x8022F954: addu        $v0, $a0, $s5
    ctx->r2 = ADD32(ctx->r4, ctx->r21);
    // 0x8022F958: lbu         $t9, 0x6($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X6);
    // 0x8022F95C: lbu         $t1, 0x2A($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2A);
    // 0x8022F960: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022F964: subu        $s2, $t9, $t1
    ctx->r18 = SUB32(ctx->r25, ctx->r9);
    // 0x8022F968: blezl       $s2, L_8022FA80
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8022F96C: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8022FA80;
    }
    goto skip_2;
    // 0x8022F96C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
L_8022F970:
    // 0x8022F970: jal         0x802230E4
    // 0x8022F974: nop

    static_3_802230E4(rdram, ctx);
        goto after_1;
    // 0x8022F974: nop

    after_1:
    // 0x8022F978: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022F97C: bne         $s0, $s2, L_8022F970
    if (ctx->r16 != ctx->r18) {
        // 0x8022F980: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8022F970;
    }
    // 0x8022F980: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8022F984: b           L_8022FA7C
    // 0x8022F988: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
        goto L_8022FA7C;
    // 0x8022F988: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8022F98C:
    // 0x8022F98C: lw          $t0, 0x4($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X4);
L_8022F990:
    // 0x8022F990: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022F994: or          $t6, $sp, $zero
    ctx->r14 = ctx->r29 | 0;
    // 0x8022F998: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8022F99C: addiu       $t5, $t3, 0x3C
    ctx->r13 = ADD32(ctx->r11, 0X3C);
L_8022F9A0:
    // 0x8022F9A0: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8022F9A4: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8022F9A8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8022F9AC: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8022F9B0: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x8022F9B4: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8022F9B8: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x8022F9BC: bne         $t3, $t5, L_8022F9A0
    if (ctx->r11 != ctx->r13) {
        // 0x8022F9C0: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8022F9A0;
    }
    // 0x8022F9C0: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8022F9C4: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8022F9C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022F9CC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8022F9D0: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8022F9D4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8022F9D8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8022F9DC: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x8022F9E0: jal         0x80222FE0
    // 0x8022F9E4: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    static_3_80222FE0(rdram, ctx);
        goto after_2;
    // 0x8022F9E4: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    after_2:
    // 0x8022F9E8: beql        $s0, $zero, L_8022FA28
    if (ctx->r16 == 0) {
        // 0x8022F9EC: lbu         $v1, 0x4($s6)
        ctx->r3 = MEM_BU(ctx->r22, 0X4);
            goto L_8022FA28;
    }
    goto skip_3;
    // 0x8022F9EC: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    skip_3:
    // 0x8022F9F0: lbu         $t8, 0x4($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4);
    // 0x8022F9F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022F9F8: blezl       $t8, L_8022FA28
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8022F9FC: lbu         $v1, 0x4($s6)
        ctx->r3 = MEM_BU(ctx->r22, 0X4);
            goto L_8022FA28;
    }
    goto skip_4;
    // 0x8022F9FC: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    skip_4:
    // 0x8022FA00: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
L_8022FA04:
    // 0x8022FA04: sll         $t1, $s0, 4
    ctx->r9 = S32(ctx->r16 << 4);
    // 0x8022FA08: jal         0x80220C44
    // 0x8022FA0C: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    static_3_80220C44(rdram, ctx);
        goto after_3;
    // 0x8022FA0C: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    after_3:
    // 0x8022FA10: lbu         $t0, 0x4($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X4);
    // 0x8022FA14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022FA18: slt         $at, $s0, $t0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8022FA1C: bnel        $at, $zero, L_8022FA04
    if (ctx->r1 != 0) {
        // 0x8022FA20: lw          $t9, 0x0($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X0);
            goto L_8022FA04;
    }
    goto skip_5;
    // 0x8022FA20: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    skip_5:
    // 0x8022FA24: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8022FA28:
    // 0x8022FA28: addiu       $t2, $s4, 0x1
    ctx->r10 = ADD32(ctx->r20, 0X1);
    // 0x8022FA2C: bnel        $t2, $v1, L_8022FA40
    if (ctx->r10 != ctx->r3) {
        // 0x8022FA30: lw          $t4, 0x0($s6)
        ctx->r12 = MEM_W(ctx->r22, 0X0);
            goto L_8022FA40;
    }
    goto skip_6;
    // 0x8022FA30: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    skip_6:
    // 0x8022FA34: b           L_8022FA90
    // 0x8022FA38: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_8022FA90;
    // 0x8022FA38: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8022FA3C: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
L_8022FA40:
    // 0x8022FA40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022FA44: addu        $v0, $t4, $s5
    ctx->r2 = ADD32(ctx->r12, ctx->r21);
    // 0x8022FA48: lbu         $t5, 0x6($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X6);
    // 0x8022FA4C: lbu         $t3, 0x2A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2A);
    // 0x8022FA50: subu        $s2, $t5, $t3
    ctx->r18 = SUB32(ctx->r13, ctx->r11);
    // 0x8022FA54: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x8022FA58: bltz        $s2, L_8022FA7C
    if (SIGNED(ctx->r18) < 0) {
        // 0x8022FA5C: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_8022FA7C;
    }
    // 0x8022FA5C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8022FA60: addiu       $s1, $s2, 0x1
    ctx->r17 = ADD32(ctx->r18, 0X1);
L_8022FA64:
    // 0x8022FA64: jal         0x802230E4
    // 0x8022FA68: nop

    static_3_802230E4(rdram, ctx);
        goto after_4;
    // 0x8022FA68: nop

    after_4:
    // 0x8022FA6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022FA70: bne         $s1, $s0, L_8022FA64
    if (ctx->r17 != ctx->r16) {
        // 0x8022FA74: nop
    
            goto L_8022FA64;
    }
    // 0x8022FA74: nop

    // 0x8022FA78: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
L_8022FA7C:
    // 0x8022FA7C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022FA80:
    // 0x8022FA80: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022FA84: bne         $at, $zero, L_8022F8F8
    if (ctx->r1 != 0) {
        // 0x8022FA88: addiu       $s5, $s5, 0x24
        ctx->r21 = ADD32(ctx->r21, 0X24);
            goto L_8022F8F8;
    }
    // 0x8022FA88: addiu       $s5, $s5, 0x24
    ctx->r21 = ADD32(ctx->r21, 0X24);
    // 0x8022FA8C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8022FA90:
    // 0x8022FA90: blezl       $s3, L_8022FAB0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8022FA94: lw          $t6, 0x98($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X98);
            goto L_8022FAB0;
    }
    goto skip_7;
    // 0x8022FA94: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    skip_7:
L_8022FA98:
    // 0x8022FA98: jal         0x802230E4
    // 0x8022FA9C: nop

    static_3_802230E4(rdram, ctx);
        goto after_5;
    // 0x8022FA9C: nop

    after_5:
    // 0x8022FAA0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8022FAA4: bne         $s4, $s3, L_8022FA98
    if (ctx->r20 != ctx->r19) {
        // 0x8022FAA8: nop
    
            goto L_8022FA98;
    }
    // 0x8022FAA8: nop

    // 0x8022FAAC: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
L_8022FAB0:
    // 0x8022FAB0: sw          $t6, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r14;
    // 0x8022FAB4: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x8022FAB8: sw          $t7, 0x8($fp)
    MEM_W(0X8, ctx->r30) = ctx->r15;
    // 0x8022FABC: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x8022FAC0: sw          $t8, 0x20($fp)
    MEM_W(0X20, ctx->r30) = ctx->r24;
    // 0x8022FAC4: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x8022FAC8: sw          $t9, 0x28($fp)
    MEM_W(0X28, ctx->r30) = ctx->r25;
    // 0x8022FACC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x8022FAD0: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x8022FAD4: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x8022FAD8: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8022FADC: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8022FAE0: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8022FAE4: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8022FAE8: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8022FAEC: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8022FAF0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8022FAF4: jr          $ra
    // 0x8022FAF8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8022FAF8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void D_80244BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244BE8: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80244BEC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80244BF0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80244BF4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80244BF8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80244BFC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80244C00: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80244C04: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80244C08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80244C0C: lbu         $t6, 0x65($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X65);
    // 0x80244C10: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80244C14: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80244C18: beq         $t6, $zero, L_80244C38
    if (ctx->r14 == 0) {
        // 0x80244C1C: or          $s6, $a1, $zero
        ctx->r22 = ctx->r5 | 0;
            goto L_80244C38;
    }
    // 0x80244C1C: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x80244C20: jal         0x802456A0
    // 0x80244C24: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_0;
    // 0x80244C24: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    after_0:
    // 0x80244C28: beq         $v0, $zero, L_80244C3C
    if (ctx->r2 == 0) {
        // 0x80244C2C: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_80244C3C;
    }
    // 0x80244C2C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80244C30: b           L_80244F10
    // 0x80244C34: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F10;
    // 0x80244C34: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244C38:
    // 0x80244C38: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_80244C3C:
    // 0x80244C3C: jal         0x80238B80
    // 0x80244C40: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    static_3_80238B80(rdram, ctx);
        goto after_1;
    // 0x80244C40: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    after_1:
    // 0x80244C44: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x80244C48: lw          $t9, 0xC($s6)
    ctx->r25 = MEM_W(ctx->r22, 0XC);
    // 0x80244C4C: lw          $t8, 0x8($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X8);
    // 0x80244C50: sw          $t9, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r25;
    // 0x80244C54: sw          $t8, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r24;
    // 0x80244C58: lw          $t1, 0x14($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X14);
    // 0x80244C5C: lw          $t0, 0x10($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X10);
    // 0x80244C60: addiu       $s1, $sp, 0x7C
    ctx->r17 = ADD32(ctx->r29, 0X7C);
    // 0x80244C64: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80244C68: or          $s5, $s1, $zero
    ctx->r21 = ctx->r17 | 0;
    // 0x80244C6C: addiu       $s0, $sp, 0x9C
    ctx->r16 = ADD32(ctx->r29, 0X9C);
    // 0x80244C70: sw          $t1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r9;
    // 0x80244C74: sw          $t0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r8;
L_80244C78:
    // 0x80244C78: sb          $s3, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r19;
    // 0x80244C7C: jal         0x802456A0
    // 0x80244C80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802456A0(rdram, ctx);
        goto after_2;
    // 0x80244C80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x80244C84: beq         $v0, $zero, L_80244C94
    if (ctx->r2 == 0) {
        // 0x80244C88: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80244C94;
    }
    // 0x80244C88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80244C8C: b           L_80244F10
    // 0x80244C90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F10;
    // 0x80244C90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244C94:
    // 0x80244C94: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244C98: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244C9C: jal         0x80245710
    // 0x80244CA0: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    static_3_80245710(rdram, ctx);
        goto after_3;
    // 0x80244CA0: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_3:
    // 0x80244CA4: beq         $v0, $zero, L_80244CB4
    if (ctx->r2 == 0) {
        // 0x80244CA8: ori         $t3, $s3, 0x80
        ctx->r11 = ctx->r19 | 0X80;
            goto L_80244CB4;
    }
    // 0x80244CA8: ori         $t3, $s3, 0x80
    ctx->r11 = ctx->r19 | 0X80;
    // 0x80244CAC: b           L_80244F10
    // 0x80244CB0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F10;
    // 0x80244CB0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244CB4:
    // 0x80244CB4: sb          $t3, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r11;
    // 0x80244CB8: addiu       $v0, $sp, 0x7D
    ctx->r2 = ADD32(ctx->r29, 0X7D);
L_80244CBC:
    // 0x80244CBC: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x80244CC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244CC4: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x80244CC8: nor         $t5, $t4, $zero
    ctx->r13 = ~(ctx->r12 | 0);
    // 0x80244CCC: bne         $at, $zero, L_80244CBC
    if (ctx->r1 != 0) {
        // 0x80244CD0: sb          $t5, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r13;
            goto L_80244CBC;
    }
    // 0x80244CD0: sb          $t5, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r13;
    // 0x80244CD4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244CD8: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244CDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80244CE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80244CE4: jal         0x80246660
    // 0x80244CE8: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    static_3_80246660(rdram, ctx);
        goto after_4;
    // 0x80244CE8: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_4:
    // 0x80244CEC: beq         $v0, $zero, L_80244CFC
    if (ctx->r2 == 0) {
        // 0x80244CF0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80244CFC;
    }
    // 0x80244CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80244CF4: b           L_80244F10
    // 0x80244CF8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F10;
    // 0x80244CF8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244CFC:
    // 0x80244CFC: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244D00: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244D04: jal         0x80245710
    // 0x80244D08: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    static_3_80245710(rdram, ctx);
        goto after_5;
    // 0x80244D08: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    after_5:
    // 0x80244D0C: beq         $v0, $zero, L_80244D1C
    if (ctx->r2 == 0) {
        // 0x80244D10: addiu       $v1, $sp, 0x5C
        ctx->r3 = ADD32(ctx->r29, 0X5C);
            goto L_80244D1C;
    }
    // 0x80244D10: addiu       $v1, $sp, 0x5C
    ctx->r3 = ADD32(ctx->r29, 0X5C);
    // 0x80244D14: b           L_80244F10
    // 0x80244D18: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F10;
    // 0x80244D18: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244D1C:
    // 0x80244D1C: addiu       $v0, $sp, 0x7C
    ctx->r2 = ADD32(ctx->r29, 0X7C);
L_80244D20:
    // 0x80244D20: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80244D24: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80244D28: nop

    // 0x80244D2C: bne         $t6, $t7, L_80244D48
    if (ctx->r14 != ctx->r15) {
        // 0x80244D30: addiu       $t8, $sp, 0x7C
        ctx->r24 = ADD32(ctx->r29, 0X7C);
            goto L_80244D48;
    }
    // 0x80244D30: addiu       $t8, $sp, 0x7C
    ctx->r24 = ADD32(ctx->r29, 0X7C);
    // 0x80244D34: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80244D38: sltu        $at, $v1, $s1
    ctx->r1 = ctx->r3 < ctx->r17 ? 1 : 0;
    // 0x80244D3C: bne         $at, $zero, L_80244D20
    if (ctx->r1 != 0) {
        // 0x80244D40: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80244D20;
    }
    // 0x80244D40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244D44: addiu       $t8, $sp, 0x7C
    ctx->r24 = ADD32(ctx->r29, 0X7C);
L_80244D48:
    // 0x80244D48: bne         $v1, $t8, L_80244DB0
    if (ctx->r3 != ctx->r24) {
        // 0x80244D4C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80244DB0;
    }
    // 0x80244D4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80244D50: blez        $s3, L_80244DA0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80244D54: nop
    
            goto L_80244DA0;
    }
    // 0x80244D54: nop

    // 0x80244D58: jal         0x802456A0
    // 0x80244D5C: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_6;
    // 0x80244D5C: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_6:
    // 0x80244D60: beq         $v0, $zero, L_80244D70
    if (ctx->r2 == 0) {
        // 0x80244D64: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80244D70;
    }
    // 0x80244D64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80244D68: b           L_80244F10
    // 0x80244D6C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F10;
    // 0x80244D6C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244D70:
    // 0x80244D70: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244D74: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244D78: jal         0x80245710
    // 0x80244D7C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    static_3_80245710(rdram, ctx);
        goto after_7;
    // 0x80244D7C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_7:
    // 0x80244D80: beq         $v0, $zero, L_80244D94
    if (ctx->r2 == 0) {
        // 0x80244D84: lbu         $t9, 0x7C($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X7C);
            goto L_80244D94;
    }
    // 0x80244D84: lbu         $t9, 0x7C($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X7C);
    // 0x80244D88: b           L_80244F10
    // 0x80244D8C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F10;
    // 0x80244D8C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80244D90: lbu         $t9, 0x7C($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X7C);
L_80244D94:
    // 0x80244D94: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80244D98: bne         $t9, $at, L_80244DB0
    if (ctx->r25 != ctx->r1) {
        // 0x80244D9C: nop
    
            goto L_80244DB0;
    }
    // 0x80244D9C: nop

L_80244DA0:
    // 0x80244DA0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80244DA4: slti        $at, $s3, 0x3E
    ctx->r1 = SIGNED(ctx->r19) < 0X3E ? 1 : 0;
    // 0x80244DA8: bne         $at, $zero, L_80244C78
    if (ctx->r1 != 0) {
        // 0x80244DAC: nop
    
            goto L_80244C78;
    }
    // 0x80244DAC: nop

L_80244DB0:
    // 0x80244DB0: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x80244DB4: jal         0x802456A0
    // 0x80244DB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802456A0(rdram, ctx);
        goto after_8;
    // 0x80244DB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x80244DBC: beq         $v0, $zero, L_80244DCC
    if (ctx->r2 == 0) {
        // 0x80244DC0: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80244DCC;
    }
    // 0x80244DC0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80244DC4: b           L_80244F10
    // 0x80244DC8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F10;
    // 0x80244DC8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244DCC:
    // 0x80244DCC: blez        $s3, L_80244DDC
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80244DD0: addiu       $a1, $s4, 0x1C
        ctx->r5 = ADD32(ctx->r20, 0X1C);
            goto L_80244DDC;
    }
    // 0x80244DD0: addiu       $a1, $s4, 0x1C
    ctx->r5 = ADD32(ctx->r20, 0X1C);
    // 0x80244DD4: b           L_80244DE0
    // 0x80244DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80244DE0;
    // 0x80244DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80244DDC:
    // 0x80244DDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80244DE0:
    // 0x80244DE0: lhu         $t0, 0x18($s6)
    ctx->r8 = MEM_HU(ctx->r22, 0X18);
    // 0x80244DE4: sb          $s3, 0x1A($s4)
    MEM_B(0X1A, ctx->r20) = ctx->r19;
    // 0x80244DE8: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x80244DEC: or          $t2, $t1, $v0
    ctx->r10 = ctx->r9 | ctx->r2;
    // 0x80244DF0: sh          $t2, 0x18($s4)
    MEM_H(0X18, ctx->r20) = ctx->r10;
    // 0x80244DF4: lbu         $t3, 0x1B($s6)
    ctx->r11 = MEM_BU(ctx->r22, 0X1B);
    // 0x80244DF8: addiu       $a2, $s4, 0x1E
    ctx->r6 = ADD32(ctx->r20, 0X1E);
    // 0x80244DFC: jal         0x80244B3C
    // 0x80244E00: sb          $t3, 0x1B($s4)
    MEM_B(0X1B, ctx->r20) = ctx->r11;
    static_3_80244B3C(rdram, ctx);
        goto after_9;
    // 0x80244E00: sb          $t3, 0x1B($s4)
    MEM_B(0X1B, ctx->r20) = ctx->r11;
    after_9:
    // 0x80244E04: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80244E08: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80244E0C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80244E10: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80244E14: sh          $t4, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r12;
    // 0x80244E18: sh          $t5, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r13;
    // 0x80244E1C: sh          $t6, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r14;
    // 0x80244E20: sh          $t7, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r15;
    // 0x80244E24: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80244E28: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
L_80244E2C:
    // 0x80244E2C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244E30: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244E34: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x80244E38: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80244E3C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80244E40: jal         0x80246660
    // 0x80244E44: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    static_3_80246660(rdram, ctx);
        goto after_10;
    // 0x80244E44: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_10:
    // 0x80244E48: beq         $v0, $zero, L_80244E58
    if (ctx->r2 == 0) {
        // 0x80244E4C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80244E58;
    }
    // 0x80244E4C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80244E50: b           L_80244F10
    // 0x80244E54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F10;
    // 0x80244E54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244E58:
    // 0x80244E58: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80244E5C: bne         $at, $zero, L_80244E2C
    if (ctx->r1 != 0) {
        // 0x80244E60: nop
    
            goto L_80244E2C;
    }
    // 0x80244E60: nop

    // 0x80244E64: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80244E68: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80244E6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80244E70: jal         0x80245710
    // 0x80244E74: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    static_3_80245710(rdram, ctx);
        goto after_11;
    // 0x80244E74: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_11:
    // 0x80244E78: beq         $v0, $zero, L_80244E88
    if (ctx->r2 == 0) {
        // 0x80244E7C: or          $v1, $s4, $zero
        ctx->r3 = ctx->r20 | 0;
            goto L_80244E88;
    }
    // 0x80244E7C: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x80244E80: b           L_80244F10
    // 0x80244E84: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80244F10;
    // 0x80244E84: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244E88:
    // 0x80244E88: addiu       $v0, $sp, 0x7C
    ctx->r2 = ADD32(ctx->r29, 0X7C);
    // 0x80244E8C: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
L_80244E90:
    // 0x80244E90: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80244E94: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x80244E98: nop

    // 0x80244E9C: beq         $t9, $t0, L_80244EAC
    if (ctx->r25 == ctx->r8) {
        // 0x80244EA0: nop
    
            goto L_80244EAC;
    }
    // 0x80244EA0: nop

    // 0x80244EA4: b           L_80244F0C
    // 0x80244EA8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80244F0C;
    // 0x80244EA8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80244EAC:
    // 0x80244EAC: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
    // 0x80244EB0: lbu         $t2, 0x1($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X1);
    // 0x80244EB4: nop

    // 0x80244EB8: beq         $t1, $t2, L_80244EC8
    if (ctx->r9 == ctx->r10) {
        // 0x80244EBC: nop
    
            goto L_80244EC8;
    }
    // 0x80244EBC: nop

    // 0x80244EC0: b           L_80244F0C
    // 0x80244EC4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80244F0C;
    // 0x80244EC4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80244EC8:
    // 0x80244EC8: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x80244ECC: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x80244ED0: nop

    // 0x80244ED4: beq         $t3, $t4, L_80244EE4
    if (ctx->r11 == ctx->r12) {
        // 0x80244ED8: nop
    
            goto L_80244EE4;
    }
    // 0x80244ED8: nop

    // 0x80244EDC: b           L_80244F0C
    // 0x80244EE0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80244F0C;
    // 0x80244EE0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80244EE4:
    // 0x80244EE4: lbu         $t5, 0x3($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X3);
    // 0x80244EE8: lbu         $t6, 0x3($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3);
    // 0x80244EEC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80244EF0: beq         $t5, $t6, L_80244F00
    if (ctx->r13 == ctx->r14) {
        // 0x80244EF4: nop
    
            goto L_80244F00;
    }
    // 0x80244EF4: nop

    // 0x80244EF8: b           L_80244F0C
    // 0x80244EFC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80244F0C;
    // 0x80244EFC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80244F00:
    // 0x80244F00: bne         $v0, $a0, L_80244E90
    if (ctx->r2 != ctx->r4) {
        // 0x80244F04: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80244E90;
    }
    // 0x80244F04: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80244F08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80244F0C:
    // 0x80244F0C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80244F10:
    // 0x80244F10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80244F14: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80244F18: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80244F1C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80244F20: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80244F24: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80244F28: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80244F2C: jr          $ra
    // 0x80244F30: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80244F30: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void D_8023847C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023847C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80238480: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80238484: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80238488: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023848C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80238490: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238494: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80238498: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8023849C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802384A0: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x802384A4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802384A8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x802384AC: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x802384B0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x802384B4: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x802384B8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802384BC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802384C0: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
    // 0x802384C4: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x802384C8: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
L_802384CC:
    // 0x802384CC: sb          $zero, 0xA8($s1)
    MEM_B(0XA8, ctx->r17) = 0;
    // 0x802384D0: sw          $zero, 0x58($t4)
    MEM_W(0X58, ctx->r12) = 0;
    // 0x802384D4: sb          $zero, 0x98($s1)
    MEM_B(0X98, ctx->r17) = 0;
    // 0x802384D8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x802384DC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802384E0: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x802384E4: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x802384E8: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x802384EC: beq         $v0, $zero, L_80238518
    if (ctx->r2 == 0) {
        // 0x802384F0: addu        $t6, $s4, $v0
        ctx->r14 = ADD32(ctx->r20, ctx->r2);
            goto L_80238518;
    }
    // 0x802384F0: addu        $t6, $s4, $v0
    ctx->r14 = ADD32(ctx->r20, ctx->r2);
    // 0x802384F4: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x802384F8: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x802384FC: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
    // 0x80238500: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80238504: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x80238508: jal         0x80238174
    // 0x8023850C: sw          $t6, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r14;
    static_3_80238174(rdram, ctx);
        goto after_0;
    // 0x8023850C: sw          $t6, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r14;
    after_0:
    // 0x80238510: b           L_8023851C
    // 0x80238514: sw          $v0, 0xB8($t4)
    MEM_W(0XB8, ctx->r12) = ctx->r2;
        goto L_8023851C;
    // 0x80238514: sw          $v0, 0xB8($t4)
    MEM_W(0XB8, ctx->r12) = ctx->r2;
L_80238518:
    // 0x80238518: sw          $zero, 0x18($t4)
    MEM_W(0X18, ctx->r12) = 0;
L_8023851C:
    // 0x8023851C: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x80238520: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80238524: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80238528: bne         $t5, $s3, L_802384CC
    if (ctx->r13 != ctx->r19) {
        // 0x8023852C: addiu       $t4, $t4, 0x4
        ctx->r12 = ADD32(ctx->r12, 0X4);
            goto L_802384CC;
    }
    // 0x8023852C: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
    // 0x80238530: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80238534: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80238538: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8023853C: lw          $t7, 0x40($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X40);
    // 0x80238540: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80238544: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80238548: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8023854C: bgez        $t7, L_80238560
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80238550: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80238560;
    }
    // 0x80238550: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80238554: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80238558: nop

    // 0x8023855C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80238560:
    // 0x80238560: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x80238564: div.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80238568: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x8023856C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x80238570: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80238574: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80238578: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023857C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80238580: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238584: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238588: jr          $ra
    // 0x8023858C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8023858C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802E54FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E557C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E5580: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802E5584: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E5588: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E558C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E5590: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802E5594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E5598: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802E559C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802E55A0: jal         0x803025D8
    // 0x802E55A4: addiu       $a1, $a1, 0xDD8
    ctx->r5 = ADD32(ctx->r5, 0XDD8);
    static_3_803025D8(rdram, ctx);
        goto after_0;
    // 0x802E55A4: addiu       $a1, $a1, 0xDD8
    ctx->r5 = ADD32(ctx->r5, 0XDD8);
    after_0:
    // 0x802E55A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E55AC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E55B0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802E55B4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802E55B8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    // 0x802E55BC: jal         0x803025D8
    // 0x802E55C0: addiu       $a1, $a1, 0xDE0
    ctx->r5 = ADD32(ctx->r5, 0XDE0);
    static_3_803025D8(rdram, ctx);
        goto after_1;
    // 0x802E55C0: addiu       $a1, $a1, 0xDE0
    ctx->r5 = ADD32(ctx->r5, 0XDE0);
    after_1:
    // 0x802E55C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E55C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E55CC: jr          $ra
    // 0x802E55D0: nop

    return;
    // 0x802E55D0: nop

;}
RECOMP_FUNC void D_802E804C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E80CC: jr          $ra
    // 0x802E80D0: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    return;
    // 0x802E80D0: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
;}
RECOMP_FUNC void D_802D44BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D453C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802D4540: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D4544: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802D4548: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802D454C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x802D4550: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x802D4554: lw          $v0, 0x348($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X348);
    // 0x802D4558: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D455C: lw          $s1, 0x350($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X350);
    // 0x802D4560: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802D4564: beq         $at, $zero, L_802D457C
    if (ctx->r1 == 0) {
        // 0x802D4568: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802D457C;
    }
    // 0x802D4568: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D456C: jal         0x80231A24
    // 0x802D4570: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D4570: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D4574: b           L_802D4670
    // 0x802D4578: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802D4670;
    // 0x802D4578: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802D457C:
    // 0x802D457C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802D4580: bne         $s1, $at, L_802D45BC
    if (ctx->r17 != ctx->r1) {
        // 0x802D4584: addiu       $v1, $v0, -0x1
        ctx->r3 = ADD32(ctx->r2, -0X1);
            goto L_802D45BC;
    }
    // 0x802D4584: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x802D4588: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x802D458C: addiu       $t6, $s0, 0x38
    ctx->r14 = ADD32(ctx->r16, 0X38);
    // 0x802D4590: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802D4594: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802D4598: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802D459C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802D45A0: addiu       $a3, $s0, 0x1C
    ctx->r7 = ADD32(ctx->r16, 0X1C);
    // 0x802D45A4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x802D45A8: jal         0x80304E00
    // 0x802D45AC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    static_3_80304E00(rdram, ctx);
        goto after_1;
    // 0x802D45AC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_1:
    // 0x802D45B0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x802D45B4: b           L_802D4630
    // 0x802D45B8: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
        goto L_802D4630;
    // 0x802D45B8: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
L_802D45BC:
    // 0x802D45BC: bne         $s1, $v1, L_802D45FC
    if (ctx->r17 != ctx->r3) {
        // 0x802D45C0: lwc1        $f12, 0x48($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
            goto L_802D45FC;
    }
    // 0x802D45C0: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802D45C4: sll         $t8, $s1, 3
    ctx->r24 = S32(ctx->r17 << 3);
    // 0x802D45C8: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x802D45CC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802D45D0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x802D45D4: addu        $a3, $s0, $t8
    ctx->r7 = ADD32(ctx->r16, ctx->r24);
    // 0x802D45D8: addiu       $a1, $a3, -0x38
    ctx->r5 = ADD32(ctx->r7, -0X38);
    // 0x802D45DC: addiu       $a2, $a3, -0x1C
    ctx->r6 = ADD32(ctx->r7, -0X1C);
    // 0x802D45E0: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x802D45E4: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802D45E8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x802D45EC: jal         0x80304E00
    // 0x802D45F0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    static_3_80304E00(rdram, ctx);
        goto after_2;
    // 0x802D45F0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_2:
    // 0x802D45F4: b           L_802D4630
    // 0x802D45F8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
        goto L_802D4630;
    // 0x802D45F8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
L_802D45FC:
    // 0x802D45FC: sll         $t0, $s1, 3
    ctx->r8 = S32(ctx->r17 << 3);
    // 0x802D4600: subu        $t0, $t0, $s1
    ctx->r8 = SUB32(ctx->r8, ctx->r17);
    // 0x802D4604: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802D4608: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x802D460C: addu        $a3, $s0, $t0
    ctx->r7 = ADD32(ctx->r16, ctx->r8);
    // 0x802D4610: addiu       $t1, $a3, 0x1C
    ctx->r9 = ADD32(ctx->r7, 0X1C);
    // 0x802D4614: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802D4618: addiu       $a1, $a3, -0x38
    ctx->r5 = ADD32(ctx->r7, -0X38);
    // 0x802D461C: addiu       $a2, $a3, -0x1C
    ctx->r6 = ADD32(ctx->r7, -0X1C);
    // 0x802D4620: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x802D4624: jal         0x80304E00
    // 0x802D4628: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    static_3_80304E00(rdram, ctx);
        goto after_3;
    // 0x802D4628: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_3:
    // 0x802D462C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
L_802D4630:
    // 0x802D4630: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D4634: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D4638: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802D463C: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x802D4640: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802D4644: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802D4648: nop

    // 0x802D464C: bc1f        L_802D4660
    if (!c1cs) {
        // 0x802D4650: nop
    
            goto L_802D4660;
    }
    // 0x802D4650: nop

    // 0x802D4654: lw          $t3, 0x350($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X350);
    // 0x802D4658: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x802D465C: sw          $t4, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r12;
L_802D4660:
    // 0x802D4660: beql        $at, $zero, L_802D4670
    if (ctx->r1 == 0) {
        // 0x802D4664: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802D4670;
    }
    goto skip_0;
    // 0x802D4664: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802D4668: sw          $t5, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r13;
    // 0x802D466C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802D4670:
    // 0x802D4670: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802D4674: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802D4678: jr          $ra
    // 0x802D467C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802D467C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802D3E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3E80: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D3E84: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D3E88: jr          $ra
    // 0x802D3E8C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D3E8C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8023BE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023BE34: addiu       $sp, $sp, -0x1A8
    ctx->r29 = ADD32(ctx->r29, -0X1A8);
    // 0x8023BE38: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8023BE3C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8023BE40: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8023BE44: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8023BE48: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8023BE4C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8023BE50: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8023BE54: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8023BE58: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8023BE5C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8023BE60: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x8023BE64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8023BE68: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023BE6C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8023BE70: beq         $t7, $zero, L_8023BE80
    if (ctx->r15 == 0) {
        // 0x8023BE74: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_8023BE80;
    }
    // 0x8023BE74: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023BE78: b           L_8023CB70
    // 0x8023BE7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8023CB70;
    // 0x8023BE7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8023BE80:
    // 0x8023BE80: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023BE84: lw          $t8, 0x3C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3C);
    // 0x8023BE88: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023BE8C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8023BE90: bne         $t8, $zero, L_8023BEA0
    if (ctx->r24 != 0) {
        // 0x8023BE94: sw          $t8, 0x18C($sp)
        MEM_W(0X18C, ctx->r29) = ctx->r24;
            goto L_8023BEA0;
    }
    // 0x8023BE94: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023BE98: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x8023BE9C: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
L_8023BEA0:
    // 0x8023BEA0: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BEA4: lhu         $t8, 0x0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X0);
    // 0x8023BEA8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8023BEAC: sw          $t7, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r15;
    // 0x8023BEB0: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x8023BEB4: beq         $t9, $zero, L_8023BEC8
    if (ctx->r25 == 0) {
        // 0x8023BEB8: lw          $s5, 0x34($s0)
        ctx->r21 = MEM_W(ctx->r16, 0X34);
            goto L_8023BEC8;
    }
    // 0x8023BEB8: lw          $s5, 0x34($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X34);
    // 0x8023BEBC: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BEC0: nor         $t7, $t6, $zero
    ctx->r15 = ~(ctx->r14 | 0);
    // 0x8023BEC4: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
L_8023BEC8:
    // 0x8023BEC8: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BECC: andi        $t8, $a0, 0x400
    ctx->r24 = ctx->r4 & 0X400;
    // 0x8023BED0: beq         $t8, $zero, L_8023BEE4
    if (ctx->r24 == 0) {
        // 0x8023BED4: or          $s4, $a0, $zero
        ctx->r20 = ctx->r4 | 0;
            goto L_8023BEE4;
    }
    // 0x8023BED4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8023BED8: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x8023BEDC: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BEE0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_8023BEE4:
    // 0x8023BEE4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8023BEE8: andi        $v1, $s4, 0x1
    ctx->r3 = ctx->r20 & 0X1;
    // 0x8023BEEC: beql        $v0, $s4, L_8023C07C
    if (ctx->r2 == ctx->r20) {
        // 0x8023BEF0: andi        $t7, $a0, 0x8
        ctx->r15 = ctx->r4 & 0X8;
            goto L_8023C07C;
    }
    goto skip_0;
    // 0x8023BEF0: andi        $t7, $a0, 0x8
    ctx->r15 = ctx->r4 & 0X8;
    skip_0:
    // 0x8023BEF4: beq         $v1, $zero, L_8023BF30
    if (ctx->r3 == 0) {
        // 0x8023BEF8: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_8023BF30;
    }
    // 0x8023BEF8: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x8023BEFC: bne         $t9, $zero, L_8023BF30
    if (ctx->r25 != 0) {
        // 0x8023BF00: lw          $t6, 0x18C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18C);
            goto L_8023BF30;
    }
    // 0x8023BF00: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BF04: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8023BF08: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023BF0C: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x8023BF10: lui         $t9, 0x50
    ctx->r25 = S32(0X50 << 16);
    // 0x8023BF14: ori         $t9, $t9, 0x4240
    ctx->r25 = ctx->r25 | 0X4240;
    // 0x8023BF18: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x8023BF1C: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8023BF20: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x8023BF24: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BF28: b           L_8023BF68
    // 0x8023BF2C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
        goto L_8023BF68;
    // 0x8023BF2C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_8023BF30:
    // 0x8023BF30: bne         $v1, $zero, L_8023BF68
    if (ctx->r3 != 0) {
        // 0x8023BF34: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_8023BF68;
    }
    // 0x8023BF34: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8023BF38: beq         $t6, $zero, L_8023BF68
    if (ctx->r14 == 0) {
        // 0x8023BF3C: lw          $t7, 0x18C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18C);
            goto L_8023BF68;
    }
    // 0x8023BF3C: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BF40: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8023BF44: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023BF48: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x8023BF4C: lui         $t6, 0xF0A
    ctx->r14 = S32(0XF0A << 16);
    // 0x8023BF50: ori         $t6, $t6, 0x7008
    ctx->r14 = ctx->r14 | 0X7008;
    // 0x8023BF54: ori         $t9, $t9, 0x31D
    ctx->r25 = ctx->r25 | 0X31D;
    // 0x8023BF58: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8023BF5C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8023BF60: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BF64: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_8023BF68:
    // 0x8023BF68: andi        $v0, $s4, 0x2
    ctx->r2 = ctx->r20 & 0X2;
    // 0x8023BF6C: beq         $v0, $zero, L_8023BFC8
    if (ctx->r2 == 0) {
        // 0x8023BF70: nop
    
            goto L_8023BFC8;
    }
    // 0x8023BF70: nop

    // 0x8023BF74: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8023BF78: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BF7C: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x8023BF80: bne         $t8, $zero, L_8023BFC8
    if (ctx->r24 != 0) {
        // 0x8023BF84: addiu       $t6, $t9, 0x8
        ctx->r14 = ADD32(ctx->r25, 0X8);
            goto L_8023BFC8;
    }
    // 0x8023BF84: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8023BF88: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023BF8C: lui         $t7, 0xF900
    ctx->r15 = S32(0XF900 << 16);
    // 0x8023BF90: addiu       $t8, $zero, -0xFF
    ctx->r24 = ADD32(0, -0XFF);
    // 0x8023BF94: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8023BF98: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8023BF9C: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BFA0: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x8023BFA4: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x8023BFA8: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8023BFAC: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023BFB0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8023BFB4: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8023BFB8: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8023BFBC: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BFC0: b           L_8023C000
    // 0x8023BFC4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
        goto L_8023C000;
    // 0x8023BFC4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_8023BFC8:
    // 0x8023BFC8: bnel        $v0, $zero, L_8023C004
    if (ctx->r2 != 0) {
        // 0x8023BFCC: andi        $a3, $s4, 0x80
        ctx->r7 = ctx->r20 & 0X80;
            goto L_8023C004;
    }
    goto skip_1;
    // 0x8023BFCC: andi        $a3, $s4, 0x80
    ctx->r7 = ctx->r20 & 0X80;
    skip_1:
    // 0x8023BFD0: lhu         $t9, 0x0($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X0);
    // 0x8023BFD4: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023BFD8: andi        $t6, $t9, 0x2
    ctx->r14 = ctx->r25 & 0X2;
    // 0x8023BFDC: beq         $t6, $zero, L_8023C000
    if (ctx->r14 == 0) {
        // 0x8023BFE0: addiu       $t8, $t7, 0x8
        ctx->r24 = ADD32(ctx->r15, 0X8);
            goto L_8023C000;
    }
    // 0x8023BFE0: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8023BFE4: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023BFE8: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x8023BFEC: ori         $t9, $t9, 0x2
    ctx->r25 = ctx->r25 | 0X2;
    // 0x8023BFF0: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8023BFF4: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8023BFF8: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x8023BFFC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_8023C000:
    // 0x8023C000: andi        $a3, $s4, 0x80
    ctx->r7 = ctx->r20 & 0X80;
L_8023C004:
    // 0x8023C004: beq         $a3, $zero, L_8023C040
    if (ctx->r7 == 0) {
        // 0x8023C008: nop
    
            goto L_8023C040;
    }
    // 0x8023C008: nop

    // 0x8023C00C: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x8023C010: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C014: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x8023C018: bne         $t7, $zero, L_8023C040
    if (ctx->r15 != 0) {
        // 0x8023C01C: addiu       $t9, $t8, 0x8
        ctx->r25 = ADD32(ctx->r24, 0X8);
            goto L_8023C040;
    }
    // 0x8023C01C: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8023C020: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C024: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8023C028: ori         $t6, $t6, 0xC02
    ctx->r14 = ctx->r14 | 0XC02;
    // 0x8023C02C: addiu       $t7, $zero, 0x3000
    ctx->r15 = ADD32(0, 0X3000);
    // 0x8023C030: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8023C034: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x8023C038: b           L_8023C078
    // 0x8023C03C: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
        goto L_8023C078;
    // 0x8023C03C: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
L_8023C040:
    // 0x8023C040: bnel        $a3, $zero, L_8023C07C
    if (ctx->r7 != 0) {
        // 0x8023C044: andi        $t7, $a0, 0x8
        ctx->r15 = ctx->r4 & 0X8;
            goto L_8023C07C;
    }
    goto skip_2;
    // 0x8023C044: andi        $t7, $a0, 0x8
    ctx->r15 = ctx->r4 & 0X8;
    skip_2:
    // 0x8023C048: lhu         $t8, 0x0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X0);
    // 0x8023C04C: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C050: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x8023C054: beq         $t9, $zero, L_8023C078
    if (ctx->r25 == 0) {
        // 0x8023C058: addiu       $t7, $t6, 0x8
        ctx->r15 = ADD32(ctx->r14, 0X8);
            goto L_8023C078;
    }
    // 0x8023C058: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8023C05C: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023C060: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023C064: ori         $t8, $t8, 0xC02
    ctx->r24 = ctx->r24 | 0XC02;
    // 0x8023C068: addiu       $t9, $zero, 0x2000
    ctx->r25 = ADD32(0, 0X2000);
    // 0x8023C06C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x8023C070: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8023C074: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
L_8023C078:
    // 0x8023C078: andi        $t7, $a0, 0x8
    ctx->r15 = ctx->r4 & 0X8;
L_8023C07C:
    // 0x8023C07C: beq         $t7, $zero, L_8023C0A4
    if (ctx->r15 == 0) {
        // 0x8023C080: sh          $a0, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r4;
            goto L_8023C0A4;
    }
    // 0x8023C080: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x8023C084: lw          $v0, 0x18C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C088: lui         $t6, 0xEE00
    ctx->r14 = S32(0XEE00 << 16);
    // 0x8023C08C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8023C090: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C094: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023C098: lh          $t8, 0x16($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X16);
    // 0x8023C09C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8023C0A0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_8023C0A4:
    // 0x8023C0A4: lw          $v0, 0x18C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C0A8: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x8023C0AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8023C0B0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8023C0B4: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023C0B8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8023C0BC: lbu         $t6, 0x18($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X18);
    // 0x8023C0C0: lbu         $t9, 0x19($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X19);
    // 0x8023C0C4: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x8023C0C8: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x8023C0CC: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x8023C0D0: lbu         $t7, 0x1A($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1A);
    // 0x8023C0D4: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8023C0D8: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x8023C0DC: lbu         $t8, 0x1B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1B);
    // 0x8023C0E0: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x8023C0E4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8023C0E8: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C0EC: beq         $a0, $at, L_8023C0FC
    if (ctx->r4 == ctx->r1) {
        // 0x8023C0F0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8023C0FC;
    }
    // 0x8023C0F0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8023C0F4: bnel        $a0, $at, L_8023C158
    if (ctx->r4 != ctx->r1) {
        // 0x8023C0F8: lbu         $t9, 0x1B($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X1B);
            goto L_8023C158;
    }
    goto skip_3;
    // 0x8023C0F8: lbu         $t9, 0x1B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1B);
    skip_3:
L_8023C0FC:
    // 0x8023C0FC: lbu         $t7, 0x1B($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1B);
    // 0x8023C100: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C104: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8023C108: bne         $t7, $at, L_8023C134
    if (ctx->r15 != ctx->r1) {
        // 0x8023C10C: addiu       $t8, $t9, 0x8
        ctx->r24 = ADD32(ctx->r25, 0X8);
            goto L_8023C134;
    }
    // 0x8023C10C: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8023C110: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C114: lui         $t6, 0xFC11
    ctx->r14 = S32(0XFC11 << 16);
    // 0x8023C118: ori         $t6, $t6, 0xFE23
    ctx->r14 = ctx->r14 | 0XFE23;
    // 0x8023C11C: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8023C120: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C124: addiu       $t7, $zero, -0xC07
    ctx->r15 = ADD32(0, -0XC07);
    // 0x8023C128: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8023C12C: b           L_8023C1A8
    // 0x8023C130: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
        goto L_8023C1A8;
    // 0x8023C130: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
L_8023C134:
    // 0x8023C134: lui         $t6, 0xFC11
    ctx->r14 = S32(0XFC11 << 16);
    // 0x8023C138: lui         $t7, 0xFF2F
    ctx->r15 = S32(0XFF2F << 16);
    // 0x8023C13C: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x8023C140: ori         $t6, $t6, 0x9623
    ctx->r14 = ctx->r14 | 0X9623;
    // 0x8023C144: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C148: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8023C14C: b           L_8023C1A8
    // 0x8023C150: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
        goto L_8023C1A8;
    // 0x8023C150: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8023C154: lbu         $t9, 0x1B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1B);
L_8023C158:
    // 0x8023C158: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C15C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8023C160: bne         $t9, $at, L_8023C18C
    if (ctx->r25 != ctx->r1) {
        // 0x8023C164: addiu       $t6, $t8, 0x8
        ctx->r14 = ADD32(ctx->r24, 0X8);
            goto L_8023C18C;
    }
    // 0x8023C164: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C168: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C16C: lui         $t7, 0xFC11
    ctx->r15 = S32(0XFC11 << 16);
    // 0x8023C170: ori         $t7, $t7, 0xFE23
    ctx->r15 = ctx->r15 | 0XFE23;
    // 0x8023C174: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C178: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C17C: addiu       $t9, $zero, -0xC07
    ctx->r25 = ADD32(0, -0XC07);
    // 0x8023C180: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C184: b           L_8023C1A8
    // 0x8023C188: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
        goto L_8023C1A8;
    // 0x8023C188: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_8023C18C:
    // 0x8023C18C: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C190: lui         $t7, 0xFC11
    ctx->r15 = S32(0XFC11 << 16);
    // 0x8023C194: lui         $t9, 0xFF2F
    ctx->r25 = S32(0XFF2F << 16);
    // 0x8023C198: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x8023C19C: ori         $t7, $t7, 0x9623
    ctx->r15 = ctx->r15 | 0X9623;
    // 0x8023C1A0: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C1A4: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
L_8023C1A8:
    // 0x8023C1A8: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C1AC: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C1B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8023C1B4: bne         $a0, $at, L_8023C2A8
    if (ctx->r4 != ctx->r1) {
        // 0x8023C1B8: addiu       $t6, $t8, 0x8
        ctx->r14 = ADD32(ctx->r24, 0X8);
            goto L_8023C2A8;
    }
    // 0x8023C1B8: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C1BC: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C1C0: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023C1C4: ori         $t7, $t7, 0xE02
    ctx->r15 = ctx->r15 | 0XE02;
    // 0x8023C1C8: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x8023C1CC: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C1D0: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C1D4: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C1D8: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x8023C1DC: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8023C1E0: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C1E4: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C1E8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C1EC: lw          $t9, 0x20($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20);
    // 0x8023C1F0: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x8023C1F4: lui         $t0, 0x700
    ctx->r8 = S32(0X700 << 16);
    // 0x8023C1F8: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C1FC: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C200: lui         $a3, 0xE600
    ctx->r7 = S32(0XE600 << 16);
    // 0x8023C204: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C208: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C20C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8023C210: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C214: lw          $a1, 0x18C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C218: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x8023C21C: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C220: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
    // 0x8023C224: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x8023C228: addiu       $t7, $t6, 0x100
    ctx->r15 = ADD32(ctx->r14, 0X100);
    // 0x8023C22C: andi        $t9, $t7, 0x1FF
    ctx->r25 = ctx->r15 & 0X1FF;
    // 0x8023C230: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x8023C234: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8023C238: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C23C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8023C240: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023C244: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8023C248: sw          $a3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r7;
    // 0x8023C24C: lw          $v0, 0x18C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C250: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x8023C254: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8023C258: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C25C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023C260: lh          $t7, 0x1E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1E);
    // 0x8023C264: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8023C268: andi        $t8, $t9, 0x3FF
    ctx->r24 = ctx->r25 & 0X3FF;
    // 0x8023C26C: sll         $t6, $t8, 14
    ctx->r14 = S32(ctx->r24 << 14);
    // 0x8023C270: or          $t7, $t6, $t0
    ctx->r15 = ctx->r14 | ctx->r8;
    // 0x8023C274: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8023C278: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C27C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8023C280: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8023C284: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C288: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8023C28C: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8023C290: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C294: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8023C298: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C29C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8023C2A0: sw          $a3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r7;
    // 0x8023C2A4: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
L_8023C2A8:
    // 0x8023C2A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8023C2AC: bne         $a3, $a0, L_8023C344
    if (ctx->r7 != ctx->r4) {
        // 0x8023C2B0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8023C344;
    }
    // 0x8023C2B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8023C2B4: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x8023C2B8: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C2BC: andi        $t6, $t8, 0x20
    ctx->r14 = ctx->r24 & 0X20;
    // 0x8023C2C0: beq         $t6, $zero, L_8023C344
    if (ctx->r14 == 0) {
        // 0x8023C2C4: addiu       $t9, $t7, 0x8
        ctx->r25 = ADD32(ctx->r15, 0X8);
            goto L_8023C344;
    }
    // 0x8023C2C4: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8023C2C8: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C2CC: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023C2D0: ori         $t8, $t8, 0x903
    ctx->r24 = ctx->r24 | 0X903;
    // 0x8023C2D4: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8023C2D8: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8023C2DC: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C2E0: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8023C2E4: ori         $t9, $t9, 0xC02
    ctx->r25 = ctx->r25 | 0XC02;
    // 0x8023C2E8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8023C2EC: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023C2F0: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8023C2F4: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x8023C2F8: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C2FC: lui         $t9, 0x77FC
    ctx->r25 = S32(0X77FC << 16);
    // 0x8023C300: lui         $t7, 0xFC17
    ctx->r15 = S32(0XFC17 << 16);
    // 0x8023C304: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C308: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C30C: ori         $t7, $t7, 0xFE2F
    ctx->r15 = ctx->r15 | 0XFE2F;
    // 0x8023C310: ori         $t9, $t9, 0xF87C
    ctx->r25 = ctx->r25 | 0XF87C;
    // 0x8023C314: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C318: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C31C: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C320: lui         $t7, 0xEC15
    ctx->r15 = S32(0XEC15 << 16);
    // 0x8023C324: lui         $t9, 0x3B78
    ctx->r25 = S32(0X3B78 << 16);
    // 0x8023C328: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C32C: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C330: ori         $t9, $t9, 0xE42A
    ctx->r25 = ctx->r25 | 0XE42A;
    // 0x8023C334: ori         $t7, $t7, 0xFD5D
    ctx->r15 = ctx->r15 | 0XFD5D;
    // 0x8023C338: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C33C: b           L_8023C3F0
    // 0x8023C340: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
        goto L_8023C3F0;
    // 0x8023C340: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
L_8023C344:
    // 0x8023C344: bne         $a3, $a0, L_8023C3F0
    if (ctx->r7 != ctx->r4) {
        // 0x8023C348: lw          $t8, 0x18C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18C);
            goto L_8023C3F0;
    }
    // 0x8023C348: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C34C: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C350: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C354: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023C358: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x8023C35C: lui         $t9, 0x10
    ctx->r25 = S32(0X10 << 16);
    // 0x8023C360: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C364: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C368: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C36C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023C370: ori         $t7, $t7, 0xC02
    ctx->r15 = ctx->r15 | 0XC02;
    // 0x8023C374: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C378: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C37C: addiu       $t9, $zero, 0x2000
    ctx->r25 = ADD32(0, 0X2000);
    // 0x8023C380: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C384: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C388: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C38C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023C390: ori         $t7, $t7, 0x903
    ctx->r15 = ctx->r15 | 0X903;
    // 0x8023C394: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C398: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C39C: addiu       $t9, $zero, 0xA00
    ctx->r25 = ADD32(0, 0XA00);
    // 0x8023C3A0: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C3A4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C3A8: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C3AC: lui         $t7, 0xEC15
    ctx->r15 = S32(0XEC15 << 16);
    // 0x8023C3B0: lui         $t9, 0x3B78
    ctx->r25 = S32(0X3B78 << 16);
    // 0x8023C3B4: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C3B8: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C3BC: ori         $t9, $t9, 0xE42A
    ctx->r25 = ctx->r25 | 0XE42A;
    // 0x8023C3C0: ori         $t7, $t7, 0xFD5D
    ctx->r15 = ctx->r15 | 0XFD5D;
    // 0x8023C3C4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C3C8: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C3CC: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C3D0: lui         $t9, 0x7FFD
    ctx->r25 = S32(0X7FFD << 16);
    // 0x8023C3D4: lui         $t7, 0xFC27
    ctx->r15 = S32(0XFC27 << 16);
    // 0x8023C3D8: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C3DC: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C3E0: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x8023C3E4: ori         $t9, $t9, 0x7E38
    ctx->r25 = ctx->r25 | 0X7E38;
    // 0x8023C3E8: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x8023C3EC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_8023C3F0:
    // 0x8023C3F0: lhu         $s4, 0x14($s0)
    ctx->r20 = MEM_HU(ctx->r16, 0X14);
    // 0x8023C3F4: andi        $t8, $s4, 0x10
    ctx->r24 = ctx->r20 & 0X10;
    // 0x8023C3F8: beq         $t8, $zero, L_8023C40C
    if (ctx->r24 == 0) {
        // 0x8023C3FC: andi        $s3, $s4, 0x20
        ctx->r19 = ctx->r20 & 0X20;
            goto L_8023C40C;
    }
    // 0x8023C3FC: andi        $s3, $s4, 0x20
    ctx->r19 = ctx->r20 & 0X20;
    // 0x8023C400: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8023C404: b           L_8023C418
    // 0x8023C408: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
        goto L_8023C418;
    // 0x8023C408: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
L_8023C40C:
    // 0x8023C40C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8023C410: nop

    // 0x8023C414: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
L_8023C418:
    // 0x8023C418: beql        $s5, $zero, L_8023C90C
    if (ctx->r21 == 0) {
        // 0x8023C41C: lh          $t7, 0x4($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X4);
            goto L_8023C90C;
    }
    goto skip_4;
    // 0x8023C41C: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    skip_4:
    // 0x8023C420: beql        $s3, $zero, L_8023C45C
    if (ctx->r19 == 0) {
        // 0x8023C424: lh          $t7, 0x2($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X2);
            goto L_8023C45C;
    }
    goto skip_5;
    // 0x8023C424: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    skip_5:
    // 0x8023C428: lbu         $t6, 0x30($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C42C: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C430: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023C434: beq         $a3, $t6, L_8023C458
    if (ctx->r7 == ctx->r14) {
        // 0x8023C438: addiu       $t9, $t7, 0x8
        ctx->r25 = ADD32(ctx->r15, 0X8);
            goto L_8023C458;
    }
    // 0x8023C438: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8023C43C: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C440: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x8023C444: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x8023C448: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8023C44C: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8023C450: lhu         $s4, 0x14($s0)
    ctx->r20 = MEM_HU(ctx->r16, 0X14);
    // 0x8023C454: andi        $s3, $s4, 0x20
    ctx->r19 = ctx->r20 & 0X20;
L_8023C458:
    // 0x8023C458: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
L_8023C45C:
    // 0x8023C45C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023C460: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8023C464: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8023C468: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8023C46C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8023C470: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023C474: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8023C478: andi        $t9, $s4, 0x80
    ctx->r25 = ctx->r20 & 0X80;
    // 0x8023C47C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8023C480: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x8023C484: div.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8023C488: andi        $t8, $s4, 0x100
    ctx->r24 = ctx->r20 & 0X100;
    // 0x8023C48C: add.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8023C490: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8023C494: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8023C498: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8023C49C: nop

    // 0x8023C4A0: sw          $v0, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r2;
    // 0x8023C4A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8023C4A8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8023C4AC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8023C4B0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8023C4B4: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x8023C4B8: nop

    // 0x8023C4BC: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8023C4C0: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8023C4C4: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023C4C8: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8023C4CC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8023C4D0: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x8023C4D4: nop

    // 0x8023C4D8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8023C4DC: sra         $t7, $v1, 5
    ctx->r15 = S32(SIGNED(ctx->r3) >> 5);
    // 0x8023C4E0: beq         $t9, $zero, L_8023C4EC
    if (ctx->r25 == 0) {
        // 0x8023C4E4: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_8023C4EC;
    }
    // 0x8023C4E4: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8023C4E8: addiu       $s1, $t7, 0x10
    ctx->r17 = ADD32(ctx->r15, 0X10);
L_8023C4EC:
    // 0x8023C4EC: beql        $t8, $zero, L_8023C500
    if (ctx->r24 == 0) {
        // 0x8023C4F0: lh          $t2, 0x2C($s0)
        ctx->r10 = MEM_H(ctx->r16, 0X2C);
            goto L_8023C500;
    }
    goto skip_6;
    // 0x8023C4F0: lh          $t2, 0x2C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2C);
    skip_6:
    // 0x8023C4F4: lh          $t6, 0x42($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X42);
    // 0x8023C4F8: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
    // 0x8023C4FC: lh          $t2, 0x2C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2C);
L_8023C500:
    // 0x8023C500: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8023C504: nop

    // 0x8023C508: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C50C: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8023C510: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x8023C514: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8023C518: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8023C51C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8023C520: beql        $s3, $zero, L_8023C540
    if (ctx->r19 == 0) {
        // 0x8023C524: sw          $zero, 0x1A4($sp)
        MEM_W(0X1A4, ctx->r29) = 0;
            goto L_8023C540;
    }
    goto skip_7;
    // 0x8023C524: sw          $zero, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = 0;
    skip_7:
    // 0x8023C528: lbu         $t9, 0x30($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C52C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023C530: beql        $t9, $at, L_8023C540
    if (ctx->r25 == ctx->r1) {
        // 0x8023C534: sw          $zero, 0x1A4($sp)
        MEM_W(0X1A4, ctx->r29) = 0;
            goto L_8023C540;
    }
    goto skip_8;
    // 0x8023C534: sw          $zero, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = 0;
    skip_8:
    // 0x8023C538: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x8023C53C: sw          $zero, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = 0;
L_8023C540:
    // 0x8023C540: lh          $v0, 0x28($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X28);
    // 0x8023C544: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x8023C548: blez        $v0, L_8023C878
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C54C: nop
    
            goto L_8023C878;
    }
    // 0x8023C54C: nop

    // 0x8023C550: lh          $a2, 0x0($s5)
    ctx->r6 = MEM_H(ctx->r21, 0X0);
    // 0x8023C554: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023C558: blez        $a2, L_8023C878
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8023C55C: nop
    
            goto L_8023C878;
    }
    // 0x8023C55C: nop

    // 0x8023C560: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x8023C564: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8023C568: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
L_8023C56C:
    // 0x8023C56C: addu        $t6, $a2, $s2
    ctx->r14 = ADD32(ctx->r6, ctx->r18);
    // 0x8023C570: andi        $a3, $s4, 0x80
    ctx->r7 = ctx->r20 & 0X80;
    // 0x8023C574: slt         $at, $t8, $t6
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8023C578: beq         $at, $zero, L_8023C674
    if (ctx->r1 == 0) {
        // 0x8023C57C: andi        $t4, $s4, 0x100
        ctx->r12 = ctx->r20 & 0X100;
            goto L_8023C674;
    }
    // 0x8023C57C: andi        $t4, $s4, 0x100
    ctx->r12 = ctx->r20 & 0X100;
    // 0x8023C580: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    // 0x8023C584: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x8023C588: lh          $t7, 0x12($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X12);
    // 0x8023C58C: addu        $ra, $ra, $a0
    ctx->r31 = ADD32(ctx->r31, ctx->r4);
    // 0x8023C590: mtc1        $ra, $f6
    ctx->f6.u32l = ctx->r31;
    // 0x8023C594: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8023C598: addu        $t2, $a0, $ra
    ctx->r10 = ADD32(ctx->r4, ctx->r31);
    // 0x8023C59C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8023C5A0: addu        $s7, $s7, $t7
    ctx->r23 = ADD32(ctx->r23, ctx->r15);
    // 0x8023C5A4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8023C5A8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8023C5AC: lh          $a1, 0x6($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X6);
    // 0x8023C5B0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023C5B4: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8023C5B8: add.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x8023C5BC: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x8023C5C0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8023C5C4: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8023C5C8: nop

    // 0x8023C5CC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8023C5D0: nop

    // 0x8023C5D4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C5D8: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8023C5DC: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8023C5E0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8023C5E4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8023C5E8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8023C5EC: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8023C5F0: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x8023C5F4: nop

    // 0x8023C5F8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8023C5FC: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x8023C600: sra         $t7, $v1, 5
    ctx->r15 = S32(SIGNED(ctx->r3) >> 5);
    // 0x8023C604: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8023C608: beq         $a3, $zero, L_8023C614
    if (ctx->r7 == 0) {
        // 0x8023C60C: add.s       $f10, $f8, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
            goto L_8023C614;
    }
    // 0x8023C60C: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8023C610: addiu       $s1, $t7, 0x10
    ctx->r17 = ADD32(ctx->r15, 0X10);
L_8023C614:
    // 0x8023C614: beq         $t4, $zero, L_8023C624
    if (ctx->r12 == 0) {
        // 0x8023C618: trunc.w.s   $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
            goto L_8023C624;
    }
    // 0x8023C618: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8023C61C: lh          $t9, 0x42($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X42);
    // 0x8023C620: addu        $s1, $s1, $t9
    ctx->r17 = ADD32(ctx->r17, ctx->r25);
L_8023C624:
    // 0x8023C624: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8023C628: addu        $t6, $v0, $s7
    ctx->r14 = ADD32(ctx->r2, ctx->r23);
    // 0x8023C62C: sw          $t6, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r14;
    // 0x8023C630: beq         $s3, $zero, L_8023C64C
    if (ctx->r19 == 0) {
        // 0x8023C634: addu        $t3, $t3, $s7
        ctx->r11 = ADD32(ctx->r11, ctx->r23);
            goto L_8023C64C;
    }
    // 0x8023C634: addu        $t3, $t3, $s7
    ctx->r11 = ADD32(ctx->r11, ctx->r23);
    // 0x8023C638: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C63C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023C640: beql        $t7, $at, L_8023C650
    if (ctx->r15 == ctx->r1) {
        // 0x8023C644: lh          $v0, 0xC($s5)
        ctx->r2 = MEM_H(ctx->r21, 0XC);
            goto L_8023C650;
    }
    goto skip_9;
    // 0x8023C644: lh          $v0, 0xC($s5)
    ctx->r2 = MEM_H(ctx->r21, 0XC);
    skip_9:
    // 0x8023C648: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
L_8023C64C:
    // 0x8023C64C: lh          $v0, 0xC($s5)
    ctx->r2 = MEM_H(ctx->r21, 0XC);
L_8023C650:
    // 0x8023C650: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8023C654: beq         $v0, $zero, L_8023C664
    if (ctx->r2 == 0) {
        // 0x8023C658: nop
    
            goto L_8023C664;
    }
    // 0x8023C658: nop

    // 0x8023C65C: b           L_8023C664
    // 0x8023C660: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8023C664;
    // 0x8023C660: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8023C664:
    // 0x8023C664: addu        $t9, $v1, $ra
    ctx->r25 = ADD32(ctx->r3, ctx->r31);
    // 0x8023C668: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023C66C: bne         $at, $zero, L_8023C878
    if (ctx->r1 != 0) {
        // 0x8023C670: nop
    
            goto L_8023C878;
    }
    // 0x8023C670: nop

L_8023C674:
    // 0x8023C674: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x8023C678: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x8023C67C: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8023C680: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8023C684: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C688: addu        $t1, $a2, $s2
    ctx->r9 = ADD32(ctx->r6, ctx->r18);
    // 0x8023C68C: lh          $v0, 0xC($s5)
    ctx->r2 = MEM_H(ctx->r21, 0XC);
    // 0x8023C690: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8023C694: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8023C698: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8023C69C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8023C6A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8023C6A4: addu        $t2, $v0, $ra
    ctx->r10 = ADD32(ctx->r2, ctx->r31);
    // 0x8023C6A8: div.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8023C6AC: add.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x8023C6B0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8023C6B4: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x8023C6B8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8023C6BC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8023C6C0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8023C6C4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8023C6C8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8023C6CC: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x8023C6D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023C6D4: addu        $a0, $a1, $s6
    ctx->r4 = ADD32(ctx->r5, ctx->r22);
    // 0x8023C6D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C6DC: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8023C6E0: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8023C6E4: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8023C6E8: nop

    // 0x8023C6EC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8023C6F0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8023C6F4: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8023C6F8: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8023C6FC: nop

    // 0x8023C700: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8023C704: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x8023C708: sra         $t8, $v1, 5
    ctx->r24 = S32(SIGNED(ctx->r3) >> 5);
    // 0x8023C70C: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x8023C710: beq         $a3, $zero, L_8023C71C
    if (ctx->r7 == 0) {
        // 0x8023C714: add.s       $f6, $f10, $f12
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f12.fl;
            goto L_8023C71C;
    }
    // 0x8023C714: add.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x8023C718: addiu       $t0, $t8, 0x10
    ctx->r8 = ADD32(ctx->r24, 0X10);
L_8023C71C:
    // 0x8023C71C: beq         $t4, $zero, L_8023C72C
    if (ctx->r12 == 0) {
        // 0x8023C720: trunc.w.s   $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
            goto L_8023C72C;
    }
    // 0x8023C720: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8023C724: lh          $t6, 0x40($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X40);
    // 0x8023C728: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
L_8023C72C:
    // 0x8023C72C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8023C730: beq         $v0, $zero, L_8023C780
    if (ctx->r2 == 0) {
        // 0x8023C734: addiu       $t8, $sp, 0x18C
        ctx->r24 = ADD32(ctx->r29, 0X18C);
            goto L_8023C780;
    }
    // 0x8023C734: addiu       $t8, $sp, 0x18C
    ctx->r24 = ADD32(ctx->r29, 0X18C);
    // 0x8023C738: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8023C73C: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x8023C740: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8023C744: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8023C748: nop

    // 0x8023C74C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C750: mul.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8023C754: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8023C758: add.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8023C75C: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8023C760: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8023C764: beq         $s3, $zero, L_8023C780
    if (ctx->r19 == 0) {
        // 0x8023C768: addu        $t3, $t3, $s7
        ctx->r11 = ADD32(ctx->r11, ctx->r23);
            goto L_8023C780;
    }
    // 0x8023C768: addu        $t3, $t3, $s7
    ctx->r11 = ADD32(ctx->r11, ctx->r23);
    // 0x8023C76C: lbu         $t6, 0x30($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C770: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023C774: beq         $t6, $at, L_8023C780
    if (ctx->r14 == ctx->r1) {
        // 0x8023C778: nop
    
            goto L_8023C780;
    }
    // 0x8023C778: nop

    // 0x8023C77C: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
L_8023C780:
    // 0x8023C780: beq         $s3, $zero, L_8023C79C
    if (ctx->r19 == 0) {
        // 0x8023C784: addu        $a3, $a3, $s6
        ctx->r7 = ADD32(ctx->r7, ctx->r22);
            goto L_8023C79C;
    }
    // 0x8023C784: addu        $a3, $a3, $s6
    ctx->r7 = ADD32(ctx->r7, ctx->r22);
    // 0x8023C788: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C78C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023C790: beql        $t7, $at, L_8023C7A0
    if (ctx->r15 == ctx->r1) {
        // 0x8023C794: lw          $t9, 0x8($s5)
        ctx->r25 = MEM_W(ctx->r21, 0X8);
            goto L_8023C7A0;
    }
    goto skip_10;
    // 0x8023C794: lw          $t9, 0x8($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X8);
    skip_10:
    // 0x8023C798: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
L_8023C79C:
    // 0x8023C79C: lw          $t9, 0x8($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X8);
L_8023C7A0:
    // 0x8023C7A0: or          $t2, $s5, $zero
    ctx->r10 = ctx->r21 | 0;
    // 0x8023C7A4: or          $t4, $s1, $zero
    ctx->r12 = ctx->r17 | 0;
    // 0x8023C7A8: beql        $t9, $zero, L_8023C848
    if (ctx->r25 == 0) {
        // 0x8023C7AC: lw          $t6, 0x1A4($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1A4);
            goto L_8023C848;
    }
    goto skip_11;
    // 0x8023C7AC: lw          $t6, 0x1A4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A4);
    skip_11:
    // 0x8023C7B0: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x8023C7B4: sw          $ra, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r31;
    // 0x8023C7B8: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x8023C7BC: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x8023C7C0: lw          $a1, 0x178($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X178);
    // 0x8023C7C4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8023C7C8: sw          $t3, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r11;
    // 0x8023C7CC: sw          $s0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r16;
    // 0x8023C7D0: sw          $s1, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r17;
    // 0x8023C7D4: sw          $s2, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r18;
    // 0x8023C7D8: sw          $s5, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r21;
    // 0x8023C7DC: sw          $s6, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r22;
    // 0x8023C7E0: sw          $s7, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r23;
    // 0x8023C7E4: swc1        $f14, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f14.u32l;
    // 0x8023C7E8: swc1        $f16, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f16.u32l;
    // 0x8023C7EC: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x8023C7F0: jal         0x8023A7B4
    // 0x8023C7F4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    static_3_8023A7B4(rdram, ctx);
        goto after_0;
    // 0x8023C7F4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_0:
    // 0x8023C7F8: lw          $s0, 0x1A8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1A8);
    // 0x8023C7FC: lw          $s5, 0x190($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X190);
    // 0x8023C800: lw          $s2, 0x1A0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1A0);
    // 0x8023C804: lh          $t7, 0x28($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X28);
    // 0x8023C808: lhu         $s4, 0x14($s0)
    ctx->r20 = MEM_HU(ctx->r16, 0X14);
    // 0x8023C80C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023C810: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    // 0x8023C814: lh          $t9, 0x0($s5)
    ctx->r25 = MEM_H(ctx->r21, 0X0);
    // 0x8023C818: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8023C81C: lw          $t3, 0x170($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X170);
    // 0x8023C820: lw          $ra, 0x19C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X19C);
    // 0x8023C824: lw          $s1, 0x158($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X158);
    // 0x8023C828: lw          $s6, 0x154($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X154);
    // 0x8023C82C: lw          $s7, 0x150($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X150);
    // 0x8023C830: lwc1        $f14, 0x194($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8023C834: lwc1        $f16, 0x198($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X198);
    // 0x8023C838: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8023C83C: andi        $s3, $s4, 0x20
    ctx->r19 = ctx->r20 & 0X20;
    // 0x8023C840: addu        $t1, $t9, $s2
    ctx->r9 = ADD32(ctx->r25, ctx->r18);
    // 0x8023C844: lw          $t6, 0x1A4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A4);
L_8023C848:
    // 0x8023C848: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8023C84C: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x8023C850: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8023C854: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023C858: sw          $t7, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r15;
    // 0x8023C85C: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x8023C860: or          $s2, $t1, $zero
    ctx->r18 = ctx->r9 | 0;
    // 0x8023C864: beq         $at, $zero, L_8023C878
    if (ctx->r1 == 0) {
        // 0x8023C868: addu        $s6, $s6, $t8
        ctx->r22 = ADD32(ctx->r22, ctx->r24);
            goto L_8023C878;
    }
    // 0x8023C868: addu        $s6, $s6, $t8
    ctx->r22 = ADD32(ctx->r22, ctx->r24);
    // 0x8023C86C: lh          $a2, 0x0($s5)
    ctx->r6 = MEM_H(ctx->r21, 0X0);
    // 0x8023C870: bgtzl       $a2, L_8023C56C
    if (SIGNED(ctx->r6) > 0) {
        // 0x8023C874: lh          $t8, 0x4($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X4);
            goto L_8023C56C;
    }
    goto skip_12;
    // 0x8023C874: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
    skip_12:
L_8023C878:
    // 0x8023C878: beq         $s3, $zero, L_8023C898
    if (ctx->r19 == 0) {
        // 0x8023C87C: lw          $t8, 0x18C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18C);
            goto L_8023C898;
    }
    // 0x8023C87C: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C880: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023C884: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023C888: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023C88C: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x8023C890: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023C894: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
L_8023C898:
    // 0x8023C898: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C89C: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C8A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8023C8A4: bne         $a0, $at, L_8023CB28
    if (ctx->r4 != ctx->r1) {
        // 0x8023C8A8: addiu       $t8, $t9, 0x8
        ctx->r24 = ADD32(ctx->r25, 0X8);
            goto L_8023CB28;
    }
    // 0x8023C8A8: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8023C8AC: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023C8B0: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8023C8B4: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x8023C8B8: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8023C8BC: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8023C8C0: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C8C4: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023C8C8: ori         $t8, $t8, 0xC02
    ctx->r24 = ctx->r24 | 0XC02;
    // 0x8023C8CC: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8023C8D0: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C8D4: addiu       $t6, $zero, 0x2000
    ctx->r14 = ADD32(0, 0X2000);
    // 0x8023C8D8: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8023C8DC: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8023C8E0: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023C8E4: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8023C8E8: ori         $t8, $t8, 0x903
    ctx->r24 = ctx->r24 | 0X903;
    // 0x8023C8EC: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8023C8F0: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023C8F4: addiu       $t6, $zero, 0xC00
    ctx->r14 = ADD32(0, 0XC00);
    // 0x8023C8F8: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8023C8FC: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8023C900: b           L_8023CB28
    // 0x8023C904: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
        goto L_8023CB28;
    // 0x8023C904: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C908: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
L_8023C90C:
    // 0x8023C90C: lh          $s2, 0x0($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X0);
    // 0x8023C910: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8023C914: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8023C918: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x8023C91C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8023C920: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8023C924: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x8023C928: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    // 0x8023C92C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023C930: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8023C934: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C938: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8023C93C: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8023C940: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023C944: or          $ra, $a0, $zero
    ctx->r31 = ctx->r4 | 0;
    // 0x8023C948: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8023C94C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x8023C950: sub.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8023C954: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8023C958: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8023C95C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8023C960: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x8023C964: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8023C968: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8023C96C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8023C970: sub.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8023C974: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8023C978: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x8023C97C: beq         $at, $zero, L_8023C998
    if (ctx->r1 == 0) {
        // 0x8023C980: nop
    
            goto L_8023C998;
    }
    // 0x8023C980: nop

    // 0x8023C984: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8023C988: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8023C98C: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8023C990: bne         $at, $zero, L_8023C9A0
    if (ctx->r1 != 0) {
        // 0x8023C994: nop
    
            goto L_8023C9A0;
    }
    // 0x8023C994: nop

L_8023C998:
    // 0x8023C998: b           L_8023CB28
    // 0x8023C99C: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
        goto L_8023CB28;
    // 0x8023C99C: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
L_8023C9A0:
    // 0x8023C9A0: lw          $v0, 0x39E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X39E8);
    // 0x8023C9A4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023C9A8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023C9AC: bne         $at, $zero, L_8023C9C4
    if (ctx->r1 != 0) {
        // 0x8023C9B0: nop
    
            goto L_8023C9C4;
    }
    // 0x8023C9B0: nop

    // 0x8023C9B4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8023C9B8: slt         $at, $t2, $a0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8023C9BC: beql        $at, $zero, L_8023C9D0
    if (ctx->r1 == 0) {
        // 0x8023C9C0: slt         $at, $s2, $v0
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8023C9D0;
    }
    goto skip_13;
    // 0x8023C9C0: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    skip_13:
L_8023C9C4:
    // 0x8023C9C4: b           L_8023CB28
    // 0x8023C9C8: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
        goto L_8023CB28;
    // 0x8023C9C8: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
    // 0x8023C9CC: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
L_8023C9D0:
    // 0x8023C9D0: beql        $at, $zero, L_8023C9E0
    if (ctx->r1 == 0) {
        // 0x8023C9D4: slt         $at, $v1, $a1
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_8023C9E0;
    }
    goto skip_14;
    // 0x8023C9D4: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    skip_14:
    // 0x8023C9D8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8023C9DC: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
L_8023C9E0:
    // 0x8023C9E0: bnel        $at, $zero, L_8023C9F0
    if (ctx->r1 != 0) {
        // 0x8023C9E4: slt         $at, $ra, $a0
        ctx->r1 = SIGNED(ctx->r31) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8023C9F0;
    }
    goto skip_15;
    // 0x8023C9E4: slt         $at, $ra, $a0
    ctx->r1 = SIGNED(ctx->r31) < SIGNED(ctx->r4) ? 1 : 0;
    skip_15:
    // 0x8023C9E8: addiu       $v1, $a1, -0x1
    ctx->r3 = ADD32(ctx->r5, -0X1);
    // 0x8023C9EC: slt         $at, $ra, $a0
    ctx->r1 = SIGNED(ctx->r31) < SIGNED(ctx->r4) ? 1 : 0;
L_8023C9F0:
    // 0x8023C9F0: beql        $at, $zero, L_8023CA00
    if (ctx->r1 == 0) {
        // 0x8023C9F4: slt         $at, $t2, $a2
        ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_8023CA00;
    }
    goto skip_16;
    // 0x8023C9F4: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    skip_16:
    // 0x8023C9F8: or          $ra, $a0, $zero
    ctx->r31 = ctx->r4 | 0;
    // 0x8023C9FC: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
L_8023CA00:
    // 0x8023CA00: bnel        $at, $zero, L_8023CA10
    if (ctx->r1 != 0) {
        // 0x8023CA04: lbu         $t7, 0x18($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X18);
            goto L_8023CA10;
    }
    goto skip_17;
    // 0x8023CA04: lbu         $t7, 0x18($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X18);
    skip_17:
    // 0x8023CA08: addiu       $t2, $a2, -0x1
    ctx->r10 = ADD32(ctx->r6, -0X1);
    // 0x8023CA0C: lbu         $t7, 0x18($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X18);
L_8023CA10:
    // 0x8023CA10: lbu         $t6, 0x19($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X19);
    // 0x8023CA14: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8023CA18: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x8023CA1C: andi        $t8, $t9, 0xF800
    ctx->r24 = ctx->r25 & 0XF800;
    // 0x8023CA20: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8023CA24: andi        $t9, $t7, 0x7C0
    ctx->r25 = ctx->r15 & 0X7C0;
    // 0x8023CA28: lbu         $t7, 0x1A($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1A);
    // 0x8023CA2C: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8023CA30: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x8023CA34: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x8023CA38: andi        $t9, $t8, 0x3E
    ctx->r25 = ctx->r24 & 0X3E;
    // 0x8023CA3C: lbu         $t8, 0x1B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1B);
    // 0x8023CA40: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8023CA44: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8023CA48: sra         $t6, $t8, 7
    ctx->r14 = S32(SIGNED(ctx->r24) >> 7);
    // 0x8023CA4C: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CA50: andi        $t9, $t6, 0x1
    ctx->r25 = ctx->r14 & 0X1;
    // 0x8023CA54: or          $v0, $t7, $t9
    ctx->r2 = ctx->r15 | ctx->r25;
    // 0x8023CA58: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x8023CA5C: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023CA60: lui         $t7, 0xBB00
    ctx->r15 = S32(0XBB00 << 16);
    // 0x8023CA64: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8023CA68: sw          $t0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r8;
    // 0x8023CA6C: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CA70: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x8023CA74: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x8023CA78: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x8023CA7C: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023CA80: lui         $t7, 0x30
    ctx->r15 = S32(0X30 << 16);
    // 0x8023CA84: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8023CA88: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8023CA8C: lw          $a2, 0x18C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CA90: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8023CA94: or          $t9, $t7, $v0
    ctx->r25 = ctx->r15 | ctx->r2;
    // 0x8023CA98: addiu       $t8, $a2, 0x8
    ctx->r24 = ADD32(ctx->r6, 0X8);
    // 0x8023CA9C: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023CAA0: lui         $t6, 0xF700
    ctx->r14 = S32(0XF700 << 16);
    // 0x8023CAA4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8023CAA8: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8023CAAC: lw          $a3, 0x18C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CAB0: andi        $t7, $v1, 0x3FF
    ctx->r15 = ctx->r3 & 0X3FF;
    // 0x8023CAB4: sll         $t9, $t7, 14
    ctx->r25 = S32(ctx->r15 << 14);
    // 0x8023CAB8: addiu       $t6, $a3, 0x8
    ctx->r14 = ADD32(ctx->r7, 0X8);
    // 0x8023CABC: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023CAC0: andi        $t6, $t2, 0x3FF
    ctx->r14 = ctx->r10 & 0X3FF;
    // 0x8023CAC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8023CAC8: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x8023CACC: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8023CAD0: andi        $t7, $ra, 0x3FF
    ctx->r15 = ctx->r31 & 0X3FF;
    // 0x8023CAD4: andi        $t6, $s2, 0x3FF
    ctx->r14 = ctx->r18 & 0X3FF;
    // 0x8023CAD8: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8023CADC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8023CAE0: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x8023CAE4: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8023CAE8: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x8023CAEC: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CAF0: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8023CAF4: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8023CAF8: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8023CAFC: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x8023CB00: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8023CB04: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8023CB08: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CB0C: lui         $t8, 0xBB00
    ctx->r24 = S32(0XBB00 << 16);
    // 0x8023CB10: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x8023CB14: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8023CB18: sw          $t7, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r15;
    // 0x8023CB1C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x8023CB20: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x8023CB24: lbu         $a0, 0x30($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X30);
L_8023CB28:
    // 0x8023CB28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8023CB2C: bne         $a0, $at, L_8023CB4C
    if (ctx->r4 != ctx->r1) {
        // 0x8023CB30: lw          $t9, 0x18C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18C);
            goto L_8023CB4C;
    }
    // 0x8023CB30: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CB34: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8023CB38: sw          $t6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r14;
    // 0x8023CB3C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8023CB40: ori         $t7, $t7, 0xE02
    ctx->r15 = ctx->r15 | 0XE02;
    // 0x8023CB44: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8023CB48: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
L_8023CB4C:
    // 0x8023CB4C: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CB50: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x8023CB54: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8023CB58: sw          $t9, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r25;
    // 0x8023CB5C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8023CB60: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x8023CB64: lw          $t7, 0x18C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18C);
    // 0x8023CB68: sw          $t7, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r15;
    // 0x8023CB6C: lw          $v0, 0x188($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X188);
L_8023CB70:
    // 0x8023CB70: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8023CB74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8023CB78: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023CB7C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8023CB80: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8023CB84: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8023CB88: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8023CB8C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8023CB90: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8023CB94: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8023CB98: jr          $ra
    // 0x8023CB9C: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
    return;
    // 0x8023CB9C: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
;}
RECOMP_FUNC void D_8023E350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E350: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023E354: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023E358: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8023E35C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023E360: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023E364: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8023E368: jal         0x80248020
    // 0x8023E36C: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    static_3_80248020(rdram, ctx);
        goto after_0;
    // 0x8023E36C: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    after_0:
    // 0x8023E370: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023E374: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8023E378: jal         0x80248010
    // 0x8023E37C: or          $a0, $s0, $at
    ctx->r4 = ctx->r16 | ctx->r1;
    static_3_80248010(rdram, ctx);
        goto after_1;
    // 0x8023E37C: or          $a0, $s0, $at
    ctx->r4 = ctx->r16 | ctx->r1;
    after_1:
    // 0x8023E380: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8023E384: jal         0x80248030
    // 0x8023E388: ori         $a0, $a0, 0x800
    ctx->r4 = ctx->r4 | 0X800;
    static_3_80248030(rdram, ctx);
        goto after_2;
    // 0x8023E388: ori         $a0, $a0, 0x800
    ctx->r4 = ctx->r4 | 0X800;
    after_2:
    // 0x8023E38C: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x8023E390: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x8023E394: jal         0x80248040
    // 0x8023E398: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80248040(rdram, ctx);
        goto after_3;
    // 0x8023E398: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x8023E39C: beq         $v0, $zero, L_8023E3BC
    if (ctx->r2 == 0) {
        // 0x8023E3A0: nop
    
            goto L_8023E3BC;
    }
    // 0x8023E3A0: nop

L_8023E3A4:
    // 0x8023E3A4: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x8023E3A8: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x8023E3AC: jal         0x80248040
    // 0x8023E3B0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80248040(rdram, ctx);
        goto after_4;
    // 0x8023E3B0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x8023E3B4: bne         $v0, $zero, L_8023E3A4
    if (ctx->r2 != 0) {
        // 0x8023E3B8: nop
    
            goto L_8023E3A4;
    }
    // 0x8023E3B8: nop

L_8023E3BC:
    // 0x8023E3BC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8023E3C0: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x8023E3C4: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x8023E3C8: ori         $t7, $a1, 0x8
    ctx->r15 = ctx->r5 | 0X8;
    // 0x8023E3CC: jal         0x80248090
    // 0x8023E3D0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80248090(rdram, ctx);
        goto after_5;
    // 0x8023E3D0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_5:
    // 0x8023E3D4: beq         $v0, $zero, L_8023E3FC
    if (ctx->r2 == 0) {
        // 0x8023E3D8: nop
    
            goto L_8023E3FC;
    }
    // 0x8023E3D8: nop

L_8023E3DC:
    // 0x8023E3DC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8023E3E0: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x8023E3E4: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x8023E3E8: ori         $t8, $a1, 0x8
    ctx->r24 = ctx->r5 | 0X8;
    // 0x8023E3EC: jal         0x80248090
    // 0x8023E3F0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80248090(rdram, ctx);
        goto after_6;
    // 0x8023E3F0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_6:
    // 0x8023E3F4: bne         $v0, $zero, L_8023E3DC
    if (ctx->r2 != 0) {
        // 0x8023E3F8: nop
    
            goto L_8023E3DC;
    }
    // 0x8023E3F8: nop

L_8023E3FC:
    // 0x8023E3FC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8023E400: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8023E404: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8023E408: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8023E40C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8023E410: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x8023E414: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8023E418: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x8023E41C: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x8023E420: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x8023E424: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x8023E428: ori         $t4, $t4, 0x80
    ctx->r12 = ctx->r12 | 0X80;
    // 0x8023E42C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8023E430: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x8023E434: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x8023E438: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8023E43C: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x8023E440: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
    // 0x8023E444: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8023E448: ori         $t2, $t2, 0x100
    ctx->r10 = ctx->r10 | 0X100;
    // 0x8023E44C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023E450: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x8023E454: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x8023E458: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8023E45C: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x8023E460: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x8023E464: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x8023E468: ori         $t7, $t7, 0x180
    ctx->r15 = ctx->r15 | 0X180;
    // 0x8023E46C: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x8023E470: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x8023E474: lw          $t8, 0xC($t5)
    ctx->r24 = MEM_W(ctx->r13, 0XC);
    // 0x8023E478: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x8023E47C: sw          $t8, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r24;
    // 0x8023E480: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8023E484: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x8023E488: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8023E48C: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    // 0x8023E490: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x8023E494: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x8023E498: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x8023E49C: sw          $t3, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r11;
    // 0x8023E4A0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8023E4A4: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x8023E4A8: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x8023E4AC: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x8023E4B0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8023E4B4: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x8023E4B8: lw          $t8, 0xC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC);
    // 0x8023E4BC: jal         0x8023CE80
    // 0x8023E4C0: sw          $t8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r24;
    func_8023CE80(rdram, ctx);
        goto after_7;
    // 0x8023E4C0: sw          $t8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r24;
    after_7:
    // 0x8023E4C4: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x8023E4C8: jal         0x802480E0
    // 0x8023E4CC: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    static_3_802480E0(rdram, ctx);
        goto after_8;
    // 0x8023E4CC: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    after_8:
    // 0x8023E4D0: jal         0x80248160
    // 0x8023E4D4: nop

    static_3_80248160(rdram, ctx);
        goto after_9;
    // 0x8023E4D4: nop

    after_9:
    // 0x8023E4D8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8023E4DC: jal         0x8023E640
    // 0x8023E4E0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    static_3_8023E640(rdram, ctx);
        goto after_10;
    // 0x8023E4E0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_10:
    // 0x8023E4E4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8023E4E8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8023E4EC: and         $t9, $t0, $at
    ctx->r25 = ctx->r8 & ctx->r1;
    // 0x8023E4F0: beq         $t9, $zero, L_8023E50C
    if (ctx->r25 == 0) {
        // 0x8023E4F4: sw          $t9, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r25;
            goto L_8023E50C;
    }
    // 0x8023E4F4: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x8023E4F8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023E4FC: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x8023E500: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x8023E504: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x8023E508: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
L_8023E50C:
    // 0x8023E50C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023E510: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023E514: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8023E518: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8023E51C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8023E520: jal         0x8023D228
    // 0x8023E524: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    static_3_8023D228(rdram, ctx);
        goto after_11;
    // 0x8023E524: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_11:
    // 0x8023E528: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023E52C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8023E530: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8023E534: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023E538: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8023E53C: jal         0x8023D128
    // 0x8023E540: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    static_3_8023D128(rdram, ctx);
        goto after_12;
    // 0x8023E540: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_12:
    // 0x8023E544: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8023E548: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x8023E54C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023E550: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8023E554: bne         $t1, $zero, L_8023E56C
    if (ctx->r9 != 0) {
        // 0x8023E558: sw          $v1, 0x0($at)
        MEM_W(0X0, ctx->r1) = ctx->r3;
            goto L_8023E56C;
    }
    // 0x8023E558: sw          $v1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r3;
    // 0x8023E55C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023E560: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8023E564: jal         0x802481C0
    // 0x8023E568: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    static_3_802481C0(rdram, ctx);
        goto after_13;
    // 0x8023E568: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_13:
L_8023E56C:
    // 0x8023E56C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8023E570: lw          $t4, 0x0($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X0);
    // 0x8023E574: andi        $t7, $t4, 0x3
    ctx->r15 = ctx->r12 & 0X3;
    // 0x8023E578: beq         $t7, $zero, L_8023E59C
    if (ctx->r15 == 0) {
        // 0x8023E57C: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_8023E59C;
    }
    // 0x8023E57C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
L_8023E580:
    // 0x8023E580: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023E584: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x8023E588: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8023E58C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023E590: andi        $t9, $t0, 0x3
    ctx->r25 = ctx->r8 & 0X3;
    // 0x8023E594: bne         $t9, $zero, L_8023E580
    if (ctx->r25 != 0) {
        // 0x8023E598: nop
    
            goto L_8023E580;
    }
    // 0x8023E598: nop

L_8023E59C:
    // 0x8023E59C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8023E5A0: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8023E5A4: andi        $t1, $t3, 0xFFFF
    ctx->r9 = ctx->r11 & 0XFFFF;
    // 0x8023E5A8: bne         $t1, $zero, L_8023E5D4
    if (ctx->r9 != 0) {
        // 0x8023E5AC: sw          $t3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r11;
            goto L_8023E5D4;
    }
    // 0x8023E5AC: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8023E5B0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8023E5B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023E5B8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023E5BC: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x8023E5C0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8023E5C4: jal         0x80248260
    // 0x8023E5C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80248260(rdram, ctx);
        goto after_14;
    // 0x8023E5C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x8023E5CC: b           L_8023E5DC
    // 0x8023E5D0: nop

        goto L_8023E5DC;
    // 0x8023E5D0: nop

L_8023E5D4:
    // 0x8023E5D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023E5D8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_8023E5DC:
    // 0x8023E5DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023E5E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023E5E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8023E5E8: jr          $ra
    // 0x8023E5EC: nop

    return;
    // 0x8023E5EC: nop

;}
RECOMP_FUNC void D_802CEF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CEFD0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802CEFD4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802CEFD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802CEFDC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802CEFE0: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x802CEFE4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802CEFE8: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802CEFEC: jal         0x80224CA8
    // 0x802CEFF0: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802CEFF0: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    after_0:
    // 0x802CEFF4: jal         0x80224CA8
    // 0x802CEFF8: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802CEFF8: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x802CEFFC: jal         0x80224CA8
    // 0x802CF000: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802CF000: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_2:
    // 0x802CF004: jal         0x80224CA8
    // 0x802CF008: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802CF008: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_3:
    // 0x802CF00C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CF010: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802CF014: addiu       $s0, $s1, 0x70
    ctx->r16 = ADD32(ctx->r17, 0X70);
    // 0x802CF018: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802CF01C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802CF020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CF024: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802CF028: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802CF02C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802CF030: jal         0x8028D2E8
    // 0x802CF034: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_8028D2E8(rdram, ctx);
        goto after_4;
    // 0x802CF034: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_4:
    // 0x802CF038: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802CF03C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802CF040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CF044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CF048: jal         0x8028DDD8
    // 0x802CF04C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_8028DDD8(rdram, ctx);
        goto after_5;
    // 0x802CF04C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_5:
    // 0x802CF050: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802CF054: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802CF058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CF05C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CF060: jal         0x8028DDD8
    // 0x802CF064: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_8028DDD8(rdram, ctx);
        goto after_6;
    // 0x802CF064: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x802CF068: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802CF06C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802CF070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CF074: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CF078: jal         0x8028DDD8
    // 0x802CF07C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_8028DDD8(rdram, ctx);
        goto after_7;
    // 0x802CF07C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_7:
    // 0x802CF080: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802CF084: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802CF088: jal         0x8028DB8C
    // 0x802CF08C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8028DB8C(rdram, ctx);
        goto after_8;
    // 0x802CF08C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802CF090: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802CF094: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802CF098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CF09C: jal         0x8028DED0
    // 0x802CF0A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8028DED0(rdram, ctx);
        goto after_9;
    // 0x802CF0A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x802CF0A4: jal         0x8021BA90
    // 0x802CF0A8: nop

    func_8021BA90(rdram, ctx);
        goto after_10;
    // 0x802CF0A8: nop

    after_10:
    // 0x802CF0AC: sw          $v0, 0x2A8($s1)
    MEM_W(0X2A8, ctx->r17) = ctx->r2;
    // 0x802CF0B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CF0B4: jal         0x8021ACB0
    // 0x802CF0B8: addiu       $a1, $zero, 0xD9
    ctx->r5 = ADD32(0, 0XD9);
    static_3_8021ACB0(rdram, ctx);
        goto after_11;
    // 0x802CF0B8: addiu       $a1, $zero, 0xD9
    ctx->r5 = ADD32(0, 0XD9);
    after_11:
    // 0x802CF0BC: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x802CF0C0: jal         0x8022970C
    // 0x802CF0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_12;
    // 0x802CF0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x802CF0C8: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x802CF0CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CF0D0: lui         $at, 0xC387
    ctx->r1 = S32(0XC387 << 16);
    // 0x802CF0D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802CF0D8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802CF0DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CF0E0: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x802CF0E4: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x802CF0E8: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x802CF0EC: lw          $a0, 0x2A8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2A8);
    // 0x802CF0F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CF0F4: jal         0x8021B4B0
    // 0x802CF0F8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_13;
    // 0x802CF0F8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_13:
    // 0x802CF0FC: lw          $a0, 0x2A8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2A8);
    // 0x802CF100: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CF104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CF108: jal         0x8021B240
    // 0x802CF10C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_14;
    // 0x802CF10C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x802CF110: lw          $t8, 0x2A8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X2A8);
    // 0x802CF114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802CF118: sw          $t8, 0x29C($s1)
    MEM_W(0X29C, ctx->r17) = ctx->r24;
    // 0x802CF11C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802CF120: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802CF124: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802CF128: jr          $ra
    // 0x802CF12C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x802CF12C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_802EBFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC04C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC054: beq         $a0, $zero, L_802EC084
    if (ctx->r4 == 0) {
        // 0x802EC058: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EC084;
    }
    // 0x802EC058: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EC05C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EC060: jal         0x8031C514
    // 0x802EC064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EC064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EC068: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EC06C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC070: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EC074: beql        $t7, $zero, L_802EC088
    if (ctx->r15 == 0) {
        // 0x802EC078: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EC088;
    }
    goto skip_0;
    // 0x802EC078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EC07C: jal         0x802C681C
    // 0x802EC080: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EC080: nop

    after_1:
L_802EC084:
    // 0x802EC084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EC088:
    // 0x802EC088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC08C: jr          $ra
    // 0x802EC090: nop

    return;
    // 0x802EC090: nop

;}
RECOMP_FUNC void D_802B7698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7718: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802B771C: jr          $ra
    // 0x802B7720: swc1        $f12, 0x7C8($a0)
    MEM_W(0X7C8, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802B7720: swc1        $f12, 0x7C8($a0)
    MEM_W(0X7C8, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_80282994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282A14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282A1C: jal         0x8028D9B4
    // 0x80282A20: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D9B4(rdram, ctx);
        goto after_0;
    // 0x80282A20: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x80282A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282A28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282A2C: jr          $ra
    // 0x80282A30: nop

    return;
    // 0x80282A30: nop

;}
RECOMP_FUNC void D_802A1EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F48: jr          $ra
    // 0x802A1F4C: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
    return;
    // 0x802A1F4C: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
;}
RECOMP_FUNC void D_802EF9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFA40: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802EFA44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EFA48: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802EFA4C: nop

    // 0x802EFA50: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802EFA54: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802EFA58: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x802EFA5C: jr          $ra
    // 0x802EFA60: sh          $t7, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r15;
    return;
    // 0x802EFA60: sh          $t7, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void D_802A34D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A3558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A355C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x802A3560: bne         $a1, $at, L_802A35C4
    if (ctx->r5 != ctx->r1) {
        // 0x802A3564: sw          $a1, 0xDC($a0)
        MEM_W(0XDC, ctx->r4) = ctx->r5;
            goto L_802A35C4;
    }
    // 0x802A3564: sw          $a1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r5;
    // 0x802A3568: jal         0x8023499C
    // 0x802A356C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8023499C(rdram, ctx);
        goto after_0;
    // 0x802A356C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A3570: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A3574: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A3578: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A357C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A3580: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802A3584: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A3588: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A358C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802A3590: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802A3594: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A3598: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802A359C: swc1        $f2, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f2.u32l;
    // 0x802A35A0: bc1fl       L_802A35B4
    if (!c1cs) {
        // 0x802A35A4: lwc1        $f0, 0xB4($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0XB4);
            goto L_802A35B4;
    }
    goto skip_0;
    // 0x802A35A4: lwc1        $f0, 0xB4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XB4);
    skip_0:
    // 0x802A35A8: b           L_802A35B8
    // 0x802A35AC: lwc1        $f0, 0xB4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XB4);
        goto L_802A35B8;
    // 0x802A35AC: lwc1        $f0, 0xB4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x802A35B0: lwc1        $f0, 0xB4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XB4);
L_802A35B4:
    // 0x802A35B4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802A35B8:
    // 0x802A35B8: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x802A35BC: b           L_802A3604
    // 0x802A35C0: swc1        $f18, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f18.u32l;
        goto L_802A3604;
    // 0x802A35C0: swc1        $f18, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f18.u32l;
L_802A35C4:
    // 0x802A35C4: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x802A35C8: bnel        $a1, $at, L_802A3608
    if (ctx->r5 != ctx->r1) {
        // 0x802A35CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A3608;
    }
    goto skip_1;
    // 0x802A35CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802A35D0: jal         0x8023499C
    // 0x802A35D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8023499C(rdram, ctx);
        goto after_1;
    // 0x802A35D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802A35D8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A35DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A35E0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A35E4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A35E8: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802A35EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A35F0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802A35F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A35F8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802A35FC: swc1        $f16, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f16.u32l;
    // 0x802A3600: swc1        $f10, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f10.u32l;
L_802A3604:
    // 0x802A3604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A3608:
    // 0x802A3608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A360C: jr          $ra
    // 0x802A3610: nop

    return;
    // 0x802A3610: nop

;}
RECOMP_FUNC void D_802A4A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4ACC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A4AD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A4AD4: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x802A4AD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4ADC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802A4AE0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A4AE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A4AE8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802A4AEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A4AF0: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x802A4AF4: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x802A4AF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A4AFC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802A4B00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A4B04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A4B08: swc1        $f18, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f18.u32l;
    // 0x802A4B0C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802A4B10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4B14: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802A4B18: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802A4B1C: mul.s       $f8, $f12, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802A4B20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A4B24: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x802A4B28: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A4B2C: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x802A4B30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A4B34: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A4B38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4B3C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802A4B40: mul.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x802A4B44: swc1        $f10, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f10.u32l;
    // 0x802A4B48: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A4B4C: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x802A4B50: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802A4B54: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x802A4B58: nop

    // 0x802A4B5C: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802A4B60: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x802A4B64: nop

    // 0x802A4B68: bc1fl       L_802A4B78
    if (!c1cs) {
        // 0x802A4B6C: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_802A4B78;
    }
    goto skip_0;
    // 0x802A4B6C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    skip_0:
    // 0x802A4B70: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A4B74: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
L_802A4B78:
    // 0x802A4B78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A4B7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4B80: c.eq.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
    // 0x802A4B84: nop

    // 0x802A4B88: bc1fl       L_802A4B98
    if (!c1cs) {
        // 0x802A4B8C: lwc1        $f4, 0xC($a0)
        ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
            goto L_802A4B98;
    }
    goto skip_1;
    // 0x802A4B8C: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    skip_1:
    // 0x802A4B90: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A4B94: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
L_802A4B98:
    // 0x802A4B98: lwc1        $f8, 0x9C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x802A4B9C: lwc1        $f18, 0x98($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X98);
    // 0x802A4BA0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802A4BA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4BA8: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A4BAC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802A4BB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4BB4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802A4BB8: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x802A4BBC: lwc1        $f6, 0xA0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x802A4BC0: swc1        $f10, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f10.u32l;
    // 0x802A4BC4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A4BC8: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x802A4BCC: swc1        $f4, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f4.u32l;
    // 0x802A4BD0: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x802A4BD4: ldc1        $f18, 0x0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X0);
    // 0x802A4BD8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802A4BDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A4BE0: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x802A4BE4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A4BE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A4BEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4BF0: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x802A4BF4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802A4BF8: mul.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x802A4BFC: swc1        $f10, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f10.u32l;
    // 0x802A4C00: lwc1        $f10, 0x9C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x802A4C04: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x802A4C08: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x802A4C0C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802A4C10: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
    // 0x802A4C14: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x802A4C18: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802A4C1C: nop

    // 0x802A4C20: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802A4C24: swc1        $f8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f8.u32l;
    // 0x802A4C28: lwc1        $f8, 0xA0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x802A4C2C: lwc1        $f4, 0xE0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x802A4C30: swc1        $f18, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f18.u32l;
    // 0x802A4C34: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802A4C38: swc1        $f6, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f6.u32l;
    // 0x802A4C3C: swc1        $f10, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f10.u32l;
    // 0x802A4C40: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A4C44: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4C48: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802A4C4C: swc1        $f6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
    // 0x802A4C50: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A4C54: jal         0x802D537C
    // 0x802A4C58: swc1        $f8, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f8.u32l;
    static_3_802D537C(rdram, ctx);
        goto after_0;
    // 0x802A4C58: swc1        $f8, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f8.u32l;
    after_0:
    // 0x802A4C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A4C60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A4C64: jr          $ra
    // 0x802A4C68: nop

    return;
    // 0x802A4C68: nop

;}
RECOMP_FUNC void D_802C9EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9F60: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x802C9F64: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x802C9F68: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x802C9F6C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802C9F70: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x802C9F74: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x802C9F78: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x802C9F7C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x802C9F80: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802C9F84: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802C9F88: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802C9F8C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802C9F90: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802C9F94: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x802C9F98: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x802C9F9C: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x802C9FA0: swc1        $f22, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f22.u32l;
    // 0x802C9FA4: jal         0x80224CA8
    // 0x802C9FA8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802C9FA8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x802C9FAC: jal         0x80224CA8
    // 0x802C9FB0: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802C9FB0: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_1:
    // 0x802C9FB4: jal         0x80224CA8
    // 0x802C9FB8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802C9FB8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_2:
    // 0x802C9FBC: jal         0x8021BA90
    // 0x802C9FC0: nop

    func_8021BA90(rdram, ctx);
        goto after_3;
    // 0x802C9FC0: nop

    after_3:
    // 0x802C9FC4: sw          $v0, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r2;
    // 0x802C9FC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802C9FCC: jal         0x8021ACB0
    // 0x802C9FD0: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    static_3_8021ACB0(rdram, ctx);
        goto after_4;
    // 0x802C9FD0: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    after_4:
    // 0x802C9FD4: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x802C9FD8: jal         0x8021B838
    // 0x802C9FDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B838(rdram, ctx);
        goto after_5;
    // 0x802C9FDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x802C9FE0: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
    // 0x802C9FE4: jal         0x8022970C
    // 0x802C9FE8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8022970C(rdram, ctx);
        goto after_6;
    // 0x802C9FE8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x802C9FEC: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x802C9FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802C9FF4: jal         0x8021B4B0
    // 0x802C9FF8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_7;
    // 0x802C9FF8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_7:
    // 0x802C9FFC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802CA000: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CA004: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802CA008: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802CA00C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802CA010: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802CA014: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x802CA018: sb          $zero, 0x70($s3)
    MEM_B(0X70, ctx->r19) = 0;
    // 0x802CA01C: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802CA020: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x802CA024: swc1        $f4, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = ctx->f4.u32l;
L_802CA028:
    // 0x802CA028: jal         0x8021BA90
    // 0x802CA02C: nop

    func_8021BA90(rdram, ctx);
        goto after_8;
    // 0x802CA02C: nop

    after_8:
    // 0x802CA030: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x802CA034: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x802CA038: jal         0x8021ACB0
    // 0x802CA03C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_8021ACB0(rdram, ctx);
        goto after_9;
    // 0x802CA03C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x802CA040: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CA044: jal         0x8021B9AC
    // 0x802CA048: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B9AC(rdram, ctx);
        goto after_10;
    // 0x802CA048: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x802CA04C: jal         0x8022970C
    // 0x802CA050: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8022970C(rdram, ctx);
        goto after_11;
    // 0x802CA050: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_11:
    // 0x802CA054: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802CA058: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802CA05C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CA060: jal         0x8022A0D0
    // 0x802CA064: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_12;
    // 0x802CA064: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    after_12:
    // 0x802CA068: lui         $a1, 0x407B
    ctx->r5 = S32(0X407B << 16);
    // 0x802CA06C: ori         $a1, $a1, 0x53D8
    ctx->r5 = ctx->r5 | 0X53D8;
    // 0x802CA070: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802CA074: jal         0x802D01D4
    // 0x802CA078: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_13;
    // 0x802CA078: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_13:
    // 0x802CA07C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CA080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CA084: jal         0x8021B4B0
    // 0x802CA088: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_14;
    // 0x802CA088: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_14:
    // 0x802CA08C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802CA090: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802CA094: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802CA098: sub.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f24.fl;
    // 0x802CA09C: bne         $s1, $t7, L_802CA028
    if (ctx->r17 != ctx->r15) {
        // 0x802CA0A0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802CA028;
    }
    // 0x802CA0A0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802CA0A4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802CA0A8: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802CA0AC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802CA0B0: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802CA0B4: sw          $t8, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = ctx->r24;
    // 0x802CA0B8: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x802CA0BC: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802CA0C0: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802CA0C4: sw          $t9, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r25;
    // 0x802CA0C8: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x802CA0CC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802CA0D0: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802CA0D4: sw          $t0, 0x34($s3)
    MEM_W(0X34, ctx->r19) = ctx->r8;
    // 0x802CA0D8: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x802CA0DC: sw          $t1, 0x38($s3)
    MEM_W(0X38, ctx->r19) = ctx->r9;
    // 0x802CA0E0: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x802CA0E4: sw          $t2, 0x3C($s3)
    MEM_W(0X3C, ctx->r19) = ctx->r10;
    // 0x802CA0E8: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x802CA0EC: sw          $t3, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->r11;
    // 0x802CA0F0: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x802CA0F4: jal         0x80233CE8
    // 0x802CA0F8: sw          $t4, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->r12;
    static_3_80233CE8(rdram, ctx);
        goto after_15;
    // 0x802CA0F8: sw          $t4, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->r12;
    after_15:
    // 0x802CA0FC: sw          $v0, 0x48($s3)
    MEM_W(0X48, ctx->r19) = ctx->r2;
    // 0x802CA100: addiu       $t5, $zero, 0xE5
    ctx->r13 = ADD32(0, 0XE5);
    // 0x802CA104: addiu       $t6, $zero, 0x62
    ctx->r14 = ADD32(0, 0X62);
    // 0x802CA108: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802CA10C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802CA110: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CA114: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CA118: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CA11C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802CA120: jal         0x802344F4
    // 0x802CA124: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_16;
    // 0x802CA124: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_16:
    // 0x802CA128: jal         0x80233CE8
    // 0x802CA12C: nop

    static_3_80233CE8(rdram, ctx);
        goto after_17;
    // 0x802CA12C: nop

    after_17:
    // 0x802CA130: sw          $v0, 0xAC($s3)
    MEM_W(0XAC, ctx->r19) = ctx->r2;
    // 0x802CA134: addiu       $t7, $zero, 0xE5
    ctx->r15 = ADD32(0, 0XE5);
    // 0x802CA138: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x802CA13C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802CA140: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802CA144: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CA148: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CA14C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CA150: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x802CA154: jal         0x802344F4
    // 0x802CA158: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_18;
    // 0x802CA158: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_18:
    // 0x802CA15C: jal         0x80233CE8
    // 0x802CA160: nop

    static_3_80233CE8(rdram, ctx);
        goto after_19;
    // 0x802CA160: nop

    after_19:
    // 0x802CA164: sw          $v0, 0xA0($s3)
    MEM_W(0XA0, ctx->r19) = ctx->r2;
    // 0x802CA168: addiu       $t9, $zero, 0xCC
    ctx->r25 = ADD32(0, 0XCC);
    // 0x802CA16C: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x802CA170: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802CA174: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802CA178: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CA17C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CA180: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CA184: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x802CA188: jal         0x802344F4
    // 0x802CA18C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_20;
    // 0x802CA18C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_20:
    // 0x802CA190: jal         0x80233CE8
    // 0x802CA194: nop

    static_3_80233CE8(rdram, ctx);
        goto after_21;
    // 0x802CA194: nop

    after_21:
    // 0x802CA198: sw          $v0, 0xA8($s3)
    MEM_W(0XA8, ctx->r19) = ctx->r2;
    // 0x802CA19C: addiu       $t1, $zero, 0xE5
    ctx->r9 = ADD32(0, 0XE5);
    // 0x802CA1A0: addiu       $t2, $zero, 0x7D
    ctx->r10 = ADD32(0, 0X7D);
    // 0x802CA1A4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802CA1A8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802CA1AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CA1B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CA1B4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CA1B8: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x802CA1BC: jal         0x802344F4
    // 0x802CA1C0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_22;
    // 0x802CA1C0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_22:
    // 0x802CA1C4: jal         0x80233CE8
    // 0x802CA1C8: nop

    static_3_80233CE8(rdram, ctx);
        goto after_23;
    // 0x802CA1C8: nop

    after_23:
    // 0x802CA1CC: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x802CA1D0: addiu       $t3, $zero, 0x125
    ctx->r11 = ADD32(0, 0X125);
    // 0x802CA1D4: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x802CA1D8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x802CA1DC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802CA1E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CA1E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CA1E8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CA1EC: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x802CA1F0: jal         0x802344F4
    // 0x802CA1F4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_24;
    // 0x802CA1F4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_24:
    // 0x802CA1F8: jal         0x80233CE8
    // 0x802CA1FC: nop

    static_3_80233CE8(rdram, ctx);
        goto after_25;
    // 0x802CA1FC: nop

    after_25:
    // 0x802CA200: sw          $v0, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = ctx->r2;
    // 0x802CA204: addiu       $t5, $zero, 0xE5
    ctx->r13 = ADD32(0, 0XE5);
    // 0x802CA208: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x802CA20C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802CA210: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802CA214: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CA218: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CA21C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CA220: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x802CA224: jal         0x802344F4
    // 0x802CA228: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_26;
    // 0x802CA228: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_26:
    // 0x802CA22C: jal         0x8030A894
    // 0x802CA230: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    static_3_8030A894(rdram, ctx);
        goto after_27;
    // 0x802CA230: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_27:
    // 0x802CA234: sb          $v0, 0x4C($s3)
    MEM_B(0X4C, ctx->r19) = ctx->r2;
    // 0x802CA238: jal         0x8030A894
    // 0x802CA23C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    static_3_8030A894(rdram, ctx);
        goto after_28;
    // 0x802CA23C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_28:
    // 0x802CA240: lbu         $t7, 0x4C($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X4C);
    // 0x802CA244: sb          $v0, 0x4D($s3)
    MEM_B(0X4D, ctx->r19) = ctx->r2;
    // 0x802CA248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CA24C: bnel        $t7, $zero, L_802CA260
    if (ctx->r15 != 0) {
        // 0x802CA250: lbu         $t8, 0x4D($s3)
        ctx->r24 = MEM_BU(ctx->r19, 0X4D);
            goto L_802CA260;
    }
    goto skip_0;
    // 0x802CA250: lbu         $t8, 0x4D($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X4D);
    skip_0:
    // 0x802CA254: jal         0x8021B838
    // 0x802CA258: lw          $a0, 0x24($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X24);
    static_3_8021B838(rdram, ctx);
        goto after_29;
    // 0x802CA258: lw          $a0, 0x24($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X24);
    after_29:
    // 0x802CA25C: lbu         $t8, 0x4D($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X4D);
L_802CA260:
    // 0x802CA260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CA264: bnel        $t8, $zero, L_802CA278
    if (ctx->r24 != 0) {
        // 0x802CA268: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_802CA278;
    }
    goto skip_1;
    // 0x802CA268: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    skip_1:
    // 0x802CA26C: jal         0x8021B838
    // 0x802CA270: lw          $a0, 0x28($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X28);
    static_3_8021B838(rdram, ctx);
        goto after_30;
    // 0x802CA270: lw          $a0, 0x28($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X28);
    after_30:
    // 0x802CA274: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_802CA278:
    // 0x802CA278: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CA27C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802CA280: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802CA284: jal         0x802CFED8
    // 0x802CA288: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_802CFED8(rdram, ctx);
        goto after_31;
    // 0x802CA288: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_31:
    // 0x802CA28C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802CA290: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x802CA294: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x802CA298: addiu       $v0, $sp, 0x60
    ctx->r2 = ADD32(ctx->r29, 0X60);
    // 0x802CA29C: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802CA2A0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802CA2A4: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x802CA2A8: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x802CA2AC: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x802CA2B0: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x802CA2B4: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802CA2B8: lw          $t1, 0xC($t9)
    ctx->r9 = MEM_W(ctx->r25, 0XC);
    // 0x802CA2BC: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x802CA2C0: lw          $at, 0x10($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X10);
    // 0x802CA2C4: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802CA2C8: lw          $t1, 0x14($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X14);
    // 0x802CA2CC: sw          $t1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r9;
    // 0x802CA2D0: lw          $at, 0x18($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X18);
    // 0x802CA2D4: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802CA2D8: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802CA2DC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802CA2E0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x802CA2E4: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x802CA2E8: lwc1        $f0, 0x0($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X0);
    // 0x802CA2EC: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802CA2F0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802CA2F4: jal         0x80303778
    // 0x802CA2F8: nop

    static_3_80303778(rdram, ctx);
        goto after_32;
    // 0x802CA2F8: nop

    after_32:
    // 0x802CA2FC: lb          $t5, 0xC($s3)
    ctx->r13 = MEM_B(ctx->r19, 0XC);
    // 0x802CA300: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x802CA304: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802CA308: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802CA30C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802CA310: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802CA314: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802CA318: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802CA31C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CA320: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CA324: swc1        $f20, 0x58($s3)
    MEM_W(0X58, ctx->r19) = ctx->f20.u32l;
    // 0x802CA328: swc1        $f20, 0x60($s3)
    MEM_W(0X60, ctx->r19) = ctx->f20.u32l;
    // 0x802CA32C: mul.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x802CA330: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CA334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CA338: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CA33C: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x802CA340: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802CA344: swc1        $f8, 0x5C($s3)
    MEM_W(0X5C, ctx->r19) = ctx->f8.u32l;
    // 0x802CA348: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CA34C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CA350: swc1        $f10, 0x64($s3)
    MEM_W(0X64, ctx->r19) = ctx->f10.u32l;
    // 0x802CA354: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CA358: swc1        $f22, 0x6C($s3)
    MEM_W(0X6C, ctx->r19) = ctx->f22.u32l;
    // 0x802CA35C: jal         0x80309B88
    // 0x802CA360: swc1        $f6, 0x68($s3)
    MEM_W(0X68, ctx->r19) = ctx->f6.u32l;
    static_3_80309B88(rdram, ctx);
        goto after_33;
    // 0x802CA360: swc1        $f6, 0x68($s3)
    MEM_W(0X68, ctx->r19) = ctx->f6.u32l;
    after_33:
    // 0x802CA364: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CA368: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CA36C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802CA370: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802CA374: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802CA378: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802CA37C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CA380: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CA384: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CA388: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CA38C: lui         $at, 0x42D4
    ctx->r1 = S32(0X42D4 << 16);
    // 0x802CA390: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802CA394: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802CA398: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802CA39C: swc1        $f22, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f22.u32l;
    // 0x802CA3A0: swc1        $f22, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f22.u32l;
    // 0x802CA3A4: swc1        $f22, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f22.u32l;
    // 0x802CA3A8: swc1        $f22, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f22.u32l;
    // 0x802CA3AC: swc1        $f22, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f22.u32l;
    // 0x802CA3B0: swc1        $f22, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f22.u32l;
    // 0x802CA3B4: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    // 0x802CA3B8: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x802CA3BC: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x802CA3C0: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x802CA3C4: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x802CA3C8: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x802CA3CC: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x802CA3D0: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x802CA3D4: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x802CA3D8: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x802CA3DC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x802CA3E0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802CA3E4: jal         0x80228DE0
    // 0x802CA3E8: addiu       $a0, $v0, 0x4DD4
    ctx->r4 = ADD32(ctx->r2, 0X4DD4);
    func_80228DE0(rdram, ctx);
        goto after_34;
    // 0x802CA3E8: addiu       $a0, $v0, 0x4DD4
    ctx->r4 = ADD32(ctx->r2, 0X4DD4);
    after_34:
    // 0x802CA3EC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802CA3F0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802CA3F4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x802CA3F8: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x802CA3FC: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x802CA400: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x802CA404: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x802CA408: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x802CA40C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x802CA410: jr          $ra
    // 0x802CA414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802CA414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802351B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802351B0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x802351B4: andi        $t6, $a1, 0xF
    ctx->r14 = ctx->r5 & 0XF;
    // 0x802351B8: subu        $v0, $v1, $t6
    ctx->r2 = SUB32(ctx->r3, ctx->r14);
    // 0x802351BC: beq         $v1, $v0, L_802351CC
    if (ctx->r3 == ctx->r2) {
        // 0x802351C0: addu        $t7, $a1, $v0
        ctx->r15 = ADD32(ctx->r5, ctx->r2);
            goto L_802351CC;
    }
    // 0x802351C0: addu        $t7, $a1, $v0
    ctx->r15 = ADD32(ctx->r5, ctx->r2);
    // 0x802351C4: b           L_802351D0
    // 0x802351C8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
        goto L_802351D0;
    // 0x802351C8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
L_802351CC:
    // 0x802351CC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_802351D0:
    // 0x802351D0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x802351D4: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x802351D8: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x802351DC: jr          $ra
    // 0x802351E0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    return;
    // 0x802351E0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void D_80291FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292040: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x80292044: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x80292048: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x8029204C: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x80292050: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x80292054: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x80292058: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x8029205C: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x80292060: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x80292064: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x80292068: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x8029206C: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x80292070: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x80292074: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x80292078: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x8029207C: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x80292080: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x80292084: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x80292088: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x8029208C: lw          $v0, 0x8C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8C);
    // 0x80292090: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80292094: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80292098: beq         $s4, $v0, L_802920A8
    if (ctx->r20 == ctx->r2) {
        // 0x8029209C: addiu       $s3, $sp, 0xB4
        ctx->r19 = ADD32(ctx->r29, 0XB4);
            goto L_802920A8;
    }
    // 0x8029209C: addiu       $s3, $sp, 0xB4
    ctx->r19 = ADD32(ctx->r29, 0XB4);
    // 0x802920A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802920A4: bne         $v0, $at, L_802920B8
    if (ctx->r2 != ctx->r1) {
        // 0x802920A8: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_802920B8;
    }
L_802920A8:
    // 0x802920A8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802920AC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x802920B0: b           L_802920C4
    // 0x802920B4: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
        goto L_802920C4;
    // 0x802920B4: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_802920B8:
    // 0x802920B8: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x802920BC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x802920C0: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_802920C4:
    // 0x802920C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802920C8: jal         0x802C51D0
    // 0x802920CC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x802920CC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x802920D0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802920D4: addiu       $t6, $sp, 0x100
    ctx->r14 = ADD32(ctx->r29, 0X100);
    // 0x802920D8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802920DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802920E0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802920E4: lwc1        $f4, 0x154($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X154);
    // 0x802920E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802920EC: addiu       $a2, $sp, 0x120
    ctx->r6 = ADD32(ctx->r29, 0X120);
    // 0x802920F0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802920F4: lwc1        $f6, 0x158($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X158);
    // 0x802920F8: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x802920FC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80292100: lw          $t8, 0x8C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X8C);
    // 0x80292104: jal         0x802ADA50
    // 0x80292108: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    static_3_802ADA50(rdram, ctx);
        goto after_1;
    // 0x80292108: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_1:
    // 0x8029210C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80292110: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80292114: lwc1        $f20, 0xE0($s2)
    ctx->f20.u32l = MEM_W(ctx->r18, 0XE0);
    // 0x80292118: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x8029211C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80292120: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80292124: jal         0x8022A0D0
    // 0x80292128: lui         $a3, 0xC000
    ctx->r7 = S32(0XC000 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x80292128: lui         $a3, 0xC000
    ctx->r7 = S32(0XC000 << 16);
    after_2:
    // 0x8029212C: bne         $s5, $zero, L_80292194
    if (ctx->r21 != 0) {
        // 0x80292130: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80292194;
    }
    // 0x80292130: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80292134: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80292138: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8029213C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80292140: lwc1        $f26, 0x0($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80292144: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80292148: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8029214C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80292150: swc1        $f30, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f30.u32l;
    // 0x80292154: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x80292158: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x8029215C: swc1        $f28, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f28.u32l;
    // 0x80292160: lw          $t9, 0x8C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8C);
    // 0x80292164: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80292168: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8029216C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80292170: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80292174: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80292178: sw          $fp, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r30;
    // 0x8029217C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80292180: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x80292184: jal         0x802AB018
    // 0x80292188: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    static_3_802AB018(rdram, ctx);
        goto after_3;
    // 0x80292188: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_3:
    // 0x8029218C: b           L_802922CC
    // 0x80292190: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
        goto L_802922CC;
    // 0x80292190: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
L_80292194:
    // 0x80292194: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80292198: jal         0x802C5844
    // 0x8029219C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_802C5844(rdram, ctx);
        goto after_4;
    // 0x8029219C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x802921A0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802921A4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x802921A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802921AC: lwc1        $f26, 0x0($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802921B0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802921B4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802921B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802921BC: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x802921C0: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
L_802921C4:
    // 0x802921C4: bgez        $s0, L_802921D8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x802921C8: andi        $t2, $s0, 0x1
        ctx->r10 = ctx->r16 & 0X1;
            goto L_802921D8;
    }
    // 0x802921C8: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x802921CC: beq         $t2, $zero, L_802921D8
    if (ctx->r10 == 0) {
        // 0x802921D0: nop
    
            goto L_802921D8;
    }
    // 0x802921D0: nop

    // 0x802921D4: addiu       $t2, $t2, -0x2
    ctx->r10 = ADD32(ctx->r10, -0X2);
L_802921D8:
    // 0x802921D8: bne         $s4, $t2, L_802921F8
    if (ctx->r20 != ctx->r10) {
        // 0x802921DC: negu        $t3, $s0
        ctx->r11 = SUB32(0, ctx->r16);
            goto L_802921F8;
    }
    // 0x802921DC: negu        $t3, $s0
    ctx->r11 = SUB32(0, ctx->r16);
    // 0x802921E0: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x802921E4: nop

    // 0x802921E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802921EC: mul.s       $f2, $f22, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x802921F0: b           L_80292218
    // 0x802921F4: sub.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f2.fl;
        goto L_80292218;
    // 0x802921F4: sub.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f2.fl;
L_802921F8:
    // 0x802921F8: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x802921FC: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80292200: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80292204: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80292208: mul.s       $f2, $f22, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x8029220C: nop

    // 0x80292210: mul.s       $f8, $f22, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x80292214: sub.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f8.fl;
L_80292218:
    // 0x80292218: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8029221C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80292220: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80292224: jal         0x8022A0D0
    // 0x80292228: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_8022A0D0(rdram, ctx);
        goto after_5;
    // 0x80292228: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
    // 0x8029222C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80292230: swc1        $f28, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f28.u32l;
    // 0x80292234: swc1        $f30, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f30.u32l;
    // 0x80292238: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x8029223C: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x80292240: lw          $t4, 0x8C($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X8C);
    // 0x80292244: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80292248: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x8029224C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80292250: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80292254: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80292258: sw          $fp, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r30;
    // 0x8029225C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80292260: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x80292264: jal         0x802AB018
    // 0x80292268: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    static_3_802AB018(rdram, ctx);
        goto after_6;
    // 0x80292268: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_6:
    // 0x8029226C: beq         $v0, $zero, L_802922AC
    if (ctx->r2 == 0) {
        // 0x80292270: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802922AC;
    }
    // 0x80292270: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80292274: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80292278: addu        $v1, $sp, $v0
    ctx->r3 = ADD32(ctx->r29, ctx->r2);
    // 0x8029227C: lw          $v1, 0x100($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X100);
    // 0x80292280: addu        $a1, $sp, $v0
    ctx->r5 = ADD32(ctx->r29, ctx->r2);
    // 0x80292284: bne         $s4, $v1, L_8029229C
    if (ctx->r20 != ctx->r3) {
        // 0x80292288: nop
    
            goto L_8029229C;
    }
    // 0x80292288: nop

    // 0x8029228C: jal         0x802D0CC0
    // 0x80292290: lw          $a1, 0x120($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X120);
    static_3_802D0CC0(rdram, ctx);
        goto after_7;
    // 0x80292290: lw          $a1, 0x120($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X120);
    after_7:
    // 0x80292294: b           L_802922B0
    // 0x80292298: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_802922B0;
    // 0x80292298: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8029229C:
    // 0x8029229C: bne         $s7, $v1, L_802922AC
    if (ctx->r23 != ctx->r3) {
        // 0x802922A0: addu        $a1, $sp, $v0
        ctx->r5 = ADD32(ctx->r29, ctx->r2);
            goto L_802922AC;
    }
    // 0x802922A0: addu        $a1, $sp, $v0
    ctx->r5 = ADD32(ctx->r29, ctx->r2);
    // 0x802922A4: jal         0x802D0C7C
    // 0x802922A8: lw          $a1, 0x110($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X110);
    static_3_802D0C7C(rdram, ctx);
        goto after_8;
    // 0x802922A8: lw          $a1, 0x110($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X110);
    after_8:
L_802922AC:
    // 0x802922AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802922B0:
    // 0x802922B0: slt         $at, $s1, $s5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x802922B4: bne         $at, $zero, L_802922C0
    if (ctx->r1 != 0) {
        // 0x802922B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802922C0;
    }
    // 0x802922B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802922BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802922C0:
    // 0x802922C0: bne         $s0, $s6, L_802921C4
    if (ctx->r16 != ctx->r22) {
        // 0x802922C4: nop
    
            goto L_802921C4;
    }
    // 0x802922C4: nop

    // 0x802922C8: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
L_802922CC:
    // 0x802922CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802922D0: swc1        $f10, 0xF4($s2)
    MEM_W(0XF4, ctx->r18) = ctx->f10.u32l;
    // 0x802922D4: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x802922D8: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x802922DC: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x802922E0: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x802922E4: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x802922E8: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x802922EC: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x802922F0: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x802922F4: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x802922F8: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x802922FC: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x80292300: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x80292304: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x80292308: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x8029230C: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x80292310: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x80292314: jr          $ra
    // 0x80292318: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x80292318: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void D_8023D5B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D5B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D5B8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8023D5BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023D5C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023D5C4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8023D5C8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8023D5CC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8023D5D0: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x8023D5D4: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8023D5D8: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
L_8023D5DC:
    // 0x8023D5DC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8023D5E0: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8023D5E4: bne         $at, $zero, L_8023D5DC
    if (ctx->r1 != 0) {
        // 0x8023D5E8: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_8023D5DC;
    }
    // 0x8023D5E8: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8023D5EC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023D5F0: addiu       $v1, $a1, 0x0
    ctx->r3 = ADD32(ctx->r5, 0X0);
    // 0x8023D5F4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8023D5F8: sw          $t7, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r15;
    // 0x8023D5FC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023D600: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8023D604: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x8023D608: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8023D60C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8023D610: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8023D614: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8023D618: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8023D61C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8023D620: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8023D624: sb          $t8, 0xC($sp)
    MEM_B(0XC, ctx->r29) = ctx->r24;
    // 0x8023D628: sb          $t9, 0xD($sp)
    MEM_B(0XD, ctx->r29) = ctx->r25;
    // 0x8023D62C: sb          $t0, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r8;
    // 0x8023D630: sb          $a0, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r4;
    // 0x8023D634: sb          $t1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r9;
    // 0x8023D638: sb          $t2, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r10;
    // 0x8023D63C: sb          $t3, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r11;
    // 0x8023D640: sb          $t4, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r12;
    // 0x8023D644: blez        $t5, L_8023D684
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8023D648: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8023D684;
    }
    // 0x8023D648: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023D64C: addiu       $a0, $sp, 0xC
    ctx->r4 = ADD32(ctx->r29, 0XC);
L_8023D650:
    // 0x8023D650: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x8023D654: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D658: swl         $at, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r1);
    // 0x8023D65C: swr         $at, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r1);
    // 0x8023D660: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8023D664: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8023D668: swl         $t7, -0x4($v1)
    do_swl(rdram, -0X4, ctx->r3, ctx->r15);
    // 0x8023D66C: swr         $t7, -0x1($v1)
    do_swr(rdram, -0X1, ctx->r3, ctx->r15);
    // 0x8023D670: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x8023D674: nop

    // 0x8023D678: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8023D67C: bne         $at, $zero, L_8023D650
    if (ctx->r1 != 0) {
        // 0x8023D680: nop
    
            goto L_8023D650;
    }
    // 0x8023D680: nop

L_8023D684:
    // 0x8023D684: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x8023D688: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x8023D68C: jr          $ra
    // 0x8023D690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8023D690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_8029BBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029BC64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029BC68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029BC6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029BC70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029BC74: jal         0x802CBA18
    // 0x8029BC78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802CBA18(rdram, ctx);
        goto after_0;
    // 0x8029BC78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8029BC7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029BC80: jal         0x80223FC4
    // 0x8029BC84: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_1;
    // 0x8029BC84: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_1:
    // 0x8029BC88: bne         $v0, $zero, L_8029BCA0
    if (ctx->r2 != 0) {
        // 0x8029BC8C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8029BCA0;
    }
    // 0x8029BC8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8029BC90: jal         0x80223FC4
    // 0x8029BC94: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    static_3_80223FC4(rdram, ctx);
        goto after_2;
    // 0x8029BC94: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_2:
    // 0x8029BC98: beq         $v0, $zero, L_8029BD6C
    if (ctx->r2 == 0) {
        // 0x8029BC9C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8029BD6C;
    }
    // 0x8029BC9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8029BCA0:
    // 0x8029BCA0: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x8029BCA4: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    // 0x8029BCA8: bnel        $v0, $zero, L_8029BD4C
    if (ctx->r2 != 0) {
        // 0x8029BCAC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8029BD4C;
    }
    goto skip_0;
    // 0x8029BCAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x8029BCB0: jal         0x8030BF98
    // 0x8029BCB4: nop

    static_3_8030BF98(rdram, ctx);
        goto after_3;
    // 0x8029BCB4: nop

    after_3:
    // 0x8029BCB8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8029BCBC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8029BCC0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029BCC4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8029BCC8: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x8029BCCC: sb          $zero, 0x67($v1)
    MEM_B(0X67, ctx->r3) = 0;
    // 0x8029BCD0: sb          $zero, 0x68($v1)
    MEM_B(0X68, ctx->r3) = 0;
    // 0x8029BCD4: sb          $zero, 0x69($v1)
    MEM_B(0X69, ctx->r3) = 0;
    // 0x8029BCD8: sb          $zero, 0x6A($v1)
    MEM_B(0X6A, ctx->r3) = 0;
    // 0x8029BCDC: sb          $zero, 0x6B($v1)
    MEM_B(0X6B, ctx->r3) = 0;
    // 0x8029BCE0: sb          $zero, 0x5C($v1)
    MEM_B(0X5C, ctx->r3) = 0;
    // 0x8029BCE4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8029BCE8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8029BCEC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x8029BCF0: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
    // 0x8029BCF4: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x8029BCF8: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8029BCFC: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8029BD00: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x8029BD04: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029BD08: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x8029BD0C: sw          $zero, 0x28($v1)
    MEM_W(0X28, ctx->r3) = 0;
    // 0x8029BD10: sw          $zero, 0x38($v1)
    MEM_W(0X38, ctx->r3) = 0;
    // 0x8029BD14: sw          $zero, 0x40($v1)
    MEM_W(0X40, ctx->r3) = 0;
    // 0x8029BD18: sb          $zero, 0x66($v1)
    MEM_B(0X66, ctx->r3) = 0;
    // 0x8029BD1C: jal         0x8030AAD0
    // 0x8029BD20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8030AAD0(rdram, ctx);
        goto after_4;
    // 0x8029BD20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x8029BD24: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029BD28: jal         0x8030AAD0
    // 0x8029BD2C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8030AAD0(rdram, ctx);
        goto after_5;
    // 0x8029BD2C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_5:
    // 0x8029BD30: jal         0x8030C020
    // 0x8029BD34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8030C020(rdram, ctx);
        goto after_6;
    // 0x8029BD34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x8029BD38: jal         0x802CA14C
    // 0x8029BD3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA14C(rdram, ctx);
        goto after_7;
    // 0x8029BD3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8029BD40: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x8029BD44: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x8029BD48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8029BD4C:
    // 0x8029BD4C: bne         $v0, $at, L_8029BD5C
    if (ctx->r2 != ctx->r1) {
        // 0x8029BD50: nop
    
            goto L_8029BD5C;
    }
    // 0x8029BD50: nop

    // 0x8029BD54: jal         0x802CA14C
    // 0x8029BD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA14C(rdram, ctx);
        goto after_8;
    // 0x8029BD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_8029BD5C:
    // 0x8029BD5C: jal         0x802B18BC
    // 0x8029BD60: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_9;
    // 0x8029BD60: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_9:
    // 0x8029BD64: b           L_8029BD90
    // 0x8029BD68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8029BD90;
    // 0x8029BD68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029BD6C:
    // 0x8029BD6C: jal         0x80223FC4
    // 0x8029BD70: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    static_3_80223FC4(rdram, ctx);
        goto after_10;
    // 0x8029BD70: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_10:
    // 0x8029BD74: beql        $v0, $zero, L_8029BD90
    if (ctx->r2 == 0) {
        // 0x8029BD78: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8029BD90;
    }
    goto skip_1;
    // 0x8029BD78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8029BD7C: jal         0x802B18BC
    // 0x8029BD80: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    static_3_802B18BC(rdram, ctx);
        goto after_11;
    // 0x8029BD80: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_11:
    // 0x8029BD84: jal         0x802CA14C
    // 0x8029BD88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802CA14C(rdram, ctx);
        goto after_12;
    // 0x8029BD88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8029BD8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029BD90:
    // 0x8029BD90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029BD94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029BD98: jr          $ra
    // 0x8029BD9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8029BD9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802A1F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A1F9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A1FA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A1FA4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802A1FA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A1FAC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802A1FB0: jal         0x802D1A6C
    // 0x802A1FB4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_802D1A6C(rdram, ctx);
        goto after_0;
    // 0x802A1FB4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x802A1FB8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802A1FBC: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x802A1FC0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802A1FC4: jal         0x8021B6D4
    // 0x802A1FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8021B6D4(rdram, ctx);
        goto after_1;
    // 0x802A1FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802A1FCC: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A1FD0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802A1FD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A1FD8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A1FDC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A1FE0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A1FE4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A1FE8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802A1FEC: jal         0x8022A0D0
    // 0x802A1FF0: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x802A1FF0: nop

    after_2:
    // 0x802A1FF4: lbu         $t6, 0x1E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E);
    // 0x802A1FF8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A1FFC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802A2000: beq         $t6, $zero, L_802A201C
    if (ctx->r14 == 0) {
        // 0x802A2004: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802A201C;
    }
    // 0x802A2004: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A2008: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A200C: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A2010: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802A2014: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x802A2018: swc1        $f6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f6.u32l;
L_802A201C:
    // 0x802A201C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802A2020: jal         0x8021B4B0
    // 0x802A2024: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    static_3_8021B4B0(rdram, ctx);
        goto after_3;
    // 0x802A2024: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x802A2028: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A202C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A2030: lw          $a1, 0x5C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5C);
    // 0x802A2034: jal         0x802AEF08
    // 0x802A2038: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    static_3_802AEF08(rdram, ctx);
        goto after_4;
    // 0x802A2038: lw          $a2, 0x60($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X60);
    after_4:
    // 0x802A203C: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A2040: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x802A2044: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x802A2048: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x802A204C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A2050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A2054: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A2058: jr          $ra
    // 0x802A205C: nop

    return;
    // 0x802A205C: nop

;}
RECOMP_FUNC void func_8023D7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void D_802A2018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2098: jr          $ra
    // 0x802A209C: sw          $a1, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r5;
    return;
    // 0x802A209C: sw          $a1, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802A6A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6A98: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A6A9C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802A6AA0: lh          $t6, 0x2C0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C0);
    // 0x802A6AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802A6AA8: bgez        $t6, L_802A6AB8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802A6AAC: nop
    
            goto L_802A6AB8;
    }
    // 0x802A6AAC: nop

    // 0x802A6AB0: jr          $ra
    // 0x802A6AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802A6AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A6AB8:
    // 0x802A6AB8: jr          $ra
    // 0x802A6ABC: nop

    return;
    // 0x802A6ABC: nop

;}
RECOMP_FUNC void D_802E7678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E76F8: jr          $ra
    // 0x802E76FC: lwc1        $f0, 0x44($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X44);
    return;
    // 0x802E76FC: lwc1        $f0, 0x44($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X44);
;}
RECOMP_FUNC void D_8029F208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029F28C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029F290: jal         0x802D05CC
    // 0x8029F294: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_802D05CC(rdram, ctx);
        goto after_0;
    // 0x8029F294: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8029F298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029F29C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029F2A0: jr          $ra
    // 0x8029F2A4: nop

    return;
    // 0x8029F2A4: nop

;}
RECOMP_FUNC void D_802D9A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9AFC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D9B00: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D9B04: lhu         $v0, 0x52($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X52);
    // 0x802D9B08: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x802D9B0C: beq         $t6, $zero, L_802D9B1C
    if (ctx->r14 == 0) {
        // 0x802D9B10: andi        $t7, $v0, 0x40
        ctx->r15 = ctx->r2 & 0X40;
            goto L_802D9B1C;
    }
    // 0x802D9B10: andi        $t7, $v0, 0x40
    ctx->r15 = ctx->r2 & 0X40;
    // 0x802D9B14: jr          $ra
    // 0x802D9B18: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x802D9B18: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_802D9B1C:
    // 0x802D9B1C: beq         $t7, $zero, L_802D9B2C
    if (ctx->r15 == 0) {
        // 0x802D9B20: andi        $t8, $v0, 0x20
        ctx->r24 = ctx->r2 & 0X20;
            goto L_802D9B2C;
    }
    // 0x802D9B20: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x802D9B24: jr          $ra
    // 0x802D9B28: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    return;
    // 0x802D9B28: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
L_802D9B2C:
    // 0x802D9B2C: beq         $t8, $zero, L_802D9B3C
    if (ctx->r24 == 0) {
        // 0x802D9B30: andi        $t9, $v0, 0x200
        ctx->r25 = ctx->r2 & 0X200;
            goto L_802D9B3C;
    }
    // 0x802D9B30: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    // 0x802D9B34: jr          $ra
    // 0x802D9B38: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    return;
    // 0x802D9B38: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
L_802D9B3C:
    // 0x802D9B3C: beq         $t9, $zero, L_802D9B4C
    if (ctx->r25 == 0) {
        // 0x802D9B40: andi        $t0, $v0, 0x10
        ctx->r8 = ctx->r2 & 0X10;
            goto L_802D9B4C;
    }
    // 0x802D9B40: andi        $t0, $v0, 0x10
    ctx->r8 = ctx->r2 & 0X10;
    // 0x802D9B44: jr          $ra
    // 0x802D9B48: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    return;
    // 0x802D9B48: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
L_802D9B4C:
    // 0x802D9B4C: beq         $t0, $zero, L_802D9B78
    if (ctx->r8 == 0) {
        // 0x802D9B50: andi        $t3, $v0, 0x100
        ctx->r11 = ctx->r2 & 0X100;
            goto L_802D9B78;
    }
    // 0x802D9B50: andi        $t3, $v0, 0x100
    ctx->r11 = ctx->r2 & 0X100;
    // 0x802D9B54: andi        $t1, $v0, 0x80
    ctx->r9 = ctx->r2 & 0X80;
    // 0x802D9B58: beq         $t1, $zero, L_802D9B70
    if (ctx->r9 == 0) {
        // 0x802D9B5C: andi        $t2, $v0, 0x100
        ctx->r10 = ctx->r2 & 0X100;
            goto L_802D9B70;
    }
    // 0x802D9B5C: andi        $t2, $v0, 0x100
    ctx->r10 = ctx->r2 & 0X100;
    // 0x802D9B60: beq         $t2, $zero, L_802D9B70
    if (ctx->r10 == 0) {
        // 0x802D9B64: nop
    
            goto L_802D9B70;
    }
    // 0x802D9B64: nop

    // 0x802D9B68: jr          $ra
    // 0x802D9B6C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    return;
    // 0x802D9B6C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_802D9B70:
    // 0x802D9B70: jr          $ra
    // 0x802D9B74: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    return;
    // 0x802D9B74: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
L_802D9B78:
    // 0x802D9B78: beq         $t3, $zero, L_802D9B88
    if (ctx->r11 == 0) {
        // 0x802D9B7C: andi        $t4, $v0, 0x8
        ctx->r12 = ctx->r2 & 0X8;
            goto L_802D9B88;
    }
    // 0x802D9B7C: andi        $t4, $v0, 0x8
    ctx->r12 = ctx->r2 & 0X8;
    // 0x802D9B80: jr          $ra
    // 0x802D9B84: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    return;
    // 0x802D9B84: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_802D9B88:
    // 0x802D9B88: beq         $t4, $zero, L_802D9BB0
    if (ctx->r12 == 0) {
        // 0x802D9B8C: andi        $t6, $v0, 0x4
        ctx->r14 = ctx->r2 & 0X4;
            goto L_802D9BB0;
    }
    // 0x802D9B8C: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x802D9B90: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802D9B94: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802D9B98: beq         $t5, $zero, L_802D9BA8
    if (ctx->r13 == 0) {
        // 0x802D9B9C: nop
    
            goto L_802D9BA8;
    }
    // 0x802D9B9C: nop

    // 0x802D9BA0: jr          $ra
    // 0x802D9BA4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    return;
    // 0x802D9BA4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_802D9BA8:
    // 0x802D9BA8: jr          $ra
    // 0x802D9BAC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    return;
    // 0x802D9BAC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_802D9BB0:
    // 0x802D9BB0: beq         $t6, $zero, L_802D9BC0
    if (ctx->r14 == 0) {
        // 0x802D9BB4: andi        $t7, $v0, 0x80
        ctx->r15 = ctx->r2 & 0X80;
            goto L_802D9BC0;
    }
    // 0x802D9BB4: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x802D9BB8: jr          $ra
    // 0x802D9BBC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    return;
    // 0x802D9BBC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_802D9BC0:
    // 0x802D9BC0: beq         $t7, $zero, L_802D9BD0
    if (ctx->r15 == 0) {
        // 0x802D9BC4: andi        $t8, $v0, 0x2
        ctx->r24 = ctx->r2 & 0X2;
            goto L_802D9BD0;
    }
    // 0x802D9BC4: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x802D9BC8: jr          $ra
    // 0x802D9BCC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    return;
    // 0x802D9BCC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_802D9BD0:
    // 0x802D9BD0: beq         $t8, $zero, L_802D9C00
    if (ctx->r24 == 0) {
        // 0x802D9BD4: andi        $t0, $v0, 0x1
        ctx->r8 = ctx->r2 & 0X1;
            goto L_802D9C00;
    }
    // 0x802D9BD4: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x802D9BD8: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x802D9BDC: lui         $at, 0x19
    ctx->r1 = S32(0X19 << 16);
    // 0x802D9BE0: ori         $at, $at, 0xF0A1
    ctx->r1 = ctx->r1 | 0XF0A1;
    // 0x802D9BE4: slt         $at, $t9, $at
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x802D9BE8: bne         $at, $zero, L_802D9BF8
    if (ctx->r1 != 0) {
        // 0x802D9BEC: nop
    
            goto L_802D9BF8;
    }
    // 0x802D9BEC: nop

    // 0x802D9BF0: jr          $ra
    // 0x802D9BF4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    return;
    // 0x802D9BF4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_802D9BF8:
    // 0x802D9BF8: jr          $ra
    // 0x802D9BFC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    return;
    // 0x802D9BFC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_802D9C00:
    // 0x802D9C00: beq         $t0, $zero, L_802D9C10
    if (ctx->r8 == 0) {
        // 0x802D9C04: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802D9C10;
    }
    // 0x802D9C04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D9C08: jr          $ra
    // 0x802D9C0C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    return;
    // 0x802D9C0C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_802D9C10:
    // 0x802D9C10: jr          $ra
    // 0x802D9C14: nop

    return;
    // 0x802D9C14: nop

;}
RECOMP_FUNC void D_8029608C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029610C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80296110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80296114: beq         $a0, $zero, L_80296128
    if (ctx->r4 == 0) {
        // 0x80296118: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80296128;
    }
    // 0x80296118: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8029611C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80296120: jal         0x802C672C
    // 0x80296124: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802C672C(rdram, ctx);
        goto after_0;
    // 0x80296124: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
L_80296128:
    // 0x80296128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029612C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80296130: jr          $ra
    // 0x80296134: nop

    return;
    // 0x80296134: nop

    // 0x80296138: jr          $ra
    // 0x8029613C: nop

    return;
    // 0x8029613C: nop

;}
RECOMP_FUNC void D_802E5D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E5DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E5DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E5DB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802E5DB8: beq         $a0, $zero, L_802E5DEC
    if (ctx->r4 == 0) {
        // 0x802E5DBC: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802E5DEC;
    }
    // 0x802E5DBC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E5DC0: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    // 0x802E5DC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802E5DC8: jal         0x8031FD38
    // 0x802E5DCC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_8031FD38(rdram, ctx);
        goto after_0;
    // 0x802E5DCC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E5DD0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802E5DD4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E5DD8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802E5DDC: beql        $t7, $zero, L_802E5DF0
    if (ctx->r15 == 0) {
        // 0x802E5DE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802E5DF0;
    }
    goto skip_0;
    // 0x802E5DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802E5DE4: jal         0x802C681C
    // 0x802E5DE8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802E5DE8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
L_802E5DEC:
    // 0x802E5DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802E5DF0:
    // 0x802E5DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E5DF4: jr          $ra
    // 0x802E5DF8: nop

    return;
    // 0x802E5DF8: nop

;}
RECOMP_FUNC void D_802B8714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B8794: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802B8798: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802B879C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802B87A0: lh          $t6, 0x80($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X80);
    // 0x802B87A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B87A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B87AC: bnel        $t6, $at, L_802B890C
    if (ctx->r14 != ctx->r1) {
        // 0x802B87B0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802B890C;
    }
    goto skip_0;
    // 0x802B87B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x802B87B4: jal         0x8022331C
    // 0x802B87B8: nop

    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802B87B8: nop

    after_0:
    // 0x802B87BC: lui         $a0, 0xE2
    ctx->r4 = S32(0XE2 << 16);
    // 0x802B87C0: jal         0x802233EC
    // 0x802B87C4: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    static_3_802233EC(rdram, ctx);
        goto after_1;
    // 0x802B87C4: ori         $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 | 0XFFF;
    after_1:
    // 0x802B87C8: jal         0x8022342C
    // 0x802B87CC: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_2;
    // 0x802B87CC: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    after_2:
    // 0x802B87D0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x802B87D4: jal         0x80228DE0
    // 0x802B87D8: addiu       $a1, $s0, 0x88
    ctx->r5 = ADD32(ctx->r16, 0X88);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x802B87D8: addiu       $a1, $s0, 0x88
    ctx->r5 = ADD32(ctx->r16, 0X88);
    after_3:
    // 0x802B87DC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x802B87E0: lw          $a1, 0x110($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X110);
    // 0x802B87E4: lw          $a2, 0x108($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X108);
    // 0x802B87E8: jal         0x8022A210
    // 0x802B87EC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    static_3_8022A210(rdram, ctx);
        goto after_4;
    // 0x802B87EC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_4:
    // 0x802B87F0: jal         0x80223108
    // 0x802B87F4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    static_3_80223108(rdram, ctx);
        goto after_5;
    // 0x802B87F4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x802B87F8: jal         0x80223468
    // 0x802B87FC: addiu       $a0, $zero, 0x1CE
    ctx->r4 = ADD32(0, 0X1CE);
    static_3_80223468(rdram, ctx);
        goto after_6;
    // 0x802B87FC: addiu       $a0, $zero, 0x1CE
    ctx->r4 = ADD32(0, 0X1CE);
    after_6:
    // 0x802B8800: jal         0x8021F4E4
    // 0x802B8804: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_7;
    // 0x802B8804: nop

    after_7:
    // 0x802B8808: addiu       $t7, $zero, 0xAA0
    ctx->r15 = ADD32(0, 0XAA0);
    // 0x802B880C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802B8810: lw          $t8, 0x114($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X114);
    // 0x802B8814: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x802B8818: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    // 0x802B881C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802B8820: lw          $t9, 0x118($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X118);
    // 0x802B8824: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B8828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B882C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802B8830: lw          $t0, 0x11C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X11C);
    // 0x802B8834: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802B8838: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802B883C: jal         0x8021F35C
    // 0x802B8840: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x802B8840: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_8:
    // 0x802B8844: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802B8848: lw          $t2, 0x120($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X120);
    // 0x802B884C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802B8850: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    // 0x802B8854: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802B8858: lw          $t3, 0x124($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X124);
    // 0x802B885C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B8860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B8864: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802B8868: lw          $t4, 0x128($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X128);
    // 0x802B886C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x802B8870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802B8874: jal         0x8021F35C
    // 0x802B8878: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802B8878: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_9:
    // 0x802B887C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802B8880: lw          $t6, 0x120($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X120);
    // 0x802B8884: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802B8888: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802B888C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802B8890: lw          $t7, 0x124($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X124);
    // 0x802B8894: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B8898: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B889C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802B88A0: lw          $t8, 0x128($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X128);
    // 0x802B88A4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802B88A8: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    // 0x802B88AC: jal         0x8021F35C
    // 0x802B88B0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802B88B0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_10:
    // 0x802B88B4: addiu       $t0, $zero, 0xAA0
    ctx->r8 = ADD32(0, 0XAA0);
    // 0x802B88B8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802B88BC: lw          $t1, 0x114($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X114);
    // 0x802B88C0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x802B88C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802B88C8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802B88CC: lw          $t2, 0x118($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X118);
    // 0x802B88D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B88D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B88D8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802B88DC: lw          $t3, 0x11C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X11C);
    // 0x802B88E0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802B88E4: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    // 0x802B88E8: jal         0x8021F35C
    // 0x802B88EC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802B88EC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_11:
    // 0x802B88F0: jal         0x8021FCD0
    // 0x802B88F4: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_12;
    // 0x802B88F4: nop

    after_12:
    // 0x802B88F8: jal         0x802230E4
    // 0x802B88FC: nop

    static_3_802230E4(rdram, ctx);
        goto after_13;
    // 0x802B88FC: nop

    after_13:
    // 0x802B8900: jal         0x8022337C
    // 0x802B8904: nop

    static_3_8022337C(rdram, ctx);
        goto after_14;
    // 0x802B8904: nop

    after_14:
    // 0x802B8908: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802B890C:
    // 0x802B890C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802B8910: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802B8914: jr          $ra
    // 0x802B8918: nop

    return;
    // 0x802B8918: nop

;}
RECOMP_FUNC void D_80221EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80221EF4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80221EF8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80221EFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80221F00: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x80221F04: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80221F08: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80221F0C: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80221F10: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80221F14: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80221F18: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80221F1C: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80221F20: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80221F24: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80221F28: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x80221F2C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80221F30: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80221F34: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80221F38: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80221F3C: nop

    // 0x80221F40: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80221F44: beql        $a0, $zero, L_80221F94
    if (ctx->r4 == 0) {
        // 0x80221F48: mfc1        $a0, $f6
        ctx->r4 = (int32_t)ctx->f6.u32l;
            goto L_80221F94;
    }
    goto skip_0;
    // 0x80221F48: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x80221F4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80221F50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80221F54: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80221F58: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80221F5C: nop

    // 0x80221F60: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80221F64: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80221F68: nop

    // 0x80221F6C: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80221F70: bne         $a0, $zero, L_80221F88
    if (ctx->r4 != 0) {
        // 0x80221F74: nop
    
            goto L_80221F88;
    }
    // 0x80221F74: nop

    // 0x80221F78: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80221F7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80221F80: b           L_80221FA0
    // 0x80221F84: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_80221FA0;
    // 0x80221F84: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_80221F88:
    // 0x80221F88: b           L_80221FA0
    // 0x80221F8C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_80221FA0;
    // 0x80221F8C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80221F90: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
L_80221F94:
    // 0x80221F94: nop

    // 0x80221F98: bltz        $a0, L_80221F88
    if (SIGNED(ctx->r4) < 0) {
        // 0x80221F9C: nop
    
            goto L_80221F88;
    }
    // 0x80221F9C: nop

L_80221FA0:
    // 0x80221FA0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80221FA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80221FA8: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x80221FAC: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80221FB0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80221FB4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80221FB8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80221FBC: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80221FC0: nop

    // 0x80221FC4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80221FC8: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80221FCC: nop

    // 0x80221FD0: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80221FD4: beql        $a1, $zero, L_80222024
    if (ctx->r5 == 0) {
        // 0x80221FD8: mfc1        $a1, $f10
        ctx->r5 = (int32_t)ctx->f10.u32l;
            goto L_80222024;
    }
    goto skip_1;
    // 0x80221FD8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x80221FDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80221FE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80221FE4: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80221FE8: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80221FEC: nop

    // 0x80221FF0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80221FF4: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80221FF8: nop

    // 0x80221FFC: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80222000: bne         $a1, $zero, L_80222018
    if (ctx->r5 != 0) {
        // 0x80222004: nop
    
            goto L_80222018;
    }
    // 0x80222004: nop

    // 0x80222008: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8022200C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80222010: b           L_80222030
    // 0x80222014: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_80222030;
    // 0x80222014: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_80222018:
    // 0x80222018: b           L_80222030
    // 0x8022201C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_80222030;
    // 0x8022201C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80222020: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
L_80222024:
    // 0x80222024: nop

    // 0x80222028: bltz        $a1, L_80222018
    if (SIGNED(ctx->r5) < 0) {
        // 0x8022202C: nop
    
            goto L_80222018;
    }
    // 0x8022202C: nop

L_80222030:
    // 0x80222030: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80222034: lwc1        $f16, 0x8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80222038: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022203C: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x80222040: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80222044: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80222048: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x8022204C: sll         $t3, $a0, 24
    ctx->r11 = S32(ctx->r4 << 24);
    // 0x80222050: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80222054: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80222058: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x8022205C: nop

    // 0x80222060: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80222064: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80222068: nop

    // 0x8022206C: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80222070: beql        $a2, $zero, L_802220C0
    if (ctx->r6 == 0) {
        // 0x80222074: mfc1        $a2, $f4
        ctx->r6 = (int32_t)ctx->f4.u32l;
            goto L_802220C0;
    }
    goto skip_2;
    // 0x80222074: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x80222078: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022207C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80222080: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80222084: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80222088: nop

    // 0x8022208C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80222090: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80222094: nop

    // 0x80222098: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8022209C: bne         $a2, $zero, L_802220B4
    if (ctx->r6 != 0) {
        // 0x802220A0: nop
    
            goto L_802220B4;
    }
    // 0x802220A0: nop

    // 0x802220A4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802220A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802220AC: b           L_802220CC
    // 0x802220B0: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_802220CC;
    // 0x802220B0: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_802220B4:
    // 0x802220B4: b           L_802220CC
    // 0x802220B8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_802220CC;
    // 0x802220B8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802220BC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
L_802220C0:
    // 0x802220C0: nop

    // 0x802220C4: bltz        $a2, L_802220B4
    if (SIGNED(ctx->r6) < 0) {
        // 0x802220C8: nop
    
            goto L_802220B4;
    }
    // 0x802220C8: nop

L_802220CC:
    // 0x802220CC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802220D0: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802220D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802220D8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x802220DC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802220E0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802220E4: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x802220E8: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x802220EC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802220F0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802220F4: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x802220F8: nop

    // 0x802220FC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80222100: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80222104: nop

    // 0x80222108: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x8022210C: beql        $a3, $zero, L_8022215C
    if (ctx->r7 == 0) {
        // 0x80222110: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_8022215C;
    }
    goto skip_3;
    // 0x80222110: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x80222114: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80222118: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022211C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80222120: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80222124: nop

    // 0x80222128: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8022212C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80222130: nop

    // 0x80222134: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80222138: bne         $a3, $zero, L_80222150
    if (ctx->r7 != 0) {
        // 0x8022213C: nop
    
            goto L_80222150;
    }
    // 0x8022213C: nop

    // 0x80222140: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80222144: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80222148: b           L_80222168
    // 0x8022214C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_80222168;
    // 0x8022214C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_80222150:
    // 0x80222150: b           L_80222168
    // 0x80222154: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_80222168;
    // 0x80222154: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80222158: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_8022215C:
    // 0x8022215C: nop

    // 0x80222160: bltz        $a3, L_80222150
    if (SIGNED(ctx->r7) < 0) {
        // 0x80222164: nop
    
            goto L_80222150;
    }
    // 0x80222164: nop

L_80222168:
    // 0x80222168: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8022216C: or          $t8, $a3, $zero
    ctx->r24 = ctx->r7 | 0;
    // 0x80222170: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80222174: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80222178: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8022217C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80222180: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x80222184: or          $t3, $t9, $t4
    ctx->r11 = ctx->r25 | ctx->r12;
    // 0x80222188: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8022218C: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80222190: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x80222194: sll         $t6, $a0, 8
    ctx->r14 = S32(ctx->r4 << 8);
    // 0x80222198: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x8022219C: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x802221A0: lui         $t7, 0xF700
    ctx->r15 = S32(0XF700 << 16);
    // 0x802221A4: sra         $t5, $a2, 2
    ctx->r13 = S32(SIGNED(ctx->r6) >> 2);
    // 0x802221A8: andi        $t8, $t6, 0xF800
    ctx->r24 = ctx->r14 & 0XF800;
    // 0x802221AC: andi        $t4, $t9, 0x7C0
    ctx->r12 = ctx->r25 & 0X7C0;
    // 0x802221B0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802221B4: andi        $t7, $t5, 0x3E
    ctx->r15 = ctx->r13 & 0X3E;
    // 0x802221B8: or          $t3, $t8, $t4
    ctx->r11 = ctx->r24 | ctx->r12;
    // 0x802221BC: or          $t6, $t3, $t7
    ctx->r14 = ctx->r11 | ctx->r15;
    // 0x802221C0: andi        $t9, $a3, 0x1
    ctx->r25 = ctx->r7 & 0X1;
    // 0x802221C4: or          $t1, $t6, $t9
    ctx->r9 = ctx->r14 | ctx->r25;
    // 0x802221C8: sll         $t8, $t1, 16
    ctx->r24 = S32(ctx->r9 << 16);
    // 0x802221CC: or          $t4, $t8, $t1
    ctx->r12 = ctx->r24 | ctx->r9;
    // 0x802221D0: jr          $ra
    // 0x802221D4: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    return;
    // 0x802221D4: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
;}
RECOMP_FUNC void D_802A1F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F90: jr          $ra
    // 0x802A1F94: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    return;
    // 0x802A1F94: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void D_802950B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295134: jr          $ra
    // 0x80295138: sw          $a1, 0x190($a0)
    MEM_W(0X190, ctx->r4) = ctx->r5;
    return;
    // 0x80295138: sw          $a1, 0x190($a0)
    MEM_W(0X190, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_80238D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238D44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238D48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80238D4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238D50: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80238D54: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80238D58: jal         0x80245AD0
    // 0x80238D5C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x80238D5C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x80238D60: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80238D64: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80238D68: jal         0x80238E34
    // 0x80238D6C: nop

    static_3_80238E34(rdram, ctx);
        goto after_1;
    // 0x80238D6C: nop

    after_1:
    // 0x80238D70: jal         0x80245B14
    // 0x80238D74: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_80245B14(rdram, ctx);
        goto after_2;
    // 0x80238D74: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80238D78: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80238D7C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80238D80: beq         $v1, $zero, L_80238D90
    if (ctx->r3 == 0) {
        // 0x80238D84: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_80238D90;
    }
    // 0x80238D84: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80238D88: b           L_80238DD4
    // 0x80238D8C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80238DD4;
    // 0x80238D8C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80238D90:
    // 0x80238D90: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x80238D94: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80238D98: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80238D9C: sb          $t8, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r24;
    // 0x80238DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80238DA4: jal         0x802450E8
    // 0x80238DA8: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    static_3_802450E8(rdram, ctx);
        goto after_3;
    // 0x80238DA8: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    after_3:
    // 0x80238DAC: beq         $v0, $zero, L_80238DBC
    if (ctx->r2 == 0) {
        // 0x80238DB0: nop
    
            goto L_80238DBC;
    }
    // 0x80238DB0: nop

    // 0x80238DB4: b           L_80238DD8
    // 0x80238DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80238DD8;
    // 0x80238DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238DBC:
    // 0x80238DBC: jal         0x80245B40
    // 0x80238DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80245B40(rdram, ctx);
        goto after_4;
    // 0x80238DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80238DC4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80238DC8: nop

    // 0x80238DCC: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80238DD0: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_80238DD4:
    // 0x80238DD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80238DD8:
    // 0x80238DD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238DDC: jr          $ra
    // 0x80238DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80238DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802E0A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0A88: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E0A8C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E0A90: jr          $ra
    // 0x802E0A94: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E0A94: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802A20A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A2124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A2128: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A212C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802A2130: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802A2134: addiu       $a2, $a3, 0x2C
    ctx->r6 = ADD32(ctx->r7, 0X2C);
    // 0x802A2138: swc1        $f4, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f4.u32l;
    // 0x802A213C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A2140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A2144: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x802A2148: swc1        $f6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f6.u32l;
    // 0x802A214C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x802A2150: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x802A2154: swc1        $f8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f8.u32l;
    // 0x802A2158: jal         0x8021B4B0
    // 0x802A215C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_8021B4B0(rdram, ctx);
        goto after_0;
    // 0x802A215C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x802A2160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A2164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A2168: jr          $ra
    // 0x802A216C: nop

    return;
    // 0x802A216C: nop

;}
RECOMP_FUNC void D_802018D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802018D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802018D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802018D8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802018DC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802018E0: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x802018E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802018E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802018EC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802018F0: bne         $at, $zero, L_8020191C
    if (ctx->r1 != 0) {
        // 0x802018F4: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8020191C;
    }
    // 0x802018F4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802018F8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802018FC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201900: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201904: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x80201908: jal         0x80231C9C
    // 0x8020190C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x8020190C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80201910: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201914: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201918: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8020191C:
    // 0x8020191C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201920: beq         $at, $zero, L_802019B8
    if (ctx->r1 == 0) {
        // 0x80201924: lwc1        $f4, 0x24($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
            goto L_802019B8;
    }
    // 0x80201924: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201928: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8020192C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80201930: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201934: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201938: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8020193C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201940: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201944: bc1tl       L_80201958
    if (c1cs) {
        // 0x80201948: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80201958;
    }
    goto skip_0;
    // 0x80201948: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x8020194C: jal         0x80231C9C
    // 0x80201950: addiu       $a2, $zero, 0x192
    ctx->r6 = ADD32(0, 0X192);
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80201950: addiu       $a2, $zero, 0x192
    ctx->r6 = ADD32(0, 0X192);
    after_1:
    // 0x80201954: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80201958:
    // 0x80201958: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020195C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201960: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201964: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201968: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8020196C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201970: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201974: bc1tl       L_80201988
    if (c1cs) {
        // 0x80201978: lbu         $t7, 0x23($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X23);
            goto L_80201988;
    }
    goto skip_1;
    // 0x80201978: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    skip_1:
    // 0x8020197C: jal         0x80231C9C
    // 0x80201980: addiu       $a2, $zero, 0x193
    ctx->r6 = ADD32(0, 0X193);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80201980: addiu       $a2, $zero, 0x193
    ctx->r6 = ADD32(0, 0X193);
    after_2:
    // 0x80201984: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
L_80201988:
    // 0x80201988: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8020198C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80201990: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80201994: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201998: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020199C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802019A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802019A4: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802019A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802019AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802019B0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x802019B4: swc1        $f16, 0x78($t9)
    MEM_W(0X78, ctx->r25) = ctx->f16.u32l;
L_802019B8:
    // 0x802019B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802019BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802019C0: jr          $ra
    // 0x802019C4: nop

    return;
    // 0x802019C4: nop

;}
RECOMP_FUNC void D_80205A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205A50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80205A54: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205A58: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205A5C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205A60: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80205A64: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80205A68: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80205A6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80205A70: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205A74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80205A78: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205A80: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80205A84: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80205A88: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80205A8C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80205A90: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80205A94: jal         0x80231C58
    // 0x80205A98: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205A98: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x80205A9C: bne         $v0, $zero, L_80205AAC
    if (ctx->r2 != 0) {
        // 0x80205AA0: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_80205AAC;
    }
    // 0x80205AA0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80205AA4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80205AA8: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
L_80205AAC:
    // 0x80205AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80205AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80205AB4: jr          $ra
    // 0x80205AB8: nop

    return;
    // 0x80205AB8: nop

;}
RECOMP_FUNC void D_802E0D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0D9C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802E0DA0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802E0DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E0DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E0DAC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802E0DB0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802E0DB4: jal         0x8028DA48
    // 0x802E0DB8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028DA48(rdram, ctx);
        goto after_0;
    // 0x802E0DB8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802E0DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E0DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E0DC4: jr          $ra
    // 0x802E0DC8: nop

    return;
    // 0x802E0DC8: nop

;}
