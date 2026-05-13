#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80236CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236CE0: jr          $ra
    // 0x80236CE4: nop

    return;
    // 0x80236CE4: nop

    // 0x80236CE8: jr          $ra
    // 0x80236CEC: nop

    return;
    // 0x80236CEC: nop

;}
RECOMP_FUNC void D_8021F160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F160: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F164: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021F168: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8021F16C: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x8021F170: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F174: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F178: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021F17C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8021F180: jal         0x8022BA58
    // 0x8021F184: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x8021F184: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8021F188: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F18C: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8021F190: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x8021F194: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x8021F198: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8021F19C: jal         0x8022BA58
    // 0x8021F1A0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_1;
    // 0x8021F1A0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x8021F1A4: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F1A8: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x8021F1AC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8021F1B0: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x8021F1B4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8021F1B8: jal         0x8022B780
    // 0x8021F1BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_2;
    // 0x8021F1BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8021F1C0: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F1C4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8021F1C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021F1CC: sll         $t9, $a2, 4
    ctx->r25 = S32(ctx->r6 << 4);
    // 0x8021F1D0: jal         0x8022B780
    // 0x8021F1D4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_3;
    // 0x8021F1D4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_3:
    // 0x8021F1D8: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021F1DC: lhu         $t0, 0x0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X0);
    // 0x8021F1E0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021F1E4: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8021F1E8: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8021F1EC: lh          $t1, 0x0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X0);
    // 0x8021F1F0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F1F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021F1F8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8021F1FC: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x8021F200: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8021F204: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8021F208: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8021F20C: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x8021F210: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F214: blez        $a1, L_8021F268
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021F218: nop
    
            goto L_8021F268;
    }
    // 0x8021F218: nop

    // 0x8021F21C: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
L_8021F220:
    // 0x8021F220: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8021F224: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8021F228: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x8021F22C: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8021F230: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x8021F234: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8021F238: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x8021F23C: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x8021F240: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8021F244: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x8021F248: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x8021F24C: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x8021F250: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x8021F254: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F258: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8021F25C: bnel        $at, $zero, L_8021F220
    if (ctx->r1 != 0) {
        // 0x8021F260: lw          $t5, 0x0($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X0);
            goto L_8021F220;
    }
    goto skip_0;
    // 0x8021F260: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x8021F264: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8021F268:
    // 0x8021F268: blez        $a1, L_8021F2B8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021F26C: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_8021F2B8;
    }
    // 0x8021F26C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8021F270: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
L_8021F274:
    // 0x8021F274: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x8021F278: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8021F27C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8021F280: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8021F284: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x8021F288: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8021F28C: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x8021F290: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x8021F294: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8021F298: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x8021F29C: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x8021F2A0: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x8021F2A4: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x8021F2A8: lhu         $t9, 0x24($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F2AC: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8021F2B0: bnel        $at, $zero, L_8021F274
    if (ctx->r1 != 0) {
        // 0x8021F2B4: lw          $t7, 0x4($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X4);
            goto L_8021F274;
    }
    goto skip_1;
    // 0x8021F2B4: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    skip_1:
L_8021F2B8:
    // 0x8021F2B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021F2BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021F2C0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021F2C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F2C8: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8021F2CC: sh          $zero, 0x0($at)
    MEM_H(0X0, ctx->r1) = 0;
    // 0x8021F2D0: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8021F2D4: lh          $t1, 0x0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X0);
    // 0x8021F2D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F2DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F2E0: sh          $t1, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r9;
    // 0x8021F2E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F2E8: swc1        $f0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f0.u32l;
    // 0x8021F2EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F2F0: swc1        $f0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f0.u32l;
    // 0x8021F2F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F2F8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021F2FC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021F300: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8021F304: jr          $ra
    // 0x8021F308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8021F308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802D22F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D237C: lw          $t6, 0x2928($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2928);
    // 0x802D2380: lw          $v0, 0x2924($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2924);
    // 0x802D2384: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D2388: beql        $t6, $v0, L_802D2414
    if (ctx->r14 == ctx->r2) {
        // 0x802D238C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D2414;
    }
    goto skip_0;
    // 0x802D238C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D2390: lbu         $t7, 0x14($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X14);
    // 0x802D2394: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802D2398: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D239C: bnel        $t7, $zero, L_802D23CC
    if (ctx->r15 != 0) {
        // 0x802D23A0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802D23CC;
    }
    goto skip_1;
    // 0x802D23A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_1:
    // 0x802D23A4: sb          $t8, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r24;
    // 0x802D23A8: jal         0x80207130
    // 0x802D23AC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802D23AC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x802D23B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D23B4: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x802D23B8: lw          $t9, 0x2924($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2924);
    // 0x802D23BC: jal         0x80302C68
    // 0x802D23C0: swc1        $f4, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f4.u32l;
    static_3_80302C68(rdram, ctx);
        goto after_1;
    // 0x802D23C0: swc1        $f4, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f4.u32l;
    after_1:
    // 0x802D23C4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802D23C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_802D23CC:
    // 0x802D23CC: jal         0x80207130
    // 0x802D23D0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_80207130(rdram, ctx);
        goto after_2;
    // 0x802D23D0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x802D23D4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802D23D8: lw          $v0, 0x2924($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X2924);
    // 0x802D23DC: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x802D23E0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802D23E4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802D23E8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802D23EC: sub.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d - ctx->f16.d;
    // 0x802D23F0: c.lt.d      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.d < ctx->f18.d;
    // 0x802D23F4: nop

    // 0x802D23F8: bc1fl       L_802D2414
    if (!c1cs) {
        // 0x802D23FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D2414;
    }
    goto skip_2;
    // 0x802D23FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x802D2400: sb          $zero, 0x14($v0)
    MEM_B(0X14, ctx->r2) = 0;
    // 0x802D2404: lw          $t0, 0x2924($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X2924);
    // 0x802D2408: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x802D240C: sw          $t1, 0x2924($a1)
    MEM_W(0X2924, ctx->r5) = ctx->r9;
    // 0x802D2410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D2414:
    // 0x802D2414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2418: jr          $ra
    // 0x802D241C: nop

    return;
    // 0x802D241C: nop

;}
RECOMP_FUNC void D_802D8018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8098: jr          $ra
    // 0x802D809C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    return;
    // 0x802D809C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
;}
RECOMP_FUNC void D_802E6F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6F9C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802E6FA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802E6FA4: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x802E6FA8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x802E6FAC: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x802E6FB0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x802E6FB4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802E6FB8: beq         $v0, $at, L_802E73F4
    if (ctx->r2 == ctx->r1) {
        // 0x802E6FBC: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_802E73F4;
    }
    // 0x802E6FBC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802E6FC0: beql        $v0, $at, L_802E73F8
    if (ctx->r2 == ctx->r1) {
        // 0x802E6FC4: lw          $t3, 0x68($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X68);
            goto L_802E73F8;
    }
    goto skip_0;
    // 0x802E6FC4: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    skip_0:
    // 0x802E6FC8: lw          $a2, 0x20($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X20);
    // 0x802E6FCC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802E6FD0: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802E6FD4: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x802E6FD8: bnel        $a0, $zero, L_802E6FEC
    if (ctx->r4 != 0) {
        // 0x802E6FDC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802E6FEC;
    }
    goto skip_1;
    // 0x802E6FDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_1:
    // 0x802E6FE0: b           L_802E7008
    // 0x802E6FE4: lw          $a3, 0x20($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X20);
        goto L_802E7008;
    // 0x802E6FE4: lw          $a3, 0x20($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X20);
    // 0x802E6FE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_802E6FEC:
    // 0x802E6FEC: bne         $a0, $at, L_802E6FFC
    if (ctx->r4 != ctx->r1) {
        // 0x802E6FF0: lui         $a3, 0x0
        ctx->r7 = S32(0X0 << 16);
            goto L_802E6FFC;
    }
    // 0x802E6FF0: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E6FF4: b           L_802E7008
    // 0x802E6FF8: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
        goto L_802E7008;
    // 0x802E6FF8: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_802E6FFC:
    // 0x802E6FFC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802E7000: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802E7004: lw          $a3, 0x20($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X20);
L_802E7008:
    // 0x802E7008: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802E700C: jal         0x80223FC4
    // 0x802E7010: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80223FC4(rdram, ctx);
        goto after_0;
    // 0x802E7010: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x802E7014: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x802E7018: sb          $v0, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r2;
    // 0x802E701C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802E7020: lw          $a2, 0x20($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X20);
    // 0x802E7024: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802E7028: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x802E702C: bnel        $a0, $zero, L_802E7040
    if (ctx->r4 != 0) {
        // 0x802E7030: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802E7040;
    }
    goto skip_2;
    // 0x802E7030: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_2:
    // 0x802E7034: b           L_802E7054
    // 0x802E7038: lw          $a3, 0x2C($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X2C);
        goto L_802E7054;
    // 0x802E7038: lw          $a3, 0x2C($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X2C);
    // 0x802E703C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_802E7040:
    // 0x802E7040: bne         $a0, $at, L_802E7050
    if (ctx->r4 != ctx->r1) {
        // 0x802E7044: lui         $a3, 0x0
        ctx->r7 = S32(0X0 << 16);
            goto L_802E7050;
    }
    // 0x802E7044: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E7048: b           L_802E7054
    // 0x802E704C: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
        goto L_802E7054;
    // 0x802E704C: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_802E7050:
    // 0x802E7050: lw          $a3, 0x2C($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X2C);
L_802E7054:
    // 0x802E7054: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802E7058: jal         0x80223FC4
    // 0x802E705C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80223FC4(rdram, ctx);
        goto after_1;
    // 0x802E705C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x802E7060: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x802E7064: sb          $v0, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r2;
    // 0x802E7068: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802E706C: lw          $a2, 0x20($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X20);
    // 0x802E7070: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802E7074: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x802E7078: bnel        $a0, $zero, L_802E708C
    if (ctx->r4 != 0) {
        // 0x802E707C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802E708C;
    }
    goto skip_3;
    // 0x802E707C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_3:
    // 0x802E7080: b           L_802E70A0
    // 0x802E7084: lw          $a3, 0x24($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X24);
        goto L_802E70A0;
    // 0x802E7084: lw          $a3, 0x24($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X24);
    // 0x802E7088: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_802E708C:
    // 0x802E708C: bne         $a0, $at, L_802E709C
    if (ctx->r4 != ctx->r1) {
        // 0x802E7090: lui         $a3, 0x0
        ctx->r7 = S32(0X0 << 16);
            goto L_802E709C;
    }
    // 0x802E7090: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E7094: b           L_802E70A0
    // 0x802E7098: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
        goto L_802E70A0;
    // 0x802E7098: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_802E709C:
    // 0x802E709C: lw          $a3, 0x24($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X24);
L_802E70A0:
    // 0x802E70A0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802E70A4: jal         0x80223FC4
    // 0x802E70A8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80223FC4(rdram, ctx);
        goto after_2;
    // 0x802E70A8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_2:
    // 0x802E70AC: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x802E70B0: sb          $v0, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r2;
    // 0x802E70B4: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802E70B8: lw          $a2, 0x20($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X20);
    // 0x802E70BC: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802E70C0: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x802E70C4: bnel        $a0, $zero, L_802E70D8
    if (ctx->r4 != 0) {
        // 0x802E70C8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802E70D8;
    }
    goto skip_4;
    // 0x802E70C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_4:
    // 0x802E70CC: b           L_802E70EC
    // 0x802E70D0: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
        goto L_802E70EC;
    // 0x802E70D0: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
    // 0x802E70D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_802E70D8:
    // 0x802E70D8: bne         $a0, $at, L_802E70E8
    if (ctx->r4 != ctx->r1) {
        // 0x802E70DC: lui         $a3, 0x0
        ctx->r7 = S32(0X0 << 16);
            goto L_802E70E8;
    }
    // 0x802E70DC: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E70E0: b           L_802E70EC
    // 0x802E70E4: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
        goto L_802E70EC;
    // 0x802E70E4: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_802E70E8:
    // 0x802E70E8: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
L_802E70EC:
    // 0x802E70EC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802E70F0: jal         0x80223FC4
    // 0x802E70F4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80223FC4(rdram, ctx);
        goto after_3;
    // 0x802E70F4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_3:
    // 0x802E70F8: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x802E70FC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802E7100: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802E7104: lw          $a2, 0x20($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X20);
    // 0x802E7108: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x802E710C: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x802E7110: bnel        $a0, $zero, L_802E7124
    if (ctx->r4 != 0) {
        // 0x802E7114: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802E7124;
    }
    goto skip_5;
    // 0x802E7114: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_5:
    // 0x802E7118: b           L_802E7138
    // 0x802E711C: lw          $a3, 0x30($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X30);
        goto L_802E7138;
    // 0x802E711C: lw          $a3, 0x30($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X30);
    // 0x802E7120: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_802E7124:
    // 0x802E7124: bne         $a0, $at, L_802E7134
    if (ctx->r4 != ctx->r1) {
        // 0x802E7128: lui         $a3, 0x0
        ctx->r7 = S32(0X0 << 16);
            goto L_802E7134;
    }
    // 0x802E7128: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E712C: b           L_802E7138
    // 0x802E7130: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
        goto L_802E7138;
    // 0x802E7130: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_802E7134:
    // 0x802E7134: lw          $a3, 0x30($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X30);
L_802E7138:
    // 0x802E7138: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802E713C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x802E7140: jal         0x80223FC4
    // 0x802E7144: sb          $t2, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r10;
    static_3_80223FC4(rdram, ctx);
        goto after_4;
    // 0x802E7144: sb          $t2, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r10;
    after_4:
    // 0x802E7148: lbu         $t5, 0x67($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X67);
    // 0x802E714C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x802E7150: lbu         $t2, 0x64($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X64);
    // 0x802E7154: beql        $t5, $zero, L_802E71D0
    if (ctx->r13 == 0) {
        // 0x802E7158: lbu         $t9, 0x66($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X66);
            goto L_802E71D0;
    }
    goto skip_6;
    // 0x802E7158: lbu         $t9, 0x66($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X66);
    skip_6:
    // 0x802E715C: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x802E7160: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802E7164: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7168: bne         $t6, $at, L_802E71C4
    if (ctx->r14 != ctx->r1) {
        // 0x802E716C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_802E71C4;
    }
    // 0x802E716C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802E7170: jal         0x802AEE80
    // 0x802E7174: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEE80(rdram, ctx);
        goto after_5;
    // 0x802E7174: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_5:
    // 0x802E7178: beq         $v0, $zero, L_802E719C
    if (ctx->r2 == 0) {
        // 0x802E717C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E719C;
    }
    // 0x802E717C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7180: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7184: jal         0x802AEE80
    // 0x802E7188: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEE80(rdram, ctx);
        goto after_6;
    // 0x802E7188: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_6:
    // 0x802E718C: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x802E7190: sw          $v0, 0xE8($t7)
    MEM_W(0XE8, ctx->r15) = ctx->r2;
    // 0x802E7194: b           L_802E7338
    // 0x802E7198: sb          $zero, 0xEC($t7)
    MEM_B(0XEC, ctx->r15) = 0;
        goto L_802E7338;
    // 0x802E7198: sb          $zero, 0xEC($t7)
    MEM_B(0XEC, ctx->r15) = 0;
L_802E719C:
    // 0x802E719C: jal         0x802AED58
    // 0x802E71A0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AED58(rdram, ctx);
        goto after_7;
    // 0x802E71A0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_7:
    // 0x802E71A4: beq         $v0, $zero, L_802E7338
    if (ctx->r2 == 0) {
        // 0x802E71A8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E7338;
    }
    // 0x802E71A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E71AC: jal         0x802AED58
    // 0x802E71B0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AED58(rdram, ctx);
        goto after_8;
    // 0x802E71B0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_8:
    // 0x802E71B4: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x802E71B8: sw          $v0, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r2;
    // 0x802E71BC: b           L_802E7338
    // 0x802E71C0: sb          $zero, 0xEC($v1)
    MEM_B(0XEC, ctx->r3) = 0;
        goto L_802E7338;
    // 0x802E71C0: sb          $zero, 0xEC($v1)
    MEM_B(0XEC, ctx->r3) = 0;
L_802E71C4:
    // 0x802E71C4: b           L_802E7338
    // 0x802E71C8: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
        goto L_802E7338;
    // 0x802E71C8: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x802E71CC: lbu         $t9, 0x66($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X66);
L_802E71D0:
    // 0x802E71D0: lbu         $t6, 0x65($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X65);
    // 0x802E71D4: beq         $t9, $zero, L_802E7210
    if (ctx->r25 == 0) {
        // 0x802E71D8: nop
    
            goto L_802E7210;
    }
    // 0x802E71D8: nop

    // 0x802E71DC: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x802E71E0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802E71E4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x802E71E8: bne         $t3, $at, L_802E7208
    if (ctx->r11 != ctx->r1) {
        // 0x802E71EC: nop
    
            goto L_802E7208;
    }
    // 0x802E71EC: nop

    // 0x802E71F0: jal         0x80319660
    // 0x802E71F4: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    static_3_80319660(rdram, ctx);
        goto after_9;
    // 0x802E71F4: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    after_9:
    // 0x802E71F8: beq         $v0, $zero, L_802E7338
    if (ctx->r2 == 0) {
        // 0x802E71FC: lw          $t4, 0x68($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X68);
            goto L_802E7338;
    }
    // 0x802E71FC: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x802E7200: b           L_802E7338
    // 0x802E7204: sw          $v0, 0xE8($t4)
    MEM_W(0XE8, ctx->r12) = ctx->r2;
        goto L_802E7338;
    // 0x802E7204: sw          $v0, 0xE8($t4)
    MEM_W(0XE8, ctx->r12) = ctx->r2;
L_802E7208:
    // 0x802E7208: b           L_802E7338
    // 0x802E720C: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
        goto L_802E7338;
    // 0x802E720C: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
L_802E7210:
    // 0x802E7210: beq         $t6, $zero, L_802E72BC
    if (ctx->r14 == 0) {
        // 0x802E7214: nop
    
            goto L_802E72BC;
    }
    // 0x802E7214: nop

    // 0x802E7218: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x802E721C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x802E7220: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x802E7224: beq         $a2, $a1, L_802E7234
    if (ctx->r6 == ctx->r5) {
        // 0x802E7228: lw          $a0, 0x68($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X68);
            goto L_802E7234;
    }
    // 0x802E7228: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x802E722C: bne         $t0, $a1, L_802E729C
    if (ctx->r8 != ctx->r5) {
        // 0x802E7230: lw          $t4, 0x68($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X68);
            goto L_802E729C;
    }
    // 0x802E7230: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
L_802E7234:
    // 0x802E7234: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x802E7238: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x802E723C: lbu         $t8, 0xEC($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XEC);
    // 0x802E7240: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x802E7244: bne         $t8, $zero, L_802E7258
    if (ctx->r24 != 0) {
        // 0x802E7248: nop
    
            goto L_802E7258;
    }
    // 0x802E7248: nop

    // 0x802E724C: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x802E7250: bne         $v1, $zero, L_802E7278
    if (ctx->r3 != 0) {
        // 0x802E7254: nop
    
            goto L_802E7278;
    }
    // 0x802E7254: nop

L_802E7258:
    // 0x802E7258: jal         0x80319318
    // 0x802E725C: nop

    static_3_80319318(rdram, ctx);
        goto after_10;
    // 0x802E725C: nop

    after_10:
    // 0x802E7260: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x802E7264: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x802E7268: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x802E726C: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x802E7270: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802E7274: sw          $v0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r2;
L_802E7278:
    // 0x802E7278: bne         $v1, $zero, L_802E7338
    if (ctx->r3 != 0) {
        // 0x802E727C: nop
    
            goto L_802E7338;
    }
    // 0x802E727C: nop

    // 0x802E7280: lw          $t3, 0xF0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XF0);
    // 0x802E7284: bne         $a2, $t3, L_802E7294
    if (ctx->r6 != ctx->r11) {
        // 0x802E7288: nop
    
            goto L_802E7294;
    }
    // 0x802E7288: nop

    // 0x802E728C: b           L_802E7338
    // 0x802E7290: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
        goto L_802E7338;
    // 0x802E7290: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
L_802E7294:
    // 0x802E7294: b           L_802E7338
    // 0x802E7298: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
        goto L_802E7338;
    // 0x802E7298: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_802E729C:
    // 0x802E729C: lw          $t5, 0xF0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XF0);
    // 0x802E72A0: bnel        $a2, $t5, L_802E72B4
    if (ctx->r6 != ctx->r13) {
        // 0x802E72A4: sw          $t0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r8;
            goto L_802E72B4;
    }
    goto skip_7;
    // 0x802E72A4: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    skip_7:
    // 0x802E72A8: b           L_802E72B4
    // 0x802E72AC: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
        goto L_802E72B4;
    // 0x802E72AC: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x802E72B0: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_802E72B4:
    // 0x802E72B4: b           L_802E7338
    // 0x802E72B8: nop

        goto L_802E7338;
    // 0x802E72B8: nop

L_802E72BC:
    // 0x802E72BC: beq         $t2, $zero, L_802E72F8
    if (ctx->r10 == 0) {
        // 0x802E72C0: andi        $t9, $v0, 0xFF
        ctx->r25 = ctx->r2 & 0XFF;
            goto L_802E72F8;
    }
    // 0x802E72C0: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x802E72C4: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x802E72C8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802E72CC: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802E72D0: bne         $t6, $at, L_802E72F0
    if (ctx->r14 != ctx->r1) {
        // 0x802E72D4: nop
    
            goto L_802E72F0;
    }
    // 0x802E72D4: nop

    // 0x802E72D8: jal         0x80319950
    // 0x802E72DC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    static_3_80319950(rdram, ctx);
        goto after_11;
    // 0x802E72DC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    after_11:
    // 0x802E72E0: beq         $v0, $zero, L_802E7338
    if (ctx->r2 == 0) {
        // 0x802E72E4: lw          $t7, 0x68($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X68);
            goto L_802E7338;
    }
    // 0x802E72E4: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x802E72E8: b           L_802E7338
    // 0x802E72EC: sw          $v0, 0xE8($t7)
    MEM_W(0XE8, ctx->r15) = ctx->r2;
        goto L_802E7338;
    // 0x802E72EC: sw          $v0, 0xE8($t7)
    MEM_W(0XE8, ctx->r15) = ctx->r2;
L_802E72F0:
    // 0x802E72F0: b           L_802E7338
    // 0x802E72F4: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
        goto L_802E7338;
    // 0x802E72F4: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
L_802E72F8:
    // 0x802E72F8: beq         $t9, $zero, L_802E7338
    if (ctx->r25 == 0) {
        // 0x802E72FC: nop
    
            goto L_802E7338;
    }
    // 0x802E72FC: nop

    // 0x802E7300: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x802E7304: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x802E7308: beq         $a1, $zero, L_802E7338
    if (ctx->r5 == 0) {
        // 0x802E730C: nop
    
            goto L_802E7338;
    }
    // 0x802E730C: nop

    // 0x802E7310: beq         $a1, $a2, L_802E732C
    if (ctx->r5 == ctx->r6) {
        // 0x802E7314: addiu       $t0, $zero, 0xB
        ctx->r8 = ADD32(0, 0XB);
            goto L_802E732C;
    }
    // 0x802E7314: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x802E7318: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x802E731C: beql        $a1, $t0, L_802E7338
    if (ctx->r5 == ctx->r8) {
        // 0x802E7320: sw          $a2, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r6;
            goto L_802E7338;
    }
    goto skip_8;
    // 0x802E7320: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    skip_8:
    // 0x802E7324: b           L_802E7338
    // 0x802E7328: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
        goto L_802E7338;
    // 0x802E7328: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_802E732C:
    // 0x802E732C: b           L_802E7338
    // 0x802E7330: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
        goto L_802E7338;
    // 0x802E7330: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x802E7334: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
L_802E7338:
    // 0x802E7338: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802E733C: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802E7340: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802E7344: bne         $t3, $at, L_802E73F4
    if (ctx->r11 != ctx->r1) {
        // 0x802E7348: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E73F4;
    }
    // 0x802E7348: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E734C: jal         0x802AED98
    // 0x802E7350: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AED98(rdram, ctx);
        goto after_12;
    // 0x802E7350: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_12:
    // 0x802E7354: lw          $v1, 0x6C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X6C);
    // 0x802E7358: lw          $t9, 0xAC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XAC);
    // 0x802E735C: lh          $t4, 0xA8($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XA8);
    // 0x802E7360: jalr        $t9
    // 0x802E7364: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x802E7364: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    after_13:
    // 0x802E7368: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802E736C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x802E7370: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x802E7374: beq         $v0, $at, L_802E73F4
    if (ctx->r2 == ctx->r1) {
        // 0x802E7378: lw          $t1, 0x70($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X70);
            goto L_802E73F4;
    }
    // 0x802E7378: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x802E737C: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x802E7380: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802E7384: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x802E7388: beq         $a1, $at, L_802E7398
    if (ctx->r5 == ctx->r1) {
        // 0x802E738C: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_802E7398;
    }
    // 0x802E738C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802E7390: bne         $a1, $at, L_802E73A0
    if (ctx->r5 != ctx->r1) {
        // 0x802E7394: nop
    
            goto L_802E73A0;
    }
    // 0x802E7394: nop

