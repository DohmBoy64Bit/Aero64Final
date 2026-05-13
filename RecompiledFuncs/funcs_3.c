#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802B81C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B8248: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x802B824C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802B8250: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B8254: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802B8258: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x802B825C: sw          $a2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r6;
    // 0x802B8260: sb          $t6, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = ctx->r14;
    // 0x802B8264: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802B8268: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802B826C: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x802B8270: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802B8274: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802B8278: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x802B827C: jalr        $t9
    // 0x802B8280: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802B8280: addu        $a0, $t7, $v1
    ctx->r4 = ADD32(ctx->r15, ctx->r3);
    after_0:
    // 0x802B8284: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x802B8288: jal         0x80228DE0
    // 0x802B828C: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802B828C: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_1:
    // 0x802B8290: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802B8294: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B8298: lwc1        $f2, 0xF8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802B829C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802B82A0: sb          $t8, 0xB4($s0)
    MEM_B(0XB4, ctx->r16) = ctx->r24;
    // 0x802B82A4: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x802B82A8: nop

    // 0x802B82AC: bc1fl       L_802B8370
    if (!c1cs) {
        // 0x802B82B0: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_802B8370;
    }
    goto skip_0;
    // 0x802B82B0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    skip_0:
    // 0x802B82B4: lbu         $t0, 0x104($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X104);
    // 0x802B82B8: beql        $t0, $zero, L_802B8370
    if (ctx->r8 == 0) {
        // 0x802B82BC: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_802B8370;
    }
    goto skip_1;
    // 0x802B82BC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    skip_1:
    // 0x802B82C0: lwc1        $f6, 0x100($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X100);
    // 0x802B82C4: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x802B82C8: nop

    // 0x802B82CC: bc1fl       L_802B8370
    if (!c1cs) {
        // 0x802B82D0: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_802B8370;
    }
    goto skip_2;
    // 0x802B82D0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    skip_2:
    // 0x802B82D4: jal         0x8023499C
    // 0x802B82D8: nop

    static_3_8023499C(rdram, ctx);
        goto after_2;
    // 0x802B82D8: nop

    after_2:
    // 0x802B82DC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802B82E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B82E4: lwc1        $f16, 0xF8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802B82E8: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802B82EC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802B82F0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802B82F4: swc1        $f18, 0x100($s0)
    MEM_W(0X100, ctx->r16) = ctx->f18.u32l;
    // 0x802B82F8: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x802B82FC: jal         0x8023499C
    // 0x802B8300: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    static_3_8023499C(rdram, ctx);
        goto after_3;
    // 0x802B8300: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    after_3:
    // 0x802B8304: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802B8308: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B830C: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x802B8310: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B8314: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802B8318: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802B831C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802B8320: jal         0x8022970C
    // 0x802B8324: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    func_8022970C(rdram, ctx);
        goto after_4;
    // 0x802B8324: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x802B8328: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802B832C: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x802B8330: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802B8334: lui         $a3, 0x3F66
    ctx->r7 = S32(0X3F66 << 16);
    // 0x802B8338: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x802B833C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802B8340: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x802B8344: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B8348: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x802B834C: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x802B8350: jal         0x802AA2E8
    // 0x802B8354: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    static_3_802AA2E8(rdram, ctx);
        goto after_5;
    // 0x802B8354: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x802B8358: beq         $v0, $zero, L_802B8368
    if (ctx->r2 == 0) {
        // 0x802B835C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802B8368;
    }
    // 0x802B835C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802B8360: jal         0x80287E78
    // 0x802B8364: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    static_3_80287E78(rdram, ctx);
        goto after_6;
    // 0x802B8364: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    after_6:
L_802B8368:
    // 0x802B8368: lwc1        $f2, 0xF8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802B836C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
L_802B8370:
    // 0x802B8370: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B8374: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x802B8378: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x802B837C: nop

    // 0x802B8380: bc1fl       L_802B83C0
    if (!c1cs) {
        // 0x802B8384: lui         $at, 0x40E0
        ctx->r1 = S32(0X40E0 << 16);
            goto L_802B83C0;
    }
    goto skip_3;
    // 0x802B8384: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    skip_3:
    // 0x802B8388: lwc1        $f0, 0xFC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XFC);
    // 0x802B838C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802B8390: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B8394: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802B8398: lwc1        $f2, 0xF8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802B839C: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802B83A0: swc1        $f16, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f16.u32l;
    // 0x802B83A4: lwc1        $f18, 0xFC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XFC);
    // 0x802B83A8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802B83AC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802B83B0: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x802B83B4: nop

    // 0x802B83B8: sh          $t3, 0x84($s0)
    MEM_H(0X84, ctx->r16) = ctx->r11;
    // 0x802B83BC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
L_802B83C0:
    // 0x802B83C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B83C4: nop

    // 0x802B83C8: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802B83CC: nop

    // 0x802B83D0: bc1fl       L_802B8400
    if (!c1cs) {
        // 0x802B83D4: lwc1        $f16, 0xC8($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0XC8);
            goto L_802B8400;
    }
    goto skip_4;
    // 0x802B83D4: lwc1        $f16, 0xC8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC8);
    skip_4:
    // 0x802B83D8: sb          $zero, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = 0;
    // 0x802B83DC: lw          $v0, 0xB8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8);
    // 0x802B83E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802B83E4: lh          $t4, 0x50($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X50);
    // 0x802B83E8: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802B83EC: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802B83F0: jalr        $t9
    // 0x802B83F4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802B83F4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_7:
    // 0x802B83F8: lwc1        $f2, 0xF8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XF8);
    // 0x802B83FC: lwc1        $f16, 0xC8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC8);
L_802B8400:
    // 0x802B8400: add.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x802B8404: swc1        $f18, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f18.u32l;
    // 0x802B8408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B840C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B8410: lbu         $v0, 0x7F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7F);
    // 0x802B8414: jr          $ra
    // 0x802B8418: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x802B8418: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void D_802ADE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ADEE8: addiu       $sp, $sp, -0x1A0
    ctx->r29 = ADD32(ctx->r29, -0X1A0);
    // 0x802ADEEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802ADEF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ADEF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802ADEF8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802ADEFC: sw          $a1, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r5;
    // 0x802ADF00: sw          $a2, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r6;
    // 0x802ADF04: sw          $a3, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r7;
    // 0x802ADF08: jal         0x802AEDDC
    // 0x802ADF0C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEDDC(rdram, ctx);
        goto after_0;
    // 0x802ADF0C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x802ADF10: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802ADF14: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802ADF18: swc1        $f0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f0.u32l;
    // 0x802ADF1C: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    // 0x802ADF20: lw          $a1, 0x1A4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1A4);
    // 0x802ADF24: jal         0x80228DE0
    // 0x802ADF28: sb          $t6, 0x13F($sp)
    MEM_B(0X13F, ctx->r29) = ctx->r14;
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802ADF28: sb          $t6, 0x13F($sp)
    MEM_B(0X13F, ctx->r29) = ctx->r14;
    after_1:
    // 0x802ADF2C: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802ADF30: jal         0x802D25F4
    // 0x802ADF34: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    static_3_802D25F4(rdram, ctx);
        goto after_2;
    // 0x802ADF34: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_2:
    // 0x802ADF38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802ADF3C: swc1        $f0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f0.u32l;
    // 0x802ADF40: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x802ADF44: nop

    // 0x802ADF48: bc1f        L_802ADF70
    if (!c1cs) {
        // 0x802ADF4C: addiu       $a0, $sp, 0x160
        ctx->r4 = ADD32(ctx->r29, 0X160);
            goto L_802ADF70;
    }
    // 0x802ADF4C: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    // 0x802ADF50: jal         0x80228DE0
    // 0x802ADF54: lw          $a1, 0x1A4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1A4);
    func_80228DE0(rdram, ctx);
        goto after_3;
    // 0x802ADF54: lw          $a1, 0x1A4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1A4);
    after_3:
    // 0x802ADF58: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802ADF5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ADF60: jal         0x8021B4B0
    // 0x802ADF64: addiu       $a2, $sp, 0x160
    ctx->r6 = ADD32(ctx->r29, 0X160);
    static_3_8021B4B0(rdram, ctx);
        goto after_4;
    // 0x802ADF64: addiu       $a2, $sp, 0x160
    ctx->r6 = ADD32(ctx->r29, 0X160);
    after_4:
    // 0x802ADF68: b           L_802AE43C
    // 0x802ADF6C: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
        goto L_802AE43C;
    // 0x802ADF6C: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
L_802ADF70:
    // 0x802ADF70: jal         0x80318268
    // 0x802ADF74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318268(rdram, ctx);
        goto after_5;
    // 0x802ADF74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802ADF78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ADF7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ADF80: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ADF84: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ADF88: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802ADF8C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802ADF90: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802ADF94: jal         0x802D2668
    // 0x802ADF98: swc1        $f4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f4.u32l;
    static_3_802D2668(rdram, ctx);
        goto after_6;
    // 0x802ADF98: swc1        $f4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x802ADF9C: swc1        $f0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f0.u32l;
    // 0x802ADFA0: jal         0x802D2660
    // 0x802ADFA4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802D2660(rdram, ctx);
        goto after_7;
    // 0x802ADFA4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x802ADFA8: lwc1        $f0, 0x5E0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5E0);
    // 0x802ADFAC: lwc1        $f8, 0x120($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X120);
    // 0x802ADFB0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ADFB4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ADFB8: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x802ADFBC: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802ADFC0: add.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x802ADFC4: swc1        $f12, 0x5E0($s0)
    MEM_W(0X5E0, ctx->r16) = ctx->f12.u32l;
    // 0x802ADFC8: swc1        $f12, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f12.u32l;
    // 0x802ADFCC: jal         0x802D297C
    // 0x802ADFD0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802D297C(rdram, ctx);
        goto after_8;
    // 0x802ADFD0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_8:
    // 0x802ADFD4: beql        $v0, $zero, L_802ADFEC
    if (ctx->r2 == 0) {
        // 0x802ADFD8: lbu         $t7, 0x24($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X24);
            goto L_802ADFEC;
    }
    goto skip_0;
    // 0x802ADFD8: lbu         $t7, 0x24($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X24);
    skip_0:
    // 0x802ADFDC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802ADFE0: nop

    // 0x802ADFE4: swc1        $f6, 0x5E0($s0)
    MEM_W(0X5E0, ctx->r16) = ctx->f6.u32l;
    // 0x802ADFE8: lbu         $t7, 0x24($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X24);
L_802ADFEC:
    // 0x802ADFEC: beql        $t7, $zero, L_802AE010
    if (ctx->r15 == 0) {
        // 0x802ADFF0: lbu         $t8, 0x648($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X648);
            goto L_802AE010;
    }
    goto skip_1;
    // 0x802ADFF0: lbu         $t8, 0x648($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X648);
    skip_1:
    // 0x802ADFF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ADFF8: sb          $zero, 0x648($s0)
    MEM_B(0X648, ctx->r16) = 0;
    // 0x802ADFFC: sb          $zero, 0x649($s0)
    MEM_B(0X649, ctx->r16) = 0;
    // 0x802AE000: sw          $zero, 0x64C($s0)
    MEM_W(0X64C, ctx->r16) = 0;
    // 0x802AE004: sw          $zero, 0x650($s0)
    MEM_W(0X650, ctx->r16) = 0;
    // 0x802AE008: swc1        $f8, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f8.u32l;
    // 0x802AE00C: lbu         $t8, 0x648($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X648);
L_802AE010:
    // 0x802AE010: beql        $t8, $zero, L_802AE3A4
    if (ctx->r24 == 0) {
        // 0x802AE014: addiu       $a0, $sp, 0x160
        ctx->r4 = ADD32(ctx->r29, 0X160);
            goto L_802AE3A4;
    }
    goto skip_2;
    // 0x802AE014: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    skip_2:
    // 0x802AE018: lw          $v0, 0x650($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X650);
    // 0x802AE01C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AE020: bne         $v0, $zero, L_802AE148
    if (ctx->r2 != 0) {
        // 0x802AE024: nop
    
            goto L_802AE148;
    }
    // 0x802AE024: nop

    // 0x802AE028: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE02C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE030: lwc1        $f0, 0x658($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
    // 0x802AE034: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE038: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802AE03C: nop

    // 0x802AE040: bc1f        L_802AE094
    if (!c1cs) {
        // 0x802AE044: nop
    
            goto L_802AE094;
    }
    // 0x802AE044: nop

    // 0x802AE048: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE04C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AE050: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802AE054: nop

    // 0x802AE058: bc1f        L_802AE094
    if (!c1cs) {
        // 0x802AE05C: nop
    
            goto L_802AE094;
    }
    // 0x802AE05C: nop

    // 0x802AE060: jal         0x80223F4C
    // 0x802AE064: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    static_3_80223F4C(rdram, ctx);
        goto after_9;
    // 0x802AE064: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_9:
    // 0x802AE068: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE06C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE070: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802AE074: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802AE078: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802AE07C: nop

    // 0x802AE080: bc1fl       L_802AE094
    if (!c1cs) {
        // 0x802AE084: lwc1        $f0, 0x658($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
            goto L_802AE094;
    }
    goto skip_3;
    // 0x802AE084: lwc1        $f0, 0x658($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
    skip_3:
    // 0x802AE088: sw          $t9, 0x650($s0)
    MEM_W(0X650, ctx->r16) = ctx->r25;
    // 0x802AE08C: sb          $t0, 0x649($s0)
    MEM_B(0X649, ctx->r16) = ctx->r8;
    // 0x802AE090: lwc1        $f0, 0x658($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
L_802AE094:
    // 0x802AE094: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE098: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE09C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE0A0: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802AE0A4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802AE0A8: nop

    // 0x802AE0AC: bc1f        L_802AE0FC
    if (!c1cs) {
        // 0x802AE0B0: nop
    
            goto L_802AE0FC;
    }
    // 0x802AE0B0: nop

    // 0x802AE0B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE0B8: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE0BC: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802AE0C0: lui         $at, 0x43BE
    ctx->r1 = S32(0X43BE << 16);
    // 0x802AE0C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE0C8: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802AE0CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE0D0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE0D4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE0D8: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802AE0DC: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802AE0E0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE0E4: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802AE0E8: nop

    // 0x802AE0EC: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AE0F0: add.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802AE0F4: b           L_802AE10C
    // 0x802AE0F8: swc1        $f4, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f4.u32l;
        goto L_802AE10C;
    // 0x802AE0F8: swc1        $f4, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f4.u32l;
L_802AE0FC:
    // 0x802AE0FC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE100: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AE104: add.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802AE108: swc1        $f4, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f4.u32l;
L_802AE10C:
    // 0x802AE10C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE110: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE114: lwc1        $f0, 0x658($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
    // 0x802AE118: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802AE11C: nop

    // 0x802AE120: bc1fl       L_802AE13C
    if (!c1cs) {
        // 0x802AE124: lwc1        $f6, 0x15C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
            goto L_802AE13C;
    }
    goto skip_4;
    // 0x802AE124: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    skip_4:
    // 0x802AE128: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AE12C: sb          $zero, 0x648($s0)
    MEM_B(0X648, ctx->r16) = 0;
    // 0x802AE130: swc1        $f10, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f10.u32l;
    // 0x802AE134: lwc1        $f0, 0x658($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
    // 0x802AE138: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
L_802AE13C:
    // 0x802AE13C: add.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x802AE140: b           L_802AE3A0
    // 0x802AE144: swc1        $f4, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
        goto L_802AE3A0;
    // 0x802AE144: swc1        $f4, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
L_802AE148:
    // 0x802AE148: bnel        $v0, $at, L_802AE2E4
    if (ctx->r2 != ctx->r1) {
        // 0x802AE14C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802AE2E4;
    }
    goto skip_5;
    // 0x802AE14C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_5:
    // 0x802AE150: lbu         $t1, 0x649($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X649);
    // 0x802AE154: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE158: beql        $t1, $zero, L_802AE1D0
    if (ctx->r9 == 0) {
        // 0x802AE15C: lwc1        $f0, 0x658($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
            goto L_802AE1D0;
    }
    goto skip_6;
    // 0x802AE15C: lwc1        $f0, 0x658($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
    skip_6:
    // 0x802AE160: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE164: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE168: lwc1        $f0, 0x658($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
    // 0x802AE16C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE170: lwc1        $f6, 0x140($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802AE174: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802AE178: nop

    // 0x802AE17C: bc1f        L_802AE1C4
    if (!c1cs) {
        // 0x802AE180: nop
    
            goto L_802AE1C4;
    }
    // 0x802AE180: nop

    // 0x802AE184: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE188: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x802AE18C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE190: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802AE194: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE198: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE19C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE1A0: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802AE1A4: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x802AE1A8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE1AC: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802AE1B0: nop

    // 0x802AE1B4: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802AE1B8: add.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x802AE1BC: b           L_802AE2A4
    // 0x802AE1C0: swc1        $f10, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f10.u32l;
        goto L_802AE2A4;
    // 0x802AE1C0: swc1        $f10, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f10.u32l;
L_802AE1C4:
    // 0x802AE1C4: b           L_802AE2A4
    // 0x802AE1C8: sb          $zero, 0x649($s0)
    MEM_B(0X649, ctx->r16) = 0;
        goto L_802AE2A4;
    // 0x802AE1C8: sb          $zero, 0x649($s0)
    MEM_B(0X649, ctx->r16) = 0;
    // 0x802AE1CC: lwc1        $f0, 0x658($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
L_802AE1D0:
    // 0x802AE1D0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE1D4: lwc1        $f4, 0x140($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802AE1D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE1DC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802AE1E0: nop

    // 0x802AE1E4: bc1f        L_802AE230
    if (!c1cs) {
        // 0x802AE1E8: nop
    
            goto L_802AE230;
    }
    // 0x802AE1E8: nop

    // 0x802AE1EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE1F0: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE1F4: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x802AE1F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE1FC: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802AE200: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE204: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE208: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE20C: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802AE210: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x802AE214: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE218: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802AE21C: nop

    // 0x802AE220: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802AE224: sub.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802AE228: b           L_802AE2A4
    // 0x802AE22C: swc1        $f6, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f6.u32l;
        goto L_802AE2A4;
    // 0x802AE22C: swc1        $f6, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f6.u32l;
L_802AE230:
    // 0x802AE230: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE234: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE238: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802AE23C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802AE240: nop

    // 0x802AE244: bc1f        L_802AE294
    if (!c1cs) {
        // 0x802AE248: nop
    
            goto L_802AE294;
    }
    // 0x802AE248: nop

    // 0x802AE24C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE250: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE254: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x802AE258: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AE25C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE260: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802AE264: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE268: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE26C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE270: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802AE274: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802AE278: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE27C: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802AE280: nop

    // 0x802AE284: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AE288: sub.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802AE28C: b           L_802AE2A4
    // 0x802AE290: swc1        $f4, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f4.u32l;
        goto L_802AE2A4;
    // 0x802AE290: swc1        $f4, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f4.u32l;
L_802AE294:
    // 0x802AE294: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE298: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AE29C: sub.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802AE2A0: swc1        $f4, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f4.u32l;
L_802AE2A4:
    // 0x802AE2A4: lwc1        $f0, 0x658($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
    // 0x802AE2A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802AE2AC: nop

    // 0x802AE2B0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802AE2B4: nop

    // 0x802AE2B8: bc1fl       L_802AE2D4
    if (!c1cs) {
        // 0x802AE2BC: lwc1        $f6, 0x15C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
            goto L_802AE2D4;
    }
    goto skip_7;
    // 0x802AE2BC: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    skip_7:
    // 0x802AE2C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AE2C4: sb          $zero, 0x648($s0)
    MEM_B(0X648, ctx->r16) = 0;
    // 0x802AE2C8: swc1        $f10, 0x658($s0)
    MEM_W(0X658, ctx->r16) = ctx->f10.u32l;
    // 0x802AE2CC: lwc1        $f0, 0x658($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X658);
    // 0x802AE2D0: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
L_802AE2D4:
    // 0x802AE2D4: add.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x802AE2D8: b           L_802AE3A0
    // 0x802AE2DC: swc1        $f4, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
        goto L_802AE3A0;
    // 0x802AE2DC: swc1        $f4, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
    // 0x802AE2E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802AE2E4:
    // 0x802AE2E4: beq         $v0, $at, L_802AE2F4
    if (ctx->r2 == ctx->r1) {
        // 0x802AE2E8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802AE2F4;
    }
    // 0x802AE2E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AE2EC: bnel        $v0, $at, L_802AE3A4
    if (ctx->r2 != ctx->r1) {
        // 0x802AE2F0: addiu       $a0, $sp, 0x160
        ctx->r4 = ADD32(ctx->r29, 0X160);
            goto L_802AE3A4;
    }
    goto skip_8;
    // 0x802AE2F0: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    skip_8:
L_802AE2F4:
    // 0x802AE2F4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802AE2F8: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802AE2FC: lw          $t9, 0x44($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X44);
    // 0x802AE300: lh          $t2, 0x40($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X40);
    // 0x802AE304: jalr        $t9
    // 0x802AE308: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x802AE308: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    after_10:
    // 0x802AE30C: lwc1        $f12, 0x65C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X65C);
    // 0x802AE310: jal         0x802CF4D0
    // 0x802AE314: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_11;
    // 0x802AE314: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_11:
    // 0x802AE318: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802AE31C: nop

    // 0x802AE320: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802AE324: nop

    // 0x802AE328: bc1fl       L_802AE360
    if (!c1cs) {
        // 0x802AE32C: lw          $v0, 0xC($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XC);
            goto L_802AE360;
    }
    goto skip_9;
    // 0x802AE32C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    skip_9:
    // 0x802AE330: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802AE334: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802AE338: lw          $t9, 0x44($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X44);
    // 0x802AE33C: lh          $t3, 0x40($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X40);
    // 0x802AE340: jalr        $t9
    // 0x802AE344: addu        $a0, $t3, $v0
    ctx->r4 = ADD32(ctx->r11, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x802AE344: addu        $a0, $t3, $v0
    ctx->r4 = ADD32(ctx->r11, ctx->r2);
    after_12:
    // 0x802AE348: lwc1        $f12, 0x65C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X65C);
    // 0x802AE34C: jal         0x802CF4D0
    // 0x802AE350: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_13;
    // 0x802AE350: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_13:
    // 0x802AE354: b           L_802AE384
    // 0x802AE358: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802AE384;
    // 0x802AE358: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802AE35C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
L_802AE360:
    // 0x802AE360: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802AE364: lw          $t9, 0x44($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X44);
    // 0x802AE368: lh          $t4, 0x40($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X40);
    // 0x802AE36C: jalr        $t9
    // 0x802AE370: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x802AE370: addu        $a0, $t4, $v0
    ctx->r4 = ADD32(ctx->r12, ctx->r2);
    after_14:
    // 0x802AE374: lwc1        $f12, 0x65C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X65C);
    // 0x802AE378: jal         0x802CF4D0
    // 0x802AE37C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_15;
    // 0x802AE37C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_15:
    // 0x802AE380: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802AE384:
    // 0x802AE384: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE388: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE38C: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x802AE390: nop

    // 0x802AE394: bc1fl       L_802AE3A4
    if (!c1cs) {
        // 0x802AE398: addiu       $a0, $sp, 0x160
        ctx->r4 = ADD32(ctx->r29, 0X160);
            goto L_802AE3A4;
    }
    goto skip_10;
    // 0x802AE398: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    skip_10:
    // 0x802AE39C: sb          $zero, 0x648($s0)
    MEM_B(0X648, ctx->r16) = 0;
L_802AE3A0:
    // 0x802AE3A0: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
L_802AE3A4:
    // 0x802AE3A4: lw          $a1, 0x15C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X15C);
    // 0x802AE3A8: jal         0x802D01D4
    // 0x802AE3AC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_16;
    // 0x802AE3AC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_16:
    // 0x802AE3B0: lhu         $t5, 0x10($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X10);
    // 0x802AE3B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AE3B8: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x802AE3BC: beq         $t5, $at, L_802AE428
    if (ctx->r13 == ctx->r1) {
        // 0x802AE3C0: addiu       $a2, $sp, 0xE8
        ctx->r6 = ADD32(ctx->r29, 0XE8);
            goto L_802AE428;
    }
    // 0x802AE3C0: addiu       $a2, $sp, 0xE8
    ctx->r6 = ADD32(ctx->r29, 0XE8);
    // 0x802AE3C4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x802AE3C8: jal         0x802D2598
    // 0x802AE3CC: addiu       $a3, $sp, 0xE4
    ctx->r7 = ADD32(ctx->r29, 0XE4);
    static_3_802D2598(rdram, ctx);
        goto after_17;
    // 0x802AE3CC: addiu       $a3, $sp, 0xE4
    ctx->r7 = ADD32(ctx->r29, 0XE4);
    after_17:
    // 0x802AE3D0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x802AE3D4: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802AE3D8: lw          $t9, 0x6C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X6C);
    // 0x802AE3DC: lh          $t6, 0x68($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X68);
    // 0x802AE3E0: jalr        $t9
    // 0x802AE3E4: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x802AE3E4: addu        $a0, $t6, $v0
    ctx->r4 = ADD32(ctx->r14, ctx->r2);
    after_18:
    // 0x802AE3E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802AE3EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AE3F0: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x802AE3F4: lwc1        $f2, 0x5E4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X5E4);
    // 0x802AE3F8: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802AE3FC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE400: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    // 0x802AE404: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802AE408: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802AE40C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE410: sub.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x802AE414: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AE418: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x802AE41C: swc1        $f10, 0x5E4($s0)
    MEM_W(0X5E4, ctx->r16) = ctx->f10.u32l;
    // 0x802AE420: jal         0x802D01D4
    // 0x802AE424: lw          $a1, 0x5E4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5E4);
    static_3_802D01D4(rdram, ctx);
        goto after_19;
    // 0x802AE424: lw          $a1, 0x5E4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X5E4);
    after_19:
L_802AE428:
    // 0x802AE428: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AE42C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AE430: jal         0x8021B4B0
    // 0x802AE434: addiu       $a2, $sp, 0x160
    ctx->r6 = ADD32(ctx->r29, 0X160);
    static_3_8021B4B0(rdram, ctx);
        goto after_20;
    // 0x802AE434: addiu       $a2, $sp, 0x160
    ctx->r6 = ADD32(ctx->r29, 0X160);
    after_20:
    // 0x802AE438: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
L_802AE43C:
    // 0x802AE43C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AE440: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    // 0x802AE444: bne         $t7, $at, L_802AE4D0
    if (ctx->r15 != ctx->r1) {
        // 0x802AE448: addiu       $a1, $zero, 0x13
        ctx->r5 = ADD32(0, 0X13);
            goto L_802AE4D0;
    }
    // 0x802AE448: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x802AE44C: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x802AE450: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AE454: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE458: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE45C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802AE460: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AE464: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE468: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AE46C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802AE470: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802AE474: bc1fl       L_802AE488
    if (!c1cs) {
        // 0x802AE478: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_802AE488;
    }
    goto skip_11;
    // 0x802AE478: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_11:
    // 0x802AE47C: b           L_802AE4A4
    // 0x802AE480: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_802AE4A4;
    // 0x802AE480: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x802AE484: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_802AE488:
    // 0x802AE488: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE48C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802AE490: nop

    // 0x802AE494: bc1fl       L_802AE4A8
    if (!c1cs) {
        // 0x802AE498: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802AE4A8;
    }
    goto skip_12;
    // 0x802AE498: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_12:
    // 0x802AE49C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802AE4A0: nop

L_802AE4A4:
    // 0x802AE4A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802AE4A8:
    // 0x802AE4A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AE4AC: nop

    // 0x802AE4B0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802AE4B4: nop

    // 0x802AE4B8: bc1fl       L_802AE4C8
    if (!c1cs) {
        // 0x802AE4BC: mfc1        $a2, $f12
        ctx->r6 = (int32_t)ctx->f12.u32l;
            goto L_802AE4C8;
    }
    goto skip_13;
    // 0x802AE4BC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    skip_13:
    // 0x802AE4C0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802AE4C4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
L_802AE4C8:
    // 0x802AE4C8: jal         0x80200B20
    // 0x802AE4CC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80200B20(rdram, ctx);
        goto after_21;
    // 0x802AE4CC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_21:
L_802AE4D0:
    // 0x802AE4D0: lbu         $t8, 0x1D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1D);
    // 0x802AE4D4: lbu         $t0, 0x13F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X13F);
    // 0x802AE4D8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802AE4DC: bnel        $t8, $zero, L_802AE4F0
    if (ctx->r24 != 0) {
        // 0x802AE4E0: lhu         $t1, 0x10($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X10);
            goto L_802AE4F0;
    }
    goto skip_14;
    // 0x802AE4E0: lhu         $t1, 0x10($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X10);
    skip_14:
    // 0x802AE4E4: bne         $t0, $at, L_802AEACC
    if (ctx->r8 != ctx->r1) {
        // 0x802AE4E8: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802AEACC;
    }
    // 0x802AE4E8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AE4EC: lhu         $t1, 0x10($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X10);
L_802AE4F0:
    // 0x802AE4F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AE4F4: lbu         $t2, 0x13F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X13F);
    // 0x802AE4F8: bne         $t1, $at, L_802AE518
    if (ctx->r9 != ctx->r1) {
        // 0x802AE4FC: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_802AE518;
    }
    // 0x802AE4FC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802AE500: beql        $t2, $at, L_802AE51C
    if (ctx->r10 == ctx->r1) {
        // 0x802AE504: lw          $v0, 0x5DC($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X5DC);
            goto L_802AE51C;
    }
    goto skip_15;
    // 0x802AE504: lw          $v0, 0x5DC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5DC);
    skip_15:
    // 0x802AE508: jal         0x802D2770
    // 0x802AE50C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802D2770(rdram, ctx);
        goto after_22;
    // 0x802AE50C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_22:
    // 0x802AE510: beq         $v0, $zero, L_802AE760
    if (ctx->r2 == 0) {
        // 0x802AE514: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802AE760;
    }
    // 0x802AE514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_802AE518:
    // 0x802AE518: lw          $v0, 0x5DC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5DC);
L_802AE51C:
    // 0x802AE51C: lwc1        $f6, 0x5D4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5D4);
    // 0x802AE520: lwc1        $f8, 0x1A8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x802AE524: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802AE528: bne         $at, $zero, L_802AE53C
    if (ctx->r1 != 0) {
        // 0x802AE52C: sub.s       $f2, $f6, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
            goto L_802AE53C;
    }
    // 0x802AE52C: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802AE530: swc1        $f8, 0x5D4($s0)
    MEM_W(0X5D4, ctx->r16) = ctx->f8.u32l;
    // 0x802AE534: sw          $zero, 0x5DC($s0)
    MEM_W(0X5DC, ctx->r16) = 0;
    // 0x802AE538: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802AE53C:
    // 0x802AE53C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802AE540: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AE544: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE548: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AE54C: mul.s       $f10, $f2, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x802AE550: lwc1        $f16, 0x5D8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X5D8);
    // 0x802AE554: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x802AE558: sw          $t3, 0x5DC($s0)
    MEM_W(0X5DC, ctx->r16) = ctx->r11;
    // 0x802AE55C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE560: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802AE564: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AE568: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x802AE56C: mul.s       $f14, $f8, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802AE570: sub.s       $f12, $f16, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x802AE574: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x802AE578: nop

    // 0x802AE57C: bc1fl       L_802AE590
    if (!c1cs) {
        // 0x802AE580: neg.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
            goto L_802AE590;
    }
    goto skip_16;
    // 0x802AE580: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    skip_16:
    // 0x802AE584: b           L_802AE590
    // 0x802AE588: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_802AE590;
    // 0x802AE588: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x802AE58C: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
L_802AE590:
    // 0x802AE590: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE594: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802AE598: nop

    // 0x802AE59C: bc1fl       L_802AE5CC
    if (!c1cs) {
        // 0x802AE5A0: lw          $a1, 0x2A0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X2A0);
            goto L_802AE5CC;
    }
    goto skip_17;
    // 0x802AE5A0: lw          $a1, 0x2A0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A0);
    skip_17:
    // 0x802AE5A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802AE5A8: nop

    // 0x802AE5AC: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x802AE5B0: nop

    // 0x802AE5B4: bc1fl       L_802AE5C8
    if (!c1cs) {
        // 0x802AE5B8: add.s       $f14, $f16, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f0.fl;
            goto L_802AE5C8;
    }
    goto skip_18;
    // 0x802AE5B8: add.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f0.fl;
    skip_18:
    // 0x802AE5BC: b           L_802AE5C8
    // 0x802AE5C0: sub.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f0.fl;
        goto L_802AE5C8;
    // 0x802AE5C0: sub.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x802AE5C4: add.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f0.fl;
L_802AE5C8:
    // 0x802AE5C8: lw          $a1, 0x2A0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A0);
L_802AE5CC:
    // 0x802AE5CC: swc1        $f14, 0x5D8($s0)
    MEM_W(0X5D8, ctx->r16) = ctx->f14.u32l;
    // 0x802AE5D0: bltzl       $a1, L_802AE5F8
    if (SIGNED(ctx->r5) < 0) {
        // 0x802AE5D4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802AE5F8;
    }
    goto skip_19;
    // 0x802AE5D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_19:
    // 0x802AE5D8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AE5DC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802AE5E0: jal         0x80200B20
    // 0x802AE5E4: swc1        $f14, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f14.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_23;
    // 0x802AE5E4: swc1        $f14, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f14.u32l;
    after_23:
    // 0x802AE5E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802AE5EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AE5F0: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x802AE5F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802AE5F8:
    // 0x802AE5F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AE5FC: lwc1        $f6, 0x1AC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x802AE600: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802AE604: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AE608: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x802AE60C: lwc1        $f6, 0x1A8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x802AE610: lwc1        $f2, 0x1A8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x802AE614: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802AE618: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802AE61C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE620: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802AE624: bc1f        L_802AE634
    if (!c1cs) {
        // 0x802AE628: sub.s       $f0, $f16, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f10.fl;
            goto L_802AE634;
    }
    // 0x802AE628: sub.s       $f0, $f16, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x802AE62C: b           L_802AE638
    // 0x802AE630: mov.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = ctx->f6.fl;
        goto L_802AE638;
    // 0x802AE630: mov.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = ctx->f6.fl;
L_802AE634:
    // 0x802AE634: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_802AE638:
    // 0x802AE638: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802AE63C: lbu         $t4, 0x5E8($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X5E8);
    // 0x802AE640: add.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x802AE644: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
    // 0x802AE648: beq         $t4, $zero, L_802AE668
    if (ctx->r12 == 0) {
        // 0x802AE64C: mov.s       $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = ctx->f12.fl;
            goto L_802AE668;
    }
    // 0x802AE64C: mov.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = ctx->f12.fl;
    // 0x802AE650: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AE654: nop

    // 0x802AE658: add.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x802AE65C: add.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x802AE660: b           L_802AE69C
    // 0x802AE664: sub.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f0.fl;
        goto L_802AE69C;
    // 0x802AE664: sub.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f0.fl;
L_802AE668:
    // 0x802AE668: lw          $a1, 0x2B0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2B0);
    // 0x802AE66C: bltzl       $a1, L_802AE6A0
    if (SIGNED(ctx->r5) < 0) {
        // 0x802AE670: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802AE6A0;
    }
    goto skip_20;
    // 0x802AE670: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_20:
    // 0x802AE674: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x802AE678: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AE67C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802AE680: swc1        $f18, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f18.u32l;
    // 0x802AE684: swc1        $f16, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f16.u32l;
    // 0x802AE688: jal         0x80200B20
    // 0x802AE68C: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_24;
    // 0x802AE68C: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    after_24:
    // 0x802AE690: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802AE694: lwc1        $f16, 0x148($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X148);
    // 0x802AE698: lwc1        $f18, 0x144($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X144);
L_802AE69C:
    // 0x802AE69C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802AE6A0:
    // 0x802AE6A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE6A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AE6A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AE6AC: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x802AE6B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE6B4: bc1fl       L_802AE6C8
    if (!c1cs) {
        // 0x802AE6B8: c.lt.s      $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
            goto L_802AE6C8;
    }
    goto skip_21;
    // 0x802AE6B8: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    skip_21:
    // 0x802AE6BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AE6C0: nop

    // 0x802AE6C4: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
L_802AE6C8:
    // 0x802AE6C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE6CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AE6D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE6D4: bc1fl       L_802AE6E8
    if (!c1cs) {
        // 0x802AE6D8: c.lt.s      $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
            goto L_802AE6E8;
    }
    goto skip_22;
    // 0x802AE6D8: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    skip_22:
    // 0x802AE6DC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802AE6E0: nop

    // 0x802AE6E4: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
L_802AE6E8:
    // 0x802AE6E8: nop

    // 0x802AE6EC: bc1fl       L_802AE700
    if (!c1cs) {
        // 0x802AE6F0: c.lt.s      $f18, $f6
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
            goto L_802AE700;
    }
    goto skip_23;
    // 0x802AE6F0: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    skip_23:
    // 0x802AE6F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AE6F8: nop

    // 0x802AE6FC: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
L_802AE700:
    // 0x802AE700: nop

    // 0x802AE704: bc1fl       L_802AE718
    if (!c1cs) {
        // 0x802AE708: lw          $a1, 0x2A4($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X2A4);
            goto L_802AE718;
    }
    goto skip_24;
    // 0x802AE708: lw          $a1, 0x2A4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A4);
    skip_24:
    // 0x802AE70C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802AE710: nop

    // 0x802AE714: lw          $a1, 0x2A4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A4);
L_802AE718:
    // 0x802AE718: bltzl       $a1, L_802AE740
    if (SIGNED(ctx->r5) < 0) {
        // 0x802AE71C: lw          $a1, 0x2A8($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X2A8);
            goto L_802AE740;
    }
    goto skip_25;
    // 0x802AE71C: lw          $a1, 0x2A8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A8);
    skip_25:
    // 0x802AE720: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AE724: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802AE728: swc1        $f18, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f18.u32l;
    // 0x802AE72C: jal         0x80200B20
    // 0x802AE730: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_25;
    // 0x802AE730: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    after_25:
    // 0x802AE734: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802AE738: lwc1        $f18, 0x144($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X144);
    // 0x802AE73C: lw          $a1, 0x2A8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A8);
L_802AE740:
    // 0x802AE740: bltz        $a1, L_802AE904
    if (SIGNED(ctx->r5) < 0) {
        // 0x802AE744: nop
    
            goto L_802AE904;
    }
    // 0x802AE744: nop

    // 0x802AE748: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AE74C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802AE750: jal         0x80200B20
    // 0x802AE754: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_26;
    // 0x802AE754: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    after_26:
    // 0x802AE758: b           L_802AE904
    // 0x802AE75C: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
        goto L_802AE904;
    // 0x802AE75C: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
L_802AE760:
    // 0x802AE760: jal         0x80223F4C
    // 0x802AE764: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    static_3_80223F4C(rdram, ctx);
        goto after_27;
    // 0x802AE764: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_27:
    // 0x802AE768: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802AE76C: swc1        $f0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f0.u32l;
    // 0x802AE770: jal         0x80223F4C
    // 0x802AE774: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80223F4C(rdram, ctx);
        goto after_28;
    // 0x802AE774: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_28:
    // 0x802AE778: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE77C: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x802AE780: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE784: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x802AE788: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE78C: c.le.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl <= ctx->f14.fl;
    // 0x802AE790: nop

    // 0x802AE794: bc1fl       L_802AE7A4
    if (!c1cs) {
        // 0x802AE798: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_802AE7A4;
    }
    goto skip_26;
    // 0x802AE798: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_26:
    // 0x802AE79C: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE7A0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_802AE7A4:
    // 0x802AE7A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AE7A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE7AC: c.le.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl <= ctx->f10.fl;
    // 0x802AE7B0: nop

    // 0x802AE7B4: bc1fl       L_802AE7C4
    if (!c1cs) {
        // 0x802AE7B8: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_802AE7C4;
    }
    goto skip_27;
    // 0x802AE7B8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_27:
    // 0x802AE7BC: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE7C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_802AE7C4:
    // 0x802AE7C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AE7C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE7CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AE7D0: mul.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802AE7D4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802AE7D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AE7DC: lbu         $t5, 0x5E8($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X5E8);
    // 0x802AE7E0: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802AE7E4: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x802AE7E8: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AE7EC: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
    // 0x802AE7F0: beq         $t5, $zero, L_802AE818
    if (ctx->r13 == 0) {
        // 0x802AE7F4: mov.s       $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = ctx->f12.fl;
            goto L_802AE818;
    }
    // 0x802AE7F4: mov.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = ctx->f12.fl;
    // 0x802AE7F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AE7FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE800: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AE804: mul.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x802AE808: add.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x802AE80C: sub.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x802AE810: b           L_802AE880
    // 0x802AE814: add.s       $f0, $f14, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f6.fl;
        goto L_802AE880;
    // 0x802AE814: add.s       $f0, $f14, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f6.fl;
L_802AE818:
    // 0x802AE818: lw          $a1, 0x2B0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2B0);
    // 0x802AE81C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE820: bltzl       $a1, L_802AE874
    if (SIGNED(ctx->r5) < 0) {
        // 0x802AE824: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_802AE874;
    }
    goto skip_28;
    // 0x802AE824: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_28:
    // 0x802AE828: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE82C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802AE830: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AE834: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x802AE838: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AE83C: swc1        $f18, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f18.u32l;
    // 0x802AE840: swc1        $f16, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f16.u32l;
    // 0x802AE844: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x802AE848: swc1        $f14, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f14.u32l;
    // 0x802AE84C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AE850: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    // 0x802AE854: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802AE858: jal         0x80200B20
    // 0x802AE85C: nop

    static_3_80200B20(rdram, ctx);
        goto after_29;
    // 0x802AE85C: nop

    after_29:
    // 0x802AE860: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802AE864: lwc1        $f14, 0x14C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x802AE868: lwc1        $f16, 0x148($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X148);
    // 0x802AE86C: lwc1        $f18, 0x144($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X144);
    // 0x802AE870: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_802AE874:
    // 0x802AE874: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AE878: nop

    // 0x802AE87C: add.s       $f0, $f14, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f10.fl;
L_802AE880:
    // 0x802AE880: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802AE884: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AE888: lw          $a1, 0x2A0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A0);
    // 0x802AE88C: mul.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802AE890: bltzl       $a1, L_802AE8C0
    if (SIGNED(ctx->r5) < 0) {
        // 0x802AE894: lw          $a1, 0x2A4($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X2A4);
            goto L_802AE8C0;
    }
    goto skip_29;
    // 0x802AE894: lw          $a1, 0x2A4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A4);
    skip_29:
    // 0x802AE898: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AE89C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802AE8A0: swc1        $f18, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f18.u32l;
    // 0x802AE8A4: swc1        $f16, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f16.u32l;
    // 0x802AE8A8: jal         0x80200B20
    // 0x802AE8AC: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_30;
    // 0x802AE8AC: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    after_30:
    // 0x802AE8B0: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802AE8B4: lwc1        $f16, 0x148($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X148);
    // 0x802AE8B8: lwc1        $f18, 0x144($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X144);
    // 0x802AE8BC: lw          $a1, 0x2A4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A4);
L_802AE8C0:
    // 0x802AE8C0: bltzl       $a1, L_802AE8E8
    if (SIGNED(ctx->r5) < 0) {
        // 0x802AE8C4: lw          $a1, 0x2A8($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X2A8);
            goto L_802AE8E8;
    }
    goto skip_30;
    // 0x802AE8C4: lw          $a1, 0x2A8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A8);
    skip_30:
    // 0x802AE8C8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AE8CC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x802AE8D0: swc1        $f18, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f18.u32l;
    // 0x802AE8D4: jal         0x80200B20
    // 0x802AE8D8: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_31;
    // 0x802AE8D8: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    after_31:
    // 0x802AE8DC: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802AE8E0: lwc1        $f18, 0x144($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X144);
    // 0x802AE8E4: lw          $a1, 0x2A8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2A8);
L_802AE8E8:
    // 0x802AE8E8: bltz        $a1, L_802AE904
    if (SIGNED(ctx->r5) < 0) {
        // 0x802AE8EC: nop
    
            goto L_802AE904;
    }
    // 0x802AE8EC: nop

    // 0x802AE8F0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AE8F4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x802AE8F8: jal         0x80200B20
    // 0x802AE8FC: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_32;
    // 0x802AE8FC: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    after_32:
    // 0x802AE900: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
L_802AE904:
    // 0x802AE904: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AE908: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AE90C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AE910: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE914: lwc1        $f6, 0x7BC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7BC);
    // 0x802AE918: lwc1        $f4, 0x7C0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C0);
    // 0x802AE91C: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    // 0x802AE920: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802AE924: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AE928: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    // 0x802AE92C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802AE930: mul.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802AE934: nop

    // 0x802AE938: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AE93C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802AE940: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x802AE944: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802AE948: jal         0x802D01D4
    // 0x802AE94C: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_33;
    // 0x802AE94C: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
    after_33:
    // 0x802AE950: lwc1        $f0, 0xE0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802AE954: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802AE958: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    // 0x802AE95C: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802AE960: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x802AE964: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x802AE968: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802AE96C: jal         0x802D01D4
    // 0x802AE970: nop

    static_3_802D01D4(rdram, ctx);
        goto after_34;
    // 0x802AE970: nop

    after_34:
    // 0x802AE974: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AE978: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AE97C: jal         0x8021B4B0
    // 0x802AE980: addiu       $a2, $sp, 0x160
    ctx->r6 = ADD32(ctx->r29, 0X160);
    static_3_8021B4B0(rdram, ctx);
        goto after_35;
    // 0x802AE980: addiu       $a2, $sp, 0x160
    ctx->r6 = ADD32(ctx->r29, 0X160);
    after_35:
    // 0x802AE984: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x802AE988: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AE98C: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802AE990: beql        $v0, $at, L_802AEA30
    if (ctx->r2 == ctx->r1) {
        // 0x802AE994: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802AEA30;
    }
    goto skip_31;
    // 0x802AE994: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_31:
    // 0x802AE998: lwc1        $f0, 0x58($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X58);
    // 0x802AE99C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AE9A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AE9A4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802AE9A8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802AE9AC: nop

    // 0x802AE9B0: bc1fl       L_802AE9CC
    if (!c1cs) {
        // 0x802AE9B4: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_802AE9CC;
    }
    goto skip_32;
    // 0x802AE9B4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_32:
    // 0x802AE9B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802AE9BC: nop

    // 0x802AE9C0: swc1        $f4, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f4.u32l;
    // 0x802AE9C4: lwc1        $f0, 0x58($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X58);
    // 0x802AE9C8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_802AE9CC:
    // 0x802AE9CC: nop

    // 0x802AE9D0: bc1fl       L_802AE9E4
    if (!c1cs) {
        // 0x802AE9D4: div.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
            goto L_802AE9E4;
    }
    goto skip_33;
    // 0x802AE9D4: div.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    skip_33:
    // 0x802AE9D8: swc1        $f2, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f2.u32l;
    // 0x802AE9DC: lwc1        $f0, 0x58($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X58);
    // 0x802AE9E0: div.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
L_802AE9E4:
    // 0x802AE9E4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802AE9E8: nop

    // 0x802AE9EC: bc1fl       L_802AE9FC
    if (!c1cs) {
        // 0x802AE9F0: lw          $a1, 0x2AC($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X2AC);
            goto L_802AE9FC;
    }
    goto skip_34;
    // 0x802AE9F0: lw          $a1, 0x2AC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2AC);
    skip_34:
    // 0x802AE9F4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x802AE9F8: lw          $a1, 0x2AC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2AC);
L_802AE9FC:
    // 0x802AE9FC: bltzl       $a1, L_802AEA1C
    if (SIGNED(ctx->r5) < 0) {
        // 0x802AEA00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802AEA1C;
    }
    goto skip_35;
    // 0x802AEA00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_35:
    // 0x802AEA04: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AEA08: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802AEA0C: jal         0x80200B20
    // 0x802AEA10: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_36;
    // 0x802AEA10: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    after_36:
    // 0x802AEA14: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802AEA18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802AEA1C:
    // 0x802AEA1C: jal         0x802DE488
    // 0x802AEA20: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    static_3_802DE488(rdram, ctx);
        goto after_37;
    // 0x802AEA20: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    after_37:
    // 0x802AEA24: lwc1        $f12, 0x150($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X150);
    // 0x802AEA28: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x802AEA2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802AEA30:
    // 0x802AEA30: bne         $v0, $at, L_802AEA78
    if (ctx->r2 != ctx->r1) {
        // 0x802AEA34: nop
    
            goto L_802AEA78;
    }
    // 0x802AEA34: nop

    // 0x802AEA38: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AEA3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802AEA40: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802AEA44: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x802AEA48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802AEA4C: bc1f        L_802AEA70
    if (!c1cs) {
        // 0x802AEA50: nop
    
            goto L_802AEA70;
    }
    // 0x802AEA50: nop

    // 0x802AEA54: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AEA58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AEA5C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802AEA60: jal         0x8021B240
    // 0x802AEA64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_38;
    // 0x802AEA64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_38:
    // 0x802AEA68: b           L_802AEA78
    // 0x802AEA6C: nop

        goto L_802AEA78;
    // 0x802AEA6C: nop

L_802AEA70:
    // 0x802AEA70: jal         0x8021B240
    // 0x802AEA74: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021B240(rdram, ctx);
        goto after_39;
    // 0x802AEA74: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_39:
L_802AEA78:
    // 0x802AEA78: jal         0x802D2A0C
    // 0x802AEA7C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802D2A0C(rdram, ctx);
        goto after_40;
    // 0x802AEA7C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_40:
    // 0x802AEA80: blezl       $v0, L_802AED88
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802AEA84: lw          $at, 0x308($s0)
        ctx->r1 = MEM_W(ctx->r16, 0X308);
            goto L_802AED88;
    }
    goto skip_36;
    // 0x802AEA84: lw          $at, 0x308($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X308);
    skip_36:
    // 0x802AEA88: lbu         $t6, 0x19C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X19C);
    // 0x802AEA8C: bnel        $t6, $zero, L_802AED88
    if (ctx->r14 != 0) {
        // 0x802AEA90: lw          $at, 0x308($s0)
        ctx->r1 = MEM_W(ctx->r16, 0X308);
            goto L_802AED88;
    }
    goto skip_37;
    // 0x802AEA90: lw          $at, 0x308($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X308);
    skip_37:
    // 0x802AEA94: jal         0x8023499C
    // 0x802AEA98: nop

    static_3_8023499C(rdram, ctx);
        goto after_41;
    // 0x802AEA98: nop

    after_41:
    // 0x802AEA9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AEAA0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AEAA4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AEAA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AEAAC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802AEAB0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802AEAB4: bc1fl       L_802AED88
    if (!c1cs) {
        // 0x802AEAB8: lw          $at, 0x308($s0)
        ctx->r1 = MEM_W(ctx->r16, 0X308);
            goto L_802AED88;
    }
    goto skip_38;
    // 0x802AEAB8: lw          $at, 0x308($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X308);
    skip_38:
    // 0x802AEABC: jal         0x802AB604
    // 0x802AEAC0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AB604(rdram, ctx);
        goto after_42;
    // 0x802AEAC0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_42:
    // 0x802AEAC4: b           L_802AED88
    // 0x802AEAC8: lw          $at, 0x308($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X308);
        goto L_802AED88;
    // 0x802AEAC8: lw          $at, 0x308($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X308);
L_802AEACC:
    // 0x802AEACC: jal         0x802AED90
    // 0x802AEAD0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AED90(rdram, ctx);
        goto after_43;
    // 0x802AEAD0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_43:
    // 0x802AEAD4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802AEAD8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802AEADC: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x802AEAE0: beq         $v0, $at, L_802AED84
    if (ctx->r2 == ctx->r1) {
        // 0x802AEAE4: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_802AED84;
    }
    // 0x802AEAE4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802AEAE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AEAEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AEAF0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802AEAF4: nop

    // 0x802AEAF8: bc1fl       L_802AED88
    if (!c1cs) {
        // 0x802AEAFC: lw          $at, 0x308($s0)
        ctx->r1 = MEM_W(ctx->r16, 0X308);
            goto L_802AED88;
    }
    goto skip_39;
    // 0x802AEAFC: lw          $at, 0x308($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X308);
    skip_39:
    // 0x802AEB00: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AEB04: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802AEB08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AEB0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AEB10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AEB14: lwc1        $f10, 0x798($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X798);
    // 0x802AEB18: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802AEB1C: div.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802AEB20: lwc1        $f4, 0x79C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X79C);
    // 0x802AEB24: sub.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x802AEB28: lwc1        $f10, 0x7A0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7A0);
    // 0x802AEB2C: sub.s       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x802AEB30: mul.s       $f0, $f18, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802AEB34: lwc1        $f4, 0x7A4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7A4);
    // 0x802AEB38: sub.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x802AEB3C: mul.s       $f2, $f18, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802AEB40: sub.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802AEB44: mul.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802AEB48: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x802AEB4C: lwc1        $f10, 0x7A8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7A8);
    // 0x802AEB50: sub.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x802AEB54: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x802AEB58: lwc1        $f4, 0x7AC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7AC);
    // 0x802AEB5C: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x802AEB60: sub.s       $f8, $f12, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802AEB64: jal         0x80234AF0
    // 0x802AEB68: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    static_3_80234AF0(rdram, ctx);
        goto after_44;
    // 0x802AEB68: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    after_44:
    // 0x802AEB6C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802AEB70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AEB74: lwc1        $f10, 0x7B0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7B0);
    // 0x802AEB78: sub.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802AEB7C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802AEB80: jal         0x80234AF0
    // 0x802AEB84: swc1        $f8, 0x7B0($s0)
    MEM_W(0X7B0, ctx->r16) = ctx->f8.u32l;
    static_3_80234AF0(rdram, ctx);
        goto after_45;
    // 0x802AEB84: swc1        $f8, 0x7B0($s0)
    MEM_W(0X7B0, ctx->r16) = ctx->f8.u32l;
    after_45:
    // 0x802AEB88: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802AEB8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AEB90: lwc1        $f6, 0x7B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x802AEB94: sub.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x802AEB98: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802AEB9C: jal         0x80234AF0
    // 0x802AEBA0: swc1        $f8, 0x7B4($s0)
    MEM_W(0X7B4, ctx->r16) = ctx->f8.u32l;
    static_3_80234AF0(rdram, ctx);
        goto after_46;
    // 0x802AEBA0: swc1        $f8, 0x7B4($s0)
    MEM_W(0X7B4, ctx->r16) = ctx->f8.u32l;
    after_46:
    // 0x802AEBA4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802AEBA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AEBAC: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802AEBB0: lwc1        $f2, 0x7B0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X7B0);
    // 0x802AEBB4: sub.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802AEBB8: lwc1        $f10, 0x7B8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7B8);
    // 0x802AEBBC: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802AEBC0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802AEBC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AEBC8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802AEBCC: bc1f        L_802AEBE4
    if (!c1cs) {
        // 0x802AEBD0: swc1        $f8, 0x7B8($s0)
        MEM_W(0X7B8, ctx->r16) = ctx->f8.u32l;
            goto L_802AEBE4;
    }
    // 0x802AEBD0: swc1        $f8, 0x7B8($s0)
    MEM_W(0X7B8, ctx->r16) = ctx->f8.u32l;
    // 0x802AEBD4: swc1        $f12, 0x7B0($s0)
    MEM_W(0X7B0, ctx->r16) = ctx->f12.u32l;
    // 0x802AEBD8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AEBDC: b           L_802AEC04
    // 0x802AEBE0: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
        goto L_802AEC04;
    // 0x802AEBE0: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
L_802AEBE4:
    // 0x802AEBE4: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AEBE8: mul.s       $f6, $f14, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x802AEBEC: sub.s       $f0, $f12, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x802AEBF0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802AEBF4: nop

    // 0x802AEBF8: bc1fl       L_802AEC08
    if (!c1cs) {
        // 0x802AEBFC: lwc1        $f12, 0xA8($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0XA8);
            goto L_802AEC08;
    }
    goto skip_40;
    // 0x802AEBFC: lwc1        $f12, 0xA8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA8);
    skip_40:
    // 0x802AEC00: swc1        $f0, 0x7B0($s0)
    MEM_W(0X7B0, ctx->r16) = ctx->f0.u32l;
L_802AEC04:
    // 0x802AEC04: lwc1        $f12, 0xA8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA8);
L_802AEC08:
    // 0x802AEC08: lwc1        $f2, 0x7B4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x802AEC0C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802AEC10: nop

    // 0x802AEC14: bc1f        L_802AEC24
    if (!c1cs) {
        // 0x802AEC18: nop
    
            goto L_802AEC24;
    }
    // 0x802AEC18: nop

    // 0x802AEC1C: b           L_802AEC40
    // 0x802AEC20: swc1        $f12, 0x7B4($s0)
    MEM_W(0X7B4, ctx->r16) = ctx->f12.u32l;
        goto L_802AEC40;
    // 0x802AEC20: swc1        $f12, 0x7B4($s0)
    MEM_W(0X7B4, ctx->r16) = ctx->f12.u32l;
L_802AEC24:
    // 0x802AEC24: mul.s       $f10, $f14, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x802AEC28: sub.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x802AEC2C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802AEC30: nop

    // 0x802AEC34: bc1fl       L_802AEC44
    if (!c1cs) {
        // 0x802AEC38: lwc1        $f12, 0xAC($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0XAC);
            goto L_802AEC44;
    }
    goto skip_41;
    // 0x802AEC38: lwc1        $f12, 0xAC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XAC);
    skip_41:
    // 0x802AEC3C: swc1        $f0, 0x7B4($s0)
    MEM_W(0X7B4, ctx->r16) = ctx->f0.u32l;
L_802AEC40:
    // 0x802AEC40: lwc1        $f12, 0xAC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XAC);
L_802AEC44:
    // 0x802AEC44: lwc1        $f0, 0x7B8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7B8);
    // 0x802AEC48: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802AEC4C: nop

    // 0x802AEC50: bc1f        L_802AEC64
    if (!c1cs) {
        // 0x802AEC54: nop
    
            goto L_802AEC64;
    }
    // 0x802AEC54: nop

    // 0x802AEC58: swc1        $f12, 0x7B8($s0)
    MEM_W(0X7B8, ctx->r16) = ctx->f12.u32l;
    // 0x802AEC5C: b           L_802AEC84
    // 0x802AEC60: lwc1        $f0, 0x7B8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7B8);
        goto L_802AEC84;
    // 0x802AEC60: lwc1        $f0, 0x7B8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7B8);
L_802AEC64:
    // 0x802AEC64: mul.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x802AEC68: sub.s       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802AEC6C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802AEC70: nop

    // 0x802AEC74: bc1fl       L_802AEC88
    if (!c1cs) {
        // 0x802AEC78: lwc1        $f2, 0x140($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X140);
            goto L_802AEC88;
    }
    goto skip_42;
    // 0x802AEC78: lwc1        $f2, 0x140($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X140);
    skip_42:
    // 0x802AEC7C: swc1        $f2, 0x7B8($s0)
    MEM_W(0X7B8, ctx->r16) = ctx->f2.u32l;
    // 0x802AEC80: lwc1        $f0, 0x7B8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7B8);
L_802AEC84:
    // 0x802AEC84: lwc1        $f2, 0x140($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X140);
