#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802995F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80299670: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80299674: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80299678: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8029967C: jal         0x8030A148
    // 0x80299680: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    static_3_8030A148(rdram, ctx);
        goto after_0;
    // 0x80299680: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80299684: bgtz        $v0, L_80299690
    if (SIGNED(ctx->r2) > 0) {
        // 0x80299688: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80299690;
    }
    // 0x80299688: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8029968C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80299690:
    // 0x80299690: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x80299694: bne         $at, $zero, L_802996A0
    if (ctx->r1 != 0) {
        // 0x80299698: addiu       $t6, $zero, 0x5
        ctx->r14 = ADD32(0, 0X5);
            goto L_802996A0;
    }
    // 0x80299698: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8029969C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_802996A0:
    // 0x802996A0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802996A4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802996A8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802996AC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802996B0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802996B4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802996B8: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x802996BC: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x802996C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802996C4: sb          $t6, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r14;
    // 0x802996C8: sb          $v1, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r3;
    // 0x802996CC: sb          $zero, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = 0;
    // 0x802996D0: sw          $t7, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r15;
    // 0x802996D4: sw          $t8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r24;
    // 0x802996D8: sw          $t9, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r25;
    // 0x802996DC: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x802996E0: beq         $a0, $at, L_802996F8
    if (ctx->r4 == ctx->r1) {
        // 0x802996E4: sb          $t1, 0x32($s0)
        MEM_B(0X32, ctx->r16) = ctx->r9;
            goto L_802996F8;
    }
    // 0x802996E4: sb          $t1, 0x32($s0)
    MEM_B(0X32, ctx->r16) = ctx->r9;
    // 0x802996E8: jal         0x80233D58
    // 0x802996EC: nop

    static_3_80233D58(rdram, ctx);
        goto after_1;
    // 0x802996EC: nop

    after_1:
    // 0x802996F0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x802996F4: sw          $t2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r10;
L_802996F8:
    // 0x802996F8: jal         0x80233CE8
    // 0x802996FC: nop

    static_3_80233CE8(rdram, ctx);
        goto after_2;
    // 0x802996FC: nop

    after_2:
    // 0x80299700: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80299704: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x80299708: addiu       $t4, $zero, 0xE0
    ctx->r12 = ADD32(0, 0XE0);
    // 0x8029970C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80299710: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80299714: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80299718: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029971C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80299720: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x80299724: jal         0x802344F4
    // 0x80299728: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    static_3_802344F4(rdram, ctx);
        goto after_3;
    // 0x80299728: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_3:
    // 0x8029972C: jal         0x80224CA8
    // 0x80299730: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x80299730: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x80299734: jal         0x80224CA8
    // 0x80299738: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x80299738: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_5:
    // 0x8029973C: jal         0x80224CA8
    // 0x80299740: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x80299740: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_6:
    // 0x80299744: jal         0x80224CA8
    // 0x80299748: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    static_3_80224CA8(rdram, ctx);
        goto after_7;
    // 0x80299748: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    after_7:
    // 0x8029974C: jal         0x8021BA90
    // 0x80299750: nop

    func_8021BA90(rdram, ctx);
        goto after_8;
    // 0x80299750: nop

    after_8:
    // 0x80299754: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80299758: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029975C: jal         0x8021ACB0
    // 0x80299760: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    static_3_8021ACB0(rdram, ctx);
        goto after_9;
    // 0x80299760: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_9:
    // 0x80299764: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x80299768: jal         0x8021B838
    // 0x8029976C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B838(rdram, ctx);
        goto after_10;
    // 0x8029976C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80299770: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80299774: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80299778: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8029977C: jal         0x8022970C
    // 0x80299780: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_11;
    // 0x80299780: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    after_11:
    // 0x80299784: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80299788: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8029978C: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x80299790: jal         0x8022A0D0
    // 0x80299794: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    static_3_8022A0D0(rdram, ctx);
        goto after_12;
    // 0x80299794: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    after_12:
    // 0x80299798: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8029979C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802997A0: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802997A4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x802997A8: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802997AC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802997B0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802997B4: jal         0x802D01D4
    // 0x802997B8: nop

    static_3_802D01D4(rdram, ctx);
        goto after_13;
    // 0x802997B8: nop

    after_13:
    // 0x802997BC: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    // 0x802997C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802997C4: jal         0x8021B4B0
    // 0x802997C8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    static_3_8021B4B0(rdram, ctx);
        goto after_14;
    // 0x802997C8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_14:
    // 0x802997CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802997D0: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802997D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802997D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802997DC: jal         0x80309B88
    // 0x802997E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309B88(rdram, ctx);
        goto after_15;
    // 0x802997E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x802997E4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802997E8: sb          $t5, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r13;
    // 0x802997EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802997F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802997F4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802997F8: jr          $ra
    // 0x802997FC: nop

    return;
    // 0x802997FC: nop

;}
RECOMP_FUNC void D_802D9B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9C18: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D9C1C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802D9C20: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x802D9C24: beq         $t6, $zero, L_802D9C34
    if (ctx->r14 == 0) {
        // 0x802D9C28: andi        $t7, $v0, 0x40
        ctx->r15 = ctx->r2 & 0X40;
            goto L_802D9C34;
    }
    // 0x802D9C28: andi        $t7, $v0, 0x40
    ctx->r15 = ctx->r2 & 0X40;
    // 0x802D9C2C: jr          $ra
    // 0x802D9C30: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x802D9C30: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_802D9C34:
    // 0x802D9C34: beq         $t7, $zero, L_802D9C44
    if (ctx->r15 == 0) {
        // 0x802D9C38: andi        $t8, $v0, 0x20
        ctx->r24 = ctx->r2 & 0X20;
            goto L_802D9C44;
    }
    // 0x802D9C38: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x802D9C3C: jr          $ra
    // 0x802D9C40: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x802D9C40: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_802D9C44:
    // 0x802D9C44: beq         $t8, $zero, L_802D9C54
    if (ctx->r24 == 0) {
        // 0x802D9C48: andi        $t9, $v0, 0x200
        ctx->r25 = ctx->r2 & 0X200;
            goto L_802D9C54;
    }
    // 0x802D9C48: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    // 0x802D9C4C: jr          $ra
    // 0x802D9C50: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x802D9C50: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802D9C54:
    // 0x802D9C54: beq         $t9, $zero, L_802D9C64
    if (ctx->r25 == 0) {
        // 0x802D9C58: andi        $t0, $v0, 0x10
        ctx->r8 = ctx->r2 & 0X10;
            goto L_802D9C64;
    }
    // 0x802D9C58: andi        $t0, $v0, 0x10
    ctx->r8 = ctx->r2 & 0X10;
    // 0x802D9C5C: jr          $ra
    // 0x802D9C60: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    return;
    // 0x802D9C60: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802D9C64:
    // 0x802D9C64: beq         $t0, $zero, L_802D9C74
    if (ctx->r8 == 0) {
        // 0x802D9C68: andi        $t1, $v0, 0x100
        ctx->r9 = ctx->r2 & 0X100;
            goto L_802D9C74;
    }
    // 0x802D9C68: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
    // 0x802D9C6C: jr          $ra
    // 0x802D9C70: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x802D9C70: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802D9C74:
    // 0x802D9C74: beq         $t1, $zero, L_802D9C84
    if (ctx->r9 == 0) {
        // 0x802D9C78: andi        $t2, $v0, 0x8
        ctx->r10 = ctx->r2 & 0X8;
            goto L_802D9C84;
    }
    // 0x802D9C78: andi        $t2, $v0, 0x8
    ctx->r10 = ctx->r2 & 0X8;
    // 0x802D9C7C: jr          $ra
    // 0x802D9C80: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x802D9C80: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802D9C84:
    // 0x802D9C84: beq         $t2, $zero, L_802D9C94
    if (ctx->r10 == 0) {
        // 0x802D9C88: andi        $t3, $v0, 0x4
        ctx->r11 = ctx->r2 & 0X4;
            goto L_802D9C94;
    }
    // 0x802D9C88: andi        $t3, $v0, 0x4
    ctx->r11 = ctx->r2 & 0X4;
    // 0x802D9C8C: jr          $ra
    // 0x802D9C90: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x802D9C90: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802D9C94:
    // 0x802D9C94: beq         $t3, $zero, L_802D9CA4
    if (ctx->r11 == 0) {
        // 0x802D9C98: andi        $t4, $v0, 0x80
        ctx->r12 = ctx->r2 & 0X80;
            goto L_802D9CA4;
    }
    // 0x802D9C98: andi        $t4, $v0, 0x80
    ctx->r12 = ctx->r2 & 0X80;
    // 0x802D9C9C: jr          $ra
    // 0x802D9CA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x802D9CA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802D9CA4:
    // 0x802D9CA4: beq         $t4, $zero, L_802D9CB4
    if (ctx->r12 == 0) {
        // 0x802D9CA8: andi        $t5, $v0, 0x2
        ctx->r13 = ctx->r2 & 0X2;
            goto L_802D9CB4;
    }
    // 0x802D9CA8: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x802D9CAC: jr          $ra
    // 0x802D9CB0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    return;
    // 0x802D9CB0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_802D9CB4:
    // 0x802D9CB4: beq         $t5, $zero, L_802D9CC4
    if (ctx->r13 == 0) {
        // 0x802D9CB8: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_802D9CC4;
    }
    // 0x802D9CB8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x802D9CBC: jr          $ra
    // 0x802D9CC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x802D9CC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802D9CC4:
    // 0x802D9CC4: beq         $t6, $zero, L_802D9CD4
    if (ctx->r14 == 0) {
        // 0x802D9CC8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802D9CD4;
    }
    // 0x802D9CC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D9CCC: jr          $ra
    // 0x802D9CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D9CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D9CD4:
    // 0x802D9CD4: jr          $ra
    // 0x802D9CD8: nop

    return;
    // 0x802D9CD8: nop

;}
RECOMP_FUNC void D_802331D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802331D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802331D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802331DC: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802331E0: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x802331E4: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    // 0x802331E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802331EC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x802331F0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x802331F4: jal         0x8022BA58
    // 0x802331F8: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x802331F8: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    after_0:
    // 0x802331FC: lhu         $a2, 0x34($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X34);
    // 0x80233200: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80233204: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80233208: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x8023320C: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x80233210: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80233214: sll         $a2, $t7, 2
    ctx->r6 = S32(ctx->r15 << 2);
    // 0x80233218: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8023321C: jal         0x8022B780
    // 0x80233220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_1;
    // 0x80233220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80233224: lhu         $t8, 0x34($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X34);
    // 0x80233228: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8023322C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80233230: blez        $t8, L_8023328C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80233234: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8023328C;
    }
    // 0x80233234: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80233238: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8023323C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80233240: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
L_80233244:
    // 0x80233244: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233248: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x8023324C: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
    // 0x80233250: sb          $zero, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = 0;
    // 0x80233254: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x80233258: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x8023325C: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80233260: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80233264: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x80233268: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8023326C: sb          $zero, 0x18($v0)
    MEM_B(0X18, ctx->r2) = 0;
    // 0x80233270: sb          $zero, 0x19($v0)
    MEM_B(0X19, ctx->r2) = 0;
    // 0x80233274: lhu         $t0, 0x34($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X34);
    // 0x80233278: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    // 0x8023327C: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80233280: bnel        $at, $zero, L_80233244
    if (ctx->r1 != 0) {
        // 0x80233284: lw          $t9, 0x0($a3)
        ctx->r25 = MEM_W(ctx->r7, 0X0);
            goto L_80233244;
    }
    goto skip_0;
    // 0x80233284: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x80233288: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8023328C:
    // 0x8023328C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80233290: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80233294: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x80233298: bne         $t1, $zero, L_802332C4
    if (ctx->r9 != 0) {
        // 0x8023329C: nop
    
            goto L_802332C4;
    }
    // 0x8023329C: nop

    // 0x802332A0: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x802332A4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x802332A8: sll         $t2, $a0, 1
    ctx->r10 = S32(ctx->r4 << 1);
    // 0x802332AC: jal         0x8022BA58
    // 0x802332B0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_2;
    // 0x802332B0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_2:
    // 0x802332B4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802332B8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802332BC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x802332C0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_802332C4:
    // 0x802332C4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802332C8: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x802332CC: bnel        $t3, $zero, L_802332FC
    if (ctx->r11 != 0) {
        // 0x802332D0: lhu         $t6, 0x16($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X16);
            goto L_802332FC;
    }
    goto skip_1;
    // 0x802332D0: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    skip_1:
    // 0x802332D4: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x802332D8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x802332DC: jal         0x8022BA58
    // 0x802332E0: sll         $a0, $t4, 3
    ctx->r4 = S32(ctx->r12 << 3);
    static_3_8022BA58(rdram, ctx);
        goto after_3;
    // 0x802332E0: sll         $a0, $t4, 3
    ctx->r4 = S32(ctx->r12 << 3);
    after_3:
    // 0x802332E4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802332E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802332EC: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x802332F0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802332F4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x802332F8: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
L_802332FC:
    // 0x802332FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80233300: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80233304: blez        $t6, L_80233330
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80233308: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80233330;
    }
    // 0x80233308: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8023330C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
L_80233310:
    // 0x80233310: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233314: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80233318: sh          $a0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r4;
    // 0x8023331C: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x80233320: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80233324: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80233328: bnel        $at, $zero, L_80233310
    if (ctx->r1 != 0) {
        // 0x8023332C: lw          $t7, 0x0($a1)
        ctx->r15 = MEM_W(ctx->r5, 0X0);
            goto L_80233310;
    }
    goto skip_2;
    // 0x8023332C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    skip_2:
L_80233330:
    // 0x80233330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233334: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80233338: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8023333C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80233340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233344: sb          $t0, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r8;
    // 0x80233348: jr          $ra
    // 0x8023334C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023334C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802CFF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CFFD0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CFFD4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CFFD8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802CFFDC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CFFE0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CFFE4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802CFFE8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802CFFEC: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x802CFFF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802CFFF4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802CFFF8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802CFFFC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802D0000: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802D0004: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D0008: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D000C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D0010: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802D0014: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802D0018: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802D001C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802D0020: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802D0024: jal         0x80308530
    // 0x802D0028: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_0;
    // 0x802D0028: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x802D002C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0030: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0034: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0038: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D003C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0040: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0044: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x802D0048: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D004C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802D0050: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802D0054: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802D0058: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D005C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802D0060: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802D0064: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D0068: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D006C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802D0070: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802D0074: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802D0078: jal         0x80308530
    // 0x802D007C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_1;
    // 0x802D007C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802D0080: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0084: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0088: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D008C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0090: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0094: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0098: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x802D009C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D00A0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802D00A4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802D00A8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802D00AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802D00B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802D00B4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802D00B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D00BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D00C0: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x802D00C4: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x802D00C8: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802D00CC: jal         0x80308530
    // 0x802D00D0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    static_3_80308530(rdram, ctx);
        goto after_2;
    // 0x802D00D0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802D00D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D00D8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D00DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D00E0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D00E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D00E8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D00EC: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x802D00F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D00F4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802D00F8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802D00FC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802D0100: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802D0104: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802D0108: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802D010C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802D0110: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D0114: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802D0118: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802D011C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802D0120: jal         0x80308530
    // 0x802D0124: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_3;
    // 0x802D0124: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x802D0128: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802D012C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802D0130: jr          $ra
    // 0x802D0134: nop

    return;
    // 0x802D0134: nop

;}
RECOMP_FUNC void D_802A37BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A383C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A3840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A3844: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A3848: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A384C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x802A3850: jal         0x8022970C
    // 0x802A3854: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802A3854: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    after_0:
    // 0x802A3858: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802A385C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A3860: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x802A3864: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802A3868: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x802A386C: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x802A3870: swc1        $f0, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f0.u32l;
    // 0x802A3874: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x802A3878: sb          $zero, 0x100($a2)
    MEM_B(0X100, ctx->r6) = 0;
    // 0x802A387C: sw          $zero, 0xDC($a2)
    MEM_W(0XDC, ctx->r6) = 0;
    // 0x802A3880: sw          $zero, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = 0;
    // 0x802A3884: sw          $zero, 0xFC($a2)
    MEM_W(0XFC, ctx->r6) = 0;
    // 0x802A3888: swc1        $f0, 0x104($a2)
    MEM_W(0X104, ctx->r6) = ctx->f0.u32l;
    // 0x802A388C: swc1        $f0, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = ctx->f0.u32l;
    // 0x802A3890: swc1        $f0, 0x110($a2)
    MEM_W(0X110, ctx->r6) = ctx->f0.u32l;
    // 0x802A3894: swc1        $f2, 0xF0($a2)
    MEM_W(0XF0, ctx->r6) = ctx->f2.u32l;
    // 0x802A3898: swc1        $f2, 0xF4($a2)
    MEM_W(0XF4, ctx->r6) = ctx->f2.u32l;
    // 0x802A389C: swc1        $f2, 0xF8($a2)
    MEM_W(0XF8, ctx->r6) = ctx->f2.u32l;
    // 0x802A38A0: sb          $t6, 0x1C($a2)
    MEM_B(0X1C, ctx->r6) = ctx->r14;
    // 0x802A38A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A38A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A38AC: jr          $ra
    // 0x802A38B0: nop

    return;
    // 0x802A38B0: nop

;}
RECOMP_FUNC void D_80244830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244830: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80244834: beq         $a1, $at, L_80244850
    if (ctx->r5 == ctx->r1) {
        // 0x80244838: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80244850;
    }
    // 0x80244838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024483C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80244840: beql        $a1, $at, L_8024485C
    if (ctx->r5 == ctx->r1) {
        // 0x80244844: sw          $a2, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r6;
            goto L_8024485C;
    }
    goto skip_0;
    // 0x80244844: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    skip_0:
    // 0x80244848: jr          $ra
    // 0x8024484C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8024484C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80244850:
    // 0x80244850: jr          $ra
    // 0x80244854: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    return;
    // 0x80244854: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x80244858: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
L_8024485C:
    // 0x8024485C: jr          $ra
    // 0x80244860: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80244860: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_80201830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201830: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201834: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201838: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x8020183C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201840: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201848: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8020184C: bne         $at, $zero, L_80201884
    if (ctx->r1 != 0) {
        // 0x80201850: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_80201884;
    }
    // 0x80201850: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x80201854: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201858: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8020185C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201860: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201864: addiu       $a2, $zero, 0x184
    ctx->r6 = ADD32(0, 0X184);
    // 0x80201868: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8020186C: jal         0x80231C9C
    // 0x80201870: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201870: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    after_0:
    // 0x80201874: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201878: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8020187C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80201880: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
L_80201884:
    // 0x80201884: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201888: bne         $at, $zero, L_8020189C
    if (ctx->r1 != 0) {
        // 0x8020188C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8020189C;
    }
    // 0x8020188C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201890: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80201894: b           L_802018C8
    // 0x80201898: nop

        goto L_802018C8;
    // 0x80201898: nop

L_8020189C:
    // 0x8020189C: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x802018A0: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x802018A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802018A8: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x802018AC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802018B0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802018B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802018B8: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x802018BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802018C0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802018C4: lwc1        $f0, 0x70($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X70);
