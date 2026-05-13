#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_80298890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298910: addiu       $sp, $sp, -0x1E8
    ctx->r29 = ADD32(ctx->r29, -0X1E8);
    // 0x80298914: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80298918: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8029891C: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80298920: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80298924: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80298928: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8029892C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80298930: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80298934: addiu       $t0, $t7, 0x1B0
    ctx->r8 = ADD32(ctx->r15, 0X1B0);
    // 0x80298938: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
L_8029893C:
    // 0x8029893C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80298940: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80298944: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80298948: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8029894C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80298950: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80298954: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80298958: bne         $t7, $t0, L_8029893C
    if (ctx->r15 != ctx->r8) {
        // 0x8029895C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8029893C;
    }
    // 0x8029895C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80298960: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80298964: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298968: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8029896C: sb          $t1, 0x151B($at)
    MEM_B(0X151B, ctx->r1) = ctx->r9;
    // 0x80298970: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80298974: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80298978: swc1        $f4, -0x6AE4($at)
    MEM_W(-0X6AE4, ctx->r1) = ctx->f4.u32l;
    // 0x8029897C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298980: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298984: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80298988: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x8029898C: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298990: addiu       $a1, $s1, 0x7FFF
    ctx->r5 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298994: swc1        $f6, -0x6AE0($at)
    MEM_W(-0X6AE0, ctx->r1) = ctx->f6.u32l;
    // 0x80298998: lw          $a1, 0x14D1($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X14D1);
    // 0x8029899C: jal         0x8021ACB0
    // 0x802989A0: lw          $a0, 0x14CD($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14CD);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802989A0: lw          $a0, 0x14CD($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14CD);
    after_0:
    // 0x802989A4: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x802989A8: lw          $a0, 0x14CD($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14CD);
    // 0x802989AC: jal         0x8021B838
    // 0x802989B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802989B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802989B4: ori         $at, $zero, 0x94D4
    ctx->r1 = 0 | 0X94D4;
    // 0x802989B8: addu        $s3, $s1, $at
    ctx->r19 = ADD32(ctx->r17, ctx->r1);
    // 0x802989BC: jal         0x8022970C
    // 0x802989C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802989C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x802989C4: lui         $a1, 0xBF32
    ctx->r5 = S32(0XBF32 << 16);
    // 0x802989C8: ori         $a1, $a1, 0xB8C7
    ctx->r5 = ctx->r5 | 0XB8C7;
    // 0x802989CC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802989D0: jal         0x802D01D4
    // 0x802989D4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_3;
    // 0x802989D4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_3:
    // 0x802989D8: lui         $a1, 0xC119
    ctx->r5 = S32(0XC119 << 16);
    // 0x802989DC: ori         $a1, $a1, 0x7C58
    ctx->r5 = ctx->r5 | 0X7C58;
    // 0x802989E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802989E4: jal         0x802D01D4
    // 0x802989E8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x802989E8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_4:
    // 0x802989EC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x802989F0: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x802989F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802989F8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802989FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298A00: swc1        $f8, 0x1504($v0)
    MEM_W(0X1504, ctx->r2) = ctx->f8.u32l;
    // 0x80298A04: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298A08: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298A0C: swc1        $f10, 0x1508($v0)
    MEM_W(0X1508, ctx->r2) = ctx->f10.u32l;
    // 0x80298A10: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298A14: jal         0x803049F8
    // 0x80298A18: swc1        $f16, 0x150C($v0)
    MEM_W(0X150C, ctx->r2) = ctx->f16.u32l;
    static_3_803049F8(rdram, ctx);
        goto after_5;
    // 0x80298A18: swc1        $f16, 0x150C($v0)
    MEM_W(0X150C, ctx->r2) = ctx->f16.u32l;
    after_5:
    // 0x80298A1C: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298A20: sw          $v0, 0x1525($at)
    MEM_W(0X1525, ctx->r1) = ctx->r2;
    // 0x80298A24: addiu       $s0, $sp, 0x34
    ctx->r16 = ADD32(ctx->r29, 0X34);
    // 0x80298A28: addiu       $s2, $sp, 0x1E4
    ctx->r18 = ADD32(ctx->r29, 0X1E4);
    // 0x80298A2C: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
L_80298A30:
    // 0x80298A30: lw          $a0, 0x1525($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1525);
    // 0x80298A34: jal         0x80304A64
    // 0x80298A38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80304A64(rdram, ctx);
        goto after_6;
    // 0x80298A38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80298A3C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x80298A40: bnel        $s0, $s2, L_80298A30
    if (ctx->r16 != ctx->r18) {
        // 0x80298A44: addiu       $a0, $s1, 0x7FFF
        ctx->r4 = ADD32(ctx->r17, 0X7FFF);
            goto L_80298A30;
    }
    goto skip_0;
    // 0x80298A44: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    skip_0:
    // 0x80298A48: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298A4C: lw          $a0, 0x14CD($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14CD);
    // 0x80298A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298A54: jal         0x8021B4B0
    // 0x80298A58: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_7;
    // 0x80298A58: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_7:
    // 0x80298A5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80298A60: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80298A64: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80298A68: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80298A6C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80298A70: jr          $ra
    // 0x80298A74: addiu       $sp, $sp, 0x1E8
    ctx->r29 = ADD32(ctx->r29, 0X1E8);
    return;
    // 0x80298A74: addiu       $sp, $sp, 0x1E8
    ctx->r29 = ADD32(ctx->r29, 0X1E8);
;}
RECOMP_FUNC void D_802D24D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2558: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D255C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D2560: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D2564: lw          $a1, 0x2924($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2924);
    // 0x802D2568: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D256C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802D2570: lbu         $t6, 0x4($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X4);
    // 0x802D2574: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D2578: beql        $t6, $at, L_802D2590
    if (ctx->r14 == ctx->r1) {
        // 0x802D257C: lw          $a2, 0x8($a1)
        ctx->r6 = MEM_W(ctx->r5, 0X8);
            goto L_802D2590;
    }
    goto skip_0;
    // 0x802D257C: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    skip_0:
    // 0x802D2580: jal         0x80231A24
    // 0x802D2584: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D2584: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D2588: lw          $a1, 0x2924($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2924);
    // 0x802D258C: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
L_802D2590:
    // 0x802D2590: addiu       $t7, $zero, 0x30
    ctx->r15 = ADD32(0, 0X30);
    // 0x802D2594: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802D2598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D259C: jal         0x80302238
    // 0x802D25A0: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x802D25A0: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_1:
    // 0x802D25A4: beql        $v0, $zero, L_802D25C0
    if (ctx->r2 == 0) {
        // 0x802D25A8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802D25C0;
    }
    goto skip_1;
    // 0x802D25A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x802D25AC: lw          $a1, 0x2924($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2924);
    // 0x802D25B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D25B4: jal         0x80302664
    // 0x802D25B8: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    static_3_80302664(rdram, ctx);
        goto after_2;
    // 0x802D25B8: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    after_2:
    // 0x802D25BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802D25C0:
    // 0x802D25C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D25C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D25C8: jr          $ra
    // 0x802D25CC: nop

    return;
    // 0x802D25CC: nop

;}
RECOMP_FUNC void D_802CEE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CEEDC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802CEEE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802CEEE4: jr          $ra
    // 0x802CEEE8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802CEEE8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8022BA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BA44: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8022BA48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA4C: ori         $at, $at, 0xA800
    ctx->r1 = ctx->r1 | 0XA800;
    // 0x8022BA50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BA54: beq         $a0, $at, L_8022BA7C
    if (ctx->r4 == ctx->r1) {
        // 0x8022BA58: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8022BA7C;
    }
    // 0x8022BA58: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022BA5C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8022BA60: beq         $a0, $at, L_8022BA88
    if (ctx->r4 == ctx->r1) {
        // 0x8022BA64: lui         $at, 0x803D
        ctx->r1 = S32(0X803D << 16);
            goto L_8022BA88;
    }
    // 0x8022BA64: lui         $at, 0x803D
    ctx->r1 = S32(0X803D << 16);
    // 0x8022BA68: ori         $at, $at, 0xA800
    ctx->r1 = ctx->r1 | 0XA800;
    // 0x8022BA6C: bne         $a0, $at, L_8022BA94
    if (ctx->r4 != ctx->r1) {
        // 0x8022BA70: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_8022BA94;
    }
    // 0x8022BA70: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BA74: b           L_8022BAA0
    // 0x8022BA78: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
        goto L_8022BAA0;
    // 0x8022BA78: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_8022BA7C:
    // 0x8022BA7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BA80: b           L_8022BAA0
    // 0x8022BA84: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
        goto L_8022BAA0;
    // 0x8022BA84: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_8022BA88:
    // 0x8022BA88: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022BA8C: b           L_8022BAA0
    // 0x8022BA90: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
        goto L_8022BAA0;
    // 0x8022BA90: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_8022BA94:
    // 0x8022BA94: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022BA98: jal         0x80231A24
    // 0x8022BA9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022BA9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
L_8022BAA0:
    // 0x8022BAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BAA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BAA8: jr          $ra
    // 0x8022BAAC: nop

    return;
    // 0x8022BAAC: nop

;}
RECOMP_FUNC void D_802F16DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F175C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802F1760: lui         $at, 0x4548
    ctx->r1 = S32(0X4548 << 16);
    // 0x802F1764: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802F1768: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F176C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F1770: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x802F1774: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F1778: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802F177C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802F1780: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802F1784: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802F1788: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802F178C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802F1790: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802F1794: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802F1798: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F179C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802F17A0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x802F17A4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802F17A8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802F17AC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802F17B0: jal         0x80308530
    // 0x802F17B4: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_0;
    // 0x802F17B4: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x802F17B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F17BC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F17C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802F17C4: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x802F17C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802F17CC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802F17D0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802F17D4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802F17D8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802F17DC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802F17E0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802F17E4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802F17E8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F17EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802F17F0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802F17F4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802F17F8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802F17FC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802F1800: jal         0x80308530
    // 0x802F1804: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_1;
    // 0x802F1804: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x802F1808: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F180C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F1810: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802F1814: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x802F1818: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802F181C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802F1820: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802F1824: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x802F1828: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802F182C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802F1830: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802F1834: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802F1838: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F183C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802F1840: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802F1844: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802F1848: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802F184C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802F1850: jal         0x80308530
    // 0x802F1854: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    static_3_80308530(rdram, ctx);
        goto after_2;
    // 0x802F1854: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802F1858: lui         $at, 0xC496
    ctx->r1 = S32(0XC496 << 16);
    // 0x802F185C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802F1860: lui         $at, 0x442A
    ctx->r1 = S32(0X442A << 16);
    // 0x802F1864: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F1868: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x802F186C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F1870: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802F1874: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802F1878: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802F187C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802F1880: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802F1884: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802F1888: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802F188C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F1890: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802F1894: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802F1898: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802F189C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802F18A0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802F18A4: jal         0x80308530
    // 0x802F18A8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_3;
    // 0x802F18A8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x802F18AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802F18B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802F18B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802F18B8: jr          $ra
    // 0x802F18BC: nop

    return;
    // 0x802F18BC: nop

;}
RECOMP_FUNC void D_802A8B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8BC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A8BC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802A8BCC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A8BD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A8BD4: beq         $a0, $zero, L_802A8C64
    if (ctx->r4 == 0) {
        // 0x802A8BD8: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_802A8C64;
    }
    // 0x802A8BD8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802A8BDC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A8BE0: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A8BE4: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802A8BE8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802A8BEC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802A8BF0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802A8BF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A8BF8: addiu       $a0, $a0, 0x5B88
    ctx->r4 = ADD32(ctx->r4, 0X5B88);
    // 0x802A8BFC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802A8C00: jal         0x802C6A00
    // 0x802A8C04: addiu       $a2, $zero, 0x484
    ctx->r6 = ADD32(0, 0X484);
    static_3_802C6A00(rdram, ctx);
        goto after_0;
    // 0x802A8C04: addiu       $a2, $zero, 0x484
    ctx->r6 = ADD32(0, 0X484);
    after_0:
    // 0x802A8C08: lui         $a3, 0x802A
    ctx->r7 = S32(0X802A << 16);
    // 0x802A8C0C: addiu       $a3, $a3, 0x454
    ctx->r7 = ADD32(ctx->r7, 0X454);
    // 0x802A8C10: addiu       $a0, $s0, 0x2AC8
    ctx->r4 = ADD32(ctx->r16, 0X2AC8);
    // 0x802A8C14: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802A8C18: addiu       $a2, $zero, 0x618
    ctx->r6 = ADD32(0, 0X618);
    // 0x802A8C1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802A8C20: jal         0x802C6A00
    // 0x802A8C24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_1;
    // 0x802A8C24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x802A8C28: addiu       $a0, $s0, 0x159C
    ctx->r4 = ADD32(ctx->r16, 0X159C);
    // 0x802A8C2C: jal         0x8029C1E8
    // 0x802A8C30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8029C1E8(rdram, ctx);
        goto after_2;
    // 0x802A8C30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802A8C34: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    // 0x802A8C38: jal         0x8029C1E8
    // 0x802A8C3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8029C1E8(rdram, ctx);
        goto after_3;
    // 0x802A8C3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802A8C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A8C44: jal         0x803086D4
    // 0x802A8C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_4;
    // 0x802A8C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802A8C4C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802A8C50: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A8C54: beql        $t8, $zero, L_802A8C68
    if (ctx->r24 == 0) {
        // 0x802A8C58: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802A8C68;
    }
    goto skip_0;
    // 0x802A8C58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802A8C5C: jal         0x802C681C
    // 0x802A8C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_5;
    // 0x802A8C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_802A8C64:
    // 0x802A8C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802A8C68:
    // 0x802A8C68: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802A8C6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A8C70: jr          $ra
    // 0x802A8C74: nop

    return;
    // 0x802A8C74: nop

;}
RECOMP_FUNC void D_802CB864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CB8E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802CB8E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802CB8EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802CB8F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802CB8F4: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    // 0x802CB8F8: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x802CB8FC: addiu       $a2, $v0, 0x1
    ctx->r6 = ADD32(ctx->r2, 0X1);
    // 0x802CB900: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CB904: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802CB908: sh          $a3, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r7;
    // 0x802CB90C: sh          $a3, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r7;
    // 0x802CB910: sb          $zero, 0xA4($a0)
    MEM_B(0XA4, ctx->r4) = 0;
    // 0x802CB914: sb          $zero, 0xA5($a0)
    MEM_B(0XA5, ctx->r4) = 0;
    // 0x802CB918: sh          $v1, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r3;
    // 0x802CB91C: sh          $v0, 0xA8($a0)
    MEM_H(0XA8, ctx->r4) = ctx->r2;
    // 0x802CB920: sh          $a2, 0xAA($a0)
    MEM_H(0XAA, ctx->r4) = ctx->r6;
    // 0x802CB924: sh          $v1, 0xAC($a0)
    MEM_H(0XAC, ctx->r4) = ctx->r3;
    // 0x802CB928: sh          $v0, 0xAE($a0)
    MEM_H(0XAE, ctx->r4) = ctx->r2;
    // 0x802CB92C: sh          $a2, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r6;
    // 0x802CB930: sh          $a3, 0x160($a0)
    MEM_H(0X160, ctx->r4) = ctx->r7;
    // 0x802CB934: jal         0x802FBD04
    // 0x802CB938: sh          $a3, 0x162($a0)
    MEM_H(0X162, ctx->r4) = ctx->r7;
    static_3_802FBD04(rdram, ctx);
        goto after_0;
    // 0x802CB938: sh          $a3, 0x162($a0)
    MEM_H(0X162, ctx->r4) = ctx->r7;
    after_0:
    // 0x802CB93C: jal         0x80224CA8
    // 0x802CB940: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802CB940: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x802CB944: jal         0x80224CA8
    // 0x802CB948: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802CB948: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_2:
    // 0x802CB94C: jal         0x80224CA8
    // 0x802CB950: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802CB950: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_3:
    // 0x802CB954: jal         0x80233CE8
    // 0x802CB958: nop

    static_3_80233CE8(rdram, ctx);
        goto after_4;
    // 0x802CB958: nop

    after_4:
    // 0x802CB95C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x802CB960: addiu       $t6, $zero, 0xE6
    ctx->r14 = ADD32(0, 0XE6);
    // 0x802CB964: addiu       $t7, $zero, 0xD4
    ctx->r15 = ADD32(0, 0XD4);
    // 0x802CB968: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802CB96C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802CB970: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CB974: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CB978: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CB97C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802CB980: jal         0x802344F4
    // 0x802CB984: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_5;
    // 0x802CB984: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x802CB988: jal         0x80233CE8
    // 0x802CB98C: nop

    static_3_80233CE8(rdram, ctx);
        goto after_6;
    // 0x802CB98C: nop

    after_6:
    // 0x802CB990: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x802CB994: addiu       $t8, $zero, 0xE6
    ctx->r24 = ADD32(0, 0XE6);
    // 0x802CB998: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x802CB99C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802CB9A0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802CB9A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CB9A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CB9AC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CB9B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802CB9B4: jal         0x802344F4
    // 0x802CB9B8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_7;
    // 0x802CB9B8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_7:
    // 0x802CB9BC: jal         0x80233CE8
    // 0x802CB9C0: nop

    static_3_80233CE8(rdram, ctx);
        goto after_8;
    // 0x802CB9C0: nop

    after_8:
    // 0x802CB9C4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x802CB9C8: addiu       $t0, $zero, 0xE6
    ctx->r8 = ADD32(0, 0XE6);
    // 0x802CB9CC: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x802CB9D0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802CB9D4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802CB9D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CB9DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CB9E0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CB9E4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x802CB9E8: jal         0x802344F4
    // 0x802CB9EC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_9;
    // 0x802CB9EC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x802CB9F0: jal         0x80233CE8
    // 0x802CB9F4: nop

    static_3_80233CE8(rdram, ctx);
        goto after_10;
    // 0x802CB9F4: nop

    after_10:
    // 0x802CB9F8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x802CB9FC: addiu       $t2, $zero, 0xE6
    ctx->r10 = ADD32(0, 0XE6);
    // 0x802CBA00: addiu       $t3, $zero, 0x26
    ctx->r11 = ADD32(0, 0X26);
    // 0x802CBA04: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802CBA08: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802CBA0C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CBA10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CBA14: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802CBA18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802CBA1C: jal         0x802344F4
    // 0x802CBA20: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_11;
    // 0x802CBA20: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_11:
    // 0x802CBA24: jal         0x8021BA90
    // 0x802CBA28: nop

    func_8021BA90(rdram, ctx);
        goto after_12;
    // 0x802CBA28: nop

    after_12:
    // 0x802CBA2C: lbu         $t4, 0xA4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XA4);
    // 0x802CBA30: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802CBA34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CBA38: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802CBA3C: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x802CBA40: jal         0x8021ACB0
    // 0x802CBA44: lw          $a1, 0x100($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X100);
    static_3_8021ACB0(rdram, ctx);
        goto after_13;
    // 0x802CBA44: lw          $a1, 0x100($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X100);
    after_13:
    // 0x802CBA48: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x802CBA4C: jal         0x8021B838
    // 0x802CBA50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B838(rdram, ctx);
        goto after_14;
    // 0x802CBA50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
    // 0x802CBA54: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x802CBA58: jal         0x8022970C
    // 0x802CBA5C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x802CBA5C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_15:
    // 0x802CBA60: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802CBA64: lui         $a1, 0xC0A0
    ctx->r5 = S32(0XC0A0 << 16);
    // 0x802CBA68: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x802CBA6C: jal         0x8022A0D0
    // 0x802CBA70: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_16;
    // 0x802CBA70: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    after_16:
    // 0x802CBA74: lui         $a1, 0x4021
    ctx->r5 = S32(0X4021 << 16);
    // 0x802CBA78: ori         $a1, $a1, 0xF775
    ctx->r5 = ctx->r5 | 0XF775;
    // 0x802CBA7C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802CBA80: jal         0x802D01D4
    // 0x802CBA84: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_17;
    // 0x802CBA84: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_17:
    // 0x802CBA88: lui         $a1, 0xBEDF
    ctx->r5 = S32(0XBEDF << 16);
    // 0x802CBA8C: ori         $a1, $a1, 0x66F9
    ctx->r5 = ctx->r5 | 0X66F9;
    // 0x802CBA90: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802CBA94: jal         0x802D01D4
    // 0x802CBA98: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_18;
    // 0x802CBA98: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_18:
    // 0x802CBA9C: lui         $a1, 0xBF06
    ctx->r5 = S32(0XBF06 << 16);
    // 0x802CBAA0: ori         $a1, $a1, 0xA95
    ctx->r5 = ctx->r5 | 0XA95;
    // 0x802CBAA4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802CBAA8: jal         0x802D01D4
    // 0x802CBAAC: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    static_3_802D01D4(rdram, ctx);
        goto after_19;
    // 0x802CBAAC: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_19:
    // 0x802CBAB0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802CBAB4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802CBAB8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802CBABC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802CBAC0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802CBAC4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802CBAC8: jal         0x8022A210
    // 0x802CBACC: nop

    static_3_8022A210(rdram, ctx);
        goto after_20;
    // 0x802CBACC: nop

    after_20:
    // 0x802CBAD0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x802CBAD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CBAD8: jal         0x8021B4B0
    // 0x802CBADC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    static_3_8021B4B0(rdram, ctx);
        goto after_21;
    // 0x802CBADC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_21:
    // 0x802CBAE0: jal         0x8021BA90
    // 0x802CBAE4: nop

    func_8021BA90(rdram, ctx);
        goto after_22;
    // 0x802CBAE4: nop

    after_22:
    // 0x802CBAE8: lbu         $t7, 0xA5($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XA5);
    // 0x802CBAEC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802CBAF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CBAF4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802CBAF8: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x802CBAFC: jal         0x8021ACB0
    // 0x802CBB00: lw          $a1, 0x100($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X100);
    static_3_8021ACB0(rdram, ctx);
        goto after_23;
    // 0x802CBB00: lw          $a1, 0x100($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X100);
    after_23:
    // 0x802CBB04: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802CBB08: jal         0x8021B838
    // 0x802CBB0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B838(rdram, ctx);
        goto after_24;
    // 0x802CBB0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_24:
    // 0x802CBB10: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    // 0x802CBB14: jal         0x8022970C
    // 0x802CBB18: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_25;
    // 0x802CBB18: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_25:
    // 0x802CBB1C: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x802CBB20: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802CBB24: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802CBB28: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x802CBB2C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802CBB30: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802CBB34: jal         0x8022A0D0
    // 0x802CBB38: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_26;
    // 0x802CBB38: nop

    after_26:
    // 0x802CBB3C: lui         $a1, 0x4021
    ctx->r5 = S32(0X4021 << 16);
    // 0x802CBB40: ori         $a1, $a1, 0xF775
    ctx->r5 = ctx->r5 | 0XF775;
    // 0x802CBB44: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802CBB48: jal         0x802D01D4
    // 0x802CBB4C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_27;
    // 0x802CBB4C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_27:
    // 0x802CBB50: lui         $a1, 0xBE32
    ctx->r5 = S32(0XBE32 << 16);
    // 0x802CBB54: ori         $a1, $a1, 0xB8C7
    ctx->r5 = ctx->r5 | 0XB8C7;
    // 0x802CBB58: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802CBB5C: jal         0x802D01D4
    // 0x802CBB60: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_28;
    // 0x802CBB60: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_28:
    // 0x802CBB64: lui         $a1, 0xBEDF
    ctx->r5 = S32(0XBEDF << 16);
    // 0x802CBB68: ori         $a1, $a1, 0x66F9
    ctx->r5 = ctx->r5 | 0X66F9;
    // 0x802CBB6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802CBB70: jal         0x802D01D4
    // 0x802CBB74: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    static_3_802D01D4(rdram, ctx);
        goto after_29;
    // 0x802CBB74: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_29:
    // 0x802CBB78: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802CBB7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802CBB80: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802CBB84: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802CBB88: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802CBB8C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802CBB90: jal         0x8022A210
    // 0x802CBB94: nop

    static_3_8022A210(rdram, ctx);
        goto after_30;
    // 0x802CBB94: nop

    after_30:
    // 0x802CBB98: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802CBB9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CBBA0: jal         0x8021B4B0
    // 0x802CBBA4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    static_3_8021B4B0(rdram, ctx);
        goto after_31;
    // 0x802CBBA4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_31:
    // 0x802CBBA8: lh          $a0, 0xB6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XB6);
    // 0x802CBBAC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802CBBB0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802CBBB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CBBB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802CBBBC: jal         0x802CFED8
    // 0x802CBBC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802CFED8(rdram, ctx);
        goto after_32;
    // 0x802CBBC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_32:
    // 0x802CBBC4: lh          $a0, 0xB6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XB6);
    // 0x802CBBC8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802CBBCC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802CBBD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CBBD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802CBBD8: jal         0x802CFED8
    // 0x802CBBDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802CFED8(rdram, ctx);
        goto after_33;
    // 0x802CBBDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_33:
    // 0x802CBBE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802CBBE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CBBE8: jal         0x80309B88
    // 0x802CBBEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309B88(rdram, ctx);
        goto after_34;
    // 0x802CBBEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_34:
    // 0x802CBBF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802CBBF4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802CBBF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802CBBFC: jr          $ra
    // 0x802CBC00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802CBC00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8021CD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021CD30: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8021CD34: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8021CD38: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8021CD3C: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8021CD40: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8021CD44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021CD48: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021CD4C: lui         $at, 0x4378
    ctx->r1 = S32(0X4378 << 16);
    // 0x8021CD50: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8021CD54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021CD58: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021CD5C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8021CD60: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8021CD64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021CD68: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x8021CD6C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8021CD70: nop

L_8021CD74:
    // 0x8021CD74: slti        $at, $v0, 0xF9
    ctx->r1 = SIGNED(ctx->r2) < 0XF9 ? 1 : 0;
    // 0x8021CD78: bne         $at, $zero, L_8021CD84
    if (ctx->r1 != 0) {
        // 0x8021CD7C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8021CD84;
    }
    // 0x8021CD7C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8021CD80: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
L_8021CD84:
    // 0x8021CD84: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8021CD88: slti        $at, $v1, 0xF9
    ctx->r1 = SIGNED(ctx->r3) < 0XF9 ? 1 : 0;
    // 0x8021CD8C: addiu       $t1, $zero, 0xF8
    ctx->r9 = ADD32(0, 0XF8);
    // 0x8021CD90: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021CD94: bne         $at, $zero, L_8021CDA0
    if (ctx->r1 != 0) {
        // 0x8021CD98: div.s       $f0, $f10, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
            goto L_8021CDA0;
    }
    // 0x8021CD98: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021CD9C: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
L_8021CDA0:
    // 0x8021CDA0: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8021CDA4: nop

    // 0x8021CDA8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021CDAC: div.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8021CDB0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8021CDB4: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021CDB8: bc1fl       L_8021CDC8
    if (!c1cs) {
        // 0x8021CDBC: c.eq.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
            goto L_8021CDC8;
    }
    goto skip_0;
    // 0x8021CDBC: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    skip_0:
    // 0x8021CDC0: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x8021CDC4: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
L_8021CDC8:
    // 0x8021CDC8: nop

    // 0x8021CDCC: bc1fl       L_8021CDE0
    if (!c1cs) {
        // 0x8021CDD0: sub.s       $f8, $f20, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_8021CDE0;
    }
    goto skip_1;
    // 0x8021CDD0: sub.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f0.fl;
    skip_1:
    // 0x8021CDD4: b           L_8021CDE4
    // 0x8021CDD8: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
        goto L_8021CDE4;
    // 0x8021CDD8: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x8021CDDC: sub.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f0.fl;
L_8021CDE0:
    // 0x8021CDE0: div.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
L_8021CDE4:
    // 0x8021CDE4: mul.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8021CDE8: addiu       $a3, $v1, 0x1
    ctx->r7 = ADD32(ctx->r3, 0X1);
    // 0x8021CDEC: slti        $at, $v0, 0xF9
    ctx->r1 = SIGNED(ctx->r2) < 0XF9 ? 1 : 0;
    // 0x8021CDF0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8021CDF4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8021CDF8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8021CDFC: nop

    // 0x8021CE00: sll         $t8, $a1, 8
    ctx->r24 = S32(ctx->r5 << 8);
    // 0x8021CE04: or          $t9, $t8, $a1
    ctx->r25 = ctx->r24 | ctx->r5;
    // 0x8021CE08: bne         $at, $zero, L_8021CE20
    if (ctx->r1 != 0) {
        // 0x8021CE0C: sh          $t9, 0x0($a2)
        MEM_H(0X0, ctx->r6) = ctx->r25;
            goto L_8021CE20;
    }
    // 0x8021CE0C: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x8021CE10: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8021CE14: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
    // 0x8021CE18: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021CE1C: div.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
