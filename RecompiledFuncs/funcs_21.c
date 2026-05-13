#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_8023FAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FAC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FAC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023FAC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023FACC: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023FAD0: beql        $t6, $zero, L_8023FB2C
    if (ctx->r14 == 0) {
        // 0x8023FAD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023FB2C;
    }
    goto skip_0;
    // 0x8023FAD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023FAD8: jal         0x80237840
    // 0x8023FADC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80237840(rdram, ctx);
        goto after_0;
    // 0x8023FADC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023FAE0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FAE4: beq         $v0, $zero, L_8023FB28
    if (ctx->r2 == 0) {
        // 0x8023FAE8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023FB28;
    }
    // 0x8023FAE8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023FAEC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023FAF0: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8023FAF4: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x8023FAF8: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8023FAFC: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8023FB00: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8023FB04: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023FB08: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8023FB0C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023FB10: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x8023FB14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023FB18: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8023FB1C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023FB20: jalr        $t9
    // 0x8023FB24: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023FB24: nop

    after_1:
L_8023FB28:
    // 0x8023FB28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023FB2C:
    // 0x8023FB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023FB30: jr          $ra
    // 0x8023FB34: nop

    return;
    // 0x8023FB34: nop

;}
RECOMP_FUNC void D_8028112C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802811A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802811A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802811AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802811B0: addiu       $a0, $zero, 0x2710
    ctx->r4 = ADD32(0, 0X2710);
    // 0x802811B4: jal         0x80305E90
    // 0x802811B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_0;
    // 0x802811B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802811BC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802811C0: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x802811C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802811C8: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    // 0x802811CC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802811D0: addiu       $a0, $v1, 0x8F4
    ctx->r4 = ADD32(ctx->r3, 0X8F4);
    // 0x802811D4: jal         0x80302238
    // 0x802811D8: addiu       $a1, $v1, 0x8E8
    ctx->r5 = ADD32(ctx->r3, 0X8E8);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x802811D8: addiu       $a1, $v1, 0x8E8
    ctx->r5 = ADD32(ctx->r3, 0X8E8);
    after_1:
    // 0x802811DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802811E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802811E4: jr          $ra
    // 0x802811E8: nop

    return;
    // 0x802811E8: nop

;}
RECOMP_FUNC void D_8029B150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029B1D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8029B1D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8029B1D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8029B1DC: addiu       $t6, $zero, 0xCC
    ctx->r14 = ADD32(0, 0XCC);
    // 0x8029B1E0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8029B1E4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8029B1E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029B1EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029B1F0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029B1F4: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    // 0x8029B1F8: jal         0x802CEEB4
    // 0x8029B1FC: addiu       $a3, $zero, 0xB3
    ctx->r7 = ADD32(0, 0XB3);
    static_3_802CEEB4(rdram, ctx);
        goto after_0;
    // 0x8029B1FC: addiu       $a3, $zero, 0xB3
    ctx->r7 = ADD32(0, 0XB3);
    after_0:
    // 0x8029B200: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8029B204: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8029B208: jr          $ra
    // 0x8029B20C: nop

    return;
    // 0x8029B20C: nop

;}
RECOMP_FUNC void D_802CB7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CB874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CB878: bne         $a0, $zero, L_802CB88C
    if (ctx->r4 != 0) {
        // 0x802CB87C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802CB88C;
    }
    // 0x802CB87C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CB880: jal         0x802C67EC
    // 0x802CB884: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802CB884: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    after_0:
    // 0x802CB888: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802CB88C:
    // 0x802CB88C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CB890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CB894: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802CB898: jr          $ra
    // 0x802CB89C: nop

    return;
    // 0x802CB89C: nop

;}
RECOMP_FUNC void D_80242378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024237C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80242380: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80242384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242388: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8024238C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80242390: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80242394: addiu       $a2, $a2, 0x4770
    ctx->r6 = ADD32(ctx->r6, 0X4770);
    // 0x80242398: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8024239C: jal         0x80249920
    // 0x802423A0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    static_3_80249920(rdram, ctx);
        goto after_0;
    // 0x802423A0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x802423A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802423A8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x802423AC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802423B0: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x802423B4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802423B8: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x802423BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802423C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802423C4: jr          $ra
    // 0x802423C8: nop

    return;
    // 0x802423C8: nop

;}
RECOMP_FUNC void D_802B7800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B7884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7888: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B788C: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B7890: beq         $t6, $zero, L_802B78A4
    if (ctx->r14 == 0) {
        // 0x802B7894: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B78A4;
    }
    // 0x802B7894: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B7898: jal         0x80303578
    // 0x802B789C: addiu       $a0, $a0, 0xBB0
    ctx->r4 = ADD32(ctx->r4, 0XBB0);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B789C: addiu       $a0, $a0, 0xBB0
    ctx->r4 = ADD32(ctx->r4, 0XBB0);
    after_0:
    // 0x802B78A0: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B78A4:
    // 0x802B78A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B78A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B78AC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B78B0: jr          $ra
    // 0x802B78B4: nop

    return;
    // 0x802B78B4: nop

;}
RECOMP_FUNC void D_802E6CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6D2C: jr          $ra
    // 0x802E6D30: lbu         $v0, 0x19B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19B);
    return;
    // 0x802E6D30: lbu         $v0, 0x19B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19B);
;}
RECOMP_FUNC void D_80292DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80292E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80292E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80292E50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80292E54: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x80292E58: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80292E5C: bne         $v0, $at, L_80292E74
    if (ctx->r2 != ctx->r1) {
        // 0x80292E60: nop
    
            goto L_80292E74;
    }
    // 0x80292E60: nop

    // 0x80292E64: jal         0x802C4920
    // 0x80292E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802C4920(rdram, ctx);
        goto after_0;
    // 0x80292E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80292E6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80292E70: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
L_80292E74:
    // 0x80292E74: blezl       $v0, L_80292EC8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80292E78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292EC8;
    }
    goto skip_0;
    // 0x80292E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80292E7C: lwc1        $f6, 0xF0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XF0);
    // 0x80292E80: lwc1        $f8, 0x168($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X168);
    // 0x80292E84: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80292E88: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80292E8C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80292E90: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x80292E94: nop

    // 0x80292E98: bc1fl       L_80292EC8
    if (!c1cs) {
        // 0x80292E9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80292EC8;
    }
    goto skip_1;
    // 0x80292E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80292EA0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80292EA4: jal         0x802C3104
    // 0x80292EA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802C3104(rdram, ctx);
        goto after_1;
    // 0x80292EA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80292EAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80292EB0: lw          $t6, 0xEC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XEC);
    // 0x80292EB4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80292EB8: sw          $t7, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->r15;
    // 0x80292EBC: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80292EC0: swc1        $f16, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = ctx->f16.u32l;
    // 0x80292EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80292EC8:
    // 0x80292EC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80292ECC: jr          $ra
    // 0x80292ED0: nop

    return;
    // 0x80292ED0: nop

;}
RECOMP_FUNC void D_8029D090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D110: jr          $ra
    // 0x8029D114: lbu         $v0, 0x84($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X84);
    return;
    // 0x8029D114: lbu         $v0, 0x84($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X84);
;}
RECOMP_FUNC void D_802EC4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC540: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802EC544: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC548: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802EC54C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802EC550: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802EC554: addiu       $t7, $zero, 0x1E9
    ctx->r15 = ADD32(0, 0X1E9);
    // 0x802EC558: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802EC55C: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EC560: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EC564: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EC568: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802EC56C: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802EC570: sh          $zero, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = 0;
    // 0x802EC574: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EC578: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EC57C: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EC580: jr          $ra
    // 0x802EC584: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802EC584: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802EFB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EFBD4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x802EFBD8: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802EFBDC: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x802EFBE0: lwc1        $f8, 0x10($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X10);
    // 0x802EFBE4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802EFBE8: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802EFBEC: lwc1        $f18, 0x20($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X20);
    // 0x802EFBF0: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802EFBF4: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802EFBF8: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x802EFBFC: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x802EFC00: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x802EFC04: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x802EFC08: lwc1        $f18, 0x14($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X14);
    // 0x802EFC0C: lwc1        $f8, 0x24($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X24);
    // 0x802EFC10: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802EFC14: nop

    // 0x802EFC18: mul.s       $f16, $f2, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x802EFC1C: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802EFC20: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x802EFC24: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802EFC28: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    // 0x802EFC2C: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x802EFC30: lwc1        $f8, 0x18($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X18);
    // 0x802EFC34: lwc1        $f18, 0x28($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X28);
    // 0x802EFC38: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802EFC3C: nop

    // 0x802EFC40: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802EFC44: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x802EFC48: mul.s       $f10, $f12, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x802EFC4C: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802EFC50: jr          $ra
    // 0x802EFC54: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802EFC54: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_802470CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802470CC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802470D0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802470D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802470D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802470DC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x802470E0: beq         $t7, $t6, L_80247234
    if (ctx->r15 == ctx->r14) {
        // 0x802470E4: nop
    
            goto L_80247234;
    }
    // 0x802470E4: nop

L_802470E8:
    // 0x802470E8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802470EC: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802470F0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x802470F4: bne         $t9, $t8, L_80247110
    if (ctx->r25 != ctx->r24) {
        // 0x802470F8: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_80247110;
    }
    // 0x802470F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x802470FC: jal         0x8024A740
    // 0x80247100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8024A740(rdram, ctx);
        goto after_0;
    // 0x80247100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80247104: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247108: b           L_80247234
    // 0x8024710C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
        goto L_80247234;
    // 0x8024710C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_80247110:
    // 0x80247110: jal         0x80238B80
    // 0x80247114: nop

    static_3_80238B80(rdram, ctx);
        goto after_1;
    // 0x80247114: nop

    after_1:
    // 0x80247118: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8024711C: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x80247120: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x80247124: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80247128: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8024712C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247130: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80247134: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80247138: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x8024713C: lw          $t6, 0x10($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X10);
    // 0x80247140: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80247144: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x80247148: or          $t9, $t7, $zero
    ctx->r25 = ctx->r15 | 0;
    // 0x8024714C: sltu        $at, $t6, $t4
    ctx->r1 = ctx->r14 < ctx->r12 ? 1 : 0;
    // 0x80247150: lw          $t7, 0x14($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X14);
    // 0x80247154: bne         $at, $zero, L_802471B0
    if (ctx->r1 != 0) {
        // 0x80247158: or          $t5, $t3, $zero
        ctx->r13 = ctx->r11 | 0;
            goto L_802471B0;
    }
    // 0x80247158: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x8024715C: sltu        $at, $t4, $t6
    ctx->r1 = ctx->r12 < ctx->r14 ? 1 : 0;
    // 0x80247160: bne         $at, $zero, L_80247170
    if (ctx->r1 != 0) {
        // 0x80247164: sltu        $at, $t5, $t7
        ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
            goto L_80247170;
    }
    // 0x80247164: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x80247168: beq         $at, $zero, L_802471B0
    if (ctx->r1 == 0) {
        // 0x8024716C: nop
    
            goto L_802471B0;
    }
    // 0x8024716C: nop

L_80247170:
    // 0x80247170: addiu       $t8, $t9, 0x10
    ctx->r24 = ADD32(ctx->r25, 0X10);
    // 0x80247174: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80247178: lw          $t3, 0x14($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X14);
    // 0x8024717C: lw          $t2, 0x10($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X10);
    // 0x80247180: sltu        $at, $t3, $t5
    ctx->r1 = ctx->r11 < ctx->r13 ? 1 : 0;
    // 0x80247184: subu        $t0, $t2, $t4
    ctx->r8 = SUB32(ctx->r10, ctx->r12);
    // 0x80247188: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x8024718C: subu        $t1, $t3, $t5
    ctx->r9 = SUB32(ctx->r11, ctx->r13);
    // 0x80247190: sw          $t1, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r9;
    // 0x80247194: sw          $t0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r8;
    // 0x80247198: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8024719C: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    // 0x802471A0: jal         0x80247294
    // 0x802471A4: lw          $a1, 0x14($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X14);
    static_3_80247294(rdram, ctx);
        goto after_2;
    // 0x802471A4: lw          $a1, 0x14($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X14);
    after_2:
    // 0x802471A8: b           L_80247234
    // 0x802471AC: nop

        goto L_80247234;
    // 0x802471AC: nop

L_802471B0:
    // 0x802471B0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802471B4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x802471B8: lw          $t2, 0x4($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X4);
    // 0x802471BC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x802471C0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x802471C4: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x802471C8: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x802471CC: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x802471D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x802471D4: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x802471D8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x802471DC: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x802471E0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x802471E4: lw          $t6, 0x18($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X18);
    // 0x802471E8: beq         $t6, $zero, L_80247200
    if (ctx->r14 == 0) {
        // 0x802471EC: nop
    
            goto L_80247200;
    }
    // 0x802471EC: nop

    // 0x802471F0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x802471F4: lw          $a1, 0x1C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X1C);
    // 0x802471F8: jal         0x80236B80
    // 0x802471FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_3;
    // 0x802471FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_80247200:
    // 0x80247200: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80247204: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x80247208: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x8024720C: bne         $t8, $zero, L_8024721C
    if (ctx->r24 != 0) {
        // 0x80247210: nop
    
            goto L_8024721C;
    }
    // 0x80247210: nop

    // 0x80247214: beq         $t9, $zero, L_802470E8
    if (ctx->r25 == 0) {
        // 0x80247218: nop
    
            goto L_802470E8;
    }
    // 0x80247218: nop

L_8024721C:
    // 0x8024721C: sw          $t8, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r24;
    // 0x80247220: sw          $t9, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r25;
    // 0x80247224: jal         0x80247308
    // 0x80247228: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_80247308(rdram, ctx);
        goto after_4;
    // 0x80247228: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x8024722C: b           L_802470E8
    // 0x80247230: nop

        goto L_802470E8;
    // 0x80247230: nop

L_80247234:
    // 0x80247234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024723C: jr          $ra
    // 0x80247240: nop

    return;
    // 0x80247240: nop

;}
RECOMP_FUNC void D_802491E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802491E0: jr          $ra
    // 0x802491E4: nop

    return;
    // 0x802491E4: nop

;}
RECOMP_FUNC void D_802D2814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D289C: beq         $a0, $zero, L_802D28C8
    if (ctx->r4 == 0) {
        // 0x802D28A0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802D28C8;
    }
    // 0x802D28A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D28A4: jal         0x80303008
    // 0x802D28A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80303008(rdram, ctx);
        goto after_0;
    // 0x802D28A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D28AC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802D28B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D28B4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802D28B8: beql        $t7, $zero, L_802D28CC
    if (ctx->r15 == 0) {
        // 0x802D28BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D28CC;
    }
    goto skip_0;
    // 0x802D28BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D28C0: jal         0x802C681C
    // 0x802D28C4: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802D28C4: nop

    after_1:
L_802D28C8:
    // 0x802D28C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D28CC:
    // 0x802D28CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D28D0: jr          $ra
    // 0x802D28D4: nop

    return;
    // 0x802D28D4: nop

;}
RECOMP_FUNC void D_8029A09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029A11C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8029A120: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8029A124: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x8029A128: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8029A12C: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x8029A130: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8029A134: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8029A138: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8029A13C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8029A140: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8029A144: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8029A148: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8029A14C: jal         0x802CB994
    // 0x8029A150: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_802CB994(rdram, ctx);
        goto after_0;
    // 0x8029A150: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x8029A154: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8029A158: jal         0x802CB8E0
    // 0x8029A15C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    static_3_802CB8E0(rdram, ctx);
        goto after_1;
    // 0x8029A15C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_1:
    // 0x8029A160: lw          $t6, 0x28($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X28);
    // 0x8029A164: lbu         $t7, 0x1B($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X1B);
    // 0x8029A168: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8029A16C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8029A170: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x8029A174: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x8029A178: bne         $at, $zero, L_8029A184
    if (ctx->r1 != 0) {
        // 0x8029A17C: nop
    
            goto L_8029A184;
    }
    // 0x8029A17C: nop

    // 0x8029A180: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_8029A184:
    // 0x8029A184: jal         0x8021E66C
    // 0x8029A188: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_2;
    // 0x8029A188: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8029A18C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8029A190: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8029A194: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8029A198: jal         0x8021E708
    // 0x8029A19C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_3;
    // 0x8029A19C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x8029A1A0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8029A1A4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8029A1A8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x8029A1AC: jal         0x8021E87C
    // 0x8029A1B0: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    static_3_8021E87C(rdram, ctx);
        goto after_4;
    // 0x8029A1B0: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    after_4:
    // 0x8029A1B4: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x8029A1B8: addiu       $s3, $zero, 0x7B
    ctx->r19 = ADD32(0, 0X7B);
    // 0x8029A1BC: addiu       $s7, $zero, 0x48
    ctx->r23 = ADD32(0, 0X48);
    // 0x8029A1C0: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x8029A1C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8029A1C8: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x8029A1CC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
L_8029A1D0:
    // 0x8029A1D0: bne         $s2, $zero, L_8029A21C
    if (ctx->r18 != 0) {
        // 0x8029A1D4: sll         $t0, $s2, 3
        ctx->r8 = S32(ctx->r18 << 3);
            goto L_8029A21C;
    }
    // 0x8029A1D4: sll         $t0, $s2, 3
    ctx->r8 = S32(ctx->r18 << 3);
    // 0x8029A1D8: addu        $t1, $s5, $t0
    ctx->r9 = ADD32(ctx->r21, ctx->r8);
    // 0x8029A1DC: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x8029A1E0: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x8029A1E4: jal         0x8022FF90
    // 0x8029A1E8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_8022FF90(rdram, ctx);
        goto after_5;
    // 0x8029A1E8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_5:
    // 0x8029A1EC: beq         $v0, $zero, L_8029A20C
    if (ctx->r2 == 0) {
        // 0x8029A1F0: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_8029A20C;
    }
    // 0x8029A1F0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8029A1F4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8029A1F8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x8029A1FC: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x8029A200: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8029A204: jal         0x802CB7B0
    // 0x8029A208: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    static_3_802CB7B0(rdram, ctx);
        goto after_6;
    // 0x8029A208: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_6:
L_8029A20C:
    // 0x8029A20C: jal         0x8021E83C
    // 0x8029A210: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_8021E83C(rdram, ctx);
        goto after_7;
    // 0x8029A210: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_7:
    // 0x8029A214: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x8029A218: addiu       $s3, $s3, 0x5
    ctx->r19 = ADD32(ctx->r19, 0X5);
L_8029A21C:
    // 0x8029A21C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8029A220: bne         $s1, $s4, L_8029A1D0
    if (ctx->r17 != ctx->r20) {
        // 0x8029A224: nop
    
            goto L_8029A1D0;
    }
    // 0x8029A224: nop

    // 0x8029A228: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8029A22C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8029A230: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8029A234: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8029A238: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8029A23C: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8029A240: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8029A244: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x8029A248: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8029A24C: jr          $ra
    // 0x8029A250: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8029A250: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802EDCCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EDD4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EDD50: bne         $a0, $zero, L_802EDD68
    if (ctx->r4 != 0) {
        // 0x802EDD54: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EDD68;
    }
    // 0x802EDD54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EDD58: jal         0x802C67EC
    // 0x802EDD5C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EDD5C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EDD60: beq         $v0, $zero, L_802EDE60
    if (ctx->r2 == 0) {
        // 0x802EDD64: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EDE60;
    }
    // 0x802EDD64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EDD68:
    // 0x802EDD68: jal         0x8031C47C
    // 0x802EDD6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EDD6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EDD70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EDD74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EDD78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EDD7C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802EDD80: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802EDD84: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802EDD88: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802EDD8C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802EDD90: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802EDD94: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x802EDD98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802EDD9C: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x802EDDA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EDDA4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x802EDDA8: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EDDAC: sh          $a1, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r5;
    // 0x802EDDB0: sh          $v1, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r3;
    // 0x802EDDB4: swc1        $f12, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f12.u32l;
    // 0x802EDDB8: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x802EDDBC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EDDC0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EDDC4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802EDDC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EDDCC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x802EDDD0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x802EDDD4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802EDDD8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802EDDDC: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802EDDE0: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802EDDE4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EDDE8: sw          $t6, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r14;
    // 0x802EDDEC: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EDDF0: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EDDF4: sh          $a2, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r6;
    // 0x802EDDF8: sh          $a2, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r6;
    // 0x802EDDFC: sh          $a1, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r5;
    // 0x802EDE00: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EDE04: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EDE08: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EDE0C: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    // 0x802EDE10: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
    // 0x802EDE14: sh          $t0, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r8;
    // 0x802EDE18: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EDE1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EDE20: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x802EDE24: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x802EDE28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802EDE2C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802EDE30: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x802EDE34: nop

    // 0x802EDE38: sh          $t2, 0x78($a0)
    MEM_H(0X78, ctx->r4) = ctx->r10;
    // 0x802EDE3C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EDE40: sh          $t5, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r13;
    // 0x802EDE44: sb          $t6, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r14;
    // 0x802EDE48: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802EDE4C: swc1        $f14, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f14.u32l;
    // 0x802EDE50: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802EDE54: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x802EDE58: nop

    // 0x802EDE5C: sh          $t4, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r12;
L_802EDE60:
    // 0x802EDE60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EDE64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EDE68: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EDE6C: jr          $ra
    // 0x802EDE70: nop

    return;
    // 0x802EDE70: nop

;}
RECOMP_FUNC void D_8028455C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802845DC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802845E0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802845E4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x802845E8: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x802845EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802845F0: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x802845F4: beql        $t7, $zero, L_80284868
    if (ctx->r15 == 0) {
        // 0x802845F8: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_80284868;
    }
    goto skip_0;
    // 0x802845F8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x802845FC: jal         0x8022331C
    // 0x80284600: nop

    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x80284600: nop

    after_0:
    // 0x80284604: jal         0x8022342C
    // 0x80284608: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_1;
    // 0x80284608: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    after_1:
    // 0x8028460C: lw          $t8, 0x78($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X78);
    // 0x80284610: andi        $t9, $t8, 0x2000
    ctx->r25 = ctx->r24 & 0X2000;
    // 0x80284614: beql        $t9, $zero, L_80284668
    if (ctx->r25 == 0) {
        // 0x80284618: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_80284668;
    }
    goto skip_1;
    // 0x80284618: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_1:
    // 0x8028461C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80284620: jal         0x803183C8
    // 0x80284624: lw          $a0, 0x6F00($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6F00);
    static_3_803183C8(rdram, ctx);
        goto after_2;
    // 0x80284624: lw          $a0, 0x6F00($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6F00);
    after_2:
    // 0x80284628: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8028462C: lw          $a0, 0x6F00($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F00);
    // 0x80284630: jal         0x803183C0
    // 0x80284634: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    static_3_803183C0(rdram, ctx);
        goto after_3;
    // 0x80284634: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x80284638: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8028463C: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80284640: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80284644: nop

    // 0x80284648: bc1fl       L_8028465C
    if (!c1cs) {
        // 0x8028464C: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_8028465C;
    }
    goto skip_2;
    // 0x8028464C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_2:
    // 0x80284650: b           L_80284674
    // 0x80284654: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_80284674;
    // 0x80284654: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x80284658: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8028465C:
    // 0x8028465C: b           L_80284674
    // 0x80284660: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_80284674;
    // 0x80284660: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x80284664: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_80284668:
    // 0x80284668: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028466C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80284670: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_80284674:
    // 0x80284674: div.s       $f14, $f12, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80284678: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028467C: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80284680: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80284684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80284688: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x8028468C: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    // 0x80284690: addiu       $t2, $zero, 0x72
    ctx->r10 = ADD32(0, 0X72);
    // 0x80284694: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x80284698: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8028469C: c.le.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl <= ctx->f18.fl;
    // 0x802846A0: nop

    // 0x802846A4: bc1f        L_802846C0
    if (!c1cs) {
        // 0x802846A8: nop
    
            goto L_802846C0;
    }
    // 0x802846A8: nop

    // 0x802846AC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802846B0: nop

    // 0x802846B4: bc1f        L_802846C0
    if (!c1cs) {
        // 0x802846B8: nop
    
            goto L_802846C0;
    }
    // 0x802846B8: nop

    // 0x802846BC: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
L_802846C0:
    // 0x802846C0: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802846C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802846C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802846CC: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x802846D0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802846D4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802846D8: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x802846DC: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x802846E0: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802846E4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x802846E8: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x802846EC: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x802846F0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802846F4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x802846F8: jal         0x802B8788
    // 0x802846FC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    static_3_802B8788(rdram, ctx);
        goto after_4;
    // 0x802846FC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80284700: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x80284704: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x80284708: addiu       $t7, $zero, 0xA5
    ctx->r15 = ADD32(0, 0XA5);
    // 0x8028470C: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x80284710: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80284714: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80284718: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8028471C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80284720: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x80284724: addiu       $a1, $zero, 0xD9
    ctx->r5 = ADD32(0, 0XD9);
    // 0x80284728: addiu       $a2, $zero, 0x89
    ctx->r6 = ADD32(0, 0X89);
    // 0x8028472C: jal         0x802CEEB4
    // 0x80284730: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    static_3_802CEEB4(rdram, ctx);
        goto after_5;
    // 0x80284730: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    after_5:
    // 0x80284734: lw          $t9, 0x78($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X78);
    // 0x80284738: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8028473C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80284740: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x80284744: beql        $t0, $zero, L_80284798
    if (ctx->r8 == 0) {
        // 0x80284748: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_80284798;
    }
    goto skip_3;
    // 0x80284748: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_3:
    // 0x8028474C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80284750: jal         0x803183C8
    // 0x80284754: lw          $a0, 0x6FBC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6FBC);
    static_3_803183C8(rdram, ctx);
        goto after_6;
    // 0x80284754: lw          $a0, 0x6FBC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6FBC);
    after_6:
    // 0x80284758: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8028475C: lw          $a0, 0x6FBC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X6FBC);
    // 0x80284760: jal         0x803183C0
    // 0x80284764: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    static_3_803183C0(rdram, ctx);
        goto after_7;
    // 0x80284764: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x80284768: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8028476C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80284770: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80284774: nop

    // 0x80284778: bc1fl       L_8028478C
    if (!c1cs) {
        // 0x8028477C: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_8028478C;
    }
    goto skip_4;
    // 0x8028477C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_4:
    // 0x80284780: b           L_8028479C
    // 0x80284784: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_8028479C;
    // 0x80284784: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x80284788: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8028478C:
    // 0x8028478C: b           L_8028479C
    // 0x80284790: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_8028479C;
    // 0x80284790: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x80284794: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_80284798:
    // 0x80284798: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_8028479C:
    // 0x8028479C: div.s       $f14, $f12, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    // 0x802847A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802847A4: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802847A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802847AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802847B0: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    // 0x802847B4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    // 0x802847B8: addiu       $t3, $zero, 0x72
    ctx->r11 = ADD32(0, 0X72);
    // 0x802847BC: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x802847C0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802847C4: c.le.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl <= ctx->f18.fl;
    // 0x802847C8: nop

    // 0x802847CC: bc1f        L_802847E8
    if (!c1cs) {
        // 0x802847D0: nop
    
            goto L_802847E8;
    }
    // 0x802847D0: nop

    // 0x802847D4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802847D8: nop

    // 0x802847DC: bc1f        L_802847E8
    if (!c1cs) {
        // 0x802847E0: nop
    
            goto L_802847E8;
    }
    // 0x802847E0: nop

    // 0x802847E4: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
L_802847E8:
    // 0x802847E8: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802847EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802847F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802847F4: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x802847F8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802847FC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80284800: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x80284804: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x80284808: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x8028480C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80284810: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x80284814: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x80284818: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8028481C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80284820: jal         0x802B8788
    // 0x80284824: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    static_3_802B8788(rdram, ctx);
        goto after_8;
    // 0x80284824: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80284828: addiu       $t6, $zero, 0xA5
    ctx->r14 = ADD32(0, 0XA5);
    // 0x8028482C: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x80284830: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x80284834: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x80284838: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8028483C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80284840: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80284844: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80284848: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    // 0x8028484C: addiu       $a1, $zero, 0xD9
    ctx->r5 = ADD32(0, 0XD9);
    // 0x80284850: addiu       $a2, $zero, 0x129
    ctx->r6 = ADD32(0, 0X129);
    // 0x80284854: jal         0x802CEEB4
    // 0x80284858: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    static_3_802CEEB4(rdram, ctx);
        goto after_9;
    // 0x80284858: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    after_9:
    // 0x8028485C: jal         0x8022337C
    // 0x80284860: nop

    static_3_8022337C(rdram, ctx);
        goto after_10;
    // 0x80284860: nop

    after_10:
    // 0x80284864: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_80284868:
    // 0x80284868: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8028486C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80284870: jr          $ra
    // 0x80284874: nop

    return;
    // 0x80284874: nop

;}
RECOMP_FUNC void D_8023D17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D17C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D180: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D184: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D188: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D18C: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D190: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D194: ddiv        $zero, $t6, $t7
    DDIV(S64(ctx->r14), S64(ctx->r15), &lo, &hi);
    // 0x8023D198: nop

    // 0x8023D19C: bne         $t7, $zero, L_8023D1A8
    if (ctx->r15 != 0) {
        // 0x8023D1A0: nop
    
            goto L_8023D1A8;
    }
    // 0x8023D1A0: nop

    // 0x8023D1A4: break       7
    do_break(2149831076);
