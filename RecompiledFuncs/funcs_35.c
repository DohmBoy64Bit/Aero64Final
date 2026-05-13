#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802A5F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6008: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x802A600C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802A6010: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802A6014: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x802A6018: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x802A601C: lbu         $t6, 0xE5($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE5);
    // 0x802A6020: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A6024: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802A6028: bne         $t6, $zero, L_802A6070
    if (ctx->r14 != 0) {
        // 0x802A602C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802A6070;
    }
    // 0x802A602C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A6030: jal         0x802AEE54
    // 0x802A6034: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    static_3_802AEE54(rdram, ctx);
        goto after_0;
    // 0x802A6034: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x802A6038: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802A603C: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x802A6040: sb          $t7, 0xE5($s0)
    MEM_B(0XE5, ctx->r16) = ctx->r15;
    // 0x802A6044: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x802A6048: addiu       $t8, $s0, 0x20
    ctx->r24 = ADD32(ctx->r16, 0X20);
    // 0x802A604C: addiu       $t9, $s0, 0x24
    ctx->r25 = ADD32(ctx->r16, 0X24);
    // 0x802A6050: addiu       $t0, $s0, 0x28
    ctx->r8 = ADD32(ctx->r16, 0X28);
    // 0x802A6054: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802A6058: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802A605C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802A6060: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802A6064: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802A6068: jal         0x802CF1C8
    // 0x802A606C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    static_3_802CF1C8(rdram, ctx);
        goto after_1;
    // 0x802A606C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    after_1:
L_802A6070:
    // 0x802A6070: lbu         $t1, 0xE4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XE4);
    // 0x802A6074: bnel        $t1, $zero, L_802A620C
    if (ctx->r9 != 0) {
        // 0x802A6078: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_802A620C;
    }
    goto skip_0;
    // 0x802A6078: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802A607C: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802A6080: addiu       $t3, $s0, 0x2C
    ctx->r11 = ADD32(ctx->r16, 0X2C);
    // 0x802A6084: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x802A6088: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x802A608C: lwc1        $f6, 0x60($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X60);
    // 0x802A6090: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x802A6094: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802A6098: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x802A609C: lw          $v1, 0xDC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XDC);
    // 0x802A60A0: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802A60A4: lh          $t2, 0x60($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X60);
    // 0x802A60A8: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x802A60AC: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802A60B0: addu        $a0, $t2, $v1
    ctx->r4 = ADD32(ctx->r10, ctx->r3);
    // 0x802A60B4: jalr        $t9
    // 0x802A60B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802A60B8: nop

    after_2:
    // 0x802A60BC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x802A60C0: jal         0x802CF7E8
    // 0x802A60C4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    static_3_802CF7E8(rdram, ctx);
        goto after_3;
    // 0x802A60C4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_3:
    // 0x802A60C8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x802A60CC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x802A60D0: jal         0x802CF888
    // 0x802A60D4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    static_3_802CF888(rdram, ctx);
        goto after_4;
    // 0x802A60D4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_4:
    // 0x802A60D8: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x802A60DC: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802A60E0: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x802A60E4: jal         0x802CF4D0
    // 0x802A60E8: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    static_3_802CF4D0(rdram, ctx);
        goto after_5;
    // 0x802A60E8: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    after_5:
    // 0x802A60EC: lwc1        $f12, 0x24($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802A60F0: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x802A60F4: jal         0x802CF4D0
    // 0x802A60F8: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    static_3_802CF4D0(rdram, ctx);
        goto after_6;
    // 0x802A60F8: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    after_6:
    // 0x802A60FC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x802A6100: lwc1        $f14, 0xE0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x802A6104: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802A6108: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802A610C: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802A6110: mul.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x802A6114: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x802A6118: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802A611C: mov.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = ctx->f16.fl;
    // 0x802A6120: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x802A6124: nop

    // 0x802A6128: bc1fl       L_802A613C
    if (!c1cs) {
        // 0x802A612C: neg.s       $f6, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
            goto L_802A613C;
    }
    goto skip_1;
    // 0x802A612C: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    skip_1:
    // 0x802A6130: b           L_802A6154
    // 0x802A6134: mov.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = ctx->f12.fl;
        goto L_802A6154;
    // 0x802A6134: mov.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = ctx->f12.fl;
    // 0x802A6138: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
L_802A613C:
    // 0x802A613C: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802A6140: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x802A6144: nop

    // 0x802A6148: bc1fl       L_802A6158
    if (!c1cs) {
        // 0x802A614C: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_802A6158;
    }
    goto skip_2;
    // 0x802A614C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_2:
    // 0x802A6150: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
L_802A6154:
    // 0x802A6154: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_802A6158:
    // 0x802A6158: nop

    // 0x802A615C: bc1fl       L_802A6170
    if (!c1cs) {
        // 0x802A6160: neg.s       $f10, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = -ctx->f14.fl;
            goto L_802A6170;
    }
    goto skip_3;
    // 0x802A6160: neg.s       $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = -ctx->f14.fl;
    skip_3:
    // 0x802A6164: b           L_802A6188
    // 0x802A6168: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
        goto L_802A6188;
    // 0x802A6168: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x802A616C: neg.s       $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = -ctx->f14.fl;
L_802A6170:
    // 0x802A6170: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802A6174: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802A6178: nop

    // 0x802A617C: bc1fl       L_802A618C
    if (!c1cs) {
        // 0x802A6180: lwc1        $f8, 0x24($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
            goto L_802A618C;
    }
    goto skip_4;
    // 0x802A6180: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    skip_4:
    // 0x802A6184: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
L_802A6188:
    // 0x802A6188: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
L_802A618C:
    // 0x802A618C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802A6190: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A6194: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A6198: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802A619C: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802A61A0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A61A4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x802A61A8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802A61AC: add.s       $f12, $f6, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802A61B0: bc1f        L_802A61BC
    if (!c1cs) {
        // 0x802A61B4: nop
    
            goto L_802A61BC;
    }
    // 0x802A61B4: nop

    // 0x802A61B8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_802A61BC:
    // 0x802A61BC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A61C0: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x802A61C4: nop

    // 0x802A61C8: bc1fl       L_802A61D8
    if (!c1cs) {
        // 0x802A61CC: swc1        $f12, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
            goto L_802A61D8;
    }
    goto skip_5;
    // 0x802A61CC: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    skip_5:
    // 0x802A61D0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x802A61D4: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
L_802A61D8:
    // 0x802A61D8: jal         0x802CF300
    // 0x802A61DC: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    static_3_802CF300(rdram, ctx);
        goto after_7;
    // 0x802A61DC: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_7:
    // 0x802A61E0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802A61E4: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802A61E8: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802A61EC: swc1        $f4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f4.u32l;
    // 0x802A61F0: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802A61F4: swc1        $f6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f6.u32l;
    // 0x802A61F8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802A61FC: swc1        $f12, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f12.u32l;
    // 0x802A6200: swc1        $f14, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f14.u32l;
    // 0x802A6204: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
    // 0x802A6208: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802A620C:
    // 0x802A620C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802A6210: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x802A6214: jr          $ra
    // 0x802A6218: nop

    return;
    // 0x802A6218: nop

;}
RECOMP_FUNC void D_8027E5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E640: jr          $ra
    // 0x8027E644: lw          $v0, 0x6F00($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6F00);
    return;
    // 0x8027E644: lw          $v0, 0x6F00($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6F00);
;}
RECOMP_FUNC void D_802230B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802230B8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802230BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802230C0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802230C4: jal         0x80228DE0
    // 0x802230C8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x802230C8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x802230CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802230D0: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802230D4: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802230D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802230DC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802230E0: nop

    // 0x802230E4: bc1f        L_802230FC
    if (!c1cs) {
        // 0x802230E8: nop
    
            goto L_802230FC;
    }
    // 0x802230E8: nop

    // 0x802230EC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802230F0: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802230F4: b           L_80223114
    // 0x802230F8: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
        goto L_80223114;
    // 0x802230F8: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
L_802230FC:
    // 0x802230FC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80223100: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80223104: nop

    // 0x80223108: bc1fl       L_80223118
    if (!c1cs) {
        // 0x8022310C: lwc1        $f12, 0x5C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_80223118;
    }
    goto skip_0;
    // 0x8022310C: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x80223110: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
L_80223114:
    // 0x80223114: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
L_80223118:
    // 0x80223118: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8022311C: nop

    // 0x80223120: bc1fl       L_80223134
    if (!c1cs) {
        // 0x80223124: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_80223134;
    }
    goto skip_1;
    // 0x80223124: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_1:
    // 0x80223128: b           L_80223144
    // 0x8022312C: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
        goto L_80223144;
    // 0x8022312C: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x80223130: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_80223134:
    // 0x80223134: nop

    // 0x80223138: bc1fl       L_80223148
    if (!c1cs) {
        // 0x8022313C: lwc1        $f12, 0x60($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
            goto L_80223148;
    }
    goto skip_2;
    // 0x8022313C: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    skip_2:
    // 0x80223140: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
L_80223144:
    // 0x80223144: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
L_80223148:
    // 0x80223148: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8022314C: nop

    // 0x80223150: bc1fl       L_80223164
    if (!c1cs) {
        // 0x80223154: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_80223164;
    }
    goto skip_3;
    // 0x80223154: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_3:
    // 0x80223158: b           L_80223174
    // 0x8022315C: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
        goto L_80223174;
    // 0x8022315C: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x80223160: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_80223164:
    // 0x80223164: nop

    // 0x80223168: bc1f        L_80223174
    if (!c1cs) {
        // 0x8022316C: nop
    
            goto L_80223174;
    }
    // 0x8022316C: nop

    // 0x80223170: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
L_80223174:
    // 0x80223174: jal         0x80222CBC
    // 0x80223178: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    static_3_80222CBC(rdram, ctx);
        goto after_1;
    // 0x80223178: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8022317C: jal         0x80222E24
    // 0x80223180: nop

    static_3_80222E24(rdram, ctx);
        goto after_2;
    // 0x80223180: nop

    after_2:
    // 0x80223184: jal         0x802375F0
    // 0x80223188: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_802375F0(rdram, ctx);
        goto after_3;
    // 0x80223188: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x8022318C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80223190: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80223194: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80223198: lui         $t7, 0x106
    ctx->r15 = S32(0X106 << 16);
    // 0x8022319C: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x802231A0: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x802231A4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x802231A8: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802231AC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x802231B0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x802231B4: lhu         $t8, 0x0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X0);
    // 0x802231B8: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802231BC: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x802231C0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802231C4: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x802231C8: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x802231CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802231D0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x802231D4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x802231D8: jr          $ra
    // 0x802231DC: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    return;
    // 0x802231DC: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
;}
RECOMP_FUNC void D_802CE838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CE8B8: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x802CE8BC: sw          $a2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r6;
    // 0x802CE8C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802CE8C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802CE8C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802CE8CC: sw          $a1, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r5;
    // 0x802CE8D0: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802CE8D4: lwc1        $f6, 0x158($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X158);
    // 0x802CE8D8: addiu       $t6, $a0, 0x7FFF
    ctx->r14 = ADD32(ctx->r4, 0X7FFF);
    // 0x802CE8DC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802CE8E0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802CE8E4: swc1        $f8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f8.u32l;
    // 0x802CE8E8: lbu         $t6, 0x1AFD($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1AFD);
    // 0x802CE8EC: bnel        $t6, $zero, L_802CE900
    if (ctx->r14 != 0) {
        // 0x802CE8F0: lbu         $t7, 0x3DC($s1)
        ctx->r15 = MEM_BU(ctx->r17, 0X3DC);
            goto L_802CE900;
    }
    goto skip_0;
    // 0x802CE8F0: lbu         $t7, 0x3DC($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X3DC);
    skip_0:
    // 0x802CE8F4: jal         0x802FD4C0
    // 0x802CE8F8: nop

    static_3_802FD4C0(rdram, ctx);
        goto after_0;
    // 0x802CE8F8: nop

    after_0:
    // 0x802CE8FC: lbu         $t7, 0x3DC($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X3DC);
L_802CE900:
    // 0x802CE900: addiu       $t8, $s1, 0x7FFF
    ctx->r24 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CE904: beq         $t7, $zero, L_802CEB1C
    if (ctx->r15 == 0) {
        // 0x802CE908: nop
    
            goto L_802CEB1C;
    }
    // 0x802CE908: nop

    // 0x802CE90C: lbu         $t8, 0x1B2B($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1B2B);
    // 0x802CE910: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802CE914: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CE918: bnel        $t8, $zero, L_802CE928
    if (ctx->r24 != 0) {
        // 0x802CE91C: lw          $v0, 0x210($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X210);
            goto L_802CE928;
    }
    goto skip_1;
    // 0x802CE91C: lw          $v0, 0x210($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X210);
    skip_1:
    // 0x802CE920: sb          $t9, 0x1B2B($at)
    MEM_B(0X1B2B, ctx->r1) = ctx->r25;
    // 0x802CE924: lw          $v0, 0x210($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X210);
L_802CE928:
    // 0x802CE928: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x802CE92C: lh          $t0, 0x60($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X60);
    // 0x802CE930: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802CE934: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    // 0x802CE938: jalr        $t9
    // 0x802CE93C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802CE93C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_1:
    // 0x802CE940: addiu       $t1, $s1, 0x7FFF
    ctx->r9 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CE944: lbu         $t1, 0x1B2A($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1B2A);
    // 0x802CE948: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CE94C: bnel        $t1, $zero, L_802CEAB8
    if (ctx->r9 != 0) {
        // 0x802CE950: lw          $a0, 0x14($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X14);
            goto L_802CEAB8;
    }
    goto skip_2;
    // 0x802CE950: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    skip_2:
    // 0x802CE954: jal         0x802AEE54
    // 0x802CE958: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    static_3_802AEE54(rdram, ctx);
        goto after_2;
    // 0x802CE958: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    after_2:
    // 0x802CE95C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802CE960: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CE964: jal         0x802AACC8
    // 0x802CE968: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    static_3_802AACC8(rdram, ctx);
        goto after_3;
    // 0x802CE968: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    after_3:
    // 0x802CE96C: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CE970: sw          $v0, 0x1B2D($at)
    MEM_W(0X1B2D, ctx->r1) = ctx->r2;
    // 0x802CE974: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CE978: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802CE97C: jal         0x802F96E8
    // 0x802CE980: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802F96E8(rdram, ctx);
        goto after_4;
    // 0x802CE980: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_4:
    // 0x802CE984: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CE988: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802CE98C: jal         0x802FA1C8
    // 0x802CE990: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA1C8(rdram, ctx);
        goto after_5;
    // 0x802CE990: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_5:
    // 0x802CE994: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CE998: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802CE99C: jal         0x802902DC
    // 0x802CE9A0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_802902DC(rdram, ctx);
        goto after_6;
    // 0x802CE9A0: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_6:
    // 0x802CE9A4: jal         0x80318420
    // 0x802CE9A8: addiu       $a0, $s1, 0x70
    ctx->r4 = ADD32(ctx->r17, 0X70);
    static_3_80318420(rdram, ctx);
        goto after_7;
    // 0x802CE9A8: addiu       $a0, $s1, 0x70
    ctx->r4 = ADD32(ctx->r17, 0X70);
    after_7:
    // 0x802CE9AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CE9B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CE9B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802CE9B8: jal         0x8021B240
    // 0x802CE9BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_8;
    // 0x802CE9BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x802CE9C0: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CE9C4: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CE9C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CE9CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802CE9D0: jal         0x8022FBDC
    // 0x802CE9D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_9;
    // 0x802CE9D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x802CE9D8: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CE9DC: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CE9E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CE9E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802CE9E8: jal         0x8022FBDC
    // 0x802CE9EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_10;
    // 0x802CE9EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x802CE9F0: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CE9F4: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CE9F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CE9FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802CEA00: jal         0x8022FBDC
    // 0x802CEA04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_11;
    // 0x802CEA04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x802CEA08: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CEA0C: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CEA10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CEA14: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x802CEA18: jal         0x8022FBDC
    // 0x802CEA1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_12;
    // 0x802CEA1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x802CEA20: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CEA24: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CEA28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CEA2C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802CEA30: jal         0x8022FBDC
    // 0x802CEA34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_13;
    // 0x802CEA34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x802CEA38: addiu       $a0, $s1, 0x7FFF
    ctx->r4 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CEA3C: lw          $a0, 0x1B31($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B31);
    // 0x802CEA40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802CEA44: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802CEA48: jal         0x8022FBDC
    // 0x802CEA4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8022FBDC(rdram, ctx);
        goto after_14;
    // 0x802CEA4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x802CEA50: jal         0x802FEAF8
    // 0x802CEA54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802FEAF8(rdram, ctx);
        goto after_15;
    // 0x802CEA54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x802CEA58: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CEA5C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802CEA60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802CEA64: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802CEA68: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x802CEA6C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802CEA70: jal         0x802B0078
    // 0x802CEA74: nop

    static_3_802B0078(rdram, ctx);
        goto after_16;
    // 0x802CEA74: nop

    after_16:
    // 0x802CEA78: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CEA7C: jal         0x802AEDEC
    // 0x802CEA80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_17;
    // 0x802CEA80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x802CEA84: sw          $zero, 0x78($v0)
    MEM_W(0X78, ctx->r2) = 0;
    // 0x802CEA88: jal         0x802BCF20
    // 0x802CEA8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_802BCF20(rdram, ctx);
        goto after_18;
    // 0x802CEA8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_18:
    // 0x802CEA90: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802CEA94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802CEA98: lw          $t9, 0xAC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XAC);
    // 0x802CEA9C: lh          $t2, 0xA8($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XA8);
    // 0x802CEAA0: jalr        $t9
    // 0x802CEAA4: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x802CEAA4: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    after_19:
    // 0x802CEAA8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802CEAAC: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CEAB0: sb          $t3, 0x1B2A($at)
    MEM_B(0X1B2A, ctx->r1) = ctx->r11;
    // 0x802CEAB4: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
L_802CEAB8:
    // 0x802CEAB8: addiu       $s0, $sp, 0x10C
    ctx->r16 = ADD32(ctx->r29, 0X10C);
    // 0x802CEABC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802CEAC0: jal         0x802FA2F8
    // 0x802CEAC4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA2F8(rdram, ctx);
        goto after_20;
    // 0x802CEAC4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_20:
    // 0x802CEAC8: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x802CEACC: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x802CEAD0: jal         0x8022A614
    // 0x802CEAD4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8022A614(rdram, ctx);
        goto after_21;
    // 0x802CEAD4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_21:
    // 0x802CEAD8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CEADC: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x802CEAE0: jal         0x802FA318
    // 0x802CEAE4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA318(rdram, ctx);
        goto after_22;
    // 0x802CEAE4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_22:
    // 0x802CEAE8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CEAEC: jal         0x802FA288
    // 0x802CEAF0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA288(rdram, ctx);
        goto after_23;
    // 0x802CEAF0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_23:
    // 0x802CEAF4: bne         $v0, $zero, L_802CEB1C
    if (ctx->r2 != 0) {
        // 0x802CEAF8: addiu       $a0, $s1, 0x70
        ctx->r4 = ADD32(ctx->r17, 0X70);
            goto L_802CEB1C;
    }
    // 0x802CEAF8: addiu       $a0, $s1, 0x70
    ctx->r4 = ADD32(ctx->r17, 0X70);
    // 0x802CEAFC: jal         0x80318E80
    // 0x802CEB00: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318E80(rdram, ctx);
        goto after_24;
    // 0x802CEB00: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_24:
    // 0x802CEB04: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CEB08: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802CEB0C: sb          $t4, 0x410($s1)
    MEM_B(0X410, ctx->r17) = ctx->r12;
    // 0x802CEB10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802CEB14: jal         0x802902DC
    // 0x802CEB18: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    static_3_802902DC(rdram, ctx);
        goto after_25;
    // 0x802CEB18: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_25:
L_802CEB1C:
    // 0x802CEB1C: jal         0x802FD564
    // 0x802CEB20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802FD564(rdram, ctx);
        goto after_26;
    // 0x802CEB20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_26:
    // 0x802CEB24: lbu         $t5, 0x3DC($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X3DC);
    // 0x802CEB28: addiu       $t6, $s1, 0x7FFF
    ctx->r14 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CEB2C: bnel        $t5, $zero, L_802CEDBC
    if (ctx->r13 != 0) {
        // 0x802CEB30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802CEDBC;
    }
    goto skip_3;
    // 0x802CEB30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x802CEB34: lbu         $t6, 0x1B29($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1B29);
    // 0x802CEB38: lwc1        $f12, 0x154($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X154);
    // 0x802CEB3C: lui         $at, 0x439D
    ctx->r1 = S32(0X439D << 16);
    // 0x802CEB40: bne         $t6, $zero, L_802CED28
    if (ctx->r14 != 0) {
        // 0x802CEB44: nop
    
            goto L_802CED28;
    }
    // 0x802CEB44: nop

    // 0x802CEB48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802CEB4C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802CEB50: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802CEB54: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x802CEB58: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x802CEB5C: bc1fl       L_802CEBE0
    if (!c1cs) {
        // 0x802CEB60: lwc1        $f16, -0x64F8($at)
        ctx->f16.u32l = MEM_W(ctx->r1, -0X64F8);
            goto L_802CEBE0;
    }
    goto skip_4;
    // 0x802CEB60: lwc1        $f16, -0x64F8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X64F8);
    skip_4:
    // 0x802CEB64: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CEB68: jal         0x80309740
    // 0x802CEB6C: sb          $t7, 0x1B29($at)
    MEM_B(0X1B29, ctx->r1) = ctx->r15;
    static_3_80309740(rdram, ctx);
        goto after_27;
    // 0x802CEB6C: sb          $t7, 0x1B29($at)
    MEM_B(0X1B29, ctx->r1) = ctx->r15;
    after_27:
    // 0x802CEB70: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CEB74: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    // 0x802CEB78: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802CEB7C: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802CEB80: addiu       $v1, $a0, 0x6D0
    ctx->r3 = ADD32(ctx->r4, 0X6D0);
    // 0x802CEB84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CEB88: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802CEB8C: swc1        $f6, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f6.u32l;
    // 0x802CEB90: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CEB94: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802CEB98: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x802CEB9C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802CEBA0: jal         0x802B0078
    // 0x802CEBA4: nop

    static_3_802B0078(rdram, ctx);
        goto after_28;
    // 0x802CEBA4: nop

    after_28:
    // 0x802CEBA8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CEBAC: jal         0x802AEDEC
    // 0x802CEBB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_29;
    // 0x802CEBB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_29:
    // 0x802CEBB4: lw          $t8, 0x78($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X78);
    // 0x802CEBB8: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x802CEBBC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802CEBC0: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x802CEBC4: jal         0x802BCF20
    // 0x802CEBC8: sw          $t0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r8;
    static_3_802BCF20(rdram, ctx);
        goto after_30;
    // 0x802CEBC8: sw          $t0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r8;
    after_30:
    // 0x802CEBCC: jal         0x802FEAF8
    // 0x802CEBD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802FEAF8(rdram, ctx);
        goto after_31;
    // 0x802CEBD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_31:
    // 0x802CEBD4: b           L_802CEDBC
    // 0x802CEBD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802CEDBC;
    // 0x802CEBD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802CEBDC: lwc1        $f16, -0x64F8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X64F8);
L_802CEBE0:
    // 0x802CEBE0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802CEBE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802CEBE8: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x802CEBEC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802CEBF0: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x802CEBF4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802CEBF8: addiu       $a0, $s1, 0x17F4
    ctx->r4 = ADD32(ctx->r17, 0X17F4);
    // 0x802CEBFC: addu        $v0, $s1, $at
    ctx->r2 = ADD32(ctx->r17, ctx->r1);
    // 0x802CEC00: bc1f        L_802CED18
    if (!c1cs) {
        // 0x802CEC04: lwc1        $f4, 0x158($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X158);
            goto L_802CED18;
    }
    // 0x802CEC04: lwc1        $f4, 0x158($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X158);
L_802CEC08:
    // 0x802CEC08: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x802CEC0C: jal         0x80317E10
    // 0x802CEC10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80317E10(rdram, ctx);
        goto after_32;
    // 0x802CEC10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_32:
    // 0x802CEC14: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x802CEC18: beq         $v0, $zero, L_802CEC24
    if (ctx->r2 == 0) {
        // 0x802CEC1C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_802CEC24;
    }
    // 0x802CEC1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802CEC20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802CEC24:
    // 0x802CEC24: addiu       $v1, $v1, 0x68C
    ctx->r3 = ADD32(ctx->r3, 0X68C);
    // 0x802CEC28: slti        $at, $v1, 0x4804
    ctx->r1 = SIGNED(ctx->r3) < 0X4804 ? 1 : 0;
    // 0x802CEC2C: bne         $at, $zero, L_802CEC08
    if (ctx->r1 != 0) {
        // 0x802CEC30: addiu       $a0, $a0, 0x68C
        ctx->r4 = ADD32(ctx->r4, 0X68C);
            goto L_802CEC08;
    }
    // 0x802CEC30: addiu       $a0, $a0, 0x68C
    ctx->r4 = ADD32(ctx->r4, 0X68C);
    // 0x802CEC34: beq         $s0, $zero, L_802CEC6C
    if (ctx->r16 == 0) {
        // 0x802CEC38: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802CEC6C;
    }
    // 0x802CEC38: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802CEC3C: addiu       $a0, $s1, 0x5FF8
    ctx->r4 = ADD32(ctx->r17, 0X5FF8);
L_802CEC40:
    // 0x802CEC40: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x802CEC44: jal         0x80317E10
    // 0x802CEC48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80317E10(rdram, ctx);
        goto after_33;
    // 0x802CEC48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_33:
    // 0x802CEC4C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x802CEC50: beq         $v0, $zero, L_802CEC5C
    if (ctx->r2 == 0) {
        // 0x802CEC54: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_802CEC5C;
    }
    // 0x802CEC54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802CEC58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802CEC5C:
    // 0x802CEC5C: addiu       $v1, $v1, 0x68C
    ctx->r3 = ADD32(ctx->r3, 0X68C);
    // 0x802CEC60: addiu       $at, $zero, 0x3AEC
    ctx->r1 = ADD32(0, 0X3AEC);
    // 0x802CEC64: bne         $v1, $at, L_802CEC40
    if (ctx->r3 != ctx->r1) {
        // 0x802CEC68: addiu       $a0, $a0, 0x68C
        ctx->r4 = ADD32(ctx->r4, 0X68C);
            goto L_802CEC40;
    }
    // 0x802CEC68: addiu       $a0, $a0, 0x68C
    ctx->r4 = ADD32(ctx->r4, 0X68C);
L_802CEC6C:
    // 0x802CEC6C: beq         $s0, $zero, L_802CECA4
    if (ctx->r16 == 0) {
        // 0x802CEC70: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802CECA4;
    }
    // 0x802CEC70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802CEC74: addiu       $a0, $s1, 0x414
    ctx->r4 = ADD32(ctx->r17, 0X414);
L_802CEC78:
    // 0x802CEC78: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x802CEC7C: jal         0x80317E10
    // 0x802CEC80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    static_3_80317E10(rdram, ctx);
        goto after_34;
    // 0x802CEC80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_34:
    // 0x802CEC84: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x802CEC88: beq         $v0, $zero, L_802CEC94
    if (ctx->r2 == 0) {
        // 0x802CEC8C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_802CEC94;
    }
    // 0x802CEC8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802CEC90: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_802CEC94:
    // 0x802CEC94: addiu       $v1, $v1, 0x6A0
    ctx->r3 = ADD32(ctx->r3, 0X6A0);
    // 0x802CEC98: addiu       $at, $zero, 0x13E0
    ctx->r1 = ADD32(0, 0X13E0);
    // 0x802CEC9C: bne         $v1, $at, L_802CEC78
    if (ctx->r3 != ctx->r1) {
        // 0x802CECA0: addiu       $a0, $a0, 0x6A0
        ctx->r4 = ADD32(ctx->r4, 0X6A0);
            goto L_802CEC78;
    }
    // 0x802CECA0: addiu       $a0, $a0, 0x6A0
    ctx->r4 = ADD32(ctx->r4, 0X6A0);