L_8021CE20:
    // 0x8021CE20: slti        $at, $a3, 0xF9
    ctx->r1 = SIGNED(ctx->r7) < 0XF9 ? 1 : 0;
    // 0x8021CE24: bnel        $at, $zero, L_8021CE34
    if (ctx->r1 != 0) {
        // 0x8021CE28: mtc1        $a0, $f10
        ctx->f10.u32l = ctx->r4;
            goto L_8021CE34;
    }
    goto skip_2;
    // 0x8021CE28: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    skip_2:
    // 0x8021CE2C: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    // 0x8021CE30: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
L_8021CE34:
    // 0x8021CE34: nop

    // 0x8021CE38: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021CE3C: div.s       $f12, $f4, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8021CE40: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8021CE44: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021CE48: bc1fl       L_8021CE58
    if (!c1cs) {
        // 0x8021CE4C: c.eq.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
            goto L_8021CE58;
    }
    goto skip_3;
    // 0x8021CE4C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    skip_3:
    // 0x8021CE50: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x8021CE54: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
L_8021CE58:
    // 0x8021CE58: nop

    // 0x8021CE5C: bc1fl       L_8021CE70
    if (!c1cs) {
        // 0x8021CE60: sub.s       $f6, $f20, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f0.fl;
            goto L_8021CE70;
    }
    goto skip_4;
    // 0x8021CE60: sub.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f0.fl;
    skip_4:
    // 0x8021CE64: b           L_8021CE74
    // 0x8021CE68: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
        goto L_8021CE74;
    // 0x8021CE68: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x8021CE6C: sub.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f0.fl;
L_8021CE70:
    // 0x8021CE70: div.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f6.fl);
L_8021CE74:
    // 0x8021CE74: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x8021CE78: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8021CE7C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8021CE80: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021CE84: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8021CE88: nop

    // 0x8021CE8C: sll         $t3, $a1, 8
    ctx->r11 = S32(ctx->r5 << 8);
    // 0x8021CE90: or          $t4, $t3, $a1
    ctx->r12 = ctx->r11 | ctx->r5;
    // 0x8021CE94: bne         $v1, $t0, L_8021CD74
    if (ctx->r3 != ctx->r8) {
        // 0x8021CE98: sh          $t4, -0x2($a2)
        MEM_H(-0X2, ctx->r6) = ctx->r12;
            goto L_8021CD74;
    }
    // 0x8021CE98: sh          $t4, -0x2($a2)
    MEM_H(-0X2, ctx->r6) = ctx->r12;
    // 0x8021CE9C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021CEA0: jr          $ra
    // 0x8021CEA4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8021CEA4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void D_802A2348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A23C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A23CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A23D0: beq         $a0, $zero, L_802A240C
    if (ctx->r4 == 0) {
        // 0x802A23D4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802A240C;
    }
    // 0x802A23D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A23D8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A23DC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A23E0: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A23E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A23E8: jal         0x802D1A34
    // 0x802A23EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D1A34(rdram, ctx);
        goto after_0;
    // 0x802A23EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A23F0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A23F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A23F8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A23FC: beql        $t8, $zero, L_802A2410
    if (ctx->r24 == 0) {
        // 0x802A2400: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A2410;
    }
    goto skip_0;
    // 0x802A2400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A2404: jal         0x802C681C
    // 0x802A2408: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802A2408: nop

    after_1:
L_802A240C:
    // 0x802A240C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A2410:
    // 0x802A2410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A2414: jr          $ra
    // 0x802A2418: nop

    return;
    // 0x802A2418: nop

;}
RECOMP_FUNC void D_802E7598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7618: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E761C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802E7620: sb          $zero, 0x19A($a0)
    MEM_B(0X19A, ctx->r4) = 0;
    // 0x802E7624: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7628: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E762C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7630: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E7634: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7638: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E763C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7640: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E7644: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7648: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E764C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7650: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E7654: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7658: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E765C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7660: jr          $ra
    // 0x802E7664: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    return;
    // 0x802E7664: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
;}
RECOMP_FUNC void D_802DED40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DEDC0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DEDC4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802DEDC8: jr          $ra
    // 0x802DEDCC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802DEDCC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802D83E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8464: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8468: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D846C: jr          $ra
    // 0x802D8470: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D8470: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802EBEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EBF28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EBF2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EBF30: beq         $a0, $zero, L_802EBF60
    if (ctx->r4 == 0) {
        // 0x802EBF34: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EBF60;
    }
    // 0x802EBF34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EBF38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EBF3C: jal         0x8031C514
    // 0x802EBF40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EBF40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EBF44: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EBF48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EBF4C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EBF50: beql        $t7, $zero, L_802EBF64
    if (ctx->r15 == 0) {
        // 0x802EBF54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EBF64;
    }
    goto skip_0;
    // 0x802EBF54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EBF58: jal         0x802C681C
    // 0x802EBF5C: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EBF5C: nop

    after_1:
L_802EBF60:
    // 0x802EBF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EBF64:
    // 0x802EBF64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EBF68: jr          $ra
    // 0x802EBF6C: nop

    return;
    // 0x802EBF6C: nop

;}
RECOMP_FUNC void D_802F28AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F292C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802F2930: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802F2934: jr          $ra
    // 0x802F2938: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802F2938: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802DF0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DF128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DF12C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DF130: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DF134: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DF138: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x802DF13C: jal         0x802AA584
    // 0x802DF140: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802AA584(rdram, ctx);
        goto after_0;
    // 0x802DF140: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802DF144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF148: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802DF14C: jal         0x802AA584
    // 0x802DF150: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    static_3_802AA584(rdram, ctx);
        goto after_1;
    // 0x802DF150: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_1:
    // 0x802DF154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF158: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802DF15C: jal         0x802AA584
    // 0x802DF160: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_2;
    // 0x802DF160: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802DF164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF168: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x802DF16C: jal         0x802AA584
    // 0x802DF170: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_3;
    // 0x802DF170: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802DF174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF178: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x802DF17C: jal         0x802AA584
    // 0x802DF180: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_4;
    // 0x802DF180: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802DF184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF188: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x802DF18C: jal         0x802AA584
    // 0x802DF190: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_5;
    // 0x802DF190: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802DF194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF198: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x802DF19C: jal         0x802AA584
    // 0x802DF1A0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802AA584(rdram, ctx);
        goto after_6;
    // 0x802DF1A0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_6:
    // 0x802DF1A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF1A8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802DF1AC: jal         0x802AA584
    // 0x802DF1B0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802AA584(rdram, ctx);
        goto after_7;
    // 0x802DF1B0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_7:
    // 0x802DF1B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF1B8: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    // 0x802DF1BC: jal         0x802AA584
    // 0x802DF1C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_8;
    // 0x802DF1C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x802DF1C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF1C8: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x802DF1CC: jal         0x802AA584
    // 0x802DF1D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_9;
    // 0x802DF1D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x802DF1D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF1D8: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x802DF1DC: jal         0x802AA584
    // 0x802DF1E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_10;
    // 0x802DF1E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x802DF1E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF1E8: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x802DF1EC: jal         0x802AA584
    // 0x802DF1F0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802AA584(rdram, ctx);
        goto after_11;
    // 0x802DF1F0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_11:
    // 0x802DF1F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF1F8: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    // 0x802DF1FC: jal         0x802AA584
    // 0x802DF200: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    static_3_802AA584(rdram, ctx);
        goto after_12;
    // 0x802DF200: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_12:
    // 0x802DF204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF208: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802DF20C: jal         0x802AA584
    // 0x802DF210: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    static_3_802AA584(rdram, ctx);
        goto after_13;
    // 0x802DF210: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_13:
    // 0x802DF214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF218: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x802DF21C: jal         0x802AA584
    // 0x802DF220: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    static_3_802AA584(rdram, ctx);
        goto after_14;
    // 0x802DF220: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_14:
    // 0x802DF224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF228: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802DF22C: jal         0x802AA584
    // 0x802DF230: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_15;
    // 0x802DF230: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x802DF234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF238: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x802DF23C: jal         0x802AA584
    // 0x802DF240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_16;
    // 0x802DF240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x802DF244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF248: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x802DF24C: jal         0x802AA584
    // 0x802DF250: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_17;
    // 0x802DF250: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x802DF254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF258: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x802DF25C: jal         0x802AA584
    // 0x802DF260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_18;
    // 0x802DF260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x802DF264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF268: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x802DF26C: jal         0x802AA584
    // 0x802DF270: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    static_3_802AA584(rdram, ctx);
        goto after_19;
    // 0x802DF270: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_19:
    // 0x802DF274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF278: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x802DF27C: jal         0x802AA584
    // 0x802DF280: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_20;
    // 0x802DF280: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x802DF284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF288: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x802DF28C: jal         0x802AA584
    // 0x802DF290: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_21;
    // 0x802DF290: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x802DF294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF298: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x802DF29C: jal         0x802AA584
    // 0x802DF2A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_22;
    // 0x802DF2A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x802DF2A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF2A8: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x802DF2AC: jal         0x802AA584
    // 0x802DF2B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_23;
    // 0x802DF2B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_23:
    // 0x802DF2B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF2B8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802DF2BC: jal         0x802AA584
    // 0x802DF2C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_24;
    // 0x802DF2C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_24:
    // 0x802DF2C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF2C8: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x802DF2CC: jal         0x802AA584
    // 0x802DF2D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_25;
    // 0x802DF2D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_25:
    // 0x802DF2D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF2D8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802DF2DC: jal         0x802AA584
    // 0x802DF2E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_26;
    // 0x802DF2E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_26:
    // 0x802DF2E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF2E8: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    // 0x802DF2EC: jal         0x802AA584
    // 0x802DF2F0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_802AA584(rdram, ctx);
        goto after_27;
    // 0x802DF2F0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_27:
    // 0x802DF2F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF2F8: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x802DF2FC: jal         0x802AA584
    // 0x802DF300: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_802AA584(rdram, ctx);
        goto after_28;
    // 0x802DF300: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_28:
    // 0x802DF304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF308: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    // 0x802DF30C: jal         0x802AA584
    // 0x802DF310: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_802AA584(rdram, ctx);
        goto after_29;
    // 0x802DF310: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_29:
    // 0x802DF314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF318: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    // 0x802DF31C: jal         0x802AA584
    // 0x802DF320: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_802AA584(rdram, ctx);
        goto after_30;
    // 0x802DF320: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_30:
    // 0x802DF324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF328: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x802DF32C: jal         0x802AA584
    // 0x802DF330: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_802AA584(rdram, ctx);
        goto after_31;
    // 0x802DF330: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_31:
    // 0x802DF334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF338: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x802DF33C: jal         0x802AA584
    // 0x802DF340: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_802AA584(rdram, ctx);
        goto after_32;
    // 0x802DF340: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_32:
    // 0x802DF344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF348: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x802DF34C: jal         0x802AA584
    // 0x802DF350: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_33;
    // 0x802DF350: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_33:
    // 0x802DF354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF358: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x802DF35C: jal         0x802AA584
    // 0x802DF360: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_802AA584(rdram, ctx);
        goto after_34;
    // 0x802DF360: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_34:
    // 0x802DF364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF368: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x802DF36C: jal         0x802AA584
    // 0x802DF370: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    static_3_802AA584(rdram, ctx);
        goto after_35;
    // 0x802DF370: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_35:
    // 0x802DF374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF378: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x802DF37C: jal         0x802AA584
    // 0x802DF380: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    static_3_802AA584(rdram, ctx);
        goto after_36;
    // 0x802DF380: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_36:
    // 0x802DF384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF388: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x802DF38C: jal         0x802AA584
    // 0x802DF390: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_802AA584(rdram, ctx);
        goto after_37;
    // 0x802DF390: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_37:
    // 0x802DF394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF398: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802DF39C: jal         0x802AA584
    // 0x802DF3A0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    static_3_802AA584(rdram, ctx);
        goto after_38;
    // 0x802DF3A0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_38:
    // 0x802DF3A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF3A8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x802DF3AC: jal         0x802AA584
    // 0x802DF3B0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_802AA584(rdram, ctx);
        goto after_39;
    // 0x802DF3B0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_39:
    // 0x802DF3B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF3B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DF3BC: jal         0x802AA584
    // 0x802DF3C0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_802AA584(rdram, ctx);
        goto after_40;
    // 0x802DF3C0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_40:
    // 0x802DF3C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF3C8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x802DF3CC: jal         0x802AA584
    // 0x802DF3D0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_802AA584(rdram, ctx);
        goto after_41;
    // 0x802DF3D0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_41:
    // 0x802DF3D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF3D8: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    // 0x802DF3DC: jal         0x802AA584
    // 0x802DF3E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_42;
    // 0x802DF3E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_42:
    // 0x802DF3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF3E8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x802DF3EC: jal         0x802AA584
    // 0x802DF3F0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_802AA584(rdram, ctx);
        goto after_43;
    // 0x802DF3F0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_43:
    // 0x802DF3F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF3F8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802DF3FC: jal         0x802AA584
    // 0x802DF400: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    static_3_802AA584(rdram, ctx);
        goto after_44;
    // 0x802DF400: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_44:
    // 0x802DF404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF408: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x802DF40C: jal         0x802AA584
    // 0x802DF410: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_802AA584(rdram, ctx);
        goto after_45;
    // 0x802DF410: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_45:
    // 0x802DF414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF418: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802DF41C: jal         0x802AA584
    // 0x802DF420: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_802AA584(rdram, ctx);
        goto after_46;
    // 0x802DF420: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_46:
    // 0x802DF424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF428: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x802DF42C: jal         0x802AA584
    // 0x802DF430: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    static_3_802AA584(rdram, ctx);
        goto after_47;
    // 0x802DF430: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_47:
    // 0x802DF434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF438: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x802DF43C: jal         0x802AA584
    // 0x802DF440: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    static_3_802AA584(rdram, ctx);
        goto after_48;
    // 0x802DF440: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_48:
    // 0x802DF444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF448: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x802DF44C: jal         0x802AA584
    // 0x802DF450: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_49;
    // 0x802DF450: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_49:
    // 0x802DF454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF458: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x802DF45C: jal         0x802AA584
    // 0x802DF460: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_50;
    // 0x802DF460: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_50:
    // 0x802DF464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF468: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802DF46C: jal         0x802AA584
    // 0x802DF470: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_51;
    // 0x802DF470: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_51:
    // 0x802DF474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF478: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    // 0x802DF47C: jal         0x802AA584
    // 0x802DF480: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    static_3_802AA584(rdram, ctx);
        goto after_52;
    // 0x802DF480: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_52:
    // 0x802DF484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF488: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x802DF48C: jal         0x802AA584
    // 0x802DF490: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    static_3_802AA584(rdram, ctx);
        goto after_53;
    // 0x802DF490: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_53:
    // 0x802DF494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF498: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x802DF49C: jal         0x802AA584
    // 0x802DF4A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_54;
    // 0x802DF4A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_54:
    // 0x802DF4A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF4A8: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x802DF4AC: jal         0x802AA584
    // 0x802DF4B0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    static_3_802AA584(rdram, ctx);
        goto after_55;
    // 0x802DF4B0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_55:
    // 0x802DF4B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF4B8: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x802DF4BC: jal         0x802AA584
    // 0x802DF4C0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    static_3_802AA584(rdram, ctx);
        goto after_56;
    // 0x802DF4C0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_56:
    // 0x802DF4C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF4C8: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    // 0x802DF4CC: jal         0x802AA584
    // 0x802DF4D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_57;
    // 0x802DF4D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_57:
    // 0x802DF4D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF4D8: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x802DF4DC: jal         0x802AA584
    // 0x802DF4E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    static_3_802AA584(rdram, ctx);
        goto after_58;
    // 0x802DF4E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_58:
    // 0x802DF4E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF4E8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802DF4EC: jal         0x802AA584
    // 0x802DF4F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802AA584(rdram, ctx);
        goto after_59;
    // 0x802DF4F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_59:
    // 0x802DF4F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF4F8: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x802DF4FC: jal         0x802AA584
    // 0x802DF500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_60;
    // 0x802DF500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_60:
    // 0x802DF504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF508: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    // 0x802DF50C: jal         0x802AA584
    // 0x802DF510: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_61;
    // 0x802DF510: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_61:
    // 0x802DF514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DF518: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    // 0x802DF51C: jal         0x802AA584
    // 0x802DF520: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802AA584(rdram, ctx);
        goto after_62;
    // 0x802DF520: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_62:
    // 0x802DF524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DF528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DF52C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802DF530: jr          $ra
    // 0x802DF534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802DF534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802065FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802065FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80206600: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80206604: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80206608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020660C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80206610: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80206614: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80206618: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8020661C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80206620: jal         0x80231C58
    // 0x80206624: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80206624: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80206628: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8020662C: bne         $v0, $zero, L_802066AC
    if (ctx->r2 != 0) {
        // 0x80206630: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_802066AC;
    }
    // 0x80206630: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80206634: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80206638: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8020663C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80206640: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80206644: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80206648: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8020664C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80206650: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80206654: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80206658: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8020665C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80206660: beq         $a3, $at, L_80206684
    if (ctx->r7 == ctx->r1) {
        // 0x80206664: addu        $v0, $t7, $t8
        ctx->r2 = ADD32(ctx->r15, ctx->r24);
            goto L_80206684;
    }
    // 0x80206664: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80206668: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020666C: beq         $a3, $at, L_80206694
    if (ctx->r7 == ctx->r1) {
        // 0x80206670: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80206694;
    }
    // 0x80206670: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80206674: beq         $a3, $at, L_802066A4
    if (ctx->r7 == ctx->r1) {
        // 0x80206678: nop
    
            goto L_802066A4;
    }
    // 0x80206678: nop

    // 0x8020667C: b           L_802066B0
    // 0x80206680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802066B0;
    // 0x80206680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80206684:
    // 0x80206684: jal         0x80228DE0
    // 0x80206688: addiu       $a1, $v0, 0x88
    ctx->r5 = ADD32(ctx->r2, 0X88);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80206688: addiu       $a1, $v0, 0x88
    ctx->r5 = ADD32(ctx->r2, 0X88);
    after_1:
    // 0x8020668C: b           L_802066B0
    // 0x80206690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802066B0;
    // 0x80206690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80206694:
    // 0x80206694: jal         0x80228DE0
    // 0x80206698: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x80206698: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    after_2:
    // 0x8020669C: b           L_802066B0
    // 0x802066A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802066B0;
    // 0x802066A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802066A4:
    // 0x802066A4: jal         0x80228DE0
    // 0x802066A8: addiu       $a1, $v0, 0xC8
    ctx->r5 = ADD32(ctx->r2, 0XC8);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x802066A8: addiu       $a1, $v0, 0xC8
    ctx->r5 = ADD32(ctx->r2, 0XC8);
    after_3:
L_802066AC:
    // 0x802066AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802066B0:
    // 0x802066B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802066B4: jr          $ra
    // 0x802066B8: nop

    return;
    // 0x802066B8: nop

;}
RECOMP_FUNC void D_802D6DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D6E48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D6E4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D6E50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D6E54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D6E58: beq         $a0, $zero, L_802D6EE8
    if (ctx->r4 == 0) {
        // 0x802D6E5C: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802D6EE8;
    }
    // 0x802D6E5C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D6E60: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D6E64: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D6E68: jal         0x80307D80
    // 0x802D6E6C: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    static_3_80307D80(rdram, ctx);
        goto after_0;
    // 0x802D6E6C: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    after_0:
    // 0x802D6E70: addiu       $a0, $s0, 0xC78
    ctx->r4 = ADD32(ctx->r16, 0XC78);
    // 0x802D6E74: jal         0x802C49D0
    // 0x802D6E78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_1;
    // 0x802D6E78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802D6E7C: addiu       $a0, $s0, 0xAE4
    ctx->r4 = ADD32(ctx->r16, 0XAE4);
    // 0x802D6E80: jal         0x802C49D0
    // 0x802D6E84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_2;
    // 0x802D6E84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802D6E88: addiu       $a0, $s0, 0x950
    ctx->r4 = ADD32(ctx->r16, 0X950);
    // 0x802D6E8C: jal         0x802C49D0
    // 0x802D6E90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_3;
    // 0x802D6E90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802D6E94: addiu       $a0, $s0, 0x7BC
    ctx->r4 = ADD32(ctx->r16, 0X7BC);
    // 0x802D6E98: jal         0x802C49D0
    // 0x802D6E9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_4;
    // 0x802D6E9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x802D6EA0: addiu       $a0, $s0, 0x628
    ctx->r4 = ADD32(ctx->r16, 0X628);
    // 0x802D6EA4: jal         0x802C49D0
    // 0x802D6EA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_5;
    // 0x802D6EA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x802D6EAC: addiu       $a0, $s0, 0x494
    ctx->r4 = ADD32(ctx->r16, 0X494);
    // 0x802D6EB0: jal         0x802C49D0
    // 0x802D6EB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_6;
    // 0x802D6EB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x802D6EB8: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802D6EBC: jal         0x802D48A8
    // 0x802D6EC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D48A8(rdram, ctx);
        goto after_7;
    // 0x802D6EC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x802D6EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D6EC8: jal         0x8031739C
    // 0x802D6ECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_8;
    // 0x802D6ECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x802D6ED0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802D6ED4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802D6ED8: beql        $t8, $zero, L_802D6EEC
    if (ctx->r24 == 0) {
        // 0x802D6EDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802D6EEC;
    }
    goto skip_0;
    // 0x802D6EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802D6EE0: jal         0x802C681C
    // 0x802D6EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_9;
    // 0x802D6EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_802D6EE8:
    // 0x802D6EE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D6EEC:
    // 0x802D6EEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D6EF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D6EF4: jr          $ra
    // 0x802D6EF8: nop

    return;
    // 0x802D6EF8: nop

;}
RECOMP_FUNC void D_80243E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80243E84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80243E88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80243E8C: lw          $t6, 0x48($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X48);
    // 0x80243E90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80243E94: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80243E98: bne         $t6, $at, L_80243EA8
    if (ctx->r14 != ctx->r1) {
        // 0x80243E9C: nop
    
            goto L_80243EA8;
    }
    // 0x80243E9C: nop

    // 0x80243EA0: bnel        $s5, $zero, L_80243EB4
    if (ctx->r21 != 0) {
        // 0x80243EA4: sw          $t0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r8;
            goto L_80243EB4;
    }
    goto skip_0;
    // 0x80243EA4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    skip_0:
L_80243EA8:
    // 0x80243EA8: b           L_8024410C
    // 0x80243EAC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8024410C;
    // 0x80243EAC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80243EB0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
L_80243EB4:
    // 0x80243EB4: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80243EB8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80243EBC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80243EC0: jalr        $t9
    // 0x80243EC4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80243EC4: nop

    after_0:
    // 0x80243EC8: lh          $t7, 0x0($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X0);
    // 0x80243ECC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243ED0: sll         $s7, $s5, 1
    ctx->r23 = S32(ctx->r21 << 1);
    // 0x80243ED4: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80243ED8: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x80243EDC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80243EE0: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x80243EE4: lui         $at, 0x808
    ctx->r1 = S32(0X808 << 16);
    // 0x80243EE8: addiu       $s4, $v0, 0x10
    ctx->r20 = ADD32(ctx->r2, 0X10);
    // 0x80243EEC: addiu       $t8, $t9, 0x440
    ctx->r24 = ADD32(ctx->r25, 0X440);
    // 0x80243EF0: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x80243EF4: andi        $t9, $s7, 0xFFFF
    ctx->r25 = ctx->r23 & 0XFFFF;
    // 0x80243EF8: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80243EFC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80243F00: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x80243F04: addiu       $t6, $t8, 0x580
    ctx->r14 = ADD32(ctx->r24, 0X580);
    // 0x80243F08: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x80243F0C: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80243F10: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x80243F14: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80243F18: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80243F1C: addiu       $t8, $v1, 0x800
    ctx->r24 = ADD32(ctx->r3, 0X800);
    // 0x80243F20: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x80243F24: addiu       $t7, $v1, 0x6C0
    ctx->r15 = ADD32(ctx->r3, 0X6C0);
    // 0x80243F28: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80243F2C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80243F30: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x80243F34: lw          $t7, 0x38($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X38);
    // 0x80243F38: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80243F3C: beql        $t7, $zero, L_802440DC
    if (ctx->r15 == 0) {
        // 0x80243F40: lui         $t7, 0x308
        ctx->r15 = S32(0X308 << 16);
            goto L_802440DC;
    }
    goto skip_1;
    // 0x80243F40: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
    skip_1:
    // 0x80243F44: lh          $t6, 0x18($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X18);
    // 0x80243F48: sw          $zero, 0x38($s3)
    MEM_W(0X38, ctx->r19) = 0;
    // 0x80243F4C: lh          $t7, 0x1A($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X1A);
    // 0x80243F50: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80243F54: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80243F58: lh          $t9, 0x0($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X0);
    // 0x80243F5C: lw          $a0, 0x34($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X34);
    // 0x80243F60: addiu       $s1, $s3, 0x24
    ctx->r17 = ADD32(ctx->r19, 0X24);
    // 0x80243F64: multu       $t9, $t7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243F68: lh          $t9, 0x1C($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X1C);
    // 0x80243F6C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80243F70: nop

    // 0x80243F74: cvt.d.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.d = CVT_D_W(ctx->f4.u32l);
    // 0x80243F78: mflo        $t6
    ctx->r14 = lo;
    // 0x80243F7C: sra         $t8, $t6, 15
    ctx->r24 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80243F80: sh          $t8, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r24;
    // 0x80243F84: lh          $t7, 0x28($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X28);
    // 0x80243F88: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80243F8C: jal         0x80243D04
    // 0x80243F90: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    static_3_80243D04(rdram, ctx);
        goto after_1;
    // 0x80243F90: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    after_1:
    // 0x80243F94: lh          $t6, 0x18($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X18);
    // 0x80243F98: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80243F9C: sh          $v0, 0x26($s3)
    MEM_H(0X26, ctx->r19) = ctx->r2;
    // 0x80243FA0: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80243FA4: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x80243FA8: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80243FAC: lh          $t7, 0x0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X0);
    // 0x80243FB0: lh          $t6, 0x1A($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X1A);
    // 0x80243FB4: lw          $a0, 0x34($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X34);
    // 0x80243FB8: addiu       $s1, $s3, 0x2A
    ctx->r17 = ADD32(ctx->r19, 0X2A);
    // 0x80243FBC: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80243FC0: lh          $t7, 0x1E($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X1E);
    // 0x80243FC4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80243FC8: nop

    // 0x80243FCC: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x80243FD0: mflo        $t8
    ctx->r24 = lo;
    // 0x80243FD4: sra         $t9, $t8, 15
    ctx->r25 = S32(SIGNED(ctx->r24) >> 15);
    // 0x80243FD8: sh          $t9, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r25;
    // 0x80243FDC: lh          $t6, 0x2E($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X2E);
    // 0x80243FE0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80243FE4: jal         0x80243D04
    // 0x80243FE8: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    static_3_80243D04(rdram, ctx);
        goto after_2;
    // 0x80243FE8: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    after_2:
    // 0x80243FEC: lh          $t8, 0x1C($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X1C);
    // 0x80243FF0: sh          $v0, 0x2C($s3)
    MEM_H(0X2C, ctx->r19) = ctx->r2;
    // 0x80243FF4: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x80243FF8: lui         $at, 0x906
    ctx->r1 = S32(0X906 << 16);
    // 0x80243FFC: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80244000: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80244004: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80244008: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8024400C: lh          $t6, 0x1E($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X1E);
    // 0x80244010: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80244014: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80244018: lui         $at, 0x904
    ctx->r1 = S32(0X904 << 16);
    // 0x8024401C: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x80244020: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80244024: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80244028: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8024402C: lh          $t7, 0x28($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X28);
    // 0x80244030: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80244034: lui         $at, 0x902
    ctx->r1 = S32(0X902 << 16);
    // 0x80244038: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x8024403C: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80244040: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80244044: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80244048: lh          $t7, 0x26($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X26);
    // 0x8024404C: lhu         $t9, 0x24($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X24);
    // 0x80244050: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80244054: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x80244058: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8024405C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80244060: lh          $t8, 0x2E($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2E);
    // 0x80244064: lui         $at, 0x900
    ctx->r1 = S32(0X900 << 16);
    // 0x80244068: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8024406C: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x80244070: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x80244074: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80244078: lh          $t8, 0x2C($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2C);
    // 0x8024407C: lhu         $t7, 0x2A($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X2A);
    // 0x80244080: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80244084: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x80244088: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8024408C: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x80244090: lh          $t9, 0x20($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X20);
    // 0x80244094: lui         $at, 0x908
    ctx->r1 = S32(0X908 << 16);
    // 0x80244098: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x8024409C: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x802440A0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x802440A4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802440A8: lh          $t8, 0x22($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X22);
    // 0x802440AC: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x802440B0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x802440B4: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x802440B8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802440BC: lui         $t6, 0x309
    ctx->r14 = S32(0X309 << 16);
    // 0x802440C0: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x802440C4: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x802440C8: jal         0x802375F0
    // 0x802440CC: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    static_3_802375F0(rdram, ctx);
        goto after_3;
    // 0x802440CC: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_3:
    // 0x802440D0: b           L_802440F0
    // 0x802440D4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
        goto L_802440F0;
    // 0x802440D4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x802440D8: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
