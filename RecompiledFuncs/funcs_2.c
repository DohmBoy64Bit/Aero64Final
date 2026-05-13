#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802D2C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2D04: bne         $a0, $zero, L_802D2D1C
    if (ctx->r4 != 0) {
        // 0x802D2D08: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802D2D1C;
    }
    // 0x802D2D08: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D2D0C: jal         0x802C67EC
    // 0x802D2D10: addiu       $a0, $zero, 0x74
    ctx->r4 = ADD32(0, 0X74);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D2D10: addiu       $a0, $zero, 0x74
    ctx->r4 = ADD32(0, 0X74);
    after_0:
    // 0x802D2D14: beq         $v0, $zero, L_802D2D3C
    if (ctx->r2 == 0) {
        // 0x802D2D18: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802D2D3C;
    }
    // 0x802D2D18: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802D2D1C:
    // 0x802D2D1C: addiu       $a0, $a1, 0x58
    ctx->r4 = ADD32(ctx->r5, 0X58);
    // 0x802D2D20: jal         0x80302F20
    // 0x802D2D24: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_80302F20(rdram, ctx);
        goto after_1;
    // 0x802D2D24: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802D2D28: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802D2D2C: sw          $zero, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = 0;
    // 0x802D2D30: sb          $zero, 0x48($a1)
    MEM_B(0X48, ctx->r5) = 0;
    // 0x802D2D34: sw          $zero, 0x50($a1)
    MEM_W(0X50, ctx->r5) = 0;
    // 0x802D2D38: sw          $zero, 0x54($a1)
    MEM_W(0X54, ctx->r5) = 0;
L_802D2D3C:
    // 0x802D2D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2D44: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802D2D48: jr          $ra
    // 0x802D2D4C: nop

    return;
    // 0x802D2D4C: nop

;}
RECOMP_FUNC void D_802DC7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DC848: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DC84C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802DC850: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802DC854: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DC858: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802DC85C: jal         0x80224CA8
    // 0x802DC860: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802DC860: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x802DC864: jal         0x8021E66C
    // 0x802DC868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8021E66C(rdram, ctx);
        goto after_1;
    // 0x802DC868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x802DC86C: jal         0x80223E48
    // 0x802DC870: nop

    static_3_80223E48(rdram, ctx);
        goto after_2;
    // 0x802DC870: nop

    after_2:
    // 0x802DC874: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x802DC878: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802DC87C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802DC880: jal         0x8021E708
    // 0x802DC884: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    static_3_8021E708(rdram, ctx);
        goto after_3;
    // 0x802DC884: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x802DC888: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DC88C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DC890: jal         0x80309D48
    // 0x802DC894: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309D48(rdram, ctx);
        goto after_4;
    // 0x802DC894: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x802DC898: jal         0x8021E83C
    // 0x802DC89C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8021E83C(rdram, ctx);
        goto after_5;
    // 0x802DC89C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x802DC8A0: bgez        $v0, L_802DC8B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802DC8A4: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_802DC8B0;
    }
    // 0x802DC8A4: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x802DC8A8: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x802DC8AC: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_802DC8B0:
    // 0x802DC8B0: addiu       $t7, $zero, 0xA0
    ctx->r15 = ADD32(0, 0XA0);
    // 0x802DC8B4: subu        $s0, $t7, $t6
    ctx->r16 = SUB32(ctx->r15, ctx->r14);
    // 0x802DC8B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DC8BC: jal         0x80223FC4
    // 0x802DC8C0: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_6;
    // 0x802DC8C0: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_6:
    // 0x802DC8C4: bnel        $v0, $zero, L_802DC914
    if (ctx->r2 != 0) {
        // 0x802DC8C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802DC914;
    }
    goto skip_0;
    // 0x802DC8C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_802DC8CC:
    // 0x802DC8CC: jal         0x80220340
    // 0x802DC8D0: nop

    static_3_80220340(rdram, ctx);
        goto after_7;
    // 0x802DC8D0: nop

    after_7:
    // 0x802DC8D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DC8D8: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802DC8DC: jal         0x8021E87C
    // 0x802DC8E0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_8021E87C(rdram, ctx);
        goto after_8;
    // 0x802DC8E0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x802DC8E4: jal         0x8021EC9C
    // 0x802DC8E8: nop

    static_3_8021EC9C(rdram, ctx);
        goto after_9;
    // 0x802DC8E8: nop

    after_9:
    // 0x802DC8EC: jal         0x80221BC4
    // 0x802DC8F0: nop

    static_3_80221BC4(rdram, ctx);
        goto after_10;
    // 0x802DC8F0: nop

    after_10:
    // 0x802DC8F4: jal         0x80223E48
    // 0x802DC8F8: nop

    static_3_80223E48(rdram, ctx);
        goto after_11;
    // 0x802DC8F8: nop

    after_11:
    // 0x802DC8FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DC900: jal         0x80223FC4
    // 0x802DC904: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    static_3_80223FC4(rdram, ctx);
        goto after_12;
    // 0x802DC904: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_12:
    // 0x802DC908: beq         $v0, $zero, L_802DC8CC
    if (ctx->r2 == 0) {
        // 0x802DC90C: nop
    
            goto L_802DC8CC;
    }
    // 0x802DC90C: nop

    // 0x802DC910: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802DC914:
    // 0x802DC914: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802DC918: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802DC91C: jr          $ra
    // 0x802DC920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802DC920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802F200C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F208C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802F2090: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802F2094: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802F2098: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802F209C: beq         $a0, $zero, L_802F2124
    if (ctx->r4 == 0) {
        // 0x802F20A0: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_802F2124;
    }
    // 0x802F20A0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802F20A4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802F20A8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802F20AC: jal         0x80322C20
    // 0x802F20B0: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    static_3_80322C20(rdram, ctx);
        goto after_0;
    // 0x802F20B0: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    after_0:
    // 0x802F20B4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802F20B8: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802F20BC: addiu       $a0, $s0, 0x2C8C
    ctx->r4 = ADD32(ctx->r16, 0X2C8C);
    // 0x802F20C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F20C4: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    // 0x802F20C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802F20CC: jal         0x802C6A00
    // 0x802F20D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_1;
    // 0x802F20D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x802F20D4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802F20D8: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802F20DC: addiu       $a0, $s0, 0xC0C
    ctx->r4 = ADD32(ctx->r16, 0XC0C);
    // 0x802F20E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F20E4: addiu       $a2, $zero, 0x820
    ctx->r6 = ADD32(0, 0X820);
    // 0x802F20E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802F20EC: jal         0x802C6A00
    // 0x802F20F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    static_3_802C6A00(rdram, ctx);
        goto after_2;
    // 0x802F20F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x802F20F4: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    // 0x802F20F8: jal         0x80288948
    // 0x802F20FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80288948(rdram, ctx);
        goto after_3;
    // 0x802F20FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802F2100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F2104: jal         0x803086D4
    // 0x802F2108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_4;
    // 0x802F2108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802F210C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802F2110: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802F2114: beql        $t8, $zero, L_802F2128
    if (ctx->r24 == 0) {
        // 0x802F2118: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802F2128;
    }
    goto skip_0;
    // 0x802F2118: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802F211C: jal         0x802C681C
    // 0x802F2120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_5;
    // 0x802F2120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_802F2124:
    // 0x802F2124: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802F2128:
    // 0x802F2128: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802F212C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802F2130: jr          $ra
    // 0x802F2134: nop

    return;
    // 0x802F2134: nop

;}
RECOMP_FUNC void D_802802D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280348: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8028034C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280350: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80280354: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x80280358: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x8028035C: jal         0x802AF068
    // 0x80280360: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    static_3_802AF068(rdram, ctx);
        goto after_0;
    // 0x80280360: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80280364: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x80280368: beq         $v0, $zero, L_8028041C
    if (ctx->r2 == 0) {
        // 0x8028036C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8028041C;
    }
    // 0x8028036C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80280370: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x80280374: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80280378: bnel        $t6, $at, L_80280420
    if (ctx->r14 != ctx->r1) {
        // 0x8028037C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80280420;
    }
    goto skip_0;
    // 0x8028037C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80280380: beq         $a1, $zero, L_8028041C
    if (ctx->r5 == 0) {
        // 0x80280384: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8028041C;
    }
    // 0x80280384: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80280388: beq         $a1, $at, L_8028041C
    if (ctx->r5 == ctx->r1) {
        // 0x8028038C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8028041C;
    }
    // 0x8028038C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80280390: beql        $a1, $at, L_80280420
    if (ctx->r5 == ctx->r1) {
        // 0x80280394: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80280420;
    }
    goto skip_1;
    // 0x80280394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80280398: jal         0x803187FC
    // 0x8028039C: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    static_3_803187FC(rdram, ctx);
        goto after_1;
    // 0x8028039C: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_1:
    // 0x802803A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802803A4: beq         $v0, $at, L_8028041C
    if (ctx->r2 == ctx->r1) {
        // 0x802803A8: lw          $a0, 0x64($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X64);
            goto L_8028041C;
    }
    // 0x802803A8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x802803AC: jal         0x803187FC
    // 0x802803B0: nop

    static_3_803187FC(rdram, ctx);
        goto after_2;
    // 0x802803B0: nop

    after_2:
    // 0x802803B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802803B8: beql        $v0, $at, L_80280420
    if (ctx->r2 == ctx->r1) {
        // 0x802803BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80280420;
    }
    goto skip_2;
    // 0x802803BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x802803C0: jal         0x8022970C
    // 0x802803C4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802803C4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x802803C8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x802803CC: jal         0x803183D0
    // 0x802803D0: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    static_3_803183D0(rdram, ctx);
        goto after_4;
    // 0x802803D0: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_4:
    // 0x802803D4: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802803D8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x802803DC: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802803E0: lh          $t7, 0x10($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X10);
    // 0x802803E4: jalr        $t9
    // 0x802803E8: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802803E8: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    after_5:
    // 0x802803EC: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802803F0: jal         0x802CF954
    // 0x802803F4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    static_3_802CF954(rdram, ctx);
        goto after_6;
    // 0x802803F4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x802803F8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802803FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280400: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80280404: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80280408: nop

    // 0x8028040C: bc1fl       L_80280420
    if (!c1cs) {
        // 0x80280410: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80280420;
    }
    goto skip_3;
    // 0x80280410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80280414: jal         0x80303578
    // 0x80280418: addiu       $a0, $a0, 0x3230
    ctx->r4 = ADD32(ctx->r4, 0X3230);
    static_3_80303578(rdram, ctx);
        goto after_7;
    // 0x80280418: addiu       $a0, $a0, 0x3230
    ctx->r4 = ADD32(ctx->r4, 0X3230);
    after_7:
L_8028041C:
    // 0x8028041C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80280420:
    // 0x80280420: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80280424: jr          $ra
    // 0x80280428: nop

    return;
    // 0x80280428: nop

;}
RECOMP_FUNC void D_802E4B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E4B94: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802E4B98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802E4B9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E4BA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802E4BA4: lwc1        $f4, 0xDBC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XDBC);
    // 0x802E4BA8: lwc1        $f8, 0xDC0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XDC0);
    // 0x802E4BAC: lbu         $a1, 0xDB9($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XDB9);
    // 0x802E4BB0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802E4BB4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802E4BB8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802E4BBC: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x802E4BC0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E4BC4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E4BC8: jal         0x80231A24
    // 0x802E4BCC: sdc1        $f10, 0x10($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X10, ctx->r29);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E4BCC: sdc1        $f10, 0x10($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X10, ctx->r29);
    after_0:
    // 0x802E4BD0: lbu         $v0, 0xDB9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDB9);
    // 0x802E4BD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E4BD8: beq         $v0, $at, L_802E4BF0
    if (ctx->r2 == ctx->r1) {
        // 0x802E4BDC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802E4BF0;
    }
    // 0x802E4BDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802E4BE0: beql        $v0, $at, L_802E4CFC
    if (ctx->r2 == ctx->r1) {
        // 0x802E4BE4: lwc1        $f6, 0xDC0($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0XDC0);
            goto L_802E4CFC;
    }
    goto skip_0;
    // 0x802E4BE4: lwc1        $f6, 0xDC0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XDC0);
    skip_0:
    // 0x802E4BE8: b           L_802E4D24
    // 0x802E4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802E4D24;
    // 0x802E4BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802E4BF0:
    // 0x802E4BF0: lwc1        $f16, 0xDC0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XDC0);
    // 0x802E4BF4: lwc1        $f18, 0xDBC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XDBC);
    // 0x802E4BF8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802E4BFC: lui         $at, 0x4098
    ctx->r1 = S32(0X4098 << 16);
    // 0x802E4C00: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802E4C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E4C08: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x802E4C0C: bc1fl       L_802E4D24
    if (!c1cs) {
        // 0x802E4C10: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802E4D24;
    }
    goto skip_1;
    // 0x802E4C10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x802E4C14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E4C18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802E4C1C: sb          $t6, 0xDB9($s0)
    MEM_B(0XDB9, ctx->r16) = ctx->r14;
    // 0x802E4C20: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802E4C24: swc1        $f0, 0xDBC($s0)
    MEM_W(0XDBC, ctx->r16) = ctx->f0.u32l;
    // 0x802E4C28: swc1        $f0, 0xDD0($s0)
    MEM_W(0XDD0, ctx->r16) = ctx->f0.u32l;
    // 0x802E4C2C: jal         0x8021B6D4
    // 0x802E4C30: swc1        $f4, 0xDC0($s0)
    MEM_W(0XDC0, ctx->r16) = ctx->f4.u32l;
    static_3_8021B6D4(rdram, ctx);
        goto after_1;
    // 0x802E4C30: swc1        $f4, 0xDC0($s0)
    MEM_W(0XDC0, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x802E4C34: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802E4C38: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802E4C3C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x802E4C40: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802E4C44: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802E4C48: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802E4C4C: jal         0x8022A210
    // 0x802E4C50: nop

    static_3_8022A210(rdram, ctx);
        goto after_2;
    // 0x802E4C50: nop

    after_2:
    // 0x802E4C54: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802E4C58: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802E4C5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802E4C60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802E4C64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802E4C68: addiu       $a0, $s0, 0xDF8
    ctx->r4 = ADD32(ctx->r16, 0XDF8);
    // 0x802E4C6C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802E4C70: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x802E4C74: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802E4C78: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802E4C7C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802E4C80: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x802E4C84: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x802E4C88: sh          $v0, 0xE72($s0)
    MEM_H(0XE72, ctx->r16) = ctx->r2;
    // 0x802E4C8C: sh          $v0, 0xE78($s0)
    MEM_H(0XE78, ctx->r16) = ctx->r2;
    // 0x802E4C90: sh          $v1, 0xE74($s0)
    MEM_H(0XE74, ctx->r16) = ctx->r3;
    // 0x802E4C94: jal         0x80228DE0
    // 0x802E4C98: sh          $v1, 0xE76($s0)
    MEM_H(0XE76, ctx->r16) = ctx->r3;
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x802E4C98: sh          $v1, 0xE76($s0)
    MEM_H(0XE76, ctx->r16) = ctx->r3;
    after_3:
    // 0x802E4C9C: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    // 0x802E4CA0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802E4CA4: sb          $t9, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r25;
    // 0x802E4CA8: jal         0x8031C568
    // 0x802E4CAC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    static_3_8031C568(rdram, ctx);
        goto after_4;
    // 0x802E4CAC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
    // 0x802E4CB0: lw          $v0, 0xEA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEA4);
    // 0x802E4CB4: lui         $a2, 0x3EA8
    ctx->r6 = S32(0X3EA8 << 16);
    // 0x802E4CB8: ori         $a2, $a2, 0xF5C3
    ctx->r6 = ctx->r6 | 0XF5C3;
    // 0x802E4CBC: lh          $t0, 0x20($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X20);
    // 0x802E4CC0: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x802E4CC4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E4CC8: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x802E4CCC: jalr        $t9
    // 0x802E4CD0: addiu       $a0, $a0, 0xDF4
    ctx->r4 = ADD32(ctx->r4, 0XDF4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802E4CD0: addiu       $a0, $a0, 0xDF4
    ctx->r4 = ADD32(ctx->r4, 0XDF4);
    after_5:
    // 0x802E4CD4: lw          $v0, 0xEA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEA4);
    // 0x802E4CD8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802E4CDC: lh          $t1, 0x18($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X18);
    // 0x802E4CE0: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802E4CE4: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    // 0x802E4CE8: jalr        $t9
    // 0x802E4CEC: addiu       $a0, $a0, 0xDF4
    ctx->r4 = ADD32(ctx->r4, 0XDF4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802E4CEC: addiu       $a0, $a0, 0xDF4
    ctx->r4 = ADD32(ctx->r4, 0XDF4);
    after_6:
    // 0x802E4CF0: b           L_802E4D24
    // 0x802E4CF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802E4D24;
    // 0x802E4CF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802E4CF8: lwc1        $f6, 0xDC0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XDC0);
L_802E4CFC:
    // 0x802E4CFC: lwc1        $f8, 0xDBC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XDBC);
    // 0x802E4D00: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802E4D04: nop

    // 0x802E4D08: bc1fl       L_802E4D24
    if (!c1cs) {
        // 0x802E4D0C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802E4D24;
    }
    goto skip_2;
    // 0x802E4D0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x802E4D10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802E4D14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802E4D18: sb          $t2, 0x19B($s0)
    MEM_B(0X19B, ctx->r16) = ctx->r10;
    // 0x802E4D1C: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x802E4D20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802E4D24:
    // 0x802E4D24: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802E4D28: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802E4D2C: jr          $ra
    // 0x802E4D30: nop

    return;
    // 0x802E4D30: nop

;}
RECOMP_FUNC void func_8020372C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8020372C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80203730: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80203734: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80203738: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020373C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80203740: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80203744: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80203748: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8020374C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80203750: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203754: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80203758: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8020375C: jr          $ra
    // 0x80203760: lw          $v0, 0xA8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA8);
    return;
    // 0x80203760: lw          $v0, 0xA8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XA8);
;}
RECOMP_FUNC void D_8021DCC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021DCC0: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8021DCC4: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8021DCC8: lhu         $a0, 0x36($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X36);
    // 0x8021DCCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021DCD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021DCD4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8021DCD8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8021DCDC: jal         0x8022BA58
    // 0x8021DCE0: sll         $a0, $t6, 3
    ctx->r4 = S32(ctx->r14 << 3);
    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x8021DCE0: sll         $a0, $t6, 3
    ctx->r4 = S32(ctx->r14 << 3);
    after_0:
    // 0x8021DCE4: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8021DCE8: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8021DCEC: lhu         $a2, 0x36($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X36);
    // 0x8021DCF0: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021DCF4: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8021DCF8: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8021DCFC: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x8021DD00: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x8021DD04: sll         $a2, $t7, 3
    ctx->r6 = S32(ctx->r15 << 3);
    // 0x8021DD08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021DD0C: jal         0x8022B780
    // 0x8021DD10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_1;
    // 0x8021DD10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8021DD14: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8021DD18: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8021DD1C: lhu         $t8, 0x36($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X36);
    // 0x8021DD20: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021DD24: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8021DD28: blez        $t8, L_8021DD84
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8021DD2C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8021DD84;
    }
    // 0x8021DD2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8021DD30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021DD34: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8021DD38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021DD3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021DD40: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
L_8021DD44:
    // 0x8021DD44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021DD48: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x8021DD4C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8021DD50: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8021DD54: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8021DD58: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x8021DD5C: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8021DD60: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8021DD64: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x8021DD68: sb          $zero, 0x11($v0)
    MEM_B(0X11, ctx->r2) = 0;
    // 0x8021DD6C: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x8021DD70: lhu         $t1, 0x36($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X36);
    // 0x8021DD74: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x8021DD78: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8021DD7C: bnel        $at, $zero, L_8021DD44
    if (ctx->r1 != 0) {
        // 0x8021DD80: lw          $t9, 0x0($t0)
        ctx->r25 = MEM_W(ctx->r8, 0X0);
            goto L_8021DD44;
    }
    goto skip_0;
    // 0x8021DD80: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    skip_0:
L_8021DD84:
    // 0x8021DD84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021DD88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021DD8C: jr          $ra
    // 0x8021DD90: nop

    return;
    // 0x8021DD90: nop

;}
RECOMP_FUNC void D_802DCC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DCCC4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802DCCC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DCCCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DCCD0: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802DCCD4: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x802DCCD8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802DCCDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DCCE0: bnel        $t6, $at, L_802DCD20
    if (ctx->r14 != ctx->r1) {
        // 0x802DCCE4: lw          $v0, 0x1A0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1A0);
            goto L_802DCD20;
    }
    goto skip_0;
    // 0x802DCCE4: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    skip_0:
    // 0x802DCCE8: jal         0x8021BA90
    // 0x802DCCEC: nop

    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x802DCCEC: nop

    after_0:
    // 0x802DCCF0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802DCCF4: bne         $v0, $at, L_802DCD1C
    if (ctx->r2 != ctx->r1) {
        // 0x802DCCF8: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_802DCD1C;
    }
    // 0x802DCCF8: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x802DCCFC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DCD00: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802DCD04: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802DCD08: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802DCD0C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802DCD10: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DCD14: jal         0x80231A24
    // 0x802DCD18: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802DCD18: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_1:
L_802DCD1C:
    // 0x802DCD1C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
L_802DCD20:
    // 0x802DCD20: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802DCD24: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802DCD28: lh          $t7, 0xB0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB0);
    // 0x802DCD2C: jalr        $t9
    // 0x802DCD30: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802DCD30: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_2:
    // 0x802DCD34: jal         0x8022970C
    // 0x802DCD38: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802DCD38: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x802DCD3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802DCD40: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802DCD44: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x802DCD48: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802DCD4C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802DCD50: jal         0x8022A0D0
    // 0x802DCD54: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_4;
    // 0x802DCD54: nop

    after_4:
    // 0x802DCD58: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x802DCD5C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x802DCD60: beq         $t8, $at, L_802DCD84
    if (ctx->r24 == ctx->r1) {
        // 0x802DCD64: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_802DCD84;
    }
    // 0x802DCD64: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x802DCD68: beq         $t8, $at, L_802DCDE8
    if (ctx->r24 == ctx->r1) {
        // 0x802DCD6C: addiu       $t3, $zero, 0x82
        ctx->r11 = ADD32(0, 0X82);
            goto L_802DCDE8;
    }
    // 0x802DCD6C: addiu       $t3, $zero, 0x82
    ctx->r11 = ADD32(0, 0X82);
    // 0x802DCD70: addiu       $t0, $s0, 0x364
    ctx->r8 = ADD32(ctx->r16, 0X364);
    // 0x802DCD74: addiu       $t1, $s0, 0x4F8
    ctx->r9 = ADD32(ctx->r16, 0X4F8);
    // 0x802DCD78: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802DCD7C: b           L_802DCE40
    // 0x802DCD80: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
        goto L_802DCE40;
    // 0x802DCD80: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_802DCD84:
    // 0x802DCD84: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802DCD88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DCD8C: addiu       $t2, $zero, 0x81
    ctx->r10 = ADD32(0, 0X81);
    // 0x802DCD90: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802DCD94: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x802DCD98: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802DCD9C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x802DCDA0: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802DCDA4: jal         0x80309758
    // 0x802DCDA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309758(rdram, ctx);
        goto after_5;
    // 0x802DCDA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x802DCDAC: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x802DCDB0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802DCDB4: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x802DCDB8: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802DCDBC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802DCDC0: jal         0x802C4A20
    // 0x802DCDC4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    static_3_802C4A20(rdram, ctx);
        goto after_6;
    // 0x802DCDC4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_6:
    // 0x802DCDC8: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    // 0x802DCDCC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802DCDD0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802DCDD4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x802DCDD8: jal         0x802C4A20
    // 0x802DCDDC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    static_3_802C4A20(rdram, ctx);
        goto after_7;
    // 0x802DCDDC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_7:
    // 0x802DCDE0: b           L_802DCE44
    // 0x802DCDE4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
        goto L_802DCE44;
    // 0x802DCDE4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_802DCDE8:
    // 0x802DCDE8: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802DCDEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DCDF0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802DCDF4: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
    // 0x802DCDF8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802DCDFC: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x802DCE00: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x802DCE04: jal         0x80309758
    // 0x802DCE08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309758(rdram, ctx);
        goto after_8;
    // 0x802DCE08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x802DCE0C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x802DCE10: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802DCE14: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x802DCE18: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802DCE1C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x802DCE20: jal         0x802C4A20
    // 0x802DCE24: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    static_3_802C4A20(rdram, ctx);
        goto after_9;
    // 0x802DCE24: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_9:
    // 0x802DCE28: addiu       $a0, $s0, 0x4F8
    ctx->r4 = ADD32(ctx->r16, 0X4F8);
    // 0x802DCE2C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x802DCE30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802DCE34: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x802DCE38: jal         0x802C4A20
    // 0x802DCE3C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802DCE3C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_10:
L_802DCE40:
    // 0x802DCE40: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_802DCE44:
    // 0x802DCE44: jal         0x802C580C
    // 0x802DCE48: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_11;
    // 0x802DCE48: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_11:
    // 0x802DCE4C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802DCE50: jal         0x802C5818
    // 0x802DCE54: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_12;
    // 0x802DCE54: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    after_12:
    // 0x802DCE58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802DCE5C: jal         0x802C5824
    // 0x802DCE60: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_13;
    // 0x802DCE60: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_13:
    // 0x802DCE64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802DCE68: jal         0x802C5830
    // 0x802DCE6C: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_14;
    // 0x802DCE6C: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    after_14:
    // 0x802DCE70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802DCE74: jal         0x802C580C
    // 0x802DCE78: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_802C580C(rdram, ctx);
        goto after_15;
    // 0x802DCE78: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_15:
    // 0x802DCE7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802DCE80: jal         0x802C5818
    // 0x802DCE84: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    static_3_802C5818(rdram, ctx);
        goto after_16;
    // 0x802DCE84: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    after_16:
    // 0x802DCE88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802DCE8C: jal         0x802C5824
    // 0x802DCE90: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_802C5824(rdram, ctx);
        goto after_17;
    // 0x802DCE90: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_17:
    // 0x802DCE94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802DCE98: jal         0x802C5830
    // 0x802DCE9C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    static_3_802C5830(rdram, ctx);
        goto after_18;
    // 0x802DCE9C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_18:
    // 0x802DCEA0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802DCEA4: jal         0x8021ACB0
    // 0x802DCEA8: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    static_3_8021ACB0(rdram, ctx);
        goto after_19;
    // 0x802DCEA8: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    after_19:
    // 0x802DCEAC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802DCEB0: jal         0x8021B838
    // 0x802DCEB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_20;
    // 0x802DCEB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_20:
    // 0x802DCEB8: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802DCEBC: addiu       $v1, $s0, 0x1A4
    ctx->r3 = ADD32(ctx->r16, 0X1A4);
    // 0x802DCEC0: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x802DCEC4: lh          $t4, 0x18($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X18);
    // 0x802DCEC8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x802DCECC: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x802DCED0: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802DCED4: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x802DCED8: jalr        $t9
    // 0x802DCEDC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x802DCEDC: nop

    after_21:
    // 0x802DCEE0: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x802DCEE4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802DCEE8: lh          $t5, 0xA0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XA0);
    // 0x802DCEEC: lw          $t9, 0xA4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XA4);
    // 0x802DCEF0: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    // 0x802DCEF4: jalr        $t9
    // 0x802DCEF8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x802DCEF8: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_22:
    // 0x802DCEFC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802DCF00: jal         0x802D2990
    // 0x802DCF04: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802D2990(rdram, ctx);
        goto after_23;
    // 0x802DCF04: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_23:
    // 0x802DCF08: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802DCF0C: jal         0x802D2784
    // 0x802DCF10: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    static_3_802D2784(rdram, ctx);
        goto after_24;
    // 0x802DCF10: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_24:
    // 0x802DCF14: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802DCF18: jal         0x802D2984
    // 0x802DCF1C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    static_3_802D2984(rdram, ctx);
        goto after_25;
    // 0x802DCF1C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_25:
    // 0x802DCF20: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802DCF24: jal         0x802D27F4
    // 0x802DCF28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802D27F4(rdram, ctx);
        goto after_26;
    // 0x802DCF28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x802DCF2C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802DCF30: jal         0x802D50E8
    // 0x802DCF34: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    static_3_802D50E8(rdram, ctx);
        goto after_27;
    // 0x802DCF34: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_27:
    // 0x802DCF38: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802DCF3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DCF40: swc1        $f8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f8.u32l;
    // 0x802DCF44: jal         0x80318E80
    // 0x802DCF48: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    static_3_80318E80(rdram, ctx);
        goto after_28;
    // 0x802DCF48: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    after_28:
    // 0x802DCF4C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802DCF50: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x802DCF54: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802DCF58: lh          $t6, 0xB8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XB8);
    // 0x802DCF5C: jalr        $t9
    // 0x802DCF60: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x802DCF60: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_29:
    // 0x802DCF64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DCF68: jal         0x80318EFC
    // 0x802DCF6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318EFC(rdram, ctx);
        goto after_30;
    // 0x802DCF6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_30:
    // 0x802DCF70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DCF74: jal         0x80318EF4
    // 0x802DCF78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80318EF4(rdram, ctx);
        goto after_31;
    // 0x802DCF78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_31:
    // 0x802DCF7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DCF80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DCF84: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802DCF88: jr          $ra
    // 0x802DCF8C: nop

    return;
    // 0x802DCF8C: nop

;}
RECOMP_FUNC void D_802D14A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D152C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D1530: beq         $a0, $zero, L_802D157C
    if (ctx->r4 == 0) {
        // 0x802D1534: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802D157C;
    }
    // 0x802D1534: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802D1538: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D153C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D1540: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802D1544: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802D1548: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x802D154C: jal         0x8028D2B8
    // 0x802D1550: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8028D2B8(rdram, ctx);
        goto after_0;
    // 0x802D1550: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802D1554: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D1558: jal         0x803086D4
    // 0x802D155C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_1;
    // 0x802D155C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802D1560: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1564: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802D1568: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802D156C: beql        $t8, $zero, L_802D1580
    if (ctx->r24 == 0) {
        // 0x802D1570: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D1580;
    }
    goto skip_0;
    // 0x802D1570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D1574: jal         0x802C681C
    // 0x802D1578: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x802D1578: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_802D157C:
    // 0x802D157C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D1580:
    // 0x802D1580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1584: jr          $ra
    // 0x802D1588: nop

    return;
    // 0x802D1588: nop

;}
RECOMP_FUNC void D_80290B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80290BD4: bne         $a0, $zero, L_80290BEC
    if (ctx->r4 != 0) {
        // 0x80290BD8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80290BEC;
    }
    // 0x80290BD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80290BDC: jal         0x802C67EC
    // 0x80290BE0: addiu       $a0, $zero, 0x138
    ctx->r4 = ADD32(0, 0X138);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80290BE0: addiu       $a0, $zero, 0x138
    ctx->r4 = ADD32(0, 0X138);
    after_0:
    // 0x80290BE4: beq         $v0, $zero, L_80290C04
    if (ctx->r2 == 0) {
        // 0x80290BE8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80290C04;
    }
    // 0x80290BE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80290BEC:
    // 0x80290BEC: jal         0x802E8C28
    // 0x80290BF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_802E8C28(rdram, ctx);
        goto after_1;
    // 0x80290BF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80290BF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80290BF8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80290BFC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80290C00: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
L_80290C04:
    // 0x80290C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80290C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80290C0C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80290C10: jr          $ra
    // 0x80290C14: nop

    return;
    // 0x80290C14: nop

;}
RECOMP_FUNC void D_802CC634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CC6B4: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x802CC6B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802CC6BC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802CC6C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802CC6C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802CC6C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CC6CC: lbu         $t6, 0x716C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X716C);
    // 0x802CC6D0: beql        $t6, $zero, L_802CC9B4
    if (ctx->r14 == 0) {
        // 0x802CC6D4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802CC9B4;
    }
    goto skip_0;
    // 0x802CC6D4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x802CC6D8: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CC6DC: lwc1        $f4, 0x9C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x802CC6E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802CC6E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CC6E8: mul.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802CC6EC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802CC6F0: nop

    // 0x802CC6F4: bc1fl       L_802CC708
    if (!c1cs) {
        // 0x802CC6F8: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802CC708;
    }
    goto skip_1;
    // 0x802CC6F8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_1:
    // 0x802CC6FC: b           L_802CC708
    // 0x802CC700: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802CC708;
    // 0x802CC700: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802CC704: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802CC708:
    // 0x802CC708: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CC70C: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x802CC710: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802CC714: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802CC718: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802CC71C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CC720: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802CC724: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x802CC728: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x802CC72C: mul.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x802CC730: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802CC734: nop

    // 0x802CC738: bc1fl       L_802CC74C
    if (!c1cs) {
        // 0x802CC73C: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802CC74C;
    }
    goto skip_2;
    // 0x802CC73C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_2:
    // 0x802CC740: b           L_802CC74C
    // 0x802CC744: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802CC74C;
    // 0x802CC744: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802CC748: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802CC74C:
    // 0x802CC74C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CC750: mul.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x802CC754: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x802CC758: nop

    // 0x802CC75C: bc1fl       L_802CC794
    if (!c1cs) {
        // 0x802CC760: c.lt.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
            goto L_802CC794;
    }
    goto skip_3;
    // 0x802CC760: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    skip_3:
    // 0x802CC764: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x802CC768: nop

    // 0x802CC76C: bc1fl       L_802CC784
    if (!c1cs) {
        // 0x802CC770: neg.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
            goto L_802CC784;
    }
    goto skip_4;
    // 0x802CC770: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    skip_4:
    // 0x802CC774: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802CC778: b           L_802CC7B8
    // 0x802CC77C: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
        goto L_802CC7B8;
    // 0x802CC77C: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x802CC780: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_802CC784:
    // 0x802CC784: mul.s       $f10, $f12, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x802CC788: b           L_802CC7B8
    // 0x802CC78C: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
        goto L_802CC7B8;
    // 0x802CC78C: sub.s       $f2, $f10, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x802CC790: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
L_802CC794:
    // 0x802CC794: nop

    // 0x802CC798: bc1fl       L_802CC7AC
    if (!c1cs) {
        // 0x802CC79C: neg.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
            goto L_802CC7AC;
    }
    goto skip_5;
    // 0x802CC79C: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    skip_5:
    // 0x802CC7A0: b           L_802CC7AC
    // 0x802CC7A4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_802CC7AC;
    // 0x802CC7A4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802CC7A8: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_802CC7AC:
    // 0x802CC7AC: mul.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x802CC7B0: sub.s       $f2, $f4, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x802CC7B4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_802CC7B8:
    // 0x802CC7B8: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x802CC7BC: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
    // 0x802CC7C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CC7C4: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802CC7C8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CC7CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802CC7D0: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x802CC7D4: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x802CC7D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802CC7DC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802CC7E0: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802CC7E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CC7E8: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802CC7EC: nop

    // 0x802CC7F0: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802CC7F4: jal         0x8022331C
    // 0x802CC7F8: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x802CC7F8: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x802CC7FC: jal         0x802233EC
    // 0x802CC800: lui         $a0, 0xE0
    ctx->r4 = S32(0XE0 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_1;
    // 0x802CC800: lui         $a0, 0xE0
    ctx->r4 = S32(0XE0 << 16);
    after_1:
    // 0x802CC804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CC808: jal         0x802FD1D8
    // 0x802CC80C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802FD1D8(rdram, ctx);
        goto after_2;
    // 0x802CC80C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802CC810: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x802CC814: jal         0x80228DE0
    // 0x802CC818: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x802CC818: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_3:
    // 0x802CC81C: lwc1        $f6, 0x88($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802CC820: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802CC824: lwc1        $f10, 0x8C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x802CC828: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x802CC82C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x802CC830: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802CC834: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802CC838: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802CC83C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802CC840: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802CC844: jal         0x8022A210
    // 0x802CC848: nop

    static_3_8022A210(rdram, ctx);
        goto after_4;
    // 0x802CC848: nop

    after_4:
    // 0x802CC84C: jal         0x80223108
    // 0x802CC850: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    static_3_80223108(rdram, ctx);
        goto after_5;
    // 0x802CC850: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_5:
    // 0x802CC854: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802CC858: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802CC85C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802CC860: lbu         $t7, 0x716D($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X716D);
    // 0x802CC864: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802CC868: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x802CC86C: bgez        $t7, L_802CC880
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802CC870: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802CC880;
    }
    // 0x802CC870: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802CC874: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802CC878: nop

    // 0x802CC87C: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_802CC880:
    // 0x802CC880: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802CC884: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802CC888: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802CC88C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802CC890: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802CC894: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802CC898: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802CC89C: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802CC8A0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802CC8A4: nop

    // 0x802CC8A8: bc1fl       L_802CC8BC
    if (!c1cs) {
        // 0x802CC8AC: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_802CC8BC;
    }
    goto skip_6;
    // 0x802CC8AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_6:
    // 0x802CC8B0: b           L_802CC8D4
    // 0x802CC8B4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802CC8D4;
    // 0x802CC8B4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802CC8B8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_802CC8BC:
    // 0x802CC8BC: nop

    // 0x802CC8C0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802CC8C4: nop

    // 0x802CC8C8: bc1f        L_802CC8D4
    if (!c1cs) {
        // 0x802CC8CC: nop
    
            goto L_802CC8D4;
    }
    // 0x802CC8CC: nop

    // 0x802CC8D0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802CC8D4:
    // 0x802CC8D4: jal         0x8021F4E4
    // 0x802CC8D8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    static_3_8021F4E4(rdram, ctx);
        goto after_6;
    // 0x802CC8D8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x802CC8DC: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802CC8E0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802CC8E4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x802CC8E8: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x802CC8EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC8F0: addiu       $a3, $zero, -0x200
    ctx->r7 = ADD32(0, -0X200);
    // 0x802CC8F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CC8F8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x802CC8FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CC900: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CC904: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802CC908: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802CC90C: jal         0x8021F35C
    // 0x802CC910: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    static_3_8021F35C(rdram, ctx);
        goto after_7;
    // 0x802CC910: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_7:
    // 0x802CC914: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802CC918: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802CC91C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x802CC920: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC924: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x802CC928: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802CC92C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CC930: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CC934: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802CC938: jal         0x8021F35C
    // 0x802CC93C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x802CC93C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_8:
    // 0x802CC940: addiu       $t9, $zero, 0x3E0
    ctx->r25 = ADD32(0, 0X3E0);
    // 0x802CC944: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802CC948: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802CC94C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CC950: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC954: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x802CC958: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CC95C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CC960: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802CC964: jal         0x8021F35C
    // 0x802CC968: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802CC968: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_9:
    // 0x802CC96C: addiu       $t0, $zero, 0x3E0
    ctx->r8 = ADD32(0, 0X3E0);
    // 0x802CC970: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802CC974: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802CC978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CC97C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CC980: addiu       $a3, $zero, -0x200
    ctx->r7 = ADD32(0, -0X200);
    // 0x802CC984: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802CC988: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802CC98C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802CC990: jal         0x8021F35C
    // 0x802CC994: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x802CC994: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_10:
    // 0x802CC998: jal         0x8021FCD0
    // 0x802CC99C: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_11;
    // 0x802CC99C: nop

    after_11:
    // 0x802CC9A0: jal         0x802230E4
    // 0x802CC9A4: nop

    static_3_802230E4(rdram, ctx);
        goto after_12;
    // 0x802CC9A4: nop

    after_12:
    // 0x802CC9A8: jal         0x8022337C
    // 0x802CC9AC: nop

    static_3_8022337C(rdram, ctx);
        goto after_13;
    // 0x802CC9AC: nop

    after_13:
    // 0x802CC9B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802CC9B4:
    // 0x802CC9B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802CC9B8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x802CC9BC: jr          $ra
    // 0x802CC9C0: nop

    return;
    // 0x802CC9C0: nop

;}
RECOMP_FUNC void D_80228E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228E14: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80228E18: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80228E1C: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80228E20: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80228E24: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80228E28: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x80228E2C: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80228E30: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
    // 0x80228E34: lwc1        $f16, 0x14($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80228E38: swc1        $f16, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f16.u32l;
    // 0x80228E3C: lwc1        $f18, 0x18($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80228E40: swc1        $f18, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f18.u32l;
    // 0x80228E44: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80228E48: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x80228E4C: lwc1        $f6, 0x24($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80228E50: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x80228E54: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80228E58: jr          $ra
    // 0x80228E5C: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80228E5C: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_80216580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80216580: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x80216584: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x80216588: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021658C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80216590: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80216594: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80216598: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x8021659C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x802165A0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x802165A4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x802165A8: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x802165AC: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x802165B0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x802165B4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x802165B8: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x802165BC: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x802165C0: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x802165C4: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x802165C8: swc1        $f12, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f12.u32l;
    // 0x802165CC: swc1        $f14, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f14.u32l;
    // 0x802165D0: lhu         $t8, 0x0($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X0);
    // 0x802165D4: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x802165D8: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x802165DC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802165E0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x802165E4: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x802165E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802165EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802165F0: lwc1        $f4, 0x1C($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X1C);
    // 0x802165F4: lwc1        $f10, 0x20($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X20);
    // 0x802165F8: lw          $s5, 0x8($s7)
    ctx->r21 = MEM_W(ctx->r23, 0X8);
    // 0x802165FC: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80216600: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x80216604: mtc1        $a3, $f26
    ctx->f26.u32l = ctx->r7;
    // 0x80216608: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8021660C: lbu         $fp, 0x4($s5)
    ctx->r30 = MEM_BU(ctx->r21, 0X4);
    // 0x80216610: sh          $t1, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r9;
    // 0x80216614: mul.s       $f22, $f0, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80216618: nop

    // 0x8021661C: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80216620: jal         0x80228CE0
    // 0x80216624: div.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    static_3_80228CE0(rdram, ctx);
        goto after_0;
    // 0x80216624: div.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    after_0:
    // 0x80216628: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8021662C: blez        $fp, L_80216808
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80216630: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80216808;
    }
    // 0x80216630: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216634: addiu       $s6, $sp, 0x80
    ctx->r22 = ADD32(ctx->r29, 0X80);
    // 0x80216638: lw          $v1, 0xF8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF8);
    // 0x8021663C: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