L_8023D1A8:
    // 0x8023D1A8: daddiu      $at, $zero, -0x1
    ctx->r1 = 0 + -0X1;
    // 0x8023D1AC: bne         $t7, $at, L_8023D1C4
    if (ctx->r15 != ctx->r1) {
        // 0x8023D1B0: daddiu      $at, $zero, 0x1
        ctx->r1 = 0 + 0X1;
            goto L_8023D1C4;
    }
    // 0x8023D1B0: daddiu      $at, $zero, 0x1
    ctx->r1 = 0 + 0X1;
    // 0x8023D1B4: dsll32      $at, $at, 31
    ctx->r1 = ctx->r1 << (31 + 32);
    // 0x8023D1B8: bne         $t6, $at, L_8023D1C4
    if (ctx->r14 != ctx->r1) {
        // 0x8023D1BC: nop
    
            goto L_8023D1C4;
    }
    // 0x8023D1BC: nop

    // 0x8023D1C0: break       6
    do_break(2149831104);
L_8023D1C4:
    // 0x8023D1C4: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D1C8: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D1CC: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D1D0: jr          $ra
    // 0x8023D1D4: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D1D4: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void D_8027AB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027AB94: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8027AB98: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8027AB9C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
L_8027ABA0:
    // 0x8027ABA0: lw          $t6, 0x7050($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X7050);
    // 0x8027ABA4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8027ABA8: bne         $t6, $zero, L_8027ABC4
    if (ctx->r14 != 0) {
        // 0x8027ABAC: nop
    
            goto L_8027ABC4;
    }
    // 0x8027ABAC: nop

    // 0x8027ABB0: sw          $a1, 0x7050($a2)
    MEM_W(0X7050, ctx->r6) = ctx->r5;
    // 0x8027ABB4: lbu         $t7, 0x70F0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X70F0);
    // 0x8027ABB8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8027ABBC: jr          $ra
    // 0x8027ABC0: sb          $t8, 0x70F0($a0)
    MEM_B(0X70F0, ctx->r4) = ctx->r24;
    return;
    // 0x8027ABC0: sb          $t8, 0x70F0($a0)
    MEM_B(0X70F0, ctx->r4) = ctx->r24;
L_8027ABC4:
    // 0x8027ABC4: bne         $v1, $v0, L_8027ABA0
    if (ctx->r3 != ctx->r2) {
        // 0x8027ABC8: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_8027ABA0;
    }
    // 0x8027ABC8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8027ABCC: jr          $ra
    // 0x8027ABD0: nop

    return;
    // 0x8027ABD0: nop

;}
RECOMP_FUNC void D_802DED24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DEDA4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DEDA8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802DEDAC: jr          $ra
    // 0x802DEDB0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802DEDB0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80203D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203D50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80203D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80203D58: lui         $ra, 0x0
    ctx->r31 = S32(0X0 << 16);
    // 0x80203D5C: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80203D60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80203D64: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80203D68: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80203D6C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80203D70: addiu       $t1, $sp, 0x28
    ctx->r9 = ADD32(ctx->r29, 0X28);
    // 0x80203D74: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x80203D78: addiu       $ra, $ra, 0x0
    ctx->r31 = ADD32(ctx->r31, 0X0);
    // 0x80203D7C: addiu       $t5, $zero, 0x54
    ctx->r13 = ADD32(0, 0X54);
    // 0x80203D80: addiu       $t3, $zero, -0x4
    ctx->r11 = ADD32(0, -0X4);
    // 0x80203D84: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x80203D88: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
L_80203D8C:
    // 0x80203D8C: and         $t1, $t6, $t3
    ctx->r9 = ctx->r14 & ctx->r11;
    // 0x80203D90: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80203D94: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80203D98: beq         $v0, $t2, L_80203F64
    if (ctx->r2 == ctx->r10) {
        // 0x80203D9C: slti        $at, $v0, 0x24
        ctx->r1 = SIGNED(ctx->r2) < 0X24 ? 1 : 0;
            goto L_80203F64;
    }
    // 0x80203D9C: slti        $at, $v0, 0x24
    ctx->r1 = SIGNED(ctx->r2) < 0X24 ? 1 : 0;
    // 0x80203DA0: bne         $at, $zero, L_80203DB8
    if (ctx->r1 != 0) {
        // 0x80203DA4: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80203DB8;
    }
    // 0x80203DA4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80203DA8: jal         0x80231A24
    // 0x80203DAC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80203DAC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80203DB0: b           L_80203F68
    // 0x80203DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80203F68;
    // 0x80203DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80203DB8:
    // 0x80203DB8: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80203DBC: beq         $at, $zero, L_80203E94
    if (ctx->r1 == 0) {
        // 0x80203DC0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80203E94;
    }
    // 0x80203DC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80203DC4: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203DC8: mflo        $t7
    ctx->r15 = lo;
    // 0x80203DCC: addu        $a1, $t4, $t7
    ctx->r5 = ADD32(ctx->r12, ctx->r15);
    // 0x80203DD0: lw          $t8, 0x50($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X50);
    // 0x80203DD4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80203DD8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80203DDC: blezl       $t8, L_80203D8C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80203DE0: addiu       $t6, $t1, 0x3
        ctx->r14 = ADD32(ctx->r9, 0X3);
            goto L_80203D8C;
    }
    goto skip_0;
    // 0x80203DE0: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
    skip_0:
    // 0x80203DE4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
L_80203DE8:
    // 0x80203DE8: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80203DEC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80203DF0: bnel        $t9, $t6, L_80203E78
    if (ctx->r25 != ctx->r14) {
        // 0x80203DF4: lw          $t9, 0x50($t0)
        ctx->r25 = MEM_W(ctx->r8, 0X50);
            goto L_80203E78;
    }
    goto skip_1;
    // 0x80203DF4: lw          $t9, 0x50($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X50);
    skip_1:
    // 0x80203DF8: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x80203DFC: bnel        $t7, $t8, L_80203E78
    if (ctx->r15 != ctx->r24) {
        // 0x80203E00: lw          $t9, 0x50($t0)
        ctx->r25 = MEM_W(ctx->r8, 0X50);
            goto L_80203E78;
    }
    goto skip_2;
    // 0x80203E00: lw          $t9, 0x50($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X50);
    skip_2:
    // 0x80203E04: lw          $a0, 0x50($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X50);
    // 0x80203E08: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80203E0C: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x80203E10: addiu       $t9, $a0, -0x1
    ctx->r25 = ADD32(ctx->r4, -0X1);
    // 0x80203E14: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80203E18: beq         $at, $zero, L_80203E4C
    if (ctx->r1 == 0) {
        // 0x80203E1C: addu        $v0, $a1, $t6
        ctx->r2 = ADD32(ctx->r5, ctx->r14);
            goto L_80203E4C;
    }
    // 0x80203E1C: addu        $v0, $a1, $t6
    ctx->r2 = ADD32(ctx->r5, ctx->r14);
    // 0x80203E20: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
L_80203E24:
    // 0x80203E24: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x80203E28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80203E2C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80203E30: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80203E34: lw          $a0, 0x50($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X50);
    // 0x80203E38: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80203E3C: addiu       $t9, $a0, -0x1
    ctx->r25 = ADD32(ctx->r4, -0X1);
    // 0x80203E40: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80203E44: bnel        $at, $zero, L_80203E24
    if (ctx->r1 != 0) {
        // 0x80203E48: lw          $t7, 0x8($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X8);
            goto L_80203E24;
    }
    goto skip_3;
    // 0x80203E48: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    skip_3:
L_80203E4C:
    // 0x80203E4C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80203E50: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80203E54: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80203E58: lw          $t8, 0x50($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X50);
    // 0x80203E5C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80203E60: addu        $t6, $a1, $t9
    ctx->r14 = ADD32(ctx->r5, ctx->r25);
    // 0x80203E64: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80203E68: lw          $t7, 0x50($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X50);
    // 0x80203E6C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80203E70: sw          $t8, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->r24;
    // 0x80203E74: lw          $t9, 0x50($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X50);
L_80203E78:
    // 0x80203E78: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80203E7C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80203E80: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80203E84: bnel        $at, $zero, L_80203DE8
    if (ctx->r1 != 0) {
        // 0x80203E88: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_80203DE8;
    }
    goto skip_4;
    // 0x80203E88: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_4:
    // 0x80203E8C: b           L_80203D8C
    // 0x80203E90: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
        goto L_80203D8C;
    // 0x80203E90: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
L_80203E94:
    // 0x80203E94: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203E98: mflo        $t6
    ctx->r14 = lo;
    // 0x80203E9C: addu        $a1, $ra, $t6
    ctx->r5 = ADD32(ctx->r31, ctx->r14);
    // 0x80203EA0: lw          $t7, 0x20($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X20);
    // 0x80203EA4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80203EA8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80203EAC: blezl       $t7, L_80203D8C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80203EB0: addiu       $t6, $t1, 0x3
        ctx->r14 = ADD32(ctx->r9, 0X3);
            goto L_80203D8C;
    }
    goto skip_5;
    // 0x80203EB0: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
    skip_5:
    // 0x80203EB4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_80203EB8:
    // 0x80203EB8: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80203EBC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80203EC0: bnel        $t8, $t9, L_80203F48
    if (ctx->r24 != ctx->r25) {
        // 0x80203EC4: lw          $t8, 0x20($t0)
        ctx->r24 = MEM_W(ctx->r8, 0X20);
            goto L_80203F48;
    }
    goto skip_6;
    // 0x80203EC4: lw          $t8, 0x20($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X20);
    skip_6:
    // 0x80203EC8: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x80203ECC: bnel        $t6, $t7, L_80203F48
    if (ctx->r14 != ctx->r15) {
        // 0x80203ED0: lw          $t8, 0x20($t0)
        ctx->r24 = MEM_W(ctx->r8, 0X20);
            goto L_80203F48;
    }
    goto skip_7;
    // 0x80203ED0: lw          $t8, 0x20($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X20);
    skip_7:
    // 0x80203ED4: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    // 0x80203ED8: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80203EDC: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x80203EE0: addiu       $t8, $a0, -0x1
    ctx->r24 = ADD32(ctx->r4, -0X1);
    // 0x80203EE4: slt         $at, $a2, $t8
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80203EE8: beq         $at, $zero, L_80203F1C
    if (ctx->r1 == 0) {
        // 0x80203EEC: addu        $v0, $a1, $t9
        ctx->r2 = ADD32(ctx->r5, ctx->r25);
            goto L_80203F1C;
    }
    // 0x80203EEC: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x80203EF0: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
L_80203EF4:
    // 0x80203EF4: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x80203EF8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80203EFC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80203F00: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80203F04: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    // 0x80203F08: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80203F0C: addiu       $t8, $a0, -0x1
    ctx->r24 = ADD32(ctx->r4, -0X1);
    // 0x80203F10: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80203F14: bnel        $at, $zero, L_80203EF4
    if (ctx->r1 != 0) {
        // 0x80203F18: lw          $t6, 0x8($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X8);
            goto L_80203EF4;
    }
    goto skip_8;
    // 0x80203F18: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    skip_8:
L_80203F1C:
    // 0x80203F1C: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x80203F20: addu        $t6, $a1, $t9
    ctx->r14 = ADD32(ctx->r5, ctx->r25);
    // 0x80203F24: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x80203F28: lw          $t7, 0x20($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X20);
    // 0x80203F2C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80203F30: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x80203F34: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80203F38: lw          $t6, 0x20($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X20);
    // 0x80203F3C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80203F40: sw          $t7, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r15;
    // 0x80203F44: lw          $t8, 0x20($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X20);
L_80203F48:
    // 0x80203F48: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80203F4C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80203F50: slt         $at, $a2, $t8
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80203F54: bnel        $at, $zero, L_80203EB8
    if (ctx->r1 != 0) {
        // 0x80203F58: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_80203EB8;
    }
    goto skip_9;
    // 0x80203F58: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_9:
    // 0x80203F5C: b           L_80203D8C
    // 0x80203F60: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
        goto L_80203D8C;
    // 0x80203F60: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
L_80203F64:
    // 0x80203F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80203F68:
    // 0x80203F68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80203F6C: jr          $ra
    // 0x80203F70: nop

    return;
    // 0x80203F70: nop

;}
RECOMP_FUNC void D_802A497C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A49FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A4A00: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x802A4A04: beq         $t7, $zero, L_802A4A10
    if (ctx->r15 == 0) {
        // 0x802A4A08: sb          $a1, 0x198($a0)
        MEM_B(0X198, ctx->r4) = ctx->r5;
            goto L_802A4A10;
    }
    // 0x802A4A08: sb          $a1, 0x198($a0)
    MEM_B(0X198, ctx->r4) = ctx->r5;
    // 0x802A4A0C: sb          $zero, 0x195($a0)
    MEM_B(0X195, ctx->r4) = 0;
L_802A4A10:
    // 0x802A4A10: jr          $ra
    // 0x802A4A14: nop

    return;
    // 0x802A4A14: nop

;}
RECOMP_FUNC void D_802E9C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9CFC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802E9D00: beq         $t6, $zero, L_802E9D20
    if (ctx->r14 == 0) {
        // 0x802E9D04: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_802E9D20;
    }
    // 0x802E9D04: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E9D08: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E9D0C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E9D10: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x802E9D14: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x802E9D18: b           L_802E9D38
    // 0x802E9D1C: swc1        $f6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f6.u32l;
        goto L_802E9D38;
    // 0x802E9D1C: swc1        $f6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f6.u32l;
L_802E9D20:
    // 0x802E9D20: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E9D24: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E9D28: lwc1        $f10, 0x60($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X60);
    // 0x802E9D2C: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802E9D30: swc1        $f18, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f18.u32l;
    // 0x802E9D34: lwc1        $f0, 0x5C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X5C);
L_802E9D38:
    // 0x802E9D38: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802E9D3C: sll         $v0, $zero, 16
    ctx->r2 = S32(0 << 16);
    // 0x802E9D40: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802E9D44: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802E9D48: addiu       $t7, $zero, -0x2
    ctx->r15 = ADD32(0, -0X2);
    // 0x802E9D4C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x802E9D50: bc1fl       L_802E9D64
    if (!c1cs) {
        // 0x802E9D54: lwc1        $f2, 0x64($a0)
        ctx->f2.u32l = MEM_W(ctx->r4, 0X64);
            goto L_802E9D64;
    }
    goto skip_0;
    // 0x802E9D54: lwc1        $f2, 0x64($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X64);
    skip_0:
    // 0x802E9D58: jr          $ra
    // 0x802E9D5C: sh          $t7, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r15;
    return;
    // 0x802E9D5C: sh          $t7, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r15;
    // 0x802E9D60: lwc1        $f2, 0x64($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X64);
L_802E9D64:
    // 0x802E9D64: sll         $v0, $zero, 16
    ctx->r2 = S32(0 << 16);
    // 0x802E9D68: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802E9D6C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802E9D70: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802E9D74: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x802E9D78: bc1fl       L_802E9D8C
    if (!c1cs) {
        // 0x802E9D7C: lh          $v0, 0x68($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X68);
            goto L_802E9D8C;
    }
    goto skip_1;
    // 0x802E9D7C: lh          $v0, 0x68($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X68);
    skip_1:
    // 0x802E9D80: jr          $ra
    // 0x802E9D84: sh          $t8, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r24;
    return;
    // 0x802E9D84: sh          $t8, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r24;
    // 0x802E9D88: lh          $v0, 0x68($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X68);
L_802E9D8C:
    // 0x802E9D8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802E9D90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E9D94: bne         $a1, $v0, L_802E9E10
    if (ctx->r5 != ctx->r2) {
        // 0x802E9D98: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_802E9E10;
    }
    // 0x802E9D98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802E9D9C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802E9DA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802E9DA4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802E9DA8: add.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x802E9DAC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x802E9DB0: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802E9DB4: sub.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x802E9DB8: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x802E9DBC: nop

    // 0x802E9DC0: bc1fl       L_802E9E08
    if (!c1cs) {
        // 0x802E9DC4: sh          $t2, 0x72($a0)
        MEM_H(0X72, ctx->r4) = ctx->r10;
            goto L_802E9E08;
    }
    goto skip_2;
    // 0x802E9DC4: sh          $t2, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r10;
    skip_2:
    // 0x802E9DC8: lbu         $t9, 0x74($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X74);
    // 0x802E9DCC: lui         $at, 0x437E
    ctx->r1 = S32(0X437E << 16);
    // 0x802E9DD0: beql        $t9, $zero, L_802E9E08
    if (ctx->r25 == 0) {
        // 0x802E9DD4: sh          $t2, 0x72($a0)
        MEM_H(0X72, ctx->r4) = ctx->r10;
            goto L_802E9E08;
    }
    goto skip_3;
    // 0x802E9DD4: sh          $t2, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r10;
    skip_3:
    // 0x802E9DD8: sub.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x802E9DDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802E9DE0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802E9DE4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802E9DE8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802E9DEC: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802E9DF0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x802E9DF4: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802E9DF8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x802E9DFC: jr          $ra
    // 0x802E9E00: sh          $t1, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r9;
    return;
    // 0x802E9E00: sh          $t1, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r9;
    // 0x802E9E04: sh          $t2, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r10;
L_802E9E08:
    // 0x802E9E08: jr          $ra
    // 0x802E9E0C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x802E9E0C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_802E9E10:
    // 0x802E9E10: bne         $a2, $v0, L_802E9E30
    if (ctx->r6 != ctx->r2) {
        // 0x802E9E14: sll         $v1, $a2, 16
        ctx->r3 = S32(ctx->r6 << 16);
            goto L_802E9E30;
    }
    // 0x802E9E14: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x802E9E18: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802E9E1C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802E9E20: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802E9E24: sh          $a1, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r5;
    // 0x802E9E28: jr          $ra
    // 0x802E9E2C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x802E9E2C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_802E9E30:
    // 0x802E9E30: sra         $t3, $v1, 16
    ctx->r11 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802E9E34: sh          $a2, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r6;
    // 0x802E9E38: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x802E9E3C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802E9E40: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802E9E44: jr          $ra
    // 0x802E9E48: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x802E9E48: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void D_802B71F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7274: jr          $ra
    // 0x802B7278: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
    return;
    // 0x802B7278: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
;}
RECOMP_FUNC void D_80288488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288508: addiu       $sp, $sp, -0x180
    ctx->r29 = ADD32(ctx->r29, -0X180);
    // 0x8028850C: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x80288510: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80288514: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80288518: sw          $s7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r23;
    // 0x8028851C: sw          $s6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r22;
    // 0x80288520: sw          $s5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r21;
    // 0x80288524: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x80288528: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x8028852C: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x80288530: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x80288534: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x80288538: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x8028853C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x80288540: sw          $a1, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r5;
    // 0x80288544: jal         0x803187FC
    // 0x80288548: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    static_3_803187FC(rdram, ctx);
        goto after_0;
    // 0x80288548: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_0:
    // 0x8028854C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80288550: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80288554: jal         0x802AED90
    // 0x80288558: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AED90(rdram, ctx);
        goto after_1;
    // 0x80288558: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_1:
    // 0x8028855C: lw          $t6, 0x78($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X78);
    // 0x80288560: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80288564: sll         $t7, $t6, 15
    ctx->r15 = S32(ctx->r14 << 15);
    // 0x80288568: bgezl       $t7, L_802899F0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8028856C: lw          $ra, 0x6C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X6C);
            goto L_802899F0;
    }
    goto skip_0;
    // 0x8028856C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    skip_0:
    // 0x80288570: jal         0x8022331C
    // 0x80288574: nop

    static_3_8022331C(rdram, ctx);
        goto after_2;
    // 0x80288574: nop

    after_2:
    // 0x80288578: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8028857C: addiu       $s1, $sp, 0x118
    ctx->r17 = ADD32(ctx->r29, 0X118);
    // 0x80288580: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80288584: lw          $a2, 0x1A0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1A0);
    // 0x80288588: lw          $t9, 0x64($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X64);
    // 0x8028858C: lh          $t8, 0x60($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X60);
    // 0x80288590: jalr        $t9
    // 0x80288594: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80288594: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_3:
    // 0x80288598: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8028859C: addiu       $t0, $sp, 0xE8
    ctx->r8 = ADD32(ctx->r29, 0XE8);
    // 0x802885A0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802885A4: lw          $t1, 0x244($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X244);
    // 0x802885A8: addiu       $s4, $sp, 0xF8
    ctx->r20 = ADD32(ctx->r29, 0XF8);
    // 0x802885AC: addiu       $s5, $sp, 0x108
    ctx->r21 = ADD32(ctx->r29, 0X108);
    // 0x802885B0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802885B4: lwc1        $f4, 0x23C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X23C);
    // 0x802885B8: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x802885BC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x802885C0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802885C4: lwc1        $f6, 0x240($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X240);
    // 0x802885C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802885CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802885D0: jal         0x802ADA50
    // 0x802885D4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    static_3_802ADA50(rdram, ctx);
        goto after_4;
    // 0x802885D4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x802885D8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x802885DC: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x802885E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802885E4: lbu         $t2, 0x6EFC($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X6EFC);
    // 0x802885E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802885EC: blezl       $t2, L_802886EC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x802885F0: lbu         $t7, 0x6FB8($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X6FB8);
            goto L_802886EC;
    }
    goto skip_1;
    // 0x802885F0: lbu         $t7, 0x6FB8($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X6FB8);
    skip_1:
    // 0x802885F4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802885F8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802885FC: addu        $t3, $v1, $s0
    ctx->r11 = ADD32(ctx->r3, ctx->r16);
L_80288600:
    // 0x80288600: lw          $a0, 0x6EEC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X6EEC);
    // 0x80288604: beql        $a0, $zero, L_802886CC
    if (ctx->r4 == 0) {
        // 0x80288608: lw          $v1, 0x0($s2)
        ctx->r3 = MEM_W(ctx->r18, 0X0);
            goto L_802886CC;
    }
    goto skip_2;
    // 0x80288608: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x8028860C: jal         0x80317E10
    // 0x80288610: nop

    static_3_80317E10(rdram, ctx);
        goto after_5;
    // 0x80288610: nop

    after_5:
    // 0x80288614: beql        $v0, $zero, L_802886CC
    if (ctx->r2 == 0) {
        // 0x80288618: lw          $v1, 0x0($s2)
        ctx->r3 = MEM_W(ctx->r18, 0X0);
            goto L_802886CC;
    }
    goto skip_3;
    // 0x80288618: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    skip_3:
    // 0x8028861C: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80288620: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x80288624: lw          $a0, 0x6EEC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X6EEC);
    // 0x80288628: jal         0x803183C0
    // 0x8028862C: sw          $a0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r4;
    static_3_803183C0(rdram, ctx);
        goto after_6;
    // 0x8028862C: sw          $a0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r4;
    after_6:
    // 0x80288630: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80288634: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80288638: lw          $a2, 0xD4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD4);
    // 0x8028863C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288640: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80288644: lw          $a1, 0x184($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X184);
    // 0x80288648: addiu       $a3, $sp, 0x170
    ctx->r7 = ADD32(ctx->r29, 0X170);
    // 0x8028864C: addiu       $t6, $sp, 0x16C
    ctx->r14 = ADD32(ctx->r29, 0X16C);
    // 0x80288650: bc1f        L_802886C8
    if (!c1cs) {
        // 0x80288654: addiu       $t7, $sp, 0x168
        ctx->r15 = ADD32(ctx->r29, 0X168);
            goto L_802886C8;
    }
    // 0x80288654: addiu       $t7, $sp, 0x168
    ctx->r15 = ADD32(ctx->r29, 0X168);
    // 0x80288658: addiu       $t8, $sp, 0x164
    ctx->r24 = ADD32(ctx->r29, 0X164);
    // 0x8028865C: addiu       $t9, $sp, 0x160
    ctx->r25 = ADD32(ctx->r29, 0X160);
    // 0x80288660: addiu       $t0, $sp, 0x15C
    ctx->r8 = ADD32(ctx->r29, 0X15C);
    // 0x80288664: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80288668: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8028866C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80288670: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80288674: jal         0x802BA134
    // 0x80288678: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    static_3_802BA134(rdram, ctx);
        goto after_7;
    // 0x80288678: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_7:
    // 0x8028867C: beq         $v0, $zero, L_802886C8
    if (ctx->r2 == 0) {
        // 0x80288680: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802886C8;
    }
    // 0x80288680: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288684: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    // 0x80288688: lw          $t2, 0x160($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X160);
    // 0x8028868C: lw          $t3, 0x15C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X15C);
    // 0x80288690: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80288694: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x80288698: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x8028869C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x802886A0: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x802886A4: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x802886A8: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x802886AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802886B0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802886B4: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x802886B8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802886BC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x802886C0: jal         0x802BA924
    // 0x802886C4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    static_3_802BA924(rdram, ctx);
        goto after_8;
    // 0x802886C4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_8:
L_802886C8:
    // 0x802886C8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
L_802886CC:
    // 0x802886CC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802886D0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802886D4: lbu         $t6, 0x6EFC($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X6EFC);
    // 0x802886D8: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802886DC: bnel        $at, $zero, L_80288600
    if (ctx->r1 != 0) {
        // 0x802886E0: addu        $t3, $v1, $s0
        ctx->r11 = ADD32(ctx->r3, ctx->r16);
            goto L_80288600;
    }
    goto skip_4;
    // 0x802886E0: addu        $t3, $v1, $s0
    ctx->r11 = ADD32(ctx->r3, ctx->r16);
    skip_4:
    // 0x802886E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802886E8: lbu         $t7, 0x6FB8($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X6FB8);
L_802886EC:
    // 0x802886EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802886F0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802886F4: blez        $t7, L_80288B08
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802886F8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80288B08;
    }
    // 0x802886F8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802886FC: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80288700: addiu       $s7, $zero, 0x72
    ctx->r23 = ADD32(0, 0X72);
    // 0x80288704: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80288708: addu        $t8, $v1, $s0
    ctx->r24 = ADD32(ctx->r3, ctx->r16);
L_8028870C:
    // 0x8028870C: lw          $a0, 0x6F94($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X6F94);
    // 0x80288710: beql        $a0, $zero, L_80288AF0
    if (ctx->r4 == 0) {
        // 0x80288714: lw          $v1, 0x0($s2)
        ctx->r3 = MEM_W(ctx->r18, 0X0);
            goto L_80288AF0;
    }
    goto skip_5;
    // 0x80288714: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    skip_5:
    // 0x80288718: jal         0x80317E10
    // 0x8028871C: nop

    static_3_80317E10(rdram, ctx);
        goto after_9;
    // 0x8028871C: nop

    after_9:
    // 0x80288720: beql        $v0, $zero, L_80288AF0
    if (ctx->r2 == 0) {
        // 0x80288724: lw          $v1, 0x0($s2)
        ctx->r3 = MEM_W(ctx->r18, 0X0);
            goto L_80288AF0;
    }
    goto skip_6;
    // 0x80288724: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    skip_6:
    // 0x80288728: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8028872C: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x80288730: lw          $a0, 0x6F94($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6F94);
    // 0x80288734: jal         0x803183C0
    // 0x80288738: sw          $a0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r4;
    static_3_803183C0(rdram, ctx);
        goto after_10;
    // 0x80288738: sw          $a0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r4;
    after_10:
    // 0x8028873C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80288740: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80288744: lw          $a2, 0xD4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD4);
    // 0x80288748: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8028874C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80288750: lw          $a1, 0x184($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X184);
    // 0x80288754: addiu       $a3, $sp, 0x170
    ctx->r7 = ADD32(ctx->r29, 0X170);
    // 0x80288758: addiu       $t1, $sp, 0x16C
    ctx->r9 = ADD32(ctx->r29, 0X16C);
    // 0x8028875C: bc1f        L_80288AEC
    if (!c1cs) {
        // 0x80288760: addiu       $t2, $sp, 0x168
        ctx->r10 = ADD32(ctx->r29, 0X168);
            goto L_80288AEC;
    }
    // 0x80288760: addiu       $t2, $sp, 0x168
    ctx->r10 = ADD32(ctx->r29, 0X168);
    // 0x80288764: addiu       $t3, $sp, 0x164
    ctx->r11 = ADD32(ctx->r29, 0X164);
    // 0x80288768: addiu       $t4, $sp, 0x160
    ctx->r12 = ADD32(ctx->r29, 0X160);
    // 0x8028876C: addiu       $t5, $sp, 0x15C
    ctx->r13 = ADD32(ctx->r29, 0X15C);
    // 0x80288770: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80288774: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80288778: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8028877C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80288780: jal         0x802BA134
    // 0x80288784: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    static_3_802BA134(rdram, ctx);
        goto after_11;
    // 0x80288784: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_11:
    // 0x80288788: beq         $v0, $zero, L_80288AEC
    if (ctx->r2 == 0) {
        // 0x8028878C: addiu       $t6, $zero, 0x71
        ctx->r14 = ADD32(0, 0X71);
            goto L_80288AEC;
    }
    // 0x8028878C: addiu       $t6, $zero, 0x71
    ctx->r14 = ADD32(0, 0X71);
    // 0x80288790: sw          $t6, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r14;
    // 0x80288794: blez        $s6, L_802888C4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80288798: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802888C4;
    }
    // 0x80288798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028879C: andi        $a2, $s6, 0x3
    ctx->r6 = ctx->r22 & 0X3;
    // 0x802887A0: beq         $a2, $zero, L_802887F4
    if (ctx->r6 == 0) {
        // 0x802887A4: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_802887F4;
    }
    // 0x802887A4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x802887A8: sll         $v1, $zero, 2
    ctx->r3 = S32(0 << 2);
    // 0x802887AC: addiu       $t7, $sp, 0xE8
    ctx->r15 = ADD32(ctx->r29, 0XE8);
    // 0x802887B0: addu        $v0, $v1, $t7
    ctx->r2 = ADD32(ctx->r3, ctx->r15);