L_802440DC:
    // 0x802440DC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x802440E0: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x802440E4: jal         0x802375F0
    // 0x802440E8: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    static_3_802375F0(rdram, ctx);
        goto after_4;
    // 0x802440E8: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_4:
    // 0x802440EC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_802440F0:
    // 0x802440F0: lh          $t8, 0x0($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X0);
    // 0x802440F4: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x802440F8: addu        $t9, $t8, $s7
    ctx->r25 = ADD32(ctx->r24, ctx->r23);
    // 0x802440FC: sh          $t9, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r25;
    // 0x80244100: lw          $t6, 0x30($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X30);
    // 0x80244104: addu        $t7, $t6, $s5
    ctx->r15 = ADD32(ctx->r14, ctx->r21);
    // 0x80244108: sw          $t7, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r15;
L_8024410C:
    // 0x8024410C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80244110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80244114: jr          $ra
    // 0x80244118: nop

    return;
    // 0x80244118: nop

;}
RECOMP_FUNC void D_802EA6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA760: jr          $ra
    // 0x802EA764: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802EA764: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802D965C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D96DC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802D96E0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D96E4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802D96E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802D96EC: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x802D96F0: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x802D96F4: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x802D96F8: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x802D96FC: lw          $t6, 0x7168($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X7168);
    // 0x802D9700: bltz        $t6, L_802D9734
    if (SIGNED(ctx->r14) < 0) {
        // 0x802D9704: sw          $t6, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r14;
            goto L_802D9734;
    }
    // 0x802D9704: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x802D9708: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x802D970C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D9710: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x802D9714: jal         0x8021D228
    // 0x802D9718: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021D228(rdram, ctx);
        goto after_0;
    // 0x802D9718: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x802D971C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x802D9720: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D9724: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802D9728: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802D972C: jal         0x8021CEF8
    // 0x802D9730: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021CEF8(rdram, ctx);
        goto after_1;
    // 0x802D9730: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_802D9734:
    // 0x802D9734: jal         0x8022331C
    // 0x802D9738: nop

    static_3_8022331C(rdram, ctx);
        goto after_2;
    // 0x802D9738: nop

    after_2:
    // 0x802D973C: jal         0x8022970C
    // 0x802D9740: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802D9740: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x802D9744: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802D9748: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D974C: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x802D9750: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D9754: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D9758: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802D975C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802D9760: lui         $a2, 0x4398
    ctx->r6 = S32(0X4398 << 16);
    // 0x802D9764: jal         0x8022A848
    // 0x802D9768: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_4;
    // 0x802D9768: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x802D976C: jal         0x80221B2C
    // 0x802D9770: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    static_3_80221B2C(rdram, ctx);
        goto after_5;
    // 0x802D9770: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_5:
    // 0x802D9774: jal         0x8022970C
    // 0x802D9778: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_8022970C(rdram, ctx);
        goto after_6;
    // 0x802D9778: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_6:
    // 0x802D977C: jal         0x8022149C
    // 0x802D9780: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    static_3_8022149C(rdram, ctx);
        goto after_7;
    // 0x802D9780: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_7:
    // 0x802D9784: jal         0x802233EC
    // 0x802D9788: lui         $a0, 0xC2
    ctx->r4 = S32(0XC2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_8;
    // 0x802D9788: lui         $a0, 0xC2
    ctx->r4 = S32(0XC2 << 16);
    after_8:
    // 0x802D978C: jal         0x8021F4E4
    // 0x802D9790: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_9;
    // 0x802D9790: nop

    after_9:
    // 0x802D9794: lh          $t8, 0x82($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X82);
    // 0x802D9798: lh          $t9, 0x86($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X86);
    // 0x802D979C: lh          $t0, 0x8A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X8A);
    // 0x802D97A0: lh          $t1, 0x8E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X8E);
    // 0x802D97A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D97A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D97AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D97B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802D97B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D97B8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802D97BC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802D97C0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802D97C4: jal         0x8021F35C
    // 0x802D97C8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802D97C8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_10:
    // 0x802D97CC: lh          $t2, 0x82($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X82);
    // 0x802D97D0: lh          $t3, 0x86($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X86);
    // 0x802D97D4: lh          $t4, 0x8A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X8A);
    // 0x802D97D8: lh          $t5, 0x8E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X8E);
    // 0x802D97DC: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    // 0x802D97E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D97E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D97E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802D97EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D97F0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802D97F4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802D97F8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802D97FC: jal         0x8021F35C
    // 0x802D9800: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x802D9800: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    after_11:
    // 0x802D9804: lh          $t6, 0x82($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X82);
    // 0x802D9808: lh          $t7, 0x86($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X86);
    // 0x802D980C: lh          $t8, 0x8A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X8A);
    // 0x802D9810: lh          $t9, 0x8E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X8E);
    // 0x802D9814: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    // 0x802D9818: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x802D981C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D9820: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802D9824: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D9828: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802D982C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802D9830: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802D9834: jal         0x8021F35C
    // 0x802D9838: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x802D9838: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_12:
    // 0x802D983C: lh          $t0, 0x82($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X82);
    // 0x802D9840: lh          $t1, 0x86($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X86);
    // 0x802D9844: lh          $t2, 0x8A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X8A);
    // 0x802D9848: lh          $t3, 0x8E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X8E);
    // 0x802D984C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D9850: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x802D9854: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802D9858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802D985C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D9860: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802D9864: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802D9868: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802D986C: jal         0x8021F35C
    // 0x802D9870: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    static_3_8021F35C(rdram, ctx);
        goto after_13;
    // 0x802D9870: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_13:
    // 0x802D9874: jal         0x8021FCD0
    // 0x802D9878: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_14;
    // 0x802D9878: nop

    after_14:
    // 0x802D987C: jal         0x802230E4
    // 0x802D9880: nop

    static_3_802230E4(rdram, ctx);
        goto after_15;
    // 0x802D9880: nop

    after_15:
    // 0x802D9884: jal         0x8022337C
    // 0x802D9888: nop

    static_3_8022337C(rdram, ctx);
        goto after_16;
    // 0x802D9888: nop

    after_16:
    // 0x802D988C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x802D9890: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802D9894: bltzl       $t4, L_802D98BC
    if (SIGNED(ctx->r12) < 0) {
        // 0x802D9898: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802D98BC;
    }
    goto skip_0;
    // 0x802D9898: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802D989C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802D98A0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x802D98A4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802D98A8: mfc1        $a2, $f9
    ctx->r6 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x802D98AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D98B0: jal         0x8021CEF8
    // 0x802D98B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021CEF8(rdram, ctx);
        goto after_17;
    // 0x802D98B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x802D98B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802D98BC:
    // 0x802D98BC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x802D98C0: jr          $ra
    // 0x802D98C4: nop

    return;
    // 0x802D98C4: nop

;}
RECOMP_FUNC void func_8022B948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B948: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8022B94C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8022B950: jal         0x8022B2F4
    // 0x8022B954: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8022B2F4(rdram, ctx);
        goto after_0;
    // 0x8022B954: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8022B958: bne         $v0, $zero, L_8022B97C
    if (ctx->r2 != 0) {
        // 0x8022B95C: lw          $a2, 0x2C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X2C);
            goto L_8022B97C;
    }
    // 0x8022B95C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B960: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8022B964: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8022B968: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8022B96C: addu        $a3, $a3, $s0
    ctx->r7 = ADD32(ctx->r7, ctx->r16);
    // 0x8022B970: jal         0x8022B374
    // 0x8022B974: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8022B374(rdram, ctx);
        goto after_1;
    // 0x8022B974: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x8022B978: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
L_8022B97C:
    // 0x8022B97C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8022B980: lui         $v0, 0x8027
    // ROM `aero_us.z64` @ 0x8022B980 (Capstone); N64Recomp regen can emit lui 0 here.
    ctx->r2 = S32(0X8027 << 16);
    // 0x8022B984: addiu       $v0, $v0, 0x5F7C
    ctx->r2 = ADD32(ctx->r2, 0X5F7C);
    // 0x8022B988: addu        $t2, $a3, $s0
    ctx->r10 = ADD32(ctx->r7, ctx->r16);
    // 0x8022B98C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8022B990: lui         $t4, 0x8027
    ctx->r12 = S32(0X8027 << 16);
    // 0x8022B994: lw          $t4, 0x5F80($t4)
    ctx->r12 = MEM_W(0X5F80, ctx->r12);
    // 0x8022B998: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B99C: addiu       $a0, $a0, 0x40D0
    ctx->r4 = ADD32(ctx->r4, 0X40D0);
    // 0x8022B9A0: sltu        $at, $t2, $t4
    ctx->r1 = ctx->r10 < ctx->r12 ? 1 : 0;
    // 0x8022B9A4: bne         $at, $zero, L_8022B9F4
    if (ctx->r1 != 0) {
        // 0x8022B9A8: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_8022B9F4;
    }
    // 0x8022B9A8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8022B9AC: jal         0x80231A24
    // 0x8022B9B0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022B9B0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_2:
    // 0x8022B9B4: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x8022B9B8: lw          $t5, 0x5ED0($t5)
    ctx->r13 = MEM_W(0X5ED0, ctx->r13);
    // 0x8022B9BC: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8022B9C0: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022B9C4: addiu       $v0, $v0, 0x5F88
    ctx->r2 = ADD32(ctx->r2, 0X5F88);
    // 0x8022B9C8: sw          $t5, 0x5F7C($at)
    MEM_W(0X5F7C, ctx->r1) = ctx->r13;
    // 0x8022B9CC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(0X0, ctx->r2);
    // 0x8022B9D0: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022B9D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(0X2C, ctx->r29);
    // 0x8022B9D8: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8022B9DC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8022B9E0: sw          $zero, 0x5E78($at)
    MEM_W(0X5E78, ctx->r1) = 0;
    // 0x8022B9E4: jal         0x8022B80C
    // 0x8022B9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022B80C(rdram, ctx);
        goto after_3;
    // 0x8022B9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8022B9EC: b           L_8022B9F8
    // 0x8022B9F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8022B9F8;
    // 0x8022B9F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022B9F4:
    // 0x8022B9F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8022B9F8:
    // 0x8022B9F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B9FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022BA00: jr          $ra
    // 0x8022BA04: nop

    return;
    // 0x8022BA04: nop

;}
RECOMP_FUNC void func_802E8784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8804: jr          $ra
    // 0x802E8808: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
    return;
    // 0x802E8808: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802D180C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D188C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802D1890: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802D1894: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802D1898: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802D189C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802D18A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802D18A4:
    // 0x802D18A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802D18A8: jal         0x80301CA0
    // 0x802D18AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80301CA0(rdram, ctx);
        goto after_0;
    // 0x802D18AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x802D18B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802D18B4: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x802D18B8: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x802D18BC: bne         $at, $zero, L_802D18A4
    if (ctx->r1 != 0) {
        // 0x802D18C0: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_802D18A4;
    }
    // 0x802D18C0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x802D18C4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802D18C8: sb          $t7, 0x2020($s1)
    MEM_B(0X2020, ctx->r17) = ctx->r15;
    // 0x802D18CC: jal         0x8022970C
    // 0x802D18D0: addiu       $a0, $s1, 0x1FE0
    ctx->r4 = ADD32(ctx->r17, 0X1FE0);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x802D18D0: addiu       $a0, $s1, 0x1FE0
    ctx->r4 = ADD32(ctx->r17, 0X1FE0);
    after_1:
    // 0x802D18D4: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802D18D8: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802D18DC: lbu         $v0, 0x4E($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4E);
    // 0x802D18E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802D18E4: bne         $v0, $zero, L_802D18F4
    if (ctx->r2 != 0) {
        // 0x802D18E8: nop
    
            goto L_802D18F4;
    }
    // 0x802D18E8: nop

    // 0x802D18EC: b           L_802D1924
    // 0x802D18F0: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
        goto L_802D1924;
    // 0x802D18F0: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_802D18F4:
    // 0x802D18F4: bne         $v0, $at, L_802D1904
    if (ctx->r2 != ctx->r1) {
        // 0x802D18F8: nop
    
            goto L_802D1904;
    }
    // 0x802D18F8: nop

    // 0x802D18FC: b           L_802D1924
    // 0x802D1900: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_802D1924;
    // 0x802D1900: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_802D1904:
    // 0x802D1904: beq         $v0, $zero, L_802D1924
    if (ctx->r2 == 0) {
        // 0x802D1908: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_802D1924;
    }
    // 0x802D1908: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x802D190C: sb          $zero, 0x4E($v1)
    MEM_B(0X4E, ctx->r3) = 0;
    // 0x802D1910: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D1914: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802D1918: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802D191C: jal         0x802001AC
    // 0x802D1920: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802001AC(rdram, ctx);
        goto after_2;
    // 0x802D1920: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_802D1924:
    // 0x802D1924: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x802D1928: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802D192C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D1930: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D1934: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802D1938: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802D193C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802D1940: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802D1944: jal         0x802001AC
    // 0x802D1948: sdc1        $f4, 0x10($sp)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X10, ctx->r29);
    static_3_802001AC(rdram, ctx);
        goto after_3;
    // 0x802D1948: sdc1        $f4, 0x10($sp)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X10, ctx->r29);
    after_3:
    // 0x802D194C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802D1950: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x802D1954: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x802D1958: jr          $ra
    // 0x802D195C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802D195C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802A1E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1EB4: jr          $ra
    // 0x802A1EB8: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
    return;
    // 0x802A1EB8: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
;}
RECOMP_FUNC void D_8023E1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E1A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023E1A4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8023E1A8: lbu         $t6, 0x47($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E1AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023E1B0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8023E1B4: slti        $at, $t6, 0x41
    ctx->r1 = SIGNED(ctx->r14) < 0X41 ? 1 : 0;
    // 0x8023E1B8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8023E1BC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8023E1C0: bne         $at, $zero, L_8023E1D0
    if (ctx->r1 != 0) {
        // 0x8023E1C4: sw          $zero, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = 0;
            goto L_8023E1D0;
    }
    // 0x8023E1C4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8023E1C8: b           L_8023E2CC
    // 0x8023E1CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023E2CC;
    // 0x8023E1CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8023E1D0:
    // 0x8023E1D0: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E1D4: blez        $t7, L_8023E2C8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8023E1D8: nop
    
            goto L_8023E2C8;
    }
    // 0x8023E1D8: nop

L_8023E1DC:
    // 0x8023E1DC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8023E1E0: lbu         $a1, 0x47($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E1E4: jal         0x80247D10
    // 0x8023E1E8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    static_3_80247D10(rdram, ctx);
        goto after_0;
    // 0x8023E1E8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_0:
    // 0x8023E1EC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8023E1F0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8023E1F4: beq         $t8, $zero, L_8023E204
    if (ctx->r24 == 0) {
        // 0x8023E1F8: nop
    
            goto L_8023E204;
    }
    // 0x8023E1F8: nop

    // 0x8023E1FC: b           L_8023E2CC
    // 0x8023E200: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8023E2CC;
    // 0x8023E200: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8023E204:
    // 0x8023E204: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E208: lbu         $t1, 0x47($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X47);
    // 0x8023E20C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x8023E210: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023E214: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8023E218: addiu       $t0, $t9, -0x8
    ctx->r8 = ADD32(ctx->r25, -0X8);
    // 0x8023E21C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8023E220: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8023E224: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8023E228: sb          $t2, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r10;
    // 0x8023E22C: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x8023E230: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    // 0x8023E234: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8023E238: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x8023E23C: jal         0x8023D228
    // 0x8023E240: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    static_3_8023D228(rdram, ctx);
        goto after_1;
    // 0x8023E240: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    after_1:
    // 0x8023E244: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8023E248: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8023E24C: lui         $a3, 0xF
    ctx->r7 = S32(0XF << 16);
    // 0x8023E250: ori         $a3, $a3, 0x4240
    ctx->r7 = ctx->r7 | 0X4240;
    // 0x8023E254: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E258: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023E25C: jal         0x8023D128
    // 0x8023E260: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_8023D128(rdram, ctx);
        goto after_2;
    // 0x8023E260: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x8023E264: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8023E268: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023E26C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8023E270: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x8023E274: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023E278: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8023E27C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023E280: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x8023E284: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8023E288: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8023E28C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8023E290: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8023E294: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8023E298: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8023E29C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8023E2A0: jal         0x8023E920
    // 0x8023E2A4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    static_3_8023E920(rdram, ctx);
        goto after_3;
    // 0x8023E2A4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_3:
    // 0x8023E2A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023E2AC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8023E2B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8023E2B4: jal         0x802374B0
    // 0x8023E2B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_4;
    // 0x8023E2B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8023E2BC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8023E2C0: bgtz        $t9, L_8023E1DC
    if (SIGNED(ctx->r25) > 0) {
        // 0x8023E2C4: nop
    
            goto L_8023E1DC;
    }
    // 0x8023E2C4: nop

L_8023E2C8:
    // 0x8023E2C8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_8023E2CC:
    // 0x8023E2CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023E2D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8023E2D4: jr          $ra
    // 0x8023E2D8: nop

    return;
    // 0x8023E2D8: nop

;}
RECOMP_FUNC void D_8023E5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023E5F0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023E5F4: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x8023E5F8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023E5FC: andi        $t7, $a2, 0x3
    ctx->r15 = ctx->r6 & 0X3;
    // 0x8023E600: beq         $t7, $zero, L_8023E61C
    if (ctx->r15 == 0) {
        // 0x8023E604: nop
    
            goto L_8023E61C;
    }
    // 0x8023E604: nop

L_8023E608:
    // 0x8023E608: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8023E60C: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x8023E610: andi        $t9, $a2, 0x3
    ctx->r25 = ctx->r6 & 0X3;
    // 0x8023E614: bne         $t9, $zero, L_8023E608
    if (ctx->r25 != 0) {
        // 0x8023E618: nop
    
            goto L_8023E608;
    }
    // 0x8023E618: nop

L_8023E61C:
    // 0x8023E61C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8023E620: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x8023E624: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x8023E628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023E62C: or          $t1, $t0, $a0
    ctx->r9 = ctx->r8 | ctx->r4;
    // 0x8023E630: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x8023E634: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8023E638: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8023E63C: jr          $ra
    // 0x8023E640: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    return;
    // 0x8023E640: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