L_802AEC88:
    // 0x802AEC88: lwc1        $f6, 0x7B0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B0);
    // 0x802AEC8C: lwc1        $f8, 0x7A4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7A4);
    // 0x802AEC90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AEC94: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802AEC98: lwc1        $f6, 0x7A8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7A8);
    // 0x802AEC9C: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    // 0x802AECA0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802AECA4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802AECA8: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x802AECAC: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802AECB0: swc1        $f4, 0x7A4($s0)
    MEM_W(0X7A4, ctx->r16) = ctx->f4.u32l;
    // 0x802AECB4: lwc1        $f8, 0x7AC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7AC);
    // 0x802AECB8: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802AECBC: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x802AECC0: swc1        $f4, 0x7A8($s0)
    MEM_W(0X7A8, ctx->r16) = ctx->f4.u32l;
    // 0x802AECC4: lwc1        $f4, 0x798($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X798);
    // 0x802AECC8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802AECCC: lwc1        $f8, 0x7A4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7A4);
    // 0x802AECD0: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802AECD4: swc1        $f10, 0x7AC($s0)
    MEM_W(0X7AC, ctx->r16) = ctx->f10.u32l;
    // 0x802AECD8: lwc1        $f8, 0x79C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X79C);
    // 0x802AECDC: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802AECE0: lwc1        $f4, 0x7A8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7A8);
    // 0x802AECE4: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x802AECE8: swc1        $f10, 0x798($s0)
    MEM_W(0X798, ctx->r16) = ctx->f10.u32l;
    // 0x802AECEC: lwc1        $f4, 0x7A0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7A0);
    // 0x802AECF0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802AECF4: lwc1        $f8, 0x7AC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7AC);
    // 0x802AECF8: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802AECFC: swc1        $f10, 0x79C($s0)
    MEM_W(0X79C, ctx->r16) = ctx->f10.u32l;
    // 0x802AED00: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802AED04: lwc1        $f4, 0x798($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X798);
    // 0x802AED08: swc1        $f10, 0x7A0($s0)
    MEM_W(0X7A0, ctx->r16) = ctx->f10.u32l;
    // 0x802AED0C: lwc1        $f8, 0x190($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X190);
    // 0x802AED10: lwc1        $f10, 0x194($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X194);
    // 0x802AED14: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802AED18: swc1        $f6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f6.u32l;
    // 0x802AED1C: lwc1        $f8, 0x79C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X79C);
    // 0x802AED20: lwc1        $f6, 0x198($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802AED24: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802AED28: swc1        $f4, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f4.u32l;
    // 0x802AED2C: lwc1        $f10, 0x7A0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7A0);
    // 0x802AED30: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802AED34: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AED38: swc1        $f8, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f8.u32l;
    // 0x802AED3C: lwc1        $f4, 0x7AC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7AC);
    // 0x802AED40: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AED44: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802AED48: jal         0x802D01D4
    // 0x802AED4C: nop

    static_3_802D01D4(rdram, ctx);
        goto after_47;
    // 0x802AED4C: nop

    after_47:
    // 0x802AED50: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AED54: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AED58: lwc1        $f8, 0x7A4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7A4);
    // 0x802AED5C: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    // 0x802AED60: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802AED64: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802AED68: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802AED6C: jal         0x802D01D4
    // 0x802AED70: nop

    static_3_802D01D4(rdram, ctx);
        goto after_48;
    // 0x802AED70: nop

    after_48:
    // 0x802AED74: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AED78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AED7C: jal         0x8021B4B0
    // 0x802AED80: addiu       $a2, $sp, 0x160
    ctx->r6 = ADD32(ctx->r29, 0X160);
    static_3_8021B4B0(rdram, ctx);
        goto after_49;
    // 0x802AED80: addiu       $a2, $sp, 0x160
    ctx->r6 = ADD32(ctx->r29, 0X160);
    after_49:
L_802AED84:
    // 0x802AED84: lw          $at, 0x308($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X308);
L_802AED88:
    // 0x802AED88: addiu       $v0, $sp, 0x8C
    ctx->r2 = ADD32(ctx->r29, 0X8C);
    // 0x802AED8C: addiu       $t0, $sp, 0x130
    ctx->r8 = ADD32(ctx->r29, 0X130);
    // 0x802AED90: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802AED94: lw          $t8, 0x30C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X30C);
    // 0x802AED98: addiu       $t7, $sp, 0x124
    ctx->r15 = ADD32(ctx->r29, 0X124);
    // 0x802AED9C: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    // 0x802AEDA0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802AEDA4: lw          $at, 0x310($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X310);
    // 0x802AEDA8: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802AEDAC: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x802AEDB0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x802AEDB4: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x802AEDB8: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x802AEDBC: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x802AEDC0: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x802AEDC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AEDC8: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AEDCC: lw          $at, 0x3F8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X3F8);
    // 0x802AEDD0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802AEDD4: lw          $t6, 0x3FC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3FC);
    // 0x802AEDD8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802AEDDC: lw          $at, 0x400($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X400);
    // 0x802AEDE0: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802AEDE4: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x802AEDE8: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x802AEDEC: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x802AEDF0: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x802AEDF4: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x802AEDF8: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x802AEDFC: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x802AEE00: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802AEE04: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802AEE08: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    // 0x802AEE0C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802AEE10: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802AEE14: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802AEE18: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802AEE1C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802AEE20: jal         0x8022A0D0
    // 0x802AEE24: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_50;
    // 0x802AEE24: nop

    after_50:
    // 0x802AEE28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AEE2C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AEE30: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x802AEE34: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x802AEE38: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    // 0x802AEE3C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802AEE40: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x802AEE44: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802AEE48: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802AEE4C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802AEE50: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802AEE54: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x802AEE58: jal         0x8022A0D0
    // 0x802AEE5C: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_51;
    // 0x802AEE5C: nop

    after_51:
    // 0x802AEE60: addiu       $a0, $s0, 0x2BC
    ctx->r4 = ADD32(ctx->r16, 0X2BC);
    // 0x802AEE64: jal         0x80228DE0
    // 0x802AEE68: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    func_80228DE0(rdram, ctx);
        goto after_52;
    // 0x802AEE68: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    after_52:
    // 0x802AEE6C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802AEE70: sb          $t1, 0x364($s0)
    MEM_B(0X364, ctx->r16) = ctx->r9;
    // 0x802AEE74: addiu       $a0, $s0, 0x3AC
    ctx->r4 = ADD32(ctx->r16, 0X3AC);
    // 0x802AEE78: jal         0x80228DE0
    // 0x802AEE7C: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    func_80228DE0(rdram, ctx);
        goto after_53;
    // 0x802AEE7C: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    after_53:
    // 0x802AEE80: lw          $t3, 0x18($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X18);
    // 0x802AEE84: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802AEE88: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x802AEE8C: bne         $t3, $at, L_802AEF48
    if (ctx->r11 != ctx->r1) {
        // 0x802AEE90: sb          $t0, 0x454($s0)
        MEM_B(0X454, ctx->r16) = ctx->r8;
            goto L_802AEF48;
    }
    // 0x802AEE90: sb          $t0, 0x454($s0)
    MEM_B(0X454, ctx->r16) = ctx->r8;
    // 0x802AEE94: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802AEE98: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x802AEE9C: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x802AEEA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AEEA4: lwc1        $f10, 0x32A8($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X32A8);
    // 0x802AEEA8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802AEEAC: lw          $a1, 0x1A4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1A4);
    // 0x802AEEB0: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802AEEB4: jal         0x80228DE0
    // 0x802AEEB8: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_80228DE0(rdram, ctx);
        goto after_54;
    // 0x802AEEB8: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_54:
    // 0x802AEEBC: lui         $a1, 0xBE32
    ctx->r5 = S32(0XBE32 << 16);
    // 0x802AEEC0: ori         $a1, $a1, 0xB8C7
    ctx->r5 = ctx->r5 | 0XB8C7;
    // 0x802AEEC4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802AEEC8: jal         0x802D01D4
    // 0x802AEECC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_55;
    // 0x802AEECC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_55:
    // 0x802AEED0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AEED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802AEED8: jal         0x8021B4B0
    // 0x802AEEDC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    static_3_8021B4B0(rdram, ctx);
        goto after_56;
    // 0x802AEEDC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_56:
    // 0x802AEEE0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AEEE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AEEE8: jal         0x8021B6D4
    // 0x802AEEEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    static_3_8021B6D4(rdram, ctx);
        goto after_57;
    // 0x802AEEEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_57:
    // 0x802AEEF0: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802AEEF4: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x802AEEF8: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802AEEFC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802AEF00: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x802AEF04: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x802AEF08: jal         0x8022970C
    // 0x802AEF0C: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    func_8022970C(rdram, ctx);
        goto after_58;
    // 0x802AEF0C: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_58:
    // 0x802AEF10: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802AEF14: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802AEF18: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802AEF1C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802AEF20: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x802AEF24: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802AEF28: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x802AEF2C: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x802AEF30: jal         0x802D01D4
    // 0x802AEF34: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    static_3_802D01D4(rdram, ctx);
        goto after_59;
    // 0x802AEF34: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    after_59:
    // 0x802AEF38: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AEF3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AEF40: jal         0x8021B4B0
    // 0x802AEF44: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    static_3_8021B4B0(rdram, ctx);
        goto after_60;
    // 0x802AEF44: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_60:
L_802AEF48:
    // 0x802AEF48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802AEF4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AEF50: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
    // 0x802AEF54: jr          $ra
    // 0x802AEF58: nop

    return;
    // 0x802AEF58: nop

;}
RECOMP_FUNC void D_802D9C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9CDC: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x802D9CE0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D9CE4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x802D9CE8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802D9CEC: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x802D9CF0: beq         $t7, $zero, L_802D9D00
    if (ctx->r15 == 0) {
        // 0x802D9CF4: andi        $t8, $v0, 0x40
        ctx->r24 = ctx->r2 & 0X40;
            goto L_802D9D00;
    }
    // 0x802D9CF4: andi        $t8, $v0, 0x40
    ctx->r24 = ctx->r2 & 0X40;
    // 0x802D9CF8: jr          $ra
    // 0x802D9CFC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x802D9CFC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_802D9D00:
    // 0x802D9D00: beq         $t8, $zero, L_802D9D10
    if (ctx->r24 == 0) {
        // 0x802D9D04: andi        $t9, $v0, 0x20
        ctx->r25 = ctx->r2 & 0X20;
            goto L_802D9D10;
    }
    // 0x802D9D04: andi        $t9, $v0, 0x20
    ctx->r25 = ctx->r2 & 0X20;
    // 0x802D9D08: jr          $ra
    // 0x802D9D0C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x802D9D0C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_802D9D10:
    // 0x802D9D10: beq         $t9, $zero, L_802D9D20
    if (ctx->r25 == 0) {
        // 0x802D9D14: andi        $t0, $v0, 0x200
        ctx->r8 = ctx->r2 & 0X200;
            goto L_802D9D20;
    }
    // 0x802D9D14: andi        $t0, $v0, 0x200
    ctx->r8 = ctx->r2 & 0X200;
    // 0x802D9D18: jr          $ra
    // 0x802D9D1C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x802D9D1C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802D9D20:
    // 0x802D9D20: beq         $t0, $zero, L_802D9D30
    if (ctx->r8 == 0) {
        // 0x802D9D24: andi        $t1, $v0, 0x10
        ctx->r9 = ctx->r2 & 0X10;
            goto L_802D9D30;
    }
    // 0x802D9D24: andi        $t1, $v0, 0x10
    ctx->r9 = ctx->r2 & 0X10;
    // 0x802D9D28: jr          $ra
    // 0x802D9D2C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    return;
    // 0x802D9D2C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802D9D30:
    // 0x802D9D30: beq         $t1, $zero, L_802D9D40
    if (ctx->r9 == 0) {
        // 0x802D9D34: andi        $t2, $v0, 0x100
        ctx->r10 = ctx->r2 & 0X100;
            goto L_802D9D40;
    }
    // 0x802D9D34: andi        $t2, $v0, 0x100
    ctx->r10 = ctx->r2 & 0X100;
    // 0x802D9D38: jr          $ra
    // 0x802D9D3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x802D9D3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802D9D40:
    // 0x802D9D40: beq         $t2, $zero, L_802D9D50
    if (ctx->r10 == 0) {
        // 0x802D9D44: andi        $t3, $v0, 0x8
        ctx->r11 = ctx->r2 & 0X8;
            goto L_802D9D50;
    }
    // 0x802D9D44: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x802D9D48: jr          $ra
    // 0x802D9D4C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x802D9D4C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802D9D50:
    // 0x802D9D50: beq         $t3, $zero, L_802D9D60
    if (ctx->r11 == 0) {
        // 0x802D9D54: andi        $t4, $v0, 0x4
        ctx->r12 = ctx->r2 & 0X4;
            goto L_802D9D60;
    }
    // 0x802D9D54: andi        $t4, $v0, 0x4
    ctx->r12 = ctx->r2 & 0X4;
    // 0x802D9D58: jr          $ra
    // 0x802D9D5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x802D9D5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802D9D60:
    // 0x802D9D60: beq         $t4, $zero, L_802D9D70
    if (ctx->r12 == 0) {
        // 0x802D9D64: andi        $t5, $v0, 0x80
        ctx->r13 = ctx->r2 & 0X80;
            goto L_802D9D70;
    }
    // 0x802D9D64: andi        $t5, $v0, 0x80
    ctx->r13 = ctx->r2 & 0X80;
    // 0x802D9D68: jr          $ra
    // 0x802D9D6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x802D9D6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802D9D70:
    // 0x802D9D70: beq         $t5, $zero, L_802D9D80
    if (ctx->r13 == 0) {
        // 0x802D9D74: andi        $t6, $v0, 0x2
        ctx->r14 = ctx->r2 & 0X2;
            goto L_802D9D80;
    }
    // 0x802D9D74: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x802D9D78: jr          $ra
    // 0x802D9D7C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    return;
    // 0x802D9D7C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_802D9D80:
    // 0x802D9D80: beq         $t6, $zero, L_802D9D90
    if (ctx->r14 == 0) {
        // 0x802D9D84: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_802D9D90;
    }
    // 0x802D9D84: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x802D9D88: jr          $ra
    // 0x802D9D8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x802D9D8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802D9D90:
    // 0x802D9D90: beq         $t7, $zero, L_802D9DA0
    if (ctx->r15 == 0) {
        // 0x802D9D94: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802D9DA0;
    }
    // 0x802D9D94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D9D98: jr          $ra
    // 0x802D9D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D9D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D9DA0:
    // 0x802D9DA0: jr          $ra
    // 0x802D9DA4: nop

    return;
    // 0x802D9DA4: nop

;}
RECOMP_FUNC void D_80233D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233D08: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80233D0C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80233D10: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80233D14: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80233D18: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80233D1C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80233D20: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80233D24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233D28: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80233D2C: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x80233D30: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80233D34: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80233D38: jr          $ra
    // 0x80233D3C: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    return;
    // 0x80233D3C: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
;}
RECOMP_FUNC void D_802D7FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D802C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8030: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D8034: jr          $ra
    // 0x802D8038: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802D8038: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void D_802369C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802369C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802369C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802369C8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802369CC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802369D0: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x802369D4: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x802369D8: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x802369DC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802369E0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802369E4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802369E8: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x802369EC: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x802369F0: addiu       $t0, $zero, 0x3E80
    ctx->r8 = ADD32(0, 0X3E80);
    // 0x802369F4: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x802369F8: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    // 0x802369FC: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80236A00: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80236A04: sh          $t9, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r25;
    // 0x80236A08: sw          $t0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r8;
    // 0x80236A0C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80236A10: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80236A14: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x80236A18: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x80236A1C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80236A20: sw          $t1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r9;
    // 0x80236A24: lw          $t2, 0x14($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X14);
    // 0x80236A28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80236A2C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80236A30: sw          $t2, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r10;
    // 0x80236A34: lw          $t3, 0x18($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X18);
    // 0x80236A38: sh          $t4, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r12;
    // 0x80236A3C: sw          $t3, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r11;
    // 0x80236A40: lbu         $t5, 0x8($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X8);
    // 0x80236A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80236A48: sb          $t5, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r13;
    // 0x80236A4C: lbu         $a3, 0x8($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X8);
    // 0x80236A50: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80236A54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80236A58: jal         0x80236CD0
    // 0x80236A5C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    static_3_80236CD0(rdram, ctx);
        goto after_0;
    // 0x80236A5C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80236A60: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x80236A64: jal         0x80241424
    // 0x80236A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80241424(rdram, ctx);
        goto after_1;
    // 0x80236A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80236A6C: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x80236A70: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x80236A74: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80236A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80236A7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80236A80: jal         0x80236CD0
    // 0x80236A84: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    static_3_80236CD0(rdram, ctx);
        goto after_2;
    // 0x80236A84: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80236A88: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x80236A8C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80236A90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80236A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80236A98: blez        $t8, L_80236AC8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80236A9C: addiu       $t1, $zero, 0x1C
        ctx->r9 = ADD32(0, 0X1C);
            goto L_80236AC8;
    }
    // 0x80236A9C: addiu       $t1, $zero, 0x1C
    ctx->r9 = ADD32(0, 0X1C);
    // 0x80236AA0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80236AA4: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
L_80236AA8:
    // 0x80236AA8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80236AAC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80236AB0: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x80236AB4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80236AB8: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x80236ABC: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80236AC0: bnel        $at, $zero, L_80236AA8
    if (ctx->r1 != 0) {
        // 0x80236AC4: lw          $t9, 0x6C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X6C);
            goto L_80236AA8;
    }
    goto skip_0;
    // 0x80236AC4: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    skip_0:
L_80236AC8:
    // 0x80236AC8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80236ACC: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x80236AD0: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x80236AD4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80236AD8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80236ADC: jal         0x80236CD0
    // 0x80236AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80236CD0(rdram, ctx);
        goto after_3;
    // 0x80236AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80236AE4: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x80236AE8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80236AEC: jal         0x8023F52C
    // 0x80236AF0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    static_3_8023F52C(rdram, ctx);
        goto after_4;
    // 0x80236AF0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    after_4:
    // 0x80236AF4: lui         $t2, 0x8023
    ctx->r10 = S32(0X8023 << 16);
    // 0x80236AF8: addiu       $t2, $t2, 0x63FC
    ctx->r10 = ADD32(ctx->r10, 0X63FC);
    // 0x80236AFC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80236B00: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x80236B04: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x80236B08: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80236B0C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80236B10: jal         0x8023F5A0
    // 0x80236B14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023F5A0(rdram, ctx);
        goto after_5;
    // 0x80236B14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80236B18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80236B1C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80236B20: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80236B24: jr          $ra
    // 0x80236B28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80236B28: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_802228AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802228AC: sh          $a1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r5;
    // 0x802228B0: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x802228B4: sh          $a2, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r6;
    // 0x802228B8: sh          $a3, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r7;
    // 0x802228BC: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x802228C0: addiu       $t0, $zero, 0x1FF
    ctx->r8 = ADD32(0, 0X1FF);
    // 0x802228C4: bgez        $v0, L_802228D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802228C8: sh          $t6, 0xE($a0)
        MEM_H(0XE, ctx->r4) = ctx->r14;
            goto L_802228D4;
    }
    // 0x802228C8: sh          $t6, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r14;
    // 0x802228CC: b           L_802228E4
    // 0x802228D0: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
        goto L_802228E4;
    // 0x802228D0: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
L_802228D4:
    // 0x802228D4: slti        $at, $v0, 0x141
    ctx->r1 = SIGNED(ctx->r2) < 0X141 ? 1 : 0;
    // 0x802228D8: bne         $at, $zero, L_802228E4
    if (ctx->r1 != 0) {
        // 0x802228DC: addiu       $t7, $zero, 0x140
        ctx->r15 = ADD32(0, 0X140);
            goto L_802228E4;
    }
    // 0x802228DC: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x802228E0: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
L_802228E4:
    // 0x802228E4: lh          $v0, 0xA($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA);
    // 0x802228E8: bgez        $v0, L_802228F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802228EC: slti        $at, $v0, 0x141
        ctx->r1 = SIGNED(ctx->r2) < 0X141 ? 1 : 0;
            goto L_802228F8;
    }
    // 0x802228EC: slti        $at, $v0, 0x141
    ctx->r1 = SIGNED(ctx->r2) < 0X141 ? 1 : 0;
    // 0x802228F0: b           L_80222904
    // 0x802228F4: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
        goto L_80222904;
    // 0x802228F4: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
L_802228F8:
    // 0x802228F8: bne         $at, $zero, L_80222904
    if (ctx->r1 != 0) {
        // 0x802228FC: addiu       $t8, $zero, 0x140
        ctx->r24 = ADD32(0, 0X140);
            goto L_80222904;
    }
    // 0x802228FC: addiu       $t8, $zero, 0x140
    ctx->r24 = ADD32(0, 0X140);
    // 0x80222900: sh          $t8, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r24;
L_80222904:
    // 0x80222904: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x80222908: bgez        $v0, L_80222918
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022290C: slti        $at, $v0, 0xF1
        ctx->r1 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
            goto L_80222918;
    }
    // 0x8022290C: slti        $at, $v0, 0xF1
    ctx->r1 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
    // 0x80222910: b           L_80222924
    // 0x80222914: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
        goto L_80222924;
    // 0x80222914: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
L_80222918:
    // 0x80222918: bne         $at, $zero, L_80222924
    if (ctx->r1 != 0) {
        // 0x8022291C: addiu       $t1, $zero, 0xF0
        ctx->r9 = ADD32(0, 0XF0);
            goto L_80222924;
    }
    // 0x8022291C: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x80222920: sh          $t1, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r9;
L_80222924:
    // 0x80222924: lh          $v0, 0xC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC);
    // 0x80222928: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x8022292C: addiu       $t7, $zero, 0x13F
    ctx->r15 = ADD32(0, 0X13F);
    // 0x80222930: bgez        $v0, L_80222940
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80222934: slti        $at, $v0, 0xF1
        ctx->r1 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
            goto L_80222940;
    }
    // 0x80222934: slti        $at, $v0, 0xF1
    ctx->r1 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
    // 0x80222938: b           L_8022294C
    // 0x8022293C: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
        goto L_8022294C;
    // 0x8022293C: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
L_80222940:
    // 0x80222940: bnel        $at, $zero, L_80222950
    if (ctx->r1 != 0) {
        // 0x80222944: lh          $t9, 0x8($a0)
        ctx->r25 = MEM_H(ctx->r4, 0X8);
            goto L_80222950;
    }
    goto skip_0;
    // 0x80222944: lh          $t9, 0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8);
    skip_0:
    // 0x80222948: sh          $t1, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r9;
L_8022294C:
    // 0x8022294C: lh          $t9, 0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8);
L_80222950:
    // 0x80222950: addiu       $t2, $t9, -0x1
    ctx->r10 = ADD32(ctx->r25, -0X1);
    // 0x80222954: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x80222958: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x8022295C: bgezl       $t3, L_8022296C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80222960: lh          $t4, 0xA($a0)
        ctx->r12 = MEM_H(ctx->r4, 0XA);
            goto L_8022296C;
    }
    goto skip_1;
    // 0x80222960: lh          $t4, 0xA($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XA);
    skip_1:
    // 0x80222964: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x80222968: lh          $t4, 0xA($a0)
    ctx->r12 = MEM_H(ctx->r4, 0XA);
L_8022296C:
    // 0x8022296C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80222970: sh          $t5, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r13;
    // 0x80222974: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x80222978: addiu       $t5, $zero, 0xEF
    ctx->r13 = ADD32(0, 0XEF);
    // 0x8022297C: slti        $at, $t6, 0x140
    ctx->r1 = SIGNED(ctx->r14) < 0X140 ? 1 : 0;
    // 0x80222980: bnel        $at, $zero, L_80222990
    if (ctx->r1 != 0) {
        // 0x80222984: lh          $t8, 0xC($a0)
        ctx->r24 = MEM_H(ctx->r4, 0XC);
            goto L_80222990;
    }
    goto skip_2;
    // 0x80222984: lh          $t8, 0xC($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC);
    skip_2:
    // 0x80222988: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    // 0x8022298C: lh          $t8, 0xC($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC);
L_80222990:
    // 0x80222990: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80222994: sh          $t9, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r25;
    // 0x80222998: lh          $t2, 0x4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X4);
    // 0x8022299C: bgezl       $t2, L_802229AC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802229A0: lh          $t3, 0xE($a0)
        ctx->r11 = MEM_H(ctx->r4, 0XE);
            goto L_802229AC;
    }
    goto skip_3;
    // 0x802229A0: lh          $t3, 0xE($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XE);
    skip_3:
    // 0x802229A4: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x802229A8: lh          $t3, 0xE($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XE);
L_802229AC:
    // 0x802229AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x802229B0: sh          $t4, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r12;
    // 0x802229B4: lh          $a1, 0x6($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X6);
    // 0x802229B8: slti        $at, $a1, 0xF0
    ctx->r1 = SIGNED(ctx->r5) < 0XF0 ? 1 : 0;
    // 0x802229BC: bnel        $at, $zero, L_802229D0
    if (ctx->r1 != 0) {
        // 0x802229C0: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_802229D0;
    }
    goto skip_4;
    // 0x802229C0: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    skip_4:
    // 0x802229C4: sh          $t5, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r13;
    // 0x802229C8: lh          $a1, 0x6($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X6);
    // 0x802229CC: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
L_802229D0:
    // 0x802229D0: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x802229D4: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x802229D8: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x802229DC: subu        $a2, $t6, $v0
    ctx->r6 = SUB32(ctx->r14, ctx->r2);
    // 0x802229E0: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x802229E4: sra         $t9, $a2, 1
    ctx->r25 = S32(SIGNED(ctx->r6) >> 1);
    // 0x802229E8: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
    // 0x802229EC: addu        $t4, $v0, $t9
    ctx->r12 = ADD32(ctx->r2, ctx->r25);
    // 0x802229F0: subu        $a3, $a1, $v1
    ctx->r7 = SUB32(ctx->r5, ctx->r3);
    // 0x802229F4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802229F8: sra         $t7, $a3, 1
    ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
    // 0x802229FC: subu        $t6, $t1, $v1
    ctx->r14 = SUB32(ctx->r9, ctx->r3);
    // 0x80222A00: lh          $t4, 0x8($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X8);
    // 0x80222A04: subu        $t2, $t6, $t7
    ctx->r10 = SUB32(ctx->r14, ctx->r15);
    // 0x80222A08: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x80222A0C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80222A10: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
    // 0x80222A14: sh          $zero, 0x16($a0)
    MEM_H(0X16, ctx->r4) = 0;
    // 0x80222A18: sh          $t5, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r13;
    // 0x80222A1C: sh          $t3, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r11;
    // 0x80222A20: sh          $t0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r8;
    // 0x80222A24: sh          $zero, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = 0;
    // 0x80222A28: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222A2C: sh          $t4, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r12;
    // 0x80222A30: lh          $t5, 0xA($a0)
    ctx->r13 = MEM_H(ctx->r4, 0XA);
    // 0x80222A34: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222A38: sh          $t5, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r13;
    // 0x80222A3C: lh          $t6, 0xC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC);
    // 0x80222A40: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222A44: sh          $t6, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r14;
    // 0x80222A48: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x80222A4C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80222A50: jr          $ra
    // 0x80222A54: sh          $t7, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r15;
    return;
    // 0x80222A54: sh          $t7, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void D_802ACDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ACE58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802ACE5C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802ACE60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ACE64: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802ACE68: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ACE6C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802ACE70: lwc1        $f22, 0x0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ACE74: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802ACE78: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802ACE7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802ACE80: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802ACE84: addiu       $t7, $zero, 0xB6
    ctx->r15 = ADD32(0, 0XB6);
    // 0x802ACE88: addiu       $t8, $zero, 0xC5
    ctx->r24 = ADD32(0, 0XC5);
    // 0x802ACE8C: addiu       $t9, $zero, 0x8B
    ctx->r25 = ADD32(0, 0X8B);
    // 0x802ACE90: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACE94: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACE98: sb          $t6, 0x968($a0)
    MEM_B(0X968, ctx->r4) = ctx->r14;
    // 0x802ACE9C: sw          $t7, 0x948($a0)
    MEM_W(0X948, ctx->r4) = ctx->r15;
    // 0x802ACEA0: sw          $t8, 0x944($a0)
    MEM_W(0X944, ctx->r4) = ctx->r24;
    // 0x802ACEA4: sw          $t9, 0x94C($a0)
    MEM_W(0X94C, ctx->r4) = ctx->r25;
    // 0x802ACEA8: addiu       $a0, $a0, 0x96C
    ctx->r4 = ADD32(ctx->r4, 0X96C);
    // 0x802ACEAC: jal         0x803034A8
    // 0x802ACEB0: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    static_3_803034A8(rdram, ctx);
        goto after_0;
    // 0x802ACEB0: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_0:
    // 0x802ACEB4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACEB8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACEBC: addiu       $a0, $s0, 0x9E0
    ctx->r4 = ADD32(ctx->r16, 0X9E0);
    // 0x802ACEC0: jal         0x803034A8
    // 0x802ACEC4: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    static_3_803034A8(rdram, ctx);
        goto after_1;
    // 0x802ACEC4: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    after_1:
    // 0x802ACEC8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACECC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACED0: addiu       $a0, $s0, 0xA54
    ctx->r4 = ADD32(ctx->r16, 0XA54);
    // 0x802ACED4: jal         0x803034A8
    // 0x802ACED8: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
    static_3_803034A8(rdram, ctx);
        goto after_2;
    // 0x802ACED8: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
    after_2:
    // 0x802ACEDC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACEE0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACEE4: addiu       $a0, $s0, 0xAC8
    ctx->r4 = ADD32(ctx->r16, 0XAC8);
    // 0x802ACEE8: jal         0x803034A8
    // 0x802ACEEC: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    static_3_803034A8(rdram, ctx);
        goto after_3;
    // 0x802ACEEC: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    after_3:
    // 0x802ACEF0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACEF4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACEF8: addiu       $a0, $s0, 0xBB0
    ctx->r4 = ADD32(ctx->r16, 0XBB0);
    // 0x802ACEFC: jal         0x803034A8
    // 0x802ACF00: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    static_3_803034A8(rdram, ctx);
        goto after_4;
    // 0x802ACF00: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    after_4:
    // 0x802ACF04: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x802ACF08: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACF0C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802ACF10: addiu       $a0, $s0, 0xD0C
    ctx->r4 = ADD32(ctx->r16, 0XD0C);
    // 0x802ACF14: jal         0x803034A8
    // 0x802ACF18: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    static_3_803034A8(rdram, ctx);
        goto after_5;
    // 0x802ACF18: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    after_5:
    // 0x802ACF1C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACF20: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACF24: addiu       $a0, $s0, 0xDF4
    ctx->r4 = ADD32(ctx->r16, 0XDF4);
    // 0x802ACF28: jal         0x803034A8
    // 0x802ACF2C: addiu       $a1, $zero, 0x75
    ctx->r5 = ADD32(0, 0X75);
    static_3_803034A8(rdram, ctx);
        goto after_6;
    // 0x802ACF2C: addiu       $a1, $zero, 0x75
    ctx->r5 = ADD32(0, 0X75);
    after_6:
    // 0x802ACF30: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802ACF34: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802ACF38: addiu       $a0, $s0, 0xE68
    ctx->r4 = ADD32(ctx->r16, 0XE68);
    // 0x802ACF3C: jal         0x803034A8
    // 0x802ACF40: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    static_3_803034A8(rdram, ctx);
        goto after_7;
    // 0x802ACF40: addiu       $a1, $zero, 0x74
    ctx->r5 = ADD32(0, 0X74);
    after_7:
    // 0x802ACF44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802ACF48: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802ACF4C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802ACF50: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802ACF54: jr          $ra
    // 0x802ACF58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802ACF58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802D1D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1DD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802D1DD4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802D1DD8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x802D1DDC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802D1DE0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x802D1DE4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802D1DE8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802D1DEC: jal         0x80302A84
    // 0x802D1DF0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    static_3_80302A84(rdram, ctx);
        goto after_0;
    // 0x802D1DF0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x802D1DF4: addiu       $s3, $s2, 0x1FE0
    ctx->r19 = ADD32(ctx->r18, 0X1FE0);
    // 0x802D1DF8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x802D1DFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D1E00: jal         0x8020664C
    // 0x802D1E04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8020664C(rdram, ctx);
        goto after_1;
    // 0x802D1E04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802D1E08: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802D1E0C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802D1E10:
    // 0x802D1E10: sll         $t6, $s1, 5
    ctx->r14 = S32(ctx->r17 << 5);
    // 0x802D1E14: addu        $s0, $s2, $t6
    ctx->r16 = ADD32(ctx->r18, ctx->r14);
    // 0x802D1E18: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802D1E1C: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x802D1E20: nop

    // 0x802D1E24: bc1tl       L_802D1E98
    if (c1cs) {
        // 0x802D1E28: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802D1E98;
    }
    goto skip_0;
    // 0x802D1E28: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x802D1E2C: jal         0x8020372C
    // 0x802D1E30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8020372C(rdram, ctx);
        goto after_2;
    // 0x802D1E30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x802D1E34: bnel        $v0, $zero, L_802D1E68
    if (ctx->r2 != 0) {
        // 0x802D1E38: lbu         $t7, 0x1E($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X1E);
            goto L_802D1E68;
    }
    goto skip_1;
    // 0x802D1E38: lbu         $t7, 0x1E($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1E);
    skip_1:
    // 0x802D1E3C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802D1E40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802D1E44: c.le.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl <= ctx->f6.fl;
    // 0x802D1E48: nop

    // 0x802D1E4C: bc1fl       L_802D1E98
    if (!c1cs) {
        // 0x802D1E50: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802D1E98;
    }
    goto skip_2;
    // 0x802D1E50: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x802D1E54: jal         0x80301DE0
    // 0x802D1E58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80301DE0(rdram, ctx);
        goto after_3;
    // 0x802D1E58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x802D1E5C: b           L_802D1E98
    // 0x802D1E60: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_802D1E98;
    // 0x802D1E60: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802D1E64: lbu         $t7, 0x1E($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1E);