L_802E7398:
    // 0x802E7398: b           L_802E73F4
    // 0x802E739C: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
        goto L_802E73F4;
    // 0x802E739C: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
L_802E73A0:
    // 0x802E73A0: bne         $a1, $zero, L_802E73B0
    if (ctx->r5 != 0) {
        // 0x802E73A4: nop
    
            goto L_802E73B0;
    }
    // 0x802E73A4: nop

    // 0x802E73A8: b           L_802E73F4
    // 0x802E73AC: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
        goto L_802E73F4;
    // 0x802E73AC: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
L_802E73B0:
    // 0x802E73B0: bne         $t0, $a1, L_802E73C0
    if (ctx->r8 != ctx->r5) {
        // 0x802E73B4: lw          $t6, 0x68($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X68);
            goto L_802E73C0;
    }
    // 0x802E73B4: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x802E73B8: b           L_802E73F4
    // 0x802E73BC: sw          $t0, 0xF0($t6)
    MEM_W(0XF0, ctx->r14) = ctx->r8;
        goto L_802E73F4;
    // 0x802E73BC: sw          $t0, 0xF0($t6)
    MEM_W(0XF0, ctx->r14) = ctx->r8;
L_802E73C0:
    // 0x802E73C0: bne         $a2, $a1, L_802E73D4
    if (ctx->r6 != ctx->r5) {
        // 0x802E73C4: lw          $t8, 0x68($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X68);
            goto L_802E73D4;
    }
    // 0x802E73C4: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x802E73C8: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x802E73CC: b           L_802E73F4
    // 0x802E73D0: sw          $a2, 0xF0($t7)
    MEM_W(0XF0, ctx->r15) = ctx->r6;
        goto L_802E73F4;
    // 0x802E73D0: sw          $a2, 0xF0($t7)
    MEM_W(0XF0, ctx->r15) = ctx->r6;
L_802E73D4:
    // 0x802E73D4: lw          $v0, 0xF0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XF0);
    // 0x802E73D8: bne         $t0, $v0, L_802E73E8
    if (ctx->r8 != ctx->r2) {
        // 0x802E73DC: nop
    
            goto L_802E73E8;
    }
    // 0x802E73DC: nop

    // 0x802E73E0: b           L_802E73F4
    // 0x802E73E4: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
        goto L_802E73F4;
    // 0x802E73E4: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_802E73E8:
    // 0x802E73E8: bnel        $a2, $v0, L_802E73F8
    if (ctx->r6 != ctx->r2) {
        // 0x802E73EC: lw          $t3, 0x68($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X68);
            goto L_802E73F8;
    }
    goto skip_9;
    // 0x802E73EC: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    skip_9:
    // 0x802E73F0: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
L_802E73F4:
    // 0x802E73F4: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
L_802E73F8:
    // 0x802E73F8: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802E73FC: lw          $a3, 0x1A0($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X1A0);
    // 0x802E7400: lw          $t9, 0x64($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X64);
    // 0x802E7404: lh          $t4, 0x60($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X60);
    // 0x802E7408: jalr        $t9
    // 0x802E740C: addu        $a0, $t4, $t3
    ctx->r4 = ADD32(ctx->r12, ctx->r11);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x802E740C: addu        $a0, $t4, $t3
    ctx->r4 = ADD32(ctx->r12, ctx->r11);
    after_14:
    // 0x802E7410: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x802E7414: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x802E7418: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x802E741C: beq         $a2, $a1, L_802E7488
    if (ctx->r6 == ctx->r5) {
        // 0x802E7420: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802E7488;
    }
    // 0x802E7420: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E7424: beq         $a1, $at, L_802E7488
    if (ctx->r5 == ctx->r1) {
        // 0x802E7428: lw          $a0, 0x6C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X6C);
            goto L_802E7488;
    }
    // 0x802E7428: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x802E742C: addiu       $t5, $sp, 0x3C
    ctx->r13 = ADD32(ctx->r29, 0X3C);
    // 0x802E7430: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x802E7434: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x802E7438: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802E743C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802E7440: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802E7444: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x802E7448: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x802E744C: jal         0x802CF1C8
    // 0x802E7450: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    static_3_802CF1C8(rdram, ctx);
        goto after_15;
    // 0x802E7450: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_15:
    // 0x802E7454: jal         0x8022970C
    // 0x802E7458: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x802E7458: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    after_16:
    // 0x802E745C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x802E7460: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x802E7464: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x802E7468: jal         0x8022A0D0
    // 0x802E746C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802E746C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_17:
    // 0x802E7470: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x802E7474: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802E7478: jal         0x802D01D4
    // 0x802E747C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_18;
    // 0x802E747C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_18:
    // 0x802E7480: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x802E7484: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
L_802E7488:
    // 0x802E7488: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x802E748C: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x802E7490: lw          $a3, 0x1A0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1A0);
    // 0x802E7494: lw          $t9, 0xC($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XC);
    // 0x802E7498: lh          $t8, 0x8($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X8);
    // 0x802E749C: jalr        $t9
    // 0x802E74A0: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x802E74A0: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_19:
    // 0x802E74A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802E74A8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x802E74AC: jr          $ra
    // 0x802E74B0: nop

    return;
    // 0x802E74B0: nop

;}
RECOMP_FUNC void D_80292C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292CB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80292CB8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80292CBC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80292CC0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80292CC4: lw          $v1, 0xE4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE4);
    // 0x80292CC8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x80292CCC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80292CD0: blezl       $v1, L_80292DC8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80292CD4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80292DC8;
    }
    goto skip_0;
    // 0x80292CD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80292CD8: lwc1        $f4, 0xF0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XF0);
    // 0x80292CDC: lwc1        $f6, 0x168($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X168);
    // 0x80292CE0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80292CE4: c.le.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl <= ctx->f20.fl;
    // 0x80292CE8: nop

    // 0x80292CEC: bc1fl       L_80292DC8
    if (!c1cs) {
        // 0x80292CF0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80292DC8;
    }
    goto skip_1;
    // 0x80292CF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x80292CF4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80292CF8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80292CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80292D00: beq         $v0, $at, L_80292D24
    if (ctx->r2 == ctx->r1) {
        // 0x80292D04: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_80292D24;
    }
    // 0x80292D04: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80292D08: beq         $v0, $at, L_80292D44
    if (ctx->r2 == ctx->r1) {
        // 0x80292D0C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80292D44;
    }
    // 0x80292D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80292D10: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80292D14: beq         $v0, $at, L_80292D80
    if (ctx->r2 == ctx->r1) {
        // 0x80292D18: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80292D80;
    }
    // 0x80292D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80292D1C: b           L_80292DBC
    // 0x80292D20: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
        goto L_80292DBC;
    // 0x80292D20: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
L_80292D24:
    // 0x80292D24: jal         0x802C5844
    // 0x80292D28: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    static_3_802C5844(rdram, ctx);
        goto after_0;
    // 0x80292D28: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x80292D2C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80292D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80292D34: jal         0x802C2374
    // 0x80292D38: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_802C2374(rdram, ctx);
        goto after_1;
    // 0x80292D38: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x80292D3C: b           L_80292DB8
    // 0x80292D40: lw          $v1, 0xE4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE4);
        goto L_80292DB8;
    // 0x80292D40: lw          $v1, 0xE4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE4);
L_80292D44:
    // 0x80292D44: jal         0x802C5844
    // 0x80292D48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802C5844(rdram, ctx);
        goto after_2;
    // 0x80292D48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80292D4C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80292D50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80292D54: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80292D58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80292D5C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80292D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80292D64: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80292D68: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80292D6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80292D70: jal         0x802C21C8
    // 0x80292D74: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    static_3_802C21C8(rdram, ctx);
        goto after_3;
    // 0x80292D74: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80292D78: b           L_80292DB8
    // 0x80292D7C: lw          $v1, 0xE4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE4);
        goto L_80292DB8;
    // 0x80292D7C: lw          $v1, 0xE4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE4);
L_80292D80:
    // 0x80292D80: jal         0x802C5844
    // 0x80292D84: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    static_3_802C5844(rdram, ctx);
        goto after_4;
    // 0x80292D84: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x80292D88: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80292D8C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80292D90: lui         $at, 0x42AF
    ctx->r1 = S32(0X42AF << 16);
    // 0x80292D94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80292D98: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80292D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80292DA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80292DA4: lui         $a3, 0x3F40
    ctx->r7 = S32(0X3F40 << 16);
    // 0x80292DA8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80292DAC: jal         0x802C21C8
    // 0x80292DB0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    static_3_802C21C8(rdram, ctx);
        goto after_5;
    // 0x80292DB0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80292DB4: lw          $v1, 0xE4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE4);
L_80292DB8:
    // 0x80292DB8: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
L_80292DBC:
    // 0x80292DBC: sw          $t6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r14;
    // 0x80292DC0: swc1        $f20, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f20.u32l;
    // 0x80292DC4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80292DC8:
    // 0x80292DC8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80292DCC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80292DD0: jr          $ra
    // 0x80292DD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80292DD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_80281AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281B50: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x80281B54: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80281B58: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80281B5C: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x80281B60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80281B64: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x80281B68: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80281B6C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80281B70: jal         0x80316B90
    // 0x80281B74: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    static_3_80316B90(rdram, ctx);
        goto after_0;
    // 0x80281B74: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    after_0:
    // 0x80281B78: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80281B7C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80281B80: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80281B84: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80281B88: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80281B8C: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x80281B90: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80281B94: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x80281B98: nop

    // 0x80281B9C: bc1fl       L_80281C50
    if (!c1cs) {
        // 0x80281BA0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80281C50;
    }
    goto skip_0;
    // 0x80281BA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80281BA4: lbu         $t6, 0x555($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X555);
    // 0x80281BA8: swc1        $f2, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f2.u32l;
    // 0x80281BAC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80281BB0: bne         $t6, $zero, L_80281C4C
    if (ctx->r14 != 0) {
        // 0x80281BB4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80281C4C;
    }
    // 0x80281BB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80281BB8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281BBC: sb          $t7, 0x555($a0)
    MEM_B(0X555, ctx->r4) = ctx->r15;
    // 0x80281BC0: sb          $zero, 0x554($a0)
    MEM_B(0X554, ctx->r4) = 0;
    // 0x80281BC4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80281BC8: swc1        $f10, 0x548($a0)
    MEM_W(0X548, ctx->r4) = ctx->f10.u32l;
    // 0x80281BCC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80281BD0:
    // 0x80281BD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80281BD4: sw          $zero, 0x54C($v1)
    MEM_W(0X54C, ctx->r3) = 0;
    // 0x80281BD8: bne         $v0, $a0, L_80281BD0
    if (ctx->r2 != ctx->r4) {
        // 0x80281BDC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80281BD0;
    }
    // 0x80281BDC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80281BE0: jal         0x8022970C
    // 0x80281BE4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x80281BE4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x80281BE8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80281BEC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80281BF0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80281BF4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80281BF8: jal         0x802AAA30
    // 0x80281BFC: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    static_3_802AAA30(rdram, ctx);
        goto after_2;
    // 0x80281BFC: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80281C00: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x80281C04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80281C08: jal         0x80289C5C
    // 0x80281C0C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    static_3_80289C5C(rdram, ctx);
        goto after_3;
    // 0x80281C0C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_3:
    // 0x80281C10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80281C14: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80281C18: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80281C1C: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80281C20: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80281C24: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80281C28: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x80281C2C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80281C30: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80281C34: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x80281C38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80281C3C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80281C40: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80281C44: jal         0x80289E78
    // 0x80281C48: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    static_3_80289E78(rdram, ctx);
        goto after_4;
    // 0x80281C48: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_4:
L_80281C4C:
    // 0x80281C4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80281C50:
    // 0x80281C50: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80281C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80281C58: jr          $ra
    // 0x80281C5C: nop

    return;
    // 0x80281C5C: nop

;}
RECOMP_FUNC void D_80282DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282E44: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80282E48: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80282E4C: lh          $t6, 0x158($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X158);
    // 0x80282E50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80282E54: bgez        $t6, L_80282E64
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80282E58: nop
    
            goto L_80282E64;
    }
    // 0x80282E58: nop

    // 0x80282E5C: jr          $ra
    // 0x80282E60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80282E60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80282E64:
    // 0x80282E64: jr          $ra
    // 0x80282E68: nop

    return;
    // 0x80282E68: nop

;}
RECOMP_FUNC void D_8023F860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F860: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023F864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F868: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023F86C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8023F870: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023F874: beql        $t6, $zero, L_8023F8D8
    if (ctx->r14 == 0) {
        // 0x8023F878: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023F8D8;
    }
    goto skip_0;
    // 0x8023F878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F87C: jal         0x80237840
    // 0x8023F880: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80237840(rdram, ctx);
        goto after_0;
    // 0x8023F880: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023F884: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F888: beq         $v0, $zero, L_8023F8D4
    if (ctx->r2 == 0) {
        // 0x8023F88C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023F8D4;
    }
    // 0x8023F88C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F890: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023F894: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8023F898: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x8023F89C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8023F8A0: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8023F8A4: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8023F8A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F8AC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8023F8B0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023F8B4: lbu         $t3, 0x23($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X23);
    // 0x8023F8B8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023F8BC: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x8023F8C0: lw          $t4, 0x8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X8);
    // 0x8023F8C4: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x8023F8C8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F8CC: jalr        $t9
    // 0x8023F8D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023F8D0: nop

    after_1:
L_8023F8D4:
    // 0x8023F8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F8D8:
    // 0x8023F8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023F8DC: jr          $ra
    // 0x8023F8E0: nop

    return;
    // 0x8023F8E0: nop

;}
RECOMP_FUNC void D_802A2284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A2308: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A230C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A2310: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A2314: jal         0x802AED90
    // 0x802A2318: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AED90(rdram, ctx);
        goto after_0;
    // 0x802A2318: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x802A231C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802A2320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A2324: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A2328: lwc1        $f2, 0xD4($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x802A232C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x802A2330: nop

    // 0x802A2334: bc1f        L_802A235C
    if (!c1cs) {
        // 0x802A2338: nop
    
            goto L_802A235C;
    }
    // 0x802A2338: nop

    // 0x802A233C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A2340: nop

    // 0x802A2344: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x802A2348: nop

    // 0x802A234C: bc1t        L_802A235C
    if (c1cs) {
        // 0x802A2350: nop
    
            goto L_802A235C;
    }
    // 0x802A2350: nop

    // 0x802A2354: b           L_802A235C
    // 0x802A2358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A235C;
    // 0x802A2358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A235C:
    // 0x802A235C: jr          $ra
    // 0x802A2360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802A2360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_8022CF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CF5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CF60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CF64: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022CF68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CF6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CF70: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8022CF74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CF78: jal         0x8022D560
    // 0x8022CF7C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    static_3_8022D560(rdram, ctx);
        goto after_0;
    // 0x8022CF7C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_0:
    // 0x8022CF80: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022CF84: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8022CF88: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x8022CF8C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022CF90: beql        $t6, $at, L_8022CFB0
    if (ctx->r14 == ctx->r1) {
        // 0x8022CF94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022CFB0;
    }
    goto skip_0;
    // 0x8022CF94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022CF98: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x8022CF9C: bnel        $t7, $zero, L_8022CFB0
    if (ctx->r15 != 0) {
        // 0x8022CFA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022CFB0;
    }
    goto skip_1;
    // 0x8022CFA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8022CFA4: jal         0x8022C480
    // 0x8022CFA8: nop

    static_3_8022C480(rdram, ctx);
        goto after_1;
    // 0x8022CFA8: nop

    after_1:
    // 0x8022CFAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022CFB0:
    // 0x8022CFB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022CFB4: jr          $ra
    // 0x8022CFB8: nop

    return;
    // 0x8022CFB8: nop

;}
RECOMP_FUNC void D_80299900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299980: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80299984: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80299988: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8029998C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80299990: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80299994: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80299998: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8029999C: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x802999A0: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x802999A4: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
    // 0x802999A8: sb          $t0, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r8;
    // 0x802999AC: sb          $zero, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = 0;
    // 0x802999B0: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
    // 0x802999B4: sw          $t8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r24;
    // 0x802999B8: sw          $t9, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r25;
    // 0x802999BC: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x802999C0: sb          $t1, 0x32($a0)
    MEM_B(0X32, ctx->r4) = ctx->r9;
    // 0x802999C4: jr          $ra
    // 0x802999C8: sb          $t0, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r8;
    return;
    // 0x802999C8: sb          $t0, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void D_80290BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290C6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80290C70: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80290C74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80290C78: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80290C7C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80290C80: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80290C84: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80290C88: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80290C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80290C90: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80290C94: swc1        $f14, 0x54($a3)
    MEM_W(0X54, ctx->r7) = ctx->f14.u32l;
    // 0x80290C98: swc1        $f12, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->f12.u32l;
    // 0x80290C9C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80290CA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80290CA4: addiu       $a1, $a3, 0x88
    ctx->r5 = ADD32(ctx->r7, 0X88);
    // 0x80290CA8: swc1        $f4, 0x50($a3)
    MEM_W(0X50, ctx->r7) = ctx->f4.u32l;
    // 0x80290CAC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80290CB0: swc1        $f6, 0x58($a3)
    MEM_W(0X58, ctx->r7) = ctx->f6.u32l;
    // 0x80290CB4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80290CB8: sw          $a0, 0x12C($a3)
    MEM_W(0X12C, ctx->r7) = ctx->r4;
    // 0x80290CBC: swc1        $f0, 0x5C($a3)
    MEM_W(0X5C, ctx->r7) = ctx->f0.u32l;
    // 0x80290CC0: swc1        $f0, 0x108($a3)
    MEM_W(0X108, ctx->r7) = ctx->f0.u32l;
    // 0x80290CC4: sw          $t6, 0x4C($a3)
    MEM_W(0X4C, ctx->r7) = ctx->r14;
    // 0x80290CC8: lwc1        $f8, 0x16C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X16C);
    // 0x80290CCC: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80290CD0: swc1        $f10, 0x130($a3)
    MEM_W(0X130, ctx->r7) = ctx->f10.u32l;
    // 0x80290CD4: lwc1        $f16, 0x170($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X170);
    // 0x80290CD8: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80290CDC: swc1        $f18, 0x134($a3)
    MEM_W(0X134, ctx->r7) = ctx->f18.u32l;
    // 0x80290CE0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80290CE4: jal         0x802C51D0
    // 0x80290CE8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80290CE8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x80290CEC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80290CF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80290CF4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80290CF8: jal         0x802D01D4
    // 0x80290CFC: lw          $a1, 0x130($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X130);
    static_3_802D01D4(rdram, ctx);
        goto after_1;
    // 0x80290CFC: lw          $a1, 0x130($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X130);
    after_1:
    // 0x80290D00: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80290D04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80290D08: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80290D0C: jal         0x802D01D4
    // 0x80290D10: lw          $a1, 0x134($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X134);
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x80290D10: lw          $a1, 0x134($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X134);
    after_2:
    // 0x80290D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80290D18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80290D1C: jr          $ra
    // 0x80290D20: nop

    return;
    // 0x80290D20: nop

;}
RECOMP_FUNC void D_802038E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802038E0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802038E4: addiu       $a0, $t6, 0x0
    ctx->r4 = ADD32(ctx->r14, 0X0);
    // 0x802038E8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802038EC: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802038F0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_802038F4:
    // 0x802038F4: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    // 0x802038F8: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x802038FC: sw          $zero, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = 0;
    // 0x80203900: sw          $zero, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = 0;
    // 0x80203904: sw          $zero, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = 0;
    // 0x80203908: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x8020390C: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x80203910: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x80203914: sw          $zero, -0x24($a0)
    MEM_W(-0X24, ctx->r4) = 0;
    // 0x80203918: sw          $zero, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = 0;
    // 0x8020391C: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x80203920: bne         $at, $zero, L_802038F4
    if (ctx->r1 != 0) {
        // 0x80203924: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_802038F4;
    }
    // 0x80203924: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x80203928: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8020392C: addiu       $a1, $t7, 0x0
    ctx->r5 = ADD32(ctx->r15, 0X0);
    // 0x80203930: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80203934: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80203938: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8020393C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80203940:
    // 0x80203940: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80203944: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80203948: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x8020394C: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x80203950: sw          $zero, 0x50($v1)
    MEM_W(0X50, ctx->r3) = 0;
    // 0x80203954: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80203958: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
L_8020395C:
    // 0x8020395C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x80203960: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80203964: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x80203968: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8020396C: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80203970: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80203974: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80203978: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8020397C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80203980: sw          $zero, 0x50($v1)
    MEM_W(0X50, ctx->r3) = 0;
    // 0x80203984: bne         $v0, $a2, L_8020395C
    if (ctx->r2 != ctx->r6) {
        // 0x80203988: addiu       $a0, $a0, 0x20
        ctx->r4 = ADD32(ctx->r4, 0X20);
            goto L_8020395C;
    }
    // 0x80203988: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x8020398C: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    // 0x80203990: bne         $a1, $a3, L_80203940
    if (ctx->r5 != ctx->r7) {
        // 0x80203994: addiu       $v1, $v1, 0x54
        ctx->r3 = ADD32(ctx->r3, 0X54);
            goto L_80203940;
    }
    // 0x80203994: addiu       $v1, $v1, 0x54
    ctx->r3 = ADD32(ctx->r3, 0X54);
    // 0x80203998: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8020399C: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802039A0: lw          $t9, 0x20($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X20);
    // 0x802039A4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802039A8: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802039AC: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802039B0: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802039B4: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x802039B8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802039BC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802039C0: addu        $t1, $v1, $t0
    ctx->r9 = ADD32(ctx->r3, ctx->r8);
    // 0x802039C4: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x802039C8: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x802039CC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802039D0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802039D4: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x802039D8: lw          $t4, 0x20($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X20);
    // 0x802039DC: lw          $t7, 0x44($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X44);
    // 0x802039E0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802039E4: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802039E8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802039EC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x802039F0: sw          $t5, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r13;
    // 0x802039F4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802039F8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x802039FC: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80203A00: sw          $t6, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r14;
    // 0x80203A04: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x80203A08: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80203A0C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80203A10: sw          $t2, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r10;
    // 0x80203A14: lw          $t1, 0x44($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X44);
    // 0x80203A18: lw          $t5, 0x68($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X68);
    // 0x80203A1C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80203A20: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x80203A24: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80203A28: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80203A2C: sw          $t3, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r11;
    // 0x80203A30: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x80203A34: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80203A38: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80203A3C: sw          $t4, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->r12;
    // 0x80203A40: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x80203A44: sw          $t0, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->r8;
    // 0x80203A48: lw          $t9, 0x68($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X68);
    // 0x80203A4C: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80203A50: jr          $ra
    // 0x80203A54: sw          $t2, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r10;
    return;
    // 0x80203A54: sw          $t2, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r10;
;}
RECOMP_FUNC void D_802971D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80297254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80297258: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8029725C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80297260: addiu       $t7, $a0, 0x7FFF
    ctx->r15 = ADD32(ctx->r4, 0X7FFF);
    // 0x80297264: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
    // 0x80297268: lw          $t7, 0x14CD($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X14CD);
    // 0x8029726C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80297270: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80297274: beq         $t7, $at, L_80297298
    if (ctx->r15 == ctx->r1) {
        // 0x80297278: addiu       $a0, $a0, 0x7FFF
        ctx->r4 = ADD32(ctx->r4, 0X7FFF);
            goto L_80297298;
    }
    // 0x80297278: addiu       $a0, $a0, 0x7FFF
    ctx->r4 = ADD32(ctx->r4, 0X7FFF);
    // 0x8029727C: lw          $a0, 0x14D1($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14D1);
    // 0x80297280: jal         0x8021BAE0
    // 0x80297284: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x80297284: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80297288: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8029728C: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x80297290: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x80297294: sw          $t8, 0x14D1($at)
    MEM_W(0X14D1, ctx->r1) = ctx->r24;
L_80297298:
    // 0x80297298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029729C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802972A0: jr          $ra
    // 0x802972A4: nop

    return;
    // 0x802972A4: nop