;}
RECOMP_FUNC void D_802B4E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4EEC: addiu       $sp, $sp, -0x3E0
    ctx->r29 = ADD32(ctx->r29, -0X3E0);
    // 0x802B4EF0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802B4EF4: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x802B4EF8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802B4EFC: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x802B4F00: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x802B4F04: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x802B4F08: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x802B4F0C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802B4F10: sw          $a1, 0x3E4($sp)
    MEM_W(0X3E4, ctx->r29) = ctx->r5;
    // 0x802B4F14: jal         0x80318214
    // 0x802B4F18: sw          $a2, 0x3E8($sp)
    MEM_W(0X3E8, ctx->r29) = ctx->r6;
    static_3_80318214(rdram, ctx);
        goto after_0;
    // 0x802B4F18: sw          $a2, 0x3E8($sp)
    MEM_W(0X3E8, ctx->r29) = ctx->r6;
    after_0:
    // 0x802B4F1C: swc1        $f0, 0x2D8($sp)
    MEM_W(0X2D8, ctx->r29) = ctx->f0.u32l;
    // 0x802B4F20: lwc1        $f6, 0x48($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X48);
    // 0x802B4F24: lwc1        $f4, 0x4C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x802B4F28: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802B4F2C: lbu         $s1, 0x0($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X0);
    // 0x802B4F30: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B4F34: swc1        $f8, 0x2D4($sp)
    MEM_W(0X2D4, ctx->r29) = ctx->f8.u32l;
    // 0x802B4F38: lbu         $t6, 0x8F1($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X8F1);
    // 0x802B4F3C: bnel        $t6, $zero, L_802B4F68
    if (ctx->r14 != 0) {
        // 0x802B4F40: addiu       $t0, $s2, 0x8F4
        ctx->r8 = ADD32(ctx->r18, 0X8F4);
            goto L_802B4F68;
    }
    goto skip_0;
    // 0x802B4F40: addiu       $t0, $s2, 0x8F4
    ctx->r8 = ADD32(ctx->r18, 0X8F4);
    skip_0:
    // 0x802B4F44: lw          $a3, 0x1A0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1A0);
    // 0x802B4F48: addiu       $a1, $s2, 0x8F4
    ctx->r5 = ADD32(ctx->r18, 0X8F4);
    // 0x802B4F4C: lw          $t9, 0x64($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X64);
    // 0x802B4F50: lh          $t7, 0x60($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X60);
    // 0x802B4F54: jalr        $t9
    // 0x802B4F58: addu        $a0, $t7, $s2
    ctx->r4 = ADD32(ctx->r15, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802B4F58: addu        $a0, $t7, $s2
    ctx->r4 = ADD32(ctx->r15, ctx->r18);
    after_1:
    // 0x802B4F5C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B4F60: sb          $t8, 0x8F1($s2)
    MEM_B(0X8F1, ctx->r18) = ctx->r24;
    // 0x802B4F64: addiu       $t0, $s2, 0x8F4
    ctx->r8 = ADD32(ctx->r18, 0X8F4);
L_802B4F68:
    // 0x802B4F68: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x802B4F6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B4F70: lw          $a1, 0x3E4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3E4);
    // 0x802B4F74: jal         0x8031883C
    // 0x802B4F78: lw          $a2, 0x3E8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3E8);
    static_3_8031883C(rdram, ctx);
        goto after_2;
    // 0x802B4F78: lw          $a2, 0x3E8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3E8);
    after_2:
    // 0x802B4F7C: sw          $v0, 0x3DC($sp)
    MEM_W(0X3DC, ctx->r29) = ctx->r2;
    // 0x802B4F80: lw          $a3, 0x1A0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1A0);
    // 0x802B4F84: addiu       $a1, $sp, 0x39C
    ctx->r5 = ADD32(ctx->r29, 0X39C);
    // 0x802B4F88: lw          $t9, 0x64($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X64);
    // 0x802B4F8C: lh          $t1, 0x60($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X60);
    // 0x802B4F90: jalr        $t9
    // 0x802B4F94: addu        $a0, $t1, $s2
    ctx->r4 = ADD32(ctx->r9, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802B4F94: addu        $a0, $t1, $s2
    ctx->r4 = ADD32(ctx->r9, ctx->r18);
    after_3:
    // 0x802B4F98: lh          $a1, 0x60($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X60);
    // 0x802B4F9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B4FA0: xori        $t2, $a1, 0x1
    ctx->r10 = ctx->r5 ^ 0X1;
    // 0x802B4FA4: sltiu       $t2, $t2, 0x1
    ctx->r10 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x802B4FA8: jal         0x802DAC50
    // 0x802B4FAC: andi        $a1, $t2, 0xFF
    ctx->r5 = ctx->r10 & 0XFF;
    static_3_802DAC50(rdram, ctx);
        goto after_4;
    // 0x802B4FAC: andi        $a1, $t2, 0xFF
    ctx->r5 = ctx->r10 & 0XFF;
    after_4:
    // 0x802B4FB0: lh          $a1, 0x60($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X60);
    // 0x802B4FB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B4FB8: xori        $t4, $a1, 0x3
    ctx->r12 = ctx->r5 ^ 0X3;
    // 0x802B4FBC: sltiu       $t4, $t4, 0x1
    ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
    // 0x802B4FC0: jal         0x802DAB90
    // 0x802B4FC4: andi        $a1, $t4, 0xFF
    ctx->r5 = ctx->r12 & 0XFF;
    static_3_802DAB90(rdram, ctx);
        goto after_5;
    // 0x802B4FC4: andi        $a1, $t4, 0xFF
    ctx->r5 = ctx->r12 & 0XFF;
    after_5:
    // 0x802B4FC8: jal         0x802D2660
    // 0x802B4FCC: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    static_3_802D2660(rdram, ctx);
        goto after_6;
    // 0x802B4FCC: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    after_6:
    // 0x802B4FD0: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x802B4FD4: swc1        $f0, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->f0.u32l;
    // 0x802B4FD8: lw          $a3, 0xD8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XD8);
    // 0x802B4FDC: lw          $t9, 0x5C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X5C);
    // 0x802B4FE0: lh          $t6, 0x58($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X58);
    // 0x802B4FE4: jalr        $t9
    // 0x802B4FE8: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802B4FE8: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_7:
    // 0x802B4FEC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802B4FF0: lwc1        $f2, 0x8C($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8C);
    // 0x802B4FF4: swc1        $f0, 0x90($s2)
    MEM_W(0X90, ctx->r18) = ctx->f0.u32l;
    // 0x802B4FF8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802B4FFC: nop

    // 0x802B5000: bc1fl       L_802B5018
    if (!c1cs) {
        // 0x802B5004: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_802B5018;
    }
    goto skip_1;
    // 0x802B5004: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_1:
    // 0x802B5008: lwc1        $f10, 0x90($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X90);
    // 0x802B500C: b           L_802B5018
    // 0x802B5010: div.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
        goto L_802B5018;
    // 0x802B5010: div.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802B5014: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_802B5018:
    // 0x802B5018: lw          $a3, 0x1A0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1A0);
    // 0x802B501C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B5020: addiu       $a2, $sp, 0x39C
    ctx->r6 = ADD32(ctx->r29, 0X39C);
    // 0x802B5024: lw          $t9, 0x44($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X44);
    // 0x802B5028: lh          $t7, 0x40($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X40);
    // 0x802B502C: jalr        $t9
    // 0x802B5030: addu        $a0, $t7, $s2
    ctx->r4 = ADD32(ctx->r15, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x802B5030: addu        $a0, $t7, $s2
    ctx->r4 = ADD32(ctx->r15, ctx->r18);
    after_8:
    // 0x802B5034: lw          $a3, 0x1A0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1A0);
    // 0x802B5038: addiu       $s0, $sp, 0x2DC
    ctx->r16 = ADD32(ctx->r29, 0X2DC);
    // 0x802B503C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B5040: lw          $t9, 0x64($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X64);
    // 0x802B5044: lh          $t8, 0x60($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X60);
    // 0x802B5048: jalr        $t9
    // 0x802B504C: addu        $a0, $t8, $s2
    ctx->r4 = ADD32(ctx->r24, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802B504C: addu        $a0, $t8, $s2
    ctx->r4 = ADD32(ctx->r24, ctx->r18);
    after_9:
    // 0x802B5050: lw          $a3, 0x1A0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1A0);
    // 0x802B5054: addiu       $a1, $sp, 0x35C
    ctx->r5 = ADD32(ctx->r29, 0X35C);
    // 0x802B5058: lw          $t9, 0x64($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X64);
    // 0x802B505C: lh          $t0, 0x60($a3)
    ctx->r8 = MEM_H(ctx->r7, 0X60);
    // 0x802B5060: jalr        $t9
    // 0x802B5064: addu        $a0, $t0, $s2
    ctx->r4 = ADD32(ctx->r8, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x802B5064: addu        $a0, $t0, $s2
    ctx->r4 = ADD32(ctx->r8, ctx->r18);
    after_10:
    // 0x802B5068: lw          $a3, 0x1A0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1A0);
    // 0x802B506C: addiu       $a1, $sp, 0x31C
    ctx->r5 = ADD32(ctx->r29, 0X31C);
    // 0x802B5070: lw          $t9, 0x64($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X64);
    // 0x802B5074: lh          $t1, 0x60($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X60);
    // 0x802B5078: jalr        $t9
    // 0x802B507C: addu        $a0, $t1, $s2
    ctx->r4 = ADD32(ctx->r9, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x802B507C: addu        $a0, $t1, $s2
    ctx->r4 = ADD32(ctx->r9, ctx->r18);
    after_11:
    // 0x802B5080: addiu       $a0, $sp, 0x35C
    ctx->r4 = ADD32(ctx->r29, 0X35C);
    // 0x802B5084: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B5088: lui         $a2, 0xC170
    ctx->r6 = S32(0XC170 << 16);
    // 0x802B508C: jal         0x8022A0D0
    // 0x802B5090: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_12;
    // 0x802B5090: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_12:
    // 0x802B5094: addiu       $a0, $sp, 0x31C
    ctx->r4 = ADD32(ctx->r29, 0X31C);
    // 0x802B5098: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B509C: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x802B50A0: jal         0x8022A0D0
    // 0x802B50A4: lui         $a3, 0xBF80
    ctx->r7 = S32(0XBF80 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_13;
    // 0x802B50A4: lui         $a3, 0xBF80
    ctx->r7 = S32(0XBF80 << 16);
    after_13:
    // 0x802B50A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B50AC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B50B0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802B50B4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802B50B8: lwc1        $f16, 0x7BC($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X7BC);
    // 0x802B50BC: lwc1        $f4, 0x7C0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X7C0);
    // 0x802B50C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B50C4: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x802B50C8: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802B50CC: mul.s       $f20, $f0, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802B50D0: nop

    // 0x802B50D4: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802B50D8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802B50DC: mul.s       $f22, $f0, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802B50E0: jal         0x802D01D4
    // 0x802B50E4: nop

    static_3_802D01D4(rdram, ctx);
        goto after_14;
    // 0x802B50E4: nop

    after_14:
    // 0x802B50E8: lwc1        $f8, 0x5E0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X5E0);
    // 0x802B50EC: lwc1        $f10, 0x658($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X658);
    // 0x802B50F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B50F4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802B50F8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802B50FC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802B5100: jal         0x802D01D4
    // 0x802B5104: nop

    static_3_802D01D4(rdram, ctx);
        goto after_15;
    // 0x802B5104: nop

    after_15:
    // 0x802B5108: lwc1        $f18, 0x5E4($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X5E4);
    // 0x802B510C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B5110: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802B5114: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x802B5118: sub.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f22.fl;
    // 0x802B511C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802B5120: jal         0x802D01D4
    // 0x802B5124: nop

    static_3_802D01D4(rdram, ctx);
        goto after_16;
    // 0x802B5124: nop

    after_16:
    // 0x802B5128: lwc1        $f8, 0x2D8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2D8);
    // 0x802B512C: addiu       $a0, $s2, 0xEDC
    ctx->r4 = ADD32(ctx->r18, 0XEDC);
    // 0x802B5130: lw          $a1, 0x3E4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3E4);
    // 0x802B5134: lw          $a2, 0x3E8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3E8);
    // 0x802B5138: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x802B513C: jal         0x802C53E4
    // 0x802B5140: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_17;
    // 0x802B5140: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x802B5144: lwc1        $f10, 0x2D8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2D8);
    // 0x802B5148: addiu       $a0, $s2, 0x1070
    ctx->r4 = ADD32(ctx->r18, 0X1070);
    // 0x802B514C: lw          $a1, 0x3E4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3E4);
    // 0x802B5150: lw          $a2, 0x3E8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3E8);
    // 0x802B5154: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x802B5158: jal         0x802C53E4
    // 0x802B515C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_18;
    // 0x802B515C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_18:
    // 0x802B5160: lwc1        $f16, 0x2D8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2D8);
    // 0x802B5164: addiu       $a0, $s2, 0x1204
    ctx->r4 = ADD32(ctx->r18, 0X1204);
    // 0x802B5168: lw          $a1, 0x3E4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3E4);
    // 0x802B516C: lw          $a2, 0x3E8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3E8);
    // 0x802B5170: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x802B5174: jal         0x802C53E4
    // 0x802B5178: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_19;
    // 0x802B5178: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_19:
    // 0x802B517C: lwc1        $f18, 0x2D8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2D8);
    // 0x802B5180: addiu       $a0, $s2, 0x1398
    ctx->r4 = ADD32(ctx->r18, 0X1398);
    // 0x802B5184: lw          $a1, 0x3E4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3E4);
    // 0x802B5188: lw          $a2, 0x3E8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3E8);
    // 0x802B518C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x802B5190: jal         0x802C53E4
    // 0x802B5194: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_20;
    // 0x802B5194: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_20:
    // 0x802B5198: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802B519C: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x802B51A0: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x802B51A4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B51A8: lw          $t2, 0x7168($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X7168);
    // 0x802B51AC: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x802B51B0: bne         $s1, $at, L_802B528C
    if (ctx->r17 != ctx->r1) {
        // 0x802B51B4: sw          $t2, 0x218($sp)
        MEM_W(0X218, ctx->r29) = ctx->r10;
            goto L_802B528C;
    }
    // 0x802B51B4: sw          $t2, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->r10;
    // 0x802B51B8: jal         0x802AED98
    // 0x802B51BC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802AED98(rdram, ctx);
        goto after_21;
    // 0x802B51BC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_21:
    // 0x802B51C0: lw          $a3, 0x6C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X6C);
    // 0x802B51C4: addiu       $a1, $sp, 0x39C
    ctx->r5 = ADD32(ctx->r29, 0X39C);
    // 0x802B51C8: lw          $t9, 0xA4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XA4);
    // 0x802B51CC: lh          $t4, 0xA0($a3)
    ctx->r12 = MEM_H(ctx->r7, 0XA0);
    // 0x802B51D0: jalr        $t9
    // 0x802B51D4: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x802B51D4: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    after_22:
    // 0x802B51D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B51DC: lwc1        $f0, 0x3D0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3D0);
    // 0x802B51E0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B51E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B51E8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802B51EC: nop

    // 0x802B51F0: bc1tl       L_802B5230
    if (c1cs) {
        // 0x802B51F4: lw          $v0, 0xC($s2)
        ctx->r2 = MEM_W(ctx->r18, 0XC);
            goto L_802B5230;
    }
    goto skip_2;
    // 0x802B51F4: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    skip_2:
    // 0x802B51F8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B51FC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802B5200: lwc1        $f10, 0x3D4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3D4);
    // 0x802B5204: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802B5208: nop

    // 0x802B520C: bc1fl       L_802B528C
    if (!c1cs) {
        // 0x802B5210: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B528C;
    }
    goto skip_3;
    // 0x802B5210: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_3:
    // 0x802B5214: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B5218: nop

    // 0x802B521C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802B5220: nop

    // 0x802B5224: bc1fl       L_802B528C
    if (!c1cs) {
        // 0x802B5228: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B528C;
    }
    goto skip_4;
    // 0x802B5228: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_4:
    // 0x802B522C: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
L_802B5230:
    // 0x802B5230: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802B5234: sb          $t5, 0x24($s2)
    MEM_B(0X24, ctx->r18) = ctx->r13;
    // 0x802B5238: lw          $a3, 0xD8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XD8);
    // 0x802B523C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x802B5240: lw          $t9, 0xC4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XC4);
    // 0x802B5244: lh          $t6, 0xC0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0XC0);
    // 0x802B5248: jalr        $t9
    // 0x802B524C: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x802B524C: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_23:
    // 0x802B5250: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x802B5254: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B5258: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B525C: jal         0x802AB604
    // 0x802B5260: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AB604(rdram, ctx);
        goto after_24;
    // 0x802B5260: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_24:
    // 0x802B5264: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802B5268: lwc1        $f18, 0x50($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X50);
    // 0x802B526C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802B5270: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x802B5274: nop

    // 0x802B5278: bc1fl       L_802B528C
    if (!c1cs) {
        // 0x802B527C: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B528C;
    }
    goto skip_5;
    // 0x802B527C: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_5:
    // 0x802B5280: jal         0x802AB1D0
    // 0x802B5284: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802AB1D0(rdram, ctx);
        goto after_25;
    // 0x802B5284: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_25:
    // 0x802B5288: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
L_802B528C:
    // 0x802B528C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802B5290: jal         0x802AEE54
    // 0x802B5294: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_26;
    // 0x802B5294: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x802B5298: jal         0x80317E10
    // 0x802B529C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80317E10(rdram, ctx);
        goto after_27;
    // 0x802B529C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_27:
    // 0x802B52A0: beql        $v0, $zero, L_802B56EC
    if (ctx->r2 == 0) {
        // 0x802B52A4: lw          $t2, 0x3DC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3DC);
            goto L_802B56EC;
    }
    goto skip_6;
    // 0x802B52A4: lw          $t2, 0x3DC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3DC);
    skip_6:
    // 0x802B52A8: lbu         $t7, 0x968($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X968);
    // 0x802B52AC: beql        $t7, $zero, L_802B56EC
    if (ctx->r15 == 0) {
        // 0x802B52B0: lw          $t2, 0x3DC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3DC);
            goto L_802B56EC;
    }
    goto skip_7;
    // 0x802B52B0: lw          $t2, 0x3DC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3DC);
    skip_7:
    // 0x802B52B4: jal         0x80318804
    // 0x802B52B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318804(rdram, ctx);
        goto after_28;
    // 0x802B52B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_28:
    // 0x802B52BC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x802B52C0: jal         0x8030A5EC
    // 0x802B52C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_8030A5EC(rdram, ctx);
        goto after_29;
    // 0x802B52C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_29:
    // 0x802B52C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B52CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B52D0: lwc1        $f6, 0x4C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x802B52D4: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x802B52D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B52DC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802B52E0: lwc1        $f8, 0x2D4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2D4);
    // 0x802B52E4: bc1f        L_802B53BC
    if (!c1cs) {
        // 0x802B52E8: nop
    
            goto L_802B53BC;
    }
    // 0x802B52E8: nop

    // 0x802B52EC: jal         0x802E7E78
    // 0x802B52F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E7E78(rdram, ctx);
        goto after_30;
    // 0x802B52F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_30:
    // 0x802B52F4: lw          $t8, 0x14($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X14);
    // 0x802B52F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B52FC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802B5300: bne         $t8, $at, L_802B56E8
    if (ctx->r24 != ctx->r1) {
        // 0x802B5304: lw          $t0, 0x3DC($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X3DC);
            goto L_802B56E8;
    }
    // 0x802B5304: lw          $t0, 0x3DC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3DC);
    // 0x802B5308: bne         $t0, $zero, L_802B56E8
    if (ctx->r8 != 0) {
        // 0x802B530C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802B56E8;
    }
    // 0x802B530C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B5310: jal         0x802E86A8
    // 0x802B5314: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802E86A8(rdram, ctx);
        goto after_31;
    // 0x802B5314: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_31:
    // 0x802B5318: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802B531C: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
L_802B5320:
    // 0x802B5320: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x802B5324: lw          $a0, 0x6EEC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X6EEC);
    // 0x802B5328: beql        $s2, $a0, L_802B5350
    if (ctx->r18 == ctx->r4) {
        // 0x802B532C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802B5350;
    }
    goto skip_8;
    // 0x802B532C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_8:
    // 0x802B5330: jal         0x80317E10
    // 0x802B5334: nop

    static_3_80317E10(rdram, ctx);
        goto after_32;
    // 0x802B5334: nop

    after_32:
    // 0x802B5338: bnel        $v0, $zero, L_802B5350
    if (ctx->r2 != 0) {
        // 0x802B533C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802B5350;
    }
    goto skip_9;
    // 0x802B533C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_9:
    // 0x802B5340: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802B5344: sll         $t3, $s1, 16
    ctx->r11 = S32(ctx->r17 << 16);
    // 0x802B5348: sra         $s1, $t3, 16
    ctx->r17 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802B534C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802B5350:
    // 0x802B5350: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802B5354: bnel        $s0, $at, L_802B5320
    if (ctx->r16 != ctx->r1) {
        // 0x802B5358: lw          $t1, 0x0($s3)
        ctx->r9 = MEM_W(ctx->r19, 0X0);
            goto L_802B5320;
    }
    goto skip_10;
    // 0x802B5358: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    skip_10:
    // 0x802B535C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B5360: bne         $s1, $at, L_802B56E8
    if (ctx->r17 != ctx->r1) {
        // 0x802B5364: addiu       $a1, $zero, 0x3B
        ctx->r5 = ADD32(0, 0X3B);
            goto L_802B56E8;
    }
    // 0x802B5364: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802B5368: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B536C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802B5370: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5374: jal         0x80302988
    // 0x802B5378: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_33;
    // 0x802B5378: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_33:
    // 0x802B537C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5380: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5384: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5388: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x802B538C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B5390: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5394: jal         0x80302988
    // 0x802B5398: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_34;
    // 0x802B5398: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_34:
    // 0x802B539C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B53A0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B53A4: addiu       $a1, $zero, 0x91
    ctx->r5 = ADD32(0, 0X91);
    // 0x802B53A8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B53AC: jal         0x80302988
    // 0x802B53B0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_35;
    // 0x802B53B0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_35:
    // 0x802B53B4: b           L_802B56EC
    // 0x802B53B8: lw          $t2, 0x3DC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3DC);
        goto L_802B56EC;
    // 0x802B53B8: lw          $t2, 0x3DC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3DC);
L_802B53BC:
    // 0x802B53BC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B53C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B53C4: lwc1        $f16, 0x2D4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2D4);
    // 0x802B53C8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802B53CC: nop

    // 0x802B53D0: bc1fl       L_802B5420
    if (!c1cs) {
        // 0x802B53D4: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_802B5420;
    }
    goto skip_11;
    // 0x802B53D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_11:
    // 0x802B53D8: lbu         $t5, 0x95A($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X95A);
    // 0x802B53DC: bnel        $t5, $zero, L_802B5420
    if (ctx->r13 != 0) {
        // 0x802B53E0: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_802B5420;
    }
    goto skip_12;
    // 0x802B53E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_12:
    // 0x802B53E4: lbu         $t6, 0x1D($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1D);
    // 0x802B53E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B53EC: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x802B53F0: beql        $t6, $zero, L_802B5414
    if (ctx->r14 == 0) {
        // 0x802B53F4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_802B5414;
    }
    goto skip_13;
    // 0x802B53F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    skip_13:
    // 0x802B53F8: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B53FC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5400: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5404: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B5408: jal         0x80302988
    // 0x802B540C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_36;
    // 0x802B540C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_36:
    // 0x802B5410: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_802B5414:
    // 0x802B5414: b           L_802B56E8
    // 0x802B5418: sb          $t9, 0x95A($s2)
    MEM_B(0X95A, ctx->r18) = ctx->r25;
        goto L_802B56E8;
    // 0x802B5418: sb          $t9, 0x95A($s2)
    MEM_B(0X95A, ctx->r18) = ctx->r25;
    // 0x802B541C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_802B5420:
    // 0x802B5420: nop

    // 0x802B5424: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802B5428: nop

    // 0x802B542C: bc1fl       L_802B56EC
    if (!c1cs) {
        // 0x802B5430: lw          $t2, 0x3DC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3DC);
            goto L_802B56EC;
    }
    goto skip_14;
    // 0x802B5430: lw          $t2, 0x3DC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3DC);
    skip_14:
    // 0x802B5434: lbu         $t7, 0x959($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X959);
    // 0x802B5438: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B543C: bnel        $t7, $zero, L_802B56EC
    if (ctx->r15 != 0) {
        // 0x802B5440: lw          $t2, 0x3DC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3DC);
            goto L_802B56EC;
    }
    goto skip_15;
    // 0x802B5440: lw          $t2, 0x3DC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3DC);
    skip_15:
    // 0x802B5444: jal         0x802AEE54
    // 0x802B5448: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_37;
    // 0x802B5448: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_37:
    // 0x802B544C: bnel        $v0, $s2, L_802B5468
    if (ctx->r2 != ctx->r18) {
        // 0x802B5450: lbu         $t8, 0x968($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X968);
            goto L_802B5468;
    }
    goto skip_16;
    // 0x802B5450: lbu         $t8, 0x968($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X968);
    skip_16:
    // 0x802B5454: jal         0x802E7EB0
    // 0x802B5458: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E7EB0(rdram, ctx);
        goto after_38;
    // 0x802B5458: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_38:
    // 0x802B545C: b           L_802B56E4
    // 0x802B5460: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_802B56E4;
    // 0x802B5460: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B5464: lbu         $t8, 0x968($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X968);
L_802B5468:
    // 0x802B5468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B546C: beql        $t8, $zero, L_802B56E4
    if (ctx->r24 == 0) {
        // 0x802B5470: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_802B56E4;
    }
    goto skip_17;
    // 0x802B5470: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    skip_17:
    // 0x802B5474: jal         0x802AEE54
    // 0x802B5478: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_39;
    // 0x802B5478: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_39:
    // 0x802B547C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802B5480: jal         0x803192A0
    // 0x802B5484: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_803192A0(rdram, ctx);
        goto after_40;
    // 0x802B5484: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_40:
    // 0x802B5488: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B548C: jal         0x802B0260
    // 0x802B5490: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802B0260(rdram, ctx);
        goto after_41;
    // 0x802B5490: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_41:
    // 0x802B5494: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802B5498: jal         0x80318804
    // 0x802B549C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318804(rdram, ctx);
        goto after_42;
    // 0x802B549C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_42:
    // 0x802B54A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B54A4: beq         $v0, $at, L_802B54B4
    if (ctx->r2 == ctx->r1) {
        // 0x802B54A8: nop
    
            goto L_802B54B4;
    }
    // 0x802B54A8: nop

    // 0x802B54AC: jal         0x802E7EB0
    // 0x802B54B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E7EB0(rdram, ctx);
        goto after_43;
    // 0x802B54B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_43:
L_802B54B4:
    // 0x802B54B4: beq         $s1, $zero, L_802B54C4
    if (ctx->r17 == 0) {
        // 0x802B54B8: nop
    
            goto L_802B54C4;
    }
    // 0x802B54B8: nop

    // 0x802B54BC: jal         0x802E7EE8
    // 0x802B54C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E7EE8(rdram, ctx);
        goto after_44;
    // 0x802B54C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_44:
L_802B54C4:
    // 0x802B54C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B54C8: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B54CC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B54D0: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802B54D4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B54D8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B54DC: jal         0x80302988
    // 0x802B54E0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_45;
    // 0x802B54E0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_45:
    // 0x802B54E4: lw          $a1, 0x944($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X944);
    // 0x802B54E8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x802B54EC: beql        $s1, $a1, L_802B550C
    if (ctx->r17 == ctx->r5) {
        // 0x802B54F0: lw          $a1, 0x948($s2)
        ctx->r5 = MEM_W(ctx->r18, 0X948);
            goto L_802B550C;
    }
    goto skip_18;
    // 0x802B54F0: lw          $a1, 0x948($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X948);
    skip_18:
    // 0x802B54F4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B54F8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B54FC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5500: jal         0x80302988
    // 0x802B5504: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_46;
    // 0x802B5504: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_46:
    // 0x802B5508: lw          $a1, 0x948($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X948);
L_802B550C:
    // 0x802B550C: beql        $s1, $a1, L_802B552C
    if (ctx->r17 == ctx->r5) {
        // 0x802B5510: lw          $a0, 0x0($s3)
        ctx->r4 = MEM_W(ctx->r19, 0X0);
            goto L_802B552C;
    }
    goto skip_19;
    // 0x802B5510: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    skip_19:
    // 0x802B5514: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5518: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B551C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5520: jal         0x80302988
    // 0x802B5524: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_47;
    // 0x802B5524: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_47:
    // 0x802B5528: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
L_802B552C:
    // 0x802B552C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B5530: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    // 0x802B5534: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5538: jal         0x80302988
    // 0x802B553C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_48;
    // 0x802B553C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_48:
    // 0x802B5540: beq         $s0, $s1, L_802B557C
    if (ctx->r16 == ctx->r17) {
        // 0x802B5544: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_802B557C;
    }
    // 0x802B5544: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x802B5548: beq         $s0, $at, L_802B557C
    if (ctx->r16 == ctx->r1) {
        // 0x802B554C: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_802B557C;
    }
    // 0x802B554C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B5550: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5554: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B5558: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B555C: jal         0x80302988
    // 0x802B5560: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_49;
    // 0x802B5560: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_49:
    // 0x802B5564: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5568: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B556C: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x802B5570: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5574: jal         0x80302988
    // 0x802B5578: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_50;
    // 0x802B5578: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_50:
L_802B557C:
    // 0x802B557C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5580: jal         0x802AEE54
    // 0x802B5584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_51;
    // 0x802B5584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_51:
    // 0x802B5588: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802B558C: jal         0x80318510
    // 0x802B5590: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80318510(rdram, ctx);
        goto after_52;
    // 0x802B5590: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_52:
    // 0x802B5594: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5598: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B559C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B55A0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802B55A4: nop

    // 0x802B55A8: bc1fl       L_802B560C
    if (!c1cs) {
        // 0x802B55AC: lw          $a0, 0x0($s3)
        ctx->r4 = MEM_W(ctx->r19, 0X0);
            goto L_802B560C;
    }
    goto skip_20;
    // 0x802B55AC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    skip_20:
    // 0x802B55B0: jal         0x802AEE54
    // 0x802B55B4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_53;
    // 0x802B55B4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_53:
    // 0x802B55B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802B55BC: jal         0x80318510
    // 0x802B55C0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80318510(rdram, ctx);
        goto after_54;
    // 0x802B55C0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_54:
    // 0x802B55C4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B55C8: jal         0x802B0084
    // 0x802B55CC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802B0084(rdram, ctx);
        goto after_55;
    // 0x802B55CC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_55:
    // 0x802B55D0: beq         $v0, $s1, L_802B5608
    if (ctx->r2 == ctx->r17) {
        // 0x802B55D4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802B5608;
    }
    // 0x802B55D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802B55D8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B55DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B55E0: addiu       $a1, $zero, 0x97
    ctx->r5 = ADD32(0, 0X97);
    // 0x802B55E4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B55E8: jal         0x80302988
    // 0x802B55EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_56;
    // 0x802B55EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_56:
    // 0x802B55F0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B55F4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B55F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B55FC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5600: jal         0x80302988
    // 0x802B5604: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_57;
    // 0x802B5604: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_57:
L_802B5608:
    // 0x802B5608: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
L_802B560C:
    // 0x802B560C: jal         0x802AEE54
    // 0x802B5610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_58;
    // 0x802B5610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_58:
    // 0x802B5614: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802B5618: jal         0x80318180
    // 0x802B561C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80318180(rdram, ctx);
        goto after_59;
    // 0x802B561C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_59:
    // 0x802B5620: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B5624: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5628: addiu       $a2, $sp, 0x2CC
    ctx->r6 = ADD32(ctx->r29, 0X2CC);
    // 0x802B562C: jal         0x802B0330
    // 0x802B5630: addiu       $a3, $sp, 0x2C8
    ctx->r7 = ADD32(ctx->r29, 0X2C8);
    static_3_802B0330(rdram, ctx);
        goto after_60;
    // 0x802B5630: addiu       $a3, $sp, 0x2C8
    ctx->r7 = ADD32(ctx->r29, 0X2C8);
    after_60:
    // 0x802B5634: lw          $t0, 0x2CC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2CC);
    // 0x802B5638: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x802B563C: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x802B5640: beq         $t0, $at, L_802B5688
    if (ctx->r8 == ctx->r1) {
        // 0x802B5644: lui         $a3, 0x3F80
        ctx->r7 = S32(0X3F80 << 16);
            goto L_802B5688;
    }
    // 0x802B5644: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5648: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B564C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B5650: jal         0x80302988
    // 0x802B5654: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_61;
    // 0x802B5654: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_61:
    // 0x802B5658: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B565C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B5660: lw          $a1, 0x2CC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2CC);
    // 0x802B5664: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5668: jal         0x80302988
    // 0x802B566C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_62;
    // 0x802B566C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_62:
    // 0x802B5670: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5674: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B5678: addiu       $a1, $zero, 0x95
    ctx->r5 = ADD32(0, 0X95);
    // 0x802B567C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5680: jal         0x80302988
    // 0x802B5684: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_63;
    // 0x802B5684: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_63:
L_802B5688:
    // 0x802B5688: lw          $a1, 0x2C8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C8);
    // 0x802B568C: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x802B5690: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B5694: beq         $a1, $at, L_802B56C4
    if (ctx->r5 == ctx->r1) {
        // 0x802B5698: nop
    
            goto L_802B56C4;
    }
    // 0x802B5698: nop

    // 0x802B569C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B56A0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B56A4: jal         0x80302988
    // 0x802B56A8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_64;
    // 0x802B56A8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_64:
    // 0x802B56AC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B56B0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802B56B4: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802B56B8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802B56BC: jal         0x80302988
    // 0x802B56C0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_65;
    // 0x802B56C0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_65:
L_802B56C4:
    // 0x802B56C4: jal         0x80318804
    // 0x802B56C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80318804(rdram, ctx);
        goto after_66;
    // 0x802B56C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_66:
    // 0x802B56CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B56D0: bnel        $v0, $at, L_802B56E4
    if (ctx->r2 != ctx->r1) {
        // 0x802B56D4: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_802B56E4;
    }
    goto skip_21;
    // 0x802B56D4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    skip_21:
    // 0x802B56D8: jal         0x802E7EB0
    // 0x802B56DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E7EB0(rdram, ctx);
        goto after_67;
    // 0x802B56DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_67:
    // 0x802B56E0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_802B56E4:
    // 0x802B56E4: sb          $t1, 0x959($s2)
    MEM_B(0X959, ctx->r18) = ctx->r9;
L_802B56E8:
    // 0x802B56E8: lw          $t2, 0x3DC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3DC);
L_802B56EC:
    // 0x802B56EC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x802B56F0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802B56F4: sltu        $t3, $zero, $t2
    ctx->r11 = 0 < ctx->r10 ? 1 : 0;
    // 0x802B56F8: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x802B56FC: lbu         $t4, 0x1D($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X1D);
    // 0x802B5700: beq         $t4, $zero, L_802B6034
    if (ctx->r12 == 0) {
        // 0x802B5704: nop
    
            goto L_802B6034;
    }
    // 0x802B5704: nop

    // 0x802B5708: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B570C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B5710: lwc1        $f8, 0x4C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x802B5714: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802B5718: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x802B571C: nop

    // 0x802B5720: bc1fl       L_802B59D8
    if (!c1cs) {
        // 0x802B5724: addiu       $s0, $sp, 0x270
        ctx->r16 = ADD32(ctx->r29, 0X270);
            goto L_802B59D8;
    }
    goto skip_22;
    // 0x802B5724: addiu       $s0, $sp, 0x270
    ctx->r16 = ADD32(ctx->r29, 0X270);
    skip_22:
    // 0x802B5728: jal         0x802AED60
    // 0x802B572C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802AED60(rdram, ctx);
        goto after_68;
    // 0x802B572C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_68:
    // 0x802B5730: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802B5734: beq         $v0, $at, L_802B5754
    if (ctx->r2 == ctx->r1) {
        // 0x802B5738: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802B5754;
    }
    // 0x802B5738: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802B573C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5740: jal         0x802AFF48
    // 0x802B5744: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_802AFF48(rdram, ctx);
        goto after_69;
    // 0x802B5744: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_69:
    // 0x802B5748: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B574C: jal         0x802E40B4
    // 0x802B5750: addiu       $a1, $sp, 0x39C
    ctx->r5 = ADD32(ctx->r29, 0X39C);
    static_3_802E40B4(rdram, ctx);
        goto after_70;
    // 0x802B5750: addiu       $a1, $sp, 0x39C
    ctx->r5 = ADD32(ctx->r29, 0X39C);
    after_70:
L_802B5754:
    // 0x802B5754: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802B5758: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802B575C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802B5760: bnel        $t5, $at, L_802B59D8
    if (ctx->r13 != ctx->r1) {
        // 0x802B5764: addiu       $s0, $sp, 0x270
        ctx->r16 = ADD32(ctx->r29, 0X270);
            goto L_802B59D8;
    }
    goto skip_23;
    // 0x802B5764: addiu       $s0, $sp, 0x270
    ctx->r16 = ADD32(ctx->r29, 0X270);
    skip_23:
    // 0x802B5768: lbu         $t6, 0x940($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X940);
    // 0x802B576C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B5770: bnel        $t6, $zero, L_802B5828
    if (ctx->r14 != 0) {
        // 0x802B5774: lw          $a0, 0x0($s3)
        ctx->r4 = MEM_W(ctx->r19, 0X0);
            goto L_802B5828;
    }
    goto skip_24;
    // 0x802B5774: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    skip_24:
    // 0x802B5778: jal         0x802AEDEC
    // 0x802B577C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802AEDEC(rdram, ctx);
        goto after_71;
    // 0x802B577C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_71:
    // 0x802B5780: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802B5784: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5788: jal         0x802AEDEC
    // 0x802B578C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802AEDEC(rdram, ctx);
        goto after_72;
    // 0x802B578C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_72:
    // 0x802B5790: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802B5794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B5798: jal         0x802BCECC
    // 0x802B579C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802BCECC(rdram, ctx);
        goto after_73;
    // 0x802B579C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_73:
    // 0x802B57A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802B57A4: jal         0x802BCECC
    // 0x802B57A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802BCECC(rdram, ctx);
        goto after_74;
    // 0x802B57A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_74:
    // 0x802B57AC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802B57B0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802B57B4: sb          $t9, 0x940($s2)
    MEM_B(0X940, ctx->r18) = ctx->r25;
    // 0x802B57B8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802B57BC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802B57C0: addiu       $v0, $sp, 0x1C0
    ctx->r2 = ADD32(ctx->r29, 0X1C0);
    // 0x802B57C4: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802B57C8: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802B57CC: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x802B57D0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B57D4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x802B57D8: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x802B57DC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x802B57E0: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802B57E4: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802B57E8: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x802B57EC: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    // 0x802B57F0: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x802B57F4: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802B57F8: lw          $t0, 0x14($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X14);
    // 0x802B57FC: sw          $t0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r8;
    // 0x802B5800: lw          $at, 0x18($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X18);
    // 0x802B5804: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802B5808: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802B580C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802B5810: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x802B5814: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802B5818: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802B581C: jal         0x80303778
    // 0x802B5820: nop

    static_3_80303778(rdram, ctx);
        goto after_75;
    // 0x802B5820: nop

    after_75:
    // 0x802B5824: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
L_802B5828:
    // 0x802B5828: jal         0x802AEE54
    // 0x802B582C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_76;
    // 0x802B582C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_76:
    // 0x802B5830: beq         $v0, $s2, L_802B58FC
    if (ctx->r2 == ctx->r18) {
        // 0x802B5834: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802B58FC;
    }
    // 0x802B5834: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B5838: jal         0x802AEE54
    // 0x802B583C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_77;
    // 0x802B583C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_77:
    // 0x802B5840: lw          $a3, 0x1A0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1A0);
    // 0x802B5844: addiu       $s1, $sp, 0x140
    ctx->r17 = ADD32(ctx->r29, 0X140);
    // 0x802B5848: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802B584C: lw          $t9, 0x64($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X64);
    // 0x802B5850: lh          $t4, 0x60($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X60);
    // 0x802B5854: jalr        $t9
    // 0x802B5858: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_78;
    // 0x802B5858: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    after_78:
    // 0x802B585C: addiu       $s0, $sp, 0x180
    ctx->r16 = ADD32(ctx->r29, 0X180);
    // 0x802B5860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B5864: jal         0x80228DE0
    // 0x802B5868: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80228DE0(rdram, ctx);
        goto after_79;
    // 0x802B5868: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_79:
    // 0x802B586C: lwc1        $f10, 0x1B8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x802B5870: lwc1        $f20, 0x1B0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x802B5874: lwc1        $f22, 0x1B4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x802B5878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B587C: jal         0x8022970C
    // 0x802B5880: swc1        $f10, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f10.u32l;
    func_8022970C(rdram, ctx);
        goto after_80;
    // 0x802B5880: swc1        $f10, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f10.u32l;
    after_80:
    // 0x802B5884: lwc1        $f16, 0x1E4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x802B5888: swc1        $f20, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f20.u32l;
    // 0x802B588C: swc1        $f22, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f22.u32l;
    // 0x802B5890: swc1        $f16, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f16.u32l;
    // 0x802B5894: lw          $a1, 0x7D4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X7D4);
    // 0x802B5898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B589C: jal         0x802D01D4
    // 0x802B58A0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_81;
    // 0x802B58A0: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_81:
    // 0x802B58A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B58A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B58AC: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x802B58B0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B58B4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802B58B8: jal         0x8022A0D0
    // 0x802B58BC: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_82;
    // 0x802B58BC: nop

    after_82:
    // 0x802B58C0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B58C4: jal         0x802AEE54
    // 0x802B58C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEE54(rdram, ctx);
        goto after_83;
    // 0x802B58C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_83:
    // 0x802B58CC: lwc1        $f18, 0x1B8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x802B58D0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B58D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802B58D8: lw          $a2, 0x1B0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B0);
    // 0x802B58DC: lw          $a3, 0x1B4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1B4);
    // 0x802B58E0: jal         0x802AFF70
    // 0x802B58E4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_84;
    // 0x802B58E4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_84:
    // 0x802B58E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B58EC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B58F0: lwc1        $f4, 0x7D4($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X7D4);
    // 0x802B58F4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802B58F8: swc1        $f8, 0x7D4($s2)
    MEM_W(0X7D4, ctx->r18) = ctx->f8.u32l;
L_802B58FC:
    // 0x802B58FC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5900: jal         0x802AEE54
    // 0x802B5904: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802AEE54(rdram, ctx);
        goto after_85;
    // 0x802B5904: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_85:
    // 0x802B5908: beq         $v0, $s2, L_802B59D4
    if (ctx->r2 == ctx->r18) {
        // 0x802B590C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_802B59D4;
    }
    // 0x802B590C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802B5910: jal         0x802AEE54
    // 0x802B5914: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_86;
    // 0x802B5914: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_86:
    // 0x802B5918: lw          $a3, 0x1A0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1A0);
    // 0x802B591C: addiu       $s1, $sp, 0xBC
    ctx->r17 = ADD32(ctx->r29, 0XBC);
    // 0x802B5920: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802B5924: lw          $t9, 0x64($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X64);
    // 0x802B5928: lh          $t5, 0x60($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X60);
    // 0x802B592C: jalr        $t9
    // 0x802B5930: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_87;
    // 0x802B5930: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    after_87:
    // 0x802B5934: addiu       $s0, $sp, 0xFC
    ctx->r16 = ADD32(ctx->r29, 0XFC);
    // 0x802B5938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B593C: jal         0x80228DE0
    // 0x802B5940: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80228DE0(rdram, ctx);
        goto after_88;
    // 0x802B5940: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_88:
    // 0x802B5944: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802B5948: lwc1        $f20, 0x12C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x802B594C: lwc1        $f22, 0x130($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X130);
    // 0x802B5950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B5954: jal         0x8022970C
    // 0x802B5958: swc1        $f10, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f10.u32l;
    func_8022970C(rdram, ctx);
        goto after_89;
    // 0x802B5958: swc1        $f10, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f10.u32l;
    after_89:
    // 0x802B595C: lwc1        $f16, 0x1E4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x802B5960: swc1        $f20, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f20.u32l;
    // 0x802B5964: swc1        $f22, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f22.u32l;
    // 0x802B5968: swc1        $f16, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f16.u32l;
    // 0x802B596C: lw          $a1, 0x7D4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X7D4);
    // 0x802B5970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B5974: jal         0x802D01D4
    // 0x802B5978: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_90;
    // 0x802B5978: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_90:
    // 0x802B597C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B5980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B5984: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x802B5988: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802B598C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802B5990: jal         0x8022A0D0
    // 0x802B5994: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_91;
    // 0x802B5994: nop

    after_91:
    // 0x802B5998: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B599C: jal         0x802AEE54
    // 0x802B59A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802AEE54(rdram, ctx);
        goto after_92;
    // 0x802B59A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_92:
    // 0x802B59A4: lwc1        $f18, 0x134($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802B59A8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B59AC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802B59B0: lw          $a2, 0x12C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X12C);
    // 0x802B59B4: lw          $a3, 0x130($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X130);
    // 0x802B59B8: jal         0x802AFF70
    // 0x802B59BC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_93;
    // 0x802B59BC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_93:
    // 0x802B59C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B59C4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B59C8: lwc1        $f4, 0x7D4($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X7D4);
    // 0x802B59CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802B59D0: swc1        $f8, 0x7D4($s2)
    MEM_W(0X7D4, ctx->r18) = ctx->f8.u32l;
L_802B59D4:
    // 0x802B59D4: addiu       $s0, $sp, 0x270
    ctx->r16 = ADD32(ctx->r29, 0X270);
L_802B59D8:
    // 0x802B59D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B59DC: addiu       $a1, $sp, 0x39C
    ctx->r5 = ADD32(ctx->r29, 0X39C);
    // 0x802B59E0: jal         0x802297A8
    // 0x802B59E4: addiu       $a2, $s2, 0x548
    ctx->r6 = ADD32(ctx->r18, 0X548);
    static_3_802297A8(rdram, ctx);
        goto after_94;
    // 0x802B59E4: addiu       $a2, $s2, 0x548
    ctx->r6 = ADD32(ctx->r18, 0X548);
    after_94:
    // 0x802B59E8: addiu       $s1, $sp, 0x230
    ctx->r17 = ADD32(ctx->r29, 0X230);
    // 0x802B59EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802B59F0: addiu       $a1, $sp, 0x39C
    ctx->r5 = ADD32(ctx->r29, 0X39C);
    // 0x802B59F4: jal         0x802297A8
    // 0x802B59F8: addiu       $a2, $s2, 0x588
    ctx->r6 = ADD32(ctx->r18, 0X588);
    static_3_802297A8(rdram, ctx);
        goto after_95;
    // 0x802B59F8: addiu       $a2, $s2, 0x588
    ctx->r6 = ADD32(ctx->r18, 0X588);
    after_95:
    // 0x802B59FC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B5A00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B5A04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B5A08: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5A0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802B5A10: lw          $t6, 0x14($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X14);
    // 0x802B5A14: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802B5A18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B5A1C: addiu       $a2, $sp, 0x35C
    ctx->r6 = ADD32(ctx->r29, 0X35C);
    // 0x802B5A20: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802B5A24: jal         0x802AF31C
    // 0x802B5A28: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    static_3_802AF31C(rdram, ctx);
        goto after_96;
    // 0x802B5A28: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_96:
    // 0x802B5A2C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B5A30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B5A34: sw          $v0, 0x228($sp)
    MEM_W(0X228, ctx->r29) = ctx->r2;
    // 0x802B5A38: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B5A3C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x802B5A40: lw          $t7, 0x14($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X14);
    // 0x802B5A44: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802B5A48: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5A4C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802B5A50: addiu       $a2, $sp, 0x31C
    ctx->r6 = ADD32(ctx->r29, 0X31C);
    // 0x802B5A54: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802B5A58: jal         0x802AF31C
    // 0x802B5A5C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    static_3_802AF31C(rdram, ctx);
        goto after_97;
    // 0x802B5A5C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_97:
    // 0x802B5A60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B5A64: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B5A68: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802B5A6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802B5A70: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802B5A74: lw          $t1, 0x14($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X14);
    // 0x802B5A78: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802B5A7C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5A80: addiu       $a1, $sp, 0x39C
    ctx->r5 = ADD32(ctx->r29, 0X39C);
    // 0x802B5A84: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x802B5A88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802B5A8C: jal         0x802AF31C
    // 0x802B5A90: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    static_3_802AF31C(rdram, ctx);
        goto after_98;
    // 0x802B5A90: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_98:
    // 0x802B5A94: lw          $v1, 0x228($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X228);
    // 0x802B5A98: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802B5A9C: sltu        $t3, $zero, $v1
    ctx->r11 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B5AA0: bne         $t3, $zero, L_802B5AB8
    if (ctx->r11 != 0) {
        // 0x802B5AA4: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_802B5AB8;
    }
    // 0x802B5AA4: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x802B5AA8: bne         $s0, $zero, L_802B5AB8
    if (ctx->r16 != 0) {
        // 0x802B5AAC: nop
    
            goto L_802B5AB8;
    }
    // 0x802B5AAC: nop

    // 0x802B5AB0: beql        $v0, $zero, L_802B5B64
    if (ctx->r2 == 0) {
        // 0x802B5AB4: lbu         $t7, 0x24($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X24);
            goto L_802B5B64;
    }
    goto skip_25;
    // 0x802B5AB4: lbu         $t7, 0x24($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X24);
    skip_25:
L_802B5AB8:
    // 0x802B5AB8: jal         0x80309DAC
    // 0x802B5ABC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    static_3_80309DAC(rdram, ctx);
        goto after_99;
    // 0x802B5ABC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    after_99:
    // 0x802B5AC0: beq         $v0, $zero, L_802B5AE8
    if (ctx->r2 == 0) {
        // 0x802B5AC4: lw          $v1, 0x54($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X54);
            goto L_802B5AE8;
    }
    // 0x802B5AC4: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x802B5AC8: lw          $t4, 0x228($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X228);
    // 0x802B5ACC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B5AD0: beq         $t4, $at, L_802B5B60
    if (ctx->r12 == ctx->r1) {
        // 0x802B5AD4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802B5B60;
    }
    // 0x802B5AD4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B5AD8: beq         $s0, $at, L_802B5B60
    if (ctx->r16 == ctx->r1) {
        // 0x802B5ADC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802B5B60;
    }
    // 0x802B5ADC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B5AE0: beql        $s1, $at, L_802B5B64
    if (ctx->r17 == ctx->r1) {
        // 0x802B5AE4: lbu         $t7, 0x24($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X24);
            goto L_802B5B64;
    }
    goto skip_26;
    // 0x802B5AE4: lbu         $t7, 0x24($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X24);
    skip_26:
L_802B5AE8:
    // 0x802B5AE8: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x802B5AEC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B5AF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802B5AF4: beq         $t5, $at, L_802B5B30
    if (ctx->r13 == ctx->r1) {
        // 0x802B5AF8: nop
    
            goto L_802B5B30;
    }
    // 0x802B5AF8: nop

    // 0x802B5AFC: beq         $v1, $zero, L_802B5B10
    if (ctx->r3 == 0) {
        // 0x802B5B00: lw          $t9, 0x228($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X228);
            goto L_802B5B10;
    }
    // 0x802B5B00: lw          $t9, 0x228($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X228);
    // 0x802B5B04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B5B08: bne         $t9, $at, L_802B5B30
    if (ctx->r25 != ctx->r1) {
        // 0x802B5B0C: nop
    
            goto L_802B5B30;
    }
    // 0x802B5B0C: nop

L_802B5B10:
    // 0x802B5B10: beq         $s0, $zero, L_802B5B20
    if (ctx->r16 == 0) {
        // 0x802B5B14: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B5B20;
    }
    // 0x802B5B14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B5B18: bne         $s0, $at, L_802B5B30
    if (ctx->r16 != ctx->r1) {
        // 0x802B5B1C: nop
    
            goto L_802B5B30;
    }
    // 0x802B5B1C: nop

L_802B5B20:
    // 0x802B5B20: beq         $s1, $zero, L_802B5B60
    if (ctx->r17 == 0) {
        // 0x802B5B24: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B5B60;
    }
    // 0x802B5B24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B5B28: beql        $s1, $at, L_802B5B64
    if (ctx->r17 == ctx->r1) {
        // 0x802B5B2C: lbu         $t7, 0x24($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X24);
            goto L_802B5B64;
    }
    goto skip_27;
    // 0x802B5B2C: lbu         $t7, 0x24($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X24);
    skip_27:
L_802B5B30:
    // 0x802B5B30: beq         $s1, $zero, L_802B5B60
    if (ctx->r17 == 0) {
        // 0x802B5B34: sb          $t6, 0x24($s2)
        MEM_B(0X24, ctx->r18) = ctx->r14;
            goto L_802B5B60;
    }
    // 0x802B5B34: sb          $t6, 0x24($s2)
    MEM_B(0X24, ctx->r18) = ctx->r14;
    // 0x802B5B38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B5B3C: beql        $s1, $at, L_802B5B64
    if (ctx->r17 == ctx->r1) {
        // 0x802B5B40: lbu         $t7, 0x24($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X24);
            goto L_802B5B64;
    }
    goto skip_28;
    // 0x802B5B40: lbu         $t7, 0x24($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X24);
    skip_28:
    // 0x802B5B44: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x802B5B48: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B5B4C: lw          $a3, 0xD8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XD8);
    // 0x802B5B50: lw          $t9, 0x9C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X9C);
    // 0x802B5B54: lh          $t8, 0x98($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X98);
    // 0x802B5B58: jalr        $t9
    // 0x802B5B5C: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_100;
    // 0x802B5B5C: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_100:
L_802B5B60:
    // 0x802B5B60: lbu         $t7, 0x24($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X24);
L_802B5B64:
    // 0x802B5B64: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
    // 0x802B5B68: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B5B6C: bnel        $t7, $zero, L_802B5C54
    if (ctx->r15 != 0) {
        // 0x802B5B70: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B5C54;
    }
    goto skip_29;
    // 0x802B5B70: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_29:
    // 0x802B5B74: beq         $v0, $at, L_802B5C00
    if (ctx->r2 == ctx->r1) {
        // 0x802B5B78: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802B5C00;
    }
    // 0x802B5B78: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B5B7C: beq         $v0, $at, L_802B5C00
    if (ctx->r2 == ctx->r1) {
        // 0x802B5B80: lw          $t0, 0x50($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X50);
            goto L_802B5C00;
    }
    // 0x802B5B80: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x802B5B84: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B5B88: beq         $t0, $at, L_802B5C00
    if (ctx->r8 == ctx->r1) {
        // 0x802B5B8C: lw          $a1, 0x2A0($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2A0);
            goto L_802B5C00;
    }
    // 0x802B5B8C: lw          $a1, 0x2A0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2A0);
    // 0x802B5B90: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5B94: jal         0x802AEF08
    // 0x802B5B98: lw          $a2, 0x2A4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2A4);
    static_3_802AEF08(rdram, ctx);
        goto after_101;
    // 0x802B5B98: lw          $a2, 0x2A4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2A4);
    after_101:
    // 0x802B5B9C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802B5BA0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5BA4: lw          $a1, 0x260($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X260);
    // 0x802B5BA8: jal         0x802AEF08
    // 0x802B5BAC: lw          $a2, 0x264($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X264);
    static_3_802AEF08(rdram, ctx);
        goto after_102;
    // 0x802B5BAC: lw          $a2, 0x264($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X264);
    after_102:
    // 0x802B5BB0: lwc1        $f4, 0x2A8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2A8);
    // 0x802B5BB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B5BB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B5BBC: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x802B5BC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B5BC4: lwc1        $f10, 0x268($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X268);
    // 0x802B5BC8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B5BCC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802B5BD0: nop

    // 0x802B5BD4: bc1t        L_802B5BF8
    if (c1cs) {
        // 0x802B5BD8: nop
    
            goto L_802B5BF8;
    }
    // 0x802B5BD8: nop

    // 0x802B5BDC: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x802B5BE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B5BE4: nop

    // 0x802B5BE8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802B5BEC: nop

    // 0x802B5BF0: bc1fl       L_802B5C54
    if (!c1cs) {
        // 0x802B5BF4: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B5C54;
    }
    goto skip_30;
    // 0x802B5BF4: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_30:
L_802B5BF8:
    // 0x802B5BF8: b           L_802B5C50
    // 0x802B5BFC: sb          $t1, 0x24($s2)
    MEM_B(0X24, ctx->r18) = ctx->r9;
        goto L_802B5C50;
    // 0x802B5BFC: sb          $t1, 0x24($s2)
    MEM_B(0X24, ctx->r18) = ctx->r9;
L_802B5C00:
    // 0x802B5C00: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B5C04: bne         $v0, $at, L_802B5C50
    if (ctx->r2 != ctx->r1) {
        // 0x802B5C08: lw          $t2, 0x50($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X50);
            goto L_802B5C50;
    }
    // 0x802B5C08: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x802B5C0C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B5C10: beq         $t2, $at, L_802B5C50
    if (ctx->r10 == ctx->r1) {
        // 0x802B5C14: lwc1        $f6, 0x2A8($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X2A8);
            goto L_802B5C50;
    }
    // 0x802B5C14: lwc1        $f6, 0x2A8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2A8);
    // 0x802B5C18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802B5C1C: lwc1        $f10, 0x268($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X268);
    // 0x802B5C20: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802B5C24: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802B5C28: nop

    // 0x802B5C2C: bc1tl       L_802B5C50
    if (c1cs) {
        // 0x802B5C30: sb          $t3, 0x24($s2)
        MEM_B(0X24, ctx->r18) = ctx->r11;
            goto L_802B5C50;
    }
    goto skip_31;
    // 0x802B5C30: sb          $t3, 0x24($s2)
    MEM_B(0X24, ctx->r18) = ctx->r11;
    skip_31:
    // 0x802B5C34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802B5C38: nop

    // 0x802B5C3C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802B5C40: nop

    // 0x802B5C44: bc1fl       L_802B5C54
    if (!c1cs) {
        // 0x802B5C48: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B5C54;
    }
    goto skip_32;
    // 0x802B5C48: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_32:
    // 0x802B5C4C: sb          $t3, 0x24($s2)
    MEM_B(0X24, ctx->r18) = ctx->r11;
L_802B5C50:
    // 0x802B5C50: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
L_802B5C54:
    // 0x802B5C54: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802B5C58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802B5C5C: lbu         $t4, 0x6FB8($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X6FB8);
    // 0x802B5C60: blez        $t4, L_802B5D68
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802B5C64: addu        $t5, $a2, $s0
        ctx->r13 = ADD32(ctx->r6, ctx->r16);
            goto L_802B5D68;
    }
    // 0x802B5C64: addu        $t5, $a2, $s0
    ctx->r13 = ADD32(ctx->r6, ctx->r16);
L_802B5C68:
    // 0x802B5C68: lw          $a0, 0x6F94($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X6F94);
    // 0x802B5C6C: beql        $a0, $zero, L_802B5D4C
    if (ctx->r4 == 0) {
        // 0x802B5C70: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B5D4C;
    }
    goto skip_33;
    // 0x802B5C70: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_33:
    // 0x802B5C74: jal         0x80317E10
    // 0x802B5C78: nop

    static_3_80317E10(rdram, ctx);
        goto after_103;
    // 0x802B5C78: nop

    after_103:
    // 0x802B5C7C: beql        $v0, $zero, L_802B5D4C
    if (ctx->r2 == 0) {
        // 0x802B5C80: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B5D4C;
    }
    goto skip_34;
    // 0x802B5C80: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_34:
    // 0x802B5C84: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x802B5C88: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B5C8C: addu        $t8, $t6, $s0
    ctx->r24 = ADD32(ctx->r14, ctx->r16);
    // 0x802B5C90: jal         0x80318510
    // 0x802B5C94: lw          $a1, 0x6F94($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X6F94);
    static_3_80318510(rdram, ctx);
        goto after_104;
    // 0x802B5C94: lw          $a1, 0x6F94($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X6F94);
    after_104:
    // 0x802B5C98: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x802B5C9C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x802B5CA0: addu        $t7, $t9, $s0
    ctx->r15 = ADD32(ctx->r25, ctx->r16);
    // 0x802B5CA4: jal         0x80318214
    // 0x802B5CA8: lw          $a0, 0x6F94($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X6F94);
    static_3_80318214(rdram, ctx);
        goto after_105;
    // 0x802B5CA8: lw          $a0, 0x6F94($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X6F94);
    after_105:
    // 0x802B5CAC: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x802B5CB0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802B5CB4: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x802B5CB8: jal         0x80318268
    // 0x802B5CBC: lw          $a0, 0x6F94($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F94);
    static_3_80318268(rdram, ctx);
        goto after_106;
    // 0x802B5CBC: lw          $a0, 0x6F94($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F94);
    after_106:
    // 0x802B5CC0: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802B5CC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5CC8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5CCC: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B5CD0: nop

    // 0x802B5CD4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802B5CD8: c.lt.s      $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f22.fl < ctx->f6.fl;
    // 0x802B5CDC: nop

    // 0x802B5CE0: bc1f        L_802B5D48
    if (!c1cs) {
        // 0x802B5CE4: nop
    
            goto L_802B5D48;
    }
    // 0x802B5CE4: nop

    // 0x802B5CE8: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x802B5CEC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B5CF0: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x802B5CF4: jal         0x80317444
    // 0x802B5CF8: lw          $a1, 0x6F94($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X6F94);
    static_3_80317444(rdram, ctx);
        goto after_107;
    // 0x802B5CF8: lw          $a1, 0x6F94($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X6F94);
    after_107:
    // 0x802B5CFC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5D00: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5D04: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5D08: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802B5D0C: nop

    // 0x802B5D10: bc1fl       L_802B5D4C
    if (!c1cs) {
        // 0x802B5D14: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B5D4C;
    }
    goto skip_35;
    // 0x802B5D14: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_35:
    // 0x802B5D18: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5D1C: addiu       $a0, $s2, 0x1A4
    ctx->r4 = ADD32(ctx->r18, 0X1A4);
    // 0x802B5D20: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802B5D24: div.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f22.fl);
    // 0x802B5D28: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802B5D2C: jal         0x802D64DC
    // 0x802B5D30: nop

    static_3_802D64DC(rdram, ctx);
        goto after_108;
    // 0x802B5D30: nop

    after_108:
    // 0x802B5D34: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x802B5D38: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B5D3C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5D40: jal         0x802AB604
    // 0x802B5D44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AB604(rdram, ctx);
        goto after_109;
    // 0x802B5D44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_109:
L_802B5D48:
    // 0x802B5D48: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
L_802B5D4C:
    // 0x802B5D4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802B5D50: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802B5D54: lbu         $t4, 0x6FB8($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X6FB8);
    // 0x802B5D58: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802B5D5C: bnel        $at, $zero, L_802B5C68
    if (ctx->r1 != 0) {
        // 0x802B5D60: addu        $t5, $a2, $s0
        ctx->r13 = ADD32(ctx->r6, ctx->r16);
            goto L_802B5C68;
    }
    goto skip_36;
    // 0x802B5D60: addu        $t5, $a2, $s0
    ctx->r13 = ADD32(ctx->r6, ctx->r16);
    skip_36:
    // 0x802B5D64: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802B5D68:
    // 0x802B5D68: lbu         $t5, 0x6EFC($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X6EFC);
    // 0x802B5D6C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802B5D70: blez        $t5, L_802B5E74
    if (SIGNED(ctx->r13) <= 0) {
        // 0x802B5D74: addu        $t6, $a2, $s0
        ctx->r14 = ADD32(ctx->r6, ctx->r16);
            goto L_802B5E74;
    }
    // 0x802B5D74: addu        $t6, $a2, $s0
    ctx->r14 = ADD32(ctx->r6, ctx->r16);
L_802B5D78:
    // 0x802B5D78: lw          $a0, 0x6EEC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X6EEC);
    // 0x802B5D7C: beql        $a0, $zero, L_802B5E5C
    if (ctx->r4 == 0) {
        // 0x802B5D80: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B5E5C;
    }
    goto skip_37;
    // 0x802B5D80: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_37:
    // 0x802B5D84: jal         0x80317E10
    // 0x802B5D88: nop

    static_3_80317E10(rdram, ctx);
        goto after_110;
    // 0x802B5D88: nop

    after_110:
    // 0x802B5D8C: beql        $v0, $zero, L_802B5E5C
    if (ctx->r2 == 0) {
        // 0x802B5D90: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B5E5C;
    }
    goto skip_38;
    // 0x802B5D90: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_38:
    // 0x802B5D94: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x802B5D98: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B5D9C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802B5DA0: jal         0x80318510
    // 0x802B5DA4: lw          $a1, 0x6EEC($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X6EEC);
    static_3_80318510(rdram, ctx);
        goto after_111;
    // 0x802B5DA4: lw          $a1, 0x6EEC($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X6EEC);
    after_111:
    // 0x802B5DA8: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x802B5DAC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x802B5DB0: addu        $t0, $t7, $s0
    ctx->r8 = ADD32(ctx->r15, ctx->r16);
    // 0x802B5DB4: jal         0x80318214
    // 0x802B5DB8: lw          $a0, 0x6EEC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6EEC);
    static_3_80318214(rdram, ctx);
        goto after_112;
    // 0x802B5DB8: lw          $a0, 0x6EEC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6EEC);
    after_112:
    // 0x802B5DBC: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x802B5DC0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802B5DC4: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x802B5DC8: jal         0x80318268
    // 0x802B5DCC: lw          $a0, 0x6EEC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X6EEC);
    static_3_80318268(rdram, ctx);
        goto after_113;
    // 0x802B5DCC: lw          $a0, 0x6EEC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X6EEC);
    after_113:
    // 0x802B5DD0: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802B5DD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5DD8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5DDC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802B5DE0: nop

    // 0x802B5DE4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802B5DE8: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x802B5DEC: nop

    // 0x802B5DF0: bc1f        L_802B5E58
    if (!c1cs) {
        // 0x802B5DF4: nop
    
            goto L_802B5E58;
    }
    // 0x802B5DF4: nop

    // 0x802B5DF8: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x802B5DFC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B5E00: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x802B5E04: jal         0x80317444
    // 0x802B5E08: lw          $a1, 0x6EEC($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X6EEC);
    static_3_80317444(rdram, ctx);
        goto after_114;
    // 0x802B5E08: lw          $a1, 0x6EEC($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X6EEC);
    after_114:
    // 0x802B5E0C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5E10: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5E14: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5E18: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802B5E1C: nop

    // 0x802B5E20: bc1fl       L_802B5E5C
    if (!c1cs) {
        // 0x802B5E24: lw          $a2, 0x0($s3)
        ctx->r6 = MEM_W(ctx->r19, 0X0);
            goto L_802B5E5C;
    }
    goto skip_39;
    // 0x802B5E24: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    skip_39:
    // 0x802B5E28: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5E2C: addiu       $a0, $s2, 0x1A4
    ctx->r4 = ADD32(ctx->r18, 0X1A4);
    // 0x802B5E30: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x802B5E34: div.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f22.fl);
    // 0x802B5E38: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802B5E3C: jal         0x802D64DC
    // 0x802B5E40: nop

    static_3_802D64DC(rdram, ctx);
        goto after_115;
    // 0x802B5E40: nop

    after_115:
    // 0x802B5E44: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x802B5E48: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B5E4C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5E50: jal         0x802AB604
    // 0x802B5E54: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AB604(rdram, ctx);
        goto after_116;
    // 0x802B5E54: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_116:
L_802B5E58:
    // 0x802B5E58: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
L_802B5E5C:
    // 0x802B5E5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802B5E60: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802B5E64: lbu         $t5, 0x6EFC($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X6EFC);
    // 0x802B5E68: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x802B5E6C: bnel        $at, $zero, L_802B5D78
    if (ctx->r1 != 0) {
        // 0x802B5E70: addu        $t6, $a2, $s0
        ctx->r14 = ADD32(ctx->r6, ctx->r16);
            goto L_802B5D78;
    }
    goto skip_40;
    // 0x802B5E70: addu        $t6, $a2, $s0
    ctx->r14 = ADD32(ctx->r6, ctx->r16);
    skip_40:
L_802B5E74:
    // 0x802B5E74: addiu       $a0, $a2, 0x365C
    ctx->r4 = ADD32(ctx->r6, 0X365C);
    // 0x802B5E78: bne         $s2, $a0, L_802B5F58
    if (ctx->r18 != ctx->r4) {
        // 0x802B5E7C: addiu       $t6, $a2, 0x4E3C
        ctx->r14 = ADD32(ctx->r6, 0X4E3C);
            goto L_802B5F58;
    }
    // 0x802B5E7C: addiu       $t6, $a2, 0x4E3C
    ctx->r14 = ADD32(ctx->r6, 0X4E3C);
    // 0x802B5E80: addiu       $a0, $a2, 0x4E3C
    ctx->r4 = ADD32(ctx->r6, 0X4E3C);
    // 0x802B5E84: beql        $a0, $zero, L_802B6164
    if (ctx->r4 == 0) {
        // 0x802B5E88: lbu         $v0, 0x24($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X24);
            goto L_802B6164;
    }
    goto skip_41;
    // 0x802B5E88: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    skip_41:
    // 0x802B5E8C: jal         0x80317E10
    // 0x802B5E90: nop

    static_3_80317E10(rdram, ctx);
        goto after_117;
    // 0x802B5E90: nop

    after_117:
    // 0x802B5E94: beql        $v0, $zero, L_802B6164
    if (ctx->r2 == 0) {
        // 0x802B5E98: lbu         $v0, 0x24($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X24);
            goto L_802B6164;
    }
    goto skip_42;
    // 0x802B5E98: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    skip_42:
    // 0x802B5E9C: lw          $a3, 0x0($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X0);
    // 0x802B5EA0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B5EA4: jal         0x80318510
    // 0x802B5EA8: addiu       $a1, $a3, 0x4E3C
    ctx->r5 = ADD32(ctx->r7, 0X4E3C);
    static_3_80318510(rdram, ctx);
        goto after_118;
    // 0x802B5EA8: addiu       $a1, $a3, 0x4E3C
    ctx->r5 = ADD32(ctx->r7, 0X4E3C);
    after_118:
    // 0x802B5EAC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5EB0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x802B5EB4: jal         0x80318214
    // 0x802B5EB8: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_80318214(rdram, ctx);
        goto after_119;
    // 0x802B5EB8: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_119:
    // 0x802B5EBC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5EC0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802B5EC4: jal         0x80318268
    // 0x802B5EC8: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_80318268(rdram, ctx);
        goto after_120;
    // 0x802B5EC8: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_120:
    // 0x802B5ECC: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802B5ED0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5ED4: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5ED8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802B5EDC: nop

    // 0x802B5EE0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802B5EE4: c.lt.s      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.fl < ctx->f18.fl;
    // 0x802B5EE8: nop

    // 0x802B5EEC: bc1f        L_802B6160
    if (!c1cs) {
        // 0x802B5EF0: nop
    
            goto L_802B6160;
    }
    // 0x802B5EF0: nop

    // 0x802B5EF4: lw          $a3, 0x0($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X0);
    // 0x802B5EF8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B5EFC: jal         0x80317444
    // 0x802B5F00: addiu       $a1, $a3, 0x4E3C
    ctx->r5 = ADD32(ctx->r7, 0X4E3C);
    static_3_80317444(rdram, ctx);
        goto after_121;
    // 0x802B5F00: addiu       $a1, $a3, 0x4E3C
    ctx->r5 = ADD32(ctx->r7, 0X4E3C);
    after_121:
    // 0x802B5F04: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5F08: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5F0C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5F10: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802B5F14: nop

    // 0x802B5F18: bc1fl       L_802B6164
    if (!c1cs) {
        // 0x802B5F1C: lbu         $v0, 0x24($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X24);
            goto L_802B6164;
    }
    goto skip_43;
    // 0x802B5F1C: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    skip_43:
    // 0x802B5F20: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5F24: addiu       $a0, $s2, 0x1A4
    ctx->r4 = ADD32(ctx->r18, 0X1A4);
    // 0x802B5F28: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802B5F2C: div.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f22.fl);
    // 0x802B5F30: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802B5F34: jal         0x802D64DC
    // 0x802B5F38: nop

    static_3_802D64DC(rdram, ctx);
        goto after_122;
    // 0x802B5F38: nop

    after_122:
    // 0x802B5F3C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x802B5F40: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B5F44: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5F48: jal         0x802AB604
    // 0x802B5F4C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AB604(rdram, ctx);
        goto after_123;
    // 0x802B5F4C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_123:
    // 0x802B5F50: b           L_802B6164
    // 0x802B5F54: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
        goto L_802B6164;
    // 0x802B5F54: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
L_802B5F58:
    // 0x802B5F58: bnel        $s2, $t6, L_802B6164
    if (ctx->r18 != ctx->r14) {
        // 0x802B5F5C: lbu         $v0, 0x24($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X24);
            goto L_802B6164;
    }
    goto skip_44;
    // 0x802B5F5C: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    skip_44:
    // 0x802B5F60: beql        $a0, $zero, L_802B6164
    if (ctx->r4 == 0) {
        // 0x802B5F64: lbu         $v0, 0x24($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X24);
            goto L_802B6164;
    }
    goto skip_45;
    // 0x802B5F64: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    skip_45:
    // 0x802B5F68: jal         0x80317E10
    // 0x802B5F6C: nop

    static_3_80317E10(rdram, ctx);
        goto after_124;
    // 0x802B5F6C: nop

    after_124:
    // 0x802B5F70: beql        $v0, $zero, L_802B6164
    if (ctx->r2 == 0) {
        // 0x802B5F74: lbu         $v0, 0x24($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X24);
            goto L_802B6164;
    }
    goto skip_46;
    // 0x802B5F74: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    skip_46:
    // 0x802B5F78: lw          $a3, 0x0($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X0);
    // 0x802B5F7C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B5F80: jal         0x80318510
    // 0x802B5F84: addiu       $a1, $a3, 0x365C
    ctx->r5 = ADD32(ctx->r7, 0X365C);
    static_3_80318510(rdram, ctx);
        goto after_125;
    // 0x802B5F84: addiu       $a1, $a3, 0x365C
    ctx->r5 = ADD32(ctx->r7, 0X365C);
    after_125:
    // 0x802B5F88: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5F8C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x802B5F90: jal         0x80318214
    // 0x802B5F94: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_80318214(rdram, ctx);
        goto after_126;
    // 0x802B5F94: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_126:
    // 0x802B5F98: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B5F9C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802B5FA0: jal         0x80318268
    // 0x802B5FA4: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_80318268(rdram, ctx);
        goto after_127;
    // 0x802B5FA4: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_127:
    // 0x802B5FA8: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x802B5FAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5FB0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5FB4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B5FB8: nop

    // 0x802B5FBC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802B5FC0: c.lt.s      $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f22.fl < ctx->f6.fl;
    // 0x802B5FC4: nop

    // 0x802B5FC8: bc1f        L_802B6160
    if (!c1cs) {
        // 0x802B5FCC: nop
    
            goto L_802B6160;
    }
    // 0x802B5FCC: nop

    // 0x802B5FD0: lw          $a3, 0x0($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X0);
    // 0x802B5FD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B5FD8: jal         0x80317444
    // 0x802B5FDC: addiu       $a1, $a3, 0x365C
    ctx->r5 = ADD32(ctx->r7, 0X365C);
    static_3_80317444(rdram, ctx);
        goto after_128;
    // 0x802B5FDC: addiu       $a1, $a3, 0x365C
    ctx->r5 = ADD32(ctx->r7, 0X365C);
    after_128:
    // 0x802B5FE0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5FE4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B5FE8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B5FEC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802B5FF0: nop

    // 0x802B5FF4: bc1fl       L_802B6164
    if (!c1cs) {
        // 0x802B5FF8: lbu         $v0, 0x24($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X24);
            goto L_802B6164;
    }
    goto skip_47;
    // 0x802B5FF8: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    skip_47:
    // 0x802B5FFC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6000: addiu       $a0, $s2, 0x1A4
    ctx->r4 = ADD32(ctx->r18, 0X1A4);
    // 0x802B6004: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802B6008: div.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f22.fl);
    // 0x802B600C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802B6010: jal         0x802D64DC
    // 0x802B6014: nop

    static_3_802D64DC(rdram, ctx);
        goto after_129;
    // 0x802B6014: nop

    after_129:
    // 0x802B6018: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x802B601C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802B6020: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B6024: jal         0x802AB604
    // 0x802B6028: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AB604(rdram, ctx);
        goto after_130;
    // 0x802B6028: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_130:
    // 0x802B602C: b           L_802B6164
    // 0x802B6030: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
        goto L_802B6164;
    // 0x802B6030: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
L_802B6034:
    // 0x802B6034: beq         $t8, $at, L_802B6160
    if (ctx->r24 == ctx->r1) {
        // 0x802B6038: lw          $a1, 0x58($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X58);
            goto L_802B6160;
    }
    // 0x802B6038: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x802B603C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B6040: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B6044: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B6048: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B604C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802B6050: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x802B6054: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802B6058: addiu       $a2, $sp, 0x39C
    ctx->r6 = ADD32(ctx->r29, 0X39C);
    // 0x802B605C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802B6060: jal         0x802AF31C
    // 0x802B6064: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    static_3_802AF31C(rdram, ctx);
        goto after_131;
    // 0x802B6064: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_131:
    // 0x802B6068: beq         $v0, $zero, L_802B60CC
    if (ctx->r2 == 0) {
        // 0x802B606C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802B60CC;
    }
    // 0x802B606C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802B6070: jal         0x80309DAC
    // 0x802B6074: nop

    static_3_80309DAC(rdram, ctx);
        goto after_132;
    // 0x802B6074: nop

    after_132:
    // 0x802B6078: beq         $v0, $zero, L_802B6088
    if (ctx->r2 == 0) {
        // 0x802B607C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802B6088;
    }
    // 0x802B607C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B6080: beql        $s0, $at, L_802B60D0
    if (ctx->r16 == ctx->r1) {
        // 0x802B6084: lbu         $t3, 0x24($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X24);
            goto L_802B60D0;
    }
    goto skip_48;
    // 0x802B6084: lbu         $t3, 0x24($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X24);
    skip_48:
L_802B6088:
    // 0x802B6088: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x802B608C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B6090: beql        $t0, $at, L_802B60AC
    if (ctx->r8 == ctx->r1) {
        // 0x802B6094: lw          $v0, 0xC($s2)
        ctx->r2 = MEM_W(ctx->r18, 0XC);
            goto L_802B60AC;
    }
    goto skip_49;
    // 0x802B6094: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    skip_49:
    // 0x802B6098: beq         $s0, $zero, L_802B60CC
    if (ctx->r16 == 0) {
        // 0x802B609C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B60CC;
    }
    // 0x802B609C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B60A0: beql        $s0, $at, L_802B60D0
    if (ctx->r16 == ctx->r1) {
        // 0x802B60A4: lbu         $t3, 0x24($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X24);
            goto L_802B60D0;
    }
    goto skip_50;
    // 0x802B60A4: lbu         $t3, 0x24($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X24);
    skip_50:
    // 0x802B60A8: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
L_802B60AC:
    // 0x802B60AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B60B0: sb          $t1, 0x24($s2)
    MEM_B(0X24, ctx->r18) = ctx->r9;
    // 0x802B60B4: lw          $a3, 0xD8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XD8);
    // 0x802B60B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B60BC: lw          $t9, 0x9C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X9C);
    // 0x802B60C0: lh          $t2, 0x98($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X98);
    // 0x802B60C4: jalr        $t9
    // 0x802B60C8: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_133;
    // 0x802B60C8: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    after_133:
L_802B60CC:
    // 0x802B60CC: lbu         $t3, 0x24($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X24);
L_802B60D0:
    // 0x802B60D0: lw          $v0, 0x218($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X218);
    // 0x802B60D4: lw          $t6, 0x218($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X218);
    // 0x802B60D8: bne         $t3, $zero, L_802B6130
    if (ctx->r11 != 0) {
        // 0x802B60DC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802B6130;
    }
    // 0x802B60DC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B60E0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B60E4: beq         $v0, $at, L_802B6160
    if (ctx->r2 == ctx->r1) {
        // 0x802B60E8: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802B6160;
    }
    // 0x802B60E8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B60EC: beq         $v0, $at, L_802B6160
    if (ctx->r2 == ctx->r1) {
        // 0x802B60F0: lw          $t4, 0x50($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X50);
            goto L_802B6160;
    }
    // 0x802B60F0: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x802B60F4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B60F8: beq         $t4, $at, L_802B6160
    if (ctx->r12 == ctx->r1) {
        // 0x802B60FC: lwc1        $f0, 0x3D0($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X3D0);
            goto L_802B6160;
    }
    // 0x802B60FC: lwc1        $f0, 0x3D0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3D0);
    // 0x802B6100: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802B6104: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B6108: jal         0x802AEF08
    // 0x802B610C: lw          $a1, 0x3CC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3CC);
    static_3_802AEF08(rdram, ctx);
        goto after_134;
    // 0x802B610C: lw          $a1, 0x3CC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3CC);
    after_134:
    // 0x802B6110: lwc1        $f6, 0x3D4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3D4);
    // 0x802B6114: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802B6118: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802B611C: nop

    // 0x802B6120: bc1fl       L_802B6164
    if (!c1cs) {
        // 0x802B6124: lbu         $v0, 0x24($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X24);
            goto L_802B6164;
    }
    goto skip_51;
    // 0x802B6124: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    skip_51:
    // 0x802B6128: b           L_802B6160
    // 0x802B612C: sb          $t5, 0x24($s2)
    MEM_B(0X24, ctx->r18) = ctx->r13;
        goto L_802B6160;
    // 0x802B612C: sb          $t5, 0x24($s2)
    MEM_B(0X24, ctx->r18) = ctx->r13;
L_802B6130:
    // 0x802B6130: bne         $t6, $at, L_802B6160
    if (ctx->r14 != ctx->r1) {
        // 0x802B6134: lw          $t8, 0x50($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X50);
            goto L_802B6160;
    }
    // 0x802B6134: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x802B6138: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B613C: beq         $t8, $at, L_802B6160
    if (ctx->r24 == ctx->r1) {
        // 0x802B6140: lwc1        $f10, 0x3D4($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X3D4);
            goto L_802B6160;
    }
    // 0x802B6140: lwc1        $f10, 0x3D4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3D4);
    // 0x802B6144: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802B6148: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B614C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802B6150: nop

    // 0x802B6154: bc1fl       L_802B6164
    if (!c1cs) {
        // 0x802B6158: lbu         $v0, 0x24($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X24);
            goto L_802B6164;
    }
    goto skip_52;
    // 0x802B6158: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    skip_52:
    // 0x802B615C: sb          $t7, 0x24($s2)
    MEM_B(0X24, ctx->r18) = ctx->r15;
L_802B6160:
    // 0x802B6160: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
L_802B6164:
    // 0x802B6164: beq         $v0, $zero, L_802B653C
    if (ctx->r2 == 0) {
        // 0x802B6168: nop
    
            goto L_802B653C;
    }
    // 0x802B6168: nop

    // 0x802B616C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B6170: addiu       $a1, $s2, 0x788
    ctx->r5 = ADD32(ctx->r18, 0X788);
    // 0x802B6174: jal         0x80302414
    // 0x802B6178: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302414(rdram, ctx);
        goto after_135;
    // 0x802B6178: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_135:
    // 0x802B617C: jal         0x802D25F4
    // 0x802B6180: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    static_3_802D25F4(rdram, ctx);
        goto after_136;
    // 0x802B6180: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    after_136:
    // 0x802B6184: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802B6188: nop

    // 0x802B618C: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x802B6190: nop

    // 0x802B6194: bc1fl       L_802B61F4
    if (!c1cs) {
        // 0x802B6198: lbu         $t3, 0x1D($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X1D);
            goto L_802B61F4;
    }
    goto skip_53;
    // 0x802B6198: lbu         $t3, 0x1D($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X1D);
    skip_53:
    // 0x802B619C: lbu         $t0, 0x77D($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X77D);
    // 0x802B61A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802B61A4: beql        $t0, $zero, L_802B61F4
    if (ctx->r8 == 0) {
        // 0x802B61A8: lbu         $t3, 0x1D($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X1D);
            goto L_802B61F4;
    }
    goto skip_54;
    // 0x802B61A8: lbu         $t3, 0x1D($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X1D);
    skip_54:
    // 0x802B61AC: jal         0x8021BA1C
    // 0x802B61B0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    static_3_8021BA1C(rdram, ctx);
        goto after_137;
    // 0x802B61B0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_137:
    // 0x802B61B4: lw          $a3, 0x368($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X368);
    // 0x802B61B8: sb          $zero, 0x77D($s2)
    MEM_B(0X77D, ctx->r18) = 0;
    // 0x802B61BC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B61C0: lh          $t1, 0x50($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X50);
    // 0x802B61C4: lw          $t9, 0x54($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X54);
    // 0x802B61C8: addu        $a0, $t1, $s2
    ctx->r4 = ADD32(ctx->r9, ctx->r18);
    // 0x802B61CC: jalr        $t9
    // 0x802B61D0: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_138;
    // 0x802B61D0: addiu       $a0, $a0, 0x2B8
    ctx->r4 = ADD32(ctx->r4, 0X2B8);
    after_138:
    // 0x802B61D4: lw          $a3, 0x458($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X458);
    // 0x802B61D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B61DC: lh          $t2, 0x50($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X50);
    // 0x802B61E0: lw          $t9, 0x54($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X54);
    // 0x802B61E4: addu        $a0, $t2, $s2
    ctx->r4 = ADD32(ctx->r10, ctx->r18);
    // 0x802B61E8: jalr        $t9
    // 0x802B61EC: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_139;
    // 0x802B61EC: addiu       $a0, $a0, 0x3A8
    ctx->r4 = ADD32(ctx->r4, 0X3A8);
    after_139:
    // 0x802B61F0: lbu         $t3, 0x1D($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X1D);
L_802B61F4:
    // 0x802B61F4: sb          $zero, 0x541($s2)
    MEM_B(0X541, ctx->r18) = 0;
    // 0x802B61F8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x802B61FC: beq         $t3, $zero, L_802B64A4
    if (ctx->r11 == 0) {
        // 0x802B6200: lw          $t4, 0x4C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X4C);
            goto L_802B64A4;
    }
    // 0x802B6200: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x802B6204: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B6208: jal         0x802AB154
    // 0x802B620C: sltiu       $s1, $s1, 0x1
    ctx->r17 = ctx->r17 < 0X1 ? 1 : 0;
    static_3_802AB154(rdram, ctx);
        goto after_140;
    // 0x802B620C: sltiu       $s1, $s1, 0x1
    ctx->r17 = ctx->r17 < 0X1 ? 1 : 0;
    after_140:
    // 0x802B6210: lbu         $t4, 0x790($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X790);
    // 0x802B6214: bnel        $t4, $zero, L_802B62C4
    if (ctx->r12 != 0) {
        // 0x802B6218: lw          $a0, 0x0($s3)
        ctx->r4 = MEM_W(ctx->r19, 0X0);
            goto L_802B62C4;
    }
    goto skip_55;
    // 0x802B6218: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    skip_55:
    // 0x802B621C: lw          $a3, 0x770($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X770);
    // 0x802B6220: lw          $a2, 0x100($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X100);
    // 0x802B6224: sh          $zero, 0x1B4($a3)
    MEM_H(0X1B4, ctx->r7) = 0;
    // 0x802B6228: lh          $t5, 0x78($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X78);
    // 0x802B622C: lw          $t9, 0x7C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X7C);
    // 0x802B6230: addu        $a0, $t5, $a3
    ctx->r4 = ADD32(ctx->r13, ctx->r7);
    // 0x802B6234: jalr        $t9
    // 0x802B6238: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_141;
    // 0x802B6238: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    after_141:
    // 0x802B623C: lw          $a0, 0x770($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X770);
    // 0x802B6240: jal         0x80316A6C
    // 0x802B6244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80316A6C(rdram, ctx);
        goto after_142;
    // 0x802B6244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_142:
    // 0x802B6248: lw          $a3, 0x774($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X774);
    // 0x802B624C: lw          $a2, 0x100($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X100);
    // 0x802B6250: sh          $zero, 0x1B4($a3)
    MEM_H(0X1B4, ctx->r7) = 0;
    // 0x802B6254: lh          $t6, 0x78($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X78);
    // 0x802B6258: lw          $t9, 0x7C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X7C);
    // 0x802B625C: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    // 0x802B6260: jalr        $t9
    // 0x802B6264: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_143;
    // 0x802B6264: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    after_143:
    // 0x802B6268: lw          $a0, 0x774($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X774);
    // 0x802B626C: jal         0x80316A6C
    // 0x802B6270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80316A6C(rdram, ctx);
        goto after_144;
    // 0x802B6270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_144:
    // 0x802B6274: addiu       $a0, $zero, 0x1388
    ctx->r4 = ADD32(0, 0X1388);
    // 0x802B6278: jal         0x80305E90
    // 0x802B627C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_145;
    // 0x802B627C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_145:
    // 0x802B6280: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B6284: addiu       $s0, $s2, 0x780
    ctx->r16 = ADD32(ctx->r18, 0X780);
    // 0x802B6288: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x802B628C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802B6290: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B6294: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x802B6298: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802B629C: jal         0x80302238
    // 0x802B62A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_146;
    // 0x802B62A0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_146:
    // 0x802B62A4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B62A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B62AC: addiu       $a2, $sp, 0x39C
    ctx->r6 = ADD32(ctx->r29, 0X39C);
    // 0x802B62B0: jal         0x803025D8
    // 0x802B62B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_147;
    // 0x802B62B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_147:
    // 0x802B62B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B62BC: sb          $t7, 0x790($s2)
    MEM_B(0X790, ctx->r18) = ctx->r15;
    // 0x802B62C0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
L_802B62C4:
    // 0x802B62C4: jal         0x802AED60
    // 0x802B62C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802AED60(rdram, ctx);
        goto after_148;
    // 0x802B62C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_148:
    // 0x802B62CC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802B62D0: beq         $v0, $at, L_802B6360
    if (ctx->r2 == ctx->r1) {
        // 0x802B62D4: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_802B6360;
    }
    // 0x802B62D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802B62D8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B62DC: jal         0x802AFF48
    // 0x802B62E0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_802AFF48(rdram, ctx);
        goto after_149;
    // 0x802B62E0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_149:
    // 0x802B62E4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B62E8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802B62EC: lwc1        $f0, 0x3E4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3E4);
    // 0x802B62F0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802B62F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B62F8: add.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x802B62FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B6300: addiu       $a1, $sp, 0x39C
    ctx->r5 = ADD32(ctx->r29, 0X39C);
    // 0x802B6304: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x802B6308: swc1        $f6, 0x5F4($s2)
    MEM_W(0X5F4, ctx->r18) = ctx->f6.u32l;
    // 0x802B630C: jal         0x802E40B4
    // 0x802B6310: swc1        $f4, 0x5F0($s2)
    MEM_W(0X5F0, ctx->r18) = ctx->f4.u32l;
    static_3_802E40B4(rdram, ctx);
        goto after_150;
    // 0x802B6310: swc1        $f4, 0x5F0($s2)
    MEM_W(0X5F0, ctx->r18) = ctx->f4.u32l;
    after_150:
    // 0x802B6314: lwc1        $f8, 0x2D8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2D8);
    // 0x802B6318: addiu       $a0, $sp, 0x39C
    ctx->r4 = ADD32(ctx->r29, 0X39C);
    // 0x802B631C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B6320: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802B6324: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802B6328: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802B632C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802B6330: jal         0x8022A0D0
    // 0x802B6334: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_151;
    // 0x802B6334: nop

    after_151:
    // 0x802B6338: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x802B633C: addiu       $a1, $sp, 0x39C
    ctx->r5 = ADD32(ctx->r29, 0X39C);
    // 0x802B6340: lw          $a3, 0xD8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XD8);
    // 0x802B6344: lw          $t9, 0xAC($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XAC);
    // 0x802B6348: lh          $t0, 0xA8($a3)
    ctx->r8 = MEM_H(ctx->r7, 0XA8);
    // 0x802B634C: jalr        $t9
    // 0x802B6350: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_152;
    // 0x802B6350: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    after_152:
    // 0x802B6354: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x802B6358: jal         0x802D29E8
    // 0x802B635C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802D29E8(rdram, ctx);
        goto after_153;
    // 0x802B635C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_153:
L_802B6360:
    // 0x802B6360: lwc1        $f18, 0x3E4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3E4);
    // 0x802B6364: lwc1        $f4, 0x5F4($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X5F4);
    // 0x802B6368: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B636C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802B6370: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x802B6374: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802B6378: bc1f        L_802B63F8
    if (!c1cs) {
        // 0x802B637C: nop
    
            goto L_802B63F8;
    }
    // 0x802B637C: nop

    // 0x802B6380: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B6384: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x802B6388: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B638C: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x802B6390: jal         0x802D29E8
    // 0x802B6394: swc1        $f8, 0x5F4($s2)
    MEM_W(0X5F4, ctx->r18) = ctx->f8.u32l;
    static_3_802D29E8(rdram, ctx);
        goto after_154;
    // 0x802B6394: swc1        $f8, 0x5F4($s2)
    MEM_W(0X5F4, ctx->r18) = ctx->f8.u32l;
    after_154:
    // 0x802B6398: addiu       $s0, $sp, 0x5C
    ctx->r16 = ADD32(ctx->r29, 0X5C);
    // 0x802B639C: jal         0x8022970C
    // 0x802B63A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_155;
    // 0x802B63A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_155:
    // 0x802B63A4: lwc1        $f0, 0x3D0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3D0);
    // 0x802B63A8: lwc1        $f10, 0x3CC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3CC);
    // 0x802B63AC: lwc1        $f16, 0x3D4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3D4);
    // 0x802B63B0: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x802B63B4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x802B63B8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B63BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B63C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802B63C4: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x802B63C8: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x802B63CC: jal         0x802AA2E8
    // 0x802B63D0: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    static_3_802AA2E8(rdram, ctx);
        goto after_156;
    // 0x802B63D0: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    after_156:
    // 0x802B63D4: beq         $v0, $zero, L_802B63F8
    if (ctx->r2 == 0) {
        // 0x802B63D8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802B63F8;
    }
    // 0x802B63D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802B63DC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B63E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B63E4: lwc1        $f4, 0xA8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XA8);
    // 0x802B63E8: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x802B63EC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802B63F0: jal         0x80287E78
    // 0x802B63F4: nop

    static_3_80287E78(rdram, ctx);
        goto after_157;
    // 0x802B63F4: nop

    after_157:
L_802B63F8:
    // 0x802B63F8: bne         $s1, $zero, L_802B6410
    if (ctx->r17 != 0) {
        // 0x802B63FC: lwc1        $f10, 0x3E4($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X3E4);
            goto L_802B6410;
    }
    // 0x802B63FC: lwc1        $f10, 0x3E4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3E4);
    // 0x802B6400: lwc1        $f8, 0x5F0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X5F0);
    // 0x802B6404: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802B6408: nop

    // 0x802B640C: bc1f        L_802B6538
    if (!c1cs) {
        // 0x802B6410: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_802B6538;
    }
L_802B6410:
    // 0x802B6410: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802B6414: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802B6418: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B641C: bne         $v0, $at, L_802B6440
    if (ctx->r2 != ctx->r1) {
        // 0x802B6420: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_802B6440;
    }
    // 0x802B6420: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6424: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6428: lwc1        $f16, 0x48($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X48);
    // 0x802B642C: lwc1        $f6, 0x4C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x802B6430: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802B6434: sub.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x802B6438: b           L_802B6460
    // 0x802B643C: swc1        $f8, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f8.u32l;
        goto L_802B6460;
    // 0x802B643C: swc1        $f8, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f8.u32l;
L_802B6440:
    // 0x802B6440: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B6444: bnel        $v0, $at, L_802B6464
    if (ctx->r2 != ctx->r1) {
        // 0x802B6448: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802B6464;
    }
    goto skip_56;
    // 0x802B6448: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_56:
    // 0x802B644C: lwc1        $f16, 0x48($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X48);
    // 0x802B6450: lwc1        $f10, 0x4C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x802B6454: mul.s       $f4, $f16, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x802B6458: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802B645C: swc1        $f6, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f6.u32l;
L_802B6460:
    // 0x802B6460: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802B6464:
    // 0x802B6464: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B6468: lwc1        $f8, 0x4C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x802B646C: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x802B6470: nop

    // 0x802B6474: bc1fl       L_802B6494
    if (!c1cs) {
        // 0x802B6478: sw          $zero, 0x3DC($sp)
        MEM_W(0X3DC, ctx->r29) = 0;
            goto L_802B6494;
    }
    goto skip_57;
    // 0x802B6478: sw          $zero, 0x3DC($sp)
    MEM_W(0X3DC, ctx->r29) = 0;
    skip_57:
    // 0x802B647C: jal         0x802E7994
    // 0x802B6480: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E7994(rdram, ctx);
        goto after_158;
    // 0x802B6480: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_158:
    // 0x802B6484: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B6488: b           L_802B6494
    // 0x802B648C: sw          $t1, 0x3DC($sp)
    MEM_W(0X3DC, ctx->r29) = ctx->r9;
        goto L_802B6494;
    // 0x802B648C: sw          $t1, 0x3DC($sp)
    MEM_W(0X3DC, ctx->r29) = ctx->r9;
    // 0x802B6490: sw          $zero, 0x3DC($sp)
    MEM_W(0X3DC, ctx->r29) = 0;
L_802B6494:
    // 0x802B6494: lw          $t2, 0x3DC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3DC);
    // 0x802B6498: sltu        $t3, $zero, $t2
    ctx->r11 = 0 < ctx->r10 ? 1 : 0;
    // 0x802B649C: b           L_802B6538
    // 0x802B64A0: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
        goto L_802B6538;
    // 0x802B64A0: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
L_802B64A4:
    // 0x802B64A4: bne         $t4, $zero, L_802B6538
    if (ctx->r12 != 0) {
        // 0x802B64A8: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_802B6538;
    }
    // 0x802B64A8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802B64AC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802B64B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B64B4: bne         $v0, $at, L_802B64D8
    if (ctx->r2 != ctx->r1) {
        // 0x802B64B8: lui         $at, 0x3E80
        ctx->r1 = S32(0X3E80 << 16);
            goto L_802B64D8;
    }
    // 0x802B64B8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B64BC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802B64C0: lwc1        $f10, 0x48($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X48);
    // 0x802B64C4: lwc1        $f16, 0x4C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x802B64C8: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802B64CC: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x802B64D0: b           L_802B64FC
    // 0x802B64D4: swc1        $f6, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f6.u32l;
        goto L_802B64FC;
    // 0x802B64D4: swc1        $f6, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f6.u32l;
L_802B64D8:
    // 0x802B64D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B64DC: bne         $v0, $at, L_802B64FC
    if (ctx->r2 != ctx->r1) {
        // 0x802B64E0: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_802B64FC;
    }
    // 0x802B64E0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B64E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B64E8: lwc1        $f18, 0x48($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X48);
    // 0x802B64EC: lwc1        $f16, 0x4C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x802B64F0: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802B64F4: sub.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x802B64F8: swc1        $f4, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f4.u32l;
L_802B64FC:
    // 0x802B64FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B6500: lwc1        $f18, 0x4C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x802B6504: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x802B6508: nop

    // 0x802B650C: bc1fl       L_802B652C
    if (!c1cs) {
        // 0x802B6510: sw          $zero, 0x3DC($sp)
        MEM_W(0X3DC, ctx->r29) = 0;
            goto L_802B652C;
    }
    goto skip_58;
    // 0x802B6510: sw          $zero, 0x3DC($sp)
    MEM_W(0X3DC, ctx->r29) = 0;
    skip_58:
    // 0x802B6514: jal         0x802E7994
    // 0x802B6518: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802E7994(rdram, ctx);
        goto after_159;
    // 0x802B6518: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_159:
    // 0x802B651C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802B6520: b           L_802B652C
    // 0x802B6524: sw          $t5, 0x3DC($sp)
    MEM_W(0X3DC, ctx->r29) = ctx->r13;
        goto L_802B652C;
    // 0x802B6524: sw          $t5, 0x3DC($sp)
    MEM_W(0X3DC, ctx->r29) = ctx->r13;
    // 0x802B6528: sw          $zero, 0x3DC($sp)
    MEM_W(0X3DC, ctx->r29) = 0;
L_802B652C:
    // 0x802B652C: lw          $t6, 0x3DC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3DC);
    // 0x802B6530: sltu        $t8, $zero, $t6
    ctx->r24 = 0 < ctx->r14 ? 1 : 0;
    // 0x802B6534: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
L_802B6538:
    // 0x802B6538: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
L_802B653C:
    // 0x802B653C: bne         $v0, $zero, L_802B66A0
    if (ctx->r2 != 0) {
        // 0x802B6540: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802B66A0;
    }
    // 0x802B6540: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802B6544: lw          $a1, 0x3E8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3E8);
    // 0x802B6548: jal         0x802DFB98
    // 0x802B654C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    static_3_802DFB98(rdram, ctx);
        goto after_160;
    // 0x802B654C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    after_160:
    // 0x802B6550: lbu         $t7, 0x1D($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X1D);
    // 0x802B6554: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B6558: beql        $t7, $zero, L_802B66A4
    if (ctx->r15 == 0) {
        // 0x802B655C: addiu       $a0, $s2, 0x498
        ctx->r4 = ADD32(ctx->r18, 0X498);
            goto L_802B66A4;
    }
    goto skip_59;
    // 0x802B655C: addiu       $a0, $s2, 0x498
    ctx->r4 = ADD32(ctx->r18, 0X498);
    skip_59:
    // 0x802B6560: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B6564: lwc1        $f16, 0x4C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x802B6568: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x802B656C: nop

    // 0x802B6570: bc1fl       L_802B66A4
    if (!c1cs) {
        // 0x802B6574: addiu       $a0, $s2, 0x498
        ctx->r4 = ADD32(ctx->r18, 0X498);
            goto L_802B66A4;
    }
    goto skip_60;
    // 0x802B6574: addiu       $a0, $s2, 0x498
    ctx->r4 = ADD32(ctx->r18, 0X498);
    skip_60:
    // 0x802B6578: lbu         $t0, 0x5F8($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X5F8);
    // 0x802B657C: addiu       $a0, $zero, 0x1388
    ctx->r4 = ADD32(0, 0X1388);
    // 0x802B6580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B6584: beql        $t0, $zero, L_802B6610
    if (ctx->r8 == 0) {
        // 0x802B6588: lbu         $t2, 0x5F9($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X5F9);
            goto L_802B6610;
    }
    goto skip_61;
    // 0x802B6588: lbu         $t2, 0x5F9($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X5F9);
    skip_61:
    // 0x802B658C: jal         0x80305E90
    // 0x802B6590: addiu       $s0, $s2, 0x788
    ctx->r16 = ADD32(ctx->r18, 0X788);
    static_3_80305E90(rdram, ctx);
        goto after_161;
    // 0x802B6590: addiu       $s0, $s2, 0x788
    ctx->r16 = ADD32(ctx->r18, 0X788);
    after_161:
    // 0x802B6594: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B6598: addiu       $t9, $zero, 0x38
    ctx->r25 = ADD32(0, 0X38);
    // 0x802B659C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802B65A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B65A4: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x802B65A8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802B65AC: jal         0x80302238
    // 0x802B65B0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_162;
    // 0x802B65B0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_162:
    // 0x802B65B4: beq         $v0, $zero, L_802B65CC
    if (ctx->r2 == 0) {
        // 0x802B65B8: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_802B65CC;
    }
    // 0x802B65B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B65BC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B65C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B65C4: jal         0x8030276C
    // 0x802B65C8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030276C(rdram, ctx);
        goto after_163;
    // 0x802B65C8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_163:
L_802B65CC:
    // 0x802B65CC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B65D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B65D4: addiu       $a2, $sp, 0x39C
    ctx->r6 = ADD32(ctx->r29, 0X39C);
    // 0x802B65D8: jal         0x803025D8
    // 0x802B65DC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_164;
    // 0x802B65DC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_164:
    // 0x802B65E0: lw          $t1, 0xF0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0XF0);
    // 0x802B65E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B65E8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802B65EC: bne         $t1, $at, L_802B65FC
    if (ctx->r9 != ctx->r1) {
        // 0x802B65F0: addiu       $a2, $zero, 0xB
        ctx->r6 = ADD32(0, 0XB);
            goto L_802B65FC;
    }
    // 0x802B65F0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x802B65F4: b           L_802B65FC
    // 0x802B65F8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_802B65FC;
    // 0x802B65F8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_802B65FC:
    // 0x802B65FC: jal         0x802AFF48
    // 0x802B6600: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    static_3_802AFF48(rdram, ctx);
        goto after_165;
    // 0x802B6600: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_165:
    // 0x802B6604: b           L_802B66A4
    // 0x802B6608: addiu       $a0, $s2, 0x498
    ctx->r4 = ADD32(ctx->r18, 0X498);
        goto L_802B66A4;
    // 0x802B6608: addiu       $a0, $s2, 0x498
    ctx->r4 = ADD32(ctx->r18, 0X498);
    // 0x802B660C: lbu         $t2, 0x5F9($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X5F9);
L_802B6610:
    // 0x802B6610: lwc1        $f4, 0x3E4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3E4);
    // 0x802B6614: beql        $t2, $zero, L_802B66A4
    if (ctx->r10 == 0) {
        // 0x802B6618: addiu       $a0, $s2, 0x498
        ctx->r4 = ADD32(ctx->r18, 0X498);
            goto L_802B66A4;
    }
    goto skip_62;
    // 0x802B6618: addiu       $a0, $s2, 0x498
    ctx->r4 = ADD32(ctx->r18, 0X498);
    skip_62:
    // 0x802B661C: lwc1        $f10, 0x5EC($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X5EC);
    // 0x802B6620: addiu       $a0, $zero, 0x1388
    ctx->r4 = ADD32(0, 0X1388);
    // 0x802B6624: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B6628: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x802B662C: nop

    // 0x802B6630: bc1fl       L_802B66A4
    if (!c1cs) {
        // 0x802B6634: addiu       $a0, $s2, 0x498
        ctx->r4 = ADD32(ctx->r18, 0X498);
            goto L_802B66A4;
    }
    goto skip_63;
    // 0x802B6634: addiu       $a0, $s2, 0x498
    ctx->r4 = ADD32(ctx->r18, 0X498);
    skip_63:
    // 0x802B6638: jal         0x80305E90
    // 0x802B663C: addiu       $s0, $s2, 0x788
    ctx->r16 = ADD32(ctx->r18, 0X788);
    static_3_80305E90(rdram, ctx);
        goto after_166;
    // 0x802B663C: addiu       $s0, $s2, 0x788
    ctx->r16 = ADD32(ctx->r18, 0X788);
    after_166:
    // 0x802B6640: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B6644: addiu       $t3, $zero, 0x38
    ctx->r11 = ADD32(0, 0X38);
    // 0x802B6648: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802B664C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B6650: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x802B6654: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802B6658: jal         0x80302238
    // 0x802B665C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_167;
    // 0x802B665C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_167:
    // 0x802B6660: beq         $v0, $zero, L_802B6678
    if (ctx->r2 == 0) {
        // 0x802B6664: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_802B6678;
    }
    // 0x802B6664: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B6668: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B666C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B6670: jal         0x8030276C
    // 0x802B6674: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030276C(rdram, ctx);
        goto after_168;
    // 0x802B6674: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_168:
L_802B6678:
    // 0x802B6678: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802B667C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B6680: addiu       $a2, $sp, 0x39C
    ctx->r6 = ADD32(ctx->r29, 0X39C);
    // 0x802B6684: jal         0x803025D8
    // 0x802B6688: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_169;
    // 0x802B6688: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_169:
    // 0x802B668C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802B6690: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B6694: lwc1        $f6, 0x3E4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3E4);
    // 0x802B6698: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802B669C: swc1        $f8, 0x5EC($s2)
    MEM_W(0X5EC, ctx->r18) = ctx->f8.u32l;
L_802B66A0:
    // 0x802B66A0: addiu       $a0, $s2, 0x498
    ctx->r4 = ADD32(ctx->r18, 0X498);
L_802B66A4:
    // 0x802B66A4: jal         0x802FD2E4
    // 0x802B66A8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_802FD2E4(rdram, ctx);
        goto after_170;
    // 0x802B66A8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_170:
    // 0x802B66AC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x802B66B0: bnel        $t4, $zero, L_802B66E0
    if (ctx->r12 != 0) {
        // 0x802B66B4: lw          $a3, 0x1A0($s2)
        ctx->r7 = MEM_W(ctx->r18, 0X1A0);
            goto L_802B66E0;
    }
    goto skip_64;
    // 0x802B66B4: lw          $a3, 0x1A0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1A0);
    skip_64:
    // 0x802B66B8: lw          $t5, 0x14($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X14);
    // 0x802B66BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B66C0: bnel        $t5, $at, L_802B66E0
    if (ctx->r13 != ctx->r1) {
        // 0x802B66C4: lw          $a3, 0x1A0($s2)
        ctx->r7 = MEM_W(ctx->r18, 0X1A0);
            goto L_802B66E0;
    }
    goto skip_65;
    // 0x802B66C4: lw          $a3, 0x1A0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1A0);
    skip_65:
    // 0x802B66C8: lbu         $t6, 0x1D($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1D);
    // 0x802B66CC: bnel        $t6, $zero, L_802B66E0
    if (ctx->r14 != 0) {
        // 0x802B66D0: lw          $a3, 0x1A0($s2)
        ctx->r7 = MEM_W(ctx->r18, 0X1A0);
            goto L_802B66E0;
    }
    goto skip_66;
    // 0x802B66D0: lw          $a3, 0x1A0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1A0);
    skip_66:
    // 0x802B66D4: jal         0x8030CA6C
    // 0x802B66D8: lbu         $a0, 0x1B($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X1B);
    static_3_8030CA6C(rdram, ctx);
        goto after_171;
    // 0x802B66D8: lbu         $a0, 0x1B($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X1B);
    after_171:
    // 0x802B66DC: lw          $a3, 0x1A0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1A0);
L_802B66E0:
    // 0x802B66E0: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x802B66E4: lw          $t9, 0x64($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X64);
    // 0x802B66E8: lh          $t8, 0x60($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X60);
    // 0x802B66EC: jalr        $t9
    // 0x802B66F0: addu        $a0, $t8, $s2
    ctx->r4 = ADD32(ctx->r24, ctx->r18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_172;
    // 0x802B66F0: addu        $a0, $t8, $s2
    ctx->r4 = ADD32(ctx->r24, ctx->r18);
    after_172:
    // 0x802B66F4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802B66F8: lw          $v0, 0x3DC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3DC);
    // 0x802B66FC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802B6700: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x802B6704: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x802B6708: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x802B670C: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x802B6710: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x802B6714: jr          $ra
    // 0x802B6718: addiu       $sp, $sp, 0x3E0
    ctx->r29 = ADD32(ctx->r29, 0X3E0);
    return;
    // 0x802B6718: addiu       $sp, $sp, 0x3E0
    ctx->r29 = ADD32(ctx->r29, 0X3E0);
;}
RECOMP_FUNC void D_802D4210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D4290: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D4294: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D4298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D429C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802D42A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802D42A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_802D42A8:
    // 0x802D42A8: lbu         $t6, 0x34C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X34C);
    // 0x802D42AC: bnel        $t6, $zero, L_802D42C0
    if (ctx->r14 != 0) {
        // 0x802D42B0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802D42C0;
    }
    goto skip_0;
    // 0x802D42B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x802D42B4: b           L_802D42D8
    // 0x802D42B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802D42D8;
    // 0x802D42B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802D42BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802D42C0:
    // 0x802D42C0: bne         $v1, $a0, L_802D42A8
    if (ctx->r3 != ctx->r4) {
        // 0x802D42C4: addiu       $v0, $v0, 0x354
        ctx->r2 = ADD32(ctx->r2, 0X354);
            goto L_802D42A8;
    }
    // 0x802D42C4: addiu       $v0, $v0, 0x354
    ctx->r2 = ADD32(ctx->r2, 0X354);
    // 0x802D42C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D42CC: jal         0x80231A24
    // 0x802D42D0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D42D0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D42D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802D42D8:
    // 0x802D42D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D42DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D42E0: jr          $ra
    // 0x802D42E4: nop

    return;
    // 0x802D42E4: nop

;}
RECOMP_FUNC void D_802ED4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED568: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802ED56C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED570: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802ED574: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802ED578: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x802ED57C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ED580: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ED584: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x802ED588: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802ED58C: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802ED590: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ED594: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ED598: sh          $t9, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r25;
    // 0x802ED59C: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ED5A0: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ED5A4: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ED5A8: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ED5AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED5B0: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ED5B4: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ED5B8: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802ED5BC: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x802ED5C0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED5C4: jr          $ra
    // 0x802ED5C8: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802ED5C8: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_8027F670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027F6E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8027F6EC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8027F6F0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8027F6F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027F6F8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8027F6FC: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8027F700: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027F704: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8027F708: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8027F70C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8027F710: bne         $a2, $at, L_8027F78C
    if (ctx->r6 != ctx->r1) {
        // 0x8027F714: sb          $zero, 0x2F($sp)
        MEM_B(0X2F, ctx->r29) = 0;
            goto L_8027F78C;
    }
    // 0x8027F714: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
    // 0x8027F718: lbu         $t7, 0x704C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X704C);
    // 0x8027F71C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027F720: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8027F724: blezl       $t7, L_8027F790
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8027F728: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_8027F790;
    }
    goto skip_0;
    // 0x8027F728: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x8027F72C: lw          $a0, 0x6FC0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6FC0);
L_8027F730:
    // 0x8027F730: beql        $a0, $zero, L_8027F778
    if (ctx->r4 == 0) {
        // 0x8027F734: lbu         $t9, 0x704C($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X704C);
            goto L_8027F778;
    }
    goto skip_1;
    // 0x8027F734: lbu         $t9, 0x704C($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X704C);
    skip_1:
    // 0x8027F738: bnel        $s3, $a0, L_8027F778
    if (ctx->r19 != ctx->r4) {
        // 0x8027F73C: lbu         $t9, 0x704C($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X704C);
            goto L_8027F778;
    }
    goto skip_2;
    // 0x8027F73C: lbu         $t9, 0x704C($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X704C);
    skip_2:
    // 0x8027F740: jal         0x8028C2B8
    // 0x8027F744: nop

    static_3_8028C2B8(rdram, ctx);
        goto after_0;
    // 0x8027F744: nop

    after_0:
    // 0x8027F748: beql        $v0, $zero, L_8027F778
    if (ctx->r2 == 0) {
        // 0x8027F74C: lbu         $t9, 0x704C($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X704C);
            goto L_8027F778;
    }
    goto skip_3;
    // 0x8027F74C: lbu         $t9, 0x704C($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X704C);
    skip_3:
    // 0x8027F750: lw          $a0, 0x6FC0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6FC0);
    // 0x8027F754: jal         0x8028C3F8
    // 0x8027F758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8028C3F8(rdram, ctx);
        goto after_1;
    // 0x8027F758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8027F75C: jal         0x8028C298
    // 0x8027F760: lw          $a0, 0x6FC0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6FC0);
    static_3_8028C298(rdram, ctx);
        goto after_2;
    // 0x8027F760: lw          $a0, 0x6FC0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6FC0);
    after_2:
    // 0x8027F764: sw          $zero, 0x6FC0($s1)
    MEM_W(0X6FC0, ctx->r17) = 0;
    // 0x8027F768: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027F76C: b           L_8027F78C
    // 0x8027F770: sb          $t8, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r24;
        goto L_8027F78C;
    // 0x8027F770: sb          $t8, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r24;
    // 0x8027F774: lbu         $t9, 0x704C($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X704C);
L_8027F778:
    // 0x8027F778: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027F77C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8027F780: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8027F784: bnel        $at, $zero, L_8027F730
    if (ctx->r1 != 0) {
        // 0x8027F788: lw          $a0, 0x6FC0($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X6FC0);
            goto L_8027F730;
    }
    goto skip_4;
    // 0x8027F788: lw          $a0, 0x6FC0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6FC0);
    skip_4:
L_8027F78C:
    // 0x8027F78C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
L_8027F790:
    // 0x8027F790: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027F794: bnel        $t0, $at, L_8027F814
    if (ctx->r8 != ctx->r1) {
        // 0x8027F798: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8027F814;
    }
    goto skip_5;
    // 0x8027F798: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x8027F79C: lbu         $t1, 0x6F90($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6F90);
    // 0x8027F7A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8027F7A4: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x8027F7A8: blezl       $t1, L_8027F814
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8027F7AC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8027F814;
    }
    goto skip_6;
    // 0x8027F7AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x8027F7B0: lw          $a0, 0x6F04($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6F04);
L_8027F7B4:
    // 0x8027F7B4: beql        $a0, $zero, L_8027F7FC
    if (ctx->r4 == 0) {
        // 0x8027F7B8: lbu         $t3, 0x6F90($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X6F90);
            goto L_8027F7FC;
    }
    goto skip_7;
    // 0x8027F7B8: lbu         $t3, 0x6F90($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6F90);
    skip_7:
    // 0x8027F7BC: bnel        $s3, $a0, L_8027F7FC
    if (ctx->r19 != ctx->r4) {
        // 0x8027F7C0: lbu         $t3, 0x6F90($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X6F90);
            goto L_8027F7FC;
    }
    goto skip_8;
    // 0x8027F7C0: lbu         $t3, 0x6F90($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6F90);
    skip_8:
    // 0x8027F7C4: jal         0x8028C2B8
    // 0x8027F7C8: nop

    static_3_8028C2B8(rdram, ctx);
        goto after_3;
    // 0x8027F7C8: nop

    after_3:
    // 0x8027F7CC: beql        $v0, $zero, L_8027F7FC
    if (ctx->r2 == 0) {
        // 0x8027F7D0: lbu         $t3, 0x6F90($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X6F90);
            goto L_8027F7FC;
    }
    goto skip_9;
    // 0x8027F7D0: lbu         $t3, 0x6F90($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6F90);
    skip_9:
    // 0x8027F7D4: lw          $a0, 0x6F04($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6F04);
    // 0x8027F7D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8027F7DC: sb          $t2, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r10;
    // 0x8027F7E0: jal         0x8028C3F8
    // 0x8027F7E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8028C3F8(rdram, ctx);
        goto after_4;
    // 0x8027F7E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8027F7E8: jal         0x8028C298
    // 0x8027F7EC: lw          $a0, 0x6F04($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6F04);
    static_3_8028C298(rdram, ctx);
        goto after_5;
    // 0x8027F7EC: lw          $a0, 0x6F04($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6F04);
    after_5:
    // 0x8027F7F0: b           L_8027F810
    // 0x8027F7F4: sw          $zero, 0x6F04($s1)
    MEM_W(0X6F04, ctx->r17) = 0;
        goto L_8027F810;
    // 0x8027F7F4: sw          $zero, 0x6F04($s1)
    MEM_W(0X6F04, ctx->r17) = 0;
    // 0x8027F7F8: lbu         $t3, 0x6F90($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6F90);
L_8027F7FC:
    // 0x8027F7FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8027F800: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8027F804: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8027F808: bnel        $at, $zero, L_8027F7B4
    if (ctx->r1 != 0) {
        // 0x8027F80C: lw          $a0, 0x6F04($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X6F04);
            goto L_8027F7B4;
    }
    goto skip_10;
    // 0x8027F80C: lw          $a0, 0x6F04($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X6F04);
    skip_10:
L_8027F810:
    // 0x8027F810: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8027F814:
    // 0x8027F814: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
    // 0x8027F818: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8027F81C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8027F820: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8027F824: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8027F828: jr          $ra
    // 0x8027F82C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8027F82C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802E7AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7B58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E7B5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7B60: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x802E7B64: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E7B68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7B6C: bne         $a1, $zero, L_802E7B94
    if (ctx->r5 != 0) {
        // 0x802E7B70: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E7B94;
    }
    // 0x802E7B70: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7B74: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E7B78: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E7B7C: jal         0x80231A24
    // 0x802E7B80: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7B80: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E7B84: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E7B88: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E7B8C: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E7B90: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
L_802E7B94:
    // 0x802E7B94: jal         0x802D25FC
    // 0x802E7B98: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802D25FC(rdram, ctx);
        goto after_1;
    // 0x802E7B98: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x802E7B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E7BA4: jr          $ra
    // 0x802E7BA8: nop

    return;
    // 0x802E7BA8: nop

;}
RECOMP_FUNC void D_80296270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802962F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802962F4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802962F8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802962FC: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x80296300: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80296304: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80296308: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8029630C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80296310: beq         $a0, $zero, L_8029636C
    if (ctx->r4 == 0) {
        // 0x80296314: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8029636C;
    }
    // 0x80296314: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80296318: beql        $a3, $zero, L_8029635C
    if (ctx->r7 == 0) {
        // 0x8029631C: lw          $t7, 0x40($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X40);
            goto L_8029635C;
    }
    goto skip_0;
    // 0x8029631C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x80296320: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80296324: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80296328: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x8029632C: mflo        $t6
    ctx->r14 = lo;
    // 0x80296330: addu        $s0, $a0, $t6
    ctx->r16 = ADD32(ctx->r4, ctx->r14);
    // 0x80296334: sltu        $at, $a0, $s0
    ctx->r1 = ctx->r4 < ctx->r16 ? 1 : 0;
    // 0x80296338: beq         $at, $zero, L_80296358
    if (ctx->r1 == 0) {
        // 0x8029633C: subu        $s0, $s0, $s2
        ctx->r16 = SUB32(ctx->r16, ctx->r18);
            goto L_80296358;
    }
    // 0x8029633C: subu        $s0, $s0, $s2
    ctx->r16 = SUB32(ctx->r16, ctx->r18);
L_80296340:
    // 0x80296340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80296344: jalr        $s3
    // 0x80296348: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_0;
    // 0x80296348: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8029634C: sltu        $at, $s1, $s0
    ctx->r1 = ctx->r17 < ctx->r16 ? 1 : 0;
    // 0x80296350: bnel        $at, $zero, L_80296340
    if (ctx->r1 != 0) {
        // 0x80296354: subu        $s0, $s0, $s2
        ctx->r16 = SUB32(ctx->r16, ctx->r18);
            goto L_80296340;
    }
    goto skip_1;
    // 0x80296354: subu        $s0, $s0, $s2
    ctx->r16 = SUB32(ctx->r16, ctx->r18);
    skip_1:
L_80296358:
    // 0x80296358: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
L_8029635C:
    // 0x8029635C: beql        $t7, $zero, L_80296370
    if (ctx->r15 == 0) {
        // 0x80296360: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80296370;
    }
    goto skip_2;
    // 0x80296360: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x80296364: jal         0x802C681C
    // 0x80296368: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x80296368: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
L_8029636C:
    // 0x8029636C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80296370:
    // 0x80296370: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80296374: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80296378: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8029637C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80296380: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80296384: jr          $ra
    // 0x80296388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80296388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802E878C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E880C: jr          $ra
    // 0x802E8810: sw          $a1, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r5;
    return;
    // 0x802E8810: sw          $a1, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802F0708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0788: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802F078C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802F0790: swc1        $f12, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f12.u32l;
    // 0x802F0794: jr          $ra
    // 0x802F0798: swc1        $f14, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f14.u32l;
    return;
    // 0x802F0798: swc1        $f14, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void D_80246F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246F40: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80246F44: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80246F48: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80246F4C: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x80246F50: bne         $t7, $zero, L_80246F60
    if (ctx->r15 != 0) {
        // 0x80246F54: nop
    
            goto L_80246F60;
    }
    // 0x80246F54: nop

    // 0x80246F58: b           L_80246F6C
    // 0x80246F5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80246F6C;
    // 0x80246F5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80246F60:
    // 0x80246F60: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80246F64: sw          $a0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r4;
    // 0x80246F68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80246F6C:
    // 0x80246F6C: jr          $ra
    // 0x80246F70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80246F70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_802D8430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D84B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D84B4: bne         $a0, $zero, L_802D84CC
    if (ctx->r4 != 0) {
        // 0x802D84B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802D84CC;
    }
    // 0x802D84B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D84BC: jal         0x802C67EC
    // 0x802D84C0: addiu       $a0, $zero, 0xF4
    ctx->r4 = ADD32(0, 0XF4);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D84C0: addiu       $a0, $zero, 0xF4
    ctx->r4 = ADD32(0, 0XF4);
    after_0:
    // 0x802D84C4: beq         $v0, $zero, L_802D84D8
    if (ctx->r2 == 0) {
        // 0x802D84C8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802D84D8;
    }
    // 0x802D84C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802D84CC:
    // 0x802D84CC: jal         0x8031CDC0
    // 0x802D84D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031CDC0(rdram, ctx);
        goto after_1;
    // 0x802D84D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802D84D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802D84D8:
    // 0x802D84D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D84DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D84E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802D84E4: jr          $ra
    // 0x802D84E8: nop

    return;
    // 0x802D84E8: nop

;}
RECOMP_FUNC void D_80204140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80204140: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80204144: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80204148: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8020414C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80204150: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80204154: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80204158: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8020415C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80204160: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80204164: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80204168: beq         $a0, $at, L_80204188
    if (ctx->r4 == ctx->r1) {
        // 0x8020416C: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_80204188;
    }
    // 0x8020416C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80204170: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204174: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80204178: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8020417C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80204180: jal         0x80231C9C
    // 0x80204184: addiu       $a2, $zero, 0x11E
    ctx->r6 = ADD32(0, 0X11E);
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80204184: addiu       $a2, $zero, 0x11E
    ctx->r6 = ADD32(0, 0X11E);
    after_0:
L_80204188:
    // 0x80204188: beq         $s0, $zero, L_802041A4
    if (ctx->r16 == 0) {
        // 0x8020418C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802041A4;
    }
    // 0x8020418C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80204190: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80204194: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80204198: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020419C: jal         0x80231C9C
    // 0x802041A0: addiu       $a2, $zero, 0x11F
    ctx->r6 = ADD32(0, 0X11F);
    static_3_80231C9C(rdram, ctx);
        goto after_1;
    // 0x802041A0: addiu       $a2, $zero, 0x11F
    ctx->r6 = ADD32(0, 0X11F);
    after_1:
L_802041A4:
    // 0x802041A4: beq         $s4, $zero, L_802041C0
    if (ctx->r20 == 0) {
        // 0x802041A8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802041C0;
    }
    // 0x802041A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802041AC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802041B0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802041B4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802041B8: jal         0x80231C9C
    // 0x802041BC: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    static_3_80231C9C(rdram, ctx);
        goto after_2;
    // 0x802041BC: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    after_2:
L_802041C0:
    // 0x802041C0: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x802041C4: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x802041C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802041CC: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x802041D0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802041D4: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802041D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802041DC: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x802041E0: lw          $s2, 0x50($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X50);
    // 0x802041E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802041E8: blez        $s2, L_802042C8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x802041EC: andi        $a0, $s2, 0x3
        ctx->r4 = ctx->r18 & 0X3;
            goto L_802042C8;
    }
    // 0x802041EC: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x802041F0: beq         $a0, $zero, L_8020422C
    if (ctx->r4 == 0) {
        // 0x802041F4: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8020422C;
    }
    // 0x802041F4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802041F8: sll         $t2, $zero, 3
    ctx->r10 = S32(0 << 3);
    // 0x802041FC: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x80204200: addu        $s0, $t2, $t8
    ctx->r16 = ADD32(ctx->r10, ctx->r24);
    // 0x80204204: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