L_802CECA4:
    // 0x802CECA4: beq         $s0, $zero, L_802CED08
    if (ctx->r16 == 0) {
        // 0x802CECA8: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_802CED08;
    }
    // 0x802CECA8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802CECAC: lwc1        $f12, 0x154($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X154);
    // 0x802CECB0: jal         0x80309740
    // 0x802CECB4: addiu       $s0, $s1, 0x70
    ctx->r16 = ADD32(ctx->r17, 0X70);
    static_3_80309740(rdram, ctx);
        goto after_35;
    // 0x802CECB4: addiu       $s0, $s1, 0x70
    ctx->r16 = ADD32(ctx->r17, 0X70);
    after_35:
    // 0x802CECB8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CECBC: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    // 0x802CECC0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802CECC4: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802CECC8: addiu       $v1, $a0, 0x6D0
    ctx->r3 = ADD32(ctx->r4, 0X6D0);
    // 0x802CECCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802CECD0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802CECD4: swc1        $f6, 0x170($v1)
    MEM_W(0X170, ctx->r3) = ctx->f6.u32l;
    // 0x802CECD8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CECDC: lwc1        $f0, 0x32AC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X32AC);
    // 0x802CECE0: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x802CECE4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802CECE8: jal         0x802B0078
    // 0x802CECEC: nop

    static_3_802B0078(rdram, ctx);
        goto after_36;
    // 0x802CECEC: nop

    after_36:
    // 0x802CECF0: jal         0x802FFFE8
    // 0x802CECF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802FFFE8(rdram, ctx);
        goto after_37;
    // 0x802CECF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x802CECF8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802CECFC: addiu       $at, $s1, 0x7FFF
    ctx->r1 = ADD32(ctx->r17, 0X7FFF);
    // 0x802CED00: b           L_802CEDB8
    // 0x802CED04: sb          $t1, 0x1B29($at)
    MEM_B(0X1B29, ctx->r1) = ctx->r9;
        goto L_802CEDB8;
    // 0x802CED04: sb          $t1, 0x1B29($at)
    MEM_B(0X1B29, ctx->r1) = ctx->r9;
L_802CED08:
    // 0x802CED08: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802CED0C: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x802CED10: b           L_802CEDB8
    // 0x802CED14: swc1        $f16, -0x64F8($at)
    MEM_W(-0X64F8, ctx->r1) = ctx->f16.u32l;
        goto L_802CEDB8;
    // 0x802CED14: swc1        $f16, -0x64F8($at)
    MEM_W(-0X64F8, ctx->r1) = ctx->f16.u32l;
L_802CED18:
    // 0x802CED18: lwc1        $f18, 0x1B08($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1B08);
    // 0x802CED1C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802CED20: b           L_802CEDB8
    // 0x802CED24: swc1        $f6, 0x1B08($v0)
    MEM_W(0X1B08, ctx->r2) = ctx->f6.u32l;
        goto L_802CEDB8;
    // 0x802CED24: swc1        $f6, 0x1B08($v0)
    MEM_W(0X1B08, ctx->r2) = ctx->f6.u32l;
L_802CED28:
    // 0x802CED28: jal         0x802FFFB8
    // 0x802CED2C: addiu       $a0, $s1, 0x70
    ctx->r4 = ADD32(ctx->r17, 0X70);
    static_3_802FFFB8(rdram, ctx);
        goto after_38;
    // 0x802CED2C: addiu       $a0, $s1, 0x70
    ctx->r4 = ADD32(ctx->r17, 0X70);
    after_38:
    // 0x802CED30: beql        $v0, $zero, L_802CEDBC
    if (ctx->r2 == 0) {
        // 0x802CED34: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802CEDBC;
    }
    goto skip_5;
    // 0x802CED34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x802CED38: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CED3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CED40: jal         0x802F7220
    // 0x802CED44: addiu       $a0, $a0, 0x6D0
    ctx->r4 = ADD32(ctx->r4, 0X6D0);
    static_3_802F7220(rdram, ctx);
        goto after_39;
    // 0x802CED44: addiu       $a0, $a0, 0x6D0
    ctx->r4 = ADD32(ctx->r4, 0X6D0);
    after_39:
    // 0x802CED48: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802CED4C: jal         0x8030CB24
    // 0x802CED50: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    static_3_8030CB24(rdram, ctx);
        goto after_40;
    // 0x802CED50: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    after_40:
    // 0x802CED54: addiu       $s0, $sp, 0x2C
    ctx->r16 = ADD32(ctx->r29, 0X2C);
    // 0x802CED58: jal         0x8022970C
    // 0x802CED5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_41;
    // 0x802CED5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x802CED60: lui         $a1, 0xC53C
    ctx->r5 = S32(0XC53C << 16);
    // 0x802CED64: lui         $a2, 0x43FD
    ctx->r6 = S32(0X43FD << 16);
    // 0x802CED68: lui         $a3, 0x4357
    ctx->r7 = S32(0X4357 << 16);
    // 0x802CED6C: ori         $a3, $a3, 0x87AE
    ctx->r7 = ctx->r7 | 0X87AE;
    // 0x802CED70: ori         $a2, $a2, 0xB5C3
    ctx->r6 = ctx->r6 | 0XB5C3;
    // 0x802CED74: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x802CED78: jal         0x8022A0D0
    // 0x802CED7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022A0D0(rdram, ctx);
        goto after_42;
    // 0x802CED7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x802CED80: lui         $a1, 0xBAB7
    ctx->r5 = S32(0XBAB7 << 16);
    // 0x802CED84: ori         $a1, $a1, 0x2D8
    ctx->r5 = ctx->r5 | 0X2D8;
    // 0x802CED88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CED8C: jal         0x802D01D4
    // 0x802CED90: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_43;
    // 0x802CED90: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_43:
    // 0x802CED94: lui         $a1, 0xBD83
    ctx->r5 = S32(0XBD83 << 16);
    // 0x802CED98: ori         $a1, $a1, 0xE58D
    ctx->r5 = ctx->r5 | 0XE58D;
    // 0x802CED9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802CEDA0: jal         0x802D01D4
    // 0x802CEDA4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_44;
    // 0x802CEDA4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_44:
    // 0x802CEDA8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802CEDAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802CEDB0: jal         0x802B0024
    // 0x802CEDB4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_802B0024(rdram, ctx);
        goto after_45;
    // 0x802CEDB4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_45:
L_802CEDB8:
    // 0x802CEDB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802CEDBC:
    // 0x802CEDBC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802CEDC0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802CEDC4: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    // 0x802CEDC8: jr          $ra
    // 0x802CEDCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802CEDCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802A61A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6228: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A622C: jr          $ra
    // 0x802A6230: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802A6230: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802E69BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6A3C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E6A40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E6A44: jr          $ra
    // 0x802E6A48: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E6A48: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80299464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802994E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802994E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802994EC: jr          $ra
    // 0x802994F0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802994F0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80246610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80246610: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80246614: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x80246618: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8024661C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80246620: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80246624: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80246628: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8024662C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80246630: andi        $s0, $a2, 0xFFFF
    ctx->r16 = ctx->r6 & 0XFFFF;
    // 0x80246634: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80246638: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8024663C: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x80246640: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80246644: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80246648: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8024664C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80246650: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x80246654: beq         $t6, $at, L_80246678
    if (ctx->r14 == ctx->r1) {
        // 0x80246658: addiu       $s3, $zero, 0x2
        ctx->r19 = ADD32(0, 0X2);
            goto L_80246678;
    }
    // 0x80246658: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x8024665C: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x80246660: beq         $at, $zero, L_80246678
    if (ctx->r1 == 0) {
        // 0x80246664: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80246678;
    }
    // 0x80246664: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80246668: beq         $v0, $zero, L_80246678
    if (ctx->r2 == 0) {
        // 0x8024666C: nop
    
            goto L_80246678;
    }
    // 0x8024666C: nop

    // 0x80246670: b           L_802467E0
    // 0x80246674: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802467E0;
    // 0x80246674: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80246678:
    // 0x80246678: jal         0x80245AD0
    // 0x8024667C: nop

    static_3_80245AD0(rdram, ctx);
        goto after_0;
    // 0x8024667C: nop

    after_0:
    // 0x80246680: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80246684: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80246688: sb          $t7, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r15;
    // 0x8024668C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80246690: andi        $a1, $s0, 0xFFFF
    ctx->r5 = ctx->r16 & 0XFFFF;
    // 0x80246694: jal         0x8024685C
    // 0x80246698: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    static_3_8024685C(rdram, ctx);
        goto after_1;
    // 0x80246698: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_1:
    // 0x8024669C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802466A0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802466A4: jal         0x802465B0
    // 0x802466A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_802465B0(rdram, ctx);
        goto after_2;
    // 0x802466A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x802466AC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802466B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802466B4: jal         0x802374B0
    // 0x802466B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_3;
    // 0x802466B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x802466BC: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x802466C0: addiu       $s5, $sp, 0x4C
    ctx->r21 = ADD32(ctx->r29, 0X4C);
L_802466C4:
    // 0x802466C4: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802466C8: addiu       $s0, $t8, 0x0
    ctx->r16 = ADD32(ctx->r24, 0X0);
    // 0x802466CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802466D0: jal         0x802465B0
    // 0x802466D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802465B0(rdram, ctx);
        goto after_4;
    // 0x802466D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x802466D8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802466DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802466E0: jal         0x802374B0
    // 0x802466E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_5;
    // 0x802466E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x802466E8: beq         $s1, $zero, L_80246720
    if (ctx->r17 == 0) {
        // 0x802466EC: or          $t2, $s5, $zero
        ctx->r10 = ctx->r21 | 0;
            goto L_80246720;
    }
    // 0x802466EC: or          $t2, $s5, $zero
    ctx->r10 = ctx->r21 | 0;
    // 0x802466F0: blez        $s1, L_80246720
    if (SIGNED(ctx->r17) <= 0) {
        // 0x802466F4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80246720;
    }
    // 0x802466F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802466F8: andi        $a0, $s1, 0x3
    ctx->r4 = ctx->r17 & 0X3;
    // 0x802466FC: beq         $a0, $zero, L_80246714
    if (ctx->r4 == 0) {
        // 0x80246700: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_80246714;
    }
    // 0x80246700: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80246704:
    // 0x80246704: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246708: bne         $v1, $v0, L_80246704
    if (ctx->r3 != ctx->r2) {
        // 0x8024670C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80246704;
    }
    // 0x8024670C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80246710: beq         $v0, $s1, L_80246720
    if (ctx->r2 == ctx->r17) {
        // 0x80246714: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80246720;
    }
L_80246714:
    // 0x80246714: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80246718: bne         $v0, $s1, L_80246714
    if (ctx->r2 != ctx->r17) {
        // 0x8024671C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80246714;
    }
    // 0x8024671C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80246720:
    // 0x80246720: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x80246724: addiu       $t0, $s0, 0x24
    ctx->r8 = ADD32(ctx->r16, 0X24);
L_80246728:
    // 0x80246728: lwl         $at, 0x0($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, 0X0);
    // 0x8024672C: lwr         $at, 0x3($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0X3);
    // 0x80246730: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80246734: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80246738: lwl         $at, -0x8($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, -0X8);
    // 0x8024673C: lwr         $at, -0x5($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, -0X5);
    // 0x80246740: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80246744: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x80246748: lwl         $at, -0x4($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, -0X4);
    // 0x8024674C: lwr         $at, -0x1($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, -0X1);
    // 0x80246750: bne         $t1, $t0, L_80246728
    if (ctx->r9 != ctx->r8) {
        // 0x80246754: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_80246728;
    }
    // 0x80246754: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x80246758: lwl         $at, 0x0($t1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r9, 0X0);
    // 0x8024675C: lwr         $at, 0x3($t1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r9, 0X3);
    // 0x80246760: nop

    // 0x80246764: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80246768: lbu         $v0, 0x4E($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4E);
    // 0x8024676C: nop

    // 0x80246770: andi        $t3, $v0, 0xC0
    ctx->r11 = ctx->r2 & 0XC0;
    // 0x80246774: sra         $s2, $t3, 4
    ctx->r18 = S32(SIGNED(ctx->r11) >> 4);
    // 0x80246778: bne         $s2, $zero, L_802467C0
    if (ctx->r18 != 0) {
        // 0x8024677C: nop
    
            goto L_802467C0;
    }
    // 0x8024677C: nop

    // 0x80246780: jal         0x8024A640
    // 0x80246784: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    static_3_8024A640(rdram, ctx);
        goto after_6;
    // 0x80246784: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_6:
    // 0x80246788: lbu         $t5, 0x72($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X72);
    // 0x8024678C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80246790: beq         $t5, $v0, L_802467C4
    if (ctx->r13 == ctx->r2) {
        // 0x80246794: nop
    
            goto L_802467C4;
    }
    // 0x80246794: nop

    // 0x80246798: jal         0x80238E34
    // 0x8024679C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_80238E34(rdram, ctx);
        goto after_7;
    // 0x8024679C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x802467A0: beq         $v0, $zero, L_802467B8
    if (ctx->r2 == 0) {
        // 0x802467A4: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_802467B8;
    }
    // 0x802467A4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x802467A8: jal         0x80245B14
    // 0x802467AC: nop

    static_3_80245B14(rdram, ctx);
        goto after_8;
    // 0x802467AC: nop

    after_8:
    // 0x802467B0: b           L_802467E0
    // 0x802467B4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_802467E0;
    // 0x802467B4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_802467B8:
    // 0x802467B8: b           L_802467C4
    // 0x802467BC: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
        goto L_802467C4;
    // 0x802467BC: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
L_802467C0:
    // 0x802467C0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_802467C4:
    // 0x802467C4: bne         $s2, $s6, L_802467D4
    if (ctx->r18 != ctx->r22) {
        // 0x802467C8: slti        $v0, $s3, 0x0
        ctx->r2 = SIGNED(ctx->r19) < 0X0 ? 1 : 0;
            goto L_802467D4;
    }
    // 0x802467C8: slti        $v0, $s3, 0x0
    ctx->r2 = SIGNED(ctx->r19) < 0X0 ? 1 : 0;
    // 0x802467CC: beq         $v0, $zero, L_802466C4
    if (ctx->r2 == 0) {
        // 0x802467D0: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_802466C4;
    }
    // 0x802467D0: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_802467D4:
    // 0x802467D4: jal         0x80245B14
    // 0x802467D8: nop

    static_3_80245B14(rdram, ctx);
        goto after_9;
    // 0x802467D8: nop

    after_9:
    // 0x802467DC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_802467E0:
    // 0x802467E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802467E4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802467E8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802467EC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802467F0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802467F4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802467F8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802467FC: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80246800: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80246804: jr          $ra
    // 0x80246808: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80246808: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_8027A6D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027A748: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027A74C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8027A750: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8027A754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8027A758: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027A75C: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8027A760: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8027A764: addiu       $a0, $a0, 0x71C4
    ctx->r4 = ADD32(ctx->r4, 0X71C4);
    // 0x8027A768: addiu       $a1, $t6, 0x71E4
    ctx->r5 = ADD32(ctx->r14, 0X71E4);
    // 0x8027A76C: addiu       $a3, $t6, 0x71E5
    ctx->r7 = ADD32(ctx->r14, 0X71E5);
    // 0x8027A770: jal         0x802A21E0
    // 0x8027A774: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    static_3_802A21E0(rdram, ctx);
        goto after_0;
    // 0x8027A774: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8027A778: beq         $v0, $zero, L_8027A794
    if (ctx->r2 == 0) {
        // 0x8027A77C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8027A794;
    }
    // 0x8027A77C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8027A780: jal         0x80308C44
    // 0x8027A784: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    static_3_80308C44(rdram, ctx);
        goto after_1;
    // 0x8027A784: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8027A788: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8027A78C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8027A790: sh          $t8, 0xF0($a0)
    MEM_H(0XF0, ctx->r4) = ctx->r24;
L_8027A794:
    // 0x8027A794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8027A798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8027A79C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8027A7A0: jr          $ra
    // 0x8027A7A4: nop

    return;
    // 0x8027A7A4: nop

;}
RECOMP_FUNC void D_802D1ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1F54: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x802D1F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1F60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D1F64: jal         0x80301EA0
    // 0x802D1F68: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D1F68: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x802D1F6C: beq         $v0, $zero, L_802D1FC4
    if (ctx->r2 == 0) {
        // 0x802D1F70: lwc1        $f12, 0x20($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
            goto L_802D1FC4;
    }
    // 0x802D1F70: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802D1F74: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D1F78: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D1F7C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802D1F80: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1F84: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802D1F88: nop

    // 0x802D1F8C: bc1fl       L_802D1FA0
    if (!c1cs) {
        // 0x802D1F90: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802D1FA0;
    }
    goto skip_0;
    // 0x802D1F90: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x802D1F94: b           L_802D1FB8
    // 0x802D1F98: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_802D1FB8;
    // 0x802D1F98: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802D1F9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802D1FA0:
    // 0x802D1FA0: nop

    // 0x802D1FA4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802D1FA8: nop

    // 0x802D1FAC: bc1fl       L_802D1FBC
    if (!c1cs) {
        // 0x802D1FB0: mfc1        $a1, $f12
        ctx->r5 = (int32_t)ctx->f12.u32l;
            goto L_802D1FBC;
    }
    goto skip_1;
    // 0x802D1FB0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    skip_1:
    // 0x802D1FB4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_802D1FB8:
    // 0x802D1FB8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
L_802D1FBC:
    // 0x802D1FBC: jal         0x80201A18
    // 0x802D1FC0: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    static_3_80201A18(rdram, ctx);
        goto after_1;
    // 0x802D1FC0: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    after_1:
L_802D1FC4:
    // 0x802D1FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D1FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D1FCC: jr          $ra
    // 0x802D1FD0: nop

    return;
    // 0x802D1FD0: nop

;}
RECOMP_FUNC void D_8021F3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F3F0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8021F3F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F3F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8021F3FC: beq         $t6, $zero, L_8021F434
    if (ctx->r14 == 0) {
        // 0x8021F400: sh          $zero, 0x0($at)
        MEM_H(0X0, ctx->r1) = 0;
            goto L_8021F434;
    }
    // 0x8021F400: sh          $zero, 0x0($at)
    MEM_H(0X0, ctx->r1) = 0;
    // 0x8021F404: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021F408: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8021F40C: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x8021F410: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x8021F414: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F418: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x8021F41C: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x8021F420: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x8021F424: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8021F428: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8021F42C: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x8021F430: sw          $t1, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r9;
L_8021F434:
    // 0x8021F434: jr          $ra
    // 0x8021F438: nop

    return;
    // 0x8021F438: nop

;}
RECOMP_FUNC void D_802B6778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B67F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B67FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B6800: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802B6804: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802B6808: lbu         $t6, 0x8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8);
    // 0x802B680C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802B6810: beql        $t6, $zero, L_802B6970
    if (ctx->r14 == 0) {
        // 0x802B6814: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B6970;
    }
    goto skip_0;
    // 0x802B6814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802B6818: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802B681C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B6820: bnel        $v0, $at, L_802B6868
    if (ctx->r2 != ctx->r1) {
        // 0x802B6824: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802B6868;
    }
    goto skip_1;
    // 0x802B6824: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_1:
    // 0x802B6828: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x802B682C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6830: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B6834: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x802B6838: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B683C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B6840: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802B6844: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B6848: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B684C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B6850: nop

    // 0x802B6854: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x802B6858: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802B685C: b           L_802B68A8
    // 0x802B6860: swc1        $f6, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f6.u32l;
        goto L_802B68A8;
    // 0x802B6860: swc1        $f6, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f6.u32l;
    // 0x802B6864: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_802B6868:
    // 0x802B6868: bne         $v0, $at, L_802B68A8
    if (ctx->r2 != ctx->r1) {
        // 0x802B686C: nop
    
            goto L_802B68A8;
    }
    // 0x802B686C: nop

    // 0x802B6870: lw          $t8, 0x34($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X34);
    // 0x802B6874: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B6878: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B687C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x802B6880: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802B6884: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B6888: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802B688C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x802B6890: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802B6894: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B6898: nop

    // 0x802B689C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B68A0: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x802B68A4: swc1        $f16, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->f16.u32l;
L_802B68A8:
    // 0x802B68A8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B68AC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B68B0: lwc1        $f8, 0x38($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X38);
    // 0x802B68B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802B68B8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802B68BC: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802B68C0: lw          $t9, 0xF4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XF4);
    // 0x802B68C4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802B68C8: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x802B68CC: beq         $t9, $zero, L_802B696C
    if (ctx->r25 == 0) {
        // 0x802B68D0: swc1        $f10, 0x3C($a3)
        MEM_W(0X3C, ctx->r7) = ctx->f10.u32l;
            goto L_802B696C;
    }
    // 0x802B68D0: swc1        $f10, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->f10.u32l;
    // 0x802B68D4: lwc1        $f16, 0x768($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X768);
    // 0x802B68D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B68DC: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802B68E0: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x802B68E4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802B68E8: nop

    // 0x802B68EC: bc1fl       L_802B6970
    if (!c1cs) {
        // 0x802B68F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B6970;
    }
    goto skip_2;
    // 0x802B68F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x802B68F4: jal         0x80234AF0
    // 0x802B68F8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    static_3_80234AF0(rdram, ctx);
        goto after_0;
    // 0x802B68F8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x802B68FC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802B6900: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802B6904: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B6908: lwc1        $f18, 0x38($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X38);
    // 0x802B690C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802B6910: nop

    // 0x802B6914: bc1fl       L_802B6968
    if (!c1cs) {
        // 0x802B6918: lwc1        $f10, 0x1C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_802B6968;
    }
    goto skip_3;
    // 0x802B6918: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x802B691C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802B6920: jal         0x802AEE54
    // 0x802B6924: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    static_3_802AEE54(rdram, ctx);
        goto after_1;
    // 0x802B6924: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x802B6928: jal         0x80318804
    // 0x802B692C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_80318804(rdram, ctx);
        goto after_2;
    // 0x802B692C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x802B6930: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802B6934: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802B6938: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802B693C: lw          $t0, 0x18($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X18);
    // 0x802B6940: addiu       $a0, $a3, 0xEDC
    ctx->r4 = ADD32(ctx->r7, 0XEDC);
    // 0x802B6944: bnel        $v0, $t0, L_802B6968
    if (ctx->r2 != ctx->r8) {
        // 0x802B6948: lwc1        $f10, 0x1C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_802B6968;
    }
    goto skip_4;
    // 0x802B6948: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x802B694C: jal         0x802C5468
    // 0x802B6950: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    static_3_802C5468(rdram, ctx);
        goto after_3;
    // 0x802B6950: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_3:
    // 0x802B6954: beq         $v0, $zero, L_802B6964
    if (ctx->r2 == 0) {
        // 0x802B6958: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_802B6964;
    }
    // 0x802B6958: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802B695C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B6960: sb          $t1, 0xF9($a3)
    MEM_B(0XF9, ctx->r7) = ctx->r9;
L_802B6964:
    // 0x802B6964: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
L_802B6968:
    // 0x802B6968: swc1        $f10, 0x768($a3)
    MEM_W(0X768, ctx->r7) = ctx->f10.u32l;
L_802B696C:
    // 0x802B696C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B6970:
    // 0x802B6970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B6974: jr          $ra
    // 0x802B6978: nop

    return;
    // 0x802B6978: nop

;}
RECOMP_FUNC void D_802AB33C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AB3BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AB3C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AB3C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AB3C8: lbu         $t6, 0x1D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1D);
    // 0x802AB3CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AB3D0: bne         $t6, $zero, L_802AB3EC
    if (ctx->r14 != 0) {
        // 0x802AB3D4: lui         $t7, 0x0
        ctx->r15 = S32(0X0 << 16);
            goto L_802AB3EC;
    }
    // 0x802AB3D4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802AB3D8: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802AB3DC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802AB3E0: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x802AB3E4: bne         $t7, $at, L_802AB3F4
    if (ctx->r15 != ctx->r1) {
        // 0x802AB3E8: nop
    
            goto L_802AB3F4;
    }
    // 0x802AB3E8: nop

L_802AB3EC:
    // 0x802AB3EC: b           L_802AB3F4
    // 0x802AB3F0: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
        goto L_802AB3F4;
    // 0x802AB3F0: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
L_802AB3F4:
    // 0x802AB3F4: jal         0x8021ACB0
    // 0x802AB3F8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AB3F8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x802AB3FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AB400: jal         0x8021B838
    // 0x802AB404: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AB404: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AB408: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AB40C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AB410: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AB414: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802AB418: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x802AB41C: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AB420: lh          $t9, 0xB8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XB8);
    // 0x802AB424: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802AB428: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x802AB42C: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AB430: jalr        $t9
    // 0x802AB434: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AB434: nop

    after_2:
    // 0x802AB438: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802AB43C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AB440: jal         0x802FD4B0
    // 0x802AB444: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802AB444: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x802AB448: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB44C: jal         0x802FD498
    // 0x802AB450: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802AB450: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802AB454: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB458: jal         0x802FD4A4
    // 0x802AB45C: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802AB45C: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    after_5:
    // 0x802AB460: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB464: jal         0x802FD480
    // 0x802AB468: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802AB468: lui         $a1, 0x40F0
    ctx->r5 = S32(0X40F0 << 16);
    after_6:
    // 0x802AB46C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB470: jal         0x802FD48C
    // 0x802AB474: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802AB474: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    after_7:
    // 0x802AB478: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x802AB47C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802AB480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AB484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AB488: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AB48C: jal         0x80317194
    // 0x802AB490: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802AB490: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802AB494: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
    // 0x802AB498: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802AB49C: sw          $v0, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r2;
    // 0x802AB4A0: sw          $v0, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r2;
    // 0x802AB4A4: sw          $v0, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r2;
    // 0x802AB4A8: bne         $t1, $zero, L_802AB4C0
    if (ctx->r9 != 0) {
        // 0x802AB4AC: sw          $v0, 0x2AC($s0)
        MEM_W(0X2AC, ctx->r16) = ctx->r2;
            goto L_802AB4C0;
    }
    // 0x802AB4AC: sw          $v0, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r2;
    // 0x802AB4B0: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802AB4B4: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802AB4B8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802AB4BC: bne         $t2, $at, L_802AB4D8
    if (ctx->r10 != ctx->r1) {
        // 0x802AB4C0: addiu       $t3, $zero, 0x2C
        ctx->r11 = ADD32(0, 0X2C);
            goto L_802AB4D8;
    }
L_802AB4C0:
    // 0x802AB4C0: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
    // 0x802AB4C4: addiu       $t4, $zero, 0x2D
    ctx->r12 = ADD32(0, 0X2D);
    // 0x802AB4C8: addiu       $t5, $zero, 0x2B
    ctx->r13 = ADD32(0, 0X2B);
    // 0x802AB4CC: sw          $t3, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r11;
    // 0x802AB4D0: sw          $t4, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r12;
    // 0x802AB4D4: sw          $t5, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r13;