L_802018C8:
    // 0x802018C8: jr          $ra
    // 0x802018CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802018CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8028CF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028CFB0: addiu       $sp, $sp, -0x350
    ctx->r29 = ADD32(ctx->r29, -0X350);
    // 0x8028CFB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8028CFB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028CFBC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028CFC0: sw          $a1, 0x354($sp)
    MEM_W(0X354, ctx->r29) = ctx->r5;
    // 0x8028CFC4: sw          $a2, 0x358($sp)
    MEM_W(0X358, ctx->r29) = ctx->r6;
    // 0x8028CFC8: sw          $a3, 0x35C($sp)
    MEM_W(0X35C, ctx->r29) = ctx->r7;
    // 0x8028CFCC: jal         0x802AEDDC
    // 0x8028CFD0: lw          $a0, 0x2E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2E8);
    static_3_802AEDDC(rdram, ctx);
        goto after_0;
    // 0x8028CFD0: lw          $a0, 0x2E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2E8);
    after_0:
    // 0x8028CFD4: swc1        $f0, 0x34C($sp)
    MEM_W(0X34C, ctx->r29) = ctx->f0.u32l;
    // 0x8028CFD8: jal         0x802AED90
    // 0x8028CFDC: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    static_3_802AED90(rdram, ctx);
        goto after_1;
    // 0x8028CFDC: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    after_1:
    // 0x8028CFE0: swc1        $f0, 0x348($sp)
    MEM_W(0X348, ctx->r29) = ctx->f0.u32l;
    // 0x8028CFE4: lbu         $t6, 0xF1C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XF1C);
    // 0x8028CFE8: bnel        $t6, $zero, L_8028E430
    if (ctx->r14 != 0) {
        // 0x8028CFEC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8028E430;
    }
    goto skip_0;
    // 0x8028CFEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8028CFF0: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028CFF4: addiu       $a1, $sp, 0x2E4
    ctx->r5 = ADD32(ctx->r29, 0X2E4);
    // 0x8028CFF8: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028CFFC: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x8028D000: jalr        $t9
    // 0x8028D004: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8028D004: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_2:
    // 0x8028D008: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028D00C: addiu       $a1, $sp, 0x2A0
    ctx->r5 = ADD32(ctx->r29, 0X2A0);
    // 0x8028D010: addiu       $a2, $sp, 0x29C
    ctx->r6 = ADD32(ctx->r29, 0X29C);
    // 0x8028D014: jal         0x802CF0BC
    // 0x8028D018: addiu       $a3, $sp, 0x298
    ctx->r7 = ADD32(ctx->r29, 0X298);
    static_3_802CF0BC(rdram, ctx);
        goto after_3;
    // 0x8028D018: addiu       $a3, $sp, 0x298
    ctx->r7 = ADD32(ctx->r29, 0X298);
    after_3:
    // 0x8028D01C: lwc1        $f16, 0x31C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X31C);
    // 0x8028D020: lwc1        $f18, 0x298($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X298);
    // 0x8028D024: lwc1        $f4, 0x314($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X314);
    // 0x8028D028: lwc1        $f6, 0x2A0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2A0);
    // 0x8028D02C: lwc1        $f8, 0x318($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X318);
    // 0x8028D030: lwc1        $f10, 0x29C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X29C);
    // 0x8028D034: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8028D038: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8028D03C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8028D040: swc1        $f0, 0x338($sp)
    MEM_W(0X338, ctx->r29) = ctx->f0.u32l;
    // 0x8028D044: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8028D048: swc1        $f12, 0x340($sp)
    MEM_W(0X340, ctx->r29) = ctx->f12.u32l;
    // 0x8028D04C: jal         0x802D05CC
    // 0x8028D050: swc1        $f14, 0x33C($sp)
    MEM_W(0X33C, ctx->r29) = ctx->f14.u32l;
    static_3_802D05CC(rdram, ctx);
        goto after_4;
    // 0x8028D050: swc1        $f14, 0x33C($sp)
    MEM_W(0X33C, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x8028D054: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8028D058: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028D05C: swc1        $f0, 0x334($sp)
    MEM_W(0X334, ctx->r29) = ctx->f0.u32l;
    // 0x8028D060: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8028D064: nop

    // 0x8028D068: bc1f        L_8028D1A4
    if (!c1cs) {
        // 0x8028D06C: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_8028D1A4;
    }
    // 0x8028D06C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8028D070: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028D074: nop

    // 0x8028D078: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028D07C: nop

    // 0x8028D080: bc1fl       L_8028D1A8
    if (!c1cs) {
        // 0x8028D084: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_8028D1A8;
    }
    goto skip_1;
    // 0x8028D084: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    skip_1:
    // 0x8028D088: jal         0x8022970C
    // 0x8028D08C: addiu       $a0, $sp, 0x2A4
    ctx->r4 = ADD32(ctx->r29, 0X2A4);
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x8028D08C: addiu       $a0, $sp, 0x2A4
    ctx->r4 = ADD32(ctx->r29, 0X2A4);
    after_5:
    // 0x8028D090: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8028D094: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x8028D098: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x8028D09C: lh          $t8, 0x48($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X48);
    // 0x8028D0A0: jalr        $t9
    // 0x8028D0A4: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x8028D0A4: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    after_6:
    // 0x8028D0A8: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x8028D0AC: addiu       $a0, $sp, 0x2A4
    ctx->r4 = ADD32(ctx->r29, 0X2A4);
    // 0x8028D0B0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8028D0B4: jal         0x802D01D4
    // 0x8028D0B8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_7;
    // 0x8028D0B8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_7:
    // 0x8028D0BC: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8028D0C0: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x8028D0C4: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x8028D0C8: lh          $t0, 0x40($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X40);
    // 0x8028D0CC: jalr        $t9
    // 0x8028D0D0: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x8028D0D0: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    after_8:
    // 0x8028D0D4: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x8028D0D8: addiu       $a0, $sp, 0x2A4
    ctx->r4 = ADD32(ctx->r29, 0X2A4);
    // 0x8028D0DC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8028D0E0: jal         0x802D01D4
    // 0x8028D0E4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_9;
    // 0x8028D0E4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_9:
    // 0x8028D0E8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8028D0EC: lwc1        $f2, 0x334($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X334);
    // 0x8028D0F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028D0F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028D0F8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028D0FC: sub.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x8028D100: lwc1        $f6, 0x340($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X340);
    // 0x8028D104: lwc1        $f16, 0x33C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X33C);
    // 0x8028D108: addiu       $a0, $sp, 0x2A4
    ctx->r4 = ADD32(ctx->r29, 0X2A4);
    // 0x8028D10C: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028D110: nop

    // 0x8028D114: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8028D118: lwc1        $f6, 0x338($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X338);
    // 0x8028D11C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8028D120: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8028D124: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8028D128: div.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8028D12C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8028D130: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8028D134: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8028D138: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8028D13C: jal         0x8022A0D0
    // 0x8028D140: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_10;
    // 0x8028D140: nop

    after_10:
    // 0x8028D144: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8028D148: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x8028D14C: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x8028D150: lh          $t1, 0x40($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X40);
    // 0x8028D154: jalr        $t9
    // 0x8028D158: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x8028D158: addu        $a0, $t1, $v1
    ctx->r4 = ADD32(ctx->r9, ctx->r3);
    after_11:
    // 0x8028D15C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8028D160: addiu       $a0, $sp, 0x2A4
    ctx->r4 = ADD32(ctx->r29, 0X2A4);
    // 0x8028D164: jal         0x802D01D4
    // 0x8028D168: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_12;
    // 0x8028D168: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_12:
    // 0x8028D16C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8028D170: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x8028D174: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x8028D178: lh          $t2, 0x48($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X48);
    // 0x8028D17C: jalr        $t9
    // 0x8028D180: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x8028D180: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    after_13:
    // 0x8028D184: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8028D188: addiu       $a0, $sp, 0x2A4
    ctx->r4 = ADD32(ctx->r29, 0X2A4);
    // 0x8028D18C: jal         0x802D01D4
    // 0x8028D190: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_14;
    // 0x8028D190: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_14:
    // 0x8028D194: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D198: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8028D19C: jal         0x8021B4B0
    // 0x8028D1A0: addiu       $a2, $sp, 0x2A4
    ctx->r6 = ADD32(ctx->r29, 0X2A4);
    static_3_8021B4B0(rdram, ctx);
        goto after_15;
    // 0x8028D1A0: addiu       $a2, $sp, 0x2A4
    ctx->r6 = ADD32(ctx->r29, 0X2A4);
    after_15:
L_8028D1A4:
    // 0x8028D1A4: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
L_8028D1A8:
    // 0x8028D1A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028D1AC: lwc1        $f18, 0x334($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X334);
    // 0x8028D1B0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8028D1B4: nop

    // 0x8028D1B8: bc1fl       L_8028D1E4
    if (!c1cs) {
        // 0x8028D1BC: lui         $at, 0x44E1
        ctx->r1 = S32(0X44E1 << 16);
            goto L_8028D1E4;
    }
    goto skip_2;
    // 0x8028D1BC: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    skip_2:
    // 0x8028D1C0: lbu         $t3, 0x28C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X28C);
    // 0x8028D1C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028D1C8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8028D1CC: beql        $t3, $at, L_8028D1E4
    if (ctx->r11 == ctx->r1) {
        // 0x8028D1D0: lui         $at, 0x44E1
        ctx->r1 = S32(0X44E1 << 16);
            goto L_8028D1E4;
    }
    goto skip_3;
    // 0x8028D1D0: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    skip_3:
    // 0x8028D1D4: sb          $t4, 0x28D($s0)
    MEM_B(0X28D, ctx->r16) = ctx->r12;
    // 0x8028D1D8: b           L_8028D214
    // 0x8028D1DC: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
        goto L_8028D214;
    // 0x8028D1DC: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
    // 0x8028D1E0: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
L_8028D1E4:
    // 0x8028D1E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028D1E8: lwc1        $f4, 0x334($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X334);
    // 0x8028D1EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028D1F0: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
    // 0x8028D1F4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028D1F8: nop

    // 0x8028D1FC: bc1fl       L_8028D218
    if (!c1cs) {
        // 0x8028D200: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8028D218;
    }
    goto skip_4;
    // 0x8028D200: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_4:
    // 0x8028D204: bne         $v0, $at, L_8028D214
    if (ctx->r2 != ctx->r1) {
        // 0x8028D208: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_8028D214;
    }
    // 0x8028D208: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028D20C: sb          $t5, 0x28D($s0)
    MEM_B(0X28D, ctx->r16) = ctx->r13;
    // 0x8028D210: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
L_8028D214:
    // 0x8028D214: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_8028D218:
    // 0x8028D218: bnel        $v0, $at, L_8028D270
    if (ctx->r2 != ctx->r1) {
        // 0x8028D21C: lbu         $v0, 0x28D($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28D);
            goto L_8028D270;
    }
    goto skip_5;
    // 0x8028D21C: lbu         $v0, 0x28D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28D);
    skip_5:
    // 0x8028D220: lbu         $t6, 0x28E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X28E);
    // 0x8028D224: lwc1        $f10, 0x348($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028D228: beql        $t6, $zero, L_8028D270
    if (ctx->r14 == 0) {
        // 0x8028D22C: lbu         $v0, 0x28D($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28D);
            goto L_8028D270;
    }
    goto skip_6;
    // 0x8028D22C: lbu         $v0, 0x28D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28D);
    skip_6:
    // 0x8028D230: lwc1        $f8, 0x2A4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x8028D234: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8028D238: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8028D23C: nop

    // 0x8028D240: bc1fl       L_8028D270
    if (!c1cs) {
        // 0x8028D244: lbu         $v0, 0x28D($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28D);
            goto L_8028D270;
    }
    goto skip_7;
    // 0x8028D244: lbu         $v0, 0x28D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28D);
    skip_7:
    // 0x8028D248: sb          $t7, 0x28D($s0)
    MEM_B(0X28D, ctx->r16) = ctx->r15;
    // 0x8028D24C: jal         0x8023499C
    // 0x8028D250: sb          $zero, 0x291($s0)
    MEM_B(0X291, ctx->r16) = 0;
    static_3_8023499C(rdram, ctx);
        goto after_16;
    // 0x8028D250: sb          $zero, 0x291($s0)
    MEM_B(0X291, ctx->r16) = 0;
    after_16:
    // 0x8028D254: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028D258: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028D25C: lwc1        $f4, 0x348($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028D260: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8028D264: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8028D268: swc1        $f6, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->f6.u32l;
    // 0x8028D26C: lbu         $v0, 0x28D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28D);
L_8028D270:
    // 0x8028D270: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028D274: bnel        $v0, $at, L_8028D32C
    if (ctx->r2 != ctx->r1) {
        // 0x8028D278: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8028D32C;
    }
    goto skip_8;
    // 0x8028D278: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_8:
    // 0x8028D27C: lwc1        $f8, 0x2A0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D280: lwc1        $f10, 0x34C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34C);
    // 0x8028D284: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D288: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D28C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8028D290: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8028D294: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028D298: jal         0x8021B240
    // 0x8028D29C: swc1        $f16, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f16.u32l;
    static_3_8021B240(rdram, ctx);
        goto after_17;
    // 0x8028D29C: swc1        $f16, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f16.u32l;
    after_17:
    // 0x8028D2A0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D2A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D2A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8028D2AC: jal         0x8021B240
    // 0x8028D2B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_18;
    // 0x8028D2B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x8028D2B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028D2B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028D2BC: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D2C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8028D2C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028D2C8: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x8028D2CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028D2D0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8028D2D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028D2D8: bc1fl       L_8028D314
    if (!c1cs) {
        // 0x8028D2DC: mfc1        $a2, $f2
        ctx->r6 = (int32_t)ctx->f2.u32l;
            goto L_8028D314;
    }
    goto skip_9;
    // 0x8028D2DC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    skip_9:
    // 0x8028D2E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028D2E4: sb          $zero, 0x28D($s0)
    MEM_B(0X28D, ctx->r16) = 0;
    // 0x8028D2E8: sb          $t8, 0x28C($s0)
    MEM_B(0X28C, ctx->r16) = ctx->r24;
    // 0x8028D2EC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D2F0: jal         0x8021B240
    // 0x8028D2F4: swc1        $f4, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f4.u32l;
    static_3_8021B240(rdram, ctx);
        goto after_19;
    // 0x8028D2F4: swc1        $f4, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f4.u32l;
    after_19:
    // 0x8028D2F8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D2FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028D300: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8028D304: jal         0x8021B240
    // 0x8028D308: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_20;
    // 0x8028D308: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
    // 0x8028D30C: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D310: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_8028D314:
    // 0x8028D314: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D318: jal         0x80200B20
    // 0x8028D31C: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    static_3_80200B20(rdram, ctx);
        goto after_21;
    // 0x8028D31C: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    after_21:
    // 0x8028D320: b           L_8028D6F4
    // 0x8028D324: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
        goto L_8028D6F4;
    // 0x8028D324: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
    // 0x8028D328: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8028D32C:
    // 0x8028D32C: bne         $v0, $at, L_8028D3F4
    if (ctx->r2 != ctx->r1) {
        // 0x8028D330: lwc1        $f8, 0x34C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X34C);
            goto L_8028D3F4;
    }
    // 0x8028D330: lwc1        $f8, 0x34C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34C);
    // 0x8028D334: lwc1        $f6, 0x2A0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D338: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D33C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D340: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8028D344: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8028D348: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028D34C: jal         0x8021B240
    // 0x8028D350: swc1        $f10, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f10.u32l;
    static_3_8021B240(rdram, ctx);
        goto after_22;
    // 0x8028D350: swc1        $f10, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f10.u32l;
    after_22:
    // 0x8028D354: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D358: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D35C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8028D360: jal         0x8021B240
    // 0x8028D364: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_23;
    // 0x8028D364: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_23:
    // 0x8028D368: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D36C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028D370: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8028D374: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8028D378: nop

    // 0x8028D37C: bc1fl       L_8028D3E0
    if (!c1cs) {
        // 0x8028D380: mfc1        $a2, $f2
        ctx->r6 = (int32_t)ctx->f2.u32l;
            goto L_8028D3E0;
    }
    goto skip_10;
    // 0x8028D380: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    skip_10:
    // 0x8028D384: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028D388: sb          $t0, 0x28C($s0)
    MEM_B(0X28C, ctx->r16) = ctx->r8;
    // 0x8028D38C: sb          $zero, 0x28D($s0)
    MEM_B(0X28D, ctx->r16) = 0;
    // 0x8028D390: jal         0x8023499C
    // 0x8028D394: swc1        $f18, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f18.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_24;
    // 0x8028D394: swc1        $f18, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f18.u32l;
    after_24:
    // 0x8028D398: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8028D39C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028D3A0: lwc1        $f8, 0x348($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028D3A4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D3A8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8028D3AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028D3B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8028D3B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028D3B8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8028D3BC: jal         0x8021B240
    // 0x8028D3C0: swc1        $f10, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->f10.u32l;
    static_3_8021B240(rdram, ctx);
        goto after_25;
    // 0x8028D3C0: swc1        $f10, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->f10.u32l;
    after_25:
    // 0x8028D3C4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D3C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028D3CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8028D3D0: jal         0x8021B240
    // 0x8028D3D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_26;
    // 0x8028D3D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_26:
    // 0x8028D3D8: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D3DC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_8028D3E0:
    // 0x8028D3E0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D3E4: jal         0x80200B20
    // 0x8028D3E8: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    static_3_80200B20(rdram, ctx);
        goto after_27;
    // 0x8028D3E8: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    after_27:
    // 0x8028D3EC: b           L_8028D6F4
    // 0x8028D3F0: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
        goto L_8028D6F4;
    // 0x8028D3F0: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
L_8028D3F4:
    // 0x8028D3F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028D3F8: bne         $v0, $at, L_8028D548
    if (ctx->r2 != ctx->r1) {
        // 0x8028D3FC: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8028D548;
    }
    // 0x8028D3FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D400: lbu         $t1, 0x291($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X291);
    // 0x8028D404: lwc1        $f10, 0x34C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34C);
    // 0x8028D408: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8028D40C: beq         $t1, $zero, L_8028D434
    if (ctx->r9 == 0) {
        // 0x8028D410: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8028D434;
    }
    // 0x8028D410: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028D414: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028D418: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028D41C: lwc1        $f16, 0x34C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34C);
    // 0x8028D420: lwc1        $f6, 0x2A0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D424: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8028D428: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8028D42C: b           L_8028D44C
    // 0x8028D430: swc1        $f8, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f8.u32l;
        goto L_8028D44C;
    // 0x8028D430: swc1        $f8, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f8.u32l;
L_8028D434:
    // 0x8028D434: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028D438: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028D43C: lwc1        $f6, 0x2A0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D440: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8028D444: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8028D448: swc1        $f4, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f4.u32l;
L_8028D44C:
    // 0x8028D44C: jal         0x8021B240
    // 0x8028D450: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021B240(rdram, ctx);
        goto after_28;
    // 0x8028D450: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_28:
    // 0x8028D454: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D458: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D45C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8028D460: jal         0x8021B240
    // 0x8028D464: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_29;
    // 0x8028D464: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_29:
    // 0x8028D468: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D46C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D470: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8028D474: jal         0x8021B240
    // 0x8028D478: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_30;
    // 0x8028D478: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_30:
    // 0x8028D47C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D480: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D484: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8028D488: jal         0x8021B240
    // 0x8028D48C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_31;
    // 0x8028D48C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_31:
    // 0x8028D490: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028D494: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028D498: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D49C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028D4A0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x8028D4A4: nop

    // 0x8028D4A8: bc1fl       L_8028D4CC
    if (!c1cs) {
        // 0x8028D4AC: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_8028D4CC;
    }
    goto skip_11;
    // 0x8028D4AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_11:
    // 0x8028D4B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028D4B4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8028D4B8: sb          $t2, 0x291($s0)
    MEM_B(0X291, ctx->r16) = ctx->r10;
    // 0x8028D4BC: swc1        $f10, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f10.u32l;
    // 0x8028D4C0: b           L_8028D530
    // 0x8028D4C4: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
        goto L_8028D530;
    // 0x8028D4C4: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D4C8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_8028D4CC:
    // 0x8028D4CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028D4D0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8028D4D4: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8028D4D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028D4DC: bc1fl       L_8028D534
    if (!c1cs) {
        // 0x8028D4E0: mfc1        $a2, $f2
        ctx->r6 = (int32_t)ctx->f2.u32l;
            goto L_8028D534;
    }
    goto skip_12;
    // 0x8028D4E0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    skip_12:
    // 0x8028D4E4: lbu         $t9, 0x292($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X292);
    // 0x8028D4E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028D4EC: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8028D4F0: beql        $t9, $zero, L_8028D50C
    if (ctx->r25 == 0) {
        // 0x8028D4F4: sb          $zero, 0x28D($s0)
        MEM_B(0X28D, ctx->r16) = 0;
            goto L_8028D50C;
    }
    goto skip_13;
    // 0x8028D4F4: sb          $zero, 0x28D($s0)
    MEM_B(0X28D, ctx->r16) = 0;
    skip_13:
    // 0x8028D4F8: sb          $t3, 0x28D($s0)
    MEM_B(0X28D, ctx->r16) = ctx->r11;
    // 0x8028D4FC: sb          $zero, 0x291($s0)
    MEM_B(0X291, ctx->r16) = 0;
    // 0x8028D500: b           L_8028D50C
    // 0x8028D504: sb          $zero, 0x292($s0)
    MEM_B(0X292, ctx->r16) = 0;
        goto L_8028D50C;
    // 0x8028D504: sb          $zero, 0x292($s0)
    MEM_B(0X292, ctx->r16) = 0;
    // 0x8028D508: sb          $zero, 0x28D($s0)
    MEM_B(0X28D, ctx->r16) = 0;
L_8028D50C:
    // 0x8028D50C: swc1        $f6, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f6.u32l;
    // 0x8028D510: jal         0x8021B240
    // 0x8028D514: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021B240(rdram, ctx);
        goto after_32;
    // 0x8028D514: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_32:
    // 0x8028D518: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D51C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028D520: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8028D524: jal         0x8021B240
    // 0x8028D528: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_33;
    // 0x8028D528: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_33:
    // 0x8028D52C: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
L_8028D530:
    // 0x8028D530: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_8028D534:
    // 0x8028D534: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D538: jal         0x80200B20
    // 0x8028D53C: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    static_3_80200B20(rdram, ctx);
        goto after_34;
    // 0x8028D53C: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    after_34:
    // 0x8028D540: b           L_8028D6F4
    // 0x8028D544: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
        goto L_8028D6F4;
    // 0x8028D544: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
L_8028D548:
    // 0x8028D548: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8028D54C: bne         $v0, $at, L_8028D6F0
    if (ctx->r2 != ctx->r1) {
        // 0x8028D550: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8028D6F0;
    }
    // 0x8028D550: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D554: lbu         $t4, 0x291($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X291);
    // 0x8028D558: lwc1        $f6, 0x348($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028D55C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8028D560: beq         $t4, $zero, L_8028D58C
    if (ctx->r12 == 0) {
        // 0x8028D564: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8028D58C;
    }
    // 0x8028D564: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028D568: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028D56C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028D570: lwc1        $f18, 0x34C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34C);
    // 0x8028D574: lwc1        $f10, 0x2A0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D578: lwc1        $f0, 0x2A8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2A8);
    // 0x8028D57C: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028D580: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8028D584: b           L_8028D5C0
    // 0x8028D588: swc1        $f16, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f16.u32l;
        goto L_8028D5C0;
    // 0x8028D588: swc1        $f16, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f16.u32l;
L_8028D58C:
    // 0x8028D58C: lwc1        $f0, 0x2A8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2A8);
    // 0x8028D590: lwc1        $f18, 0x34C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34C);
    // 0x8028D594: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028D598: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028D59C: nop

    // 0x8028D5A0: bc1fl       L_8028D5C4
    if (!c1cs) {
        // 0x8028D5A4: lwc1        $f6, 0x348($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X348);
            goto L_8028D5C4;
    }
    goto skip_14;
    // 0x8028D5A4: lwc1        $f6, 0x348($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X348);
    skip_14:
    // 0x8028D5A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028D5AC: lwc1        $f8, 0x2A0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D5B0: lwc1        $f0, 0x2A8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2A8);
    // 0x8028D5B4: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028D5B8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8028D5BC: swc1        $f16, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f16.u32l;
L_8028D5C0:
    // 0x8028D5C0: lwc1        $f6, 0x348($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X348);
L_8028D5C4:
    // 0x8028D5C4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028D5C8: nop

    // 0x8028D5CC: bc1f        L_8028D5EC
    if (!c1cs) {
        // 0x8028D5D0: nop
    
            goto L_8028D5EC;
    }
    // 0x8028D5D0: nop

    // 0x8028D5D4: lbu         $t5, 0x293($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X293);
    // 0x8028D5D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028D5DC: beq         $t5, $zero, L_8028D5EC
    if (ctx->r13 == 0) {
        // 0x8028D5E0: nop
    
            goto L_8028D5EC;
    }
    // 0x8028D5E0: nop

    // 0x8028D5E4: sb          $t6, 0x291($s0)
    MEM_B(0X291, ctx->r16) = ctx->r14;
    // 0x8028D5E8: sb          $zero, 0x293($s0)
    MEM_B(0X293, ctx->r16) = 0;
L_8028D5EC:
    // 0x8028D5EC: jal         0x8021B240
    // 0x8028D5F0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021B240(rdram, ctx);
        goto after_35;
    // 0x8028D5F0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_35:
    // 0x8028D5F4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D5F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D5FC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8028D600: jal         0x8021B240
    // 0x8028D604: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_36;
    // 0x8028D604: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_36:
    // 0x8028D608: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D60C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D610: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8028D614: jal         0x8021B240
    // 0x8028D618: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_37;
    // 0x8028D618: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_37:
    // 0x8028D61C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D620: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028D624: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8028D628: jal         0x8021B240
    // 0x8028D62C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_38;
    // 0x8028D62C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_38:
    // 0x8028D630: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028D634: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028D638: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D63C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8028D640: nop

    // 0x8028D644: bc1fl       L_8028D68C
    if (!c1cs) {
        // 0x8028D648: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_8028D68C;
    }
    goto skip_15;
    // 0x8028D648: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_15:
    // 0x8028D64C: jal         0x8023499C
    // 0x8028D650: swc1        $f0, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f0.u32l;
    static_3_8023499C(rdram, ctx);
        goto after_39;
    // 0x8028D650: swc1        $f0, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f0.u32l;
    after_39:
    // 0x8028D654: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028D658: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028D65C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8028D660: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028D664: lwc1        $f18, 0x348($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028D668: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028D66C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8028D670: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8028D674: sb          $t7, 0x293($s0)
    MEM_B(0X293, ctx->r16) = ctx->r15;
    // 0x8028D678: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
    // 0x8028D67C: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8028D680: b           L_8028D6D0
    // 0x8028D684: swc1        $f6, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->f6.u32l;
        goto L_8028D6D0;
    // 0x8028D684: swc1        $f6, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->f6.u32l;
    // 0x8028D688: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_8028D68C:
    // 0x8028D68C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028D690: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8028D694: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x8028D698: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028D69C: bc1fl       L_8028D6D4
    if (!c1cs) {
        // 0x8028D6A0: mfc1        $a2, $f2
        ctx->r6 = (int32_t)ctx->f2.u32l;
            goto L_8028D6D4;
    }
    goto skip_16;
    // 0x8028D6A0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    skip_16:
    // 0x8028D6A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028D6A8: sb          $zero, 0x28D($s0)
    MEM_B(0X28D, ctx->r16) = 0;
    // 0x8028D6AC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D6B0: jal         0x8021B240
    // 0x8028D6B4: swc1        $f4, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f4.u32l;
    static_3_8021B240(rdram, ctx);
        goto after_40;
    // 0x8028D6B4: swc1        $f4, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->f4.u32l;
    after_40:
    // 0x8028D6B8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D6BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028D6C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8028D6C4: jal         0x8021B240
    // 0x8028D6C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_41;
    // 0x8028D6C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_41:
    // 0x8028D6CC: lwc1        $f2, 0x2A0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2A0);
L_8028D6D0:
    // 0x8028D6D0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_8028D6D4:
    // 0x8028D6D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D6D8: jal         0x80200B20
    // 0x8028D6DC: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    static_3_80200B20(rdram, ctx);
        goto after_42;
    // 0x8028D6DC: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    after_42:
    // 0x8028D6E0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8028D6E4: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x8028D6E8: jal         0x80200B20
    // 0x8028D6EC: lw          $a2, 0x2A0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2A0);
    static_3_80200B20(rdram, ctx);
        goto after_43;
    // 0x8028D6EC: lw          $a2, 0x2A0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2A0);
    after_43:
L_8028D6F0:
    // 0x8028D6F0: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
L_8028D6F4:
    // 0x8028D6F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028D6F8: bne         $v0, $at, L_8028D808
    if (ctx->r2 != ctx->r1) {
        // 0x8028D6FC: lui         $at, 0x0
        ctx->r1 = S32(0X0 << 16);
            goto L_8028D808;
    }
    // 0x8028D6FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028D700: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028D704: lwc1        $f16, 0x34C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34C);
    // 0x8028D708: lwc1        $f6, 0x298($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X298);
    // 0x8028D70C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028D710: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8028D714: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028D718: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028D71C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8028D720: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8028D724: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8028D728: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8028D72C: swc1        $f18, 0x298($s0)
    MEM_W(0X298, ctx->r16) = ctx->f18.u32l;
    // 0x8028D730: lwc1        $f0, 0x298($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X298);
    // 0x8028D734: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8028D738: nop

    // 0x8028D73C: bc1f        L_8028D778
    if (!c1cs) {
        // 0x8028D740: nop
    
            goto L_8028D778;
    }
    // 0x8028D740: nop

    // 0x8028D744: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028D748: sb          $t8, 0x28F($s0)
    MEM_B(0X28F, ctx->r16) = ctx->r24;
    // 0x8028D74C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028D750: swc1        $f10, 0x298($s0)
    MEM_W(0X298, ctx->r16) = ctx->f10.u32l;
    // 0x8028D754: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8028D758: sb          $t0, 0x28C($s0)
    MEM_B(0X28C, ctx->r16) = ctx->r8;
    // 0x8028D75C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028D760: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028D764: lwc1        $f16, 0x348($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028D768: lwc1        $f0, 0x298($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X298);
    // 0x8028D76C: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8028D770: b           L_8028D7F0
    // 0x8028D774: swc1        $f8, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f8.u32l;
        goto L_8028D7F0;
    // 0x8028D774: swc1        $f8, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f8.u32l;
L_8028D778:
    // 0x8028D778: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x8028D77C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028D780: bnel        $t1, $zero, L_8028D7F4
    if (ctx->r9 != 0) {
        // 0x8028D784: mfc1        $a2, $f0
        ctx->r6 = (int32_t)ctx->f0.u32l;
            goto L_8028D7F4;
    }
    goto skip_17;
    // 0x8028D784: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    skip_17:
    // 0x8028D788: jal         0x802AEE54
    // 0x8028D78C: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    static_3_802AEE54(rdram, ctx);
        goto after_44;
    // 0x8028D78C: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    after_44:
    // 0x8028D790: jal         0x803183D0
    // 0x8028D794: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_45;
    // 0x8028D794: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_45:
    // 0x8028D798: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x8028D79C: addiu       $a1, $sp, 0x250
    ctx->r5 = ADD32(ctx->r29, 0X250);
    // 0x8028D7A0: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x8028D7A4: lh          $t2, 0x10($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X10);
    // 0x8028D7A8: jalr        $t9
    // 0x8028D7AC: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x8028D7AC: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    after_46:
    // 0x8028D7B0: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x8028D7B4: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8028D7B8: jal         0x80305E90
    // 0x8028D7BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_47;
    // 0x8028D7BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_47:
    // 0x8028D7C0: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028D7C4: addiu       $t3, $zero, 0x38
    ctx->r11 = ADD32(0, 0X38);
    // 0x8028D7C8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8028D7CC: addiu       $a1, $s0, 0x2D0
    ctx->r5 = ADD32(ctx->r16, 0X2D0);
    // 0x8028D7D0: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x8028D7D4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8028D7D8: jal         0x80302238
    // 0x8028D7DC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_48;
    // 0x8028D7DC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_48:
    // 0x8028D7E0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8028D7E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028D7E8: sb          $t4, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r12;
    // 0x8028D7EC: lwc1        $f0, 0x298($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X298);
L_8028D7F0:
    // 0x8028D7F0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_8028D7F4:
    // 0x8028D7F4: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028D7F8: jal         0x80200B20
    // 0x8028D7FC: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    static_3_80200B20(rdram, ctx);
        goto after_49;
    // 0x8028D7FC: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_49:
    // 0x8028D800: b           L_8028D990
    // 0x8028D804: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
        goto L_8028D990;
    // 0x8028D804: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_8028D808:
    // 0x8028D808: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028D80C: bne         $v0, $at, L_8028D98C
    if (ctx->r2 != ctx->r1) {
        // 0x8028D810: lwc1        $f4, 0x34C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X34C);
            goto L_8028D98C;
    }
    // 0x8028D810: lwc1        $f4, 0x34C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34C);
    // 0x8028D814: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028D818: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028D81C: lwc1        $f16, 0x298($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X298);
    // 0x8028D820: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028D824: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028D828: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028D82C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8028D830: sub.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8028D834: swc1        $f6, 0x298($s0)
    MEM_W(0X298, ctx->r16) = ctx->f6.u32l;
    // 0x8028D838: lwc1        $f0, 0x298($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X298);
    // 0x8028D83C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8028D840: nop

    // 0x8028D844: bc1f        L_8028D904
    if (!c1cs) {
        // 0x8028D848: nop
    
            goto L_8028D904;
    }
    // 0x8028D848: nop

    // 0x8028D84C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028D850: sb          $zero, 0x28F($s0)
    MEM_B(0X28F, ctx->r16) = 0;
    // 0x8028D854: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x8028D858: swc1        $f18, 0x298($s0)
    MEM_W(0X298, ctx->r16) = ctx->f18.u32l;
    // 0x8028D85C: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8028D860: sb          $t5, 0x28C($s0)
    MEM_B(0X28C, ctx->r16) = ctx->r13;
    // 0x8028D864: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028D868: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028D86C: lwc1        $f4, 0x348($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028D870: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028D874: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028D878: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8028D87C: jal         0x802AEE54
    // 0x8028D880: swc1        $f10, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f10.u32l;
    static_3_802AEE54(rdram, ctx);
        goto after_50;
    // 0x8028D880: swc1        $f10, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f10.u32l;
    after_50:
    // 0x8028D884: jal         0x803183D0
    // 0x8028D888: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_51;
    // 0x8028D888: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_51:
    // 0x8028D88C: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x8028D890: addiu       $a1, $sp, 0x208
    ctx->r5 = ADD32(ctx->r29, 0X208);
    // 0x8028D894: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x8028D898: lh          $t6, 0x10($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X10);
    // 0x8028D89C: jalr        $t9
    // 0x8028D8A0: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x8028D8A0: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_52:
    // 0x8028D8A4: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x8028D8A8: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8028D8AC: jal         0x80305E90
    // 0x8028D8B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_53;
    // 0x8028D8B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_53:
    // 0x8028D8B4: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028D8B8: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x8028D8BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8028D8C0: addiu       $a1, $s0, 0x2D0
    ctx->r5 = ADD32(ctx->r16, 0X2D0);
    // 0x8028D8C4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x8028D8C8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8028D8CC: jal         0x80302238
    // 0x8028D8D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_54;
    // 0x8028D8D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_54:
    // 0x8028D8D4: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028D8D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028D8DC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8028D8E0: jal         0x8021B240
    // 0x8028D8E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_55;
    // 0x8028D8E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_55:
    // 0x8028D8E8: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028D8EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028D8F0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8028D8F4: jal         0x8021B240
    // 0x8028D8F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_56;
    // 0x8028D8F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_56:
    // 0x8028D8FC: b           L_8028D97C
    // 0x8028D900: lwc1        $f0, 0x298($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X298);
        goto L_8028D97C;
    // 0x8028D900: lwc1        $f0, 0x298($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X298);
L_8028D904:
    // 0x8028D904: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8028D908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028D90C: bnel        $t8, $zero, L_8028D980
    if (ctx->r24 != 0) {
        // 0x8028D910: mfc1        $a2, $f0
        ctx->r6 = (int32_t)ctx->f0.u32l;
            goto L_8028D980;
    }
    goto skip_18;
    // 0x8028D910: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    skip_18:
    // 0x8028D914: jal         0x802AEE54
    // 0x8028D918: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    static_3_802AEE54(rdram, ctx);
        goto after_57;
    // 0x8028D918: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    after_57:
    // 0x8028D91C: jal         0x803183D0
    // 0x8028D920: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_58;
    // 0x8028D920: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_58:
    // 0x8028D924: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x8028D928: addiu       $a1, $sp, 0x1C8
    ctx->r5 = ADD32(ctx->r29, 0X1C8);
    // 0x8028D92C: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x8028D930: lh          $t0, 0x10($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X10);
    // 0x8028D934: jalr        $t9
    // 0x8028D938: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x8028D938: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    after_59:
    // 0x8028D93C: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x8028D940: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8028D944: jal         0x80305E90
    // 0x8028D948: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_60;
    // 0x8028D948: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_60:
    // 0x8028D94C: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028D950: addiu       $t1, $zero, 0x38
    ctx->r9 = ADD32(0, 0X38);
    // 0x8028D954: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8028D958: addiu       $a1, $s0, 0x2D0
    ctx->r5 = ADD32(ctx->r16, 0X2D0);
    // 0x8028D95C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x8028D960: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8028D964: jal         0x80302238
    // 0x8028D968: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_61;
    // 0x8028D968: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_61:
    // 0x8028D96C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8028D970: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028D974: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x8028D978: lwc1        $f0, 0x298($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X298);
L_8028D97C:
    // 0x8028D97C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_8028D980:
    // 0x8028D980: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028D984: jal         0x80200B20
    // 0x8028D988: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    static_3_80200B20(rdram, ctx);
        goto after_62;
    // 0x8028D988: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_62:
L_8028D98C:
    // 0x8028D98C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_8028D990:
    // 0x8028D990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028D994: jal         0x8021B4B0
    // 0x8028D998: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    static_3_8021B4B0(rdram, ctx);
        goto after_63;
    // 0x8028D998: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    after_63:
    // 0x8028D99C: lw          $a0, 0xE0C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0C);
    // 0x8028D9A0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028D9A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028D9A8: beql        $a0, $at, L_8028D9BC
    if (ctx->r4 == ctx->r1) {
        // 0x8028D9AC: lw          $a0, 0xE10($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XE10);
            goto L_8028D9BC;
    }
    goto skip_19;
    // 0x8028D9AC: lw          $a0, 0xE10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE10);
    skip_19:
    // 0x8028D9B0: jal         0x8021B4B0
    // 0x8028D9B4: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    static_3_8021B4B0(rdram, ctx);
        goto after_64;
    // 0x8028D9B4: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    after_64:
    // 0x8028D9B8: lw          $a0, 0xE10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE10);
L_8028D9BC:
    // 0x8028D9BC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028D9C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028D9C4: beql        $a0, $at, L_8028D9D8
    if (ctx->r4 == ctx->r1) {
        // 0x8028D9C8: lw          $a0, 0xE14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XE14);
            goto L_8028D9D8;
    }
    goto skip_20;
    // 0x8028D9C8: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    skip_20:
    // 0x8028D9CC: jal         0x8021B4B0
    // 0x8028D9D0: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    static_3_8021B4B0(rdram, ctx);
        goto after_65;
    // 0x8028D9D0: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    after_65:
    // 0x8028D9D4: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
L_8028D9D8:
    // 0x8028D9D8: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028D9DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028D9E0: beql        $a0, $at, L_8028D9F4
    if (ctx->r4 == ctx->r1) {
        // 0x8028D9E4: lw          $a0, 0xE18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XE18);
            goto L_8028D9F4;
    }
    goto skip_21;
    // 0x8028D9E4: lw          $a0, 0xE18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE18);
    skip_21:
    // 0x8028D9E8: jal         0x8021B4B0
    // 0x8028D9EC: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    static_3_8021B4B0(rdram, ctx);
        goto after_66;
    // 0x8028D9EC: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    after_66:
    // 0x8028D9F0: lw          $a0, 0xE18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE18);
L_8028D9F4:
    // 0x8028D9F4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028D9F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028D9FC: beql        $a0, $at, L_8028DA10
    if (ctx->r4 == ctx->r1) {
        // 0x8028DA00: lw          $a0, 0xE1C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XE1C);
            goto L_8028DA10;
    }
    goto skip_22;
    // 0x8028DA00: lw          $a0, 0xE1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE1C);
    skip_22:
    // 0x8028DA04: jal         0x8021B4B0
    // 0x8028DA08: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    static_3_8021B4B0(rdram, ctx);
        goto after_67;
    // 0x8028DA08: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    after_67:
    // 0x8028DA0C: lw          $a0, 0xE1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE1C);
L_8028DA10:
    // 0x8028DA10: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028DA14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028DA18: beql        $a0, $at, L_8028DA2C
    if (ctx->r4 == ctx->r1) {
        // 0x8028DA1C: lbu         $t3, 0x28E($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028DA2C;
    }
    goto skip_23;
    // 0x8028DA1C: lbu         $t3, 0x28E($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X28E);
    skip_23:
    // 0x8028DA20: jal         0x8021B4B0
    // 0x8028DA24: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    static_3_8021B4B0(rdram, ctx);
        goto after_68;
    // 0x8028DA24: lw          $a2, 0x354($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X354);
    after_68:
    // 0x8028DA28: lbu         $t3, 0x28E($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X28E);
L_8028DA2C:
    // 0x8028DA2C: addiu       $a0, $s0, 0x2F0
    ctx->r4 = ADD32(ctx->r16, 0X2F0);
    // 0x8028DA30: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DA34: bne         $t3, $zero, L_8028DB1C
    if (ctx->r11 != 0) {
        // 0x8028DA38: lw          $a2, 0x34C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X34C);
            goto L_8028DB1C;
    }
    // 0x8028DA38: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028DA3C: lwc1        $f6, 0xE24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XE24);
    // 0x8028DA40: lwc1        $f8, 0x348($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028DA44: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028DA48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028DA4C: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8028DA50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028DA54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028DA58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028DA5C: div.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028DA60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028DA64: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8028DA68: lwc1        $f4, 0x2EC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2EC);
    // 0x8028DA6C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8028DA70: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8028DA74: lw          $a0, 0xE0C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0C);
    // 0x8028DA78: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    // 0x8028DA7C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8028DA80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028DA84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028DA88: div.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8028DA8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028DA90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028DA94: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8028DA98: nop

    // 0x8028DA9C: bc1f        L_8028DAA8
    if (!c1cs) {
        // 0x8028DAA0: sub.s       $f12, $f16, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f10.fl;
            goto L_8028DAA8;
    }
    // 0x8028DAA0: sub.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8028DAA4: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8028DAA8:
    // 0x8028DAA8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8028DAAC: nop

    // 0x8028DAB0: bc1fl       L_8028DAC4
    if (!c1cs) {
        // 0x8028DAB4: c.lt.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
            goto L_8028DAC4;
    }
    goto skip_24;
    // 0x8028DAB4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    skip_24:
    // 0x8028DAB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028DABC: nop

    // 0x8028DAC0: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_8028DAC4:
    // 0x8028DAC4: nop

    // 0x8028DAC8: bc1fl       L_8028DAD8
    if (!c1cs) {
        // 0x8028DACC: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_8028DAD8;
    }
    goto skip_25;
    // 0x8028DACC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_25:
    // 0x8028DAD0: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x8028DAD4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_8028DAD8:
    // 0x8028DAD8: nop

    // 0x8028DADC: bc1fl       L_8028DAF0
    if (!c1cs) {
        // 0x8028DAE0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_8028DAF0;
    }
    goto skip_26;
    // 0x8028DAE0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_26:
    // 0x8028DAE4: b           L_8028DAF0
    // 0x8028DAE8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_8028DAF0;
    // 0x8028DAE8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8028DAEC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8028DAF0:
    // 0x8028DAF0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8028DAF4: jal         0x80200B20
    // 0x8028DAF8: swc1        $f2, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f2.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_69;
    // 0x8028DAF8: swc1        $f2, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f2.u32l;
    after_69:
    // 0x8028DAFC: lwc1        $f2, 0x1C4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x8028DB00: lw          $a0, 0xE10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE10);
    // 0x8028DB04: addiu       $a1, $zero, 0x53
    ctx->r5 = ADD32(0, 0X53);
    // 0x8028DB08: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8028DB0C: jal         0x80200B20
    // 0x8028DB10: nop

    static_3_80200B20(rdram, ctx);
        goto after_70;
    // 0x8028DB10: nop

    after_70:
    // 0x8028DB14: b           L_8028DB44
    // 0x8028DB18: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
        goto L_8028DB44;
    // 0x8028DB18: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028DB1C:
    // 0x8028DB1C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028DB20: lw          $a3, 0x354($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X354);
    // 0x8028DB24: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8028DB28: jal         0x802C53E4
    // 0x8028DB2C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_71;
    // 0x8028DB2C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_71:
    // 0x8028DB30: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028DB34: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DB38: jal         0x80314378
    // 0x8028DB3C: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_80314378(rdram, ctx);
        goto after_72;
    // 0x8028DB3C: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_72:
    // 0x8028DB40: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028DB44:
    // 0x8028DB44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028DB48: addiu       $a0, $s0, 0x490
    ctx->r4 = ADD32(ctx->r16, 0X490);
    // 0x8028DB4C: beq         $v0, $at, L_8028DB64
    if (ctx->r2 == ctx->r1) {
        // 0x8028DB50: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8028DB64;
    }
    // 0x8028DB50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028DB54: beq         $v0, $at, L_8028DB64
    if (ctx->r2 == ctx->r1) {
        // 0x8028DB58: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8028DB64;
    }
    // 0x8028DB58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028DB5C: bnel        $v0, $at, L_8028DC48
    if (ctx->r2 != ctx->r1) {
        // 0x8028DB60: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8028DC48;
    }
    goto skip_27;
    // 0x8028DB60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_27:
L_8028DB64:
    // 0x8028DB64: jal         0x802C53C0
    // 0x8028DB68: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    static_3_802C53C0(rdram, ctx);
        goto after_73;
    // 0x8028DB68: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_73:
    // 0x8028DB6C: beq         $v0, $zero, L_8028DC1C
    if (ctx->r2 == 0) {
        // 0x8028DB70: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8028DC1C;
    }
    // 0x8028DB70: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028DB74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028DB78: lwc1        $f4, 0x29C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028DB7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8028DB80: addiu       $a2, $sp, 0x178
    ctx->r6 = ADD32(ctx->r29, 0X178);
    // 0x8028DB84: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8028DB88: nop

    // 0x8028DB8C: bc1fl       L_8028DC20
    if (!c1cs) {
        // 0x8028DB90: lwc1        $f18, 0x2B0($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X2B0);
            goto L_8028DC20;
    }
    goto skip_28;
    // 0x8028DB90: lwc1        $f18, 0x2B0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2B0);
    skip_28:
    // 0x8028DB94: jal         0x8021B6D4
    // 0x8028DB98: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021B6D4(rdram, ctx);
        goto after_74;
    // 0x8028DB98: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_74:
    // 0x8028DB9C: addiu       $a0, $sp, 0x178
    ctx->r4 = ADD32(ctx->r29, 0X178);
    // 0x8028DBA0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8028DBA4: jal         0x802297A8
    // 0x8028DBA8: lw          $a1, 0x354($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X354);
    static_3_802297A8(rdram, ctx);
        goto after_75;
    // 0x8028DBA8: lw          $a1, 0x354($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X354);
    after_75:
    // 0x8028DBAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028DBB0: addiu       $a0, $sp, 0x178
    ctx->r4 = ADD32(ctx->r29, 0X178);
    // 0x8028DBB4: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8028DBB8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8028DBBC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8028DBC0: jal         0x8022A0D0
    // 0x8028DBC4: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_76;
    // 0x8028DBC4: nop

    after_76:
    // 0x8028DBC8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028DBCC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028DBD0: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DBD4: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028DBD8: addiu       $a3, $sp, 0x178
    ctx->r7 = ADD32(ctx->r29, 0X178);
    // 0x8028DBDC: jal         0x802C53E4
    // 0x8028DBE0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_77;
    // 0x8028DBE0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_77:
    // 0x8028DBE4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028DBE8: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DBEC: jal         0x802C5468
    // 0x8028DBF0: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_802C5468(rdram, ctx);
        goto after_78;
    // 0x8028DBF0: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_78:
    // 0x8028DBF4: jal         0x802C53C0
    // 0x8028DBF8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    static_3_802C53C0(rdram, ctx);
        goto after_79;
    // 0x8028DBF8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_79:
    // 0x8028DBFC: bne         $v0, $zero, L_8028DC40
    if (ctx->r2 != 0) {
        // 0x8028DC00: lwc1        $f10, 0x348($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X348);
            goto L_8028DC40;
    }
    // 0x8028DC00: lwc1        $f10, 0x348($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028DC04: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028DC08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028DC0C: nop

    // 0x8028DC10: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8028DC14: b           L_8028DC40
    // 0x8028DC18: swc1        $f8, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->f8.u32l;
        goto L_8028DC40;
    // 0x8028DC18: swc1        $f8, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->f8.u32l;
L_8028DC1C:
    // 0x8028DC1C: lwc1        $f18, 0x2B0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2B0);
L_8028DC20:
    // 0x8028DC20: lwc1        $f4, 0x348($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028DC24: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028DC28: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8028DC2C: nop

    // 0x8028DC30: bc1fl       L_8028DC44
    if (!c1cs) {
        // 0x8028DC34: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028DC44;
    }
    goto skip_29;
    // 0x8028DC34: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_29:
    // 0x8028DC38: jal         0x802C583C
    // 0x8028DC3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802C583C(rdram, ctx);
        goto after_80;
    // 0x8028DC3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_80:
L_8028DC40:
    // 0x8028DC40: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028DC44:
    // 0x8028DC44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8028DC48:
    // 0x8028DC48: bnel        $v0, $at, L_8028DE14
    if (ctx->r2 != ctx->r1) {
        // 0x8028DC4C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8028DE14;
    }
    goto skip_30;
    // 0x8028DC4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_30:
    // 0x8028DC50: lbu         $v0, 0x28F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28F);
    // 0x8028DC54: bne         $v0, $zero, L_8028DC80
    if (ctx->r2 != 0) {
        // 0x8028DC58: nop
    
            goto L_8028DC80;
    }
    // 0x8028DC58: nop

    // 0x8028DC5C: lbu         $t4, 0x28C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X28C);
    // 0x8028DC60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028DC64: bne         $t4, $at, L_8028DC80
    if (ctx->r12 != ctx->r1) {
        // 0x8028DC68: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_8028DC80;
    }
    // 0x8028DC68: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8028DC6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028DC70: lbu         $v0, 0x28F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28F);
    // 0x8028DC74: swc1        $f16, 0x2BC($s0)
    MEM_W(0X2BC, ctx->r16) = ctx->f16.u32l;
    // 0x8028DC78: lwc1        $f10, 0x348($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028DC7C: swc1        $f10, 0x2B4($s0)
    MEM_W(0X2B4, ctx->r16) = ctx->f10.u32l;
L_8028DC80:
    // 0x8028DC80: beql        $v0, $zero, L_8028DE10
    if (ctx->r2 == 0) {
        // 0x8028DC84: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028DE10;
    }
    goto skip_31;
    // 0x8028DC84: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_31:
    // 0x8028DC88: lbu         $v0, 0x28C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28C);
    // 0x8028DC8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028DC90: beq         $v0, $at, L_8028DE0C
    if (ctx->r2 == ctx->r1) {
        // 0x8028DC94: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8028DE0C;
    }
    // 0x8028DC94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028DC98: beq         $v0, $at, L_8028DE0C
    if (ctx->r2 == ctx->r1) {
        // 0x8028DC9C: lwc1        $f8, 0x348($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X348);
            goto L_8028DE0C;
    }
    // 0x8028DC9C: lwc1        $f8, 0x348($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028DCA0: lwc1        $f6, 0x2B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2B4);
    // 0x8028DCA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028DCA8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8028DCAC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8028DCB0: nop

    // 0x8028DCB4: bc1fl       L_8028DCE4
    if (!c1cs) {
        // 0x8028DCB8: lwc1        $f18, 0x2C4($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X2C4);
            goto L_8028DCE4;
    }
    goto skip_32;
    // 0x8028DCB8: lwc1        $f18, 0x2C4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C4);
    skip_32:
    // 0x8028DCBC: lwc1        $f18, 0x2BC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2BC);
    // 0x8028DCC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028DCC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028DCC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028DCCC: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8028DCD0: swc1        $f16, 0x2BC($s0)
    MEM_W(0X2BC, ctx->r16) = ctx->f16.u32l;
    // 0x8028DCD4: lwc1        $f10, 0x348($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028DCD8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8028DCDC: swc1        $f8, 0x2B4($s0)
    MEM_W(0X2B4, ctx->r16) = ctx->f8.u32l;
    // 0x8028DCE0: lwc1        $f18, 0x2C4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C4);
L_8028DCE4:
    // 0x8028DCE4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028DCE8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8028DCEC: nop

    // 0x8028DCF0: bc1fl       L_8028DD78
    if (!c1cs) {
        // 0x8028DCF4: lwc1        $f6, 0x2C0($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X2C0);
            goto L_8028DD78;
    }
    goto skip_33;
    // 0x8028DCF4: lwc1        $f6, 0x2C0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C0);
    skip_33:
    // 0x8028DCF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028DCFC: lwc1        $f16, 0x29C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028DD00: c.eq.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl == ctx->f16.fl;
    // 0x8028DD04: nop

    // 0x8028DD08: bc1fl       L_8028DD78
    if (!c1cs) {
        // 0x8028DD0C: lwc1        $f6, 0x2C0($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X2C0);
            goto L_8028DD78;
    }
    goto skip_34;
    // 0x8028DD0C: lwc1        $f6, 0x2C0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C0);
    skip_34:
    // 0x8028DD10: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028DD14: addiu       $a1, $sp, 0x138
    ctx->r5 = ADD32(ctx->r29, 0X138);
    // 0x8028DD18: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028DD1C: lh          $t5, 0x60($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X60);
    // 0x8028DD20: jalr        $t9
    // 0x8028DD24: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_81;
    // 0x8028DD24: addu        $a0, $t5, $s0
    ctx->r4 = ADD32(ctx->r13, ctx->r16);
    after_81:
    // 0x8028DD28: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    // 0x8028DD2C: lw          $a1, 0x2BC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2BC);
    // 0x8028DD30: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8028DD34: jal         0x8022A0D0
    // 0x8028DD38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_82;
    // 0x8028DD38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_82:
    // 0x8028DD3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028DD40: addiu       $a0, $s0, 0x7B8
    ctx->r4 = ADD32(ctx->r16, 0X7B8);
    // 0x8028DD44: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8028DD48: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DD4C: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028DD50: addiu       $a3, $sp, 0x138
    ctx->r7 = ADD32(ctx->r29, 0X138);
    // 0x8028DD54: jal         0x802C53E4
    // 0x8028DD58: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_83;
    // 0x8028DD58: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_83:
    // 0x8028DD5C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028DD60: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DD64: jal         0x802C5468
    // 0x8028DD68: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_802C5468(rdram, ctx);
        goto after_84;
    // 0x8028DD68: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_84:
    // 0x8028DD6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028DD70: nop

    // 0x8028DD74: lwc1        $f6, 0x2C0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C0);
L_8028DD78:
    // 0x8028DD78: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028DD7C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028DD80: nop

    // 0x8028DD84: bc1fl       L_8028DE10
    if (!c1cs) {
        // 0x8028DD88: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028DE10;
    }
    goto skip_35;
    // 0x8028DD88: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_35:
    // 0x8028DD8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028DD90: lwc1        $f18, 0x29C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028DD94: c.eq.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl == ctx->f18.fl;
    // 0x8028DD98: nop

    // 0x8028DD9C: bc1fl       L_8028DE10
    if (!c1cs) {
        // 0x8028DDA0: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028DE10;
    }
    goto skip_36;
    // 0x8028DDA0: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_36:
    // 0x8028DDA4: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028DDA8: addiu       $a1, $sp, 0x138
    ctx->r5 = ADD32(ctx->r29, 0X138);
    // 0x8028DDAC: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028DDB0: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x8028DDB4: jalr        $t9
    // 0x8028DDB8: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_85;
    // 0x8028DDB8: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    after_85:
    // 0x8028DDBC: lwc1        $f4, 0x2BC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2BC);
    // 0x8028DDC0: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    // 0x8028DDC4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8028DDC8: neg.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = -ctx->f4.fl;
    // 0x8028DDCC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8028DDD0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8028DDD4: jal         0x8022A0D0
    // 0x8028DDD8: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_86;
    // 0x8028DDD8: nop

    after_86:
    // 0x8028DDDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028DDE0: addiu       $a0, $s0, 0x624
    ctx->r4 = ADD32(ctx->r16, 0X624);
    // 0x8028DDE4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8028DDE8: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DDEC: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028DDF0: addiu       $a3, $sp, 0x138
    ctx->r7 = ADD32(ctx->r29, 0X138);
    // 0x8028DDF4: jal         0x802C53E4
    // 0x8028DDF8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_87;
    // 0x8028DDF8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_87:
    // 0x8028DDFC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028DE00: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DE04: jal         0x802C5468
    // 0x8028DE08: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_802C5468(rdram, ctx);
        goto after_88;
    // 0x8028DE08: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_88:
L_8028DE0C:
    // 0x8028DE0C: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028DE10:
    // 0x8028DE10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_8028DE14:
    // 0x8028DE14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028DE18: bne         $v0, $at, L_8028E3A4
    if (ctx->r2 != ctx->r1) {
        // 0x8028DE1C: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8028E3A4;
    }
    // 0x8028DE1C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028DE20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028DE24: lwc1        $f8, 0x29C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028DE28: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8028DE2C: nop

    // 0x8028DE30: bc1fl       L_8028E3A8
    if (!c1cs) {
        // 0x8028DE34: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8028E3A8;
    }
    goto skip_37;
    // 0x8028DE34: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_37:
    // 0x8028DE38: lwc1        $f18, 0x2C8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C8);
    // 0x8028DE3C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8028DE40: nop

    // 0x8028DE44: bc1fl       L_8028DE64
    if (!c1cs) {
        // 0x8028DE48: lwc1        $f4, 0x2CC($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
            goto L_8028DE64;
    }
    goto skip_38;
    // 0x8028DE48: lwc1        $f4, 0x2CC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
    skip_38:
    // 0x8028DE4C: jal         0x802C53C0
    // 0x8028DE50: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    static_3_802C53C0(rdram, ctx);
        goto after_89;
    // 0x8028DE50: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    after_89:
    // 0x8028DE54: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028DE58: b           L_8028DE8C
    // 0x8028DE5C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8028DE8C;
    // 0x8028DE5C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8028DE60: lwc1        $f4, 0x2CC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
L_8028DE64:
    // 0x8028DE64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8028DE68: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8028DE6C: nop

    // 0x8028DE70: bc1f        L_8028DE8C
    if (!c1cs) {
        // 0x8028DE74: nop
    
            goto L_8028DE8C;
    }
    // 0x8028DE74: nop

    // 0x8028DE78: jal         0x802C53C0
    // 0x8028DE7C: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    static_3_802C53C0(rdram, ctx);
        goto after_90;
    // 0x8028DE7C: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    after_90:
    // 0x8028DE80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028DE84: b           L_8028DE8C
    // 0x8028DE88: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8028DE8C;
    // 0x8028DE88: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8028DE8C:
    // 0x8028DE8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028DE90: bnel        $v1, $at, L_8028E018
    if (ctx->r3 != ctx->r1) {
        // 0x8028DE94: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8028E018;
    }
    goto skip_39;
    // 0x8028DE94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_39:
    // 0x8028DE98: lwc1        $f16, 0x2C8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X2C8);
    // 0x8028DE9C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8028DEA0: nop

    // 0x8028DEA4: bc1fl       L_8028DF24
    if (!c1cs) {
        // 0x8028DEA8: lwc1        $f6, 0x2CC($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X2CC);
            goto L_8028DF24;
    }
    goto skip_40;
    // 0x8028DEA8: lwc1        $f6, 0x2CC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2CC);
    skip_40:
    // 0x8028DEAC: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028DEB0: addiu       $t8, $s0, 0x94C
    ctx->r24 = ADD32(ctx->r16, 0X94C);
    // 0x8028DEB4: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    // 0x8028DEB8: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x8028DEBC: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8028DEC0: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028DEC4: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x8028DEC8: jalr        $t9
    // 0x8028DECC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_91;
    // 0x8028DECC: nop

    after_91:
    // 0x8028DED0: lui         $a2, 0x42D5
    ctx->r6 = S32(0X42D5 << 16);
    // 0x8028DED4: lui         $a3, 0x41BB
    ctx->r7 = S32(0X41BB << 16);
    // 0x8028DED8: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8028DEDC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8028DEE0: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x8028DEE4: jal         0x8022A0D0
    // 0x8028DEE8: lui         $a1, 0xC2F7
    ctx->r5 = S32(0XC2F7 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_92;
    // 0x8028DEE8: lui         $a1, 0xC2F7
    ctx->r5 = S32(0XC2F7 << 16);
    after_92:
    // 0x8028DEEC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028DEF0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028DEF4: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DEF8: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028DEFC: addiu       $a3, $sp, 0xF4
    ctx->r7 = ADD32(ctx->r29, 0XF4);
    // 0x8028DF00: jal         0x802C53E4
    // 0x8028DF04: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_93;
    // 0x8028DF04: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_93:
    // 0x8028DF08: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028DF0C: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DF10: jal         0x802C5468
    // 0x8028DF14: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_802C5468(rdram, ctx);
        goto after_94;
    // 0x8028DF14: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_94:
    // 0x8028DF18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028DF1C: nop

    // 0x8028DF20: lwc1        $f6, 0x2CC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2CC);
L_8028DF24:
    // 0x8028DF24: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028DF28: nop

    // 0x8028DF2C: bc1fl       L_8028DFAC
    if (!c1cs) {
        // 0x8028DF30: lwc1        $f18, 0x2C8($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X2C8);
            goto L_8028DFAC;
    }
    goto skip_41;
    // 0x8028DF30: lwc1        $f18, 0x2C8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C8);
    skip_41:
    // 0x8028DF34: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028DF38: addiu       $t1, $s0, 0xAE0
    ctx->r9 = ADD32(ctx->r16, 0XAE0);
    // 0x8028DF3C: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    // 0x8028DF40: lh          $t0, 0x60($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X60);
    // 0x8028DF44: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8028DF48: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028DF4C: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x8028DF50: jalr        $t9
    // 0x8028DF54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_95;
    // 0x8028DF54: nop

    after_95:
    // 0x8028DF58: lui         $a2, 0x42D5
    ctx->r6 = S32(0X42D5 << 16);
    // 0x8028DF5C: lui         $a3, 0x41BB
    ctx->r7 = S32(0X41BB << 16);
    // 0x8028DF60: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8028DF64: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8028DF68: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x8028DF6C: jal         0x8022A0D0
    // 0x8028DF70: lui         $a1, 0x42F7
    ctx->r5 = S32(0X42F7 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_96;
    // 0x8028DF70: lui         $a1, 0x42F7
    ctx->r5 = S32(0X42F7 << 16);
    after_96:
    // 0x8028DF74: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028DF78: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028DF7C: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DF80: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028DF84: addiu       $a3, $sp, 0xF4
    ctx->r7 = ADD32(ctx->r29, 0XF4);
    // 0x8028DF88: jal         0x802C53E4
    // 0x8028DF8C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_97;
    // 0x8028DF8C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_97:
    // 0x8028DF90: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028DF94: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028DF98: jal         0x802C5468
    // 0x8028DF9C: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_802C5468(rdram, ctx);
        goto after_98;
    // 0x8028DF9C: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_98:
    // 0x8028DFA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028DFA4: nop

    // 0x8028DFA8: lwc1        $f18, 0x2C8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C8);
L_8028DFAC:
    // 0x8028DFAC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8028DFB0: nop

    // 0x8028DFB4: bc1fl       L_8028DFD0
    if (!c1cs) {
        // 0x8028DFB8: lwc1        $f4, 0x2CC($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
            goto L_8028DFD0;
    }
    goto skip_42;
    // 0x8028DFB8: lwc1        $f4, 0x2CC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
    skip_42:
    // 0x8028DFBC: jal         0x802C53C0
    // 0x8028DFC0: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    static_3_802C53C0(rdram, ctx);
        goto after_99;
    // 0x8028DFC0: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    after_99:
    // 0x8028DFC4: b           L_8028DFF4
    // 0x8028DFC8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8028DFF4;
    // 0x8028DFC8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8028DFCC: lwc1        $f4, 0x2CC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
L_8028DFD0:
    // 0x8028DFD0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8028DFD4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8028DFD8: nop

    // 0x8028DFDC: bc1f        L_8028DFF4
    if (!c1cs) {
        // 0x8028DFE0: nop
    
            goto L_8028DFF4;
    }
    // 0x8028DFE0: nop

    // 0x8028DFE4: jal         0x802C53C0
    // 0x8028DFE8: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    static_3_802C53C0(rdram, ctx);
        goto after_100;
    // 0x8028DFE8: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    after_100:
    // 0x8028DFEC: b           L_8028DFF4
    // 0x8028DFF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8028DFF4;
    // 0x8028DFF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8028DFF4:
    // 0x8028DFF4: bne         $v1, $zero, L_8028E3A0
    if (ctx->r3 != 0) {
        // 0x8028DFF8: lwc1        $f16, 0x348($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X348);
            goto L_8028E3A0;
    }
    // 0x8028DFF8: lwc1        $f16, 0x348($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028DFFC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028E000: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028E004: nop

    // 0x8028E008: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8028E00C: b           L_8028E3A0
    // 0x8028E010: swc1        $f6, 0x2B8($s0)
    MEM_W(0X2B8, ctx->r16) = ctx->f6.u32l;
        goto L_8028E3A0;
    // 0x8028E010: swc1        $f6, 0x2B8($s0)
    MEM_W(0X2B8, ctx->r16) = ctx->f6.u32l;
    // 0x8028E014: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8028E018:
    // 0x8028E018: bnel        $v1, $at, L_8028E1A0
    if (ctx->r3 != ctx->r1) {
        // 0x8028E01C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8028E1A0;
    }
    goto skip_43;
    // 0x8028E01C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_43:
    // 0x8028E020: lwc1        $f8, 0x2C8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C8);
    // 0x8028E024: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8028E028: nop

    // 0x8028E02C: bc1fl       L_8028E0AC
    if (!c1cs) {
        // 0x8028E030: lwc1        $f4, 0x2CC($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
            goto L_8028E0AC;
    }
    goto skip_44;
    // 0x8028E030: lwc1        $f4, 0x2CC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
    skip_44:
    // 0x8028E034: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028E038: addiu       $t3, $s0, 0x94C
    ctx->r11 = ADD32(ctx->r16, 0X94C);
    // 0x8028E03C: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x8028E040: lh          $t2, 0x60($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X60);
    // 0x8028E044: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8028E048: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028E04C: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x8028E050: jalr        $t9
    // 0x8028E054: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_101;
    // 0x8028E054: nop

    after_101:
    // 0x8028E058: lui         $a2, 0x42D5
    ctx->r6 = S32(0X42D5 << 16);
    // 0x8028E05C: lui         $a3, 0xC1BB
    ctx->r7 = S32(0XC1BB << 16);
    // 0x8028E060: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8028E064: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8028E068: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x8028E06C: jal         0x8022A0D0
    // 0x8028E070: lui         $a1, 0xC2F7
    ctx->r5 = S32(0XC2F7 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_102;
    // 0x8028E070: lui         $a1, 0xC2F7
    ctx->r5 = S32(0XC2F7 << 16);
    after_102:
    // 0x8028E074: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028E078: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028E07C: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028E080: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028E084: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    // 0x8028E088: jal         0x802C53E4
    // 0x8028E08C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_103;
    // 0x8028E08C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_103:
    // 0x8028E090: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028E094: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028E098: jal         0x802C5468
    // 0x8028E09C: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_802C5468(rdram, ctx);
        goto after_104;
    // 0x8028E09C: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_104:
    // 0x8028E0A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028E0A4: nop

    // 0x8028E0A8: lwc1        $f4, 0x2CC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
L_8028E0AC:
    // 0x8028E0AC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8028E0B0: nop

    // 0x8028E0B4: bc1fl       L_8028E134
    if (!c1cs) {
        // 0x8028E0B8: lwc1        $f10, 0x2C8($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X2C8);
            goto L_8028E134;
    }
    goto skip_45;
    // 0x8028E0B8: lwc1        $f10, 0x2C8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C8);
    skip_45:
    // 0x8028E0BC: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028E0C0: addiu       $t5, $s0, 0xAE0
    ctx->r13 = ADD32(ctx->r16, 0XAE0);
    // 0x8028E0C4: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x8028E0C8: lh          $t4, 0x60($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X60);
    // 0x8028E0CC: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8028E0D0: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028E0D4: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x8028E0D8: jalr        $t9
    // 0x8028E0DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_105;
    // 0x8028E0DC: nop

    after_105:
    // 0x8028E0E0: lui         $a2, 0x42D5
    ctx->r6 = S32(0X42D5 << 16);
    // 0x8028E0E4: lui         $a3, 0xC1BB
    ctx->r7 = S32(0XC1BB << 16);
    // 0x8028E0E8: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8028E0EC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8028E0F0: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x8028E0F4: jal         0x8022A0D0
    // 0x8028E0F8: lui         $a1, 0x42F7
    ctx->r5 = S32(0X42F7 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_106;
    // 0x8028E0F8: lui         $a1, 0x42F7
    ctx->r5 = S32(0X42F7 << 16);
    after_106:
    // 0x8028E0FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028E100: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028E104: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028E108: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028E10C: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    // 0x8028E110: jal         0x802C53E4
    // 0x8028E114: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_107;
    // 0x8028E114: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_107:
    // 0x8028E118: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028E11C: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028E120: jal         0x802C5468
    // 0x8028E124: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_802C5468(rdram, ctx);
        goto after_108;
    // 0x8028E124: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_108:
    // 0x8028E128: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028E12C: nop

    // 0x8028E130: lwc1        $f10, 0x2C8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C8);
L_8028E134:
    // 0x8028E134: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8028E138: nop

    // 0x8028E13C: bc1fl       L_8028E158
    if (!c1cs) {
        // 0x8028E140: lwc1        $f6, 0x2CC($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X2CC);
            goto L_8028E158;
    }
    goto skip_46;
    // 0x8028E140: lwc1        $f6, 0x2CC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2CC);
    skip_46:
    // 0x8028E144: jal         0x802C53C0
    // 0x8028E148: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    static_3_802C53C0(rdram, ctx);
        goto after_109;
    // 0x8028E148: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    after_109:
    // 0x8028E14C: b           L_8028E17C
    // 0x8028E150: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8028E17C;
    // 0x8028E150: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8028E154: lwc1        $f6, 0x2CC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2CC);
L_8028E158:
    // 0x8028E158: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8028E15C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028E160: nop

    // 0x8028E164: bc1f        L_8028E17C
    if (!c1cs) {
        // 0x8028E168: nop
    
            goto L_8028E17C;
    }
    // 0x8028E168: nop

    // 0x8028E16C: jal         0x802C53C0
    // 0x8028E170: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    static_3_802C53C0(rdram, ctx);
        goto after_110;
    // 0x8028E170: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    after_110:
    // 0x8028E174: b           L_8028E17C
    // 0x8028E178: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8028E17C;
    // 0x8028E178: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8028E17C:
    // 0x8028E17C: bne         $v1, $zero, L_8028E3A0
    if (ctx->r3 != 0) {
        // 0x8028E180: lwc1        $f8, 0x348($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X348);
            goto L_8028E3A0;
    }
    // 0x8028E180: lwc1        $f8, 0x348($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028E184: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028E188: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028E18C: nop

    // 0x8028E190: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8028E194: b           L_8028E3A0
    // 0x8028E198: swc1        $f4, 0x2B8($s0)
    MEM_W(0X2B8, ctx->r16) = ctx->f4.u32l;
        goto L_8028E3A0;
    // 0x8028E198: swc1        $f4, 0x2B8($s0)
    MEM_W(0X2B8, ctx->r16) = ctx->f4.u32l;
    // 0x8028E19C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8028E1A0:
    // 0x8028E1A0: bne         $v1, $at, L_8028E31C
    if (ctx->r3 != ctx->r1) {
        // 0x8028E1A4: lwc1        $f18, 0x348($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X348);
            goto L_8028E31C;
    }
    // 0x8028E1A4: lwc1        $f18, 0x348($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028E1A8: lwc1        $f16, 0x2C8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X2C8);
    // 0x8028E1AC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8028E1B0: nop

    // 0x8028E1B4: bc1fl       L_8028E230
    if (!c1cs) {
        // 0x8028E1B8: lwc1        $f6, 0x2CC($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X2CC);
            goto L_8028E230;
    }
    goto skip_47;
    // 0x8028E1B8: lwc1        $f6, 0x2CC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2CC);
    skip_47:
    // 0x8028E1BC: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028E1C0: addiu       $t7, $s0, 0x94C
    ctx->r15 = ADD32(ctx->r16, 0X94C);
    // 0x8028E1C4: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x8028E1C8: lh          $t6, 0x60($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X60);
    // 0x8028E1CC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8028E1D0: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028E1D4: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x8028E1D8: jalr        $t9
    // 0x8028E1DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_111;
    // 0x8028E1DC: nop

    after_111:
    // 0x8028E1E0: lui         $a2, 0x42D5
    ctx->r6 = S32(0X42D5 << 16);
    // 0x8028E1E4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8028E1E8: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8028E1EC: lui         $a1, 0xC2A6
    ctx->r5 = S32(0XC2A6 << 16);
    // 0x8028E1F0: jal         0x8022A0D0
    // 0x8028E1F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_112;
    // 0x8028E1F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_112:
    // 0x8028E1F8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028E1FC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028E200: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028E204: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028E208: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    // 0x8028E20C: jal         0x802C53E4
    // 0x8028E210: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_113;
    // 0x8028E210: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_113:
    // 0x8028E214: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028E218: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028E21C: jal         0x802C5468
    // 0x8028E220: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_802C5468(rdram, ctx);
        goto after_114;
    // 0x8028E220: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_114:
    // 0x8028E224: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028E228: nop

    // 0x8028E22C: lwc1        $f6, 0x2CC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2CC);
L_8028E230:
    // 0x8028E230: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028E234: nop

    // 0x8028E238: bc1fl       L_8028E2B4
    if (!c1cs) {
        // 0x8028E23C: lwc1        $f18, 0x2C8($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X2C8);
            goto L_8028E2B4;
    }
    goto skip_48;
    // 0x8028E23C: lwc1        $f18, 0x2C8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C8);
    skip_48:
    // 0x8028E240: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028E244: addiu       $t0, $s0, 0xAE0
    ctx->r8 = ADD32(ctx->r16, 0XAE0);
    // 0x8028E248: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x8028E24C: lh          $t8, 0x60($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X60);
    // 0x8028E250: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8028E254: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028E258: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x8028E25C: jalr        $t9
    // 0x8028E260: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_115;
    // 0x8028E260: nop

    after_115:
    // 0x8028E264: lui         $a2, 0x42D5
    ctx->r6 = S32(0X42D5 << 16);
    // 0x8028E268: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8028E26C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8028E270: lui         $a1, 0x42A6
    ctx->r5 = S32(0X42A6 << 16);
    // 0x8028E274: jal         0x8022A0D0
    // 0x8028E278: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_116;
    // 0x8028E278: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_116:
    // 0x8028E27C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028E280: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028E284: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028E288: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028E28C: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    // 0x8028E290: jal         0x802C53E4
    // 0x8028E294: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_117;
    // 0x8028E294: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_117:
    // 0x8028E298: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028E29C: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028E2A0: jal         0x802C5468
    // 0x8028E2A4: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_802C5468(rdram, ctx);
        goto after_118;
    // 0x8028E2A4: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_118:
    // 0x8028E2A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8028E2AC: nop

    // 0x8028E2B0: lwc1        $f18, 0x2C8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C8);
L_8028E2B4:
    // 0x8028E2B4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8028E2B8: nop

    // 0x8028E2BC: bc1fl       L_8028E2D8
    if (!c1cs) {
        // 0x8028E2C0: lwc1        $f4, 0x2CC($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
            goto L_8028E2D8;
    }
    goto skip_49;
    // 0x8028E2C0: lwc1        $f4, 0x2CC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
    skip_49:
    // 0x8028E2C4: jal         0x802C53C0
    // 0x8028E2C8: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    static_3_802C53C0(rdram, ctx);
        goto after_119;
    // 0x8028E2C8: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    after_119:
    // 0x8028E2CC: b           L_8028E2FC
    // 0x8028E2D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8028E2FC;
    // 0x8028E2D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8028E2D4: lwc1        $f4, 0x2CC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2CC);
L_8028E2D8:
    // 0x8028E2D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8028E2DC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8028E2E0: nop

    // 0x8028E2E4: bc1f        L_8028E2FC
    if (!c1cs) {
        // 0x8028E2E8: nop
    
            goto L_8028E2FC;
    }
    // 0x8028E2E8: nop

    // 0x8028E2EC: jal         0x802C53C0
    // 0x8028E2F0: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    static_3_802C53C0(rdram, ctx);
        goto after_120;
    // 0x8028E2F0: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    after_120:
    // 0x8028E2F4: b           L_8028E2FC
    // 0x8028E2F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8028E2FC;
    // 0x8028E2F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8028E2FC:
    // 0x8028E2FC: bne         $v1, $zero, L_8028E3A0
    if (ctx->r3 != 0) {
        // 0x8028E300: lwc1        $f16, 0x348($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X348);
            goto L_8028E3A0;
    }
    // 0x8028E300: lwc1        $f16, 0x348($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X348);
    // 0x8028E304: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028E308: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028E30C: nop

    // 0x8028E310: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8028E314: b           L_8028E3A0
    // 0x8028E318: swc1        $f6, 0x2B8($s0)
    MEM_W(0X2B8, ctx->r16) = ctx->f6.u32l;
        goto L_8028E3A0;
    // 0x8028E318: swc1        $f6, 0x2B8($s0)
    MEM_W(0X2B8, ctx->r16) = ctx->f6.u32l;
L_8028E31C:
    // 0x8028E31C: lwc1        $f8, 0x2B8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2B8);
    // 0x8028E320: addiu       $t1, $s0, 0xAE0
    ctx->r9 = ADD32(ctx->r16, 0XAE0);
    // 0x8028E324: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x8028E328: nop

    // 0x8028E32C: bc1fl       L_8028E3A4
    if (!c1cs) {
        // 0x8028E330: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028E3A4;
    }
    goto skip_50;
    // 0x8028E330: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_50:
    // 0x8028E334: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8028E338: lwc1        $f4, 0x2C8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C8);
    // 0x8028E33C: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    // 0x8028E340: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8028E344: nop

    // 0x8028E348: bc1f        L_8028E360
    if (!c1cs) {
        // 0x8028E34C: nop
    
            goto L_8028E360;
    }
    // 0x8028E34C: nop

    // 0x8028E350: jal         0x802C583C
    // 0x8028E354: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_802C583C(rdram, ctx);
        goto after_121;
    // 0x8028E354: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_121:
    // 0x8028E358: b           L_8028E36C
    // 0x8028E35C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
        goto L_8028E36C;
    // 0x8028E35C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_8028E360:
    // 0x8028E360: jal         0x802C583C
    // 0x8028E364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802C583C(rdram, ctx);
        goto after_122;
    // 0x8028E364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_122:
    // 0x8028E368: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_8028E36C:
    // 0x8028E36C: lwc1        $f10, 0x2CC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2CC);
    // 0x8028E370: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028E374: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8028E378: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x8028E37C: nop

    // 0x8028E380: bc1f        L_8028E398
    if (!c1cs) {
        // 0x8028E384: nop
    
            goto L_8028E398;
    }
    // 0x8028E384: nop

    // 0x8028E388: jal         0x802C583C
    // 0x8028E38C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802C583C(rdram, ctx);
        goto after_123;
    // 0x8028E38C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_123:
    // 0x8028E390: b           L_8028E3A0
    // 0x8028E394: nop

        goto L_8028E3A0;
    // 0x8028E394: nop

L_8028E398:
    // 0x8028E398: jal         0x802C583C
    // 0x8028E39C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802C583C(rdram, ctx);
        goto after_124;
    // 0x8028E39C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_124:
L_8028E3A0:
    // 0x8028E3A0: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028E3A4:
    // 0x8028E3A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_8028E3A8:
    // 0x8028E3A8: bne         $v0, $at, L_8028E42C
    if (ctx->r2 != ctx->r1) {
        // 0x8028E3AC: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8028E42C;
    }
    // 0x8028E3AC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028E3B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028E3B4: lwc1        $f8, 0x29C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028E3B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8028E3BC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x8028E3C0: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8028E3C4: nop

    // 0x8028E3C8: bc1fl       L_8028E430
    if (!c1cs) {
        // 0x8028E3CC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8028E430;
    }
    goto skip_51;
    // 0x8028E3CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_51:
    // 0x8028E3D0: jal         0x8021B6D4
    // 0x8028E3D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021B6D4(rdram, ctx);
        goto after_125;
    // 0x8028E3D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_125:
    // 0x8028E3D8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8028E3DC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8028E3E0: jal         0x802297A8
    // 0x8028E3E4: lw          $a1, 0x354($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X354);
    static_3_802297A8(rdram, ctx);
        goto after_126;
    // 0x8028E3E4: lw          $a1, 0x354($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X354);
    after_126:
    // 0x8028E3E8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8028E3EC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8028E3F0: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8028E3F4: jal         0x8022A0D0
    // 0x8028E3F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_127;
    // 0x8028E3F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_127:
    // 0x8028E3FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028E400: addiu       $a0, $s0, 0xC74
    ctx->r4 = ADD32(ctx->r16, 0XC74);
    // 0x8028E404: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8028E408: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028E40C: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    // 0x8028E410: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x8028E414: jal         0x802C53E4
    // 0x8028E418: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_128;
    // 0x8028E418: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_128:
    // 0x8028E41C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8028E420: lw          $a1, 0x348($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X348);
    // 0x8028E424: jal         0x802C5468
    // 0x8028E428: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    static_3_802C5468(rdram, ctx);
        goto after_129;
    // 0x8028E428: lw          $a2, 0x34C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34C);
    after_129:
L_8028E42C:
    // 0x8028E42C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8028E430:
    // 0x8028E430: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8028E434: addiu       $sp, $sp, 0x350
    ctx->r29 = ADD32(ctx->r29, 0X350);
    // 0x8028E438: jr          $ra
    // 0x8028E43C: nop

    return;
    // 0x8028E43C: nop

;}
RECOMP_FUNC void D_802A3924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A39A4: beql        $a1, $zero, L_802A39B8
    if (ctx->r5 == 0) {
        // 0x802A39A8: sw          $zero, 0xDC($a0)
        MEM_W(0XDC, ctx->r4) = 0;
            goto L_802A39B8;
    }
    goto skip_0;
    // 0x802A39A8: sw          $zero, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = 0;
    skip_0:
    // 0x802A39AC: jr          $ra
    // 0x802A39B0: sw          $a1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r5;
    return;
    // 0x802A39B0: sw          $a1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r5;
    // 0x802A39B4: sw          $zero, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = 0;
L_802A39B8:
    // 0x802A39B8: jr          $ra
    // 0x802A39BC: nop

    return;
    // 0x802A39BC: nop

;}
RECOMP_FUNC void func_8024A8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024A8A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024A8A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024A8A8: jal         0x80241760
    // 0x8024A8AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_80241760(rdram, ctx);
        goto after_0;
    // 0x8024A8AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8024A8B0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8024A8B4: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8024A8B8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8024A8BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8024A8C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8024A8C4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8024A8C8: jal         0x80241DFC
    // 0x8024A8CC: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    static_3_80241DFC(rdram, ctx);
        goto after_1;
    // 0x8024A8CC: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    after_1:
    // 0x8024A8D0: jal         0x80241780
    // 0x8024A8D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241780(rdram, ctx);
        goto after_2;
    // 0x8024A8D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8024A8D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8024A8DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024A8E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024A8E4: jr          $ra
    // 0x8024A8E8: nop

    return;
    // 0x8024A8E8: nop

;}
RECOMP_FUNC void func_802D273C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D27BC: jr          $ra
    // 0x802D27C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802D27C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_80297D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297DB4: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80297DB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80297DBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80297DC0: addiu       $v0, $a0, 0x7FFF
    ctx->r2 = ADD32(ctx->r4, 0X7FFF);
    // 0x80297DC4: lh          $v0, 0x15B7($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X15B7);
    // 0x80297DC8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80297DCC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80297DD0: beq         $v0, $at, L_80297DF4
    if (ctx->r2 == ctx->r1) {
        // 0x80297DD4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80297DF4;
    }
    // 0x80297DD4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80297DD8: beq         $v0, $at, L_80297E58
    if (ctx->r2 == ctx->r1) {
        // 0x80297DDC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80297E58;
    }
    // 0x80297DDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80297DE0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80297DE4: beq         $v0, $at, L_80297EF4
    if (ctx->r2 == ctx->r1) {
        // 0x80297DE8: nop
    
            goto L_80297EF4;
    }
    // 0x80297DE8: nop

    // 0x80297DEC: b           L_80297F88
    // 0x80297DF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80297F88;
    // 0x80297DF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80297DF4:
    // 0x80297DF4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80297DF8: jal         0x80309740
    // 0x80297DFC: lwc1        $f12, 0x32A8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X32A8);
    static_3_80309740(rdram, ctx);
        goto after_0;
    // 0x80297DFC: lwc1        $f12, 0x32A8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X32A8);
    after_0:
    // 0x80297E00: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80297E04: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80297E08: lwc1        $f12, 0x32AC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X32AC);
    // 0x80297E0C: lwc1        $f0, 0x32A8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X32A8);
    // 0x80297E10: addiu       $a2, $v0, 0x6D0
    ctx->r6 = ADD32(ctx->r2, 0X6D0);
    // 0x80297E14: sub.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80297E18: swc1        $f4, 0x170($a2)
    MEM_W(0X170, ctx->r6) = ctx->f4.u32l;
    // 0x80297E1C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80297E20: jal         0x802902DC
    // 0x80297E24: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_802902DC(rdram, ctx);
        goto after_1;
    // 0x80297E24: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x80297E28: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80297E2C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80297E30: jal         0x802F96E8
    // 0x80297E34: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802F96E8(rdram, ctx);
        goto after_2;
    // 0x80297E34: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_2:
    // 0x80297E38: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80297E3C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80297E40: jal         0x802FA1C8
    // 0x80297E44: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA1C8(rdram, ctx);
        goto after_3;
    // 0x80297E44: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_3:
    // 0x80297E48: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80297E4C: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80297E50: b           L_80297F84
    // 0x80297E54: sh          $t6, 0x15B7($at)
    MEM_H(0X15B7, ctx->r1) = ctx->r14;
        goto L_80297F84;
    // 0x80297E54: sh          $t6, 0x15B7($at)
    MEM_H(0X15B7, ctx->r1) = ctx->r14;
L_80297E58:
    // 0x80297E58: jal         0x802AEE54
    // 0x80297E5C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802AEE54(rdram, ctx);
        goto after_4;
    // 0x80297E5C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_4:
    // 0x80297E60: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80297E64: lw          $v1, 0x210($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X210);
    // 0x80297E68: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80297E6C: lh          $t7, 0x60($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X60);
    // 0x80297E70: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x80297E74: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x80297E78: jalr        $t9
    // 0x80297E7C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80297E7C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_5:
    // 0x80297E80: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x80297E84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80297E88: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80297E8C: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80297E90: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80297E94: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80297E98: addiu       $a1, $s0, 0x70
    ctx->r5 = ADD32(ctx->r16, 0X70);
    // 0x80297E9C: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x80297EA0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80297EA4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80297EA8: jal         0x802AFF70
    // 0x80297EAC: nop

    static_3_802AFF70(rdram, ctx);
        goto after_6;
    // 0x80297EAC: nop

    after_6:
    // 0x80297EB0: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x80297EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80297EB8: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x80297EBC: lw          $t9, 0xAC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XAC);
    // 0x80297EC0: lh          $t8, 0xA8($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XA8);
    // 0x80297EC4: jalr        $t9
    // 0x80297EC8: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x80297EC8: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_7:
    // 0x80297ECC: jal         0x80207130
    // 0x80297ED0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_8;
    // 0x80297ED0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x80297ED4: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
    // 0x80297ED8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80297EDC: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80297EE0: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80297EE4: swc1        $f18, -0x6AEC($at)
    MEM_W(-0X6AEC, ctx->r1) = ctx->f18.u32l;
    // 0x80297EE8: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80297EEC: b           L_80297F84
    // 0x80297EF0: sh          $t0, 0x15B7($at)
    MEM_H(0X15B7, ctx->r1) = ctx->r8;
        goto L_80297F84;
    // 0x80297EF0: sh          $t0, 0x15B7($at)
    MEM_H(0X15B7, ctx->r1) = ctx->r8;
L_80297EF4:
    // 0x80297EF4: jal         0x80207130
    // 0x80297EF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_9;
    // 0x80297EF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80297EFC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80297F00: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80297F04: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80297F08: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80297F0C: lwc1        $f6, -0x6AEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6AEC);
    // 0x80297F10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80297F14: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80297F18: sub.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d - ctx->f8.d;
    // 0x80297F1C: c.lt.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d < ctx->f10.d;
    // 0x80297F20: nop

    // 0x80297F24: bc1f        L_80297F40
    if (!c1cs) {
        // 0x80297F28: nop
    
            goto L_80297F40;
    }
    // 0x80297F28: nop

    // 0x80297F2C: jal         0x80318420
    // 0x80297F30: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    static_3_80318420(rdram, ctx);
        goto after_10;
    // 0x80297F30: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    after_10:
    // 0x80297F34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80297F38: jal         0x8021B838
    // 0x80297F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8021B838(rdram, ctx);
        goto after_11;
    // 0x80297F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
L_80297F40:
    // 0x80297F40: jal         0x80207130
    // 0x80297F44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_12;
    // 0x80297F44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x80297F48: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80297F4C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80297F50: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80297F54: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80297F58: lwc1        $f18, -0x6AEC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6AEC);
    // 0x80297F5C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80297F60: addiu       $at, $s0, 0x7FFF
    ctx->r1 = ADD32(ctx->r16, 0X7FFF);
    // 0x80297F64: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x80297F68: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80297F6C: sub.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d - ctx->f6.d;
    // 0x80297F70: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80297F74: nop

    // 0x80297F78: bc1fl       L_80297F88
    if (!c1cs) {
        // 0x80297F7C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80297F88;
    }
    goto skip_0;
    // 0x80297F7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80297F80: sh          $t1, 0x15B7($at)
    MEM_H(0X15B7, ctx->r1) = ctx->r9;
L_80297F84:
    // 0x80297F84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80297F88:
    // 0x80297F88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80297F8C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x80297F90: jr          $ra
    // 0x80297F94: nop

    return;
    // 0x80297F94: nop

;}
RECOMP_FUNC void D_80237AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237AC0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80237AC4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80237AC8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80237ACC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80237AD0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80237AD4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80237AD8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80237ADC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80237AE0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80237AE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80237AE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80237AEC: lw          $s7, 0x14($a1)
    ctx->r23 = MEM_W(ctx->r5, 0X14);
    // 0x80237AF0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80237AF4: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80237AF8: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80237AFC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80237B00: sw          $t6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r14;
    // 0x80237B04: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x80237B08: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x80237B0C: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
    // 0x80237B10: sw          $t7, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r15;
    // 0x80237B14: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x80237B18: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80237B1C: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x80237B20: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x80237B24: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
    // 0x80237B28: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80237B2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237B34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80237B38: jal         0x80236CD0
    // 0x80237B3C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    static_3_80236CD0(rdram, ctx);
        goto after_0;
    // 0x80237B3C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_0:
    // 0x80237B40: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80237B44: jal         0x80242330
    // 0x80237B48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80242330(rdram, ctx);
        goto after_1;
    // 0x80237B48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80237B4C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80237B50: addiu       $t2, $zero, 0x4C
    ctx->r10 = ADD32(0, 0X4C);
    // 0x80237B54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237B58: sw          $t1, 0x38($s6)
    MEM_W(0X38, ctx->r22) = ctx->r9;
    // 0x80237B5C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80237B60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237B64: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80237B68: jal         0x80236CD0
    // 0x80237B6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_2;
    // 0x80237B6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80237B70: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80237B74: sw          $v0, 0x34($s6)
    MEM_W(0X34, ctx->r22) = ctx->r2;
    // 0x80237B78: sw          $t3, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->r11;
    // 0x80237B7C: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80237B80: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80237B84: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80237B88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237B90: jal         0x80236CD0
    // 0x80237B94: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    static_3_80236CD0(rdram, ctx);
        goto after_3;
    // 0x80237B94: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_3:
    // 0x80237B98: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x80237B9C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80237BA0: jal         0x802423C8
    // 0x80237BA4: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    static_3_802423C8(rdram, ctx);
        goto after_4;
    // 0x80237BA4: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    after_4:
    // 0x80237BA8: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x80237BAC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80237BB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237BB8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80237BBC: jal         0x80236CD0
    // 0x80237BC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_80236CD0(rdram, ctx);
        goto after_5;
    // 0x80237BC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80237BC4: sw          $v0, 0x30($s6)
    MEM_W(0X30, ctx->r22) = ctx->r2;
    // 0x80237BC8: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80237BCC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80237BD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80237BD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237BDC: jal         0x80236CD0
    // 0x80237BE0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    static_3_80236CD0(rdram, ctx);
        goto after_6;
    // 0x80237BE0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_6:
    // 0x80237BE4: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x80237BE8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80237BEC: jal         0x80242374
    // 0x80237BF0: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    static_3_80242374(rdram, ctx);
        goto after_7;
    // 0x80237BF0: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    after_7:
    // 0x80237BF4: lbu         $t7, 0x1C($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X1C);
    // 0x80237BF8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80237BFC: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80237C00: beq         $t7, $zero, L_80237C1C
    if (ctx->r15 == 0) {
        // 0x80237C04: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80237C1C;
    }
    // 0x80237C04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237C08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237C0C: jal         0x80242AD0
    // 0x80237C10: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    static_3_80242AD0(rdram, ctx);
        goto after_8;
    // 0x80237C10: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_8:
    // 0x80237C14: b           L_80237C2C
    // 0x80237C18: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
        goto L_80237C2C;
    // 0x80237C18: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
L_80237C1C:
    // 0x80237C1C: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x80237C20: jal         0x80242B70
    // 0x80237C24: lw          $a2, 0x34($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X34);
    static_3_80242B70(rdram, ctx);
        goto after_9;
    // 0x80237C24: lw          $a2, 0x34($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X34);
    after_9:
    // 0x80237C28: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
L_80237C2C:
    // 0x80237C2C: sw          $zero, 0x8($s6)
    MEM_W(0X8, ctx->r22) = 0;
    // 0x80237C30: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    // 0x80237C34: sw          $zero, 0x18($s6)
    MEM_W(0X18, ctx->r22) = 0;
    // 0x80237C38: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x80237C3C: sw          $zero, 0x10($s6)
    MEM_W(0X10, ctx->r22) = 0;
    // 0x80237C40: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80237C44: addiu       $t8, $zero, 0xDC
    ctx->r24 = ADD32(0, 0XDC);
    // 0x80237C48: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80237C4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237C54: jal         0x80236CD0
    // 0x80237C58: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    static_3_80236CD0(rdram, ctx);
        goto after_10;
    // 0x80237C58: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_10:
    // 0x80237C5C: lw          $t9, 0x4($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X4);
    // 0x80237C60: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80237C64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80237C68: blez        $t9, L_80237D28
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80237C6C: addiu       $a1, $s6, 0x4
        ctx->r5 = ADD32(ctx->r22, 0X4);
            goto L_80237D28;
    }
    // 0x80237C6C: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    // 0x80237C70: addiu       $s1, $v0, 0x8C
    ctx->r17 = ADD32(ctx->r2, 0X8C);
    // 0x80237C74: addiu       $s2, $v0, 0x58
    ctx->r18 = ADD32(ctx->r2, 0X58);
    // 0x80237C78: addiu       $s3, $v0, 0x10
    ctx->r19 = ADD32(ctx->r2, 0X10);
    // 0x80237C7C: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