L_80204208:
    // 0x80204208: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x8020420C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80204210: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80204214: sw          $at, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r1;
    // 0x80204218: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x8020421C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80204220: bne         $v1, $s1, L_80204208
    if (ctx->r3 != ctx->r17) {
        // 0x80204224: sw          $t4, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r12;
            goto L_80204208;
    }
    // 0x80204224: sw          $t4, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r12;
    // 0x80204228: beq         $s1, $s2, L_802042C4
    if (ctx->r17 == ctx->r18) {
        // 0x8020422C: sll         $t2, $s1, 3
        ctx->r10 = S32(ctx->r17 << 3);
            goto L_802042C4;
    }
L_8020422C:
    // 0x8020422C: sll         $t2, $s1, 3
    ctx->r10 = S32(ctx->r17 << 3);
    // 0x80204230: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x80204234: addu        $s0, $t2, $t5
    ctx->r16 = ADD32(ctx->r10, ctx->r13);
    // 0x80204238: addu        $v0, $t3, $t2
    ctx->r2 = ADD32(ctx->r11, ctx->r10);
    // 0x8020423C: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x80204240: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x80204244: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80204248: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x8020424C: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x80204250: addiu       $t0, $v0, 0x18
    ctx->r8 = ADD32(ctx->r2, 0X18);
    // 0x80204254: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80204258: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x8020425C: addiu       $v1, $s0, 0x18
    ctx->r3 = ADD32(ctx->r16, 0X18);