L_802AB4D8:
    // 0x802AB4D8: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AB4DC: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AB4E0: lui         $a1, 0x41C0
    ctx->r5 = S32(0X41C0 << 16);
    // 0x802AB4E4: jal         0x802D51DC
    // 0x802AB4E8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802AB4E8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_9:
    // 0x802AB4EC: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AB4F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802AB4F4: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AB4F8: jal         0x802C4A20
    // 0x802AB4FC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802AB4FC: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802AB500: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AB504: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802AB508: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AB50C: jal         0x802C4A20
    // 0x802AB510: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_11;
    // 0x802AB510: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_11:
    // 0x802AB514: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AB518: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x802AB51C: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802AB520: jal         0x802C4A20
    // 0x802AB524: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802AB524: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802AB528: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AB52C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802AB530: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    // 0x802AB534: jal         0x802C4A20
    // 0x802AB538: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_13;
    // 0x802AB538: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_13:
    // 0x802AB53C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802AB540: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AB544: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x802AB548: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AB54C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802AB550: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AB554: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802AB558: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AB55C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AB560: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AB564: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802AB568: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x802AB56C: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x802AB570: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AB574: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802AB578: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802AB57C: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
    // 0x802AB580: jal         0x8022970C
    // 0x802AB584: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_14;
    // 0x802AB584: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_14:
    // 0x802AB588: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802AB58C: jal         0x8022970C
    // 0x802AB590: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x802AB590: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_15:
    // 0x802AB594: lui         $a1, 0xC0D1
    ctx->r5 = S32(0XC0D1 << 16);
    // 0x802AB598: lui         $a2, 0xC052
    ctx->r6 = S32(0XC052 << 16);
    // 0x802AB59C: ori         $a2, $a2, 0x2D0E
    ctx->r6 = ctx->r6 | 0X2D0E;
    // 0x802AB5A0: ori         $a1, $a1, 0xB22D
    ctx->r5 = ctx->r5 | 0XB22D;
    // 0x802AB5A4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AB5A8: jal         0x8022A0D0
    // 0x802AB5AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_16;
    // 0x802AB5AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_16:
    // 0x802AB5B0: lui         $a1, 0x40D1
    ctx->r5 = S32(0X40D1 << 16);
    // 0x802AB5B4: lui         $a2, 0xC052
    ctx->r6 = S32(0XC052 << 16);
    // 0x802AB5B8: ori         $a2, $a2, 0x2D0E
    ctx->r6 = ctx->r6 | 0X2D0E;
    // 0x802AB5BC: ori         $a1, $a1, 0xB22D
    ctx->r5 = ctx->r5 | 0XB22D;
    // 0x802AB5C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802AB5C4: jal         0x8022A0D0
    // 0x802AB5C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802AB5C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_17:
    // 0x802AB5CC: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802AB5D0: jal         0x803169A0
    // 0x802AB5D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_18;
    // 0x802AB5D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x802AB5D8: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802AB5DC: jal         0x803169A0
    // 0x802AB5E0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    static_3_803169A0(rdram, ctx);
        goto after_19;
    // 0x802AB5E0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_19:
    // 0x802AB5E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AB5E8: sb          $t6, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r14;
    // 0x802AB5EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AB5F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AB5F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802AB5F8: jr          $ra
    // 0x802AB5FC: nop

    return;
    // 0x802AB5FC: nop

;}
RECOMP_FUNC void D_80233C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233C98: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80233C9C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80233CA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233CA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233CA8: blez        $v0, L_80233CE0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80233CAC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80233CE0;
    }
    // 0x80233CAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80233CB0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80233CB4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_80233CB8:
    // 0x80233CB8: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x80233CBC: bne         $t6, $zero, L_80233CD0
    if (ctx->r14 != 0) {
        // 0x80233CC0: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80233CD0;
    }
    // 0x80233CC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80233CC4: sb          $t7, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r15;
    // 0x80233CC8: b           L_80233CF8
    // 0x80233CCC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80233CF8;
    // 0x80233CCC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80233CD0:
    // 0x80233CD0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80233CD4: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80233CD8: bne         $at, $zero, L_80233CB8
    if (ctx->r1 != 0) {
        // 0x80233CDC: addiu       $v1, $v1, 0x64
        ctx->r3 = ADD32(ctx->r3, 0X64);
            goto L_80233CB8;
    }
    // 0x80233CDC: addiu       $v1, $v1, 0x64
    ctx->r3 = ADD32(ctx->r3, 0X64);
L_80233CE0:
    // 0x80233CE0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80233CE4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80233CE8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80233CEC: jal         0x80231C58
    // 0x80233CF0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_0;
    // 0x80233CF0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_0:
    // 0x80233CF4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80233CF8:
    // 0x80233CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233D00: jr          $ra
    // 0x80233D04: nop

    return;
    // 0x80233D04: nop

;}
RECOMP_FUNC void D_80293268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802932E8: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x802932EC: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x802932F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802932F4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802932F8: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x802932FC: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x80293300: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80293304: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x80293308: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8029330C: addiu       $t6, $sp, 0xA0
    ctx->r14 = ADD32(ctx->r29, 0XA0);
    // 0x80293310: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80293314: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80293318: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8029331C: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x80293320: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80293324: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x80293328: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8029332C: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x80293330: addiu       $a3, $sp, 0xA8
    ctx->r7 = ADD32(ctx->r29, 0XA8);
    // 0x80293334: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80293338: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x8029333C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80293340: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x80293344: jal         0x802AD568
    // 0x80293348: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x80293348: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8029334C: blez        $v0, L_802934FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80293350: addiu       $s1, $sp, 0x5C
        ctx->r17 = ADD32(ctx->r29, 0X5C);
            goto L_802934FC;
    }
    // 0x80293350: addiu       $s1, $sp, 0x5C
    ctx->r17 = ADD32(ctx->r29, 0X5C);
    // 0x80293354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293358: jal         0x802C51D0
    // 0x8029335C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x8029335C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80293360: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80293364: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293368: lui         $a2, 0x40E0
    ctx->r6 = S32(0X40E0 << 16);
    // 0x8029336C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80293370: jal         0x8022A0D0
    // 0x80293374: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x80293374: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_2:
    // 0x80293378: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8029337C: lwc1        $f18, 0x94($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80293380: lwc1        $f20, 0x8C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80293384: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293388: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x8029338C: jal         0x8022970C
    // 0x80293390: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x80293390: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80293394: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80293398: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8029339C: swc1        $f20, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f20.u32l;
    // 0x802933A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802933A4: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x802933A8: jal         0x802C4838
    // 0x802933AC: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    static_3_802C4838(rdram, ctx);
        goto after_4;
    // 0x802933AC: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x802933B0: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802933B4: lwc1        $f10, 0x104($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X104);
    // 0x802933B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802933BC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802933C0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802933C4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802933C8: jal         0x802D01D4
    // 0x802933CC: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802933CC: nop

    after_5:
    // 0x802933D0: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802933D4: lwc1        $f4, 0x108($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X108);
    // 0x802933D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802933DC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802933E0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802933E4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802933E8: jal         0x802D01D4
    // 0x802933EC: nop

    static_3_802D01D4(rdram, ctx);
        goto after_6;
    // 0x802933EC: nop

    after_6:
    // 0x802933F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802933F4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802933F8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802933FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80293400: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80293404: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80293408: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8029340C: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80293410: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80293414: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80293418: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8029341C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80293420: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80293424: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80293428: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x8029342C: jal         0x802AAEC0
    // 0x80293430: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_802AAEC0(rdram, ctx);
        goto after_7;
    // 0x80293430: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_7:
    // 0x80293434: beq         $v0, $zero, L_8029346C
    if (ctx->r2 == 0) {
        // 0x80293438: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8029346C;
    }
    // 0x80293438: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029343C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80293440: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80293444: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80293448: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8029344C: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x80293450: swc1        $f22, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f22.u32l;
    // 0x80293454: jal         0x802E9420
    // 0x80293458: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    static_3_802E9420(rdram, ctx);
        goto after_8;
    // 0x80293458: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    after_8:
    // 0x8029345C: lui         $a1, 0x3EA8
    ctx->r5 = S32(0X3EA8 << 16);
    // 0x80293460: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80293464: jal         0x802E982C
    // 0x80293468: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    static_3_802E982C(rdram, ctx);
        goto after_9;
    // 0x80293468: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    after_9:
L_8029346C:
    // 0x8029346C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80293470: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80293474: lui         $a2, 0x40E0
    ctx->r6 = S32(0X40E0 << 16);
    // 0x80293478: jal         0x8022A0D0
    // 0x8029347C: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_10;
    // 0x8029347C: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_10:
    // 0x80293480: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80293484: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80293488: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8029348C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80293490: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80293494: lw          $t1, 0x8C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8C);
    // 0x80293498: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8029349C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802934A0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802934A4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802934A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802934AC: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x802934B0: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x802934B4: jal         0x802AAEC0
    // 0x802934B8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    static_3_802AAEC0(rdram, ctx);
        goto after_11;
    // 0x802934B8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_11:
    // 0x802934BC: beq         $v0, $zero, L_802934F4
    if (ctx->r2 == 0) {
        // 0x802934C0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802934F4;
    }
    // 0x802934C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802934C4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802934C8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802934CC: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802934D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x802934D4: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x802934D8: swc1        $f22, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f22.u32l;
    // 0x802934DC: jal         0x802E9420
    // 0x802934E0: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    static_3_802E9420(rdram, ctx);
        goto after_12;
    // 0x802934E0: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    after_12:
    // 0x802934E4: lui         $a1, 0x3EA8
    ctx->r5 = S32(0X3EA8 << 16);
    // 0x802934E8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x802934EC: jal         0x802E982C
    // 0x802934F0: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    static_3_802E982C(rdram, ctx);
        goto after_13;
    // 0x802934F0: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    after_13:
L_802934F4:
    // 0x802934F4: lwc1        $f16, 0xBC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x802934F8: swc1        $f16, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f16.u32l;
L_802934FC:
    // 0x802934FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80293500: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80293504: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x80293508: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x8029350C: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80293510: jr          $ra
    // 0x80293514: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80293514: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void D_802C8B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8B84: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802C8B88: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802C8B8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C8B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C8B94: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802C8B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802C8B9C: jal         0x802916EC
    // 0x802C8BA0: addiu       $a0, $v0, 0x20
    ctx->r4 = ADD32(ctx->r2, 0X20);
    static_3_802916EC(rdram, ctx);
        goto after_0;
    // 0x802C8BA0: addiu       $a0, $v0, 0x20
    ctx->r4 = ADD32(ctx->r2, 0X20);
    after_0:
    // 0x802C8BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C8BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C8BAC: jr          $ra
    // 0x802C8BB0: nop

    return;
    // 0x802C8BB0: nop

;}
RECOMP_FUNC void D_802E84EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E856C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E8570: jr          $ra
    // 0x802E8574: sb          $a1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r5;
    return;
    // 0x802E8574: sb          $a1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_80249668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249668: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x8024966C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80249670: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x80249674: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x80249678: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8024967C: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x80249680: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80249684: or          $v1, $t6, $t9
    ctx->r3 = ctx->r14 | ctx->r25;
    // 0x80249688: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x8024968C: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80249690: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80249694: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80249698: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x8024969C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x802496A0: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x802496A4: or          $v1, $v1, $t8
    ctx->r3 = ctx->r3 | ctx->r24;
    // 0x802496A8: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x802496AC: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x802496B0: jr          $ra
    // 0x802496B4: or          $v0, $v1, $t6
    ctx->r2 = ctx->r3 | ctx->r14;
    return;
    // 0x802496B4: or          $v0, $v1, $t6
    ctx->r2 = ctx->r3 | ctx->r14;
;}
RECOMP_FUNC void D_802C8E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8EA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802C8EAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C8EB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802C8EB4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802C8EB8: jal         0x8022BE54
    // 0x802C8EBC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    static_3_8022BE54(rdram, ctx);
        goto after_0;
    // 0x802C8EBC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x802C8EC0: bne         $v0, $zero, L_802C8ED4
    if (ctx->r2 != 0) {
        // 0x802C8EC4: sw          $v0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r2;
            goto L_802C8ED4;
    }
    // 0x802C8EC4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802C8EC8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C8ECC: jal         0x80231A24
    // 0x802C8ED0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x802C8ED0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
L_802C8ED4:
    // 0x802C8ED4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802C8ED8: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x802C8EDC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802C8EE0: jal         0x8022BE54
    // 0x802C8EE4: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    static_3_8022BE54(rdram, ctx);
        goto after_2;
    // 0x802C8EE4: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    after_2:
    // 0x802C8EE8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802C8EEC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C8EF0: bne         $v0, $zero, L_802C8F04
    if (ctx->r2 != 0) {
        // 0x802C8EF4: sw          $v0, 0x54($t7)
        MEM_W(0X54, ctx->r15) = ctx->r2;
            goto L_802C8F04;
    }
    // 0x802C8EF4: sw          $v0, 0x54($t7)
    MEM_W(0X54, ctx->r15) = ctx->r2;
    // 0x802C8EF8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802C8EFC: jal         0x80231A24
    // 0x802C8F00: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802C8F00: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
L_802C8F04:
    // 0x802C8F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C8F08: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802C8F0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802C8F10: jr          $ra
    // 0x802C8F14: nop

    return;
    // 0x802C8F14: nop

;}
RECOMP_FUNC void D_802377D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802377D8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802377DC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802377E0: lw          $t6, 0x2C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C);
    // 0x802377E4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802377E8: jr          $ra
    // 0x802377EC: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
    return;
    // 0x802377EC: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
;}
RECOMP_FUNC void D_802E39C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3A48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802E3A4C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802E3A50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802E3A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E3A58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802E3A5C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802E3A60: bne         $t6, $at, L_802E3AA4
    if (ctx->r14 != ctx->r1) {
        // 0x802E3A64: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_802E3AA4;
    }
    // 0x802E3A64: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802E3A68: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802E3A6C: jal         0x80302980
    // 0x802E3A70: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_0;
    // 0x802E3A70: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802E3A74: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x802E3A78: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802E3A7C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E3A80: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    // 0x802E3A84: addiu       $a1, $zero, 0x87
    ctx->r5 = ADD32(0, 0X87);
    // 0x802E3A88: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802E3A8C: jal         0x80302988
    // 0x802E3A90: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_1;
    // 0x802E3A90: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802E3A94: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x802E3A98: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x802E3A9C: jal         0x80302A7C
    // 0x802E3AA0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_2;
    // 0x802E3AA0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
L_802E3AA4:
    // 0x802E3AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E3AA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802E3AAC: jr          $ra
    // 0x802E3AB0: nop

    return;
    // 0x802E3AB0: nop

;}
RECOMP_FUNC void D_802E1334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E13B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E13B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E13BC: bne         $a0, $zero, L_802E13D4
    if (ctx->r4 != 0) {
        // 0x802E13C0: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_802E13D4;
    }
    // 0x802E13C0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E13C4: jal         0x802C67EC
    // 0x802E13C8: addiu       $a0, $zero, 0x380
    ctx->r4 = ADD32(0, 0X380);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802E13C8: addiu       $a0, $zero, 0x380
    ctx->r4 = ADD32(0, 0X380);
    after_0:
    // 0x802E13CC: beq         $v0, $zero, L_802E1460
    if (ctx->r2 == 0) {
        // 0x802E13D0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_802E1460;
    }
    // 0x802E13D0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_802E13D4:
    // 0x802E13D4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802E13D8: jal         0x80317344
    // 0x802E13DC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_80317344(rdram, ctx);
        goto after_1;
    // 0x802E13DC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x802E13E0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E13E4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E13E8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E13EC: sw          $t6, 0x1A0($a2)
    MEM_W(0X1A0, ctx->r6) = ctx->r14;
    // 0x802E13F0: jal         0x802D3D30
    // 0x802E13F4: addiu       $a0, $a2, 0x1A4
    ctx->r4 = ADD32(ctx->r6, 0X1A4);
    static_3_802D3D30(rdram, ctx);
        goto after_2;
    // 0x802E13F4: addiu       $a0, $a2, 0x1A4
    ctx->r4 = ADD32(ctx->r6, 0X1A4);
    after_2:
    // 0x802E13F8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802E13FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E1400: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802E1404: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x802E1408: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_802E140C:
    // 0x802E140C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802E1410: slti        $at, $a0, 0x7
    ctx->r1 = SIGNED(ctx->r4) < 0X7 ? 1 : 0;
    // 0x802E1414: sw          $v0, 0x290($v1)
    MEM_W(0X290, ctx->r3) = ctx->r2;
    // 0x802E1418: swc1        $f0, 0x2AC($v1)
    MEM_W(0X2AC, ctx->r3) = ctx->f0.u32l;
    // 0x802E141C: swc1        $f0, 0x2C8($v1)
    MEM_W(0X2C8, ctx->r3) = ctx->f0.u32l;
    // 0x802E1420: bne         $at, $zero, L_802E140C
    if (ctx->r1 != 0) {
        // 0x802E1424: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_802E140C;
    }
    // 0x802E1424: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802E1428: sw          $v0, 0x304($a2)
    MEM_W(0X304, ctx->r6) = ctx->r2;
    // 0x802E142C: sw          $v0, 0x308($a2)
    MEM_W(0X308, ctx->r6) = ctx->r2;
    // 0x802E1430: sw          $v0, 0x30C($a2)
    MEM_W(0X30C, ctx->r6) = ctx->r2;
    // 0x802E1434: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802E1438: addiu       $v1, $a2, 0xC
    ctx->r3 = ADD32(ctx->r6, 0XC);
    // 0x802E143C: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
L_802E1440:
    // 0x802E1440: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802E1444: sw          $v0, 0x304($v1)
    MEM_W(0X304, ctx->r3) = ctx->r2;
    // 0x802E1448: sw          $v0, 0x308($v1)
    MEM_W(0X308, ctx->r3) = ctx->r2;
    // 0x802E144C: sw          $v0, 0x30C($v1)
    MEM_W(0X30C, ctx->r3) = ctx->r2;
    // 0x802E1450: sw          $v0, 0x310($v1)
    MEM_W(0X310, ctx->r3) = ctx->r2;
    // 0x802E1454: bne         $a0, $a1, L_802E1440
    if (ctx->r4 != ctx->r5) {
        // 0x802E1458: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_802E1440;
    }
    // 0x802E1458: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x802E145C: sw          $v0, 0x280($a2)
    MEM_W(0X280, ctx->r6) = ctx->r2;
L_802E1460:
    // 0x802E1460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E1464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E1468: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x802E146C: jr          $ra
    // 0x802E1470: nop

    return;
    // 0x802E1470: nop

;}
RECOMP_FUNC void D_802911D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80291250: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80291254: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80291258: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8029125C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x80291260: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80291264: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80291268: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x8029126C: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x80291270: jal         0x802C5844
    // 0x80291274: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802C5844(rdram, ctx);
        goto after_0;
    // 0x80291274: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80291278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029127C: jal         0x802C51D0
    // 0x80291280: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x80291280: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x80291284: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80291288: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8029128C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80291290: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80291294: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80291298: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8029129C: jal         0x8022A0D0
    // 0x802912A0: nop

    static_3_8022A0D0(rdram, ctx);
        goto after_2;
    // 0x802912A0: nop

    after_2:
    // 0x802912A4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802912A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802912AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802912B0: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    // 0x802912B4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x802912B8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802912BC: lw          $t6, 0x8C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8C);
    // 0x802912C0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802912C4: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x802912C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802912CC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802912D0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802912D4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x802912D8: jal         0x802AA6F4
    // 0x802912DC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    static_3_802AA6F4(rdram, ctx);
        goto after_3;
    // 0x802912DC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_3:
    // 0x802912E0: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x802912E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802912E8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802912EC: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802912F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802912F4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802912F8: jal         0x8022A0D0
    // 0x802912FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_4;
    // 0x802912FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_4:
    // 0x80291300: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80291304: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80291308: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8029130C: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    // 0x80291310: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80291314: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80291318: lw          $t9, 0x8C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8C);
    // 0x8029131C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80291320: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x80291324: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80291328: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8029132C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80291330: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80291334: jal         0x802AA6F4
    // 0x80291338: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    static_3_802AA6F4(rdram, ctx);
        goto after_5;
    // 0x80291338: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_5:
    // 0x8029133C: beq         $s1, $zero, L_80291398
    if (ctx->r17 == 0) {
        // 0x80291340: sw          $v0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r2;
            goto L_80291398;
    }
    // 0x80291340: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80291344: beq         $v0, $zero, L_80291398
    if (ctx->r2 == 0) {
        // 0x80291348: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80291398;
    }
    // 0x80291348: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029134C: addiu       $a1, $zero, 0x1CC
    ctx->r5 = ADD32(0, 0X1CC);
    // 0x80291350: jal         0x802958BC
    // 0x80291354: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802958BC(rdram, ctx);
        goto after_6;
    // 0x80291354: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80291358: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8029135C: addiu       $a1, $zero, 0x1CC
    ctx->r5 = ADD32(0, 0X1CC);
    // 0x80291360: jal         0x802958BC
    // 0x80291364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802958BC(rdram, ctx);
        goto after_7;
    // 0x80291364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80291368: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029136C: jal         0x80295884
    // 0x80291370: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80295884(rdram, ctx);
        goto after_8;
    // 0x80291370: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x80291374: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80291378: jal         0x80295884
    // 0x8029137C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80295884(rdram, ctx);
        goto after_9;
    // 0x8029137C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_9:
    // 0x80291380: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80291384: jal         0x80295878
    // 0x80291388: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    static_3_80295878(rdram, ctx);
        goto after_10;
    // 0x80291388: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_10:
    // 0x8029138C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80291390: jal         0x80295878
    // 0x80291394: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_80295878(rdram, ctx);
        goto after_11;
    // 0x80291394: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_11:
L_80291398:
    // 0x80291398: lw          $t2, 0x18C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18C);
    // 0x8029139C: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802913A0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x802913A4: sw          $t3, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = ctx->r11;
    // 0x802913A8: swc1        $f8, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f8.u32l;
    // 0x802913AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802913B0: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x802913B4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x802913B8: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x802913BC: jr          $ra
    // 0x802913C0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x802913C0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void D_8021B7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021B7E8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021B7EC: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x8021B7F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021B7F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021B7F8: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B7FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021B800: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021B804: beq         $at, $zero, L_8021B824
    if (ctx->r1 == 0) {
        // 0x8021B808: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_8021B824;
    }
    // 0x8021B808: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021B80C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021B810: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021B814: jal         0x80231A24
    // 0x8021B818: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021B818: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8021B81C: b           L_8021B94C
    // 0x8021B820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021B94C;
    // 0x8021B820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B824:
    // 0x8021B824: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8021B828: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8021B82C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8021B830: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x8021B834: beql        $t8, $zero, L_8021B8A4
    if (ctx->r24 == 0) {
        // 0x8021B838: lhu         $a1, 0x0($a3)
        ctx->r5 = MEM_HU(ctx->r7, 0X0);
            goto L_8021B8A4;
    }
    goto skip_0;
    // 0x8021B838: lhu         $a1, 0x0($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X0);
    skip_0:
    // 0x8021B83C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8021B840: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8021B844: lhu         $a0, 0x0($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X0);
    // 0x8021B848: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8021B84C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021B850: blez        $a0, L_8021B878
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8021B854: lui         $a2, 0x0
        ctx->r6 = S32(0X0 << 16);
            goto L_8021B878;
    }
    // 0x8021B854: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8021B858: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_8021B85C:
    // 0x8021B85C: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8021B860: beq         $s0, $t9, L_8021B878
    if (ctx->r16 == ctx->r25) {
        // 0x8021B864: nop
    
            goto L_8021B878;
    }
    // 0x8021B864: nop

    // 0x8021B868: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8021B86C: slt         $at, $t0, $a0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B870: bne         $at, $zero, L_8021B85C
    if (ctx->r1 != 0) {
        // 0x8021B874: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_8021B85C;
    }
    // 0x8021B874: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8021B878:
    // 0x8021B878: bne         $t0, $a0, L_8021B928
    if (ctx->r8 != ctx->r4) {
        // 0x8021B87C: addiu       $a2, $a2, 0x0
        ctx->r6 = ADD32(ctx->r6, 0X0);
            goto L_8021B928;
    }
    // 0x8021B87C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x8021B880: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x8021B884: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x8021B888: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8021B88C: sh          $s0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r16;
    // 0x8021B890: lhu         $t5, 0x0($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X0);
    // 0x8021B894: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8021B898: b           L_8021B928
    // 0x8021B89C: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
        goto L_8021B928;
    // 0x8021B89C: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    // 0x8021B8A0: lhu         $a1, 0x0($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X0);
L_8021B8A4:
    // 0x8021B8A4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8021B8A8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x8021B8AC: blez        $a1, L_8021B928
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021B8B0: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8021B928;
    }
    // 0x8021B8B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8021B8B4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8021B8B8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
L_8021B8BC:
    // 0x8021B8BC: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x8021B8C0: slt         $at, $t0, $a0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B8C4: addu        $t8, $t7, $t1
    ctx->r24 = ADD32(ctx->r15, ctx->r9);
    // 0x8021B8C8: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8021B8CC: bnel        $s0, $t9, L_8021B91C
    if (ctx->r16 != ctx->r25) {
        // 0x8021B8D0: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8021B91C;
    }
    goto skip_1;
    // 0x8021B8D0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_1:
    // 0x8021B8D4: beq         $at, $zero, L_8021B908
    if (ctx->r1 == 0) {
        // 0x8021B8D8: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_8021B908;
    }
    // 0x8021B8D8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8021B8DC: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x8021B8E0: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
L_8021B8E4:
    // 0x8021B8E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021B8E8: addu        $v0, $t2, $a0
    ctx->r2 = ADD32(ctx->r10, ctx->r4);
    // 0x8021B8EC: lhu         $t3, 0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2);
    // 0x8021B8F0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8021B8F4: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x8021B8F8: lhu         $a1, 0x0($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X0);
    // 0x8021B8FC: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8021B900: bnel        $at, $zero, L_8021B8E4
    if (ctx->r1 != 0) {
        // 0x8021B904: lw          $t2, 0x0($a2)
        ctx->r10 = MEM_W(ctx->r6, 0X0);
            goto L_8021B8E4;
    }
    goto skip_2;
    // 0x8021B904: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    skip_2:
L_8021B908:
    // 0x8021B908: addiu       $t4, $a1, -0x1
    ctx->r12 = ADD32(ctx->r5, -0X1);
    // 0x8021B90C: andi        $a1, $t4, 0xFFFF
    ctx->r5 = ctx->r12 & 0XFFFF;
    // 0x8021B910: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8021B914: sh          $t4, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r12;
    // 0x8021B918: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_8021B91C:
    // 0x8021B91C: slt         $at, $t0, $a0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B920: bne         $at, $zero, L_8021B8BC
    if (ctx->r1 != 0) {
        // 0x8021B924: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_8021B8BC;
    }
    // 0x8021B924: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_8021B928:
    // 0x8021B928: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021B92C: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021B930: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x8021B934: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8021B938: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x8021B93C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8021B940: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021B944: sb          $t5, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r13;
    // 0x8021B948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021B94C:
    // 0x8021B94C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021B950: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021B954: jr          $ra
    // 0x8021B958: nop

    return;
    // 0x8021B958: nop

;}
RECOMP_FUNC void D_802ED764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ED7E4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802ED7E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ED7EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802ED7F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802ED7F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ED7F8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ED7FC: addiu       $t6, $zero, 0x1A
    ctx->r14 = ADD32(0, 0X1A);
    // 0x802ED800: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802ED804: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802ED808: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ED80C: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ED810: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ED814: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ED818: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ED81C: sh          $zero, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = 0;
    // 0x802ED820: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ED824: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ED828: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ED82C: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x802ED830: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    // 0x802ED834: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ED838: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802ED83C: sb          $t9, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r25;
    // 0x802ED840: jr          $ra
    // 0x802ED844: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802ED844: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80248040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80248048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8024804C: jal         0x8024A710
    // 0x80248050: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_8024A710(rdram, ctx);
        goto after_0;
    // 0x80248050: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80248054: beq         $v0, $zero, L_80248064
    if (ctx->r2 == 0) {
        // 0x80248058: nop
    
            goto L_80248064;
    }
    // 0x80248058: nop

    // 0x8024805C: b           L_8024807C
    // 0x80248060: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8024807C;
    // 0x80248060: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80248064:
    // 0x80248064: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80248068: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8024806C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80248070: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80248074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80248078: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