L_80237C80:
    // 0x80237C80: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80237C84: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x80237C88: jal         0x80237150
    // 0x80237C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237150(rdram, ctx);
        goto after_11;
    // 0x80237C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80237C90: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80237C94: lw          $a1, 0x24($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X24);
    // 0x80237C98: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80237C9C: jal         0x802424A4
    // 0x80237CA0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    static_3_802424A4(rdram, ctx);
        goto after_12;
    // 0x80237CA0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_12:
    // 0x80237CA4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80237CA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237CAC: jal         0x80242CC0
    // 0x80237CB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80242CC0(rdram, ctx);
        goto after_13;
    // 0x80237CB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x80237CB4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80237CB8: jal         0x8024241C
    // 0x80237CBC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    static_3_8024241C(rdram, ctx);
        goto after_14;
    // 0x80237CBC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_14:
    // 0x80237CC0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80237CC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237CC8: jal         0x80243810
    // 0x80237CCC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    static_3_80243810(rdram, ctx);
        goto after_15;
    // 0x80237CCC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_15:
    // 0x80237CD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237CD4: jal         0x8024254C
    // 0x80237CD8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    static_3_8024254C(rdram, ctx);
        goto after_16;
    // 0x80237CD8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_16:
    // 0x80237CDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237CE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237CE4: jal         0x80243C24
    // 0x80237CE8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    static_3_80243C24(rdram, ctx);
        goto after_17;
    // 0x80237CE8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_17:
    // 0x80237CEC: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x80237CF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237CF4: jal         0x80244770
    // 0x80237CF8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_80244770(rdram, ctx);
        goto after_18;
    // 0x80237CF8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_18:
    // 0x80237CFC: addiu       $t0, $s5, 0x8C
    ctx->r8 = ADD32(ctx->r21, 0X8C);
    // 0x80237D00: sw          $t0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r8;
    // 0x80237D04: lw          $t1, 0x4($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X4);
    // 0x80237D08: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80237D0C: addiu       $s0, $s0, 0xDC
    ctx->r16 = ADD32(ctx->r16, 0XDC);
    // 0x80237D10: slt         $at, $s4, $t1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80237D14: addiu       $s1, $s1, 0xDC
    ctx->r17 = ADD32(ctx->r17, 0XDC);
    // 0x80237D18: addiu       $s2, $s2, 0xDC
    ctx->r18 = ADD32(ctx->r18, 0XDC);
    // 0x80237D1C: bne         $at, $zero, L_80237C80
    if (ctx->r1 != 0) {
        // 0x80237D20: addiu       $s3, $s3, 0xDC
        ctx->r19 = ADD32(ctx->r19, 0XDC);
            goto L_80237C80;
    }
    // 0x80237D20: addiu       $s3, $s3, 0xDC
    ctx->r19 = ADD32(ctx->r19, 0XDC);
    // 0x80237D24: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80237D28:
    // 0x80237D28: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80237D2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237D30: jal         0x80244880
    // 0x80237D34: lw          $a2, 0x30($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X30);
    static_3_80244880(rdram, ctx);
        goto after_19;
    // 0x80237D34: lw          $a2, 0x30($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X30);
    after_19:
    // 0x80237D38: lw          $a3, 0x8($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X8);
    // 0x80237D3C: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x80237D40: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80237D44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237D4C: jal         0x80236CD0
    // 0x80237D50: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    static_3_80236CD0(rdram, ctx);
        goto after_20;
    // 0x80237D50: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_20:
    // 0x80237D54: sw          $zero, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = 0;
    // 0x80237D58: lw          $t3, 0x8($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X8);
    // 0x80237D5C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80237D60: blezl       $t3, L_80237D90
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80237D64: sw          $s7, 0x28($s6)
        MEM_W(0X28, ctx->r22) = ctx->r23;
            goto L_80237D90;
    }
    goto skip_0;
    // 0x80237D64: sw          $s7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r23;
    skip_0:
    // 0x80237D68: lw          $t4, 0x2C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X2C);