L_80204260:
    // 0x80204260: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80204264: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x80204268: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x8020426C: sw          $at, -0x20($s0)
    MEM_W(-0X20, ctx->r16) = ctx->r1;
    // 0x80204270: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80204274: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80204278: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x8020427C: sw          $t9, -0x1C($s0)
    MEM_W(-0X1C, ctx->r16) = ctx->r25;
    // 0x80204280: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x80204284: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80204288: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x8020428C: sw          $at, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = ctx->r1;
    // 0x80204290: lw          $t5, -0x1C($a2)
    ctx->r13 = MEM_W(ctx->r6, -0X1C);
    // 0x80204294: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x80204298: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x8020429C: sw          $t5, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = ctx->r13;
    // 0x802042A0: lw          $at, -0x20($a3)
    ctx->r1 = MEM_W(ctx->r7, -0X20);
    // 0x802042A4: sw          $at, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r1;
    // 0x802042A8: lw          $t7, -0x1C($a3)
    ctx->r15 = MEM_W(ctx->r7, -0X1C);
    // 0x802042AC: sw          $t7, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r15;
    // 0x802042B0: lw          $at, -0x20($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X20);
    // 0x802042B4: sw          $at, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->r1;
    // 0x802042B8: lw          $t9, -0x1C($t0)
    ctx->r25 = MEM_W(ctx->r8, -0X1C);
    // 0x802042BC: bne         $v1, $t1, L_80204260
    if (ctx->r3 != ctx->r9) {
        // 0x802042C0: sw          $t9, -0x1C($v1)
        MEM_W(-0X1C, ctx->r3) = ctx->r25;
            goto L_80204260;
    }
    // 0x802042C0: sw          $t9, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r25;