L_802887B4:
    // 0x802887B4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x802887B8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802887BC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802887C0: bne         $s3, $t8, L_802887E8
    if (ctx->r19 != ctx->r24) {
        // 0x802887C4: nop
    
            goto L_802887E8;
    }
    // 0x802887C4: nop

    // 0x802887C8: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x802887CC: addu        $t1, $s4, $v1
    ctx->r9 = ADD32(ctx->r20, ctx->r3);
    // 0x802887D0: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x802887D4: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x802887D8: lw          $a2, 0x6F94($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X6F94);
    // 0x802887DC: bne         $a2, $t2, L_802887E8
    if (ctx->r6 != ctx->r10) {
        // 0x802887E0: nop
    
            goto L_802887E8;
    }
    // 0x802887E0: nop

    // 0x802887E4: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_802887E8:
    // 0x802887E8: bne         $a1, $a0, L_802887B4
    if (ctx->r5 != ctx->r4) {
        // 0x802887EC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_802887B4;
    }
    // 0x802887EC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802887F0: beq         $a0, $s6, L_802888C4
    if (ctx->r4 == ctx->r22) {
        // 0x802887F4: addiu       $t3, $sp, 0xE8
        ctx->r11 = ADD32(ctx->r29, 0XE8);
            goto L_802888C4;
    }
L_802887F4:
    // 0x802887F4: addiu       $t3, $sp, 0xE8
    ctx->r11 = ADD32(ctx->r29, 0XE8);
    // 0x802887F8: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x802887FC: sll         $t4, $s6, 2
    ctx->r12 = S32(ctx->r22 << 2);
    // 0x80288800: addu        $a1, $t4, $t3
    ctx->r5 = ADD32(ctx->r12, ctx->r11);
    // 0x80288804: addu        $v0, $v1, $t3
    ctx->r2 = ADD32(ctx->r3, ctx->r11);
L_80288808:
    // 0x80288808: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8028880C: bnel        $s3, $t5, L_80288838
    if (ctx->r19 != ctx->r13) {
        // 0x80288810: lw          $t0, 0x4($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X4);
            goto L_80288838;
    }
    goto skip_7;
    // 0x80288810: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    skip_7:
    // 0x80288814: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80288818: addu        $t8, $s4, $v1
    ctx->r24 = ADD32(ctx->r20, ctx->r3);
    // 0x8028881C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80288820: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80288824: lw          $a2, 0x6F94($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X6F94);
    // 0x80288828: bnel        $a2, $t9, L_80288838
    if (ctx->r6 != ctx->r25) {
        // 0x8028882C: lw          $t0, 0x4($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X4);
            goto L_80288838;
    }
    goto skip_8;
    // 0x8028882C: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    skip_8:
    // 0x80288830: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x80288834: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
L_80288838:
    // 0x80288838: bnel        $s3, $t0, L_80288864
    if (ctx->r19 != ctx->r8) {
        // 0x8028883C: lw          $t5, 0x8($v0)
        ctx->r13 = MEM_W(ctx->r2, 0X8);
            goto L_80288864;
    }
    goto skip_9;
    // 0x8028883C: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    skip_9:
    // 0x80288840: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x80288844: addu        $t4, $s4, $v1
    ctx->r12 = ADD32(ctx->r20, ctx->r3);
    // 0x80288848: lw          $t3, 0x4($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X4);
    // 0x8028884C: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80288850: lw          $a2, 0x6F94($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X6F94);
    // 0x80288854: bnel        $a2, $t3, L_80288864
    if (ctx->r6 != ctx->r11) {
        // 0x80288858: lw          $t5, 0x8($v0)
        ctx->r13 = MEM_W(ctx->r2, 0X8);
            goto L_80288864;
    }
    goto skip_10;
    // 0x80288858: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    skip_10:
    // 0x8028885C: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x80288860: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
L_80288864:
    // 0x80288864: bnel        $s3, $t5, L_80288890
    if (ctx->r19 != ctx->r13) {
        // 0x80288868: lw          $t0, 0xC($v0)
        ctx->r8 = MEM_W(ctx->r2, 0XC);
            goto L_80288890;
    }
    goto skip_11;
    // 0x80288868: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    skip_11:
    // 0x8028886C: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80288870: addu        $t8, $s4, $v1
    ctx->r24 = ADD32(ctx->r20, ctx->r3);
    // 0x80288874: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80288878: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8028887C: lw          $a2, 0x6F94($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X6F94);
    // 0x80288880: bnel        $a2, $t9, L_80288890
    if (ctx->r6 != ctx->r25) {
        // 0x80288884: lw          $t0, 0xC($v0)
        ctx->r8 = MEM_W(ctx->r2, 0XC);
            goto L_80288890;
    }
    goto skip_12;
    // 0x80288884: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    skip_12:
    // 0x80288888: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x8028888C: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
L_80288890:
    // 0x80288890: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80288894: bne         $s3, $t0, L_802888BC
    if (ctx->r19 != ctx->r8) {
        // 0x80288898: nop
    
            goto L_802888BC;
    }
    // 0x80288898: nop

    // 0x8028889C: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x802888A0: addu        $t4, $s4, $v1
    ctx->r12 = ADD32(ctx->r20, ctx->r3);
    // 0x802888A4: lw          $t3, 0xC($t4)
    ctx->r11 = MEM_W(ctx->r12, 0XC);
    // 0x802888A8: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x802888AC: lw          $a2, 0x6F94($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X6F94);
    // 0x802888B0: bne         $a2, $t3, L_802888BC
    if (ctx->r6 != ctx->r11) {
        // 0x802888B4: nop
    
            goto L_802888BC;
    }
    // 0x802888B4: nop

    // 0x802888B8: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_802888BC:
    // 0x802888BC: bne         $v0, $a1, L_80288808
    if (ctx->r2 != ctx->r5) {
        // 0x802888C0: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80288808;
    }
    // 0x802888C0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_802888C4:
    // 0x802888C4: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x802888C8: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x802888CC: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x802888D0: bne         $t7, $s7, L_8028890C
    if (ctx->r15 != ctx->r23) {
        // 0x802888D4: lw          $a0, 0x6F94($t6)
        ctx->r4 = MEM_W(ctx->r14, 0X6F94);
            goto L_8028890C;
    }
    // 0x802888D4: lw          $a0, 0x6F94($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X6F94);
    // 0x802888D8: jal         0x8031A3A8
    // 0x802888DC: nop

    static_3_8031A3A8(rdram, ctx);
        goto after_12;
    // 0x802888DC: nop

    after_12:
    // 0x802888E0: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x802888E4: nop

    // 0x802888E8: bc1fl       L_8028891C
    if (!c1cs) {
        // 0x802888EC: lw          $t0, 0x0($s2)
        ctx->r8 = MEM_W(ctx->r18, 0X0);
            goto L_8028891C;
    }
    goto skip_13;
    // 0x802888EC: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    skip_13:
    // 0x802888F0: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x802888F4: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802888F8: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802888FC: jal         0x8031A3B0
    // 0x80288900: lw          $a0, 0x6F94($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6F94);
    static_3_8031A3B0(rdram, ctx);
        goto after_13;
    // 0x80288900: lw          $a0, 0x6F94($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6F94);
    after_13:
    // 0x80288904: b           L_8028891C
    // 0x80288908: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
        goto L_8028891C;
    // 0x80288908: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
L_8028890C:
    // 0x8028890C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80288910: jal         0x8031A3B0
    // 0x80288914: nop

    static_3_8031A3B0(rdram, ctx);
        goto after_14;
    // 0x80288914: nop

    after_14:
    // 0x80288918: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
L_8028891C:
    // 0x8028891C: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x80288920: jal         0x8031A3A8
    // 0x80288924: lw          $a0, 0x6F94($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F94);
    static_3_8031A3A8(rdram, ctx);
        goto after_15;
    // 0x80288924: lw          $a0, 0x6F94($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6F94);
    after_15:
    // 0x80288928: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x8028892C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80288930: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288934: addiu       $a3, $zero, 0x71
    ctx->r7 = ADD32(0, 0X71);
    // 0x80288938: bc1t        L_8028897C
    if (c1cs) {
        // 0x8028893C: addiu       $t6, $zero, 0xFF
        ctx->r14 = ADD32(0, 0XFF);
            goto L_8028897C;
    }
    // 0x8028893C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80288940: sub.s       $f18, $f22, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x80288944: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80288948: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028894C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80288950: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80288954: addiu       $t2, $zero, 0x73
    ctx->r10 = ADD32(0, 0X73);
    // 0x80288958: sub.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8028895C: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80288960: nop

    // 0x80288964: bc1f        L_80288974
    if (!c1cs) {
        // 0x80288968: nop
    
            goto L_80288974;
    }
    // 0x80288968: nop

    // 0x8028896C: b           L_80288980
    // 0x80288970: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
        goto L_80288980;
    // 0x80288970: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_80288974:
    // 0x80288974: b           L_80288980
    // 0x80288978: sw          $t2, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r10;
        goto L_80288980;
    // 0x80288978: sw          $t2, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r10;
L_8028897C:
    // 0x8028897C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_80288980:
    // 0x80288980: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80288984: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x80288988: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x8028898C: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x80288990: bc1f        L_802889CC
    if (!c1cs) {
        // 0x80288994: addiu       $t7, $zero, 0x80
        ctx->r15 = ADD32(0, 0X80);
            goto L_802889CC;
    }
    // 0x80288994: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x80288998: lw          $t3, 0x160($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X160);
    // 0x8028899C: lw          $t5, 0x15C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X15C);
    // 0x802889A0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802889A4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802889A8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802889AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802889B0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x802889B4: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x802889B8: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    // 0x802889BC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802889C0: jal         0x802BA924
    // 0x802889C4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    static_3_802BA924(rdram, ctx);
        goto after_16;
    // 0x802889C4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_16:
    // 0x802889C8: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
L_802889CC:
    // 0x802889CC: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x802889D0: bnel        $t8, $s7, L_80288AA8
    if (ctx->r24 != ctx->r23) {
        // 0x802889D4: lw          $t8, 0x164($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X164);
            goto L_80288AA8;
    }
    goto skip_14;
    // 0x802889D4: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    skip_14:
    // 0x802889D8: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x802889DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802889E0: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x802889E4: lw          $a1, 0x6F94($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X6F94);
    // 0x802889E8: jal         0x802BCF3C
    // 0x802889EC: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    static_3_802BCF3C(rdram, ctx);
        goto after_17;
    // 0x802889EC: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    after_17:
    // 0x802889F0: beq         $v0, $zero, L_80288AA4
    if (ctx->r2 == 0) {
        // 0x802889F4: lwc1        $f12, 0x158($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
            goto L_80288AA4;
    }
    // 0x802889F4: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
    // 0x802889F8: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x802889FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80288A00: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80288A04: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80288A08: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80288A0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288A10: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x80288A14: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80288A18: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80288A1C: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x80288A20: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80288A24: lw          $t4, 0x164($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X164);
    // 0x80288A28: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80288A2C: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x80288A30: sub.s       $f0, $f22, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f16.fl;
    // 0x80288A34: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80288A38: nop

    // 0x80288A3C: bc1tl       L_80288A74
    if (c1cs) {
        // 0x80288A40: lw          $t3, 0x160($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X160);
            goto L_80288A74;
    }
    goto skip_15;
    // 0x80288A40: lw          $t3, 0x160($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X160);
    skip_15:
    // 0x80288A44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80288A48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80288A4C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80288A50: nop

    // 0x80288A54: bc1fl       L_80288AF0
    if (!c1cs) {
        // 0x80288A58: lw          $v1, 0x0($s2)
        ctx->r3 = MEM_W(ctx->r18, 0X0);
            goto L_80288AF0;
    }
    goto skip_16;
    // 0x80288A58: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    skip_16:
    // 0x80288A5C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80288A60: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80288A64: nop

    // 0x80288A68: bc1fl       L_80288AF0
    if (!c1cs) {
        // 0x80288A6C: lw          $v1, 0x0($s2)
        ctx->r3 = MEM_W(ctx->r18, 0X0);
            goto L_80288AF0;
    }
    goto skip_17;
    // 0x80288A6C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    skip_17:
    // 0x80288A70: lw          $t3, 0x160($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X160);
L_80288A74:
    // 0x80288A74: lw          $t5, 0x15C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X15C);
    // 0x80288A78: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80288A7C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80288A80: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80288A84: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80288A88: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80288A8C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x80288A90: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80288A94: jal         0x802BA924
    // 0x80288A98: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    static_3_802BA924(rdram, ctx);
        goto after_18;
    // 0x80288A98: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_18:
    // 0x80288A9C: b           L_80288AF0
    // 0x80288AA0: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
        goto L_80288AF0;
    // 0x80288AA0: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
L_80288AA4:
    // 0x80288AA4: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
L_80288AA8:
    // 0x80288AA8: lw          $t9, 0x160($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X160);
    // 0x80288AAC: lw          $t0, 0x15C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X15C);
    // 0x80288AB0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80288AB4: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80288AB8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80288ABC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80288AC0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288AC4: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x80288AC8: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80288ACC: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x80288AD0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80288AD4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80288AD8: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x80288ADC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80288AE0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80288AE4: jal         0x802BA924
    // 0x80288AE8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    static_3_802BA924(rdram, ctx);
        goto after_19;
    // 0x80288AE8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_19:
L_80288AEC:
    // 0x80288AEC: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
L_80288AF0:
    // 0x80288AF0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80288AF4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80288AF8: lbu         $t4, 0x6FB8($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X6FB8);
    // 0x80288AFC: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80288B00: bnel        $at, $zero, L_8028870C
    if (ctx->r1 != 0) {
        // 0x80288B04: addu        $t8, $v1, $s0
        ctx->r24 = ADD32(ctx->r3, ctx->r16);
            goto L_8028870C;
    }
    goto skip_18;
    // 0x80288B04: addu        $t8, $v1, $s0
    ctx->r24 = ADD32(ctx->r3, ctx->r16);
    skip_18:
L_80288B08:
    // 0x80288B08: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80288B0C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80288B10: addiu       $s7, $zero, 0x72
    ctx->r23 = ADD32(0, 0X72);
    // 0x80288B14: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80288B18: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
L_80288B1C:
    // 0x80288B1C: addu        $t5, $t3, $s0
    ctx->r13 = ADD32(ctx->r11, ctx->r16);
    // 0x80288B20: lw          $a0, 0x7050($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X7050);
    // 0x80288B24: beq         $a0, $zero, L_80288EE4
    if (ctx->r4 == 0) {
        // 0x80288B28: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_80288EE4;
    }
    // 0x80288B28: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80288B2C: jal         0x803183C0
    // 0x80288B30: nop

    static_3_803183C0(rdram, ctx);
        goto after_20;
    // 0x80288B30: nop

    after_20:
    // 0x80288B34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80288B38: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80288B3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288B40: lw          $a1, 0x184($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X184);
    // 0x80288B44: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80288B48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80288B4C: addiu       $a3, $sp, 0x170
    ctx->r7 = ADD32(ctx->r29, 0X170);
    // 0x80288B50: addiu       $t6, $sp, 0x16C
    ctx->r14 = ADD32(ctx->r29, 0X16C);
    // 0x80288B54: bc1f        L_80288EE4
    if (!c1cs) {
        // 0x80288B58: addiu       $t7, $sp, 0x168
        ctx->r15 = ADD32(ctx->r29, 0X168);
            goto L_80288EE4;
    }
    // 0x80288B58: addiu       $t7, $sp, 0x168
    ctx->r15 = ADD32(ctx->r29, 0X168);
    // 0x80288B5C: addiu       $t8, $sp, 0x164
    ctx->r24 = ADD32(ctx->r29, 0X164);
    // 0x80288B60: addiu       $t9, $sp, 0x160
    ctx->r25 = ADD32(ctx->r29, 0X160);
    // 0x80288B64: addiu       $t0, $sp, 0x15C
    ctx->r8 = ADD32(ctx->r29, 0X15C);
    // 0x80288B68: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80288B6C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80288B70: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80288B74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80288B78: jal         0x802BA134
    // 0x80288B7C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    static_3_802BA134(rdram, ctx);
        goto after_21;
    // 0x80288B7C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_21:
    // 0x80288B80: beq         $v0, $zero, L_80288EE4
    if (ctx->r2 == 0) {
        // 0x80288B84: addiu       $t1, $zero, 0x71
        ctx->r9 = ADD32(0, 0X71);
            goto L_80288EE4;
    }
    // 0x80288B84: addiu       $t1, $zero, 0x71
    ctx->r9 = ADD32(0, 0X71);
    // 0x80288B88: sw          $t1, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r9;
    // 0x80288B8C: blez        $s6, L_80288CBC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80288B90: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80288CBC;
    }
    // 0x80288B90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80288B94: andi        $a2, $s6, 0x3
    ctx->r6 = ctx->r22 & 0X3;
    // 0x80288B98: beq         $a2, $zero, L_80288BEC
    if (ctx->r6 == 0) {
        // 0x80288B9C: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_80288BEC;
    }
    // 0x80288B9C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80288BA0: sll         $v1, $zero, 2
    ctx->r3 = S32(0 << 2);
    // 0x80288BA4: addiu       $t2, $sp, 0xE8
    ctx->r10 = ADD32(ctx->r29, 0XE8);
    // 0x80288BA8: addu        $v0, $v1, $t2
    ctx->r2 = ADD32(ctx->r3, ctx->r10);
L_80288BAC:
    // 0x80288BAC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80288BB0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80288BB4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80288BB8: bne         $s3, $t4, L_80288BE0
    if (ctx->r19 != ctx->r12) {
        // 0x80288BBC: nop
    
            goto L_80288BE0;
    }
    // 0x80288BBC: nop

    // 0x80288BC0: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80288BC4: addu        $t3, $s4, $v1
    ctx->r11 = ADD32(ctx->r20, ctx->r3);
    // 0x80288BC8: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x80288BCC: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x80288BD0: lw          $t8, 0x7050($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X7050);
    // 0x80288BD4: bne         $t5, $t8, L_80288BE0
    if (ctx->r13 != ctx->r24) {
        // 0x80288BD8: nop
    
            goto L_80288BE0;
    }
    // 0x80288BD8: nop

    // 0x80288BDC: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_80288BE0:
    // 0x80288BE0: bne         $a1, $a0, L_80288BAC
    if (ctx->r5 != ctx->r4) {
        // 0x80288BE4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80288BAC;
    }
    // 0x80288BE4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80288BE8: beq         $a0, $s6, L_80288CBC
    if (ctx->r4 == ctx->r22) {
        // 0x80288BEC: addiu       $t9, $sp, 0xE8
        ctx->r25 = ADD32(ctx->r29, 0XE8);
            goto L_80288CBC;
    }
L_80288BEC:
    // 0x80288BEC: addiu       $t9, $sp, 0xE8
    ctx->r25 = ADD32(ctx->r29, 0XE8);
    // 0x80288BF0: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x80288BF4: sll         $t0, $s6, 2
    ctx->r8 = S32(ctx->r22 << 2);
    // 0x80288BF8: addu        $a1, $t0, $t9
    ctx->r5 = ADD32(ctx->r8, ctx->r25);
    // 0x80288BFC: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
L_80288C00:
    // 0x80288C00: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80288C04: bnel        $s3, $t1, L_80288C30
    if (ctx->r19 != ctx->r9) {
        // 0x80288C08: lw          $t5, 0x4($v0)
        ctx->r13 = MEM_W(ctx->r2, 0X4);
            goto L_80288C30;
    }
    goto skip_19;
    // 0x80288C08: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    skip_19:
    // 0x80288C0C: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x80288C10: addu        $t2, $s4, $v1
    ctx->r10 = ADD32(ctx->r20, ctx->r3);
    // 0x80288C14: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80288C18: addu        $t6, $t3, $s0
    ctx->r14 = ADD32(ctx->r11, ctx->r16);
    // 0x80288C1C: lw          $t7, 0x7050($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X7050);
    // 0x80288C20: bnel        $t4, $t7, L_80288C30
    if (ctx->r12 != ctx->r15) {
        // 0x80288C24: lw          $t5, 0x4($v0)
        ctx->r13 = MEM_W(ctx->r2, 0X4);
            goto L_80288C30;
    }
    goto skip_20;
    // 0x80288C24: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    skip_20:
    // 0x80288C28: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x80288C2C: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
L_80288C30:
    // 0x80288C30: bnel        $s3, $t5, L_80288C5C
    if (ctx->r19 != ctx->r13) {
        // 0x80288C34: lw          $t3, 0x8($v0)
        ctx->r11 = MEM_W(ctx->r2, 0X8);
            goto L_80288C5C;
    }
    goto skip_21;
    // 0x80288C34: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    skip_21:
    // 0x80288C38: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80288C3C: addu        $t8, $s4, $v1
    ctx->r24 = ADD32(ctx->r20, ctx->r3);
    // 0x80288C40: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x80288C44: addu        $t1, $t9, $s0
    ctx->r9 = ADD32(ctx->r25, ctx->r16);
    // 0x80288C48: lw          $t2, 0x7050($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X7050);
    // 0x80288C4C: bnel        $t0, $t2, L_80288C5C
    if (ctx->r8 != ctx->r10) {
        // 0x80288C50: lw          $t3, 0x8($v0)
        ctx->r11 = MEM_W(ctx->r2, 0X8);
            goto L_80288C5C;
    }
    goto skip_22;
    // 0x80288C50: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    skip_22:
    // 0x80288C54: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x80288C58: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
L_80288C5C:
    // 0x80288C5C: bnel        $s3, $t3, L_80288C88
    if (ctx->r19 != ctx->r11) {
        // 0x80288C60: lw          $t9, 0xC($v0)
        ctx->r25 = MEM_W(ctx->r2, 0XC);
            goto L_80288C88;
    }
    goto skip_23;
    // 0x80288C60: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    skip_23:
    // 0x80288C64: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80288C68: addu        $t6, $s4, $v1
    ctx->r14 = ADD32(ctx->r20, ctx->r3);
    // 0x80288C6C: lw          $t4, 0x8($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X8);
    // 0x80288C70: addu        $t5, $t7, $s0
    ctx->r13 = ADD32(ctx->r15, ctx->r16);
    // 0x80288C74: lw          $t8, 0x7050($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X7050);
    // 0x80288C78: bnel        $t4, $t8, L_80288C88
    if (ctx->r12 != ctx->r24) {
        // 0x80288C7C: lw          $t9, 0xC($v0)
        ctx->r25 = MEM_W(ctx->r2, 0XC);
            goto L_80288C88;
    }
    goto skip_24;
    // 0x80288C7C: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    skip_24:
    // 0x80288C80: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x80288C84: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
L_80288C88:
    // 0x80288C88: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80288C8C: bne         $s3, $t9, L_80288CB4
    if (ctx->r19 != ctx->r25) {
        // 0x80288C90: nop
    
            goto L_80288CB4;
    }
    // 0x80288C90: nop

    // 0x80288C94: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x80288C98: addu        $t1, $s4, $v1
    ctx->r9 = ADD32(ctx->r20, ctx->r3);
    // 0x80288C9C: lw          $t0, 0xC($t1)
    ctx->r8 = MEM_W(ctx->r9, 0XC);
    // 0x80288CA0: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x80288CA4: lw          $t6, 0x7050($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X7050);
    // 0x80288CA8: bne         $t0, $t6, L_80288CB4
    if (ctx->r8 != ctx->r14) {
        // 0x80288CAC: nop
    
            goto L_80288CB4;
    }
    // 0x80288CAC: nop

    // 0x80288CB0: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_80288CB4:
    // 0x80288CB4: bne         $v0, $a1, L_80288C00
    if (ctx->r2 != ctx->r5) {
        // 0x80288CB8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80288C00;
    }
    // 0x80288CB8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_80288CBC:
    // 0x80288CBC: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80288CC0: lw          $t4, 0x168($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X168);
    // 0x80288CC4: addu        $t5, $t7, $s0
    ctx->r13 = ADD32(ctx->r15, ctx->r16);
    // 0x80288CC8: bne         $t4, $s7, L_80288D04
    if (ctx->r12 != ctx->r23) {
        // 0x80288CCC: lw          $a0, 0x7050($t5)
        ctx->r4 = MEM_W(ctx->r13, 0X7050);
            goto L_80288D04;
    }
    // 0x80288CCC: lw          $a0, 0x7050($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X7050);
    // 0x80288CD0: jal         0x8031A3A8
    // 0x80288CD4: nop

    static_3_8031A3A8(rdram, ctx);
        goto after_22;
    // 0x80288CD4: nop

    after_22:
    // 0x80288CD8: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x80288CDC: nop

    // 0x80288CE0: bc1fl       L_80288D14
    if (!c1cs) {
        // 0x80288CE4: lw          $t1, 0x0($s2)
        ctx->r9 = MEM_W(ctx->r18, 0X0);
            goto L_80288D14;
    }
    goto skip_25;
    // 0x80288CE4: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    skip_25:
    // 0x80288CE8: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80288CEC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80288CF0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80288CF4: jal         0x8031A3B0
    // 0x80288CF8: lw          $a0, 0x7050($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X7050);
    static_3_8031A3B0(rdram, ctx);
        goto after_23;
    // 0x80288CF8: lw          $a0, 0x7050($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X7050);
    after_23:
    // 0x80288CFC: b           L_80288D14
    // 0x80288D00: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
        goto L_80288D14;
    // 0x80288D00: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
L_80288D04:
    // 0x80288D04: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80288D08: jal         0x8031A3B0
    // 0x80288D0C: nop

    static_3_8031A3B0(rdram, ctx);
        goto after_24;
    // 0x80288D0C: nop

    after_24:
    // 0x80288D10: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
L_80288D14:
    // 0x80288D14: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80288D18: jal         0x8031A3A8
    // 0x80288D1C: lw          $a0, 0x7050($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X7050);
    static_3_8031A3A8(rdram, ctx);
        goto after_25;
    // 0x80288D1C: lw          $a0, 0x7050($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X7050);
    after_25:
    // 0x80288D20: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x80288D24: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80288D28: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288D2C: addiu       $a3, $zero, 0x71
    ctx->r7 = ADD32(0, 0X71);
    // 0x80288D30: bc1t        L_80288D74
    if (c1cs) {
        // 0x80288D34: addiu       $t5, $zero, 0xFF
        ctx->r13 = ADD32(0, 0XFF);
            goto L_80288D74;
    }
    // 0x80288D34: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80288D38: sub.s       $f16, $f22, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x80288D3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80288D40: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80288D44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80288D48: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80288D4C: addiu       $t3, $zero, 0x73
    ctx->r11 = ADD32(0, 0X73);
    // 0x80288D50: sub.s       $f12, $f6, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x80288D54: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80288D58: nop

    // 0x80288D5C: bc1f        L_80288D6C
    if (!c1cs) {
        // 0x80288D60: nop
    
            goto L_80288D6C;
    }
    // 0x80288D60: nop

    // 0x80288D64: b           L_80288D78
    // 0x80288D68: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
        goto L_80288D78;
    // 0x80288D68: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_80288D6C:
    // 0x80288D6C: b           L_80288D78
    // 0x80288D70: sw          $t3, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r11;
        goto L_80288D78;
    // 0x80288D70: sw          $t3, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r11;
L_80288D74:
    // 0x80288D74: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_80288D78:
    // 0x80288D78: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80288D7C: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x80288D80: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80288D84: lw          $t0, 0x164($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X164);
    // 0x80288D88: bc1f        L_80288DC4
    if (!c1cs) {
        // 0x80288D8C: addiu       $t4, $zero, 0x80
        ctx->r12 = ADD32(0, 0X80);
            goto L_80288DC4;
    }
    // 0x80288D8C: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x80288D90: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x80288D94: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x80288D98: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80288D9C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80288DA0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80288DA4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80288DA8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80288DAC: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x80288DB0: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    // 0x80288DB4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80288DB8: jal         0x802BA924
    // 0x80288DBC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    static_3_802BA924(rdram, ctx);
        goto after_26;
    // 0x80288DBC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_26:
    // 0x80288DC0: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