L_802D1E68:
    // 0x802D1E68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802D1E6C: beql        $t7, $zero, L_802D1E80
    if (ctx->r15 == 0) {
        // 0x802D1E70: lw          $t8, 0x18($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X18);
            goto L_802D1E80;
    }
    goto skip_3;
    // 0x802D1E70: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    skip_3:
    // 0x802D1E74: jal         0x8020164C
    // 0x802D1E78: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    static_3_8020164C(rdram, ctx);
        goto after_4;
    // 0x802D1E78: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x802D1E7C: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
L_802D1E80:
    // 0x802D1E80: lbu         $t9, 0x2020($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X2020);
    // 0x802D1E84: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802D1E88: beql        $at, $zero, L_802D1E98
    if (ctx->r1 == 0) {
        // 0x802D1E8C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802D1E98;
    }
    goto skip_4;
    // 0x802D1E8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x802D1E90: sb          $s1, 0x2020($s2)
    MEM_B(0X2020, ctx->r18) = ctx->r17;
    // 0x802D1E94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802D1E98:
    // 0x802D1E98: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x802D1E9C: slti        $at, $t0, 0xFF
    ctx->r1 = SIGNED(ctx->r8) < 0XFF ? 1 : 0;
    // 0x802D1EA0: bne         $at, $zero, L_802D1E10
    if (ctx->r1 != 0) {
        // 0x802D1EA4: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_802D1E10;
    }
    // 0x802D1EA4: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x802D1EA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802D1EAC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802D1EB0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1EB4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802D1EB8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x802D1EBC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x802D1EC0: jr          $ra
    // 0x802D1EC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802D1EC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802A8B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8BB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A8BB8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A8BBC: jr          $ra
    // 0x802A8BC0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802A8BC0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8022EE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022EE10: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022EE14: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022EE18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EE1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EE20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022EE24: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8022EE28: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8022EE2C: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8022EE30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8022EE34: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x8022EE38: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8022EE3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8022EE40: bne         $t3, $zero, L_8022EE5C
    if (ctx->r11 != 0) {
        // 0x8022EE44: addiu       $t0, $t0, 0x0
        ctx->r8 = ADD32(ctx->r8, 0X0);
            goto L_8022EE5C;
    }
    // 0x8022EE44: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x8022EE48: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022EE4C: jal         0x80231A24
    // 0x8022EE50: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022EE50: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022EE54: b           L_8022EF7C
    // 0x8022EE58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022EF7C;
    // 0x8022EE58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022EE5C:
    // 0x8022EE5C: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x8022EE60: lbu         $t5, 0x19($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X19);
    // 0x8022EE64: lbu         $t4, 0x18($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X18);
    // 0x8022EE68: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x8022EE6C: ori         $t1, $zero, 0xFFFE
    ctx->r9 = 0 | 0XFFFE;
    // 0x8022EE70: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EE74: mflo        $a0
    ctx->r4 = lo;
    // 0x8022EE78: blezl       $a0, L_8022EF7C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8022EE7C: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_8022EF7C;
    }
    goto skip_0;
    // 0x8022EE7C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    skip_0:
    // 0x8022EE80: lw          $t6, 0x28($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X28);
L_8022EE84:
    // 0x8022EE84: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8022EE88: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EE8C: addu        $a2, $t6, $t2
    ctx->r6 = ADD32(ctx->r14, ctx->r10);
    // 0x8022EE90: bne         $a2, $zero, L_8022EEA8
    if (ctx->r6 != 0) {
        // 0x8022EE94: addiu       $t2, $t2, 0x4C
        ctx->r10 = ADD32(ctx->r10, 0X4C);
            goto L_8022EEA8;
    }
    // 0x8022EE94: addiu       $t2, $t2, 0x4C
    ctx->r10 = ADD32(ctx->r10, 0X4C);
    // 0x8022EE98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EE9C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EEA0: b           L_8022EF6C
    // 0x8022EEA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8022EF6C;
    // 0x8022EEA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022EEA8:
    // 0x8022EEA8: lw          $v1, 0x40($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X40);
    // 0x8022EEAC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8022EEB0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EEB4: bne         $v1, $zero, L_8022EEC8
    if (ctx->r3 != 0) {
        // 0x8022EEB8: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022EEC8;
    }
    // 0x8022EEB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EEBC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EEC0: b           L_8022EF6C
    // 0x8022EEC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8022EF6C;
    // 0x8022EEC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022EEC8:
    // 0x8022EEC8: lhu         $a1, 0x14($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X14);
    // 0x8022EECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022EED0: blezl       $a1, L_8022EF5C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8022EED4: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_8022EF5C;
    }
    goto skip_1;
    // 0x8022EED4: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    skip_1:
    // 0x8022EED8: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
L_8022EEDC:
    // 0x8022EEDC: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x8022EEE0: beq         $s0, $t1, L_8022EEF4
    if (ctx->r16 == ctx->r9) {
        // 0x8022EEE4: addu        $a0, $t7, $t8
        ctx->r4 = ADD32(ctx->r15, ctx->r24);
            goto L_8022EEF4;
    }
    // 0x8022EEE4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8022EEE8: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x8022EEEC: bnel        $s0, $t9, L_8022EF34
    if (ctx->r16 != ctx->r25) {
        // 0x8022EEF0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022EF34;
    }
    goto skip_2;
    // 0x8022EEF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
L_8022EEF4:
    // 0x8022EEF4: lhu         $t4, 0x4A($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X4A);
    // 0x8022EEF8: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x8022EEFC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8022EF00: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x8022EF04: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x8022EF08: andi        $t7, $v0, 0xFFF
    ctx->r15 = ctx->r2 & 0XFFF;
    // 0x8022EF0C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8022EF10: addu        $t4, $t0, $t9
    ctx->r12 = ADD32(ctx->r8, ctx->r25);
    // 0x8022EF14: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
    // 0x8022EF18: bne         $at, $zero, L_8022EF28
    if (ctx->r1 != 0) {
        // 0x8022EF1C: sw          $t8, 0x0($t4)
        MEM_W(0X0, ctx->r12) = ctx->r24;
            goto L_8022EF28;
    }
    // 0x8022EF1C: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x8022EF20: b           L_8022EF7C
    // 0x8022EF24: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_8022EF7C;
    // 0x8022EF24: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8022EF28:
    // 0x8022EF28: lw          $v1, 0x40($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X40);
    // 0x8022EF2C: lhu         $a1, 0x14($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X14);
    // 0x8022EF30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EF34:
    // 0x8022EF34: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022EF38: bnel        $at, $zero, L_8022EEDC
    if (ctx->r1 != 0) {
        // 0x8022EF3C: lw          $t7, 0x10($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X10);
            goto L_8022EEDC;
    }
    goto skip_3;
    // 0x8022EF3C: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    skip_3:
    // 0x8022EF40: lbu         $t5, 0x18($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X18);
    // 0x8022EF44: lbu         $t6, 0x19($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X19);
    // 0x8022EF48: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022EF4C: mflo        $a0
    ctx->r4 = lo;
    // 0x8022EF50: nop

    // 0x8022EF54: nop

    // 0x8022EF58: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
L_8022EF5C:
    // 0x8022EF5C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EF60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EF64: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EF68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022EF6C:
    // 0x8022EF6C: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022EF70: bnel        $at, $zero, L_8022EE84
    if (ctx->r1 != 0) {
        // 0x8022EF74: lw          $t6, 0x28($t3)
        ctx->r14 = MEM_W(ctx->r11, 0X28);
            goto L_8022EE84;
    }
    goto skip_4;
    // 0x8022EF74: lw          $t6, 0x28($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X28);
    skip_4:
    // 0x8022EF78: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8022EF7C:
    // 0x8022EF7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EF80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022EF84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022EF88: jr          $ra
    // 0x8022EF8C: nop

    return;
    // 0x8022EF8C: nop

;}
RECOMP_FUNC void D_80214C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80214C90: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80214C94: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80214C98: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80214C9C: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x80214CA0: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x80214CA4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80214CA8: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x80214CAC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80214CB0: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x80214CB4: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x80214CB8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80214CBC: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80214CC0: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80214CC4: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80214CC8: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80214CCC: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80214CD0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80214CD4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80214CD8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80214CDC: blez        $v0, L_80214DEC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80214CE0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80214DEC;
    }
    // 0x80214CE0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80214CE4: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x80214CE8: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80214CEC: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80214CF0: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x80214CF4: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x80214CF8: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80214CFC: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80214D00: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x80214D04: ori         $s6, $zero, 0xFFFF
    ctx->r22 = 0 | 0XFFFF;
    // 0x80214D08: addiu       $s4, $zero, 0x24
    ctx->r20 = ADD32(0, 0X24);
L_80214D0C:
    // 0x80214D0C: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80214D10: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80214D14: mflo        $t6
    ctx->r14 = lo;
    // 0x80214D18: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80214D1C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x80214D20: beql        $s6, $v1, L_80214DDC
    if (ctx->r22 == ctx->r3) {
        // 0x80214D24: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80214DDC;
    }
    goto skip_0;
    // 0x80214D24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80214D28: lbu         $t8, 0x8($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X8);
    // 0x80214D2C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80214D30: beql        $t9, $zero, L_80214DDC
    if (ctx->r25 == 0) {
        // 0x80214D34: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80214DDC;
    }
    goto skip_1;
    // 0x80214D34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x80214D38: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x80214D3C: lw          $t4, 0x0($fp)
    ctx->r12 = MEM_W(ctx->r30, 0X0);
    // 0x80214D40: lw          $t3, 0x0($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X0);
    // 0x80214D44: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80214D48: lw          $t5, 0x1C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1C);
    // 0x80214D4C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80214D50: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x80214D54: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x80214D58: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80214D5C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80214D60: lw          $s2, 0x0($t7)
    ctx->r18 = MEM_W(ctx->r15, 0X0);
    // 0x80214D64: lw          $a3, 0x30($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X30);
    // 0x80214D68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80214D6C: lwc1        $f6, 0x38($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80214D70: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80214D74: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80214D78: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80214D7C: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214D80: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x80214D84: jal         0x80216464
    // 0x80214D88: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    static_3_80216464(rdram, ctx);
        goto after_0;
    // 0x80214D88: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80214D8C: beq         $v0, $zero, L_80214DD0
    if (ctx->r2 == 0) {
        // 0x80214D90: or          $a3, $s0, $zero
        ctx->r7 = ctx->r16 | 0;
            goto L_80214DD0;
    }
    // 0x80214D90: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80214D94: lbu         $t8, 0x11($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X11);
    // 0x80214D98: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80214D9C: bnel        $t9, $zero, L_80214DB0
    if (ctx->r25 != 0) {
        // 0x80214DA0: mfc1        $a2, $f24
        ctx->r6 = (int32_t)ctx->f24.u32l;
            goto L_80214DB0;
    }
    goto skip_2;
    // 0x80214DA0: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    skip_2:
    // 0x80214DA4: b           L_80214DF0
    // 0x80214DA8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_80214DF0;
    // 0x80214DA8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80214DAC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
L_80214DB0:
    // 0x80214DB0: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x80214DB4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80214DB8: jal         0x80216EFC
    // 0x80214DBC: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    static_3_80216EFC(rdram, ctx);
        goto after_1;
    // 0x80214DBC: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_1:
    // 0x80214DC0: bltz        $v0, L_80214DD0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80214DC4: nop
    
            goto L_80214DD0;
    }
    // 0x80214DC4: nop

    // 0x80214DC8: b           L_80214DF0
    // 0x80214DCC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
        goto L_80214DF0;
    // 0x80214DCC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_80214DD0:
    // 0x80214DD0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80214DD4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80214DD8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80214DDC:
    // 0x80214DDC: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x80214DE0: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80214DE4: bne         $at, $zero, L_80214D0C
    if (ctx->r1 != 0) {
        // 0x80214DE8: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_80214D0C;
    }
    // 0x80214DE8: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
L_80214DEC:
    // 0x80214DEC: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_80214DF0:
    // 0x80214DF0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80214DF4: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80214DF8: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x80214DFC: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x80214E00: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80214E04: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80214E08: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80214E0C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80214E10: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80214E14: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80214E18: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80214E1C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80214E20: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80214E24: jr          $ra
    // 0x80214E28: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80214E28: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void D_8028C888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028C908: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028C90C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028C910: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8028C914: jal         0x803174D8
    // 0x8028C918: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    static_3_803174D8(rdram, ctx);
        goto after_0;
    // 0x8028C918: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_0:
    // 0x8028C91C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028C920: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028C924: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8028C928: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8028C92C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8028C930: jal         0x802AEE80
    // 0x8028C934: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    static_3_802AEE80(rdram, ctx);
        goto after_1;
    // 0x8028C934: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x8028C938: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8028C93C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8028C940: jal         0x80318510
    // 0x8028C944: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    static_3_80318510(rdram, ctx);
        goto after_2;
    // 0x8028C944: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    after_2:
    // 0x8028C948: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028C94C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028C950: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028C954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028C958: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8028C95C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8028C960: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8028C964: nop

    // 0x8028C968: bc1f        L_8028C978
    if (!c1cs) {
        // 0x8028C96C: nop
    
            goto L_8028C978;
    }
    // 0x8028C96C: nop

    // 0x8028C970: b           L_8028C978
    // 0x8028C974: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8028C978;
    // 0x8028C974: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8028C978:
    // 0x8028C978: jr          $ra
    // 0x8028C97C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8028C97C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_802431F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802431F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802431F4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802431F8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802431FC: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80243200: sll         $t8, $s5, 16
    ctx->r24 = S32(ctx->r21 << 16);
    // 0x80243204: sra         $s5, $t8, 16
    ctx->r21 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80243208: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8024320C: blez        $s1, L_80243278
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80243210: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80243278;
    }
    // 0x80243210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80243214: lw          $t9, 0x30($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X30);
    // 0x80243218: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x8024321C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80243220: jalr        $t9
    // 0x80243224: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80243224: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    after_0:
    // 0x80243228: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x8024322C: addu        $s1, $s1, $a2
    ctx->r17 = ADD32(ctx->r17, ctx->r6);
    // 0x80243230: andi        $t6, $s3, 0xFFFF
    ctx->r14 = ctx->r19 & 0XFFFF;
    // 0x80243234: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80243238: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8024323C: andi        $t8, $s1, 0x7
    ctx->r24 = ctx->r17 & 0X7;
    // 0x80243240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80243244: subu        $t9, $s1, $t8
    ctx->r25 = SUB32(ctx->r17, ctx->r24);
    // 0x80243248: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x8024324C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80243250: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80243254: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80243258: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8024325C: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80243260: subu        $t9, $v0, $a2
    ctx->r25 = SUB32(ctx->r2, ctx->r6);
    // 0x80243264: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80243268: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8024326C: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80243270: b           L_8024327C
    // 0x80243274: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_8024327C;
    // 0x80243274: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80243278:
    // 0x80243278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8024327C:
    // 0x8024327C: andi        $t6, $s4, 0x2
    ctx->r14 = ctx->r20 & 0X2;
    // 0x80243280: beq         $t6, $zero, L_802432A8
    if (ctx->r14 == 0) {
        // 0x80243284: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_802432A8;
    }
    // 0x80243284: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80243288: lui         $t7, 0xF00
    ctx->r15 = S32(0XF00 << 16);
    // 0x8024328C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80243290: lw          $t8, 0x18($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X18);
    // 0x80243294: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80243298: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8024329C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x802432A0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802432A4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_802432A8:
    // 0x802432A8: addu        $t6, $s3, $a2
    ctx->r14 = ADD32(ctx->r19, ctx->r6);
    // 0x802432AC: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x802432B0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x802432B4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x802432B8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x802432BC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802432C0: sll         $t7, $s6, 1
    ctx->r15 = S32(ctx->r22 << 1);
    // 0x802432C4: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x802432C8: sll         $t6, $s5, 16
    ctx->r14 = S32(ctx->r21 << 16);
    // 0x802432CC: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x802432D0: andi        $t7, $s4, 0xFF
    ctx->r15 = ctx->r20 & 0XFF;
    // 0x802432D4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802432D8: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x802432DC: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x802432E0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x802432E4: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x802432E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802432EC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x802432F0: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x802432F4: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x802432F8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802432FC: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x80243300: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80243304: sw          $zero, 0x40($s2)
    MEM_W(0X40, ctx->r18) = 0;
    // 0x80243308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024330C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80243310: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80243314: jr          $ra
    // 0x80243318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80243318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_802D8714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D8798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D879C: bne         $a0, $zero, L_802D87B4
    if (ctx->r4 != 0) {
        // 0x802D87A0: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802D87B4;
    }
    // 0x802D87A0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D87A4: jal         0x802C67EC
    // 0x802D87A8: addiu       $a0, $zero, 0x484
    ctx->r4 = ADD32(0, 0X484);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D87A8: addiu       $a0, $zero, 0x484
    ctx->r4 = ADD32(0, 0X484);
    after_0:
    // 0x802D87AC: beq         $v0, $zero, L_802D87DC
    if (ctx->r2 == 0) {
        // 0x802D87B0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802D87DC;
    }
    // 0x802D87B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802D87B4:
    // 0x802D87B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802D87B8: jal         0x8028BA60
    // 0x802D87BC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8028BA60(rdram, ctx);
        goto after_1;
    // 0x802D87BC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802D87C0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802D87C4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D87C8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D87CC: sw          $t6, 0x1A0($a1)
    MEM_W(0X1A0, ctx->r5) = ctx->r14;
    // 0x802D87D0: jal         0x802C498C
    // 0x802D87D4: addiu       $a0, $a1, 0x2F0
    ctx->r4 = ADD32(ctx->r5, 0X2F0);
    static_3_802C498C(rdram, ctx);
        goto after_2;
    // 0x802D87D4: addiu       $a0, $a1, 0x2F0
    ctx->r4 = ADD32(ctx->r5, 0X2F0);
    after_2:
    // 0x802D87D8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802D87DC:
    // 0x802D87DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D87E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D87E4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802D87E8: jr          $ra
    // 0x802D87EC: nop

    return;
    // 0x802D87EC: nop

;}
RECOMP_FUNC void D_80278B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278BA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80278BA4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80278BA8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80278BAC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80278BB0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80278BB4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80278BB8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80278BBC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80278BC0: lbu         $t6, 0x6EFC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X6EFC);
    // 0x80278BC4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80278BC8: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80278BCC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80278BD0: blez        $t6, L_80278C28
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80278BD4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80278C28;
    }
    // 0x80278BD4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80278BD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80278BDC: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
L_80278BE0:
    // 0x80278BE0: beql        $a0, $zero, L_80278C14
    if (ctx->r4 == 0) {
        // 0x80278BE4: lbu         $t7, 0x6EFC($s3)
        ctx->r15 = MEM_BU(ctx->r19, 0X6EFC);
            goto L_80278C14;
    }
    goto skip_0;
    // 0x80278BE4: lbu         $t7, 0x6EFC($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X6EFC);
    skip_0:
    // 0x80278BE8: jal         0x80317E10
    // 0x80278BEC: nop

    static_3_80317E10(rdram, ctx);
        goto after_0;
    // 0x80278BEC: nop

    after_0:
    // 0x80278BF0: beql        $v0, $zero, L_80278C14
    if (ctx->r2 == 0) {
        // 0x80278BF4: lbu         $t7, 0x6EFC($s3)
        ctx->r15 = MEM_BU(ctx->r19, 0X6EFC);
            goto L_80278C14;
    }
    goto skip_1;
    // 0x80278BF4: lbu         $t7, 0x6EFC($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X6EFC);
    skip_1:
    // 0x80278BF8: jal         0x80318420
    // 0x80278BFC: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
    static_3_80318420(rdram, ctx);
        goto after_1;
    // 0x80278BFC: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
    after_1:
    // 0x80278C00: bnel        $v0, $s4, L_80278C14
    if (ctx->r2 != ctx->r20) {
        // 0x80278C04: lbu         $t7, 0x6EFC($s3)
        ctx->r15 = MEM_BU(ctx->r19, 0X6EFC);
            goto L_80278C14;
    }
    goto skip_2;
    // 0x80278C04: lbu         $t7, 0x6EFC($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X6EFC);
    skip_2:
    // 0x80278C08: b           L_80278C28
    // 0x80278C0C: lw          $s5, 0x6EEC($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X6EEC);
        goto L_80278C28;
    // 0x80278C0C: lw          $s5, 0x6EEC($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X6EEC);
    // 0x80278C10: lbu         $t7, 0x6EFC($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X6EFC);
L_80278C14:
    // 0x80278C14: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80278C18: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80278C1C: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80278C20: bnel        $at, $zero, L_80278BE0
    if (ctx->r1 != 0) {
        // 0x80278C24: lw          $a0, 0x6EEC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
            goto L_80278BE0;
    }
    goto skip_3;
    // 0x80278C24: lw          $a0, 0x6EEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6EEC);
    skip_3:
L_80278C28:
    // 0x80278C28: beql        $s5, $zero, L_80278C3C
    if (ctx->r21 == 0) {
        // 0x80278C2C: lbu         $t8, 0x6FB8($s3)
        ctx->r24 = MEM_BU(ctx->r19, 0X6FB8);
            goto L_80278C3C;
    }
    goto skip_4;
    // 0x80278C2C: lbu         $t8, 0x6FB8($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X6FB8);
    skip_4:
    // 0x80278C30: b           L_80278CF0
    // 0x80278C34: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
        goto L_80278CF0;
    // 0x80278C34: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x80278C38: lbu         $t8, 0x6FB8($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X6FB8);
L_80278C3C:
    // 0x80278C3C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80278C40: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x80278C44: blez        $t8, L_80278C98
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80278C48: nop
    
            goto L_80278C98;
    }
    // 0x80278C48: nop

    // 0x80278C4C: lw          $a0, 0x6F94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6F94);
L_80278C50:
    // 0x80278C50: beql        $a0, $zero, L_80278C84
    if (ctx->r4 == 0) {
        // 0x80278C54: lbu         $t9, 0x6FB8($s3)
        ctx->r25 = MEM_BU(ctx->r19, 0X6FB8);
            goto L_80278C84;
    }
    goto skip_5;
    // 0x80278C54: lbu         $t9, 0x6FB8($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X6FB8);
    skip_5:
    // 0x80278C58: jal         0x80317E10
    // 0x80278C5C: nop

    static_3_80317E10(rdram, ctx);
        goto after_2;
    // 0x80278C5C: nop

    after_2:
    // 0x80278C60: beql        $v0, $zero, L_80278C84
    if (ctx->r2 == 0) {
        // 0x80278C64: lbu         $t9, 0x6FB8($s3)
        ctx->r25 = MEM_BU(ctx->r19, 0X6FB8);
            goto L_80278C84;
    }
    goto skip_6;
    // 0x80278C64: lbu         $t9, 0x6FB8($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X6FB8);
    skip_6:
    // 0x80278C68: jal         0x80318420
    // 0x80278C6C: lw          $a0, 0x6F94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6F94);
    static_3_80318420(rdram, ctx);
        goto after_3;
    // 0x80278C6C: lw          $a0, 0x6F94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6F94);
    after_3:
    // 0x80278C70: bnel        $v0, $s4, L_80278C84
    if (ctx->r2 != ctx->r20) {
        // 0x80278C74: lbu         $t9, 0x6FB8($s3)
        ctx->r25 = MEM_BU(ctx->r19, 0X6FB8);
            goto L_80278C84;
    }
    goto skip_7;
    // 0x80278C74: lbu         $t9, 0x6FB8($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X6FB8);
    skip_7:
    // 0x80278C78: b           L_80278C98
    // 0x80278C7C: lw          $s5, 0x6F94($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X6F94);
        goto L_80278C98;
    // 0x80278C7C: lw          $s5, 0x6F94($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X6F94);
    // 0x80278C80: lbu         $t9, 0x6FB8($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X6FB8);
L_80278C84:
    // 0x80278C84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80278C88: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80278C8C: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80278C90: bnel        $at, $zero, L_80278C50
    if (ctx->r1 != 0) {
        // 0x80278C94: lw          $a0, 0x6F94($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X6F94);
            goto L_80278C50;
    }
    goto skip_8;
    // 0x80278C94: lw          $a0, 0x6F94($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6F94);
    skip_8:
L_80278C98:
    // 0x80278C98: beq         $s5, $zero, L_80278CA8
    if (ctx->r21 == 0) {
        // 0x80278C9C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80278CA8;
    }
    // 0x80278C9C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80278CA0: b           L_80278CF0
    // 0x80278CA4: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
        goto L_80278CF0;
    // 0x80278CA4: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_80278CA8:
    // 0x80278CA8: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x80278CAC: addiu       $s1, $zero, 0xA0
    ctx->r17 = ADD32(0, 0XA0);
L_80278CB0:
    // 0x80278CB0: lw          $a0, 0x7050($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7050);
    // 0x80278CB4: beql        $a0, $zero, L_80278CD8
    if (ctx->r4 == 0) {
        // 0x80278CB8: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80278CD8;
    }
    goto skip_9;
    // 0x80278CB8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    skip_9:
    // 0x80278CBC: jal         0x80318420
    // 0x80278CC0: nop

    static_3_80318420(rdram, ctx);
        goto after_4;
    // 0x80278CC0: nop

    after_4:
    // 0x80278CC4: bnel        $v0, $s4, L_80278CD8
    if (ctx->r2 != ctx->r20) {
        // 0x80278CC8: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80278CD8;
    }
    goto skip_10;
    // 0x80278CC8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    skip_10:
    // 0x80278CCC: b           L_80278CE0
    // 0x80278CD0: lw          $s5, 0x7050($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X7050);
        goto L_80278CE0;
    // 0x80278CD0: lw          $s5, 0x7050($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X7050);
    // 0x80278CD4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80278CD8:
    // 0x80278CD8: bne         $s2, $s1, L_80278CB0
    if (ctx->r18 != ctx->r17) {
        // 0x80278CDC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80278CB0;
    }
    // 0x80278CDC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80278CE0:
    // 0x80278CE0: beq         $s5, $zero, L_80278CF0
    if (ctx->r21 == 0) {
        // 0x80278CE4: or          $v0, $s5, $zero
        ctx->r2 = ctx->r21 | 0;
            goto L_80278CF0;
    }
    // 0x80278CE4: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x80278CE8: b           L_80278CF0
    // 0x80278CEC: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
        goto L_80278CF0;
    // 0x80278CEC: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_80278CF0:
    // 0x80278CF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80278CF4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80278CF8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80278CFC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80278D00: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80278D04: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80278D08: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80278D0C: jr          $ra
    // 0x80278D10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80278D10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802A1EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F40: jr          $ra
    // 0x802A1F44: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
    return;
    // 0x802A1F44: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