L_80216640:
    // 0x80216640: sll         $s4, $s3, 3
    ctx->r20 = S32(ctx->r19 << 3);
    // 0x80216644: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80216648: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x8021664C: addu        $s4, $s4, $s3
    ctx->r20 = ADD32(ctx->r20, ctx->r19);
    // 0x80216650: sllv        $t5, $t4, $s3
    ctx->r13 = S32(ctx->r12 << (ctx->r19 & 31));
    // 0x80216654: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x80216658: and         $t6, $t3, $t5
    ctx->r14 = ctx->r11 & ctx->r13;
    // 0x8021665C: bne         $t6, $zero, L_80216678
    if (ctx->r14 != 0) {
        // 0x80216660: addu        $v0, $t2, $s4
        ctx->r2 = ADD32(ctx->r10, ctx->r20);
            goto L_80216678;
    }
    // 0x80216660: addu        $v0, $t2, $s4
    ctx->r2 = ADD32(ctx->r10, ctx->r20);
    // 0x80216664: lbu         $t8, 0x7($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7);
    // 0x80216668: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8021666C: andi        $t7, $t8, 0x1
    ctx->r15 = ctx->r24 & 0X1;
    // 0x80216670: beq         $t7, $zero, L_80216680
    if (ctx->r15 == 0) {
        // 0x80216674: nop
    
            goto L_80216680;
    }
    // 0x80216674: nop

L_80216678:
    // 0x80216678: b           L_80216680
    // 0x8021667C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80216680;
    // 0x8021667C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80216680:
    // 0x80216680: bne         $s0, $zero, L_80216698
    if (ctx->r16 != 0) {
        // 0x80216684: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80216698;
    }
    // 0x80216684: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80216688: lbu         $t9, 0x7($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X7);
    // 0x8021668C: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x80216690: bnel        $t0, $zero, L_802167F0
    if (ctx->r8 != 0) {
        // 0x80216694: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_802167F0;
    }
    goto skip_0;
    // 0x80216694: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
L_80216698:
    // 0x80216698: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x8021669C: sll         $t2, $s3, 1
    ctx->r10 = S32(ctx->r19 << 1);
    // 0x802166A0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802166A4: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x802166A8: lhu         $t3, 0x0($t4)
    ctx->r11 = MEM_HU(ctx->r12, 0X0);
    // 0x802166AC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802166B0: addiu       $s1, $fp, -0x1
    ctx->r17 = ADD32(ctx->r30, -0X1);
    // 0x802166B4: sll         $t5, $t3, 6
    ctx->r13 = S32(ctx->r11 << 6);
    // 0x802166B8: jal         0x80228DE0
    // 0x802166BC: addu        $a1, $t6, $t5
    ctx->r5 = ADD32(ctx->r14, ctx->r13);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802166BC: addu        $a1, $t6, $t5
    ctx->r5 = ADD32(ctx->r14, ctx->r13);
    after_1:
    // 0x802166C0: bne         $s3, $zero, L_802166F0
    if (ctx->r19 != 0) {
        // 0x802166C4: lwc1        $f4, 0xB0($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
            goto L_802166F0;
    }
    // 0x802166C4: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802166C8: lwc1        $f18, 0x20($s7)
    ctx->f18.u32l = MEM_W(ctx->r23, 0X20);
    // 0x802166CC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802166D0: mul.s       $f0, $f18, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x802166D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802166D8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802166DC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802166E0: jal         0x8022A210
    // 0x802166E4: nop

    static_3_8022A210(rdram, ctx);
        goto after_2;
    // 0x802166E4: nop

    after_2:
    // 0x802166E8: b           L_80216714
    // 0x802166EC: nop

        goto L_80216714;
    // 0x802166EC: nop

L_802166F0:
    // 0x802166F0: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802166F4: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802166F8: lwc1        $f16, 0xB8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802166FC: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80216700: nop

    // 0x80216704: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80216708: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x8021670C: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x80216710: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
L_80216714:
    // 0x80216714: jal         0x80228D0C
    // 0x80216718: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    static_3_80228D0C(rdram, ctx);
        goto after_3;
    // 0x80216718: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x8021671C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80216720: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x80216724: beq         $s0, $zero, L_80216788
    if (ctx->r16 == 0) {
        // 0x80216728: sra         $s2, $t8, 16
        ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
            goto L_80216788;
    }
    // 0x80216728: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021672C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80216730: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80216734: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80216738: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8021673C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80216740: sll         $t1, $s3, 24
    ctx->r9 = S32(ctx->r19 << 24);
    // 0x80216744: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80216748: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x8021674C: jal         0x80228CF0
    // 0x80216750: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    static_3_80228CF0(rdram, ctx);
        goto after_4;
    // 0x80216750: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    after_4:
    // 0x80216754: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80216758: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x8021675C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80216760: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x80216764: addu        $t3, $t4, $s4
    ctx->r11 = ADD32(ctx->r12, ctx->r20);
    // 0x80216768: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8021676C: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x80216770: lwc1        $f12, 0xE8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80216774: jal         0x80217940
    // 0x80216778: lwc1        $f14, 0xEC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XEC);
    static_3_80217940(rdram, ctx);
        goto after_5;
    // 0x80216778: lwc1        $f14, 0xEC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XEC);
    after_5:
    // 0x8021677C: lh          $t6, 0xE4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XE4);
    // 0x80216780: addu        $t5, $t6, $v0
    ctx->r13 = ADD32(ctx->r14, ctx->r2);
    // 0x80216784: sh          $t5, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r13;
L_80216788:
    // 0x80216788: bnel        $s3, $s1, L_8021679C
    if (ctx->r19 != ctx->r17) {
        // 0x8021678C: lw          $t8, 0x0($s5)
        ctx->r24 = MEM_W(ctx->r21, 0X0);
            goto L_8021679C;
    }
    goto skip_1;
    // 0x8021678C: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    skip_1:
    // 0x80216790: b           L_80216808
    // 0x80216794: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_80216808;
    // 0x80216794: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216798: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
L_8021679C:
    // 0x8021679C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802167A0: addu        $v0, $t8, $s4
    ctx->r2 = ADD32(ctx->r24, ctx->r20);
    // 0x802167A4: lbu         $t7, 0x6($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6);
    // 0x802167A8: lbu         $t9, 0x2A($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2A);
    // 0x802167AC: subu        $s1, $t7, $t9
    ctx->r17 = SUB32(ctx->r15, ctx->r25);
    // 0x802167B0: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x802167B4: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802167B8: bltzl       $s1, L_802167EC
    if (SIGNED(ctx->r17) < 0) {
        // 0x802167BC: lw          $v1, 0xF8($sp)
        ctx->r3 = MEM_W(ctx->r29, 0XF8);
            goto L_802167EC;
    }
    goto skip_2;
    // 0x802167BC: lw          $v1, 0xF8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF8);
    skip_2:
L_802167C0:
    // 0x802167C0: jal         0x80228D9C
    // 0x802167C4: nop

    static_3_80228D9C(rdram, ctx);
        goto after_6;
    // 0x802167C4: nop

    after_6:
    // 0x802167C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802167CC: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x802167D0: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802167D4: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x802167D8: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x802167DC: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x802167E0: beq         $at, $zero, L_802167C0
    if (ctx->r1 == 0) {
        // 0x802167E4: sra         $s2, $t2, 16
        ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
            goto L_802167C0;
    }
    // 0x802167E4: sra         $s2, $t2, 16
    ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802167E8: lw          $v1, 0xF8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF8);
L_802167EC:
    // 0x802167EC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_802167F0:
    // 0x802167F0: sll         $t5, $s3, 16
    ctx->r13 = S32(ctx->r19 << 16);
    // 0x802167F4: sra         $s3, $t5, 16
    ctx->r19 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802167F8: slt         $at, $s3, $fp
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x802167FC: bnel        $at, $zero, L_80216640
    if (ctx->r1 != 0) {
        // 0x80216800: lw          $t3, 0x10($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X10);
            goto L_80216640;
    }
    goto skip_3;
    // 0x80216800: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    skip_3:
    // 0x80216804: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80216808:
    // 0x80216808: blezl       $s2, L_80216834
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8021680C: lw          $ra, 0x6C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X6C);
            goto L_80216834;
    }
    goto skip_4;
    // 0x8021680C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    skip_4:
L_80216810:
    // 0x80216810: jal         0x80228D9C
    // 0x80216814: nop

    static_3_80228D9C(rdram, ctx);
        goto after_7;
    // 0x80216814: nop

    after_7:
    // 0x80216818: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8021681C: sll         $t7, $s3, 16
    ctx->r15 = S32(ctx->r19 << 16);
    // 0x80216820: sra         $s3, $t7, 16
    ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80216824: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80216828: bne         $at, $zero, L_80216810
    if (ctx->r1 != 0) {
        // 0x8021682C: nop
    
            goto L_80216810;
    }
    // 0x8021682C: nop

    // 0x80216830: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_80216834:
    // 0x80216834: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80216838: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8021683C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x80216840: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x80216844: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80216848: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8021684C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80216850: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80216854: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80216858: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8021685C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80216860: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80216864: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80216868: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x8021686C: jr          $ra
    // 0x80216870: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x80216870: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void D_8027A888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A900: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8027A904: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A908: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A90C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8027A910: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8027A914: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8027A918: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8027A91C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8027A920: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A924: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8027A928: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A92C: addiu       $a3, $t6, 0x6CDD
    ctx->r7 = ADD32(ctx->r14, 0X6CDD);
    // 0x8027A930: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8027A934: addiu       $a1, $t6, 0x6CDC
    ctx->r5 = ADD32(ctx->r14, 0X6CDC);
    // 0x8027A938: jal         0x802A3420
    // 0x8027A93C: addiu       $a0, $a0, 0x6C3C
    ctx->r4 = ADD32(ctx->r4, 0X6C3C);
    static_3_802A3420(rdram, ctx);
        goto after_0;
    // 0x8027A93C: addiu       $a0, $a0, 0x6C3C
    ctx->r4 = ADD32(ctx->r4, 0X6C3C);
    after_0:
    // 0x8027A940: beq         $v0, $zero, L_8027A9B8
    if (ctx->r2 == 0) {
        // 0x8027A944: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8027A9B8;
    }
    // 0x8027A944: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8027A948: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8027A94C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8027A950: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8027A954: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8027A958: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8027A95C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x8027A960: lbu         $t0, 0x6F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X6F);
    // 0x8027A964: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A968: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8027A96C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8027A970: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8027A974: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8027A978: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8027A97C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8027A980: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8027A984: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8027A988: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8027A98C: jal         0x802D07D4
    // 0x8027A990: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    static_3_802D07D4(rdram, ctx);
        goto after_1;
    // 0x8027A990: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_1:
    // 0x8027A994: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8027A998: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8027A99C: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x8027A9A0: lh          $t1, 0x28($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X28);
    // 0x8027A9A4: jalr        $t9
    // 0x8027A9A8: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8027A9A8: addu        $a0, $t1, $s0
    ctx->r4 = ADD32(ctx->r9, ctx->r16);
    after_2:
    // 0x8027A9AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8027A9B0: jal         0x802D18C8
    // 0x8027A9B4: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    static_3_802D18C8(rdram, ctx);
        goto after_3;
    // 0x8027A9B4: lbu         $a1, 0x6B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X6B);
    after_3:
L_8027A9B8:
    // 0x8027A9B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8027A9BC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8027A9C0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8027A9C4: jr          $ra
    // 0x8027A9C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8027A9C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_80282DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282E70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80282E74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80282E78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80282E7C: bne         $a0, $zero, L_80282E94
    if (ctx->r4 != 0) {
        // 0x80282E80: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80282E94;
    }
    // 0x80282E80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282E84: jal         0x802C67EC
    // 0x80282E88: addiu       $a0, $zero, 0x1594
    ctx->r4 = ADD32(0, 0X1594);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x80282E88: addiu       $a0, $zero, 0x1594
    ctx->r4 = ADD32(0, 0X1594);
    after_0:
    // 0x80282E8C: beq         $v0, $zero, L_80282ED4
    if (ctx->r2 == 0) {
        // 0x80282E90: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80282ED4;
    }
    // 0x80282E90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80282E94:
    // 0x80282E94: jal         0x8031DE00
    // 0x80282E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031DE00(rdram, ctx);
        goto after_1;
    // 0x80282E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80282E9C: jal         0x8031DF58
    // 0x80282EA0: addiu       $a0, $s0, 0x5A0
    ctx->r4 = ADD32(ctx->r16, 0X5A0);
    static_3_8031DF58(rdram, ctx);
        goto after_2;
    // 0x80282EA0: addiu       $a0, $s0, 0x5A0
    ctx->r4 = ADD32(ctx->r16, 0X5A0);
    after_2:
    // 0x80282EA4: jal         0x8031DBA8
    // 0x80282EA8: addiu       $a0, $s0, 0xB40
    ctx->r4 = ADD32(ctx->r16, 0XB40);
    static_3_8031DBA8(rdram, ctx);
        goto after_3;
    // 0x80282EA8: addiu       $a0, $s0, 0xB40
    ctx->r4 = ADD32(ctx->r16, 0XB40);
    after_3:
    // 0x80282EAC: jal         0x8031E0A8
    // 0x80282EB0: addiu       $a0, $s0, 0xC30
    ctx->r4 = ADD32(ctx->r16, 0XC30);
    static_3_8031E0A8(rdram, ctx);
        goto after_4;
    // 0x80282EB0: addiu       $a0, $s0, 0xC30
    ctx->r4 = ADD32(ctx->r16, 0XC30);
    after_4:
    // 0x80282EB4: jal         0x8031D81C
    // 0x80282EB8: addiu       $a0, $s0, 0x11D0
    ctx->r4 = ADD32(ctx->r16, 0X11D0);
    static_3_8031D81C(rdram, ctx);
        goto after_5;
    // 0x80282EB8: addiu       $a0, $s0, 0x11D0
    ctx->r4 = ADD32(ctx->r16, 0X11D0);
    after_5:
    // 0x80282EBC: jal         0x8031D950
    // 0x80282EC0: addiu       $a0, $s0, 0x12C0
    ctx->r4 = ADD32(ctx->r16, 0X12C0);
    static_3_8031D950(rdram, ctx);
        goto after_6;
    // 0x80282EC0: addiu       $a0, $s0, 0x12C0
    ctx->r4 = ADD32(ctx->r16, 0X12C0);
    after_6:
    // 0x80282EC4: jal         0x8031DA7C
    // 0x80282EC8: addiu       $a0, $s0, 0x13B0
    ctx->r4 = ADD32(ctx->r16, 0X13B0);
    static_3_8031DA7C(rdram, ctx);
        goto after_7;
    // 0x80282EC8: addiu       $a0, $s0, 0x13B0
    ctx->r4 = ADD32(ctx->r16, 0X13B0);
    after_7:
    // 0x80282ECC: jal         0x8031DCDC
    // 0x80282ED0: addiu       $a0, $s0, 0x14A0
    ctx->r4 = ADD32(ctx->r16, 0X14A0);
    static_3_8031DCDC(rdram, ctx);
        goto after_8;
    // 0x80282ED0: addiu       $a0, $s0, 0x14A0
    ctx->r4 = ADD32(ctx->r16, 0X14A0);
    after_8:
L_80282ED4:
    // 0x80282ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282ED8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80282EDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80282EE0: jr          $ra
    // 0x80282EE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80282EE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802254E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802254E4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802254E8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802254EC: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x802254F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802254F4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x802254F8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802254FC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80225500: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80225504: addiu       $a0, $sp, 0x3B
    ctx->r4 = ADD32(ctx->r29, 0X3B);
    // 0x80225508: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8022550C: jal         0x80225424
    // 0x80225510: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80225510: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80225514: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80225518: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022551C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80225520: jal         0x8022B948
    // 0x80225524: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_1;
    // 0x80225524: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x80225528: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x8022552C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80225530: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80225534: blez        $t7, L_80225574
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80225538: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_80225574;
    }
    // 0x80225538: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
L_8022553C:
    // 0x8022553C: addu        $s1, $t8, $s3
    ctx->r17 = ADD32(ctx->r24, ctx->r19);
    // 0x80225540: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80225544: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225548: jal         0x80225424
    // 0x8022554C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x8022554C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80225550: addiu       $a0, $s1, 0x2
    ctx->r4 = ADD32(ctx->r17, 0X2);
    // 0x80225554: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225558: jal         0x80225424
    // 0x8022555C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x8022555C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80225560: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    // 0x80225564: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225568: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8022556C: bnel        $at, $zero, L_8022553C
    if (ctx->r1 != 0) {
        // 0x80225570: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_8022553C;
    }
    goto skip_0;
    // 0x80225570: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    skip_0:
L_80225574:
    // 0x80225574: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x80225578: jal         0x8022B948
    // 0x8022557C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_4;
    // 0x8022557C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x80225580: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80225584: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225588: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8022558C: jal         0x80225424
    // 0x80225590: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x80225590: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    after_5:
    // 0x80225594: lbu         $t0, 0x3B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3B);
    // 0x80225598: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x8022559C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802255A0: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x802255A4: beq         $t1, $zero, L_802255B4
    if (ctx->r9 == 0) {
        // 0x802255A8: sb          $t0, 0x34($s0)
        MEM_B(0X34, ctx->r16) = ctx->r8;
            goto L_802255B4;
    }
    // 0x802255A8: sb          $t0, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r8;
    // 0x802255AC: b           L_802255B8
    // 0x802255B0: sw          $s3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r19;
        goto L_802255B8;
    // 0x802255B0: sw          $s3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r19;
L_802255B4:
    // 0x802255B4: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