L_80288DC4:
    // 0x80288DC4: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x80288DC8: bnel        $t8, $s7, L_80288EA0
    if (ctx->r24 != ctx->r23) {
        // 0x80288DCC: lw          $t8, 0x164($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X164);
            goto L_80288EA0;
    }
    goto skip_26;
    // 0x80288DCC: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    skip_26:
    // 0x80288DD0: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80288DD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288DD8: addu        $t1, $t9, $s0
    ctx->r9 = ADD32(ctx->r25, ctx->r16);
    // 0x80288DDC: lw          $a1, 0x7050($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X7050);
    // 0x80288DE0: jal         0x802BCF3C
    // 0x80288DE4: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    static_3_802BCF3C(rdram, ctx);
        goto after_27;
    // 0x80288DE4: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    after_27:
    // 0x80288DE8: beq         $v0, $zero, L_80288E9C
    if (ctx->r2 == 0) {
        // 0x80288DEC: lwc1        $f12, 0x158($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
            goto L_80288E9C;
    }
    // 0x80288DEC: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
    // 0x80288DF0: trunc.w.s   $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    ctx->f4.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80288DF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80288DF8: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80288DFC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80288E00: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80288E04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288E08: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x80288E0C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80288E10: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80288E14: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x80288E18: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80288E1C: lw          $t0, 0x164($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X164);
    // 0x80288E20: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80288E24: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x80288E28: sub.s       $f0, $f22, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f10.fl;
    // 0x80288E2C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80288E30: nop

    // 0x80288E34: bc1tl       L_80288E6C
    if (c1cs) {
        // 0x80288E38: lw          $t6, 0x160($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X160);
            goto L_80288E6C;
    }
    goto skip_27;
    // 0x80288E38: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    skip_27:
    // 0x80288E3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80288E40: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80288E44: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80288E48: nop

    // 0x80288E4C: bc1fl       L_80288EE8
    if (!c1cs) {
        // 0x80288E50: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80288EE8;
    }
    goto skip_28;
    // 0x80288E50: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_28:
    // 0x80288E54: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80288E58: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80288E5C: nop

    // 0x80288E60: bc1fl       L_80288EE8
    if (!c1cs) {
        // 0x80288E64: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80288EE8;
    }
    goto skip_29;
    // 0x80288E64: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_29:
    // 0x80288E68: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
L_80288E6C:
    // 0x80288E6C: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x80288E70: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80288E74: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80288E78: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80288E7C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80288E80: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80288E84: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x80288E88: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80288E8C: jal         0x802BA924
    // 0x80288E90: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    static_3_802BA924(rdram, ctx);
        goto after_28;
    // 0x80288E90: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_28:
    // 0x80288E94: b           L_80288EE8
    // 0x80288E98: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
        goto L_80288EE8;
    // 0x80288E98: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80288E9C:
    // 0x80288E9C: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
L_80288EA0:
    // 0x80288EA0: lw          $t9, 0x160($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X160);
    // 0x80288EA4: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x80288EA8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80288EAC: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80288EB0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80288EB4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80288EB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288EBC: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x80288EC0: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80288EC4: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x80288EC8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80288ECC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80288ED0: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x80288ED4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80288ED8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80288EDC: jal         0x802BA924
    // 0x80288EE0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    static_3_802BA924(rdram, ctx);
        goto after_29;
    // 0x80288EE0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_29:
L_80288EE4:
    // 0x80288EE4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80288EE8:
    // 0x80288EE8: slti        $at, $s0, 0xA0
    ctx->r1 = SIGNED(ctx->r16) < 0XA0 ? 1 : 0;
    // 0x80288EEC: bnel        $at, $zero, L_80288B1C
    if (ctx->r1 != 0) {
        // 0x80288EF0: lw          $t3, 0x0($s2)
        ctx->r11 = MEM_W(ctx->r18, 0X0);
            goto L_80288B1C;
    }
    goto skip_30;
    // 0x80288EF0: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    skip_30:
    // 0x80288EF4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80288EF8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80288EFC: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
L_80288F00:
    // 0x80288F00: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80288F04: lw          $a1, 0x184($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X184);
    // 0x80288F08: addu        $t6, $t0, $s0
    ctx->r14 = ADD32(ctx->r8, ctx->r16);
    // 0x80288F0C: lw          $a2, 0x6FC0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X6FC0);
    // 0x80288F10: addiu       $a3, $sp, 0x170
    ctx->r7 = ADD32(ctx->r29, 0X170);
    // 0x80288F14: addiu       $t7, $sp, 0x16C
    ctx->r15 = ADD32(ctx->r29, 0X16C);
    // 0x80288F18: beql        $a2, $zero, L_80289248
    if (ctx->r6 == 0) {
        // 0x80288F1C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80289248;
    }
    goto skip_31;
    // 0x80288F1C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_31:
    // 0x80288F20: jal         0x802BA778
    // 0x80288F24: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    static_3_802BA778(rdram, ctx);
        goto after_30;
    // 0x80288F24: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_30:
    // 0x80288F28: beq         $v0, $zero, L_80289244
    if (ctx->r2 == 0) {
        // 0x80288F2C: addiu       $t5, $zero, 0xFFF
        ctx->r13 = ADD32(0, 0XFFF);
            goto L_80289244;
    }
    // 0x80288F2C: addiu       $t5, $zero, 0xFFF
    ctx->r13 = ADD32(0, 0XFFF);
    // 0x80288F30: sw          $t5, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r13;
    // 0x80288F34: blez        $s6, L_80289064
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80288F38: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80289064;
    }
    // 0x80288F38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80288F3C: andi        $a2, $s6, 0x3
    ctx->r6 = ctx->r22 & 0X3;
    // 0x80288F40: beq         $a2, $zero, L_80288F94
    if (ctx->r6 == 0) {
        // 0x80288F44: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_80288F94;
    }
    // 0x80288F44: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80288F48: sll         $v1, $zero, 2
    ctx->r3 = S32(0 << 2);
    // 0x80288F4C: addiu       $t4, $sp, 0xE8
    ctx->r12 = ADD32(ctx->r29, 0XE8);
    // 0x80288F50: addu        $v0, $v1, $t4
    ctx->r2 = ADD32(ctx->r3, ctx->r12);
L_80288F54:
    // 0x80288F54: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80288F58: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80288F5C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80288F60: bne         $s1, $t8, L_80288F88
    if (ctx->r17 != ctx->r24) {
        // 0x80288F64: nop
    
            goto L_80288F88;
    }
    // 0x80288F64: nop

    // 0x80288F68: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x80288F6C: addu        $t9, $s5, $v1
    ctx->r25 = ADD32(ctx->r21, ctx->r3);
    // 0x80288F70: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x80288F74: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x80288F78: lw          $t0, 0x6FC0($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X6FC0);
    // 0x80288F7C: bne         $t1, $t0, L_80288F88
    if (ctx->r9 != ctx->r8) {
        // 0x80288F80: nop
    
            goto L_80288F88;
    }
    // 0x80288F80: nop

    // 0x80288F84: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_80288F88:
    // 0x80288F88: bne         $a1, $a0, L_80288F54
    if (ctx->r5 != ctx->r4) {
        // 0x80288F8C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80288F54;
    }
    // 0x80288F8C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80288F90: beq         $a0, $s6, L_80289064
    if (ctx->r4 == ctx->r22) {
        // 0x80288F94: addiu       $t6, $sp, 0xE8
        ctx->r14 = ADD32(ctx->r29, 0XE8);
            goto L_80289064;
    }
L_80288F94:
    // 0x80288F94: addiu       $t6, $sp, 0xE8
    ctx->r14 = ADD32(ctx->r29, 0XE8);
    // 0x80288F98: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x80288F9C: sll         $t7, $s6, 2
    ctx->r15 = S32(ctx->r22 << 2);
    // 0x80288FA0: addu        $a1, $t7, $t6
    ctx->r5 = ADD32(ctx->r15, ctx->r14);
    // 0x80288FA4: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
L_80288FA8:
    // 0x80288FA8: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80288FAC: bnel        $s1, $t5, L_80288FD8
    if (ctx->r17 != ctx->r13) {
        // 0x80288FB0: lw          $t1, 0x4($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X4);
            goto L_80288FD8;
    }
    goto skip_32;
    // 0x80288FB0: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    skip_32:
    // 0x80288FB4: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80288FB8: addu        $t4, $s5, $v1
    ctx->r12 = ADD32(ctx->r21, ctx->r3);
    // 0x80288FBC: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x80288FC0: addu        $t2, $t9, $s0
    ctx->r10 = ADD32(ctx->r25, ctx->r16);
    // 0x80288FC4: lw          $t3, 0x6FC0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X6FC0);
    // 0x80288FC8: bnel        $t8, $t3, L_80288FD8
    if (ctx->r24 != ctx->r11) {
        // 0x80288FCC: lw          $t1, 0x4($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X4);
            goto L_80288FD8;
    }
    goto skip_33;
    // 0x80288FCC: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    skip_33:
    // 0x80288FD0: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x80288FD4: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
L_80288FD8:
    // 0x80288FD8: bnel        $s1, $t1, L_80289004
    if (ctx->r17 != ctx->r9) {
        // 0x80288FDC: lw          $t9, 0x8($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X8);
            goto L_80289004;
    }
    goto skip_34;
    // 0x80288FDC: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    skip_34:
    // 0x80288FE0: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80288FE4: addu        $t0, $s5, $v1
    ctx->r8 = ADD32(ctx->r21, ctx->r3);
    // 0x80288FE8: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x80288FEC: addu        $t5, $t6, $s0
    ctx->r13 = ADD32(ctx->r14, ctx->r16);
    // 0x80288FF0: lw          $t4, 0x6FC0($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X6FC0);
    // 0x80288FF4: bnel        $t7, $t4, L_80289004
    if (ctx->r15 != ctx->r12) {
        // 0x80288FF8: lw          $t9, 0x8($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X8);
            goto L_80289004;
    }
    goto skip_35;
    // 0x80288FF8: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    skip_35:
    // 0x80288FFC: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x80289000: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
L_80289004:
    // 0x80289004: bnel        $s1, $t9, L_80289030
    if (ctx->r17 != ctx->r25) {
        // 0x80289008: lw          $t6, 0xC($v0)
        ctx->r14 = MEM_W(ctx->r2, 0XC);
            goto L_80289030;
    }
    goto skip_36;
    // 0x80289008: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    skip_36:
    // 0x8028900C: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x80289010: addu        $t2, $s5, $v1
    ctx->r10 = ADD32(ctx->r21, ctx->r3);
    // 0x80289014: lw          $t8, 0x8($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X8);
    // 0x80289018: addu        $t1, $t3, $s0
    ctx->r9 = ADD32(ctx->r11, ctx->r16);
    // 0x8028901C: lw          $t0, 0x6FC0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X6FC0);
    // 0x80289020: bnel        $t8, $t0, L_80289030
    if (ctx->r24 != ctx->r8) {
        // 0x80289024: lw          $t6, 0xC($v0)
        ctx->r14 = MEM_W(ctx->r2, 0XC);
            goto L_80289030;
    }
    goto skip_37;
    // 0x80289024: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    skip_37:
    // 0x80289028: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x8028902C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
L_80289030:
    // 0x80289030: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80289034: bne         $s1, $t6, L_8028905C
    if (ctx->r17 != ctx->r14) {
        // 0x80289038: nop
    
            goto L_8028905C;
    }
    // 0x80289038: nop

    // 0x8028903C: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80289040: addu        $t5, $s5, $v1
    ctx->r13 = ADD32(ctx->r21, ctx->r3);
    // 0x80289044: lw          $t7, 0xC($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XC);
    // 0x80289048: addu        $t9, $t4, $s0
    ctx->r25 = ADD32(ctx->r12, ctx->r16);
    // 0x8028904C: lw          $t2, 0x6FC0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X6FC0);
    // 0x80289050: bne         $t7, $t2, L_8028905C
    if (ctx->r15 != ctx->r10) {
        // 0x80289054: nop
    
            goto L_8028905C;
    }
    // 0x80289054: nop

    // 0x80289058: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_8028905C:
    // 0x8028905C: bne         $v0, $a1, L_80288FA8
    if (ctx->r2 != ctx->r5) {
        // 0x80289060: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80288FA8;
    }
    // 0x80289060: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_80289064:
    // 0x80289064: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x80289068: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x8028906C: addu        $t1, $t3, $s0
    ctx->r9 = ADD32(ctx->r11, ctx->r16);
    // 0x80289070: bne         $t8, $s7, L_802890AC
    if (ctx->r24 != ctx->r23) {
        // 0x80289074: lw          $a0, 0x6FC0($t1)
        ctx->r4 = MEM_W(ctx->r9, 0X6FC0);
            goto L_802890AC;
    }
    // 0x80289074: lw          $a0, 0x6FC0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6FC0);
    // 0x80289078: jal         0x8028C430
    // 0x8028907C: nop

    static_3_8028C430(rdram, ctx);
        goto after_31;
    // 0x8028907C: nop

    after_31:
    // 0x80289080: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x80289084: nop

    // 0x80289088: bc1fl       L_802890BC
    if (!c1cs) {
        // 0x8028908C: lw          $t5, 0x0($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X0);
            goto L_802890BC;
    }
    goto skip_38;
    // 0x8028908C: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    skip_38:
    // 0x80289090: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80289094: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80289098: addu        $t6, $t0, $s0
    ctx->r14 = ADD32(ctx->r8, ctx->r16);
    // 0x8028909C: jal         0x8028C438
    // 0x802890A0: lw          $a0, 0x6FC0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X6FC0);
    static_3_8028C438(rdram, ctx);
        goto after_32;
    // 0x802890A0: lw          $a0, 0x6FC0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X6FC0);
    after_32:
    // 0x802890A4: b           L_802890BC
    // 0x802890A8: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
        goto L_802890BC;
    // 0x802890A8: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
L_802890AC:
    // 0x802890AC: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x802890B0: jal         0x8028C438
    // 0x802890B4: nop

    static_3_8028C438(rdram, ctx);
        goto after_33;
    // 0x802890B4: nop

    after_33:
    // 0x802890B8: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
L_802890BC:
    // 0x802890BC: addu        $t4, $t5, $s0
    ctx->r12 = ADD32(ctx->r13, ctx->r16);
    // 0x802890C0: jal         0x8028C430
    // 0x802890C4: lw          $a0, 0x6FC0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X6FC0);
    static_3_8028C430(rdram, ctx);
        goto after_34;
    // 0x802890C4: lw          $a0, 0x6FC0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X6FC0);
    after_34:
    // 0x802890C8: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x802890CC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x802890D0: bc1tl       L_80289118
    if (c1cs) {
        // 0x802890D4: mov.s       $f12, $f20
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
            goto L_80289118;
    }
    goto skip_39;
    // 0x802890D4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    skip_39:
    // 0x802890D8: sub.s       $f8, $f22, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x802890DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802890E0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802890E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802890E8: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802890EC: addiu       $t9, $zero, 0x73
    ctx->r25 = ADD32(0, 0X73);
    // 0x802890F0: sub.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x802890F4: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x802890F8: nop

    // 0x802890FC: bc1f        L_8028910C
    if (!c1cs) {
        // 0x80289100: nop
    
            goto L_8028910C;
    }
    // 0x80289100: nop

    // 0x80289104: b           L_80289118
    // 0x80289108: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
        goto L_80289118;
    // 0x80289108: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_8028910C:
    // 0x8028910C: b           L_80289118
    // 0x80289110: sw          $t9, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r25;
        goto L_80289118;
    // 0x80289110: sw          $t9, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r25;
    // 0x80289114: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_80289118:
    // 0x80289118: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x8028911C: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x80289120: beql        $t7, $s7, L_80289134
    if (ctx->r15 == ctx->r23) {
        // 0x80289124: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_80289134;
    }
    goto skip_40;
    // 0x80289124: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_40:
    // 0x80289128: bnel        $t7, $at, L_80289248
    if (ctx->r15 != ctx->r1) {
        // 0x8028912C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80289248;
    }
    goto skip_41;
    // 0x8028912C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_41:
    // 0x80289130: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
L_80289134:
    // 0x80289134: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80289138: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8028913C: lw          $a1, 0x6FC0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X6FC0);
    // 0x80289140: jal         0x802BD018
    // 0x80289144: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    static_3_802BD018(rdram, ctx);
        goto after_35;
    // 0x80289144: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    after_35:
    // 0x80289148: beq         $v0, $zero, L_802891FC
    if (ctx->r2 == 0) {
        // 0x8028914C: lwc1        $f12, 0x158($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
            goto L_802891FC;
    }
    // 0x8028914C: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
    // 0x80289150: trunc.w.s   $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    ctx->f6.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80289154: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80289158: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028915C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80289160: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80289164: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80289168: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x8028916C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80289170: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80289174: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x80289178: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8028917C: addiu       $t0, $zero, 0xFFF
    ctx->r8 = ADD32(0, 0XFFF);
    // 0x80289180: addiu       $t6, $zero, 0xFFF
    ctx->r14 = ADD32(0, 0XFFF);
    // 0x80289184: addiu       $t5, $zero, 0xFFF
    ctx->r13 = ADD32(0, 0XFFF);
    // 0x80289188: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8028918C: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x80289190: sub.s       $f0, $f22, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f4.fl;
    // 0x80289194: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80289198: nop

    // 0x8028919C: bc1tl       L_802891D4
    if (c1cs) {
        // 0x802891A0: sw          $t0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r8;
            goto L_802891D4;
    }
    goto skip_42;
    // 0x802891A0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    skip_42:
    // 0x802891A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802891A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802891AC: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802891B0: nop

    // 0x802891B4: bc1fl       L_80289248
    if (!c1cs) {
        // 0x802891B8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80289248;
    }
    goto skip_43;
    // 0x802891B8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_43:
    // 0x802891BC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802891C0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802891C4: nop

    // 0x802891C8: bc1fl       L_80289248
    if (!c1cs) {
        // 0x802891CC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80289248;
    }
    goto skip_44;
    // 0x802891CC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_44:
    // 0x802891D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
L_802891D4:
    // 0x802891D4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802891D8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802891DC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802891E0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802891E4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802891E8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x802891EC: jal         0x802BA924
    // 0x802891F0: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    static_3_802BA924(rdram, ctx);
        goto after_36;
    // 0x802891F0: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_36:
    // 0x802891F4: b           L_80289248
    // 0x802891F8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
        goto L_80289248;
    // 0x802891F8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802891FC:
    // 0x802891FC: addiu       $t7, $zero, 0xFFF
    ctx->r15 = ADD32(0, 0XFFF);
    // 0x80289200: addiu       $t2, $zero, 0xFFF
    ctx->r10 = ADD32(0, 0XFFF);
    // 0x80289204: addiu       $t3, $zero, 0xFFF
    ctx->r11 = ADD32(0, 0XFFF);
    // 0x80289208: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8028920C: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x80289210: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80289214: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80289218: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8028921C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80289220: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80289224: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80289228: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x8028922C: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80289230: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x80289234: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80289238: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028923C: jal         0x802BA924
    // 0x80289240: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    static_3_802BA924(rdram, ctx);
        goto after_37;
    // 0x80289240: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_37:
L_80289244:
    // 0x80289244: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80289248:
    // 0x80289248: slti        $at, $s0, 0x8C
    ctx->r1 = SIGNED(ctx->r16) < 0X8C ? 1 : 0;
    // 0x8028924C: bnel        $at, $zero, L_80288F00
    if (ctx->r1 != 0) {
        // 0x80289250: lw          $t0, 0x0($s2)
        ctx->r8 = MEM_W(ctx->r18, 0X0);
            goto L_80288F00;
    }
    goto skip_45;
    // 0x80289250: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    skip_45:
    // 0x80289254: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x80289258: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x8028925C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80289260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80289264: bne         $t0, $at, L_80289274
    if (ctx->r8 != ctx->r1) {
        // 0x80289268: nop
    
            goto L_80289274;
    }
    // 0x80289268: nop

    // 0x8028926C: b           L_80289274
    // 0x80289270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80289274;
    // 0x80289270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80289274:
    // 0x80289274: beq         $v0, $zero, L_802899E4
    if (ctx->r2 == 0) {
        // 0x80289278: nop
    
            goto L_802899E4;
    }
    // 0x80289278: nop

    // 0x8028927C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80289280: jal         0x80317E10
    // 0x80289284: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_80317E10(rdram, ctx);
        goto after_38;
    // 0x80289284: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_38:
    // 0x80289288: beql        $v0, $zero, L_80289634
    if (ctx->r2 == 0) {
        // 0x8028928C: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_80289634;
    }
    goto skip_46;
    // 0x8028928C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_46:
    // 0x80289290: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80289294: lw          $t6, 0x4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X4);
    // 0x80289298: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    // 0x8028929C: beql        $a0, $t6, L_80289634
    if (ctx->r4 == ctx->r14) {
        // 0x802892A0: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_80289634;
    }
    goto skip_47;
    // 0x802892A0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_47:
    // 0x802892A4: jal         0x803183C0
    // 0x802892A8: sw          $a0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r4;
    static_3_803183C0(rdram, ctx);
        goto after_39;
    // 0x802892A8: sw          $a0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r4;
    after_39:
    // 0x802892AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802892B0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802892B4: lw          $a2, 0xD4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD4);
    // 0x802892B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802892BC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802892C0: lw          $a1, 0x184($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X184);
    // 0x802892C4: addiu       $a3, $sp, 0x170
    ctx->r7 = ADD32(ctx->r29, 0X170);
    // 0x802892C8: addiu       $t5, $sp, 0x16C
    ctx->r13 = ADD32(ctx->r29, 0X16C);
    // 0x802892CC: bc1f        L_80289630
    if (!c1cs) {
        // 0x802892D0: addiu       $t4, $sp, 0x168
        ctx->r12 = ADD32(ctx->r29, 0X168);
            goto L_80289630;
    }
    // 0x802892D0: addiu       $t4, $sp, 0x168
    ctx->r12 = ADD32(ctx->r29, 0X168);
    // 0x802892D4: addiu       $t9, $sp, 0x164
    ctx->r25 = ADD32(ctx->r29, 0X164);
    // 0x802892D8: addiu       $t7, $sp, 0x160
    ctx->r15 = ADD32(ctx->r29, 0X160);
    // 0x802892DC: addiu       $t2, $sp, 0x15C
    ctx->r10 = ADD32(ctx->r29, 0X15C);
    // 0x802892E0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x802892E4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802892E8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802892EC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802892F0: jal         0x802BA134
    // 0x802892F4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    static_3_802BA134(rdram, ctx);
        goto after_40;
    // 0x802892F4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_40:
    // 0x802892F8: beq         $v0, $zero, L_80289630
    if (ctx->r2 == 0) {
        // 0x802892FC: addiu       $t3, $zero, 0x71
        ctx->r11 = ADD32(0, 0X71);
            goto L_80289630;
    }
    // 0x802892FC: addiu       $t3, $zero, 0x71
    ctx->r11 = ADD32(0, 0X71);
    // 0x80289300: sw          $t3, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r11;
    // 0x80289304: blez        $s6, L_80289418
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80289308: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80289418;
    }
    // 0x80289308: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028930C: andi        $a2, $s6, 0x3
    ctx->r6 = ctx->r22 & 0X3;
    // 0x80289310: beq         $a2, $zero, L_8028935C
    if (ctx->r6 == 0) {
        // 0x80289314: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_8028935C;
    }
    // 0x80289314: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80289318: sll         $v1, $zero, 2
    ctx->r3 = S32(0 << 2);
    // 0x8028931C: addiu       $t1, $sp, 0xE8
    ctx->r9 = ADD32(ctx->r29, 0XE8);
    // 0x80289320: addu        $v0, $v1, $t1
    ctx->r2 = ADD32(ctx->r3, ctx->r9);
L_80289324:
    // 0x80289324: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80289328: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8028932C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80289330: bne         $s3, $t8, L_80289350
    if (ctx->r19 != ctx->r24) {
        // 0x80289334: addu        $t0, $s4, $v1
        ctx->r8 = ADD32(ctx->r20, ctx->r3);
            goto L_80289350;
    }
    // 0x80289334: addu        $t0, $s4, $v1
    ctx->r8 = ADD32(ctx->r20, ctx->r3);
    // 0x80289338: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x8028933C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80289340: addiu       $a2, $a2, 0x365C
    ctx->r6 = ADD32(ctx->r6, 0X365C);
    // 0x80289344: bne         $a2, $t6, L_80289350
    if (ctx->r6 != ctx->r14) {
        // 0x80289348: nop
    
            goto L_80289350;
    }
    // 0x80289348: nop

    // 0x8028934C: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_80289350:
    // 0x80289350: bne         $a1, $a0, L_80289324
    if (ctx->r5 != ctx->r4) {
        // 0x80289354: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80289324;
    }
    // 0x80289354: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80289358: beq         $a0, $s6, L_80289418
    if (ctx->r4 == ctx->r22) {
        // 0x8028935C: addiu       $t5, $sp, 0xE8
        ctx->r13 = ADD32(ctx->r29, 0XE8);
            goto L_80289418;
    }
L_8028935C:
    // 0x8028935C: addiu       $t5, $sp, 0xE8
    ctx->r13 = ADD32(ctx->r29, 0XE8);
    // 0x80289360: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x80289364: sll         $t4, $s6, 2
    ctx->r12 = S32(ctx->r22 << 2);
    // 0x80289368: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    // 0x8028936C: addu        $v0, $v1, $t5
    ctx->r2 = ADD32(ctx->r3, ctx->r13);
L_80289370:
    // 0x80289370: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80289374: addu        $t7, $s4, $v1
    ctx->r15 = ADD32(ctx->r20, ctx->r3);
    // 0x80289378: addu        $t1, $s4, $v1
    ctx->r9 = ADD32(ctx->r20, ctx->r3);
    // 0x8028937C: bne         $s3, $t9, L_8028939C
    if (ctx->r19 != ctx->r25) {
        // 0x80289380: addu        $t6, $s4, $v1
        ctx->r14 = ADD32(ctx->r20, ctx->r3);
            goto L_8028939C;
    }
    // 0x80289380: addu        $t6, $s4, $v1
    ctx->r14 = ADD32(ctx->r20, ctx->r3);
    // 0x80289384: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x80289388: lw          $t2, 0x0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X0);
    // 0x8028938C: addiu       $a2, $a2, 0x365C
    ctx->r6 = ADD32(ctx->r6, 0X365C);
    // 0x80289390: bnel        $a2, $t2, L_802893A0
    if (ctx->r6 != ctx->r10) {
        // 0x80289394: lw          $t3, 0x4($v0)
        ctx->r11 = MEM_W(ctx->r2, 0X4);
            goto L_802893A0;
    }
    goto skip_48;
    // 0x80289394: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    skip_48:
    // 0x80289398: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_8028939C:
    // 0x8028939C: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
L_802893A0:
    // 0x802893A0: addu        $t9, $s4, $v1
    ctx->r25 = ADD32(ctx->r20, ctx->r3);
    // 0x802893A4: bnel        $s3, $t3, L_802893C8
    if (ctx->r19 != ctx->r11) {
        // 0x802893A8: lw          $t0, 0x8($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X8);
            goto L_802893C8;
    }
    goto skip_49;
    // 0x802893A8: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    skip_49:
    // 0x802893AC: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x802893B0: lw          $t8, 0x4($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X4);
    // 0x802893B4: addiu       $a2, $a2, 0x365C
    ctx->r6 = ADD32(ctx->r6, 0X365C);
    // 0x802893B8: bnel        $a2, $t8, L_802893C8
    if (ctx->r6 != ctx->r24) {
        // 0x802893BC: lw          $t0, 0x8($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X8);
            goto L_802893C8;
    }
    goto skip_50;
    // 0x802893BC: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    skip_50:
    // 0x802893C0: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x802893C4: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
L_802893C8:
    // 0x802893C8: bnel        $s3, $t0, L_802893EC
    if (ctx->r19 != ctx->r8) {
        // 0x802893CC: lw          $t5, 0xC($v0)
        ctx->r13 = MEM_W(ctx->r2, 0XC);
            goto L_802893EC;
    }
    goto skip_51;
    // 0x802893CC: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    skip_51:
    // 0x802893D0: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x802893D4: lw          $t4, 0x8($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X8);
    // 0x802893D8: addiu       $a2, $a2, 0x365C
    ctx->r6 = ADD32(ctx->r6, 0X365C);
    // 0x802893DC: bnel        $a2, $t4, L_802893EC
    if (ctx->r6 != ctx->r12) {
        // 0x802893E0: lw          $t5, 0xC($v0)
        ctx->r13 = MEM_W(ctx->r2, 0XC);
            goto L_802893EC;
    }
    goto skip_52;
    // 0x802893E0: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    skip_52:
    // 0x802893E4: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x802893E8: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