;}
RECOMP_FUNC void D_802A13A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1420: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A1424: jr          $ra
    // 0x802A1428: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A1428: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802019C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802019C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802019CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802019D0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802019D4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802019D8: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x802019DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802019E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802019E4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802019E8: bne         $at, $zero, L_80201A14
    if (ctx->r1 != 0) {
        // 0x802019EC: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80201A14;
    }
    // 0x802019EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802019F0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802019F4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802019F8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802019FC: addiu       $a2, $zero, 0x1A1
    ctx->r6 = ADD32(0, 0X1A1);
    // 0x80201A00: jal         0x80231C9C
    // 0x80201A04: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201A04: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80201A08: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201A0C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201A10: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_80201A14:
    // 0x80201A14: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201A18: beq         $at, $zero, L_80201AAC
    if (ctx->r1 == 0) {
        // 0x80201A1C: lwc1        $f6, 0x24($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80201AAC;
    }
    // 0x80201A1C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201A20: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80201A24: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201A28: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201A2C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80201A30: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201A34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201A38: bc1tl       L_80201A4C
    if (c1cs) {
        // 0x80201A3C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_80201A4C;
    }
    goto skip_0;
    // 0x80201A3C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_0:
    // 0x80201A40: jal         0x80231C9C
    // 0x80201A44: addiu       $a2, $zero, 0x1A3
    ctx->r6 = ADD32(0, 0X1A3);
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x80201A44: addiu       $a2, $zero, 0x1A3
    ctx->r6 = ADD32(0, 0X1A3);
    after_1:
    // 0x80201A48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_80201A4C:
    // 0x80201A4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80201A50: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201A54: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201A58: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201A5C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80201A60: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201A64: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201A68: bc1tl       L_80201A7C
    if (c1cs) {
        // 0x80201A6C: lbu         $t7, 0x23($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X23);
            goto L_80201A7C;
    }
    goto skip_1;
    // 0x80201A6C: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    skip_1:
    // 0x80201A70: jal         0x80231C9C
    // 0x80201A74: addiu       $a2, $zero, 0x1A4
    ctx->r6 = ADD32(0, 0X1A4);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x80201A74: addiu       $a2, $zero, 0x1A4
    ctx->r6 = ADD32(0, 0X1A4);
    after_2:
    // 0x80201A78: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
L_80201A7C:
    // 0x80201A7C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80201A80: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80201A84: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80201A88: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201A8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201A90: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80201A94: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201A98: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80201A9C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80201AA0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80201AA4: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80201AA8: swc1        $f16, 0x74($t9)
    MEM_W(0X74, ctx->r25) = ctx->f16.u32l;
L_80201AAC:
    // 0x80201AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80201AB4: jr          $ra
    // 0x80201AB8: nop

    return;
    // 0x80201AB8: nop

;}
RECOMP_FUNC void D_802A6C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6C84: addiu       $sp, $sp, -0x2B0
    ctx->r29 = ADD32(ctx->r29, -0X2B0);
    // 0x802A6C88: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802A6C8C: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x802A6C90: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x802A6C94: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x802A6C98: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x802A6C9C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x802A6CA0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x802A6CA4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802A6CA8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802A6CAC: lbu         $t6, 0x58($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X58);
    // 0x802A6CB0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802A6CB4: bnel        $t6, $zero, L_802A7544
    if (ctx->r14 != 0) {
        // 0x802A6CB8: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_802A7544;
    }
    goto skip_0;
    // 0x802A6CB8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x802A6CBC: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x802A6CC0: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x802A6CC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6CC8: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6CCC: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802A6CD0: mul.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802A6CD4: jal         0x80300424
    // 0x802A6CD8: nop

    static_3_80300424(rdram, ctx);
        goto after_0;
    // 0x802A6CD8: nop

    after_0:
    // 0x802A6CDC: lwc1        $f18, 0x64($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X64);
    // 0x802A6CE0: lwc1        $f4, 0x60($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X60);
    // 0x802A6CE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A6CE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A6CEC: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802A6CF0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802A6CF4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802A6CF8: addiu       $t7, $sp, 0xAC
    ctx->r15 = ADD32(ctx->r29, 0XAC);
    // 0x802A6CFC: addiu       $t9, $sp, 0xA0
    ctx->r25 = ADD32(ctx->r29, 0XA0);
    // 0x802A6D00: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802A6D04: swc1        $f8, 0x2A8($sp)
    MEM_W(0X2A8, ctx->r29) = ctx->f8.u32l;
    // 0x802A6D08: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x802A6D0C: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x802A6D10: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x802A6D14: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x802A6D18: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x802A6D1C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x802A6D20: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802A6D24: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802A6D28: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802A6D2C: lw          $t6, 0x4($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X4);
    // 0x802A6D30: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x802A6D34: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x802A6D38: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x802A6D3C: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x802A6D40: jal         0x8022331C
    // 0x802A6D44: swc1        $f0, 0x2AC($sp)
    MEM_W(0X2AC, ctx->r29) = ctx->f0.u32l;
    static_3_8022331C(rdram, ctx);
        goto after_1;
    // 0x802A6D44: swc1        $f0, 0x2AC($sp)
    MEM_W(0X2AC, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x802A6D48: jal         0x802233EC
    // 0x802A6D4C: lui         $a0, 0x4F2
    ctx->r4 = S32(0X4F2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_2;
    // 0x802A6D4C: lui         $a0, 0x4F2
    ctx->r4 = S32(0X4F2 << 16);
    after_2:
    // 0x802A6D50: addiu       $ra, $sp, 0xB8
    ctx->r31 = ADD32(ctx->r29, 0XB8);
    // 0x802A6D54: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802A6D58: addiu       $s1, $sp, 0xBC
    ctx->r17 = ADD32(ctx->r29, 0XBC);
    // 0x802A6D5C: addiu       $a3, $sp, 0xC0
    ctx->r7 = ADD32(ctx->r29, 0XC0);
    // 0x802A6D60: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802A6D64: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A6D68: lwc1        $f16, 0x2AC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2AC);
    // 0x802A6D6C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802A6D70: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x802A6D74: or          $t2, $s1, $zero
    ctx->r10 = ctx->r17 | 0;
    // 0x802A6D78: or          $s7, $ra, $zero
    ctx->r23 = ctx->r31 | 0;
    // 0x802A6D7C: or          $t4, $ra, $zero
    ctx->r12 = ctx->r31 | 0;
    // 0x802A6D80: addiu       $t0, $sp, 0xAC
    ctx->r8 = ADD32(ctx->r29, 0XAC);
    // 0x802A6D84: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x802A6D88: addiu       $t5, $sp, 0x124
    ctx->r13 = ADD32(ctx->r29, 0X124);
    // 0x802A6D8C: addiu       $s2, $sp, 0x228
    ctx->r18 = ADD32(ctx->r29, 0X228);
L_802A6D90:
    // 0x802A6D90: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x802A6D94: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x802A6D98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6D9C: mul.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x802A6DA0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6DA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6DA8: mul.s       $f14, $f4, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x802A6DAC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802A6DB0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802A6DB4: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802A6DB8: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A6DBC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802A6DC0: addiu       $s0, $s7, 0xC
    ctx->r16 = ADD32(ctx->r23, 0XC);
    // 0x802A6DC4: addiu       $a0, $t2, 0xC
    ctx->r4 = ADD32(ctx->r10, 0XC);
    // 0x802A6DC8: addiu       $a1, $t3, 0xC
    ctx->r5 = ADD32(ctx->r11, 0XC);
    // 0x802A6DCC: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802A6DD0: swc1        $f8, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->f8.u32l;
    // 0x802A6DD4: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6DD8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802A6DDC: nop

    // 0x802A6DE0: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802A6DE4: nop

    // 0x802A6DE8: mul.s       $f12, $f14, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x802A6DEC: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
    // 0x802A6DF0: swc1        $f12, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f12.u32l;
    // 0x802A6DF4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x802A6DF8: beq         $v0, $a2, L_802A6EAC
    if (ctx->r2 == ctx->r6) {
        // 0x802A6DFC: lwc1        $f18, 0x0($v1)
        ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
            goto L_802A6EAC;
    }
    // 0x802A6DFC: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
L_802A6E00:
    // 0x802A6E00: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802A6E04: lwc1        $f10, -0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X10);
    // 0x802A6E08: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802A6E0C: lwc1        $f6, -0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0XC);
    // 0x802A6E10: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A6E14: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802A6E18: lwc1        $f18, -0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, -0X8);
    // 0x802A6E1C: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x802A6E20: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x802A6E24: addiu       $s0, $s0, 0x30
    ctx->r16 = ADD32(ctx->r16, 0X30);
    // 0x802A6E28: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802A6E2C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x802A6E30: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x802A6E34: mul.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802A6E38: swc1        $f14, -0x30($s0)
    MEM_W(-0X30, ctx->r16) = ctx->f14.u32l;
    // 0x802A6E3C: lwc1        $f14, -0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, -0X4);
    // 0x802A6E40: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A6E44: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x802A6E48: mul.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802A6E4C: swc1        $f10, -0x30($a0)
    MEM_W(-0X30, ctx->r4) = ctx->f10.u32l;
    // 0x802A6E50: lwc1        $f10, -0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X14);
    // 0x802A6E54: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802A6E58: swc1        $f12, -0x30($a1)
    MEM_W(-0X30, ctx->r5) = ctx->f12.u32l;
    // 0x802A6E5C: mul.s       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802A6E60: swc1        $f8, -0x24($s0)
    MEM_W(-0X24, ctx->r16) = ctx->f8.u32l;
    // 0x802A6E64: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802A6E68: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802A6E6C: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802A6E70: swc1        $f6, -0x24($a0)
    MEM_W(-0X24, ctx->r4) = ctx->f6.u32l;
    // 0x802A6E74: swc1        $f12, -0x24($a1)
    MEM_W(-0X24, ctx->r5) = ctx->f12.u32l;
    // 0x802A6E78: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x802A6E7C: swc1        $f4, -0x18($s0)
    MEM_W(-0X18, ctx->r16) = ctx->f4.u32l;
    // 0x802A6E80: mul.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802A6E84: nop

    // 0x802A6E88: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A6E8C: swc1        $f8, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = ctx->f8.u32l;
    // 0x802A6E90: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x802A6E94: swc1        $f12, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->f12.u32l;
    // 0x802A6E98: mul.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802A6E9C: swc1        $f14, -0xC($s0)
    MEM_W(-0XC, ctx->r16) = ctx->f14.u32l;
    // 0x802A6EA0: swc1        $f10, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = ctx->f10.u32l;
    // 0x802A6EA4: bne         $v0, $a2, L_802A6E00
    if (ctx->r2 != ctx->r6) {
        // 0x802A6EA8: swc1        $f12, -0xC($a1)
        MEM_W(-0XC, ctx->r5) = ctx->f12.u32l;
            goto L_802A6E00;
    }
    // 0x802A6EA8: swc1        $f12, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->f12.u32l;
L_802A6EAC:
    // 0x802A6EAC: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802A6EB0: lwc1        $f10, -0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X10);
    // 0x802A6EB4: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802A6EB8: lwc1        $f6, -0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0XC);
    // 0x802A6EBC: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A6EC0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802A6EC4: lwc1        $f18, -0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, -0X8);
    // 0x802A6EC8: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x802A6ECC: addiu       $s0, $s0, 0x30
    ctx->r16 = ADD32(ctx->r16, 0X30);
    // 0x802A6ED0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x802A6ED4: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802A6ED8: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x802A6EDC: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x802A6EE0: mul.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802A6EE4: swc1        $f14, -0x30($s0)
    MEM_W(-0X30, ctx->r16) = ctx->f14.u32l;
    // 0x802A6EE8: lwc1        $f14, -0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, -0X4);
    // 0x802A6EEC: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A6EF0: nop

    // 0x802A6EF4: mul.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802A6EF8: swc1        $f10, -0x30($a0)
    MEM_W(-0X30, ctx->r4) = ctx->f10.u32l;
    // 0x802A6EFC: swc1        $f12, -0x30($a1)
    MEM_W(-0X30, ctx->r5) = ctx->f12.u32l;
    // 0x802A6F00: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802A6F04: lwc1        $f10, -0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X4);
    // 0x802A6F08: mul.s       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802A6F0C: swc1        $f8, -0x24($s0)
    MEM_W(-0X24, ctx->r16) = ctx->f8.u32l;
    // 0x802A6F10: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802A6F14: nop

    // 0x802A6F18: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802A6F1C: swc1        $f6, -0x24($a0)
    MEM_W(-0X24, ctx->r4) = ctx->f6.u32l;
    // 0x802A6F20: swc1        $f12, -0x24($a1)
    MEM_W(-0X24, ctx->r5) = ctx->f12.u32l;
    // 0x802A6F24: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x802A6F28: nop

    // 0x802A6F2C: mul.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802A6F30: swc1        $f4, -0x18($s0)
    MEM_W(-0X18, ctx->r16) = ctx->f4.u32l;
    // 0x802A6F34: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A6F38: nop

    // 0x802A6F3C: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x802A6F40: swc1        $f8, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = ctx->f8.u32l;
    // 0x802A6F44: swc1        $f12, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->f12.u32l;
    // 0x802A6F48: mul.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802A6F4C: swc1        $f14, -0xC($s0)
    MEM_W(-0XC, ctx->r16) = ctx->f14.u32l;
    // 0x802A6F50: swc1        $f10, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = ctx->f10.u32l;
    // 0x802A6F54: swc1        $f12, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->f12.u32l;
    // 0x802A6F58: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x802A6F5C: addiu       $a3, $a3, 0x78
    ctx->r7 = ADD32(ctx->r7, 0X78);
    // 0x802A6F60: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x802A6F64: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x802A6F68: lw          $t8, 0x4($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X4);
    // 0x802A6F6C: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x802A6F70: addiu       $s7, $s7, 0x78
    ctx->r23 = ADD32(ctx->r23, 0X78);
    // 0x802A6F74: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x802A6F78: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x802A6F7C: addiu       $t2, $t2, 0x78
    ctx->r10 = ADD32(ctx->r10, 0X78);
    // 0x802A6F80: addiu       $t3, $t3, 0x78
    ctx->r11 = ADD32(ctx->r11, 0X78);
    // 0x802A6F84: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x802A6F88: sltu        $at, $a3, $s2
    ctx->r1 = ctx->r7 < ctx->r18 ? 1 : 0;
    // 0x802A6F8C: addiu       $t4, $t4, 0x78
    ctx->r12 = ADD32(ctx->r12, 0X78);
    // 0x802A6F90: addiu       $t5, $t5, 0x78
    ctx->r13 = ADD32(ctx->r13, 0X78);
    // 0x802A6F94: addiu       $ra, $ra, 0x78
    ctx->r31 = ADD32(ctx->r31, 0X78);
    // 0x802A6F98: bne         $at, $zero, L_802A6D90
    if (ctx->r1 != 0) {
        // 0x802A6F9C: addiu       $s1, $s1, 0x78
        ctx->r17 = ADD32(ctx->r17, 0X78);
            goto L_802A6D90;
    }
    // 0x802A6F9C: addiu       $s1, $s1, 0x78
    ctx->r17 = ADD32(ctx->r17, 0X78);
    // 0x802A6FA0: addiu       $s0, $sp, 0x268
    ctx->r16 = ADD32(ctx->r29, 0X268);
    // 0x802A6FA4: jal         0x8022970C
    // 0x802A6FA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802A6FA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802A6FAC: addiu       $s1, $sp, 0x228
    ctx->r17 = ADD32(ctx->r29, 0X228);
    // 0x802A6FB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802A6FB4: jal         0x802C51D0
    // 0x802A6FB8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802C51D0(rdram, ctx);
        goto after_4;
    // 0x802A6FB8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_4:
    // 0x802A6FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A6FC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802A6FC4: jal         0x802297A8
    // 0x802A6FC8: addiu       $a2, $s3, 0x18
    ctx->r6 = ADD32(ctx->r19, 0X18);
    static_3_802297A8(rdram, ctx);
        goto after_5;
    // 0x802A6FC8: addiu       $a2, $s3, 0x18
    ctx->r6 = ADD32(ctx->r19, 0X18);
    after_5:
    // 0x802A6FCC: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x802A6FD0: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802A6FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A6FD8: jal         0x802D01D4
    // 0x802A6FDC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x802A6FDC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_6:
    // 0x802A6FE0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6FE4: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A6FEC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A6FF0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A6FF4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A6FF8: jal         0x8022A210
    // 0x802A6FFC: nop

    static_3_8022A210(rdram, ctx);
        goto after_7;
    // 0x802A6FFC: nop

    after_7:
    // 0x802A7000: jal         0x80223108
    // 0x802A7004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80223108(rdram, ctx);
        goto after_8;
    // 0x802A7004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802A7008: jal         0x80223468
    // 0x802A700C: addiu       $a0, $zero, 0xFFF
    ctx->r4 = ADD32(0, 0XFFF);
    static_3_80223468(rdram, ctx);
        goto after_9;
    // 0x802A700C: addiu       $a0, $zero, 0xFFF
    ctx->r4 = ADD32(0, 0XFFF);
    after_9:
    // 0x802A7010: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802A7014: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A7018: lwc1        $f6, 0x2A8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2A8);
    // 0x802A701C: addiu       $s7, $sp, 0xB8
    ctx->r23 = ADD32(ctx->r29, 0XB8);
    // 0x802A7020: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x802A7024: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802A7028: addiu       $s6, $zero, 0x6C
    ctx->r22 = ADD32(0, 0X6C);
    // 0x802A702C: lui         $s4, 0x1000
    ctx->r20 = S32(0X1000 << 16);
    // 0x802A7030: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A7034: mfc1        $s2, $f18
    ctx->r18 = (int32_t)ctx->f18.u32l;
    // 0x802A7038: nop

L_802A703C:
    // 0x802A703C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802A7040: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
L_802A7044:
    // 0x802A7044: jal         0x8021F4E4
    // 0x802A7048: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_10;
    // 0x802A7048: nop

    after_10:
    // 0x802A704C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802A7050: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802A7054: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802A7058: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A705C: lbu         $t9, 0x8($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X8);
    // 0x802A7060: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802A7064: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A7068: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802A706C: lbu         $t7, 0xB($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0XB);
    // 0x802A7070: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A7074: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x802A7078: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802A707C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802A7080: lbu         $t6, 0xE($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XE);
    // 0x802A7084: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802A7088: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A708C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802A7090: jal         0x8021F35C
    // 0x802A7094: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802A7094: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_11:
    // 0x802A7098: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A709C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A70A0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x802A70A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A70A8: lbu         $t6, 0x8($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X8);
    // 0x802A70AC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802A70B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A70B4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802A70B8: lbu         $t8, 0xB($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XB);
    // 0x802A70BC: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A70C0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x802A70C4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802A70C8: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802A70CC: lbu         $t9, 0xE($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XE);
    // 0x802A70D0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802A70D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A70D8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802A70DC: jal         0x8021F35C
    // 0x802A70E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x802A70E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_12:
    // 0x802A70E4: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802A70E8: lwc1        $f18, 0x88($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802A70EC: lwc1        $f10, 0x8C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802A70F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A70F4: lbu         $t9, 0x9($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X9);
    // 0x802A70F8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A70FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A7100: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802A7104: lbu         $t7, 0xC($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0XC);
    // 0x802A7108: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802A710C: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x802A7110: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802A7114: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802A7118: lbu         $t6, 0xF($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XF);
    // 0x802A711C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802A7120: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A7124: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802A7128: jal         0x8021F35C
    // 0x802A712C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_8021F35C(rdram, ctx);
        goto after_13;
    // 0x802A712C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_13:
    // 0x802A7130: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802A7134: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802A7138: lwc1        $f6, 0x80($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A713C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A7140: lbu         $t6, 0x9($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X9);
    // 0x802A7144: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A7148: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A714C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802A7150: lbu         $t8, 0xC($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XC);
    // 0x802A7154: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802A7158: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x802A715C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802A7160: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A7164: lbu         $t9, 0xF($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XF);
    // 0x802A7168: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802A716C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A7170: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802A7174: jal         0x8021F35C
    // 0x802A7178: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x802A7178: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_14:
    // 0x802A717C: jal         0x8021FCD0
    // 0x802A7180: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_15;
    // 0x802A7180: nop

    after_15:
    // 0x802A7184: jal         0x8022331C
    // 0x802A7188: nop

    static_3_8022331C(rdram, ctx);
        goto after_16;
    // 0x802A7188: nop

    after_16:
    // 0x802A718C: jal         0x802233EC
    // 0x802A7190: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_802233EC(rdram, ctx);
        goto after_17;
    // 0x802A7190: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_17:
    // 0x802A7194: jal         0x8021F4E4
    // 0x802A7198: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_18;
    // 0x802A7198: nop

    after_18:
    // 0x802A719C: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802A71A0: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802A71A4: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802A71A8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802A71AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802A71B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802A71B4: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802A71B8: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802A71BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802A71C0: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A71C4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802A71C8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A71CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A71D0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802A71D4: jal         0x8021F35C
    // 0x802A71D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_19;
    // 0x802A71D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x802A71DC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A71E0: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A71E4: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x802A71E8: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802A71EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802A71F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802A71F4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A71F8: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x802A71FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802A7200: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802A7204: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802A7208: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A720C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A7210: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802A7214: jal         0x8021F35C
    // 0x802A7218: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_20;
    // 0x802A7218: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
    // 0x802A721C: lwc1        $f10, 0x84($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802A7220: lwc1        $f8, 0x88($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802A7224: lwc1        $f4, 0x8C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802A7228: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802A722C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802A7230: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802A7234: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A7238: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x802A723C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802A7240: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802A7244: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802A7248: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A724C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A7250: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802A7254: jal         0x8021F35C
    // 0x802A7258: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_21;
    // 0x802A7258: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_21:
    // 0x802A725C: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802A7260: lwc1        $f18, 0x7C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802A7264: lwc1        $f10, 0x80($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A7268: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A726C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802A7270: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802A7274: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802A7278: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x802A727C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802A7280: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802A7284: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802A7288: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A728C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A7290: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802A7294: jal         0x8021F35C
    // 0x802A7298: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_22;
    // 0x802A7298: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_22:
    // 0x802A729C: jal         0x8021FCD0
    // 0x802A72A0: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_23;
    // 0x802A72A0: nop

    after_23:
    // 0x802A72A4: jal         0x8022337C
    // 0x802A72A8: nop

    static_3_8022337C(rdram, ctx);
        goto after_24;
    // 0x802A72A8: nop

    after_24:
    // 0x802A72AC: jal         0x8021F4E4
    // 0x802A72B0: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_25;
    // 0x802A72B0: nop

    after_25:
    // 0x802A72B4: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802A72B8: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802A72BC: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802A72C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A72C4: lbu         $t9, 0x8($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X8);
    // 0x802A72C8: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A72CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A72D0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802A72D4: lbu         $t7, 0xB($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0XB);
    // 0x802A72D8: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802A72DC: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x802A72E0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802A72E4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A72E8: lbu         $t6, 0xE($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XE);
    // 0x802A72EC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802A72F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A72F4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802A72F8: jal         0x8021F35C
    // 0x802A72FC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_8021F35C(rdram, ctx);
        goto after_26;
    // 0x802A72FC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_26:
    // 0x802A7300: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802A7304: lwc1        $f10, 0x7C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802A7308: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A730C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A7310: lbu         $t6, 0x9($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X9);
    // 0x802A7314: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802A7318: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A731C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802A7320: lbu         $t8, 0xC($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XC);
    // 0x802A7324: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802A7328: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802A732C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802A7330: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A7334: lbu         $t9, 0xF($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XF);
    // 0x802A7338: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802A733C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A7340: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802A7344: jal         0x8021F35C
    // 0x802A7348: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_27;
    // 0x802A7348: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_27:
    // 0x802A734C: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802A7350: lwc1        $f6, 0x88($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802A7354: lwc1        $f18, 0x8C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802A7358: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A735C: lbu         $t9, 0x9($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X9);
    // 0x802A7360: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802A7364: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A7368: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802A736C: lbu         $t7, 0xC($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0XC);
    // 0x802A7370: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A7374: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x802A7378: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802A737C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802A7380: lbu         $t6, 0xF($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XF);
    // 0x802A7384: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802A7388: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A738C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802A7390: jal         0x8021F35C
    // 0x802A7394: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    static_3_8021F35C(rdram, ctx);
        goto after_28;
    // 0x802A7394: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_28:
    // 0x802A7398: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A739C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A73A0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x802A73A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A73A8: lbu         $t6, 0x8($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X8);
    // 0x802A73AC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802A73B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A73B4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802A73B8: lbu         $t8, 0xB($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XB);
    // 0x802A73BC: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A73C0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x802A73C4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802A73C8: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802A73CC: lbu         $t9, 0xE($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XE);
    // 0x802A73D0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802A73D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A73D8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802A73DC: jal         0x8021F35C
    // 0x802A73E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_29;
    // 0x802A73E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_29:
    // 0x802A73E4: jal         0x8021FCD0
    // 0x802A73E8: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_30;
    // 0x802A73E8: nop

    after_30:
    // 0x802A73EC: jal         0x8022331C
    // 0x802A73F0: nop

    static_3_8022331C(rdram, ctx);
        goto after_31;
    // 0x802A73F0: nop

    after_31:
    // 0x802A73F4: jal         0x802233EC
    // 0x802A73F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_802233EC(rdram, ctx);
        goto after_32;
    // 0x802A73F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_32:
    // 0x802A73FC: jal         0x8021F4E4
    // 0x802A7400: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_33;
    // 0x802A7400: nop

    after_33:
    // 0x802A7404: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802A7408: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802A740C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802A7410: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A7414: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802A7418: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802A741C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802A7420: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x802A7424: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802A7428: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802A742C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802A7430: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A7434: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A7438: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802A743C: jal         0x8021F35C
    // 0x802A7440: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_34;
    // 0x802A7440: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_34:
    // 0x802A7444: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
    // 0x802A7448: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x802A744C: lwc1        $f6, 0x80($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
    // 0x802A7450: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A7454: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802A7458: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802A745C: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802A7460: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x802A7464: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802A7468: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A746C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802A7470: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A7474: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A7478: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802A747C: jal         0x8021F35C
    // 0x802A7480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_35;
    // 0x802A7480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_35:
    // 0x802A7484: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802A7488: lwc1        $f10, 0x88($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802A748C: lwc1        $f8, 0x8C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802A7490: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802A7494: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802A7498: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802A749C: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802A74A0: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x802A74A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802A74A8: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802A74AC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802A74B0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A74B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A74B8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802A74BC: jal         0x8021F35C
    // 0x802A74C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_36;
    // 0x802A74C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_36:
    // 0x802A74C4: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A74C8: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A74CC: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x802A74D0: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802A74D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802A74D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802A74DC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802A74E0: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x802A74E4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802A74E8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802A74EC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802A74F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A74F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A74F8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802A74FC: jal         0x8021F35C
    // 0x802A7500: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_37;
    // 0x802A7500: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_37:
    // 0x802A7504: jal         0x8021FCD0
    // 0x802A7508: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_38;
    // 0x802A7508: nop

    after_38:
    // 0x802A750C: jal         0x8022337C
    // 0x802A7510: nop

    static_3_8022337C(rdram, ctx);
        goto after_39;
    // 0x802A7510: nop

    after_39:
    // 0x802A7514: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x802A7518: bne         $s3, $s6, L_802A7044
    if (ctx->r19 != ctx->r22) {
        // 0x802A751C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_802A7044;
    }
    // 0x802A751C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x802A7520: addiu       $s7, $s7, 0x78
    ctx->r23 = ADD32(ctx->r23, 0X78);
    // 0x802A7524: addiu       $t7, $sp, 0x1A8
    ctx->r15 = ADD32(ctx->r29, 0X1A8);
    // 0x802A7528: bne         $s7, $t7, L_802A703C
    if (ctx->r23 != ctx->r15) {
        // 0x802A752C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802A703C;
    }
    // 0x802A752C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802A7530: jal         0x802230E4
    // 0x802A7534: nop

    static_3_802230E4(rdram, ctx);
        goto after_40;
    // 0x802A7534: nop

    after_40:
    // 0x802A7538: jal         0x8022337C
    // 0x802A753C: nop

    static_3_8022337C(rdram, ctx);
        goto after_41;
    // 0x802A753C: nop

    after_41:
    // 0x802A7540: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_802A7544:
    // 0x802A7544: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802A7548: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802A754C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x802A7550: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x802A7554: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x802A7558: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x802A755C: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x802A7560: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x802A7564: jr          $ra
    // 0x802A7568: addiu       $sp, $sp, 0x2B0
    ctx->r29 = ADD32(ctx->r29, 0X2B0);
    return;
    // 0x802A7568: addiu       $sp, $sp, 0x2B0
    ctx->r29 = ADD32(ctx->r29, 0X2B0);
;}
RECOMP_FUNC void D_8027C41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C494: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8027C498: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8027C49C: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8027C4A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8027C4A4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8027C4A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8027C4AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8027C4B0: sb          $t6, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r14;
    // 0x8027C4B4: lw          $t7, 0x7168($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7168);
    // 0x8027C4B8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8027C4BC: bltz        $t7, L_8027C4F0
    if (SIGNED(ctx->r15) < 0) {
        // 0x8027C4C0: sw          $t7, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r15;
            goto L_8027C4F0;
    }
    // 0x8027C4C0: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x8027C4C4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8027C4C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8027C4CC: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x8027C4D0: jal         0x8021D228
    // 0x8027C4D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021D228(rdram, ctx);
        goto after_0;
    // 0x8027C4D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8027C4D8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8027C4DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8027C4E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8027C4E4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8027C4E8: jal         0x8021CEF8
    // 0x8027C4EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021CEF8(rdram, ctx);
        goto after_1;
    // 0x8027C4EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8027C4F0:
    // 0x8027C4F0: lbu         $t9, 0x6D44($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X6D44);
    // 0x8027C4F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8027C4F8: blez        $t9, L_8027C550
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8027C4FC: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8027C550;
    }
    // 0x8027C4FC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027C500: lw          $a1, 0x6CE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6CE0);