;}
RECOMP_FUNC void D_802C9A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9AB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C9ABC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802C9AC0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802C9AC4: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802C9AC8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802C9ACC: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802C9AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C9AD4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802C9AD8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802C9ADC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802C9AE0:
    // 0x802C9AE0: lh          $t8, 0x8($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8);
    // 0x802C9AE4: bnel        $a1, $t8, L_802C9B00
    if (ctx->r5 != ctx->r24) {
        // 0x802C9AE8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802C9B00;
    }
    goto skip_0;
    // 0x802C9AE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x802C9AEC: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x802C9AF0: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802C9AF4: b           L_802C9B08
    // 0x802C9AF8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
        goto L_802C9B08;
    // 0x802C9AF8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802C9AFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802C9B00:
    // 0x802C9B00: bne         $v0, $a0, L_802C9AE0
    if (ctx->r2 != ctx->r4) {
        // 0x802C9B04: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_802C9AE0;
    }
    // 0x802C9B04: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_802C9B08:
    // 0x802C9B08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C9B0C: bne         $a2, $at, L_802C9B28
    if (ctx->r6 != ctx->r1) {
        // 0x802C9B10: sll         $t0, $a2, 2
        ctx->r8 = S32(ctx->r6 << 2);
            goto L_802C9B28;
    }
    // 0x802C9B10: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x802C9B14: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C9B18: jal         0x80231A24
    // 0x802C9B1C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802C9B1C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802C9B20: b           L_802C9B38
    // 0x802C9B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802C9B38;
    // 0x802C9B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802C9B28:
    // 0x802C9B28: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x802C9B2C: jal         0x802F9254
    // 0x802C9B30: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    static_3_802F9254(rdram, ctx);
        goto after_1;
    // 0x802C9B30: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_1:
    // 0x802C9B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802C9B38:
    // 0x802C9B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C9B3C: jr          $ra
    // 0x802C9B40: nop

    return;
    // 0x802C9B40: nop

;}
RECOMP_FUNC void D_802B8548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B85C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B85CC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802B85D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B85D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802B85D8: jal         0x80228DE0
    // 0x802B85DC: addiu       $a1, $a3, 0x88
    ctx->r5 = ADD32(ctx->r7, 0X88);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802B85DC: addiu       $a1, $a3, 0x88
    ctx->r5 = ADD32(ctx->r7, 0X88);
    after_0:
    // 0x802B85E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B85E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B85E8: jr          $ra
    // 0x802B85EC: nop

    return;
    // 0x802B85EC: nop

;}
RECOMP_FUNC void D_8021FB04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021FB04: bgez        $a0, L_8021FB14
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8021FB08: lui         $t5, 0x0
        ctx->r13 = S32(0X0 << 16);
            goto L_8021FB14;
    }
    // 0x8021FB08: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x8021FB0C: b           L_8021FB24
    // 0x8021FB10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_8021FB24;
    // 0x8021FB10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8021FB14:
    // 0x8021FB14: slti        $at, $a0, 0x140
    ctx->r1 = SIGNED(ctx->r4) < 0X140 ? 1 : 0;
    // 0x8021FB18: bne         $at, $zero, L_8021FB24
    if (ctx->r1 != 0) {
        // 0x8021FB1C: nop
    
            goto L_8021FB24;
    }
    // 0x8021FB1C: nop

    // 0x8021FB20: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
L_8021FB24:
    // 0x8021FB24: bgez        $a2, L_8021FB34
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8021FB28: addiu       $t5, $t5, 0x0
        ctx->r13 = ADD32(ctx->r13, 0X0);
            goto L_8021FB34;
    }
    // 0x8021FB28: addiu       $t5, $t5, 0x0
    ctx->r13 = ADD32(ctx->r13, 0X0);
    // 0x8021FB2C: b           L_8021FB44
    // 0x8021FB30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_8021FB44;
    // 0x8021FB30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8021FB34:
    // 0x8021FB34: slti        $at, $a2, 0x140
    ctx->r1 = SIGNED(ctx->r6) < 0X140 ? 1 : 0;
    // 0x8021FB38: bne         $at, $zero, L_8021FB44
    if (ctx->r1 != 0) {
        // 0x8021FB3C: nop
    
            goto L_8021FB44;
    }
    // 0x8021FB3C: nop

    // 0x8021FB40: addiu       $a2, $zero, 0x13F
    ctx->r6 = ADD32(0, 0X13F);
L_8021FB44:
    // 0x8021FB44: bgez        $a1, L_8021FB54
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8021FB48: lui         $t7, 0xE700
        ctx->r15 = S32(0XE700 << 16);
            goto L_8021FB54;
    }
    // 0x8021FB48: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8021FB4C: b           L_8021FB64
    // 0x8021FB50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_8021FB64;
    // 0x8021FB50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8021FB54:
    // 0x8021FB54: slti        $at, $a1, 0xF0
    ctx->r1 = SIGNED(ctx->r5) < 0XF0 ? 1 : 0;
    // 0x8021FB58: bne         $at, $zero, L_8021FB64
    if (ctx->r1 != 0) {
        // 0x8021FB5C: nop
    
            goto L_8021FB64;
    }
    // 0x8021FB5C: nop

    // 0x8021FB60: addiu       $a1, $zero, 0xEF
    ctx->r5 = ADD32(0, 0XEF);
L_8021FB64:
    // 0x8021FB64: bgez        $a3, L_8021FB74
    if (SIGNED(ctx->r7) >= 0) {
        // 0x8021FB68: slti        $at, $a3, 0xF0
        ctx->r1 = SIGNED(ctx->r7) < 0XF0 ? 1 : 0;
            goto L_8021FB74;
    }
    // 0x8021FB68: slti        $at, $a3, 0xF0
    ctx->r1 = SIGNED(ctx->r7) < 0XF0 ? 1 : 0;
    // 0x8021FB6C: b           L_8021FB80
    // 0x8021FB70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_8021FB80;
    // 0x8021FB70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8021FB74:
    // 0x8021FB74: bnel        $at, $zero, L_8021FB84
    if (ctx->r1 != 0) {
        // 0x8021FB78: lw          $v1, 0x0($t5)
        ctx->r3 = MEM_W(ctx->r13, 0X0);
            goto L_8021FB84;
    }
    goto skip_0;
    // 0x8021FB78: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    skip_0:
    // 0x8021FB7C: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
L_8021FB80:
    // 0x8021FB80: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
L_8021FB84:
    // 0x8021FB84: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8021FB88: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8021FB8C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8021FB90: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8021FB94: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8021FB98: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021FB9C: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8021FBA0: lui         $t6, 0x30
    ctx->r14 = S32(0X30 << 16);
    // 0x8021FBA4: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8021FBA8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8021FBAC: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8021FBB0: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8021FBB4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021FBB8: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8021FBBC: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x8021FBC0: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x8021FBC4: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8021FBC8: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x8021FBCC: lui         $t9, 0xC08
    ctx->r25 = S32(0XC08 << 16);
    // 0x8021FBD0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8021FBD4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021FBD8: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8021FBDC: andi        $t7, $a2, 0x3FF
    ctx->r15 = ctx->r6 & 0X3FF;
    // 0x8021FBE0: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x8021FBE4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8021FBE8: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8021FBEC: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x8021FBF0: subu        $t7, $t6, $a1
    ctx->r15 = SUB32(ctx->r14, ctx->r5);
    // 0x8021FBF4: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8021FBF8: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8021FBFC: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8021FC00: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8021FC04: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x8021FC08: andi        $t8, $a0, 0x3FF
    ctx->r24 = ctx->r4 & 0X3FF;
    // 0x8021FC0C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021FC10: subu        $t7, $t6, $a3
    ctx->r15 = SUB32(ctx->r14, ctx->r7);
    // 0x8021FC14: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x8021FC18: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8021FC1C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8021FC20: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8021FC24: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8021FC28: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8021FC2C: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8021FC30: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8021FC34: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8021FC38: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8021FC3C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8021FC40: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021FC44: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8021FC48: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x8021FC4C: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x8021FC50: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8021FC54: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8021FC58: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8021FC5C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8021FC60: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021FC64: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x8021FC68: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x8021FC6C: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x8021FC70: ori         $t7, $t6, 0xFFE
    ctx->r15 = ctx->r14 | 0XFFE;
    // 0x8021FC74: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021FC78: jr          $ra
    // 0x8021FC7C: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
    return;
    // 0x8021FC7C: sw          $t7, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void D_80294C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294CD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80294CD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80294CDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80294CE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80294CE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80294CE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80294CEC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80294CF0: jal         0x80228DE0
    // 0x80294CF4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80294CF4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x80294CF8: lw          $t6, 0xE4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE4);
    // 0x80294CFC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80294D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80294D04: blez        $t6, L_80294D14
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80294D08: swc1        $f4, 0xE0($s0)
        MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
            goto L_80294D14;
    }
    // 0x80294D08: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    // 0x80294D0C: jal         0x802C33C4
    // 0x80294D10: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    static_3_802C33C4(rdram, ctx);
        goto after_1;
    // 0x80294D10: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
L_80294D14:
    // 0x80294D14: lw          $t7, 0xE8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE8);
    // 0x80294D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80294D1C: blezl       $t7, L_80294D30
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80294D20: lw          $t8, 0xEC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XEC);
            goto L_80294D30;
    }
    goto skip_0;
    // 0x80294D20: lw          $t8, 0xEC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XEC);
    skip_0:
    // 0x80294D24: jal         0x802C34E8
    // 0x80294D28: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    static_3_802C34E8(rdram, ctx);
        goto after_2;
    // 0x80294D28: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80294D2C: lw          $t8, 0xEC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XEC);
L_80294D30:
    // 0x80294D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80294D34: blezl       $t8, L_80294D48
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80294D38: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80294D48;
    }
    goto skip_1;
    // 0x80294D38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80294D3C: jal         0x802C3558
    // 0x80294D40: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    static_3_802C3558(rdram, ctx);
        goto after_3;
    // 0x80294D40: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x80294D44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80294D48:
    // 0x80294D48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80294D4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80294D50: jr          $ra
    // 0x80294D54: nop

    return;
    // 0x80294D54: nop

;}
RECOMP_FUNC void D_802D1E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1F24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D1F28: jal         0x80301EA0
    // 0x802D1F2C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D1F2C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x802D1F30: beq         $v0, $zero, L_802D1F44
    if (ctx->r2 == 0) {
        // 0x802D1F34: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_802D1F44;
    }
    // 0x802D1F34: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1F38: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    // 0x802D1F3C: jal         0x8020178C
    // 0x802D1F40: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    static_3_8020178C(rdram, ctx);
        goto after_1;
    // 0x802D1F40: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_1:
L_802D1F44:
    // 0x802D1F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1F4C: jr          $ra
    // 0x802D1F50: nop

    return;
    // 0x802D1F50: nop

;}
RECOMP_FUNC void D_80245AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80245AF0: addiu       $sp, $sp, -0x4C8
    ctx->r29 = ADD32(ctx->r29, -0X4C8);
    // 0x80245AF4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80245AF8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80245AFC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80245B00: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80245B04: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80245B08: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80245B0C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80245B10: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80245B14: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80245B18: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80245B1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80245B20: jal         0x802452EC
    // 0x80245B24: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    static_3_802452EC(rdram, ctx);
        goto after_0;
    // 0x80245B24: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    after_0:
    // 0x80245B28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80245B2C: bne         $v0, $at, L_80245B40
    if (ctx->r2 != ctx->r1) {
        // 0x80245B30: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80245B40;
    }
    // 0x80245B30: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80245B34: jal         0x802450E8
    // 0x80245B38: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_802450E8(rdram, ctx);
        goto after_1;
    // 0x80245B38: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x80245B3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80245B40:
    // 0x80245B40: beq         $v0, $zero, L_80245B50
    if (ctx->r2 == 0) {
        // 0x80245B44: addiu       $s6, $sp, 0x78
        ctx->r22 = ADD32(ctx->r29, 0X78);
            goto L_80245B50;
    }
    // 0x80245B44: addiu       $s6, $sp, 0x78
    ctx->r22 = ADD32(ctx->r29, 0X78);
    // 0x80245B48: b           L_802460AC
    // 0x80245B4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802460AC;
    // 0x80245B4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80245B50:
    // 0x80245B50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245B54: jal         0x8024612C
    // 0x80245B58: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    static_3_8024612C(rdram, ctx);
        goto after_2;
    // 0x80245B58: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_2:
    // 0x80245B5C: beq         $v0, $zero, L_80245B6C
    if (ctx->r2 == 0) {
        // 0x80245B60: nop
    
            goto L_80245B6C;
    }
    // 0x80245B60: nop

    // 0x80245B64: b           L_802460B0
    // 0x80245B68: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802460B0;
    // 0x80245B68: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245B6C:
    // 0x80245B6C: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x80245B70: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80245B74: blez        $v0, L_80245E1C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80245B78: addiu       $fp, $zero, 0x3
        ctx->r30 = ADD32(0, 0X3);
            goto L_80245E1C;
    }
    // 0x80245B78: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x80245B7C: addiu       $s7, $sp, 0x29C
    ctx->r23 = ADD32(ctx->r29, 0X29C);
    // 0x80245B80: addiu       $s3, $sp, 0x2BC
    ctx->r19 = ADD32(ctx->r29, 0X2BC);
    // 0x80245B84: addiu       $s1, $sp, 0x4BC
    ctx->r17 = ADD32(ctx->r29, 0X4BC);
L_80245B88:
    // 0x80245B88: lw          $t6, 0x5C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X5C);
    // 0x80245B8C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245B90: addu        $a2, $t6, $s4
    ctx->r6 = ADD32(ctx->r14, ctx->r20);
    // 0x80245B94: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80245B98: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245B9C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80245BA0: jal         0x80245710
    // 0x80245BA4: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    static_3_80245710(rdram, ctx);
        goto after_3;
    // 0x80245BA4: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_3:
    // 0x80245BA8: beq         $v0, $zero, L_80245BB8
    if (ctx->r2 == 0) {
        // 0x80245BAC: nop
    
            goto L_80245BB8;
    }
    // 0x80245BAC: nop

    // 0x80245BB0: b           L_802460B0
    // 0x80245BB4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802460B0;
    // 0x80245BB4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245BB8:
    // 0x80245BB8: lhu         $v0, 0x2A0($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A0);
    // 0x80245BBC: lw          $t8, 0x29C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X29C);
    // 0x80245BC0: beq         $v0, $zero, L_80245D6C
    if (ctx->r2 == 0) {
        // 0x80245BC4: nop
    
            goto L_80245D6C;
    }
    // 0x80245BC4: nop

    // 0x80245BC8: beq         $t8, $zero, L_80245D6C
    if (ctx->r24 == 0) {
        // 0x80245BCC: addiu       $t9, $sp, 0x2A2
        ctx->r25 = ADD32(ctx->r29, 0X2A2);
            goto L_80245D6C;
    }
    // 0x80245BCC: addiu       $t9, $sp, 0x2A2
    ctx->r25 = ADD32(ctx->r29, 0X2A2);
    // 0x80245BD0: lhu         $at, 0x0($t9)
    ctx->r1 = MEM_HU(ctx->r25, 0X0);
    // 0x80245BD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80245BD8: sh          $at, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r1;
    // 0x80245BDC: lw          $t4, 0x60($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X60);
    // 0x80245BE0: lhu         $t3, 0x4BC($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4BC);
    // 0x80245BE4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80245BE8: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80245BEC: bne         $at, $zero, L_80245CD0
    if (ctx->r1 != 0) {
        // 0x80245BF0: addiu       $s5, $zero, 0xFF
        ctx->r21 = ADD32(0, 0XFF);
            goto L_80245CD0;
    }
    // 0x80245BF0: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
    // 0x80245BF4: lbu         $t5, 0x4BC($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X4BC);
    // 0x80245BF8: lbu         $t6, 0x64($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X64);
    // 0x80245BFC: lbu         $t7, 0x4BD($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4BD);
    // 0x80245C00: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80245C04: beq         $at, $zero, L_80245CD0
    if (ctx->r1 == 0) {
        // 0x80245C08: nop
    
            goto L_80245CD0;
    }
    // 0x80245C08: nop

    // 0x80245C0C: blez        $t7, L_80245CD0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80245C10: slti        $at, $t7, 0x80
        ctx->r1 = SIGNED(ctx->r15) < 0X80 ? 1 : 0;
            goto L_80245CD0;
    }
    // 0x80245C10: slti        $at, $t7, 0x80
    ctx->r1 = SIGNED(ctx->r15) < 0X80 ? 1 : 0;
    // 0x80245C14: beq         $at, $zero, L_80245CD0
    if (ctx->r1 == 0) {
        // 0x80245C18: nop
    
            goto L_80245CD0;
    }
    // 0x80245C18: nop

    // 0x80245C1C: lbu         $t8, 0x4BC($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4BC);
L_80245C20:
    // 0x80245C20: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245C24: beq         $t8, $s5, L_80245C54
    if (ctx->r24 == ctx->r21) {
        // 0x80245C28: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80245C54;
    }
    // 0x80245C28: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80245C2C: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x80245C30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80245C34: jal         0x80245404
    // 0x80245C38: andi        $a3, $t8, 0xFF
    ctx->r7 = ctx->r24 & 0XFF;
    static_3_80245404(rdram, ctx);
        goto after_4;
    // 0x80245C38: andi        $a3, $t8, 0xFF
    ctx->r7 = ctx->r24 & 0XFF;
    after_4:
    // 0x80245C3C: beq         $v0, $zero, L_80245C54
    if (ctx->r2 == 0) {
        // 0x80245C40: nop
    
            goto L_80245C54;
    }
    // 0x80245C40: nop

    // 0x80245C44: beq         $v0, $fp, L_80245C54
    if (ctx->r2 == ctx->r30) {
        // 0x80245C48: nop
    
            goto L_80245C54;
    }
    // 0x80245C48: nop

    // 0x80245C4C: b           L_802460B0
    // 0x80245C50: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802460B0;
    // 0x80245C50: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245C54:
    // 0x80245C54: lhu         $at, 0x0($s1)
    ctx->r1 = MEM_HU(ctx->r17, 0X0);
    // 0x80245C58: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245C5C: sh          $at, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r1;
    // 0x80245C60: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80245C64: jal         0x80246410
    // 0x80245C68: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    static_3_80246410(rdram, ctx);
        goto after_5;
    // 0x80245C68: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_5:
    // 0x80245C6C: subu        $a0, $v0, $s0
    ctx->r4 = SUB32(ctx->r2, ctx->r16);
    // 0x80245C70: bne         $a0, $zero, L_80245CD0
    if (ctx->r4 != 0) {
        // 0x80245C74: nop
    
            goto L_80245CD0;
    }
    // 0x80245C74: nop

    // 0x80245C78: lbu         $t2, 0x4BD($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4BD);
    // 0x80245C7C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80245C80: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80245C84: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x80245C88: lhu         $at, 0x0($t4)
    ctx->r1 = MEM_HU(ctx->r12, 0X0);
    // 0x80245C8C: nop

    // 0x80245C90: sh          $at, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r1;
    // 0x80245C94: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x80245C98: lhu         $t7, 0x4BC($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X4BC);
    // 0x80245C9C: lbu         $t1, 0x4BC($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4BC);
    // 0x80245CA0: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80245CA4: bne         $at, $zero, L_80245CD0
    if (ctx->r1 != 0) {
        // 0x80245CA8: nop
    
            goto L_80245CD0;
    }
    // 0x80245CA8: nop

    // 0x80245CAC: lbu         $t9, 0x64($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X64);
    // 0x80245CB0: lbu         $t2, 0x4BD($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4BD);
    // 0x80245CB4: slt         $at, $t1, $t9
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80245CB8: beq         $at, $zero, L_80245CD0
    if (ctx->r1 == 0) {
        // 0x80245CBC: nop
    
            goto L_80245CD0;
    }
    // 0x80245CBC: nop

    // 0x80245CC0: blez        $t2, L_80245CD0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80245CC4: slti        $at, $t2, 0x80
        ctx->r1 = SIGNED(ctx->r10) < 0X80 ? 1 : 0;
            goto L_80245CD0;
    }
    // 0x80245CC4: slti        $at, $t2, 0x80
    ctx->r1 = SIGNED(ctx->r10) < 0X80 ? 1 : 0;
    // 0x80245CC8: bne         $at, $zero, L_80245C20
    if (ctx->r1 != 0) {
        // 0x80245CCC: lbu         $t8, 0x4BC($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X4BC);
            goto L_80245C20;
    }
    // 0x80245CCC: lbu         $t8, 0x4BC($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4BC);
L_80245CD0:
    // 0x80245CD0: bne         $a0, $zero, L_80245CE8
    if (ctx->r4 != 0) {
        // 0x80245CD4: nop
    
            goto L_80245CE8;
    }
    // 0x80245CD4: nop

    // 0x80245CD8: lhu         $t3, 0x4BC($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X4BC);
    // 0x80245CDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80245CE0: beq         $t3, $at, L_80245E04
    if (ctx->r11 == ctx->r1) {
        // 0x80245CE4: nop
    
            goto L_80245E04;
    }
    // 0x80245CE4: nop

L_80245CE8:
    // 0x80245CE8: sh          $zero, 0x2A0($sp)
    MEM_H(0X2A0, ctx->r29) = 0;
    // 0x80245CEC: sw          $zero, 0x29C($sp)
    MEM_W(0X29C, ctx->r29) = 0;
    // 0x80245CF0: sh          $zero, 0x2A2($sp)
    MEM_H(0X2A2, ctx->r29) = 0;
    // 0x80245CF4: sb          $zero, 0x2A4($sp)
    MEM_B(0X2A4, ctx->r29) = 0;
    // 0x80245CF8: sh          $zero, 0x2A6($sp)
    MEM_H(0X2A6, ctx->r29) = 0;
    // 0x80245CFC: lbu         $t5, 0x65($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X65);
    // 0x80245D00: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245D04: beq         $t5, $zero, L_80245D24
    if (ctx->r13 == 0) {
        // 0x80245D08: nop
    
            goto L_80245D24;
    }
    // 0x80245D08: nop

    // 0x80245D0C: jal         0x802456A0
    // 0x80245D10: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_6;
    // 0x80245D10: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_6:
    // 0x80245D14: beq         $v0, $zero, L_80245D24
    if (ctx->r2 == 0) {
        // 0x80245D18: nop
    
            goto L_80245D24;
    }
    // 0x80245D18: nop

    // 0x80245D1C: b           L_802460B0
    // 0x80245D20: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802460B0;
    // 0x80245D20: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245D24:
    // 0x80245D24: lw          $t4, 0x5C($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X5C);
    // 0x80245D28: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245D2C: addu        $a2, $t4, $s4
    ctx->r6 = ADD32(ctx->r12, ctx->r20);
    // 0x80245D30: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x80245D34: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245D38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80245D3C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80245D40: jal         0x80246660
    // 0x80245D44: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    static_3_80246660(rdram, ctx);
        goto after_7;
    // 0x80245D44: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_7:
    // 0x80245D48: beq         $v0, $zero, L_80245D5C
    if (ctx->r2 == 0) {
        // 0x80245D4C: lw          $t7, 0x74($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X74);
            goto L_80245D5C;
    }
    // 0x80245D4C: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x80245D50: b           L_802460B0
    // 0x80245D54: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802460B0;
    // 0x80245D54: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80245D58: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
L_80245D5C:
    // 0x80245D5C: nop

    // 0x80245D60: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80245D64: b           L_80245E04
    // 0x80245D68: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
        goto L_80245E04;
    // 0x80245D68: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
L_80245D6C:
    // 0x80245D6C: bne         $v0, $zero, L_80245D84
    if (ctx->r2 != 0) {
        // 0x80245D70: nop
    
            goto L_80245D84;
    }
    // 0x80245D70: nop

    // 0x80245D74: lw          $t1, 0x29C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X29C);
    // 0x80245D78: nop

    // 0x80245D7C: beq         $t1, $zero, L_80245E04
    if (ctx->r9 == 0) {
        // 0x80245D80: nop
    
            goto L_80245E04;
    }
    // 0x80245D80: nop

L_80245D84:
    // 0x80245D84: sh          $zero, 0x2A0($sp)
    MEM_H(0X2A0, ctx->r29) = 0;
    // 0x80245D88: sw          $zero, 0x29C($sp)
    MEM_W(0X29C, ctx->r29) = 0;
    // 0x80245D8C: sh          $zero, 0x2A2($sp)
    MEM_H(0X2A2, ctx->r29) = 0;
    // 0x80245D90: sb          $zero, 0x2A4($sp)
    MEM_B(0X2A4, ctx->r29) = 0;
    // 0x80245D94: sh          $zero, 0x2A6($sp)
    MEM_H(0X2A6, ctx->r29) = 0;
    // 0x80245D98: lbu         $t9, 0x65($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X65);
    // 0x80245D9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245DA0: beq         $t9, $zero, L_80245DC0
    if (ctx->r25 == 0) {
        // 0x80245DA4: nop
    
            goto L_80245DC0;
    }
    // 0x80245DA4: nop

    // 0x80245DA8: jal         0x802456A0
    // 0x80245DAC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    static_3_802456A0(rdram, ctx);
        goto after_8;
    // 0x80245DAC: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    after_8:
    // 0x80245DB0: beq         $v0, $zero, L_80245DC0
    if (ctx->r2 == 0) {
        // 0x80245DB4: nop
    
            goto L_80245DC0;
    }
    // 0x80245DB4: nop

    // 0x80245DB8: b           L_802460B0
    // 0x80245DBC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802460B0;
    // 0x80245DBC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245DC0:
    // 0x80245DC0: lw          $t2, 0x5C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X5C);
    // 0x80245DC4: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245DC8: addu        $a2, $t2, $s4
    ctx->r6 = ADD32(ctx->r10, ctx->r20);
    // 0x80245DCC: andi        $t3, $a2, 0xFFFF
    ctx->r11 = ctx->r6 & 0XFFFF;
    // 0x80245DD0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245DD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80245DD8: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80245DDC: jal         0x80246660
    // 0x80245DE0: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    static_3_80246660(rdram, ctx);
        goto after_9;
    // 0x80245DE0: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_9:
    // 0x80245DE4: beq         $v0, $zero, L_80245DF8
    if (ctx->r2 == 0) {
        // 0x80245DE8: lw          $t5, 0x74($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X74);
            goto L_80245DF8;
    }
    // 0x80245DE8: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x80245DEC: b           L_802460B0
    // 0x80245DF0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802460B0;
    // 0x80245DF0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80245DF4: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
L_80245DF8:
    // 0x80245DF8: nop

    // 0x80245DFC: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x80245E00: sw          $t4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r12;
L_80245E04:
    // 0x80245E04: lw          $v0, 0x50($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X50);
    // 0x80245E08: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80245E0C: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80245E10: bne         $at, $zero, L_80245B88
    if (ctx->r1 != 0) {
        // 0x80245E14: nop
    
            goto L_80245B88;
    }
    // 0x80245E14: nop

    // 0x80245E18: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80245E1C:
    // 0x80245E1C: addiu       $s3, $sp, 0x2BC
    ctx->r19 = ADD32(ctx->r29, 0X2BC);
    // 0x80245E20: addiu       $s7, $sp, 0x29C
    ctx->r23 = ADD32(ctx->r29, 0X29C);
    // 0x80245E24: blez        $v0, L_80245EB0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80245E28: addiu       $fp, $zero, 0x3
        ctx->r30 = ADD32(0, 0X3);
            goto L_80245EB0;
    }
    // 0x80245E28: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
L_80245E2C:
    // 0x80245E2C: lw          $t6, 0x5C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X5C);
    // 0x80245E30: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80245E34: addu        $a2, $t6, $s4
    ctx->r6 = ADD32(ctx->r14, ctx->r20);
    // 0x80245E38: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80245E3C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80245E40: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80245E44: jal         0x80245710
    // 0x80245E48: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    static_3_80245710(rdram, ctx);
        goto after_10;
    // 0x80245E48: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_10:
    // 0x80245E4C: beq         $v0, $zero, L_80245E5C
    if (ctx->r2 == 0) {
        // 0x80245E50: sll         $t8, $s4, 1
        ctx->r24 = S32(ctx->r20 << 1);
            goto L_80245E5C;
    }
    // 0x80245E50: sll         $t8, $s4, 1
    ctx->r24 = S32(ctx->r20 << 1);
    // 0x80245E54: b           L_802460B0
    // 0x80245E58: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802460B0;
    // 0x80245E58: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245E5C:
    // 0x80245E5C: lhu         $t9, 0x2A0($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X2A0);
    // 0x80245E60: addiu       $t1, $sp, 0x27C
    ctx->r9 = ADD32(ctx->r29, 0X27C);
    // 0x80245E64: beq         $t9, $zero, L_80245E98
    if (ctx->r25 == 0) {
        // 0x80245E68: addu        $a0, $t8, $t1
        ctx->r4 = ADD32(ctx->r24, ctx->r9);
            goto L_80245E98;
    }
    // 0x80245E68: addu        $a0, $t8, $t1
    ctx->r4 = ADD32(ctx->r24, ctx->r9);
    // 0x80245E6C: lw          $t2, 0x29C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X29C);
    // 0x80245E70: lhu         $t3, 0x2A2($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X2A2);
    // 0x80245E74: beq         $t2, $zero, L_80245E98
    if (ctx->r10 == 0) {
        // 0x80245E78: nop
    
            goto L_80245E98;
    }
    // 0x80245E78: nop

    // 0x80245E7C: lhu         $t5, 0x62($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X62);
    // 0x80245E80: nop

    // 0x80245E84: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80245E88: bne         $at, $zero, L_80245E98
    if (ctx->r1 != 0) {
        // 0x80245E8C: nop
    
            goto L_80245E98;
    }
    // 0x80245E8C: nop

    // 0x80245E90: b           L_80245E9C
    // 0x80245E94: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
        goto L_80245E9C;
    // 0x80245E94: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
L_80245E98:
    // 0x80245E98: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_80245E9C:
    // 0x80245E9C: lw          $t4, 0x50($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X50);
    // 0x80245EA0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80245EA4: slt         $at, $s4, $t4
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80245EA8: bne         $at, $zero, L_80245E2C
    if (ctx->r1 != 0) {
        // 0x80245EAC: nop
    
            goto L_80245E2C;
    }
    // 0x80245EAC: nop

L_80245EB0:
    // 0x80245EB0: lbu         $t6, 0x64($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X64);
    // 0x80245EB4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80245EB8: blez        $t6, L_80246078
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80245EBC: addiu       $s7, $sp, 0x4BC
        ctx->r23 = ADD32(ctx->r29, 0X4BC);
            goto L_80246078;
    }
    // 0x80245EBC: addiu       $s7, $sp, 0x4BC
    ctx->r23 = ADD32(ctx->r29, 0X4BC);
    // 0x80245EC0: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80245EC4: addiu       $s1, $sp, 0x3BC
    ctx->r17 = ADD32(ctx->r29, 0X3BC);
    // 0x80245EC8: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