L_802893EC:
    // 0x802893EC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x802893F0: bne         $s3, $t5, L_80289410
    if (ctx->r19 != ctx->r13) {
        // 0x802893F4: nop
    
            goto L_80289410;
    }
    // 0x802893F4: nop

    // 0x802893F8: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x802893FC: lw          $t7, 0xC($t9)
    ctx->r15 = MEM_W(ctx->r25, 0XC);
    // 0x80289400: addiu       $a2, $a2, 0x365C
    ctx->r6 = ADD32(ctx->r6, 0X365C);
    // 0x80289404: bne         $a2, $t7, L_80289410
    if (ctx->r6 != ctx->r15) {
        // 0x80289408: nop
    
            goto L_80289410;
    }
    // 0x80289408: nop

    // 0x8028940C: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_80289410:
    // 0x80289410: bne         $v0, $a1, L_80289370
    if (ctx->r2 != ctx->r5) {
        // 0x80289414: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80289370;
    }
    // 0x80289414: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_80289418:
    // 0x80289418: lw          $t2, 0x168($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X168);
    // 0x8028941C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80289420: bne         $t2, $s7, L_80289458
    if (ctx->r10 != ctx->r23) {
        // 0x80289424: addiu       $a0, $a0, 0x365C
        ctx->r4 = ADD32(ctx->r4, 0X365C);
            goto L_80289458;
    }
    // 0x80289424: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    // 0x80289428: jal         0x8031A3A8
    // 0x8028942C: nop

    static_3_8031A3A8(rdram, ctx);
        goto after_41;
    // 0x8028942C: nop

    after_41:
    // 0x80289430: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x80289434: nop

    // 0x80289438: bc1fl       L_80289468
    if (!c1cs) {
        // 0x8028943C: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_80289468;
    }
    goto skip_53;
    // 0x8028943C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_53:
    // 0x80289440: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80289444: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80289448: jal         0x8031A3B0
    // 0x8028944C: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_8031A3B0(rdram, ctx);
        goto after_42;
    // 0x8028944C: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_42:
    // 0x80289450: b           L_80289468
    // 0x80289454: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
        goto L_80289468;
    // 0x80289454: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_80289458:
    // 0x80289458: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x8028945C: jal         0x8031A3B0
    // 0x80289460: nop

    static_3_8031A3B0(rdram, ctx);
        goto after_43;
    // 0x80289460: nop

    after_43:
    // 0x80289464: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_80289468:
    // 0x80289468: jal         0x8031A3A8
    // 0x8028946C: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_8031A3A8(rdram, ctx);
        goto after_44;
    // 0x8028946C: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_44:
    // 0x80289470: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x80289474: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80289478: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8028947C: addiu       $a3, $zero, 0x71
    ctx->r7 = ADD32(0, 0X71);
    // 0x80289480: bc1t        L_802894C4
    if (c1cs) {
        // 0x80289484: addiu       $t6, $zero, 0xFF
        ctx->r14 = ADD32(0, 0XFF);
            goto L_802894C4;
    }
    // 0x80289484: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80289488: sub.s       $f4, $f22, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x8028948C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80289490: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80289494: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80289498: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028949C: addiu       $t3, $zero, 0x73
    ctx->r11 = ADD32(0, 0X73);
    // 0x802894A0: sub.s       $f12, $f16, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x802894A4: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x802894A8: nop

    // 0x802894AC: bc1f        L_802894BC
    if (!c1cs) {
        // 0x802894B0: nop
    
            goto L_802894BC;
    }
    // 0x802894B0: nop

    // 0x802894B4: b           L_802894C8
    // 0x802894B8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
        goto L_802894C8;
    // 0x802894B8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_802894BC:
    // 0x802894BC: b           L_802894C8
    // 0x802894C0: sw          $t3, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r11;
        goto L_802894C8;
    // 0x802894C0: sw          $t3, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r11;
L_802894C4:
    // 0x802894C4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_802894C8:
    // 0x802894C8: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x802894CC: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x802894D0: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x802894D4: lw          $t1, 0x164($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X164);
    // 0x802894D8: bc1f        L_80289514
    if (!c1cs) {
        // 0x802894DC: addiu       $t4, $zero, 0x80
        ctx->r12 = ADD32(0, 0X80);
            goto L_80289514;
    }
    // 0x802894DC: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x802894E0: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x802894E4: lw          $t0, 0x15C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X15C);
    // 0x802894E8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802894EC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802894F0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802894F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802894F8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x802894FC: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x80289500: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    // 0x80289504: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80289508: jal         0x802BA924
    // 0x8028950C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    static_3_802BA924(rdram, ctx);
        goto after_45;
    // 0x8028950C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_45:
    // 0x80289510: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
L_80289514:
    // 0x80289514: lw          $t5, 0x168($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X168);
    // 0x80289518: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8028951C: bnel        $t5, $s7, L_802895EC
    if (ctx->r13 != ctx->r23) {
        // 0x80289520: lw          $t6, 0x164($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X164);
            goto L_802895EC;
    }
    goto skip_54;
    // 0x80289520: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    skip_54:
    // 0x80289524: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x80289528: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    // 0x8028952C: jal         0x802BCF3C
    // 0x80289530: addiu       $a1, $a2, 0x365C
    ctx->r5 = ADD32(ctx->r6, 0X365C);
    static_3_802BCF3C(rdram, ctx);
        goto after_46;
    // 0x80289530: addiu       $a1, $a2, 0x365C
    ctx->r5 = ADD32(ctx->r6, 0X365C);
    after_46:
    // 0x80289534: beq         $v0, $zero, L_802895E8
    if (ctx->r2 == 0) {
        // 0x80289538: lwc1        $f12, 0x158($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
            goto L_802895E8;
    }
    // 0x80289538: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8028953C: trunc.w.s   $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    ctx->f10.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x80289540: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80289544: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80289548: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028954C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80289550: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80289554: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x80289558: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8028955C: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80289560: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x80289564: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80289568: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    // 0x8028956C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80289570: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x80289574: sub.s       $f0, $f22, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f18.fl;
    // 0x80289578: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8028957C: nop

    // 0x80289580: bc1tl       L_802895B8
    if (c1cs) {
        // 0x80289584: lw          $t3, 0x160($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X160);
            goto L_802895B8;
    }
    goto skip_55;
    // 0x80289584: lw          $t3, 0x160($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X160);
    skip_55:
    // 0x80289588: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028958C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80289590: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80289594: nop

    // 0x80289598: bc1fl       L_80289634
    if (!c1cs) {
        // 0x8028959C: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_80289634;
    }
    goto skip_56;
    // 0x8028959C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_56:
    // 0x802895A0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802895A4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802895A8: nop

    // 0x802895AC: bc1fl       L_80289634
    if (!c1cs) {
        // 0x802895B0: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_80289634;
    }
    goto skip_57;
    // 0x802895B0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_57:
    // 0x802895B4: lw          $t3, 0x160($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X160);
L_802895B8:
    // 0x802895B8: lw          $t1, 0x15C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X15C);
    // 0x802895BC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802895C0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802895C4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802895C8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802895CC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x802895D0: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x802895D4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802895D8: jal         0x802BA924
    // 0x802895DC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    static_3_802BA924(rdram, ctx);
        goto after_47;
    // 0x802895DC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_47:
    // 0x802895E0: b           L_80289634
    // 0x802895E4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
        goto L_80289634;
    // 0x802895E4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_802895E8:
    // 0x802895E8: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
L_802895EC:
    // 0x802895EC: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x802895F0: lw          $t5, 0x15C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X15C);
    // 0x802895F4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802895F8: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x802895FC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80289600: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80289604: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80289608: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x8028960C: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80289610: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x80289614: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80289618: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8028961C: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x80289620: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80289624: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80289628: jal         0x802BA924
    // 0x8028962C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    static_3_802BA924(rdram, ctx);
        goto after_48;
    // 0x8028962C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_48:
L_80289630:
    // 0x80289630: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_80289634:
    // 0x80289634: jal         0x80317E10
    // 0x80289638: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_80317E10(rdram, ctx);
        goto after_49;
    // 0x80289638: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_49:
    // 0x8028963C: beq         $v0, $zero, L_802899E4
    if (ctx->r2 == 0) {
        // 0x80289640: nop
    
            goto L_802899E4;
    }
    // 0x80289640: nop

    // 0x80289644: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80289648: lw          $t2, 0x4($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X4);
    // 0x8028964C: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    // 0x80289650: beq         $a0, $t2, L_802899E4
    if (ctx->r4 == ctx->r10) {
        // 0x80289654: nop
    
            goto L_802899E4;
    }
    // 0x80289654: nop

    // 0x80289658: jal         0x803183C0
    // 0x8028965C: sw          $a0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r4;
    static_3_803183C0(rdram, ctx);
        goto after_50;
    // 0x8028965C: sw          $a0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r4;
    after_50:
    // 0x80289660: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80289664: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80289668: lw          $a2, 0xD4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD4);
    // 0x8028966C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80289670: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80289674: lw          $a1, 0x184($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X184);
    // 0x80289678: addiu       $a3, $sp, 0x170
    ctx->r7 = ADD32(ctx->r29, 0X170);
    // 0x8028967C: addiu       $t3, $sp, 0x16C
    ctx->r11 = ADD32(ctx->r29, 0X16C);
    // 0x80289680: bc1f        L_802899E4
    if (!c1cs) {
        // 0x80289684: addiu       $t1, $sp, 0x168
        ctx->r9 = ADD32(ctx->r29, 0X168);
            goto L_802899E4;
    }
    // 0x80289684: addiu       $t1, $sp, 0x168
    ctx->r9 = ADD32(ctx->r29, 0X168);
    // 0x80289688: addiu       $t8, $sp, 0x164
    ctx->r24 = ADD32(ctx->r29, 0X164);
    // 0x8028968C: addiu       $t0, $sp, 0x160
    ctx->r8 = ADD32(ctx->r29, 0X160);
    // 0x80289690: addiu       $t6, $sp, 0x15C
    ctx->r14 = ADD32(ctx->r29, 0X15C);
    // 0x80289694: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80289698: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8028969C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802896A0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802896A4: jal         0x802BA134
    // 0x802896A8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    static_3_802BA134(rdram, ctx);
        goto after_51;
    // 0x802896A8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_51:
    // 0x802896AC: beq         $v0, $zero, L_802899E4
    if (ctx->r2 == 0) {
        // 0x802896B0: addiu       $t4, $zero, 0x71
        ctx->r12 = ADD32(0, 0X71);
            goto L_802899E4;
    }
    // 0x802896B0: addiu       $t4, $zero, 0x71
    ctx->r12 = ADD32(0, 0X71);
    // 0x802896B4: sw          $t4, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r12;
    // 0x802896B8: blez        $s6, L_802897CC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x802896BC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802897CC;
    }
    // 0x802896BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802896C0: andi        $a2, $s6, 0x3
    ctx->r6 = ctx->r22 & 0X3;
    // 0x802896C4: beq         $a2, $zero, L_80289710
    if (ctx->r6 == 0) {
        // 0x802896C8: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_80289710;
    }
    // 0x802896C8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x802896CC: sll         $v1, $zero, 2
    ctx->r3 = S32(0 << 2);
    // 0x802896D0: addiu       $t5, $sp, 0xE8
    ctx->r13 = ADD32(ctx->r29, 0XE8);
    // 0x802896D4: addu        $v0, $v1, $t5
    ctx->r2 = ADD32(ctx->r3, ctx->r13);
L_802896D8:
    // 0x802896D8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802896DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802896E0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802896E4: bne         $s3, $t9, L_80289704
    if (ctx->r19 != ctx->r25) {
        // 0x802896E8: addu        $t7, $s4, $v1
        ctx->r15 = ADD32(ctx->r20, ctx->r3);
            goto L_80289704;
    }
    // 0x802896E8: addu        $t7, $s4, $v1
    ctx->r15 = ADD32(ctx->r20, ctx->r3);
    // 0x802896EC: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x802896F0: lw          $t2, 0x0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X0);
    // 0x802896F4: addiu       $a2, $a2, 0x4E3C
    ctx->r6 = ADD32(ctx->r6, 0X4E3C);
    // 0x802896F8: bne         $a2, $t2, L_80289704
    if (ctx->r6 != ctx->r10) {
        // 0x802896FC: nop
    
            goto L_80289704;
    }
    // 0x802896FC: nop

    // 0x80289700: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_80289704:
    // 0x80289704: bne         $a1, $a0, L_802896D8
    if (ctx->r5 != ctx->r4) {
        // 0x80289708: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_802896D8;
    }
    // 0x80289708: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8028970C: beq         $a0, $s6, L_802897CC
    if (ctx->r4 == ctx->r22) {
        // 0x80289710: addiu       $t3, $sp, 0xE8
        ctx->r11 = ADD32(ctx->r29, 0XE8);
            goto L_802897CC;
    }
L_80289710:
    // 0x80289710: addiu       $t3, $sp, 0xE8
    ctx->r11 = ADD32(ctx->r29, 0XE8);
    // 0x80289714: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x80289718: sll         $t1, $s6, 2
    ctx->r9 = S32(ctx->r22 << 2);
    // 0x8028971C: addu        $a1, $t1, $t3
    ctx->r5 = ADD32(ctx->r9, ctx->r11);
    // 0x80289720: addu        $v0, $v1, $t3
    ctx->r2 = ADD32(ctx->r3, ctx->r11);
L_80289724:
    // 0x80289724: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80289728: addu        $t0, $s4, $v1
    ctx->r8 = ADD32(ctx->r20, ctx->r3);
    // 0x8028972C: addu        $t5, $s4, $v1
    ctx->r13 = ADD32(ctx->r20, ctx->r3);
    // 0x80289730: bne         $s3, $t8, L_80289750
    if (ctx->r19 != ctx->r24) {
        // 0x80289734: addu        $t2, $s4, $v1
        ctx->r10 = ADD32(ctx->r20, ctx->r3);
            goto L_80289750;
    }
    // 0x80289734: addu        $t2, $s4, $v1
    ctx->r10 = ADD32(ctx->r20, ctx->r3);
    // 0x80289738: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x8028973C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80289740: addiu       $a2, $a2, 0x4E3C
    ctx->r6 = ADD32(ctx->r6, 0X4E3C);
    // 0x80289744: bnel        $a2, $t6, L_80289754
    if (ctx->r6 != ctx->r14) {
        // 0x80289748: lw          $t4, 0x4($v0)
        ctx->r12 = MEM_W(ctx->r2, 0X4);
            goto L_80289754;
    }
    goto skip_58;
    // 0x80289748: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    skip_58:
    // 0x8028974C: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_80289750:
    // 0x80289750: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
L_80289754:
    // 0x80289754: addu        $t8, $s4, $v1
    ctx->r24 = ADD32(ctx->r20, ctx->r3);
    // 0x80289758: bnel        $s3, $t4, L_8028977C
    if (ctx->r19 != ctx->r12) {
        // 0x8028975C: lw          $t7, 0x8($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X8);
            goto L_8028977C;
    }
    goto skip_59;
    // 0x8028975C: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    skip_59:
    // 0x80289760: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x80289764: lw          $t9, 0x4($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X4);
    // 0x80289768: addiu       $a2, $a2, 0x4E3C
    ctx->r6 = ADD32(ctx->r6, 0X4E3C);
    // 0x8028976C: bnel        $a2, $t9, L_8028977C
    if (ctx->r6 != ctx->r25) {
        // 0x80289770: lw          $t7, 0x8($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X8);
            goto L_8028977C;
    }
    goto skip_60;
    // 0x80289770: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    skip_60:
    // 0x80289774: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x80289778: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
L_8028977C:
    // 0x8028977C: bnel        $s3, $t7, L_802897A0
    if (ctx->r19 != ctx->r15) {
        // 0x80289780: lw          $t3, 0xC($v0)
        ctx->r11 = MEM_W(ctx->r2, 0XC);
            goto L_802897A0;
    }
    goto skip_61;
    // 0x80289780: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    skip_61:
    // 0x80289784: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x80289788: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x8028978C: addiu       $a2, $a2, 0x4E3C
    ctx->r6 = ADD32(ctx->r6, 0X4E3C);
    // 0x80289790: bnel        $a2, $t1, L_802897A0
    if (ctx->r6 != ctx->r9) {
        // 0x80289794: lw          $t3, 0xC($v0)
        ctx->r11 = MEM_W(ctx->r2, 0XC);
            goto L_802897A0;
    }
    goto skip_62;
    // 0x80289794: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    skip_62:
    // 0x80289798: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
    // 0x8028979C: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
L_802897A0:
    // 0x802897A0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x802897A4: bne         $s3, $t3, L_802897C4
    if (ctx->r19 != ctx->r11) {
        // 0x802897A8: nop
    
            goto L_802897C4;
    }
    // 0x802897A8: nop

    // 0x802897AC: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x802897B0: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x802897B4: addiu       $a2, $a2, 0x4E3C
    ctx->r6 = ADD32(ctx->r6, 0X4E3C);
    // 0x802897B8: bne         $a2, $t0, L_802897C4
    if (ctx->r6 != ctx->r8) {
        // 0x802897BC: nop
    
            goto L_802897C4;
    }
    // 0x802897BC: nop

    // 0x802897C0: sw          $s7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r23;
L_802897C4:
    // 0x802897C4: bne         $v0, $a1, L_80289724
    if (ctx->r2 != ctx->r5) {
        // 0x802897C8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80289724;
    }
    // 0x802897C8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_802897CC:
    // 0x802897CC: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x802897D0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802897D4: bne         $t6, $s7, L_8028980C
    if (ctx->r14 != ctx->r23) {
        // 0x802897D8: addiu       $a0, $a0, 0x4E3C
        ctx->r4 = ADD32(ctx->r4, 0X4E3C);
            goto L_8028980C;
    }
    // 0x802897D8: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    // 0x802897DC: jal         0x8031A3A8
    // 0x802897E0: nop

    static_3_8031A3A8(rdram, ctx);
        goto after_52;
    // 0x802897E0: nop

    after_52:
    // 0x802897E4: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x802897E8: nop

    // 0x802897EC: bc1fl       L_8028981C
    if (!c1cs) {
        // 0x802897F0: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_8028981C;
    }
    goto skip_63;
    // 0x802897F0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_63:
    // 0x802897F4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802897F8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802897FC: jal         0x8031A3B0
    // 0x80289800: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_8031A3B0(rdram, ctx);
        goto after_53;
    // 0x80289800: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_53:
    // 0x80289804: b           L_8028981C
    // 0x80289808: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
        goto L_8028981C;
    // 0x80289808: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_8028980C:
    // 0x8028980C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80289810: jal         0x8031A3B0
    // 0x80289814: nop

    static_3_8031A3B0(rdram, ctx);
        goto after_54;
    // 0x80289814: nop

    after_54:
    // 0x80289818: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_8028981C:
    // 0x8028981C: jal         0x8031A3A8
    // 0x80289820: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    static_3_8031A3A8(rdram, ctx);
        goto after_55;
    // 0x80289820: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_55:
    // 0x80289824: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x80289828: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8028982C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80289830: addiu       $a3, $zero, 0x71
    ctx->r7 = ADD32(0, 0X71);
    // 0x80289834: bc1t        L_80289878
    if (c1cs) {
        // 0x80289838: addiu       $t2, $zero, 0xFF
        ctx->r10 = ADD32(0, 0XFF);
            goto L_80289878;
    }
    // 0x80289838: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8028983C: sub.s       $f18, $f22, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f22.fl - ctx->f0.fl;
    // 0x80289840: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80289844: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80289848: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028984C: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80289850: addiu       $t4, $zero, 0x73
    ctx->r12 = ADD32(0, 0X73);
    // 0x80289854: sub.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80289858: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x8028985C: nop

    // 0x80289860: bc1f        L_80289870
    if (!c1cs) {
        // 0x80289864: nop
    
            goto L_80289870;
    }
    // 0x80289864: nop

    // 0x80289868: b           L_8028987C
    // 0x8028986C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
        goto L_8028987C;
    // 0x8028986C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_80289870:
    // 0x80289870: b           L_8028987C
    // 0x80289874: sw          $t4, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r12;
        goto L_8028987C;
    // 0x80289874: sw          $t4, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r12;
L_80289878:
    // 0x80289878: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
L_8028987C:
    // 0x8028987C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x80289880: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x80289884: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80289888: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x8028988C: bc1f        L_802898C8
    if (!c1cs) {
        // 0x80289890: addiu       $t1, $zero, 0x80
        ctx->r9 = ADD32(0, 0X80);
            goto L_802898C8;
    }
    // 0x80289890: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x80289894: lw          $t9, 0x160($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X160);
    // 0x80289898: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x8028989C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802898A0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802898A4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802898A8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802898AC: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x802898B0: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x802898B4: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    // 0x802898B8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802898BC: jal         0x802BA924
    // 0x802898C0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    static_3_802BA924(rdram, ctx);
        goto after_56;
    // 0x802898C0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_56:
    // 0x802898C4: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
L_802898C8:
    // 0x802898C8: lw          $t3, 0x168($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X168);
    // 0x802898CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802898D0: bnel        $t3, $s7, L_802899A0
    if (ctx->r11 != ctx->r23) {
        // 0x802898D4: lw          $t2, 0x164($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X164);
            goto L_802899A0;
    }
    goto skip_64;
    // 0x802898D4: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
    skip_64:
    // 0x802898D8: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x802898DC: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    // 0x802898E0: jal         0x802BCF3C
    // 0x802898E4: addiu       $a1, $a2, 0x4E3C
    ctx->r5 = ADD32(ctx->r6, 0X4E3C);
    static_3_802BCF3C(rdram, ctx);
        goto after_57;
    // 0x802898E4: addiu       $a1, $a2, 0x4E3C
    ctx->r5 = ADD32(ctx->r6, 0X4E3C);
    after_57:
    // 0x802898E8: beq         $v0, $zero, L_8028999C
    if (ctx->r2 == 0) {
        // 0x802898EC: lwc1        $f12, 0x158($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
            goto L_8028999C;
    }
    // 0x802898EC: lwc1        $f12, 0x158($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X158);
    // 0x802898F0: trunc.w.s   $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x802898F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802898F8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802898FC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80289900: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80289904: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80289908: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x8028990C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80289910: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x80289914: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x80289918: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8028991C: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x80289920: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80289924: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x80289928: sub.s       $f0, $f22, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f6.fl;
    // 0x8028992C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80289930: nop

    // 0x80289934: bc1tl       L_8028996C
    if (c1cs) {
        // 0x80289938: lw          $t4, 0x160($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X160);
            goto L_8028996C;
    }
    goto skip_65;
    // 0x80289938: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    skip_65:
    // 0x8028993C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80289940: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80289944: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80289948: nop

    // 0x8028994C: bc1f        L_802899E4
    if (!c1cs) {
        // 0x80289950: nop
    
            goto L_802899E4;
    }
    // 0x80289950: nop

    // 0x80289954: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80289958: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8028995C: nop

    // 0x80289960: bc1f        L_802899E4
    if (!c1cs) {
        // 0x80289964: nop
    
            goto L_802899E4;
    }
    // 0x80289964: nop

    // 0x80289968: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
L_8028996C:
    // 0x8028996C: lw          $t5, 0x15C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X15C);
    // 0x80289970: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80289974: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80289978: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8028997C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80289980: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80289984: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x80289988: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8028998C: jal         0x802BA924
    // 0x80289990: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    static_3_802BA924(rdram, ctx);
        goto after_58;
    // 0x80289990: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_58:
    // 0x80289994: b           L_802899E4
    // 0x80289998: nop

        goto L_802899E4;
    // 0x80289998: nop

L_8028999C:
    // 0x8028999C: lw          $t2, 0x164($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X164);
L_802899A0:
    // 0x802899A0: lw          $t1, 0x160($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X160);
    // 0x802899A4: lw          $t3, 0x15C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X15C);
    // 0x802899A8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802899AC: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x802899B0: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x802899B4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802899B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802899BC: lw          $a1, 0x170($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X170);
    // 0x802899C0: lw          $a2, 0x16C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X16C);
    // 0x802899C4: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x802899C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802899CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802899D0: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x802899D4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802899D8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802899DC: jal         0x802BA924
    // 0x802899E0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    static_3_802BA924(rdram, ctx);
        goto after_59;
    // 0x802899E0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_59:
L_802899E4:
    // 0x802899E4: jal         0x8022337C
    // 0x802899E8: nop

    static_3_8022337C(rdram, ctx);
        goto after_60;
    // 0x802899E8: nop

    after_60:
    // 0x802899EC: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_802899F0:
    // 0x802899F0: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x802899F4: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x802899F8: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x802899FC: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80289A00: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80289A04: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x80289A08: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x80289A0C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80289A10: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80289A14: lw          $s6, 0x64($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X64);
    // 0x80289A18: lw          $s7, 0x68($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X68);
    // 0x80289A1C: jr          $ra
    // 0x80289A20: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
    return;
    // 0x80289A20: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
;}
RECOMP_FUNC void D_802F29CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2A4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802F2A50: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802F2A54: jr          $ra
    // 0x802F2A58: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802F2A58: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80290CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290D24: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80290D28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80290D2C: jal         0x8022331C
    // 0x80290D30: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x80290D30: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    after_0:
    // 0x80290D34: jal         0x802233EC
    // 0x80290D38: lui         $a0, 0xE2
    ctx->r4 = S32(0XE2 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_1;
    // 0x80290D38: lui         $a0, 0xE2
    ctx->r4 = S32(0XE2 << 16);
    after_1:
    // 0x80290D3C: jal         0x8022342C
    // 0x80290D40: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_2;
    // 0x80290D40: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    after_2:
    // 0x80290D44: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x80290D48: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80290D4C: jal         0x80228DE0
    // 0x80290D50: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x80290D50: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_3:
    // 0x80290D54: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x80290D58: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80290D5C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80290D60: jal         0x802D01D4
    // 0x80290D64: lw          $a1, 0x130($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X130);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x80290D64: lw          $a1, 0x130($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X130);
    after_4:
    // 0x80290D68: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x80290D6C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80290D70: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80290D74: jal         0x802D01D4
    // 0x80290D78: lw          $a1, 0x134($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X134);
    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x80290D78: lw          $a1, 0x134($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X134);
    after_5:
    // 0x80290D7C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80290D80: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80290D84: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    // 0x80290D88: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80290D8C: jal         0x8022A210
    // 0x80290D90: lw          $a2, 0x108($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X108);
    static_3_8022A210(rdram, ctx);
        goto after_6;
    // 0x80290D90: lw          $a2, 0x108($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X108);
    after_6:
    // 0x80290D94: jal         0x80223108
    // 0x80290D98: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    static_3_80223108(rdram, ctx);
        goto after_7;
    // 0x80290D98: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_7:
    // 0x80290D9C: jal         0x80223468
    // 0x80290DA0: addiu       $a0, $zero, 0x1CE
    ctx->r4 = ADD32(0, 0X1CE);
    static_3_80223468(rdram, ctx);
        goto after_8;
    // 0x80290DA0: addiu       $a0, $zero, 0x1CE
    ctx->r4 = ADD32(0, 0X1CE);
    after_8:
    // 0x80290DA4: jal         0x8021F4E4
    // 0x80290DA8: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_9;
    // 0x80290DA8: nop

    after_9:
    // 0x80290DAC: addiu       $t9, $zero, 0xAA0
    ctx->r25 = ADD32(0, 0XAA0);
    // 0x80290DB0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80290DB4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80290DB8: addiu       $t2, $zero, 0x7F
    ctx->r10 = ADD32(0, 0X7F);
    // 0x80290DBC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80290DC0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80290DC4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80290DC8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80290DCC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80290DD0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80290DD4: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    // 0x80290DD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80290DDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80290DE0: jal         0x8021F35C
    // 0x80290DE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x80290DE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x80290DE8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80290DEC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80290DF0: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x80290DF4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80290DF8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80290DFC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80290E00: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80290E04: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80290E08: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    // 0x80290E0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80290E10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80290E14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80290E18: jal         0x8021F35C
    // 0x80290E1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x80290E1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80290E20: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80290E24: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80290E28: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x80290E2C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80290E30: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80290E34: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80290E38: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80290E3C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80290E40: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80290E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80290E48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80290E4C: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    // 0x80290E50: jal         0x8021F35C
    // 0x80290E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x80290E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x80290E58: addiu       $t2, $zero, 0xAA0
    ctx->r10 = ADD32(0, 0XAA0);
    // 0x80290E5C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80290E60: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x80290E64: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x80290E68: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80290E6C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80290E70: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80290E74: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80290E78: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80290E7C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80290E80: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80290E84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80290E88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80290E8C: jal         0x8021F35C
    // 0x80290E90: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    static_3_8021F35C(rdram, ctx);
        goto after_13;
    // 0x80290E90: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    after_13:
    // 0x80290E94: jal         0x8021FCD0
    // 0x80290E98: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_14;
    // 0x80290E98: nop

    after_14:
    // 0x80290E9C: jal         0x802230E4
    // 0x80290EA0: nop

    static_3_802230E4(rdram, ctx);
        goto after_15;
    // 0x80290EA0: nop

    after_15:
    // 0x80290EA4: jal         0x8022337C
    // 0x80290EA8: nop

    static_3_8022337C(rdram, ctx);
        goto after_16;
    // 0x80290EA8: nop

    after_16:
    // 0x80290EAC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80290EB0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80290EB4: jr          $ra
    // 0x80290EB8: nop

    return;
    // 0x80290EB8: nop

;}
RECOMP_FUNC void func_802D2728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D27A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802D27AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802D27B0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802D27B4: jr          $ra
    // 0x802D27B8: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802D27B8: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802B2848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B28C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B28CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B28D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B28D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802B28D8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802B28DC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802B28E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B28E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B28E8: bnel        $v0, $at, L_802B2930
    if (ctx->r2 != ctx->r1) {
        // 0x802B28EC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802B2930;
    }
    goto skip_0;
    // 0x802B28EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x802B28F0: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x802B28F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B28F8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B28FC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x802B2900: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B2904: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B2908: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802B290C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B2910: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B2914: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B2918: nop

    // 0x802B291C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802B2920: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802B2924: b           L_802B2970
    // 0x802B2928: swc1        $f6, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f6.u32l;
        goto L_802B2970;
    // 0x802B2928: swc1        $f6, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f6.u32l;
    // 0x802B292C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_802B2930:
    // 0x802B2930: bne         $v0, $at, L_802B2970
    if (ctx->r2 != ctx->r1) {
        // 0x802B2934: nop
    
            goto L_802B2970;
    }
    // 0x802B2934: nop

    // 0x802B2938: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x802B293C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2940: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2944: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x802B2948: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B294C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B2950: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802B2954: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B2958: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802B295C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B2960: nop

    // 0x802B2964: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B2968: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x802B296C: swc1        $f16, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f16.u32l;