L_802255B8:
    // 0x802255B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802255BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802255C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802255C4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802255C8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802255CC: jr          $ra
    // 0x802255D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802255D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802DD130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD1B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802DD1B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DD1B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DD1BC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x802DD1C0: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802DD1C4: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
    // 0x802DD1C8: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802DD1CC: lw          $t7, 0x7168($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X7168);
    // 0x802DD1D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DD1D4: sw          $t7, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r15;
    // 0x802DD1D8: jal         0x80224CA8
    // 0x802DD1DC: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802DD1DC: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_0:
    // 0x802DD1E0: jal         0x80224CA8
    // 0x802DD1E4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802DD1E4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_1:
    // 0x802DD1E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DD1EC: jal         0x80205AA0
    // 0x802DD1F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_2;
    // 0x802DD1F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x802DD1F4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DD1F8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802DD1FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DD200: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802DD204: jal         0x80205E0C
    // 0x802DD208: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    static_3_80205E0C(rdram, ctx);
        goto after_3;
    // 0x802DD208: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    after_3:
    // 0x802DD20C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DD210: jal         0x80205EBC
    // 0x802DD214: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    static_3_80205EBC(rdram, ctx);
        goto after_4;
    // 0x802DD214: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_4:
    // 0x802DD218: jal         0x8030D790
    // 0x802DD21C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8030D790(rdram, ctx);
        goto after_5;
    // 0x802DD21C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802DD220: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802DD224: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DD228: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802DD22C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DD230: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802DD234: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802DD238: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802DD23C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802DD240: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802DD244: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802DD248: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802DD24C: sb          $t9, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r25;
    // 0x802DD250: sh          $a3, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r7;
    // 0x802DD254: sh          $v0, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r2;
    // 0x802DD258: sh          $v1, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r3;
    // 0x802DD25C: sh          $t0, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r8;
    // 0x802DD260: sh          $a3, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r7;
    // 0x802DD264: sh          $v1, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r3;
    // 0x802DD268: sh          $v0, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r2;
    // 0x802DD26C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DD270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DD274: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802DD278: swc1        $f4, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f4.u32l;
    // 0x802DD27C: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    // 0x802DD280: jal         0x80309B88
    // 0x802DD284: swc1        $f8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f8.u32l;
    static_3_80309B88(rdram, ctx);
        goto after_6;
    // 0x802DD284: swc1        $f8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f8.u32l;
    after_6:
    // 0x802DD288: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802DD28C: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x802DD290: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802DD294: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x802DD298: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802DD29C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802DD2A0: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x802DD2A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DD2A8: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x802DD2AC: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x802DD2B0: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802DD2B4: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x802DD2B8: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x802DD2BC: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x802DD2C0: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802DD2C4: lw          $t3, 0x14($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X14);
    // 0x802DD2C8: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x802DD2CC: lw          $at, 0x18($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X18);
    // 0x802DD2D0: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802DD2D4: lbu         $t4, 0x0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X0);
    // 0x802DD2D8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DD2DC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802DD2E0: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x802DD2E4: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802DD2E8: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802DD2EC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802DD2F0: jal         0x80303778
    // 0x802DD2F4: nop

    static_3_80303778(rdram, ctx);
        goto after_7;
    // 0x802DD2F4: nop

    after_7:
    // 0x802DD2F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DD2FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DD300: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802DD304: jr          $ra
    // 0x802DD308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802DD308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_80297F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297F98: sw          $zero, 0x1120($a0)
    MEM_W(0X1120, ctx->r4) = 0;
    // 0x80297F9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297FA0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297FA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297FA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80297FAC: swc1        $f4, 0xFA4($a0)
    MEM_W(0XFA4, ctx->r4) = ctx->f4.u32l;
    // 0x80297FB0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297FB4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80297FB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80297FBC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80297FC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80297FC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297FC8: swc1        $f0, 0x1088($a0)
    MEM_W(0X1088, ctx->r4) = ctx->f0.u32l;
    // 0x80297FCC: swc1        $f6, 0xFA8($a0)
    MEM_W(0XFA8, ctx->r4) = ctx->f6.u32l;
    // 0x80297FD0: swc1        $f8, 0xFAC($a0)
    MEM_W(0XFAC, ctx->r4) = ctx->f8.u32l;
    // 0x80297FD4: swc1        $f10, 0x10D4($a0)
    MEM_W(0X10D4, ctx->r4) = ctx->f10.u32l;
    // 0x80297FD8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297FDC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297FE0: swc1        $f4, 0xFB0($a0)
    MEM_W(0XFB0, ctx->r4) = ctx->f4.u32l;
    // 0x80297FE4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297FE8: lui         $at, 0xC342
    ctx->r1 = S32(0XC342 << 16);
    // 0x80297FEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80297FF0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80297FF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80297FF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297FFC: swc1        $f0, 0x10D8($a0)
    MEM_W(0X10D8, ctx->r4) = ctx->f0.u32l;
    // 0x80298000: swc1        $f6, 0xFB4($a0)
    MEM_W(0XFB4, ctx->r4) = ctx->f6.u32l;
    // 0x80298004: swc1        $f8, 0xFB8($a0)
    MEM_W(0XFB8, ctx->r4) = ctx->f8.u32l;
    // 0x80298008: swc1        $f10, 0x108C($a0)
    MEM_W(0X108C, ctx->r4) = ctx->f10.u32l;
    // 0x8029800C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298010: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298014: swc1        $f4, 0xFBC($a0)
    MEM_W(0XFBC, ctx->r4) = ctx->f4.u32l;
    // 0x80298018: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029801C: lui         $at, 0xC364
    ctx->r1 = S32(0XC364 << 16);
    // 0x80298020: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80298024: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x80298028: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8029802C: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x80298030: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80298034: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298038: swc1        $f6, 0xFC0($a0)
    MEM_W(0XFC0, ctx->r4) = ctx->f6.u32l;
    // 0x8029803C: swc1        $f8, 0xFC4($a0)
    MEM_W(0XFC4, ctx->r4) = ctx->f8.u32l;
    // 0x80298040: swc1        $f10, 0x1090($a0)
    MEM_W(0X1090, ctx->r4) = ctx->f10.u32l;
    // 0x80298044: swc1        $f4, 0x10DC($a0)
    MEM_W(0X10DC, ctx->r4) = ctx->f4.u32l;
    // 0x80298048: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029804C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298050: swc1        $f6, 0xFC8($a0)
    MEM_W(0XFC8, ctx->r4) = ctx->f6.u32l;
    // 0x80298054: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298058: lui         $at, 0xC39F
    ctx->r1 = S32(0XC39F << 16);
    // 0x8029805C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80298060: lui         $at, 0xC2FE
    ctx->r1 = S32(0XC2FE << 16);
    // 0x80298064: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80298068: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x8029806C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80298070: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80298074: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80298078: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x8029807C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80298080: lui         $at, 0xC32C
    ctx->r1 = S32(0XC32C << 16);
    // 0x80298084: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80298088: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029808C: swc1        $f8, 0xFCC($a0)
    MEM_W(0XFCC, ctx->r4) = ctx->f8.u32l;
    // 0x80298090: swc1        $f10, 0xFD0($a0)
    MEM_W(0XFD0, ctx->r4) = ctx->f10.u32l;
    // 0x80298094: swc1        $f4, 0x1094($a0)
    MEM_W(0X1094, ctx->r4) = ctx->f4.u32l;
    // 0x80298098: swc1        $f12, 0x10E0($a0)
    MEM_W(0X10E0, ctx->r4) = ctx->f12.u32l;
    // 0x8029809C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802980A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802980A4: swc1        $f6, 0xFD4($a0)
    MEM_W(0XFD4, ctx->r4) = ctx->f6.u32l;
    // 0x802980A8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802980AC: lui         $at, 0xC361
    ctx->r1 = S32(0XC361 << 16);
    // 0x802980B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802980B4: lui         $at, 0xC2F6
    ctx->r1 = S32(0XC2F6 << 16);
    // 0x802980B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802980BC: lui         $at, 0xC3C0
    ctx->r1 = S32(0XC3C0 << 16);
    // 0x802980C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802980C4: lui         $at, 0x4409
    ctx->r1 = S32(0X4409 << 16);
    // 0x802980C8: swc1        $f8, 0xFD8($a0)
    MEM_W(0XFD8, ctx->r4) = ctx->f8.u32l;
    // 0x802980CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802980D0: lui         $at, 0xC32F
    ctx->r1 = S32(0XC32F << 16);
    // 0x802980D4: swc1        $f10, 0xFDC($a0)
    MEM_W(0XFDC, ctx->r4) = ctx->f10.u32l;
    // 0x802980D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802980DC: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x802980E0: swc1        $f4, 0x1098($a0)
    MEM_W(0X1098, ctx->r4) = ctx->f4.u32l;
    // 0x802980E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802980E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802980EC: swc1        $f0, 0xFEC($a0)
    MEM_W(0XFEC, ctx->r4) = ctx->f0.u32l;
    // 0x802980F0: swc1        $f14, 0x10E4($a0)
    MEM_W(0X10E4, ctx->r4) = ctx->f14.u32l;
    // 0x802980F4: swc1        $f16, 0x10E8($a0)
    MEM_W(0X10E8, ctx->r4) = ctx->f16.u32l;
    // 0x802980F8: swc1        $f6, 0xFE0($a0)
    MEM_W(0XFE0, ctx->r4) = ctx->f6.u32l;
    // 0x802980FC: swc1        $f8, 0xFE4($a0)
    MEM_W(0XFE4, ctx->r4) = ctx->f8.u32l;
    // 0x80298100: swc1        $f10, 0xFE8($a0)
    MEM_W(0XFE8, ctx->r4) = ctx->f10.u32l;
    // 0x80298104: swc1        $f4, 0x109C($a0)
    MEM_W(0X109C, ctx->r4) = ctx->f4.u32l;
    // 0x80298108: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029810C: lui         $at, 0xC254
    ctx->r1 = S32(0XC254 << 16);
    // 0x80298110: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80298114: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298118: swc1        $f6, 0xFF0($a0)
    MEM_W(0XFF0, ctx->r4) = ctx->f6.u32l;
    // 0x8029811C: swc1        $f8, 0xFF4($a0)
    MEM_W(0XFF4, ctx->r4) = ctx->f8.u32l;
    // 0x80298120: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298124: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298128: swc1        $f0, 0x10EC($a0)
    MEM_W(0X10EC, ctx->r4) = ctx->f0.u32l;
    // 0x8029812C: swc1        $f10, 0x10A0($a0)
    MEM_W(0X10A0, ctx->r4) = ctx->f10.u32l;
    // 0x80298130: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298134: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298138: swc1        $f4, 0xFF8($a0)
    MEM_W(0XFF8, ctx->r4) = ctx->f4.u32l;
    // 0x8029813C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298140: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x80298144: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80298148: lui         $at, 0xC298
    ctx->r1 = S32(0XC298 << 16);
    // 0x8029814C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80298150: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80298154: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80298158: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029815C: swc1        $f18, 0x1000($a0)
    MEM_W(0X1000, ctx->r4) = ctx->f18.u32l;
    // 0x80298160: swc1        $f6, 0xFFC($a0)
    MEM_W(0XFFC, ctx->r4) = ctx->f6.u32l;
    // 0x80298164: swc1        $f8, 0x10A4($a0)
    MEM_W(0X10A4, ctx->r4) = ctx->f8.u32l;
    // 0x80298168: swc1        $f10, 0x10F0($a0)
    MEM_W(0X10F0, ctx->r4) = ctx->f10.u32l;
    // 0x8029816C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298170: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298174: swc1        $f4, 0x1004($a0)
    MEM_W(0X1004, ctx->r4) = ctx->f4.u32l;
    // 0x80298178: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029817C: lui         $at, 0x435B
    ctx->r1 = S32(0X435B << 16);
    // 0x80298180: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80298184: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x80298188: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8029818C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298190: swc1        $f16, 0x10F4($a0)
    MEM_W(0X10F4, ctx->r4) = ctx->f16.u32l;
    // 0x80298194: swc1        $f6, 0x1008($a0)
    MEM_W(0X1008, ctx->r4) = ctx->f6.u32l;
    // 0x80298198: swc1        $f8, 0x100C($a0)
    MEM_W(0X100C, ctx->r4) = ctx->f8.u32l;
    // 0x8029819C: swc1        $f10, 0x10A8($a0)
    MEM_W(0X10A8, ctx->r4) = ctx->f10.u32l;
    // 0x802981A0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802981A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802981A8: swc1        $f4, 0x1010($a0)
    MEM_W(0X1010, ctx->r4) = ctx->f4.u32l;
    // 0x802981AC: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802981B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802981B4: swc1        $f6, 0x1014($a0)
    MEM_W(0X1014, ctx->r4) = ctx->f6.u32l;
    // 0x802981B8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802981BC: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x802981C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802981C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802981C8: swc1        $f0, 0x10F8($a0)
    MEM_W(0X10F8, ctx->r4) = ctx->f0.u32l;
    // 0x802981CC: swc1        $f8, 0x1018($a0)
    MEM_W(0X1018, ctx->r4) = ctx->f8.u32l;
    // 0x802981D0: swc1        $f10, 0x10AC($a0)
    MEM_W(0X10AC, ctx->r4) = ctx->f10.u32l;
    // 0x802981D4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802981D8: lui         $at, 0x439B
    ctx->r1 = S32(0X439B << 16);
    // 0x802981DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802981E0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802981E4: swc1        $f4, 0x101C($a0)
    MEM_W(0X101C, ctx->r4) = ctx->f4.u32l;
    // 0x802981E8: swc1        $f6, 0x1020($a0)
    MEM_W(0X1020, ctx->r4) = ctx->f6.u32l;
    // 0x802981EC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802981F0: lui         $at, 0xC3BC
    ctx->r1 = S32(0XC3BC << 16);
    // 0x802981F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802981F8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802981FC: swc1        $f0, 0x10FC($a0)
    MEM_W(0X10FC, ctx->r4) = ctx->f0.u32l;
    // 0x80298200: swc1        $f2, 0x10B0($a0)
    MEM_W(0X10B0, ctx->r4) = ctx->f2.u32l;
    // 0x80298204: swc1        $f8, 0x1024($a0)
    MEM_W(0X1024, ctx->r4) = ctx->f8.u32l;
    // 0x80298208: swc1        $f10, 0x1028($a0)
    MEM_W(0X1028, ctx->r4) = ctx->f10.u32l;
    // 0x8029820C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298210: lui         $at, 0x43EA
    ctx->r1 = S32(0X43EA << 16);
    // 0x80298214: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80298218: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8029821C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80298220: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298224: swc1        $f2, 0x10B4($a0)
    MEM_W(0X10B4, ctx->r4) = ctx->f2.u32l;
    // 0x80298228: swc1        $f4, 0x102C($a0)
    MEM_W(0X102C, ctx->r4) = ctx->f4.u32l;
    // 0x8029822C: swc1        $f6, 0x1030($a0)
    MEM_W(0X1030, ctx->r4) = ctx->f6.u32l;
    // 0x80298230: swc1        $f8, 0x1100($a0)
    MEM_W(0X1100, ctx->r4) = ctx->f8.u32l;
    // 0x80298234: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298238: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029823C: swc1        $f10, 0x1034($a0)
    MEM_W(0X1034, ctx->r4) = ctx->f10.u32l;
    // 0x80298240: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298244: lui         $at, 0x43D4
    ctx->r1 = S32(0X43D4 << 16);
    // 0x80298248: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8029824C: lui         $at, 0xC2EC
    ctx->r1 = S32(0XC2EC << 16);
    // 0x80298250: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80298254: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x80298258: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8029825C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298260: swc1        $f4, 0x1038($a0)
    MEM_W(0X1038, ctx->r4) = ctx->f4.u32l;
    // 0x80298264: swc1        $f6, 0x103C($a0)
    MEM_W(0X103C, ctx->r4) = ctx->f6.u32l;
    // 0x80298268: swc1        $f8, 0x10B8($a0)
    MEM_W(0X10B8, ctx->r4) = ctx->f8.u32l;
    // 0x8029826C: swc1        $f10, 0x1104($a0)
    MEM_W(0X1104, ctx->r4) = ctx->f10.u32l;
    // 0x80298270: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298274: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298278: swc1        $f4, 0x1040($a0)
    MEM_W(0X1040, ctx->r4) = ctx->f4.u32l;
    // 0x8029827C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298280: lui         $at, 0x428E
    ctx->r1 = S32(0X428E << 16);
    // 0x80298284: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80298288: lui         $at, 0x42D8
    ctx->r1 = S32(0X42D8 << 16);
    // 0x8029828C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80298290: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80298294: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80298298: lui         $at, 0x42F8
    ctx->r1 = S32(0X42F8 << 16);
    // 0x8029829C: swc1        $f6, 0x1044($a0)
    MEM_W(0X1044, ctx->r4) = ctx->f6.u32l;
    // 0x802982A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802982A4: lui         $at, 0x437E
    ctx->r1 = S32(0X437E << 16);
    // 0x802982A8: swc1        $f8, 0x1048($a0)
    MEM_W(0X1048, ctx->r4) = ctx->f8.u32l;
    // 0x802982AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802982B0: lui         $at, 0xC318
    ctx->r1 = S32(0XC318 << 16);
    // 0x802982B4: swc1        $f10, 0x10BC($a0)
    MEM_W(0X10BC, ctx->r4) = ctx->f10.u32l;
    // 0x802982B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802982BC: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x802982C0: swc1        $f4, 0x1108($a0)
    MEM_W(0X1108, ctx->r4) = ctx->f4.u32l;
    // 0x802982C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802982C8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802982CC: swc1        $f14, 0x110C($a0)
    MEM_W(0X110C, ctx->r4) = ctx->f14.u32l;
    // 0x802982D0: swc1        $f6, 0x104C($a0)
    MEM_W(0X104C, ctx->r4) = ctx->f6.u32l;
    // 0x802982D4: swc1        $f8, 0x1050($a0)
    MEM_W(0X1050, ctx->r4) = ctx->f8.u32l;
    // 0x802982D8: swc1        $f10, 0x1054($a0)
    MEM_W(0X1054, ctx->r4) = ctx->f10.u32l;
    // 0x802982DC: swc1        $f4, 0x10C0($a0)
    MEM_W(0X10C0, ctx->r4) = ctx->f4.u32l;
    // 0x802982E0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802982E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802982E8: swc1        $f6, 0x1058($a0)
    MEM_W(0X1058, ctx->r4) = ctx->f6.u32l;
    // 0x802982EC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802982F0: lui         $at, 0xC3ED
    ctx->r1 = S32(0XC3ED << 16);
    // 0x802982F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802982F8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802982FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80298300: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298304: swc1        $f18, 0x10C4($a0)
    MEM_W(0X10C4, ctx->r4) = ctx->f18.u32l;
    // 0x80298308: swc1        $f8, 0x105C($a0)
    MEM_W(0X105C, ctx->r4) = ctx->f8.u32l;
    // 0x8029830C: swc1        $f10, 0x1060($a0)
    MEM_W(0X1060, ctx->r4) = ctx->f10.u32l;
    // 0x80298310: swc1        $f4, 0x1110($a0)
    MEM_W(0X1110, ctx->r4) = ctx->f4.u32l;
    // 0x80298314: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298318: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029831C: swc1        $f6, 0x1064($a0)
    MEM_W(0X1064, ctx->r4) = ctx->f6.u32l;
    // 0x80298320: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298324: lui         $at, 0xC3C3
    ctx->r1 = S32(0XC3C3 << 16);
    // 0x80298328: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8029832C: lui         $at, 0xC2AC
    ctx->r1 = S32(0XC2AC << 16);
    // 0x80298330: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80298334: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298338: swc1        $f12, 0x1114($a0)
    MEM_W(0X1114, ctx->r4) = ctx->f12.u32l;
    // 0x8029833C: swc1        $f8, 0x1068($a0)
    MEM_W(0X1068, ctx->r4) = ctx->f8.u32l;
    // 0x80298340: swc1        $f10, 0x106C($a0)
    MEM_W(0X106C, ctx->r4) = ctx->f10.u32l;
    // 0x80298344: swc1        $f4, 0x10C8($a0)
    MEM_W(0X10C8, ctx->r4) = ctx->f4.u32l;
    // 0x80298348: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029834C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298350: swc1        $f6, 0x1070($a0)
    MEM_W(0X1070, ctx->r4) = ctx->f6.u32l;
    // 0x80298354: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298358: lui         $at, 0xC328
    ctx->r1 = S32(0XC328 << 16);
    // 0x8029835C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80298360: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80298364: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80298368: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x8029836C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80298370: lui         $at, 0xC3B3
    ctx->r1 = S32(0XC3B3 << 16);
    // 0x80298374: swc1        $f8, 0x1074($a0)
    MEM_W(0X1074, ctx->r4) = ctx->f8.u32l;
    // 0x80298378: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8029837C: lui         $at, 0x442D
    ctx->r1 = S32(0X442D << 16);
    // 0x80298380: swc1        $f10, 0x1078($a0)
    MEM_W(0X1078, ctx->r4) = ctx->f10.u32l;
    // 0x80298384: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80298388: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x8029838C: swc1        $f4, 0x10CC($a0)
    MEM_W(0X10CC, ctx->r4) = ctx->f4.u32l;
    // 0x80298390: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80298394: lui         $at, 0xC1B0
    ctx->r1 = S32(0XC1B0 << 16);
    // 0x80298398: swc1        $f6, 0x1118($a0)
    MEM_W(0X1118, ctx->r4) = ctx->f6.u32l;
    // 0x8029839C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802983A0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802983A4: swc1        $f8, 0x107C($a0)
    MEM_W(0X107C, ctx->r4) = ctx->f8.u32l;
    // 0x802983A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802983AC: swc1        $f10, 0x1080($a0)
    MEM_W(0X1080, ctx->r4) = ctx->f10.u32l;
    // 0x802983B0: swc1        $f4, 0x1084($a0)
    MEM_W(0X1084, ctx->r4) = ctx->f4.u32l;
    // 0x802983B4: swc1        $f6, 0x10D0($a0)
    MEM_W(0X10D0, ctx->r4) = ctx->f6.u32l;
    // 0x802983B8: jr          $ra
    // 0x802983BC: swc1        $f8, 0x111C($a0)
    MEM_W(0X111C, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802983BC: swc1        $f8, 0x111C($a0)
    MEM_W(0X111C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_8022A9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A9F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A9F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A9F8: jal         0x8023CE00
    // 0x8022A9FC: nop

    static_3_8023CE00(rdram, ctx);
        goto after_0;
    // 0x8022A9FC: nop

    after_0:
    // 0x8022AA00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022AA08: jr          $ra
    // 0x8022AA0C: nop

    return;
    // 0x8022AA0C: nop

;}
RECOMP_FUNC void D_802F05A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802F0624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F0628: jal         0x80320824
    // 0x802F062C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320824(rdram, ctx);
        goto after_0;
    // 0x802F062C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802F0630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802F0634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802F0638: jr          $ra
    // 0x802F063C: nop

    return;
    // 0x802F063C: nop

;}
RECOMP_FUNC void D_80281174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802811EC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802811F0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802811F4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802811F8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802811FC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80281200: lw          $a0, 0x65FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X65FC);
    // 0x80281204: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80281208: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8028120C: jal         0x803087A8
    // 0x80281210: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    static_3_803087A8(rdram, ctx);
        goto after_0;
    // 0x80281210: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    after_0:
    // 0x80281214: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80281218: lwc1        $f4, 0x30($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X30);
    // 0x8028121C: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    // 0x80281220: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80281224: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x80281228: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8028122C: lwc1        $f6, 0x34($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X34);
    // 0x80281230: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x80281234: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x80281238: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8028123C: lwc1        $f8, 0x38($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X38);
    // 0x80281240: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x80281244: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80281248: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8028124C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80281250: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80281254: jal         0x802141C8
    // 0x80281258: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    static_3_802141C8(rdram, ctx);
        goto after_1;
    // 0x80281258: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8028125C: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x80281260: blez        $v0, L_8028126C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80281264: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_8028126C;
    }
    // 0x80281264: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80281268: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_8028126C:
    // 0x8028126C: bne         $v1, $zero, L_802812E8
    if (ctx->r3 != 0) {
        // 0x80281270: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_802812E8;
    }
    // 0x80281270: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80281274: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80281278: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8028127C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80281280: beq         $v0, $at, L_80281298
    if (ctx->r2 == ctx->r1) {
        // 0x80281284: lw          $a0, 0x50($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X50);
            goto L_80281298;
    }
    // 0x80281284: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80281288: lw          $t2, 0x7168($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X7168);
    // 0x8028128C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80281290: bne         $t2, $at, L_802812E8
    if (ctx->r10 != ctx->r1) {
        // 0x80281294: nop
    
            goto L_802812E8;
    }
    // 0x80281294: nop