L_80237D6C:
    // 0x80237D6C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80237D70: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80237D74: sw          $v1, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = ctx->r3;
    // 0x80237D78: lw          $t5, 0x8($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X8);
    // 0x80237D7C: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x80237D80: slt         $at, $s4, $t5
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80237D84: bnel        $at, $zero, L_80237D6C
    if (ctx->r1 != 0) {
        // 0x80237D88: lw          $t4, 0x2C($s6)
        ctx->r12 = MEM_W(ctx->r22, 0X2C);
            goto L_80237D6C;
    }
    goto skip_1;
    // 0x80237D88: lw          $t4, 0x2C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X2C);
    skip_1:
    // 0x80237D8C: sw          $s7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r23;
L_80237D90:
    // 0x80237D90: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80237D94: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80237D98: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80237D9C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80237DA0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80237DA4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80237DA8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80237DAC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80237DB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80237DB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80237DB8: jr          $ra
    // 0x80237DBC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80237DBC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void D_80283D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283E00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283E08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80283E0C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80283E10: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80283E14: jal         0x802D510C
    // 0x80283E18: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    static_3_802D510C(rdram, ctx);
        goto after_0;
    // 0x80283E18: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x80283E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283E20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283E24: jr          $ra
    // 0x80283E28: nop

    return;
    // 0x80283E28: nop