L_80245ECC:
    // 0x80245ECC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80245ED0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80245ED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80245ED8: jal         0x80245404
    // 0x80245EDC: andi        $a3, $s5, 0xFF
    ctx->r7 = ctx->r21 & 0XFF;
    static_3_80245404(rdram, ctx);
        goto after_11;
    // 0x80245EDC: andi        $a3, $s5, 0xFF
    ctx->r7 = ctx->r21 & 0XFF;
    after_11:
    // 0x80245EE0: beq         $v0, $zero, L_80245EF8
    if (ctx->r2 == 0) {
        // 0x80245EE4: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_80245EF8;
    }
    // 0x80245EE4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80245EE8: beq         $v0, $fp, L_80245EF8
    if (ctx->r2 == ctx->r30) {
        // 0x80245EEC: nop
    
            goto L_80245EF8;
    }
    // 0x80245EEC: nop

    // 0x80245EF0: b           L_802460B0
    // 0x80245EF4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802460B0;
    // 0x80245EF4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80245EF8:
    // 0x80245EF8: blez        $s5, L_80245F08
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80245EFC: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80245F08;
    }
    // 0x80245EFC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80245F00: b           L_80245F10
    // 0x80245F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80245F10;
    // 0x80245F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80245F08:
    // 0x80245F08: lw          $a2, 0x60($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X60);
    // 0x80245F0C: nop

L_80245F10:
    // 0x80245F10: blez        $a2, L_80245F84
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80245F14: andi        $t0, $a2, 0x3
        ctx->r8 = ctx->r6 & 0X3;
            goto L_80245F84;
    }
    // 0x80245F14: andi        $t0, $a2, 0x3
    ctx->r8 = ctx->r6 & 0X3;
    // 0x80245F18: beq         $t0, $zero, L_80245F48
    if (ctx->r8 == 0) {
        // 0x80245F1C: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_80245F48;
    }
    // 0x80245F1C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80245F20: sll         $a3, $s4, 1
    ctx->r7 = S32(ctx->r20 << 1);
    // 0x80245F24: addu        $v1, $s1, $a3
    ctx->r3 = ADD32(ctx->r17, ctx->r7);
    // 0x80245F28: addu        $v0, $s3, $a3
    ctx->r2 = ADD32(ctx->r19, ctx->r7);
L_80245F2C:
    // 0x80245F2C: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80245F30: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80245F34: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80245F38: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80245F3C: bne         $a0, $s4, L_80245F2C
    if (ctx->r4 != ctx->r20) {
        // 0x80245F40: sh          $t7, -0x2($v1)
        MEM_H(-0X2, ctx->r3) = ctx->r15;
            goto L_80245F2C;
    }
    // 0x80245F40: sh          $t7, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r15;
    // 0x80245F44: beq         $s4, $a2, L_80245F84
    if (ctx->r20 == ctx->r6) {
        // 0x80245F48: sll         $a3, $s4, 1
        ctx->r7 = S32(ctx->r20 << 1);
            goto L_80245F84;
    }
L_80245F48:
    // 0x80245F48: sll         $a3, $s4, 1
    ctx->r7 = S32(ctx->r20 << 1);
    // 0x80245F4C: addu        $v1, $s1, $a3
    ctx->r3 = ADD32(ctx->r17, ctx->r7);
    // 0x80245F50: addu        $v0, $s3, $a3
    ctx->r2 = ADD32(ctx->r19, ctx->r7);
L_80245F54:
    // 0x80245F54: lhu         $t1, 0x2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2);
    // 0x80245F58: lhu         $t9, 0x4($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X4);
    // 0x80245F5C: lhu         $t2, 0x6($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X6);
    // 0x80245F60: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x80245F64: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80245F68: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80245F6C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80245F70: sh          $t1, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r9;
    // 0x80245F74: sh          $t9, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r25;
    // 0x80245F78: sh          $t2, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r10;
    // 0x80245F7C: bne         $s4, $a2, L_80245F54
    if (ctx->r20 != ctx->r6) {
        // 0x80245F80: sh          $t8, -0x8($v1)
        MEM_H(-0X8, ctx->r3) = ctx->r24;
            goto L_80245F54;
    }
    // 0x80245F80: sh          $t8, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r24;
L_80245F84:
    // 0x80245F84: slti        $at, $s4, 0x80
    ctx->r1 = SIGNED(ctx->r20) < 0X80 ? 1 : 0;
    // 0x80245F88: beq         $at, $zero, L_80245FA8
    if (ctx->r1 == 0) {
        // 0x80245F8C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80245FA8;
    }
    // 0x80245F8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80245F90: sll         $t5, $s4, 1
    ctx->r13 = S32(ctx->r20 << 1);
    // 0x80245F94: addu        $v1, $s1, $t5
    ctx->r3 = ADD32(ctx->r17, ctx->r13);
L_80245F98:
    // 0x80245F98: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80245F9C: sltu        $at, $v1, $s7
    ctx->r1 = ctx->r3 < ctx->r23 ? 1 : 0;
    // 0x80245FA0: bne         $at, $zero, L_80245F98
    if (ctx->r1 != 0) {
        // 0x80245FA4: sh          $s6, -0x2($v1)
        MEM_H(-0X2, ctx->r3) = ctx->r22;
            goto L_80245F98;
    }
    // 0x80245FA4: sh          $s6, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r22;
L_80245FA8:
    // 0x80245FA8: lw          $t3, 0x50($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X50);
    // 0x80245FAC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80245FB0: blez        $t3, L_80246048
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80245FB4: andi        $a3, $s5, 0xFF
        ctx->r7 = ctx->r21 & 0XFF;
            goto L_80246048;
    }
    // 0x80245FB4: andi        $a3, $s5, 0xFF
    ctx->r7 = ctx->r21 & 0XFF;
    // 0x80245FB8: addiu       $a0, $sp, 0x27C
    ctx->r4 = ADD32(ctx->r29, 0X27C);
L_80245FBC:
    // 0x80245FBC: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x80245FC0: nop

    // 0x80245FC4: bne         $a1, $t4, L_80246034
    if (ctx->r5 != ctx->r12) {
        // 0x80245FC8: nop
    
            goto L_80246034;
    }
    // 0x80245FC8: nop

    // 0x80245FCC: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x80245FD0: lhu         $t7, 0x62($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X62);
    // 0x80245FD4: nop

    // 0x80245FD8: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80245FDC: bne         $at, $zero, L_80246034
    if (ctx->r1 != 0) {
        // 0x80245FE0: nop
    
            goto L_80246034;
    }
    // 0x80245FE0: nop

L_80245FE4:
    // 0x80245FE4: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x80245FE8: nop

    // 0x80245FEC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80245FF0: addu        $t8, $s3, $v0
    ctx->r24 = ADD32(ctx->r19, ctx->r2);
    // 0x80245FF4: lhu         $at, 0x0($t8)
    ctx->r1 = MEM_HU(ctx->r24, 0X0);
    // 0x80245FF8: addu        $t2, $s1, $v0
    ctx->r10 = ADD32(ctx->r17, ctx->r2);
    // 0x80245FFC: sh          $at, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r1;
    // 0x80246000: sh          $at, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r1;
    // 0x80246004: lhu         $at, 0x0($s0)
    ctx->r1 = MEM_HU(ctx->r16, 0X0);
    // 0x80246008: nop

    // 0x8024600C: sh          $at, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r1;
    // 0x80246010: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x80246014: nop

    // 0x80246018: bne         $a1, $t7, L_80246034
    if (ctx->r5 != ctx->r15) {
        // 0x8024601C: nop
    
            goto L_80246034;
    }
    // 0x8024601C: nop

    // 0x80246020: lhu         $t8, 0x62($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X62);
    // 0x80246024: andi        $t1, $at, 0xFFFF
    ctx->r9 = ctx->r1 & 0XFFFF;
    // 0x80246028: slt         $at, $t1, $t8
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8024602C: beq         $at, $zero, L_80245FE4
    if (ctx->r1 == 0) {
        // 0x80246030: nop
    
            goto L_80245FE4;
    }
    // 0x80246030: nop

L_80246034:
    // 0x80246034: lw          $t9, 0x50($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X50);
    // 0x80246038: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8024603C: slt         $at, $s4, $t9
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80246040: bne         $at, $zero, L_80245FBC
    if (ctx->r1 != 0) {
        // 0x80246044: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_80245FBC;
    }
    // 0x80246044: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_80246048:
    // 0x80246048: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8024604C: jal         0x80245404
    // 0x80246050: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80245404(rdram, ctx);
        goto after_12;
    // 0x80246050: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x80246054: beq         $v0, $zero, L_80246064
    if (ctx->r2 == 0) {
        // 0x80246058: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_80246064;
    }
    // 0x80246058: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8024605C: b           L_802460B0
    // 0x80246060: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_802460B0;
    // 0x80246060: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80246064:
    // 0x80246064: lbu         $t2, 0x64($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X64);
    // 0x80246068: andi        $t5, $s5, 0xFF
    ctx->r13 = ctx->r21 & 0XFF;
    // 0x8024606C: slt         $at, $t5, $t2
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80246070: bne         $at, $zero, L_80245ECC
    if (ctx->r1 != 0) {
        // 0x80246074: or          $s5, $t5, $zero
        ctx->r21 = ctx->r13 | 0;
            goto L_80245ECC;
    }
    // 0x80246074: or          $s5, $t5, $zero
    ctx->r21 = ctx->r13 | 0;
L_80246078:
    // 0x80246078: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8024607C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80246080: beq         $t3, $zero, L_8024609C
    if (ctx->r11 == 0) {
        // 0x80246084: nop
    
            goto L_8024609C;
    }
    // 0x80246084: nop

    // 0x80246088: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x8024608C: nop

    // 0x80246090: ori         $t6, $t4, 0x2
    ctx->r14 = ctx->r12 | 0X2;
    // 0x80246094: b           L_802460AC
    // 0x80246098: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
        goto L_802460AC;
    // 0x80246098: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
L_8024609C:
    // 0x8024609C: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x802460A0: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x802460A4: and         $t1, $t7, $at
    ctx->r9 = ctx->r15 & ctx->r1;
    // 0x802460A8: sw          $t1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r9;
L_802460AC:
    // 0x802460AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_802460B0:
    // 0x802460B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802460B4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802460B8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802460BC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802460C0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802460C4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802460C8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802460CC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802460D0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802460D4: jr          $ra
    // 0x802460D8: addiu       $sp, $sp, 0x4C8
    ctx->r29 = ADD32(ctx->r29, 0X4C8);
    return;
    // 0x802460D8: addiu       $sp, $sp, 0x4C8
    ctx->r29 = ADD32(ctx->r29, 0X4C8);
;}
RECOMP_FUNC void D_802402AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802402AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802402B0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802402B4: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x802402B8: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x802402BC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802402C0: beq         $v1, $zero, L_80240314
    if (ctx->r3 == 0) {
        // 0x802402C4: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_80240314;
    }
    // 0x802402C4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802402C8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x802402CC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x802402D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802402D4: lbu         $t8, 0x32($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X32);
L_802402D8:
    // 0x802402D8: bnel        $v0, $t8, L_8024030C
    if (ctx->r2 != ctx->r24) {
        // 0x802402DC: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8024030C;
    }
    goto skip_0;
    // 0x802402DC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x802402E0: lbu         $t9, 0x31($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X31);
    // 0x802402E4: bnel        $a2, $t9, L_8024030C
    if (ctx->r6 != ctx->r25) {
        // 0x802402E8: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8024030C;
    }
    goto skip_1;
    // 0x802402E8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x802402EC: lbu         $a0, 0x35($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X35);
    // 0x802402F0: beql        $a1, $a0, L_8024030C
    if (ctx->r5 == ctx->r4) {
        // 0x802402F4: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8024030C;
    }
    goto skip_2;
    // 0x802402F4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x802402F8: beql        $a3, $a0, L_8024030C
    if (ctx->r7 == ctx->r4) {
        // 0x802402FC: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8024030C;
    }
    goto skip_3;
    // 0x802402FC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x80240300: jr          $ra
    // 0x80240304: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80240304: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80240308: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_8024030C:
    // 0x8024030C: bnel        $v1, $zero, L_802402D8
    if (ctx->r3 != 0) {
        // 0x80240310: lbu         $t8, 0x32($v1)
        ctx->r24 = MEM_BU(ctx->r3, 0X32);
            goto L_802402D8;
    }
    goto skip_4;
    // 0x80240310: lbu         $t8, 0x32($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X32);
    skip_4:
L_80240314:
    // 0x80240314: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80240318: jr          $ra
    // 0x8024031C: nop

    return;
    // 0x8024031C: nop

;}
RECOMP_FUNC void D_80211AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80211AB8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80211ABC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80211AC0: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80211AC4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80211AC8: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x80211ACC: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x80211AD0: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x80211AD4: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x80211AD8: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x80211ADC: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80211AE0: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80211AE4: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80211AE8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80211AEC: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x80211AF0: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x80211AF4: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x80211AF8: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80211AFC: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80211B00: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x80211B04: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80211B08: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x80211B0C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80211B10: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80211B14: bne         $s0, $zero, L_80211B24
    if (ctx->r16 != 0) {
        // 0x80211B18: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80211B24;
    }
    // 0x80211B18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80211B1C: jal         0x80231A24
    // 0x80211B20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80211B20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
L_80211B24:
    // 0x80211B24: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80211B28: addiu       $t0, $sp, 0x94
    ctx->r8 = ADD32(ctx->r29, 0X94);
    // 0x80211B2C: addiu       $t1, $sp, 0x90
    ctx->r9 = ADD32(ctx->r29, 0X90);
    // 0x80211B30: addiu       $t2, $sp, 0x8C
    ctx->r10 = ADD32(ctx->r29, 0X8C);
    // 0x80211B34: addiu       $t3, $sp, 0x6E
    ctx->r11 = ADD32(ctx->r29, 0X6E);
    // 0x80211B38: addiu       $t4, $sp, 0x76
    ctx->r12 = ADD32(ctx->r29, 0X76);
    // 0x80211B3C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80211B40: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80211B44: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80211B48: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80211B4C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80211B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80211B54: lw          $a2, 0xA0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA0);
    // 0x80211B58: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80211B5C: jal         0x802160EC
    // 0x80211B60: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    static_3_802160EC(rdram, ctx);
        goto after_1;
    // 0x80211B60: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_1:
    // 0x80211B64: bne         $v0, $zero, L_80211B7C
    if (ctx->r2 != 0) {
        // 0x80211B68: lhu         $t7, 0x6E($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X6E);
            goto L_80211B7C;
    }
    // 0x80211B68: lhu         $t7, 0x6E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X6E);
    // 0x80211B6C: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80211B70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80211B74: b           L_80211D24
    // 0x80211B78: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
        goto L_80211D24;
    // 0x80211B78: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
L_80211B7C:
    // 0x80211B7C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80211B80: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80211B84: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x80211B88: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80211B8C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80211B90: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80211B94: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x80211B98: lw          $s4, 0x40($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X40);
    // 0x80211B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80211BA0: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x80211BA4: bne         $s4, $zero, L_80211BB4
    if (ctx->r20 != 0) {
        // 0x80211BA8: lwc1        $f4, 0x94($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
            goto L_80211BB4;
    }
    // 0x80211BA8: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80211BAC: b           L_80211D24
    // 0x80211BB0: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
        goto L_80211D24;
    // 0x80211BB0: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
L_80211BB4:
    // 0x80211BB4: lwc1        $f6, 0x2C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80211BB8: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80211BBC: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80211BC0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80211BC4: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80211BC8: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80211BCC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80211BD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80211BD4: addiu       $s7, $zero, 0x2C
    ctx->r23 = ADD32(0, 0X2C);
    // 0x80211BD8: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80211BDC: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x80211BE0: lwc1        $f16, 0x2C($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80211BE4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80211BE8: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x80211BEC: lwc1        $f6, 0x2C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80211BF0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80211BF4: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x80211BF8: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
    // 0x80211BFC: blez        $v0, L_80211D0C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80211C00: nop
    
            goto L_80211D0C;
    }
    // 0x80211C00: nop

    // 0x80211C04: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80211C08: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
L_80211C0C:
    // 0x80211C0C: multu       $s3, $s7
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80211C10: lw          $t0, 0x8($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X8);
    // 0x80211C14: lhu         $t3, 0x76($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X76);
    // 0x80211C18: mflo        $t1
    ctx->r9 = lo;
    // 0x80211C1C: addu        $s1, $t0, $t1
    ctx->r17 = ADD32(ctx->r8, ctx->r9);
    // 0x80211C20: lhu         $t2, 0x16($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X16);
    // 0x80211C24: and         $t4, $t2, $t3
    ctx->r12 = ctx->r10 & ctx->r11;
    // 0x80211C28: beql        $t4, $zero, L_80211CFC
    if (ctx->r12 == 0) {
        // 0x80211C2C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80211CFC;
    }
    goto skip_0;
    // 0x80211C2C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x80211C30: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80211C34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80211C38: blezl       $v1, L_80211CFC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80211C3C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80211CFC;
    }
    goto skip_1;
    // 0x80211C3C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
L_80211C40:
    // 0x80211C40: lw          $t5, 0x10($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X10);
    // 0x80211C44: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x80211C48: lhu         $t8, 0x76($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X76);
    // 0x80211C4C: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
    // 0x80211C50: lhu         $t6, 0x6($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6);
    // 0x80211C54: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80211C58: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80211C5C: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x80211C60: beql        $t9, $zero, L_80211CE4
    if (ctx->r25 == 0) {
        // 0x80211C64: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80211CE4;
    }
    goto skip_2;
    // 0x80211C64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x80211C68: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x80211C6C: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x80211C70: lhu         $a3, 0x0($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X0);
    // 0x80211C74: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80211C78: lhu         $t1, 0x4($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X4);
    // 0x80211C7C: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80211C80: jal         0x80215578
    // 0x80211C84: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    static_3_80215578(rdram, ctx);
        goto after_2;
    // 0x80211C84: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
    // 0x80211C88: bne         $v0, $zero, L_80211C98
    if (ctx->r2 != 0) {
        // 0x80211C8C: lhu         $t3, 0x6E($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X6E);
            goto L_80211C98;
    }
    // 0x80211C8C: lhu         $t3, 0x6E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X6E);
    // 0x80211C90: b           L_80211CE0
    // 0x80211C94: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
        goto L_80211CE0;
    // 0x80211C94: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
L_80211C98:
    // 0x80211C98: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
    // 0x80211C9C: andi        $t5, $s3, 0x3FF
    ctx->r13 = ctx->r19 & 0X3FF;
    // 0x80211CA0: sll         $t7, $t5, 12
    ctx->r15 = S32(ctx->r13 << 12);
    // 0x80211CA4: sll         $t4, $t3, 22
    ctx->r12 = S32(ctx->r11 << 22);
    // 0x80211CA8: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80211CAC: andi        $t8, $s0, 0xFFF
    ctx->r24 = ctx->r16 & 0XFFF;
    // 0x80211CB0: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x80211CB4: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80211CB8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80211CBC: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80211CC0: lhu         $t3, 0x18($s5)
    ctx->r11 = MEM_HU(ctx->r21, 0X18);
    // 0x80211CC4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80211CC8: sltu        $at, $s2, $t3
    ctx->r1 = ctx->r18 < ctx->r11 ? 1 : 0;
    // 0x80211CCC: bnel        $at, $zero, L_80211CE0
    if (ctx->r1 != 0) {
        // 0x80211CD0: lhu         $v1, 0x14($s1)
        ctx->r3 = MEM_HU(ctx->r17, 0X14);
            goto L_80211CE0;
    }
    goto skip_3;
    // 0x80211CD0: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    skip_3:
    // 0x80211CD4: b           L_80211CF8
    // 0x80211CD8: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
        goto L_80211CF8;
    // 0x80211CD8: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
    // 0x80211CDC: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
L_80211CE0:
    // 0x80211CE0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80211CE4:
    // 0x80211CE4: andi        $t5, $s0, 0xFFFF
    ctx->r13 = ctx->r16 & 0XFFFF;
    // 0x80211CE8: slt         $at, $t5, $v1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80211CEC: bne         $at, $zero, L_80211C40
    if (ctx->r1 != 0) {
        // 0x80211CF0: or          $s0, $t5, $zero
        ctx->r16 = ctx->r13 | 0;
            goto L_80211C40;
    }
    // 0x80211CF0: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80211CF4: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
L_80211CF8:
    // 0x80211CF8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80211CFC:
    // 0x80211CFC: andi        $t4, $s3, 0xFFFF
    ctx->r12 = ctx->r19 & 0XFFFF;
    // 0x80211D00: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80211D04: bne         $at, $zero, L_80211C0C
    if (ctx->r1 != 0) {
        // 0x80211D08: or          $s3, $t4, $zero
        ctx->r19 = ctx->r12 | 0;
            goto L_80211C0C;
    }
    // 0x80211D08: or          $s3, $t4, $zero
    ctx->r19 = ctx->r12 | 0;
L_80211D0C:
    // 0x80211D0C: lui         $s6, 0x0
    ctx->r22 = S32(0X0 << 16);
    // 0x80211D10: addiu       $s6, $s6, 0x0
    ctx->r22 = ADD32(ctx->r22, 0X0);
    // 0x80211D14: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80211D18: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80211D1C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80211D20: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
L_80211D24:
    // 0x80211D24: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80211D28: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80211D2C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80211D30: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80211D34: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x80211D38: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x80211D3C: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x80211D40: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x80211D44: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x80211D48: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x80211D4C: jr          $ra
    // 0x80211D50: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80211D50: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void D_802D50C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D5148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D514C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D5150: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D5154: jal         0x8028C004
    // 0x802D5158: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    static_3_8028C004(rdram, ctx);
        goto after_0;
    // 0x802D5158: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x802D515C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D5160: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D5164: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802D5168: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802D516C: jal         0x802AA4A4
    // 0x802D5170: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802AA4A4(rdram, ctx);
        goto after_1;
    // 0x802D5170: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802D5174: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D5178: jal         0x8028C444
    // 0x802D517C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8028C444(rdram, ctx);
        goto after_2;
    // 0x802D517C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802D5180: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D5184: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802D5188: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802D518C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x802D5190: jal         0x802AA4A4
    // 0x802D5194: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    static_3_802AA4A4(rdram, ctx);
        goto after_3;
    // 0x802D5194: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x802D5198: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802D519C: jal         0x8028C444
    // 0x802D51A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8028C444(rdram, ctx);
        goto after_4;
    // 0x802D51A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x802D51A4: jal         0x80305984
    // 0x802D51A8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_80305984(rdram, ctx);
        goto after_5;
    // 0x802D51A8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_5:
    // 0x802D51AC: lbu         $t6, 0xC54($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC54);
    // 0x802D51B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802D51B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D51B8: beq         $t6, $zero, L_802D51C8
    if (ctx->r14 == 0) {
        // 0x802D51BC: addiu       $a1, $zero, 0x37
        ctx->r5 = ADD32(0, 0X37);
            goto L_802D51C8;
    }
    // 0x802D51BC: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x802D51C0: b           L_802D51E0
    // 0x802D51C4: sb          $t7, 0xC55($s0)
    MEM_B(0XC55, ctx->r16) = ctx->r15;
        goto L_802D51E0;
    // 0x802D51C4: sb          $t7, 0xC55($s0)
    MEM_B(0XC55, ctx->r16) = ctx->r15;
L_802D51C8:
    // 0x802D51C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D51CC: sb          $zero, 0xC55($s0)
    MEM_B(0XC55, ctx->r16) = 0;
    // 0x802D51D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802D51D4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802D51D8: jal         0x80200B20
    // 0x802D51DC: swc1        $f0, 0xC3C($s0)
    MEM_W(0XC3C, ctx->r16) = ctx->f0.u32l;
    static_3_80200B20(rdram, ctx);
        goto after_6;
    // 0x802D51DC: swc1        $f0, 0xC3C($s0)
    MEM_W(0XC3C, ctx->r16) = ctx->f0.u32l;
    after_6:
L_802D51E0:
    // 0x802D51E0: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802D51E4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802D51E8: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802D51EC: lh          $t8, 0xB8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XB8);
    // 0x802D51F0: jalr        $t9
    // 0x802D51F4: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802D51F4: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_7:
    // 0x802D51F8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D51FC: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D5200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802D5204: jal         0x80309758
    // 0x802D5208: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_80309758(rdram, ctx);
        goto after_8;
    // 0x802D5208: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x802D520C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802D5210: jal         0x80318E80
    // 0x802D5214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318E80(rdram, ctx);
        goto after_9;
    // 0x802D5214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802D5218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D521C: jal         0x80318C88
    // 0x802D5220: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    static_3_80318C88(rdram, ctx);
        goto after_10;
    // 0x802D5220: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_10:
    // 0x802D5224: sb          $zero, 0xC56($s0)
    MEM_B(0XC56, ctx->r16) = 0;
    // 0x802D5228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D522C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D5230: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D5234: jr          $ra
    // 0x802D5238: nop

    return;
    // 0x802D5238: nop

;}
RECOMP_FUNC void D_80211600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80211600: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80211604: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80211608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021160C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211610: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80211614: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80211618: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021161C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80211620: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x80211624: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80211628: bnel        $v1, $zero, L_80211644
    if (ctx->r3 != 0) {
        // 0x8021162C: lw          $t0, 0x8($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X8);
            goto L_80211644;
    }
    goto skip_0;
    // 0x8021162C: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    skip_0:
    // 0x80211630: jal         0x80231A24
    // 0x80211634: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80211634: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80211638: b           L_8021164C
    // 0x8021163C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021164C;
    // 0x8021163C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80211640: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
L_80211644:
    // 0x80211644: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80211648: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_8021164C:
    // 0x8021164C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211654: jr          $ra
    // 0x80211658: nop

    return;
    // 0x80211658: nop

;}
RECOMP_FUNC void D_802013F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802013F8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802013FC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201400: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80201404: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80201408: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8020140C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201410: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80201414: bne         $at, $zero, L_8020144C
    if (ctx->r1 != 0) {
        // 0x80201418: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_8020144C;
    }
    // 0x80201418: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x8020141C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201420: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80201424: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80201428: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8020142C: addiu       $a2, $zero, 0x115
    ctx->r6 = ADD32(0, 0X115);
    // 0x80201430: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80201434: jal         0x80231C9C
    // 0x80201438: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    static_3_80231C9C(rdram, ctx);
        goto after_0;
    // 0x80201438: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    after_0:
    // 0x8020143C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201440: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201444: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80201448: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
L_8020144C:
    // 0x8020144C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80201450: beq         $at, $zero, L_802014DC
    if (ctx->r1 == 0) {
        // 0x80201454: lui         $a2, 0x0
        ctx->r6 = S32(0X0 << 16);
            goto L_802014DC;
    }
    // 0x80201454: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80201458: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x8020145C: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x80201460: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80201464: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80201468: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x8020146C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80201470: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80201474: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80201478: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8020147C: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
    // 0x80201480: lw          $t6, 0xA0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XA0);
    // 0x80201484: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80201488: beq         $t6, $at, L_802014D4
    if (ctx->r14 == ctx->r1) {
        // 0x8020148C: nop
    
            goto L_802014D4;
    }
    // 0x8020148C: nop

    // 0x80201490: lbu         $a0, 0xAD($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XAD);
    // 0x80201494: jal         0x80203654
    // 0x80201498: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    static_3_80203654(rdram, ctx);
        goto after_1;
    // 0x80201498: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8020149C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802014A0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802014A4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802014A8: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x802014AC: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x802014B0: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x802014B4: sw          $zero, 0xA0($t8)
    MEM_W(0XA0, ctx->r24) = 0;
    // 0x802014B8: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x802014BC: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x802014C0: sb          $t9, 0xAD($t1)
    MEM_B(0XAD, ctx->r9) = ctx->r25;
    // 0x802014C4: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x802014C8: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x802014CC: sb          $zero, 0xB0($t3)
    MEM_B(0XB0, ctx->r11) = 0;
    // 0x802014D0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
L_802014D4:
    // 0x802014D4: jal         0x802012BC
    // 0x802014D8: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    static_3_802012BC(rdram, ctx);
        goto after_2;
    // 0x802014D8: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    after_2:
L_802014DC:
    // 0x802014DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802014E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802014E4: jr          $ra
    // 0x802014E8: nop

    return;
    // 0x802014E8: nop