L_80281298:
    // 0x80281298: lwc1        $f10, 0x30($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X30);
    // 0x8028129C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x802812A0: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x802812A4: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    // 0x802812A8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802812AC: lwc1        $f16, 0x34($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X34);
    // 0x802812B0: addiu       $t3, $sp, 0x48
    ctx->r11 = ADD32(ctx->r29, 0X48);
    // 0x802812B4: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
    // 0x802812B8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x802812BC: lwc1        $f18, 0x38($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X38);
    // 0x802812C0: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x802812C4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x802812C8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802812CC: jal         0x80211DA4
    // 0x802812D0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    static_3_80211DA4(rdram, ctx);
        goto after_2;
    // 0x802812D0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802812D4: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x802812D8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802812DC: blez        $t0, L_802812E8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802812E0: nop
    
            goto L_802812E8;
    }
    // 0x802812E0: nop

    // 0x802812E4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_802812E8:
    // 0x802812E8: bne         $v1, $zero, L_80281348
    if (ctx->r3 != 0) {
        // 0x802812EC: lui         $v0, 0x0
        ctx->r2 = S32(0X0 << 16);
            goto L_80281348;
    }
    // 0x802812EC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802812F0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802812F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802812F8: addiu       $t5, $sp, 0x48
    ctx->r13 = ADD32(ctx->r29, 0X48);
    // 0x802812FC: bne         $v0, $at, L_80281348
    if (ctx->r2 != ctx->r1) {
        // 0x80281300: addiu       $t6, $sp, 0x44
        ctx->r14 = ADD32(ctx->r29, 0X44);
            goto L_80281348;
    }
    // 0x80281300: addiu       $t6, $sp, 0x44
    ctx->r14 = ADD32(ctx->r29, 0X44);
    // 0x80281304: lwc1        $f4, 0x34($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X34);
    // 0x80281308: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8028130C: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
    // 0x80281310: lw          $a2, 0x38($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X38);
    // 0x80281314: lw          $a3, 0x30($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X30);
    // 0x80281318: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8028131C: lwc1        $f6, 0x38($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X38);
    // 0x80281320: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x80281324: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80281328: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x8028132C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80281330: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80281334: jal         0x802151B8
    // 0x80281338: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    static_3_802151B8(rdram, ctx);
        goto after_3;
    // 0x80281338: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8028133C: blez        $v0, L_80281348
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80281340: lw          $v1, 0x54($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X54);
            goto L_80281348;
    }
    // 0x80281340: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x80281344: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_80281348:
    // 0x80281348: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8028134C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80281350: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80281354: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80281358: jr          $ra
    // 0x8028135C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8028135C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void D_802EF7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EF854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EF858: beq         $a0, $zero, L_802EF888
    if (ctx->r4 == 0) {
        // 0x802EF85C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EF888;
    }
    // 0x802EF85C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EF860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EF864: jal         0x8031F6B0
    // 0x802EF868: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031F6B0(rdram, ctx);
        goto after_0;
    // 0x802EF868: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EF86C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EF870: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EF874: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EF878: beql        $t7, $zero, L_802EF88C
    if (ctx->r15 == 0) {
        // 0x802EF87C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EF88C;
    }
    goto skip_0;
    // 0x802EF87C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EF880: jal         0x802C681C
    // 0x802EF884: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EF884: nop

    after_1:
L_802EF888:
    // 0x802EF888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EF88C:
    // 0x802EF88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EF890: jr          $ra
    // 0x802EF894: nop

    return;
    // 0x802EF894: nop

;}
RECOMP_FUNC void D_8029DC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DC94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029DC98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029DC9C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029DCA0: jal         0x802ACBAC
    // 0x8029DCA4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802ACBAC(rdram, ctx);
        goto after_0;
    // 0x8029DCA4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8029DCA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029DCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029DCB0: jr          $ra
    // 0x8029DCB4: nop

    return;
    // 0x8029DCB4: nop

;}
RECOMP_FUNC void D_80218834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80218834: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80218838: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x8021883C: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x80218840: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80218844: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80218848: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8021884C: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x80218850: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80218854: lwc1        $f24, 0x0($a1)
    ctx->f24.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80218858: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8021885C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80218860: lwc1        $f22, 0x0($t6)
    ctx->f22.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80218864: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80218868: lwc1        $f26, 0x30($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021886C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x80218870: lwc1        $f2, 0x0($t7)
    ctx->f2.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80218874: c.eq.s      $f26, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f26.fl == ctx->f16.fl;
    // 0x80218878: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x8021887C: sub.s       $f14, $f22, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = ctx->f22.fl - ctx->f24.fl;
    // 0x80218880: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x80218884: mov.s       $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = ctx->f16.fl;
    // 0x80218888: sub.s       $f12, $f26, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f26.fl - ctx->f16.fl;
    // 0x8021888C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    // 0x80218890: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x80218894: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80218898: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x8021889C: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x802188A0: bc1f        L_8021895C
    if (!c1cs) {
        // 0x802188A4: swc1        $f8, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
            goto L_8021895C;
    }
    // 0x802188A4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x802188A8: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802188AC: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802188B0: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802188B4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802188B8: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802188BC: bc1fl       L_802188D4
    if (!c1cs) {
        // 0x802188C0: c.lt.s      $f12, $f20
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
            goto L_802188D4;
    }
    goto skip_0;
    // 0x802188C0: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    skip_0:
    // 0x802188C4: mov.s       $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    ctx->f26.fl = ctx->f18.fl;
    // 0x802188C8: b           L_802188E8
    // 0x802188CC: mov.s       $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = ctx->f18.fl;
        goto L_802188E8;
    // 0x802188CC: mov.s       $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = ctx->f18.fl;
    // 0x802188D0: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
L_802188D4:
    // 0x802188D4: nop

    // 0x802188D8: bc1fl       L_802188EC
    if (!c1cs) {
        // 0x802188DC: c.lt.s      $f24, $f0
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
            goto L_802188EC;
    }
    goto skip_1;
    // 0x802188DC: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    skip_1:
    // 0x802188E0: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
    // 0x802188E4: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
L_802188E8:
    // 0x802188E8: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
L_802188EC:
    // 0x802188EC: nop

    // 0x802188F0: bc1fl       L_80218908
    if (!c1cs) {
        // 0x802188F4: c.lt.s      $f14, $f24
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
            goto L_80218908;
    }
    goto skip_2;
    // 0x802188F4: c.lt.s      $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
    skip_2:
    // 0x802188F8: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x802188FC: b           L_80218918
    // 0x80218900: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
        goto L_80218918;
    // 0x80218900: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80218904: c.lt.s      $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
L_80218908:
    // 0x80218908: nop

    // 0x8021890C: bc1fl       L_8021891C
    if (!c1cs) {
        // 0x80218910: c.lt.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
            goto L_8021891C;
    }
    goto skip_3;
    // 0x80218910: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    skip_3:
    // 0x80218914: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
L_80218918:
    // 0x80218918: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_8021891C:
    // 0x8021891C: nop

    // 0x80218920: bc1fl       L_80218934
    if (!c1cs) {
        // 0x80218924: c.lt.s      $f14, $f22
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
            goto L_80218934;
    }
    goto skip_4;
    // 0x80218924: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
    skip_4:
    // 0x80218928: b           L_80218944
    // 0x8021892C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
        goto L_80218944;
    // 0x8021892C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80218930: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
L_80218934:
    // 0x80218934: nop

    // 0x80218938: bc1fl       L_80218948
    if (!c1cs) {
        // 0x8021893C: swc1        $f20, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
            goto L_80218948;
    }
    goto skip_5;
    // 0x8021893C: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
    skip_5:
    // 0x80218940: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
L_80218944:
    // 0x80218944: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
L_80218948:
    // 0x80218948: swc1        $f24, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f24.u32l;
    // 0x8021894C: swc1        $f26, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f26.u32l;
    // 0x80218950: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x80218954: b           L_80218C0C
    // 0x80218958: swc1        $f22, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f22.u32l;
        goto L_80218C0C;
    // 0x80218958: swc1        $f22, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f22.u32l;
L_8021895C:
    // 0x8021895C: div.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80218960: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80218964: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80218968: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021896C: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x80218970: mul.s       $f10, $f0, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80218974: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80218978: bc1f        L_80218994
    if (!c1cs) {
        // 0x8021897C: sub.s       $f16, $f22, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f22.fl - ctx->f10.fl;
            goto L_80218994;
    }
    // 0x8021897C: sub.s       $f16, $f22, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f22.fl - ctx->f10.fl;
    // 0x80218980: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80218984: mov.s       $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = ctx->f18.fl;
    // 0x80218988: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8021898C: b           L_802189B0
    // 0x80218990: add.s       $f24, $f4, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f4.fl + ctx->f16.fl;
        goto L_802189B0;
    // 0x80218990: add.s       $f24, $f4, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f4.fl + ctx->f16.fl;
L_80218994:
    // 0x80218994: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x80218998: nop

    // 0x8021899C: bc1fl       L_802189B4
    if (!c1cs) {
        // 0x802189A0: lwc1        $f0, 0x88($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
            goto L_802189B4;
    }
    goto skip_6;
    // 0x802189A0: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    skip_6:
    // 0x802189A4: mul.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x802189A8: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x802189AC: add.s       $f24, $f6, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f16.fl;
L_802189B0:
    // 0x802189B0: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
L_802189B4:
    // 0x802189B4: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x802189B8: nop

    // 0x802189BC: bc1fl       L_802189F0
    if (!c1cs) {
        // 0x802189C0: c.lt.s      $f14, $f24
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
            goto L_802189F0;
    }
    goto skip_7;
    // 0x802189C0: c.lt.s      $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
    skip_7:
    // 0x802189C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802189C8: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x802189CC: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x802189D0: nop

    // 0x802189D4: bc1t        L_802189E4
    if (c1cs) {
        // 0x802189D8: nop
    
            goto L_802189E4;
    }
    // 0x802189D8: nop

    // 0x802189DC: sub.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x802189E0: div.s       $f20, $f10, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
L_802189E4:
    // 0x802189E4: b           L_80218A1C
    // 0x802189E8: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
        goto L_80218A1C;
    // 0x802189E8: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802189EC: c.lt.s      $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl < ctx->f24.fl;
L_802189F0:
    // 0x802189F0: nop

    // 0x802189F4: bc1fl       L_80218A20
    if (!c1cs) {
        // 0x802189F8: c.lt.s      $f26, $f18
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f26.fl < ctx->f18.fl;
            goto L_80218A20;
    }
    goto skip_8;
    // 0x802189F8: c.lt.s      $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f26.fl < ctx->f18.fl;
    skip_8:
    // 0x802189FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80218A00: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
    // 0x80218A04: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x80218A08: nop

    // 0x80218A0C: bc1tl       L_80218A20
    if (c1cs) {
        // 0x80218A10: c.lt.s      $f26, $f18
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f26.fl < ctx->f18.fl;
            goto L_80218A20;
    }
    goto skip_9;
    // 0x80218A10: c.lt.s      $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f26.fl < ctx->f18.fl;
    skip_9:
    // 0x80218A14: sub.s       $f6, $f14, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x80218A18: div.s       $f20, $f6, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
L_80218A1C:
    // 0x80218A1C: c.lt.s      $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f26.fl < ctx->f18.fl;
L_80218A20:
    // 0x80218A20: nop

    // 0x80218A24: bc1fl       L_80218A40
    if (!c1cs) {
        // 0x80218A28: c.lt.s      $f12, $f26
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f12.fl < ctx->f26.fl;
            goto L_80218A40;
    }
    goto skip_10;
    // 0x80218A28: c.lt.s      $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f12.fl < ctx->f26.fl;
    skip_10:
    // 0x80218A2C: mul.s       $f8, $f2, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x80218A30: mov.s       $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    ctx->f26.fl = ctx->f18.fl;
    // 0x80218A34: b           L_80218A58
    // 0x80218A38: add.s       $f22, $f8, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f16.fl;
        goto L_80218A58;
    // 0x80218A38: add.s       $f22, $f8, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80218A3C: c.lt.s      $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f12.fl < ctx->f26.fl;
L_80218A40:
    // 0x80218A40: nop

    // 0x80218A44: bc1fl       L_80218A5C
    if (!c1cs) {
        // 0x80218A48: c.lt.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
            goto L_80218A5C;
    }
    goto skip_11;
    // 0x80218A48: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    skip_11:
    // 0x80218A4C: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x80218A50: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
    // 0x80218A54: add.s       $f22, $f10, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f16.fl;
L_80218A58:
    // 0x80218A58: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
L_80218A5C:
    // 0x80218A5C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80218A60: bc1fl       L_80218A90
    if (!c1cs) {
        // 0x80218A64: c.lt.s      $f14, $f22
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
            goto L_80218A90;
    }
    goto skip_12;
    // 0x80218A64: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
    skip_12:
    // 0x80218A68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80218A6C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80218A70: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x80218A74: nop

    // 0x80218A78: bc1tl       L_80218AC0
    if (c1cs) {
        // 0x80218A7C: c.eq.s      $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
            goto L_80218AC0;
    }
    goto skip_13;
    // 0x80218A7C: c.eq.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
    skip_13:
    // 0x80218A80: sub.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80218A84: b           L_80218ABC
    // 0x80218A88: div.s       $f26, $f6, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
        goto L_80218ABC;
    // 0x80218A88: div.s       $f26, $f6, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80218A8C: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
L_80218A90:
    // 0x80218A90: nop

    // 0x80218A94: bc1fl       L_80218AC0
    if (!c1cs) {
        // 0x80218A98: c.eq.s      $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
            goto L_80218AC0;
    }
    goto skip_14;
    // 0x80218A98: c.eq.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
    skip_14:
    // 0x80218A9C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80218AA0: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x80218AA4: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x80218AA8: nop

    // 0x80218AAC: bc1tl       L_80218AC0
    if (c1cs) {
        // 0x80218AB0: c.eq.s      $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
            goto L_80218AC0;
    }
    goto skip_15;
    // 0x80218AB0: c.eq.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
    skip_15:
    // 0x80218AB4: sub.s       $f10, $f14, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x80218AB8: div.s       $f26, $f10, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
L_80218ABC:
    // 0x80218ABC: c.eq.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl == ctx->f12.fl;
L_80218AC0:
    // 0x80218AC0: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80218AC4: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80218AC8: bc1tl       L_80218B0C
    if (c1cs) {
        // 0x80218ACC: c.eq.s      $f24, $f2
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
            goto L_80218B0C;
    }
    goto skip_16;
    // 0x80218ACC: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
    skip_16:
    // 0x80218AD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80218AD4: nop

    // 0x80218AD8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80218ADC: nop

    // 0x80218AE0: bc1tl       L_80218B0C
    if (c1cs) {
        // 0x80218AE4: c.eq.s      $f24, $f2
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
            goto L_80218B0C;
    }
    goto skip_17;
    // 0x80218AE4: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
    skip_17:
    // 0x80218AE8: sub.s       $f8, $f20, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f12.fl;
    // 0x80218AEC: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80218AF0: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80218AF4: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80218AF8: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80218AFC: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80218B00: b           L_80218B50
    // 0x80218B04: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
        goto L_80218B50;
    // 0x80218B04: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x80218B08: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
L_80218B0C:
    // 0x80218B0C: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80218B10: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80218B14: bc1tl       L_80218B54
    if (c1cs) {
        // 0x80218B18: lwc1        $f12, 0x30($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
            goto L_80218B54;
    }
    goto skip_18;
    // 0x80218B18: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    skip_18:
    // 0x80218B1C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80218B20: nop

    // 0x80218B24: c.eq.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl == ctx->f6.fl;
    // 0x80218B28: nop

    // 0x80218B2C: bc1tl       L_80218B54
    if (c1cs) {
        // 0x80218B30: lwc1        $f12, 0x30($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
            goto L_80218B54;
    }
    goto skip_19;
    // 0x80218B30: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    skip_19:
    // 0x80218B34: sub.s       $f4, $f24, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f2.fl;
    // 0x80218B38: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80218B3C: div.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80218B40: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80218B44: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80218B48: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80218B4C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
L_80218B50:
    // 0x80218B50: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
L_80218B54:
    // 0x80218B54: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80218B58: c.eq.s      $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f26.fl == ctx->f12.fl;
    // 0x80218B5C: nop

    // 0x80218B60: bc1tl       L_80218BA0
    if (c1cs) {
        // 0x80218B64: lwc1        $f12, 0x2C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80218BA0;
    }
    goto skip_20;
    // 0x80218B64: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    skip_20:
    // 0x80218B68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80218B6C: nop

    // 0x80218B70: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80218B74: nop

    // 0x80218B78: bc1tl       L_80218BA0
    if (c1cs) {
        // 0x80218B7C: lwc1        $f12, 0x2C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80218BA0;
    }
    goto skip_21;
    // 0x80218B7C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    skip_21:
    // 0x80218B80: sub.s       $f4, $f26, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f26.fl - ctx->f12.fl;
    // 0x80218B84: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80218B88: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80218B8C: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80218B90: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80218B94: b           L_80218BE4
    // 0x80218B98: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
        goto L_80218BE4;
    // 0x80218B98: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x80218B9C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
L_80218BA0:
    // 0x80218BA0: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80218BA4: c.eq.s      $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f22.fl == ctx->f12.fl;
    // 0x80218BA8: nop

    // 0x80218BAC: bc1tl       L_80218BE8
    if (c1cs) {
        // 0x80218BB0: swc1        $f20, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
            goto L_80218BE8;
    }
    goto skip_22;
    // 0x80218BB0: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
    skip_22:
    // 0x80218BB4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80218BB8: nop

    // 0x80218BBC: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80218BC0: nop

    // 0x80218BC4: bc1tl       L_80218BE8
    if (c1cs) {
        // 0x80218BC8: swc1        $f20, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
            goto L_80218BE8;
    }
    goto skip_23;
    // 0x80218BC8: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
    skip_23:
    // 0x80218BCC: sub.s       $f8, $f22, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f22.fl - ctx->f12.fl;
    // 0x80218BD0: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80218BD4: div.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80218BD8: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80218BDC: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80218BE0: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
L_80218BE4:
    // 0x80218BE4: swc1        $f20, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f20.u32l;
L_80218BE8:
    // 0x80218BE8: swc1        $f24, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f24.u32l;
    // 0x80218BEC: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80218BF0: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x80218BF4: swc1        $f26, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f26.u32l;
    // 0x80218BF8: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x80218BFC: swc1        $f22, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f22.u32l;
    // 0x80218C00: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80218C04: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80218C08: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
L_80218C0C:
    // 0x80218C0C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80218C10: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x80218C14: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x80218C18: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x80218C1C: jr          $ra
    // 0x80218C20: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80218C20: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void D_8029E52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029E5AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8029E5B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8029E5B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8029E5B8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8029E5BC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8029E5C0: jal         0x8021F4E4
    // 0x8029E5C4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    static_3_8021F4E4(rdram, ctx);
        goto after_0;
    // 0x8029E5C4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8029E5C8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8029E5CC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8029E5D0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8029E5D4: addiu       $a1, $zero, 0xBF
    ctx->r5 = ADD32(0, 0XBF);
    // 0x8029E5D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E5DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E5E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E5E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E5E8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E5EC: jal         0x8021F35C
    // 0x8029E5F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_1;
    // 0x8029E5F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x8029E5F4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8029E5F8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8029E5FC: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8029E600: addiu       $a1, $zero, 0xBF
    ctx->r5 = ADD32(0, 0XBF);
    // 0x8029E604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E60C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E610: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E614: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E618: jal         0x8021F35C
    // 0x8029E61C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_2;
    // 0x8029E61C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_2:
    // 0x8029E620: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8029E624: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8029E628: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    // 0x8029E62C: addiu       $a1, $zero, 0xD1
    ctx->r5 = ADD32(0, 0XD1);
    // 0x8029E630: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E634: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E638: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E63C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E640: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E644: jal         0x8021F35C
    // 0x8029E648: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_3;
    // 0x8029E648: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
    // 0x8029E64C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8029E650: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8029E654: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8029E658: addiu       $a1, $zero, 0xD1
    ctx->r5 = ADD32(0, 0XD1);
    // 0x8029E65C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8029E660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8029E664: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8029E668: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8029E66C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8029E670: jal         0x8021F35C
    // 0x8029E674: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_4;
    // 0x8029E674: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_4:
    // 0x8029E678: jal         0x8021FCD0
    // 0x8029E67C: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_5;
    // 0x8029E67C: nop

    after_5:
    // 0x8029E680: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x8029E684: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x8029E688: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x8029E68C: jal         0x8021E708
    // 0x8029E690: lbu         $a3, 0x43($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X43);
    static_3_8021E708(rdram, ctx);
        goto after_6;
    // 0x8029E690: lbu         $a3, 0x43($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X43);
    after_6:
    // 0x8029E694: jal         0x8021E66C
    // 0x8029E698: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8021E66C(rdram, ctx);
        goto after_7;
    // 0x8029E698: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x8029E69C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8029E6A0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8029E6A4: jal         0x802CE360
    // 0x8029E6A8: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    static_3_802CE360(rdram, ctx);
        goto after_8;
    // 0x8029E6A8: addiu       $a2, $zero, 0x126
    ctx->r6 = ADD32(0, 0X126);
    after_8:
    // 0x8029E6AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029E6B0: addiu       $a1, $zero, 0xC3
    ctx->r5 = ADD32(0, 0XC3);
    // 0x8029E6B4: jal         0x8021E87C
    // 0x8029E6B8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    static_3_8021E87C(rdram, ctx);
        goto after_9;
    // 0x8029E6B8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_9:
    // 0x8029E6BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8029E6C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8029E6C4: jr          $ra
    // 0x8029E6C8: nop

    return;
    // 0x8029E6C8: nop

;}
RECOMP_FUNC void D_802F2490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2510: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802F2514: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x802F2518: jr          $ra
    // 0x802F251C: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
    return;
    // 0x802F251C: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void D_802B7C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B7CB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B7CB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B7CBC: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B7CC0: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B7CC4: beq         $t6, $zero, L_802B7CD8
    if (ctx->r14 == 0) {
        // 0x802B7CC8: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B7CD8;
    }
    // 0x802B7CC8: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B7CCC: jal         0x80303578
    // 0x802B7CD0: addiu       $a0, $a0, 0xD80
    ctx->r4 = ADD32(ctx->r4, 0XD80);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B7CD0: addiu       $a0, $a0, 0xD80
    ctx->r4 = ADD32(ctx->r4, 0XD80);
    after_0:
    // 0x802B7CD4: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B7CD8:
    // 0x802B7CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B7CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B7CE0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B7CE4: jr          $ra
    // 0x802B7CE8: nop

    return;
    // 0x802B7CE8: nop