;}
RECOMP_FUNC void D_8029409C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029411C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80294120: jr          $ra
    // 0x80294124: swc1        $f12, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80294124: swc1        $f12, 0xF4($a0)
    MEM_W(0XF4, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802E754C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E75CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E75D0: sb          $zero, 0x19A($a0)
    MEM_B(0X19A, ctx->r4) = 0;
    // 0x802E75D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E75D8: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E75DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E75E0: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E75E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E75E8: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E75EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E75F0: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E75F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E75F8: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E75FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7600: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E7604: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7608: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802E760C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E7610: jr          $ra
    // 0x802E7614: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    return;
    // 0x802E7614: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
;}
RECOMP_FUNC void D_8023DC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DC98: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023DC9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DCA0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8023DCA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023DCA8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8023DCAC: jal         0x802474B0
    // 0x8023DCB0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    static_3_802474B0(rdram, ctx);
        goto after_0;
    // 0x8023DCB0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_0:
    // 0x8023DCB4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8023DCB8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8023DCBC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DCC0: lhu         $t7, 0x2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2);
    // 0x8023DCC4: bne         $t7, $zero, L_8023DCD8
    if (ctx->r15 != 0) {
        // 0x8023DCC8: sh          $t7, 0x0($at)
        MEM_H(0X0, ctx->r1) = ctx->r15;
            goto L_8023DCD8;
    }
    // 0x8023DCC8: sh          $t7, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r15;
    // 0x8023DCCC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8023DCD0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DCD4: sh          $t8, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r24;
L_8023DCD8:
    // 0x8023DCD8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8023DCDC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_8023DCE0:
    // 0x8023DCE0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023DCE4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8023DCE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023DCEC: jal         0x802374B0
    // 0x8023DCF0: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    static_3_802374B0(rdram, ctx);
        goto after_1;
    // 0x8023DCF0: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    after_1:
    // 0x8023DCF4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8023DCF8: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8023DCFC: lhu         $s0, 0x0($t1)
    ctx->r16 = MEM_HU(ctx->r9, 0X0);
    // 0x8023DD00: beq         $s0, $at, L_8023DD18
    if (ctx->r16 == ctx->r1) {
        // 0x8023DD04: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_8023DD18;
    }
    // 0x8023DD04: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8023DD08: beq         $s0, $at, L_8023DE28
    if (ctx->r16 == ctx->r1) {
        // 0x8023DD0C: nop
    
            goto L_8023DE28;
    }
    // 0x8023DD0C: nop

    // 0x8023DD10: b           L_8023DCE0
    // 0x8023DD14: nop

        goto L_8023DCE0;
    // 0x8023DD14: nop

L_8023DD18:
    // 0x8023DD18: jal         0x802474C0
    // 0x8023DD1C: nop

    static_3_802474C0(rdram, ctx);
        goto after_2;
    // 0x8023DD1C: nop

    after_2:
    // 0x8023DD20: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8023DD24: lhu         $t2, 0x0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X0);
    // 0x8023DD28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DD2C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8023DD30: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x8023DD34: bne         $t4, $zero, L_8023DD78
    if (ctx->r12 != 0) {
        // 0x8023DD38: sh          $t3, 0x0($at)
        MEM_H(0X0, ctx->r1) = ctx->r11;
            goto L_8023DD78;
    }
    // 0x8023DD38: sh          $t3, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r11;
    // 0x8023DD3C: jal         0x802474B0
    // 0x8023DD40: nop

    static_3_802474B0(rdram, ctx);
        goto after_3;
    // 0x8023DD40: nop

    after_3:
    // 0x8023DD44: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8023DD48: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8023DD4C: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x8023DD50: beq         $t6, $zero, L_8023DD68
    if (ctx->r14 == 0) {
        // 0x8023DD54: nop
    
            goto L_8023DD68;
    }
    // 0x8023DD54: nop

    // 0x8023DD58: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8023DD5C: lw          $a1, 0x14($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X14);
    // 0x8023DD60: jal         0x80236B80
    // 0x8023DD64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80236B80(rdram, ctx);
        goto after_4;
    // 0x8023DD64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_8023DD68:
    // 0x8023DD68: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8023DD6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DD70: lhu         $t8, 0x2($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2);
    // 0x8023DD74: sh          $t8, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r24;
L_8023DD78:
    // 0x8023DD78: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8023DD7C: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8023DD80: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8023DD84: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DD88: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8023DD8C: beq         $t1, $zero, L_8023DDC0
    if (ctx->r9 == 0) {
        // 0x8023DD90: sw          $t0, 0x0($at)
        MEM_W(0X0, ctx->r1) = ctx->r8;
            goto L_8023DDC0;
    }
    // 0x8023DD90: sw          $t0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r8;
    // 0x8023DD94: jal         0x80238B80
    // 0x8023DD98: nop

    static_3_80238B80(rdram, ctx);
        goto after_5;
    // 0x8023DD98: nop

    after_5:
    // 0x8023DD9C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8023DDA0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8023DDA4: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x8023DDA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DDAC: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x8023DDB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DDB4: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x8023DDB8: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x8023DDBC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8023DDC0:
    // 0x8023DDC0: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8023DDC4: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x8023DDC8: jal         0x80238B80
    // 0x8023DDCC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    static_3_80238B80(rdram, ctx);
        goto after_6;
    // 0x8023DDCC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_6:
    // 0x8023DDD0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DDD4: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8023DDD8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8023DDDC: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8023DDE0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8023DDE4: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8023DDE8: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x8023DDEC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8023DDF0: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x8023DDF4: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8023DDF8: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x8023DDFC: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8023DE00: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x8023DE04: sltu        $at, $t5, $t3
    ctx->r1 = ctx->r13 < ctx->r11 ? 1 : 0;
    // 0x8023DE08: addu        $t4, $at, $t0
    ctx->r12 = ADD32(ctx->r1, ctx->r8);
    // 0x8023DE0C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DE10: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8023DE14: sw          $t4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r12;
    // 0x8023DE18: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8023DE1C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8023DE20: b           L_8023DCE0
    // 0x8023DE24: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
        goto L_8023DCE0;
    // 0x8023DE24: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
L_8023DE28:
    // 0x8023DE28: jal         0x8024711C
    // 0x8023DE2C: nop

    static_3_8024711C(rdram, ctx);
        goto after_7;
    // 0x8023DE2C: nop

    after_7:
    // 0x8023DE30: b           L_8023DCE0
    // 0x8023DE34: nop

        goto L_8023DCE0;
    // 0x8023DE34: nop

    // 0x8023DE38: nop

    // 0x8023DE3C: nop

    // 0x8023DE40: nop

    // 0x8023DE44: nop

    // 0x8023DE48: nop

    // 0x8023DE4C: nop

    // 0x8023DE50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DE54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023DE58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8023DE5C: jr          $ra
    // 0x8023DE60: nop

    return;
    // 0x8023DE60: nop

;}
RECOMP_FUNC void D_8022C430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C430: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022C434: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8022C438: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022C43C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8022C440: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8022C444: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8022C448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C44C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8022C450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C454: bne         $t8, $zero, L_8022C524
    if (ctx->r24 != 0) {
        // 0x8022C458: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_8022C524;
    }
    // 0x8022C458: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022C45C: bne         $v0, $zero, L_8022C480
    if (ctx->r2 != 0) {
        // 0x8022C460: lui         $t9, 0x0
        ctx->r25 = S32(0X0 << 16);
            goto L_8022C480;
    }
    // 0x8022C460: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8022C464: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C468: jal         0x80231A24
    // 0x8022C46C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022C46C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022C470: jal         0x8022D3F0
    // 0x8022C474: nop

    static_3_8022D3F0(rdram, ctx);
        goto after_1;
    // 0x8022C474: nop

    after_1:
    // 0x8022C478: b           L_8022C528
    // 0x8022C47C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022C528;
    // 0x8022C47C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C480:
    // 0x8022C480: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x8022C484: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8022C488: bnel        $t9, $zero, L_8022C528
    if (ctx->r25 != 0) {
        // 0x8022C48C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022C528;
    }
    goto skip_0;
    // 0x8022C48C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022C490: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x8022C494: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x8022C498: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8022C49C: beq         $a1, $at, L_8022C4AC
    if (ctx->r5 == ctx->r1) {
        // 0x8022C4A0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8022C4AC;
    }
    // 0x8022C4A0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C4A4: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x8022C4A8: beq         $t0, $zero, L_8022C4C4
    if (ctx->r8 == 0) {
        // 0x8022C4AC: lui         $a2, 0x0
        ctx->r6 = S32(0X0 << 16);
            goto L_8022C4C4;
    }
L_8022C4AC:
    // 0x8022C4AC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8022C4B0: lbu         $a2, 0x0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X0);
    // 0x8022C4B4: jal         0x80231A24
    // 0x8022C4B8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x8022C4B8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x8022C4BC: b           L_8022C528
    // 0x8022C4C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022C528;
    // 0x8022C4C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C4C4:
    // 0x8022C4C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8022C4C8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x8022C4CC: jal         0x8022D560
    // 0x8022C4D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_8022D560(rdram, ctx);
        goto after_3;
    // 0x8022C4D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022C4D4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C4D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022C4DC: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    // 0x8022C4E0: jal         0x80236B80
    // 0x8022C4E4: lw          $a1, 0x54($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X54);
    static_3_80236B80(rdram, ctx);
        goto after_4;
    // 0x8022C4E4: lw          $a1, 0x54($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X54);
    after_4:
    // 0x8022C4E8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8022C4EC: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8022C4F0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022C4F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C4F8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C4FC: bne         $t2, $zero, L_8022C50C
    if (ctx->r10 != 0) {
        // 0x8022C500: sb          $t1, 0x0($at)
        MEM_B(0X0, ctx->r1) = ctx->r9;
            goto L_8022C50C;
    }
    // 0x8022C500: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x8022C504: jal         0x8023D7A0
    // 0x8022C508: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    func_8023D7A0(rdram, ctx);
        goto after_5;
    // 0x8022C508: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    after_5:
L_8022C50C:
    // 0x8022C50C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8022C510: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x8022C514: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022C518: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8022C51C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8022C520: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
L_8022C524:
    // 0x8022C524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022C528:
    // 0x8022C528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022C52C: jr          $ra
    // 0x8022C530: nop

    return;
    // 0x8022C530: nop

;}
RECOMP_FUNC void D_802E9F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EA014: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802EA018: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802EA01C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802EA020: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802EA024: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802EA028: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802EA02C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x802EA030: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802EA034: jal         0x8020664C
    // 0x802EA038: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8020664C(rdram, ctx);
        goto after_0;
    // 0x802EA038: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802EA03C: jal         0x80207130
    // 0x802EA040: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_1;
    // 0x802EA040: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802EA044: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x802EA048: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EA04C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802EA050: jal         0x8031A3E0
    // 0x802EA054: swc1        $f4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f4.u32l;
    static_3_8031A3E0(rdram, ctx);
        goto after_2;
    // 0x802EA054: swc1        $f4, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->f4.u32l;
    after_2:
    // 0x802EA058: blez        $v0, L_802EA0F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802EA05C: lui         $s3, 0x0
        ctx->r19 = S32(0X0 << 16);
            goto L_802EA0F0;
    }
    // 0x802EA05C: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802EA060: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802EA064: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802EA068: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
L_802EA06C:
    // 0x802EA06C: jal         0x8031A3EC
    // 0x802EA070: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8031A3EC(rdram, ctx);
        goto after_3;
    // 0x802EA070: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x802EA074: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x802EA078: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802EA07C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802EA080: bltz        $v1, L_802EA08C
    if (SIGNED(ctx->r3) < 0) {
        // 0x802EA084: slti        $at, $v1, 0x21
        ctx->r1 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_802EA08C;
    }
    // 0x802EA084: slti        $at, $v1, 0x21
    ctx->r1 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x802EA088: bne         $at, $zero, L_802EA0A0
    if (ctx->r1 != 0) {
        // 0x802EA08C: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_802EA0A0;
    }
L_802EA08C:
    // 0x802EA08C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802EA090: jal         0x80231A24
    // 0x802EA094: lh          $a2, 0x0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x802EA094: lh          $a2, 0x0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X0);
    after_4:
    // 0x802EA098: b           L_802EA0D8
    // 0x802EA09C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_802EA0D8;
    // 0x802EA09C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802EA0A0:
    // 0x802EA0A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802EA0A4: jal         0x8031A40C
    // 0x802EA0A8: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    static_3_8031A40C(rdram, ctx);
        goto after_5;
    // 0x802EA0A8: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    after_5:
    // 0x802EA0AC: beql        $v0, $zero, L_802EA0D8
    if (ctx->r2 == 0) {
        // 0x802EA0B0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802EA0D8;
    }
    goto skip_0;
    // 0x802EA0B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x802EA0B4: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x802EA0B8: bnel        $t6, $zero, L_802EA0D8
    if (ctx->r14 != 0) {
        // 0x802EA0BC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802EA0D8;
    }
    goto skip_1;
    // 0x802EA0BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x802EA0C0: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x802EA0C4: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x802EA0C8: lh          $t7, 0x8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8);
    // 0x802EA0CC: jalr        $t9
    // 0x802EA0D0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802EA0D0: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    after_6:
    // 0x802EA0D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802EA0D8:
    // 0x802EA0D8: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x802EA0DC: jal         0x8031A3E0
    // 0x802EA0E0: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
    static_3_8031A3E0(rdram, ctx);
        goto after_7;
    // 0x802EA0E0: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
    after_7:
    // 0x802EA0E4: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802EA0E8: bne         $at, $zero, L_802EA06C
    if (ctx->r1 != 0) {
        // 0x802EA0EC: nop
    
            goto L_802EA06C;
    }
    // 0x802EA0EC: nop

L_802EA0F0:
    // 0x802EA0F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802EA0F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802EA0F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802EA0FC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802EA100: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802EA104: jr          $ra
    // 0x802EA108: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x802EA108: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_8027A5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A618: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A61C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A620: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A624: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027A628: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027A62C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8027A630: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A634: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A638: addiu       $a1, $t6, 0x68A0
    ctx->r5 = ADD32(ctx->r14, 0X68A0);
    // 0x8027A63C: addiu       $a0, $a0, 0x689C
    ctx->r4 = ADD32(ctx->r4, 0X689C);
    // 0x8027A640: addiu       $a3, $t6, 0x68A1
    ctx->r7 = ADD32(ctx->r14, 0X68A1);
    // 0x8027A644: jal         0x802A1E50
    // 0x8027A648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802A1E50(rdram, ctx);
        goto after_0;
    // 0x8027A648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8027A64C: beq         $v0, $zero, L_8027A66C
    if (ctx->r2 == 0) {
        // 0x8027A650: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027A66C;
    }
    // 0x8027A650: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A654: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8027A658: jal         0x802C603C
    // 0x8027A65C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_802C603C(rdram, ctx);
        goto after_1;
    // 0x8027A65C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027A660: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027A664: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027A668: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
L_8027A66C:
    // 0x8027A66C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A670: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027A674: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8027A678: jr          $ra
    // 0x8027A67C: nop

    return;
    // 0x8027A67C: nop

;}
RECOMP_FUNC void D_8021FF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021FF50: jr          $ra
    // 0x8021FF54: nop

    return;
    // 0x8021FF54: nop

;}
RECOMP_FUNC void D_80227C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227C5C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80227C60: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80227C64: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80227C68: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80227C6C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80227C70: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80227C74: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80227C78: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80227C7C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80227C80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227C84: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80227C88: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80227C8C: jal         0x80223840
    // 0x80227C90: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227C90: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_0:
    // 0x80227C94: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x80227C98: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x80227C9C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80227CA0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80227CA4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227CA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227CAC: jal         0x8022393C
    // 0x80227CB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80227CB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80227CB4: beq         $v0, $zero, L_80227CF0
    if (ctx->r2 == 0) {
        // 0x80227CB8: lui         $s0, 0x434F
        ctx->r16 = S32(0X434F << 16);
            goto L_80227CF0;
    }
    // 0x80227CB8: lui         $s0, 0x434F
    ctx->r16 = S32(0X434F << 16);
    // 0x80227CBC: ori         $s0, $s0, 0x4D4D
    ctx->r16 = ctx->r16 | 0X4D4D;
L_80227CC0:
    // 0x80227CC0: bnel        $v0, $s0, L_80227CD8
    if (ctx->r2 != ctx->r16) {
        // 0x80227CC4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80227CD8;
    }
    goto skip_0;
    // 0x80227CC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x80227CC8: jal         0x8022573C
    // 0x80227CCC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    static_3_8022573C(rdram, ctx);
        goto after_2;
    // 0x80227CCC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x80227CD0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80227CD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80227CD8:
    // 0x80227CD8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227CDC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80227CE0: jal         0x8022393C
    // 0x80227CE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_3;
    // 0x80227CE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80227CE8: bne         $v0, $zero, L_80227CC0
    if (ctx->r2 != 0) {
        // 0x80227CEC: nop
    
            goto L_80227CC0;
    }
    // 0x80227CEC: nop

L_80227CF0:
    // 0x80227CF0: jal         0x802238F0
    // 0x80227CF4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802238F0(rdram, ctx);
        goto after_4;
    // 0x80227CF4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x80227CF8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80227CFC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80227D00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80227D04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80227D08: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80227D0C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80227D10: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80227D14: jr          $ra
    // 0x80227D18: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80227D18: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802B9618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B9698: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B969C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B96A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B96A4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802B96A8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802B96AC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x802B96B0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x802B96B4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802B96B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B96BC: bne         $t6, $at, L_802B9700
    if (ctx->r14 != ctx->r1) {
        // 0x802B96C0: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_802B9700;
    }
    // 0x802B96C0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802B96C4: jal         0x8021BA90
    // 0x802B96C8: nop

    func_8021BA90(rdram, ctx);
        goto after_0;
    // 0x802B96C8: nop

    after_0:
    // 0x802B96CC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802B96D0: bne         $v0, $at, L_802B96F8
    if (ctx->r2 != ctx->r1) {
        // 0x802B96D4: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_802B96F8;
    }
    // 0x802B96D4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x802B96D8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B96DC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802B96E0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802B96E4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802B96E8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802B96EC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802B96F0: jal         0x80231A24
    // 0x802B96F4: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802B96F4: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    after_1:
L_802B96F8:
    // 0x802B96F8: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x802B96FC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_802B9700:
    // 0x802B9700: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802B9704: jal         0x8021ACB0
    // 0x802B9708: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    static_3_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x802B9708: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_2:
    // 0x802B970C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802B9710: jal         0x8021B838
    // 0x802B9714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B838(rdram, ctx);
        goto after_3;
    // 0x802B9714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x802B9718: jal         0x8022970C
    // 0x802B971C: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x802B971C: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    after_4:
    // 0x802B9720: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x802B9724: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B9728: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B972C: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    // 0x802B9730: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x802B9734: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802B9738: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B973C: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x802B9740: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x802B9744: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B9748: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802B974C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B9750: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802B9754: sb          $t2, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r10;
    // 0x802B9758: swc1        $f4, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f4.u32l;
    // 0x802B975C: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
    // 0x802B9760: sw          $t1, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r9;
    // 0x802B9764: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    // 0x802B9768: swc1        $f0, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f0.u32l;
    // 0x802B976C: swc1        $f8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f8.u32l;
    // 0x802B9770: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B9774: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B9778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B977C: jr          $ra
    // 0x802B9780: nop

    return;
    // 0x802B9780: nop

;}
RECOMP_FUNC void D_802E2714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E2794: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802E2798: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802E279C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802E27A0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802E27A4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x802E27A8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802E27AC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802E27B0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802E27B4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802E27B8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802E27BC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802E27C0: bne         $a0, $zero, L_802E27D8
    if (ctx->r4 != 0) {
        // 0x802E27C4: sdc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
            goto L_802E27D8;
    }
    // 0x802E27C4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802E27C8: jal         0x802C67EC
    // 0x802E27CC: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802E27CC: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    after_0:
    // 0x802E27D0: beq         $v0, $zero, L_802E28B0
    if (ctx->r2 == 0) {
        // 0x802E27D4: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_802E28B0;
    }
    // 0x802E27D4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_802E27D8:
    // 0x802E27D8: jal         0x80308668
    // 0x802E27DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x802E27DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x802E27E0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E27E4: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E27E8: sw          $t6, 0x6C($s2)
    MEM_W(0X6C, ctx->r18) = ctx->r14;
    // 0x802E27EC: jal         0x80311AC4
    // 0x802E27F0: addiu       $a0, $s2, 0x70
    ctx->r4 = ADD32(ctx->r18, 0X70);
    static_3_80311AC4(rdram, ctx);
        goto after_2;
    // 0x802E27F0: addiu       $a0, $s2, 0x70
    ctx->r4 = ADD32(ctx->r18, 0X70);
    after_2:
    // 0x802E27F4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802E27F8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802E27FC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802E2800: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x802E2804: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802E2808: sw          $zero, 0x3F8($s2)
    MEM_W(0X3F8, ctx->r18) = 0;
    // 0x802E280C: sb          $zero, 0x548($s2)
    MEM_B(0X548, ctx->r18) = 0;
    // 0x802E2810: sb          $zero, 0x549($s2)
    MEM_B(0X549, ctx->r18) = 0;
    // 0x802E2814: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x802E2818: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802E281C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x802E2820: ori         $s6, $zero, 0xFFFF
    ctx->r22 = 0 | 0XFFFF;
    // 0x802E2824: addiu       $s5, $zero, 0x32
    ctx->r21 = ADD32(0, 0X32);
    // 0x802E2828: addiu       $s3, $zero, -0x550
    ctx->r19 = ADD32(0, -0X550);
L_802E282C:
    // 0x802E282C: sw          $zero, 0x550($s0)
    MEM_W(0X550, ctx->r16) = 0;
    // 0x802E2830: jal         0x8022BE54
    // 0x802E2834: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    static_3_8022BE54(rdram, ctx);
        goto after_3;
    // 0x802E2834: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_3:
    // 0x802E2838: bne         $s2, $s3, L_802E2858
    if (ctx->r18 != ctx->r19) {
        // 0x802E283C: sw          $v0, 0x550($s0)
        MEM_W(0X550, ctx->r16) = ctx->r2;
            goto L_802E2858;
    }
    // 0x802E283C: sw          $v0, 0x550($s0)
    MEM_W(0X550, ctx->r16) = ctx->r2;
    // 0x802E2840: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802E2844: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x802E2848: jal         0x80231A24
    // 0x802E284C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x802E284C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x802E2850: b           L_802E28A8
    // 0x802E2854: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_802E28A8;
    // 0x802E2854: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802E2858:
    // 0x802E2858: lw          $t7, 0x550($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X550);
    // 0x802E285C: jal         0x8023499C
    // 0x802E2860: sw          $s6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r22;
    static_3_8023499C(rdram, ctx);
        goto after_5;
    // 0x802E2860: sw          $s6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r22;
    after_5:
    // 0x802E2864: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802E2868: lw          $t8, 0x550($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X550);
    // 0x802E286C: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
    // 0x802E2870: lw          $v0, 0x550($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X550);
    // 0x802E2874: lwc1        $f2, 0x24($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802E2878: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x802E287C: nop

    // 0x802E2880: bc1fl       L_802E2894
    if (!c1cs) {
        // 0x802E2884: c.lt.s      $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
            goto L_802E2894;
    }
    goto skip_0;
    // 0x802E2884: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    skip_0:
    // 0x802E2888: b           L_802E28A4
    // 0x802E288C: swc1        $f22, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f22.u32l;
        goto L_802E28A4;
    // 0x802E288C: swc1        $f22, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f22.u32l;
    // 0x802E2890: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
L_802E2894:
    // 0x802E2894: nop

    // 0x802E2898: bc1fl       L_802E28A8
    if (!c1cs) {
        // 0x802E289C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802E28A8;
    }
    goto skip_1;
    // 0x802E289C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x802E28A0: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
L_802E28A4:
    // 0x802E28A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802E28A8:
    // 0x802E28A8: bne         $s1, $s5, L_802E282C
    if (ctx->r17 != ctx->r21) {
        // 0x802E28AC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802E282C;
    }
    // 0x802E28AC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_802E28B0:
    // 0x802E28B0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802E28B4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x802E28B8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802E28BC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802E28C0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802E28C4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802E28C8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802E28CC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802E28D0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802E28D4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802E28D8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x802E28DC: jr          $ra
    // 0x802E28E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x802E28E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802EBC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EBC94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802EBC98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EBC9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EBCA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EBCA4: swc1        $f0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f0.u32l;
    // 0x802EBCA8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EBCAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802EBCB0: sh          $zero, 0xE8($a0)
    MEM_H(0XE8, ctx->r4) = 0;
    // 0x802EBCB4: sb          $t6, 0xEA($a0)
    MEM_B(0XEA, ctx->r4) = ctx->r14;
    // 0x802EBCB8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802EBCBC: swc1        $f0, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->f0.u32l;
    // 0x802EBCC0: jal         0x8022970C
    // 0x802EBCC4: swc1        $f4, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802EBCC4: swc1        $f4, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x802EBCC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EBCCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EBCD0: jr          $ra
    // 0x802EBCD4: nop

    return;
    // 0x802EBCD4: nop

;}
RECOMP_FUNC void D_802E8AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8B74: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E8B78: jr          $ra
    // 0x802E8B7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802E8B7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802A3714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3794: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A3798: jr          $ra
    // 0x802A379C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A379C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80212FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80212FD0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80212FD4: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80212FD8: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80212FDC: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80212FE0: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80212FE4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80212FE8: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80212FEC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80212FF0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80212FF4: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x80212FF8: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80212FFC: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x80213000: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x80213004: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80213008: lwc1        $f18, 0xC0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8021300C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80213010: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x80213014: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80213018: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x8021301C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80213020: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80213024: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x80213028: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021302C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80213030: swc1        $f12, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f12.u32l;
    // 0x80213034: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80213038: swc1        $f14, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f14.u32l;
    // 0x8021303C: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x80213040: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x80213044: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x80213048: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x8021304C: jal         0x80234C78
    // 0x80213050: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    static_3_80234C78(rdram, ctx);
        goto after_0;
    // 0x80213050: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_0:
    // 0x80213054: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x80213058: jal         0x80234D30
    // 0x8021305C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_1;
    // 0x8021305C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x80213060: bne         $v0, $zero, L_80213070
    if (ctx->r2 != 0) {
        // 0x80213064: lwc1        $f10, 0x98($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
            goto L_80213070;
    }
    // 0x80213064: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80213068: b           L_8021342C
    // 0x8021306C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021342C;
    // 0x8021306C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213070:
    // 0x80213070: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80213074: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80213078: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8021307C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80213080: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80213084: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80213088: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021308C: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x80213090: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80213094: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80213098: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x8021309C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x802130A0: jal         0x80234BE4
    // 0x802130A4: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    static_3_80234BE4(rdram, ctx);
        goto after_2;
    // 0x802130A4: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802130A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802130AC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x802130B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802130B4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802130B8: nop

    // 0x802130BC: bc1fl       L_802130D0
    if (!c1cs) {
        // 0x802130C0: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802130D0;
    }
    goto skip_0;
    // 0x802130C0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_0:
    // 0x802130C4: b           L_802130D0
    // 0x802130C8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802130D0;
    // 0x802130C8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802130CC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802130D0:
    // 0x802130D0: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x802130D4: nop

    // 0x802130D8: bc1f        L_802130E8
    if (!c1cs) {
        // 0x802130DC: nop
    
            goto L_802130E8;
    }
    // 0x802130DC: nop

    // 0x802130E0: b           L_8021342C
    // 0x802130E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021342C;
    // 0x802130E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802130E8:
    // 0x802130E8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802130EC: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x802130F0: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x802130F4: nop

    // 0x802130F8: bc1f        L_80213128
    if (!c1cs) {
        // 0x802130FC: nop
    
            goto L_80213128;
    }
    // 0x802130FC: nop

    // 0x80213100: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x80213104: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80213108: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021310C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80213110: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x80213114: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80213118: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x8021311C: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80213120: b           L_8021342C
    // 0x80213124: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
        goto L_8021342C;
    // 0x80213124: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
L_80213128:
    // 0x80213128: mul.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021312C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x80213130: mul.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80213134: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80213138: jal         0x8022AA40
    // 0x8021313C: sub.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f0.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_3;
    // 0x8021313C: sub.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f0.fl;
    after_3:
    // 0x80213140: addiu       $s0, $sp, 0x5C
    ctx->r16 = ADD32(ctx->r29, 0X5C);
    // 0x80213144: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80213148: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8021314C: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80213150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213154: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80213158: jal         0x80234C78
    // 0x8021315C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    static_3_80234C78(rdram, ctx);
        goto after_4;
    // 0x8021315C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_4:
    // 0x80213160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213164: jal         0x80234D30
    // 0x80213168: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_5;
    // 0x80213168: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8021316C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80213170: jal         0x80234BE4
    // 0x80213174: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80234BE4(rdram, ctx);
        goto after_6;
    // 0x80213174: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80213178: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021317C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80213180: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80213184: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80213188: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021318C: bc1fl       L_802131A8
    if (!c1cs) {
        // 0x80213190: lwc1        $f0, 0x40($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
            goto L_802131A8;
    }
    goto skip_1;
    // 0x80213190: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    skip_1:
    // 0x80213194: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80213198: jal         0x80234C14
    // 0x8021319C: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    static_3_80234C14(rdram, ctx);
        goto after_7;
    // 0x8021319C: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x802131A0: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802131A4: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