L_8024807C:
    // 0x8024807C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80248080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80248084: jr          $ra
    // 0x80248088: nop

    return;
    // 0x80248088: nop

;}
RECOMP_FUNC void D_8022D744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D744: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8022D748: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022D74C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022D750: lbu         $t0, 0x27($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X27);
    // 0x8022D754: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8022D758: beql        $t0, $zero, L_8022DFE4
    if (ctx->r8 == 0) {
        // 0x8022D75C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8022DFE4;
    }
    goto skip_0;
    // 0x8022D75C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x8022D760: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x8022D764: beql        $v0, $zero, L_8022D778
    if (ctx->r2 == 0) {
        // 0x8022D768: lbu         $t1, 0x2($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X2);
            goto L_8022D778;
    }
    goto skip_1;
    // 0x8022D768: lbu         $t1, 0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2);
    skip_1:
    // 0x8022D76C: jalr        $v0
    // 0x8022D770: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D770: nop

    after_0:
    // 0x8022D774: lbu         $t1, 0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2);
L_8022D778:
    // 0x8022D778: bnel        $t1, $zero, L_8022D7A0
    if (ctx->r9 != 0) {
        // 0x8022D77C: lhu         $a0, 0x8($s0)
        ctx->r4 = MEM_HU(ctx->r16, 0X8);
            goto L_8022D7A0;
    }
    goto skip_2;
    // 0x8022D77C: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    skip_2:
    // 0x8022D780: lw          $v0, 0x74($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X74);
    // 0x8022D784: beql        $v0, $zero, L_8022DFE4
    if (ctx->r2 == 0) {
        // 0x8022D788: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8022DFE4;
    }
    goto skip_3;
    // 0x8022D788: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x8022D78C: jalr        $v0
    // 0x8022D790: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022D790: nop

    after_1:
    // 0x8022D794: b           L_8022DFE4
    // 0x8022D798: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8022DFE4;
    // 0x8022D798: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022D79C: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
L_8022D7A0:
    // 0x8022D7A0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8022D7A4: beql        $a0, $at, L_8022D7C4
    if (ctx->r4 == ctx->r1) {
        // 0x8022D7A8: lhu         $v0, 0xA($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0XA);
            goto L_8022D7C4;
    }
    goto skip_4;
    // 0x8022D7A8: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    skip_4:
    // 0x8022D7AC: jal         0x8021E3D0
    // 0x8022D7B0: nop

    static_3_8021E3D0(rdram, ctx);
        goto after_2;
    // 0x8022D7B0: nop

    after_2:
    // 0x8022D7B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8022D7B8: b           L_8022D7DC
    // 0x8022D7BC: addiu       $v1, $zero, 0xFFF
    ctx->r3 = ADD32(0, 0XFFF);
        goto L_8022D7DC;
    // 0x8022D7BC: addiu       $v1, $zero, 0xFFF
    ctx->r3 = ADD32(0, 0XFFF);
    // 0x8022D7C0: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
L_8022D7C4:
    // 0x8022D7C4: addiu       $v1, $zero, 0xFFF
    ctx->r3 = ADD32(0, 0XFFF);
    // 0x8022D7C8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8022D7CC: beq         $v1, $v0, L_8022D7DC
    if (ctx->r3 == ctx->r2) {
        // 0x8022D7D0: nop
    
            goto L_8022D7DC;
    }
    // 0x8022D7D0: nop

    // 0x8022D7D4: b           L_8022D7DC
    // 0x8022D7D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8022D7DC;
    // 0x8022D7D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8022D7DC:
    // 0x8022D7DC: beq         $a0, $v1, L_8022D7FC
    if (ctx->r4 == ctx->r3) {
        // 0x8022D7E0: lui         $t2, 0x0
        ctx->r10 = S32(0X0 << 16);
            goto L_8022D7FC;
    }
    // 0x8022D7E0: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8022D7E4: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x8022D7E8: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x8022D7EC: lw          $t5, 0x2C($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X2C);
    // 0x8022D7F0: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x8022D7F4: b           L_8022D800
    // 0x8022D7F8: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
        goto L_8022D800;
    // 0x8022D7F8: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
L_8022D7FC:
    // 0x8022D7FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8022D800:
    // 0x8022D800: beql        $a0, $v1, L_8022DE10
    if (ctx->r4 == ctx->r3) {
        // 0x8022D804: lbu         $t2, 0x27($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X27);
            goto L_8022DE10;
    }
    goto skip_5;
    // 0x8022D804: lbu         $t2, 0x27($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X27);
    skip_5:
    // 0x8022D808: beql        $a1, $zero, L_8022DE10
    if (ctx->r5 == 0) {
        // 0x8022D80C: lbu         $t2, 0x27($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X27);
            goto L_8022DE10;
    }
    goto skip_6;
    // 0x8022D80C: lbu         $t2, 0x27($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X27);
    skip_6:
    // 0x8022D810: jal         0x80223468
    // 0x8022D814: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    static_3_80223468(rdram, ctx);
        goto after_3;
    // 0x8022D814: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    after_3:
    // 0x8022D818: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8022D81C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8022D820: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8022D824: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022D828: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8022D82C: nop

    // 0x8022D830: bc1f        L_8022D86C
    if (!c1cs) {
        // 0x8022D834: nop
    
            goto L_8022D86C;
    }
    // 0x8022D834: nop

    // 0x8022D838: sh          $zero, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = 0;
    // 0x8022D83C: sh          $zero, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = 0;
    // 0x8022D840: lhu         $v0, 0xA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA);
    // 0x8022D844: sh          $zero, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = 0;
    // 0x8022D848: sll         $t3, $v0, 5
    ctx->r11 = S32(ctx->r2 << 5);
    // 0x8022D84C: sh          $t3, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r11;
    // 0x8022D850: sh          $t3, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r11;
    // 0x8022D854: lhu         $v1, 0xC($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XC);
    // 0x8022D858: sh          $zero, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = 0;
    // 0x8022D85C: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x8022D860: sh          $t7, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r15;
    // 0x8022D864: b           L_8022DDB4
    // 0x8022D868: sh          $t7, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r15;
        goto L_8022DDB4;
    // 0x8022D868: sh          $t7, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r15;
L_8022D86C:
    // 0x8022D86C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8022D870: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8022D874: mul.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8022D878: jal         0x8022AA60
    // 0x8022D87C: swc1        $f12, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f12.u32l;
    static_3_8022AA60(rdram, ctx);
        goto after_4;
    // 0x8022D87C: swc1        $f12, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x8022D880: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8022D884: jal         0x8022AC20
    // 0x8022D888: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    static_3_8022AC20(rdram, ctx);
        goto after_5;
    // 0x8022D888: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8022D88C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8022D890: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8022D894: lhu         $t8, 0xA($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XA);
    // 0x8022D898: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8022D89C: bgez        $t8, L_8022D8B0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8022D8A0: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8022D8B0;
    }
    // 0x8022D8A0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022D8A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022D8A8: nop

    // 0x8022D8AC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8022D8B0:
    // 0x8022D8B0: lhu         $t9, 0xC($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XC);
    // 0x8022D8B4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8022D8B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022D8BC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8022D8C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8022D8C4: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8022D8C8: bgez        $t9, L_8022D8DC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8022D8CC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8022D8DC;
    }
    // 0x8022D8CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022D8D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8022D8D4: nop

    // 0x8022D8D8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8022D8DC:
    // 0x8022D8DC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8022D8E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022D8E4: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    // 0x8022D8E8: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8022D8EC: mul.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8022D8F0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022D8F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022D8F8: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8022D8FC: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x8022D900: mul.s       $f18, $f12, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8022D904: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8022D908: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8022D90C: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8022D910: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8022D914: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022D918: nop

    // 0x8022D91C: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8022D920: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022D924: nop

    // 0x8022D928: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022D92C: beql        $t1, $zero, L_8022D97C
    if (ctx->r9 == 0) {
        // 0x8022D930: mfc1        $t1, $f10
        ctx->r9 = (int32_t)ctx->f10.u32l;
            goto L_8022D97C;
    }
    goto skip_7;
    // 0x8022D930: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    skip_7:
    // 0x8022D934: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8022D938: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022D93C: sub.s       $f10, $f4, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8022D940: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022D944: nop

    // 0x8022D948: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8022D94C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022D950: nop

    // 0x8022D954: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022D958: bne         $t1, $zero, L_8022D970
    if (ctx->r9 != 0) {
        // 0x8022D95C: nop
    
            goto L_8022D970;
    }
    // 0x8022D95C: nop

    // 0x8022D960: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8022D964: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022D968: b           L_8022D988
    // 0x8022D96C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8022D988;
    // 0x8022D96C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8022D970:
    // 0x8022D970: b           L_8022D988
    // 0x8022D974: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8022D988;
    // 0x8022D974: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8022D978: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
L_8022D97C:
    // 0x8022D97C: nop

    // 0x8022D980: bltz        $t1, L_8022D970
    if (SIGNED(ctx->r9) < 0) {
        // 0x8022D984: nop
    
            goto L_8022D970;
    }
    // 0x8022D984: nop

L_8022D988:
    // 0x8022D988: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8022D98C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x8022D990: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8022D994: mul.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8022D998: sh          $t1, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r9;
    // 0x8022D99C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022D9A0: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8022D9A4: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8022D9A8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8022D9AC: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8022D9B0: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8022D9B4: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8022D9B8: add.s       $f6, $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8022D9BC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8022D9C0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022D9C4: nop

    // 0x8022D9C8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022D9CC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022D9D0: nop

    // 0x8022D9D4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8022D9D8: beql        $t5, $zero, L_8022DA28
    if (ctx->r13 == 0) {
        // 0x8022D9DC: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_8022DA28;
    }
    goto skip_8;
    // 0x8022D9DC: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_8:
    // 0x8022D9E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022D9E4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8022D9E8: sub.s       $f6, $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f6.fl;
    // 0x8022D9EC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022D9F0: nop

    // 0x8022D9F4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022D9F8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022D9FC: nop

    // 0x8022DA00: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8022DA04: bne         $t5, $zero, L_8022DA1C
    if (ctx->r13 != 0) {
        // 0x8022DA08: nop
    
            goto L_8022DA1C;
    }
    // 0x8022DA08: nop

    // 0x8022DA0C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8022DA10: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DA14: b           L_8022DA34
    // 0x8022DA18: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8022DA34;
    // 0x8022DA18: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8022DA1C:
    // 0x8022DA1C: b           L_8022DA34
    // 0x8022DA20: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8022DA34;
    // 0x8022DA20: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8022DA24: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_8022DA28:
    // 0x8022DA28: nop

    // 0x8022DA2C: bltz        $t5, L_8022DA1C
    if (SIGNED(ctx->r13) < 0) {
        // 0x8022DA30: nop
    
            goto L_8022DA1C;
    }
    // 0x8022DA30: nop

L_8022DA34:
    // 0x8022DA34: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8022DA38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022DA3C: sh          $t5, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r13;
    // 0x8022DA40: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8022DA44: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DA48: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8022DA4C: add.s       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8022DA50: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8022DA54: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022DA58: nop

    // 0x8022DA5C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DA60: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022DA64: nop

    // 0x8022DA68: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022DA6C: beql        $t6, $zero, L_8022DABC
    if (ctx->r14 == 0) {
        // 0x8022DA70: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_8022DABC;
    }
    goto skip_9;
    // 0x8022DA70: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_9:
    // 0x8022DA74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DA78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022DA7C: sub.s       $f6, $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f6.fl;
    // 0x8022DA80: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022DA84: nop

    // 0x8022DA88: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DA8C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022DA90: nop

    // 0x8022DA94: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022DA98: bne         $t6, $zero, L_8022DAB0
    if (ctx->r14 != 0) {
        // 0x8022DA9C: nop
    
            goto L_8022DAB0;
    }
    // 0x8022DA9C: nop

    // 0x8022DAA0: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8022DAA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DAA8: b           L_8022DAC8
    // 0x8022DAAC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8022DAC8;
    // 0x8022DAAC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8022DAB0:
    // 0x8022DAB0: b           L_8022DAC8
    // 0x8022DAB4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8022DAC8;
    // 0x8022DAB4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8022DAB8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_8022DABC:
    // 0x8022DABC: nop

    // 0x8022DAC0: bltz        $t6, L_8022DAB0
    if (SIGNED(ctx->r14) < 0) {
        // 0x8022DAC4: nop
    
            goto L_8022DAB0;
    }
    // 0x8022DAC4: nop

L_8022DAC8:
    // 0x8022DAC8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8022DACC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022DAD0: sh          $t6, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r14;
    // 0x8022DAD4: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8022DAD8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DADC: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x8022DAE0: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8022DAE4: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022DAE8: add.s       $f6, $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8022DAEC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8022DAF0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8022DAF4: nop

    // 0x8022DAF8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DAFC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8022DB00: nop

    // 0x8022DB04: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8022DB08: beql        $t7, $zero, L_8022DB58
    if (ctx->r15 == 0) {
        // 0x8022DB0C: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_8022DB58;
    }
    goto skip_10;
    // 0x8022DB0C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_10:
    // 0x8022DB10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DB14: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022DB18: sub.s       $f6, $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f6.fl;
    // 0x8022DB1C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8022DB20: nop

    // 0x8022DB24: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DB28: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8022DB2C: nop

    // 0x8022DB30: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8022DB34: bne         $t7, $zero, L_8022DB4C
    if (ctx->r15 != 0) {
        // 0x8022DB38: nop
    
            goto L_8022DB4C;
    }
    // 0x8022DB38: nop

    // 0x8022DB3C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8022DB40: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DB44: b           L_8022DB64
    // 0x8022DB48: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8022DB64;
    // 0x8022DB48: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8022DB4C:
    // 0x8022DB4C: b           L_8022DB64
    // 0x8022DB50: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8022DB64;
    // 0x8022DB50: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8022DB54: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_8022DB58:
    // 0x8022DB58: nop

    // 0x8022DB5C: bltz        $t7, L_8022DB4C
    if (SIGNED(ctx->r15) < 0) {
        // 0x8022DB60: nop
    
            goto L_8022DB4C;
    }
    // 0x8022DB60: nop

L_8022DB64:
    // 0x8022DB64: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8022DB68: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022DB6C: sh          $t7, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r15;
    // 0x8022DB70: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8022DB74: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DB78: add.s       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8022DB7C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8022DB80: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8022DB84: nop

    // 0x8022DB88: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DB8C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8022DB90: nop

    // 0x8022DB94: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8022DB98: beql        $t9, $zero, L_8022DBE8
    if (ctx->r25 == 0) {
        // 0x8022DB9C: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_8022DBE8;
    }
    goto skip_11;
    // 0x8022DB9C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_11:
    // 0x8022DBA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DBA4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022DBA8: sub.s       $f6, $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f6.fl;
    // 0x8022DBAC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8022DBB0: nop

    // 0x8022DBB4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DBB8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8022DBBC: nop

    // 0x8022DBC0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8022DBC4: bne         $t9, $zero, L_8022DBDC
    if (ctx->r25 != 0) {
        // 0x8022DBC8: nop
    
            goto L_8022DBDC;
    }
    // 0x8022DBC8: nop

    // 0x8022DBCC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8022DBD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DBD4: b           L_8022DBF4
    // 0x8022DBD8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8022DBF4;
    // 0x8022DBD8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8022DBDC:
    // 0x8022DBDC: b           L_8022DBF4
    // 0x8022DBE0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8022DBF4;
    // 0x8022DBE0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8022DBE4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_8022DBE8:
    // 0x8022DBE8: nop

    // 0x8022DBEC: bltz        $t9, L_8022DBDC
    if (SIGNED(ctx->r25) < 0) {
        // 0x8022DBF0: nop
    
            goto L_8022DBDC;
    }
    // 0x8022DBF0: nop

L_8022DBF4:
    // 0x8022DBF4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8022DBF8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022DBFC: sh          $t9, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r25;
    // 0x8022DC00: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022DC04: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DC08: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x8022DC0C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8022DC10: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022DC14: nop

    // 0x8022DC18: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8022DC1C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022DC20: nop

    // 0x8022DC24: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022DC28: beql        $t1, $zero, L_8022DC78
    if (ctx->r9 == 0) {
        // 0x8022DC2C: mfc1        $t1, $f6
        ctx->r9 = (int32_t)ctx->f6.u32l;
            goto L_8022DC78;
    }
    goto skip_12;
    // 0x8022DC2C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    skip_12:
    // 0x8022DC30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DC34: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022DC38: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8022DC3C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8022DC40: nop

    // 0x8022DC44: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DC48: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8022DC4C: nop

    // 0x8022DC50: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8022DC54: bne         $t1, $zero, L_8022DC6C
    if (ctx->r9 != 0) {
        // 0x8022DC58: nop
    
            goto L_8022DC6C;
    }
    // 0x8022DC58: nop

    // 0x8022DC5C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8022DC60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DC64: b           L_8022DC84
    // 0x8022DC68: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8022DC84;
    // 0x8022DC68: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8022DC6C:
    // 0x8022DC6C: b           L_8022DC84
    // 0x8022DC70: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8022DC84;
    // 0x8022DC70: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8022DC74: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
L_8022DC78:
    // 0x8022DC78: nop

    // 0x8022DC7C: bltz        $t1, L_8022DC6C
    if (SIGNED(ctx->r9) < 0) {
        // 0x8022DC80: nop
    
            goto L_8022DC6C;
    }
    // 0x8022DC80: nop

L_8022DC84:
    // 0x8022DC84: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8022DC88: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8022DC8C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8022DC90: sh          $t1, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r9;
    // 0x8022DC94: sub.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8022DC98: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DC9C: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8022DCA0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8022DCA4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022DCA8: nop

    // 0x8022DCAC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8022DCB0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022DCB4: nop

    // 0x8022DCB8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8022DCBC: beql        $t5, $zero, L_8022DD0C
    if (ctx->r13 == 0) {
        // 0x8022DCC0: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_8022DD0C;
    }
    goto skip_13;
    // 0x8022DCC0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_13:
    // 0x8022DCC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022DCC8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8022DCCC: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8022DCD0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022DCD4: nop

    // 0x8022DCD8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DCDC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022DCE0: nop

    // 0x8022DCE4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8022DCE8: bne         $t5, $zero, L_8022DD00
    if (ctx->r13 != 0) {
        // 0x8022DCEC: nop
    
            goto L_8022DD00;
    }
    // 0x8022DCEC: nop

    // 0x8022DCF0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8022DCF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DCF8: b           L_8022DD18
    // 0x8022DCFC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8022DD18;
    // 0x8022DCFC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8022DD00:
    // 0x8022DD00: b           L_8022DD18
    // 0x8022DD04: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8022DD18;
    // 0x8022DD04: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8022DD08: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_8022DD0C:
    // 0x8022DD0C: nop

    // 0x8022DD10: bltz        $t5, L_8022DD00
    if (SIGNED(ctx->r13) < 0) {
        // 0x8022DD14: nop
    
            goto L_8022DD00;
    }
    // 0x8022DD14: nop

L_8022DD18:
    // 0x8022DD18: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8022DD1C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022DD20: sh          $t5, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r13;
    // 0x8022DD24: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8022DD28: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8022DD2C: add.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8022DD30: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8022DD34: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022DD38: nop

    // 0x8022DD3C: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8022DD40: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022DD44: nop

    // 0x8022DD48: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022DD4C: beql        $t6, $zero, L_8022DD9C
    if (ctx->r14 == 0) {
        // 0x8022DD50: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_8022DD9C;
    }
    goto skip_14;
    // 0x8022DD50: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_14:
    // 0x8022DD54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8022DD58: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8022DD5C: sub.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8022DD60: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8022DD64: nop

    // 0x8022DD68: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8022DD6C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8022DD70: nop

    // 0x8022DD74: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8022DD78: bne         $t6, $zero, L_8022DD90
    if (ctx->r14 != 0) {
        // 0x8022DD7C: nop
    
            goto L_8022DD90;
    }
    // 0x8022DD7C: nop

    // 0x8022DD80: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x8022DD84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022DD88: b           L_8022DDA8
    // 0x8022DD8C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8022DDA8;
    // 0x8022DD8C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8022DD90:
    // 0x8022DD90: b           L_8022DDA8
    // 0x8022DD94: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8022DDA8;
    // 0x8022DD94: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8022DD98: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_8022DD9C:
    // 0x8022DD9C: nop

    // 0x8022DDA0: bltz        $t6, L_8022DD90
    if (SIGNED(ctx->r14) < 0) {
        // 0x8022DDA4: nop
    
            goto L_8022DD90;
    }
    // 0x8022DDA4: nop

L_8022DDA8:
    // 0x8022DDA8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8022DDAC: sh          $t6, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r14;
    // 0x8022DDB0: nop

L_8022DDB4:
    // 0x8022DDB4: lbu         $t3, 0x5($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X5);
    // 0x8022DDB8: lhu         $v0, 0xCA($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XCA);
    // 0x8022DDBC: lhu         $t7, 0xC2($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XC2);
    // 0x8022DDC0: beql        $t3, $zero, L_8022DDE4
    if (ctx->r11 == 0) {
        // 0x8022DDC4: lbu         $t9, 0x6($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X6);
            goto L_8022DDE4;
    }
    goto skip_15;
    // 0x8022DDC4: lbu         $t9, 0x6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6);
    skip_15:
    // 0x8022DDC8: sh          $v0, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r2;
    // 0x8022DDCC: lhu         $v0, 0xC6($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XC6);
    // 0x8022DDD0: lhu         $t8, 0xBE($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XBE);
    // 0x8022DDD4: sh          $t7, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r15;
    // 0x8022DDD8: sh          $v0, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r2;
    // 0x8022DDDC: sh          $t8, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r24;
    // 0x8022DDE0: lbu         $t9, 0x6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X6);
L_8022DDE4:
    // 0x8022DDE4: lhu         $v0, 0xC8($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XC8);
    // 0x8022DDE8: lhu         $t0, 0xC0($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0XC0);
    // 0x8022DDEC: beql        $t9, $zero, L_8022DE10
    if (ctx->r25 == 0) {
        // 0x8022DDF0: lbu         $t2, 0x27($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X27);
            goto L_8022DE10;
    }
    goto skip_16;
    // 0x8022DDF0: lbu         $t2, 0x27($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X27);
    skip_16:
    // 0x8022DDF4: sh          $v0, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r2;
    // 0x8022DDF8: lhu         $v0, 0xC4($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XC4);
    // 0x8022DDFC: lhu         $t1, 0xBC($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0XBC);
    // 0x8022DE00: sh          $t0, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r8;
    // 0x8022DE04: sh          $v0, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r2;
    // 0x8022DE08: sh          $t1, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r9;
    // 0x8022DE0C: lbu         $t2, 0x27($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X27);
L_8022DE10:
    // 0x8022DE10: slti        $at, $t2, 0xFF
    ctx->r1 = SIGNED(ctx->r10) < 0XFF ? 1 : 0;
    // 0x8022DE14: beql        $at, $zero, L_8022DE28
    if (ctx->r1 == 0) {
        // 0x8022DE18: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_8022DE28;
    }
    goto skip_17;
    // 0x8022DE18: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    skip_17:
    // 0x8022DE1C: jal         0x802233EC
    // 0x8022DE20: lui         $a0, 0x480
    ctx->r4 = S32(0X480 << 16);
    static_3_802233EC(rdram, ctx);
        goto after_6;
    // 0x8022DE20: lui         $a0, 0x480
    ctx->r4 = S32(0X480 << 16);
    after_6:
    // 0x8022DE24: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
L_8022DE28:
    // 0x8022DE28: jal         0x80228DE0
    // 0x8022DE2C: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    func_80228DE0(rdram, ctx);
        goto after_7;
    // 0x8022DE2C: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    after_7:
    // 0x8022DE30: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8022DE34: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x8022DE38: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x8022DE3C: jal         0x8022A210
    // 0x8022DE40: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    static_3_8022A210(rdram, ctx);
        goto after_8;
    // 0x8022DE40: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    after_8:
    // 0x8022DE44: jal         0x80223108
    // 0x8022DE48: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    static_3_80223108(rdram, ctx);
        goto after_9;
    // 0x8022DE48: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    after_9:
    // 0x8022DE4C: jal         0x8021F4E4
    // 0x8022DE50: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_10;
    // 0x8022DE50: nop

    after_10:
    // 0x8022DE54: lbu         $t5, 0x4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4);
    // 0x8022DE58: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8022DE5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8022DE60: beq         $t5, $zero, L_8022DE74
    if (ctx->r13 == 0) {
        // 0x8022DE64: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_8022DE74;
    }
    // 0x8022DE64: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8022DE68: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022DE6C: b           L_8022DE78
    // 0x8022DE70: sh          $t4, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r12;
        goto L_8022DE78;
    // 0x8022DE70: sh          $t4, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r12;
L_8022DE74:
    // 0x8022DE74: sh          $t6, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r14;
L_8022DE78:
    // 0x8022DE78: lh          $v0, 0x2C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2C);
    // 0x8022DE7C: lhu         $t3, 0xC8($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0XC8);
    // 0x8022DE80: beq         $v0, $zero, L_8022DE98
    if (ctx->r2 == 0) {
        // 0x8022DE84: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_8022DE98;
    }
    // 0x8022DE84: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x8022DE88: jal         0x8021F48C
    // 0x8022DE8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_8021F48C(rdram, ctx);
        goto after_11;
    // 0x8022DE8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x8022DE90: b           L_8022DFBC
    // 0x8022DE94: nop

        goto L_8022DFBC;
    // 0x8022DE94: nop