L_8027C504:
    // 0x8027C504: beql        $a1, $zero, L_8027C538
    if (ctx->r5 == 0) {
        // 0x8027C508: lbu         $t1, 0x6D44($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
            goto L_8027C538;
    }
    goto skip_0;
    // 0x8027C508: lbu         $t1, 0x6D44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
    skip_0:
    // 0x8027C50C: jal         0x80320D60
    // 0x8027C510: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_2;
    // 0x8027C510: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x8027C514: beql        $v0, $zero, L_8027C538
    if (ctx->r2 == 0) {
        // 0x8027C518: lbu         $t1, 0x6D44($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
            goto L_8027C538;
    }
    goto skip_1;
    // 0x8027C518: lbu         $t1, 0x6D44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
    skip_1:
    // 0x8027C51C: lw          $a1, 0x6CE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6CE0);
    // 0x8027C520: lw          $v0, 0x7C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X7C);
    // 0x8027C524: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8027C528: lh          $t0, 0x18($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X18);
    // 0x8027C52C: jalr        $t9
    // 0x8027C530: addu        $a0, $t0, $a1
    ctx->r4 = ADD32(ctx->r8, ctx->r5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x8027C530: addu        $a0, $t0, $a1
    ctx->r4 = ADD32(ctx->r8, ctx->r5);
    after_3:
    // 0x8027C534: lbu         $t1, 0x6D44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6D44);
L_8027C538:
    // 0x8027C538: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027C53C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027C540: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8027C544: bnel        $at, $zero, L_8027C504
    if (ctx->r1 != 0) {
        // 0x8027C548: lw          $a1, 0x6CE0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X6CE0);
            goto L_8027C504;
    }
    goto skip_2;
    // 0x8027C548: lw          $a1, 0x6CE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6CE0);
    skip_2:
    // 0x8027C54C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027C550:
    // 0x8027C550: lbu         $t2, 0x6DA8($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6DA8);
    // 0x8027C554: blez        $t2, L_8027C5AC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8027C558: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8027C5AC;
    }
    // 0x8027C558: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027C55C: lw          $a1, 0x6D48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6D48);
L_8027C560:
    // 0x8027C560: beql        $a1, $zero, L_8027C594
    if (ctx->r5 == 0) {
        // 0x8027C564: lbu         $t4, 0x6DA8($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6DA8);
            goto L_8027C594;
    }
    goto skip_3;
    // 0x8027C564: lbu         $t4, 0x6DA8($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6DA8);
    skip_3:
    // 0x8027C568: jal         0x80320D60
    // 0x8027C56C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_4;
    // 0x8027C56C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_4:
    // 0x8027C570: beql        $v0, $zero, L_8027C594
    if (ctx->r2 == 0) {
        // 0x8027C574: lbu         $t4, 0x6DA8($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6DA8);
            goto L_8027C594;
    }
    goto skip_4;
    // 0x8027C574: lbu         $t4, 0x6DA8($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6DA8);
    skip_4:
    // 0x8027C578: lw          $a1, 0x6D48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6D48);
    // 0x8027C57C: lw          $v0, 0x7C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X7C);
    // 0x8027C580: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8027C584: lh          $t3, 0x18($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X18);
    // 0x8027C588: jalr        $t9
    // 0x8027C58C: addu        $a0, $t3, $a1
    ctx->r4 = ADD32(ctx->r11, ctx->r5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x8027C58C: addu        $a0, $t3, $a1
    ctx->r4 = ADD32(ctx->r11, ctx->r5);
    after_5:
    // 0x8027C590: lbu         $t4, 0x6DA8($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6DA8);
L_8027C594:
    // 0x8027C594: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027C598: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027C59C: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8027C5A0: bnel        $at, $zero, L_8027C560
    if (ctx->r1 != 0) {
        // 0x8027C5A4: lw          $a1, 0x6D48($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X6D48);
            goto L_8027C560;
    }
    goto skip_5;
    // 0x8027C5A4: lw          $a1, 0x6D48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6D48);
    skip_5:
    // 0x8027C5A8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027C5AC:
    // 0x8027C5AC: lbu         $t5, 0x6E3C($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6E3C);
    // 0x8027C5B0: blez        $t5, L_8027C608
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8027C5B4: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8027C608;
    }
    // 0x8027C5B4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027C5B8: lw          $a1, 0x6E28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6E28);
L_8027C5BC:
    // 0x8027C5BC: beql        $a1, $zero, L_8027C5F0
    if (ctx->r5 == 0) {
        // 0x8027C5C0: lbu         $t7, 0x6E3C($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
            goto L_8027C5F0;
    }
    goto skip_6;
    // 0x8027C5C0: lbu         $t7, 0x6E3C($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
    skip_6:
    // 0x8027C5C4: jal         0x80320D60
    // 0x8027C5C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_6;
    // 0x8027C5C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_6:
    // 0x8027C5CC: beql        $v0, $zero, L_8027C5F0
    if (ctx->r2 == 0) {
        // 0x8027C5D0: lbu         $t7, 0x6E3C($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
            goto L_8027C5F0;
    }
    goto skip_7;
    // 0x8027C5D0: lbu         $t7, 0x6E3C($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
    skip_7:
    // 0x8027C5D4: lw          $a1, 0x6E28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6E28);
    // 0x8027C5D8: lw          $v0, 0x7C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X7C);
    // 0x8027C5DC: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8027C5E0: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x8027C5E4: jalr        $t9
    // 0x8027C5E8: addu        $a0, $t6, $a1
    ctx->r4 = ADD32(ctx->r14, ctx->r5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x8027C5E8: addu        $a0, $t6, $a1
    ctx->r4 = ADD32(ctx->r14, ctx->r5);
    after_7:
    // 0x8027C5EC: lbu         $t7, 0x6E3C($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6E3C);
L_8027C5F0:
    // 0x8027C5F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027C5F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027C5F8: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8027C5FC: bnel        $at, $zero, L_8027C5BC
    if (ctx->r1 != 0) {
        // 0x8027C600: lw          $a1, 0x6E28($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X6E28);
            goto L_8027C5BC;
    }
    goto skip_8;
    // 0x8027C600: lw          $a1, 0x6E28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6E28);
    skip_8:
    // 0x8027C604: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027C608:
    // 0x8027C608: lbu         $t8, 0x6EE8($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6EE8);
    // 0x8027C60C: blez        $t8, L_8027C664
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8027C610: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8027C664;
    }
    // 0x8027C610: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027C614: lw          $a1, 0x6EE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6EE0);
L_8027C618:
    // 0x8027C618: beql        $a1, $zero, L_8027C64C
    if (ctx->r5 == 0) {
        // 0x8027C61C: lbu         $t1, 0x6EE8($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6EE8);
            goto L_8027C64C;
    }
    goto skip_9;
    // 0x8027C61C: lbu         $t1, 0x6EE8($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6EE8);
    skip_9:
    // 0x8027C620: jal         0x80320D60
    // 0x8027C624: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80320D60(rdram, ctx);
        goto after_8;
    // 0x8027C624: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_8:
    // 0x8027C628: beql        $v0, $zero, L_8027C64C
    if (ctx->r2 == 0) {
        // 0x8027C62C: lbu         $t1, 0x6EE8($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6EE8);
            goto L_8027C64C;
    }
    goto skip_10;
    // 0x8027C62C: lbu         $t1, 0x6EE8($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6EE8);
    skip_10:
    // 0x8027C630: lw          $a1, 0x6EE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6EE0);
    // 0x8027C634: lw          $v0, 0x7C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X7C);
    // 0x8027C638: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8027C63C: lh          $t0, 0x18($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X18);
    // 0x8027C640: jalr        $t9
    // 0x8027C644: addu        $a0, $t0, $a1
    ctx->r4 = ADD32(ctx->r8, ctx->r5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8027C644: addu        $a0, $t0, $a1
    ctx->r4 = ADD32(ctx->r8, ctx->r5);
    after_9:
    // 0x8027C648: lbu         $t1, 0x6EE8($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6EE8);
L_8027C64C:
    // 0x8027C64C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027C650: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027C654: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8027C658: bnel        $at, $zero, L_8027C618
    if (ctx->r1 != 0) {
        // 0x8027C65C: lw          $a1, 0x6EE0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X6EE0);
            goto L_8027C618;
    }
    goto skip_11;
    // 0x8027C65C: lw          $a1, 0x6EE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6EE0);
    skip_11:
    // 0x8027C660: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027C664:
    // 0x8027C664: lbu         $v1, 0x6674($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X6674);
    // 0x8027C668: blez        $v1, L_8027C6A8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8027C66C: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8027C6A8;
    }
    // 0x8027C66C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8027C670:
    // 0x8027C670: lw          $a0, 0x664C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X664C);
    // 0x8027C674: beql        $a0, $zero, L_8027C698
    if (ctx->r4 == 0) {
        // 0x8027C678: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8027C698;
    }
    goto skip_12;
    // 0x8027C678: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_12:
    // 0x8027C67C: lbu         $t2, 0x14($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X14);
    // 0x8027C680: beql        $t2, $zero, L_8027C698
    if (ctx->r10 == 0) {
        // 0x8027C684: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8027C698;
    }
    goto skip_13;
    // 0x8027C684: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_13:
    // 0x8027C688: jal         0x802D7394
    // 0x8027C68C: nop

    static_3_802D7394(rdram, ctx);
        goto after_10;
    // 0x8027C68C: nop

    after_10:
    // 0x8027C690: lbu         $v1, 0x6674($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X6674);
    // 0x8027C694: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8027C698:
    // 0x8027C698: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8027C69C: bne         $at, $zero, L_8027C670
    if (ctx->r1 != 0) {
        // 0x8027C6A0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027C670;
    }
    // 0x8027C6A0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027C6A4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027C6A8:
    // 0x8027C6A8: lbu         $t3, 0x6FB8($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6FB8);
    // 0x8027C6AC: blez        $t3, L_8027C6F4
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8027C6B0: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8027C6F4;
    }
    // 0x8027C6B0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027C6B4: lw          $a0, 0x6F94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6F94);
L_8027C6B8:
    // 0x8027C6B8: beql        $a0, $zero, L_8027C6DC
    if (ctx->r4 == 0) {
        // 0x8027C6BC: lbu         $t4, 0x6FB8($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6FB8);
            goto L_8027C6DC;
    }
    goto skip_14;
    // 0x8027C6BC: lbu         $t4, 0x6FB8($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6FB8);
    skip_14:
    // 0x8027C6C0: jal         0x80317E10
    // 0x8027C6C4: nop

    static_3_80317E10(rdram, ctx);
        goto after_11;
    // 0x8027C6C4: nop

    after_11:
    // 0x8027C6C8: beql        $v0, $zero, L_8027C6DC
    if (ctx->r2 == 0) {
        // 0x8027C6CC: lbu         $t4, 0x6FB8($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6FB8);
            goto L_8027C6DC;
    }
    goto skip_15;
    // 0x8027C6CC: lbu         $t4, 0x6FB8($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6FB8);
    skip_15:
    // 0x8027C6D0: jal         0x802E55DC
    // 0x8027C6D4: lw          $a0, 0x6F94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6F94);
    static_3_802E55DC(rdram, ctx);
        goto after_12;
    // 0x8027C6D4: lw          $a0, 0x6F94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6F94);
    after_12:
    // 0x8027C6D8: lbu         $t4, 0x6FB8($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6FB8);
L_8027C6DC:
    // 0x8027C6DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027C6E0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027C6E4: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8027C6E8: bnel        $at, $zero, L_8027C6B8
    if (ctx->r1 != 0) {
        // 0x8027C6EC: lw          $a0, 0x6F94($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X6F94);
            goto L_8027C6B8;
    }
    goto skip_16;
    // 0x8027C6EC: lw          $a0, 0x6F94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6F94);
    skip_16:
    // 0x8027C6F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027C6F4:
    // 0x8027C6F4: lbu         $t5, 0x6EFC($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6EFC);
    // 0x8027C6F8: blez        $t5, L_8027C73C
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8027C6FC: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_8027C73C;
    }
    // 0x8027C6FC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8027C700: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
L_8027C704:
    // 0x8027C704: beql        $a0, $zero, L_8027C728
    if (ctx->r4 == 0) {
        // 0x8027C708: lbu         $t6, 0x6EFC($s2)
        ctx->r14 = MEM_BU(ctx->r18, 0X6EFC);
            goto L_8027C728;
    }
    goto skip_17;
    // 0x8027C708: lbu         $t6, 0x6EFC($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X6EFC);
    skip_17:
    // 0x8027C70C: jal         0x80317E10
    // 0x8027C710: nop

    static_3_80317E10(rdram, ctx);
        goto after_13;
    // 0x8027C710: nop

    after_13:
    // 0x8027C714: beql        $v0, $zero, L_8027C728
    if (ctx->r2 == 0) {
        // 0x8027C718: lbu         $t6, 0x6EFC($s2)
        ctx->r14 = MEM_BU(ctx->r18, 0X6EFC);
            goto L_8027C728;
    }
    goto skip_18;
    // 0x8027C718: lbu         $t6, 0x6EFC($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X6EFC);
    skip_18:
    // 0x8027C71C: jal         0x802E55DC
    // 0x8027C720: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
    static_3_802E55DC(rdram, ctx);
        goto after_14;
    // 0x8027C720: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
    after_14:
    // 0x8027C724: lbu         $t6, 0x6EFC($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X6EFC);
L_8027C728:
    // 0x8027C728: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027C72C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8027C730: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8027C734: bnel        $at, $zero, L_8027C704
    if (ctx->r1 != 0) {
        // 0x8027C738: lw          $a0, 0x6EEC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
            goto L_8027C704;
    }
    goto skip_19;
    // 0x8027C738: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
    skip_19:
L_8027C73C:
    // 0x8027C73C: addiu       $s0, $s2, 0x365C
    ctx->r16 = ADD32(ctx->r18, 0X365C);
    // 0x8027C740: jal         0x80317E10
    // 0x8027C744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_15;
    // 0x8027C744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8027C748: beql        $v0, $zero, L_8027C75C
    if (ctx->r2 == 0) {
        // 0x8027C74C: addiu       $s0, $s2, 0x4E3C
        ctx->r16 = ADD32(ctx->r18, 0X4E3C);
            goto L_8027C75C;
    }
    goto skip_20;
    // 0x8027C74C: addiu       $s0, $s2, 0x4E3C
    ctx->r16 = ADD32(ctx->r18, 0X4E3C);
    skip_20:
    // 0x8027C750: jal         0x802E55DC
    // 0x8027C754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802E55DC(rdram, ctx);
        goto after_16;
    // 0x8027C754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8027C758: addiu       $s0, $s2, 0x4E3C
    ctx->r16 = ADD32(ctx->r18, 0X4E3C);
L_8027C75C:
    // 0x8027C75C: jal         0x80317E10
    // 0x8027C760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_17;
    // 0x8027C760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8027C764: beq         $v0, $zero, L_8027C774
    if (ctx->r2 == 0) {
        // 0x8027C768: nop
    
            goto L_8027C774;
    }
    // 0x8027C768: nop

    // 0x8027C76C: jal         0x802E55DC
    // 0x8027C770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802E55DC(rdram, ctx);
        goto after_18;
    // 0x8027C770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
L_8027C774:
    // 0x8027C774: jal         0x8031A81C
    // 0x8027C778: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8031A81C(rdram, ctx);
        goto after_19;
    // 0x8027C778: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_19:
    // 0x8027C77C: addiu       $s0, $s2, 0x70F8
    ctx->r16 = ADD32(ctx->r18, 0X70F8);
    // 0x8027C780: jal         0x80309730
    // 0x8027C784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80309730(rdram, ctx);
        goto after_20;
    // 0x8027C784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8027C788: beq         $v0, $zero, L_8027C7A4
    if (ctx->r2 == 0) {
        // 0x8027C78C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027C7A4;
    }
    // 0x8027C78C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027C790: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x8027C794: jal         0x803091EC
    // 0x8027C798: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_803091EC(rdram, ctx);
        goto after_21;
    // 0x8027C798: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_21:
    // 0x8027C79C: jal         0x80309108
    // 0x8027C7A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80309108(rdram, ctx);
        goto after_22;
    // 0x8027C7A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
L_8027C7A4:
    // 0x8027C7A4: lwc1        $f4, 0x71B4($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X71B4);
    // 0x8027C7A8: lwc1        $f6, 0x71B8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X71B8);
    // 0x8027C7AC: addiu       $a0, $s2, 0x6368
    ctx->r4 = ADD32(ctx->r18, 0X6368);
    // 0x8027C7B0: swc1        $f4, 0x7174($s2)
    MEM_W(0X7174, ctx->r18) = ctx->f4.u32l;
    // 0x8027C7B4: jal         0x802BCCAC
    // 0x8027C7B8: swc1        $f6, 0x7188($s2)
    MEM_W(0X7188, ctx->r18) = ctx->f6.u32l;
    static_3_802BCCAC(rdram, ctx);
        goto after_23;
    // 0x8027C7B8: swc1        $f6, 0x7188($s2)
    MEM_W(0X7188, ctx->r18) = ctx->f6.u32l;
    after_23:
    // 0x8027C7BC: beq         $v0, $zero, L_8027C7D0
    if (ctx->r2 == 0) {
        // 0x8027C7C0: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_8027C7D0;
    }
    // 0x8027C7C0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8027C7C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027C7C8: b           L_8027C7DC
    // 0x8027C7CC: swc1        $f0, 0x71A4($s2)
    MEM_W(0X71A4, ctx->r18) = ctx->f0.u32l;
        goto L_8027C7DC;
    // 0x8027C7CC: swc1        $f0, 0x71A4($s2)
    MEM_W(0X71A4, ctx->r18) = ctx->f0.u32l;
L_8027C7D0:
    // 0x8027C7D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8027C7D4: nop

    // 0x8027C7D8: swc1        $f0, 0x71A4($s2)
    MEM_W(0X71A4, ctx->r18) = ctx->f0.u32l;
L_8027C7DC:
    // 0x8027C7DC: lbu         $v0, 0x4B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4B);
    // 0x8027C7E0: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
    // 0x8027C7E4: lui         $at, 0x42E0
    ctx->r1 = S32(0X42E0 << 16);
    // 0x8027C7E8: bnel        $s1, $v0, L_8027C800
    if (ctx->r17 != ctx->r2) {
        // 0x8027C7EC: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8027C800;
    }
    goto skip_21;
    // 0x8027C7EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_21:
    // 0x8027C7F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8027C7F4: b           L_8027C808
    // 0x8027C7F8: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
        goto L_8027C808;
    // 0x8027C7F8: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8027C7FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_8027C800:
    // 0x8027C800: nop

    // 0x8027C804: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
L_8027C808:
    // 0x8027C808: beq         $at, $zero, L_8027C888
    if (ctx->r1 == 0) {
        // 0x8027C80C: swc1        $f0, 0x71A8($s2)
        MEM_W(0X71A8, ctx->r18) = ctx->f0.u32l;
            goto L_8027C888;
    }
    // 0x8027C80C: swc1        $f0, 0x71A8($s2)
    MEM_W(0X71A8, ctx->r18) = ctx->f0.u32l;
    // 0x8027C810: jal         0x802AFDA0
    // 0x8027C814: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802AFDA0(rdram, ctx);
        goto after_24;
    // 0x8027C814: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_24:
    // 0x8027C818: bne         $v0, $zero, L_8027C888
    if (ctx->r2 != 0) {
        // 0x8027C81C: addiu       $s0, $s2, 0x4B88
        ctx->r16 = ADD32(ctx->r18, 0X4B88);
            goto L_8027C888;
    }
    // 0x8027C81C: addiu       $s0, $s2, 0x4B88
    ctx->r16 = ADD32(ctx->r18, 0X4B88);
    // 0x8027C820: jal         0x802BCCAC
    // 0x8027C824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802BCCAC(rdram, ctx);
        goto after_25;
    // 0x8027C824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x8027C828: beql        $v0, $zero, L_8027C88C
    if (ctx->r2 == 0) {
        // 0x8027C82C: lw          $a1, 0x65FC($s2)
        ctx->r5 = MEM_W(ctx->r18, 0X65FC);
            goto L_8027C88C;
    }
    goto skip_22;
    // 0x8027C82C: lw          $a1, 0x65FC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X65FC);
    skip_22:
    // 0x8027C830: lw          $v0, 0x4E18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4E18);
    // 0x8027C834: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027C838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027C83C: beq         $v0, $at, L_8027C858
    if (ctx->r2 == ctx->r1) {
        // 0x8027C840: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_8027C858;
    }
    // 0x8027C840: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8027C844: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8027C848: beq         $v0, $at, L_8027C858
    if (ctx->r2 == ctx->r1) {
        // 0x8027C84C: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_8027C858;
    }
    // 0x8027C84C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8027C850: bnel        $v0, $at, L_8027C870
    if (ctx->r2 != ctx->r1) {
        // 0x8027C854: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_8027C870;
    }
    goto skip_23;
    // 0x8027C854: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    skip_23:
L_8027C858:
    // 0x8027C858: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x8027C85C: jal         0x802BCCB4
    // 0x8027C860: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_802BCCB4(rdram, ctx);
        goto after_26;
    // 0x8027C860: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_26:
    // 0x8027C864: b           L_8027C88C
    // 0x8027C868: lw          $a1, 0x65FC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X65FC);
        goto L_8027C88C;
    // 0x8027C868: lw          $a1, 0x65FC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X65FC);
    // 0x8027C86C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_8027C870:
    // 0x8027C870: beq         $v0, $at, L_8027C888
    if (ctx->r2 == ctx->r1) {
        // 0x8027C874: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8027C888;
    }
    // 0x8027C874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027C878: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x8027C87C: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    // 0x8027C880: jal         0x802BCCB4
    // 0x8027C884: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802BCCB4(rdram, ctx);
        goto after_27;
    // 0x8027C884: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_27:
L_8027C888:
    // 0x8027C888: lw          $a1, 0x65FC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X65FC);
L_8027C88C:
    // 0x8027C88C: beq         $a1, $zero, L_8027C8A8
    if (ctx->r5 == 0) {
        // 0x8027C890: nop
    
            goto L_8027C8A8;
    }
    // 0x8027C890: nop

    // 0x8027C894: lbu         $t7, 0x35E0($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X35E0);
    // 0x8027C898: bne         $t7, $zero, L_8027C8A8
    if (ctx->r15 != 0) {
        // 0x8027C89C: nop
    
            goto L_8027C8A8;
    }
    // 0x8027C89C: nop

    // 0x8027C8A0: jal         0x803089A4
    // 0x8027C8A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_803089A4(rdram, ctx);
        goto after_28;
    // 0x8027C8A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_28:
L_8027C8A8:
    // 0x8027C8A8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8027C8AC: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8027C8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027C8B4: bne         $s1, $t8, L_8027C8C4
    if (ctx->r17 != ctx->r24) {
        // 0x8027C8B8: nop
    
            goto L_8027C8C4;
    }
    // 0x8027C8B8: nop

    // 0x8027C8BC: b           L_8027C8C4
    // 0x8027C8C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8027C8C4;
    // 0x8027C8C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8027C8C4:
    // 0x8027C8C4: beql        $v0, $zero, L_8027C904
    if (ctx->r2 == 0) {
        // 0x8027C8C8: lbu         $t9, 0x4E38($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X4E38);
            goto L_8027C904;
    }
    goto skip_24;
    // 0x8027C8C8: lbu         $t9, 0x4E38($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X4E38);
    skip_24:
    // 0x8027C8CC: lbu         $t0, 0x4E38($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X4E38);
    // 0x8027C8D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027C8D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027C8D8: beq         $t0, $zero, L_8027C8F0
    if (ctx->r8 == 0) {
        // 0x8027C8DC: nop
    
            goto L_8027C8F0;
    }
    // 0x8027C8DC: nop

    // 0x8027C8E0: jal         0x802ABFD4
    // 0x8027C8E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802ABFD4(rdram, ctx);
        goto after_29;
    // 0x8027C8E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_29:
    // 0x8027C8E8: b           L_8027C91C
    // 0x8027C8EC: lw          $v0, 0x32A4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X32A4);
        goto L_8027C91C;
    // 0x8027C8EC: lw          $v0, 0x32A4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X32A4);
L_8027C8F0:
    // 0x8027C8F0: jal         0x802AC6F8
    // 0x8027C8F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802AC6F8(rdram, ctx);
        goto after_30;
    // 0x8027C8F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_30:
    // 0x8027C8F8: b           L_8027C91C
    // 0x8027C8FC: lw          $v0, 0x32A4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X32A4);
        goto L_8027C91C;
    // 0x8027C8FC: lw          $v0, 0x32A4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X32A4);
    // 0x8027C900: lbu         $t9, 0x4E38($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X4E38);
L_8027C904:
    // 0x8027C904: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027C908: beql        $t9, $zero, L_8027C91C
    if (ctx->r25 == 0) {
        // 0x8027C90C: lw          $v0, 0x32A4($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X32A4);
            goto L_8027C91C;
    }
    goto skip_25;
    // 0x8027C90C: lw          $v0, 0x32A4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X32A4);
    skip_25:
    // 0x8027C910: jal         0x802ABFD4
    // 0x8027C914: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802ABFD4(rdram, ctx);
        goto after_31;
    // 0x8027C914: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_31:
    // 0x8027C918: lw          $v0, 0x32A4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X32A4);
L_8027C91C:
    // 0x8027C91C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8027C920: beq         $v0, $at, L_8027C930
    if (ctx->r2 == ctx->r1) {
        // 0x8027C924: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8027C930;
    }
    // 0x8027C924: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027C928: bnel        $v0, $at, L_8027C950
    if (ctx->r2 != ctx->r1) {
        // 0x8027C92C: lbu         $t2, 0x35E0($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X35E0);
            goto L_8027C950;
    }
    goto skip_26;
    // 0x8027C92C: lbu         $t2, 0x35E0($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X35E0);
    skip_26:
L_8027C930:
    // 0x8027C930: lbu         $t1, 0x78C($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X78C);
    // 0x8027C934: beql        $t1, $zero, L_8027C964
    if (ctx->r9 == 0) {
        // 0x8027C938: addiu       $s0, $s2, 0x10
        ctx->r16 = ADD32(ctx->r18, 0X10);
            goto L_8027C964;
    }
    goto skip_27;
    // 0x8027C938: addiu       $s0, $s2, 0x10
    ctx->r16 = ADD32(ctx->r18, 0X10);
    skip_27:
    // 0x8027C93C: jal         0x802F78C4
    // 0x8027C940: addiu       $a0, $s2, 0x6D0
    ctx->r4 = ADD32(ctx->r18, 0X6D0);
    static_3_802F78C4(rdram, ctx);
        goto after_32;
    // 0x8027C940: addiu       $a0, $s2, 0x6D0
    ctx->r4 = ADD32(ctx->r18, 0X6D0);
    after_32:
    // 0x8027C944: b           L_8027C964
    // 0x8027C948: addiu       $s0, $s2, 0x10
    ctx->r16 = ADD32(ctx->r18, 0X10);
        goto L_8027C964;
    // 0x8027C948: addiu       $s0, $s2, 0x10
    ctx->r16 = ADD32(ctx->r18, 0X10);
    // 0x8027C94C: lbu         $t2, 0x35E0($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X35E0);
L_8027C950:
    // 0x8027C950: beql        $t2, $zero, L_8027C964
    if (ctx->r10 == 0) {
        // 0x8027C954: addiu       $s0, $s2, 0x10
        ctx->r16 = ADD32(ctx->r18, 0X10);
            goto L_8027C964;
    }
    goto skip_28;
    // 0x8027C954: addiu       $s0, $s2, 0x10
    ctx->r16 = ADD32(ctx->r18, 0X10);
    skip_28:
    // 0x8027C958: jal         0x8029DF88
    // 0x8027C95C: addiu       $a0, $s2, 0x3570
    ctx->r4 = ADD32(ctx->r18, 0X3570);
    static_3_8029DF88(rdram, ctx);
        goto after_33;
    // 0x8027C95C: addiu       $a0, $s2, 0x3570
    ctx->r4 = ADD32(ctx->r18, 0X3570);
    after_33:
    // 0x8027C960: addiu       $s0, $s2, 0x10
    ctx->r16 = ADD32(ctx->r18, 0X10);
L_8027C964:
    // 0x8027C964: jal         0x802FA288
    // 0x8027C968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802FA288(rdram, ctx);
        goto after_34;
    // 0x8027C968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x8027C96C: beql        $v0, $zero, L_8027C980
    if (ctx->r2 == 0) {
        // 0x8027C970: lw          $t3, 0x32A4($s2)
        ctx->r11 = MEM_W(ctx->r18, 0X32A4);
            goto L_8027C980;
    }
    goto skip_29;
    // 0x8027C970: lw          $t3, 0x32A4($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X32A4);
    skip_29:
    // 0x8027C974: jal         0x802FA4DC
    // 0x8027C978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802FA4DC(rdram, ctx);
        goto after_35;
    // 0x8027C978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x8027C97C: lw          $t3, 0x32A4($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X32A4);
L_8027C980:
    // 0x8027C980: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8027C984: beql        $t3, $at, L_8027C9F0
    if (ctx->r11 == ctx->r1) {
        // 0x8027C988: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8027C9F0;
    }
    goto skip_30;
    // 0x8027C988: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_30:
    // 0x8027C98C: lw          $a1, 0x65FC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X65FC);
    // 0x8027C990: beql        $a1, $zero, L_8027C9B0
    if (ctx->r5 == 0) {
        // 0x8027C994: lw          $t5, 0x50($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X50);
            goto L_8027C9B0;
    }
    goto skip_31;
    // 0x8027C994: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    skip_31:
    // 0x8027C998: lw          $v0, 0x6C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X6C);
    // 0x8027C99C: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8027C9A0: lh          $t4, 0x60($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X60);
    // 0x8027C9A4: jalr        $t9
    // 0x8027C9A8: addu        $a0, $t4, $a1
    ctx->r4 = ADD32(ctx->r12, ctx->r5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x8027C9A8: addu        $a0, $t4, $a1
    ctx->r4 = ADD32(ctx->r12, ctx->r5);
    after_36:
    // 0x8027C9AC: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
L_8027C9B0:
    // 0x8027C9B0: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8027C9B4: bltzl       $t5, L_8027C9DC
    if (SIGNED(ctx->r13) < 0) {
        // 0x8027C9B8: lbu         $t6, 0x3343($s2)
        ctx->r14 = MEM_BU(ctx->r18, 0X3343);
            goto L_8027C9DC;
    }
    goto skip_32;
    // 0x8027C9B8: lbu         $t6, 0x3343($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X3343);
    skip_32:
    // 0x8027C9BC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8027C9C0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8027C9C4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8027C9C8: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x8027C9CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8027C9D0: jal         0x8021CEF8
    // 0x8027C9D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021CEF8(rdram, ctx);
        goto after_37;
    // 0x8027C9D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_37:
    // 0x8027C9D8: lbu         $t6, 0x3343($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X3343);
L_8027C9DC:
    // 0x8027C9DC: beql        $t6, $zero, L_8027C9F0
    if (ctx->r14 == 0) {
        // 0x8027C9E0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8027C9F0;
    }
    goto skip_33;
    // 0x8027C9E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_33:
    // 0x8027C9E4: jal         0x802CD658
    // 0x8027C9E8: addiu       $a0, $s2, 0x32BC
    ctx->r4 = ADD32(ctx->r18, 0X32BC);
    static_3_802CD658(rdram, ctx);
        goto after_38;
    // 0x8027C9E8: addiu       $a0, $s2, 0x32BC
    ctx->r4 = ADD32(ctx->r18, 0X32BC);
    after_38:
    // 0x8027C9EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8027C9F0:
    // 0x8027C9F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8027C9F4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8027C9F8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8027C9FC: jr          $ra
    // 0x8027CA00: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8027CA00: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void D_80223F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223F20: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223F24: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223F28: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223F2C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80223F30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80223F34: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80223F38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223F3C: and         $t8, $t7, $a1
    ctx->r24 = ctx->r15 & ctx->r5;
    // 0x80223F40: beq         $t8, $zero, L_80223F50
    if (ctx->r24 == 0) {
        // 0x80223F44: nop
    
            goto L_80223F50;
    }
    // 0x80223F44: nop

    // 0x80223F48: jr          $ra
    // 0x80223F4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80223F4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223F50:
    // 0x80223F50: jr          $ra
    // 0x80223F54: nop

    return;
    // 0x80223F54: nop

;}
RECOMP_FUNC void func_80245A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245A80: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80245A84: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80245A88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80245A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245A90: bne         $t6, $zero, L_80245AA0
    if (ctx->r14 != 0) {
        // 0x80245A94: nop
    
            goto L_80245AA0;
    }
    // 0x80245A94: nop

    // 0x80245A98: jal         0x80245A80
    // 0x80245A9C: nop

    func_80245A80(rdram, ctx);
        goto after_0;
    // 0x80245A9C: nop

    after_0:
L_80245AA0:
    // 0x80245AA0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80245AA4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80245AA8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80245AAC: jal         0x802374B0
    // 0x80245AB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_1;
    // 0x80245AB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80245AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245AB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80245ABC: jr          $ra
    // 0x80245AC0: nop

    return;
    // 0x80245AC0: nop

;}
RECOMP_FUNC void D_802D2150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D21D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D21D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D21D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D21DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D21E0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802D21E4: jal         0x80301EA0
    // 0x802D21E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D21E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802D21EC: beq         $v0, $zero, L_802D2260
    if (ctx->r2 == 0) {
        // 0x802D21F0: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_802D2260;
    }
    // 0x802D21F0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802D21F4: lbu         $t7, 0x4($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4);
    // 0x802D21F8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802D21FC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802D2200: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x802D2204: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x802D2208: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802D220C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D2210: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D2214: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802D2218: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802D221C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802D2220: nop

    // 0x802D2224: bc1fl       L_802D2238
    if (!c1cs) {
        // 0x802D2228: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_802D2238;
    }
    goto skip_0;
    // 0x802D2228: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x802D222C: b           L_802D2250
    // 0x802D2230: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802D2250;
    // 0x802D2230: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802D2234: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_802D2238:
    // 0x802D2238: nop

    // 0x802D223C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802D2240: nop

    // 0x802D2244: bc1fl       L_802D2254
    if (!c1cs) {
        // 0x802D2248: swc1        $f0, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
            goto L_802D2254;
    }
    goto skip_1;
    // 0x802D2248: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    skip_1:
    // 0x802D224C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802D2250:
    // 0x802D2250: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
L_802D2254:
    // 0x802D2254: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D2258: jal         0x80201A18
    // 0x802D225C: lbu         $a0, 0x4($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X4);
    static_3_80201A18(rdram, ctx);
        goto after_1;
    // 0x802D225C: lbu         $a0, 0x4($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X4);
    after_1:
L_802D2260:
    // 0x802D2260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2268: jr          $ra
    // 0x802D226C: nop

    return;
    // 0x802D226C: nop

;}
RECOMP_FUNC void D_802D2BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2C5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D2C60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D2C64: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802D2C68: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802D2C6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802D2C70: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802D2C74: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x802D2C78: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802D2C7C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D2C80: bnel        $t6, $zero, L_802D2C9C
    if (ctx->r14 != 0) {
        // 0x802D2C84: lbu         $v0, 0x48($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X48);
            goto L_802D2C9C;
    }
    goto skip_0;
    // 0x802D2C84: lbu         $v0, 0x48($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X48);
    skip_0:
    // 0x802D2C88: jal         0x80231A24
    // 0x802D2C8C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D2C8C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D2C90: b           L_802D2CE0
    // 0x802D2C94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802D2CE0;
    // 0x802D2C94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D2C98: lbu         $v0, 0x48($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X48);
L_802D2C9C:
    // 0x802D2C9C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802D2CA0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x802D2CA4: blez        $v0, L_802D2CDC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802D2CA8: addiu       $s3, $zero, 0xFF
        ctx->r19 = ADD32(0, 0XFF);
            goto L_802D2CDC;
    }
    // 0x802D2CA8: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_802D2CAC:
    // 0x802D2CAC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802D2CB0: beql        $s3, $a1, L_802D2CD0
    if (ctx->r19 == ctx->r5) {
        // 0x802D2CB4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802D2CD0;
    }
    goto skip_1;
    // 0x802D2CB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x802D2CB8: lw          $a0, 0x4C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4C);
    // 0x802D2CBC: lw          $a2, 0x30($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X30);
    // 0x802D2CC0: jal         0x80302988
    // 0x802D2CC4: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x802D2CC4: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    after_1:
    // 0x802D2CC8: lbu         $v0, 0x48($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X48);
    // 0x802D2CCC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802D2CD0:
    // 0x802D2CD0: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802D2CD4: bne         $at, $zero, L_802D2CAC
    if (ctx->r1 != 0) {
        // 0x802D2CD8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802D2CAC;
    }
    // 0x802D2CD8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802D2CDC:
    // 0x802D2CDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D2CE0:
    // 0x802D2CE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802D2CE4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802D2CE8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802D2CEC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802D2CF0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802D2CF4: jr          $ra
    // 0x802D2CF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802D2CF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80283D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283DD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283DD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283DDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80283DE0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80283DE4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80283DE8: jal         0x802D5100
    // 0x80283DEC: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    static_3_802D5100(rdram, ctx);
        goto after_0;
    // 0x80283DEC: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x80283DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283DF8: jr          $ra
    // 0x80283DFC: nop

    return;
    // 0x80283DFC: nop

;}
RECOMP_FUNC void D_8027A440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A4B8: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8027A4BC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8027A4C0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8027A4C4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8027A4C8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8027A4CC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8027A4D0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8027A4D4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8027A4D8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8027A4DC: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x8027A4E0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8027A4E4: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x8027A4E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027A4EC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8027A4F0: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
    // 0x8027A4F4: addiu       $s3, $zero, 0x1C
    ctx->r19 = ADD32(0, 0X1C);
L_8027A4F8:
    // 0x8027A4F8: lw          $a0, 0x6834($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6834);
    // 0x8027A4FC: beql        $a0, $zero, L_8027A540
    if (ctx->r4 == 0) {
        // 0x8027A500: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027A540;
    }
    goto skip_0;
    // 0x8027A500: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x8027A504: lbu         $t6, 0x30D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30D);
    // 0x8027A508: beql        $t6, $zero, L_8027A540
    if (ctx->r14 == 0) {
        // 0x8027A50C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027A540;
    }
    goto skip_1;
    // 0x8027A50C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_1:
    // 0x8027A510: jal         0x80320518
    // 0x8027A514: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80320518(rdram, ctx);
        goto after_0;
    // 0x8027A514: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x8027A518: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8027A51C: jal         0x802CF954
    // 0x8027A520: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    static_3_802CF954(rdram, ctx);
        goto after_1;
    // 0x8027A520: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x8027A524: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8027A528: nop

    // 0x8027A52C: bc1fl       L_8027A540
    if (!c1cs) {
        // 0x8027A530: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8027A540;
    }
    goto skip_2;
    // 0x8027A530: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_2:
    // 0x8027A534: b           L_8027A58C
    // 0x8027A538: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8027A58C;
    // 0x8027A538: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027A53C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8027A540:
    // 0x8027A540: bne         $s0, $s3, L_8027A4F8
    if (ctx->r16 != ctx->r19) {
        // 0x8027A544: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8027A4F8;
    }
    // 0x8027A544: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8027A548: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x8027A54C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8027A550: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8027A554: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8027A558: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8027A55C: addiu       $a0, $t7, 0x6834
    ctx->r4 = ADD32(ctx->r15, 0X6834);
    // 0x8027A560: addiu       $a1, $t7, 0x6850
    ctx->r5 = ADD32(ctx->r15, 0X6850);
    // 0x8027A564: jal         0x802A27D0
    // 0x8027A568: addiu       $a3, $t7, 0x6851
    ctx->r7 = ADD32(ctx->r15, 0X6851);
    static_3_802A27D0(rdram, ctx);
        goto after_2;
    // 0x8027A568: addiu       $a3, $t7, 0x6851
    ctx->r7 = ADD32(ctx->r15, 0X6851);
    after_2:
    // 0x8027A56C: beq         $v0, $zero, L_8027A588
    if (ctx->r2 == 0) {
        // 0x8027A570: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8027A588;
    }
    // 0x8027A570: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027A574: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A578: jal         0x80320418
    // 0x8027A57C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    static_3_80320418(rdram, ctx);
        goto after_3;
    // 0x8027A57C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x8027A580: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8027A584: sh          $t9, 0x30C($s0)
    MEM_H(0X30C, ctx->r16) = ctx->r25;
L_8027A588:
    // 0x8027A588: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8027A58C:
    // 0x8027A58C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A590: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8027A594: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8027A598: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A59C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8027A5A0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8027A5A4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8027A5A8: jr          $ra
    // 0x8027A5AC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8027A5AC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void D_802E9278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E92F8: jr          $ra
    // 0x802E92FC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    return;
    // 0x802E92FC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void D_80224C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80224C58: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80224C5C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80224C60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80224C64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80224C68: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80224C6C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80224C70: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80224C74: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80224C78: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80224C7C: jal         0x802235C8
    // 0x80224C80: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    static_3_802235C8(rdram, ctx);
        goto after_0;
    // 0x80224C80: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80224C84: jal         0x80207210
    // 0x80224C88: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    func_80207210(rdram, ctx);
        goto after_1;
    // 0x80224C88: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    after_1:
    // 0x80224C8C: jal         0x8022D040
    // 0x80224C90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8022D040(rdram, ctx);
        goto after_2;
    // 0x80224C90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80224C94: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80224C98: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80224C9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224CA0: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    // 0x80224CA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224CA8: addiu       $t7, $sp, 0x58
    ctx->r15 = ADD32(ctx->r29, 0X58);
    // 0x80224CAC: lui         $a0, 0x5556
    ctx->r4 = S32(0X5556 << 16);
    // 0x80224CB0: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x80224CB4: ori         $a0, $a0, 0x4C56
    ctx->r4 = ctx->r4 | 0X4C56;
    // 0x80224CB8: jal         0x80224ABC
    // 0x80224CBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_3;
    // 0x80224CBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80224CC0: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80224CC4: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80224CC8: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x80224CCC: bne         $v0, $zero, L_80224CEC
    if (ctx->r2 != 0) {
        // 0x80224CD0: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_80224CEC;
    }
    // 0x80224CD0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80224CD4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224CD8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80224CDC: jal         0x80231A24
    // 0x80224CE0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80224CE0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80224CE4: b           L_802253B0
    // 0x80224CE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802253B0;
    // 0x80224CE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80224CEC:
    // 0x80224CEC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80224CF0: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80224CF4: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x80224CF8: lhu         $a1, 0xC($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0XC);
    // 0x80224CFC: slt         $at, $t8, $a1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224D00: beq         $at, $zero, L_80224D10
    if (ctx->r1 == 0) {
        // 0x80224D04: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80224D10;
    }
    // 0x80224D04: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224D08: jal         0x80231A24
    // 0x80224D0C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x80224D0C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_5:
L_80224D10:
    // 0x80224D10: lhu         $a2, 0x14($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X14);
    // 0x80224D14: lhu         $t9, 0xE($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XE);
    // 0x80224D18: slt         $at, $t9, $a2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80224D1C: beq         $at, $zero, L_80224D30
    if (ctx->r1 == 0) {
        // 0x80224D20: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80224D30;
    }
    // 0x80224D20: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224D24: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80224D28: jal         0x80231A24
    // 0x80224D2C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x80224D2C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_6:
L_80224D30:
    // 0x80224D30: lhu         $a1, 0x1C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X1C);
    // 0x80224D34: lhu         $t1, 0x10($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X10);
    // 0x80224D38: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224D3C: beq         $at, $zero, L_80224D4C
    if (ctx->r1 == 0) {
        // 0x80224D40: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80224D4C;
    }
    // 0x80224D40: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224D44: jal         0x80231A24
    // 0x80224D48: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_7;
    // 0x80224D48: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_7:
L_80224D4C:
    // 0x80224D4C: lhu         $a2, 0x24($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X24);
    // 0x80224D50: lhu         $t2, 0x12($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X12);
    // 0x80224D54: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80224D58: beq         $at, $zero, L_80224D6C
    if (ctx->r1 == 0) {
        // 0x80224D5C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80224D6C;
    }
    // 0x80224D5C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224D60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80224D64: jal         0x80231A24
    // 0x80224D68: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_8;
    // 0x80224D68: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_8:
L_80224D6C:
    // 0x80224D6C: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
    // 0x80224D70: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x80224D74: slt         $at, $t3, $s5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80224D78: beq         $at, $zero, L_80224D8C
    if (ctx->r1 == 0) {
        // 0x80224D7C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80224D8C;
    }
    // 0x80224D7C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224D80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80224D84: jal         0x80231A24
    // 0x80224D88: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_9;
    // 0x80224D88: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_9:
L_80224D8C:
    // 0x80224D8C: lhu         $a1, 0x4($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4);
    // 0x80224D90: lhu         $t4, 0xA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XA);
    // 0x80224D94: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224D98: beq         $at, $zero, L_80224DA8
    if (ctx->r1 == 0) {
        // 0x80224D9C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80224DA8;
    }
    // 0x80224D9C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224DA0: jal         0x80231A24
    // 0x80224DA4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_10;
    // 0x80224DA4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_10:
L_80224DA8:
    // 0x80224DA8: lhu         $a1, 0x3C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X3C);
    // 0x80224DAC: lhu         $t5, 0x1C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X1C);
    // 0x80224DB0: slt         $at, $t5, $a1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224DB4: beq         $at, $zero, L_80224DC4
    if (ctx->r1 == 0) {
        // 0x80224DB8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80224DC4;
    }
    // 0x80224DB8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224DBC: jal         0x80231A24
    // 0x80224DC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_11;
    // 0x80224DC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_11:
L_80224DC4:
    // 0x80224DC4: lhu         $a1, 0x4C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4C);
    // 0x80224DC8: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x80224DCC: slt         $at, $t6, $a1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224DD0: beq         $at, $zero, L_80224DE0
    if (ctx->r1 == 0) {
        // 0x80224DD4: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80224DE0;
    }
    // 0x80224DD4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224DD8: jal         0x80231A24
    // 0x80224DDC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_12;
    // 0x80224DDC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_12:
L_80224DE0:
    // 0x80224DE0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80224DE4: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80224DE8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80224DEC: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80224DF0: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
    // 0x80224DF4: blez        $s5, L_80224ED8
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80224DF8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80224ED8;
    }
    // 0x80224DF8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80224DFC:
    // 0x80224DFC: lw          $t7, 0x28($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X28);
    // 0x80224E00: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80224E04: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x80224E08: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x80224E0C: lhu         $a3, 0x0($t8)
    ctx->r7 = MEM_HU(ctx->r24, 0X0);
    // 0x80224E10: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80224E14: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80224E18: beq         $a2, $zero, L_80224E64
    if (ctx->r6 == 0) {
        // 0x80224E1C: or          $s3, $a3, $zero
        ctx->r19 = ctx->r7 | 0;
            goto L_80224E64;
    }
    // 0x80224E1C: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x80224E20: lhu         $a1, 0x0($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X0);
    // 0x80224E24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80224E28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80224E2C: blezl       $a1, L_80224E68
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80224E30: sll         $s0, $a3, 2
        ctx->r16 = S32(ctx->r7 << 2);
            goto L_80224E68;
    }
    goto skip_0;
    // 0x80224E30: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    skip_0:
    // 0x80224E34: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
L_80224E38:
    // 0x80224E38: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x80224E3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80224E40: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224E44: bne         $a3, $t9, L_80224E5C
    if (ctx->r7 != ctx->r25) {
        // 0x80224E48: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80224E5C;
    }
    // 0x80224E48: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80224E4C: lw          $t1, 0x8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X8);
    // 0x80224E50: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x80224E54: b           L_80224E64
    // 0x80224E58: lhu         $s3, 0x0($t2)
    ctx->r19 = MEM_HU(ctx->r10, 0X0);
        goto L_80224E64;
    // 0x80224E58: lhu         $s3, 0x0($t2)
    ctx->r19 = MEM_HU(ctx->r10, 0X0);
L_80224E5C:
    // 0x80224E5C: bne         $at, $zero, L_80224E38
    if (ctx->r1 != 0) {
        // 0x80224E60: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_80224E38;
    }
    // 0x80224E60: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_80224E64:
    // 0x80224E64: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
L_80224E68:
    // 0x80224E68: addu        $v0, $t0, $s0
    ctx->r2 = ADD32(ctx->r8, ctx->r16);
    // 0x80224E6C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80224E70: sll         $t4, $s3, 2
    ctx->r12 = S32(ctx->r19 << 2);
    // 0x80224E74: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80224E78: bnel        $t3, $zero, L_80224EC0
    if (ctx->r11 != 0) {
        // 0x80224E7C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80224EC0;
    }
    goto skip_1;
    // 0x80224E7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x80224E80: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x80224E84: lui         $a0, 0x5556
    ctx->r4 = S32(0X5556 << 16);
    // 0x80224E88: ori         $a0, $a0, 0x5449
    ctx->r4 = ctx->r4 | 0X5449;
    // 0x80224E8C: beq         $v1, $zero, L_80224EA0
    if (ctx->r3 == 0) {
        // 0x80224E90: nop
    
            goto L_80224EA0;
    }
    // 0x80224E90: nop

    // 0x80224E94: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80224E98: b           L_80224EBC
    // 0x80224E9C: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
        goto L_80224EBC;
    // 0x80224E9C: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
L_80224EA0:
    // 0x80224EA0: jal         0x80224ABC
    // 0x80224EA4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_13;
    // 0x80224EA4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_13:
    // 0x80224EA8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80224EAC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80224EB0: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80224EB4: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80224EB8: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
L_80224EBC:
    // 0x80224EBC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80224EC0:
    // 0x80224EC0: slt         $at, $s2, $s5
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80224EC4: bne         $at, $zero, L_80224DFC
    if (ctx->r1 != 0) {
        // 0x80224EC8: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80224DFC;
    }
    // 0x80224EC8: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80224ECC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80224ED0: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80224ED4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80224ED8:
    // 0x80224ED8: jal         0x8022BBAC
    // 0x80224EDC: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    static_3_8022BBAC(rdram, ctx);
        goto after_14;
    // 0x80224EDC: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_14:
    // 0x80224EE0: lhu         $a1, 0xC($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0XC);
    // 0x80224EE4: blez        $a1, L_80224F48
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80224EE8: lui         $s3, 0x5556
        ctx->r19 = S32(0X5556 << 16);
            goto L_80224F48;
    }
    // 0x80224EE8: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x80224EEC: ori         $s3, $s3, 0x4C54
    ctx->r19 = ctx->r19 | 0X4C54;
    // 0x80224EF0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80224EF4:
    // 0x80224EF4: lw          $t8, 0x8($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X8);
    // 0x80224EF8: lw          $t1, 0xC($s6)
    ctx->r9 = MEM_W(ctx->r22, 0XC);
    // 0x80224EFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80224F00: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x80224F04: lhu         $a3, 0x0($t9)
    ctx->r7 = MEM_HU(ctx->r25, 0X0);
    // 0x80224F08: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80224F0C: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80224F10: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80224F14: bnel        $t3, $zero, L_80224F38
    if (ctx->r11 != 0) {
        // 0x80224F18: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80224F38;
    }
    goto skip_2;
    // 0x80224F18: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x80224F1C: jal         0x80224ABC
    // 0x80224F20: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_15;
    // 0x80224F20: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_15:
    // 0x80224F24: lw          $t4, 0xC($s6)
    ctx->r12 = MEM_W(ctx->r22, 0XC);
    // 0x80224F28: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x80224F2C: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x80224F30: lhu         $a1, 0xC($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0XC);
    // 0x80224F34: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80224F38:
    // 0x80224F38: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80224F3C: bne         $at, $zero, L_80224EF4
    if (ctx->r1 != 0) {
        // 0x80224F40: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80224EF4;
    }
    // 0x80224F40: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80224F44: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80224F48:
    // 0x80224F48: sw          $a1, 0x10($s6)
    MEM_W(0X10, ctx->r22) = ctx->r5;
    // 0x80224F4C: lhu         $a2, 0x14($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X14);
    // 0x80224F50: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80224F54: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80224F58: blez        $a2, L_80224FD0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80224F5C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80224FD0;
    }
    // 0x80224F5C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80224F60: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x80224F64: ori         $s3, $s3, 0x454E
    ctx->r19 = ctx->r19 | 0X454E;
    // 0x80224F68: lw          $t6, 0x10($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X10);
L_80224F6C:
    // 0x80224F6C: lw          $t8, 0x14($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X14);
    // 0x80224F70: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80224F74: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x80224F78: lhu         $a3, 0x0($t7)
    ctx->r7 = MEM_HU(ctx->r15, 0X0);
    // 0x80224F7C: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80224F80: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80224F84: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x80224F88: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80224F8C: bne         $a2, $zero, L_80224FAC
    if (ctx->r6 != 0) {
        // 0x80224F90: nop
    
            goto L_80224FAC;
    }
    // 0x80224F90: nop

    // 0x80224F94: jal         0x80224ABC
    // 0x80224F98: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_16;
    // 0x80224F98: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_16:
    // 0x80224F9C: lw          $t1, 0x14($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X14);
    // 0x80224FA0: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80224FA4: b           L_80224FB4
    // 0x80224FA8: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
        goto L_80224FB4;
    // 0x80224FA8: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
L_80224FAC:
    // 0x80224FAC: jal         0x80231A24
    // 0x80224FB0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_17;
    // 0x80224FB0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_17:
L_80224FB4:
    // 0x80224FB4: lhu         $a2, 0x14($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X14);
    // 0x80224FB8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80224FBC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80224FC0: slt         $at, $s2, $a2
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80224FC4: bnel        $at, $zero, L_80224F6C
    if (ctx->r1 != 0) {
        // 0x80224FC8: lw          $t6, 0x10($s4)
        ctx->r14 = MEM_W(ctx->r20, 0X10);
            goto L_80224F6C;
    }
    goto skip_3;
    // 0x80224FC8: lw          $t6, 0x10($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X10);
    skip_3:
    // 0x80224FCC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80224FD0:
    // 0x80224FD0: sw          $a2, 0x18($s6)
    MEM_W(0X18, ctx->r22) = ctx->r6;
    // 0x80224FD4: lhu         $a1, 0x1C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X1C);
    // 0x80224FD8: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x80224FDC: ori         $s3, $s3, 0x4D44
    ctx->r19 = ctx->r19 | 0X4D44;
    // 0x80224FE0: blez        $a1, L_8022503C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80224FE4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8022503C;
    }
    // 0x80224FE4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80224FE8:
    // 0x80224FE8: lw          $t3, 0x18($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X18);
    // 0x80224FEC: lw          $t5, 0x1C($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X1C);
    // 0x80224FF0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80224FF4: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x80224FF8: lhu         $a3, 0x0($t4)
    ctx->r7 = MEM_HU(ctx->r12, 0X0);
    // 0x80224FFC: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80225000: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x80225004: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80225008: bnel        $t7, $zero, L_8022502C
    if (ctx->r15 != 0) {
        // 0x8022500C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022502C;
    }
    goto skip_4;
    // 0x8022500C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
    // 0x80225010: jal         0x80224ABC
    // 0x80225014: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_18;
    // 0x80225014: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_18:
    // 0x80225018: lw          $t8, 0x1C($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X1C);
    // 0x8022501C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80225020: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x80225024: lhu         $a1, 0x1C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X1C);
    // 0x80225028: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022502C:
    // 0x8022502C: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80225030: bne         $at, $zero, L_80224FE8
    if (ctx->r1 != 0) {
        // 0x80225034: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80224FE8;
    }
    // 0x80225034: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80225038: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8022503C:
    // 0x8022503C: sw          $a1, 0x20($s6)
    MEM_W(0X20, ctx->r22) = ctx->r5;
    // 0x80225040: lhu         $a2, 0x24($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X24);
    // 0x80225044: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x80225048: ori         $s3, $s3, 0x4354
    ctx->r19 = ctx->r19 | 0X4354;
    // 0x8022504C: blez        $a2, L_802250A8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80225050: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802250A8;
    }
    // 0x80225050: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80225054:
    // 0x80225054: lw          $t1, 0x20($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X20);
    // 0x80225058: lw          $t3, 0x24($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X24);
    // 0x8022505C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80225060: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x80225064: lhu         $a3, 0x0($t2)
    ctx->r7 = MEM_HU(ctx->r10, 0X0);
    // 0x80225068: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x8022506C: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80225070: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80225074: bnel        $t5, $zero, L_80225098
    if (ctx->r13 != 0) {
        // 0x80225078: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80225098;
    }
    goto skip_5;
    // 0x80225078: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x8022507C: jal         0x80224ABC
    // 0x80225080: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_19;
    // 0x80225080: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_19:
    // 0x80225084: lw          $t6, 0x24($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X24);
    // 0x80225088: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8022508C: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80225090: lhu         $a2, 0x24($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X24);
    // 0x80225094: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80225098:
    // 0x80225098: slt         $at, $s2, $a2
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8022509C: bne         $at, $zero, L_80225054
    if (ctx->r1 != 0) {
        // 0x802250A0: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80225054;
    }
    // 0x802250A0: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x802250A4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802250A8:
    // 0x802250A8: sw          $a2, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r6;
    // 0x802250AC: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
    // 0x802250B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802250B4: blezl       $s5, L_8022517C
    if (SIGNED(ctx->r21) <= 0) {
        // 0x802250B8: sw          $s5, 0x30($s6)
        MEM_W(0X30, ctx->r22) = ctx->r21;
            goto L_8022517C;
    }
    goto skip_6;
    // 0x802250B8: sw          $s5, 0x30($s6)
    MEM_W(0X30, ctx->r22) = ctx->r21;
    skip_6:
L_802250BC:
    // 0x802250BC: lw          $t8, 0x28($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X28);
    // 0x802250C0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802250C4: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x802250C8: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x802250CC: lhu         $a3, 0x0($t9)
    ctx->r7 = MEM_HU(ctx->r25, 0X0);
    // 0x802250D0: lw          $t0, 0x2C($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X2C);
    // 0x802250D4: beq         $a2, $zero, L_80225120
    if (ctx->r6 == 0) {
        // 0x802250D8: or          $s3, $a3, $zero
        ctx->r19 = ctx->r7 | 0;
            goto L_80225120;
    }
    // 0x802250D8: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x802250DC: lhu         $a1, 0x0($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X0);
    // 0x802250E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802250E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802250E8: blezl       $a1, L_80225124
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802250EC: sll         $s0, $a3, 2
        ctx->r16 = S32(ctx->r7 << 2);
            goto L_80225124;
    }
    goto skip_7;
    // 0x802250EC: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    skip_7:
    // 0x802250F0: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
L_802250F4:
    // 0x802250F4: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x802250F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802250FC: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80225100: bne         $a3, $t1, L_80225118
    if (ctx->r7 != ctx->r9) {
        // 0x80225104: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80225118;
    }
    // 0x80225104: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80225108: lw          $t2, 0x8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X8);
    // 0x8022510C: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x80225110: b           L_80225120
    // 0x80225114: lhu         $s3, 0x0($t3)
    ctx->r19 = MEM_HU(ctx->r11, 0X0);
        goto L_80225120;
    // 0x80225114: lhu         $s3, 0x0($t3)
    ctx->r19 = MEM_HU(ctx->r11, 0X0);
L_80225118:
    // 0x80225118: bne         $at, $zero, L_802250F4
    if (ctx->r1 != 0) {
        // 0x8022511C: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_802250F4;
    }
    // 0x8022511C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_80225120:
    // 0x80225120: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
L_80225124:
    // 0x80225124: addu        $t4, $t0, $s0
    ctx->r12 = ADD32(ctx->r8, ctx->r16);
    // 0x80225128: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8022512C: lui         $a0, 0x5556
    ctx->r4 = S32(0X5556 << 16);
    // 0x80225130: ori         $a0, $a0, 0x5458
    ctx->r4 = ctx->r4 | 0X5458;
    // 0x80225134: bnel        $t5, $zero, L_80225168
    if (ctx->r13 != 0) {
        // 0x80225138: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80225168;
    }
    goto skip_8;
    // 0x80225138: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_8:
    // 0x8022513C: jal         0x80224ABC
    // 0x80225140: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_20;
    // 0x80225140: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_20:
    // 0x80225144: lw          $t6, 0x2C($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X2C);
    // 0x80225148: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8022514C: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80225150: lw          $t8, 0x2C($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X2C);
    // 0x80225154: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80225158: jal         0x80234800
    // 0x8022515C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    static_3_80234800(rdram, ctx);
        goto after_21;
    // 0x8022515C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_21:
    // 0x80225160: lhu         $s5, 0x2C($s4)
    ctx->r21 = MEM_HU(ctx->r20, 0X2C);
    // 0x80225164: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80225168:
    // 0x80225168: slt         $at, $s2, $s5
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8022516C: bne         $at, $zero, L_802250BC
    if (ctx->r1 != 0) {
        // 0x80225170: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_802250BC;
    }
    // 0x80225170: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80225174: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80225178: sw          $s5, 0x30($s6)
    MEM_W(0X30, ctx->r22) = ctx->r21;
L_8022517C:
    // 0x8022517C: lhu         $a1, 0x4($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4);
    // 0x80225180: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x80225184: ori         $s3, $s3, 0x5452
    ctx->r19 = ctx->r19 | 0X5452;
    // 0x80225188: blez        $a1, L_802251E4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8022518C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802251E4;
    }
    // 0x8022518C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80225190:
    // 0x80225190: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x80225194: lw          $t3, 0x4($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X4);
    // 0x80225198: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8022519C: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x802251A0: lhu         $a3, 0x0($t2)
    ctx->r7 = MEM_HU(ctx->r10, 0X0);
    // 0x802251A4: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x802251A8: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x802251AC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x802251B0: bnel        $t5, $zero, L_802251D4
    if (ctx->r13 != 0) {
        // 0x802251B4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802251D4;
    }
    goto skip_9;
    // 0x802251B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_9:
    // 0x802251B8: jal         0x80224ABC
    // 0x802251BC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_22;
    // 0x802251BC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_22:
    // 0x802251C0: lw          $t6, 0x4($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X4);
    // 0x802251C4: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x802251C8: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x802251CC: lhu         $a1, 0x4($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4);
    // 0x802251D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802251D4:
    // 0x802251D4: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802251D8: bne         $at, $zero, L_80225190
    if (ctx->r1 != 0) {
        // 0x802251DC: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80225190;
    }
    // 0x802251DC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x802251E0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802251E4:
    // 0x802251E4: sw          $a1, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r5;
    // 0x802251E8: lhu         $v1, 0x34($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X34);
    // 0x802251EC: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x802251F0: ori         $s3, $s3, 0x5351
    ctx->r19 = ctx->r19 | 0X5351;
    // 0x802251F4: blez        $v1, L_80225250
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802251F8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80225250;
    }
    // 0x802251F8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802251FC:
    // 0x802251FC: lw          $t8, 0x30($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X30);
    // 0x80225200: lw          $t1, 0x34($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X34);
    // 0x80225204: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80225208: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8022520C: lhu         $a3, 0x0($t9)
    ctx->r7 = MEM_HU(ctx->r25, 0X0);
    // 0x80225210: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80225214: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80225218: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8022521C: bnel        $t3, $zero, L_80225240
    if (ctx->r11 != 0) {
        // 0x80225220: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80225240;
    }
    goto skip_10;
    // 0x80225220: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_10:
    // 0x80225224: jal         0x80224ABC
    // 0x80225228: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_23;
    // 0x80225228: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_23:
    // 0x8022522C: lw          $t4, 0x34($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X34);
    // 0x80225230: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x80225234: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x80225238: lhu         $v1, 0x34($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X34);
    // 0x8022523C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80225240:
    // 0x80225240: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80225244: bne         $at, $zero, L_802251FC
    if (ctx->r1 != 0) {
        // 0x80225248: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_802251FC;
    }
    // 0x80225248: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8022524C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80225250:
    // 0x80225250: sw          $v1, 0x38($s6)
    MEM_W(0X38, ctx->r22) = ctx->r3;
    // 0x80225254: lhu         $a1, 0x3C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X3C);
    // 0x80225258: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x8022525C: ori         $s3, $s3, 0x414E
    ctx->r19 = ctx->r19 | 0X414E;
    // 0x80225260: blez        $a1, L_802252BC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80225264: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802252BC;
    }
    // 0x80225264: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80225268:
    // 0x80225268: lw          $t6, 0x38($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X38);
    // 0x8022526C: lw          $t8, 0x3C($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X3C);
    // 0x80225270: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80225274: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x80225278: lhu         $a3, 0x0($t7)
    ctx->r7 = MEM_HU(ctx->r15, 0X0);
    // 0x8022527C: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80225280: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80225284: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x80225288: bnel        $t1, $zero, L_802252AC
    if (ctx->r9 != 0) {
        // 0x8022528C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802252AC;
    }
    goto skip_11;
    // 0x8022528C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_11:
    // 0x80225290: jal         0x80224ABC
    // 0x80225294: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_24;
    // 0x80225294: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_24:
    // 0x80225298: lw          $t2, 0x3C($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X3C);
    // 0x8022529C: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x802252A0: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x802252A4: lhu         $a1, 0x3C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X3C);
    // 0x802252A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802252AC:
    // 0x802252AC: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802252B0: bne         $at, $zero, L_80225268
    if (ctx->r1 != 0) {
        // 0x802252B4: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80225268;
    }
    // 0x802252B4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x802252B8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_802252BC:
    // 0x802252BC: lhu         $v1, 0x44($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X44);
    // 0x802252C0: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x802252C4: ori         $s3, $s3, 0x4654
    ctx->r19 = ctx->r19 | 0X4654;
    // 0x802252C8: blez        $v1, L_80225324
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802252CC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80225324;
    }
    // 0x802252CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802252D0:
    // 0x802252D0: lw          $t4, 0x40($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X40);
    // 0x802252D4: lw          $t6, 0x44($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X44);
    // 0x802252D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802252DC: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x802252E0: lhu         $a3, 0x0($t5)
    ctx->r7 = MEM_HU(ctx->r13, 0X0);
    // 0x802252E4: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x802252E8: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x802252EC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x802252F0: bnel        $t8, $zero, L_80225314
    if (ctx->r24 != 0) {
        // 0x802252F4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80225314;
    }
    goto skip_12;
    // 0x802252F4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_12:
    // 0x802252F8: jal         0x80224ABC
    // 0x802252FC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_25;
    // 0x802252FC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_25:
    // 0x80225300: lw          $t9, 0x44($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X44);
    // 0x80225304: addu        $t1, $t9, $s0
    ctx->r9 = ADD32(ctx->r25, ctx->r16);
    // 0x80225308: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x8022530C: lhu         $v1, 0x44($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X44);
    // 0x80225310: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80225314:
    // 0x80225314: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80225318: bne         $at, $zero, L_802252D0
    if (ctx->r1 != 0) {
        // 0x8022531C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_802252D0;
    }
    // 0x8022531C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80225320: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80225324:
    // 0x80225324: lhu         $a1, 0x4C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4C);
    // 0x80225328: lui         $s3, 0x5556
    ctx->r19 = S32(0X5556 << 16);
    // 0x8022532C: ori         $s3, $s3, 0x4254
    ctx->r19 = ctx->r19 | 0X4254;
    // 0x80225330: blez        $a1, L_80225388
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80225334: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80225388;
    }
    // 0x80225334: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80225338:
    // 0x80225338: lw          $t2, 0x48($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X48);
    // 0x8022533C: lw          $t4, 0x4C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X4C);
    // 0x80225340: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80225344: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x80225348: lhu         $a3, 0x0($t3)
    ctx->r7 = MEM_HU(ctx->r11, 0X0);
    // 0x8022534C: sll         $s0, $a3, 2
    ctx->r16 = S32(ctx->r7 << 2);
    // 0x80225350: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x80225354: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80225358: bnel        $t6, $zero, L_8022537C
    if (ctx->r14 != 0) {
        // 0x8022535C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022537C;
    }
    goto skip_13;
    // 0x8022535C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_13:
    // 0x80225360: jal         0x80224ABC
    // 0x80225364: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80224ABC(rdram, ctx);
        goto after_26;
    // 0x80225364: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_26:
    // 0x80225368: lw          $t7, 0x4C($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4C);
    // 0x8022536C: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x80225370: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x80225374: lhu         $a1, 0x4C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4C);
    // 0x80225378: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022537C:
    // 0x8022537C: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80225380: bne         $at, $zero, L_80225338
    if (ctx->r1 != 0) {
        // 0x80225384: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80225338;
    }
    // 0x80225384: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_80225388:
    // 0x80225388: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022538C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80225390: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80225394: beq         $a1, $zero, L_802253A4
    if (ctx->r5 == 0) {
        // 0x80225398: nop
    
            goto L_802253A4;
    }
    // 0x80225398: nop

    // 0x8022539C: jal         0x80231A24
    // 0x802253A0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_27;
    // 0x802253A0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_27:
L_802253A4:
    // 0x802253A4: jal         0x8022D040
    // 0x802253A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8022D040(rdram, ctx);
        goto after_28;
    // 0x802253A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_28:
    // 0x802253AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802253B0:
    // 0x802253B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802253B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802253B8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802253BC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802253C0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802253C4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802253C8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802253CC: jr          $ra
    // 0x802253D0: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x802253D0: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void D_8022BD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BD30: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022BD34: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022BD38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BD3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BD40: beq         $t6, $zero, L_8022BD50
    if (ctx->r14 == 0) {
        // 0x8022BD44: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8022BD50;
    }
    // 0x8022BD44: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022BD48: jal         0x80231A24
    // 0x8022BD4C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022BD4C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
L_8022BD50:
    // 0x8022BD50: jal         0x802235C8
    // 0x8022BD54: nop

    static_3_802235C8(rdram, ctx);
        goto after_1;
    // 0x8022BD54: nop

    after_1:
    // 0x8022BD58: jal         0x80233D90
    // 0x8022BD5C: nop

    static_3_80233D90(rdram, ctx);
        goto after_2;
    // 0x8022BD5C: nop

    after_2:
    // 0x8022BD60: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022BD64: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8022BD68: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022BD6C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8022BD70: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BD74: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x8022BD78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022BD7C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8022BD80: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BD84: sw          $t9, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r25;
    // 0x8022BD88: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BD8C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022BD90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BD94: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022BD98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BD9C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022BDA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BDA4: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022BDA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BDAC: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8022BDB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BDB4: jal         0x8022B088
    // 0x8022BDB8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    static_3_8022B088(rdram, ctx);
        goto after_3;
    // 0x8022BDB8: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    after_3:
    // 0x8022BDBC: jal         0x8022BC40
    // 0x8022BDC0: nop

    static_3_8022BC40(rdram, ctx);
        goto after_4;
    // 0x8022BDC0: nop

    after_4:
    // 0x8022BDC4: jal         0x80234870
    // 0x8022BDC8: nop

    static_3_80234870(rdram, ctx);
        goto after_5;
    // 0x8022BDC8: nop

    after_5:
    // 0x8022BDCC: jal         0x802245B8
    // 0x8022BDD0: nop

    static_3_802245B8(rdram, ctx);
        goto after_6;
    // 0x8022BDD0: nop

    after_6:
    // 0x8022BDD4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022BDD8: lhu         $a1, 0x0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X0);
    // 0x8022BDDC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8022BDE0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022BDE4: beq         $a1, $at, L_8022BDF4
    if (ctx->r5 == ctx->r1) {
        // 0x8022BDE8: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_8022BDF4;
    }
    // 0x8022BDE8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022BDEC: jal         0x80231A24
    // 0x8022BDF0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    static_3_80231A24(rdram, ctx);
        goto after_7;
    // 0x8022BDF0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_7:
L_8022BDF4:
    // 0x8022BDF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BDF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BDFC: jr          $ra
    // 0x8022BE00: nop

    return;
    // 0x8022BE00: nop

;}
RECOMP_FUNC void func_802CCD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCDB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802CCDB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802CCDB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CCDBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CCDC0: jal         0x803183C0
    // 0x802CCDC4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_803183C0(rdram, ctx);
        goto after_0;
    // 0x802CCDC4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802CCDC8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802CCDCC: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x802CCDD0: lwc1        $f4, -0x64FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X64FC);
    // 0x802CCDD4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802CCDD8: nop

    // 0x802CCDDC: bc1fl       L_802CCE44
    if (!c1cs) {
        // 0x802CCDE0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802CCE44;
    }
    goto skip_0;
    // 0x802CCDE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802CCDE4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CCDE8: jal         0x80302980
    // 0x802CCDEC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_1;
    // 0x802CCDEC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802CCDF0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CCDF4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802CCDF8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802CCDFC: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    // 0x802CCE00: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CCE04: jal         0x80302988
    // 0x802CCE08: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_2;
    // 0x802CCE08: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802CCE0C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CCE10: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802CCE14: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802CCE18: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x802CCE1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CCE20: jal         0x80302988
    // 0x802CCE24: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_3;
    // 0x802CCE24: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802CCE28: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802CCE2C: jal         0x80302A7C
    // 0x802CCE30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_4;
    // 0x802CCE30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802CCE34: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802CCE38: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x802CCE3C: sb          $t6, 0x1AFD($at)
    MEM_B(0X1AFD, ctx->r1) = ctx->r14;
    // 0x802CCE40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802CCE44:
    // 0x802CCE44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802CCE48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802CCE4C: jr          $ra
    // 0x802CCE50: nop

    return;
    // 0x802CCE50: nop

;}
RECOMP_FUNC void D_802071C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802071C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802071C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802071C8: jal         0x802070D4
    // 0x802071CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802070D4(rdram, ctx);
        goto after_0;
    // 0x802071CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802071D0: jal         0x80207040
    // 0x802071D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_80207040(rdram, ctx);
        goto after_1;
    // 0x802071D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x802071D8: beq         $v0, $zero, L_802071F4
    if (ctx->r2 == 0) {
        // 0x802071DC: lui         $t6, 0x0
        ctx->r14 = S32(0X0 << 16);
            goto L_802071F4;
    }
    // 0x802071DC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802071E0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802071E4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802071E8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802071EC: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802071F0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_802071F4:
    // 0x802071F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802071F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802071FC: jr          $ra
    // 0x80207200: nop

    return;
    // 0x80207200: nop

;}
RECOMP_FUNC void D_802DA104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DA184: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802DA188: bne         $a0, $at, L_802DA19C
    if (ctx->r4 != ctx->r1) {
        // 0x802DA18C: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_802DA19C;
    }
    // 0x802DA18C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DA190: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x802DA194: jr          $ra
    // 0x802DA198: andi        $v0, $t6, 0x10
    ctx->r2 = ctx->r14 & 0X10;
    return;
    // 0x802DA198: andi        $v0, $t6, 0x10
    ctx->r2 = ctx->r14 & 0X10;
L_802DA19C:
    // 0x802DA19C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802DA1A0: bne         $a0, $at, L_802DA1B8
    if (ctx->r4 != ctx->r1) {
        // 0x802DA1A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802DA1B8;
    }
    // 0x802DA1A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802DA1A8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DA1AC: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x802DA1B0: jr          $ra
    // 0x802DA1B4: andi        $v0, $t8, 0x20
    ctx->r2 = ctx->r24 & 0X20;
    return;
    // 0x802DA1B4: andi        $v0, $t8, 0x20
    ctx->r2 = ctx->r24 & 0X20;
L_802DA1B8:
    // 0x802DA1B8: jr          $ra
    // 0x802DA1BC: nop

    return;
    // 0x802DA1BC: nop

;}
RECOMP_FUNC void D_802111B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802111B4: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x802111B8: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x802111BC: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x802111C0: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x802111C4: mtc1        $a3, $f26
    ctx->f26.u32l = ctx->r7;
    // 0x802111C8: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x802111CC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x802111D0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802111D4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x802111D8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802111DC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802111E0: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x802111E4: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x802111E8: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x802111EC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x802111F0: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x802111F4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802111F8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x802111FC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80211200: blez        $a1, L_802114EC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80211204: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802114EC;
    }
    // 0x80211204: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80211208: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8021120C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80211210: lwc1        $f22, 0xA8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80211214: addiu       $fp, $sp, 0x74
    ctx->r30 = ADD32(ctx->r29, 0X74);
    // 0x80211218: addiu       $s7, $sp, 0x84
    ctx->r23 = ADD32(ctx->r29, 0X84);
    // 0x8021121C: addiu       $s6, $sp, 0x88
    ctx->r22 = ADD32(ctx->r29, 0X88);
    // 0x80211220: addiu       $s5, $sp, 0x8C
    ctx->r21 = ADD32(ctx->r29, 0X8C);
L_80211224:
    // 0x80211224: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x80211228: addu        $s0, $t6, $s4
    ctx->r16 = ADD32(ctx->r14, ctx->r20);
    // 0x8021122C: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x80211230: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x80211234: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80211238: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8021123C: bgez        $t7, L_80211250
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80211240: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80211250;
    }
    // 0x80211240: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80211244: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80211248: nop

    // 0x8021124C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80211250:
    // 0x80211250: lbu         $t8, 0xD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD);
    // 0x80211254: div.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80211258: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021125C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80211260: bgez        $t8, L_80211274
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80211264: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80211274;
    }
    // 0x80211264: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80211268: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021126C: nop

    // 0x80211270: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80211274:
    // 0x80211274: lbu         $t9, 0xE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE);
    // 0x80211278: div.s       $f14, $f16, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8021127C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80211280: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80211284: bgez        $t9, L_80211298
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80211288: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80211298;
    }
    // 0x80211288: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021128C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80211290: nop

    // 0x80211294: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80211298:
    // 0x80211298: div.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8021129C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x802112A0: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x802112A4: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x802112A8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802112AC: jal         0x80209914
    // 0x802112B0: nop

    static_3_80209914(rdram, ctx);
        goto after_0;
    // 0x802112B0: nop

    after_0:
    // 0x802112B4: lhu         $t0, 0x6($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X6);
    // 0x802112B8: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x802112BC: addiu       $t1, $sp, 0x70
    ctx->r9 = ADD32(ctx->r29, 0X70);
    // 0x802112C0: beq         $t0, $zero, L_802112F0
    if (ctx->r8 == 0) {
        // 0x802112C4: addiu       $t2, $sp, 0x6C
        ctx->r10 = ADD32(ctx->r29, 0X6C);
            goto L_802112F0;
    }
    // 0x802112C4: addiu       $t2, $sp, 0x6C
    ctx->r10 = ADD32(ctx->r29, 0X6C);
    // 0x802112C8: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802112CC: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802112D0: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802112D4: mul.s       $f12, $f24, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x802112D8: nop

    // 0x802112DC: mul.s       $f14, $f26, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f26.fl, ctx->f16.fl);
    // 0x802112E0: nop

    // 0x802112E4: mul.s       $f0, $f22, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x802112E8: b           L_80211324
    // 0x802112EC: nop

        goto L_80211324;
    // 0x802112EC: nop

L_802112F0:
    // 0x802112F0: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802112F4: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802112F8: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802112FC: mul.s       $f12, $f24, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x80211300: nop

    // 0x80211304: mul.s       $f14, $f26, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f26.fl, ctx->f8.fl);
    // 0x80211308: nop

    // 0x8021130C: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80211310: nop

    // 0x80211314: mul.s       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80211318: nop

    // 0x8021131C: mul.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80211320: nop

L_80211324:
    // 0x80211324: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80211328: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8021132C: jal         0x802096F4
    // 0x80211330: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    static_3_802096F4(rdram, ctx);
        goto after_1;
    // 0x80211330: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_1:
    // 0x80211334: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80211338: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8021133C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80211340: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80211344: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80211348: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8021134C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80211350: nop

    // 0x80211354: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80211358: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8021135C: nop

    // 0x80211360: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80211364: beql        $t4, $zero, L_802113B4
    if (ctx->r12 == 0) {
        // 0x80211368: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_802113B4;
    }
    goto skip_0;
    // 0x80211368: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x8021136C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80211370: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80211374: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80211378: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8021137C: nop

    // 0x80211380: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80211384: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80211388: nop

    // 0x8021138C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x80211390: bne         $t4, $zero, L_802113A8
    if (ctx->r12 != 0) {
        // 0x80211394: nop
    
            goto L_802113A8;
    }
    // 0x80211394: nop

    // 0x80211398: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8021139C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802113A0: b           L_802113C0
    // 0x802113A4: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_802113C0;
    // 0x802113A4: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_802113A8:
    // 0x802113A8: b           L_802113C0
    // 0x802113AC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_802113C0;
    // 0x802113AC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x802113B0: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_802113B4:
    // 0x802113B4: nop

    // 0x802113B8: bltz        $t4, L_802113A8
    if (SIGNED(ctx->r12) < 0) {
        // 0x802113BC: nop
    
            goto L_802113A8;
    }
    // 0x802113BC: nop

L_802113C0:
    // 0x802113C0: sb          $t4, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r12;
    // 0x802113C4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802113C8: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802113CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802113D0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802113D4: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802113D8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802113DC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802113E0: nop

    // 0x802113E4: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802113E8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802113EC: nop

    // 0x802113F0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x802113F4: beql        $t6, $zero, L_80211444
    if (ctx->r14 == 0) {
        // 0x802113F8: mfc1        $t6, $f16
        ctx->r14 = (int32_t)ctx->f16.u32l;
            goto L_80211444;
    }
    goto skip_1;
    // 0x802113F8: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x802113FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80211400: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80211404: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80211408: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021140C: nop

    // 0x80211410: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80211414: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80211418: nop

    // 0x8021141C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80211420: bne         $t6, $zero, L_80211438
    if (ctx->r14 != 0) {
        // 0x80211424: nop
    
            goto L_80211438;
    }
    // 0x80211424: nop

    // 0x80211428: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8021142C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211430: b           L_80211450
    // 0x80211434: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80211450;
    // 0x80211434: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80211438:
    // 0x80211438: b           L_80211450
    // 0x8021143C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80211450;
    // 0x8021143C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80211440: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
L_80211444:
    // 0x80211444: nop

    // 0x80211448: bltz        $t6, L_80211438
    if (SIGNED(ctx->r14) < 0) {
        // 0x8021144C: nop
    
            goto L_80211438;
    }
    // 0x8021144C: nop

L_80211450:
    // 0x80211450: sb          $t6, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r14;
    // 0x80211454: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80211458: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021145C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80211460: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80211464: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80211468: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021146C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80211470: nop

    // 0x80211474: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80211478: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021147C: nop

    // 0x80211480: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80211484: beql        $t8, $zero, L_802114D4
    if (ctx->r24 == 0) {
        // 0x80211488: mfc1        $t8, $f8
        ctx->r24 = (int32_t)ctx->f8.u32l;
            goto L_802114D4;
    }
    goto skip_2;
    // 0x80211488: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x8021148C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80211490: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80211494: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80211498: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021149C: nop

    // 0x802114A0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802114A4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802114A8: nop

    // 0x802114AC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x802114B0: bne         $t8, $zero, L_802114C8
    if (ctx->r24 != 0) {
        // 0x802114B4: nop
    
            goto L_802114C8;
    }
    // 0x802114B4: nop

    // 0x802114B8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x802114BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802114C0: b           L_802114E0
    // 0x802114C4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_802114E0;
    // 0x802114C4: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_802114C8:
    // 0x802114C8: b           L_802114E0
    // 0x802114CC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_802114E0;
    // 0x802114CC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802114D0: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
L_802114D4:
    // 0x802114D4: nop

    // 0x802114D8: bltz        $t8, L_802114C8
    if (SIGNED(ctx->r24) < 0) {
        // 0x802114DC: nop
    
            goto L_802114C8;
    }
    // 0x802114DC: nop

L_802114E0:
    // 0x802114E0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802114E4: bne         $s1, $s3, L_80211224
    if (ctx->r17 != ctx->r19) {
        // 0x802114E8: sb          $t8, 0xE($s2)
        MEM_B(0XE, ctx->r18) = ctx->r24;
            goto L_80211224;
    }
    // 0x802114E8: sb          $t8, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r24;
L_802114EC:
    // 0x802114EC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x802114F0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802114F4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x802114F8: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x802114FC: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80211500: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80211504: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80211508: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8021150C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80211510: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80211514: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80211518: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8021151C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80211520: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80211524: jr          $ra
    // 0x80211528: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80211528: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void D_80281BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281C60: jr          $ra
    // 0x80281C64: lbu         $v0, 0x555($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X555);
    return;
    // 0x80281C64: lbu         $v0, 0x555($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X555);
;}
RECOMP_FUNC void D_802A2200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A2284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A2288: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x802A228C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A2290: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A2294: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x802A2298: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    // 0x802A229C: bc1fl       L_802A22B4
    if (!c1cs) {
        // 0x802A22A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A22B4;
    }
    goto skip_0;
    // 0x802A22A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A22A4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802A22A8: jal         0x802D2910
    // 0x802A22AC: nop

    static_3_802D2910(rdram, ctx);
        goto after_0;
    // 0x802A22AC: nop

    after_0:
    // 0x802A22B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A22B4:
    // 0x802A22B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A22B8: jr          $ra
    // 0x802A22BC: nop

    return;
    // 0x802A22BC: nop

;}
RECOMP_FUNC void D_802E7470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E74F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E74F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E74F8: lbu         $t6, 0x1D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1D);
    // 0x802E74FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802E7500: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802E7504: beq         $t6, $zero, L_802E7530
    if (ctx->r14 == 0) {
        // 0x802E7508: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_802E7530;
    }
    // 0x802E7508: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802E750C: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802E7510: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802E7514: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802E7518: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x802E751C: lh          $t7, 0x28($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X28);
    // 0x802E7520: jalr        $t9
    // 0x802E7524: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802E7524: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    after_0:
    // 0x802E7528: b           L_802E7590
    // 0x802E752C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802E7590;
    // 0x802E752C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802E7530:
    // 0x802E7530: lw          $t8, 0xD8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD8);
    // 0x802E7534: bnel        $t8, $zero, L_802E7574
    if (ctx->r24 != 0) {
        // 0x802E7538: lw          $v0, 0x1A0($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X1A0);
            goto L_802E7574;
    }
    goto skip_0;
    // 0x802E7538: lw          $v0, 0x1A0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1A0);
    skip_0:
    // 0x802E753C: lw          $v0, 0x1A0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1A0);
    // 0x802E7540: lh          $t0, 0x90($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X90);
    // 0x802E7544: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x802E7548: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x802E754C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x802E7550: lw          $t9, 0x94($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X94);
    // 0x802E7554: addu        $a0, $t0, $a3
    ctx->r4 = ADD32(ctx->r8, ctx->r7);
    // 0x802E7558: jalr        $t9
    // 0x802E755C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E755C: nop

    after_1:
    // 0x802E7560: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802E7564: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802E7568: bne         $v0, $zero, L_802E758C
    if (ctx->r2 != 0) {
        // 0x802E756C: lwc1        $f14, 0x20($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
            goto L_802E758C;
    }
    // 0x802E756C: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802E7570: lw          $v0, 0x1A0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1A0);
L_802E7574:
    // 0x802E7574: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802E7578: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802E757C: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x802E7580: lh          $t1, 0x20($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X20);
    // 0x802E7584: jalr        $t9
    // 0x802E7588: addu        $a0, $t1, $a3
    ctx->r4 = ADD32(ctx->r9, ctx->r7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802E7588: addu        $a0, $t1, $a3
    ctx->r4 = ADD32(ctx->r9, ctx->r7);
    after_2:
L_802E758C:
    // 0x802E758C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802E7590:
    // 0x802E7590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E7594: jr          $ra
    // 0x802E7598: nop

    return;
    // 0x802E7598: nop

;}
RECOMP_FUNC void D_802A8AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8B78: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A8B7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A8B80: jr          $ra
    // 0x802A8B84: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802A8B84: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8027AD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AD80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027AD84: bnel        $a2, $at, L_8027ADA0
    if (ctx->r6 != ctx->r1) {
        // 0x8027AD88: lw          $t8, 0x65F8($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X65F8);
            goto L_8027ADA0;
    }
    goto skip_0;
    // 0x8027AD88: lw          $t8, 0x65F8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X65F8);
    skip_0:
    // 0x8027AD8C: lw          $t6, 0x4E14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4E14);
    // 0x8027AD90: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8027AD94: jr          $ra
    // 0x8027AD98: sw          $t7, 0x4E14($a0)
    MEM_W(0X4E14, ctx->r4) = ctx->r15;
    return;
    // 0x8027AD98: sw          $t7, 0x4E14($a0)
    MEM_W(0X4E14, ctx->r4) = ctx->r15;
    // 0x8027AD9C: lw          $t8, 0x65F8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X65F8);
L_8027ADA0:
    // 0x8027ADA0: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x8027ADA4: sw          $t9, 0x65F8($a0)
    MEM_W(0X65F8, ctx->r4) = ctx->r25;
    // 0x8027ADA8: jr          $ra
    // 0x8027ADAC: nop

    return;
    // 0x8027ADAC: nop

;}
RECOMP_FUNC void D_802A626C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A62EC: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x802A62F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A62F4: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x802A62F8: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x802A62FC: lbu         $t6, 0xE0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE0);
    // 0x802A6300: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802A6304: beql        $t6, $zero, L_802A6728
    if (ctx->r14 == 0) {
        // 0x802A6308: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A6728;
    }
    goto skip_0;
    // 0x802A6308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A630C: lw          $v1, 0xDC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XDC);
    // 0x802A6310: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x802A6314: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802A6318: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x802A631C: sw          $a3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r7;
    // 0x802A6320: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802A6324: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    // 0x802A6328: jalr        $t9
    // 0x802A632C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802A632C: nop

    after_0:
    // 0x802A6330: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x802A6334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A6338: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x802A633C: addiu       $a2, $a3, 0x2C
    ctx->r6 = ADD32(ctx->r7, 0X2C);
    // 0x802A6340: jal         0x8021B6D4
    // 0x802A6344: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_8021B6D4(rdram, ctx);
        goto after_1;
    // 0x802A6344: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x802A6348: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x802A634C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A6350: lwc1        $f0, 0xA0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A6354: lh          $v0, 0xE2($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XE2);
    // 0x802A6358: bne         $v0, $at, L_802A638C
    if (ctx->r2 != ctx->r1) {
        // 0x802A635C: lui         $at, 0x4296
        ctx->r1 = S32(0X4296 << 16);
            goto L_802A638C;
    }
    // 0x802A635C: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x802A6360: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A6364: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802A6368: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A636C: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802A6370: lwc1        $f14, 0x60($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X60);
    // 0x802A6374: lwc1        $f18, 0x64($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X64);
    // 0x802A6378: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A637C: lwc1        $f12, 0x5C($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X5C);
    // 0x802A6380: add.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x802A6384: b           L_802A66DC
    // 0x802A6388: sub.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f8.fl;
        goto L_802A66DC;
    // 0x802A6388: sub.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f8.fl;
L_802A638C:
    // 0x802A638C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A6390: bne         $v0, $at, L_802A63B4
    if (ctx->r2 != ctx->r1) {
        // 0x802A6394: lwc1        $f10, 0xA0($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
            goto L_802A63B4;
    }
    // 0x802A6394: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A6398: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802A639C: swc1        $f10, 0xFC($a3)
    MEM_W(0XFC, ctx->r7) = ctx->f10.u32l;
    // 0x802A63A0: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802A63A4: swc1        $f4, 0x100($a3)
    MEM_W(0X100, ctx->r7) = ctx->f4.u32l;
    // 0x802A63A8: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802A63AC: b           L_802A64A8
    // 0x802A63B0: swc1        $f6, 0x104($a3)
    MEM_W(0X104, ctx->r7) = ctx->f6.u32l;
        goto L_802A64A8;
    // 0x802A63B0: swc1        $f6, 0x104($a3)
    MEM_W(0X104, ctx->r7) = ctx->f6.u32l;
L_802A63B4:
    // 0x802A63B4: lwc1        $f8, 0xF0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XF0);
    // 0x802A63B8: lwc1        $f6, 0xF4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XF4);
    // 0x802A63BC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802A63C0: swc1        $f4, 0xF0($a3)
    MEM_W(0XF0, ctx->r7) = ctx->f4.u32l;
    // 0x802A63C4: lwc1        $f8, 0xF0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XF0);
    // 0x802A63C8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802A63CC: nop

    // 0x802A63D0: bc1fl       L_802A64AC
    if (!c1cs) {
        // 0x802A63D4: lwc1        $f10, 0xF8($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0XF8);
            goto L_802A64AC;
    }
    goto skip_1;
    // 0x802A63D4: lwc1        $f10, 0xF8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XF8);
    skip_1:
    // 0x802A63D8: lw          $a0, 0xDC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XDC);
    // 0x802A63DC: jal         0x803182BC
    // 0x802A63E0: sw          $a3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r7;
    static_3_803182BC(rdram, ctx);
        goto after_2;
    // 0x802A63E0: sw          $a3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r7;
    after_2:
    // 0x802A63E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A63E8: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A63EC: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x802A63F0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A63F4: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802A63F8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A63FC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802A6400: lbu         $t0, 0xE4($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0XE4);
    // 0x802A6404: lw          $t8, 0xE8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XE8);
    // 0x802A6408: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802A640C: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x802A6410: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x802A6414: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x802A6418: mul.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802A641C: jal         0x80300424
    // 0x802A6420: nop

    static_3_80300424(rdram, ctx);
        goto after_3;
    // 0x802A6420: nop

    after_3:
    // 0x802A6424: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x802A6428: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802A642C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6430: lwc1        $f4, 0xEC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XEC);
    // 0x802A6434: lbu         $t4, 0xE4($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0XE4);
    // 0x802A6438: lw          $t3, 0xE8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XE8);
    // 0x802A643C: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A6440: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802A6444: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x802A6448: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x802A644C: swc1        $f6, 0xFC($a3)
    MEM_W(0XFC, ctx->r7) = ctx->f6.u32l;
    // 0x802A6450: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802A6454: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802A6458: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A645C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6460: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802A6464: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6468: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802A646C: jal         0x80300424
    // 0x802A6470: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    static_3_80300424(rdram, ctx);
        goto after_4;
    // 0x802A6470: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_4:
    // 0x802A6474: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x802A6478: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802A647C: lwc1        $f6, 0xEC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XEC);
    // 0x802A6480: lbu         $t7, 0xE4($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0XE4);
    // 0x802A6484: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802A6488: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x802A648C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802A6490: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A6494: swc1        $f4, 0x100($a3)
    MEM_W(0X100, ctx->r7) = ctx->f4.u32l;
    // 0x802A6498: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802A649C: sb          $t9, 0xE4($a3)
    MEM_B(0XE4, ctx->r7) = ctx->r25;
    // 0x802A64A0: swc1        $f8, 0xF0($a3)
    MEM_W(0XF0, ctx->r7) = ctx->f8.u32l;
    // 0x802A64A4: swc1        $f6, 0x104($a3)
    MEM_W(0X104, ctx->r7) = ctx->f6.u32l;