L_802131A8:
    // 0x802131A8: lwc1        $f12, 0xB8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802131AC: lwc1        $f14, 0xBC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802131B0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802131B4: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802131B8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802131BC: lwc1        $f2, 0xB4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802131C0: bc1fl       L_802131D4
    if (!c1cs) {
        // 0x802131C4: lwc1        $f10, 0xC4($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
            goto L_802131D4;
    }
    goto skip_2;
    // 0x802131C4: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    skip_2:
    // 0x802131C8: b           L_8021342C
    // 0x802131CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021342C;
    // 0x802131CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802131D0: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
L_802131D4:
    // 0x802131D4: lwc1        $f18, 0xC8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x802131D8: sub.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x802131DC: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802131E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802131E4: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x802131E8: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802131EC: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x802131F0: sub.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x802131F4: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802131F8: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x802131FC: sub.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80213200: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x80213204: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80213208: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x8021320C: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x80213210: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x80213214: sub.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x80213218: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x8021321C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80213220: jal         0x80234C78
    // 0x80213224: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    static_3_80234C78(rdram, ctx);
        goto after_8;
    // 0x80213224: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80213228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021322C: jal         0x80234D30
    // 0x80213230: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_9;
    // 0x80213230: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x80213234: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80213238: jal         0x80234BE4
    // 0x8021323C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80234BE4(rdram, ctx);
        goto after_10;
    // 0x8021323C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x80213240: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80213244: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80213248: bc1fl       L_80213280
    if (!c1cs) {
        // 0x8021324C: lwc1        $f4, 0x28($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80213280;
    }
    goto skip_3;
    // 0x8021324C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    skip_3:
    // 0x80213250: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80213254: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80213258: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8021325C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80213260: nop

    // 0x80213264: bc1fl       L_80213280
    if (!c1cs) {
        // 0x80213268: lwc1        $f4, 0x28($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80213280;
    }
    goto skip_4;
    // 0x80213268: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    skip_4:
    // 0x8021326C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80213270: jal         0x80234C14
    // 0x80213274: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    static_3_80234C14(rdram, ctx);
        goto after_11;
    // 0x80213274: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x80213278: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021327C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
L_80213280:
    // 0x80213280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213284: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80213288: nop

    // 0x8021328C: bc1fl       L_802132A0
    if (!c1cs) {
        // 0x80213290: lwc1        $f18, 0xC0($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
            goto L_802132A0;
    }
    goto skip_5;
    // 0x80213290: lwc1        $f18, 0xC0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
    skip_5:
    // 0x80213294: b           L_8021342C
    // 0x80213298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021342C;
    // 0x80213298: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021329C: lwc1        $f18, 0xC0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
L_802132A0:
    // 0x802132A0: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802132A4: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802132A8: lwc1        $f12, 0xC4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x802132AC: sub.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802132B0: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x802132B4: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802132B8: sub.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x802132BC: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802132C0: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802132C4: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802132C8: lwc1        $f2, 0xA0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802132CC: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x802132D0: sub.s       $f18, $f6, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x802132D4: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x802132D8: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x802132DC: sub.s       $f12, $f4, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x802132E0: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x802132E4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x802132E8: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x802132EC: swc1        $f12, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f12.u32l;
    // 0x802132F0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x802132F4: jal         0x80234C78
    // 0x802132F8: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    static_3_80234C78(rdram, ctx);
        goto after_12;
    // 0x802132F8: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x802132FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213300: jal         0x80234D30
    // 0x80213304: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80234D30(rdram, ctx);
        goto after_13;
    // 0x80213304: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x80213308: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x8021330C: jal         0x80234BE4
    // 0x80213310: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80234BE4(rdram, ctx);
        goto after_14;
    // 0x80213310: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x80213314: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80213318: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8021331C: bc1fl       L_80213354
    if (!c1cs) {
        // 0x80213320: lwc1        $f8, 0x28($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80213354;
    }
    goto skip_6;
    // 0x80213320: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    skip_6:
    // 0x80213324: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80213328: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8021332C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80213330: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80213334: nop

    // 0x80213338: bc1fl       L_80213354
    if (!c1cs) {
        // 0x8021333C: lwc1        $f8, 0x28($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80213354;
    }
    goto skip_7;
    // 0x8021333C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    skip_7:
    // 0x80213340: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80213344: jal         0x80234C14
    // 0x80213348: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    static_3_80234C14(rdram, ctx);
        goto after_15;
    // 0x80213348: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_15:
    // 0x8021334C: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80213350: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
L_80213354:
    // 0x80213354: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80213358: nop

    // 0x8021335C: bc1fl       L_80213370
    if (!c1cs) {
        // 0x80213360: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_80213370;
    }
    goto skip_8;
    // 0x80213360: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_8:
    // 0x80213364: b           L_8021342C
    // 0x80213368: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021342C;
    // 0x80213368: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021336C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_80213370:
    // 0x80213370: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80213374: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x80213378: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x8021337C: nop

    // 0x80213380: bc1fl       L_8021340C
    if (!c1cs) {
        // 0x80213384: swc1        $f16, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
            goto L_8021340C;
    }
    goto skip_9;
    // 0x80213384: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
    skip_9:
    // 0x80213388: mul.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8021338C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80213390: jal         0x8022AA40
    // 0x80213394: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_16;
    // 0x80213394: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_16:
    // 0x80213398: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x8021339C: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802133A0: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x802133A4: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x802133A8: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x802133AC: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802133B0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802133B4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802133B8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802133BC: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802133C0: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x802133C4: mul.s       $f16, $f4, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802133C8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802133CC: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802133D0: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x802133D4: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802133D8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802133DC: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x802133E0: lwc1        $f18, 0x94($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802133E4: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x802133E8: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802133EC: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802133F0: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x802133F4: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x802133F8: jal         0x80234D30
    // 0x802133FC: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    static_3_80234D30(rdram, ctx);
        goto after_17;
    // 0x802133FC: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x80213400: b           L_80213410
    // 0x80213404: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
        goto L_80213410;
    // 0x80213404: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x80213408: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
L_8021340C:
    // 0x8021340C: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
L_80213410:
    // 0x80213410: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80213414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80213418: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x8021341C: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80213420: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x80213424: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80213428: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
L_8021342C:
    // 0x8021342C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80213430: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80213434: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80213438: jr          $ra
    // 0x8021343C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8021343C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80248090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void D_802D288C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D290C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802D2910: beq         $a1, $zero, L_802D2924
    if (ctx->r5 == 0) {
        // 0x802D2914: nop
    
            goto L_802D2924;
    }
    // 0x802D2914: nop

    // 0x802D2918: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802D291C: lbu         $t6, 0x3($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X3);
    // 0x802D2920: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
L_802D2924:
    // 0x802D2924: jr          $ra
    // 0x802D2928: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802D2928: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802D0510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D0590: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0594: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0598: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802D059C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x802D05A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D05A4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D05A8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D05AC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802D05B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D05B4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802D05B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802D05BC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802D05C0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802D05C4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802D05C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802D05CC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D05D0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802D05D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802D05D8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802D05DC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802D05E0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802D05E4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802D05E8: jal         0x80308530
    // 0x802D05EC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_0;
    // 0x802D05EC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x802D05F0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D05F4: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D05F8: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x802D05FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D0600: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0604: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0608: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802D060C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D0610: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802D0614: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802D0618: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802D061C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802D0620: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802D0624: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802D0628: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802D062C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802D0630: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D0634: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802D0638: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x802D063C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802D0640: jal         0x80308530
    // 0x802D0644: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    static_3_80308530(rdram, ctx);
        goto after_1;
    // 0x802D0644: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802D0648: lui         $at, 0xC57A
    ctx->r1 = S32(0XC57A << 16);
    // 0x802D064C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D0650: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D0654: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D0658: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802D065C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802D0660: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802D0664: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802D0668: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802D066C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802D0670: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802D0674: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802D0678: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802D067C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802D0680: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802D0684: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D0688: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x802D068C: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802D0690: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x802D0694: jal         0x80308530
    // 0x802D0698: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_2;
    // 0x802D0698: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x802D069C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D06A0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D06A4: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x802D06A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D06AC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D06B0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D06B4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802D06B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D06BC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802D06C0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802D06C4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802D06C8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802D06CC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802D06D0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802D06D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802D06D8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x802D06DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D06E0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802D06E4: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802D06E8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802D06EC: jal         0x80308530
    // 0x802D06F0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    static_3_80308530(rdram, ctx);
        goto after_3;
    // 0x802D06F0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x802D06F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802D06F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802D06FC: jr          $ra
    // 0x802D0700: nop

    return;
    // 0x802D0700: nop

;}
RECOMP_FUNC void D_80298D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298D8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80298D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298D94: jal         0x8028D9B4
    // 0x80298D98: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D9B4(rdram, ctx);
        goto after_0;
    // 0x80298D98: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x80298D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298DA4: jr          $ra
    // 0x80298DA8: nop

    return;
    // 0x80298DA8: nop

;}
RECOMP_FUNC void D_802D1964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D19E4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802D19E8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802D19EC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802D19F0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802D19F4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D19F8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x802D19FC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x802D1A00: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x802D1A04: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x802D1A08: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802D1A0C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802D1A10: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802D1A14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D1A18: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802D1A1C: jal         0x80231A24
    // 0x802D1A20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D1A20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D1A24: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x802D1A28: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x802D1A2C: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x802D1A30: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x802D1A34: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802D1A38: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x802D1A3C: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x802D1A40: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x802D1A44: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x802D1A48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802D1A4C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802D1A50: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
L_802D1A54:
    // 0x802D1A54: sll         $t6, $s0, 5
    ctx->r14 = S32(ctx->r16 << 5);
    // 0x802D1A58: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x802D1A5C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802D1A60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802D1A64: or          $s1, $fp, $zero
    ctx->r17 = ctx->r30 | 0;
    // 0x802D1A68: c.le.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl <= ctx->f4.fl;
    // 0x802D1A6C: nop

    // 0x802D1A70: bc1f        L_802D1A88
    if (!c1cs) {
        // 0x802D1A74: nop
    
            goto L_802D1A88;
    }
    // 0x802D1A74: nop

    // 0x802D1A78: jal         0x80302E10
    // 0x802D1A7C: lh          $a1, 0x1C($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X1C);
    static_3_80302E10(rdram, ctx);
        goto after_1;
    // 0x802D1A7C: lh          $a1, 0x1C($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X1C);
    after_1:
    // 0x802D1A80: b           L_802D1A88
    // 0x802D1A84: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_802D1A88;
    // 0x802D1A84: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_802D1A88:
    // 0x802D1A88: jal         0x8020372C
    // 0x802D1A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020372C(rdram, ctx);
        goto after_2;
    // 0x802D1A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802D1A90: beq         $v0, $zero, L_802D1AC4
    if (ctx->r2 == 0) {
        // 0x802D1A94: or          $a3, $s7, $zero
        ctx->r7 = ctx->r23 | 0;
            goto L_802D1AC4;
    }
    // 0x802D1A94: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x802D1A98: jal         0x802037B4
    // 0x802D1A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802037B4(rdram, ctx);
        goto after_3;
    // 0x802D1A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802D1AA0: bne         $s4, $v0, L_802D1AB0
    if (ctx->r20 != ctx->r2) {
        // 0x802D1AA4: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_802D1AB0;
    }
    // 0x802D1AA4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802D1AA8: b           L_802D1AC4
    // 0x802D1AAC: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
        goto L_802D1AC4;
    // 0x802D1AAC: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
L_802D1AB0:
    // 0x802D1AB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802D1AB4: jal         0x80302E10
    // 0x802D1AB8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    static_3_80302E10(rdram, ctx);
        goto after_4;
    // 0x802D1AB8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    after_4:
    // 0x802D1ABC: b           L_802D1AC4
    // 0x802D1AC0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
        goto L_802D1AC4;
    // 0x802D1AC0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_802D1AC4:
    // 0x802D1AC4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x802D1AC8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x802D1ACC: jal         0x80231A24
    // 0x802D1AD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x802D1AD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x802D1AD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802D1AD8: andi        $s2, $s0, 0xFF
    ctx->r18 = ctx->r16 & 0XFF;
    // 0x802D1ADC: slti        $at, $s2, 0xFF
    ctx->r1 = SIGNED(ctx->r18) < 0XFF ? 1 : 0;
    // 0x802D1AE0: bne         $at, $zero, L_802D1A54
    if (ctx->r1 != 0) {
        // 0x802D1AE4: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_802D1A54;
    }
    // 0x802D1AE4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x802D1AE8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D1AEC: jal         0x80231A24
    // 0x802D1AF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x802D1AF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x802D1AF4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802D1AF8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802D1AFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D1B00: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802D1B04: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802D1B08: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802D1B0C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802D1B10: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802D1B14: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802D1B18: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802D1B1C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802D1B20: jr          $ra
    // 0x802D1B24: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x802D1B24: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void D_802D2438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D24B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802D24BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802D24C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802D24C4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802D24C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D24CC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802D24D0: lw          $s0, 0x2924($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X2924);
    // 0x802D24D4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D24D8: jal         0x80231A24
    // 0x802D24DC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D24DC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D24E0: lw          $t6, 0x2928($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X2928);
    // 0x802D24E4: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x802D24E8: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x802D24EC: beq         $s0, $t6, L_802D2534
    if (ctx->r16 == ctx->r14) {
        // 0x802D24F0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802D2534;
    }
    // 0x802D24F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_802D24F4:
    // 0x802D24F4: jal         0x80302E10
    // 0x802D24F8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    static_3_80302E10(rdram, ctx);
        goto after_1;
    // 0x802D24F8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x802D24FC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802D2500: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802D2504: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802D2508: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802D250C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802D2510: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802D2514: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x802D2518: sdc1        $f10, 0x10($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X10, ctx->r29);
    // 0x802D251C: jal         0x80231A24
    // 0x802D2520: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x802D2520: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x802D2524: lw          $s0, 0x1C($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X1C);
    // 0x802D2528: lw          $t7, 0x2928($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X2928);
    // 0x802D252C: bnel        $s0, $t7, L_802D24F4
    if (ctx->r16 != ctx->r15) {
        // 0x802D2530: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802D24F4;
    }
    goto skip_0;
    // 0x802D2530: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_802D2534:
    // 0x802D2534: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D2538: jal         0x80231A24
    // 0x802D253C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802D253C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x802D2540: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802D2544: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D2548: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802D254C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802D2550: jr          $ra
    // 0x802D2554: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802D2554: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802DFE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DFEB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802DFEBC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802DFEC0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802DFEC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802DFEC8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802DFECC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DFED0: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802DFED4: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x802DFED8: sb          $zero, 0x4A30($a0)
    MEM_B(0X4A30, ctx->r4) = 0;
    // 0x802DFEDC: sb          $zero, 0x4A31($a0)
    MEM_B(0X4A31, ctx->r4) = 0;
    // 0x802DFEE0: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x802DFEE4: swc1        $f0, 0x4A2C($a0)
    MEM_W(0X4A2C, ctx->r4) = ctx->f0.u32l;
    // 0x802DFEE8: swc1        $f12, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f12.u32l;
    // 0x802DFEEC: jal         0x80224CA8
    // 0x802DFEF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802DFEF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802DFEF4: jal         0x80224CA8
    // 0x802DFEF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802DFEF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x802DFEFC: jal         0x80224CA8
    // 0x802DFF00: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802DFF00: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_2:
    // 0x802DFF04: jal         0x8030A9AC
    // 0x802DFF08: nop

    static_3_8030A9AC(rdram, ctx);
        goto after_3;
    // 0x802DFF08: nop

    after_3:
    // 0x802DFF0C: jal         0x80224CA8
    // 0x802DFF10: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x802DFF10: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_4:
    // 0x802DFF14: jal         0x80224CA8
    // 0x802DFF18: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    static_3_80224CA8(rdram, ctx);
        goto after_5;
    // 0x802DFF18: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_5:
    // 0x802DFF1C: jal         0x80224CA8
    // 0x802DFF20: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    static_3_80224CA8(rdram, ctx);
        goto after_6;
    // 0x802DFF20: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_6:
    // 0x802DFF24: jal         0x80224CA8
    // 0x802DFF28: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    static_3_80224CA8(rdram, ctx);
        goto after_7;
    // 0x802DFF28: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_7:
    // 0x802DFF2C: jal         0x80224CA8
    // 0x802DFF30: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    static_3_80224CA8(rdram, ctx);
        goto after_8;
    // 0x802DFF30: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_8:
    // 0x802DFF34: jal         0x80224CA8
    // 0x802DFF38: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    static_3_80224CA8(rdram, ctx);
        goto after_9;
    // 0x802DFF38: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_9:
    // 0x802DFF3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DFF40: jal         0x80205AA0
    // 0x802DFF44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205AA0(rdram, ctx);
        goto after_10;
    // 0x802DFF44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x802DFF48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DFF4C: jal         0x80205EBC
    // 0x802DFF50: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    static_3_80205EBC(rdram, ctx);
        goto after_11;
    // 0x802DFF50: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    after_11:
    // 0x802DFF54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DFF58: jal         0x80205E0C
    // 0x802DFF5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_80205E0C(rdram, ctx);
        goto after_12;
    // 0x802DFF5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x802DFF60: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DFF64: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802DFF68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DFF6C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802DFF70: jal         0x80205E0C
    // 0x802DFF74: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
    static_3_80205E0C(rdram, ctx);
        goto after_13;
    // 0x802DFF74: sw          $t6, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r14;
    after_13:
    // 0x802DFF78: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802DFF7C: jal         0x802B0078
    // 0x802DFF80: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    static_3_802B0078(rdram, ctx);
        goto after_14;
    // 0x802DFF80: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_14:
    // 0x802DFF84: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DFF88: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802DFF8C: addiu       $t8, $zero, 0x46
    ctx->r24 = ADD32(0, 0X46);
    // 0x802DFF90: sb          $t7, 0x716C($v0)
    MEM_B(0X716C, ctx->r2) = ctx->r15;
    // 0x802DFF94: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DFF98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFF9C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802DFFA0: sb          $t8, 0x716D($v0)
    MEM_B(0X716D, ctx->r2) = ctx->r24;
    // 0x802DFFA4: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802DFFA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFFAC: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802DFFB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DFFB4: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x802DFFB8: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802DFFBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802DFFC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802DFFC4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802DFFC8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802DFFCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DFFD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DFFD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802DFFD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802DFFDC: jal         0x8030890C
    // 0x802DFFE0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    static_3_8030890C(rdram, ctx);
        goto after_15;
    // 0x802DFFE0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_15:
    // 0x802DFFE4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802DFFE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802DFFEC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DFFF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DFFF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802DFFF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802DFFFC: jal         0x80309B88
    // 0x802E0000: swc1        $f6, 0x7160($v0)
    MEM_W(0X7160, ctx->r2) = ctx->f6.u32l;
    static_3_80309B88(rdram, ctx);
        goto after_16;
    // 0x802E0000: swc1        $f6, 0x7160($v0)
    MEM_W(0X7160, ctx->r2) = ctx->f6.u32l;
    after_16:
    // 0x802E0004: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802E0008: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802E000C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802E0010: jr          $ra
    // 0x802E0014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802E0014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_80223418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223418: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022341C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80223420: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80223424: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x80223428: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8022342C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223430: or          $t8, $t7, $a0
    ctx->r24 = ctx->r15 | ctx->r4;
    // 0x80223434: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80223438: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8022343C: jal         0x80220C44
    // 0x80223440: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    static_3_80220C44(rdram, ctx);
        goto after_0;
    // 0x80223440: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80223444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022344C: jr          $ra
    // 0x80223450: nop

    return;
    // 0x80223450: nop

;}
RECOMP_FUNC void D_802A1E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1ED4: jr          $ra
    // 0x802A1ED8: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
    return;
    // 0x802A1ED8: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
;}
RECOMP_FUNC void D_802CFC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CFC88: jr          $ra
    // 0x802CFC8C: lbu         $v0, 0x36C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X36C);
    return;
    // 0x802CFC8C: lbu         $v0, 0x36C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X36C);
;}
RECOMP_FUNC void D_802A67B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6838: bne         $a0, $zero, L_802A6850
    if (ctx->r4 != 0) {
        // 0x802A683C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802A6850;
    }
    // 0x802A683C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802A6840: jal         0x802C67EC
    // 0x802A6844: addiu       $a0, $zero, 0x354
    ctx->r4 = ADD32(0, 0X354);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802A6844: addiu       $a0, $zero, 0x354
    ctx->r4 = ADD32(0, 0X354);
    after_0:
    // 0x802A6848: beq         $v0, $zero, L_802A686C
    if (ctx->r2 == 0) {
        // 0x802A684C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A686C;
    }
    // 0x802A684C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802A6850:
    // 0x802A6850: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802A6854: jal         0x8031D6D0
    // 0x802A6858: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8031D6D0(rdram, ctx);
        goto after_1;
    // 0x802A6858: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802A685C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802A6860: jal         0x8031D59C
    // 0x802A6864: addiu       $a0, $a1, 0x258
    ctx->r4 = ADD32(ctx->r5, 0X258);
    static_3_8031D59C(rdram, ctx);
        goto after_2;
    // 0x802A6864: addiu       $a0, $a1, 0x258
    ctx->r4 = ADD32(ctx->r5, 0X258);
    after_2:
    // 0x802A6868: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802A686C:
    // 0x802A686C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6874: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802A6878: jr          $ra
    // 0x802A687C: nop

    return;
    // 0x802A687C: nop

;}
RECOMP_FUNC void D_802989F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298A78: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80298A7C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80298A80: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80298A84: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80298A88: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80298A8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80298A90: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80298A94: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80298A98: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80298A9C: addiu       $t0, $t7, 0x78
    ctx->r8 = ADD32(ctx->r15, 0X78);
    // 0x80298AA0: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
L_80298AA4:
    // 0x80298AA4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80298AA8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80298AAC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80298AB0: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x80298AB4: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80298AB8: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80298ABC: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80298AC0: bne         $t7, $t0, L_80298AA4
    if (ctx->r15 != ctx->r8) {
        // 0x80298AC4: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80298AA4;
    }
    // 0x80298AC4: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80298AC8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80298ACC: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298AD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80298AD4: sb          $t1, 0x151B($at)
    MEM_B(0X151B, ctx->r1) = ctx->r9;
    // 0x80298AD8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80298ADC: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80298AE0: swc1        $f4, -0x6AE4($at)
    MEM_W(-0X6AE4, ctx->r1) = ctx->f4.u32l;
    // 0x80298AE4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298AE8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298AEC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80298AF0: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80298AF4: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298AF8: addiu       $a1, $s1, 0x7FFF
    ctx->r5 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298AFC: swc1        $f6, -0x6AE0($at)
    MEM_W(-0X6AE0, ctx->r1) = ctx->f6.u32l;
    // 0x80298B00: lw          $a1, 0x14D1($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X14D1);
    // 0x80298B04: jal         0x8021ACB0
    // 0x80298B08: lw          $a0, 0x14CD($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14CD);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x80298B08: lw          $a0, 0x14CD($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14CD);
    after_0:
    // 0x80298B0C: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298B10: lw          $a0, 0x14CD($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14CD);
    // 0x80298B14: jal         0x8021B838
    // 0x80298B18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x80298B18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80298B1C: ori         $at, $zero, 0x94D4
    ctx->r1 = 0 | 0X94D4;
    // 0x80298B20: addu        $s3, $s1, $at
    ctx->r19 = ADD32(ctx->r17, ctx->r1);
    // 0x80298B24: jal         0x8022970C
    // 0x80298B28: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x80298B28: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x80298B2C: lui         $a1, 0xBF32
    ctx->r5 = S32(0XBF32 << 16);
    // 0x80298B30: ori         $a1, $a1, 0xB8C7
    ctx->r5 = ctx->r5 | 0XB8C7;
    // 0x80298B34: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80298B38: jal         0x802D01D4
    // 0x80298B3C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_3;
    // 0x80298B3C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_3:
    // 0x80298B40: lui         $a1, 0xC119
    ctx->r5 = S32(0XC119 << 16);
    // 0x80298B44: ori         $a1, $a1, 0x7C58
    ctx->r5 = ctx->r5 | 0X7C58;
    // 0x80298B48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80298B4C: jal         0x802D01D4
    // 0x80298B50: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x80298B50: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_4:
    // 0x80298B54: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80298B58: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x80298B5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298B60: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298B64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298B68: swc1        $f8, 0x1504($v0)
    MEM_W(0X1504, ctx->r2) = ctx->f8.u32l;
    // 0x80298B6C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298B70: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80298B74: swc1        $f10, 0x1508($v0)
    MEM_W(0X1508, ctx->r2) = ctx->f10.u32l;
    // 0x80298B78: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80298B7C: jal         0x803049F8
    // 0x80298B80: swc1        $f16, 0x150C($v0)
    MEM_W(0X150C, ctx->r2) = ctx->f16.u32l;
    static_3_803049F8(rdram, ctx);
        goto after_5;
    // 0x80298B80: swc1        $f16, 0x150C($v0)
    MEM_W(0X150C, ctx->r2) = ctx->f16.u32l;
    after_5:
    // 0x80298B84: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298B88: sw          $v0, 0x1525($at)
    MEM_W(0X1525, ctx->r1) = ctx->r2;
    // 0x80298B8C: addiu       $s0, $sp, 0x34
    ctx->r16 = ADD32(ctx->r29, 0X34);
    // 0x80298B90: addiu       $s2, $sp, 0xAC
    ctx->r18 = ADD32(ctx->r29, 0XAC);
    // 0x80298B94: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
L_80298B98:
    // 0x80298B98: lw          $a0, 0x1525($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1525);
    // 0x80298B9C: jal         0x80304A64
    // 0x80298BA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80304A64(rdram, ctx);
        goto after_6;
    // 0x80298BA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80298BA4: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x80298BA8: bnel        $s0, $s2, L_80298B98
    if (ctx->r16 != ctx->r18) {
        // 0x80298BAC: addiu       $a0, $s1, 0x7FFF
        ctx->r4 = ADD32(ctx->r17, 0X7FFF);
            goto L_80298B98;
    }
    goto skip_0;
    // 0x80298BAC: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    skip_0:
    // 0x80298BB0: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x80298BB4: lw          $a0, 0x14CD($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14CD);
    // 0x80298BB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80298BBC: jal         0x8021B4B0
    // 0x80298BC0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_7;
    // 0x80298BC0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_7:
    // 0x80298BC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80298BC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80298BCC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80298BD0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80298BD4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80298BD8: jr          $ra
    // 0x80298BDC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80298BDC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void D_802E6210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6290: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E6294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E6298: jal         0x80228DE0
    // 0x802E629C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802E629C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x802E62A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E62A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E62A8: jr          $ra
    // 0x802E62AC: nop

    return;
    // 0x802E62AC: nop

;}
RECOMP_FUNC void D_80235090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235090: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235098: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8023509C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x802350A0: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x802350A4: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x802350A8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802350AC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802350B0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802350B4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802350B8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x802350BC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x802350C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x802350C4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x802350C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802350CC: jal         0x8023F37C
    // 0x802350D0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x802350D0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x802350D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802350D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802350DC: jr          $ra
    // 0x802350E0: nop

    return;
    // 0x802350E0: nop

;}
RECOMP_FUNC void D_8028E3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028E440: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x8028E444: sw          $a1, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r5;
    // 0x8028E448: lui         $at, 0x4394
    ctx->r1 = S32(0X4394 << 16);
    // 0x8028E44C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028E450: lwc1        $f6, 0x194($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8028E454: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8028E458: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028E45C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028E460: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8028E464: sw          $a2, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r6;
    // 0x8028E468: bc1t        L_8028E490
    if (c1cs) {
        // 0x8028E46C: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_8028E490;
    }
    // 0x8028E46C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028E470: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028E474: lwc1        $f16, 0x2EC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X2EC);
    // 0x8028E478: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8028E47C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8028E480: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x8028E484: nop

    // 0x8028E488: bc1fl       L_8028E50C
    if (!c1cs) {
        // 0x8028E48C: lwc1        $f4, 0xE24($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XE24);
            goto L_8028E50C;
    }
    goto skip_0;
    // 0x8028E48C: lwc1        $f4, 0xE24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE24);
    skip_0:
L_8028E490:
    // 0x8028E490: lbu         $t6, 0x28E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X28E);
    // 0x8028E494: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8028E498: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8028E49C: bnel        $t6, $zero, L_8028E50C
    if (ctx->r14 != 0) {
        // 0x8028E4A0: lwc1        $f4, 0xE24($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XE24);
            goto L_8028E50C;
    }
    goto skip_1;
    // 0x8028E4A0: lwc1        $f4, 0xE24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE24);
    skip_1:
    // 0x8028E4A4: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8028E4A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8028E4AC: bnel        $t7, $zero, L_8028E50C
    if (ctx->r15 != 0) {
        // 0x8028E4B0: lwc1        $f4, 0xE24($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XE24);
            goto L_8028E50C;
    }
    goto skip_2;
    // 0x8028E4B0: lwc1        $f4, 0xE24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE24);
    skip_2:
    // 0x8028E4B4: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x8028E4B8: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028E4BC: jal         0x80302980
    // 0x8028E4C0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_0;
    // 0x8028E4C0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x8028E4C4: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028E4C8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x8028E4CC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8028E4D0: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    // 0x8028E4D4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8028E4D8: jal         0x80302988
    // 0x8028E4DC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x8028E4DC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x8028E4E0: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028E4E4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x8028E4E8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8028E4EC: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    // 0x8028E4F0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8028E4F4: jal         0x80302988
    // 0x8028E4F8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_2;
    // 0x8028E4F8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x8028E4FC: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028E500: jal         0x80302A7C
    // 0x8028E504: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_3;
    // 0x8028E504: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x8028E508: lwc1        $f4, 0xE24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE24);