L_8022DE98:
    // 0x8022DE98: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8022DE9C: lbu         $t7, 0x24($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X24);
    // 0x8022DEA0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022DEA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022DEA8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8022DEAC: lbu         $t8, 0x25($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X25);
    // 0x8022DEB0: lhu         $a3, 0xCA($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XCA);
    // 0x8022DEB4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8022DEB8: lbu         $t9, 0x26($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X26);
    // 0x8022DEBC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8022DEC0: lbu         $t0, 0x27($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X27);
    // 0x8022DEC4: sh          $a2, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r6;
    // 0x8022DEC8: jal         0x8021F35C
    // 0x8022DECC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    static_3_8021F35C(rdram, ctx);
        goto after_12;
    // 0x8022DECC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_12:
    // 0x8022DED0: lh          $a2, 0xB8($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XB8);
    // 0x8022DED4: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x8022DED8: sh          $t1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r9;
    // 0x8022DEDC: lhu         $t2, 0xC4($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0XC4);
    // 0x8022DEE0: lhu         $a3, 0xC6($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XC6);
    // 0x8022DEE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022DEE8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8022DEEC: lbu         $t5, 0x24($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X24);
    // 0x8022DEF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022DEF4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8022DEF8: lbu         $t4, 0x25($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X25);
    // 0x8022DEFC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8022DF00: lbu         $t6, 0x26($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X26);
    // 0x8022DF04: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8022DF08: lbu         $t3, 0x27($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X27);
    // 0x8022DF0C: jal         0x8021F35C
    // 0x8022DF10: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    static_3_8021F35C(rdram, ctx);
        goto after_13;
    // 0x8022DF10: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_13:
    // 0x8022DF14: lhu         $t7, 0xC0($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XC0);
    // 0x8022DF18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022DF1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022DF20: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8022DF24: lbu         $t8, 0x24($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X24);
    // 0x8022DF28: lh          $a2, 0xB6($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XB6);
    // 0x8022DF2C: lhu         $a3, 0xC2($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XC2);
    // 0x8022DF30: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8022DF34: lbu         $t9, 0x25($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X25);
    // 0x8022DF38: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8022DF3C: lbu         $t0, 0x26($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X26);
    // 0x8022DF40: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8022DF44: lbu         $t1, 0x27($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X27);
    // 0x8022DF48: jal         0x8021F35C
    // 0x8022DF4C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x8022DF4C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_14:
    // 0x8022DF50: lhu         $t2, 0xBC($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0XBC);
    // 0x8022DF54: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022DF58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022DF5C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8022DF60: lbu         $t5, 0x24($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X24);
    // 0x8022DF64: lh          $a2, 0xB6($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XB6);
    // 0x8022DF68: lhu         $a3, 0xBE($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0XBE);
    // 0x8022DF6C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8022DF70: lbu         $t4, 0x25($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X25);
    // 0x8022DF74: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8022DF78: lbu         $t6, 0x26($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X26);
    // 0x8022DF7C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8022DF80: lbu         $t3, 0x27($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X27);
    // 0x8022DF84: jal         0x8021F35C
    // 0x8022DF88: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x8022DF88: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_15:
    // 0x8022DF8C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022DF90: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022DF94: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8022DF98: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x8022DF9C: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x8022DFA0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8022DFA4: addiu       $t7, $s0, 0x2C
    ctx->r15 = ADD32(ctx->r16, 0X2C);
    // 0x8022DFA8: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8022DFAC: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x8022DFB0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8022DFB4: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x8022DFB8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_8022DFBC:
    // 0x8022DFBC: jal         0x8021FCD0
    // 0x8022DFC0: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_16;
    // 0x8022DFC0: nop

    after_16:
    // 0x8022DFC4: jal         0x802230E4
    // 0x8022DFC8: nop

    static_3_802230E4(rdram, ctx);
        goto after_17;
    // 0x8022DFC8: nop

    after_17:
    // 0x8022DFCC: lw          $v0, 0x74($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X74);
    // 0x8022DFD0: beql        $v0, $zero, L_8022DFE4
    if (ctx->r2 == 0) {
        // 0x8022DFD4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8022DFE4;
    }
    goto skip_18;
    // 0x8022DFD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_18:
    // 0x8022DFD8: jalr        $v0
    // 0x8022DFDC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_18;
    // 0x8022DFDC: nop

    after_18:
    // 0x8022DFE0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8022DFE4:
    // 0x8022DFE4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022DFE8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x8022DFEC: jr          $ra
    // 0x8022DFF0: nop

    return;
    // 0x8022DFF0: nop

;}
RECOMP_FUNC void D_802E0A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0AC0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802E0AC4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802E0AC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802E0ACC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802E0AD0: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x802E0AD4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802E0AD8: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x802E0ADC: jal         0x80224CA8
    // 0x802E0AE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_80224CA8(rdram, ctx);
        goto after_0;
    // 0x802E0AE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802E0AE4: jal         0x80224CA8
    // 0x802E0AE8: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    static_3_80224CA8(rdram, ctx);
        goto after_1;
    // 0x802E0AE8: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_1:
    // 0x802E0AEC: jal         0x80224CA8
    // 0x802E0AF0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    static_3_80224CA8(rdram, ctx);
        goto after_2;
    // 0x802E0AF0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_2:
    // 0x802E0AF4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802E0AF8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802E0AFC: addiu       $s0, $s1, 0x70
    ctx->r16 = ADD32(ctx->r17, 0X70);
    // 0x802E0B00: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x802E0B04: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802E0B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0B0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802E0B10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E0B14: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802E0B18: jal         0x8028D2E8
    // 0x802E0B1C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_8028D2E8(rdram, ctx);
        goto after_3;
    // 0x802E0B1C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_3:
    // 0x802E0B20: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E0B24: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802E0B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0B2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E0B30: jal         0x8028DDD8
    // 0x802E0B34: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_8028DDD8(rdram, ctx);
        goto after_4;
    // 0x802E0B34: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x802E0B38: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E0B3C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802E0B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0B44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802E0B48: jal         0x8028DDD8
    // 0x802E0B4C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    static_3_8028DDD8(rdram, ctx);
        goto after_5;
    // 0x802E0B4C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_5:
    // 0x802E0B50: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E0B54: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802E0B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0B5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E0B60: jal         0x8028DDD8
    // 0x802E0B64: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    static_3_8028DDD8(rdram, ctx);
        goto after_6;
    // 0x802E0B64: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_6:
    // 0x802E0B68: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802E0B6C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802E0B70: jal         0x8028DB8C
    // 0x802E0B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8028DB8C(rdram, ctx);
        goto after_7;
    // 0x802E0B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x802E0B78: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802E0B7C: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802E0B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0B84: jal         0x8028DED0
    // 0x802E0B88: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    static_3_8028DED0(rdram, ctx);
        goto after_8;
    // 0x802E0B88: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_8:
    // 0x802E0B8C: jal         0x8021BA90
    // 0x802E0B90: nop

    func_8021BA90(rdram, ctx);
        goto after_9;
    // 0x802E0B90: nop

    after_9:
    // 0x802E0B94: sw          $v0, 0x2A8($s1)
    MEM_W(0X2A8, ctx->r17) = ctx->r2;
    // 0x802E0B98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E0B9C: jal         0x8021ACB0
    // 0x802E0BA0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    static_3_8021ACB0(rdram, ctx);
        goto after_10;
    // 0x802E0BA0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_10:
    // 0x802E0BA4: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x802E0BA8: jal         0x8022970C
    // 0x802E0BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_11;
    // 0x802E0BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x802E0BB0: lui         $a1, 0xC54B
    ctx->r5 = S32(0XC54B << 16);
    // 0x802E0BB4: lui         $a2, 0x43AB
    ctx->r6 = S32(0X43AB << 16);
    // 0x802E0BB8: ori         $a2, $a2, 0x199A
    ctx->r6 = ctx->r6 | 0X199A;
    // 0x802E0BBC: ori         $a1, $a1, 0x1800
    ctx->r5 = ctx->r5 | 0X1800;
    // 0x802E0BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0BC4: jal         0x8022A0D0
    // 0x802E0BC8: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_12;
    // 0x802E0BC8: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    after_12:
    // 0x802E0BCC: lui         $a1, 0x4096
    ctx->r5 = S32(0X4096 << 16);
    // 0x802E0BD0: ori         $a1, $a1, 0xCBE8
    ctx->r5 = ctx->r5 | 0XCBE8;
    // 0x802E0BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E0BD8: jal         0x802D01D4
    // 0x802E0BDC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_13;
    // 0x802E0BDC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_13:
    // 0x802E0BE0: lw          $a0, 0x2A8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2A8);
    // 0x802E0BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E0BE8: jal         0x8021B4B0
    // 0x802E0BEC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_14;
    // 0x802E0BEC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_14:
    // 0x802E0BF0: lw          $a0, 0x2A8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2A8);
    // 0x802E0BF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802E0BF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802E0BFC: jal         0x8021B240
    // 0x802E0C00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_8021B240(rdram, ctx);
        goto after_15;
    // 0x802E0C00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x802E0C04: lw          $t8, 0x2A8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X2A8);
    // 0x802E0C08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802E0C0C: sw          $t8, 0x29C($s1)
    MEM_W(0X29C, ctx->r17) = ctx->r24;
    // 0x802E0C10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802E0C14: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802E0C18: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802E0C1C: jr          $ra
    // 0x802E0C20: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x802E0C20: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_8029EA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029EAB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029EABC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029EAC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029EAC4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8029EAC8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8029EACC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8029EAD0: lwc1        $f12, 0x10($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8029EAD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8029EAD8: lwc1        $f14, 0x14($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8029EADC: jal         0x8022AE1C
    // 0x8029EAE0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_8022AE1C(rdram, ctx);
        goto after_0;
    // 0x8029EAE0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_0:
    // 0x8029EAE4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8029EAE8: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x8029EAEC: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8029EAF0: lwc1        $f14, 0x14($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8029EAF4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8029EAF8: nop

    // 0x8029EAFC: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8029EB00: jal         0x8022AA40
    // 0x8029EB04: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_1;
    // 0x8029EB04: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x8029EB08: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8029EB0C: jal         0x8022AE1C
    // 0x8029EB10: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    static_3_8022AE1C(rdram, ctx);
        goto after_2;
    // 0x8029EB10: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x8029EB14: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8029EB18: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x8029EB1C: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8029EB20: lwc1        $f14, 0x28($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8029EB24: jal         0x8022AE1C
    // 0x8029EB28: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_8022AE1C(rdram, ctx);
        goto after_3;
    // 0x8029EB28: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_3:
    // 0x8029EB2C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8029EB30: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x8029EB34: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8029EB38: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8029EB3C: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
    // 0x8029EB40: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8029EB44: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8029EB48: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x8029EB4C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8029EB50: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8029EB54: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
    // 0x8029EB58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029EB5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8029EB60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029EB64: jr          $ra
    // 0x8029EB68: nop

    return;
    // 0x8029EB68: nop

;}
RECOMP_FUNC void D_802D2ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2F54: beq         $a0, $zero, L_802D2F70
    if (ctx->r4 == 0) {
        // 0x802D2F58: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802D2F70;
    }
    // 0x802D2F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2F5C: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x802D2F60: beql        $t6, $zero, L_802D2F74
    if (ctx->r14 == 0) {
        // 0x802D2F64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D2F74;
    }
    goto skip_0;
    // 0x802D2F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D2F68: jal         0x802C681C
    // 0x802D2F6C: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x802D2F6C: nop

    after_0:
L_802D2F70:
    // 0x802D2F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D2F74:
    // 0x802D2F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2F78: jr          $ra
    // 0x802D2F7C: nop

    return;
    // 0x802D2F7C: nop

;}
RECOMP_FUNC void D_802E8044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E80C4: jr          $ra
    // 0x802E80C8: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    return;
    // 0x802E80C8: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
;}
RECOMP_FUNC void D_8022C258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C258: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8022C25C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8022C260: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8022C264: lh          $t7, 0x0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X0);
    // 0x8022C268: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C26C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8022C270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C274: bne         $t7, $at, L_8022C2B4
    if (ctx->r15 != ctx->r1) {
        // 0x8022C278: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8022C2B4;
    }
    // 0x8022C278: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8022C27C: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x8022C280: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x8022C284: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8022C288: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x8022C28C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8022C290: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x8022C294: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8022C298: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x8022C29C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022C2A0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022C2A4: jal         0x8024AA84
    // 0x8022C2A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_8024AA84(rdram, ctx);
        goto after_0;
    // 0x8022C2A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8022C2AC: jal         0x8024AD44
    // 0x8022C2B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    static_3_8024AD44(rdram, ctx);
        goto after_1;
    // 0x8022C2B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_8022C2B4:
    // 0x8022C2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C2B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022C2BC: jr          $ra
    // 0x8022C2C0: nop

    return;
    // 0x8022C2C0: nop

;}
RECOMP_FUNC void D_802F04A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802F052C: bne         $a0, $zero, L_802F0544
    if (ctx->r4 != 0) {
        // 0x802F0530: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802F0544;
    }
    // 0x802F0530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F0534: jal         0x802C67EC
    // 0x802F0538: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802F0538: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_0:
    // 0x802F053C: beq         $v0, $zero, L_802F0564
    if (ctx->r2 == 0) {
        // 0x802F0540: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802F0564;
    }
    // 0x802F0540: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802F0544:
    // 0x802F0544: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802F0548: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802F054C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802F0550: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x802F0554: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x802F0558: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x802F055C: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x802F0560: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
L_802F0564:
    // 0x802F0564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802F0568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802F056C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802F0570: jr          $ra
    // 0x802F0574: nop

    return;
    // 0x802F0574: nop

;}
RECOMP_FUNC void D_8023FCE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FCE4: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x8023FCE8: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
    // 0x8023FCEC: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x8023FCF0: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8023FCF4: sb          $zero, 0x6($t7)
    MEM_B(0X6, ctx->r15) = 0;
    // 0x8023FCF8: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x8023FCFC: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x8023FD00: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8023FD04: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8023FD08: sb          $zero, 0xA($t9)
    MEM_B(0XA, ctx->r25) = 0;
    // 0x8023FD0C: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8023FD14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8023FD18: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8023FD1C: sb          $t0, 0x7($t2)
    MEM_B(0X7, ctx->r10) = ctx->r8;
    // 0x8023FD20: lw          $t4, 0x60($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD24: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x8023FD28: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8023FD2C: sb          $t3, 0x9($t5)
    MEM_B(0X9, ctx->r13) = ctx->r11;
    // 0x8023FD30: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD34: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8023FD38: sb          $t6, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r14;
    // 0x8023FD3C: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD40: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x8023FD44: sb          $zero, 0xB($t1)
    MEM_B(0XB, ctx->r9) = 0;
    // 0x8023FD48: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD4C: addu        $t4, $t2, $v0
    ctx->r12 = ADD32(ctx->r10, ctx->r2);
    // 0x8023FD50: sh          $t0, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r8;
    // 0x8023FD54: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x8023FD58: addu        $t5, $t3, $v0
    ctx->r13 = ADD32(ctx->r11, ctx->r2);
    // 0x8023FD5C: jr          $ra
    // 0x8023FD60: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
    return;
    // 0x8023FD60: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_80298CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80298D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80298D34: jal         0x8028D688
    // 0x80298D38: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D688(rdram, ctx);
        goto after_0;
    // 0x80298D38: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x80298D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80298D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80298D44: jr          $ra
    // 0x80298D48: nop

    return;
    // 0x80298D48: nop

;}
RECOMP_FUNC void D_802D3DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3E54: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D3E58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D3E5C: jr          $ra
    // 0x802D3E60: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D3E60: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_80242B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242B20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80242B24: bne         $a1, $at, L_80242B48
    if (ctx->r5 != ctx->r1) {
        // 0x80242B28: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_80242B48;
    }
    // 0x80242B28: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x80242B2C: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80242B30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80242B34: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80242B38: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x80242B3C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80242B40: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80242B44: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_80242B48:
    // 0x80242B48: jr          $ra
    // 0x80242B4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80242B4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802E69F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6A78: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E6A7C: jr          $ra
    // 0x802E6A80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802E6A80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80281854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802818D4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x802818D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802818DC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802818E0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x802818E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802818E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802818EC: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x802818F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802818F4: lw          $v0, 0x508($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X508);
    // 0x802818F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802818FC: sb          $t6, 0x364($a0)
    MEM_B(0X364, ctx->r4) = ctx->r14;
    // 0x80281900: swc1        $f4, 0x4A8($a0)
    MEM_W(0X4A8, ctx->r4) = ctx->f4.u32l;
    // 0x80281904: swc1        $f6, 0x4AC($a0)
    MEM_W(0X4AC, ctx->r4) = ctx->f6.u32l;
    // 0x80281908: swc1        $f8, 0x4B0($a0)
    MEM_W(0X4B0, ctx->r4) = ctx->f8.u32l;
    // 0x8028190C: lh          $t7, 0x18($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X18);
    // 0x80281910: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80281914: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80281918: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8028191C: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    // 0x80281920: addiu       $a0, $a0, 0x458
    ctx->r4 = ADD32(ctx->r4, 0X458);
    // 0x80281924: jalr        $t9
    // 0x80281928: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80281928: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x8028192C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80281930: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80281934: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80281938: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028193C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80281940: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281944: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80281948: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028194C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80281950: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281954: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80281958: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x8028195C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80281960: swc1        $f10, 0x49C($a2)
    MEM_W(0X49C, ctx->r6) = ctx->f10.u32l;
    // 0x80281964: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281968: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8028196C: swc1        $f16, 0x4A0($a2)
    MEM_W(0X4A0, ctx->r6) = ctx->f16.u32l;
    // 0x80281970: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80281974: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281978: swc1        $f18, 0x4A4($a2)
    MEM_W(0X4A4, ctx->r6) = ctx->f18.u32l;
    // 0x8028197C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80281980: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80281984: lw          $v0, 0x418($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X418);
    // 0x80281988: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8028198C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80281990: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80281994: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x80281998: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8028199C: sh          $v1, 0x4CE($a2)
    MEM_H(0X4CE, ctx->r6) = ctx->r3;
    // 0x802819A0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802819A4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802819A8: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x802819AC: sh          $a3, 0x4D0($a2)
    MEM_H(0X4D0, ctx->r6) = ctx->r7;
    // 0x802819B0: sh          $t0, 0x4D2($a2)
    MEM_H(0X4D2, ctx->r6) = ctx->r8;
    // 0x802819B4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802819B8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802819BC: sh          $t5, 0x4E2($a2)
    MEM_H(0X4E2, ctx->r6) = ctx->r13;
    // 0x802819C0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802819C4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802819C8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x802819CC: nop

    // 0x802819D0: sh          $t1, 0x4D4($a2)
    MEM_H(0X4D4, ctx->r6) = ctx->r9;
    // 0x802819D4: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802819D8: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x802819DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802819E0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x802819E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802819E8: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x802819EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802819F0: swc1        $f4, 0x4C4($a2)
    MEM_W(0X4C4, ctx->r6) = ctx->f4.u32l;
    // 0x802819F4: swc1        $f6, 0x3B8($a2)
    MEM_W(0X3B8, ctx->r6) = ctx->f6.u32l;
    // 0x802819F8: swc1        $f8, 0x3BC($a2)
    MEM_W(0X3BC, ctx->r6) = ctx->f8.u32l;
    // 0x802819FC: swc1        $f10, 0x3C0($a2)
    MEM_W(0X3C0, ctx->r6) = ctx->f10.u32l;
    // 0x80281A00: lh          $t6, 0x18($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X18);
    // 0x80281A04: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x80281A08: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80281A0C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80281A10: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80281A14: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x80281A18: addu        $a0, $t6, $a2
    ctx->r4 = ADD32(ctx->r14, ctx->r6);
    // 0x80281A1C: addiu       $a0, $a0, 0x368
    ctx->r4 = ADD32(ctx->r4, 0X368);
    // 0x80281A20: jalr        $t9
    // 0x80281A24: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80281A24: nop

    after_1:
    // 0x80281A28: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80281A2C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80281A30: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80281A34: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80281A38: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80281A3C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80281A40: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281A44: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80281A48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281A4C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80281A50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281A54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80281A58: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80281A5C: sh          $t7, 0x3F2($a2)
    MEM_H(0X3F2, ctx->r6) = ctx->r15;
    // 0x80281A60: sh          $v1, 0x3DE($a2)
    MEM_H(0X3DE, ctx->r6) = ctx->r3;
    // 0x80281A64: sh          $a3, 0x3E0($a2)
    MEM_H(0X3E0, ctx->r6) = ctx->r7;
    // 0x80281A68: sh          $t0, 0x3E2($a2)
    MEM_H(0X3E2, ctx->r6) = ctx->r8;
    // 0x80281A6C: sh          $t1, 0x3E4($a2)
    MEM_H(0X3E4, ctx->r6) = ctx->r9;
    // 0x80281A70: swc1        $f16, 0x3AC($a2)
    MEM_W(0X3AC, ctx->r6) = ctx->f16.u32l;
    // 0x80281A74: swc1        $f18, 0x3B0($a2)
    MEM_W(0X3B0, ctx->r6) = ctx->f18.u32l;
    // 0x80281A78: swc1        $f4, 0x3B4($a2)
    MEM_W(0X3B4, ctx->r6) = ctx->f4.u32l;
    // 0x80281A7C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80281A80: swc1        $f6, 0x3D4($a2)
    MEM_W(0X3D4, ctx->r6) = ctx->f6.u32l;
    // 0x80281A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281A88: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80281A8C: jr          $ra
    // 0x80281A90: nop

    return;
    // 0x80281A90: nop