L_802B2970:
    // 0x802B2970: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2974: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2978: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B297C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2980: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2984: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802B2988: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    // 0x802B298C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B2990: lw          $a1, 0xE4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE4);
    // 0x802B2994: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802B2998: jal         0x80318678
    // 0x802B299C: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    static_3_80318678(rdram, ctx);
        goto after_0;
    // 0x802B299C: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    after_0:
    // 0x802B29A0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802B29A4: lw          $a1, 0xE4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE4);
    // 0x802B29A8: jal         0x80317EC0
    // 0x802B29AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80317EC0(rdram, ctx);
        goto after_1;
    // 0x802B29AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802B29B0: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x802B29B4: jal         0x802CF4D0
    // 0x802B29B8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_2;
    // 0x802B29B8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x802B29BC: lbu         $t8, 0xFA($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XFA);
    // 0x802B29C0: swc1        $f0, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f0.u32l;
    // 0x802B29C4: beq         $t8, $zero, L_802B2A64
    if (ctx->r24 == 0) {
        // 0x802B29C8: nop
    
            goto L_802B2A64;
    }
    // 0x802B29C8: nop

    // 0x802B29CC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802B29D0: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802B29D4: lwc1        $f16, 0x10C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802B29D8: lwc1        $f8, 0xFC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XFC);
    // 0x802B29DC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802B29E0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B29E4: sub.s       $f0, $f16, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x802B29E8: bc1fl       L_802B2A04
    if (!c1cs) {
        // 0x802B29EC: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_802B2A04;
    }
    goto skip_1;
    // 0x802B29EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_1:
    // 0x802B29F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B29F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B29F8: b           L_802B2A0C
    // 0x802B29FC: swc1        $f6, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f6.u32l;
        goto L_802B2A0C;
    // 0x802B29FC: swc1        $f6, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f6.u32l;
    // 0x802B2A00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_802B2A04:
    // 0x802B2A04: nop

    // 0x802B2A08: swc1        $f18, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f18.u32l;
L_802B2A0C:
    // 0x802B2A0C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802B2A10: lwc1        $f16, 0x100($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X100);
    // 0x802B2A14: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2A18: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802B2A1C: nop

    // 0x802B2A20: bc1tl       L_802B2A5C
    if (c1cs) {
        // 0x802B2A24: swc1        $f12, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = ctx->f12.u32l;
            goto L_802B2A5C;
    }
    goto skip_2;
    // 0x802B2A24: swc1        $f12, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f12.u32l;
    skip_2:
    // 0x802B2A28: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802B2A2C: nop

    // 0x802B2A30: bc1fl       L_802B2A44
    if (!c1cs) {
        // 0x802B2A34: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802B2A44;
    }
    goto skip_3;
    // 0x802B2A34: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_3:
    // 0x802B2A38: b           L_802B2A44
    // 0x802B2A3C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802B2A44;
    // 0x802B2A3C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802B2A40: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802B2A44:
    // 0x802B2A44: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2A48: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x802B2A4C: nop

    // 0x802B2A50: bc1fl       L_802B2BDC
    if (!c1cs) {
        // 0x802B2A54: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B2BDC;
    }
    goto skip_4;
    // 0x802B2A54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x802B2A58: swc1        $f12, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f12.u32l;
L_802B2A5C:
    // 0x802B2A5C: b           L_802B2BD8
    // 0x802B2A60: sb          $zero, 0xFA($s0)
    MEM_B(0XFA, ctx->r16) = 0;
        goto L_802B2BD8;
    // 0x802B2A60: sb          $zero, 0xFA($s0)
    MEM_B(0XFA, ctx->r16) = 0;
L_802B2A64:
    // 0x802B2A64: jal         0x80234AF0
    // 0x802B2A68: nop

    static_3_80234AF0(rdram, ctx);
        goto after_3;
    // 0x802B2A68: nop

    after_3:
    // 0x802B2A6C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B2A70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B2A74: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802B2A78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B2A7C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802B2A80: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2A84: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2A88: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802B2A8C: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x802B2A90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2A94: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802B2A98: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x802B2A9C: nop

    // 0x802B2AA0: bc1fl       L_802B2BDC
    if (!c1cs) {
        // 0x802B2AA4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B2BDC;
    }
    goto skip_5;
    // 0x802B2AA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x802B2AA8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802B2AAC: lwc1        $f0, 0x10C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10C);
    // 0x802B2AB0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802B2AB4: nop

    // 0x802B2AB8: bc1fl       L_802B2ACC
    if (!c1cs) {
        // 0x802B2ABC: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802B2ACC;
    }
    goto skip_6;
    // 0x802B2ABC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_6:
    // 0x802B2AC0: b           L_802B2ACC
    // 0x802B2AC4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802B2ACC;
    // 0x802B2AC4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802B2AC8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802B2ACC:
    // 0x802B2ACC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2AD0: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x802B2AD4: nop

    // 0x802B2AD8: bc1fl       L_802B2BDC
    if (!c1cs) {
        // 0x802B2ADC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B2BDC;
    }
    goto skip_7;
    // 0x802B2ADC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x802B2AE0: jal         0x80234AF0
    // 0x802B2AE4: nop

    static_3_80234AF0(rdram, ctx);
        goto after_4;
    // 0x802B2AE4: nop

    after_4:
    // 0x802B2AE8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B2AEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B2AF0: nop

    // 0x802B2AF4: sub.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x802B2AF8: jal         0x80234AF0
    // 0x802B2AFC: swc1        $f10, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f10.u32l;
    static_3_80234AF0(rdram, ctx);
        goto after_5;
    // 0x802B2AFC: swc1        $f10, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f10.u32l;
    after_5:
    // 0x802B2B00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B2B04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B2B08: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802B2B0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B2B10: sub.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x802B2B14: lwc1        $f18, 0xAC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x802B2B18: lwc1        $f12, 0x5C8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X5C8);
    // 0x802B2B1C: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802B2B20: add.s       $f2, $f6, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802B2B24: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802B2B28: swc1        $f2, 0x5CC($s0)
    MEM_W(0X5CC, ctx->r16) = ctx->f2.u32l;
    // 0x802B2B2C: bc1fl       L_802B2B3C
    if (!c1cs) {
        // 0x802B2B30: lwc1        $f0, 0x5D0($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X5D0);
            goto L_802B2B3C;
    }
    goto skip_8;
    // 0x802B2B30: lwc1        $f0, 0x5D0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5D0);
    skip_8:
    // 0x802B2B34: swc1        $f12, 0x5CC($s0)
    MEM_W(0X5CC, ctx->r16) = ctx->f12.u32l;
    // 0x802B2B38: lwc1        $f0, 0x5D0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5D0);
L_802B2B3C:
    // 0x802B2B3C: lwc1        $f10, 0x5CC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X5CC);
    // 0x802B2B40: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802B2B44: nop

    // 0x802B2B48: bc1f        L_802B2B54
    if (!c1cs) {
        // 0x802B2B4C: nop
    
            goto L_802B2B54;
    }
    // 0x802B2B4C: nop

    // 0x802B2B50: swc1        $f0, 0x5CC($s0)
    MEM_W(0X5CC, ctx->r16) = ctx->f0.u32l;
L_802B2B54:
    // 0x802B2B54: jal         0x80234AF0
    // 0x802B2B58: nop

    static_3_80234AF0(rdram, ctx);
        goto after_6;
    // 0x802B2B58: nop

    after_6:
    // 0x802B2B5C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B2B60: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B2B64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2B68: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2B6C: sub.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x802B2B70: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B2B74: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B2B78: lwc1        $f16, 0x8C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802B2B7C: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802B2B80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B2B84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B2B88: nop

    // 0x802B2B8C: swc1        $f4, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f4.u32l;
    // 0x802B2B90: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802B2B94: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802B2B98: jal         0x80234AF0
    // 0x802B2B9C: swc1        $f8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f8.u32l;
    static_3_80234AF0(rdram, ctx);
        goto after_7;
    // 0x802B2B9C: swc1        $f8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f8.u32l;
    after_7:
    // 0x802B2BA0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B2BA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B2BA8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B2BAC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802B2BB0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802B2BB4: nop

    // 0x802B2BB8: bc1fl       L_802B2BD8
    if (!c1cs) {
        // 0x802B2BBC: sb          $t9, 0xFA($s0)
        MEM_B(0XFA, ctx->r16) = ctx->r25;
            goto L_802B2BD8;
    }
    goto skip_9;
    // 0x802B2BBC: sb          $t9, 0xFA($s0)
    MEM_B(0XFA, ctx->r16) = ctx->r25;
    skip_9:
    // 0x802B2BC0: lwc1        $f18, 0x9C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x802B2BC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B2BC8: nop

    // 0x802B2BCC: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x802B2BD0: swc1        $f16, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f16.u32l;
    // 0x802B2BD4: sb          $t9, 0xFA($s0)
    MEM_B(0XFA, ctx->r16) = ctx->r25;
L_802B2BD8:
    // 0x802B2BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B2BDC:
    // 0x802B2BDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B2BE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B2BE4: jr          $ra
    // 0x802B2BE8: nop

    return;
    // 0x802B2BE8: nop

;}
RECOMP_FUNC void D_802D4388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D4408: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x802D440C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x802D4410: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D4414: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802D4418: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D441C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802D4420: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D4424: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802D4428: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802D442C: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802D4430: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802D4434: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x802D4438: lbu         $t8, 0x34C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X34C);
    // 0x802D443C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D4440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D4444: bne         $t8, $zero, L_802D4460
    if (ctx->r24 != 0) {
        // 0x802D4448: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802D4460;
    }
    // 0x802D4448: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D444C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D4450: jal         0x80231A24
    // 0x802D4454: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D4454: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D4458: b           L_802D4468
    // 0x802D445C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D4468;
    // 0x802D445C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D4460:
    // 0x802D4460: sb          $zero, 0x34C($v0)
    MEM_B(0X34C, ctx->r2) = 0;
    // 0x802D4464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D4468:
    // 0x802D4468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D446C: jr          $ra
    // 0x802D4470: nop

    return;
    // 0x802D4470: nop

;}
RECOMP_FUNC void D_802D8088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8108: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D810C: jr          $ra
    // 0x802D8110: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802D8110: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_80234AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234AF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80234AFC: nop

    // 0x80234B00: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80234B04: nop

    // 0x80234B08: bc1fl       L_80234B1C
    if (!c1cs) {
        // 0x80234B0C: neg.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
            goto L_80234B1C;
    }
    goto skip_0;
    // 0x80234B0C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    skip_0:
    // 0x80234B10: jr          $ra
    // 0x80234B14: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x80234B14: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x80234B18: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_80234B1C:
    // 0x80234B1C: jr          $ra
    // 0x80234B20: nop

    return;
    // 0x80234B20: nop

;}
RECOMP_FUNC void D_8021B460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021B460: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8021B464: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8021B468: lhu         $t6, 0x26($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X26);
    // 0x8021B46C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8021B470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B474: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B478: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8021B47C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8021B480: beq         $at, $zero, L_8021B4A0
    if (ctx->r1 == 0) {
        // 0x8021B484: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8021B4A0;
    }
    // 0x8021B484: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021B488: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021B48C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021B490: jal         0x80231A24
    // 0x8021B494: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021B494: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x8021B498: b           L_8021B678
    // 0x8021B49C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B678;
    // 0x8021B49C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B4A0:
    // 0x8021B4A0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8021B4A4: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8021B4A8: sll         $t7, $a3, 3
    ctx->r15 = S32(ctx->r7 << 3);
    // 0x8021B4AC: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x8021B4B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8021B4B4: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x8021B4B8: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x8021B4BC: lhu         $t2, 0x10($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X10);
    // 0x8021B4C0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8021B4C4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8021B4C8: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8021B4CC: bne         $at, $zero, L_8021B4EC
    if (ctx->r1 != 0) {
        // 0x8021B4D0: or          $t9, $v0, $zero
        ctx->r25 = ctx->r2 | 0;
            goto L_8021B4EC;
    }
    // 0x8021B4D0: or          $t9, $v0, $zero
    ctx->r25 = ctx->r2 | 0;
    // 0x8021B4D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021B4D8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021B4DC: jal         0x80231A24
    // 0x8021B4E0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021B4E0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
    // 0x8021B4E4: b           L_8021B678
    // 0x8021B4E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B678;
    // 0x8021B4E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B4EC:
    // 0x8021B4EC: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x8021B4F0: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x8021B4F4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021B4F8: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x8021B4FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021B500: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8021B504: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x8021B508: bnel        $a2, $zero, L_8021B524
    if (ctx->r6 != 0) {
        // 0x8021B50C: lw          $t8, 0x8($a2)
        ctx->r24 = MEM_W(ctx->r6, 0X8);
            goto L_8021B524;
    }
    goto skip_0;
    // 0x8021B50C: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
    skip_0:
    // 0x8021B510: jal         0x80231A24
    // 0x8021B514: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x8021B514: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x8021B518: b           L_8021B678
    // 0x8021B51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B678;
    // 0x8021B51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021B520: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
L_8021B524:
    // 0x8021B524: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8021B528: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8021B52C: lbu         $t2, 0x4($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0X4);
    // 0x8021B530: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8021B534: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8021B538: slt         $at, $t7, $t2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8021B53C: bne         $at, $zero, L_8021B560
    if (ctx->r1 != 0) {
        // 0x8021B540: sll         $t9, $v1, 1
        ctx->r25 = S32(ctx->r3 << 1);
            goto L_8021B560;
    }
    // 0x8021B540: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x8021B544: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021B548: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021B54C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8021B550: jal         0x80231A24
    // 0x8021B554: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x8021B554: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x8021B558: b           L_8021B678
    // 0x8021B55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B678;
    // 0x8021B55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B560:
    // 0x8021B560: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x8021B564: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x8021B568: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x8021B56C: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x8021B570: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x8021B574: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8021B578: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021B57C: sll         $t8, $t6, 6
    ctx->r24 = S32(ctx->r14 << 6);
    // 0x8021B580: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021B584: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8021B588: jal         0x80228DE0
    // 0x8021B58C: addu        $a0, $t3, $t8
    ctx->r4 = ADD32(ctx->r11, ctx->r24);
    func_80228DE0(rdram, ctx);
        goto after_4;
    // 0x8021B58C: addu        $a0, $t3, $t8
    ctx->r4 = ADD32(ctx->r11, ctx->r24);
    after_4:
    // 0x8021B590: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8021B594: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8021B598: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8021B59C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8021B5A0: bne         $v1, $zero, L_8021B5FC
    if (ctx->r3 != 0) {
        // 0x8021B5A4: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_8021B5FC;
    }
    // 0x8021B5A4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8021B5A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021B5AC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8021B5B0: lwc1        $f2, 0x20($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8021B5B4: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8021B5B8: nop

    // 0x8021B5BC: bc1tl       L_8021B678
    if (c1cs) {
        // 0x8021B5C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021B678;
    }
    goto skip_1;
    // 0x8021B5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8021B5C4: div.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8021B5C8: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x8021B5CC: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8021B5D0: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x8021B5D4: lhu         $t4, 0x0($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X0);
    // 0x8021B5D8: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x8021B5DC: addu        $a0, $t2, $t5
    ctx->r4 = ADD32(ctx->r10, ctx->r13);
    // 0x8021B5E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021B5E4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021B5E8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8021B5EC: jal         0x8022A210
    // 0x8021B5F0: nop

    static_3_8022A210(rdram, ctx);
        goto after_5;
    // 0x8021B5F0: nop

    after_5:
    // 0x8021B5F4: b           L_8021B678
    // 0x8021B5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B678;
    // 0x8021B5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B5FC:
    // 0x8021B5FC: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8021B600: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x8021B604: lwc1        $f6, 0x20($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8021B608: addu        $t8, $t3, $v1
    ctx->r24 = ADD32(ctx->r11, ctx->r3);
    // 0x8021B60C: lhu         $t7, 0x0($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X0);
    // 0x8021B610: sll         $t9, $t7, 6
    ctx->r25 = S32(ctx->r15 << 6);
    // 0x8021B614: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x8021B618: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021B61C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021B620: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
    // 0x8021B624: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x8021B628: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x8021B62C: lwc1        $f16, 0x20($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8021B630: addu        $t5, $t2, $v1
    ctx->r13 = ADD32(ctx->r10, ctx->r3);
    // 0x8021B634: lhu         $t3, 0x0($t5)
    ctx->r11 = MEM_HU(ctx->r13, 0X0);
    // 0x8021B638: sll         $t8, $t3, 6
    ctx->r24 = S32(ctx->r11 << 6);
    // 0x8021B63C: addu        $v0, $t4, $t8
    ctx->r2 = ADD32(ctx->r12, ctx->r24);
    // 0x8021B640: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021B644: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021B648: swc1        $f18, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f18.u32l;
    // 0x8021B64C: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x8021B650: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8021B654: lwc1        $f6, 0x20($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8021B658: addu        $t9, $t6, $v1
    ctx->r25 = ADD32(ctx->r14, ctx->r3);
    // 0x8021B65C: lhu         $t2, 0x0($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X0);
    // 0x8021B660: sll         $t5, $t2, 6
    ctx->r13 = S32(ctx->r10 << 6);
    // 0x8021B664: addu        $v0, $t7, $t5
    ctx->r2 = ADD32(ctx->r15, ctx->r13);
    // 0x8021B668: lwc1        $f4, 0x38($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8021B66C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021B670: swc1        $f8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f8.u32l;
    // 0x8021B674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B678:
    // 0x8021B678: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8021B67C: jr          $ra
    // 0x8021B680: nop

    return;
    // 0x8021B680: nop

;}
RECOMP_FUNC void D_802CC9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CCA3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802CCA40: beq         $a0, $zero, L_802CCA64
    if (ctx->r4 == 0) {
        // 0x802CCA44: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802CCA64;
    }
    // 0x802CCA44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802CCA48: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CCA4C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802CCA50: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x802CCA54: beq         $t7, $zero, L_802CCA64
    if (ctx->r15 == 0) {
        // 0x802CCA58: sw          $t6, 0xAC($a0)
        MEM_W(0XAC, ctx->r4) = ctx->r14;
            goto L_802CCA64;
    }
    // 0x802CCA58: sw          $t6, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r14;
    // 0x802CCA5C: jal         0x802C681C
    // 0x802CCA60: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802CCA60: nop

    after_0:
L_802CCA64:
    // 0x802CCA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802CCA68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802CCA6C: jr          $ra
    // 0x802CCA70: nop

    return;
    // 0x802CCA70: nop

;}
RECOMP_FUNC void D_80205C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205C2C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80205C30: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205C34: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80205C38: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205C3C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205C40: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80205C44: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80205C48: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80205C4C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80205C50: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80205C54: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205C58: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80205C5C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80205C60: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205C64: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80205C68: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80205C6C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80205C70: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80205C74: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80205C78: jal         0x80231C58
    // 0x80205C7C: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205C7C: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80205C80: bne         $v0, $zero, L_80205D0C
    if (ctx->r2 != 0) {
        // 0x80205C84: lwc1        $f0, 0x40($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80205D0C;
    }
    // 0x80205C84: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80205C88: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80205C8C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80205C90: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80205C94: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80205C98: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80205C9C: swc1        $f0, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f0.u32l;
    // 0x80205CA0: swc1        $f14, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->f14.u32l;
    // 0x80205CA4: swc1        $f16, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->f16.u32l;
    // 0x80205CA8: swc1        $f18, 0x128($s0)
    MEM_W(0X128, ctx->r16) = ctx->f18.u32l;
    // 0x80205CAC: swc1        $f2, 0x130($s0)
    MEM_W(0X130, ctx->r16) = ctx->f2.u32l;
    // 0x80205CB0: swc1        $f12, 0x134($s0)
    MEM_W(0X134, ctx->r16) = ctx->f12.u32l;
    // 0x80205CB4: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x80205CB8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80205CBC: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80205CC0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80205CC4: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80205CC8: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x80205CCC: jal         0x8022A784
    // 0x80205CD0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    static_3_8022A784(rdram, ctx);
        goto after_1;
    // 0x80205CD0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x80205CD4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80205CD8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80205CDC: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80205CE0: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80205CE4: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x80205CE8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80205CEC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80205CF0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80205CF4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80205CF8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80205CFC: jal         0x8022A784
    // 0x80205D00: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    static_3_8022A784(rdram, ctx);
        goto after_2;
    // 0x80205D00: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80205D04: jal         0x80207260
    // 0x80205D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80207260(rdram, ctx);
        goto after_3;
    // 0x80205D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80205D0C:
    // 0x80205D0C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80205D10: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80205D14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80205D18: jr          $ra
    // 0x80205D1C: nop

    return;
    // 0x80205D1C: nop

;}
RECOMP_FUNC void D_802A1E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1EDC: jr          $ra
    // 0x802A1EE0: lwc1        $f0, 0xA4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA4);
    return;
    // 0x802A1EE0: lwc1        $f0, 0xA4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XA4);
;}
RECOMP_FUNC void D_8021165C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021165C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80211660: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80211664: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021166C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211670: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80211674: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80211678: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021167C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80211680: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x80211684: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80211688: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021168C: bnel        $v0, $zero, L_802116A8
    if (ctx->r2 != 0) {
        // 0x80211690: lw          $t1, 0x8($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X8);
            goto L_802116A8;
    }
    goto skip_0;
    // 0x80211690: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x80211694: jal         0x80231A24
    // 0x80211698: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80211698: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x8021169C: b           L_80211730
    // 0x802116A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80211730;
    // 0x802116A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802116A4: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
L_802116A8:
    // 0x802116A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x802116AC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x802116B0: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x802116B4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802116B8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x802116BC: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802116C0: bne         $at, $zero, L_802116E0
    if (ctx->r1 != 0) {
        // 0x802116C4: sll         $t5, $t4, 6
        ctx->r13 = S32(ctx->r12 << 6);
            goto L_802116E0;
    }
    // 0x802116C4: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x802116C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802116CC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802116D0: jal         0x80231A24
    // 0x802116D4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802116D4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_1:
    // 0x802116D8: b           L_80211730
    // 0x802116DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80211730;
    // 0x802116DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802116E0:
    // 0x802116E0: lw          $t3, 0x14($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X14);
    // 0x802116E4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802116E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802116EC: jal         0x80228DE0
    // 0x802116F0: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x802116F0: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    after_2:
    // 0x802116F4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802116F8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x802116FC: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80211700: lwc1        $f4, 0x30($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80211704: lwc1        $f10, 0x34($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80211708: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021170C: lwc1        $f4, 0x38($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80211710: swc1        $f8, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f8.u32l;
    // 0x80211714: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80211718: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021171C: swc1        $f18, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f18.u32l;
    // 0x80211720: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80211724: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80211728: swc1        $f8, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f8.u32l;
    // 0x8021172C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80211730:
    // 0x80211730: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211734: jr          $ra
    // 0x80211738: nop

    return;
    // 0x80211738: nop

;}
RECOMP_FUNC void D_802827C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282840: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80282844: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80282848: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028284C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80282850: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x80282854: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80282858: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x8028285C: jal         0x80224CA8
    // 0x80282860: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x80282860: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_0:
    // 0x80282864: jal         0x80224CA8
    // 0x80282868: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x80282868: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_1:
    // 0x8028286C: jal         0x80224CA8
    // 0x80282870: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x80282870: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_2:
    // 0x80282874: jal         0x80224CA8
    // 0x80282878: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x80282878: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_3:
    // 0x8028287C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80282880: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80282884: addiu       $s0, $s1, 0x70
    ctx->r16 = ADD32(ctx->r17, 0X70);
    // 0x80282888: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8028288C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80282890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80282894: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80282898: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028289C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802828A0: jal         0x8028D2E8
    // 0x802828A4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_8028D2E8(rdram, ctx);
        goto after_4;
    // 0x802828A4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_4:
    // 0x802828A8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802828AC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802828B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802828B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802828B8: jal         0x8028DDD8
    // 0x802828BC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    static_3_8028DDD8(rdram, ctx);
        goto after_5;
    // 0x802828BC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_5:
    // 0x802828C0: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802828C4: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802828C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802828CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802828D0: jal         0x8028DDD8
    // 0x802828D4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    static_3_8028DDD8(rdram, ctx);
        goto after_6;
    // 0x802828D4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_6:
    // 0x802828D8: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802828DC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802828E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802828E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802828E8: jal         0x8028DDD8
    // 0x802828EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_8028DDD8(rdram, ctx);
        goto after_7;
    // 0x802828EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802828F0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802828F4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802828F8: jal         0x8028DB8C
    // 0x802828FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8028DB8C(rdram, ctx);
        goto after_8;
    // 0x802828FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80282900: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80282904: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80282908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028290C: jal         0x8028DED0
    // 0x80282910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8028DED0(rdram, ctx);
        goto after_9;
    // 0x80282910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80282914: jal         0x8021BA90
    // 0x80282918: nop

    func_8021BA90(rdram, ctx);
        goto after_10;
    // 0x80282918: nop

    after_10:
    // 0x8028291C: sw          $v0, 0x2A8($s1)
    MEM_W(0X2A8, ctx->r17) = ctx->r2;
    // 0x80282920: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80282924: jal         0x8021ACB0
    // 0x80282928: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    static_3_8021ACB0(rdram, ctx);
        goto after_11;
    // 0x80282928: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    after_11:
    // 0x8028292C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x80282930: jal         0x8022970C
    // 0x80282934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_12;
    // 0x80282934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80282938: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028293C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80282940: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80282944: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x80282948: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x8028294C: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x80282950: lw          $a0, 0x2A8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2A8);
    // 0x80282954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282958: jal         0x8021B4B0
    // 0x8028295C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_13;
    // 0x8028295C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_13:
    // 0x80282960: lw          $a0, 0x2A8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2A8);
    // 0x80282964: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80282968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028296C: jal         0x8021B240
    // 0x80282970: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_14;
    // 0x80282970: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x80282974: lw          $t8, 0x2A8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X2A8);
    // 0x80282978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8028297C: sw          $t8, 0x29C($s1)
    MEM_W(0X29C, ctx->r17) = ctx->r24;
    // 0x80282980: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80282984: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80282988: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8028298C: jr          $ra
    // 0x80282990: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80282990: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_8029FF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029FFCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029FFD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029FFD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029FFD8: bne         $a0, $zero, L_8029FFF0
    if (ctx->r4 != 0) {
        // 0x8029FFDC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8029FFF0;
    }
    // 0x8029FFDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029FFE0: jal         0x802C67EC
    // 0x8029FFE4: addiu       $a0, $zero, 0x3B4
    ctx->r4 = ADD32(0, 0X3B4);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x8029FFE4: addiu       $a0, $zero, 0x3B4
    ctx->r4 = ADD32(0, 0X3B4);
    after_0:
    // 0x8029FFE8: beq         $v0, $zero, L_802A0038
    if (ctx->r2 == 0) {
        // 0x8029FFEC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802A0038;
    }
    // 0x8029FFEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8029FFF0:
    // 0x8029FFF0: jal         0x80320C38
    // 0x8029FFF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80320C38(rdram, ctx);
        goto after_1;
    // 0x8029FFF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8029FFF8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8029FFFC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A0000: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x802A0004: jal         0x802D3EB0
    // 0x802A0008: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    static_3_802D3EB0(rdram, ctx);
        goto after_2;
    // 0x802A0008: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    after_2:
    // 0x802A000C: jal         0x8031F89C
    // 0x802A0010: addiu       $a0, $s0, 0x1C0
    ctx->r4 = ADD32(ctx->r16, 0X1C0);
    static_3_8031F89C(rdram, ctx);
        goto after_3;
    // 0x802A0010: addiu       $a0, $s0, 0x1C0
    ctx->r4 = ADD32(ctx->r16, 0X1C0);
    after_3:
    // 0x802A0014: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x802A0018: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802A001C: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x802A0020: sb          $zero, 0x1B0($s0)
    MEM_B(0X1B0, ctx->r16) = 0;
    // 0x802A0024: sw          $zero, 0x19C($s0)
    MEM_W(0X19C, ctx->r16) = 0;
    // 0x802A0028: sw          $t8, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r24;
    // 0x802A002C: sw          $zero, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = 0;
    // 0x802A0030: sw          $zero, 0x1B4($s0)
    MEM_W(0X1B4, ctx->r16) = 0;
    // 0x802A0034: sw          $zero, 0x1B8($s0)
    MEM_W(0X1B8, ctx->r16) = 0;