L_802042C4:
    // 0x802042C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802042C8:
    // 0x802042C8: blez        $s2, L_802042F0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x802042CC: addiu       $s0, $sp, 0x64
        ctx->r16 = ADD32(ctx->r29, 0X64);
            goto L_802042F0;
    }
    // 0x802042CC: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
L_802042D0:
    // 0x802042D0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x802042D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802042D8: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802042DC: jalr        $t9
    // 0x802042E0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802042E0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_3:
    // 0x802042E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802042E8: bne         $s1, $s2, L_802042D0
    if (ctx->r17 != ctx->r18) {
        // 0x802042EC: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_802042D0;
    }
    // 0x802042EC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_802042F0:
    // 0x802042F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802042F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802042F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802042FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80204300: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80204304: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80204308: jr          $ra
    // 0x8020430C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x8020430C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void D_8029637C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802963FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80296400: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80296404: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80296408: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8029640C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80296410: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80296414: jal         0x802C64E0
    // 0x80296418: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802C64E0(rdram, ctx);
        goto after_0;
    // 0x80296418: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8029641C: jal         0x802C6A9C
    // 0x80296420: nop

    static_3_802C6A9C(rdram, ctx);
        goto after_1;
    // 0x80296420: nop

    after_1:
    // 0x80296424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80296428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029642C: jr          $ra
    // 0x80296430: nop

    return;
    // 0x80296430: nop

    // 0x80296434: jr          $ra
    // 0x80296438: nop

    return;
    // 0x80296438: nop

    // 0x8029643C: jr          $ra
    // 0x80296440: nop

    return;
    // 0x80296440: nop