;}
RECOMP_FUNC void D_802109F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802109F4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802109F8: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x802109FC: blez        $a1, L_802111AC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80210A00: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802111AC;
    }
    // 0x80210A00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80210A04: andi        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 & 0X1;
    // 0x80210A08: beq         $v1, $zero, L_80210C9C
    if (ctx->r3 == 0) {
        // 0x80210A0C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80210C9C;
    }
    // 0x80210A0C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80210A10: lbu         $t6, 0xC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XC);
    // 0x80210A14: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80210A18: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80210A1C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80210A20: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80210A24: bgez        $t6, L_80210A3C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80210A28: cvt.s.w     $f16, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80210A3C;
    }
    // 0x80210A28: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80210A2C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210A30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210A34: nop

    // 0x80210A38: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_80210A3C:
    // 0x80210A3C: lhu         $a2, 0x6($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X6);
    // 0x80210A40: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210A44: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210A48: beq         $a2, $zero, L_80210A5C
    if (ctx->r6 == 0) {
        // 0x80210A4C: nop
    
            goto L_80210A5C;
    }
    // 0x80210A4C: nop

    // 0x80210A50: mul.s       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80210A54: b           L_80210A78
    // 0x80210A58: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
        goto L_80210A78;
    // 0x80210A58: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_80210A5C:
    // 0x80210A5C: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80210A60: nop

    // 0x80210A64: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80210A68: nop

    // 0x80210A6C: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80210A70: nop

    // 0x80210A74: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_80210A78:
    // 0x80210A78: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80210A7C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210A80: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210A84: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80210A88: nop

    // 0x80210A8C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80210A90: beql        $t8, $zero, L_80210AE0
    if (ctx->r24 == 0) {
        // 0x80210A94: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_80210AE0;
    }
    goto skip_0;
    // 0x80210A94: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x80210A98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80210A9C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80210AA0: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80210AA4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80210AA8: nop

    // 0x80210AAC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80210AB0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80210AB4: nop

    // 0x80210AB8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80210ABC: bne         $t8, $zero, L_80210AD4
    if (ctx->r24 != 0) {
        // 0x80210AC0: nop
    
            goto L_80210AD4;
    }
    // 0x80210AC0: nop

    // 0x80210AC4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80210AC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210ACC: b           L_80210AEC
    // 0x80210AD0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80210AEC;
    // 0x80210AD0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80210AD4:
    // 0x80210AD4: b           L_80210AEC
    // 0x80210AD8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80210AEC;
    // 0x80210AD8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80210ADC: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_80210AE0:
    // 0x80210AE0: nop

    // 0x80210AE4: bltz        $t8, L_80210AD4
    if (SIGNED(ctx->r24) < 0) {
        // 0x80210AE8: nop
    
            goto L_80210AD4;
    }
    // 0x80210AE8: nop

L_80210AEC:
    // 0x80210AEC: lbu         $t9, 0xD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XD);
    // 0x80210AF0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80210AF4: sb          $t8, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r24;
    // 0x80210AF8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80210AFC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210B00: bgez        $t9, L_80210B14
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80210B04: cvt.s.w     $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80210B14;
    }
    // 0x80210B04: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80210B08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210B0C: nop

    // 0x80210B10: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_80210B14:
    // 0x80210B14: beq         $a2, $zero, L_80210B28
    if (ctx->r6 == 0) {
        // 0x80210B18: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80210B28;
    }
    // 0x80210B18: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210B1C: mul.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x80210B20: b           L_80210B44
    // 0x80210B24: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
        goto L_80210B44;
    // 0x80210B24: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_80210B28:
    // 0x80210B28: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80210B2C: nop

    // 0x80210B30: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80210B34: nop

    // 0x80210B38: mul.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80210B3C: nop

    // 0x80210B40: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_80210B44:
    // 0x80210B44: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80210B48: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210B4C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210B50: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80210B54: nop

    // 0x80210B58: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80210B5C: beql        $t2, $zero, L_80210BAC
    if (ctx->r10 == 0) {
        // 0x80210B60: mfc1        $t2, $f6
        ctx->r10 = (int32_t)ctx->f6.u32l;
            goto L_80210BAC;
    }
    goto skip_1;
    // 0x80210B60: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x80210B64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210B68: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80210B6C: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80210B70: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80210B74: nop

    // 0x80210B78: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80210B7C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80210B80: nop

    // 0x80210B84: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80210B88: bne         $t2, $zero, L_80210BA0
    if (ctx->r10 != 0) {
        // 0x80210B8C: nop
    
            goto L_80210BA0;
    }
    // 0x80210B8C: nop

    // 0x80210B90: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80210B94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210B98: b           L_80210BB8
    // 0x80210B9C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_80210BB8;
    // 0x80210B9C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80210BA0:
    // 0x80210BA0: b           L_80210BB8
    // 0x80210BA4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_80210BB8;
    // 0x80210BA4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80210BA8: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
L_80210BAC:
    // 0x80210BAC: nop

    // 0x80210BB0: bltz        $t2, L_80210BA0
    if (SIGNED(ctx->r10) < 0) {
        // 0x80210BB4: nop
    
            goto L_80210BA0;
    }
    // 0x80210BB4: nop

L_80210BB8:
    // 0x80210BB8: lbu         $t3, 0xE($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XE);
    // 0x80210BBC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80210BC0: sb          $t2, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r10;
    // 0x80210BC4: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80210BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80210BCC: bgez        $t3, L_80210BE4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80210BD0: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80210BE4;
    }
    // 0x80210BD0: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210BD4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210BD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210BDC: nop

    // 0x80210BE0: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
L_80210BE4:
    // 0x80210BE4: beq         $a2, $zero, L_80210BFC
    if (ctx->r6 == 0) {
        // 0x80210BE8: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80210BFC;
    }
    // 0x80210BE8: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210BEC: lwc1        $f18, 0x10($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80210BF0: mul.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80210BF4: b           L_80210C1C
    // 0x80210BF8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
        goto L_80210C1C;
    // 0x80210BF8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_80210BFC:
    // 0x80210BFC: lwc1        $f18, 0x10($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80210C00: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80210C04: nop

    // 0x80210C08: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80210C0C: nop

    // 0x80210C10: mul.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80210C14: nop

    // 0x80210C18: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_80210C1C:
    // 0x80210C1C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80210C20: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210C24: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210C28: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80210C2C: nop

    // 0x80210C30: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210C34: beql        $t5, $zero, L_80210C84
    if (ctx->r13 == 0) {
        // 0x80210C38: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_80210C84;
    }
    goto skip_2;
    // 0x80210C38: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x80210C3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210C40: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210C44: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80210C48: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80210C4C: nop

    // 0x80210C50: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80210C54: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80210C58: nop

    // 0x80210C5C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80210C60: bne         $t5, $zero, L_80210C78
    if (ctx->r13 != 0) {
        // 0x80210C64: nop
    
            goto L_80210C78;
    }
    // 0x80210C64: nop

    // 0x80210C68: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x80210C6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210C70: b           L_80210C90
    // 0x80210C74: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_80210C90;
    // 0x80210C74: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80210C78:
    // 0x80210C78: b           L_80210C90
    // 0x80210C7C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_80210C90;
    // 0x80210C7C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80210C80: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_80210C84:
    // 0x80210C84: nop

    // 0x80210C88: bltz        $t5, L_80210C78
    if (SIGNED(ctx->r13) < 0) {
        // 0x80210C8C: nop
    
            goto L_80210C78;
    }
    // 0x80210C8C: nop

L_80210C90:
    // 0x80210C90: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80210C94: beq         $v0, $a1, L_802111AC
    if (ctx->r2 == ctx->r5) {
        // 0x80210C98: sb          $t5, 0xE($v1)
        MEM_B(0XE, ctx->r3) = ctx->r13;
            goto L_802111AC;
    }
    // 0x80210C98: sb          $t5, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r13;
L_80210C9C:
    // 0x80210C9C: lwc1        $f18, 0x10($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10);
L_80210CA0:
    // 0x80210CA0: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x80210CA4: addu        $a2, $t6, $a0
    ctx->r6 = ADD32(ctx->r14, ctx->r4);
    // 0x80210CA8: lbu         $t7, 0xC($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XC);
    // 0x80210CAC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80210CB0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80210CB4: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80210CB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80210CBC: bgez        $t7, L_80210CD4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80210CC0: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80210CD4;
    }
    // 0x80210CC0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80210CC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210CC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80210CCC: nop

    // 0x80210CD0: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_80210CD4:
    // 0x80210CD4: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80210CD8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80210CDC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80210CE0: beq         $v1, $zero, L_80210CF4
    if (ctx->r3 == 0) {
        // 0x80210CE4: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80210CF4;
    }
    // 0x80210CE4: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210CE8: mul.s       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80210CEC: b           L_80210D10
    // 0x80210CF0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
        goto L_80210D10;
    // 0x80210CF0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_80210CF4:
    // 0x80210CF4: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80210CF8: nop

    // 0x80210CFC: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80210D00: nop

    // 0x80210D04: mul.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80210D08: nop

    // 0x80210D0C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_80210D10:
    // 0x80210D10: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210D14: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210D18: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210D1C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80210D20: nop

    // 0x80210D24: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80210D28: beql        $t9, $zero, L_80210D78
    if (ctx->r25 == 0) {
        // 0x80210D2C: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_80210D78;
    }
    goto skip_3;
    // 0x80210D2C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x80210D30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210D34: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80210D38: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80210D3C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80210D40: nop

    // 0x80210D44: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80210D48: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80210D4C: nop

    // 0x80210D50: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80210D54: bne         $t9, $zero, L_80210D6C
    if (ctx->r25 != 0) {
        // 0x80210D58: nop
    
            goto L_80210D6C;
    }
    // 0x80210D58: nop

    // 0x80210D5C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80210D60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210D64: b           L_80210D84
    // 0x80210D68: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_80210D84;
    // 0x80210D68: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_80210D6C:
    // 0x80210D6C: b           L_80210D84
    // 0x80210D70: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_80210D84;
    // 0x80210D70: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80210D74: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_80210D78:
    // 0x80210D78: nop

    // 0x80210D7C: bltz        $t9, L_80210D6C
    if (SIGNED(ctx->r25) < 0) {
        // 0x80210D80: nop
    
            goto L_80210D6C;
    }
    // 0x80210D80: nop

L_80210D84:
    // 0x80210D84: lbu         $t1, 0xD($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XD);
    // 0x80210D88: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80210D8C: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80210D90: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80210D94: sb          $t9, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r25;
    // 0x80210D98: bgez        $t1, L_80210DB0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80210D9C: cvt.s.w     $f16, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80210DB0;
    }
    // 0x80210D9C: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80210DA0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210DA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210DA8: nop

    // 0x80210DAC: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_80210DB0:
    // 0x80210DB0: beq         $v1, $zero, L_80210DC4
    if (ctx->r3 == 0) {
        // 0x80210DB4: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80210DC4;
    }
    // 0x80210DB4: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210DB8: mul.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x80210DBC: b           L_80210DE0
    // 0x80210DC0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
        goto L_80210DE0;
    // 0x80210DC0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
L_80210DC4:
    // 0x80210DC4: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80210DC8: nop

    // 0x80210DCC: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80210DD0: nop

    // 0x80210DD4: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80210DD8: nop

    // 0x80210DDC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
L_80210DE0:
    // 0x80210DE0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80210DE4: addu        $a3, $t8, $a0
    ctx->r7 = ADD32(ctx->r24, ctx->r4);
    // 0x80210DE8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80210DEC: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210DF0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210DF4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80210DF8: nop

    // 0x80210DFC: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x80210E00: beql        $t3, $zero, L_80210E50
    if (ctx->r11 == 0) {
        // 0x80210E04: mfc1        $t3, $f4
        ctx->r11 = (int32_t)ctx->f4.u32l;
            goto L_80210E50;
    }
    goto skip_4;
    // 0x80210E04: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    skip_4:
    // 0x80210E08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80210E0C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80210E10: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80210E14: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80210E18: nop

    // 0x80210E1C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80210E20: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80210E24: nop

    // 0x80210E28: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x80210E2C: bne         $t3, $zero, L_80210E44
    if (ctx->r11 != 0) {
        // 0x80210E30: nop
    
            goto L_80210E44;
    }
    // 0x80210E30: nop

    // 0x80210E34: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80210E38: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210E3C: b           L_80210E5C
    // 0x80210E40: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_80210E5C;
    // 0x80210E40: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_80210E44:
    // 0x80210E44: b           L_80210E5C
    // 0x80210E48: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_80210E5C;
    // 0x80210E48: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80210E4C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
L_80210E50:
    // 0x80210E50: nop

    // 0x80210E54: bltz        $t3, L_80210E44
    if (SIGNED(ctx->r11) < 0) {
        // 0x80210E58: nop
    
            goto L_80210E44;
    }
    // 0x80210E58: nop

L_80210E5C:
    // 0x80210E5C: lbu         $t4, 0xE($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0XE);
    // 0x80210E60: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80210E64: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80210E68: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80210E6C: sb          $t3, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r11;
    // 0x80210E70: bgez        $t4, L_80210E88
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80210E74: cvt.s.w     $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80210E88;
    }
    // 0x80210E74: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80210E78: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210E7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210E80: nop

    // 0x80210E84: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_80210E88:
    // 0x80210E88: beq         $v1, $zero, L_80210E9C
    if (ctx->r3 == 0) {
        // 0x80210E8C: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80210E9C;
    }
    // 0x80210E8C: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80210E90: mul.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80210E94: b           L_80210EB8
    // 0x80210E98: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
        goto L_80210EB8;
    // 0x80210E98: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
L_80210E9C:
    // 0x80210E9C: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80210EA0: nop

    // 0x80210EA4: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80210EA8: nop

    // 0x80210EAC: mul.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80210EB0: nop

    // 0x80210EB4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
L_80210EB8:
    // 0x80210EB8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80210EBC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210EC0: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210EC4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80210EC8: nop

    // 0x80210ECC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80210ED0: beql        $t6, $zero, L_80210F20
    if (ctx->r14 == 0) {
        // 0x80210ED4: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_80210F20;
    }
    goto skip_5;
    // 0x80210ED4: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_5:
    // 0x80210ED8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210EDC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80210EE0: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80210EE4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80210EE8: nop

    // 0x80210EEC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80210EF0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80210EF4: nop

    // 0x80210EF8: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80210EFC: bne         $t6, $zero, L_80210F14
    if (ctx->r14 != 0) {
        // 0x80210F00: nop
    
            goto L_80210F14;
    }
    // 0x80210F00: nop

    // 0x80210F04: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80210F08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210F0C: b           L_80210F2C
    // 0x80210F10: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80210F2C;
    // 0x80210F10: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80210F14:
    // 0x80210F14: b           L_80210F2C
    // 0x80210F18: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80210F2C;
    // 0x80210F18: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80210F1C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_80210F20:
    // 0x80210F20: nop

    // 0x80210F24: bltz        $t6, L_80210F14
    if (SIGNED(ctx->r14) < 0) {
        // 0x80210F28: nop
    
            goto L_80210F14;
    }
    // 0x80210F28: nop

L_80210F2C:
    // 0x80210F2C: sb          $t6, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r14;
    // 0x80210F30: lbu         $t9, 0xC($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0XC);
    // 0x80210F34: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80210F38: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80210F3C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80210F40: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x80210F44: bgez        $t9, L_80210F5C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80210F48: cvt.s.w     $f2, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80210F5C;
    }
    // 0x80210F48: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210F4C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80210F50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210F54: nop

    // 0x80210F58: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
L_80210F5C:
    // 0x80210F5C: lhu         $t0, 0x6($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X6);
    // 0x80210F60: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80210F64: beq         $t0, $zero, L_80210F78
    if (ctx->r8 == 0) {
        // 0x80210F68: nop
    
            goto L_80210F78;
    }
    // 0x80210F68: nop

    // 0x80210F6C: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80210F70: b           L_80210F94
    // 0x80210F74: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
        goto L_80210F94;
    // 0x80210F74: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_80210F78:
    // 0x80210F78: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80210F7C: nop

    // 0x80210F80: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80210F84: nop

    // 0x80210F88: mul.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80210F8C: nop

    // 0x80210F90: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_80210F94:
    // 0x80210F94: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80210F98: nop

    // 0x80210F9C: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80210FA0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80210FA4: nop

    // 0x80210FA8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80210FAC: beql        $t2, $zero, L_80210FFC
    if (ctx->r10 == 0) {
        // 0x80210FB0: mfc1        $t2, $f8
        ctx->r10 = (int32_t)ctx->f8.u32l;
            goto L_80210FFC;
    }
    goto skip_6;
    // 0x80210FB0: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    skip_6:
    // 0x80210FB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210FB8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80210FBC: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80210FC0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80210FC4: nop

    // 0x80210FC8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80210FCC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80210FD0: nop

    // 0x80210FD4: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x80210FD8: bne         $t2, $zero, L_80210FF0
    if (ctx->r10 != 0) {
        // 0x80210FDC: nop
    
            goto L_80210FF0;
    }
    // 0x80210FDC: nop

    // 0x80210FE0: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80210FE4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80210FE8: b           L_80211008
    // 0x80210FEC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_80211008;
    // 0x80210FEC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_80210FF0:
    // 0x80210FF0: b           L_80211008
    // 0x80210FF4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_80211008;
    // 0x80210FF4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80210FF8: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_80210FFC:
    // 0x80210FFC: nop

    // 0x80211000: bltz        $t2, L_80210FF0
    if (SIGNED(ctx->r10) < 0) {
        // 0x80211004: nop
    
            goto L_80210FF0;
    }
    // 0x80211004: nop