L_802A0038:
    // 0x802A0038: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A003C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802A0040: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A0044: jr          $ra
    // 0x802A0048: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802A0048: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802DD58C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD60C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802DD610: lh          $v0, 0xCE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XCE);
    // 0x802DD614: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802DD618: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802DD61C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802DD620: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x802DD624: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802DD628: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x802DD62C: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x802DD630: sh          $t9, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = ctx->r25;
    // 0x802DD634: lh          $t2, 0xC0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC0);
    // 0x802DD638: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DD63C: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802DD640: beql        $t7, $t2, L_802DD650
    if (ctx->r15 == ctx->r10) {
        // 0x802DD644: lh          $t3, 0xCE($a0)
        ctx->r11 = MEM_H(ctx->r4, 0XCE);
            goto L_802DD650;
    }
    goto skip_0;
    // 0x802DD644: lh          $t3, 0xCE($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XCE);
    skip_0:
    // 0x802DD648: sh          $zero, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = 0;
    // 0x802DD64C: lh          $t3, 0xCE($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XCE);
L_802DD650:
    // 0x802DD650: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802DD654: bne         $t3, $at, L_802DD668
    if (ctx->r11 != ctx->r1) {
        // 0x802DD658: nop
    
            goto L_802DD668;
    }
    // 0x802DD658: nop

    // 0x802DD65C: lbu         $t4, 0x5C($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X5C);
    // 0x802DD660: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x802DD664: sb          $t5, 0x5C($v0)
    MEM_B(0X5C, ctx->r2) = ctx->r13;
L_802DD668:
    // 0x802DD668: jr          $ra
    // 0x802DD66C: nop

    return;
    // 0x802DD66C: nop