;}
RECOMP_FUNC void D_802F1840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F18C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802F18C4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802F18C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802F18CC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802F18D0: addiu       $s0, $a0, 0xC0C
    ctx->r16 = ADD32(ctx->r4, 0XC0C);
    // 0x802F18D4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802F18D8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802F18DC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802F18E0: jal         0x802BD38C
    // 0x802F18E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802BD38C(rdram, ctx);
        goto after_0;
    // 0x802F18E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802F18E8: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x802F18EC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802F18F0: lui         $a3, 0xC558
    ctx->r7 = S32(0XC558 << 16);
    // 0x802F18F4: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802F18F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F18FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F1900: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    // 0x802F1904: jal         0x802BD66C
    // 0x802F1908: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_1;
    // 0x802F1908: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x802F190C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F1914: lui         $a2, 0xC22C
    ctx->r6 = S32(0XC22C << 16);
    // 0x802F1918: lui         $a3, 0xC52F
    ctx->r7 = S32(0XC52F << 16);
    // 0x802F191C: jal         0x802BD66C
    // 0x802F1920: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_2;
    // 0x802F1920: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_2:
    // 0x802F1924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1928: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F192C: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    // 0x802F1930: lui         $a3, 0xC4C3
    ctx->r7 = S32(0XC4C3 << 16);
    // 0x802F1934: jal         0x802BD66C
    // 0x802F1938: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_3;
    // 0x802F1938: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x802F193C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1940: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F1944: lui         $a2, 0xC220
    ctx->r6 = S32(0XC220 << 16);
    // 0x802F1948: lui         $a3, 0xC461
    ctx->r7 = S32(0XC461 << 16);
    // 0x802F194C: jal         0x802BD66C
    // 0x802F1950: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_4;
    // 0x802F1950: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x802F1954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1958: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F195C: lui         $a2, 0xC382
    ctx->r6 = S32(0XC382 << 16);
    // 0x802F1960: lui         $a3, 0xC43E
    ctx->r7 = S32(0XC43E << 16);
    // 0x802F1964: jal         0x802BD66C
    // 0x802F1968: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_5;
    // 0x802F1968: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x802F196C: lui         $a3, 0xC400
    ctx->r7 = S32(0XC400 << 16);
    // 0x802F1970: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F1974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1978: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F197C: lui         $a2, 0xC3AF
    ctx->r6 = S32(0XC3AF << 16);
    // 0x802F1980: jal         0x802BD66C
    // 0x802F1984: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_6;
    // 0x802F1984: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x802F1988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F198C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F1990: lui         $a2, 0xC3AF
    ctx->r6 = S32(0XC3AF << 16);
    // 0x802F1994: lui         $a3, 0xC370
    ctx->r7 = S32(0XC370 << 16);
    // 0x802F1998: jal         0x802BD66C
    // 0x802F199C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_7;
    // 0x802F199C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_7:
    // 0x802F19A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F19A4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F19A8: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x802F19AC: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x802F19B0: jal         0x802BD66C
    // 0x802F19B4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_8;
    // 0x802F19B4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_8:
    // 0x802F19B8: lui         $a3, 0xC427
    ctx->r7 = S32(0XC427 << 16);
    // 0x802F19BC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F19C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F19C4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F19C8: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x802F19CC: jal         0x802BD66C
    // 0x802F19D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_9;
    // 0x802F19D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_9:
    // 0x802F19D4: lui         $a3, 0xC4DE
    ctx->r7 = S32(0XC4DE << 16);
    // 0x802F19D8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F19DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F19E0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F19E4: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x802F19E8: jal         0x802BD66C
    // 0x802F19EC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_10;
    // 0x802F19EC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_10:
    // 0x802F19F0: lui         $a3, 0xC529
    ctx->r7 = S32(0XC529 << 16);
    // 0x802F19F4: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F19F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F19FC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F1A00: lui         $a2, 0x4366
    ctx->r6 = S32(0X4366 << 16);
    // 0x802F1A04: jal         0x802BD66C
    // 0x802F1A08: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_11;
    // 0x802F1A08: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_11:
    // 0x802F1A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1A10: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802F1A14: lui         $a2, 0xC188
    ctx->r6 = S32(0XC188 << 16);
    // 0x802F1A18: lui         $a3, 0xC52A
    ctx->r7 = S32(0XC52A << 16);
    // 0x802F1A1C: jal         0x802BD66C
    // 0x802F1A20: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_12;
    // 0x802F1A20: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_12:
    // 0x802F1A24: lui         $a3, 0xC4AA
    ctx->r7 = S32(0XC4AA << 16);
    // 0x802F1A28: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802F1A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1A30: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F1A34: lui         $a2, 0xC1A0
    ctx->r6 = S32(0XC1A0 << 16);
    // 0x802F1A38: jal         0x802BD66C
    // 0x802F1A3C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_13;
    // 0x802F1A3C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_13:
    // 0x802F1A40: lui         $a3, 0x44C4
    ctx->r7 = S32(0X44C4 << 16);
    // 0x802F1A44: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802F1A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1A4C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802F1A50: lui         $a2, 0xC0C0
    ctx->r6 = S32(0XC0C0 << 16);
    // 0x802F1A54: jal         0x802BD66C
    // 0x802F1A58: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_14;
    // 0x802F1A58: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_14:
    // 0x802F1A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1A60: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802F1A64: lui         $a2, 0x42F8
    ctx->r6 = S32(0X42F8 << 16);
    // 0x802F1A68: lui         $a3, 0x4548
    ctx->r7 = S32(0X4548 << 16);
    // 0x802F1A6C: jal         0x802BD66C
    // 0x802F1A70: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_15;
    // 0x802F1A70: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_15:
    // 0x802F1A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1A78: jal         0x80318C9C
    // 0x802F1A7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_16;
    // 0x802F1A7C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_16:
    // 0x802F1A80: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802F1A84: addiu       $s0, $s0, 0x142C
    ctx->r16 = ADD32(ctx->r16, 0X142C);
    // 0x802F1A88: jal         0x802BD38C
    // 0x802F1A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802BD38C(rdram, ctx);
        goto after_17;
    // 0x802F1A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x802F1A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F1A98: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x802F1A9C: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x802F1AA0: jal         0x802BD66C
    // 0x802F1AA4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_18;
    // 0x802F1AA4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_18:
    // 0x802F1AA8: lui         $a3, 0xC427
    ctx->r7 = S32(0XC427 << 16);
    // 0x802F1AAC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1AB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F1AB8: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x802F1ABC: jal         0x802BD66C
    // 0x802F1AC0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_19;
    // 0x802F1AC0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_19:
    // 0x802F1AC4: lui         $a3, 0xC4DE
    ctx->r7 = S32(0XC4DE << 16);
    // 0x802F1AC8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1AD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F1AD4: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x802F1AD8: jal         0x802BD66C
    // 0x802F1ADC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_20;
    // 0x802F1ADC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_20:
    // 0x802F1AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1AE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F1AE8: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x802F1AEC: lui         $a3, 0xC548
    ctx->r7 = S32(0XC548 << 16);
    // 0x802F1AF0: jal         0x802BD66C
    // 0x802F1AF4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_21;
    // 0x802F1AF4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_21:
    // 0x802F1AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1AFC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F1B00: lui         $a2, 0xC188
    ctx->r6 = S32(0XC188 << 16);
    // 0x802F1B04: lui         $a3, 0xC52A
    ctx->r7 = S32(0XC52A << 16);
    // 0x802F1B08: jal         0x802BD66C
    // 0x802F1B0C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_22;
    // 0x802F1B0C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_22:
    // 0x802F1B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1B14: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F1B18: lui         $a2, 0xC160
    ctx->r6 = S32(0XC160 << 16);
    // 0x802F1B1C: lui         $a3, 0xC461
    ctx->r7 = S32(0XC461 << 16);
    // 0x802F1B20: jal         0x802BD66C
    // 0x802F1B24: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_23;
    // 0x802F1B24: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_23:
    // 0x802F1B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1B2C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F1B30: lui         $a2, 0xC382
    ctx->r6 = S32(0XC382 << 16);
    // 0x802F1B34: lui         $a3, 0xC43E
    ctx->r7 = S32(0XC43E << 16);
    // 0x802F1B38: jal         0x802BD66C
    // 0x802F1B3C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_24;
    // 0x802F1B3C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_24:
    // 0x802F1B40: lui         $a3, 0xC400
    ctx->r7 = S32(0XC400 << 16);
    // 0x802F1B44: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F1B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1B4C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F1B50: lui         $a2, 0xC3AF
    ctx->r6 = S32(0XC3AF << 16);
    // 0x802F1B54: jal         0x802BD66C
    // 0x802F1B58: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_25;
    // 0x802F1B58: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_25:
    // 0x802F1B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1B60: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F1B64: lui         $a2, 0xC3AF
    ctx->r6 = S32(0XC3AF << 16);
    // 0x802F1B68: lui         $a3, 0xC370
    ctx->r7 = S32(0XC370 << 16);
    // 0x802F1B6C: jal         0x802BD66C
    // 0x802F1B70: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_26;
    // 0x802F1B70: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_26:
    // 0x802F1B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1B78: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F1B7C: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x802F1B80: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x802F1B84: jal         0x802BD66C
    // 0x802F1B88: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_27;
    // 0x802F1B88: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_27:
    // 0x802F1B8C: lui         $a3, 0xC427
    ctx->r7 = S32(0XC427 << 16);
    // 0x802F1B90: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1B98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F1B9C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x802F1BA0: jal         0x802BD66C
    // 0x802F1BA4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_28;
    // 0x802F1BA4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_28:
    // 0x802F1BA8: lui         $a3, 0xC4DE
    ctx->r7 = S32(0XC4DE << 16);
    // 0x802F1BAC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1BB4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802F1BB8: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x802F1BBC: jal         0x802BD66C
    // 0x802F1BC0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_29;
    // 0x802F1BC0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_29:
    // 0x802F1BC4: lui         $a3, 0xC529
    ctx->r7 = S32(0XC529 << 16);
    // 0x802F1BC8: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F1BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1BD0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F1BD4: lui         $a2, 0x4366
    ctx->r6 = S32(0X4366 << 16);
    // 0x802F1BD8: jal         0x802BD66C
    // 0x802F1BDC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_30;
    // 0x802F1BDC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_30:
    // 0x802F1BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1BE4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802F1BE8: lui         $a2, 0xC188
    ctx->r6 = S32(0XC188 << 16);
    // 0x802F1BEC: lui         $a3, 0xC52A
    ctx->r7 = S32(0XC52A << 16);
    // 0x802F1BF0: jal         0x802BD66C
    // 0x802F1BF4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_31;
    // 0x802F1BF4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_31:
    // 0x802F1BF8: lui         $a3, 0xC4AA
    ctx->r7 = S32(0XC4AA << 16);
    // 0x802F1BFC: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802F1C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1C04: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802F1C08: lui         $a2, 0xC1A0
    ctx->r6 = S32(0XC1A0 << 16);
    // 0x802F1C0C: jal         0x802BD66C
    // 0x802F1C10: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_32;
    // 0x802F1C10: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_32:
    // 0x802F1C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1C18: jal         0x80318C9C
    // 0x802F1C1C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_33;
    // 0x802F1C1C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_33:
    // 0x802F1C20: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802F1C24: addiu       $s0, $s0, 0x1C4C
    ctx->r16 = ADD32(ctx->r16, 0X1C4C);
    // 0x802F1C28: jal         0x802BD38C
    // 0x802F1C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802BD38C(rdram, ctx);
        goto after_34;
    // 0x802F1C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x802F1C30: lui         $a3, 0xC427
    ctx->r7 = S32(0XC427 << 16);
    // 0x802F1C34: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F1C40: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x802F1C44: jal         0x802BD66C
    // 0x802F1C48: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_35;
    // 0x802F1C48: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_35:
    // 0x802F1C4C: lui         $a3, 0xC4DE
    ctx->r7 = S32(0XC4DE << 16);
    // 0x802F1C50: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1C58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F1C5C: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x802F1C60: jal         0x802BD66C
    // 0x802F1C64: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_36;
    // 0x802F1C64: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_36:
    // 0x802F1C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1C6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F1C70: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x802F1C74: lui         $a3, 0xC548
    ctx->r7 = S32(0XC548 << 16);
    // 0x802F1C78: jal         0x802BD66C
    // 0x802F1C7C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_37;
    // 0x802F1C7C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_37:
    // 0x802F1C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1C84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F1C88: lui         $a2, 0xC188
    ctx->r6 = S32(0XC188 << 16);
    // 0x802F1C8C: lui         $a3, 0xC52A
    ctx->r7 = S32(0XC52A << 16);
    // 0x802F1C90: jal         0x802BD66C
    // 0x802F1C94: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_38;
    // 0x802F1C94: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_38:
    // 0x802F1C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1C9C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F1CA0: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    // 0x802F1CA4: lui         $a3, 0xC461
    ctx->r7 = S32(0XC461 << 16);
    // 0x802F1CA8: jal         0x802BD66C
    // 0x802F1CAC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_39;
    // 0x802F1CAC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_39:
    // 0x802F1CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1CB4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F1CB8: lui         $a2, 0xC382
    ctx->r6 = S32(0XC382 << 16);
    // 0x802F1CBC: lui         $a3, 0xC43E
    ctx->r7 = S32(0XC43E << 16);
    // 0x802F1CC0: jal         0x802BD66C
    // 0x802F1CC4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_40;
    // 0x802F1CC4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_40:
    // 0x802F1CC8: lui         $a3, 0xC400
    ctx->r7 = S32(0XC400 << 16);
    // 0x802F1CCC: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F1CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1CD4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F1CD8: lui         $a2, 0xC3AF
    ctx->r6 = S32(0XC3AF << 16);
    // 0x802F1CDC: jal         0x802BD66C
    // 0x802F1CE0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_41;
    // 0x802F1CE0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_41:
    // 0x802F1CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1CE8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F1CEC: lui         $a2, 0xC3AF
    ctx->r6 = S32(0XC3AF << 16);
    // 0x802F1CF0: lui         $a3, 0xC370
    ctx->r7 = S32(0XC370 << 16);
    // 0x802F1CF4: jal         0x802BD66C
    // 0x802F1CF8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_42;
    // 0x802F1CF8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_42:
    // 0x802F1CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1D00: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F1D04: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x802F1D08: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x802F1D0C: jal         0x802BD66C
    // 0x802F1D10: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_43;
    // 0x802F1D10: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_43:
    // 0x802F1D14: lui         $a3, 0xC427
    ctx->r7 = S32(0XC427 << 16);
    // 0x802F1D18: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1D20: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F1D24: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x802F1D28: jal         0x802BD66C
    // 0x802F1D2C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_44;
    // 0x802F1D2C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_44:
    // 0x802F1D30: lui         $a3, 0xC4DE
    ctx->r7 = S32(0XC4DE << 16);
    // 0x802F1D34: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1D3C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F1D40: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x802F1D44: jal         0x802BD66C
    // 0x802F1D48: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_45;
    // 0x802F1D48: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_45:
    // 0x802F1D4C: lui         $a3, 0xC529
    ctx->r7 = S32(0XC529 << 16);
    // 0x802F1D50: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F1D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1D58: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802F1D5C: lui         $a2, 0x4366
    ctx->r6 = S32(0X4366 << 16);
    // 0x802F1D60: jal         0x802BD66C
    // 0x802F1D64: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_46;
    // 0x802F1D64: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_46:
    // 0x802F1D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1D6C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F1D70: lui         $a2, 0xC188
    ctx->r6 = S32(0XC188 << 16);
    // 0x802F1D74: lui         $a3, 0xC52A
    ctx->r7 = S32(0XC52A << 16);
    // 0x802F1D78: jal         0x802BD66C
    // 0x802F1D7C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_47;
    // 0x802F1D7C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_47:
    // 0x802F1D80: lui         $a3, 0xC4AA
    ctx->r7 = S32(0XC4AA << 16);
    // 0x802F1D84: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802F1D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1D8C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802F1D90: lui         $a2, 0xC1A0
    ctx->r6 = S32(0XC1A0 << 16);
    // 0x802F1D94: jal         0x802BD66C
    // 0x802F1D98: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_48;
    // 0x802F1D98: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_48:
    // 0x802F1D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1DA0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802F1DA4: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x802F1DA8: lui         $a3, 0x44FA
    ctx->r7 = S32(0X44FA << 16);
    // 0x802F1DAC: jal         0x802BD66C
    // 0x802F1DB0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_49;
    // 0x802F1DB0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_49:
    // 0x802F1DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1DB8: jal         0x80318C9C
    // 0x802F1DBC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_50;
    // 0x802F1DBC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_50:
    // 0x802F1DC0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802F1DC4: addiu       $s0, $s0, 0x246C
    ctx->r16 = ADD32(ctx->r16, 0X246C);
    // 0x802F1DC8: jal         0x802BD38C
    // 0x802F1DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802BD38C(rdram, ctx);
        goto after_51;
    // 0x802F1DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_51:
    // 0x802F1DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802F1DD8: lui         $a2, 0xC22C
    ctx->r6 = S32(0XC22C << 16);
    // 0x802F1DDC: lui         $a3, 0xC52F
    ctx->r7 = S32(0XC52F << 16);
    // 0x802F1DE0: jal         0x802BD66C
    // 0x802F1DE4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_52;
    // 0x802F1DE4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_52:
    // 0x802F1DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1DEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802F1DF0: lui         $a2, 0xC120
    ctx->r6 = S32(0XC120 << 16);
    // 0x802F1DF4: lui         $a3, 0xC4C3
    ctx->r7 = S32(0XC4C3 << 16);
    // 0x802F1DF8: jal         0x802BD66C
    // 0x802F1DFC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_53;
    // 0x802F1DFC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_53:
    // 0x802F1E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1E04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802F1E08: lui         $a2, 0xC30C
    ctx->r6 = S32(0XC30C << 16);
    // 0x802F1E0C: lui         $a3, 0xC461
    ctx->r7 = S32(0XC461 << 16);
    // 0x802F1E10: jal         0x802BD66C
    // 0x802F1E14: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_54;
    // 0x802F1E14: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_54:
    // 0x802F1E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1E1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802F1E20: lui         $a2, 0xC382
    ctx->r6 = S32(0XC382 << 16);
    // 0x802F1E24: lui         $a3, 0xC43E
    ctx->r7 = S32(0XC43E << 16);
    // 0x802F1E28: jal         0x802BD66C
    // 0x802F1E2C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_55;
    // 0x802F1E2C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_55:
    // 0x802F1E30: lui         $a3, 0xC400
    ctx->r7 = S32(0XC400 << 16);
    // 0x802F1E34: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802F1E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1E3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F1E40: lui         $a2, 0xC3AF
    ctx->r6 = S32(0XC3AF << 16);
    // 0x802F1E44: jal         0x802BD66C
    // 0x802F1E48: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_56;
    // 0x802F1E48: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_56:
    // 0x802F1E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1E50: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F1E54: lui         $a2, 0xC3AF
    ctx->r6 = S32(0XC3AF << 16);
    // 0x802F1E58: lui         $a3, 0xC370
    ctx->r7 = S32(0XC370 << 16);
    // 0x802F1E5C: jal         0x802BD66C
    // 0x802F1E60: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_57;
    // 0x802F1E60: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_57:
    // 0x802F1E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1E68: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F1E6C: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x802F1E70: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x802F1E74: jal         0x802BD66C
    // 0x802F1E78: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_58;
    // 0x802F1E78: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_58:
    // 0x802F1E7C: lui         $a3, 0xC427
    ctx->r7 = S32(0XC427 << 16);
    // 0x802F1E80: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1E88: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802F1E8C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x802F1E90: jal         0x802BD66C
    // 0x802F1E94: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_59;
    // 0x802F1E94: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_59:
    // 0x802F1E98: lui         $a3, 0xC4DE
    ctx->r7 = S32(0XC4DE << 16);
    // 0x802F1E9C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802F1EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1EA4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F1EA8: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x802F1EAC: jal         0x802BD66C
    // 0x802F1EB0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_60;
    // 0x802F1EB0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_60:
    // 0x802F1EB4: lui         $a3, 0xC529
    ctx->r7 = S32(0XC529 << 16);
    // 0x802F1EB8: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x802F1EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1EC0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802F1EC4: lui         $a2, 0x4366
    ctx->r6 = S32(0X4366 << 16);
    // 0x802F1EC8: jal         0x802BD66C
    // 0x802F1ECC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_61;
    // 0x802F1ECC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_61:
    // 0x802F1ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1ED4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802F1ED8: lui         $a2, 0xC188
    ctx->r6 = S32(0XC188 << 16);
    // 0x802F1EDC: lui         $a3, 0xC52A
    ctx->r7 = S32(0XC52A << 16);
    // 0x802F1EE0: jal         0x802BD66C
    // 0x802F1EE4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_62;
    // 0x802F1EE4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_62:
    // 0x802F1EE8: lui         $a3, 0xC4AA
    ctx->r7 = S32(0XC4AA << 16);
    // 0x802F1EEC: ori         $a3, $a3, 0xA000
    ctx->r7 = ctx->r7 | 0XA000;
    // 0x802F1EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1EF4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802F1EF8: lui         $a2, 0xC1A0
    ctx->r6 = S32(0XC1A0 << 16);
    // 0x802F1EFC: jal         0x802BD66C
    // 0x802F1F00: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_63;
    // 0x802F1F00: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_63:
    // 0x802F1F04: lui         $a3, 0x44C4
    ctx->r7 = S32(0X44C4 << 16);
    // 0x802F1F08: ori         $a3, $a3, 0xE000
    ctx->r7 = ctx->r7 | 0XE000;
    // 0x802F1F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1F10: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802F1F14: lui         $a2, 0xC0C0
    ctx->r6 = S32(0XC0C0 << 16);
    // 0x802F1F18: jal         0x802BD66C
    // 0x802F1F1C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_64;
    // 0x802F1F1C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_64:
    // 0x802F1F20: lui         $a3, 0x451C
    ctx->r7 = S32(0X451C << 16);
    // 0x802F1F24: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802F1F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1F2C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802F1F30: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x802F1F34: jal         0x802BD66C
    // 0x802F1F38: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_65;
    // 0x802F1F38: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_65:
    // 0x802F1F3C: lui         $a3, 0x4503
    ctx->r7 = S32(0X4503 << 16);
    // 0x802F1F40: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x802F1F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1F48: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802F1F4C: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x802F1F50: jal         0x802BD66C
    // 0x802F1F54: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    static_3_802BD66C(rdram, ctx);
        goto after_66;
    // 0x802F1F54: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_66:
    // 0x802F1F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1F5C: jal         0x80318C9C
    // 0x802F1F60: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_67;
    // 0x802F1F60: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_67:
    // 0x802F1F64: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x802F1F68: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802F1F6C: addiu       $s0, $s1, 0xC0C
    ctx->r16 = ADD32(ctx->r17, 0XC0C);
L_802F1F70:
    // 0x802F1F70: lw          $v0, 0xDAC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XDAC);
    // 0x802F1F74: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802F1F78: lh          $t6, 0xB0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XB0);
    // 0x802F1F7C: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802F1F80: addu        $a0, $t6, $s1
    ctx->r4 = ADD32(ctx->r14, ctx->r17);
    // 0x802F1F84: jalr        $t9
    // 0x802F1F88: addiu       $a0, $a0, 0xC0C
    ctx->r4 = ADD32(ctx->r4, 0XC0C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_68;
    // 0x802F1F88: addiu       $a0, $a0, 0xC0C
    ctx->r4 = ADD32(ctx->r4, 0XC0C);
    after_68:
    // 0x802F1F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1F90: jal         0x80319008
    // 0x802F1F94: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    static_3_80319008(rdram, ctx);
        goto after_69;
    // 0x802F1F94: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_69:
    // 0x802F1F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1F9C: jal         0x80318EFC
    // 0x802F1FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318EFC(rdram, ctx);
        goto after_70;
    // 0x802F1FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_70:
    // 0x802F1FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1FA8: jal         0x80318F04
    // 0x802F1FAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F04(rdram, ctx);
        goto after_71;
    // 0x802F1FAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_71:
    // 0x802F1FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1FB4: jal         0x80318F14
    // 0x802F1FB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80318F14(rdram, ctx);
        goto after_72;
    // 0x802F1FB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_72:
    // 0x802F1FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802F1FC0: jal         0x80318EF4
    // 0x802F1FC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_80318EF4(rdram, ctx);
        goto after_73;
    // 0x802F1FC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_73:
    // 0x802F1FC8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x802F1FCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802F1FD0: jal         0x802AB2AC
    // 0x802F1FD4: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    static_3_802AB2AC(rdram, ctx);
        goto after_74;
    // 0x802F1FD4: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_74:
    // 0x802F1FD8: addiu       $s2, $s2, 0x820
    ctx->r18 = ADD32(ctx->r18, 0X820);
    // 0x802F1FDC: addiu       $at, $zero, 0x2080
    ctx->r1 = ADD32(0, 0X2080);
    // 0x802F1FE0: addiu       $s1, $s1, 0x820
    ctx->r17 = ADD32(ctx->r17, 0X820);
    // 0x802F1FE4: bne         $s2, $at, L_802F1F70
    if (ctx->r18 != ctx->r1) {
        // 0x802F1FE8: addiu       $s0, $s0, 0x820
        ctx->r16 = ADD32(ctx->r16, 0X820);
            goto L_802F1F70;
    }
    // 0x802F1FE8: addiu       $s0, $s0, 0x820
    ctx->r16 = ADD32(ctx->r16, 0X820);
    // 0x802F1FEC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802F1FF0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802F1FF4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802F1FF8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802F1FFC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802F2000: jr          $ra
    // 0x802F2004: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802F2004: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802D13AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D142C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802D1430: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D1434: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D1438: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D143C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D1440: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802D1444: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802D1448: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x802D144C: jal         0x80302DC8
    // 0x802D1450: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802D1450: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802D1454: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802D1458: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D145C: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    // 0x802D1460: jal         0x80302DC8
    // 0x802D1464: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802D1464: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802D1468: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x802D146C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D1470: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x802D1474: jal         0x80302DC8
    // 0x802D1478: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_2;
    // 0x802D1478: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802D147C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802D1480: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802D1484: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D1488: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802D148C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802D1490: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802D1494: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x802D1498: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802D149C: jal         0x80290474
    // 0x802D14A0: nop

    static_3_80290474(rdram, ctx);
        goto after_3;
    // 0x802D14A0: nop

    after_3:
    // 0x802D14A4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D14A8: jal         0x80302980
    // 0x802D14AC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_4;
    // 0x802D14AC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802D14B0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D14B4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D14B8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D14BC: addiu       $a1, $zero, 0x7A
    ctx->r5 = ADD32(0, 0X7A);
    // 0x802D14C0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D14C4: jal         0x80302988
    // 0x802D14C8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802D14C8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802D14CC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D14D0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D14D4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D14D8: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    // 0x802D14DC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D14E0: jal         0x80302988
    // 0x802D14E4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_6;
    // 0x802D14E4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802D14E8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D14EC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802D14F0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802D14F4: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x802D14F8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802D14FC: jal         0x80302988
    // 0x802D1500: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_7;
    // 0x802D1500: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_7:
    // 0x802D1504: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D1508: jal         0x80302A7C
    // 0x802D150C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_8;
    // 0x802D150C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_8:
    // 0x802D1510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D1518: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802D151C: jr          $ra
    // 0x802D1520: nop

    return;
    // 0x802D1520: nop

;}
RECOMP_FUNC void D_802A4BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4C6C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802A4C70: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802A4C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A4C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A4C7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A4C80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A4C84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4C88: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802A4C8C: sw          $zero, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = 0;
    // 0x802A4C90: swc1        $f2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
    // 0x802A4C94: swc1        $f2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f2.u32l;
    // 0x802A4C98: swc1        $f2, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f2.u32l;
    // 0x802A4C9C: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x802A4CA0: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x802A4CA4: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x802A4CA8: swc1        $f0, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->f0.u32l;
    // 0x802A4CAC: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x802A4CB0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802A4CB4: jal         0x8022970C
    // 0x802A4CB8: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802A4CB8: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    after_0:
    // 0x802A4CBC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802A4CC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A4CC4: sb          $zero, 0xC6($a1)
    MEM_B(0XC6, ctx->r5) = 0;
    // 0x802A4CC8: sb          $zero, 0xC7($a1)
    MEM_B(0XC7, ctx->r5) = 0;
    // 0x802A4CCC: sb          $zero, 0xC8($a1)
    MEM_B(0XC8, ctx->r5) = 0;
    // 0x802A4CD0: sb          $zero, 0xC9($a1)
    MEM_B(0XC9, ctx->r5) = 0;
    // 0x802A4CD4: sh          $zero, 0xC4($a1)
    MEM_H(0XC4, ctx->r5) = 0;
    // 0x802A4CD8: sw          $zero, 0xDC($a1)
    MEM_W(0XDC, ctx->r5) = 0;
    // 0x802A4CDC: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x802A4CE0: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x802A4CE4: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x802A4CE8: swc1        $f0, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f0.u32l;
    // 0x802A4CEC: swc1        $f0, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f0.u32l;
    // 0x802A4CF0: swc1        $f0, 0xF4($a1)
    MEM_W(0XF4, ctx->r5) = ctx->f0.u32l;
    // 0x802A4CF4: swc1        $f0, 0xB0($a1)
    MEM_W(0XB0, ctx->r5) = ctx->f0.u32l;
    // 0x802A4CF8: swc1        $f0, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = ctx->f0.u32l;
    // 0x802A4CFC: swc1        $f0, 0xD4($a1)
    MEM_W(0XD4, ctx->r5) = ctx->f0.u32l;
    // 0x802A4D00: swc1        $f0, 0xCC($a1)
    MEM_W(0XCC, ctx->r5) = ctx->f0.u32l;
    // 0x802A4D04: swc1        $f0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->f0.u32l;
    // 0x802A4D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A4D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A4D10: jr          $ra
    // 0x802A4D14: nop

    return;
    // 0x802A4D14: nop

;}
RECOMP_FUNC void D_8029503C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802950BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802950C0: bne         $a1, $at, L_802950D4
    if (ctx->r5 != ctx->r1) {
        // 0x802950C4: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_802950D4;
    }
    // 0x802950C4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x802950C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802950CC: b           L_802950EC
    // 0x802950D0: swc1        $f4, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f4.u32l;
        goto L_802950EC;
    // 0x802950D0: swc1        $f4, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f4.u32l;
L_802950D4:
    // 0x802950D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802950D8: bne         $a1, $at, L_802950EC
    if (ctx->r5 != ctx->r1) {
        // 0x802950DC: lui         $at, 0x4352
        ctx->r1 = S32(0X4352 << 16);
            goto L_802950EC;
    }
    // 0x802950DC: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x802950E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802950E4: nop

    // 0x802950E8: swc1        $f6, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f6.u32l;
L_802950EC:
    // 0x802950EC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802950F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802950F4: jr          $ra
    // 0x802950F8: swc1        $f8, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x802950F8: swc1        $f8, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void D_802F0578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F05F8: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802F05FC: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802F0600: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802F0604: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802F0608: bne         $t6, $zero, L_802F0618
    if (ctx->r14 != 0) {
        // 0x802F060C: nop
    
            goto L_802F0618;
    }
    // 0x802F060C: nop

    // 0x802F0610: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x802F0614: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_802F0618:
    // 0x802F0618: jr          $ra
    // 0x802F061C: nop

    return;
    // 0x802F061C: nop

;}
RECOMP_FUNC void D_80290E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290EBC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80290EC0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80290EC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80290EC8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80290ECC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80290ED0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80290ED4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80290ED8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80290EDC: sb          $t6, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r14;
    // 0x80290EE0: lw          $a0, 0x12C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X12C);
    // 0x80290EE4: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x80290EE8: jal         0x802C51D0
    // 0x80290EEC: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80290EEC: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_0:
    // 0x80290EF0: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80290EF4: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80290EF8: lwc1        $f8, 0x108($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X108);
    // 0x80290EFC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80290F00: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80290F04: addiu       $s1, $s0, 0x88
    ctx->r17 = ADD32(ctx->r16, 0X88);
    // 0x80290F08: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80290F0C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80290F10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80290F14: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x80290F18: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80290F1C: jal         0x8022A0D0
    // 0x80290F20: swc1        $f10, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f10.u32l;
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x80290F20: swc1        $f10, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f10.u32l;
    after_1:
    // 0x80290F24: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80290F28: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80290F2C: addiu       $a1, $s0, 0x64
    ctx->r5 = ADD32(ctx->r16, 0X64);
    // 0x80290F30: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80290F34: jal         0x803025D8
    // 0x80290F38: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_2;
    // 0x80290F38: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x80290F3C: lwc1        $f16, 0x54($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X54);
    // 0x80290F40: lw          $a3, 0x50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X50);
    // 0x80290F44: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80290F48: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80290F4C: lw          $t7, 0x4C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4C);
    // 0x80290F50: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80290F54: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80290F58: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80290F5C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80290F60: jal         0x802AF31C
    // 0x80290F64: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    static_3_802AF31C(rdram, ctx);
        goto after_3;
    // 0x80290F64: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_3:
    // 0x80290F68: lwc1        $f18, 0x5C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x80290F6C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80290F70: lwc1        $f8, 0x58($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X58);
    // 0x80290F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80290F78: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80290F7C: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
    // 0x80290F80: lwc1        $f10, 0x5C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x80290F84: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80290F88: nop

    // 0x80290F8C: bc1fl       L_80290FB4
    if (!c1cs) {
        // 0x80290F90: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80290FB4;
    }
    goto skip_0;
    // 0x80290F90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80290F94: jal         0x80320824
    // 0x80290F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80320824(rdram, ctx);
        goto after_4;
    // 0x80290F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80290F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80290FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80290FA4: jal         0x80320964
    // 0x80290FA8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    static_3_80320964(rdram, ctx);
        goto after_5;
    // 0x80290FA8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x80290FAC: sb          $zero, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = 0;
    // 0x80290FB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80290FB4:
    // 0x80290FB4: lbu         $v0, 0x3F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X3F);
    // 0x80290FB8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80290FBC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80290FC0: jr          $ra
    // 0x80290FC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80290FC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8027641C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276494: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80276498: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8027649C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802764A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802764A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802764A8: lbu         $t6, 0x6790($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X6790);
    // 0x802764AC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802764B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802764B4: blez        $t6, L_80276514
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802764B8: sll         $t7, $s1, 2
        ctx->r15 = S32(ctx->r17 << 2);
            goto L_80276514;
    }
L_802764B8:
    // 0x802764B8: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x802764BC: addu        $s0, $s2, $t7
    ctx->r16 = ADD32(ctx->r18, ctx->r15);
    // 0x802764C0: lw          $a0, 0x676C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X676C);
    // 0x802764C4: beql        $a0, $zero, L_802764FC
    if (ctx->r4 == 0) {
        // 0x802764C8: lbu         $t1, 0x6790($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6790);
            goto L_802764FC;
    }
    goto skip_0;
    // 0x802764C8: lbu         $t1, 0x6790($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6790);
    skip_0:
    // 0x802764CC: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x802764D0: beql        $t8, $zero, L_802764FC
    if (ctx->r24 == 0) {
        // 0x802764D4: lbu         $t1, 0x6790($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6790);
            goto L_802764FC;
    }
    goto skip_1;
    // 0x802764D4: lbu         $t1, 0x6790($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6790);
    skip_1:
    // 0x802764D8: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x802764DC: jal         0x8028A86C
    // 0x802764E0: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_8028A86C(rdram, ctx);
        goto after_0;
    // 0x802764E0: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_0:
    // 0x802764E4: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x802764E8: bnel        $t9, $zero, L_802764FC
    if (ctx->r25 != 0) {
        // 0x802764EC: lbu         $t1, 0x6790($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6790);
            goto L_802764FC;
    }
    goto skip_2;
    // 0x802764EC: lbu         $t1, 0x6790($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6790);
    skip_2:
    // 0x802764F0: lw          $v0, 0x676C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X676C);
    // 0x802764F4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x802764F8: lbu         $t1, 0x6790($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6790);