;}
RECOMP_FUNC void D_8022A7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A7F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A7FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8022A800: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8022A804: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8022A808: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8022A80C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8022A810: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8022A814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A818: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8022A81C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8022A820: div.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8022A824: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022A828: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8022A82C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022A830: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x8022A834: ori         $a1, $a1, 0xFDA
    ctx->r5 = ctx->r5 | 0XFDA;
    // 0x8022A838: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x8022A83C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x8022A840: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8022A844: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8022A848: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x8022A84C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022A850: div.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8022A854: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x8022A858: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8022A85C: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x8022A860: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8022A864: div.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8022A868: swc1        $f18, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f18.u32l;
    // 0x8022A86C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8022A870: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8022A874: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x8022A878: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x8022A87C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022A880: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022A884: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x8022A888: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x8022A88C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8022A890: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x8022A894: div.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8022A898: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x8022A89C: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8A0: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8A4: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8A8: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x8022A8AC: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x8022A8B0: jal         0x80229CD4
    // 0x8022A8B4: swc1        $f18, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f18.u32l;
    static_3_80229CD4(rdram, ctx);
        goto after_0;
    // 0x8022A8B4: swc1        $f18, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f18.u32l;
    after_0:
    // 0x8022A8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A8BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022A8C0: jr          $ra
    // 0x8022A8C4: nop

    return;
    // 0x8022A8C4: nop

;}
RECOMP_FUNC void D_802DA340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DA3C0: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802DA3C4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802DA3C8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802DA3CC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802DA3D0: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x802DA3D4: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x802DA3D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802DA3DC: addiu       $t0, $zero, 0x2000
    ctx->r8 = ADD32(0, 0X2000);
    // 0x802DA3E0: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x802DA3E4: addiu       $t2, $zero, 0x4000
    ctx->r10 = ADD32(0, 0X4000);
    // 0x802DA3E8: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x802DA3EC: addiu       $t4, $zero, 0x800
    ctx->r12 = ADD32(0, 0X800);
    // 0x802DA3F0: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x802DA3F4: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x802DA3F8: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x802DA3FC: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x802DA400: sw          $t9, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r25;
    // 0x802DA404: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
    // 0x802DA408: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    // 0x802DA40C: sw          $t2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r10;
    // 0x802DA410: sw          $t3, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r11;
    // 0x802DA414: sw          $t4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r12;
    // 0x802DA418: sw          $t5, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r13;
    // 0x802DA41C: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
    // 0x802DA420: sw          $t7, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r15;
    // 0x802DA424: jr          $ra
    // 0x802DA428: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    return;
    // 0x802DA428: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void D_802A1E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1EFC: jr          $ra
    // 0x802A1F00: lbu         $v0, 0x1C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1C);
    return;
    // 0x802A1F00: lbu         $v0, 0x1C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1C);
;}
RECOMP_FUNC void D_802D93F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9478: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x802D947C: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x802D9480: sll         $t4, $t7, 6
    ctx->r12 = S32(ctx->r15 << 6);
    // 0x802D9484: sll         $t9, $a0, 11
    ctx->r25 = S32(ctx->r4 << 11);
    // 0x802D9488: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x802D948C: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x802D9490: or          $t1, $t5, $t6
    ctx->r9 = ctx->r13 | ctx->r14;
    // 0x802D9494: sll         $t7, $t1, 16
    ctx->r15 = S32(ctx->r9 << 16);
    // 0x802D9498: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D949C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D94A0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D94A4: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x802D94A8: sra         $t1, $t7, 16
    ctx->r9 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802D94AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802D94B0: addiu       $t3, $zero, 0x140
    ctx->r11 = ADD32(0, 0X140);
    // 0x802D94B4: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
L_802D94B8:
    // 0x802D94B8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x802D94BC: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x802D94C0: b           L_802D9500
    // 0x802D94C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_802D9500;
    // 0x802D94C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D94C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x802D94CC: ori         $at, $at, 0xA800
    ctx->r1 = ctx->r1 | 0XA800;
    // 0x802D94D0: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x802D94D4: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x802D94D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D94DC: addu        $t2, $t9, $at
    ctx->r10 = ADD32(ctx->r25, ctx->r1);
    // 0x802D94E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_802D94E4:
    // 0x802D94E4: sh          $t1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r9;
    // 0x802D94E8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802D94EC: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D94F0: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x802D94F4: bne         $a3, $a0, L_802D94E4
    if (ctx->r7 != ctx->r4) {
        // 0x802D94F8: addiu       $t2, $t2, 0x0
        ctx->r10 = ADD32(ctx->r10, 0X0);
            goto L_802D94E4;
    }
    // 0x802D94F8: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802D94FC: beq         $a0, $t3, L_802D954C
    if (ctx->r4 == ctx->r11) {
        // 0x802D9500: addu        $a2, $a0, $a1
        ctx->r6 = ADD32(ctx->r4, ctx->r5);
            goto L_802D954C;
    }
L_802D9500:
    // 0x802D9500: addu        $a2, $a0, $a1
    ctx->r6 = ADD32(ctx->r4, ctx->r5);
    // 0x802D9504: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x802D9508: ori         $at, $at, 0xA800
    ctx->r1 = ctx->r1 | 0XA800;
    // 0x802D950C: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x802D9510: addu        $t0, $t4, $at
    ctx->r8 = ADD32(ctx->r12, ctx->r1);
    // 0x802D9514: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9518: addu        $t2, $t4, $at
    ctx->r10 = ADD32(ctx->r12, ctx->r1);
L_802D951C:
    // 0x802D951C: sh          $t1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r9;
    // 0x802D9520: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D9524: sh          $t1, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r9;
    // 0x802D9528: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D952C: sh          $t1, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r9;
    // 0x802D9530: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D9534: sh          $t1, 0x6($t0)
    MEM_H(0X6, ctx->r8) = ctx->r9;
    // 0x802D9538: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802D953C: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D9540: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x802D9544: bne         $a0, $v0, L_802D951C
    if (ctx->r4 != ctx->r2) {
        // 0x802D9548: addiu       $t2, $t2, 0x0
        ctx->r10 = ADD32(ctx->r10, 0X0);
            goto L_802D951C;
    }
    // 0x802D9548: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
L_802D954C:
    // 0x802D954C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802D9550: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x802D9554: bnel        $at, $zero, L_802D94B8
    if (ctx->r1 != 0) {
        // 0x802D9558: sll         $a1, $v1, 2
        ctx->r5 = S32(ctx->r3 << 2);
            goto L_802D94B8;
    }
    goto skip_0;
    // 0x802D9558: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    skip_0:
    // 0x802D955C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x802D9560: ori         $v1, $v1, 0x1800
    ctx->r3 = ctx->r3 | 0X1800;
    // 0x802D9564: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x802D9568: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802D956C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
L_802D9570:
    // 0x802D9570: ori         $at, $at, 0xA800
    ctx->r1 = ctx->r1 | 0XA800;
    // 0x802D9574: sll         $a2, $a1, 1
    ctx->r6 = S32(ctx->r5 << 1);
    // 0x802D9578: addu        $t0, $a2, $at
    ctx->r8 = ADD32(ctx->r6, ctx->r1);
    // 0x802D957C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9580: addu        $t2, $a2, $at
    ctx->r10 = ADD32(ctx->r6, ctx->r1);
    // 0x802D9584: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_802D9588:
    // 0x802D9588: sh          $t1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r9;
    // 0x802D958C: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D9590: sh          $t1, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r9;
    // 0x802D9594: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D9598: sh          $t1, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r9;
    // 0x802D959C: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D95A0: sh          $t1, 0x6($t0)
    MEM_H(0X6, ctx->r8) = ctx->r9;
    // 0x802D95A4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802D95A8: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D95AC: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x802D95B0: bne         $a0, $v0, L_802D9588
    if (ctx->r4 != ctx->r2) {
        // 0x802D95B4: addiu       $t2, $t2, 0x0
        ctx->r10 = ADD32(ctx->r10, 0X0);
            goto L_802D9588;
    }
    // 0x802D95B4: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802D95B8: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    // 0x802D95BC: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802D95C0: bnel        $at, $zero, L_802D9570
    if (ctx->r1 != 0) {
        // 0x802D95C4: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_802D9570;
    }
    goto skip_1;
    // 0x802D95C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    skip_1:
    // 0x802D95C8: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x802D95CC: ori         $v0, $v0, 0x1800
    ctx->r2 = ctx->r2 | 0X1800;
    // 0x802D95D0: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x802D95D4: sll         $a2, $a1, 1
    ctx->r6 = S32(ctx->r5 << 1);
L_802D95D8:
    // 0x802D95D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x802D95DC: ori         $at, $at, 0xA800
    ctx->r1 = ctx->r1 | 0XA800;
    // 0x802D95E0: addiu       $a2, $a2, 0x260
    ctx->r6 = ADD32(ctx->r6, 0X260);
    // 0x802D95E4: addu        $t0, $a2, $at
    ctx->r8 = ADD32(ctx->r6, ctx->r1);
    // 0x802D95E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D95EC: addu        $t2, $a2, $at
    ctx->r10 = ADD32(ctx->r6, ctx->r1);
    // 0x802D95F0: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
L_802D95F4:
    // 0x802D95F4: sh          $t1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r9;
    // 0x802D95F8: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D95FC: sh          $t1, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r9;
    // 0x802D9600: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D9604: sh          $t1, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r9;
    // 0x802D9608: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D960C: sh          $t1, 0x6($t0)
    MEM_H(0X6, ctx->r8) = ctx->r9;
    // 0x802D9610: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802D9614: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802D9618: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x802D961C: bne         $a0, $t3, L_802D95F4
    if (ctx->r4 != ctx->r11) {
        // 0x802D9620: addiu       $t2, $t2, 0x0
        ctx->r10 = ADD32(ctx->r10, 0X0);
            goto L_802D95F4;
    }
    // 0x802D9620: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802D9624: addiu       $a1, $a1, 0x140
    ctx->r5 = ADD32(ctx->r5, 0X140);
    // 0x802D9628: bnel        $a1, $v0, L_802D95D8
    if (ctx->r5 != ctx->r2) {
        // 0x802D962C: sll         $a2, $a1, 1
        ctx->r6 = S32(ctx->r5 << 1);
            goto L_802D95D8;
    }
    goto skip_2;
    // 0x802D962C: sll         $a2, $a1, 1
    ctx->r6 = S32(ctx->r5 << 1);
    skip_2:
    // 0x802D9630: jr          $ra
    // 0x802D9634: nop

    return;
    // 0x802D9634: nop

;}
RECOMP_FUNC void func_8023F5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F5A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F5A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F5A8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8023F5AC: lw          $a3, 0x14($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X14);
    // 0x8023F5B0: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8023F5B4: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8023F5B8: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8023F5BC: beq         $a3, $zero, L_8023F5F4
    if (ctx->r7 == 0) {
        // 0x8023F5C0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8023F5F4;
    }
    // 0x8023F5C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8023F5C4: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8023F5C8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8023F5CC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8023F5D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023F5D4: jal         0x80237120
    // 0x8023F5D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    static_3_80237120(rdram, ctx);
        goto after_0;
    // 0x8023F5D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8023F5DC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8023F5E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8023F5E4: jal         0x80237150
    // 0x8023F5E8: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    static_3_80237150(rdram, ctx);
        goto after_1;
    // 0x8023F5E8: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_1:
    // 0x8023F5EC: b           L_8023F674
    // 0x8023F5F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_8023F674;
    // 0x8023F5F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8023F5F4:
    // 0x8023F5F4: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x8023F5F8: beq         $a3, $zero, L_8023F62C
    if (ctx->r7 == 0) {
        // 0x8023F5FC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8023F62C;
    }
    // 0x8023F5FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8023F600: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8023F604: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8023F608: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8023F60C: jal         0x80237120
    // 0x8023F610: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_80237120(rdram, ctx);
        goto after_2;
    // 0x8023F610: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8023F614: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8023F618: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8023F61C: jal         0x80237150
    // 0x8023F620: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    static_3_80237150(rdram, ctx);
        goto after_3;
    // 0x8023F620: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_3:
    // 0x8023F624: b           L_8023F674
    // 0x8023F628: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_8023F674;
    // 0x8023F628: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8023F62C:
    // 0x8023F62C: lw          $a3, 0xC($t0)
    ctx->r7 = MEM_W(ctx->r8, 0XC);
    // 0x8023F630: beql        $a3, $zero, L_8023F678
    if (ctx->r7 == 0) {
        // 0x8023F634: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023F678;
    }
    goto skip_0;
    // 0x8023F634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F638: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
L_8023F63C:
    // 0x8023F63C: lh          $t9, 0x16($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X16);
    // 0x8023F640: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023F644: bnel        $at, $zero, L_8023F66C
    if (ctx->r1 != 0) {
        // 0x8023F648: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8023F66C;
    }
    goto skip_1;
    // 0x8023F648: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_1:
    // 0x8023F64C: lw          $t1, 0xD8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XD8);
    // 0x8023F650: bnel        $t1, $zero, L_8023F66C
    if (ctx->r9 != 0) {
        // 0x8023F654: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8023F66C;
    }
    goto skip_2;
    // 0x8023F654: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_2:
    // 0x8023F658: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8023F65C: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x8023F660: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023F664: lh          $a2, 0x16($t2)
    ctx->r6 = MEM_H(ctx->r10, 0X16);
    // 0x8023F668: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_8023F66C:
    // 0x8023F66C: bnel        $a3, $zero, L_8023F63C
    if (ctx->r7 != 0) {
        // 0x8023F670: lw          $t8, 0x8($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X8);
            goto L_8023F63C;
    }
    goto skip_3;
    // 0x8023F670: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    skip_3:
L_8023F674:
    // 0x8023F674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F678:
    // 0x8023F678: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023F67C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8023F680: jr          $ra
    // 0x8023F684: nop

    return;
    // 0x8023F684: nop

;}
RECOMP_FUNC void D_80240264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80240264: lbu         $t7, 0x31($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X31);
    // 0x80240268: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
    // 0x8024026C: lw          $t1, 0x20($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X20);
    // 0x80240270: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80240274: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80240278: lbu         $t0, 0x7($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X7);
    // 0x8024027C: lbu         $t2, 0xC($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XC);
    // 0x80240280: addu        $v1, $t0, $t2
    ctx->r3 = ADD32(ctx->r8, ctx->r10);
    // 0x80240284: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x80240288: bgtzl       $v1, L_80240298
    if (SIGNED(ctx->r3) > 0) {
        // 0x8024028C: slti        $at, $v1, 0x7F
        ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
            goto L_80240298;
    }
    goto skip_0;
    // 0x8024028C: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
    skip_0:
    // 0x80240290: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80240294: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
L_80240298:
    // 0x80240298: bne         $at, $zero, L_802402A4
    if (ctx->r1 != 0) {
        // 0x8024029C: nop
    
            goto L_802402A4;
    }
    // 0x8024029C: nop

    // 0x802402A0: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_802402A4:
    // 0x802402A4: jr          $ra
    // 0x802402A8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x802402A8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void D_802CFC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CFC90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802CFC94: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802CFC98: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802CFC9C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802CFCA0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802CFCA4: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x802CFCA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CFCAC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802CFCB0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802CFCB4: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CFCB8: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x802CFCBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802CFCC0:
    // 0x802CFCC0: jal         0x8022AA60
    // 0x802CFCC4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    static_3_8022AA60(rdram, ctx);
        goto after_0;
    // 0x802CFCC4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x802CFCC8: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x802CFCCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802CFCD0: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x802CFCD4: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802CFCD8: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x802CFCDC: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x802CFCE0: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x802CFCE4: bne         $at, $zero, L_802CFCC0
    if (ctx->r1 != 0) {
        // 0x802CFCE8: add.s       $f20, $f20, $f22
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
            goto L_802CFCC0;
    }
    // 0x802CFCE8: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    // 0x802CFCEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802CFCF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CFCF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802CFCF8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802CFCFC: swc1        $f4, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f4.u32l;
    // 0x802CFD00: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x802CFD04: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x802CFD08: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x802CFD0C: jr          $ra
    // 0x802CFD10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802CFD10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802D1140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D11C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D11C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D11C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D11CC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802D11D0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D11D4: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802D11D8: jal         0x80224CA8
    // 0x802D11DC: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802D11DC: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_0:
    // 0x802D11E0: jal         0x80224CA8
    // 0x802D11E4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802D11E4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_1:
    // 0x802D11E8: jal         0x80224CA8
    // 0x802D11EC: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802D11EC: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_2:
    // 0x802D11F0: jal         0x80224CA8
    // 0x802D11F4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x802D11F4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_3:
    // 0x802D11F8: jal         0x80224CA8
    // 0x802D11FC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802D11FC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_4:
    // 0x802D1200: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x802D1204: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802D1208: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802D120C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802D1210: addiu       $s0, $a3, 0x70
    ctx->r16 = ADD32(ctx->r7, 0X70);
    // 0x802D1214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D1218: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802D121C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802D1220: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802D1224: jal         0x8028D2E8
    // 0x802D1228: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    static_3_8028D2E8(rdram, ctx);
        goto after_5;
    // 0x802D1228: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x802D122C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802D1230: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802D1234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D1238: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D123C: jal         0x8028DDD8
    // 0x802D1240: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    static_3_8028DDD8(rdram, ctx);
        goto after_6;
    // 0x802D1240: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_6:
    // 0x802D1244: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802D1248: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802D124C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D1250: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802D1254: jal         0x8028DDD8
    // 0x802D1258: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    static_3_8028DDD8(rdram, ctx);
        goto after_7;
    // 0x802D1258: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_7:
    // 0x802D125C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802D1260: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802D1264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D1268: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D126C: jal         0x8028DDD8
    // 0x802D1270: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    static_3_8028DDD8(rdram, ctx);
        goto after_8;
    // 0x802D1270: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_8:
    // 0x802D1274: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802D1278: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802D127C: jal         0x8028DB8C
    // 0x802D1280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8028DB8C(rdram, ctx);
        goto after_9;
    // 0x802D1280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802D1284: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802D1288: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802D128C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D1290: jal         0x8028DED0
    // 0x802D1294: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_8028DED0(rdram, ctx);
        goto after_10;
    // 0x802D1294: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_10:
    // 0x802D1298: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802D129C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D12A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D12A4: jr          $ra
    // 0x802D12A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D12A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802D1510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1590: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802D1594: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x802D1598: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D159C: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x802D15A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D15A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D15A8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802D15AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D15B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802D15B4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802D15B8: addiu       $t9, $zero, 0x38
    ctx->r25 = ADD32(0, 0X38);
    // 0x802D15BC: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
    // 0x802D15C0: sh          $zero, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = 0;
    // 0x802D15C4: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x802D15C8: sb          $v1, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r3;
    // 0x802D15CC: sb          $v1, 0x1F($v0)
    MEM_B(0X1F, ctx->r2) = ctx->r3;
    // 0x802D15D0: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x802D15D4: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x802D15D8: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x802D15DC: jr          $ra
    // 0x802D15E0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x802D15E0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802E7618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7698: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E769C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E76A0: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E76A4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E76A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E76AC: bne         $v1, $zero, L_802E76D4
    if (ctx->r3 != 0) {
        // 0x802E76B0: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E76D4;
    }
    // 0x802E76B0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E76B4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E76B8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E76BC: jal         0x80231A24
    // 0x802E76C0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E76C0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E76C4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E76C8: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E76CC: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E76D0: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E76D4:
    // 0x802E76D4: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E76D8: lw          $t9, 0x3C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X3C);
    // 0x802E76DC: lh          $t7, 0x38($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X38);
    // 0x802E76E0: jalr        $t9
    // 0x802E76E4: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E76E4: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x802E76E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E76EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E76F0: jr          $ra
    // 0x802E76F4: nop

    return;
    // 0x802E76F4: nop

;}
RECOMP_FUNC void D_802A619C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A621C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A6220: jr          $ra
    // 0x802A6224: sb          $a1, 0xE4($a0)
    MEM_B(0XE4, ctx->r4) = ctx->r5;
    return;
    // 0x802A6224: sb          $a1, 0xE4($a0)
    MEM_B(0XE4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802C9E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C9EF0: bne         $a0, $zero, L_802C9F08
    if (ctx->r4 != 0) {
        // 0x802C9EF4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802C9F08;
    }
    // 0x802C9EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C9EF8: jal         0x802C67EC
    // 0x802C9EFC: addiu       $a0, $zero, 0xBC
    ctx->r4 = ADD32(0, 0XBC);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802C9EFC: addiu       $a0, $zero, 0xBC
    ctx->r4 = ADD32(0, 0XBC);
    after_0:
    // 0x802C9F00: beq         $v0, $zero, L_802C9F14
    if (ctx->r2 == 0) {
        // 0x802C9F04: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802C9F14;
    }
    // 0x802C9F04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802C9F08:
    // 0x802C9F08: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802C9F0C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802C9F10: sw          $t6, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r14;
L_802C9F14:
    // 0x802C9F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C9F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C9F1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802C9F20: jr          $ra
    // 0x802C9F24: nop

    return;
    // 0x802C9F24: nop

;}