L_802A64A8:
    // 0x802A64A8: lwc1        $f10, 0xF8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XF8);
L_802A64AC:
    // 0x802A64AC: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802A64B0: lui         $at, 0xC57A
    ctx->r1 = S32(0XC57A << 16);
    // 0x802A64B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A64B8: mul.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802A64BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A64C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A64C4: lwc1        $f8, 0x5C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X5C);
    // 0x802A64C8: lwc1        $f4, 0xFC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XFC);
    // 0x802A64CC: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x802A64D0: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x802A64D4: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802A64D8: lwc1        $f8, 0x60($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X60);
    // 0x802A64DC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A64E0: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802A64E4: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802A64E8: lwc1        $f10, 0x100($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X100);
    // 0x802A64EC: lwc1        $f8, 0x64($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X64);
    // 0x802A64F0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x802A64F4: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802A64F8: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A64FC: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802A6500: lwc1        $f4, 0x104($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X104);
    // 0x802A6504: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802A6508: bc1f        L_802A6520
    if (!c1cs) {
        // 0x802A650C: add.s       $f18, $f10, $f6
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
            goto L_802A6520;
    }
    // 0x802A650C: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802A6510: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x802A6514: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A6518: b           L_802A653C
    // 0x802A651C: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
        goto L_802A653C;
    // 0x802A651C: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
L_802A6520:
    // 0x802A6520: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A6524: nop

    // 0x802A6528: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802A652C: nop

    // 0x802A6530: bc1fl       L_802A6540
    if (!c1cs) {
        // 0x802A6534: c.lt.s      $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
            goto L_802A6540;
    }
    goto skip_2;
    // 0x802A6534: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    skip_2:
    // 0x802A6538: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_802A653C:
    // 0x802A653C: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
L_802A6540:
    // 0x802A6540: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802A6544: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802A6548: bc1fl       L_802A655C
    if (!c1cs) {
        // 0x802A654C: c.lt.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
            goto L_802A655C;
    }
    goto skip_3;
    // 0x802A654C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    skip_3:
    // 0x802A6550: b           L_802A656C
    // 0x802A6554: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
        goto L_802A656C;
    // 0x802A6554: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    // 0x802A6558: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
L_802A655C:
    // 0x802A655C: nop

    // 0x802A6560: bc1fl       L_802A6570
    if (!c1cs) {
        // 0x802A6564: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802A6570;
    }
    goto skip_4;
    // 0x802A6564: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_4:
    // 0x802A6568: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_802A656C:
    // 0x802A656C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802A6570:
    // 0x802A6570: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6574: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802A6578: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802A657C: nop

    // 0x802A6580: bc1f        L_802A6590
    if (!c1cs) {
        // 0x802A6584: nop
    
            goto L_802A6590;
    }
    // 0x802A6584: nop

    // 0x802A6588: b           L_802A65A8
    // 0x802A658C: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_802A65A8;
    // 0x802A658C: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_802A6590:
    // 0x802A6590: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6594: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802A6598: nop

    // 0x802A659C: bc1fl       L_802A65AC
    if (!c1cs) {
        // 0x802A65A0: c.lt.s      $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
            goto L_802A65AC;
    }
    goto skip_5;
    // 0x802A65A0: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    skip_5:
    // 0x802A65A4: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_802A65A8:
    // 0x802A65A8: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
L_802A65AC:
    // 0x802A65AC: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x802A65B0: bc1fl       L_802A65C8
    if (!c1cs) {
        // 0x802A65B4: sub.s       $f2, $f12, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f16.fl;
            goto L_802A65C8;
    }
    goto skip_6;
    // 0x802A65B4: sub.s       $f2, $f12, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f16.fl;
    skip_6:
    // 0x802A65B8: sub.s       $f2, $f12, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x802A65BC: b           L_802A65CC
    // 0x802A65C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802A65CC;
    // 0x802A65C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802A65C4: sub.s       $f2, $f12, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f16.fl;
L_802A65C8:
    // 0x802A65C8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_802A65CC:
    // 0x802A65CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A65D0: nop

    // 0x802A65D4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802A65D8: nop

    // 0x802A65DC: bc1fl       L_802A6650
    if (!c1cs) {
        // 0x802A65E0: sub.s       $f2, $f14, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f6.fl;
            goto L_802A6650;
    }
    goto skip_7;
    // 0x802A65E0: sub.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f6.fl;
    skip_7:
    // 0x802A65E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A65E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A65EC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A65F0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x802A65F4: nop

    // 0x802A65F8: bc1fl       L_802A660C
    if (!c1cs) {
        // 0x802A65FC: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_802A660C;
    }
    goto skip_8;
    // 0x802A65FC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_8:
    // 0x802A6600: b           L_802A660C
    // 0x802A6604: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802A660C;
    // 0x802A6604: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802A6608: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_802A660C:
    // 0x802A660C: c.le.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl <= ctx->f14.fl;
    // 0x802A6610: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x802A6614: bc1fl       L_802A6638
    if (!c1cs) {
        // 0x802A6618: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802A6638;
    }
    goto skip_9;
    // 0x802A6618: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_9:
    // 0x802A661C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A6620: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A6624: nop

    // 0x802A6628: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x802A662C: b           L_802A66DC
    // 0x802A6630: add.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
        goto L_802A66DC;
    // 0x802A6630: add.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x802A6634: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802A6638:
    // 0x802A6638: nop

    // 0x802A663C: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x802A6640: nop

    // 0x802A6644: b           L_802A66DC
    // 0x802A6648: add.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
        goto L_802A66DC;
    // 0x802A6648: add.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x802A664C: sub.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f6.fl;
L_802A6650:
    // 0x802A6650: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A6654: nop

    // 0x802A6658: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x802A665C: nop

    // 0x802A6660: bc1fl       L_802A6674
    if (!c1cs) {
        // 0x802A6664: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_802A6674;
    }
    goto skip_10;
    // 0x802A6664: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_10:
    // 0x802A6668: b           L_802A6674
    // 0x802A666C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802A6674;
    // 0x802A666C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802A6670: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_802A6674:
    // 0x802A6674: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802A6678: nop

    // 0x802A667C: bc1fl       L_802A66E0
    if (!c1cs) {
        // 0x802A6680: swc1        $f12, 0x5C($a3)
        MEM_W(0X5C, ctx->r7) = ctx->f12.u32l;
            goto L_802A66E0;
    }
    goto skip_11;
    // 0x802A6680: swc1        $f12, 0x5C($a3)
    MEM_W(0X5C, ctx->r7) = ctx->f12.u32l;
    skip_11:
    // 0x802A6684: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A6688: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A668C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802A6690: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x802A6694: nop

    // 0x802A6698: bc1fl       L_802A66AC
    if (!c1cs) {
        // 0x802A669C: neg.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
            goto L_802A66AC;
    }
    goto skip_12;
    // 0x802A669C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    skip_12:
    // 0x802A66A0: b           L_802A66AC
    // 0x802A66A4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802A66AC;
    // 0x802A66A4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802A66A8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_802A66AC:
    // 0x802A66AC: c.le.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl <= ctx->f12.fl;
    // 0x802A66B0: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x802A66B4: bc1fl       L_802A66D0
    if (!c1cs) {
        // 0x802A66B8: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802A66D0;
    }
    goto skip_13;
    // 0x802A66B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_13:
    // 0x802A66BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A66C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A66C4: b           L_802A66D4
    // 0x802A66C8: nop

        goto L_802A66D4;
    // 0x802A66C8: nop

    // 0x802A66CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802A66D0:
    // 0x802A66D0: nop

L_802A66D4:
    // 0x802A66D4: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x802A66D8: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_802A66DC:
    // 0x802A66DC: swc1        $f12, 0x5C($a3)
    MEM_W(0X5C, ctx->r7) = ctx->f12.u32l;
L_802A66E0:
    // 0x802A66E0: swc1        $f14, 0x60($a3)
    MEM_W(0X60, ctx->r7) = ctx->f14.u32l;
    // 0x802A66E4: swc1        $f18, 0x64($a3)
    MEM_W(0X64, ctx->r7) = ctx->f18.u32l;
    // 0x802A66E8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A66EC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802A66F0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802A66F4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802A66F8: jal         0x802AEF08
    // 0x802A66FC: sw          $a3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r7;
    static_3_802AEF08(rdram, ctx);
        goto after_5;
    // 0x802A66FC: sw          $a3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r7;
    after_5:
    // 0x802A6700: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x802A6704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A6708: lwc1        $f8, 0x64($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X64);
    // 0x802A670C: swc1        $f0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f0.u32l;
    // 0x802A6710: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x802A6714: sub.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x802A6718: swc1        $f4, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f4.u32l;
    // 0x802A671C: jal         0x8021B4B0
    // 0x802A6720: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    static_3_8021B4B0(rdram, ctx);
        goto after_6;
    // 0x802A6720: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x802A6724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A6728:
    // 0x802A6728: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x802A672C: jr          $ra
    // 0x802A6730: nop

    return;
    // 0x802A6730: nop

;}
RECOMP_FUNC void D_802D4268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D42E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D42EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D42F0: jal         0x803049A0
    // 0x802D42F4: nop

    static_3_803049A0(rdram, ctx);
        goto after_0;
    // 0x802D42F4: nop

    after_0:
    // 0x802D42F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802D42FC: bne         $v0, $at, L_802D430C
    if (ctx->r2 != ctx->r1) {
        // 0x802D4300: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802D430C;
    }
    // 0x802D4300: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802D4304: b           L_802D4344
    // 0x802D4308: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802D4344;
    // 0x802D4308: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802D430C:
    // 0x802D430C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x802D4310: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x802D4314: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802D4318: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x802D431C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802D4320: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x802D4324: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802D4328: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x802D432C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802D4330: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D4334: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802D4338: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802D433C: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    // 0x802D4340: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802D4344:
    // 0x802D4344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D4348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D434C: jr          $ra
    // 0x802D4350: nop

    return;
    // 0x802D4350: nop

;}
RECOMP_FUNC void D_802B7C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B7CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7CF4: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7CF8: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B7CFC: beq         $t6, $zero, L_802B7D10
    if (ctx->r14 == 0) {
        // 0x802B7D00: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B7D10;
    }
    // 0x802B7D00: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B7D04: jal         0x80303578
    // 0x802B7D08: addiu       $a0, $a0, 0xDF4
    ctx->r4 = ADD32(ctx->r4, 0XDF4);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B7D08: addiu       $a0, $a0, 0xDF4
    ctx->r4 = ADD32(ctx->r4, 0XDF4);
    after_0:
    // 0x802B7D0C: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B7D10:
    // 0x802B7D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7D14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B7D18: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B7D1C: jr          $ra
    // 0x802B7D20: nop

    return;
    // 0x802B7D20: nop

;}
RECOMP_FUNC void D_802E8B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8B90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802E8B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E8B98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802E8B9C: jal         0x803182BC
    // 0x802E8BA0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    static_3_803182BC(rdram, ctx);
        goto after_0;
    // 0x802E8BA0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x802E8BA4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802E8BA8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802E8BAC: jal         0x80317EC0
    // 0x802E8BB0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    static_3_80317EC0(rdram, ctx);
        goto after_1;
    // 0x802E8BB0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x802E8BB4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802E8BB8: jal         0x802CF4D0
    // 0x802E8BBC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_2;
    // 0x802E8BBC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x802E8BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E8BC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802E8BC8: jr          $ra
    // 0x802E8BCC: nop

    return;
    // 0x802E8BCC: nop

;}
RECOMP_FUNC void D_802DCFF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD074: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DD078: jr          $ra
    // 0x802DD07C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802DD07C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80249D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249D64: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80249D68: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80249D6C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80249D70: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80249D74: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80249D78: lw          $t6, 0x24($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X24);
    // 0x80249D7C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80249D80: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x80249D84: beq         $t6, $zero, L_80249F40
    if (ctx->r14 == 0) {
        // 0x80249D88: or          $t2, $a0, $zero
        ctx->r10 = ctx->r4 | 0;
            goto L_80249F40;
    }
    // 0x80249D88: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80249D8C: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80249D90: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80249D94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80249D98: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80249D9C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80249DA0: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x80249DA4: jal         0x80249940
    // 0x80249DA8: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    static_3_80249940(rdram, ctx);
        goto after_0;
    // 0x80249DA8: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    after_0:
    // 0x80249DAC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80249DB0: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80249DB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80249DB8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80249DBC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80249DC0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80249DC4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80249DC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80249DCC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80249DD0: addiu       $a2, $zero, 0x280
    ctx->r6 = ADD32(0, 0X280);
    // 0x80249DD4: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80249DD8: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80249DDC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80249DE0: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80249DE4: nop

    // 0x80249DE8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80249DEC: nop

    // 0x80249DF0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80249DF4: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80249DF8: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x80249DFC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80249E00: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80249E04: sub.d       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f4.d - ctx->f16.d;
    // 0x80249E08: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
    // 0x80249E0C: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80249E10: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x80249E14: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80249E18: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80249E1C: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80249E20: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80249E24: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80249E28: nop

    // 0x80249E2C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80249E30: nop

    // 0x80249E34: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80249E38: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80249E3C: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80249E40: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x80249E44: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x80249E48: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x80249E4C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80249E50: subu        $t4, $t8, $t9
    ctx->r12 = SUB32(ctx->r24, ctx->r25);
    // 0x80249E54: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x80249E58: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80249E5C: addu        $t0, $t7, $t6
    ctx->r8 = ADD32(ctx->r15, ctx->r14);
    // 0x80249E60: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x80249E64: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80249E68: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80249E6C: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x80249E70: subu        $a1, $t0, $t3
    ctx->r5 = SUB32(ctx->r8, ctx->r11);
    // 0x80249E74: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80249E78: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x80249E7C: addu        $a3, $t1, $t8
    ctx->r7 = ADD32(ctx->r9, ctx->r24);
    // 0x80249E80: jal         0x80249C28
    // 0x80249E84: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    static_3_80249C28(rdram, ctx);
        goto after_1;
    // 0x80249E84: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x80249E88: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80249E8C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80249E90: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80249E94: addiu       $t4, $t3, 0x280
    ctx->r12 = ADD32(ctx->r11, 0X280);
    // 0x80249E98: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x80249E9C: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80249EA0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80249EA4: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x80249EA8: sll         $t4, $s1, 1
    ctx->r12 = S32(ctx->r17 << 1);
    // 0x80249EAC: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x80249EB0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80249EB4: or          $t7, $t9, $t5
    ctx->r15 = ctx->r25 | ctx->r13;
    // 0x80249EB8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80249EBC: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80249EC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80249EC4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80249EC8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80249ECC: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
    // 0x80249ED0: mul.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80249ED4: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x80249ED8: lw          $t7, 0x24($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X24);
    // 0x80249EDC: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x80249EE0: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x80249EE4: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x80249EE8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80249EEC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80249EF0: nop

    // 0x80249EF4: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x80249EF8: or          $t4, $t8, $at
    ctx->r12 = ctx->r24 | ctx->r1;
    // 0x80249EFC: or          $t5, $t4, $t9
    ctx->r13 = ctx->r12 | ctx->r25;
    // 0x80249F00: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x80249F04: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80249F08: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x80249F0C: jal         0x802375F0
    // 0x80249F10: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_2;
    // 0x80249F10: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_2:
    // 0x80249F14: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80249F18: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80249F1C: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80249F20: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x80249F24: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x80249F28: sw          $zero, 0x24($t8)
    MEM_W(0X24, ctx->r24) = 0;
    // 0x80249F2C: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x80249F30: addu        $t9, $t4, $t1
    ctx->r25 = ADD32(ctx->r12, ctx->r9);
    // 0x80249F34: subu        $t5, $t9, $s1
    ctx->r13 = SUB32(ctx->r25, ctx->r17);
    // 0x80249F38: b           L_80249F70
    // 0x80249F3C: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
        goto L_80249F70;
    // 0x80249F3C: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
L_80249F40:
    // 0x80249F40: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80249F44: lw          $t7, 0x18($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X18);
    // 0x80249F48: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80249F4C: negu        $t8, $t6
    ctx->r24 = SUB32(0, ctx->r14);
    // 0x80249F50: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x80249F54: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80249F58: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80249F5C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x80249F60: addu        $a1, $t7, $t4
    ctx->r5 = ADD32(ctx->r15, ctx->r12);
    // 0x80249F64: jal         0x80249C28
    // 0x80249F68: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    static_3_80249C28(rdram, ctx);
        goto after_3;
    // 0x80249F68: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_3:
    // 0x80249F6C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80249F70:
    // 0x80249F70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80249F74: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80249F78: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80249F7C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80249F80: jr          $ra
    // 0x80249F84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80249F84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_8029F228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F2A8: lwc1        $f4, 0x38($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8029F2AC: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8029F2B0: jr          $ra
    // 0x8029F2B4: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    return;
    // 0x8029F2B4: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
;}
RECOMP_FUNC void D_80207FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207FDC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80207FE0: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80207FE4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80207FE8: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x80207FEC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80207FF0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80207FF4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80207FF8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207FFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80208000:
    // 0x80208000: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80208004: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80208008: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x8020800C: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x80208010: mflo        $t6
    ctx->r14 = lo;
    // 0x80208014: addu        $v1, $t6, $a0
    ctx->r3 = ADD32(ctx->r14, ctx->r4);
    // 0x80208018: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8020801C: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80208020: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80208024: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80208028: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8020802C: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80208030: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80208034: add.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80208038: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8020803C: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80208040: nop

    // 0x80208044: bc1f        L_80208054
    if (!c1cs) {
        // 0x80208048: nop
    
            goto L_80208054;
    }
    // 0x80208048: nop

    // 0x8020804C: b           L_80208060
    // 0x80208050: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80208060;
    // 0x80208050: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80208054:
    // 0x80208054: bne         $at, $zero, L_80208000
    if (ctx->r1 != 0) {
        // 0x80208058: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80208000;
    }
    // 0x80208058: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8020805C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80208060:
    // 0x80208060: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80208064: jr          $ra
    // 0x80208068: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80208068: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void D_80234FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234FC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80234FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234FC8: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80234FCC: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80234FD0: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80234FD4: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234FD8: mflo        $t7
    ctx->r15 = lo;
    // 0x80234FDC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80234FE0: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x80234FE4: bnel        $t9, $zero, L_80235018
    if (ctx->r25 != 0) {
        // 0x80234FE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80235018;
    }
    goto skip_0;
    // 0x80234FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80234FEC: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80234FF0: lw          $t0, 0x3C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3C);
    // 0x80234FF4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80234FF8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80234FFC: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235000: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80235004: mflo        $t1
    ctx->r9 = lo;
    // 0x80235008: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8023500C: jal         0x8023F37C
    // 0x80235010: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80235010: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_0:
    // 0x80235014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80235018:
    // 0x80235018: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023501C: jr          $ra
    // 0x80235020: nop

    return;
    // 0x80235020: nop

;}
RECOMP_FUNC void D_80238AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238AC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238AC8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80238ACC: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80238AD0: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80238AD4: sh          $t7, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r15;
    // 0x80238AD8: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x80238ADC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80238AE0: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80238AE4: jal         0x8023F37C
    // 0x80238AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80238AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80238AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238AF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238AF4: jr          $ra
    // 0x80238AF8: nop

    return;
    // 0x80238AF8: nop

;}
RECOMP_FUNC void D_80237740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237748: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023774C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80237750: jal         0x80237120
    // 0x80237754: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80237120(rdram, ctx);
        goto after_0;
    // 0x80237754: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80237758: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8023775C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80237760: jal         0x80237150
    // 0x80237764: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    static_3_80237150(rdram, ctx);
        goto after_1;
    // 0x80237764: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x80237768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023776C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80237770: jr          $ra
    // 0x80237774: nop

    return;
    // 0x80237774: nop

;}
RECOMP_FUNC void D_8028272C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802827AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802827B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802827B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802827B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802827BC: beq         $a0, $zero, L_80282820
    if (ctx->r4 == 0) {
        // 0x802827C0: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_80282820;
    }
    // 0x802827C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802827C4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802827C8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802827CC: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802827D0: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802827D4: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802827D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802827DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802827E0: addiu       $a0, $a0, 0x5C8
    ctx->r4 = ADD32(ctx->r4, 0X5C8);
    // 0x802827E4: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x802827E8: jal         0x802C6A00
    // 0x802827EC: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    static_3_802C6A00(rdram, ctx);
        goto after_0;
    // 0x802827EC: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    after_0:
    // 0x802827F0: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    // 0x802827F4: jal         0x802B1DE4
    // 0x802827F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802B1DE4(rdram, ctx);
        goto after_1;
    // 0x802827F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802827FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80282800: jal         0x803086D4
    // 0x80282804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_2;
    // 0x80282804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80282808: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8028280C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80282810: beql        $t8, $zero, L_80282824
    if (ctx->r24 == 0) {
        // 0x80282814: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80282824;
    }
    goto skip_0;
    // 0x80282814: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80282818: jal         0x802C681C
    // 0x8028281C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_3;
    // 0x8028281C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80282820:
    // 0x80282820: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80282824:
    // 0x80282824: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80282828: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8028282C: jr          $ra
    // 0x80282830: nop

    return;
    // 0x80282830: nop

;}
RECOMP_FUNC void D_80208600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80208600: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80208604: lui         $t0, 0xFF00
    ctx->r8 = S32(0XFF00 << 16);
    // 0x80208608: addiu       $t1, $zero, 0xB8
    ctx->r9 = ADD32(0, 0XB8);
    // 0x8020860C: and         $v0, $v1, $t0
    ctx->r2 = ctx->r3 & ctx->r8;
    // 0x80208610: srl         $t6, $v0, 24
    ctx->r14 = S32(U32(ctx->r2) >> 24);
    // 0x80208614: beq         $t6, $t1, L_80208670
    if (ctx->r14 == ctx->r9) {
        // 0x80208618: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80208670;
    }
    // 0x80208618: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8020861C: lui         $t3, 0x7FFF
    ctx->r11 = S32(0X7FFF << 16);
    // 0x80208620: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x80208624: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
L_80208628:
    // 0x80208628: lw          $a3, 0x4($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X4);
    // 0x8020862C: bne         $v0, $t2, L_8020865C
    if (ctx->r2 != ctx->r10) {
        // 0x80208630: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_8020865C;
    }
    // 0x80208630: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80208634: and         $v0, $a0, $t3
    ctx->r2 = ctx->r4 & ctx->r11;
    // 0x80208638: sltu        $at, $v0, $a3
    ctx->r1 = ctx->r2 < ctx->r7 ? 1 : 0;
    // 0x8020863C: bne         $at, $zero, L_8020865C
    if (ctx->r1 != 0) {
        // 0x80208640: andi        $t7, $v1, 0xFFFF
        ctx->r15 = ctx->r3 & 0XFFFF;
            goto L_8020865C;
    }
    // 0x80208640: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80208644: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x80208648: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x8020864C: beql        $at, $zero, L_80208660
    if (ctx->r1 == 0) {
        // 0x80208650: lw          $v1, 0x0($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X0);
            goto L_80208660;
    }
    goto skip_0;
    // 0x80208650: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x80208654: jr          $ra
    // 0x80208658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80208658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8020865C:
    // 0x8020865C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
L_80208660:
    // 0x80208660: and         $v0, $v1, $t0
    ctx->r2 = ctx->r3 & ctx->r8;
    // 0x80208664: srl         $t9, $v0, 24
    ctx->r25 = S32(U32(ctx->r2) >> 24);
    // 0x80208668: bne         $t9, $t1, L_80208628
    if (ctx->r25 != ctx->r9) {
        // 0x8020866C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_80208628;
    }
    // 0x8020866C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80208670:
    // 0x80208670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80208674: jr          $ra
    // 0x80208678: nop

    return;
    // 0x80208678: nop

;}