L_80211008:
    // 0x80211008: lbu         $t3, 0xD($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0XD);
    // 0x8021100C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80211010: sb          $t2, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r10;
    // 0x80211014: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80211018: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021101C: bgez        $t3, L_80211030
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80211020: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80211030;
    }
    // 0x80211020: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80211024: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80211028: nop

    // 0x8021102C: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_80211030:
    // 0x80211030: beq         $t0, $zero, L_80211044
    if (ctx->r8 == 0) {
        // 0x80211034: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80211044;
    }
    // 0x80211034: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80211038: mul.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8021103C: b           L_80211060
    // 0x80211040: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
        goto L_80211060;
    // 0x80211040: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_80211044:
    // 0x80211044: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80211048: nop

    // 0x8021104C: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x80211050: nop

    // 0x80211054: mul.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80211058: nop

    // 0x8021105C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_80211060:
    // 0x80211060: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80211064: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80211068: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8021106C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80211070: nop

    // 0x80211074: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80211078: beql        $t5, $zero, L_802110C8
    if (ctx->r13 == 0) {
        // 0x8021107C: mfc1        $t5, $f10
        ctx->r13 = (int32_t)ctx->f10.u32l;
            goto L_802110C8;
    }
    goto skip_7;
    // 0x8021107C: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    skip_7:
    // 0x80211080: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80211084: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80211088: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8021108C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80211090: nop

    // 0x80211094: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80211098: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021109C: nop

    // 0x802110A0: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x802110A4: bne         $t5, $zero, L_802110BC
    if (ctx->r13 != 0) {
        // 0x802110A8: nop
    
            goto L_802110BC;
    }
    // 0x802110A8: nop

    // 0x802110AC: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x802110B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802110B4: b           L_802110D4
    // 0x802110B8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_802110D4;
    // 0x802110B8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_802110BC:
    // 0x802110BC: b           L_802110D4
    // 0x802110C0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_802110D4;
    // 0x802110C0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x802110C4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
L_802110C8:
    // 0x802110C8: nop

    // 0x802110CC: bltz        $t5, L_802110BC
    if (SIGNED(ctx->r13) < 0) {
        // 0x802110D0: nop
    
            goto L_802110BC;
    }
    // 0x802110D0: nop

L_802110D4:
    // 0x802110D4: lbu         $t6, 0xE($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0XE);
    // 0x802110D8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802110DC: sb          $t5, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r13;
    // 0x802110E0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802110E4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802110E8: bgez        $t6, L_802110FC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802110EC: cvt.s.w     $f16, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802110FC;
    }
    // 0x802110EC: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802110F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802110F4: nop

    // 0x802110F8: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_802110FC:
    // 0x802110FC: beq         $t0, $zero, L_80211110
    if (ctx->r8 == 0) {
        // 0x80211100: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_80211110;
    }
    // 0x80211100: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80211104: mul.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x80211108: b           L_8021112C
    // 0x8021110C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
        goto L_8021112C;
    // 0x8021110C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_80211110:
    // 0x80211110: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80211114: nop

    // 0x80211118: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8021111C: nop

    // 0x80211120: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80211124: nop

    // 0x80211128: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_8021112C:
    // 0x8021112C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80211130: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80211134: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80211138: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021113C: nop

    // 0x80211140: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80211144: beql        $t8, $zero, L_80211194
    if (ctx->r24 == 0) {
        // 0x80211148: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_80211194;
    }
    goto skip_8;
    // 0x80211148: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_8:
    // 0x8021114C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80211150: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80211154: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80211158: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021115C: nop

    // 0x80211160: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80211164: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80211168: nop

    // 0x8021116C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80211170: bne         $t8, $zero, L_80211188
    if (ctx->r24 != 0) {
        // 0x80211174: nop
    
            goto L_80211188;
    }
    // 0x80211174: nop

    // 0x80211178: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8021117C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80211180: b           L_802111A0
    // 0x80211184: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_802111A0;
    // 0x80211184: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_80211188:
    // 0x80211188: b           L_802111A0
    // 0x8021118C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_802111A0;
    // 0x8021118C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80211190: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_80211194:
    // 0x80211194: nop

    // 0x80211198: bltz        $t8, L_80211188
    if (SIGNED(ctx->r24) < 0) {
        // 0x8021119C: nop
    
            goto L_80211188;
    }
    // 0x8021119C: nop

L_802111A0:
    // 0x802111A0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802111A4: bne         $v0, $a1, L_80210CA0
    if (ctx->r2 != ctx->r5) {
        // 0x802111A8: sb          $t8, 0xE($v1)
        MEM_B(0XE, ctx->r3) = ctx->r24;
            goto L_80210CA0;
    }
    // 0x802111A8: sb          $t8, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r24;
L_802111AC:
    // 0x802111AC: jr          $ra
    // 0x802111B0: nop

    return;
    // 0x802111B0: nop

;}
RECOMP_FUNC void D_8028C51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C59C: jr          $ra
    // 0x8028C5A0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    return;
    // 0x8028C5A0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
;}
RECOMP_FUNC void D_8022A5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A5C4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022A5C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022A5CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022A5D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A5D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A5D8: lwc1        $f6, 0x30($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X30);
    // 0x8022A5DC: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8022A5E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8022A5E4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8022A5E8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022A5EC: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8022A5F0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x8022A5F4: lwc1        $f16, 0x34($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X34);
    // 0x8022A5F8: lwc1        $f10, 0x34($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8022A5FC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8022A600: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x8022A604: lwc1        $f6, 0x38($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X38);
    // 0x8022A608: lwc1        $f4, 0x38($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8022A60C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022A610: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022A614: jal         0x80234D30
    // 0x8022A618: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    static_3_80234D30(rdram, ctx);
        goto after_0;
    // 0x8022A618: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8022A61C: beql        $v0, $zero, L_8022A720
    if (ctx->r2 == 0) {
        // 0x8022A620: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8022A720;
    }
    goto skip_0;
    // 0x8022A620: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8022A624: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x8022A628: addiu       $s2, $sp, 0x2C
    ctx->r18 = ADD32(ctx->r29, 0X2C);
    // 0x8022A62C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022A630: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x8022A634: lwc1        $f16, 0x24($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X24);
    // 0x8022A638: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8022A63C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8022A640: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x8022A644: lwc1        $f18, 0x28($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X28);
    // 0x8022A648: jal         0x80234C78
    // 0x8022A64C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    static_3_80234C78(rdram, ctx);
        goto after_1;
    // 0x8022A64C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x8022A650: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022A654: jal         0x80234D30
    // 0x8022A658: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_2;
    // 0x8022A658: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8022A65C: bne         $v0, $zero, L_8022A684
    if (ctx->r2 != 0) {
        // 0x8022A660: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8022A684;
    }
    // 0x8022A660: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8022A664: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8022A668: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8022A66C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8022A670: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8022A674: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8022A678: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x8022A67C: jal         0x80234D30
    // 0x8022A680: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    static_3_80234D30(rdram, ctx);
        goto after_3;
    // 0x8022A680: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    after_3:
L_8022A684:
    // 0x8022A684: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8022A688: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8022A68C: jal         0x80234C78
    // 0x8022A690: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    static_3_80234C78(rdram, ctx);
        goto after_4;
    // 0x8022A690: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_4:
    // 0x8022A694: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8022A698: jal         0x80234D30
    // 0x8022A69C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_5;
    // 0x8022A69C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_5:
    // 0x8022A6A0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8022A6A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8022A6A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022A6AC: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x8022A6B0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8022A6B4: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x8022A6B8: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8022A6BC: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x8022A6C0: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8022A6C4: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x8022A6C8: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8022A6CC: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x8022A6D0: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8022A6D4: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x8022A6D8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8022A6DC: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x8022A6E0: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8022A6E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022A6E8: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x8022A6EC: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8022A6F0: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x8022A6F4: lwc1        $f4, 0x30($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X30);
    // 0x8022A6F8: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x8022A6FC: lwc1        $f6, 0x34($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X34);
    // 0x8022A700: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x8022A704: lwc1        $f8, 0x38($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X38);
    // 0x8022A708: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x8022A70C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x8022A710: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x8022A714: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x8022A718: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x8022A71C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8022A720:
    // 0x8022A720: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A724: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A728: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022A72C: jr          $ra
    // 0x8022A730: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8022A730: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void D_80247010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247010: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80247014: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80247018: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024701C: andi        $t7, $a0, 0x1C
    ctx->r15 = ctx->r4 & 0X1C;
    // 0x80247020: beq         $t7, $zero, L_80247030
    if (ctx->r15 == 0) {
        // 0x80247024: nop
    
            goto L_80247030;
    }
    // 0x80247024: nop

    // 0x80247028: b           L_80247034
    // 0x8024702C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80247034;
    // 0x8024702C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80247030:
    // 0x80247030: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80247034:
    // 0x80247034: jr          $ra
    // 0x80247038: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80247038: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void D_80295F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029601C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80296020: lh          $t6, -0x10($a1)
    ctx->r14 = MEM_H(ctx->r5, -0X10);
    // 0x80296024: addiu       $at, $zero, 0x7373
    ctx->r1 = ADD32(0, 0X7373);
    // 0x80296028: addiu       $v0, $a1, -0x10
    ctx->r2 = ADD32(ctx->r5, -0X10);
    // 0x8029602C: bne         $t6, $at, L_802960D4
    if (ctx->r14 != ctx->r1) {
        // 0x80296030: nop
    
            goto L_802960D4;
    }
    // 0x80296030: nop

    // 0x80296034: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x80296038: bne         $t7, $zero, L_802960D4
    if (ctx->r15 != 0) {
        // 0x8029603C: nop
    
            goto L_802960D4;
    }
    // 0x8029603C: nop

    // 0x80296040: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x80296044: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80296048: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x8029604C: beql        $a0, $zero, L_80296088
    if (ctx->r4 == 0) {
        // 0x80296050: lw          $a1, 0xC($v0)
        ctx->r5 = MEM_W(ctx->r2, 0XC);
            goto L_80296088;
    }
    goto skip_0;
    // 0x80296050: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x80296054: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x80296058: beql        $t9, $zero, L_80296088
    if (ctx->r25 == 0) {
        // 0x8029605C: lw          $a1, 0xC($v0)
        ctx->r5 = MEM_W(ctx->r2, 0XC);
            goto L_80296088;
    }
    goto skip_1;
    // 0x8029605C: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x80296060: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x80296064: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x80296068: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8029606C: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x80296070: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80296074: lw          $t4, 0x8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X8);
    // 0x80296078: beq         $t4, $zero, L_80296084
    if (ctx->r12 == 0) {
        // 0x8029607C: sw          $t4, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r12;
            goto L_80296084;
    }
    // 0x8029607C: sw          $t4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r12;
    // 0x80296080: sw          $v0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r2;
L_80296084:
    // 0x80296084: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
L_80296088:
    // 0x80296088: beq         $a1, $zero, L_802960D4
    if (ctx->r5 == 0) {
        // 0x8029608C: nop
    
            goto L_802960D4;
    }
    // 0x8029608C: nop

    // 0x80296090: lh          $t5, 0x2($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X2);
    // 0x80296094: addiu       $v1, $a1, 0x4
    ctx->r3 = ADD32(ctx->r5, 0X4);
    // 0x80296098: beq         $t5, $zero, L_802960D4
    if (ctx->r13 == 0) {
        // 0x8029609C: nop
    
            goto L_802960D4;
    }
    // 0x8029609C: nop

    // 0x802960A0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802960A4: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x802960A8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802960AC: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x802960B0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802960B4: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x802960B8: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x802960BC: sw          $t0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r8;
    // 0x802960C0: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x802960C4: beq         $a0, $zero, L_802960D4
    if (ctx->r4 == 0) {
        // 0x802960C8: nop
    
            goto L_802960D4;
    }
    // 0x802960C8: nop

    // 0x802960CC: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x802960D0: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
L_802960D4:
    // 0x802960D4: jr          $ra
    // 0x802960D8: nop

    return;
    // 0x802960D8: nop

;}
RECOMP_FUNC void D_802A4064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A40E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A40E8: jr          $ra
    // 0x802A40EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A40EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_8029DC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029DCDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029DCE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029DCE4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8029DCE8: jal         0x802ABD84
    // 0x8029DCEC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802ABD84(rdram, ctx);
        goto after_0;
    // 0x8029DCEC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8029DCF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029DCF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029DCF8: jr          $ra
    // 0x8029DCFC: nop

    return;
    // 0x8029DCFC: nop

;}
RECOMP_FUNC void D_802D76CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D774C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802D7750: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x802D7754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D7758: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802D775C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D7760: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802D7764: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802D7768: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x802D776C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    // 0x802D7770: jal         0x802D5010
    // 0x802D7774: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_802D5010(rdram, ctx);
        goto after_0;
    // 0x802D7774: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x802D7778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D777C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D7780: jr          $ra
    // 0x802D7784: nop

    return;
    // 0x802D7784: nop

;}
RECOMP_FUNC void D_802B3924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B39A4: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x802B39A8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802B39AC: addiu       $s0, $sp, 0x98
    ctx->r16 = ADD32(ctx->r29, 0X98);
    // 0x802B39B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802B39B4: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x802B39B8: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x802B39BC: jal         0x80228DE0
    // 0x802B39C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802B39C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802B39C4: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x802B39C8: jal         0x80228DE0
    // 0x802B39CC: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802B39CC: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    after_1:
    // 0x802B39D0: lw          $t6, 0xD8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD8);
    // 0x802B39D4: lw          $v1, 0xC($t6)
    ctx->r3 = MEM_W(ctx->r14, 0XC);
    // 0x802B39D8: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802B39DC: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x802B39E0: lh          $t7, 0x68($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X68);
    // 0x802B39E4: jalr        $t9
    // 0x802B39E8: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802B39E8: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_2:
    // 0x802B39EC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x802B39F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B39F4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802B39F8: jal         0x802D01D4
    // 0x802B39FC: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    static_3_802D01D4(rdram, ctx);
        goto after_3;
    // 0x802B39FC: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_3:
    // 0x802B3A00: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x802B3A04: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x802B3A08: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802B3A0C: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x802B3A10: lh          $t0, 0x48($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X48);
    // 0x802B3A14: jalr        $t9
    // 0x802B3A18: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802B3A18: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    after_4:
    // 0x802B3A1C: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x802B3A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B3A24: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802B3A28: jal         0x802D01D4
    // 0x802B3A2C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802B3A2C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_5:
    // 0x802B3A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B3A34: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x802B3A38: lui         $a2, 0xC396
    ctx->r6 = S32(0XC396 << 16);
    // 0x802B3A3C: jal         0x8022A0D0
    // 0x802B3A40: lui         $a3, 0x4296
    ctx->r7 = S32(0X4296 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_6;
    // 0x802B3A40: lui         $a3, 0x4296
    ctx->r7 = S32(0X4296 << 16);
    after_6:
    // 0x802B3A44: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B3A48: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B3A4C: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x802B3A50: jal         0x802AEF08
    // 0x802B3A54: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    static_3_802AEF08(rdram, ctx);
        goto after_7;
    // 0x802B3A54: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    after_7:
    // 0x802B3A58: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x802B3A5C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802B3A60: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802B3A64: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x802B3A68: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B3A6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B3A70: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B3A74: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802B3A78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B3A7C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x802B3A80: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802B3A84: bc1f        L_802B3A94
    if (!c1cs) {
        // 0x802B3A88: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_802B3A94;
    }
    // 0x802B3A88: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802B3A8C: add.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x802B3A90: swc1        $f16, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f16.u32l;
L_802B3A94:
    // 0x802B3A94: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x802B3A98: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802B3A9C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B3AA0: lw          $t2, 0x14($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X14);
    // 0x802B3AA4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802B3AA8: jal         0x802AF31C
    // 0x802B3AAC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    static_3_802AF31C(rdram, ctx);
        goto after_8;
    // 0x802B3AAC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_8:
    // 0x802B3AB0: beq         $v0, $zero, L_802B3BB0
    if (ctx->r2 == 0) {
        // 0x802B3AB4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B3BB0;
    }
    // 0x802B3AB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B3AB8: beql        $v0, $at, L_802B3BB4
    if (ctx->r2 == ctx->r1) {
        // 0x802B3ABC: lwc1        $f10, 0xC8($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
            goto L_802B3BB4;
    }
    goto skip_0;
    // 0x802B3ABC: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    skip_0:
    // 0x802B3AC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B3AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B3AC8: lui         $a1, 0xC3C8
    ctx->r5 = S32(0XC3C8 << 16);
    // 0x802B3ACC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802B3AD0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802B3AD4: jal         0x8022A0D0
    // 0x802B3AD8: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_9;
    // 0x802B3AD8: nop

    after_9:
    // 0x802B3ADC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B3AE0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B3AE4: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x802B3AE8: jal         0x802AEF08
    // 0x802B3AEC: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    static_3_802AEF08(rdram, ctx);
        goto after_10;
    // 0x802B3AEC: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    after_10:
    // 0x802B3AF0: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x802B3AF4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802B3AF8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802B3AFC: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x802B3B00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B3B04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B3B08: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B3B0C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x802B3B10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B3B14: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x802B3B18: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802B3B1C: bc1f        L_802B3B2C
    if (!c1cs) {
        // 0x802B3B20: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_802B3B2C;
    }
    // 0x802B3B20: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802B3B24: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x802B3B28: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
L_802B3B2C:
    // 0x802B3B2C: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x802B3B30: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802B3B34: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B3B38: lw          $t5, 0x14($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X14);
    // 0x802B3B3C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802B3B40: jal         0x802AF31C
    // 0x802B3B44: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    static_3_802AF31C(rdram, ctx);
        goto after_11;
    // 0x802B3B44: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_11:
    // 0x802B3B48: beq         $v0, $zero, L_802B3BB0
    if (ctx->r2 == 0) {
        // 0x802B3B4C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B3BB0;
    }
    // 0x802B3B4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B3B50: beq         $v0, $at, L_802B3BB0
    if (ctx->r2 == ctx->r1) {
        // 0x802B3B54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802B3BB0;
    }
    // 0x802B3B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B3B58: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x802B3B5C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802B3B60: jal         0x8022A0D0
    // 0x802B3B64: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_12;
    // 0x802B3B64: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_12:
    // 0x802B3B68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B3B6C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B3B70: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x802B3B74: jal         0x802AEF08
    // 0x802B3B78: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    static_3_802AEF08(rdram, ctx);
        goto after_13;
    // 0x802B3B78: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    after_13:
    // 0x802B3B7C: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x802B3B80: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802B3B84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B3B88: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x802B3B8C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802B3B90: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x802B3B94: nop

    // 0x802B3B98: bc1fl       L_802B3BB4
    if (!c1cs) {
        // 0x802B3B9C: lwc1        $f10, 0xC8($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
            goto L_802B3BB4;
    }
    goto skip_1;
    // 0x802B3B9C: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    skip_1:
    // 0x802B3BA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B3BA4: nop

    // 0x802B3BA8: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802B3BAC: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
L_802B3BB0:
    // 0x802B3BB0: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
L_802B3BB4:
    // 0x802B3BB4: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x802B3BB8: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x802B3BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802B3BC0: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x802B3BC4: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x802B3BC8: jal         0x8022970C
    // 0x802B3BCC: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    func_8022970C(rdram, ctx);
        goto after_14;
    // 0x802B3BCC: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x802B3BD0: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802B3BD4: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802B3BD8: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802B3BDC: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x802B3BE0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802B3BE4: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x802B3BE8: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x802B3BEC: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    // 0x802B3BF0: jal         0x80228DE0
    // 0x802B3BF4: addiu       $a0, $a0, 0x604
    ctx->r4 = ADD32(ctx->r4, 0X604);
    func_80228DE0(rdram, ctx);
        goto after_15;
    // 0x802B3BF4: addiu       $a0, $a0, 0x604
    ctx->r4 = ADD32(ctx->r4, 0X604);
    after_15:
    // 0x802B3BF8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802B3BFC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802B3C00: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x802B3C04: jr          $ra
    // 0x802B3C08: nop

    return;
    // 0x802B3C08: nop

;}
RECOMP_FUNC void D_802F071C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F079C: jr          $ra
    // 0x802F07A0: sw          $a1, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r5;
    return;
    // 0x802F07A0: sw          $a1, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_80203A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203A58: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80203A5C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80203A60: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80203A64: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80203A68: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80203A6C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80203A70: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80203A74: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80203A78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80203A7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80203A80: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x80203A84: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80203A88: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80203A8C: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x80203A90: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80203A94: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80203A98: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80203A9C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80203AA0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80203AA4: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x80203AA8: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x80203AAC: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80203AB0: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80203AB4: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x80203AB8: addiu       $s1, $zero, 0x24
    ctx->r17 = ADD32(0, 0X24);
    // 0x80203ABC: addiu       $s2, $sp, 0x48
    ctx->r18 = ADD32(ctx->r29, 0X48);
    // 0x80203AC0: addiu       $s3, $zero, -0x4
    ctx->r19 = ADD32(0, -0X4);
    // 0x80203AC4: addiu       $s5, $zero, 0x54
    ctx->r21 = ADD32(0, 0X54);
L_80203AC8:
    // 0x80203AC8: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