;}
RECOMP_FUNC void D_802D23A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2420: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802D2424: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802D2428: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D242C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D2430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D2434: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802D2438: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x802D243C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
L_802D2440:
    // 0x802D2440: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802D2444: sw          $zero, 0x202C($v1)
    MEM_W(0X202C, ctx->r3) = 0;
    // 0x802D2448: swc1        $f0, 0x2030($v1)
    MEM_W(0X2030, ctx->r3) = ctx->f0.u32l;
    // 0x802D244C: swc1        $f0, 0x2034($v1)
    MEM_W(0X2034, ctx->r3) = ctx->f0.u32l;
    // 0x802D2450: sb          $a1, 0x2028($v1)
    MEM_B(0X2028, ctx->r3) = ctx->r5;
    // 0x802D2454: swc1        $f2, 0x2024($v1)
    MEM_W(0X2024, ctx->r3) = ctx->f2.u32l;
    // 0x802D2458: sb          $zero, 0x2038($v1)
    MEM_B(0X2038, ctx->r3) = 0;
    // 0x802D245C: sw          $zero, 0x2050($v1)
    MEM_W(0X2050, ctx->r3) = 0;
    // 0x802D2460: swc1        $f0, 0x2054($v1)
    MEM_W(0X2054, ctx->r3) = ctx->f0.u32l;
    // 0x802D2464: swc1        $f0, 0x2058($v1)
    MEM_W(0X2058, ctx->r3) = ctx->f0.u32l;
    // 0x802D2468: sb          $a1, 0x204C($v1)
    MEM_B(0X204C, ctx->r3) = ctx->r5;
    // 0x802D246C: swc1        $f2, 0x2048($v1)
    MEM_W(0X2048, ctx->r3) = ctx->f2.u32l;
    // 0x802D2470: sb          $zero, 0x205C($v1)
    MEM_B(0X205C, ctx->r3) = 0;
    // 0x802D2474: sw          $zero, 0x2074($v1)
    MEM_W(0X2074, ctx->r3) = 0;
    // 0x802D2478: swc1        $f0, 0x2078($v1)
    MEM_W(0X2078, ctx->r3) = ctx->f0.u32l;
    // 0x802D247C: swc1        $f0, 0x207C($v1)
    MEM_W(0X207C, ctx->r3) = ctx->f0.u32l;
    // 0x802D2480: sb          $a1, 0x2070($v1)
    MEM_B(0X2070, ctx->r3) = ctx->r5;
    // 0x802D2484: swc1        $f2, 0x206C($v1)
    MEM_W(0X206C, ctx->r3) = ctx->f2.u32l;
    // 0x802D2488: sb          $zero, 0x2080($v1)
    MEM_B(0X2080, ctx->r3) = 0;
    // 0x802D248C: sw          $zero, 0x2098($v1)
    MEM_W(0X2098, ctx->r3) = 0;
    // 0x802D2490: swc1        $f0, 0x209C($v1)
    MEM_W(0X209C, ctx->r3) = ctx->f0.u32l;
    // 0x802D2494: swc1        $f0, 0x20A0($v1)
    MEM_W(0X20A0, ctx->r3) = ctx->f0.u32l;
    // 0x802D2498: sb          $a1, 0x2094($v1)
    MEM_B(0X2094, ctx->r3) = ctx->r5;
    // 0x802D249C: swc1        $f2, 0x2090($v1)
    MEM_W(0X2090, ctx->r3) = ctx->f2.u32l;
    // 0x802D24A0: sb          $zero, 0x20A4($v1)
    MEM_B(0X20A4, ctx->r3) = 0;
    // 0x802D24A4: bne         $v0, $a2, L_802D2440
    if (ctx->r2 != ctx->r6) {
        // 0x802D24A8: addiu       $v1, $v1, 0x90
        ctx->r3 = ADD32(ctx->r3, 0X90);
            goto L_802D2440;
    }
    // 0x802D24A8: addiu       $v1, $v1, 0x90
    ctx->r3 = ADD32(ctx->r3, 0X90);
    // 0x802D24AC: lw          $t6, 0x2928($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2928);
    // 0x802D24B0: jr          $ra
    // 0x802D24B4: sw          $t6, 0x2924($a0)
    MEM_W(0X2924, ctx->r4) = ctx->r14;
    return;
    // 0x802D24B4: sw          $t6, 0x2924($a0)
    MEM_W(0X2924, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void D_8027E8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E958: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027E95C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8027E960: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8027E964: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027E968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E96C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027E970: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8027E974: beq         $a1, $at, L_8027E990
    if (ctx->r5 == ctx->r1) {
        // 0x8027E978: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_8027E990;
    }
    // 0x8027E978: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8027E97C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027E980: beql        $a1, $at, L_8027EB2C
    if (ctx->r5 == ctx->r1) {
        // 0x8027E984: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027EB2C;
    }
    goto skip_0;
    // 0x8027E984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8027E988: b           L_8027EB2C
    // 0x8027E98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027EB2C;
    // 0x8027E98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E990:
    // 0x8027E990: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8027E994: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    // 0x8027E998: jal         0x80318804
    // 0x8027E99C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80318804(rdram, ctx);
        goto after_0;
    // 0x8027E99C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8027E9A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027E9A4: bne         $v0, $at, L_8027EA00
    if (ctx->r2 != ctx->r1) {
        // 0x8027E9A8: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_8027EA00;
    }
    // 0x8027E9A8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8027E9AC: lw          $a0, 0x6EEC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X6EEC);
    // 0x8027E9B0: beql        $a0, $zero, L_8027E9C4
    if (ctx->r4 == 0) {
        // 0x8027E9B4: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_8027E9C4;
    }
    goto skip_1;
    // 0x8027E9B4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x8027E9B8: jal         0x80317E10
    // 0x8027E9BC: nop

    static_3_80317E10(rdram, ctx);
        goto after_1;
    // 0x8027E9BC: nop

    after_1:
    // 0x8027E9C0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
L_8027E9C4:
    // 0x8027E9C4: lw          $a0, 0x6EF0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X6EF0);
    // 0x8027E9C8: beql        $a0, $zero, L_8027E9DC
    if (ctx->r4 == 0) {
        // 0x8027E9CC: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_8027E9DC;
    }
    goto skip_2;
    // 0x8027E9CC: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_2:
    // 0x8027E9D0: jal         0x80317E10
    // 0x8027E9D4: nop

    static_3_80317E10(rdram, ctx);
        goto after_2;
    // 0x8027E9D4: nop

    after_2:
    // 0x8027E9D8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_8027E9DC:
    // 0x8027E9DC: lw          $a0, 0x6EF4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X6EF4);
    // 0x8027E9E0: beql        $a0, $zero, L_8027EB2C
    if (ctx->r4 == 0) {
        // 0x8027E9E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027EB2C;
    }
    goto skip_3;
    // 0x8027E9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8027E9E8: jal         0x80317E10
    // 0x8027E9EC: nop

    static_3_80317E10(rdram, ctx);
        goto after_3;
    // 0x8027E9EC: nop

    after_3:
    // 0x8027E9F0: beql        $v0, $zero, L_8027EB2C
    if (ctx->r2 == 0) {
        // 0x8027E9F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027EB2C;
    }
    goto skip_4;
    // 0x8027E9F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x8027E9F8: b           L_8027EB2C
    // 0x8027E9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027EB2C;
    // 0x8027E9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027EA00:
    // 0x8027EA00: jal         0x80318804
    // 0x8027EA04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_80318804(rdram, ctx);
        goto after_4;
    // 0x8027EA04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x8027EA08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027EA0C: bne         $v0, $at, L_8027EA68
    if (ctx->r2 != ctx->r1) {
        // 0x8027EA10: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_8027EA68;
    }
    // 0x8027EA10: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8027EA14: lw          $a0, 0x6EEC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X6EEC);
    // 0x8027EA18: beql        $a0, $zero, L_8027EA2C
    if (ctx->r4 == 0) {
        // 0x8027EA1C: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_8027EA2C;
    }
    goto skip_5;
    // 0x8027EA1C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    skip_5:
    // 0x8027EA20: jal         0x80317E10
    // 0x8027EA24: nop

    static_3_80317E10(rdram, ctx);
        goto after_5;
    // 0x8027EA24: nop

    after_5:
    // 0x8027EA28: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
L_8027EA2C:
    // 0x8027EA2C: lw          $a0, 0x6EF0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X6EF0);
    // 0x8027EA30: beql        $a0, $zero, L_8027EA44
    if (ctx->r4 == 0) {
        // 0x8027EA34: lw          $t1, 0x20($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X20);
            goto L_8027EA44;
    }
    goto skip_6;
    // 0x8027EA34: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    skip_6:
    // 0x8027EA38: jal         0x80317E10
    // 0x8027EA3C: nop

    static_3_80317E10(rdram, ctx);
        goto after_6;
    // 0x8027EA3C: nop

    after_6:
    // 0x8027EA40: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
L_8027EA44:
    // 0x8027EA44: lw          $a0, 0x6EF4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X6EF4);
    // 0x8027EA48: beql        $a0, $zero, L_8027EB2C
    if (ctx->r4 == 0) {
        // 0x8027EA4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027EB2C;
    }
    goto skip_7;
    // 0x8027EA4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_7:
    // 0x8027EA50: jal         0x80317E10
    // 0x8027EA54: nop

    static_3_80317E10(rdram, ctx);
        goto after_7;
    // 0x8027EA54: nop

    after_7:
    // 0x8027EA58: beql        $v0, $zero, L_8027EB2C
    if (ctx->r2 == 0) {
        // 0x8027EA5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027EB2C;
    }
    goto skip_8;
    // 0x8027EA5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
    // 0x8027EA60: b           L_8027EB2C
    // 0x8027EA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027EB2C;
    // 0x8027EA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027EA68:
    // 0x8027EA68: jal         0x80318804
    // 0x8027EA6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_80318804(rdram, ctx);
        goto after_8;
    // 0x8027EA6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_8:
    // 0x8027EA70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027EA74: bne         $v0, $at, L_8027EAD0
    if (ctx->r2 != ctx->r1) {
        // 0x8027EA78: lw          $t2, 0x20($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X20);
            goto L_8027EAD0;
    }
    // 0x8027EA78: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8027EA7C: lw          $a0, 0x6EEC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X6EEC);
    // 0x8027EA80: beql        $a0, $zero, L_8027EA94
    if (ctx->r4 == 0) {
        // 0x8027EA84: lw          $t3, 0x20($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X20);
            goto L_8027EA94;
    }
    goto skip_9;
    // 0x8027EA84: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    skip_9:
    // 0x8027EA88: jal         0x80317E10
    // 0x8027EA8C: nop

    static_3_80317E10(rdram, ctx);
        goto after_9;
    // 0x8027EA8C: nop

    after_9:
    // 0x8027EA90: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
L_8027EA94:
    // 0x8027EA94: lw          $a0, 0x6EF0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X6EF0);
    // 0x8027EA98: beql        $a0, $zero, L_8027EAAC
    if (ctx->r4 == 0) {
        // 0x8027EA9C: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_8027EAAC;
    }
    goto skip_10;
    // 0x8027EA9C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    skip_10:
    // 0x8027EAA0: jal         0x80317E10
    // 0x8027EAA4: nop

    static_3_80317E10(rdram, ctx);
        goto after_10;
    // 0x8027EAA4: nop

    after_10:
    // 0x8027EAA8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8027EAAC:
    // 0x8027EAAC: lw          $a0, 0x6EF4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X6EF4);
    // 0x8027EAB0: beql        $a0, $zero, L_8027EB2C
    if (ctx->r4 == 0) {
        // 0x8027EAB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027EB2C;
    }
    goto skip_11;
    // 0x8027EAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_11:
    // 0x8027EAB8: jal         0x80317E10
    // 0x8027EABC: nop

    static_3_80317E10(rdram, ctx);
        goto after_11;
    // 0x8027EABC: nop

    after_11:
    // 0x8027EAC0: beql        $v0, $zero, L_8027EB2C
    if (ctx->r2 == 0) {
        // 0x8027EAC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027EB2C;
    }
    goto skip_12;
    // 0x8027EAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_12:
    // 0x8027EAC8: b           L_8027EB2C
    // 0x8027EACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027EB2C;
    // 0x8027EACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027EAD0:
    // 0x8027EAD0: jal         0x80318804
    // 0x8027EAD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_80318804(rdram, ctx);
        goto after_12;
    // 0x8027EAD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_12:
    // 0x8027EAD8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027EADC: bne         $v0, $at, L_8027EB28
    if (ctx->r2 != ctx->r1) {
        // 0x8027EAE0: lw          $t5, 0x20($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X20);
            goto L_8027EB28;
    }
    // 0x8027EAE0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8027EAE4: lw          $a0, 0x6EEC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X6EEC);
    // 0x8027EAE8: beql        $a0, $zero, L_8027EAFC
    if (ctx->r4 == 0) {
        // 0x8027EAEC: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_8027EAFC;
    }
    goto skip_13;
    // 0x8027EAEC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    skip_13:
    // 0x8027EAF0: jal         0x80317E10
    // 0x8027EAF4: nop

    static_3_80317E10(rdram, ctx);
        goto after_13;
    // 0x8027EAF4: nop

    after_13:
    // 0x8027EAF8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_8027EAFC:
    // 0x8027EAFC: lw          $a0, 0x6EF0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X6EF0);
    // 0x8027EB00: beql        $a0, $zero, L_8027EB14
    if (ctx->r4 == 0) {
        // 0x8027EB04: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_8027EB14;
    }
    goto skip_14;
    // 0x8027EB04: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    skip_14:
    // 0x8027EB08: jal         0x80317E10
    // 0x8027EB0C: nop

    static_3_80317E10(rdram, ctx);
        goto after_14;
    // 0x8027EB0C: nop

    after_14:
    // 0x8027EB10: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
L_8027EB14:
    // 0x8027EB14: lw          $a0, 0x6EF4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X6EF4);
    // 0x8027EB18: beql        $a0, $zero, L_8027EB2C
    if (ctx->r4 == 0) {
        // 0x8027EB1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8027EB2C;
    }
    goto skip_15;
    // 0x8027EB1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_15:
    // 0x8027EB20: jal         0x80317E10
    // 0x8027EB24: nop

    static_3_80317E10(rdram, ctx);
        goto after_15;
    // 0x8027EB24: nop

    after_15:
L_8027EB28:
    // 0x8027EB28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027EB2C:
    // 0x8027EB2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027EB30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8027EB34: jr          $ra
    // 0x8027EB38: nop

    return;
    // 0x8027EB38: nop

;}
RECOMP_FUNC void D_8021DD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021DD94: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021DD98: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021DD9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021DDA0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021DDA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021DDA8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021DDAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021DDB0: blez        $v0, L_8021DDF8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021DDB4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021DDF8;
    }
    // 0x8021DDB4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021DDB8: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8021DDBC: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8021DDC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8021DDC4:
    // 0x8021DDC4: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8021DDC8: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8021DDCC: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8021DDD0: beql        $t8, $zero, L_8021DDEC
    if (ctx->r24 == 0) {
        // 0x8021DDD4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8021DDEC;
    }
    goto skip_0;
    // 0x8021DDD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8021DDD8: jal         0x8021E1BC
    // 0x8021DDDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8021E1BC(rdram, ctx);
        goto after_0;
    // 0x8021DDDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8021DDE0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021DDE4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021DDE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8021DDEC:
    // 0x8021DDEC: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021DDF0: bne         $at, $zero, L_8021DDC4
    if (ctx->r1 != 0) {
        // 0x8021DDF4: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_8021DDC4;
    }
    // 0x8021DDF4: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_8021DDF8:
    // 0x8021DDF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8021DDFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021DE00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021DE04: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021DE08: jr          $ra
    // 0x8021DE0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8021DE0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802A3940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A39C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A39C4: jr          $ra
    // 0x802A39C8: sb          $a1, 0x100($a0)
    MEM_B(0X100, ctx->r4) = ctx->r5;
    return;
    // 0x802A39C8: sb          $a1, 0x100($a0)
    MEM_B(0X100, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802A6800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6888: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A688C: beq         $a0, $zero, L_802A68C8
    if (ctx->r4 == 0) {
        // 0x802A6890: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802A68C8;
    }
    // 0x802A6890: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A6894: addiu       $a0, $a0, 0x258
    ctx->r4 = ADD32(ctx->r4, 0X258);
    // 0x802A6898: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802A689C: jal         0x8031D624
    // 0x802A68A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_8031D624(rdram, ctx);
        goto after_0;
    // 0x802A68A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802A68A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A68A8: jal         0x8031D770
    // 0x802A68AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031D770(rdram, ctx);
        goto after_1;
    // 0x802A68AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802A68B0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802A68B4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802A68B8: beql        $t7, $zero, L_802A68CC
    if (ctx->r15 == 0) {
        // 0x802A68BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A68CC;
    }
    goto skip_0;
    // 0x802A68BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A68C0: jal         0x802C681C
    // 0x802A68C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_802C681C(rdram, ctx);
        goto after_2;
    // 0x802A68C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_802A68C8:
    // 0x802A68C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A68CC:
    // 0x802A68CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A68D0: jr          $ra
    // 0x802A68D4: nop

    return;
    // 0x802A68D4: nop

;}
RECOMP_FUNC void D_802DED34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DEDB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DEDB8: jr          $ra
    // 0x802DEDBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802DEDBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_8023DA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DA44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023DA48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023DA4C: jal         0x80247060
    // 0x8023DA50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80247060(rdram, ctx);
        goto after_0;
    // 0x8023DA50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8023DA54: beq         $v0, $zero, L_8023DA6C
    if (ctx->r2 == 0) {
        // 0x8023DA58: nop
    
            goto L_8023DA6C;
    }
    // 0x8023DA58: nop

L_8023DA5C:
    // 0x8023DA5C: jal         0x80247060
    // 0x8023DA60: nop

    static_3_80247060(rdram, ctx);
        goto after_1;
    // 0x8023DA60: nop

    after_1:
    // 0x8023DA64: bne         $v0, $zero, L_8023DA5C
    if (ctx->r2 != 0) {
        // 0x8023DA68: nop
    
            goto L_8023DA5C;
    }
    // 0x8023DA68: nop

L_8023DA6C:
    // 0x8023DA6C: jal         0x80246F80
    // 0x8023DA70: addiu       $a0, $zero, 0x125
    ctx->r4 = ADD32(0, 0X125);
    func_80246F80(rdram, ctx);
        goto after_2;
    // 0x8023DA70: addiu       $a0, $zero, 0x125
    ctx->r4 = ADD32(0, 0X125);
    after_2:
    // 0x8023DA74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023DA78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023DA7C: jr          $ra
    // 0x8023DA80: nop

    return;
    // 0x8023DA80: nop

;}
RECOMP_FUNC void D_802A6218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A629C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A62A0: beq         $a0, $zero, L_802A62DC
    if (ctx->r4 == 0) {
        // 0x802A62A4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802A62DC;
    }
    // 0x802A62A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A62A8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A62AC: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802A62B0: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x802A62B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A62B8: jal         0x802D1A34
    // 0x802A62BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802D1A34(rdram, ctx);
        goto after_0;
    // 0x802A62BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A62C0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A62C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A62C8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A62CC: beql        $t8, $zero, L_802A62E0
    if (ctx->r24 == 0) {
        // 0x802A62D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A62E0;
    }
    goto skip_0;
    // 0x802A62D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802A62D4: jal         0x802C681C
    // 0x802A62D8: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802A62D8: nop

    after_1:
L_802A62DC:
    // 0x802A62DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A62E0:
    // 0x802A62E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A62E4: jr          $ra
    // 0x802A62E8: nop

    return;
    // 0x802A62E8: nop

;}
RECOMP_FUNC void D_802EF0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EF13C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EF140: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802EF144: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EF148: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x802EF14C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802EF150: lh          $t6, 0x78($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X78);
    // 0x802EF154: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802EF158: lw          $t9, 0x7C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X7C);
    // 0x802EF15C: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x802EF160: jalr        $t9
    // 0x802EF164: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802EF164: nop

    after_0:
    // 0x802EF168: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EF16C: jal         0x8031AC64
    // 0x802EF170: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    static_3_8031AC64(rdram, ctx);
        goto after_1;
    // 0x802EF170: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x802EF174: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x802EF178: sb          $zero, 0xAC($t7)
    MEM_B(0XAC, ctx->r15) = 0;
    // 0x802EF17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EF180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EF184: jr          $ra
    // 0x802EF188: nop

    return;
    // 0x802EF188: nop

;}
RECOMP_FUNC void D_802EF43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF4BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EF4C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EF4C4: beq         $a0, $zero, L_802EF4F4
    if (ctx->r4 == 0) {
        // 0x802EF4C8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EF4F4;
    }
    // 0x802EF4C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EF4CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EF4D0: jal         0x8031F6B0
    // 0x802EF4D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031F6B0(rdram, ctx);
        goto after_0;
    // 0x802EF4D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EF4D8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EF4DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EF4E0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EF4E4: beql        $t7, $zero, L_802EF4F8
    if (ctx->r15 == 0) {
        // 0x802EF4E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EF4F8;
    }
    goto skip_0;
    // 0x802EF4E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EF4EC: jal         0x802C681C
    // 0x802EF4F0: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EF4F0: nop

    after_1:
L_802EF4F4:
    // 0x802EF4F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EF4F8:
    // 0x802EF4F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EF4FC: jr          $ra
    // 0x802EF500: nop

    return;
    // 0x802EF500: nop

;}
RECOMP_FUNC void D_80238704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238704: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80238708: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8023870C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80238710: lw          $t7, 0x40($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X40);
    // 0x80238714: ldc1        $f6, 0x0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X0);
    // 0x80238718: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8023871C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80238720: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80238724: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80238728: bgez        $t7, L_80238740
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8023872C: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_80238740;
    }
    // 0x8023872C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80238730: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80238734: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80238738: nop

    // 0x8023873C: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_80238740:
    // 0x80238740: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x80238744: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80238748: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8023874C: bgez        $a2, L_80238764
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80238750: cvt.d.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
            goto L_80238764;
    }
    // 0x80238750: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x80238754: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80238758: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8023875C: nop

    // 0x80238760: add.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f10.d + ctx->f18.d;
L_80238764:
    // 0x80238764: div.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x80238768: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023876C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80238770: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80238774: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80238778: nop

    // 0x8023877C: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x80238780: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80238784: nop

    // 0x80238788: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8023878C: beql        $v0, $zero, L_802387E8
    if (ctx->r2 == 0) {
        // 0x80238790: mfc1        $v0, $f16
        ctx->r2 = (int32_t)ctx->f16.u32l;
            goto L_802387E8;
    }
    goto skip_0;
    // 0x80238790: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x80238794: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80238798: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8023879C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802387A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802387A4: sub.d       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f8.d - ctx->f16.d;
    // 0x802387A8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x802387AC: nop

    // 0x802387B0: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x802387B4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x802387B8: nop

    // 0x802387BC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x802387C0: bnel        $v0, $zero, L_802387DC
    if (ctx->r2 != 0) {
        // 0x802387C4: ctc1        $t8, $FpcCsr
        set_cop1_cs(ctx->r24);
            goto L_802387DC;
    }
    goto skip_1;
    // 0x802387C4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    skip_1:
    // 0x802387C8: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802387CC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802387D0: jr          $ra
    // 0x802387D4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    return;
    // 0x802387D4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x802387D8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
L_802387DC:
    // 0x802387DC: jr          $ra
    // 0x802387E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x802387E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802387E4: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
L_802387E8:
    // 0x802387E8: nop

    // 0x802387EC: bltzl       $v0, L_802387DC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802387F0: ctc1        $t8, $FpcCsr
        set_cop1_cs(ctx->r24);
            goto L_802387DC;
    }
    goto skip_2;
    // 0x802387F0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    skip_2:
    // 0x802387F4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802387F8: jr          $ra
    // 0x802387FC: nop

    return;
    // 0x802387FC: nop

;}
RECOMP_FUNC void D_802D2D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2E1C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802D2E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2E28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D2E2C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x802D2E30: jal         0x8030303C
    // 0x802D2E34: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    static_3_8030303C(rdram, ctx);
        goto after_0;
    // 0x802D2E34: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    after_0:
    // 0x802D2E38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802D2E3C: bnel        $v0, $at, L_802D2E58
    if (ctx->r2 != ctx->r1) {
        // 0x802D2E40: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802D2E58;
    }
    goto skip_0;
    // 0x802D2E40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x802D2E44: jal         0x8030336C
    // 0x802D2E48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    static_3_8030336C(rdram, ctx);
        goto after_1;
    // 0x802D2E48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x802D2E4C: b           L_802D2E5C
    // 0x802D2E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D2E5C;
    // 0x802D2E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2E54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D2E58:
    // 0x802D2E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D2E5C:
    // 0x802D2E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2E60: jr          $ra
    // 0x802D2E64: nop

    return;
    // 0x802D2E64: nop

;}
RECOMP_FUNC void D_8027BEAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027BF24: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8027BF28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027BF2C: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x8027BF30: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8027BF34: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8027BF38: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8027BF3C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8027BF40: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8027BF44: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x8027BF48: jal         0x8023072C
    // 0x8027BF4C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    static_3_8023072C(rdram, ctx);
        goto after_0;
    // 0x8027BF4C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8027BF50: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BF54: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027BF58: jal         0x80231A24
    // 0x8027BF5C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8027BF5C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8027BF60: jal         0x802AF7EC
    // 0x8027BF64: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    static_3_802AF7EC(rdram, ctx);
        goto after_2;
    // 0x8027BF64: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    after_2:
    // 0x8027BF68: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027BF6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027BF70: jal         0x8030BF68
    // 0x8027BF74: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    static_3_8030BF68(rdram, ctx);
        goto after_3;
    // 0x8027BF74: sb          $t6, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r14;
    after_3:
    // 0x8027BF78: jal         0x80205358
    // 0x8027BF7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80205358(rdram, ctx);
        goto after_4;
    // 0x8027BF7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8027BF80: jal         0x80205528
    // 0x8027BF84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80205528(rdram, ctx);
        goto after_5;
    // 0x8027BF84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x8027BF88: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8027BF8C: jal         0x80231A24
    // 0x8027BF90: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x8027BF90: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x8027BF94: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x8027BF98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027BF9C: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x8027BFA0: jal         0x802A9C04
    // 0x8027BFA4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    static_3_802A9C04(rdram, ctx);
        goto after_7;
    // 0x8027BFA4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    after_7:
    // 0x8027BFA8: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x8027BFAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8027BFB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027BFB4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027BFB8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027BFBC: sw          $t8, 0x32A4($t9)
    MEM_W(0X32A4, ctx->r25) = ctx->r24;
    // 0x8027BFC0: swc1        $f4, 0x32B0($t9)
    MEM_W(0X32B0, ctx->r25) = ctx->f4.u32l;
    // 0x8027BFC4: sb          $zero, 0x0($at)
    MEM_B(0X0, ctx->r1) = 0;
    // 0x8027BFC8: jal         0x8030AD4C
    // 0x8027BFCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8030AD4C(rdram, ctx);
        goto after_8;
    // 0x8027BFCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x8027BFD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027BFD4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x8027BFD8: jr          $ra
    // 0x8027BFDC: nop

    return;
    // 0x8027BFDC: nop

;}
RECOMP_FUNC void D_8022D510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D510: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022D514: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022D518: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D51C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8022D520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D524: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8022D528: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8022D52C: beq         $t6, $zero, L_8022D620
    if (ctx->r14 == 0) {
        // 0x8022D530: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8022D620;
    }
    // 0x8022D530: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    // 0x8022D534: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022D538: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8022D53C: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x8022D540: addu        $a1, $v0, $t7
    ctx->r5 = ADD32(ctx->r2, ctx->r15);
    // 0x8022D544: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022D548: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022D54C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8022D550: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    // 0x8022D554: beq         $at, $zero, L_8022D620
    if (ctx->r1 == 0) {
        // 0x8022D558: addu        $a2, $v0, $t8
        ctx->r6 = ADD32(ctx->r2, ctx->r24);
            goto L_8022D620;
    }
    // 0x8022D558: addu        $a2, $v0, $t8
    ctx->r6 = ADD32(ctx->r2, ctx->r24);
    // 0x8022D55C: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8022D560: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x8022D564: slti        $at, $a0, 0x3C
    ctx->r1 = SIGNED(ctx->r4) < 0X3C ? 1 : 0;
    // 0x8022D568: beql        $at, $zero, L_8022D624
    if (ctx->r1 == 0) {
        // 0x8022D56C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022D624;
    }
    goto skip_0;
    // 0x8022D56C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022D570: bne         $t9, $zero, L_8022D5A0
    if (ctx->r25 != 0) {
        // 0x8022D574: sll         $t0, $v1, 4
        ctx->r8 = S32(ctx->r3 << 4);
            goto L_8022D5A0;
    }
    // 0x8022D574: sll         $t0, $v1, 4
    ctx->r8 = S32(ctx->r3 << 4);
    // 0x8022D578: sll         $t1, $a3, 4
    ctx->r9 = S32(ctx->r7 << 4);
    // 0x8022D57C: subu        $t1, $t1, $a3
    ctx->r9 = SUB32(ctx->r9, ctx->r7);
    // 0x8022D580: sll         $t1, $t1, 6
    ctx->r9 = S32(ctx->r9 << 6);
    // 0x8022D584: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8022D588: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x8022D58C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8022D590: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x8022D594: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x8022D598: b           L_8022D5C8
    // 0x8022D59C: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
        goto L_8022D5C8;
    // 0x8022D59C: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
L_8022D5A0:
    // 0x8022D5A0: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x8022D5A4: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x8022D5A8: sll         $t6, $t6, 6
    ctx->r14 = S32(ctx->r14 << 6);
    // 0x8022D5AC: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x8022D5B0: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022D5B4: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x8022D5B8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8022D5BC: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x8022D5C0: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8022D5C4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8022D5C8:
    // 0x8022D5C8: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    // 0x8022D5CC: jal         0x80207130
    // 0x8022D5D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x8022D5D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022D5D4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D5D8: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8022D5DC: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8022D5E0: sdc1        $f0, 0x0($v0)
    CHECK_FR(ctx, 0);
    SD(ctx->f0.u64, 0X0, ctx->r2);
    // 0x8022D5E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8022D5E8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022D5EC: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8022D5F0: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x8022D5F4: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x8022D5F8: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x8022D5FC: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x8022D600: lbu         $t9, 0x0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X0);
    // 0x8022D604: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8022D608: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x8022D60C: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8022D610: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8022D614: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x8022D618: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x8022D61C: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
L_8022D620:
    // 0x8022D620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022D624:
    // 0x8022D624: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022D628: jr          $ra
    // 0x8022D62C: nop

    return;
    // 0x8022D62C: nop