L_8028E50C:
    // 0x8028E50C: lwc1        $f6, 0x194($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8028E510: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    // 0x8028E514: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028E518: nop

    // 0x8028E51C: bc1t        L_8028E544
    if (c1cs) {
        // 0x8028E520: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_8028E544;
    }
    // 0x8028E520: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028E524: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028E528: lwc1        $f8, 0x2EC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2EC);
    // 0x8028E52C: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8028E530: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8028E534: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8028E538: nop

    // 0x8028E53C: bc1fl       L_8028E5E4
    if (!c1cs) {
        // 0x8028E540: lbu         $t5, 0x290($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X290);
            goto L_8028E5E4;
    }
    goto skip_3;
    // 0x8028E540: lbu         $t5, 0x290($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X290);
    skip_3:
L_8028E544:
    // 0x8028E544: bne         $v0, $zero, L_8028E5E0
    if (ctx->r2 != 0) {
        // 0x8028E548: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_8028E5E0;
    }
    // 0x8028E548: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028E54C: jal         0x8021BA1C
    // 0x8028E550: lw          $a0, 0xE0C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0C);
    static_3_8021BA1C(rdram, ctx);
        goto after_4;
    // 0x8028E550: lw          $a0, 0xE0C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0C);
    after_4:
    // 0x8028E554: jal         0x8021BAE0
    // 0x8028E558: lw          $a0, 0xE0C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0C);
    static_3_8021BAE0(rdram, ctx);
        goto after_5;
    // 0x8028E558: lw          $a0, 0xE0C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0C);
    after_5:
    // 0x8028E55C: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x8028E560: sw          $t9, 0xE0C($s0)
    MEM_W(0XE0C, ctx->r16) = ctx->r25;
    // 0x8028E564: lw          $a0, 0xE10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE10);
    // 0x8028E568: jal         0x8021BA1C
    // 0x8028E56C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021BA1C(rdram, ctx);
        goto after_6;
    // 0x8028E56C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x8028E570: jal         0x8021BAE0
    // 0x8028E574: lw          $a0, 0xE10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE10);
    static_3_8021BAE0(rdram, ctx);
        goto after_7;
    // 0x8028E574: lw          $a0, 0xE10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE10);
    after_7:
    // 0x8028E578: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x8028E57C: sw          $t0, 0xE10($s0)
    MEM_W(0XE10, ctx->r16) = ctx->r8;
    // 0x8028E580: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x8028E584: jal         0x802D692C
    // 0x8028E588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D692C(rdram, ctx);
        goto after_8;
    // 0x8028E588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8028E58C: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x8028E590: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8028E594: sb          $t1, 0x28E($s0)
    MEM_B(0X28E, ctx->r16) = ctx->r9;
    // 0x8028E598: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8028E59C: lh          $t2, 0x60($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X60);
    // 0x8028E5A0: addiu       $a1, $sp, 0x14C
    ctx->r5 = ADD32(ctx->r29, 0X14C);
    // 0x8028E5A4: jalr        $t9
    // 0x8028E5A8: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8028E5A8: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    after_9:
    // 0x8028E5AC: lw          $v0, 0xED8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XED8);
    // 0x8028E5B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8028E5B4: lh          $t3, 0x18($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X18);
    // 0x8028E5B8: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8028E5BC: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x8028E5C0: jalr        $t9
    // 0x8028E5C4: addiu       $a0, $a0, 0xE28
    ctx->r4 = ADD32(ctx->r4, 0XE28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x8028E5C4: addiu       $a0, $a0, 0xE28
    ctx->r4 = ADD32(ctx->r4, 0XE28);
    after_10:
    // 0x8028E5C8: addiu       $a0, $s0, 0xE2C
    ctx->r4 = ADD32(ctx->r16, 0XE2C);
    // 0x8028E5CC: jal         0x80228DE0
    // 0x8028E5D0: addiu       $a1, $sp, 0x14C
    ctx->r5 = ADD32(ctx->r29, 0X14C);
    func_80228DE0(rdram, ctx);
        goto after_11;
    // 0x8028E5D0: addiu       $a1, $sp, 0x14C
    ctx->r5 = ADD32(ctx->r29, 0X14C);
    after_11:
    // 0x8028E5D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8028E5D8: sb          $t4, 0xED4($s0)
    MEM_B(0XED4, ctx->r16) = ctx->r12;
    // 0x8028E5DC: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028E5E0:
    // 0x8028E5E0: lbu         $t5, 0x290($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X290);
L_8028E5E4:
    // 0x8028E5E4: beq         $t5, $zero, L_8028E650
    if (ctx->r13 == 0) {
        // 0x8028E5E8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8028E650;
    }
    // 0x8028E5E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028E5EC: bne         $v0, $at, L_8028E650
    if (ctx->r2 != ctx->r1) {
        // 0x8028E5F0: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_8028E650;
    }
    // 0x8028E5F0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8028E5F4: sb          $t6, 0x28E($s0)
    MEM_B(0X28E, ctx->r16) = ctx->r14;
    // 0x8028E5F8: sb          $zero, 0x290($s0)
    MEM_B(0X290, ctx->r16) = 0;
    // 0x8028E5FC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8028E600: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028E604: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8028E608: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028E60C: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028E610: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8028E614: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028E618: swc1        $f8, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f8.u32l;
    // 0x8028E61C: jal         0x8021B838
    // 0x8028E620: swc1        $f16, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f16.u32l;
    static_3_8021B838(rdram, ctx);
        goto after_12;
    // 0x8028E620: swc1        $f16, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f16.u32l;
    after_12:
    // 0x8028E624: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028E628: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028E62C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8028E630: jal         0x8021B240
    // 0x8028E634: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_13;
    // 0x8028E634: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x8028E638: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028E63C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028E640: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8028E644: jal         0x8021B240
    // 0x8028E648: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_14;
    // 0x8028E648: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x8028E64C: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028E650:
    // 0x8028E650: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028E654: bne         $v0, $at, L_8028E810
    if (ctx->r2 != ctx->r1) {
        // 0x8028E658: lui         $at, 0x4416
        ctx->r1 = S32(0X4416 << 16);
            goto L_8028E810;
    }
    // 0x8028E658: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8028E65C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028E660: lwc1        $f10, 0x194($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8028E664: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8028E668: nop

    // 0x8028E66C: bc1fl       L_8028E6E8
    if (!c1cs) {
        // 0x8028E670: lbu         $v0, 0x28F($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28F);
            goto L_8028E6E8;
    }
    goto skip_4;
    // 0x8028E670: lbu         $v0, 0x28F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28F);
    skip_4:
    // 0x8028E674: lwc1        $f0, 0x29C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028E678: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028E67C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8028E680: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8028E684: nop

    // 0x8028E688: bc1fl       L_8028E6E8
    if (!c1cs) {
        // 0x8028E68C: lbu         $v0, 0x28F($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28F);
            goto L_8028E6E8;
    }
    goto skip_5;
    // 0x8028E68C: lbu         $v0, 0x28F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28F);
    skip_5:
    // 0x8028E690: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8028E694: jal         0x80200B20
    // 0x8028E698: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    static_3_80200B20(rdram, ctx);
        goto after_15;
    // 0x8028E698: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    after_15:
    // 0x8028E69C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8028E6A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028E6A4: lwc1        $f6, 0x198($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
    // 0x8028E6A8: lwc1        $f10, 0x29C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028E6AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028E6B0: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8028E6B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028E6B8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028E6BC: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8028E6C0: swc1        $f18, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f18.u32l;
    // 0x8028E6C4: lwc1        $f6, 0x29C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028E6C8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028E6CC: nop

    // 0x8028E6D0: bc1fl       L_8028E6E8
    if (!c1cs) {
        // 0x8028E6D4: lbu         $v0, 0x28F($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28F);
            goto L_8028E6E8;
    }
    goto skip_6;
    // 0x8028E6D4: lbu         $v0, 0x28F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28F);
    skip_6:
    // 0x8028E6D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028E6DC: nop

    // 0x8028E6E0: swc1        $f16, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f16.u32l;
    // 0x8028E6E4: lbu         $v0, 0x28F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28F);
L_8028E6E8:
    // 0x8028E6E8: bne         $v0, $zero, L_8028E7A4
    if (ctx->r2 != 0) {
        // 0x8028E6EC: nop
    
            goto L_8028E7A4;
    }
    // 0x8028E6EC: nop

    // 0x8028E6F0: lbu         $t7, 0x28C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X28C);
    // 0x8028E6F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028E6F8: lwc1        $f8, 0x194($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8028E6FC: beq         $t7, $at, L_8028E7A4
    if (ctx->r15 == ctx->r1) {
        // 0x8028E700: nop
    
            goto L_8028E7A4;
    }
    // 0x8028E700: nop

    // 0x8028E704: lwc1        $f10, 0x2AC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x8028E708: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8028E70C: nop

    // 0x8028E710: bc1f        L_8028E7A4
    if (!c1cs) {
        // 0x8028E714: nop
    
            goto L_8028E7A4;
    }
    // 0x8028E714: nop

    // 0x8028E718: lwc1        $f0, 0x2C0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C0);
    // 0x8028E71C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028E720: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028E724: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8028E728: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x8028E72C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028E730: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8028E734: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028E738: bc1tl       L_8028E75C
    if (c1cs) {
        // 0x8028E73C: sb          $t8, 0x28C($s0)
        MEM_B(0X28C, ctx->r16) = ctx->r24;
            goto L_8028E75C;
    }
    goto skip_7;
    // 0x8028E73C: sb          $t8, 0x28C($s0)
    MEM_B(0X28C, ctx->r16) = ctx->r24;
    skip_7:
    // 0x8028E740: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028E744: lwc1        $f6, 0x2C4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C4);
    // 0x8028E748: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028E74C: nop

    // 0x8028E750: bc1fl       L_8028E764
    if (!c1cs) {
        // 0x8028E754: c.lt.s      $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
            goto L_8028E764;
    }
    goto skip_8;
    // 0x8028E754: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    skip_8:
    // 0x8028E758: sb          $t8, 0x28C($s0)
    MEM_B(0X28C, ctx->r16) = ctx->r24;
L_8028E75C:
    // 0x8028E75C: lwc1        $f0, 0x2C0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C0);
    // 0x8028E760: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
L_8028E764:
    // 0x8028E764: nop

    // 0x8028E768: bc1fl       L_8028E77C
    if (!c1cs) {
        // 0x8028E76C: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_8028E77C;
    }
    goto skip_9;
    // 0x8028E76C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_9:
    // 0x8028E770: jal         0x8021B240
    // 0x8028E774: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    static_3_8021B240(rdram, ctx);
        goto after_16;
    // 0x8028E774: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    after_16:
    // 0x8028E778: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_8028E77C:
    // 0x8028E77C: lwc1        $f8, 0x2C4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C4);
    // 0x8028E780: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8028E784: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8028E788: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8028E78C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8028E790: bc1fl       L_8028E7A4
    if (!c1cs) {
        // 0x8028E794: lbu         $v0, 0x28F($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28F);
            goto L_8028E7A4;
    }
    goto skip_10;
    // 0x8028E794: lbu         $v0, 0x28F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28F);
    skip_10:
    // 0x8028E798: jal         0x8021B240
    // 0x8028E79C: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    static_3_8021B240(rdram, ctx);
        goto after_17;
    // 0x8028E79C: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    after_17:
    // 0x8028E7A0: lbu         $v0, 0x28F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28F);
L_8028E7A4:
    // 0x8028E7A4: beql        $v0, $zero, L_8028E810
    if (ctx->r2 == 0) {
        // 0x8028E7A8: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028E810;
    }
    goto skip_11;
    // 0x8028E7A8: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_11:
    // 0x8028E7AC: lbu         $t0, 0x28C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X28C);
    // 0x8028E7B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028E7B4: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8028E7B8: beql        $t0, $at, L_8028E810
    if (ctx->r8 == ctx->r1) {
        // 0x8028E7BC: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028E810;
    }
    goto skip_12;
    // 0x8028E7BC: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_12:
    // 0x8028E7C0: lwc1        $f18, 0x2AC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x8028E7C4: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8028E7C8: nop

    // 0x8028E7CC: bc1fl       L_8028E810
    if (!c1cs) {
        // 0x8028E7D0: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028E810;
    }
    goto skip_13;
    // 0x8028E7D0: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_13:
    // 0x8028E7D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028E7D8: lwc1        $f16, 0x2C0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X2C0);
    // 0x8028E7DC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8028E7E0: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x8028E7E4: nop

    // 0x8028E7E8: bc1tl       L_8028E80C
    if (c1cs) {
        // 0x8028E7EC: sb          $t1, 0x28C($s0)
        MEM_B(0X28C, ctx->r16) = ctx->r9;
            goto L_8028E80C;
    }
    goto skip_14;
    // 0x8028E7EC: sb          $t1, 0x28C($s0)
    MEM_B(0X28C, ctx->r16) = ctx->r9;
    skip_14:
    // 0x8028E7F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028E7F4: lwc1        $f8, 0x2C4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C4);
    // 0x8028E7F8: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8028E7FC: nop

    // 0x8028E800: bc1fl       L_8028E810
    if (!c1cs) {
        // 0x8028E804: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028E810;
    }
    goto skip_15;
    // 0x8028E804: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_15:
    // 0x8028E808: sb          $t1, 0x28C($s0)
    MEM_B(0X28C, ctx->r16) = ctx->r9;
L_8028E80C:
    // 0x8028E80C: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028E810:
    // 0x8028E810: lbu         $t2, 0x290($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X290);
    // 0x8028E814: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028E818: beql        $t2, $zero, L_8028E8E8
    if (ctx->r10 == 0) {
        // 0x8028E81C: lui         $at, 0x4416
        ctx->r1 = S32(0X4416 << 16);
            goto L_8028E8E8;
    }
    goto skip_16;
    // 0x8028E81C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    skip_16:
    // 0x8028E820: bne         $v0, $at, L_8028E8E4
    if (ctx->r2 != ctx->r1) {
        // 0x8028E824: lui         $t3, 0x0
        ctx->r11 = S32(0X0 << 16);
            goto L_8028E8E4;
    }
    // 0x8028E824: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8028E828: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x8028E82C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028E830: bnel        $t3, $zero, L_8028E8C4
    if (ctx->r11 != 0) {
        // 0x8028E834: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8028E8C4;
    }
    goto skip_17;
    // 0x8028E834: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_17:
    // 0x8028E838: jal         0x802AEE54
    // 0x8028E83C: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    static_3_802AEE54(rdram, ctx);
        goto after_18;
    // 0x8028E83C: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    after_18:
    // 0x8028E840: jal         0x803183D0
    // 0x8028E844: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_19;
    // 0x8028E844: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_19:
    // 0x8028E848: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x8028E84C: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x8028E850: lh          $t9, 0x10($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X10);
    // 0x8028E854: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    // 0x8028E858: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x8028E85C: jalr        $t9
    // 0x8028E860: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x8028E860: nop

    after_20:
    // 0x8028E864: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x8028E868: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8028E86C: jal         0x80305E90
    // 0x8028E870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_21;
    // 0x8028E870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x8028E874: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028E878: addiu       $a1, $s0, 0x2D8
    ctx->r5 = ADD32(ctx->r16, 0X2D8);
    // 0x8028E87C: addiu       $t4, $zero, 0x38
    ctx->r12 = ADD32(0, 0X38);
    // 0x8028E880: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8028E884: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x8028E888: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8028E88C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8028E890: jal         0x80302238
    // 0x8028E894: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_22;
    // 0x8028E894: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_22:
    // 0x8028E898: beq         $v0, $zero, L_8028E8B4
    if (ctx->r2 == 0) {
        // 0x8028E89C: lw          $a1, 0x38($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X38);
            goto L_8028E8B4;
    }
    // 0x8028E89C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8028E8A0: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028E8A4: lui         $a2, 0x3FA1
    ctx->r6 = S32(0X3FA1 << 16);
    // 0x8028E8A8: ori         $a2, $a2, 0x26E9
    ctx->r6 = ctx->r6 | 0X26E9;
    // 0x8028E8AC: jal         0x80302664
    // 0x8028E8B0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_23;
    // 0x8028E8B0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_23:
L_8028E8B4:
    // 0x8028E8B4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028E8B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028E8BC: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x8028E8C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8028E8C4:
    // 0x8028E8C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028E8C8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8028E8CC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028E8D0: sb          $t6, 0x28E($s0)
    MEM_B(0X28E, ctx->r16) = ctx->r14;
    // 0x8028E8D4: sb          $zero, 0x290($s0)
    MEM_B(0X290, ctx->r16) = 0;
    // 0x8028E8D8: sb          $t7, 0x294($s0)
    MEM_B(0X294, ctx->r16) = ctx->r15;
    // 0x8028E8DC: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    // 0x8028E8E0: swc1        $f18, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f18.u32l;
L_8028E8E4:
    // 0x8028E8E4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
L_8028E8E8:
    // 0x8028E8E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028E8EC: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8028E8F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028E8F4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028E8F8: nop

    // 0x8028E8FC: bc1f        L_8028EA28
    if (!c1cs) {
        // 0x8028E900: nop
    
            goto L_8028EA28;
    }
    // 0x8028E900: nop

    // 0x8028E904: bne         $v0, $at, L_8028EA28
    if (ctx->r2 != ctx->r1) {
        // 0x8028E908: nop
    
            goto L_8028EA28;
    }
    // 0x8028E908: nop

    // 0x8028E90C: lbu         $v0, 0x294($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X294);
    // 0x8028E910: beq         $v0, $zero, L_8028E9A4
    if (ctx->r2 == 0) {
        // 0x8028E914: nop
    
            goto L_8028E9A4;
    }
    // 0x8028E914: nop

    // 0x8028E918: lwc1        $f0, 0x29C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028E91C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028E920: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    // 0x8028E924: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8028E928: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8028E92C: nop

    // 0x8028E930: bc1f        L_8028E9A4
    if (!c1cs) {
        // 0x8028E934: nop
    
            goto L_8028E9A4;
    }
    // 0x8028E934: nop

    // 0x8028E938: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028E93C: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028E940: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8028E944: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8028E948: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8028E94C: jal         0x80200B20
    // 0x8028E950: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_24;
    // 0x8028E950: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    after_24:
    // 0x8028E954: lwc1        $f4, 0x29C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028E958: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028E95C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028E960: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028E964: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8028E968: swc1        $f16, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f16.u32l;
    // 0x8028E96C: lwc1        $f8, 0x29C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028E970: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x8028E974: nop

    // 0x8028E978: bc1fl       L_8028E9A4
    if (!c1cs) {
        // 0x8028E97C: lbu         $v0, 0x294($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X294);
            goto L_8028E9A4;
    }
    goto skip_18;
    // 0x8028E97C: lbu         $v0, 0x294($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X294);
    skip_18:
    // 0x8028E980: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028E984: sb          $zero, 0x294($s0)
    MEM_B(0X294, ctx->r16) = 0;
    // 0x8028E988: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028E98C: jal         0x8021BA1C
    // 0x8028E990: swc1        $f18, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f18.u32l;
    static_3_8021BA1C(rdram, ctx);
        goto after_25;
    // 0x8028E990: swc1        $f18, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f18.u32l;
    after_25:
    // 0x8028E994: lw          $a0, 0xE18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE18);
    // 0x8028E998: jal         0x8021B838
    // 0x8028E99C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_26;
    // 0x8028E99C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_26:
    // 0x8028E9A0: lbu         $v0, 0x294($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X294);
L_8028E9A4:
    // 0x8028E9A4: bnel        $v0, $zero, L_8028EA28
    if (ctx->r2 != 0) {
        // 0x8028E9A8: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028EA28;
    }
    goto skip_19;
    // 0x8028E9A8: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_19:
    // 0x8028E9AC: lwc1        $f0, 0x29C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028E9B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028E9B4: lwc1        $f6, 0x198($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
    // 0x8028E9B8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8028E9BC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8028E9C0: nop

    // 0x8028E9C4: bc1fl       L_8028EA28
    if (!c1cs) {
        // 0x8028E9C8: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028EA28;
    }
    goto skip_20;
    // 0x8028E9C8: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_20:
    // 0x8028E9CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028E9D0: lw          $a0, 0xE18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE18);
    // 0x8028E9D4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8028E9D8: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8028E9DC: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    // 0x8028E9E0: jal         0x80200B20
    // 0x8028E9E4: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_27;
    // 0x8028E9E4: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    after_27:
    // 0x8028E9E8: lwc1        $f8, 0x29C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028E9EC: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028E9F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028E9F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028E9F8: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8028E9FC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028EA00: swc1        $f4, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f4.u32l;
    // 0x8028EA04: lwc1        $f6, 0x29C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028EA08: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x8028EA0C: nop

    // 0x8028EA10: bc1fl       L_8028EA28
    if (!c1cs) {
        // 0x8028EA14: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028EA28;
    }
    goto skip_21;
    // 0x8028EA14: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_21:
    // 0x8028EA18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028EA1C: nop

    // 0x8028EA20: swc1        $f10, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f10.u32l;
    // 0x8028EA24: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028EA28:
    // 0x8028EA28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EA2C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EA30: lwc1        $f2, 0x2EC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2EC);
    // 0x8028EA34: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8028EA38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028EA3C: mul.s       $f18, $f2, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8028EA40: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x8028EA44: nop

    // 0x8028EA48: bc1f        L_8028EA68
    if (!c1cs) {
        // 0x8028EA4C: nop
    
            goto L_8028EA68;
    }
    // 0x8028EA4C: nop

    // 0x8028EA50: bne         $v0, $at, L_8028EA68
    if (ctx->r2 != ctx->r1) {
        // 0x8028EA54: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_8028EA68;
    }
    // 0x8028EA54: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8028EA58: sb          $t8, 0x290($s0)
    MEM_B(0X290, ctx->r16) = ctx->r24;
    // 0x8028EA5C: lwc1        $f0, 0x4C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8028EA60: lwc1        $f2, 0x2EC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2EC);
    // 0x8028EA64: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028EA68:
    // 0x8028EA68: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EA6C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EA70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028EA74: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8028EA78: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x8028EA7C: nop

    // 0x8028EA80: bc1f        L_8028EA98
    if (!c1cs) {
        // 0x8028EA84: nop
    
            goto L_8028EA98;
    }
    // 0x8028EA84: nop

    // 0x8028EA88: bne         $v0, $at, L_8028EA98
    if (ctx->r2 != ctx->r1) {
        // 0x8028EA8C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8028EA98;
    }
    // 0x8028EA8C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8028EA90: sb          $t0, 0x290($s0)
    MEM_B(0X290, ctx->r16) = ctx->r8;
    // 0x8028EA94: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028EA98:
    // 0x8028EA98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EA9C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EAA0: lwc1        $f10, 0x194($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8028EAA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028EAA8: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x8028EAAC: nop

    // 0x8028EAB0: bc1fl       L_8028EB30
    if (!c1cs) {
        // 0x8028EAB4: lui         $at, 0x4416
        ctx->r1 = S32(0X4416 << 16);
            goto L_8028EB30;
    }
    goto skip_22;
    // 0x8028EAB4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    skip_22:
    // 0x8028EAB8: bne         $v0, $at, L_8028EB2C
    if (ctx->r2 != ctx->r1) {
        // 0x8028EABC: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_8028EB2C;
    }
    // 0x8028EABC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8028EAC0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8028EAC4: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x8028EAC8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8028EACC: bnel        $t1, $zero, L_8028EB30
    if (ctx->r9 != 0) {
        // 0x8028EAD0: lui         $at, 0x4416
        ctx->r1 = S32(0X4416 << 16);
            goto L_8028EB30;
    }
    goto skip_23;
    // 0x8028EAD0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    skip_23:
    // 0x8028EAD4: sb          $t2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r10;
    // 0x8028EAD8: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028EADC: jal         0x80302980
    // 0x8028EAE0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_28;
    // 0x8028EAE0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_28:
    // 0x8028EAE4: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028EAE8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x8028EAEC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8028EAF0: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    // 0x8028EAF4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8028EAF8: jal         0x80302988
    // 0x8028EAFC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_29;
    // 0x8028EAFC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_29:
    // 0x8028EB00: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028EB04: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x8028EB08: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8028EB0C: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    // 0x8028EB10: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8028EB14: jal         0x80302988
    // 0x8028EB18: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_30;
    // 0x8028EB18: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_30:
    // 0x8028EB1C: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028EB20: jal         0x80302A7C
    // 0x8028EB24: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_31;
    // 0x8028EB24: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_31:
    // 0x8028EB28: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028EB2C:
    // 0x8028EB2C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
L_8028EB30:
    // 0x8028EB30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028EB34: lwc1        $f18, 0x194($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X194);
    // 0x8028EB38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028EB3C: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x8028EB40: nop

    // 0x8028EB44: bc1fl       L_8028EE4C
    if (!c1cs) {
        // 0x8028EB48: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8028EE4C;
    }
    goto skip_24;
    // 0x8028EB48: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_24:
    // 0x8028EB4C: bne         $v0, $at, L_8028EB74
    if (ctx->r2 != ctx->r1) {
        // 0x8028EB50: addiu       $t3, $zero, 0x4
        ctx->r11 = ADD32(0, 0X4);
            goto L_8028EB74;
    }
    // 0x8028EB50: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8028EB54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028EB58: sb          $zero, 0x294($s0)
    MEM_B(0X294, ctx->r16) = 0;
    // 0x8028EB5C: sb          $t3, 0x28E($s0)
    MEM_B(0X28E, ctx->r16) = ctx->r11;
    // 0x8028EB60: lw          $a0, 0xE1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE1C);
    // 0x8028EB64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028EB68: jal         0x8021B838
    // 0x8028EB6C: swc1        $f4, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f4.u32l;
    static_3_8021B838(rdram, ctx);
        goto after_32;
    // 0x8028EB6C: swc1        $f4, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f4.u32l;
    after_32:
    // 0x8028EB70: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028EB74:
    // 0x8028EB74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028EB78: bne         $v0, $at, L_8028ECE0
    if (ctx->r2 != ctx->r1) {
        // 0x8028EB7C: lui         $t9, 0x0
        ctx->r25 = S32(0X0 << 16);
            goto L_8028ECE0;
    }
    // 0x8028EB7C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8028EB80: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x8028EB84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028EB88: addiu       $t4, $s0, 0x2D8
    ctx->r12 = ADD32(ctx->r16, 0X2D8);
    // 0x8028EB8C: bnel        $t9, $zero, L_8028EC1C
    if (ctx->r25 != 0) {
        // 0x8028EB90: lbu         $v0, 0x294($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X294);
            goto L_8028EC1C;
    }
    goto skip_25;
    // 0x8028EB90: lbu         $v0, 0x294($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X294);
    skip_25:
    // 0x8028EB94: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028EB98: jal         0x802AEE54
    // 0x8028EB9C: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    static_3_802AEE54(rdram, ctx);
        goto after_33;
    // 0x8028EB9C: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    after_33:
    // 0x8028EBA0: jal         0x803183D0
    // 0x8028EBA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_34;
    // 0x8028EBA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_34:
    // 0x8028EBA8: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x8028EBAC: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x8028EBB0: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x8028EBB4: lh          $t5, 0x10($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X10);
    // 0x8028EBB8: jalr        $t9
    // 0x8028EBBC: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x8028EBBC: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    after_35:
    // 0x8028EBC0: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x8028EBC4: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8028EBC8: jal         0x80305E90
    // 0x8028EBCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_36;
    // 0x8028EBCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_36:
    // 0x8028EBD0: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028EBD4: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x8028EBD8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028EBDC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8028EBE0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8028EBE4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8028EBE8: jal         0x80302238
    // 0x8028EBEC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_37;
    // 0x8028EBEC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_37:
    // 0x8028EBF0: beq         $v0, $zero, L_8028EC0C
    if (ctx->r2 == 0) {
        // 0x8028EBF4: lw          $a1, 0x38($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X38);
            goto L_8028EC0C;
    }
    // 0x8028EBF4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8028EBF8: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028EBFC: lui         $a2, 0x3FA1
    ctx->r6 = S32(0X3FA1 << 16);
    // 0x8028EC00: ori         $a2, $a2, 0x26E9
    ctx->r6 = ctx->r6 | 0X26E9;
    // 0x8028EC04: jal         0x80302664
    // 0x8028EC08: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_38;
    // 0x8028EC08: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_38:
L_8028EC0C:
    // 0x8028EC0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8028EC10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EC14: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x8028EC18: lbu         $v0, 0x294($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X294);
L_8028EC1C:
    // 0x8028EC1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028EC20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8028EC24: bne         $v0, $zero, L_8028EC40
    if (ctx->r2 != 0) {
        // 0x8028EC28: nop
    
            goto L_8028EC40;
    }
    // 0x8028EC28: nop

    // 0x8028EC2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028EC30: sb          $t8, 0x294($s0)
    MEM_B(0X294, ctx->r16) = ctx->r24;
    // 0x8028EC34: sb          $zero, 0x290($s0)
    MEM_B(0X290, ctx->r16) = 0;
    // 0x8028EC38: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x8028EC3C: swc1        $f6, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f6.u32l;
L_8028EC40:
    // 0x8028EC40: beq         $v0, $zero, L_8028ECD8
    if (ctx->r2 == 0) {
        // 0x8028EC44: nop
    
            goto L_8028ECD8;
    }
    // 0x8028EC44: nop

    // 0x8028EC48: lwc1        $f0, 0x29C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028EC4C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028EC50: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    // 0x8028EC54: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8028EC58: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8028EC5C: nop

    // 0x8028EC60: bc1f        L_8028ECD8
    if (!c1cs) {
        // 0x8028EC64: nop
    
            goto L_8028ECD8;
    }
    // 0x8028EC64: nop

    // 0x8028EC68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028EC6C: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028EC70: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8028EC74: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8028EC78: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8028EC7C: jal         0x80200B20
    // 0x8028EC80: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_39;
    // 0x8028EC80: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    after_39:
    // 0x8028EC84: lwc1        $f4, 0x29C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028EC88: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028EC8C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028EC90: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8028EC94: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8028EC98: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028EC9C: swc1        $f16, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f16.u32l;
    // 0x8028ECA0: lwc1        $f8, 0x29C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028ECA4: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x8028ECA8: nop

    // 0x8028ECAC: bc1f        L_8028ECD8
    if (!c1cs) {
        // 0x8028ECB0: nop
    
            goto L_8028ECD8;
    }
    // 0x8028ECB0: nop

    // 0x8028ECB4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028ECB8: sb          $zero, 0x294($s0)
    MEM_B(0X294, ctx->r16) = 0;
    // 0x8028ECBC: sb          $t0, 0x28E($s0)
    MEM_B(0X28E, ctx->r16) = ctx->r8;
    // 0x8028ECC0: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    // 0x8028ECC4: jal         0x8021BA1C
    // 0x8028ECC8: swc1        $f18, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f18.u32l;
    static_3_8021BA1C(rdram, ctx);
        goto after_40;
    // 0x8028ECC8: swc1        $f18, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f18.u32l;
    after_40:
    // 0x8028ECCC: lw          $a0, 0xE1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE1C);
    // 0x8028ECD0: jal         0x8021B838
    // 0x8028ECD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_41;
    // 0x8028ECD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_41:
L_8028ECD8:
    // 0x8028ECD8: b           L_8028EE48
    // 0x8028ECDC: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
        goto L_8028EE48;
    // 0x8028ECDC: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028ECE0:
    // 0x8028ECE0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8028ECE4: bne         $v0, $at, L_8028EE48
    if (ctx->r2 != ctx->r1) {
        // 0x8028ECE8: lui         $t1, 0x0
        ctx->r9 = S32(0X0 << 16);
            goto L_8028EE48;
    }
    // 0x8028ECE8: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8028ECEC: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x8028ECF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028ECF4: addiu       $t2, $s0, 0x2D8
    ctx->r10 = ADD32(ctx->r16, 0X2D8);
    // 0x8028ECF8: bnel        $t1, $zero, L_8028ED88
    if (ctx->r9 != 0) {
        // 0x8028ECFC: lbu         $v0, 0x294($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X294);
            goto L_8028ED88;
    }
    goto skip_26;
    // 0x8028ECFC: lbu         $v0, 0x294($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X294);
    skip_26:
    // 0x8028ED00: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028ED04: jal         0x802AEE54
    // 0x8028ED08: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    static_3_802AEE54(rdram, ctx);
        goto after_42;
    // 0x8028ED08: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_42:
    // 0x8028ED0C: jal         0x803183D0
    // 0x8028ED10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_43;
    // 0x8028ED10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_43:
    // 0x8028ED14: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x8028ED18: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x8028ED1C: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x8028ED20: lh          $t3, 0x10($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X10);
    // 0x8028ED24: jalr        $t9
    // 0x8028ED28: addu        $a0, $t3, $v0
    ctx->r4 = ADD32(ctx->r11, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x8028ED28: addu        $a0, $t3, $v0
    ctx->r4 = ADD32(ctx->r11, ctx->r2);
    after_44:
    // 0x8028ED2C: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x8028ED30: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8028ED34: jal         0x80305E90
    // 0x8028ED38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_45;
    // 0x8028ED38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_45:
    // 0x8028ED3C: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028ED40: addiu       $t4, $zero, 0x38
    ctx->r12 = ADD32(0, 0X38);
    // 0x8028ED44: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8028ED48: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8028ED4C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8028ED50: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8028ED54: jal         0x80302238
    // 0x8028ED58: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_46;
    // 0x8028ED58: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_46:
    // 0x8028ED5C: beq         $v0, $zero, L_8028ED78
    if (ctx->r2 == 0) {
        // 0x8028ED60: lw          $a1, 0x38($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X38);
            goto L_8028ED78;
    }
    // 0x8028ED60: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8028ED64: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028ED68: lui         $a2, 0x3FA1
    ctx->r6 = S32(0X3FA1 << 16);
    // 0x8028ED6C: ori         $a2, $a2, 0x26E9
    ctx->r6 = ctx->r6 | 0X26E9;
    // 0x8028ED70: jal         0x80302664
    // 0x8028ED74: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_47;
    // 0x8028ED74: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_47:
L_8028ED78:
    // 0x8028ED78: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028ED7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028ED80: sb          $t5, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r13;
    // 0x8028ED84: lbu         $v0, 0x294($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X294);
L_8028ED88:
    // 0x8028ED88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028ED8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028ED90: bne         $v0, $zero, L_8028EDAC
    if (ctx->r2 != 0) {
        // 0x8028ED94: nop
    
            goto L_8028EDAC;
    }
    // 0x8028ED94: nop

    // 0x8028ED98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028ED9C: sb          $t6, 0x294($s0)
    MEM_B(0X294, ctx->r16) = ctx->r14;
    // 0x8028EDA0: sb          $zero, 0x290($s0)
    MEM_B(0X290, ctx->r16) = 0;
    // 0x8028EDA4: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    // 0x8028EDA8: swc1        $f4, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f4.u32l;
L_8028EDAC:
    // 0x8028EDAC: beql        $v0, $zero, L_8028EE48
    if (ctx->r2 == 0) {
        // 0x8028EDB0: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028EE48;
    }
    goto skip_27;
    // 0x8028EDB0: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_27:
    // 0x8028EDB4: lwc1        $f0, 0x29C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028EDB8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028EDBC: lwc1        $f16, 0x198($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X198);
    // 0x8028EDC0: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8028EDC4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8028EDC8: nop

    // 0x8028EDCC: bc1fl       L_8028EE48
    if (!c1cs) {
        // 0x8028EDD0: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028EE48;
    }
    goto skip_28;
    // 0x8028EDD0: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_28:
    // 0x8028EDD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028EDD8: lw          $a0, 0xE18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE18);
    // 0x8028EDDC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8028EDE0: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8028EDE4: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    // 0x8028EDE8: jal         0x80200B20
    // 0x8028EDEC: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_48;
    // 0x8028EDEC: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_48:
    // 0x8028EDF0: lwc1        $f18, 0x29C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028EDF4: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028EDF8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028EDFC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8028EE00: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8028EE04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028EE08: swc1        $f6, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f6.u32l;
    // 0x8028EE0C: lwc1        $f10, 0x29C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028EE10: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x8028EE14: nop

    // 0x8028EE18: bc1fl       L_8028EE48
    if (!c1cs) {
        // 0x8028EE1C: lbu         $v0, 0x28E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X28E);
            goto L_8028EE48;
    }
    goto skip_29;
    // 0x8028EE1C: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
    skip_29:
    // 0x8028EE20: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028EE24: sb          $zero, 0x294($s0)
    MEM_B(0X294, ctx->r16) = 0;
    // 0x8028EE28: sb          $t7, 0x28E($s0)
    MEM_B(0X28E, ctx->r16) = ctx->r15;
    // 0x8028EE2C: lw          $a0, 0xE18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE18);
    // 0x8028EE30: jal         0x8021BA1C
    // 0x8028EE34: swc1        $f8, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f8.u32l;
    static_3_8021BA1C(rdram, ctx);
        goto after_49;
    // 0x8028EE34: swc1        $f8, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f8.u32l;
    after_49:
    // 0x8028EE38: lw          $a0, 0xE1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE1C);
    // 0x8028EE3C: jal         0x8021B838
    // 0x8028EE40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_50;
    // 0x8028EE40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_50:
    // 0x8028EE44: lbu         $v0, 0x28E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X28E);
L_8028EE48:
    // 0x8028EE48: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_8028EE4C:
    // 0x8028EE4C: bnel        $v0, $at, L_8028EEE0
    if (ctx->r2 != ctx->r1) {
        // 0x8028EE50: lbu         $t1, 0xF30($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0XF30);
            goto L_8028EEE0;
    }
    goto skip_30;
    // 0x8028EE50: lbu         $t1, 0xF30($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XF30);
    skip_30:
    // 0x8028EE54: lbu         $t8, 0x294($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X294);
    // 0x8028EE58: bnel        $t8, $zero, L_8028EEE0
    if (ctx->r24 != 0) {
        // 0x8028EE5C: lbu         $t1, 0xF30($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0XF30);
            goto L_8028EEE0;
    }
    goto skip_31;
    // 0x8028EE5C: lbu         $t1, 0xF30($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XF30);
    skip_31:
    // 0x8028EE60: lwc1        $f0, 0x29C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028EE64: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8028EE68: lwc1        $f4, 0x198($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X198);
    // 0x8028EE6C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8028EE70: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8028EE74: nop

    // 0x8028EE78: bc1fl       L_8028EEE0
    if (!c1cs) {
        // 0x8028EE7C: lbu         $t1, 0xF30($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0XF30);
            goto L_8028EEE0;
    }
    goto skip_32;
    // 0x8028EE7C: lbu         $t1, 0xF30($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XF30);
    skip_32:
    // 0x8028EE80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028EE84: lw          $a0, 0xE1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE1C);
    // 0x8028EE88: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8028EE8C: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028EE90: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x8028EE94: jal         0x80200B20
    // 0x8028EE98: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_51;
    // 0x8028EE98: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    after_51:
    // 0x8028EE9C: lwc1        $f10, 0x29C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028EEA0: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028EEA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028EEA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028EEAC: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8028EEB0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028EEB4: swc1        $f18, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f18.u32l;
    // 0x8028EEB8: lwc1        $f4, 0x29C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x8028EEBC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8028EEC0: nop

    // 0x8028EEC4: bc1fl       L_8028EEE0
    if (!c1cs) {
        // 0x8028EEC8: lbu         $t1, 0xF30($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0XF30);
            goto L_8028EEE0;
    }
    goto skip_33;
    // 0x8028EEC8: lbu         $t1, 0xF30($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XF30);
    skip_33:
    // 0x8028EECC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028EED0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8028EED4: sb          $t0, 0x294($s0)
    MEM_B(0X294, ctx->r16) = ctx->r8;
    // 0x8028EED8: swc1        $f16, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f16.u32l;
    // 0x8028EEDC: lbu         $t1, 0xF30($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XF30);
L_8028EEE0:
    // 0x8028EEE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028EEE4: bnel        $t1, $zero, L_8028EF80
    if (ctx->r9 != 0) {
        // 0x8028EEE8: lbu         $t3, 0xF28($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XF28);
            goto L_8028EF80;
    }
    goto skip_34;
    // 0x8028EEE8: lbu         $t3, 0xF28($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF28);
    skip_34:
    // 0x8028EEEC: jal         0x802AEE54
    // 0x8028EEF0: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    static_3_802AEE54(rdram, ctx);
        goto after_52;
    // 0x8028EEF0: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    after_52:
    // 0x8028EEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028EEF8: jal         0x80318510
    // 0x8028EEFC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80318510(rdram, ctx);
        goto after_53;
    // 0x8028EEFC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_53:
    // 0x8028EF00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EF04: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EF08: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028EF0C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8028EF10: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x8028EF14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028EF18: bc1fl       L_8028EF80
    if (!c1cs) {
        // 0x8028EF1C: lbu         $t3, 0xF28($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XF28);
            goto L_8028EF80;
    }
    goto skip_35;
    // 0x8028EF1C: lbu         $t3, 0xF28($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF28);
    skip_35:
    // 0x8028EF20: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8028EF24: sb          $t2, 0xF30($s0)
    MEM_B(0XF30, ctx->r16) = ctx->r10;
    // 0x8028EF28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EF2C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EF30: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EF34: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EF38: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8028EF3C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EF40: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EF44: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8028EF48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EF4C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EF50: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8028EF54: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8028EF58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EF5C: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8028EF60: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EF64: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8028EF68: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x8028EF6C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8028EF70: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8028EF74: jal         0x80205C7C
    // 0x8028EF78: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    static_3_80205C7C(rdram, ctx);
        goto after_54;
    // 0x8028EF78: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_54:
    // 0x8028EF7C: lbu         $t3, 0xF28($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF28);
L_8028EF80:
    // 0x8028EF80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028EF84: beql        $t3, $zero, L_8028EFC4
    if (ctx->r11 == 0) {
        // 0x8028EF88: lbu         $t4, 0xF29($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0XF29);
            goto L_8028EFC4;
    }
    goto skip_36;
    // 0x8028EF88: lbu         $t4, 0xF29($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XF29);
    skip_36:
    // 0x8028EF8C: jal         0x802AEE54
    // 0x8028EF90: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    static_3_802AEE54(rdram, ctx);
        goto after_55;
    // 0x8028EF90: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    after_55:
    // 0x8028EF94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028EF98: jal         0x80318510
    // 0x8028EF9C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80318510(rdram, ctx);
        goto after_56;
    // 0x8028EF9C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_56:
    // 0x8028EFA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EFA4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EFA8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8028EFAC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8028EFB0: nop

    // 0x8028EFB4: bc1fl       L_8028EFC4
    if (!c1cs) {
        // 0x8028EFB8: lbu         $t4, 0xF29($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0XF29);
            goto L_8028EFC4;
    }
    goto skip_37;
    // 0x8028EFB8: lbu         $t4, 0xF29($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XF29);
    skip_37:
    // 0x8028EFBC: sb          $t9, 0xF29($s0)
    MEM_B(0XF29, ctx->r16) = ctx->r25;
    // 0x8028EFC0: lbu         $t4, 0xF29($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XF29);
L_8028EFC4:
    // 0x8028EFC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028EFC8: beql        $t4, $zero, L_8028F0BC
    if (ctx->r12 == 0) {
        // 0x8028EFCC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8028F0BC;
    }
    goto skip_38;
    // 0x8028EFCC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_38:
    // 0x8028EFD0: lwc1        $f16, 0xF2C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XF2C);
    // 0x8028EFD4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028EFD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028EFDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028EFE0: add.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8028EFE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028EFE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8028EFEC: swc1        $f8, 0xF2C($s0)
    MEM_W(0XF2C, ctx->r16) = ctx->f8.u32l;
    // 0x8028EFF0: lwc1        $f0, 0xF2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XF2C);
    // 0x8028EFF4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x8028EFF8: nop

    // 0x8028EFFC: bc1fl       L_8028F09C
    if (!c1cs) {
        // 0x8028F000: mfc1        $a2, $f0
        ctx->r6 = (int32_t)ctx->f0.u32l;
            goto L_8028F09C;
    }
    goto skip_39;
    // 0x8028F000: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    skip_39:
    // 0x8028F004: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028F008: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028F00C: jal         0x802AEE54
    // 0x8028F010: swc1        $f4, 0xF2C($s0)
    MEM_W(0XF2C, ctx->r16) = ctx->f4.u32l;
    static_3_802AEE54(rdram, ctx);
        goto after_57;
    // 0x8028F010: swc1        $f4, 0xF2C($s0)
    MEM_W(0XF2C, ctx->r16) = ctx->f4.u32l;
    after_57:
    // 0x8028F014: jal         0x803183D0
    // 0x8028F018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_58;
    // 0x8028F018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_58:
    // 0x8028F01C: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x8028F020: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8028F024: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x8028F028: lh          $t5, 0x10($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X10);
    // 0x8028F02C: jalr        $t9
    // 0x8028F030: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x8028F030: addu        $a0, $t5, $v0
    ctx->r4 = ADD32(ctx->r13, ctx->r2);
    after_59:
    // 0x8028F034: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x8028F038: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8028F03C: jal         0x80305E90
    // 0x8028F040: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_60;
    // 0x8028F040: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_60:
    // 0x8028F044: lw          $a0, 0x2E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2E8);
    // 0x8028F048: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x8028F04C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028F050: addiu       $a1, $s0, 0x2D0
    ctx->r5 = ADD32(ctx->r16, 0X2D0);
    // 0x8028F054: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x8028F058: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8028F05C: jal         0x80302238
    // 0x8028F060: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_61;
    // 0x8028F060: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_61:
    // 0x8028F064: sb          $zero, 0xF28($s0)
    MEM_B(0XF28, ctx->r16) = 0;
    // 0x8028F068: sb          $zero, 0xF29($s0)
    MEM_B(0XF29, ctx->r16) = 0;
    // 0x8028F06C: lw          $a0, 0xF20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF20);
    // 0x8028F070: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028F074: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8028F078: jal         0x8021B240
    // 0x8028F07C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_62;
    // 0x8028F07C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_62:
    // 0x8028F080: lw          $a0, 0xF24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF24);
    // 0x8028F084: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8028F088: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8028F08C: jal         0x8021B240
    // 0x8028F090: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_63;
    // 0x8028F090: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_63:
    // 0x8028F094: lwc1        $f0, 0xF2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XF2C);
    // 0x8028F098: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_8028F09C:
    // 0x8028F09C: lw          $a0, 0xF20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF20);
    // 0x8028F0A0: jal         0x80200B20
    // 0x8028F0A4: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    static_3_80200B20(rdram, ctx);
        goto after_64;
    // 0x8028F0A4: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    after_64:
    // 0x8028F0A8: lw          $a0, 0xF24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF24);
    // 0x8028F0AC: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    // 0x8028F0B0: jal         0x80200B20
    // 0x8028F0B4: lw          $a2, 0xF2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XF2C);
    static_3_80200B20(rdram, ctx);
        goto after_65;
    // 0x8028F0B4: lw          $a2, 0xF2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XF2C);
    after_65:
    // 0x8028F0B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8028F0BC:
    // 0x8028F0BC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8028F0C0: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    // 0x8028F0C4: jr          $ra
    // 0x8028F0C8: nop

    return;
    // 0x8028F0C8: nop

;}
RECOMP_FUNC void D_8021D3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021D3F4: jr          $ra
    // 0x8021D3F8: nop

    return;
    // 0x8021D3F8: nop

;}
RECOMP_FUNC void D_8023F688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F688: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F68C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023F690: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023F694: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023F698: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8023F69C: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    // 0x8023F6A0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8023F6A4: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x8023F6A8: lbu         $t7, 0x4($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4);
    // 0x8023F6AC: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x8023F6B0: sh          $t7, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r15;
    // 0x8023F6B4: lh          $t8, 0x2($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X2);
    // 0x8023F6B8: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x8023F6BC: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x8023F6C0: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x8023F6C4: lh          $a2, 0x0($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X0);
    // 0x8023F6C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8023F6CC: jal         0x8023F5F0
    // 0x8023F6D0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    static_3_8023F5F0(rdram, ctx);
        goto after_0;
    // 0x8023F6D0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8023F6D4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F6D8: beql        $t9, $zero, L_8023F7B0
    if (ctx->r25 == 0) {
        // 0x8023F6DC: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_8023F7B0;
    }
    goto skip_0;
    // 0x8023F6DC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x8023F6E0: beq         $v0, $zero, L_8023F794
    if (ctx->r2 == 0) {
        // 0x8023F6E4: lw          $a0, 0xC($t9)
        ctx->r4 = MEM_W(ctx->r25, 0XC);
            goto L_8023F794;
    }
    // 0x8023F6E4: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x8023F6E8: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x8023F6EC: sw          $t0, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->r8;
    // 0x8023F6F0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F6F4: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x8023F6F8: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
    // 0x8023F6FC: jal         0x80237840
    // 0x8023F700: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    static_3_80237840(rdram, ctx);
        goto after_1;
    // 0x8023F700: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x8023F704: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8023F708: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023F70C: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x8023F710: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x8023F714: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x8023F718: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8023F71C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8023F720: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F724: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F728: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F72C: lw          $t7, 0xD8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XD8);
    // 0x8023F730: addiu       $t8, $t7, -0x40
    ctx->r24 = ADD32(ctx->r15, -0X40);
    // 0x8023F734: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x8023F738: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F73C: jalr        $t9
    // 0x8023F740: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8023F740: nop

    after_2:
    // 0x8023F744: jal         0x80237840
    // 0x8023F748: nop

    static_3_80237840(rdram, ctx);
        goto after_3;
    // 0x8023F748: nop

    after_3:
    // 0x8023F74C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023F750: beq         $v0, $zero, L_8023F79C
    if (ctx->r2 == 0) {
        // 0x8023F754: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023F79C;
    }
    // 0x8023F754: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F758: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023F75C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F760: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x8023F764: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x8023F768: lw          $t3, 0xD8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XD8);
    // 0x8023F76C: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x8023F770: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023F774: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8023F778: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8023F77C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F780: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F784: jalr        $t9
    // 0x8023F788: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8023F788: nop

    after_4:
    // 0x8023F78C: b           L_8023F7A0
    // 0x8023F790: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_8023F7A0;
    // 0x8023F790: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_8023F794:
    // 0x8023F794: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F798: sw          $zero, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = 0;