L_80203ACC:
    // 0x80203ACC: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x80203AD0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80203AD4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80203AD8: beq         $a1, $s1, L_80203B98
    if (ctx->r5 == ctx->r17) {
        // 0x80203ADC: slti        $at, $a1, 0x24
        ctx->r1 = SIGNED(ctx->r5) < 0X24 ? 1 : 0;
            goto L_80203B98;
    }
    // 0x80203ADC: slti        $at, $a1, 0x24
    ctx->r1 = SIGNED(ctx->r5) < 0X24 ? 1 : 0;
    // 0x80203AE0: beq         $at, $zero, L_80203B98
    if (ctx->r1 == 0) {
        // 0x80203AE4: slti        $at, $a1, 0x5
        ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
            goto L_80203B98;
    }
    // 0x80203AE4: slti        $at, $a1, 0x5
    ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
    // 0x80203AE8: beq         $at, $zero, L_80203B44
    if (ctx->r1 == 0) {
        // 0x80203AEC: nop
    
            goto L_80203B44;
    }
    // 0x80203AEC: nop

    // 0x80203AF0: multu       $a1, $s5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203AF4: mflo        $t7
    ctx->r15 = lo;
    // 0x80203AF8: addu        $v0, $s4, $t7
    ctx->r2 = ADD32(ctx->r20, ctx->r15);
    // 0x80203AFC: lw          $v1, 0x50($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X50);
    // 0x80203B00: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x80203B04: beq         $at, $zero, L_80203B34
    if (ctx->r1 == 0) {
        // 0x80203B08: nop
    
            goto L_80203B34;
    }
    // 0x80203B08: nop

    // 0x80203B0C: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x80203B10: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x80203B14: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80203B18: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80203B1C: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x80203B20: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x80203B24: lw          $t2, 0x50($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X50);
    // 0x80203B28: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80203B2C: b           L_80203AC8
    // 0x80203B30: sw          $t3, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r11;
        goto L_80203AC8;
    // 0x80203B30: sw          $t3, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r11;
L_80203B34:
    // 0x80203B34: jal         0x80231A24
    // 0x80203B38: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80203B38: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x80203B3C: b           L_80203ACC
    // 0x80203B40: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
        goto L_80203ACC;
    // 0x80203B40: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
L_80203B44:
    // 0x80203B44: multu       $a1, $s1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203B48: mflo        $t4
    ctx->r12 = lo;
    // 0x80203B4C: addu        $v0, $s7, $t4
    ctx->r2 = ADD32(ctx->r23, ctx->r12);
    // 0x80203B50: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x80203B54: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80203B58: beq         $at, $zero, L_80203B88
    if (ctx->r1 == 0) {
        // 0x80203B5C: nop
    
            goto L_80203B88;
    }
    // 0x80203B5C: nop

    // 0x80203B60: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x80203B64: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x80203B68: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80203B6C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80203B70: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x80203B74: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x80203B78: lw          $t0, 0x20($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X20);
    // 0x80203B7C: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x80203B80: b           L_80203AC8
    // 0x80203B84: sw          $t9, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r25;
        goto L_80203AC8;
    // 0x80203B84: sw          $t9, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r25;
L_80203B88:
    // 0x80203B88: jal         0x80231A24
    // 0x80203B8C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80203B8C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_1:
    // 0x80203B90: b           L_80203ACC
    // 0x80203B94: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
        goto L_80203ACC;
    // 0x80203B94: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
L_80203B98:
    // 0x80203B98: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80203B9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80203BA0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80203BA4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80203BA8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80203BAC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80203BB0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80203BB4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80203BB8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80203BBC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80203BC0: jr          $ra
    // 0x80203BC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80203BC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802ED918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED998: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802ED99C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802ED9A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ED9A4: bne         $a0, $zero, L_802ED9BC
    if (ctx->r4 != 0) {
        // 0x802ED9A8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802ED9BC;
    }
    // 0x802ED9A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802ED9AC: jal         0x802C67EC
    // 0x802ED9B0: addiu       $a0, $zero, 0x5A0
    ctx->r4 = ADD32(0, 0X5A0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802ED9B0: addiu       $a0, $zero, 0x5A0
    ctx->r4 = ADD32(0, 0X5A0);
    after_0:
    // 0x802ED9B4: beq         $v0, $zero, L_802EDA2C
    if (ctx->r2 == 0) {
        // 0x802ED9B8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802EDA2C;
    }
    // 0x802ED9B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802ED9BC:
    // 0x802ED9BC: jal         0x8031C47C
    // 0x802ED9C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802ED9C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802ED9C4: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x802ED9C8: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802ED9CC: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802ED9D0: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x802ED9D4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x802ED9D8: jal         0x802C6930
    // 0x802ED9DC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802ED9DC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802ED9E0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED9E4: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED9E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x802ED9EC: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802ED9F0: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x802ED9F4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802ED9F8: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x802ED9FC: sh          $t7, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r15;
    // 0x802EDA00: sw          $t8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r24;
    // 0x802EDA04: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
    // 0x802EDA08: sh          $t9, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r25;
    // 0x802EDA0C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EDA10: swc1        $f0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f0.u32l;
    // 0x802EDA14: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
    // 0x802EDA18: sw          $t6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r14;
    // 0x802EDA1C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EDA20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802EDA24: jal         0x8031E198
    // 0x802EDA28: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    static_3_8031E198(rdram, ctx);
        goto after_3;
    // 0x802EDA28: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    after_3:
L_802EDA2C:
    // 0x802EDA2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802EDA30: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802EDA34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802EDA38: jr          $ra
    // 0x802EDA3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802EDA3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802AC664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AC6E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802AC6E8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802AC6EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802AC6F0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802AC6F4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802AC6F8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802AC6FC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802AC700: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802AC704: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AC708: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AC70C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802AC710: addiu       $s1, $v0, 0x8F4
    ctx->r17 = ADD32(ctx->r2, 0X8F4);
    // 0x802AC714: addiu       $s2, $v0, 0x3228
    ctx->r18 = ADD32(ctx->r2, 0X3228);
    // 0x802AC718: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC71C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC720: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802AC724: jal         0x80303460
    // 0x802AC728: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    static_3_80303460(rdram, ctx);
        goto after_0;
    // 0x802AC728: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    after_0:
    // 0x802AC72C: addiu       $a0, $s0, 0x9E0
    ctx->r4 = ADD32(ctx->r16, 0X9E0);
    // 0x802AC730: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC734: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802AC738: jal         0x80303460
    // 0x802AC73C: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    static_3_80303460(rdram, ctx);
        goto after_1;
    // 0x802AC73C: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_1:
    // 0x802AC740: addiu       $a0, $s0, 0xA54
    ctx->r4 = ADD32(ctx->r16, 0XA54);
    // 0x802AC744: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC748: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802AC74C: jal         0x80303460
    // 0x802AC750: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    static_3_80303460(rdram, ctx);
        goto after_2;
    // 0x802AC750: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_2:
    // 0x802AC754: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    // 0x802AC758: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC75C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802AC760: jal         0x80303460
    // 0x802AC764: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    static_3_80303460(rdram, ctx);
        goto after_3;
    // 0x802AC764: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_3:
    // 0x802AC768: addiu       $a0, $s0, 0xB3C
    ctx->r4 = ADD32(ctx->r16, 0XB3C);
    // 0x802AC76C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC770: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802AC774: jal         0x80303460
    // 0x802AC778: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    static_3_80303460(rdram, ctx);
        goto after_4;
    // 0x802AC778: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    after_4:
    // 0x802AC77C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC780: addiu       $a0, $s0, 0xBB0
    ctx->r4 = ADD32(ctx->r16, 0XBB0);
    // 0x802AC784: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC788: jal         0x80303460
    // 0x802AC78C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_80303460(rdram, ctx);
        goto after_5;
    // 0x802AC78C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x802AC790: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC794: addiu       $a0, $s0, 0xC24
    ctx->r4 = ADD32(ctx->r16, 0XC24);
    // 0x802AC798: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC79C: jal         0x80303460
    // 0x802AC7A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_80303460(rdram, ctx);
        goto after_6;
    // 0x802AC7A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x802AC7A4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC7A8: addiu       $a0, $s0, 0xC98
    ctx->r4 = ADD32(ctx->r16, 0XC98);
    // 0x802AC7AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC7B0: jal         0x80303460
    // 0x802AC7B4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_80303460(rdram, ctx);
        goto after_7;
    // 0x802AC7B4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x802AC7B8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC7BC: addiu       $a0, $s0, 0xD0C
    ctx->r4 = ADD32(ctx->r16, 0XD0C);
    // 0x802AC7C0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC7C4: jal         0x80303460
    // 0x802AC7C8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_80303460(rdram, ctx);
        goto after_8;
    // 0x802AC7C8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x802AC7CC: addiu       $a0, $s0, 0xD80
    ctx->r4 = ADD32(ctx->r16, 0XD80);
    // 0x802AC7D0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC7D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802AC7D8: jal         0x80303460
    // 0x802AC7DC: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    static_3_80303460(rdram, ctx);
        goto after_9;
    // 0x802AC7DC: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_9:
    // 0x802AC7E0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802AC7E4: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    // 0x802AC7E8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC7EC: jal         0x80303460
    // 0x802AC7F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_80303460(rdram, ctx);
        goto after_10;
    // 0x802AC7F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x802AC7F4: addiu       $a0, $s0, 0xE68
    ctx->r4 = ADD32(ctx->r16, 0XE68);
    // 0x802AC7F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802AC7FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802AC800: jal         0x80303460
    // 0x802AC804: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    static_3_80303460(rdram, ctx);
        goto after_11;
    // 0x802AC804: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_11:
    // 0x802AC808: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802AC80C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802AC810: sw          $v0, 0x948($s0)
    MEM_W(0X948, ctx->r16) = ctx->r2;
    // 0x802AC814: sw          $v0, 0x944($s0)
    MEM_W(0X944, ctx->r16) = ctx->r2;
    // 0x802AC818: sw          $v0, 0x94C($s0)
    MEM_W(0X94C, ctx->r16) = ctx->r2;
    // 0x802AC81C: sw          $v0, 0x950($s0)
    MEM_W(0X950, ctx->r16) = ctx->r2;
    // 0x802AC820: sw          $v0, 0x954($s0)
    MEM_W(0X954, ctx->r16) = ctx->r2;
    // 0x802AC824: sb          $zero, 0x958($s0)
    MEM_B(0X958, ctx->r16) = 0;
    // 0x802AC828: sb          $zero, 0x959($s0)
    MEM_B(0X959, ctx->r16) = 0;
    // 0x802AC82C: sb          $zero, 0x95A($s0)
    MEM_B(0X95A, ctx->r16) = 0;
    // 0x802AC830: sw          $v1, 0x95C($s0)
    MEM_W(0X95C, ctx->r16) = ctx->r3;
    // 0x802AC834: sw          $v1, 0x960($s0)
    MEM_W(0X960, ctx->r16) = ctx->r3;
    // 0x802AC838: sw          $v1, 0x964($s0)
    MEM_W(0X964, ctx->r16) = ctx->r3;
    // 0x802AC83C: sb          $zero, 0x968($s0)
    MEM_B(0X968, ctx->r16) = 0;
    // 0x802AC840: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802AC844: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802AC848: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802AC84C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AC850: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802AC854: jr          $ra
    // 0x802AC858: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802AC858: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_80207B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207B14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80207B18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207B1C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80207B20: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80207B24: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80207B28: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80207B2C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80207B30: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80207B34: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80207B38: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80207B3C: lwc1        $f16, 0x4($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80207B40: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80207B44: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80207B48: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80207B4C: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207B50: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80207B54: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80207B58: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80207B5C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80207B60: jal         0x80234D30
    // 0x80207B64: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    static_3_80234D30(rdram, ctx);
        goto after_0;
    // 0x80207B64: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80207B68: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80207B6C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80207B70: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207B74: lwc1        $f16, 0x8($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207B78: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80207B7C: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80207B80: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80207B84: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80207B88: div.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80207B8C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80207B90: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80207B94: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
    // 0x80207B98: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80207B9C: lwc1        $f18, 0x4($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80207BA0: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80207BA4: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80207BA8: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x80207BAC: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80207BB0: lwc1        $f10, 0x8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80207BB4: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80207BB8: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80207BBC: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
    // 0x80207BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207BC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80207BC8: jr          $ra
    // 0x80207BCC: nop

    return;
    // 0x80207BCC: nop

;}
RECOMP_FUNC void D_80228844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228844: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80228848: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8022884C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80228850: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x80228854: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80228858: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022885C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80228860: swc1        $f12, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f12.u32l;
    // 0x80228864: swc1        $f12, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f12.u32l;
    // 0x80228868: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x8022886C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80228870: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80228874: blezl       $v1, L_802288E0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80228878: lwc1        $f8, 0x0($a2)
        ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
            goto L_802288E0;
    }
    goto skip_0;
    // 0x80228878: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x8022887C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80228880: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80228884: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
L_80228888:
    // 0x80228888: addu        $a0, $t6, $a1
    ctx->r4 = ADD32(ctx->r14, ctx->r5);
    // 0x8022888C: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x80228890: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228894: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80228898: beq         $t7, $zero, L_802288D4
    if (ctx->r15 == 0) {
        // 0x8022889C: nop
    
            goto L_802288D4;
    }
    // 0x8022889C: nop

    // 0x802288A0: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x802288A4: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x802288A8: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x802288AC: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x802288B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802288B4: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x802288B8: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802288BC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802288C0: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x802288C4: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x802288C8: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x802288CC: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    // 0x802288D0: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
L_802288D4:
    // 0x802288D4: bnel        $at, $zero, L_80228888
    if (ctx->r1 != 0) {
        // 0x802288D8: sll         $t6, $v0, 5
        ctx->r14 = S32(ctx->r2 << 5);
            goto L_80228888;
    }
    goto skip_1;
    // 0x802288D8: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    skip_1:
    // 0x802288DC: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
L_802288E0:
    // 0x802288E0: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x802288E4: div.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x802288E8: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802288EC: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x802288F0: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802288F4: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x802288F8: jr          $ra
    // 0x802288FC: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    return;
    // 0x802288FC: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
;}
RECOMP_FUNC void D_8023F990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023F994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F998: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023F99C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8023F9A0: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023F9A4: beql        $t6, $zero, L_8023FA08
    if (ctx->r14 == 0) {
        // 0x8023F9A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023FA08;
    }
    goto skip_0;
    // 0x8023F9A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F9AC: jal         0x80237840
    // 0x8023F9B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80237840(rdram, ctx);
        goto after_0;
    // 0x8023F9B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023F9B4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F9B8: beq         $v0, $zero, L_8023FA04
    if (ctx->r2 == 0) {
        // 0x8023F9BC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023FA04;
    }
    // 0x8023F9BC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F9C0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023F9C4: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8023F9C8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x8023F9CC: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8023F9D0: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8023F9D4: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8023F9D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F9DC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8023F9E0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023F9E4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8023F9E8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023F9EC: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x8023F9F0: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x8023F9F4: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8023F9F8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F9FC: jalr        $t9
    // 0x8023FA00: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023FA00: nop

    after_1:
L_8023FA04:
    // 0x8023FA04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023FA08:
    // 0x8023FA08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023FA0C: jr          $ra
    // 0x8023FA10: nop

    return;
    // 0x8023FA10: nop

;}
RECOMP_FUNC void D_802F05C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0640: jr          $ra
    // 0x802F0644: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802F0644: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802E0CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0D2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E0D30: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E0D34: jr          $ra
    // 0x802E0D38: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E0D38: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802EBD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EBE04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EBE08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EBE0C: beq         $a0, $zero, L_802EBE48
    if (ctx->r4 == 0) {
        // 0x802EBE10: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EBE48;
    }
    // 0x802EBE10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EBE14: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802EBE18: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802EBE1C: sw          $t6, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r14;
    // 0x802EBE20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802EBE24: jal         0x8031A684
    // 0x802EBE28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031A684(rdram, ctx);
        goto after_0;
    // 0x802EBE28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802EBE2C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802EBE30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EBE34: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802EBE38: beql        $t8, $zero, L_802EBE4C
    if (ctx->r24 == 0) {
        // 0x802EBE3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EBE4C;
    }
    goto skip_0;
    // 0x802EBE3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EBE40: jal         0x802C681C
    // 0x802EBE44: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EBE44: nop

    after_1:
L_802EBE48:
    // 0x802EBE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EBE4C:
    // 0x802EBE4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EBE50: jr          $ra
    // 0x802EBE54: nop

    return;
    // 0x802EBE54: nop

;}
RECOMP_FUNC void D_802E1D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1D80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802E1D84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E1D88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E1D8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E1D90: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802E1D94: jal         0x802AEDEC
    // 0x802E1D98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_0;
    // 0x802E1D98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802E1D9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E1DA0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x802E1DA4: jal         0x802BCF2C
    // 0x802E1DA8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    static_3_802BCF2C(rdram, ctx);
        goto after_1;
    // 0x802E1DA8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x802E1DAC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802E1DB0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x802E1DB4: ori         $at, $at, 0x7FE7
    ctx->r1 = ctx->r1 | 0X7FE7;
    // 0x802E1DB8: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x802E1DBC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x802E1DC0: jal         0x802BCF20
    // 0x802E1DC4: sw          $t7, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r15;
    static_3_802BCF20(rdram, ctx);
        goto after_2;
    // 0x802E1DC4: sw          $t7, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r15;
    after_2:
    // 0x802E1DC8: addiu       $a2, $s0, 0x70
    ctx->r6 = ADD32(ctx->r16, 0X70);
    // 0x802E1DCC: lw          $a1, 0x3F8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3F8);
    // 0x802E1DD0: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x802E1DD4: jal         0x80311BF0
    // 0x802E1DD8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_3_80311BF0(rdram, ctx);
        goto after_3;
    // 0x802E1DD8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x802E1DDC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802E1DE0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E1DE4: jal         0x802AA498
    // 0x802E1DE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802AA498(rdram, ctx);
        goto after_4;
    // 0x802E1DE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802E1DEC: sh          $zero, 0x400($s0)
    MEM_H(0X400, ctx->r16) = 0;
    // 0x802E1DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802E1DF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E1DF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802E1DFC: jr          $ra
    // 0x802E1E00: nop

    return;
    // 0x802E1E00: nop

;}
RECOMP_FUNC void D_80294A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80294AC4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80294AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80294ACC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80294AD0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80294AD4: addiu       $a1, $a3, 0x8
    ctx->r5 = ADD32(ctx->r7, 0X8);
    // 0x80294AD8: jal         0x802297A8
    // 0x80294ADC: addiu       $a2, $a3, 0x48
    ctx->r6 = ADD32(ctx->r7, 0X48);
    static_3_802297A8(rdram, ctx);
        goto after_0;
    // 0x80294ADC: addiu       $a2, $a3, 0x48
    ctx->r6 = ADD32(ctx->r7, 0X48);
    after_0:
    // 0x80294AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80294AE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80294AE8: jr          $ra
    // 0x80294AEC: nop

    return;
    // 0x80294AEC: nop

;}
RECOMP_FUNC void D_802E7F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E8014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E8018: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x802E801C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E8020: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E8024: bne         $a1, $zero, L_802E804C
    if (ctx->r5 != 0) {
        // 0x802E8028: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E804C;
    }
    // 0x802E8028: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E802C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E8030: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E8034: jal         0x80231A24
    // 0x802E8038: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E8038: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E803C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E8040: addiu       $t6, $zero, 0x29A
    ctx->r14 = ADD32(0, 0X29A);
    // 0x802E8044: sw          $t6, 0x0($zero)
    MEM_W(0X0, 0) = ctx->r14;
    // 0x802E8048: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
L_802E804C:
    // 0x802E804C: jal         0x802D2680
    // 0x802E8050: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    static_3_802D2680(rdram, ctx);
        goto after_1;
    // 0x802E8050: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x802E8054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E8058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E805C: jr          $ra
    // 0x802E8060: nop

    return;
    // 0x802E8060: nop

;}
RECOMP_FUNC void D_802B4D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B4DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B4DFC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802B4E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B4E04: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4E08: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B4E0C: jal         0x802AB65C
    // 0x802B4E10: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_802AB65C(rdram, ctx);
        goto after_0;
    // 0x802B4E10: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x802B4E14: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802B4E18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B4E1C: beq         $v0, $zero, L_802B4E28
    if (ctx->r2 == 0) {
        // 0x802B4E20: sw          $v0, 0x770($a1)
        MEM_W(0X770, ctx->r5) = ctx->r2;
            goto L_802B4E28;
    }
    // 0x802B4E20: sw          $v0, 0x770($a1)
    MEM_W(0X770, ctx->r5) = ctx->r2;
    // 0x802B4E24: sw          $a1, 0x1C0($v0)
    MEM_W(0X1C0, ctx->r2) = ctx->r5;
L_802B4E28:
    // 0x802B4E28: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B4E2C: jal         0x802AB65C
    // 0x802B4E30: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_802AB65C(rdram, ctx);
        goto after_1;
    // 0x802B4E30: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802B4E34: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802B4E38: beq         $v0, $zero, L_802B4E44
    if (ctx->r2 == 0) {
        // 0x802B4E3C: sw          $v0, 0x774($a1)
        MEM_W(0X774, ctx->r5) = ctx->r2;
            goto L_802B4E44;
    }
    // 0x802B4E3C: sw          $v0, 0x774($a1)
    MEM_W(0X774, ctx->r5) = ctx->r2;
    // 0x802B4E40: sw          $a1, 0x1C0($v0)
    MEM_W(0X1C0, ctx->r2) = ctx->r5;
L_802B4E44:
    // 0x802B4E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B4E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B4E4C: jr          $ra
    // 0x802B4E50: nop

    return;
    // 0x802B4E50: nop

;}