L_802764FC:
    // 0x802764FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80276500: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x80276504: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80276508: bne         $at, $zero, L_802764B8
    if (ctx->r1 != 0) {
        // 0x8027650C: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_802764B8;
    }
    // 0x8027650C: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x80276510: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80276514:
    // 0x80276514: lbu         $t2, 0x67A8($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X67A8);
    // 0x80276518: blez        $t2, L_80276578
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8027651C: sll         $t3, $s1, 2
        ctx->r11 = S32(ctx->r17 << 2);
            goto L_80276578;
    }
L_8027651C:
    // 0x8027651C: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80276520: addu        $s0, $s2, $t3
    ctx->r16 = ADD32(ctx->r18, ctx->r11);
    // 0x80276524: lw          $a0, 0x6794($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6794);
    // 0x80276528: beql        $a0, $zero, L_80276560
    if (ctx->r4 == 0) {
        // 0x8027652C: lbu         $t7, 0x67A8($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X67A8);
            goto L_80276560;
    }
    goto skip_3;
    // 0x8027652C: lbu         $t7, 0x67A8($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X67A8);
    skip_3:
    // 0x80276530: lbu         $t4, 0x1E1($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X1E1);
    // 0x80276534: beql        $t4, $zero, L_80276560
    if (ctx->r12 == 0) {
        // 0x80276538: lbu         $t7, 0x67A8($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X67A8);
            goto L_80276560;
    }
    goto skip_4;
    // 0x80276538: lbu         $t7, 0x67A8($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X67A8);
    skip_4:
    // 0x8027653C: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80276540: jal         0x802B3554
    // 0x80276544: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_802B3554(rdram, ctx);
        goto after_1;
    // 0x80276544: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_1:
    // 0x80276548: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8027654C: bnel        $t5, $zero, L_80276560
    if (ctx->r13 != 0) {
        // 0x80276550: lbu         $t7, 0x67A8($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X67A8);
            goto L_80276560;
    }
    goto skip_5;
    // 0x80276550: lbu         $t7, 0x67A8($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X67A8);
    skip_5:
    // 0x80276554: lw          $v0, 0x6794($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6794);
    // 0x80276558: sh          $zero, 0x1E0($v0)
    MEM_H(0X1E0, ctx->r2) = 0;
    // 0x8027655C: lbu         $t7, 0x67A8($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X67A8);
L_80276560:
    // 0x80276560: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80276564: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x80276568: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8027656C: bne         $at, $zero, L_8027651C
    if (ctx->r1 != 0) {
        // 0x80276570: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_8027651C;
    }
    // 0x80276570: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80276574: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80276578:
    // 0x80276578: lbu         $t8, 0x680C($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X680C);
    // 0x8027657C: blez        $t8, L_802765DC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80276580: sll         $t9, $s1, 2
        ctx->r25 = S32(ctx->r17 << 2);
            goto L_802765DC;
    }
L_80276580:
    // 0x80276580: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x80276584: addu        $s0, $s2, $t9
    ctx->r16 = ADD32(ctx->r18, ctx->r25);
    // 0x80276588: lw          $a0, 0x6800($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6800);
    // 0x8027658C: beql        $a0, $zero, L_802765C4
    if (ctx->r4 == 0) {
        // 0x80276590: lbu         $t3, 0x680C($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X680C);
            goto L_802765C4;
    }
    goto skip_6;
    // 0x80276590: lbu         $t3, 0x680C($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X680C);
    skip_6:
    // 0x80276594: lbu         $t0, 0x1891($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1891);
    // 0x80276598: beql        $t0, $zero, L_802765C4
    if (ctx->r8 == 0) {
        // 0x8027659C: lbu         $t3, 0x680C($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X680C);
            goto L_802765C4;
    }
    goto skip_7;
    // 0x8027659C: lbu         $t3, 0x680C($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X680C);
    skip_7:
    // 0x802765A0: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x802765A4: jal         0x8028A0B8
    // 0x802765A8: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_8028A0B8(rdram, ctx);
        goto after_2;
    // 0x802765A8: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_2:
    // 0x802765AC: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x802765B0: bnel        $t1, $zero, L_802765C4
    if (ctx->r9 != 0) {
        // 0x802765B4: lbu         $t3, 0x680C($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X680C);
            goto L_802765C4;
    }
    goto skip_8;
    // 0x802765B4: lbu         $t3, 0x680C($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X680C);
    skip_8:
    // 0x802765B8: lw          $v0, 0x6800($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6800);
    // 0x802765BC: sh          $zero, 0x1890($v0)
    MEM_H(0X1890, ctx->r2) = 0;
    // 0x802765C0: lbu         $t3, 0x680C($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X680C);
L_802765C4:
    // 0x802765C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802765C8: andi        $t2, $s1, 0xFF
    ctx->r10 = ctx->r17 & 0XFF;
    // 0x802765CC: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802765D0: bne         $at, $zero, L_80276580
    if (ctx->r1 != 0) {
        // 0x802765D4: or          $s1, $t2, $zero
        ctx->r17 = ctx->r10 | 0;
            goto L_80276580;
    }
    // 0x802765D4: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x802765D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802765DC:
    // 0x802765DC: lbu         $t4, 0x6898($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6898);
    // 0x802765E0: blez        $t4, L_80276640
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802765E4: sll         $t5, $s1, 2
        ctx->r13 = S32(ctx->r17 << 2);
            goto L_80276640;
    }
L_802765E4:
    // 0x802765E4: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x802765E8: addu        $s0, $s2, $t5
    ctx->r16 = ADD32(ctx->r18, ctx->r13);
    // 0x802765EC: lw          $a0, 0x6888($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6888);
    // 0x802765F0: beql        $a0, $zero, L_80276628
    if (ctx->r4 == 0) {
        // 0x802765F4: lbu         $t9, 0x6898($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X6898);
            goto L_80276628;
    }
    goto skip_9;
    // 0x802765F4: lbu         $t9, 0x6898($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X6898);
    skip_9:
    // 0x802765F8: lbu         $t6, 0x1391($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1391);
    // 0x802765FC: beql        $t6, $zero, L_80276628
    if (ctx->r14 == 0) {
        // 0x80276600: lbu         $t9, 0x6898($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X6898);
            goto L_80276628;
    }
    goto skip_10;
    // 0x80276600: lbu         $t9, 0x6898($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X6898);
    skip_10:
    // 0x80276604: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80276608: jal         0x8029F2CC
    // 0x8027660C: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_8029F2CC(rdram, ctx);
        goto after_3;
    // 0x8027660C: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_3:
    // 0x80276610: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80276614: bnel        $t7, $zero, L_80276628
    if (ctx->r15 != 0) {
        // 0x80276618: lbu         $t9, 0x6898($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X6898);
            goto L_80276628;
    }
    goto skip_11;
    // 0x80276618: lbu         $t9, 0x6898($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X6898);
    skip_11:
    // 0x8027661C: lw          $v0, 0x6888($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6888);
    // 0x80276620: sh          $zero, 0x1390($v0)
    MEM_H(0X1390, ctx->r2) = 0;
    // 0x80276624: lbu         $t9, 0x6898($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X6898);
L_80276628:
    // 0x80276628: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027662C: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x80276630: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80276634: bne         $at, $zero, L_802765E4
    if (ctx->r1 != 0) {
        // 0x80276638: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_802765E4;
    }
    // 0x80276638: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x8027663C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80276640:
    // 0x80276640: lbu         $t0, 0x6824($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X6824);
    // 0x80276644: blez        $t0, L_802766A4
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80276648: sll         $t1, $s1, 2
        ctx->r9 = S32(ctx->r17 << 2);
            goto L_802766A4;
    }
L_80276648:
    // 0x80276648: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x8027664C: addu        $s0, $s2, $t1
    ctx->r16 = ADD32(ctx->r18, ctx->r9);
    // 0x80276650: lw          $a0, 0x6810($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6810);
    // 0x80276654: beql        $a0, $zero, L_8027668C
    if (ctx->r4 == 0) {
        // 0x80276658: lbu         $t5, 0x6824($s2)
        ctx->r13 = MEM_BU(ctx->r18, 0X6824);
            goto L_8027668C;
    }
    goto skip_12;
    // 0x80276658: lbu         $t5, 0x6824($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6824);
    skip_12:
    // 0x8027665C: lbu         $t2, 0x1305($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X1305);
    // 0x80276660: beql        $t2, $zero, L_8027668C
    if (ctx->r10 == 0) {
        // 0x80276664: lbu         $t5, 0x6824($s2)
        ctx->r13 = MEM_BU(ctx->r18, 0X6824);
            goto L_8027668C;
    }
    goto skip_13;
    // 0x80276664: lbu         $t5, 0x6824($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6824);
    skip_13:
    // 0x80276668: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x8027666C: jal         0x8028B0F0
    // 0x80276670: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_8028B0F0(rdram, ctx);
        goto after_4;
    // 0x80276670: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_4:
    // 0x80276674: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x80276678: bnel        $t3, $zero, L_8027668C
    if (ctx->r11 != 0) {
        // 0x8027667C: lbu         $t5, 0x6824($s2)
        ctx->r13 = MEM_BU(ctx->r18, 0X6824);
            goto L_8027668C;
    }
    goto skip_14;
    // 0x8027667C: lbu         $t5, 0x6824($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6824);
    skip_14:
    // 0x80276680: lw          $v0, 0x6810($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6810);
    // 0x80276684: sh          $zero, 0x1304($v0)
    MEM_H(0X1304, ctx->r2) = 0;
    // 0x80276688: lbu         $t5, 0x6824($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6824);
L_8027668C:
    // 0x8027668C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80276690: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x80276694: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80276698: bne         $at, $zero, L_80276648
    if (ctx->r1 != 0) {
        // 0x8027669C: or          $s1, $t4, $zero
        ctx->r17 = ctx->r12 | 0;
            goto L_80276648;
    }
    // 0x8027669C: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x802766A0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802766A4:
    // 0x802766A4: lbu         $t6, 0x6830($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X6830);
    // 0x802766A8: blez        $t6, L_80276708
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802766AC: sll         $t7, $s1, 2
        ctx->r15 = S32(ctx->r17 << 2);
            goto L_80276708;
    }
L_802766AC:
    // 0x802766AC: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x802766B0: addu        $s0, $s2, $t7
    ctx->r16 = ADD32(ctx->r18, ctx->r15);
    // 0x802766B4: lw          $a0, 0x6828($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6828);
    // 0x802766B8: beql        $a0, $zero, L_802766F0
    if (ctx->r4 == 0) {
        // 0x802766BC: lbu         $t1, 0x6830($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6830);
            goto L_802766F0;
    }
    goto skip_15;
    // 0x802766BC: lbu         $t1, 0x6830($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6830);
    skip_15:
    // 0x802766C0: lbu         $t8, 0x349($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X349);
    // 0x802766C4: beql        $t8, $zero, L_802766F0
    if (ctx->r24 == 0) {
        // 0x802766C8: lbu         $t1, 0x6830($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6830);
            goto L_802766F0;
    }
    goto skip_16;
    // 0x802766C8: lbu         $t1, 0x6830($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6830);
    skip_16:
    // 0x802766CC: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x802766D0: jal         0x802D71A8
    // 0x802766D4: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_802D71A8(rdram, ctx);
        goto after_5;
    // 0x802766D4: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_5:
    // 0x802766D8: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x802766DC: bnel        $t9, $zero, L_802766F0
    if (ctx->r25 != 0) {
        // 0x802766E0: lbu         $t1, 0x6830($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6830);
            goto L_802766F0;
    }
    goto skip_17;
    // 0x802766E0: lbu         $t1, 0x6830($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6830);
    skip_17:
    // 0x802766E4: lw          $v0, 0x6828($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6828);
    // 0x802766E8: sh          $zero, 0x348($v0)
    MEM_H(0X348, ctx->r2) = 0;
    // 0x802766EC: lbu         $t1, 0x6830($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6830);
L_802766F0:
    // 0x802766F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802766F4: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x802766F8: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802766FC: bne         $at, $zero, L_802766AC
    if (ctx->r1 != 0) {
        // 0x80276700: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_802766AC;
    }
    // 0x80276700: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x80276704: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80276708:
    // 0x80276708: lbu         $t2, 0x6850($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6850);
    // 0x8027670C: blez        $t2, L_8027676C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80276710: sll         $t3, $s1, 2
        ctx->r11 = S32(ctx->r17 << 2);
            goto L_8027676C;
    }
L_80276710:
    // 0x80276710: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80276714: addu        $s0, $s2, $t3
    ctx->r16 = ADD32(ctx->r18, ctx->r11);
    // 0x80276718: lw          $a0, 0x6834($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6834);
    // 0x8027671C: beql        $a0, $zero, L_80276754
    if (ctx->r4 == 0) {
        // 0x80276720: lbu         $t7, 0x6850($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X6850);
            goto L_80276754;
    }
    goto skip_18;
    // 0x80276720: lbu         $t7, 0x6850($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6850);
    skip_18:
    // 0x80276724: lbu         $t4, 0x30D($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X30D);
    // 0x80276728: beql        $t4, $zero, L_80276754
    if (ctx->r12 == 0) {
        // 0x8027672C: lbu         $t7, 0x6850($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X6850);
            goto L_80276754;
    }
    goto skip_19;
    // 0x8027672C: lbu         $t7, 0x6850($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6850);
    skip_19:
    // 0x80276730: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80276734: jal         0x80320694
    // 0x80276738: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_80320694(rdram, ctx);
        goto after_6;
    // 0x80276738: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_6:
    // 0x8027673C: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x80276740: bnel        $t5, $zero, L_80276754
    if (ctx->r13 != 0) {
        // 0x80276744: lbu         $t7, 0x6850($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X6850);
            goto L_80276754;
    }
    goto skip_20;
    // 0x80276744: lbu         $t7, 0x6850($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6850);
    skip_20:
    // 0x80276748: lw          $v0, 0x6834($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6834);
    // 0x8027674C: sh          $zero, 0x30C($v0)
    MEM_H(0X30C, ctx->r2) = 0;
    // 0x80276750: lbu         $t7, 0x6850($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X6850);
L_80276754:
    // 0x80276754: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80276758: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x8027675C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80276760: bne         $at, $zero, L_80276710
    if (ctx->r1 != 0) {
        // 0x80276764: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_80276710;
    }
    // 0x80276764: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80276768: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027676C:
    // 0x8027676C: lbu         $t8, 0x67BC($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X67BC);
    // 0x80276770: blez        $t8, L_802767E8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80276774: sll         $t9, $s1, 2
        ctx->r25 = S32(ctx->r17 << 2);
            goto L_802767E8;
    }
L_80276774:
    // 0x80276774: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x80276778: addu        $s0, $s2, $t9
    ctx->r16 = ADD32(ctx->r18, ctx->r25);
    // 0x8027677C: lw          $a0, 0x67AC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X67AC);
    // 0x80276780: beql        $a0, $zero, L_802767D0
    if (ctx->r4 == 0) {
        // 0x80276784: lbu         $t4, 0x67BC($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X67BC);
            goto L_802767D0;
    }
    goto skip_21;
    // 0x80276784: lbu         $t4, 0x67BC($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X67BC);
    skip_21:
    // 0x80276788: lbu         $t0, 0x4($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X4);
    // 0x8027678C: beql        $t0, $zero, L_802767D0
    if (ctx->r8 == 0) {
        // 0x80276790: lbu         $t4, 0x67BC($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X67BC);
            goto L_802767D0;
    }
    goto skip_22;
    // 0x80276790: lbu         $t4, 0x67BC($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X67BC);
    skip_22:
    // 0x80276794: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80276798: jal         0x802E8958
    // 0x8027679C: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_802E8958(rdram, ctx);
        goto after_7;
    // 0x8027679C: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_7:
    // 0x802767A0: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x802767A4: bnel        $t1, $zero, L_802767D0
    if (ctx->r9 != 0) {
        // 0x802767A8: lbu         $t4, 0x67BC($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X67BC);
            goto L_802767D0;
    }
    goto skip_23;
    // 0x802767A8: lbu         $t4, 0x67BC($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X67BC);
    skip_23:
    // 0x802767AC: lw          $v0, 0x67AC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X67AC);
    // 0x802767B0: lw          $v1, 0xB8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XB8);
    // 0x802767B4: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x802767B8: lh          $t2, 0x48($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X48);
    // 0x802767BC: lw          $t9, 0x4C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4C);
    // 0x802767C0: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    // 0x802767C4: jalr        $t9
    // 0x802767C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x802767C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_8:
    // 0x802767CC: lbu         $t4, 0x67BC($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X67BC);
L_802767D0:
    // 0x802767D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802767D4: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x802767D8: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802767DC: bne         $at, $zero, L_80276774
    if (ctx->r1 != 0) {
        // 0x802767E0: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_80276774;
    }
    // 0x802767E0: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x802767E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802767E8:
    // 0x802767E8: lbu         $t5, 0x6648($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X6648);
    // 0x802767EC: blez        $t5, L_80276864
    if (SIGNED(ctx->r13) <= 0) {
        // 0x802767F0: sll         $t6, $s1, 2
        ctx->r14 = S32(ctx->r17 << 2);
            goto L_80276864;
    }
L_802767F0:
    // 0x802767F0: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x802767F4: addu        $s0, $s2, $t6
    ctx->r16 = ADD32(ctx->r18, ctx->r14);
    // 0x802767F8: lw          $a0, 0x6600($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6600);
    // 0x802767FC: beql        $a0, $zero, L_8027684C
    if (ctx->r4 == 0) {
        // 0x80276800: lbu         $t2, 0x6648($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X6648);
            goto L_8027684C;
    }
    goto skip_24;
    // 0x80276800: lbu         $t2, 0x6648($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6648);
    skip_24:
    // 0x80276804: lbu         $t7, 0x1B5($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1B5);
    // 0x80276808: beql        $t7, $zero, L_8027684C
    if (ctx->r15 == 0) {
        // 0x8027680C: lbu         $t2, 0x6648($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X6648);
            goto L_8027684C;
    }
    goto skip_25;
    // 0x8027680C: lbu         $t2, 0x6648($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6648);
    skip_25:
    // 0x80276810: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80276814: jal         0x803165A8
    // 0x80276818: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_803165A8(rdram, ctx);
        goto after_9;
    // 0x80276818: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_9:
    // 0x8027681C: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x80276820: bnel        $t8, $zero, L_8027684C
    if (ctx->r24 != 0) {
        // 0x80276824: lbu         $t2, 0x6648($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X6648);
            goto L_8027684C;
    }
    goto skip_26;
    // 0x80276824: lbu         $t2, 0x6648($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6648);
    skip_26:
    // 0x80276828: lw          $v0, 0x6600($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6600);
    // 0x8027682C: lw          $v1, 0x100($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X100);
    // 0x80276830: sh          $zero, 0x1B4($v0)
    MEM_H(0X1B4, ctx->r2) = 0;
    // 0x80276834: lh          $t0, 0x78($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X78);
    // 0x80276838: lw          $t9, 0x7C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X7C);
    // 0x8027683C: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    // 0x80276840: jalr        $t9
    // 0x80276844: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x80276844: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    after_10:
    // 0x80276848: lbu         $t2, 0x6648($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X6648);
L_8027684C:
    // 0x8027684C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80276850: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x80276854: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80276858: bne         $at, $zero, L_802767F0
    if (ctx->r1 != 0) {
        // 0x8027685C: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_802767F0;
    }
    // 0x8027685C: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80276860: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80276864:
    // 0x80276864: lbu         $t3, 0x6674($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X6674);
    // 0x80276868: blez        $t3, L_802768C8
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8027686C: sll         $t4, $s1, 2
        ctx->r12 = S32(ctx->r17 << 2);
            goto L_802768C8;
    }
L_8027686C:
    // 0x8027686C: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x80276870: addu        $s0, $s2, $t4
    ctx->r16 = ADD32(ctx->r18, ctx->r12);
    // 0x80276874: lw          $a0, 0x664C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X664C);
    // 0x80276878: beql        $a0, $zero, L_802768B0
    if (ctx->r4 == 0) {
        // 0x8027687C: lbu         $t8, 0x6674($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X6674);
            goto L_802768B0;
    }
    goto skip_27;
    // 0x8027687C: lbu         $t8, 0x6674($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6674);
    skip_27:
    // 0x80276880: lbu         $t5, 0x14($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X14);
    // 0x80276884: beql        $t5, $zero, L_802768B0
    if (ctx->r13 == 0) {
        // 0x80276888: lbu         $t8, 0x6674($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X6674);
            goto L_802768B0;
    }
    goto skip_28;
    // 0x80276888: lbu         $t8, 0x6674($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6674);
    skip_28:
    // 0x8027688C: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80276890: jal         0x802D7C7C
    // 0x80276894: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_802D7C7C(rdram, ctx);
        goto after_11;
    // 0x80276894: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_11:
    // 0x80276898: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8027689C: bnel        $t6, $zero, L_802768B0
    if (ctx->r14 != 0) {
        // 0x802768A0: lbu         $t8, 0x6674($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X6674);
            goto L_802768B0;
    }
    goto skip_29;
    // 0x802768A0: lbu         $t8, 0x6674($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6674);
    skip_29:
    // 0x802768A4: lw          $v0, 0x664C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X664C);
    // 0x802768A8: sb          $zero, 0x14($v0)
    MEM_B(0X14, ctx->r2) = 0;
    // 0x802768AC: lbu         $t8, 0x6674($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6674);
L_802768B0:
    // 0x802768B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802768B4: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x802768B8: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802768BC: bne         $at, $zero, L_8027686C
    if (ctx->r1 != 0) {
        // 0x802768C0: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_8027686C;
    }
    // 0x802768C0: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x802768C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802768C8:
    // 0x802768C8: lbu         $t0, 0x6768($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X6768);
    // 0x802768CC: blez        $t0, L_8027692C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802768D0: sll         $t9, $s1, 2
        ctx->r25 = S32(ctx->r17 << 2);
            goto L_8027692C;
    }
L_802768D0:
    // 0x802768D0: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x802768D4: addu        $s0, $s2, $t9
    ctx->r16 = ADD32(ctx->r18, ctx->r25);
    // 0x802768D8: lw          $a0, 0x6678($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6678);
    // 0x802768DC: beql        $a0, $zero, L_80276914
    if (ctx->r4 == 0) {
        // 0x802768E0: lbu         $t4, 0x6768($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6768);
            goto L_80276914;
    }
    goto skip_30;
    // 0x802768E0: lbu         $t4, 0x6768($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6768);
    skip_30:
    // 0x802768E4: lbu         $t1, 0x18($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X18);
    // 0x802768E8: beql        $t1, $zero, L_80276914
    if (ctx->r9 == 0) {
        // 0x802768EC: lbu         $t4, 0x6768($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X6768);
            goto L_80276914;
    }
    goto skip_31;
    // 0x802768EC: lbu         $t4, 0x6768($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6768);
    skip_31:
    // 0x802768F0: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x802768F4: jal         0x80287A40
    // 0x802768F8: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_80287A40(rdram, ctx);
        goto after_12;
    // 0x802768F8: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_12:
    // 0x802768FC: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x80276900: bne         $t2, $zero, L_80276910
    if (ctx->r10 != 0) {
        // 0x80276904: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80276910;
    }
    // 0x80276904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80276908: jal         0x80287CD4
    // 0x8027690C: lw          $a0, 0x6678($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6678);
    static_3_80287CD4(rdram, ctx);
        goto after_13;
    // 0x8027690C: lw          $a0, 0x6678($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6678);
    after_13:
L_80276910:
    // 0x80276910: lbu         $t4, 0x6768($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6768);
L_80276914:
    // 0x80276914: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80276918: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x8027691C: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80276920: bne         $at, $zero, L_802768D0
    if (ctx->r1 != 0) {
        // 0x80276924: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_802768D0;
    }
    // 0x80276924: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80276928: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8027692C:
    // 0x8027692C: lbu         $t5, 0x67FC($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X67FC);
    // 0x80276930: blez        $t5, L_80276990
    if (SIGNED(ctx->r13) <= 0) {
        // 0x80276934: sll         $t6, $s1, 2
        ctx->r14 = S32(ctx->r17 << 2);
            goto L_80276990;
    }
L_80276934:
    // 0x80276934: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80276938: addu        $s0, $s2, $t6
    ctx->r16 = ADD32(ctx->r18, ctx->r14);
    // 0x8027693C: lw          $a0, 0x67C0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X67C0);
    // 0x80276940: beql        $a0, $zero, L_80276978
    if (ctx->r4 == 0) {
        // 0x80276944: lbu         $t9, 0x67FC($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X67FC);
            goto L_80276978;
    }
    goto skip_32;
    // 0x80276944: lbu         $t9, 0x67FC($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X67FC);
    skip_32:
    // 0x80276948: lbu         $t7, 0x275($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X275);
    // 0x8027694C: beql        $t7, $zero, L_80276978
    if (ctx->r15 == 0) {
        // 0x80276950: lbu         $t9, 0x67FC($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X67FC);
            goto L_80276978;
    }
    goto skip_33;
    // 0x80276950: lbu         $t9, 0x67FC($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X67FC);
    skip_33:
    // 0x80276954: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80276958: jal         0x802E9AE0
    // 0x8027695C: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_802E9AE0(rdram, ctx);
        goto after_14;
    // 0x8027695C: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_14:
    // 0x80276960: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x80276964: bnel        $t8, $zero, L_80276978
    if (ctx->r24 != 0) {
        // 0x80276968: lbu         $t9, 0x67FC($s2)
        ctx->r25 = MEM_BU(ctx->r18, 0X67FC);
            goto L_80276978;
    }
    goto skip_34;
    // 0x80276968: lbu         $t9, 0x67FC($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X67FC);
    skip_34:
    // 0x8027696C: lw          $v0, 0x67C0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X67C0);
    // 0x80276970: sh          $zero, 0x274($v0)
    MEM_H(0X274, ctx->r2) = 0;
    // 0x80276974: lbu         $t9, 0x67FC($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X67FC);
L_80276978:
    // 0x80276978: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8027697C: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x80276980: slt         $at, $t0, $t9
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80276984: bne         $at, $zero, L_80276934
    if (ctx->r1 != 0) {
        // 0x80276988: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_80276934;
    }
    // 0x80276988: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x8027698C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80276990:
    // 0x80276990: lbu         $t1, 0x68A8($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X68A8);
    // 0x80276994: blez        $t1, L_802769F4
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80276998: sll         $t2, $s1, 2
        ctx->r10 = S32(ctx->r17 << 2);
            goto L_802769F4;
    }