L_8023F79C:
    // 0x8023F79C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_8023F7A0:
    // 0x8023F7A0: sw          $s0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r16;
    // 0x8023F7A4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F7A8: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x8023F7AC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8023F7B0:
    // 0x8023F7B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F7B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023F7B8: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x8023F7BC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8023F7C0: jr          $ra
    // 0x8023F7C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8023F7C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802E6C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6CDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E6CE0: bne         $a1, $at, L_802E6D00
    if (ctx->r5 != ctx->r1) {
        // 0x802E6CE4: sw          $a1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r5;
            goto L_802E6D00;
    }
    // 0x802E6CE4: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802E6CE8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802E6CEC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802E6CF0: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x802E6CF4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802E6CF8: jr          $ra
    // 0x802E6CFC: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    return;
    // 0x802E6CFC: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
L_802E6D00:
    // 0x802E6D00: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x802E6D04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802E6D08: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802E6D0C: bne         $t8, $at, L_802E6D24
    if (ctx->r24 != ctx->r1) {
        // 0x802E6D10: nop
    
            goto L_802E6D24;
    }
    // 0x802E6D10: nop

    // 0x802E6D14: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802E6D18: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x802E6D1C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x802E6D20: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
L_802E6D24:
    // 0x802E6D24: jr          $ra
    // 0x802E6D28: nop

    return;
    // 0x802E6D28: nop

;}
RECOMP_FUNC void D_80276ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276B34: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80276B38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80276B3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80276B40: lbu         $t6, 0x3343($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3343);
    // 0x80276B44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80276B48: addiu       $a0, $a0, 0x32BC
    ctx->r4 = ADD32(ctx->r4, 0X32BC);
    // 0x80276B4C: beql        $t6, $zero, L_80276C3C
    if (ctx->r14 == 0) {
        // 0x80276B50: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276C3C;
    }
    goto skip_0;
    // 0x80276B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80276B54: jal         0x802CD858
    // 0x80276B58: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    static_3_802CD858(rdram, ctx);
        goto after_0;
    // 0x80276B58: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x80276B5C: bnel        $v0, $zero, L_80276C3C
    if (ctx->r2 != 0) {
        // 0x80276B60: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276C3C;
    }
    goto skip_1;
    // 0x80276B60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80276B64: lbu         $v0, 0x32D4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X32D4);
    // 0x80276B68: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80276B6C: beq         $v0, $zero, L_80276B84
    if (ctx->r2 == 0) {
        // 0x80276B70: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80276B84;
    }
    // 0x80276B70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276B74: beq         $v0, $at, L_80276C1C
    if (ctx->r2 == ctx->r1) {
        // 0x80276B78: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80276C1C;
    }
    // 0x80276B78: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80276B7C: b           L_80276C3C
    // 0x80276B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276C3C;
    // 0x80276B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276B84:
    // 0x80276B84: jal         0x80231A24
    // 0x80276B88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80276B88: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80276B8C: jal         0x8022970C
    // 0x80276B90: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x80276B90: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x80276B94: addiu       $a0, $s0, 0x8F4
    ctx->r4 = ADD32(ctx->r16, 0X8F4);
    // 0x80276B98: jal         0x803024E0
    // 0x80276B9C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    static_3_803024E0(rdram, ctx);
        goto after_3;
    // 0x80276B9C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_3:
    // 0x80276BA0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80276BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80276BA8: jal         0x80302498
    // 0x80276BAC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    static_3_80302498(rdram, ctx);
        goto after_4;
    // 0x80276BAC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x80276BB0: sb          $zero, 0x3343($s0)
    MEM_B(0X3343, ctx->r16) = 0;
    // 0x80276BB4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80276BB8: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80276BBC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80276BC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80276BC4: lbu         $t8, 0x8F0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X8F0);
    // 0x80276BC8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80276BCC: beq         $t8, $zero, L_80276BDC
    if (ctx->r24 == 0) {
        // 0x80276BD0: nop
    
            goto L_80276BDC;
    }
    // 0x80276BD0: nop

    // 0x80276BD4: jal         0x80231A24
    // 0x80276BD8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x80276BD8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_5:
L_80276BDC:
    // 0x80276BDC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80276BE0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80276BE4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80276BE8: jal         0x80231A24
    // 0x80276BEC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x80276BEC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x80276BF0: jal         0x8022BD80
    // 0x80276BF4: nop

    static_3_8022BD80(rdram, ctx);
        goto after_7;
    // 0x80276BF4: nop

    after_7:
    // 0x80276BF8: jal         0x80224CA8
    // 0x80276BFC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    static_3_80224CA8(rdram, ctx);
        goto after_8;
    // 0x80276BFC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_8:
    // 0x80276C00: jal         0x802B14E8
    // 0x80276C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802B14E8(rdram, ctx);
        goto after_9;
    // 0x80276C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80276C08: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80276C0C: jal         0x80231A24
    // 0x80276C10: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_10;
    // 0x80276C10: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_10:
    // 0x80276C14: b           L_80276C3C
    // 0x80276C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80276C3C;
    // 0x80276C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276C1C:
    // 0x80276C1C: jal         0x80231A24
    // 0x80276C20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_11;
    // 0x80276C20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_11:
    // 0x80276C24: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80276C28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80276C2C: addiu       $a2, $s0, 0x3350
    ctx->r6 = ADD32(ctx->r16, 0X3350);
    // 0x80276C30: jal         0x802CD478
    // 0x80276C34: addiu       $a3, $s0, 0x340C
    ctx->r7 = ADD32(ctx->r16, 0X340C);
    static_3_802CD478(rdram, ctx);
        goto after_12;
    // 0x80276C34: addiu       $a3, $s0, 0x340C
    ctx->r7 = ADD32(ctx->r16, 0X340C);
    after_12:
    // 0x80276C38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276C3C:
    // 0x80276C3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80276C40: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80276C44: jr          $ra
    // 0x80276C48: nop

    return;
    // 0x80276C48: nop

;}
RECOMP_FUNC void D_802A9C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9C98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9C9C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9CA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9CA4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9CA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9CAC: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x802A9CB0: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x802A9CB4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9CB8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9CBC: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x802A9CC0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9CC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9CC8: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
    // 0x802A9CCC: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9CD0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A9CD4: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
    // 0x802A9CD8: swc1        $f10, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f10.u32l;
    // 0x802A9CDC: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A9CE0: jr          $ra
    // 0x802A9CE4: swc1        $f16, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f16.u32l;
    return;
    // 0x802A9CE4: swc1        $f16, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f16.u32l;
;}
RECOMP_FUNC void D_80247EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247EB4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80247EB8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80247EBC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80247EC0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80247EC4: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80247EC8:
    // 0x80247EC8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80247ECC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80247ED0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247ED4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80247ED8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80247EDC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80247EE0: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    // 0x80247EE4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80247EE8: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x80247EEC: bne         $at, $zero, L_80247EC8
    if (ctx->r1 != 0) {
        // 0x80247EF0: sw          $t1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r9;
            goto L_80247EC8;
    }
    // 0x80247EF0: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80247EF4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80247EF8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80247EFC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80247F00: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x80247F04: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80247F08: sw          $t2, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r10;
    // 0x80247F0C: sb          $t3, 0x8($sp)
    MEM_B(0X8, ctx->r29) = ctx->r11;
    // 0x80247F10: sb          $t4, 0x9($sp)
    MEM_B(0X9, ctx->r29) = ctx->r12;
    // 0x80247F14: sb          $t5, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r13;
    // 0x80247F18: sb          $a0, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r4;
    // 0x80247F1C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80247F20:
    // 0x80247F20: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80247F24: addu        $t8, $sp, $t6
    ctx->r24 = ADD32(ctx->r29, ctx->r14);
    // 0x80247F28: sb          $zero, 0xC($t8)
    MEM_B(0XC, ctx->r24) = 0;
    // 0x80247F2C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80247F30: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80247F34: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x80247F38: bne         $at, $zero, L_80247F20
    if (ctx->r1 != 0) {
        // 0x80247F3C: sw          $t9, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r25;
            goto L_80247F20;
    }
    // 0x80247F3C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80247F40: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80247F44:
    // 0x80247F44: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80247F48: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x80247F4C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80247F50: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x80247F54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80247F58: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x80247F5C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80247F60: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x80247F64: bne         $at, $zero, L_80247F44
    if (ctx->r1 != 0) {
        // 0x80247F68: sw          $t2, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r10;
            goto L_80247F44;
    }
    // 0x80247F68: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80247F6C: addiu       $t6, $sp, 0x8
    ctx->r14 = ADD32(ctx->r29, 0X8);
    // 0x80247F70: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80247F74: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x80247F78: addiu       $t1, $zero, 0xFE
    ctx->r9 = ADD32(0, 0XFE);
    // 0x80247F7C: swl         $at, 0x0($t5)
    do_swl(rdram, 0X0, ctx->r13, ctx->r1);
    // 0x80247F80: swr         $at, 0x3($t5)
    do_swr(rdram, 0X3, ctx->r13, ctx->r1);
    // 0x80247F84: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80247F88: swl         $t7, 0x4($t5)
    do_swl(rdram, 0X4, ctx->r13, ctx->r15);
    // 0x80247F8C: swr         $t7, 0x7($t5)
    do_swr(rdram, 0X7, ctx->r13, ctx->r15);
    // 0x80247F90: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80247F94: swl         $at, 0x8($t5)
    do_swl(rdram, 0X8, ctx->r13, ctx->r1);
    // 0x80247F98: swr         $at, 0xB($t5)
    do_swr(rdram, 0XB, ctx->r13, ctx->r1);
    // 0x80247F9C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80247FA0: addiu       $t0, $t9, 0xC
    ctx->r8 = ADD32(ctx->r25, 0XC);
    // 0x80247FA4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80247FA8: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
    // 0x80247FAC: jr          $ra
    // 0x80247FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80247FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802DED50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DEDD0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DEDD4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802DEDD8: jr          $ra
    // 0x802DEDDC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802DEDDC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