;}
RECOMP_FUNC void D_802DF4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DF538: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802DF53C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802DF540: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DF544: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802DF548: addiu       $a0, $a0, 0x152C
    ctx->r4 = ADD32(ctx->r4, 0X152C);
    // 0x802DF54C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802DF550: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802DF554: jal         0x802B3F64
    // 0x802DF558: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_0;
    // 0x802DF558: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_0:
    // 0x802DF55C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x802DF560: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802DF564: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DF56C: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x802DF570: lui         $a3, 0x44FA
    ctx->r7 = S32(0X44FA << 16);
    // 0x802DF574: jal         0x802B447C
    // 0x802DF578: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_1;
    // 0x802DF578: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x802DF57C: lui         $a2, 0x450E
    ctx->r6 = S32(0X450E << 16);
    // 0x802DF580: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802DF584: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF588: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DF58C: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x802DF590: jal         0x802B447C
    // 0x802DF594: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_2;
    // 0x802DF594: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_2:
    // 0x802DF598: lui         $a2, 0x44BB
    ctx->r6 = S32(0X44BB << 16);
    // 0x802DF59C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802DF5A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF5A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DF5A8: lui         $a3, 0xC2D2
    ctx->r7 = S32(0XC2D2 << 16);
    // 0x802DF5AC: jal         0x802B447C
    // 0x802DF5B0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_3;
    // 0x802DF5B0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x802DF5B4: lui         $a2, 0xC45D
    ctx->r6 = S32(0XC45D << 16);
    // 0x802DF5B8: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802DF5BC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF5C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DF5C4: lui         $a3, 0x4461
    ctx->r7 = S32(0X4461 << 16);
    // 0x802DF5C8: jal         0x802B447C
    // 0x802DF5CC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_4;
    // 0x802DF5CC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x802DF5D0: lui         $a3, 0x4465
    ctx->r7 = S32(0X4465 << 16);
    // 0x802DF5D4: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802DF5D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF5DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DF5E0: lui         $a2, 0xC491
    ctx->r6 = S32(0XC491 << 16);
    // 0x802DF5E4: jal         0x802B447C
    // 0x802DF5E8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_5;
    // 0x802DF5E8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x802DF5EC: lw          $v0, 0x16CC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X16CC);
    // 0x802DF5F0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DF5F4: lh          $t6, 0xB0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XB0);
    // 0x802DF5F8: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DF5FC: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x802DF600: jalr        $t9
    // 0x802DF604: addiu       $a0, $a0, 0x152C
    ctx->r4 = ADD32(ctx->r4, 0X152C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802DF604: addiu       $a0, $a0, 0x152C
    ctx->r4 = ADD32(ctx->r4, 0X152C);
    after_6:
    // 0x802DF608: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF60C: jal         0x80319008
    // 0x802DF610: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_7;
    // 0x802DF610: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_7:
    // 0x802DF614: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DF618: jal         0x802AB2AC
    // 0x802DF61C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_802AB2AC(rdram, ctx);
        goto after_8;
    // 0x802DF61C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_8:
    // 0x802DF620: addiu       $a0, $s0, 0x1BCC
    ctx->r4 = ADD32(ctx->r16, 0X1BCC);
    // 0x802DF624: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802DF628: jal         0x802B3F64
    // 0x802DF62C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_9;
    // 0x802DF62C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_9:
    // 0x802DF630: lui         $a3, 0x44B2
    ctx->r7 = S32(0X44B2 << 16);
    // 0x802DF634: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF638: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF63C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DF640: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x802DF644: jal         0x802B447C
    // 0x802DF648: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_10;
    // 0x802DF648: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_10:
    // 0x802DF64C: lui         $a2, 0x450C
    ctx->r6 = S32(0X450C << 16);
    // 0x802DF650: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802DF654: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF658: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DF65C: lui         $a3, 0xC2D2
    ctx->r7 = S32(0XC2D2 << 16);
    // 0x802DF660: jal         0x802B447C
    // 0x802DF664: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_11;
    // 0x802DF664: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_11:
    // 0x802DF668: lui         $a2, 0x44B2
    ctx->r6 = S32(0X44B2 << 16);
    // 0x802DF66C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802DF670: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF674: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DF678: lui         $a3, 0xC35B
    ctx->r7 = S32(0XC35B << 16);
    // 0x802DF67C: jal         0x802B447C
    // 0x802DF680: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_12;
    // 0x802DF680: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_12:
    // 0x802DF684: lui         $a2, 0xC477
    ctx->r6 = S32(0XC477 << 16);
    // 0x802DF688: lui         $a3, 0x4446
    ctx->r7 = S32(0X4446 << 16);
    // 0x802DF68C: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802DF690: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802DF694: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF698: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DF69C: jal         0x802B447C
    // 0x802DF6A0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_13;
    // 0x802DF6A0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_13:
    // 0x802DF6A4: lui         $a2, 0xC49A
    ctx->r6 = S32(0XC49A << 16);
    // 0x802DF6A8: lui         $a3, 0x444A
    ctx->r7 = S32(0X444A << 16);
    // 0x802DF6AC: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802DF6B0: ori         $a2, $a2, 0x2000
    ctx->r6 = ctx->r6 | 0X2000;
    // 0x802DF6B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF6B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DF6BC: jal         0x802B447C
    // 0x802DF6C0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_14;
    // 0x802DF6C0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_14:
    // 0x802DF6C4: lw          $v0, 0x1D6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1D6C);
    // 0x802DF6C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DF6CC: lh          $t7, 0xB0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB0);
    // 0x802DF6D0: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DF6D4: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x802DF6D8: jalr        $t9
    // 0x802DF6DC: addiu       $a0, $a0, 0x1BCC
    ctx->r4 = ADD32(ctx->r4, 0X1BCC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x802DF6DC: addiu       $a0, $a0, 0x1BCC
    ctx->r4 = ADD32(ctx->r4, 0X1BCC);
    after_15:
    // 0x802DF6E0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF6E4: jal         0x80319008
    // 0x802DF6E8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_16;
    // 0x802DF6E8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_16:
    // 0x802DF6EC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DF6F0: jal         0x802AB2AC
    // 0x802DF6F4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_802AB2AC(rdram, ctx);
        goto after_17;
    // 0x802DF6F4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_17:
    // 0x802DF6F8: addiu       $a0, $s0, 0x226C
    ctx->r4 = ADD32(ctx->r16, 0X226C);
    // 0x802DF6FC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802DF700: jal         0x802B3F64
    // 0x802DF704: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_18;
    // 0x802DF704: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_18:
    // 0x802DF708: lui         $a3, 0xC454
    ctx->r7 = S32(0XC454 << 16);
    // 0x802DF70C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF710: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DF718: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x802DF71C: jal         0x802B447C
    // 0x802DF720: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_19;
    // 0x802DF720: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_19:
    // 0x802DF724: lui         $a2, 0x450A
    ctx->r6 = S32(0X450A << 16);
    // 0x802DF728: lui         $a3, 0xC43A
    ctx->r7 = S32(0XC43A << 16);
    // 0x802DF72C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF730: ori         $a2, $a2, 0x7000
    ctx->r6 = ctx->r6 | 0X7000;
    // 0x802DF734: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF738: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DF73C: jal         0x802B447C
    // 0x802DF740: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_20;
    // 0x802DF740: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_20:
    // 0x802DF744: lui         $a2, 0x44C1
    ctx->r6 = S32(0X44C1 << 16);
    // 0x802DF748: lui         $a3, 0xC43A
    ctx->r7 = S32(0XC43A << 16);
    // 0x802DF74C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF750: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802DF754: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF758: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DF75C: jal         0x802B447C
    // 0x802DF760: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_21;
    // 0x802DF760: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_21:
    // 0x802DF764: lui         $a2, 0xC479
    ctx->r6 = S32(0XC479 << 16);
    // 0x802DF768: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802DF76C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF770: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DF774: lui         $a3, 0x4332
    ctx->r7 = S32(0X4332 << 16);
    // 0x802DF778: jal         0x802B447C
    // 0x802DF77C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_22;
    // 0x802DF77C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_22:
    // 0x802DF780: lui         $a2, 0xC4A0
    ctx->r6 = S32(0XC4A0 << 16);
    // 0x802DF784: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802DF788: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF78C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DF790: lui         $a3, 0x4342
    ctx->r7 = S32(0X4342 << 16);
    // 0x802DF794: jal         0x802B447C
    // 0x802DF798: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_23;
    // 0x802DF798: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_23:
    // 0x802DF79C: lw          $v0, 0x240C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X240C);
    // 0x802DF7A0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DF7A4: lh          $t8, 0xB0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XB0);
    // 0x802DF7A8: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DF7AC: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802DF7B0: jalr        $t9
    // 0x802DF7B4: addiu       $a0, $a0, 0x226C
    ctx->r4 = ADD32(ctx->r4, 0X226C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x802DF7B4: addiu       $a0, $a0, 0x226C
    ctx->r4 = ADD32(ctx->r4, 0X226C);
    after_24:
    // 0x802DF7B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF7BC: jal         0x80319008
    // 0x802DF7C0: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_25;
    // 0x802DF7C0: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_25:
    // 0x802DF7C4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DF7C8: jal         0x802AB2AC
    // 0x802DF7CC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_802AB2AC(rdram, ctx);
        goto after_26;
    // 0x802DF7CC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_26:
    // 0x802DF7D0: addiu       $a0, $s0, 0x290C
    ctx->r4 = ADD32(ctx->r16, 0X290C);
    // 0x802DF7D4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802DF7D8: jal         0x802B3F64
    // 0x802DF7DC: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_27;
    // 0x802DF7DC: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_27:
    // 0x802DF7E0: lui         $a3, 0xC517
    ctx->r7 = S32(0XC517 << 16);
    // 0x802DF7E4: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802DF7E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF7EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DF7F0: lui         $a2, 0x457A
    ctx->r6 = S32(0X457A << 16);
    // 0x802DF7F4: jal         0x802B447C
    // 0x802DF7F8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_28;
    // 0x802DF7F8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_28:
    // 0x802DF7FC: lui         $a2, 0x450C
    ctx->r6 = S32(0X450C << 16);
    // 0x802DF800: lui         $a3, 0xC46D
    ctx->r7 = S32(0XC46D << 16);
    // 0x802DF804: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF808: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802DF80C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF810: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DF814: jal         0x802B447C
    // 0x802DF818: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_29;
    // 0x802DF818: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_29:
    // 0x802DF81C: lui         $a2, 0x44C8
    ctx->r6 = S32(0X44C8 << 16);
    // 0x802DF820: lui         $a3, 0xC469
    ctx->r7 = S32(0XC469 << 16);
    // 0x802DF824: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802DF828: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802DF82C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF830: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DF834: jal         0x802B447C
    // 0x802DF838: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_30;
    // 0x802DF838: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_30:
    // 0x802DF83C: lui         $a2, 0xC480
    ctx->r6 = S32(0XC480 << 16);
    // 0x802DF840: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802DF844: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF848: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DF84C: lui         $a3, 0x4240
    ctx->r7 = S32(0X4240 << 16);
    // 0x802DF850: jal         0x802B447C
    // 0x802DF854: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_31;
    // 0x802DF854: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_31:
    // 0x802DF858: lui         $a2, 0xC49F
    ctx->r6 = S32(0XC49F << 16);
    // 0x802DF85C: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802DF860: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF864: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DF868: lui         $a3, 0x4282
    ctx->r7 = S32(0X4282 << 16);
    // 0x802DF86C: jal         0x802B447C
    // 0x802DF870: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_32;
    // 0x802DF870: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_32:
    // 0x802DF874: lw          $v0, 0x2AAC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2AAC);
    // 0x802DF878: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DF87C: lh          $t0, 0xB0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB0);
    // 0x802DF880: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DF884: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x802DF888: jalr        $t9
    // 0x802DF88C: addiu       $a0, $a0, 0x290C
    ctx->r4 = ADD32(ctx->r4, 0X290C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x802DF88C: addiu       $a0, $a0, 0x290C
    ctx->r4 = ADD32(ctx->r4, 0X290C);
    after_33:
    // 0x802DF890: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF894: jal         0x80319008
    // 0x802DF898: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_34;
    // 0x802DF898: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_34:
    // 0x802DF89C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DF8A0: jal         0x802AB2AC
    // 0x802DF8A4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_802AB2AC(rdram, ctx);
        goto after_35;
    // 0x802DF8A4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_35:
    // 0x802DF8A8: addiu       $a0, $s0, 0x2FAC
    ctx->r4 = ADD32(ctx->r16, 0X2FAC);
    // 0x802DF8AC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802DF8B0: jal         0x802B3F64
    // 0x802DF8B4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    static_3_802B3F64(rdram, ctx);
        goto after_36;
    // 0x802DF8B4: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_36:
    // 0x802DF8B8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x802DF8BC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802DF8C0: lui         $a2, 0x458A
    ctx->r6 = S32(0X458A << 16);
    // 0x802DF8C4: lui         $a3, 0xC3F2
    ctx->r7 = S32(0XC3F2 << 16);
    // 0x802DF8C8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF8CC: ori         $a2, $a2, 0x4800
    ctx->r6 = ctx->r6 | 0X4800;
    // 0x802DF8D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF8D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DF8D8: jal         0x802B447C
    // 0x802DF8DC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_37;
    // 0x802DF8DC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_37:
    // 0x802DF8E0: lui         $a2, 0x454E
    ctx->r6 = S32(0X454E << 16);
    // 0x802DF8E4: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802DF8E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF8EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DF8F0: lui         $a3, 0xC383
    ctx->r7 = S32(0XC383 << 16);
    // 0x802DF8F4: jal         0x802B447C
    // 0x802DF8F8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_38;
    // 0x802DF8F8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_38:
    // 0x802DF8FC: lui         $a2, 0x4521
    ctx->r6 = S32(0X4521 << 16);
    // 0x802DF900: ori         $a2, $a2, 0x2000
    ctx->r6 = ctx->r6 | 0X2000;
    // 0x802DF904: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF908: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DF90C: lui         $a3, 0xC3F9
    ctx->r7 = S32(0XC3F9 << 16);
    // 0x802DF910: jal         0x802B447C
    // 0x802DF914: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_39;
    // 0x802DF914: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_39:
    // 0x802DF918: lui         $a2, 0xC48F
    ctx->r6 = S32(0XC48F << 16);
    // 0x802DF91C: lui         $a3, 0x439C
    ctx->r7 = S32(0X439C << 16);
    // 0x802DF920: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF924: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802DF928: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF92C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DF930: jal         0x802B447C
    // 0x802DF934: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_40;
    // 0x802DF934: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_40:
    // 0x802DF938: lui         $a2, 0xC55D
    ctx->r6 = S32(0XC55D << 16);
    // 0x802DF93C: lui         $a3, 0x439C
    ctx->r7 = S32(0X439C << 16);
    // 0x802DF940: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DF944: ori         $a2, $a2, 0x5000
    ctx->r6 = ctx->r6 | 0X5000;
    // 0x802DF948: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF94C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DF950: jal         0x802B447C
    // 0x802DF954: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_41;
    // 0x802DF954: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_41:
    // 0x802DF958: lw          $v0, 0x314C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X314C);
    // 0x802DF95C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DF960: lh          $t1, 0xB0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XB0);
    // 0x802DF964: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DF968: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    // 0x802DF96C: jalr        $t9
    // 0x802DF970: addiu       $a0, $a0, 0x2FAC
    ctx->r4 = ADD32(ctx->r4, 0X2FAC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x802DF970: addiu       $a0, $a0, 0x2FAC
    ctx->r4 = ADD32(ctx->r4, 0X2FAC);
    after_42:
    // 0x802DF974: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF978: jal         0x80319008
    // 0x802DF97C: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_43;
    // 0x802DF97C: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_43:
    // 0x802DF980: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DF984: jal         0x802AB2AC
    // 0x802DF988: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_802AB2AC(rdram, ctx);
        goto after_44;
    // 0x802DF988: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_44:
    // 0x802DF98C: addiu       $a0, $s0, 0x364C
    ctx->r4 = ADD32(ctx->r16, 0X364C);
    // 0x802DF990: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802DF994: jal         0x802B3F64
    // 0x802DF998: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    static_3_802B3F64(rdram, ctx);
        goto after_45;
    // 0x802DF998: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    after_45:
    // 0x802DF99C: lui         $a2, 0x4556
    ctx->r6 = S32(0X4556 << 16);
    // 0x802DF9A0: lui         $a3, 0xC4B9
    ctx->r7 = S32(0XC4B9 << 16);
    // 0x802DF9A4: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802DF9A8: ori         $a2, $a2, 0x1000
    ctx->r6 = ctx->r6 | 0X1000;
    // 0x802DF9AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF9B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DF9B4: jal         0x802B447C
    // 0x802DF9B8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_46;
    // 0x802DF9B8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_46:
    // 0x802DF9BC: lui         $a2, 0x4510
    ctx->r6 = S32(0X4510 << 16);
    // 0x802DF9C0: lui         $a3, 0xC49D
    ctx->r7 = S32(0XC49D << 16);
    // 0x802DF9C4: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802DF9C8: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802DF9CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF9D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DF9D4: jal         0x802B447C
    // 0x802DF9D8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_47;
    // 0x802DF9D8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_47:
    // 0x802DF9DC: lui         $a2, 0x44C5
    ctx->r6 = S32(0X44C5 << 16);
    // 0x802DF9E0: lui         $a3, 0xC4BB
    ctx->r7 = S32(0XC4BB << 16);
    // 0x802DF9E4: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802DF9E8: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802DF9EC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DF9F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DF9F4: jal         0x802B447C
    // 0x802DF9F8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_48;
    // 0x802DF9F8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_48:
    // 0x802DF9FC: lui         $a3, 0xC42B
    ctx->r7 = S32(0XC42B << 16);
    // 0x802DFA00: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802DFA04: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFA08: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DFA0C: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    // 0x802DFA10: jal         0x802B447C
    // 0x802DFA14: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_49;
    // 0x802DFA14: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_49:
    // 0x802DFA18: lui         $a2, 0xC51E
    ctx->r6 = S32(0XC51E << 16);
    // 0x802DFA1C: lui         $a3, 0xC42B
    ctx->r7 = S32(0XC42B << 16);
    // 0x802DFA20: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802DFA24: ori         $a2, $a2, 0xD000
    ctx->r6 = ctx->r6 | 0XD000;
    // 0x802DFA28: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFA2C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DFA30: jal         0x802B447C
    // 0x802DFA34: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_50;
    // 0x802DFA34: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_50:
    // 0x802DFA38: lw          $v0, 0x37EC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X37EC);
    // 0x802DFA3C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DFA40: lh          $t2, 0xB0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XB0);
    // 0x802DFA44: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DFA48: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x802DFA4C: jalr        $t9
    // 0x802DFA50: addiu       $a0, $a0, 0x364C
    ctx->r4 = ADD32(ctx->r4, 0X364C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x802DFA50: addiu       $a0, $a0, 0x364C
    ctx->r4 = ADD32(ctx->r4, 0X364C);
    after_51:
    // 0x802DFA54: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFA58: jal         0x80319008
    // 0x802DFA5C: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_52;
    // 0x802DFA5C: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_52:
    // 0x802DFA60: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DFA64: jal         0x802AB2AC
    // 0x802DFA68: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_802AB2AC(rdram, ctx);
        goto after_53;
    // 0x802DFA68: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_53:
    // 0x802DFA6C: addiu       $a0, $s0, 0x3CEC
    ctx->r4 = ADD32(ctx->r16, 0X3CEC);
    // 0x802DFA70: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802DFA74: jal         0x802B3F64
    // 0x802DFA78: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    static_3_802B3F64(rdram, ctx);
        goto after_54;
    // 0x802DFA78: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    after_54:
    // 0x802DFA7C: lui         $a2, 0x4556
    ctx->r6 = S32(0X4556 << 16);
    // 0x802DFA80: lui         $a3, 0x4400
    ctx->r7 = S32(0X4400 << 16);
    // 0x802DFA84: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802DFA88: ori         $a2, $a2, 0x1000
    ctx->r6 = ctx->r6 | 0X1000;
    // 0x802DFA8C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFA90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DFA94: jal         0x802B447C
    // 0x802DFA98: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_55;
    // 0x802DFA98: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_55:
    // 0x802DFA9C: lui         $a2, 0x4510
    ctx->r6 = S32(0X4510 << 16);
    // 0x802DFAA0: lui         $a3, 0x4438
    ctx->r7 = S32(0X4438 << 16);
    // 0x802DFAA4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DFAA8: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802DFAAC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFAB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DFAB4: jal         0x802B447C
    // 0x802DFAB8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_56;
    // 0x802DFAB8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_56:
    // 0x802DFABC: lui         $a2, 0x44C5
    ctx->r6 = S32(0X44C5 << 16);
    // 0x802DFAC0: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802DFAC4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFAC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DFACC: lui         $a3, 0x43FB
    ctx->r7 = S32(0X43FB << 16);
    // 0x802DFAD0: jal         0x802B447C
    // 0x802DFAD4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_57;
    // 0x802DFAD4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_57:
    // 0x802DFAD8: lui         $a3, 0x44A4
    ctx->r7 = S32(0X44A4 << 16);
    // 0x802DFADC: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802DFAE0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFAE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DFAE8: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    // 0x802DFAEC: jal         0x802B447C
    // 0x802DFAF0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_58;
    // 0x802DFAF0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_58:
    // 0x802DFAF4: lui         $a2, 0xC51E
    ctx->r6 = S32(0XC51E << 16);
    // 0x802DFAF8: lui         $a3, 0x44A4
    ctx->r7 = S32(0X44A4 << 16);
    // 0x802DFAFC: ori         $a3, $a3, 0x2000
    ctx->r7 = ctx->r7 | 0X2000;
    // 0x802DFB00: ori         $a2, $a2, 0xD000
    ctx->r6 = ctx->r6 | 0XD000;
    // 0x802DFB04: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFB08: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DFB0C: jal         0x802B447C
    // 0x802DFB10: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_59;
    // 0x802DFB10: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_59:
    // 0x802DFB14: lw          $v0, 0x3E8C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3E8C);
    // 0x802DFB18: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DFB1C: lh          $t3, 0xB0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XB0);
    // 0x802DFB20: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DFB24: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x802DFB28: jalr        $t9
    // 0x802DFB2C: addiu       $a0, $a0, 0x3CEC
    ctx->r4 = ADD32(ctx->r4, 0X3CEC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x802DFB2C: addiu       $a0, $a0, 0x3CEC
    ctx->r4 = ADD32(ctx->r4, 0X3CEC);
    after_60:
    // 0x802DFB30: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFB34: jal         0x80319008
    // 0x802DFB38: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_61;
    // 0x802DFB38: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_61:
    // 0x802DFB3C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DFB40: jal         0x802AB2AC
    // 0x802DFB44: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_802AB2AC(rdram, ctx);
        goto after_62;
    // 0x802DFB44: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_62:
    // 0x802DFB48: addiu       $a0, $s0, 0x438C
    ctx->r4 = ADD32(ctx->r16, 0X438C);
    // 0x802DFB4C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802DFB50: jal         0x802B3F64
    // 0x802DFB54: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    static_3_802B3F64(rdram, ctx);
        goto after_63;
    // 0x802DFB54: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    after_63:
    // 0x802DFB58: lui         $a2, 0x4517
    ctx->r6 = S32(0X4517 << 16);
    // 0x802DFB5C: lui         $a3, 0xC3F2
    ctx->r7 = S32(0XC3F2 << 16);
    // 0x802DFB60: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DFB64: ori         $a2, $a2, 0x9000
    ctx->r6 = ctx->r6 | 0X9000;
    // 0x802DFB68: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFB6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DFB70: jal         0x802B447C
    // 0x802DFB74: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_64;
    // 0x802DFB74: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_64:
    // 0x802DFB78: lui         $a2, 0x44A3
    ctx->r6 = S32(0X44A3 << 16);
    // 0x802DFB7C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802DFB80: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFB84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802DFB88: lui         $a3, 0xC383
    ctx->r7 = S32(0XC383 << 16);
    // 0x802DFB8C: jal         0x802B447C
    // 0x802DFB90: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_65;
    // 0x802DFB90: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_65:
    // 0x802DFB94: lui         $a2, 0x4410
    ctx->r6 = S32(0X4410 << 16);
    // 0x802DFB98: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802DFB9C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFBA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DFBA4: lui         $a3, 0xC3F9
    ctx->r7 = S32(0XC3F9 << 16);
    // 0x802DFBA8: jal         0x802B447C
    // 0x802DFBAC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_66;
    // 0x802DFBAC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_66:
    // 0x802DFBB0: lui         $a2, 0xC48F
    ctx->r6 = S32(0XC48F << 16);
    // 0x802DFBB4: lui         $a3, 0x439C
    ctx->r7 = S32(0X439C << 16);
    // 0x802DFBB8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DFBBC: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x802DFBC0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFBC4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DFBC8: jal         0x802B447C
    // 0x802DFBCC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_67;
    // 0x802DFBCC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_67:
    // 0x802DFBD0: lui         $a2, 0xC55D
    ctx->r6 = S32(0XC55D << 16);
    // 0x802DFBD4: lui         $a3, 0x439C
    ctx->r7 = S32(0X439C << 16);
    // 0x802DFBD8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802DFBDC: ori         $a2, $a2, 0x5000
    ctx->r6 = ctx->r6 | 0X5000;
    // 0x802DFBE0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFBE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DFBE8: jal         0x802B447C
    // 0x802DFBEC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_68;
    // 0x802DFBEC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_68:
    // 0x802DFBF0: lw          $v0, 0x452C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X452C);
    // 0x802DFBF4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DFBF8: lh          $t4, 0xB0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XB0);
    // 0x802DFBFC: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DFC00: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802DFC04: jalr        $t9
    // 0x802DFC08: addiu       $a0, $a0, 0x438C
    ctx->r4 = ADD32(ctx->r4, 0X438C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x802DFC08: addiu       $a0, $a0, 0x438C
    ctx->r4 = ADD32(ctx->r4, 0X438C);
    after_69:
    // 0x802DFC0C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802DFC10: jal         0x80319008
    // 0x802DFC14: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_70;
    // 0x802DFC14: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_70:
    // 0x802DFC18: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DFC1C: jal         0x802AB2AC
    // 0x802DFC20: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_802AB2AC(rdram, ctx);
        goto after_71;
    // 0x802DFC20: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_71:
    // 0x802DFC24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802DFC28: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802DFC2C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802DFC30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802DFC34: jr          $ra
    // 0x802DFC38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802DFC38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802098C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802098C4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x802098C8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x802098CC: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x802098D0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x802098D4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x802098D8: bc1f        L_802098E4
    if (!c1cs) {
        // 0x802098DC: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_802098E4;
    }
    // 0x802098DC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x802098E0: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_802098E4:
    // 0x802098E4: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x802098E8: nop

    // 0x802098EC: bc1fl       L_802098FC
    if (!c1cs) {
        // 0x802098F0: c.lt.s      $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
            goto L_802098FC;
    }
    goto skip_0;
    // 0x802098F0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    skip_0:
    // 0x802098F4: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x802098F8: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
L_802098FC:
    // 0x802098FC: nop

    // 0x80209900: bc1fl       L_80209910
    if (!c1cs) {
        // 0x80209904: c.lt.s      $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
            goto L_80209910;
    }
    goto skip_1;
    // 0x80209904: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    skip_1:
    // 0x80209908: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x8020990C: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
L_80209910:
    // 0x80209910: nop

    // 0x80209914: bc1fl       L_80209924
    if (!c1cs) {
        // 0x80209918: c.eq.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
            goto L_80209924;
    }
    goto skip_2;
    // 0x80209918: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    skip_2:
    // 0x8020991C: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x80209920: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_80209924:
    // 0x80209924: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80209928: bc1f        L_8020994C
    if (!c1cs) {
        // 0x8020992C: swc1        $f0, 0x0($t6)
        MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
            goto L_8020994C;
    }
    // 0x8020992C: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80209930: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80209934: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80209938: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8020993C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80209940: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x80209944: b           L_80209A44
    // 0x80209948: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
        goto L_80209A44;
    // 0x80209948: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
L_8020994C:
    // 0x8020994C: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80209950: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80209954: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x80209958: div.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8020995C: bc1f        L_80209980
    if (!c1cs) {
        // 0x80209960: swc1        $f8, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
            goto L_80209980;
    }
    // 0x80209960: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x80209964: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x80209968: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x8020996C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80209970: div.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80209974: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80209978: b           L_802099EC
    // 0x8020997C: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
        goto L_802099EC;
    // 0x8020997C: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
L_80209980:
    // 0x80209980: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    // 0x80209984: nop

    // 0x80209988: bc1fl       L_802099BC
    if (!c1cs) {
        // 0x8020998C: c.eq.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
            goto L_802099BC;
    }
    goto skip_3;
    // 0x8020998C: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    skip_3:
    // 0x80209990: sub.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80209994: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80209998: sub.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x8020999C: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802099A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802099A4: div.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f16.fl);
    // 0x802099A8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802099AC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802099B0: b           L_802099EC
    // 0x802099B4: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
        goto L_802099EC;
    // 0x802099B4: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x802099B8: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
L_802099BC:
    // 0x802099BC: nop

    // 0x802099C0: bc1fl       L_802099F0
    if (!c1cs) {
        // 0x802099C4: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_802099F0;
    }
    goto skip_4;
    // 0x802099C4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    skip_4:
    // 0x802099C8: sub.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x802099CC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802099D0: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x802099D4: div.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x802099D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802099DC: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x802099E0: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802099E4: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802099E8: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
L_802099EC:
    // 0x802099EC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
L_802099F0:
    // 0x802099F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802099F4: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x802099F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802099FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80209A00: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80209A04: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x80209A08: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80209A0C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80209A10: nop

    // 0x80209A14: bc1fl       L_80209A34
    if (!c1cs) {
        // 0x80209A18: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_80209A34;
    }
    goto skip_5;
    // 0x80209A18: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    skip_5:
    // 0x80209A1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80209A20: nop

    // 0x80209A24: add.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80209A28: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x80209A2C: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80209A30: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
L_80209A34:
    // 0x80209A34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80209A38: nop

    // 0x80209A3C: div.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80209A40: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
L_80209A44:
    // 0x80209A44: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80209A48: jr          $ra
    // 0x80209A4C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80209A4C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void D_80278A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278AD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80278ADC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80278AE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80278AE4: lw          $v1, 0x65FC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X65FC);
    // 0x80278AE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80278AEC: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
    // 0x80278AF0: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80278AF4: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x80278AF8: jalr        $t9
    // 0x80278AFC: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80278AFC: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_0:
    // 0x80278B00: lw          $v1, 0x65FC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X65FC);
    // 0x80278B04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80278B08: lw          $v0, 0x6C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X6C);
    // 0x80278B0C: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x80278B10: lh          $t7, 0x8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8);
    // 0x80278B14: jalr        $t9
    // 0x80278B18: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80278B18: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_1:
    // 0x80278B1C: sw          $zero, 0x65FC($s0)
    MEM_W(0X65FC, ctx->r16) = 0;
    // 0x80278B20: jal         0x802B0B44
    // 0x80278B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B0B44(rdram, ctx);
        goto after_2;
    // 0x80278B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80278B28: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80278B2C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80278B30: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80278B34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80278B38: lbu         $t0, 0x8F0($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X8F0);
    // 0x80278B3C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80278B40: beq         $t0, $zero, L_80278B50
    if (ctx->r8 == 0) {
        // 0x80278B44: nop
    
            goto L_80278B50;
    }
    // 0x80278B44: nop

    // 0x80278B48: jal         0x80231A24
    // 0x80278B4C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80278B4C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_3:
L_80278B50:
    // 0x80278B50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80278B54: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80278B58: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80278B5C: jal         0x80231A24
    // 0x80278B60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80278B60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x80278B64: jal         0x8022BD80
    // 0x80278B68: nop

    static_3_8022BD80(rdram, ctx);
        goto after_5;
    // 0x80278B68: nop

    after_5:
    // 0x80278B6C: jal         0x80224CA8
    // 0x80278B70: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x80278B70: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_6:
    // 0x80278B74: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80278B78: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80278B7C: addiu       $a0, $s0, 0x3570
    ctx->r4 = ADD32(ctx->r16, 0X3570);
    // 0x80278B80: jal         0x8029E54C
    // 0x80278B84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8029E54C(rdram, ctx);
        goto after_7;
    // 0x80278B84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80278B88: sb          $zero, 0x3627($s0)
    MEM_B(0X3627, ctx->r16) = 0;
    // 0x80278B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278B90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80278B94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80278B98: jr          $ra
    // 0x80278B9C: nop

    return;
    // 0x80278B9C: nop

;}
RECOMP_FUNC void D_802D8824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D88A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D88A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D88AC: beq         $a0, $zero, L_802D88D8
    if (ctx->r4 == 0) {
        // 0x802D88B0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802D88D8;
    }
    // 0x802D88B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D88B4: jal         0x803090D0
    // 0x802D88B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_803090D0(rdram, ctx);
        goto after_0;
    // 0x802D88B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802D88BC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802D88C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D88C4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802D88C8: beql        $t7, $zero, L_802D88DC
    if (ctx->r15 == 0) {
        // 0x802D88CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D88DC;
    }
    goto skip_0;
    // 0x802D88CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D88D0: jal         0x802C681C
    // 0x802D88D4: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802D88D4: nop

    after_1:
L_802D88D8:
    // 0x802D88D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D88DC:
    // 0x802D88DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D88E0: jr          $ra
    // 0x802D88E4: nop

    return;
    // 0x802D88E4: nop

;}
RECOMP_FUNC void D_802057AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802057AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802057B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802057B4: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802057B8: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x802057BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802057C0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802057C4: jal         0x80238B50
    // 0x802057C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_80238B50(rdram, ctx);
        goto after_0;
    // 0x802057C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x802057CC: jal         0x80207210
    // 0x802057D0: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    func_80207210(rdram, ctx);
        goto after_1;
    // 0x802057D0: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    after_1:
    // 0x802057D4: jal         0x80237F60
    // 0x802057D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_80237F60(rdram, ctx);
        goto after_2;
    // 0x802057D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_2:
    // 0x802057DC: beq         $v0, $zero, L_80205828
    if (ctx->r2 == 0) {
        // 0x802057E0: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_80205828;
    }
    // 0x802057E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802057E4: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x802057E8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802057EC: nop

L_802057F0:
    // 0x802057F0: jal         0x80207130
    // 0x802057F4: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    static_3_80207130(rdram, ctx);
        goto after_3;
    // 0x802057F4: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    after_3:
    // 0x802057F8: c.lt.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d < ctx->f0.d;
    // 0x802057FC: nop

    // 0x80205800: bc1f        L_80205818
    if (!c1cs) {
        // 0x80205804: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80205818;
    }
    // 0x80205804: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80205808: jal         0x80231A24
    // 0x8020580C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x8020580C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x80205810: b           L_8020582C
    // 0x80205814: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8020582C;
    // 0x80205814: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80205818:
    // 0x80205818: jal         0x80237F60
    // 0x8020581C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_80237F60(rdram, ctx);
        goto after_5;
    // 0x8020581C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_5:
    // 0x80205820: bne         $v0, $zero, L_802057F0
    if (ctx->r2 != 0) {
        // 0x80205824: nop
    
            goto L_802057F0;
    }
    // 0x80205824: nop

L_80205828:
    // 0x80205828: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8020582C:
    // 0x8020582C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80205830: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80205834: jr          $ra
    // 0x80205838: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80205838: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802094AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802094AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802094B0: jr          $ra
    // 0x802094B4: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
    return;
    // 0x802094B4: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void D_802D9D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9DA8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D9DAC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802D9DB0: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x802D9DB4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802D9DB8: beq         $v0, $at, L_802D9E34
    if (ctx->r2 == ctx->r1) {
        // 0x802D9DBC: addiu       $t6, $zero, 0x6D
        ctx->r14 = ADD32(0, 0X6D);
            goto L_802D9E34;
    }
    // 0x802D9DBC: addiu       $t6, $zero, 0x6D
    ctx->r14 = ADD32(0, 0X6D);
    // 0x802D9DC0: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x802D9DC4: beq         $v0, $at, L_802D9E44
    if (ctx->r2 == ctx->r1) {
        // 0x802D9DC8: addiu       $t7, $zero, 0x72
        ctx->r15 = ADD32(0, 0X72);
            goto L_802D9E44;
    }
    // 0x802D9DC8: addiu       $t7, $zero, 0x72
    ctx->r15 = ADD32(0, 0X72);
    // 0x802D9DCC: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x802D9DD0: beq         $v0, $at, L_802D9E58
    if (ctx->r2 == ctx->r1) {
        // 0x802D9DD4: addiu       $t9, $zero, 0x71
        ctx->r25 = ADD32(0, 0X71);
            goto L_802D9E58;
    }
    // 0x802D9DD4: addiu       $t9, $zero, 0x71
    ctx->r25 = ADD32(0, 0X71);
    // 0x802D9DD8: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x802D9DDC: beq         $v0, $at, L_802D9E68
    if (ctx->r2 == ctx->r1) {
        // 0x802D9DE0: addiu       $t0, $zero, 0x6F
        ctx->r8 = ADD32(0, 0X6F);
            goto L_802D9E68;
    }
    // 0x802D9DE0: addiu       $t0, $zero, 0x6F
    ctx->r8 = ADD32(0, 0X6F);
    // 0x802D9DE4: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x802D9DE8: beq         $v0, $at, L_802D9E7C
    if (ctx->r2 == ctx->r1) {
        // 0x802D9DEC: addiu       $t2, $zero, 0x74
        ctx->r10 = ADD32(0, 0X74);
            goto L_802D9E7C;
    }
    // 0x802D9DEC: addiu       $t2, $zero, 0x74
    ctx->r10 = ADD32(0, 0X74);
    // 0x802D9DF0: addiu       $at, $zero, 0x84
    ctx->r1 = ADD32(0, 0X84);
    // 0x802D9DF4: beq         $v0, $at, L_802D9E8C
    if (ctx->r2 == ctx->r1) {
        // 0x802D9DF8: addiu       $t3, $zero, 0x6E
        ctx->r11 = ADD32(0, 0X6E);
            goto L_802D9E8C;
    }
    // 0x802D9DF8: addiu       $t3, $zero, 0x6E
    ctx->r11 = ADD32(0, 0X6E);
    // 0x802D9DFC: addiu       $at, $zero, 0x48
    ctx->r1 = ADD32(0, 0X48);
    // 0x802D9E00: beq         $v0, $at, L_802D9EA0
    if (ctx->r2 == ctx->r1) {
        // 0x802D9E04: addiu       $t5, $zero, 0x70
        ctx->r13 = ADD32(0, 0X70);
            goto L_802D9EA0;
    }
    // 0x802D9E04: addiu       $t5, $zero, 0x70
    ctx->r13 = ADD32(0, 0X70);
    // 0x802D9E08: addiu       $at, $zero, 0x88
    ctx->r1 = ADD32(0, 0X88);
    // 0x802D9E0C: beq         $v0, $at, L_802D9EB0
    if (ctx->r2 == ctx->r1) {
        // 0x802D9E10: addiu       $t6, $zero, 0x73
        ctx->r14 = ADD32(0, 0X73);
            goto L_802D9EB0;
    }
    // 0x802D9E10: addiu       $t6, $zero, 0x73
    ctx->r14 = ADD32(0, 0X73);
    // 0x802D9E14: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x802D9E18: beq         $v0, $at, L_802D9EC4
    if (ctx->r2 == ctx->r1) {
        // 0x802D9E1C: addiu       $t8, $zero, 0x7C
        ctx->r24 = ADD32(0, 0X7C);
            goto L_802D9EC4;
    }
    // 0x802D9E1C: addiu       $t8, $zero, 0x7C
    ctx->r24 = ADD32(0, 0X7C);
    // 0x802D9E20: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x802D9E24: beq         $v0, $at, L_802D9ECC
    if (ctx->r2 == ctx->r1) {
        // 0x802D9E28: addiu       $t9, $zero, 0x75
        ctx->r25 = ADD32(0, 0X75);
            goto L_802D9ECC;
    }
    // 0x802D9E28: addiu       $t9, $zero, 0x75
    ctx->r25 = ADD32(0, 0X75);
    // 0x802D9E2C: b           L_802D9ED4
    // 0x802D9E30: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
        goto L_802D9ED4;
    // 0x802D9E30: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
L_802D9E34:
    // 0x802D9E34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9E38: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x802D9E3C: b           L_802D9ED0
    // 0x802D9E40: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
        goto L_802D9ED0;
    // 0x802D9E40: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
L_802D9E44:
    // 0x802D9E44: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802D9E48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9E4C: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x802D9E50: b           L_802D9ED0
    // 0x802D9E54: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
        goto L_802D9ED0;
    // 0x802D9E54: sb          $t8, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r24;
L_802D9E58:
    // 0x802D9E58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9E5C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x802D9E60: b           L_802D9ED0
    // 0x802D9E64: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
        goto L_802D9ED0;
    // 0x802D9E64: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
L_802D9E68:
    // 0x802D9E68: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802D9E6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9E70: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x802D9E74: b           L_802D9ED0
    // 0x802D9E78: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
        goto L_802D9ED0;
    // 0x802D9E78: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
L_802D9E7C:
    // 0x802D9E7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9E80: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x802D9E84: b           L_802D9ED0
    // 0x802D9E88: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
        goto L_802D9ED0;
    // 0x802D9E88: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
L_802D9E8C:
    // 0x802D9E8C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802D9E90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9E94: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x802D9E98: b           L_802D9ED0
    // 0x802D9E9C: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
        goto L_802D9ED0;
    // 0x802D9E9C: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
L_802D9EA0:
    // 0x802D9EA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9EA4: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x802D9EA8: b           L_802D9ED0
    // 0x802D9EAC: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
        goto L_802D9ED0;
    // 0x802D9EAC: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
L_802D9EB0:
    // 0x802D9EB0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802D9EB4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D9EB8: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x802D9EBC: b           L_802D9ED0
    // 0x802D9EC0: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
        goto L_802D9ED0;
    // 0x802D9EC0: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
L_802D9EC4:
    // 0x802D9EC4: b           L_802D9ED0
    // 0x802D9EC8: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
        goto L_802D9ED0;
    // 0x802D9EC8: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
L_802D9ECC:
    // 0x802D9ECC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
L_802D9ED0:
    // 0x802D9ED0: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
L_802D9ED4:
    // 0x802D9ED4: jr          $ra
    // 0x802D9ED8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802D9ED8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_8022FC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022FC8C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8022FC90: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8022FC94: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8022FC98: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8022FC9C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8022FCA0: jal         0x8022FB4C
    // 0x8022FCA4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    static_3_8022FB4C(rdram, ctx);
        goto after_0;
    // 0x8022FCA4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    after_0:
    // 0x8022FCA8: beq         $v0, $zero, L_8022FDF8
    if (ctx->r2 == 0) {
        // 0x8022FCAC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8022FDF8;
    }
    // 0x8022FCAC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8022FCB0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022FCB4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022FCB8: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8022FCBC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8022FCC0: ori         $at, $at, 0xF000
    ctx->r1 = ctx->r1 | 0XF000;
    // 0x8022FCC4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x8022FCC8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8022FCCC: srl         $t0, $t9, 12
    ctx->r8 = S32(U32(ctx->r25) >> 12);
    // 0x8022FCD0: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x8022FCD4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8022FCD8: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x8022FCDC: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x8022FCE0: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8022FCE4: sll         $t4, $a1, 6
    ctx->r12 = S32(ctx->r5 << 6);
    // 0x8022FCE8: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x8022FCEC: addiu       $t9, $t6, 0x3C
    ctx->r25 = ADD32(ctx->r14, 0X3C);
    // 0x8022FCF0: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x8022FCF4: or          $t0, $sp, $zero
    ctx->r8 = ctx->r29 | 0;
    // 0x8022FCF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022FCFC: lwc1        $f12, 0x2C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X2C);
L_8022FD00:
    // 0x8022FD00: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8022FD04: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8022FD08: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8022FD0C: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8022FD10: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8022FD14: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8022FD18: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8022FD1C: bne         $t6, $t9, L_8022FD00
    if (ctx->r14 != ctx->r25) {
        // 0x8022FD20: sw          $at, 0x4($t0)
        MEM_W(0X4, ctx->r8) = ctx->r1;
            goto L_8022FD00;
    }
    // 0x8022FD20: sw          $at, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r1;
    // 0x8022FD24: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8022FD28: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x8022FD2C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8022FD30: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8022FD34: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x8022FD38: sw          $a1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r5;
    // 0x8022FD3C: jal         0x80228F38
    // 0x8022FD40: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    static_3_80228F38(rdram, ctx);
        goto after_1;
    // 0x8022FD40: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022FD44: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x8022FD48: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022FD4C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8022FD50: lhu         $t2, 0x0($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X0);
    // 0x8022FD54: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8022FD58: lw          $t1, 0x1C($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X1C);
    // 0x8022FD5C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8022FD60: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8022FD64: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8022FD68: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x8022FD6C: beql        $v0, $zero, L_8022FDFC
    if (ctx->r2 == 0) {
        // 0x8022FD70: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8022FDFC;
    }
    goto skip_0;
    // 0x8022FD70: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x8022FD74: bne         $a1, $zero, L_8022FDC0
    if (ctx->r5 != 0) {
        // 0x8022FD78: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8022FDC0;
    }
    // 0x8022FD78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022FD7C: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8022FD80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022FD84: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8022FD88: div.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8022FD8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022FD90: div.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8022FD94: c.eq.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl == ctx->f14.fl;
    // 0x8022FD98: nop

    // 0x8022FD9C: bc1tl       L_8022FDD0
    if (c1cs) {
        // 0x8022FDA0: lwc1        $f8, 0x30($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
            goto L_8022FDD0;
    }
    goto skip_1;
    // 0x8022FDA0: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    skip_1:
    // 0x8022FDA4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8022FDA8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8022FDAC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8022FDB0: jal         0x8022A210
    // 0x8022FDB4: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    static_3_8022A210(rdram, ctx);
        goto after_2;
    // 0x8022FDB4: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x8022FDB8: b           L_8022FDCC
    // 0x8022FDBC: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
        goto L_8022FDCC;
    // 0x8022FDBC: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
L_8022FDC0:
    // 0x8022FDC0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8022FDC4: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8022FDC8: div.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f14.fl, ctx->f6.fl);
L_8022FDCC:
    // 0x8022FDCC: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
L_8022FDD0:
    // 0x8022FDD0: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8022FDD4: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8022FDD8: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8022FDDC: nop

    // 0x8022FDE0: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8022FDE4: nop

    // 0x8022FDE8: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8022FDEC: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
    // 0x8022FDF0: swc1        $f18, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f18.u32l;
    // 0x8022FDF4: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
L_8022FDF8:
    // 0x8022FDF8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8022FDFC:
    // 0x8022FDFC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8022FE00: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8022FE04: jr          $ra
    // 0x8022FE08: nop

    return;
    // 0x8022FE08: nop

;}
RECOMP_FUNC void D_802AA034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AA0B4: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x802AA0B8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x802AA0BC: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x802AA0C0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802AA0C4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802AA0C8: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x802AA0CC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802AA0D0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x802AA0D4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802AA0D8: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x802AA0DC: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x802AA0E0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x802AA0E4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802AA0E8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802AA0EC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802AA0F0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802AA0F4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802AA0F8: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x802AA0FC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802AA100: bne         $t6, $zero, L_802AA11C
    if (ctx->r14 != 0) {
        // 0x802AA104: sdc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
            goto L_802AA11C;
    }
    // 0x802AA104: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802AA108: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AA10C: jal         0x80231A24
    // 0x802AA110: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802AA110: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802AA114: b           L_802AA2FC
    // 0x802AA118: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_802AA2FC;
    // 0x802AA118: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_802AA11C:
    // 0x802AA11C: slti        $at, $a1, 0xF
    ctx->r1 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x802AA120: bne         $at, $zero, L_802AA140
    if (ctx->r1 != 0) {
        // 0x802AA124: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_802AA140;
    }
    // 0x802AA124: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802AA128: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AA12C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802AA130: jal         0x80231A24
    // 0x802AA134: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802AA134: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x802AA138: b           L_802AA2FC
    // 0x802AA13C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_802AA2FC;
    // 0x802AA13C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_802AA140:
    // 0x802AA140: sb          $a1, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r5;
    // 0x802AA144: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802AA148: swc1        $f12, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->f12.u32l;
    // 0x802AA14C: swc1        $f14, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f14.u32l;
    // 0x802AA150: swc1        $f4, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->f4.u32l;
    // 0x802AA154: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x802AA158: jal         0x80207130
    // 0x802AA15C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_2;
    // 0x802AA15C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x802AA160: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802AA164: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802AA168: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x802AA16C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x802AA170: cvt.w.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_D(ctx->f0.d);
    // 0x802AA174: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x802AA178: nop

    // 0x802AA17C: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x802AA180: beql        $a0, $zero, L_802AA1D4
    if (ctx->r4 == 0) {
        // 0x802AA184: mfc1        $a0, $f6
        ctx->r4 = (int32_t)ctx->f6.u32l;
            goto L_802AA1D4;
    }
    goto skip_0;
    // 0x802AA184: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x802AA188: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802AA18C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AA190: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802AA194: sub.d       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f0.d - ctx->f6.d;
    // 0x802AA198: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x802AA19C: nop

    // 0x802AA1A0: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x802AA1A4: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x802AA1A8: nop

    // 0x802AA1AC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x802AA1B0: bne         $a0, $zero, L_802AA1C8
    if (ctx->r4 != 0) {
        // 0x802AA1B4: nop
    
            goto L_802AA1C8;
    }
    // 0x802AA1B4: nop

    // 0x802AA1B8: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x802AA1BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802AA1C0: b           L_802AA1E0
    // 0x802AA1C4: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_802AA1E0;
    // 0x802AA1C4: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_802AA1C8:
    // 0x802AA1C8: b           L_802AA1E0
    // 0x802AA1CC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_802AA1E0;
    // 0x802AA1CC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802AA1D0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
L_802AA1D4:
    // 0x802AA1D4: nop

    // 0x802AA1D8: bltz        $a0, L_802AA1C8
    if (SIGNED(ctx->r4) < 0) {
        // 0x802AA1DC: nop
    
            goto L_802AA1C8;
    }
    // 0x802AA1DC: nop

L_802AA1E0:
    // 0x802AA1E0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802AA1E4: jal         0x80234990
    // 0x802AA1E8: nop

    static_3_80234990(rdram, ctx);
        goto after_3;
    // 0x802AA1E8: nop

    after_3:
    // 0x802AA1EC: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x802AA1F0: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x802AA1F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AA1F8: blez        $t8, L_802AA2F8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x802AA1FC: addiu       $fp, $zero, 0x90
        ctx->r30 = ADD32(0, 0X90);
            goto L_802AA2F8;
    }
    // 0x802AA1FC: addiu       $fp, $zero, 0x90
    ctx->r30 = ADD32(0, 0X90);
    // 0x802AA200: lwc1        $f24, 0x0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AA204: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AA208: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802AA20C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802AA210: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802AA214: addiu       $s4, $sp, 0x84
    ctx->r20 = ADD32(ctx->r29, 0X84);
    // 0x802AA218: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
L_802AA21C:
    // 0x802AA21C: jal         0x8023499C
    // 0x802AA220: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    static_3_8023499C(rdram, ctx);
        goto after_4;
    // 0x802AA220: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_4:
    // 0x802AA224: multu       $s7, $fp
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AA228: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802AA22C: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x802AA230: mflo        $t9
    ctx->r25 = lo;
    // 0x802AA234: addu        $s2, $s5, $t9
    ctx->r18 = ADD32(ctx->r21, ctx->r25);
    // 0x802AA238: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x802AA23C: swc1        $f10, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f10.u32l;
    // 0x802AA240: jal         0x802DA3F8
    // 0x802AA244: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802DA3F8(rdram, ctx);
        goto after_5;
    // 0x802AA244: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x802AA248: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802AA24C: sb          $t0, 0x24($s1)
    MEM_B(0X24, ctx->r17) = ctx->r8;
    // 0x802AA250: sw          $s5, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r21;
    // 0x802AA254: jal         0x802DA15C
    // 0x802AA258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802DA15C(rdram, ctx);
        goto after_6;
    // 0x802AA258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x802AA25C: lwc1        $f2, 0x14($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X14);
    // 0x802AA260: lwc1        $f18, 0x88($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X88);
    // 0x802AA264: sb          $zero, 0x80($s2)
    MEM_B(0X80, ctx->r18) = 0;
    // 0x802AA268: div.s       $f16, $f24, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f24.fl, ctx->f2.fl);
    // 0x802AA26C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802AA270: swc1        $f4, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f4.u32l;
L_802AA274:
    // 0x802AA274: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802AA278: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802AA27C: jal         0x802DA604
    // 0x802AA280: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    static_3_802DA604(rdram, ctx);
        goto after_7;
    // 0x802AA280: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_7:
    // 0x802AA284: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802AA288: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x802AA28C: jal         0x802DA4EC
    // 0x802AA290: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    static_3_802DA4EC(rdram, ctx);
        goto after_8;
    // 0x802AA290: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    after_8:
    // 0x802AA294: beq         $v0, $zero, L_802AA2AC
    if (ctx->r2 == 0) {
        // 0x802AA298: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802AA2AC;
    }
    // 0x802AA298: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802AA29C: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x802AA2A0: slti        $at, $t1, 0xFF
    ctx->r1 = SIGNED(ctx->r9) < 0XFF ? 1 : 0;
    // 0x802AA2A4: bne         $at, $zero, L_802AA274
    if (ctx->r1 != 0) {
        // 0x802AA2A8: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_802AA274;
    }
    // 0x802AA2A8: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
L_802AA2AC:
    // 0x802AA2AC: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802AA2B0: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802AA2B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802AA2B8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802AA2BC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802AA2C0: swc1        $f6, 0x70($s2)
    MEM_W(0X70, ctx->r18) = ctx->f6.u32l;
    // 0x802AA2C4: jal         0x802DA450
    // 0x802AA2C8: swc1        $f0, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f0.u32l;
    static_3_802DA450(rdram, ctx);
        goto after_9;
    // 0x802AA2C8: swc1        $f0, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f0.u32l;
    after_9:
    // 0x802AA2CC: swc1        $f0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f0.u32l;
    // 0x802AA2D0: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    // 0x802AA2D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AA2D8: jal         0x8021B4B0
    // 0x802AA2DC: addiu       $a2, $s1, 0x2C
    ctx->r6 = ADD32(ctx->r17, 0X2C);
    static_3_8021B4B0(rdram, ctx);
        goto after_10;
    // 0x802AA2DC: addiu       $a2, $s1, 0x2C
    ctx->r6 = ADD32(ctx->r17, 0X2C);
    after_10:
    // 0x802AA2E0: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x802AA2E4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x802AA2E8: andi        $t2, $s7, 0xFF
    ctx->r10 = ctx->r23 & 0XFF;
    // 0x802AA2EC: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802AA2F0: bne         $at, $zero, L_802AA21C
    if (ctx->r1 != 0) {
        // 0x802AA2F4: or          $s7, $t2, $zero
        ctx->r23 = ctx->r10 | 0;
            goto L_802AA21C;
    }
    // 0x802AA2F4: or          $s7, $t2, $zero
    ctx->r23 = ctx->r10 | 0;
L_802AA2F8:
    // 0x802AA2F8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_802AA2FC:
    // 0x802AA2FC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802AA300: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802AA304: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x802AA308: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802AA30C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802AA310: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802AA314: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802AA318: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802AA31C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802AA320: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802AA324: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x802AA328: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x802AA32C: jr          $ra
    // 0x802AA330: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x802AA330: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void D_8029D0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029D128: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x8029D12C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8029D130: jr          $ra
    // 0x8029D134: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    return;
    // 0x8029D134: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
;}