;}
RECOMP_FUNC void D_802F24A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2520: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x802F2524: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802F2528: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802F252C: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x802F2530: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802F2534: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802F2538: lbu         $t6, 0xC08($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XC08);
    // 0x802F253C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802F2540: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x802F2544: beq         $t6, $zero, L_802F27D8
    if (ctx->r14 == 0) {
        // 0x802F2548: swc1        $f6, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
            goto L_802F27D8;
    }
    // 0x802F2548: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x802F254C: lw          $v0, 0x210($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X210);
    // 0x802F2550: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x802F2554: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x802F2558: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802F255C: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    // 0x802F2560: jalr        $t9
    // 0x802F2564: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802F2564: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802F2568: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x802F256C: jal         0x80228DE0
    // 0x802F2570: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x802F2570: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x802F2574: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x802F2578: lw          $a1, 0x544C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X544C);
    // 0x802F257C: jal         0x802D01D4
    // 0x802F2580: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802F2580: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_2:
    // 0x802F2584: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x802F2588: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802F258C: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x802F2590: jal         0x8022A0D0
    // 0x802F2594: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_3;
    // 0x802F2594: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_3:
    // 0x802F2598: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802F259C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F25A0: addiu       $a1, $s0, 0x70
    ctx->r5 = ADD32(ctx->r16, 0X70);
    // 0x802F25A4: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x802F25A8: lw          $a3, 0xB8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB8);
    // 0x802F25AC: jal         0x802AFF70
    // 0x802F25B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    static_3_802AFF70(rdram, ctx);
        goto after_4;
    // 0x802F25B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x802F25B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F25B8: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F25BC: lwc1        $f10, 0x544C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X544C);
    // 0x802F25C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F25C4: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802F25C8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802F25CC: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802F25D0: swc1        $f18, 0x544C($s0)
    MEM_W(0X544C, ctx->r16) = ctx->f18.u32l;
    // 0x802F25D4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F25D8: lwc1        $f4, 0x544C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X544C);
    // 0x802F25DC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802F25E0: nop

    // 0x802F25E4: bc1fl       L_802F2700
    if (!c1cs) {
        // 0x802F25E8: lbu         $t1, 0x5451($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X5451);
            goto L_802F2700;
    }
    goto skip_0;
    // 0x802F25E8: lbu         $t1, 0x5451($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5451);
    skip_0:
    // 0x802F25EC: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x802F25F0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802F25F4: bnel        $t8, $zero, L_802F2700
    if (ctx->r24 != 0) {
        // 0x802F25F8: lbu         $t1, 0x5451($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X5451);
            goto L_802F2700;
    }
    goto skip_1;
    // 0x802F25F8: lbu         $t1, 0x5451($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5451);
    skip_1:
    // 0x802F25FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F2600: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x802F2604: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802F2608: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x802F260C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802F2610: nop

    // 0x802F2614: bc1fl       L_802F2694
    if (!c1cs) {
        // 0x802F2618: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_802F2694;
    }
    goto skip_2;
    // 0x802F2618: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_2:
    // 0x802F261C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2620: jal         0x80302980
    // 0x802F2624: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_5;
    // 0x802F2624: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802F2628: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F262C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F2630: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F2634: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x802F2638: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F263C: jal         0x80302988
    // 0x802F2640: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_6;
    // 0x802F2640: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802F2644: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2648: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F264C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F2650: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    // 0x802F2654: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F2658: jal         0x80302988
    // 0x802F265C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_7;
    // 0x802F265C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802F2660: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2664: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F2668: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F266C: addiu       $a1, $zero, 0x8F
    ctx->r5 = ADD32(0, 0X8F);
    // 0x802F2670: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F2674: jal         0x80302988
    // 0x802F2678: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_8;
    // 0x802F2678: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802F267C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2680: jal         0x80302A7C
    // 0x802F2684: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_9;
    // 0x802F2684: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_9:
    // 0x802F2688: b           L_802F2700
    // 0x802F268C: lbu         $t1, 0x5451($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5451);
        goto L_802F2700;
    // 0x802F268C: lbu         $t1, 0x5451($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5451);
    // 0x802F2690: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_802F2694:
    // 0x802F2694: jal         0x80302980
    // 0x802F2698: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_10;
    // 0x802F2698: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_10:
    // 0x802F269C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F26A0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F26A4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F26A8: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x802F26AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F26B0: jal         0x80302988
    // 0x802F26B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_11;
    // 0x802F26B4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_11:
    // 0x802F26B8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F26BC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F26C0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F26C4: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    // 0x802F26C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F26CC: jal         0x80302988
    // 0x802F26D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_12;
    // 0x802F26D0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_12:
    // 0x802F26D4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F26D8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F26DC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F26E0: addiu       $a1, $zero, 0xCA
    ctx->r5 = ADD32(0, 0XCA);
    // 0x802F26E4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F26E8: jal         0x80302988
    // 0x802F26EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_13;
    // 0x802F26EC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_13:
    // 0x802F26F0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F26F4: jal         0x80302A7C
    // 0x802F26F8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_14;
    // 0x802F26F8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_14:
    // 0x802F26FC: lbu         $t1, 0x5451($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5451);
L_802F2700:
    // 0x802F2700: lwc1        $f12, 0xCC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x802F2704: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802F2708: bne         $t1, $zero, L_802F277C
    if (ctx->r9 != 0) {
        // 0x802F270C: lwc1        $f16, 0xCC($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
            goto L_802F277C;
    }
    // 0x802F270C: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x802F2710: sb          $t2, 0x5451($s0)
    MEM_B(0X5451, ctx->r16) = ctx->r10;
    // 0x802F2714: jal         0x80309740
    // 0x802F2718: swc1        $f12, 0x5454($s0)
    MEM_W(0X5454, ctx->r16) = ctx->f12.u32l;
    static_3_80309740(rdram, ctx);
        goto after_15;
    // 0x802F2718: swc1        $f12, 0x5454($s0)
    MEM_W(0X5454, ctx->r16) = ctx->f12.u32l;
    after_15:
    // 0x802F271C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2720: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x802F2724: lui         $at, 0x4561
    ctx->r1 = S32(0X4561 << 16);
    // 0x802F2728: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802F272C: addiu       $v1, $a0, 0x6D0
    ctx->r3 = ADD32(ctx->r4, 0X6D0);
    // 0x802F2730: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802F2734: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x802F2738: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802F273C: swc1        $f18, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f18.u32l;
    // 0x802F2740: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2744: lwc1        $f4, 0x32AC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802F2748: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802F274C: nop

    // 0x802F2750: bc1fl       L_802F27DC
    if (!c1cs) {
        // 0x802F2754: lbu         $t7, 0x5458($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X5458);
            goto L_802F27DC;
    }
    goto skip_3;
    // 0x802F2754: lbu         $t7, 0x5458($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X5458);
    skip_3:
    // 0x802F2758: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802F275C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802F2760: nop

    // 0x802F2764: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x802F2768: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802F276C: jal         0x802B0078
    // 0x802F2770: nop

    static_3_802B0078(rdram, ctx);
        goto after_16;
    // 0x802F2770: nop

    after_16:
    // 0x802F2774: b           L_802F27DC
    // 0x802F2778: lbu         $t7, 0x5458($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X5458);
        goto L_802F27DC;
    // 0x802F2778: lbu         $t7, 0x5458($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X5458);
L_802F277C:
    // 0x802F277C: lwc1        $f18, 0x5454($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X5454);
    // 0x802F2780: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802F2784: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802F2788: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802F278C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x802F2790: nop

    // 0x802F2794: bc1fl       L_802F27DC
    if (!c1cs) {
        // 0x802F2798: lbu         $t7, 0x5458($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X5458);
            goto L_802F27DC;
    }
    goto skip_4;
    // 0x802F2798: lbu         $t7, 0x5458($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X5458);
    skip_4:
    // 0x802F279C: lbu         $t3, 0x5450($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X5450);
    // 0x802F27A0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802F27A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F27A8: bne         $t3, $zero, L_802F27D8
    if (ctx->r11 != 0) {
        // 0x802F27AC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802F27D8;
    }
    // 0x802F27AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F27B0: sb          $t4, 0x5450($s0)
    MEM_B(0X5450, ctx->r16) = ctx->r12;
    // 0x802F27B4: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x802F27B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802F27BC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802F27C0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802F27C4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x802F27C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802F27CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802F27D0: jal         0x8030890C
    // 0x802F27D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8030890C(rdram, ctx);
        goto after_17;
    // 0x802F27D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
L_802F27D8:
    // 0x802F27D8: lbu         $t7, 0x5458($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X5458);
L_802F27DC:
    // 0x802F27DC: bnel        $t7, $zero, L_802F2840
    if (ctx->r15 != 0) {
        // 0x802F27E0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802F2840;
    }
    goto skip_5;
    // 0x802F27E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_5:
    // 0x802F27E4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F27E8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F27EC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802F27F0: lwc1        $f6, 0x32A8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X32A8);
    // 0x802F27F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802F27F8: lui         $a1, 0x4561
    ctx->r5 = S32(0X4561 << 16);
    // 0x802F27FC: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x802F2800: nop

    // 0x802F2804: bc1fl       L_802F2840
    if (!c1cs) {
        // 0x802F2808: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802F2840;
    }
    goto skip_6;
    // 0x802F2808: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_6:
    // 0x802F280C: jal         0x802B0078
    // 0x802F2810: sb          $t9, 0x5458($s0)
    MEM_B(0X5458, ctx->r16) = ctx->r25;
    static_3_802B0078(rdram, ctx);
        goto after_18;
    // 0x802F2810: sb          $t9, 0x5458($s0)
    MEM_B(0X5458, ctx->r16) = ctx->r25;
    after_18:
    // 0x802F2814: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2818: jal         0x802AEDEC
    // 0x802F281C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_19;
    // 0x802F281C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x802F2820: lw          $t8, 0x78($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X78);
    // 0x802F2824: lw          $t1, 0x248($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X248);
    // 0x802F2828: addiu       $v1, $zero, -0x5
    ctx->r3 = ADD32(0, -0X5);
    // 0x802F282C: and         $t0, $t8, $v1
    ctx->r8 = ctx->r24 & ctx->r3;
    // 0x802F2830: and         $t2, $t1, $v1
    ctx->r10 = ctx->r9 & ctx->r3;
    // 0x802F2834: sw          $t0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r8;
    // 0x802F2838: sw          $t2, 0x248($v0)
    MEM_W(0X248, ctx->r2) = ctx->r10;
    // 0x802F283C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802F2840:
    // 0x802F2840: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802F2844: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x802F2848: jr          $ra
    // 0x802F284C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802F284C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8023447C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023447C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80234480: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80234484: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80234488: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8023448C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80234490: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80234494: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80234498: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8023449C: jr          $ra
    // 0x802344A0: lh          $v0, 0x6($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X6);
    return;
    // 0x802344A0: lh          $v0, 0x6($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X6);
;}
RECOMP_FUNC void D_80236DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80236DE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80236DE8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80236DEC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80236DF0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80236DF4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80236DF8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80236DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80236E00: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80236E04: addiu       $at, $zero, 0x4231
    ctx->r1 = ADD32(0, 0X4231);
    // 0x80236E08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80236E0C: bne         $t6, $at, L_80236EC8
    if (ctx->r14 != ctx->r1) {
        // 0x80236E10: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_80236EC8;
    }
    // 0x80236E10: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80236E14: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x80236E18: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80236E1C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80236E20: blez        $t7, L_80236EC8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80236E24: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_80236EC8;
    }
    // 0x80236E24: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80236E28: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
L_80236E2C:
    // 0x80236E2C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80236E30: beq         $t9, $zero, L_80236EB0
    if (ctx->r25 == 0) {
        // 0x80236E34: sw          $t9, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->r25;
            goto L_80236EB0;
    }
    // 0x80236E34: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x80236E38: lbu         $t6, 0x2($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X2);
    // 0x80236E3C: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x80236E40: bnel        $t6, $zero, L_80236EB4
    if (ctx->r14 != 0) {
        // 0x80236E44: lh          $t8, 0x2($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X2);
            goto L_80236EB4;
    }
    goto skip_0;
    // 0x80236E44: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    skip_0:
    // 0x80236E48: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
    // 0x80236E4C: sb          $s4, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r20;
    // 0x80236E50: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x80236E54: beq         $v0, $zero, L_80236E6C
    if (ctx->r2 == 0) {
        // 0x80236E58: addu        $a0, $v0, $s0
        ctx->r4 = ADD32(ctx->r2, ctx->r16);
            goto L_80236E6C;
    }
    // 0x80236E58: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80236E5C: sw          $a0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r4;
    // 0x80236E60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80236E64: jal         0x80236D40
    // 0x80236E68: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_80236D40(rdram, ctx);
        goto after_0;
    // 0x80236E68: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_0:
L_80236E6C:
    // 0x80236E6C: lh          $t8, 0x0($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X0);
    // 0x80236E70: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
    // 0x80236E74: blezl       $t8, L_80236EB4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80236E78: lh          $t8, 0x2($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X2);
            goto L_80236EB4;
    }
    goto skip_1;
    // 0x80236E78: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    skip_1:
    // 0x80236E7C: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
L_80236E80:
    // 0x80236E80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80236E84: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x80236E88: beq         $a0, $zero, L_80236E98
    if (ctx->r4 == 0) {
        // 0x80236E8C: sw          $a0, 0xC($t3)
        MEM_W(0XC, ctx->r11) = ctx->r4;
            goto L_80236E98;
    }
    // 0x80236E8C: sw          $a0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r4;
    // 0x80236E90: jal         0x80236D40
    // 0x80236E94: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_80236D40(rdram, ctx);
        goto after_1;
    // 0x80236E94: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
L_80236E98:
    // 0x80236E98: lh          $t7, 0x0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X0);
    // 0x80236E9C: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80236EA0: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x80236EA4: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80236EA8: bnel        $at, $zero, L_80236E80
    if (ctx->r1 != 0) {
        // 0x80236EAC: lw          $t9, 0xC($t3)
        ctx->r25 = MEM_W(ctx->r11, 0XC);
            goto L_80236E80;
    }
    goto skip_2;
    // 0x80236EAC: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
    skip_2:
L_80236EB0:
    // 0x80236EB0: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
L_80236EB4:
    // 0x80236EB4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80236EB8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80236EBC: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80236EC0: bnel        $at, $zero, L_80236E2C
    if (ctx->r1 != 0) {
        // 0x80236EC4: lw          $t8, 0x4($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X4);
            goto L_80236E2C;
    }
    goto skip_3;
    // 0x80236EC4: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    skip_3:
L_80236EC8:
    // 0x80236EC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80236ECC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80236ED0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80236ED4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80236ED8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80236EDC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80236EE0: jr          $ra
    // 0x80236EE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80236EE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_80285C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285D14: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x80285D18: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x80285D1C: sll         $s3, $a2, 16
    ctx->r19 = S32(ctx->r6 << 16);
    // 0x80285D20: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80285D24: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80285D28: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x80285D2C: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x80285D30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80285D34: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80285D38: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80285D3C: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x80285D40: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x80285D44: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x80285D48: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x80285D4C: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x80285D50: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x80285D54: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80285D58: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80285D5C: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x80285D60: jal         0x8022331C
    // 0x80285D64: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x80285D64: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    after_0:
    // 0x80285D68: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80285D6C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x80285D70: jal         0x80228DE0
    // 0x80285D74: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80285D74: addiu       $a1, $a1, 0x7174
    ctx->r5 = ADD32(ctx->r5, 0X7174);
    after_1:
    // 0x80285D78: sll         $s1, $s3, 5
    ctx->r17 = S32(ctx->r19 << 5);
    // 0x80285D7C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80285D80: addiu       $t9, $s1, 0x50
    ctx->r25 = ADD32(ctx->r17, 0X50);
    // 0x80285D84: div         $zero, $t9, $v0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r2)));
    // 0x80285D88: mfhi        $t0
    ctx->r8 = hi;
    // 0x80285D8C: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80285D90: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x80285D94: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x80285D98: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80285D9C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    // 0x80285DA0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80285DA4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80285DA8: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x80285DAC: bne         $v0, $zero, L_80285DB8
    if (ctx->r2 != 0) {
        // 0x80285DB0: nop
    
            goto L_80285DB8;
    }
    // 0x80285DB0: nop

    // 0x80285DB4: break       7
    do_break(2150129076);
L_80285DB8:
    // 0x80285DB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80285DBC: bne         $v0, $at, L_80285DD0
    if (ctx->r2 != ctx->r1) {
        // 0x80285DC0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80285DD0;
    }
    // 0x80285DC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80285DC4: bne         $t9, $at, L_80285DD0
    if (ctx->r25 != ctx->r1) {
        // 0x80285DC8: nop
    
            goto L_80285DD0;
    }
    // 0x80285DC8: nop

    // 0x80285DCC: break       6
    do_break(2150129100);
L_80285DD0:
    // 0x80285DD0: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x80285DD4: div         $zero, $t1, $v0
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r2)));
    // 0x80285DD8: mfhi        $t2
    ctx->r10 = hi;
    // 0x80285DDC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80285DE0: bne         $v0, $zero, L_80285DEC
    if (ctx->r2 != 0) {
        // 0x80285DE4: nop
    
            goto L_80285DEC;
    }
    // 0x80285DE4: nop

    // 0x80285DE8: break       7
    do_break(2150129128);
L_80285DEC:
    // 0x80285DEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80285DF0: bne         $v0, $at, L_80285E04
    if (ctx->r2 != ctx->r1) {
        // 0x80285DF4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80285E04;
    }
    // 0x80285DF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80285DF8: bne         $t1, $at, L_80285E04
    if (ctx->r9 != ctx->r1) {
        // 0x80285DFC: nop
    
            goto L_80285E04;
    }
    // 0x80285DFC: nop

    // 0x80285E00: break       6
    do_break(2150129152);
L_80285E04:
    // 0x80285E04: bgez        $t2, L_80285E14
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80285E08: sra         $t3, $t2, 5
        ctx->r11 = S32(SIGNED(ctx->r10) >> 5);
            goto L_80285E14;
    }
    // 0x80285E08: sra         $t3, $t2, 5
    ctx->r11 = S32(SIGNED(ctx->r10) >> 5);
    // 0x80285E0C: addiu       $at, $t2, 0x1F
    ctx->r1 = ADD32(ctx->r10, 0X1F);
    // 0x80285E10: sra         $t3, $at, 5
    ctx->r11 = S32(SIGNED(ctx->r1) >> 5);
L_80285E14:
    // 0x80285E14: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80285E18: div         $zero, $t4, $s5
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r21)));
    // 0x80285E1C: mfhi        $t5
    ctx->r13 = hi;
    // 0x80285E20: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80285E24: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80285E28: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80285E2C: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x80285E30: lh          $t0, 0x0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X0);
    // 0x80285E34: bne         $s5, $zero, L_80285E40
    if (ctx->r21 != 0) {
        // 0x80285E38: nop
    
            goto L_80285E40;
    }
    // 0x80285E38: nop

    // 0x80285E3C: break       7
    do_break(2150129212);
L_80285E40:
    // 0x80285E40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80285E44: bne         $s5, $at, L_80285E58
    if (ctx->r21 != ctx->r1) {
        // 0x80285E48: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80285E58;
    }
    // 0x80285E48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80285E4C: bne         $t4, $at, L_80285E58
    if (ctx->r12 != ctx->r1) {
        // 0x80285E50: nop
    
            goto L_80285E58;
    }
    // 0x80285E50: nop

    // 0x80285E54: break       6
    do_break(2150129236);
L_80285E58:
    // 0x80285E58: bgez        $t0, L_80285E78
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80285E5C: nop
    
            goto L_80285E78;
    }
    // 0x80285E5C: nop

    // 0x80285E60: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80285E64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80285E68: jal         0x8021E708
    // 0x80285E6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8021E708(rdram, ctx);
        goto after_2;
    // 0x80285E6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80285E70: b           L_80285E84
    // 0x80285E74: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
        goto L_80285E84;
    // 0x80285E74: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
L_80285E78:
    // 0x80285E78: jal         0x8021E708
    // 0x80285E7C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    static_3_8021E708(rdram, ctx);
        goto after_3;
    // 0x80285E7C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_3:
    // 0x80285E80: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
L_80285E84:
    // 0x80285E84: addiu       $s3, $sp, 0xC0
    ctx->r19 = ADD32(ctx->r29, 0XC0);
    // 0x80285E88: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80285E8C: blez        $v0, L_80285E9C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80285E90: lui         $a1, 0x0
        ctx->r5 = S32(0X0 << 16);
            goto L_80285E9C;
    }
    // 0x80285E90: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80285E94: b           L_80285EA0
    // 0x80285E98: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_80285EA0;
    // 0x80285E98: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_80285E9C:
    // 0x80285E9C: negu        $a2, $v0
    ctx->r6 = SUB32(0, ctx->r2);
L_80285EA0:
    // 0x80285EA0: jal         0x8023072C
    // 0x80285EA4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_8023072C(rdram, ctx);
        goto after_4;
    // 0x80285EA4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_4:
    // 0x80285EA8: jal         0x8021E83C
    // 0x80285EAC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_8021E83C(rdram, ctx);
        goto after_5;
    // 0x80285EAC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
    // 0x80285EB0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80285EB4: sra         $t1, $v1, 16
    ctx->r9 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80285EB8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80285EBC: addu        $t3, $s2, $s1
    ctx->r11 = ADD32(ctx->r18, ctx->r17);
    // 0x80285EC0: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x80285EC4: addiu       $t6, $zero, 0x33
    ctx->r14 = ADD32(0, 0X33);
    // 0x80285EC8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x80285ECC: bgez        $v1, L_80285EDC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80285ED0: sra         $t2, $v1, 1
        ctx->r10 = S32(SIGNED(ctx->r3) >> 1);
            goto L_80285EDC;
    }
    // 0x80285ED0: sra         $t2, $v1, 1
    ctx->r10 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80285ED4: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x80285ED8: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_80285EDC:
    // 0x80285EDC: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x80285EE0: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x80285EE4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x80285EE8: mfhi        $t5
    ctx->r13 = hi;
    // 0x80285EEC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80285EF0: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80285EF4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80285EF8: subu        $t7, $t6, $t5
    ctx->r15 = SUB32(ctx->r14, ctx->r13);
    // 0x80285EFC: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80285F00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80285F04: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80285F08: cvt.s.w     $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    ctx->f22.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80285F0C: lui         $at, 0x4258
    ctx->r1 = S32(0X4258 << 16);
    // 0x80285F10: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80285F14: addiu       $s2, $sp, 0xD4
    ctx->r18 = ADD32(ctx->r29, 0XD4);
    // 0x80285F18: addiu       $s1, $sp, 0xC8
    ctx->r17 = ADD32(ctx->r29, 0XC8);
    // 0x80285F1C: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
L_80285F20:
    // 0x80285F20: swc1        $f22, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f22.u32l;
    // 0x80285F24: swc1        $f26, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f26.u32l;
    // 0x80285F28: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80285F2C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80285F30: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80285F34: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80285F38: mul.s       $f4, $f24, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x80285F3C: jal         0x8022A4F4
    // 0x80285F40: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    static_3_8022A4F4(rdram, ctx);
        goto after_6;
    // 0x80285F40: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80285F44: lwc1        $f0, 0xC8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80285F48: lwc1        $f2, 0xCC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80285F4C: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80285F50: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80285F54: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80285F58: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80285F5C: add.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x80285F60: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x80285F64: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x80285F68: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x80285F6C: sub.s       $f18, $f2, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f28.fl;
    // 0x80285F70: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80285F74: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80285F78: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x80285F7C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80285F80: jal         0x8021E87C
    // 0x80285F84: nop

    static_3_8021E87C(rdram, ctx);
        goto after_7;
    // 0x80285F84: nop

    after_7:
    // 0x80285F88: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80285F8C: bnel        $s0, $s5, L_80285F20
    if (ctx->r16 != ctx->r21) {
        // 0x80285F90: mtc1        $s0, $f16
        ctx->f16.u32l = ctx->r16;
            goto L_80285F20;
    }
    goto skip_0;
    // 0x80285F90: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    skip_0:
    // 0x80285F94: jal         0x8022337C
    // 0x80285F98: nop

    static_3_8022337C(rdram, ctx);
        goto after_8;
    // 0x80285F98: nop

    after_8:
    // 0x80285F9C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80285FA0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80285FA4: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80285FA8: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x80285FAC: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x80285FB0: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x80285FB4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80285FB8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80285FBC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x80285FC0: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x80285FC4: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x80285FC8: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x80285FCC: jr          $ra
    // 0x80285FD0: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x80285FD0: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void D_80282D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282DE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282DEC: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x80282DF0: sh          $zero, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = 0;
    // 0x80282DF4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80282DF8: lh          $t6, 0x50($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X50);
    // 0x80282DFC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80282E00: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80282E04: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80282E08: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x80282E0C: jalr        $t9
    // 0x80282E10: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80282E10: nop

    after_0:
    // 0x80282E14: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80282E18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80282E1C: lw          $v0, 0x1A0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1A0);
    // 0x80282E20: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x80282E24: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80282E28: addu        $a0, $t7, $a2
    ctx->r4 = ADD32(ctx->r15, ctx->r6);
    // 0x80282E2C: jalr        $t9
    // 0x80282E30: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80282E30: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    after_1:
    // 0x80282E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282E3C: jr          $ra
    // 0x80282E40: nop

    return;
    // 0x80282E40: nop

;}
RECOMP_FUNC void func_80223840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223840: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
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
        goto after_0;
    // 0x8022385C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
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
        goto after_1;
    // 0x80223878: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x8022387C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80223880: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80223884: jal         0x80223C3C
    // 0x80223888: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    static_3_80223C3C(rdram, ctx);
        goto after_2;
    // 0x80223888: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    after_2:
    // 0x8022388C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80223890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80223894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80223898: jr          $ra
    // 0x8022389C: nop

    return;
    // 0x8022389C: nop

;}
RECOMP_FUNC void D_80277E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277ED0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80277ED4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80277ED8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80277EDC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80277EE0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80277EE4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80277EE8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80277EEC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80277EF0: jal         0x8022C354
    // 0x80277EF4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    static_3_8022C354(rdram, ctx);
        goto after_0;
    // 0x80277EF4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    after_0:
    // 0x80277EF8: addiu       $s3, $s1, 0x362C
    ctx->r19 = ADD32(ctx->r17, 0X362C);
    // 0x80277EFC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x80277F00: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80277F04: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_80277F08:
    // 0x80277F08: jal         0x802E9BDC
    // 0x80277F0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    static_3_802E9BDC(rdram, ctx);
        goto after_1;
    // 0x80277F0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x80277F10: jal         0x8022C46C
    // 0x80277F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022C46C(rdram, ctx);
        goto after_2;
    // 0x80277F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80277F18: bne         $s1, $v0, L_80277F24
    if (ctx->r17 != ctx->r2) {
        // 0x80277F1C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80277F24;
    }
    // 0x80277F1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80277F20: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_80277F24:
    // 0x80277F24: bne         $s0, $s2, L_80277F08
    if (ctx->r16 != ctx->r18) {
        // 0x80277F28: nop
    
            goto L_80277F08;
    }
    // 0x80277F28: nop

    // 0x80277F2C: beq         $s4, $zero, L_8027803C
    if (ctx->r20 == 0) {
        // 0x80277F30: lw          $s0, 0x28($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X28);
            goto L_8027803C;
    }
    // 0x80277F30: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80277F34: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80277F38: jal         0x80224CA8
    // 0x80277F3C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    static_3_80224CA8(rdram, ctx);
        goto after_3;
    // 0x80277F3C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    after_3:
    // 0x80277F40: jal         0x80224CA8
    // 0x80277F44: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    static_3_80224CA8(rdram, ctx);
        goto after_4;
    // 0x80277F44: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_4:
    // 0x80277F48: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80277F4C: jal         0x8022970C
    // 0x80277F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x80277F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80277F54: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80277F58: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80277F5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80277F60: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80277F64: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80277F68: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80277F6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80277F70: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x80277F74: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x80277F78: jal         0x8021E66C
    // 0x80277F7C: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    static_3_8021E66C(rdram, ctx);
        goto after_6;
    // 0x80277F7C: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80277F80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80277F84: jal         0x80205AA0
    // 0x80277F88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80205AA0(rdram, ctx);
        goto after_7;
    // 0x80277F88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80277F8C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80277F90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80277F94: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80277F98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80277F9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80277FA0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80277FA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80277FA8: lui         $a1, 0xC080
    ctx->r5 = S32(0XC080 << 16);
    // 0x80277FAC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x80277FB0: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    // 0x80277FB4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80277FB8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80277FBC: jal         0x80205C7C
    // 0x80277FC0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    static_3_80205C7C(rdram, ctx);
        goto after_8;
    // 0x80277FC0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x80277FC4: addiu       $t6, $zero, 0xE0
    ctx->r14 = ADD32(0, 0XE0);
    // 0x80277FC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80277FCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80277FD0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80277FD4: addiu       $a2, $zero, 0x130
    ctx->r6 = ADD32(0, 0X130);
    // 0x80277FD8: jal         0x80205D70
    // 0x80277FDC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    static_3_80205D70(rdram, ctx);
        goto after_9;
    // 0x80277FDC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_9:
    // 0x80277FE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80277FE4: jal         0x80205E0C
    // 0x80277FE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80205E0C(rdram, ctx);
        goto after_10;
    // 0x80277FE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80277FEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80277FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277FF4: jal         0x80309D48
    // 0x80277FF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80309D48(rdram, ctx);
        goto after_11;
    // 0x80277FF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x80277FFC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80278000: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80278004: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80278008: jal         0x80205B0C
    // 0x8027800C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80205B0C(rdram, ctx);
        goto after_12;
    // 0x8027800C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_80278010:
    // 0x80278010: jal         0x80220340
    // 0x80278014: nop

    static_3_80220340(rdram, ctx);
        goto after_13;
    // 0x80278014: nop

    after_13:
    // 0x80278018: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027801C: jal         0x80205BBC
    // 0x80278020: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80205BBC(rdram, ctx);
        goto after_14;
    // 0x80278020: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x80278024: jal         0x80205F60
    // 0x80278028: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80205F60(rdram, ctx);
        goto after_15;
    // 0x80278028: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x8027802C: jal         0x80221BC4
    // 0x80278030: nop

    static_3_80221BC4(rdram, ctx);
        goto after_16;
    // 0x80278030: nop

    after_16:
    // 0x80278034: b           L_80278010
    // 0x80278038: nop

        goto L_80278010;
    // 0x80278038: nop

L_8027803C:
    // 0x8027803C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80278040: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80278044: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80278048: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8027804C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80278050: jr          $ra
    // 0x80278054: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80278054: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void D_802A9850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A98D0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802A98D4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x802A98D8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x802A98DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A98E0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802A98E4: jal         0x80228DE0
    // 0x802A98E8: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802A98E8: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    after_0:
    // 0x802A98EC: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x802A98F0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802A98F4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802A98F8: jal         0x802D01D4
    // 0x802A98FC: lw          $a1, 0x10($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X10);
    static_3_802D01D4(rdram, ctx);
        goto after_1;
    // 0x802A98FC: lw          $a1, 0x10($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X10);
    after_1:
    // 0x802A9900: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x802A9904: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802A9908: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x802A990C: jal         0x802D01D4
    // 0x802A9910: lw          $a1, 0x14($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X14);
    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x802A9910: lw          $a1, 0x14($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X14);
    after_2:
    // 0x802A9914: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x802A9918: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A991C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x802A9920: jal         0x8021B4B0
    // 0x802A9924: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    static_3_8021B4B0(rdram, ctx);
        goto after_3;
    // 0x802A9924: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    after_3:
    // 0x802A9928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A992C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802A9930: jr          $ra
    // 0x802A9934: nop

    return;
    // 0x802A9934: nop

;}