L_80276998:
    // 0x80276998: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x8027699C: addu        $s0, $s2, $t2
    ctx->r16 = ADD32(ctx->r18, ctx->r10);
    // 0x802769A0: lw          $a0, 0x68A4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68A4);
    // 0x802769A4: beql        $a0, $zero, L_802769DC
    if (ctx->r4 == 0) {
        // 0x802769A8: lbu         $t6, 0x68A8($s2)
        ctx->r14 = MEM_BU(ctx->r18, 0X68A8);
            goto L_802769DC;
    }
    goto skip_35;
    // 0x802769A8: lbu         $t6, 0x68A8($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X68A8);
    skip_35:
    // 0x802769AC: lbu         $t3, 0x1591($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1591);
    // 0x802769B0: beql        $t3, $zero, L_802769DC
    if (ctx->r11 == 0) {
        // 0x802769B4: lbu         $t6, 0x68A8($s2)
        ctx->r14 = MEM_BU(ctx->r18, 0X68A8);
            goto L_802769DC;
    }
    goto skip_36;
    // 0x802769B4: lbu         $t6, 0x68A8($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X68A8);
    skip_36:
    // 0x802769B8: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x802769BC: jal         0x802B3AEC
    // 0x802769C0: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_802B3AEC(rdram, ctx);
        goto after_15;
    // 0x802769C0: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_15:
    // 0x802769C4: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x802769C8: bnel        $t4, $zero, L_802769DC
    if (ctx->r12 != 0) {
        // 0x802769CC: lbu         $t6, 0x68A8($s2)
        ctx->r14 = MEM_BU(ctx->r18, 0X68A8);
            goto L_802769DC;
    }
    goto skip_37;
    // 0x802769CC: lbu         $t6, 0x68A8($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X68A8);
    skip_37:
    // 0x802769D0: lw          $v0, 0x68A4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68A4);
    // 0x802769D4: sh          $zero, 0x1590($v0)
    MEM_H(0X1590, ctx->r2) = 0;
    // 0x802769D8: lbu         $t6, 0x68A8($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X68A8);
L_802769DC:
    // 0x802769DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802769E0: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x802769E4: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802769E8: bne         $at, $zero, L_80276998
    if (ctx->r1 != 0) {
        // 0x802769EC: or          $s1, $t5, $zero
        ctx->r17 = ctx->r13 | 0;
            goto L_80276998;
    }
    // 0x802769EC: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x802769F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802769F4:
    // 0x802769F4: lbu         $t7, 0x68A0($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X68A0);
    // 0x802769F8: blez        $t7, L_80276A58
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802769FC: sll         $t8, $s1, 2
        ctx->r24 = S32(ctx->r17 << 2);
            goto L_80276A58;
    }
L_802769FC:
    // 0x802769FC: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80276A00: addu        $s0, $s2, $t8
    ctx->r16 = ADD32(ctx->r18, ctx->r24);
    // 0x80276A04: lw          $a0, 0x689C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X689C);
    // 0x80276A08: beql        $a0, $zero, L_80276A40
    if (ctx->r4 == 0) {
        // 0x80276A0C: lbu         $t2, 0x68A0($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X68A0);
            goto L_80276A40;
    }
    goto skip_38;
    // 0x80276A0C: lbu         $t2, 0x68A0($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X68A0);
    skip_38:
    // 0x80276A10: lbu         $t0, 0x1($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1);
    // 0x80276A14: beql        $t0, $zero, L_80276A40
    if (ctx->r8 == 0) {
        // 0x80276A18: lbu         $t2, 0x68A0($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X68A0);
            goto L_80276A40;
    }
    goto skip_39;
    // 0x80276A18: lbu         $t2, 0x68A0($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X68A0);
    skip_39:
    // 0x80276A1C: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80276A20: jal         0x802C64B8
    // 0x80276A24: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_802C64B8(rdram, ctx);
        goto after_16;
    // 0x80276A24: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_16:
    // 0x80276A28: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x80276A2C: bnel        $t9, $zero, L_80276A40
    if (ctx->r25 != 0) {
        // 0x80276A30: lbu         $t2, 0x68A0($s2)
        ctx->r10 = MEM_BU(ctx->r18, 0X68A0);
            goto L_80276A40;
    }
    goto skip_40;
    // 0x80276A30: lbu         $t2, 0x68A0($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X68A0);
    skip_40:
    // 0x80276A34: lw          $v0, 0x689C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X689C);
    // 0x80276A38: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80276A3C: lbu         $t2, 0x68A0($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X68A0);
L_80276A40:
    // 0x80276A40: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80276A44: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x80276A48: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80276A4C: bne         $at, $zero, L_802769FC
    if (ctx->r1 != 0) {
        // 0x80276A50: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_802769FC;
    }
    // 0x80276A50: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80276A54: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80276A58:
    // 0x80276A58: lbu         $t3, 0x68B0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X68B0);
    // 0x80276A5C: blez        $t3, L_80276ABC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80276A60: sll         $t4, $s1, 2
        ctx->r12 = S32(ctx->r17 << 2);
            goto L_80276ABC;
    }
L_80276A60:
    // 0x80276A60: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x80276A64: addu        $s0, $s2, $t4
    ctx->r16 = ADD32(ctx->r18, ctx->r12);
    // 0x80276A68: lw          $a0, 0x68AC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68AC);
    // 0x80276A6C: beql        $a0, $zero, L_80276AA4
    if (ctx->r4 == 0) {
        // 0x80276A70: lbu         $t8, 0x68B0($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X68B0);
            goto L_80276AA4;
    }
    goto skip_41;
    // 0x80276A70: lbu         $t8, 0x68B0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X68B0);
    skip_41:
    // 0x80276A74: lbu         $t5, 0xF1($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0XF1);
    // 0x80276A78: beql        $t5, $zero, L_80276AA4
    if (ctx->r13 == 0) {
        // 0x80276A7C: lbu         $t8, 0x68B0($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X68B0);
            goto L_80276AA4;
    }
    goto skip_42;
    // 0x80276A7C: lbu         $t8, 0x68B0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X68B0);
    skip_42:
    // 0x80276A80: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80276A84: jal         0x8029DC30
    // 0x80276A88: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_8029DC30(rdram, ctx);
        goto after_17;
    // 0x80276A88: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_17:
    // 0x80276A8C: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x80276A90: bnel        $t6, $zero, L_80276AA4
    if (ctx->r14 != 0) {
        // 0x80276A94: lbu         $t8, 0x68B0($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X68B0);
            goto L_80276AA4;
    }
    goto skip_43;
    // 0x80276A94: lbu         $t8, 0x68B0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X68B0);
    skip_43:
    // 0x80276A98: lw          $v0, 0x68AC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68AC);
    // 0x80276A9C: sh          $zero, 0xF0($v0)
    MEM_H(0XF0, ctx->r2) = 0;
    // 0x80276AA0: lbu         $t8, 0x68B0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X68B0);
L_80276AA4:
    // 0x80276AA4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80276AA8: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x80276AAC: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80276AB0: bne         $at, $zero, L_80276A60
    if (ctx->r1 != 0) {
        // 0x80276AB4: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_80276A60;
    }
    // 0x80276AB4: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80276AB8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80276ABC:
    // 0x80276ABC: lbu         $t0, 0x71E4($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X71E4);
    // 0x80276AC0: blez        $t0, L_80276B1C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80276AC4: sll         $t9, $s1, 2
        ctx->r25 = S32(ctx->r17 << 2);
            goto L_80276B1C;
    }
L_80276AC4:
    // 0x80276AC4: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x80276AC8: addu        $s0, $s2, $t9
    ctx->r16 = ADD32(ctx->r18, ctx->r25);
    // 0x80276ACC: lw          $a0, 0x71C4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X71C4);
    // 0x80276AD0: beql        $a0, $zero, L_80276B08
    if (ctx->r4 == 0) {
        // 0x80276AD4: lbu         $t4, 0x71E4($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X71E4);
            goto L_80276B08;
    }
    goto skip_44;
    // 0x80276AD4: lbu         $t4, 0x71E4($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X71E4);
    skip_44:
    // 0x80276AD8: lbu         $t1, 0xF1($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XF1);
    // 0x80276ADC: beql        $t1, $zero, L_80276B08
    if (ctx->r9 == 0) {
        // 0x80276AE0: lbu         $t4, 0x71E4($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X71E4);
            goto L_80276B08;
    }
    goto skip_45;
    // 0x80276AE0: lbu         $t4, 0x71E4($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X71E4);
    skip_45:
    // 0x80276AE4: lw          $a1, 0x32A8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X32A8);
    // 0x80276AE8: jal         0x80308CC0
    // 0x80276AEC: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    static_3_80308CC0(rdram, ctx);
        goto after_18;
    // 0x80276AEC: lw          $a2, 0x32B0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X32B0);
    after_18:
    // 0x80276AF0: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x80276AF4: bnel        $t2, $zero, L_80276B08
    if (ctx->r10 != 0) {
        // 0x80276AF8: lbu         $t4, 0x71E4($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X71E4);
            goto L_80276B08;
    }
    goto skip_46;
    // 0x80276AF8: lbu         $t4, 0x71E4($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X71E4);
    skip_46:
    // 0x80276AFC: lw          $v0, 0x71C4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X71C4);
    // 0x80276B00: sh          $zero, 0xF0($v0)
    MEM_H(0XF0, ctx->r2) = 0;
    // 0x80276B04: lbu         $t4, 0x71E4($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X71E4);
L_80276B08:
    // 0x80276B08: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80276B0C: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x80276B10: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80276B14: bne         $at, $zero, L_80276AC4
    if (ctx->r1 != 0) {
        // 0x80276B18: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_80276AC4;
    }
    // 0x80276B18: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_80276B1C:
    // 0x80276B1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80276B20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80276B24: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80276B28: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80276B2C: jr          $ra
    // 0x80276B30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80276B30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802D2A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2B14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2B18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2B1C: bne         $a0, $zero, L_802D2B34
    if (ctx->r4 != 0) {
        // 0x802D2B20: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802D2B34;
    }
    // 0x802D2B20: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802D2B24: jal         0x802C67EC
    // 0x802D2B28: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802D2B28: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_0:
    // 0x802D2B2C: beq         $v0, $zero, L_802D2B48
    if (ctx->r2 == 0) {
        // 0x802D2B30: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802D2B48;
    }
    // 0x802D2B30: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802D2B34:
    // 0x802D2B34: addiu       $a0, $a1, 0x20
    ctx->r4 = ADD32(ctx->r5, 0X20);
    // 0x802D2B38: jal         0x80302F20
    // 0x802D2B3C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_80302F20(rdram, ctx);
        goto after_1;
    // 0x802D2B3C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802D2B40: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802D2B44: sw          $zero, 0x14($a1)
    MEM_W(0X14, ctx->r5) = 0;
L_802D2B48:
    // 0x802D2B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2B50: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802D2B54: jr          $ra
    // 0x802D2B58: nop

    return;
    // 0x802D2B58: nop

;}
RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200050: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80200054: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80200058: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020005C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80200060:
    // 0x80200060: jal         0x802000DC
    // 0x80200064: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_802000DC(rdram, ctx);
        goto after_0;
    // 0x80200064: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x80200068: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8020006C: andi        $t6, $s0, 0xFFFF
    ctx->r14 = ctx->r16 & 0XFFFF;
    // 0x80200070: blez        $t6, L_80200060
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80200074: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_80200060;
    }
    // 0x80200074: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80200078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8020007C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80200080: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80200084: jr          $ra
    // 0x80200088: nop

    return;
    // 0x80200088: nop

    // 0x8020008C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80200090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200094: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80200098: jal         0x8022970C
    // 0x8020009C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_8022970C(rdram, ctx);
        goto after_1;
    // 0x8020009C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_1:
;}
RECOMP_FUNC void D_80202084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80202084: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80202088: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8020208C: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x80202090: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80202094: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80202098: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8020209C: andi        $s5, $a0, 0xFF
    ctx->r21 = ctx->r4 & 0XFF;
    // 0x802020A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802020A4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802020A8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802020AC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802020B0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802020B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802020B8: blez        $v1, L_80202130
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802020BC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80202130;
    }
    // 0x802020BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802020C0: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x802020C4: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x802020C8: addiu       $s4, $zero, 0xB4
    ctx->r20 = ADD32(0, 0XB4);
    // 0x802020CC: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
L_802020D0:
    // 0x802020D0: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802020D4: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x802020D8: mflo        $t7
    ctx->r15 = lo;
    // 0x802020DC: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x802020E0: lbu         $t8, 0x8C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X8C);
    // 0x802020E4: beql        $s2, $t8, L_80202120
    if (ctx->r18 == ctx->r24) {
        // 0x802020E8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80202120;
    }
    goto skip_0;
    // 0x802020E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x802020EC: beql        $s5, $zero, L_80202114
    if (ctx->r21 == 0) {
        // 0x802020F0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80202114;
    }
    goto skip_1;
    // 0x802020F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x802020F4: lw          $t9, 0x98($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X98);
    // 0x802020F8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x802020FC: ori         $t0, $t9, 0x20
    ctx->r8 = ctx->r25 | 0X20;
    // 0x80202100: jal         0x80201FB8
    // 0x80202104: sw          $t0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r8;
    static_3_80201FB8(rdram, ctx);
        goto after_0;
    // 0x80202104: sw          $t0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r8;
    after_0:
    // 0x80202108: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8020210C: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x80202110: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80202114:
    // 0x80202114: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x80202118: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8020211C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80202120:
    // 0x80202120: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x80202124: slt         $at, $t2, $v1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80202128: bne         $at, $zero, L_802020D0
    if (ctx->r1 != 0) {
        // 0x8020212C: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_802020D0;
    }
    // 0x8020212C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_80202130:
    // 0x80202130: blez        $s1, L_8020215C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80202134: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_8020215C;
    }
    // 0x80202134: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80202138: beq         $s5, $zero, L_8020214C
    if (ctx->r21 == 0) {
        // 0x8020213C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8020214C;
    }
    // 0x8020213C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202140: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80202144: b           L_80202154
    // 0x80202148: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
        goto L_80202154;
    // 0x80202148: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
L_8020214C:
    // 0x8020214C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80202150: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
L_80202154:
    // 0x80202154: jal         0x80231A24
    // 0x80202158: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80202158: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
L_8020215C:
    // 0x8020215C: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80202160: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80202164: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80202168: blezl       $a1, L_8020217C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8020216C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8020217C;
    }
    goto skip_2;
    // 0x8020216C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x80202170: jal         0x80231A24
    // 0x80202174: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80202174: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x80202178: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020217C:
    // 0x8020217C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80202180: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80202184: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80202188: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8020218C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80202190: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80202194: jr          $ra
    // 0x80202198: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80202198: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802E3BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3C68: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x802E3C6C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802E3C70: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802E3C74: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802E3C78: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802E3C7C: sw          $a1, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r5;
    // 0x802E3C80: sw          $a2, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r6;
    // 0x802E3C84: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E3C88: addiu       $t6, $sp, 0x174
    ctx->r14 = ADD32(ctx->r29, 0X174);
    // 0x802E3C8C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802E3C90: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802E3C94: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802E3C98: lwc1        $f4, 0x154($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X154);
    // 0x802E3C9C: addiu       $a2, $sp, 0x184
    ctx->r6 = ADD32(ctx->r29, 0X184);
    // 0x802E3CA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802E3CA4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802E3CA8: lwc1        $f6, 0x15C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X15C);
    // 0x802E3CAC: addiu       $a3, $sp, 0x17C
    ctx->r7 = ADD32(ctx->r29, 0X17C);
    // 0x802E3CB0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x802E3CB4: lwc1        $f8, 0x160($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X160);
    // 0x802E3CB8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x802E3CBC: lwc1        $f10, 0x164($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X164);
    // 0x802E3CC0: jal         0x802AD568
    // 0x802E3CC4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x802E3CC4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x802E3CC8: blez        $v0, L_802E3F98
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802E3CCC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802E3F98;
    }
    // 0x802E3CCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E3CD0: jal         0x802C51D0
    // 0x802E3CD4: addiu       $a1, $sp, 0x130
    ctx->r5 = ADD32(ctx->r29, 0X130);
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x802E3CD4: addiu       $a1, $sp, 0x130
    ctx->r5 = ADD32(ctx->r29, 0X130);
    after_1:
    // 0x802E3CD8: addiu       $s0, $sp, 0x6C
    ctx->r16 = ADD32(ctx->r29, 0X6C);
    // 0x802E3CDC: addiu       $t8, $sp, 0x68
    ctx->r24 = ADD32(ctx->r29, 0X68);
    // 0x802E3CE0: addiu       $t9, $sp, 0x64
    ctx->r25 = ADD32(ctx->r29, 0X64);
    // 0x802E3CE4: addiu       $t0, $sp, 0x60
    ctx->r8 = ADD32(ctx->r29, 0X60);
    // 0x802E3CE8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802E3CEC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802E3CF0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802E3CF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E3CF8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802E3CFC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x802E3D00: jal         0x802CF1C8
    // 0x802E3D04: addiu       $a0, $sp, 0x130
    ctx->r4 = ADD32(ctx->r29, 0X130);
    static_3_802CF1C8(rdram, ctx);
        goto after_2;
    // 0x802E3D04: addiu       $a0, $sp, 0x130
    ctx->r4 = ADD32(ctx->r29, 0X130);
    after_2:
    // 0x802E3D08: lw          $a0, 0x194($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X194);
    // 0x802E3D0C: lh          $a1, 0x198($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X198);
    // 0x802E3D10: jal         0x8021B6D4
    // 0x802E3D14: addiu       $a2, $sp, 0xF0
    ctx->r6 = ADD32(ctx->r29, 0XF0);
    static_3_8021B6D4(rdram, ctx);
        goto after_3;
    // 0x802E3D14: addiu       $a2, $sp, 0xF0
    ctx->r6 = ADD32(ctx->r29, 0XF0);
    after_3:
    // 0x802E3D18: addiu       $t1, $sp, 0x5C
    ctx->r9 = ADD32(ctx->r29, 0X5C);
    // 0x802E3D1C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802E3D20: addiu       $a0, $sp, 0xF0
    ctx->r4 = ADD32(ctx->r29, 0XF0);
    // 0x802E3D24: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E3D28: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802E3D2C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x802E3D30: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802E3D34: jal         0x802CF1C8
    // 0x802E3D38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_802CF1C8(rdram, ctx);
        goto after_4;
    // 0x802E3D38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_4:
    // 0x802E3D3C: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802E3D40: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802E3D44: lwc1        $f8, 0x88($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X88);
    // 0x802E3D48: lwc1        $f14, 0x17C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x802E3D4C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802E3D50: jal         0x802CF4D0
    // 0x802E3D54: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_5;
    // 0x802E3D54: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_5:
    // 0x802E3D58: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x802E3D5C: lwc1        $f18, 0x124($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X124);
    // 0x802E3D60: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x802E3D64: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x802E3D68: addiu       $a0, $sp, 0xF0
    ctx->r4 = ADD32(ctx->r29, 0XF0);
    // 0x802E3D6C: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x802E3D70: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x802E3D74: jal         0x8022970C
    // 0x802E3D78: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_6;
    // 0x802E3D78: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x802E3D7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E3D80: addiu       $t2, $sp, 0xF0
    ctx->r10 = ADD32(ctx->r29, 0XF0);
    // 0x802E3D84: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802E3D88: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802E3D8C: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802E3D90: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x802E3D94: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x802E3D98: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802E3D9C: jal         0x802CF27C
    // 0x802E3DA0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    static_3_802CF27C(rdram, ctx);
        goto after_7;
    // 0x802E3DA0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x802E3DA4: lwc1        $f0, 0x198($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802E3DA8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802E3DAC: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802E3DB0: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x802E3DB4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802E3DB8: nop

    // 0x802E3DBC: bc1fl       L_802E3DD0
    if (!c1cs) {
        // 0x802E3DC0: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802E3DD0;
    }
    goto skip_0;
    // 0x802E3DC0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_0:
    // 0x802E3DC4: b           L_802E3DE4
    // 0x802E3DC8: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
        goto L_802E3DE4;
    // 0x802E3DC8: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x802E3DCC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802E3DD0:
    // 0x802E3DD0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x802E3DD4: nop

    // 0x802E3DD8: bc1fl       L_802E3DE8
    if (!c1cs) {
        // 0x802E3DDC: lh          $a1, 0x19A($s1)
        ctx->r5 = MEM_H(ctx->r17, 0X19A);
            goto L_802E3DE8;
    }
    goto skip_1;
    // 0x802E3DDC: lh          $a1, 0x19A($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X19A);
    skip_1:
    // 0x802E3DE0: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
L_802E3DE4:
    // 0x802E3DE4: lh          $a1, 0x19A($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X19A);
L_802E3DE8:
    // 0x802E3DE8: beql        $a1, $zero, L_802E3E74
    if (ctx->r5 == 0) {
        // 0x802E3DEC: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_802E3E74;
    }
    goto skip_2;
    // 0x802E3DEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_2:
    // 0x802E3DF0: jal         0x8021B6D4
    // 0x802E3DF4: lw          $a0, 0x194($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X194);
    static_3_8021B6D4(rdram, ctx);
        goto after_8;
    // 0x802E3DF4: lw          $a0, 0x194($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X194);
    after_8:
    // 0x802E3DF8: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x802E3DFC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802E3E00: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x802E3E04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802E3E08: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802E3E0C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x802E3E10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802E3E14: jal         0x802CF1C8
    // 0x802E3E18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    static_3_802CF1C8(rdram, ctx);
        goto after_9;
    // 0x802E3E18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_9:
    // 0x802E3E1C: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802E3E20: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802E3E24: lwc1        $f14, 0x174($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X174);
    // 0x802E3E28: jal         0x802CF4D0
    // 0x802E3E2C: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    static_3_802CF4D0(rdram, ctx);
        goto after_10;
    // 0x802E3E2C: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_10:
    // 0x802E3E30: lwc1        $f14, 0x198($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802E3E34: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x802E3E38: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x802E3E3C: nop

    // 0x802E3E40: bc1fl       L_802E3E54
    if (!c1cs) {
        // 0x802E3E44: neg.s       $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
            goto L_802E3E54;
    }
    goto skip_3;
    // 0x802E3E44: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
    skip_3:
    // 0x802E3E48: b           L_802E3E68
    // 0x802E3E4C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_802E3E68;
    // 0x802E3E4C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x802E3E50: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
L_802E3E54:
    // 0x802E3E54: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802E3E58: nop

    // 0x802E3E5C: bc1f        L_802E3E68
    if (!c1cs) {
        // 0x802E3E60: nop
    
            goto L_802E3E68;
    }
    // 0x802E3E60: nop

    // 0x802E3E64: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_802E3E68:
    // 0x802E3E68: b           L_802E3E7C
    // 0x802E3E6C: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
        goto L_802E3E7C;
    // 0x802E3E6C: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x802E3E70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_802E3E74:
    // 0x802E3E74: nop

    // 0x802E3E78: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
L_802E3E7C:
    // 0x802E3E7C: addiu       $a0, $sp, 0xF0
    ctx->r4 = ADD32(ctx->r29, 0XF0);
    // 0x802E3E80: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802E3E84: jal         0x802D01D4
    // 0x802E3E88: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_11;
    // 0x802E3E88: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_11:
    // 0x802E3E8C: lw          $a0, 0x194($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X194);
    // 0x802E3E90: lh          $a1, 0x198($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X198);
    // 0x802E3E94: jal         0x8021B4B0
    // 0x802E3E98: addiu       $a2, $sp, 0xF0
    ctx->r6 = ADD32(ctx->r29, 0XF0);
    static_3_8021B4B0(rdram, ctx);
        goto after_12;
    // 0x802E3E98: addiu       $a2, $sp, 0xF0
    ctx->r6 = ADD32(ctx->r29, 0XF0);
    after_12:
    // 0x802E3E9C: lh          $t4, 0x19A($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X19A);
    // 0x802E3EA0: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x802E3EA4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x802E3EA8: beql        $t4, $zero, L_802E3ECC
    if (ctx->r12 == 0) {
        // 0x802E3EAC: lh          $a1, 0x19C($s1)
        ctx->r5 = MEM_H(ctx->r17, 0X19C);
            goto L_802E3ECC;
    }
    goto skip_4;
    // 0x802E3EAC: lh          $a1, 0x19C($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X19C);
    skip_4:
    // 0x802E3EB0: jal         0x802D01D4
    // 0x802E3EB4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_13;
    // 0x802E3EB4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_13:
    // 0x802E3EB8: lw          $a0, 0x194($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X194);
    // 0x802E3EBC: lh          $a1, 0x19A($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X19A);
    // 0x802E3EC0: jal         0x8021B4B0
    // 0x802E3EC4: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    static_3_8021B4B0(rdram, ctx);
        goto after_14;
    // 0x802E3EC4: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    after_14:
    // 0x802E3EC8: lh          $a1, 0x19C($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X19C);
L_802E3ECC:
    // 0x802E3ECC: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x802E3ED0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x802E3ED4: beq         $a1, $zero, L_802E3F04
    if (ctx->r5 == 0) {
        // 0x802E3ED8: nop
    
            goto L_802E3F04;
    }
    // 0x802E3ED8: nop

    // 0x802E3EDC: jal         0x8021B6D4
    // 0x802E3EE0: lw          $a0, 0x194($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X194);
    static_3_8021B6D4(rdram, ctx);
        goto after_15;
    // 0x802E3EE0: lw          $a0, 0x194($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X194);
    after_15:
    // 0x802E3EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802E3EE8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x802E3EEC: jal         0x802D01D4
    // 0x802E3EF0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_16;
    // 0x802E3EF0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_16:
    // 0x802E3EF4: lw          $a0, 0x194($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X194);
    // 0x802E3EF8: lh          $a1, 0x19C($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X19C);
    // 0x802E3EFC: jal         0x8021B4B0
    // 0x802E3F00: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_8021B4B0(rdram, ctx);
        goto after_17;
    // 0x802E3F00: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_17:
L_802E3F04:
    // 0x802E3F04: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E3F08: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E3F0C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802E3F10: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802E3F14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802E3F18: mul.s       $f0, $f12, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x802E3F1C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802E3F20: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802E3F24: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802E3F28: nop

    // 0x802E3F2C: bc1fl       L_802E3F40
    if (!c1cs) {
        // 0x802E3F30: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802E3F40;
    }
    goto skip_5;
    // 0x802E3F30: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_5:
    // 0x802E3F34: b           L_802E3F40
    // 0x802E3F38: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802E3F40;
    // 0x802E3F38: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802E3F3C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802E3F40:
    // 0x802E3F40: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x802E3F44: nop

    // 0x802E3F48: bc1fl       L_802E3F9C
    if (!c1cs) {
        // 0x802E3F4C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802E3F9C;
    }
    goto skip_6;
    // 0x802E3F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x802E3F50: mul.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x802E3F54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E3F58: lw          $a1, 0x194($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X194);
    // 0x802E3F5C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802E3F60: nop

    // 0x802E3F64: bc1fl       L_802E3F78
    if (!c1cs) {
        // 0x802E3F68: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_802E3F78;
    }
    goto skip_7;
    // 0x802E3F68: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_7:
    // 0x802E3F6C: b           L_802E3F78
    // 0x802E3F70: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_802E3F78;
    // 0x802E3F70: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802E3F74: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_802E3F78:
    // 0x802E3F78: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x802E3F7C: nop

    // 0x802E3F80: bc1fl       L_802E3F9C
    if (!c1cs) {
        // 0x802E3F84: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802E3F9C;
    }
    goto skip_8;
    // 0x802E3F84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_8:
    // 0x802E3F88: jal         0x802C5468
    // 0x802E3F8C: lw          $a2, 0x198($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X198);
    static_3_802C5468(rdram, ctx);
        goto after_18;
    // 0x802E3F8C: lw          $a2, 0x198($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X198);
    after_18:
    // 0x802E3F90: b           L_802E3FA0
    // 0x802E3F94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802E3FA0;
    // 0x802E3F94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802E3F98:
    // 0x802E3F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802E3F9C:
    // 0x802E3F9C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802E3FA0:
    // 0x802E3FA0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802E3FA4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802E3FA8: jr          $ra
    // 0x802E3FAC: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    return;
    // 0x802E3FAC: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
;}
