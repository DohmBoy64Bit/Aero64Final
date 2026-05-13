#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802A1E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1F0C: jr          $ra
    // 0x802A1F10: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    return;
    // 0x802A1F10: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
;}
RECOMP_FUNC void D_802D817C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D81FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D8200: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802D8204: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802D8208: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802D820C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802D8210: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x802D8214: sb          $a1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r5;
    // 0x802D8218: sb          $a2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r6;
    // 0x802D821C: sb          $a3, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r7;
    // 0x802D8220: lbu         $t0, 0x13($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X13);
    // 0x802D8224: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802D8228: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802D822C: sb          $t0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r8;
    // 0x802D8230: lbu         $t1, 0x17($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X17);
    // 0x802D8234: sb          $t1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r9;
    // 0x802D8238: lbu         $t2, 0x13($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X13);
    // 0x802D823C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x802D8240: bgez        $t2, L_802D8254
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802D8244: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802D8254;
    }
    // 0x802D8244: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802D8248: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D824C: nop

    // 0x802D8250: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_802D8254:
    // 0x802D8254: c.le.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl <= ctx->f12.fl;
    // 0x802D8258: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x802D825C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802D8260: bc1fl       L_802D827C
    if (!c1cs) {
        // 0x802D8264: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_802D827C;
    }
    goto skip_0;
    // 0x802D8264: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x802D8268: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D826C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D8270: b           L_802D8284
    // 0x802D8274: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
        goto L_802D8284;
    // 0x802D8274: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x802D8278: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_802D827C:
    // 0x802D827C: nop

    // 0x802D8280: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
L_802D8284:
    // 0x802D8284: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
    // 0x802D8288: lbu         $t3, 0x1F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1F);
    // 0x802D828C: jr          $ra
    // 0x802D8290: sb          $t3, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r11;
    return;
    // 0x802D8290: sb          $t3, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void D_802D1F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D1FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D1FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D1FDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802D1FE0: jal         0x80301EA0
    // 0x802D1FE4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_80301EA0(rdram, ctx);
        goto after_0;
    // 0x802D1FE4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x802D1FE8: beq         $v0, $zero, L_802D2004
    if (ctx->r2 == 0) {
        // 0x802D1FEC: lwc1        $f4, 0x20($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
            goto L_802D2004;
    }
    // 0x802D1FEC: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802D1FF0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802D1FF4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802D1FF8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802D1FFC: jal         0x80201C00
    // 0x802D2000: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    static_3_80201C00(rdram, ctx);
        goto after_1;
    // 0x802D2000: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    after_1:
L_802D2004:
    // 0x802D2004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D200C: jr          $ra
    // 0x802D2010: nop

    return;
    // 0x802D2010: nop

;}
RECOMP_FUNC void D_8022DFF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022DFF4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022DFF8: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022DFFC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8022E000: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8022E004: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x8022E008: subu        $s6, $a0, $t6
    ctx->r22 = SUB32(ctx->r4, ctx->r14);
    // 0x8022E00C: div         $zero, $s6, $at
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r1)));
    // 0x8022E010: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022E014: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x8022E018: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8022E01C: mflo        $s6
    ctx->r22 = lo;
    // 0x8022E020: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8022E024: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x8022E028: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8022E02C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8022E030: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8022E034: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8022E038: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8022E03C: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x8022E040: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x8022E044: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x8022E048: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x8022E04C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8022E050: blez        $v1, L_8022E20C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022E054: sdc1        $f20, 0x20($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
            goto L_8022E20C;
    }
    // 0x8022E054: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8022E058: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x8022E05C: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x8022E060: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x8022E064: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8022E068: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8022E06C: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x8022E070: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
L_8022E074:
    // 0x8022E074: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022E078: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E07C: addu        $s0, $s2, $t8
    ctx->r16 = ADD32(ctx->r18, ctx->r24);
    // 0x8022E080: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E084: bnel        $t9, $zero, L_8022E098
    if (ctx->r25 != 0) {
        // 0x8022E088: lwc1        $f4, 0x60($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
            goto L_8022E098;
    }
    goto skip_0;
    // 0x8022E088: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    skip_0:
    // 0x8022E08C: b           L_8022E1FC
    // 0x8022E090: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
        goto L_8022E1FC;
    // 0x8022E090: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E094: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
L_8022E098:
    // 0x8022E098: lwc1        $f6, 0x108($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X108);
    // 0x8022E09C: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x8022E0A0: lwc1        $f10, 0x10C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10C);
    // 0x8022E0A4: sub.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8022E0A8: lwc1        $f16, 0x68($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X68);
    // 0x8022E0AC: lwc1        $f18, 0x110($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X110);
    // 0x8022E0B0: sub.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8022E0B4: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8022E0B8: sub.s       $f20, $f16, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8022E0BC: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x8022E0C0: add.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022E0C4: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8022E0C8: jal         0x8022AA40
    // 0x8022E0CC: add.s       $f12, $f26, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f26.fl + ctx->f8.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8022E0CC: add.s       $f12, $f26, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f26.fl + ctx->f8.fl;
    after_0:
    // 0x8022E0D0: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8022E0D4: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    // 0x8022E0D8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022E0DC: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8022E0E0: addiu       $a0, $s1, 0x218
    ctx->r4 = ADD32(ctx->r17, 0X218);
    // 0x8022E0E4: bc1fl       L_8022E104
    if (!c1cs) {
        // 0x8022E0E8: lwc1        $f16, 0xC($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
            goto L_8022E104;
    }
    goto skip_1;
    // 0x8022E0E8: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    skip_1:
    // 0x8022E0EC: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x8022E0F0: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022E0F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E0F8: b           L_8022E1FC
    // 0x8022E0FC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
        goto L_8022E1FC;
    // 0x8022E0FC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E100: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
L_8022E104:
    // 0x8022E104: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x8022E108: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x8022E10C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8022E110: jal         0x8020802C
    // 0x8022E114: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    static_3_8020802C(rdram, ctx);
        goto after_1;
    // 0x8022E114: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x8022E118: bne         $v0, $zero, L_8022E134
    if (ctx->r2 != 0) {
        // 0x8022E11C: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_8022E134;
    }
    // 0x8022E11C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022E120: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x8022E124: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022E128: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E12C: b           L_8022E1FC
    // 0x8022E130: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
        goto L_8022E1FC;
    // 0x8022E130: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_8022E134:
    // 0x8022E134: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E138: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x8022E13C: bne         $s4, $v0, L_8022E154
    if (ctx->r20 != ctx->r2) {
        // 0x8022E140: nop
    
            goto L_8022E154;
    }
    // 0x8022E140: nop

    // 0x8022E144: jal         0x80228E64
    // 0x8022E148: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    static_3_80228E64(rdram, ctx);
        goto after_2;
    // 0x8022E148: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    after_2:
    // 0x8022E14C: b           L_8022E1C8
    // 0x8022E150: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
        goto L_8022E1C8;
    // 0x8022E150: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
L_8022E154:
    // 0x8022E154: bnel        $s5, $v0, L_8022E1C8
    if (ctx->r21 != ctx->r2) {
        // 0x8022E158: lwc1        $f8, 0x60($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
            goto L_8022E1C8;
    }
    goto skip_2;
    // 0x8022E158: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
    skip_2:
    // 0x8022E15C: jal         0x8022AA40
    // 0x8022E160: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_3;
    // 0x8022E160: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_3:
    // 0x8022E164: c.eq.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.fl == ctx->f28.fl;
    // 0x8022E168: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022E16C: bc1tl       L_8022E188
    if (c1cs) {
        // 0x8022E170: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_8022E188;
    }
    goto skip_3;
    // 0x8022E170: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_3:
    // 0x8022E174: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022E178: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8022E17C: b           L_8022E18C
    // 0x8022E180: div.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
        goto L_8022E18C;
    // 0x8022E180: div.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8022E184: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_8022E188:
    // 0x8022E188: nop

L_8022E18C:
    // 0x8022E18C: mul.s       $f2, $f24, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f12.fl);
    // 0x8022E190: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8022E194: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8022E198: mul.s       $f0, $f22, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x8022E19C: swc1        $f28, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f28.u32l;
    // 0x8022E1A0: swc1        $f28, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f28.u32l;
    // 0x8022E1A4: swc1        $f28, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f28.u32l;
    // 0x8022E1A8: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x8022E1AC: swc1        $f2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f2.u32l;
    // 0x8022E1B0: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x8022E1B4: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x8022E1B8: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x8022E1BC: swc1        $f28, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f28.u32l;
    // 0x8022E1C0: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
    // 0x8022E1C4: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
L_8022E1C8:
    // 0x8022E1C8: mfc1        $a1, $f30
    ctx->r5 = (int32_t)ctx->f30.u32l;
    // 0x8022E1CC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8022E1D0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8022E1D4: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x8022E1D8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8022E1DC: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8022E1E0: jal         0x8020672C
    // 0x8022E1E4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    static_3_8020672C(rdram, ctx);
        goto after_4;
    // 0x8022E1E4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x8022E1E8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022E1EC: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x8022E1F0: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022E1F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E1F8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_8022E1FC:
    // 0x8022E1FC: addiu       $s2, $s2, 0x78
    ctx->r18 = ADD32(ctx->r18, 0X78);
    // 0x8022E200: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E204: bnel        $at, $zero, L_8022E074
    if (ctx->r1 != 0) {
        // 0x8022E208: lw          $t8, 0x0($s3)
        ctx->r24 = MEM_W(ctx->r19, 0X0);
            goto L_8022E074;
    }
    goto skip_4;
    // 0x8022E208: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    skip_4:
L_8022E20C:
    // 0x8022E20C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x8022E210: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8022E214: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x8022E218: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8022E21C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x8022E220: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x8022E224: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x8022E228: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8022E22C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8022E230: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8022E234: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8022E238: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8022E23C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8022E240: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8022E244: jr          $ra
    // 0x8022E248: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8022E248: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void D_802DA2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DA320: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802DA324: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802DA328: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802DA32C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802DA330: beq         $v1, $v0, L_802DA3AC
    if (ctx->r3 == ctx->r2) {
        // 0x802DA334: nop
    
            goto L_802DA3AC;
    }
    // 0x802DA334: nop

    // 0x802DA338: beq         $v0, $at, L_802DA3AC
    if (ctx->r2 == ctx->r1) {
        // 0x802DA33C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_802DA3AC;
    }
    // 0x802DA33C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802DA340: beq         $v0, $at, L_802DA3AC
    if (ctx->r2 == ctx->r1) {
        // 0x802DA344: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_802DA3AC;
    }
    // 0x802DA344: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x802DA348: bne         $v0, $at, L_802DA360
    if (ctx->r2 != ctx->r1) {
        // 0x802DA34C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802DA360;
    }
    // 0x802DA34C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DA350: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DA354: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x802DA358: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802DA35C: beq         $t6, $at, L_802DA3AC
    if (ctx->r14 == ctx->r1) {
        // 0x802DA360: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802DA3AC;
    }
L_802DA360:
    // 0x802DA360: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802DA364: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802DA368: bne         $v0, $at, L_802DA378
    if (ctx->r2 != ctx->r1) {
        // 0x802DA36C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802DA378;
    }
    // 0x802DA36C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802DA370: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x802DA374: beq         $v1, $t7, L_802DA3AC
    if (ctx->r3 == ctx->r15) {
        // 0x802DA378: addiu       $v1, $zero, 0xE
        ctx->r3 = ADD32(0, 0XE);
            goto L_802DA3AC;
    }
L_802DA378:
    // 0x802DA378: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x802DA37C: bne         $v1, $v0, L_802DA394
    if (ctx->r3 != ctx->r2) {
        // 0x802DA380: nop
    
            goto L_802DA394;
    }
    // 0x802DA380: nop

    // 0x802DA384: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x802DA388: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802DA38C: beq         $t8, $at, L_802DA3AC
    if (ctx->r24 == ctx->r1) {
        // 0x802DA390: nop
    
            goto L_802DA3AC;
    }
    // 0x802DA390: nop

L_802DA394:
    // 0x802DA394: bnel        $v1, $v0, L_802DA3B8
    if (ctx->r3 != ctx->r2) {
        // 0x802DA398: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802DA3B8;
    }
    goto skip_0;
    // 0x802DA398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x802DA39C: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x802DA3A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802DA3A4: bnel        $t9, $at, L_802DA3B8
    if (ctx->r25 != ctx->r1) {
        // 0x802DA3A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802DA3B8;
    }
    goto skip_1;
    // 0x802DA3A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
L_802DA3AC:
    // 0x802DA3AC: jr          $ra
    // 0x802DA3B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802DA3B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802DA3B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802DA3B8:
    // 0x802DA3B8: jr          $ra
    // 0x802DA3BC: nop

    return;
    // 0x802DA3BC: nop

;}
RECOMP_FUNC void D_802E38D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E3950: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802E3954: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802E3958: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x802E395C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x802E3960: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802E3964: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802E3968: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802E396C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802E3970: lh          $v0, 0x400($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X400);
    // 0x802E3974: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802E3978: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x802E397C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802E3980: blez        $v0, L_802E3A24
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802E3984: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_802E3A24;
    }
    // 0x802E3984: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802E3988: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802E398C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802E3990: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802E3994: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
L_802E3998:
    // 0x802E3998: lwc1        $f4, 0x484($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X484);
    // 0x802E399C: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x802E39A0: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x802E39A4: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x802E39A8: nop

    // 0x802E39AC: bc1tl       L_802E3A14
    if (c1cs) {
        // 0x802E39B0: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_802E3A14;
    }
    goto skip_0;
    // 0x802E39B0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    skip_0:
    // 0x802E39B4: lwc1        $f6, 0x480($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X480);
    // 0x802E39B8: lwc1        $f8, 0x480($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X480);
    // 0x802E39BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E39C0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802E39C4: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x802E39C8: nop

    // 0x802E39CC: bc1f        L_802E3A00
    if (!c1cs) {
        // 0x802E39D0: nop
    
            goto L_802E3A00;
    }
    // 0x802E39D0: nop

    // 0x802E39D4: bne         $s0, $s3, L_802E39F0
    if (ctx->r16 != ctx->r19) {
        // 0x802E39D8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802E39F0;
    }
    // 0x802E39D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E39DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802E39E0: jal         0x80314158
    // 0x802E39E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80314158(rdram, ctx);
        goto after_0;
    // 0x802E39E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802E39E8: b           L_802E3A0C
    // 0x802E39EC: lh          $v0, 0x400($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X400);
        goto L_802E3A0C;
    // 0x802E39EC: lh          $v0, 0x400($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X400);
L_802E39F0:
    // 0x802E39F0: jal         0x80314158
    // 0x802E39F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80314158(rdram, ctx);
        goto after_1;
    // 0x802E39F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802E39F8: b           L_802E3A0C
    // 0x802E39FC: lh          $v0, 0x400($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X400);
        goto L_802E3A0C;
    // 0x802E39FC: lh          $v0, 0x400($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X400);
L_802E3A00:
    // 0x802E3A00: jal         0x80314158
    // 0x802E3A04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80314158(rdram, ctx);
        goto after_2;
    // 0x802E3A04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802E3A08: lh          $v0, 0x400($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X400);
L_802E3A0C:
    // 0x802E3A0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802E3A10: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_802E3A14:
    // 0x802E3A14: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802E3A18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802E3A1C: bne         $at, $zero, L_802E3998
    if (ctx->r1 != 0) {
        // 0x802E3A20: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_802E3998;
    }
    // 0x802E3A20: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_802E3A24:
    // 0x802E3A24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802E3A28: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x802E3A2C: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x802E3A30: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x802E3A34: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x802E3A38: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x802E3A3C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x802E3A40: jr          $ra
    // 0x802E3A44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802E3A44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_80223EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223EFC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80223F00: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223F04: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80223F08: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80223F0C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80223F10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223F14: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80223F18: jr          $ra
    // 0x80223F1C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    return;
    // 0x80223F1C: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
;}
RECOMP_FUNC void D_802E0A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0A98: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E0A9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E0AA0: jr          $ra
    // 0x802E0AA4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E0AA4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802235F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802235F8: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802235FC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80223600: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223604: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80223608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022360C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80223610: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80223614: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x80223618: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8022361C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223620: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223624: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x80223628: lui         $t9, 0xF0A
    ctx->r25 = S32(0XF0A << 16);
    // 0x8022362C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80223630: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80223634: ori         $t9, $t9, 0x4000
    ctx->r25 = ctx->r25 | 0X4000;
    // 0x80223638: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x8022363C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80223640: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80223644: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223648: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8022364C: ori         $t8, $t8, 0x1402
    ctx->r24 = ctx->r24 | 0X1402;
    // 0x80223650: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80223654: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80223658: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8022365C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223660: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223664: lui         $t9, 0x30
    ctx->r25 = S32(0X30 << 16);
    // 0x80223668: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022366C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80223670: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80223674: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80223678: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8022367C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223680: lui         $t8, 0xF700
    ctx->r24 = S32(0XF700 << 16);
    // 0x80223684: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80223688: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8022368C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80223690: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223694: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223698: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8022369C: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802236A0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802236A4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802236A8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802236AC: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x802236B0: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x802236B4: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802236B8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802236BC: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802236C0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802236C4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802236C8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802236CC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802236D0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802236D4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802236D8: jal         0x802375F0
    // 0x802236DC: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_0;
    // 0x802236DC: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_0:
    // 0x802236E0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x802236E4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802236E8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802236EC: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x802236F0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802236F4: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x802236F8: lui         $t6, 0xF64D
    ctx->r14 = S32(0XF64D << 16);
    // 0x802236FC: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80223700: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80223704: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80223708: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8022370C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223710: ori         $t6, $t6, 0x83AC
    ctx->r14 = ctx->r14 | 0X83AC;
    // 0x80223714: ori         $t7, $zero, 0x81E0
    ctx->r15 = 0 | 0X81E0;
    // 0x80223718: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8022371C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80223720: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80223724: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80223728: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8022372C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80223730: ori         $t7, $t7, 0x1402
    ctx->r15 = ctx->r15 | 0X1402;
    // 0x80223734: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80223738: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8022373C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80223740: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223744: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223748: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x8022374C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80223750: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80223754: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80223758: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8022375C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223760: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223764: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80223768: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8022376C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80223770: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80223774: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223778: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x8022377C: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x80223780: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80223784: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80223788: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8022378C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80223790: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80223794: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80223798: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8022379C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802237A0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802237A4: jal         0x802375F0
    // 0x802237A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    static_3_802375F0(rdram, ctx);
        goto after_1;
    // 0x802237A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x802237AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802237B0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802237B4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802237B8: sw          $v0, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r2;
    // 0x802237BC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802237C0: lui         $a2, 0xE700
    ctx->r6 = S32(0XE700 << 16);
    // 0x802237C4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x802237C8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802237CC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802237D0: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x802237D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802237D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802237DC: jr          $ra
    // 0x802237E0: nop

    return;
    // 0x802237E0: nop

;}
RECOMP_FUNC void D_80234E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234E60: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80234E64: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x80234E68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80234E6C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80234E70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80234E74: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80234E78: jr          $ra
    // 0x80234E7C: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
    return;
    // 0x80234E7C: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
;}
RECOMP_FUNC void D_80226BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80226BF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226BFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226C00: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x80226C04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226C08: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80226C0C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80226C10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226C14: jal         0x80225424
    // 0x80226C18: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80226C18: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80226C1C: lhu         $a1, 0x30($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X30);
    // 0x80226C20: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80226C24: slti        $at, $a1, 0x1001
    ctx->r1 = SIGNED(ctx->r5) < 0X1001 ? 1 : 0;
    // 0x80226C28: bnel        $at, $zero, L_80226C44
    if (ctx->r1 != 0) {
        // 0x80226C2C: addiu       $a0, $sp, 0x32
        ctx->r4 = ADD32(ctx->r29, 0X32);
            goto L_80226C44;
    }
    goto skip_0;
    // 0x80226C2C: addiu       $a0, $sp, 0x32
    ctx->r4 = ADD32(ctx->r29, 0X32);
    skip_0:
    // 0x80226C30: jal         0x80231A24
    // 0x80226C34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80226C34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80226C38: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x80226C3C: sh          $t6, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r14;
    // 0x80226C40: addiu       $a0, $sp, 0x32
    ctx->r4 = ADD32(ctx->r29, 0X32);
L_80226C44:
    // 0x80226C44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226C48: jal         0x80225424
    // 0x80226C4C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x80226C4C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80226C50: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80226C54: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226C58: jal         0x80225424
    // 0x80226C5C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x80226C5C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x80226C60: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80226C64: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226C68: jal         0x80225424
    // 0x80226C6C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_4;
    // 0x80226C6C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x80226C70: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80226C74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226C78: jal         0x80225424
    // 0x80226C7C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x80226C7C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x80226C80: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80226C84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80226C88: jal         0x80225424
    // 0x80226C8C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_6;
    // 0x80226C8C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_6:
    // 0x80226C90: lhu         $a0, 0x30($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X30);
    // 0x80226C94: jal         0x8022B948
    // 0x80226C98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8022B948(rdram, ctx);
        goto after_7;
    // 0x80226C98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x80226C9C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80226CA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80226CA4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80226CA8: jal         0x8022B460
    // 0x80226CAC: lhu         $a2, 0x30($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X30);
    func_8022B460(rdram, ctx);
        goto after_8;
    // 0x80226CAC: lhu         $a2, 0x30($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X30);
    after_8:
    // 0x80226CB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226CB4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80226CB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226CBC: jr          $ra
    // 0x80226CC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80226CC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802A99CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9A4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A9A50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A9A54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A9A58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A9A5C: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x802A9A60: jal         0x8022970C
    // 0x802A9A64: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x802A9A64: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A9A68: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802A9A6C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802A9A70: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A9A74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A9A78: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A9A7C: jal         0x8022A210
    // 0x802A9A80: nop

    static_3_8022A210(rdram, ctx);
        goto after_1;
    // 0x802A9A80: nop

    after_1:
    // 0x802A9A84: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x802A9A88: jal         0x8021BA90
    // 0x802A9A8C: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
    func_8021BA90(rdram, ctx);
        goto after_2;
    // 0x802A9A8C: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
    after_2:
    // 0x802A9A90: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802A9A94: beq         $v0, $at, L_802A9AC8
    if (ctx->r2 == ctx->r1) {
        // 0x802A9A98: sw          $v0, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->r2;
            goto L_802A9AC8;
    }
    // 0x802A9A98: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x802A9A9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A9AA0: jal         0x8021ACB0
    // 0x802A9AA4: addiu       $a1, $zero, 0xAD
    ctx->r5 = ADD32(0, 0XAD);
    static_3_8021ACB0(rdram, ctx);
        goto after_3;
    // 0x802A9AA4: addiu       $a1, $zero, 0xAD
    ctx->r5 = ADD32(0, 0XAD);
    after_3:
    // 0x802A9AA8: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x802A9AAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A9AB0: jal         0x8021B4B0
    // 0x802A9AB4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    static_3_8021B4B0(rdram, ctx);
        goto after_4;
    // 0x802A9AB4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x802A9AB8: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x802A9ABC: jal         0x8021B838
    // 0x802A9AC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8021B838(rdram, ctx);
        goto after_5;
    // 0x802A9AC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x802A9AC4: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
L_802A9AC8:
    // 0x802A9AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A9ACC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A9AD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802A9AD4: jr          $ra
    // 0x802A9AD8: nop

    return;
    // 0x802A9AD8: nop

;}
RECOMP_FUNC void D_802E69CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E6A4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E6A50: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E6A54: jr          $ra
    // 0x802E6A58: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E6A58: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_8022B324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B324: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022B328: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B32C: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8022B330: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8022B334: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8022B338: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022B33C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B340: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B344: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8022B348: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022B34C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022B350: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022B354: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022B358: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8022B35C: blez        $t6, L_8022B3E4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8022B360: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8022B3E4;
    }
    // 0x8022B360: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022B364: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x8022B368: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x8022B36C: lui         $s3, 0x0
    ctx->r19 = S32(0X0 << 16);
    // 0x8022B370: addiu       $s3, $s3, 0x0
    ctx->r19 = ADD32(ctx->r19, 0X0);
    // 0x8022B374: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x8022B378: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x8022B37C: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
L_8022B380:
    // 0x8022B380: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x8022B384: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8022B388: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8022B38C: sltu        $at, $v1, $t8
    ctx->r1 = ctx->r3 < ctx->r24 ? 1 : 0;
    // 0x8022B390: bnel        $at, $zero, L_8022B3D4
    if (ctx->r1 != 0) {
        // 0x8022B394: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B3D4;
    }
    goto skip_0;
    // 0x8022B394: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_0:
    // 0x8022B398: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8022B39C: sltu        $at, $v1, $t9
    ctx->r1 = ctx->r3 < ctx->r25 ? 1 : 0;
    // 0x8022B3A0: beql        $at, $zero, L_8022B3D4
    if (ctx->r1 == 0) {
        // 0x8022B3A4: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B3D4;
    }
    goto skip_1;
    // 0x8022B3A4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x8022B3A8: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x8022B3AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8022B3B0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8022B3B4: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x8022B3B8: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8022B3BC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8022B3C0: beql        $t1, $zero, L_8022B3D4
    if (ctx->r9 == 0) {
        // 0x8022B3C4: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_8022B3D4;
    }
    goto skip_2;
    // 0x8022B3C4: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x8022B3C8: jal         0x80231A24
    // 0x8022B3CC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022B3CC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_0:
    // 0x8022B3D0: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
L_8022B3D4:
    // 0x8022B3D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022B3D8: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8022B3DC: bnel        $at, $zero, L_8022B380
    if (ctx->r1 != 0) {
        // 0x8022B3E0: sll         $t7, $s0, 3
        ctx->r15 = S32(ctx->r16 << 3);
            goto L_8022B380;
    }
    goto skip_3;
    // 0x8022B3E0: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    skip_3:
L_8022B3E4:
    // 0x8022B3E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022B3E8: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x8022B3EC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022B3F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B3F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B3F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B3FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B400: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B404: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B408: jr          $ra
    // 0x8022B40C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8022B40C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_802C8294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8314: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802C8318: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x802C831C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802C8320: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802C8324: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802C8328: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x802C832C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x802C8330: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802C8334: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802C8338: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802C833C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802C8340: jal         0x80207130
    // 0x802C8344: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_0;
    // 0x802C8344: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802C8348: jal         0x80207130
    // 0x802C834C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_1;
    // 0x802C834C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802C8350: lwc1        $f4, 0x28($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X28);
    // 0x802C8354: lw          $t6, 0x48($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X48);
    // 0x802C8358: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C835C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802C8360: lwc1        $f12, 0x18($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X18);
    // 0x802C8364: sub.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d - ctx->f6.d;
    // 0x802C8368: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x802C836C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802C8370: nop

    // 0x802C8374: bc1f        L_802C83A4
    if (!c1cs) {
        // 0x802C8378: nop
    
            goto L_802C83A4;
    }
    // 0x802C8378: nop

    // 0x802C837C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x802C8380: cvt.d.s     $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.d = CVT_D_S(ctx->f12.fl);
    // 0x802C8384: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802C8388: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x802C838C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C8390: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802C8394: jal         0x80231A24
    // 0x802C8398: sdc1        $f16, 0x10($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X10, ctx->r29);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x802C8398: sdc1        $f16, 0x10($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X10, ctx->r29);
    after_2:
    // 0x802C839C: b           L_802C8408
    // 0x802C83A0: sb          $zero, 0x24($s3)
    MEM_B(0X24, ctx->r19) = 0;
        goto L_802C8408;
    // 0x802C83A0: sb          $zero, 0x24($s3)
    MEM_B(0X24, ctx->r19) = 0;
L_802C83A4:
    // 0x802C83A4: jal         0x80231A24
    // 0x802C83A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802C83A8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x802C83AC: addiu       $s2, $s0, 0x8F4
    ctx->r18 = ADD32(ctx->r16, 0X8F4);
    // 0x802C83B0: jal         0x80302980
    // 0x802C83B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80302980(rdram, ctx);
        goto after_4;
    // 0x802C83B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x802C83B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802C83BC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802C83C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802C83C4: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802C83C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802C83CC: addiu       $s1, $zero, 0x18
    ctx->r17 = ADD32(0, 0X18);
    // 0x802C83D0: lw          $t7, 0x48($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X48);
L_802C83D4:
    // 0x802C83D4: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x802C83D8: lh          $a1, 0x0($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X0);
    // 0x802C83DC: bltz        $a1, L_802C8400
    if (SIGNED(ctx->r5) < 0) {
        // 0x802C83E0: nop
    
            goto L_802C8400;
    }
    // 0x802C83E0: nop

    // 0x802C83E4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802C83E8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802C83EC: jal         0x80302988
    // 0x802C83F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802C83F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x802C83F4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x802C83F8: bnel        $s0, $s1, L_802C83D4
    if (ctx->r16 != ctx->r17) {
        // 0x802C83FC: lw          $t7, 0x48($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X48);
            goto L_802C83D4;
    }
    goto skip_0;
    // 0x802C83FC: lw          $t7, 0x48($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X48);
    skip_0:
L_802C8400:
    // 0x802C8400: jal         0x80302A7C
    // 0x802C8404: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_80302A7C(rdram, ctx);
        goto after_6;
    // 0x802C8404: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
L_802C8408:
    // 0x802C8408: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802C840C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802C8410: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802C8414: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802C8418: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802C841C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x802C8420: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x802C8424: jr          $ra
    // 0x802C8428: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802C8428: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void D_8029EE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029EEB4: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8029EEB8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8029EEBC: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8029EEC0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8029EEC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029EEC8: bc1f        L_8029EED8
    if (!c1cs) {
        // 0x8029EECC: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_8029EED8;
    }
    // 0x8029EECC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8029EED0: b           L_8029EEDC
    // 0x8029EED4: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
        goto L_8029EEDC;
    // 0x8029EED4: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
L_8029EED8:
    // 0x8029EED8: neg.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = -ctx->f2.fl;
L_8029EEDC:
    // 0x8029EEDC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029EEE0: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8029EEE4: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x8029EEE8: nop

    // 0x8029EEEC: bc1f        L_8029EEFC
    if (!c1cs) {
        // 0x8029EEF0: nop
    
            goto L_8029EEFC;
    }
    // 0x8029EEF0: nop

    // 0x8029EEF4: jr          $ra
    // 0x8029EEF8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x8029EEF8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8029EEFC:
    // 0x8029EEFC: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8029EF00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8029EF04: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8029EF08: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8029EF0C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8029EF10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8029EF14: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8029EF18: bc1fl       L_8029EF2C
    if (!c1cs) {
        // 0x8029EF1C: neg.s       $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = -ctx->f2.fl;
            goto L_8029EF2C;
    }
    goto skip_0;
    // 0x8029EF1C: neg.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = -ctx->f2.fl;
    skip_0:
    // 0x8029EF20: b           L_8029EF2C
    // 0x8029EF24: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
        goto L_8029EF2C;
    // 0x8029EF24: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x8029EF28: neg.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = -ctx->f2.fl;
L_8029EF2C:
    // 0x8029EF2C: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x8029EF30: nop

    // 0x8029EF34: bc1fl       L_8029EF48
    if (!c1cs) {
        // 0x8029EF38: neg.s       $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
            goto L_8029EF48;
    }
    goto skip_1;
    // 0x8029EF38: neg.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
    skip_1:
    // 0x8029EF3C: b           L_8029EF48
    // 0x8029EF40: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
        goto L_8029EF48;
    // 0x8029EF40: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x8029EF44: neg.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
L_8029EF48:
    // 0x8029EF48: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8029EF4C: nop

    // 0x8029EF50: bc1f        L_8029EF60
    if (!c1cs) {
        // 0x8029EF54: nop
    
            goto L_8029EF60;
    }
    // 0x8029EF54: nop

    // 0x8029EF58: b           L_8029EF70
    // 0x8029EF5C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
        goto L_8029EF70;
    // 0x8029EF5C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
L_8029EF60:
    // 0x8029EF60: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8029EF64: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8029EF68: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8029EF6C: add.s       $f14, $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f6.fl;
L_8029EF70:
    // 0x8029EF70: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x8029EF74: jr          $ra
    // 0x8029EF78: nop

    return;
    // 0x8029EF78: nop

;}
RECOMP_FUNC void D_802E4E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E4EB4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802E4EB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E4EBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E4EC0: lwc1        $f6, 0xDBC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XDBC);
    // 0x802E4EC4: lwc1        $f4, 0xDC0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XDC0);
    // 0x802E4EC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E4ECC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802E4ED0: nop

    // 0x802E4ED4: bc1fl       L_802E50C4
    if (!c1cs) {
        // 0x802E4ED8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802E50C4;
    }
    goto skip_0;
    // 0x802E4ED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802E4EDC: lbu         $t6, 0xDBA($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XDBA);
    // 0x802E4EE0: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x802E4EE4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802E4EE8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802E4EEC: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x802E4EF0: bne         $v0, $at, L_802E4FF8
    if (ctx->r2 != ctx->r1) {
        // 0x802E4EF4: sb          $t7, 0xDBA($a0)
        MEM_B(0XDBA, ctx->r4) = ctx->r15;
            goto L_802E4FF8;
    }
    // 0x802E4EF4: sb          $t7, 0xDBA($a0)
    MEM_B(0XDBA, ctx->r4) = ctx->r15;
    // 0x802E4EF8: andi        $t9, $zero, 0xFF
    ctx->r25 = 0 & 0XFF;
    // 0x802E4EFC: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x802E4F00: sb          $t8, 0xDB8($a0)
    MEM_B(0XDB8, ctx->r4) = ctx->r24;
    // 0x802E4F04: sb          $zero, 0xDBA($a0)
    MEM_B(0XDBA, ctx->r4) = 0;
    // 0x802E4F08: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802E4F0C: lbu         $t0, 0x0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X0);
    // 0x802E4F10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E4F14: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802E4F18: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x802E4F1C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802E4F20: sb          $t0, 0xDB9($a0)
    MEM_B(0XDB9, ctx->r4) = ctx->r8;
    // 0x802E4F24: swc1        $f0, 0xDBC($a0)
    MEM_W(0XDBC, ctx->r4) = ctx->f0.u32l;
    // 0x802E4F28: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802E4F2C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802E4F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E4F34: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x802E4F38: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x802E4F3C: bgez        $t2, L_802E4F50
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802E4F40: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802E4F50;
    }
    // 0x802E4F40: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802E4F44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802E4F48: nop

    // 0x802E4F4C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_802E4F50:
    // 0x802E4F50: swc1        $f10, 0xDC0($s0)
    MEM_W(0XDC0, ctx->r16) = ctx->f10.u32l;
    // 0x802E4F54: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E4F58: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E4F5C: swc1        $f0, 0xDC8($s0)
    MEM_W(0XDC8, ctx->r16) = ctx->f0.u32l;
    // 0x802E4F60: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802E4F64: jal         0x8021B6D4
    // 0x802E4F68: swc1        $f18, 0xDC4($s0)
    MEM_W(0XDC4, ctx->r16) = ctx->f18.u32l;
    static_3_8021B6D4(rdram, ctx);
        goto after_0;
    // 0x802E4F68: swc1        $f18, 0xDC4($s0)
    MEM_W(0XDC4, ctx->r16) = ctx->f18.u32l;
    after_0:
    // 0x802E4F6C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802E4F70: jal         0x8021ACB0
    // 0x802E4F74: addiu       $a1, $zero, 0x12F
    ctx->r5 = ADD32(0, 0X12F);
    static_3_8021ACB0(rdram, ctx);
        goto after_1;
    // 0x802E4F74: addiu       $a1, $zero, 0x12F
    ctx->r5 = ADD32(0, 0X12F);
    after_1:
    // 0x802E4F78: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802E4F7C: jal         0x8021B838
    // 0x802E4F80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_2;
    // 0x802E4F80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x802E4F84: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802E4F88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802E4F8C: jal         0x8021B4B0
    // 0x802E4F90: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    static_3_8021B4B0(rdram, ctx);
        goto after_3;
    // 0x802E4F90: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x802E4F94: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E4F98: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E4F9C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802E4FA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802E4FA4: jal         0x802AA4A4
    // 0x802E4FA8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_4;
    // 0x802E4FA8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_4:
    // 0x802E4FAC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E4FB0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E4FB4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802E4FB8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802E4FBC: jal         0x802AA4A4
    // 0x802E4FC0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_5;
    // 0x802E4FC0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_5:
    // 0x802E4FC4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E4FC8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E4FCC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802E4FD0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802E4FD4: jal         0x802AA4A4
    // 0x802E4FD8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_6;
    // 0x802E4FD8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_6:
    // 0x802E4FDC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E4FE0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802E4FE4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802E4FE8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802E4FEC: jal         0x802AA4A4
    // 0x802E4FF0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802AA4A4(rdram, ctx);
        goto after_7;
    // 0x802E4FF0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_7:
    // 0x802E4FF4: lbu         $v0, 0xDBA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDBA);
L_802E4FF8:
    // 0x802E4FF8: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802E4FFC: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x802E5000: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802E5004: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802E5008: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802E500C: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x802E5010: bne         $v1, $at, L_802E5038
    if (ctx->r3 != ctx->r1) {
        // 0x802E5014: sb          $t3, 0xDB9($s0)
        MEM_B(0XDB9, ctx->r16) = ctx->r11;
            goto L_802E5038;
    }
    // 0x802E5014: sb          $t3, 0xDB9($s0)
    MEM_B(0XDB9, ctx->r16) = ctx->r11;
    // 0x802E5018: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E501C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802E5020: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E5024: jal         0x802D6E44
    // 0x802E5028: lui         $a2, 0x44FA
    ctx->r6 = S32(0X44FA << 16);
    static_3_802D6E44(rdram, ctx);
        goto after_8;
    // 0x802E5028: lui         $a2, 0x44FA
    ctx->r6 = S32(0X44FA << 16);
    after_8:
    // 0x802E502C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E5030: b           L_802E5088
    // 0x802E5034: swc1        $f0, 0xDCC($s0)
    MEM_W(0XDCC, ctx->r16) = ctx->f0.u32l;
        goto L_802E5088;
    // 0x802E5034: swc1        $f0, 0xDCC($s0)
    MEM_W(0XDCC, ctx->r16) = ctx->f0.u32l;
L_802E5038:
    // 0x802E5038: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802E503C: bne         $v1, $at, L_802E506C
    if (ctx->r3 != ctx->r1) {
        // 0x802E5040: addiu       $a0, $s0, 0x1A4
        ctx->r4 = ADD32(ctx->r16, 0X1A4);
            goto L_802E506C;
    }
    // 0x802E5040: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802E5044: lui         $a2, 0x44BB
    ctx->r6 = S32(0X44BB << 16);
    // 0x802E5048: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802E504C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802E5050: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x802E5054: jal         0x802D6E44
    // 0x802E5058: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D6E44(rdram, ctx);
        goto after_9;
    // 0x802E5058: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x802E505C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802E5060: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E5064: b           L_802E5088
    // 0x802E5068: swc1        $f4, 0xDCC($s0)
    MEM_W(0XDCC, ctx->r16) = ctx->f4.u32l;
        goto L_802E5088;
    // 0x802E5068: swc1        $f4, 0xDCC($s0)
    MEM_W(0XDCC, ctx->r16) = ctx->f4.u32l;
L_802E506C:
    // 0x802E506C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E5070: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E5074: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802E5078: jal         0x802D6F20
    // 0x802E507C: swc1        $f6, 0xDC4($s0)
    MEM_W(0XDC4, ctx->r16) = ctx->f6.u32l;
    static_3_802D6F20(rdram, ctx);
        goto after_10;
    // 0x802E507C: swc1        $f6, 0xDC4($s0)
    MEM_W(0XDC4, ctx->r16) = ctx->f6.u32l;
    after_10:
    // 0x802E5080: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802E5084: nop

L_802E5088:
    // 0x802E5088: lbu         $t4, 0xDBA($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XDBA);
    // 0x802E508C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x802E5090: swc1        $f0, 0xDBC($s0)
    MEM_W(0XDBC, ctx->r16) = ctx->f0.u32l;
    // 0x802E5094: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x802E5098: lbu         $t5, 0x0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X0);
    // 0x802E509C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802E50A0: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802E50A4: bgez        $t5, L_802E50B8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802E50A8: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802E50B8;
    }
    // 0x802E50A8: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802E50AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802E50B0: nop

    // 0x802E50B4: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
L_802E50B8:
    // 0x802E50B8: swc1        $f16, 0xDC0($s0)
    MEM_W(0XDC0, ctx->r16) = ctx->f16.u32l;
    // 0x802E50BC: swc1        $f0, 0xDD0($s0)
    MEM_W(0XDD0, ctx->r16) = ctx->f0.u32l;
    // 0x802E50C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802E50C4:
    // 0x802E50C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E50C8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802E50CC: jr          $ra
    // 0x802E50D0: nop

    return;
    // 0x802E50D0: nop

;}
RECOMP_FUNC void D_80281CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281D38: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80281D3C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80281D40: sw          $s5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r21;
    // 0x80281D44: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x80281D48: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x80281D4C: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x80281D50: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x80281D54: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x80281D58: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x80281D5C: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x80281D60: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x80281D64: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80281D68: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80281D6C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80281D70: addiu       $v0, $a0, 0x7FFF
    ctx->r2 = ADD32(ctx->r4, 0X7FFF);
    // 0x80281D74: lbu         $v0, 0x6DAD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6DAD);
    // 0x80281D78: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80281D7C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80281D80: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80281D84: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
    // 0x80281D88: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80281D8C: bgez        $v0, L_80281DA4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80281D90: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80281DA4;
    }
    // 0x80281D90: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80281D94: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80281D98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281D9C: nop

    // 0x80281DA0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80281DA4:
    // 0x80281DA4: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80281DA8: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80281DAC: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
    // 0x80281DB0: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x80281DB4: mflo        $v1
    ctx->r3 = lo;
    // 0x80281DB8: addiu       $t6, $v1, 0x5
    ctx->r14 = ADD32(ctx->r3, 0X5);
    // 0x80281DBC: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80281DC0: beq         $at, $zero, L_80281F8C
    if (ctx->r1 == 0) {
        // 0x80281DC4: or          $s3, $v1, $zero
        ctx->r19 = ctx->r3 | 0;
            goto L_80281F8C;
    }
    // 0x80281DC4: or          $s3, $v1, $zero
    ctx->r19 = ctx->r3 | 0;
    // 0x80281DC8: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x80281DCC: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x80281DD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80281DD4: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x80281DD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80281DDC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80281DE0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80281DE4: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x80281DE8: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x80281DEC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80281DF0: addu        $s1, $s4, $t7
    ctx->r17 = ADD32(ctx->r20, ctx->r15);
    // 0x80281DF4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80281DF8: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x80281DFC: addiu       $s0, $s1, 0x5C8
    ctx->r16 = ADD32(ctx->r17, 0X5C8);
L_80281E00:
    // 0x80281E00: jal         0x8023499C
    // 0x80281E04: nop

    static_3_8023499C(rdram, ctx);
        goto after_0;
    // 0x80281E04: nop

    after_0:
    // 0x80281E08: sub.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f28.fl;
    // 0x80281E0C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80281E10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281E14: mul.s       $f6, $f18, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x80281E18: nop

    // 0x80281E1C: mul.s       $f20, $f6, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80281E20: jal         0x8023499C
    // 0x80281E24: nop

    static_3_8023499C(rdram, ctx);
        goto after_1;
    // 0x80281E24: nop

    after_1:
    // 0x80281E28: sub.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f28.fl;
    // 0x80281E2C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80281E30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281E34: mul.s       $f8, $f4, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x80281E38: nop

    // 0x80281E3C: mul.s       $f22, $f8, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80281E40: jal         0x8023499C
    // 0x80281E44: nop

    static_3_8023499C(rdram, ctx);
        goto after_2;
    // 0x80281E44: nop

    after_2:
    // 0x80281E48: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80281E4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281E50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80281E54: mul.s       $f24, $f0, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80281E58: jal         0x8022970C
    // 0x80281E5C: nop

    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x80281E5C: nop

    after_3:
    // 0x80281E60: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    // 0x80281E64: ori         $a1, $a1, 0xD980
    ctx->r5 = ctx->r5 | 0XD980;
    // 0x80281E68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80281E6C: jal         0x802D01D4
    // 0x80281E70: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x80281E70: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_4:
    // 0x80281E74: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80281E78: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80281E7C: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80281E80: jal         0x8022A0D0
    // 0x80281E84: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_8022A0D0(rdram, ctx);
        goto after_5;
    // 0x80281E84: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x80281E88: lwc1        $f20, 0xA4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80281E8C: lwc1        $f22, 0xA8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80281E90: lwc1        $f24, 0xAC($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80281E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281E98: jal         0x802B3F64
    // 0x80281E9C: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    static_3_802B3F64(rdram, ctx);
        goto after_6;
    // 0x80281E9C: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    after_6:
    // 0x80281EA0: lw          $v0, 0x768($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X768);
    // 0x80281EA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80281EA8: lh          $t8, 0xA8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XA8);
    // 0x80281EAC: lw          $t9, 0xAC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XAC);
    // 0x80281EB0: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    // 0x80281EB4: jalr        $t9
    // 0x80281EB8: addiu       $a0, $a0, 0x5C8
    ctx->r4 = ADD32(ctx->r4, 0X5C8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x80281EB8: addiu       $a0, $a0, 0x5C8
    ctx->r4 = ADD32(ctx->r4, 0X5C8);
    after_7:
    // 0x80281EBC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80281EC0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80281EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281EC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281ECC: jal         0x802B447C
    // 0x80281ED0: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_8;
    // 0x80281ED0: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_8:
    // 0x80281ED4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80281ED8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281EDC: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80281EE0: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x80281EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281EE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80281EEC: jal         0x802B447C
    // 0x80281EF0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    static_3_802B447C(rdram, ctx);
        goto after_9;
    // 0x80281EF0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x80281EF4: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x80281EF8: jal         0x80318C9C
    // 0x80281EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318C9C(rdram, ctx);
        goto after_10;
    // 0x80281EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80281F00: lw          $v0, 0x768($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X768);
    // 0x80281F04: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80281F08: lh          $t0, 0xB0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB0);
    // 0x80281F0C: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x80281F10: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    // 0x80281F14: jalr        $t9
    // 0x80281F18: addiu       $a0, $a0, 0x5C8
    ctx->r4 = ADD32(ctx->r4, 0X5C8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x80281F18: addiu       $a0, $a0, 0x5C8
    ctx->r4 = ADD32(ctx->r4, 0X5C8);
    after_11:
    // 0x80281F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281F20: jal         0x80319008
    // 0x80281F24: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    static_3_80319008(rdram, ctx);
        goto after_12;
    // 0x80281F24: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_12:
    // 0x80281F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281F2C: jal         0x802B44B8
    // 0x80281F30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802B44B8(rdram, ctx);
        goto after_13;
    // 0x80281F30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x80281F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80281F38: jal         0x802B44E4
    // 0x80281F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802B44E4(rdram, ctx);
        goto after_14;
    // 0x80281F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80281F40: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x80281F44: jal         0x802AB2AC
    // 0x80281F48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_802AB2AC(rdram, ctx);
        goto after_15;
    // 0x80281F48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_15:
    // 0x80281F4C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80281F50: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80281F54: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80281F58: addiu       $t1, $s4, 0x7FFF
    ctx->r9 = ADD32(ctx->r20, 0X7FFF);
    // 0x80281F5C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80281F60: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80281F64: addiu       $s1, $s1, 0x6A0
    ctx->r17 = ADD32(ctx->r17, 0X6A0);
    // 0x80281F68: addiu       $s0, $s0, 0x6A0
    ctx->r16 = ADD32(ctx->r16, 0X6A0);
    // 0x80281F6C: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x80281F70: lbu         $t1, 0x6DAD($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X6DAD);
    // 0x80281F74: multu       $t1, $s5
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80281F78: mflo        $t2
    ctx->r10 = lo;
    // 0x80281F7C: addiu       $t3, $t2, 0x5
    ctx->r11 = ADD32(ctx->r10, 0X5);
    // 0x80281F80: slt         $at, $s3, $t3
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80281F84: bne         $at, $zero, L_80281E00
    if (ctx->r1 != 0) {
        // 0x80281F88: nop
    
            goto L_80281E00;
    }
    // 0x80281F88: nop

L_80281F8C:
    // 0x80281F8C: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x80281F90: jal         0x80302980
    // 0x80281F94: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_16;
    // 0x80281F94: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_16:
    // 0x80281F98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80281F9C: lwc1        $f20, 0x0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80281FA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80281FA4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80281FA8: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x80281FAC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80281FB0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80281FB4: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x80281FB8: jal         0x80302988
    // 0x80281FBC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_17;
    // 0x80281FBC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_17:
    // 0x80281FC0: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x80281FC4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80281FC8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80281FCC: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    // 0x80281FD0: jal         0x80302988
    // 0x80281FD4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_18;
    // 0x80281FD4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_18:
    // 0x80281FD8: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x80281FDC: jal         0x80302A7C
    // 0x80281FE0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_19;
    // 0x80281FE0: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_19:
    // 0x80281FE4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80281FE8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80281FEC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80281FF0: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80281FF4: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x80281FF8: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x80281FFC: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x80282000: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80282004: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80282008: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x8028200C: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x80282010: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80282014: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80282018: jr          $ra
    // 0x8028201C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x8028201C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void D_8024AEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024AF20: lui         $t9, 0x8400
    ctx->r25 = S32(0X8400 << 16);
    // 0x8024AF24: ori         $t9, $t9, 0x17A0
    ctx->r25 = ctx->r25 | 0X17A0;
    // 0x8024AF28: jr          $t9
    // 0x8024AF2C: addi        $sp, $zero, 0x110
    ctx->r29 = ADD32(0, 0X110);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
    return;
    // 0x8024AF2C: addi        $sp, $zero, 0x110
    ctx->r29 = ADD32(0, 0X110);
;}
RECOMP_FUNC void D_802D6AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D6B44: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x802D6B48: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802D6B4C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802D6B50: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x802D6B54: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x802D6B58: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802D6B5C: lbu         $t6, 0x47C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X47C);
    // 0x802D6B60: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x802D6B64: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x802D6B68: bne         $t6, $zero, L_802D6CBC
    if (ctx->r14 != 0) {
        // 0x802D6B6C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_802D6CBC;
    }
    // 0x802D6B6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D6B70: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x802D6B74: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x802D6B78: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802D6B7C: lh          $t7, 0x60($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X60);
    // 0x802D6B80: jalr        $t9
    // 0x802D6B84: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D6B84: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    after_0:
    // 0x802D6B88: jal         0x80318214
    // 0x802D6B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80318214(rdram, ctx);
        goto after_1;
    // 0x802D6B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802D6B90: lbu         $t8, 0x47D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X47D);
    // 0x802D6B94: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x802D6B98: addiu       $a0, $s0, 0xC78
    ctx->r4 = ADD32(ctx->r16, 0XC78);
    // 0x802D6B9C: beq         $t8, $zero, L_802D6BC8
    if (ctx->r24 == 0) {
        // 0x802D6BA0: addiu       $a3, $sp, 0x58
        ctx->r7 = ADD32(ctx->r29, 0X58);
            goto L_802D6BC8;
    }
    // 0x802D6BA0: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x802D6BA4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6BA8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6BAC: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x802D6BB0: jal         0x802C53E4
    // 0x802D6BB4: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    static_3_802C53E4(rdram, ctx);
        goto after_2;
    // 0x802D6BB4: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    after_2:
    // 0x802D6BB8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6BBC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6BC0: jal         0x802C5468
    // 0x802D6BC4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    static_3_802C5468(rdram, ctx);
        goto after_3;
    // 0x802D6BC4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_3:
L_802D6BC8:
    // 0x802D6BC8: lbu         $t0, 0x47E($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X47E);
    // 0x802D6BCC: addiu       $a0, $s0, 0xAE4
    ctx->r4 = ADD32(ctx->r16, 0XAE4);
    // 0x802D6BD0: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x802D6BD4: beql        $t0, $zero, L_802D6C04
    if (ctx->r8 == 0) {
        // 0x802D6BD8: lbu         $t1, 0x47F($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X47F);
            goto L_802D6C04;
    }
    goto skip_0;
    // 0x802D6BD8: lbu         $t1, 0x47F($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X47F);
    skip_0:
    // 0x802D6BDC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6BE0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6BE4: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x802D6BE8: jal         0x802C53E4
    // 0x802D6BEC: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    static_3_802C53E4(rdram, ctx);
        goto after_4;
    // 0x802D6BEC: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    after_4:
    // 0x802D6BF0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6BF4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6BF8: jal         0x802C5468
    // 0x802D6BFC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    static_3_802C5468(rdram, ctx);
        goto after_5;
    // 0x802D6BFC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_5:
    // 0x802D6C00: lbu         $t1, 0x47F($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X47F);
L_802D6C04:
    // 0x802D6C04: addiu       $a0, $s0, 0x494
    ctx->r4 = ADD32(ctx->r16, 0X494);
    // 0x802D6C08: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x802D6C0C: beql        $t1, $zero, L_802D6CC0
    if (ctx->r9 == 0) {
        // 0x802D6C10: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_802D6CC0;
    }
    goto skip_1;
    // 0x802D6C10: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x802D6C14: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6C18: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6C1C: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x802D6C20: jal         0x802C53E4
    // 0x802D6C24: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    static_3_802C53E4(rdram, ctx);
        goto after_6;
    // 0x802D6C24: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    after_6:
    // 0x802D6C28: addiu       $a0, $s0, 0x628
    ctx->r4 = ADD32(ctx->r16, 0X628);
    // 0x802D6C2C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6C30: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6C34: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x802D6C38: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x802D6C3C: jal         0x802C53E4
    // 0x802D6C40: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_7;
    // 0x802D6C40: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_7:
    // 0x802D6C44: addiu       $a0, $s0, 0x7BC
    ctx->r4 = ADD32(ctx->r16, 0X7BC);
    // 0x802D6C48: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6C4C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6C50: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802D6C54: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x802D6C58: jal         0x802C53E4
    // 0x802D6C5C: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_8;
    // 0x802D6C5C: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_8:
    // 0x802D6C60: addiu       $a0, $s0, 0x950
    ctx->r4 = ADD32(ctx->r16, 0X950);
    // 0x802D6C64: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6C68: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6C6C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x802D6C70: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x802D6C74: jal         0x802C53E4
    // 0x802D6C78: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    static_3_802C53E4(rdram, ctx);
        goto after_9;
    // 0x802D6C78: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    after_9:
    // 0x802D6C7C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6C80: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6C84: jal         0x802C5468
    // 0x802D6C88: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    static_3_802C5468(rdram, ctx);
        goto after_10;
    // 0x802D6C88: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_10:
    // 0x802D6C8C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6C90: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6C94: jal         0x802C5468
    // 0x802D6C98: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    static_3_802C5468(rdram, ctx);
        goto after_11;
    // 0x802D6C98: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_11:
    // 0x802D6C9C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6CA0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6CA4: jal         0x802C5468
    // 0x802D6CA8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    static_3_802C5468(rdram, ctx);
        goto after_12;
    // 0x802D6CA8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_12:
    // 0x802D6CAC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802D6CB0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x802D6CB4: jal         0x802C5468
    // 0x802D6CB8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    static_3_802C5468(rdram, ctx);
        goto after_13;
    // 0x802D6CB8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_13:
L_802D6CBC:
    // 0x802D6CBC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802D6CC0:
    // 0x802D6CC0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802D6CC4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x802D6CC8: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x802D6CCC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802D6CD0: jr          $ra
    // 0x802D6CD4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x802D6CD4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void D_802EC6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC77C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802EC780: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EC784: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x802EC788: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802EC78C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EC790: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EC794: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802EC798: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EC79C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EC7A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802EC7A4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802EC7A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802EC7AC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802EC7B0: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802EC7B4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802EC7B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EC7BC: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x802EC7C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802EC7C4: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802EC7C8: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802EC7CC: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802EC7D0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802EC7D4: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802EC7D8: sh          $a1, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r5;
    // 0x802EC7DC: sh          $v1, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r3;
    // 0x802EC7E0: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x802EC7E4: sh          $v1, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r3;
    // 0x802EC7E8: sh          $a1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r5;
    // 0x802EC7EC: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802EC7F0: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802EC7F4: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802EC7F8: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
    // 0x802EC7FC: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
    // 0x802EC800: sh          $v0, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r2;
    // 0x802EC804: sh          $v0, 0x78($a0)
    MEM_H(0X78, ctx->r4) = ctx->r2;
    // 0x802EC808: jr          $ra
    // 0x802EC80C: sh          $v0, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r2;
    return;
    // 0x802EC80C: sh          $v0, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void D_80294AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80294B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80294B3C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80294B40: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80294B44: jal         0x802AED90
    // 0x80294B48: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_802AED90(rdram, ctx);
        goto after_0;
    // 0x80294B48: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80294B4C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80294B50: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80294B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80294B58: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x80294B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80294B60: bnel        $v0, $at, L_80294B7C
    if (ctx->r2 != ctx->r1) {
        // 0x80294B64: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80294B7C;
    }
    goto skip_0;
    // 0x80294B64: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    skip_0:
    // 0x80294B68: lwc1        $f4, 0xF4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XF4);
    // 0x80294B6C: lwc1        $f14, 0x168($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X168);
    // 0x80294B70: b           L_80294C50
    // 0x80294B74: sub.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f4.fl;
        goto L_80294C50;
    // 0x80294B74: sub.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80294B78: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
L_80294B7C:
    // 0x80294B7C: bnel        $v0, $at, L_80294BBC
    if (ctx->r2 != ctx->r1) {
        // 0x80294B80: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80294BBC;
    }
    goto skip_1;
    // 0x80294B80: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    skip_1:
    // 0x80294B84: lw          $t6, 0xE4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XE4);
    // 0x80294B88: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80294B8C: lwc1        $f10, 0x168($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X168);
    // 0x80294B90: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x80294B94: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80294B98: lwc1        $f4, 0xF4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XF4);
    // 0x80294B9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80294BA0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80294BA4: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80294BA8: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80294BAC: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x80294BB0: b           L_80294C50
    // 0x80294BB4: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
        goto L_80294C50;
    // 0x80294BB4: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80294BB8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_80294BBC:
    // 0x80294BBC: bnel        $v0, $at, L_80294BFC
    if (ctx->r2 != ctx->r1) {
        // 0x80294BC0: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_80294BFC;
    }
    goto skip_2;
    // 0x80294BC0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    skip_2:
    // 0x80294BC4: lw          $t9, 0xE4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XE4);
    // 0x80294BC8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80294BCC: lwc1        $f4, 0x168($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X168);
    // 0x80294BD0: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x80294BD4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80294BD8: lwc1        $f6, 0xF4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XF4);
    // 0x80294BDC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80294BE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80294BE4: lwc1        $f14, 0x0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80294BE8: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80294BEC: sub.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x80294BF0: b           L_80294C50
    // 0x80294BF4: sub.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
        goto L_80294C50;
    // 0x80294BF4: sub.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80294BF8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_80294BFC:
    // 0x80294BFC: bnel        $v0, $at, L_80294C48
    if (ctx->r2 != ctx->r1) {
        // 0x80294C00: lwc1        $f18, 0xF4($a1)
        ctx->f18.u32l = MEM_W(ctx->r5, 0XF4);
            goto L_80294C48;
    }
    goto skip_3;
    // 0x80294C00: lwc1        $f18, 0xF4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XF4);
    skip_3:
    // 0x80294C04: lw          $t2, 0xE8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XE8);
    // 0x80294C08: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80294C0C: lwc1        $f2, 0x168($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X168);
    // 0x80294C10: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x80294C14: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80294C18: lwc1        $f10, 0xF4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XF4);
    // 0x80294C1C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80294C20: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80294C24: lwc1        $f14, 0x150($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X150);
    // 0x80294C28: mul.s       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80294C2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80294C30: sub.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80294C34: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80294C38: sub.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80294C3C: b           L_80294C50
    // 0x80294C40: sub.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f10.fl;
        goto L_80294C50;
    // 0x80294C40: sub.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80294C44: lwc1        $f18, 0xF4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XF4);
L_80294C48:
    // 0x80294C48: lwc1        $f14, 0x150($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X150);
    // 0x80294C4C: sub.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f18.fl;
L_80294C50:
    // 0x80294C50: div.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80294C54: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80294C58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80294C5C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80294C60: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80294C64: bc1fl       L_80294C78
    if (!c1cs) {
        // 0x80294C68: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_80294C78;
    }
    goto skip_4;
    // 0x80294C68: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_4:
    // 0x80294C6C: b           L_80294C90
    // 0x80294C70: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
        goto L_80294C90;
    // 0x80294C70: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x80294C74: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_80294C78:
    // 0x80294C78: nop

    // 0x80294C7C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80294C80: nop

    // 0x80294C84: bc1f        L_80294C90
    if (!c1cs) {
        // 0x80294C88: nop
    
            goto L_80294C90;
    }
    // 0x80294C88: nop

    // 0x80294C8C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_80294C90:
    // 0x80294C90: jr          $ra
    // 0x80294C94: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80294C94: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void D_80298734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802987B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802987B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802987BC: jr          $ra
    // 0x802987C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802987C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802EC6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC73C: beq         $a0, $zero, L_802EC76C
    if (ctx->r4 == 0) {
        // 0x802EC740: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EC76C;
    }
    // 0x802EC740: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EC744: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EC748: jal         0x8031C514
    // 0x802EC74C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EC74C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EC750: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EC754: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EC758: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EC75C: beql        $t7, $zero, L_802EC770
    if (ctx->r15 == 0) {
        // 0x802EC760: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EC770;
    }
    goto skip_0;
    // 0x802EC760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EC764: jal         0x802C681C
    // 0x802EC768: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EC768: nop

    after_1:
L_802EC76C:
    // 0x802EC76C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EC770:
    // 0x802EC770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC774: jr          $ra
    // 0x802EC778: nop

    return;
    // 0x802EC778: nop

;}
RECOMP_FUNC void D_8021F4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F4A8: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021F4AC: lh          $t6, 0x0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X0);
    // 0x8021F4B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F4B4: jr          $ra
    // 0x8021F4B8: sh          $t6, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r14;
    return;
    // 0x8021F4B8: sh          $t6, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void D_802EF818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF898: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802EF89C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802EF8A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EF8A4: bne         $a0, $zero, L_802EF8BC
    if (ctx->r4 != 0) {
        // 0x802EF8A8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802EF8BC;
    }
    // 0x802EF8A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802EF8AC: jal         0x802C67EC
    // 0x802EF8B0: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EF8B0: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_0:
    // 0x802EF8B4: beq         $v0, $zero, L_802EF998
    if (ctx->r2 == 0) {
        // 0x802EF8B8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802EF998;
    }
    // 0x802EF8B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802EF8BC:
    // 0x802EF8BC: jal         0x8031F5A0
    // 0x802EF8C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031F5A0(rdram, ctx);
        goto after_1;
    // 0x802EF8C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802EF8C4: addiu       $a0, $s0, 0xEC
    ctx->r4 = ADD32(ctx->r16, 0XEC);
    // 0x802EF8C8: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802EF8CC: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802EF8D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802EF8D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802EF8D8: jal         0x802C6930
    // 0x802EF8DC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802EF8DC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802EF8E0: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x802EF8E4: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
    // 0x802EF8E8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x802EF8EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802EF8F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802EF8F4: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF8F8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x802EF8FC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802EF900: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x802EF904: addiu       $t0, $zero, 0x1CF
    ctx->r8 = ADD32(0, 0X1CF);
    // 0x802EF908: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802EF90C: sh          $t8, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r24;
    // 0x802EF910: sh          $t9, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r25;
    // 0x802EF914: sh          $t1, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r9;
    // 0x802EF918: sh          $t0, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r8;
    // 0x802EF91C: sh          $a2, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r6;
    // 0x802EF920: sh          $a2, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r6;
    // 0x802EF924: sh          $zero, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = 0;
    // 0x802EF928: sw          $t7, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r15;
    // 0x802EF92C: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x802EF930: lw          $t9, 0x54($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X54);
    // 0x802EF934: lh          $t2, 0x50($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X50);
    // 0x802EF938: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x802EF93C: jalr        $t9
    // 0x802EF940: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802EF940: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    after_3:
    // 0x802EF944: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EF948: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EF94C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802EF950: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802EF954: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802EF958: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x802EF95C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802EF960: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EF964: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802EF968: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802EF96C: nop

    // 0x802EF970: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x802EF974: sh          $v0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r2;
    // 0x802EF978: sh          $v0, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r2;
    // 0x802EF97C: sh          $v0, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = ctx->r2;
    // 0x802EF980: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    // 0x802EF984: sh          $v0, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r2;
    // 0x802EF988: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x802EF98C: sh          $v0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r2;
    // 0x802EF990: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EF994: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
L_802EF998:
    // 0x802EF998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802EF99C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802EF9A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802EF9A4: jr          $ra
    // 0x802EF9A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802EF9A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802EFF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F0018: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x802F001C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x802F0020: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802F0024: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802F0028: beq         $v0, $at, L_802F004C
    if (ctx->r2 == ctx->r1) {
        // 0x802F002C: sll         $t6, $v0, 3
        ctx->r14 = S32(ctx->r2 << 3);
            goto L_802F004C;
    }
    // 0x802F002C: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x802F0030: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x802F0034: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802F0038: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802F003C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802F0040: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802F0044: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802F0048: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
L_802F004C:
    // 0x802F004C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802F0050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802F0054: nop

    // 0x802F0058: mul.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802F005C: jr          $ra
    // 0x802F0060: nop

    return;
    // 0x802F0060: nop

;}
RECOMP_FUNC void D_802C8B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8BB4: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
    // 0x802C8BB8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802C8BBC: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x802C8BC0: sb          $zero, 0x14($a0)
    MEM_B(0X14, ctx->r4) = 0;
    // 0x802C8BC4: sb          $zero, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = 0;
    // 0x802C8BC8: sb          $zero, 0x24($a0)
    MEM_B(0X24, ctx->r4) = 0;
    // 0x802C8BCC: sb          $zero, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = 0;
    // 0x802C8BD0: sb          $zero, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = 0;
    // 0x802C8BD4: jr          $ra
    // 0x802C8BD8: sb          $zero, 0x60($a0)
    MEM_B(0X60, ctx->r4) = 0;
    return;
    // 0x802C8BD8: sb          $zero, 0x60($a0)
    MEM_B(0X60, ctx->r4) = 0;
;}
RECOMP_FUNC void D_8023D694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D694: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x8023D698: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x8023D69C: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x8023D6A0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8023D6A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D6A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023D6AC: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8023D6B0: blez        $t6, L_8023D73C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8023D6B4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8023D73C;
    }
    // 0x8023D6B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023D6B8: addiu       $t0, $sp, 0xC
    ctx->r8 = ADD32(ctx->r29, 0XC);
L_8023D6BC:
    // 0x8023D6BC: lwl         $at, 0x0($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X0);
    // 0x8023D6C0: lwr         $at, 0x3($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0X3);
    // 0x8023D6C4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8023D6C8: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8023D6CC: lwl         $t8, -0x4($v1)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r3, -0X4);
    // 0x8023D6D0: lwr         $t8, -0x1($v1)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r3, -0X1);
    // 0x8023D6D4: nop

    // 0x8023D6D8: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8023D6DC: lbu         $t9, 0xE($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XE);
    // 0x8023D6E0: nop

    // 0x8023D6E4: andi        $t1, $t9, 0xC0
    ctx->r9 = ctx->r25 & 0XC0;
    // 0x8023D6E8: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8023D6EC: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8023D6F0: bne         $t3, $zero, L_8023D728
    if (ctx->r11 != 0) {
        // 0x8023D6F4: sb          $t2, 0x3($a1)
        MEM_B(0X3, ctx->r5) = ctx->r10;
            goto L_8023D728;
    }
    // 0x8023D6F4: sb          $t2, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r10;
    // 0x8023D6F8: lbu         $t4, 0x11($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X11);
    // 0x8023D6FC: lbu         $t6, 0x10($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X10);
    // 0x8023D700: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x8023D704: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8023D708: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x8023D70C: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x8023D710: sllv        $t1, $t9, $a2
    ctx->r9 = S32(ctx->r25 << (ctx->r6 & 31));
    // 0x8023D714: lbu         $t8, 0x12($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X12);
    // 0x8023D718: or          $v0, $v0, $t1
    ctx->r2 = ctx->r2 | ctx->r9;
    // 0x8023D71C: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8023D720: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8023D724: sb          $t8, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r24;
L_8023D728:
    // 0x8023D728: lbu         $t3, 0x0($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X0);
    // 0x8023D72C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023D730: slt         $at, $a2, $t3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8023D734: bne         $at, $zero, L_8023D6BC
    if (ctx->r1 != 0) {
        // 0x8023D738: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8023D6BC;
    }
    // 0x8023D738: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_8023D73C:
    // 0x8023D73C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023D740: jr          $ra
    // 0x8023D744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8023D744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void D_8027E644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E6BC: jr          $ra
    // 0x8027E6C0: lbu         $v0, 0x32B8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X32B8);
    return;
    // 0x8027E6C0: lbu         $v0, 0x32B8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X32B8);
;}
RECOMP_FUNC void D_802ECAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECB60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802ECB64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802ECB68: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802ECB6C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802ECB70: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x802ECB74: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802ECB78: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ECB7C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ECB80: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802ECB84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ECB88: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802ECB8C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802ECB90: addiu       $t7, $zero, 0x18D
    ctx->r15 = ADD32(0, 0X18D);
    // 0x802ECB94: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x802ECB98: sh          $t8, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r24;
    // 0x802ECB9C: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x802ECBA0: sh          $v1, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r3;
    // 0x802ECBA4: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x802ECBA8: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x802ECBAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ECBB0: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x802ECBB4: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x802ECBB8: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x802ECBBC: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802ECBC0: swc1        $f6, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f6.u32l;
    // 0x802ECBC4: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ECBC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ECBCC: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802ECBD0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802ECBD4: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x802ECBD8: nop

    // 0x802ECBDC: sh          $t0, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r8;
    // 0x802ECBE0: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ECBE4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ECBE8: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x802ECBEC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802ECBF0: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802ECBF4: nop

    // 0x802ECBF8: sh          $t2, 0x78($a0)
    MEM_H(0X78, ctx->r4) = ctx->r10;
    // 0x802ECBFC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ECC00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802ECC04: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802ECC08: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802ECC0C: sh          $v1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r3;
    // 0x802ECC10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802ECC14: swc1        $f18, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f18.u32l;
    // 0x802ECC18: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802ECC1C: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x802ECC20: nop

    // 0x802ECC24: sh          $t4, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r12;
    // 0x802ECC28: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802ECC2C: jr          $ra
    // 0x802ECC30: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802ECC30: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void D_802DC798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DC818: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802DC81C: blez        $t6, L_802DC83C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802DC820: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_802DC83C;
    }
    // 0x802DC820: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DC824: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x802DC828: beq         $at, $zero, L_802DC83C
    if (ctx->r1 == 0) {
        // 0x802DC82C: lui         $v1, 0x0
        ctx->r3 = S32(0X0 << 16);
            goto L_802DC83C;
    }
    // 0x802DC82C: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802DC830: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x802DC834: jr          $ra
    // 0x802DC838: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    return;
    // 0x802DC838: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
L_802DC83C:
    // 0x802DC83C: addiu       $v1, $zero, 0x63
    ctx->r3 = ADD32(0, 0X63);
    // 0x802DC840: jr          $ra
    // 0x802DC844: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x802DC844: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void D_80293F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293F94: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80293F98: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80293F9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80293FA0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80293FA4: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80293FA8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80293FAC: addiu       $t6, $sp, 0x90
    ctx->r14 = ADD32(ctx->r29, 0X90);
    // 0x80293FB0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80293FB4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80293FB8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80293FBC: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x80293FC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80293FC4: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x80293FC8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80293FCC: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x80293FD0: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x80293FD4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80293FD8: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x80293FDC: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80293FE0: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x80293FE4: jal         0x802AD568
    // 0x80293FE8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x80293FE8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80293FEC: blez        $v0, L_80294108
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80293FF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80294108;
    }
    // 0x80293FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293FF4: jal         0x802C51D0
    // 0x80293FF8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x80293FF8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x80293FFC: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80294000: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80294004: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80294008: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8029400C: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x80294010: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x80294014: jal         0x8022970C
    // 0x80294018: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x80294018: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8029401C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80294020: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80294024: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80294028: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029402C: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x80294030: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x80294034: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x80294038: lwc1        $f18, 0x16C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x8029403C: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80294040: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80294044: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80294048: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8029404C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80294050: jal         0x802D01D4
    // 0x80294054: nop

    static_3_802D01D4(rdram, ctx);
        goto after_3;
    // 0x80294054: nop

    after_3:
    // 0x80294058: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029405C: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80294060: lwc1        $f8, 0x170($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X170);
    // 0x80294064: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80294068: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x8029406C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80294070: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80294074: jal         0x802D01D4
    // 0x80294078: nop

    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x80294078: nop

    after_4:
    // 0x8029407C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80294080: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80294084: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80294088: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8029408C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80294090: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80294094: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80294098: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x8029409C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802940A0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x802940A4: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x802940A8: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x802940AC: jal         0x802AAF70
    // 0x802940B0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_802AAF70(rdram, ctx);
        goto after_5;
    // 0x802940B0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_5:
    // 0x802940B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802940B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802940BC: beq         $v0, $zero, L_80294100
    if (ctx->r2 == 0) {
        // 0x802940C0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80294100;
    }
    // 0x802940C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802940C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802940C8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802940CC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802940D0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802940D4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802940D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x802940DC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x802940E0: jal         0x802E9420
    // 0x802940E4: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    static_3_802E9420(rdram, ctx);
        goto after_6;
    // 0x802940E4: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x802940E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802940EC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802940F0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x802940F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802940F8: jal         0x802E982C
    // 0x802940FC: nop

    static_3_802E982C(rdram, ctx);
        goto after_7;
    // 0x802940FC: nop

    after_7:
L_80294100:
    // 0x80294100: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80294104: swc1        $f18, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f18.u32l;
L_80294108:
    // 0x80294108: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8029410C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80294110: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x80294114: jr          $ra
    // 0x80294118: nop

    return;
    // 0x80294118: nop

;}
RECOMP_FUNC void D_802EBF48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EBFC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EBFCC: bne         $a0, $zero, L_802EBFE4
    if (ctx->r4 != 0) {
        // 0x802EBFD0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802EBFE4;
    }
    // 0x802EBFD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EBFD4: jal         0x802C67EC
    // 0x802EBFD8: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EBFD8: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EBFDC: beq         $v0, $zero, L_802EC038
    if (ctx->r2 == 0) {
        // 0x802EBFE0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802EC038;
    }
    // 0x802EBFE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802EBFE4:
    // 0x802EBFE4: jal         0x8031C47C
    // 0x802EBFE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C47C(rdram, ctx);
        goto after_1;
    // 0x802EBFE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x802EBFEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EBFF0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802EBFF4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802EBFF8: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802EBFFC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802EC000: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802EC004: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802EC008: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EC00C: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x802EC010: sh          $t6, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r14;
    // 0x802EC014: sw          $t7, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r15;
    // 0x802EC018: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x802EC01C: sh          $t8, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = ctx->r24;
    // 0x802EC020: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802EC024: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x802EC028: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EC02C: jal         0x8031C7A4
    // 0x802EC030: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    static_3_8031C7A4(rdram, ctx);
        goto after_2;
    // 0x802EC030: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x802EC034: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_802EC038:
    // 0x802EC038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EC03C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EC040: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802EC044: jr          $ra
    // 0x802EC048: nop

    return;
    // 0x802EC048: nop

;}
RECOMP_FUNC void D_80223DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223DF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80223DFC: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80223E00: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80223E04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80223E08: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80223E0C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80223E10: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80223E14: bne         $t6, $zero, L_80223E30
    if (ctx->r14 != 0) {
        // 0x80223E18: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80223E30;
    }
    // 0x80223E18: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80223E1C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80223E20: jal         0x80231A24
    // 0x80223E24: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80223E24: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80223E28: b           L_80223E9C
    // 0x80223E2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80223E9C;
    // 0x80223E2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223E30:
    // 0x80223E30: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80223E34: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80223E38: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80223E3C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80223E40: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
L_80223E44:
    // 0x80223E44: lbu         $t7, 0x18($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X18);
    // 0x80223E48: beql        $t7, $zero, L_80223E90
    if (ctx->r15 == 0) {
        // 0x80223E4C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80223E90;
    }
    goto skip_0;
    // 0x80223E4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80223E50: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    // 0x80223E54: bne         $s3, $t8, L_80223E74
    if (ctx->r19 != ctx->r24) {
        // 0x80223E58: nop
    
            goto L_80223E74;
    }
    // 0x80223E58: nop

    // 0x80223E5C: jal         0x80223F08
    // 0x80223E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80223F08(rdram, ctx);
        goto after_1;
    // 0x80223E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80223E64: bnel        $v0, $zero, L_80223E90
    if (ctx->r2 != 0) {
        // 0x80223E68: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80223E90;
    }
    goto skip_1;
    // 0x80223E68: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x80223E6C: b           L_80223E9C
    // 0x80223E70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223E9C;
    // 0x80223E70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223E74:
    // 0x80223E74: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80223E78: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80223E7C: jal         0x80231A24
    // 0x80223E80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80223E80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80223E84: b           L_80223E9C
    // 0x80223E88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223E9C;
    // 0x80223E88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223E8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80223E90:
    // 0x80223E90: bne         $s0, $s2, L_80223E44
    if (ctx->r16 != ctx->r18) {
        // 0x80223E94: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_80223E44;
    }
    // 0x80223E94: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x80223E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80223E9C:
    // 0x80223E9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80223EA0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80223EA4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80223EA8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80223EAC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80223EB0: jr          $ra
    // 0x80223EB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80223EB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_802835C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283644: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283648: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028364C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80283650: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80283654: lw          $v0, 0x27C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X27C);
    // 0x80283658: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028365C: lh          $t6, 0x38($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X38);
    // 0x80283660: lw          $t9, 0x3C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X3C);
    // 0x80283664: addu        $a0, $t6, $a0
    ctx->r4 = ADD32(ctx->r14, ctx->r4);
    // 0x80283668: jalr        $t9
    // 0x8028366C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8028366C: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_0:
    // 0x80283670: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x80283674: swc1        $f0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f0.u32l;
    // 0x80283678: lh          $t7, 0x48($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X48);
    // 0x8028367C: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x80283680: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x80283684: jalr        $t9
    // 0x80283688: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80283688: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_1:
    // 0x8028368C: lw          $v0, 0x27C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X27C);
    // 0x80283690: swc1        $f0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f0.u32l;
    // 0x80283694: lh          $t8, 0x40($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X40);
    // 0x80283698: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x8028369C: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x802836A0: jalr        $t9
    // 0x802836A4: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802836A4: addiu       $a0, $a0, 0x1A4
    ctx->r4 = ADD32(ctx->r4, 0X1A4);
    after_2:
    // 0x802836A8: swc1        $f0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f0.u32l;
    // 0x802836AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802836B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802836B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802836B8: jr          $ra
    // 0x802836BC: nop

    return;
    // 0x802836BC: nop

;}
RECOMP_FUNC void D_80235150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235150: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235158: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8023515C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80235160: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80235164: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80235168: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x8023516C: sb          $t0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r8;
    // 0x80235170: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x80235174: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80235178: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8023517C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80235180: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80235184: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80235188: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8023518C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80235190: jal         0x8023F37C
    // 0x80235194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80235194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80235198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023519C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802351A0: jr          $ra
    // 0x802351A4: nop

    return;
    // 0x802351A4: nop

;}
RECOMP_FUNC void D_80221ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80221ADC: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80221AE0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80221AE4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80221AE8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80221AEC: jal         0x80228DE0
    // 0x80221AF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80221AF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80221AF4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80221AF8: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80221AFC: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x80221B00: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80221B04: jal         0x802297A8
    // 0x80221B08: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    static_3_802297A8(rdram, ctx);
        goto after_1;
    // 0x80221B08: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    after_1:
    // 0x80221B0C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80221B10: jal         0x802291F8
    // 0x80221B14: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    static_3_802291F8(rdram, ctx);
        goto after_2;
    // 0x80221B14: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    after_2:
    // 0x80221B18: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x80221B1C: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x80221B20: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_80221B24:
    // 0x80221B24: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80221B28: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80221B2C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80221B30: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80221B34: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80221B38: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x80221B3C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80221B40: bne         $t6, $t8, L_80221B24
    if (ctx->r14 != ctx->r24) {
        // 0x80221B44: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80221B24;
    }
    // 0x80221B44: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80221B48: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80221B4C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80221B50: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80221B54: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80221B58: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80221B5C: jal         0x802208B4
    // 0x80221B60: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    static_3_802208B4(rdram, ctx);
        goto after_3;
    // 0x80221B60: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_3:
    // 0x80221B64: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80221B68: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x80221B6C: jr          $ra
    // 0x80221B70: nop

    return;
    // 0x80221B70: nop

;}
RECOMP_FUNC void D_8023CCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CCFC: jr          $ra
    // 0x8023CD00: sh          $a1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r5;
    return;
    // 0x8023CD00: sh          $a1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802B90C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B9140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B9144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B9148: bne         $a0, $zero, L_802B9160
    if (ctx->r4 != 0) {
        // 0x802B914C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802B9160;
    }
    // 0x802B914C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802B9150: jal         0x802C67EC
    // 0x802B9154: addiu       $a0, $zero, 0x278
    ctx->r4 = ADD32(0, 0X278);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802B9154: addiu       $a0, $zero, 0x278
    ctx->r4 = ADD32(0, 0X278);
    after_0:
    // 0x802B9158: beq         $v0, $zero, L_802B9170
    if (ctx->r2 == 0) {
        // 0x802B915C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802B9170;
    }
    // 0x802B915C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802B9160:
    // 0x802B9160: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x802B9164: jal         0x8031CA48
    // 0x802B9168: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8031CA48(rdram, ctx);
        goto after_1;
    // 0x802B9168: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802B916C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802B9170:
    // 0x802B9170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B9174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B9178: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802B917C: jr          $ra
    // 0x802B9180: nop

    return;
    // 0x802B9180: nop

;}
RECOMP_FUNC void D_80227D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227D1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227D20: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80227D24: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80227D28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227D2C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227D30: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227D34: jal         0x80223840
    // 0x80227D38: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227D38: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227D3C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227D40: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227D44: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227D48: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227D4C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227D50: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227D54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227D58: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227D5C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227D60: jal         0x80223B30
    // 0x80227D64: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    static_3_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227D64: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80227D68: beq         $v0, $zero, L_80227D7C
    if (ctx->r2 == 0) {
        // 0x80227D6C: nop
    
            goto L_80227D7C;
    }
    // 0x80227D6C: nop

    // 0x80227D70: jal         0x802272B0
    // 0x80227D74: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    static_3_802272B0(rdram, ctx);
        goto after_2;
    // 0x80227D74: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80227D78: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80227D7C:
    // 0x80227D7C: jal         0x802238F0
    // 0x80227D80: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_802238F0(rdram, ctx);
        goto after_3;
    // 0x80227D80: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80227D84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227D88: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80227D8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227D90: jr          $ra
    // 0x80227D94: nop

    return;
    // 0x80227D94: nop

;}
RECOMP_FUNC void D_802F2A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2B0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802F2B10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802F2B14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802F2B18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802F2B1C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802F2B20: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802F2B24: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802F2B28: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802F2B2C: jal         0x80302DC8
    // 0x802F2B30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_0;
    // 0x802F2B30: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_0:
    // 0x802F2B34: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802F2B38: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2B3C: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802F2B40: jal         0x80302DC8
    // 0x802F2B44: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302DC8(rdram, ctx);
        goto after_1;
    // 0x802F2B44: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_1:
    // 0x802F2B48: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802F2B4C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2B50: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802F2B54: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x802F2B58: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x802F2B5C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802F2B60: jal         0x80290474
    // 0x802F2B64: nop

    static_3_80290474(rdram, ctx);
        goto after_2;
    // 0x802F2B64: nop

    after_2:
    // 0x802F2B68: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2B6C: jal         0x80302980
    // 0x802F2B70: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_3;
    // 0x802F2B70: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802F2B74: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2B78: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F2B7C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F2B80: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802F2B84: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F2B88: jal         0x80302988
    // 0x802F2B8C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_4;
    // 0x802F2B8C: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802F2B90: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2B94: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802F2B98: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802F2B9C: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    // 0x802F2BA0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802F2BA4: jal         0x80302988
    // 0x802F2BA8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_5;
    // 0x802F2BA8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802F2BAC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2BB0: jal         0x80302A7C
    // 0x802F2BB4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_6;
    // 0x802F2BB4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802F2BB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802F2BBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802F2BC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802F2BC4: jr          $ra
    // 0x802F2BC8: nop

    return;
    // 0x802F2BC8: nop

;}
RECOMP_FUNC void D_802D2ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2B5C: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x802D2B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D2B64: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802D2B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2B6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D2B70: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802D2B74: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x802D2B78: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x802D2B7C: jal         0x8030301C
    // 0x802D2B80: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    static_3_8030301C(rdram, ctx);
        goto after_0;
    // 0x802D2B80: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x802D2B84: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802D2B88: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802D2B8C: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x802D2B90: sw          $t7, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r15;
    // 0x802D2B94: sw          $t6, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r14;
    // 0x802D2B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D2B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2BA0: jr          $ra
    // 0x802D2BA4: nop

    return;
    // 0x802D2BA4: nop

;}
RECOMP_FUNC void D_80231534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231534: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231538: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8023153C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231540: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80231544: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80231548: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023154C: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80231550: addiu       $a0, $a0, 0xCE8
    ctx->r4 = ADD32(ctx->r4, 0XCE8);
    // 0x80231554: jal         0x802371E0
    // 0x80231558: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802371E0(rdram, ctx);
        goto after_0;
    // 0x80231558: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8023155C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80231560: addiu       $a1, $a1, 0xCE8
    ctx->r5 = ADD32(ctx->r5, 0XCE8);
    // 0x80231564: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80231568: jal         0x8023DF30
    // 0x8023156C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    static_3_8023DF30(rdram, ctx);
        goto after_1;
    // 0x8023156C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80231570: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80231574: addiu       $a0, $a0, 0xCE8
    ctx->r4 = ADD32(ctx->r4, 0XCE8);
    // 0x80231578: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8023157C: jal         0x802374B0
    // 0x80231580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_2;
    // 0x80231580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80231584: jal         0x8023E6A0
    // 0x80231588: nop

    static_3_8023E6A0(rdram, ctx);
        goto after_3;
    // 0x80231588: nop

    after_3:
    // 0x8023158C: lw          $t6, 0x11C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X11C);
    // 0x80231590: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80231594: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
L_80231598:
    // 0x80231598: jal         0x80220340
    // 0x8023159C: nop

    static_3_80220340(rdram, ctx);
        goto after_4;
    // 0x8023159C: nop

    after_4:
    // 0x802315A0: jal         0x80231268
    // 0x802315A4: nop

    static_3_80231268(rdram, ctx);
        goto after_5;
    // 0x802315A4: nop

    after_5:
    // 0x802315A8: jal         0x80221BC4
    // 0x802315AC: nop

    static_3_80221BC4(rdram, ctx);
        goto after_6;
    // 0x802315AC: nop

    after_6:
    // 0x802315B0: b           L_80231598
    // 0x802315B4: nop

        goto L_80231598;
    // 0x802315B4: nop

    // 0x802315B8: nop

    // 0x802315BC: nop

    // 0x802315C0: nop

    // 0x802315C4: nop

    // 0x802315C8: nop

    // 0x802315CC: nop

    // 0x802315D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802315D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802315D8: jr          $ra
    // 0x802315DC: nop

    return;
    // 0x802315DC: nop

;}
RECOMP_FUNC void D_8027FBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027FC18: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8027FC1C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8027FC20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8027FC24: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x8027FC28: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8027FC2C: addiu       $v1, $zero, 0x3B
    ctx->r3 = ADD32(0, 0X3B);
    // 0x8027FC30: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8027FC34: bc1fl       L_8027FC50
    if (!c1cs) {
        // 0x8027FC38: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_8027FC50;
    }
    goto skip_0;
    // 0x8027FC38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_0:
    // 0x8027FC3C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8027FC40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027FC44: b           L_8027FC58
    // 0x8027FC48: add.s       $f14, $f12, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f12.fl + ctx->f4.fl;
        goto L_8027FC58;
    // 0x8027FC48: add.s       $f14, $f12, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x8027FC4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_8027FC50:
    // 0x8027FC50: nop

    // 0x8027FC54: sub.s       $f14, $f12, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f6.fl;
L_8027FC58:
    // 0x8027FC58: trunc.w.s   $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    ctx->f8.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8027FC5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FC60: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FC64: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8027FC68: nop

    // 0x8027FC6C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8027FC70: nop

    // 0x8027FC74: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8027FC78: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8027FC7C: nop

    // 0x8027FC80: bc1fl       L_8027FC98
    if (!c1cs) {
        // 0x8027FC84: c.le.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
            goto L_8027FC98;
    }
    goto skip_1;
    // 0x8027FC84: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    skip_1:
    // 0x8027FC88: addiu       $v0, $zero, 0xAE
    ctx->r2 = ADD32(0, 0XAE);
    // 0x8027FC8C: b           L_802801E0
    // 0x8027FC90: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FC90: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x8027FC94: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
L_8027FC98:
    // 0x8027FC98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FC9C: bc1f        L_8027FCC4
    if (!c1cs) {
        // 0x8027FCA0: nop
    
            goto L_8027FCC4;
    }
    // 0x8027FCA0: nop

    // 0x8027FCA4: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FCA8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8027FCAC: nop

    // 0x8027FCB0: bc1f        L_8027FCC4
    if (!c1cs) {
        // 0x8027FCB4: nop
    
            goto L_8027FCC4;
    }
    // 0x8027FCB4: nop

    // 0x8027FCB8: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x8027FCBC: b           L_802801E0
    // 0x8027FCC0: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FCC0: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_8027FCC4:
    // 0x8027FCC4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FCC8: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FCCC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FCD0: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8027FCD4: nop

    // 0x8027FCD8: bc1f        L_8027FD00
    if (!c1cs) {
        // 0x8027FCDC: nop
    
            goto L_8027FD00;
    }
    // 0x8027FCDC: nop

    // 0x8027FCE0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FCE4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8027FCE8: nop

    // 0x8027FCEC: bc1f        L_8027FD00
    if (!c1cs) {
        // 0x8027FCF0: nop
    
            goto L_8027FD00;
    }
    // 0x8027FCF0: nop

    // 0x8027FCF4: addiu       $v0, $zero, 0xA9
    ctx->r2 = ADD32(0, 0XA9);
    // 0x8027FCF8: b           L_802801E0
    // 0x8027FCFC: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FCFC: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_8027FD00:
    // 0x8027FD00: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FD04: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FD08: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FD0C: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8027FD10: nop

    // 0x8027FD14: bc1f        L_8027FD3C
    if (!c1cs) {
        // 0x8027FD18: nop
    
            goto L_8027FD3C;
    }
    // 0x8027FD18: nop

    // 0x8027FD1C: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FD20: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8027FD24: nop

    // 0x8027FD28: bc1f        L_8027FD3C
    if (!c1cs) {
        // 0x8027FD2C: nop
    
            goto L_8027FD3C;
    }
    // 0x8027FD2C: nop

    // 0x8027FD30: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
    // 0x8027FD34: b           L_802801E0
    // 0x8027FD38: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FD38: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_8027FD3C:
    // 0x8027FD3C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FD40: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FD44: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FD48: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x8027FD4C: nop

    // 0x8027FD50: bc1f        L_8027FD78
    if (!c1cs) {
        // 0x8027FD54: nop
    
            goto L_8027FD78;
    }
    // 0x8027FD54: nop

    // 0x8027FD58: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FD5C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8027FD60: nop

    // 0x8027FD64: bc1f        L_8027FD78
    if (!c1cs) {
        // 0x8027FD68: nop
    
            goto L_8027FD78;
    }
    // 0x8027FD68: nop

    // 0x8027FD6C: addiu       $v0, $zero, 0xA3
    ctx->r2 = ADD32(0, 0XA3);
    // 0x8027FD70: b           L_802801E0
    // 0x8027FD74: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FD74: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_8027FD78:
    // 0x8027FD78: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FD7C: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FD80: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FD84: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8027FD88: nop

    // 0x8027FD8C: bc1f        L_8027FDB4
    if (!c1cs) {
        // 0x8027FD90: nop
    
            goto L_8027FDB4;
    }
    // 0x8027FD90: nop

    // 0x8027FD94: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FD98: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8027FD9C: nop

    // 0x8027FDA0: bc1f        L_8027FDB4
    if (!c1cs) {
        // 0x8027FDA4: nop
    
            goto L_8027FDB4;
    }
    // 0x8027FDA4: nop

    // 0x8027FDA8: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8027FDAC: b           L_802801E0
    // 0x8027FDB0: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FDB0: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_8027FDB4:
    // 0x8027FDB4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FDB8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FDBC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FDC0: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8027FDC4: nop

    // 0x8027FDC8: bc1f        L_8027FDF0
    if (!c1cs) {
        // 0x8027FDCC: nop
    
            goto L_8027FDF0;
    }
    // 0x8027FDCC: nop

    // 0x8027FDD0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FDD4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8027FDD8: nop

    // 0x8027FDDC: bc1f        L_8027FDF0
    if (!c1cs) {
        // 0x8027FDE0: nop
    
            goto L_8027FDF0;
    }
    // 0x8027FDE0: nop

    // 0x8027FDE4: addiu       $v0, $zero, 0x9D
    ctx->r2 = ADD32(0, 0X9D);
    // 0x8027FDE8: b           L_802801E0
    // 0x8027FDEC: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FDEC: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_8027FDF0:
    // 0x8027FDF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8027FDF4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8027FDF8: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x8027FDFC: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x8027FE00: nop

    // 0x8027FE04: bc1fl       L_8027FE34
    if (!c1cs) {
        // 0x8027FE08: lui         $at, 0xC3C8
        ctx->r1 = S32(0XC3C8 << 16);
            goto L_8027FE34;
    }
    goto skip_2;
    // 0x8027FE08: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    skip_2:
    // 0x8027FE0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8027FE10: nop

    // 0x8027FE14: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8027FE18: nop

    // 0x8027FE1C: bc1fl       L_8027FE34
    if (!c1cs) {
        // 0x8027FE20: lui         $at, 0xC3C8
        ctx->r1 = S32(0XC3C8 << 16);
            goto L_8027FE34;
    }
    goto skip_3;
    // 0x8027FE20: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    skip_3:
    // 0x8027FE24: addiu       $v0, $zero, 0xA8
    ctx->r2 = ADD32(0, 0XA8);
    // 0x8027FE28: b           L_802801E0
    // 0x8027FE2C: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FE2C: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x8027FE30: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
L_8027FE34:
    // 0x8027FE34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8027FE38: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x8027FE3C: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8027FE40: nop

    // 0x8027FE44: bc1fl       L_8027FE74
    if (!c1cs) {
        // 0x8027FE48: lui         $at, 0xC37A
        ctx->r1 = S32(0XC37A << 16);
            goto L_8027FE74;
    }
    goto skip_4;
    // 0x8027FE48: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    skip_4:
    // 0x8027FE4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027FE50: nop

    // 0x8027FE54: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8027FE58: nop

    // 0x8027FE5C: bc1fl       L_8027FE74
    if (!c1cs) {
        // 0x8027FE60: lui         $at, 0xC37A
        ctx->r1 = S32(0XC37A << 16);
            goto L_8027FE74;
    }
    goto skip_5;
    // 0x8027FE60: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    skip_5:
    // 0x8027FE64: addiu       $v0, $zero, 0xA2
    ctx->r2 = ADD32(0, 0XA2);
    // 0x8027FE68: b           L_802801E0
    // 0x8027FE6C: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FE6C: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x8027FE70: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
L_8027FE74:
    // 0x8027FE74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8027FE78: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x8027FE7C: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8027FE80: nop

    // 0x8027FE84: bc1fl       L_8027FEB4
    if (!c1cs) {
        // 0x8027FE88: lui         $at, 0xC316
        ctx->r1 = S32(0XC316 << 16);
            goto L_8027FEB4;
    }
    goto skip_6;
    // 0x8027FE88: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    skip_6:
    // 0x8027FE8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027FE90: nop

    // 0x8027FE94: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8027FE98: nop

    // 0x8027FE9C: bc1fl       L_8027FEB4
    if (!c1cs) {
        // 0x8027FEA0: lui         $at, 0xC316
        ctx->r1 = S32(0XC316 << 16);
            goto L_8027FEB4;
    }
    goto skip_7;
    // 0x8027FEA0: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    skip_7:
    // 0x8027FEA4: addiu       $v0, $zero, 0x9F
    ctx->r2 = ADD32(0, 0X9F);
    // 0x8027FEA8: b           L_802801E0
    // 0x8027FEAC: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FEAC: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x8027FEB0: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
L_8027FEB4:
    // 0x8027FEB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8027FEB8: lui         $at, 0xC296
    ctx->r1 = S32(0XC296 << 16);
    // 0x8027FEBC: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x8027FEC0: nop

    // 0x8027FEC4: bc1fl       L_8027FEF4
    if (!c1cs) {
        // 0x8027FEC8: lui         $at, 0xC296
        ctx->r1 = S32(0XC296 << 16);
            goto L_8027FEF4;
    }
    goto skip_8;
    // 0x8027FEC8: lui         $at, 0xC296
    ctx->r1 = S32(0XC296 << 16);
    skip_8:
    // 0x8027FECC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8027FED0: nop

    // 0x8027FED4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8027FED8: nop

    // 0x8027FEDC: bc1fl       L_8027FEF4
    if (!c1cs) {
        // 0x8027FEE0: lui         $at, 0xC296
        ctx->r1 = S32(0XC296 << 16);
            goto L_8027FEF4;
    }
    goto skip_9;
    // 0x8027FEE0: lui         $at, 0xC296
    ctx->r1 = S32(0XC296 << 16);
    skip_9:
    // 0x8027FEE4: addiu       $v0, $zero, 0x9C
    ctx->r2 = ADD32(0, 0X9C);
    // 0x8027FEE8: b           L_802801E0
    // 0x8027FEEC: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FEEC: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x8027FEF0: lui         $at, 0xC296
    ctx->r1 = S32(0XC296 << 16);
L_8027FEF4:
    // 0x8027FEF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8027FEF8: nop

    // 0x8027FEFC: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8027FF00: nop

    // 0x8027FF04: bc1fl       L_8027FF2C
    if (!c1cs) {
        // 0x8027FF08: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_8027FF2C;
    }
    goto skip_10;
    // 0x8027FF08: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_10:
    // 0x8027FF0C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8027FF10: nop

    // 0x8027FF14: bc1fl       L_8027FF2C
    if (!c1cs) {
        // 0x8027FF18: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_8027FF2C;
    }
    goto skip_11;
    // 0x8027FF18: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_11:
    // 0x8027FF1C: addiu       $v0, $zero, 0xA7
    ctx->r2 = ADD32(0, 0XA7);
    // 0x8027FF20: b           L_802801E0
    // 0x8027FF24: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
        goto L_802801E0;
    // 0x8027FF24: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x8027FF28: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_8027FF2C:
    // 0x8027FF2C: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x8027FF30: bc1fl       L_8027FF60
    if (!c1cs) {
        // 0x8027FF34: lui         $at, 0x4296
        ctx->r1 = S32(0X4296 << 16);
            goto L_8027FF60;
    }
    goto skip_12;
    // 0x8027FF34: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    skip_12:
    // 0x8027FF38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027FF3C: nop

    // 0x8027FF40: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8027FF44: nop

    // 0x8027FF48: bc1fl       L_8027FF60
    if (!c1cs) {
        // 0x8027FF4C: lui         $at, 0x4296
        ctx->r1 = S32(0X4296 << 16);
            goto L_8027FF60;
    }
    goto skip_13;
    // 0x8027FF4C: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    skip_13:
    // 0x8027FF50: addiu       $v0, $zero, 0xA7
    ctx->r2 = ADD32(0, 0XA7);
    // 0x8027FF54: b           L_802801E0
    // 0x8027FF58: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x8027FF58: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
    // 0x8027FF5C: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
L_8027FF60:
    // 0x8027FF60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8027FF64: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8027FF68: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8027FF6C: nop

    // 0x8027FF70: bc1fl       L_8027FFA0
    if (!c1cs) {
        // 0x8027FF74: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_8027FFA0;
    }
    goto skip_14;
    // 0x8027FF74: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    skip_14:
    // 0x8027FF78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8027FF7C: nop

    // 0x8027FF80: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8027FF84: nop

    // 0x8027FF88: bc1fl       L_8027FFA0
    if (!c1cs) {
        // 0x8027FF8C: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_8027FFA0;
    }
    goto skip_15;
    // 0x8027FF8C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    skip_15:
    // 0x8027FF90: addiu       $v0, $zero, 0x9C
    ctx->r2 = ADD32(0, 0X9C);
    // 0x8027FF94: b           L_802801E0
    // 0x8027FF98: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x8027FF98: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
    // 0x8027FF9C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_8027FFA0:
    // 0x8027FFA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8027FFA4: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8027FFA8: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x8027FFAC: nop

    // 0x8027FFB0: bc1fl       L_8027FFE0
    if (!c1cs) {
        // 0x8027FFB4: lui         $at, 0x437A
        ctx->r1 = S32(0X437A << 16);
            goto L_8027FFE0;
    }
    goto skip_16;
    // 0x8027FFB4: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    skip_16:
    // 0x8027FFB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8027FFBC: nop

    // 0x8027FFC0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8027FFC4: nop

    // 0x8027FFC8: bc1fl       L_8027FFE0
    if (!c1cs) {
        // 0x8027FFCC: lui         $at, 0x437A
        ctx->r1 = S32(0X437A << 16);
            goto L_8027FFE0;
    }
    goto skip_17;
    // 0x8027FFCC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    skip_17:
    // 0x8027FFD0: addiu       $v0, $zero, 0x9F
    ctx->r2 = ADD32(0, 0X9F);
    // 0x8027FFD4: b           L_802801E0
    // 0x8027FFD8: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x8027FFD8: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
    // 0x8027FFDC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
L_8027FFE0:
    // 0x8027FFE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8027FFE4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x8027FFE8: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8027FFEC: nop

    // 0x8027FFF0: bc1fl       L_80280020
    if (!c1cs) {
        // 0x8027FFF4: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_80280020;
    }
    goto skip_18;
    // 0x8027FFF4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    skip_18:
    // 0x8027FFF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8027FFFC: nop

    // 0x80280000: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80280004: nop

    // 0x80280008: bc1fl       L_80280020
    if (!c1cs) {
        // 0x8028000C: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_80280020;
    }
    goto skip_19;
    // 0x8028000C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    skip_19:
    // 0x80280010: addiu       $v0, $zero, 0xA2
    ctx->r2 = ADD32(0, 0XA2);
    // 0x80280014: b           L_802801E0
    // 0x80280018: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x80280018: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
    // 0x8028001C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
L_80280020:
    // 0x80280020: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280024: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80280028: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8028002C: nop

    // 0x80280030: bc1f        L_80280058
    if (!c1cs) {
        // 0x80280034: nop
    
            goto L_80280058;
    }
    // 0x80280034: nop

    // 0x80280038: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028003C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80280040: nop

    // 0x80280044: bc1f        L_80280058
    if (!c1cs) {
        // 0x80280048: nop
    
            goto L_80280058;
    }
    // 0x80280048: nop

    // 0x8028004C: addiu       $v0, $zero, 0xA8
    ctx->r2 = ADD32(0, 0XA8);
    // 0x80280050: b           L_802801E0
    // 0x80280054: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x80280054: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
L_80280058:
    // 0x80280058: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028005C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80280060: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80280064: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x80280068: nop

    // 0x8028006C: bc1f        L_80280094
    if (!c1cs) {
        // 0x80280070: nop
    
            goto L_80280094;
    }
    // 0x80280070: nop

    // 0x80280074: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80280078: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8028007C: nop

    // 0x80280080: bc1f        L_80280094
    if (!c1cs) {
        // 0x80280084: nop
    
            goto L_80280094;
    }
    // 0x80280084: nop

    // 0x80280088: addiu       $v0, $zero, 0x9D
    ctx->r2 = ADD32(0, 0X9D);
    // 0x8028008C: b           L_802801E0
    // 0x80280090: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x80280090: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
L_80280094:
    // 0x80280094: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80280098: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028009C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802800A0: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x802800A4: nop

    // 0x802800A8: bc1f        L_802800D0
    if (!c1cs) {
        // 0x802800AC: nop
    
            goto L_802800D0;
    }
    // 0x802800AC: nop

    // 0x802800B0: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802800B4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802800B8: nop

    // 0x802800BC: bc1f        L_802800D0
    if (!c1cs) {
        // 0x802800C0: nop
    
            goto L_802800D0;
    }
    // 0x802800C0: nop

    // 0x802800C4: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802800C8: b           L_802801E0
    // 0x802800CC: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x802800CC: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
L_802800D0:
    // 0x802800D0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802800D4: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802800D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802800DC: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x802800E0: nop

    // 0x802800E4: bc1f        L_8028010C
    if (!c1cs) {
        // 0x802800E8: nop
    
            goto L_8028010C;
    }
    // 0x802800E8: nop

    // 0x802800EC: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802800F0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802800F4: nop

    // 0x802800F8: bc1f        L_8028010C
    if (!c1cs) {
        // 0x802800FC: nop
    
            goto L_8028010C;
    }
    // 0x802800FC: nop

    // 0x80280100: addiu       $v0, $zero, 0xA3
    ctx->r2 = ADD32(0, 0XA3);
    // 0x80280104: b           L_802801E0
    // 0x80280108: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x80280108: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
L_8028010C:
    // 0x8028010C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80280110: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80280114: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80280118: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x8028011C: nop

    // 0x80280120: bc1f        L_80280148
    if (!c1cs) {
        // 0x80280124: nop
    
            goto L_80280148;
    }
    // 0x80280124: nop

    // 0x80280128: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028012C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80280130: nop

    // 0x80280134: bc1f        L_80280148
    if (!c1cs) {
        // 0x80280138: nop
    
            goto L_80280148;
    }
    // 0x80280138: nop

    // 0x8028013C: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
    // 0x80280140: b           L_802801E0
    // 0x80280144: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x80280144: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
L_80280148:
    // 0x80280148: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8028014C: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80280150: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80280154: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x80280158: nop

    // 0x8028015C: bc1f        L_80280184
    if (!c1cs) {
        // 0x80280160: nop
    
            goto L_80280184;
    }
    // 0x80280160: nop

    // 0x80280164: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80280168: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8028016C: nop

    // 0x80280170: bc1f        L_80280184
    if (!c1cs) {
        // 0x80280174: nop
    
            goto L_80280184;
    }
    // 0x80280174: nop

    // 0x80280178: addiu       $v0, $zero, 0xA9
    ctx->r2 = ADD32(0, 0XA9);
    // 0x8028017C: b           L_802801E0
    // 0x80280180: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x80280180: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
L_80280184:
    // 0x80280184: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80280188: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8028018C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80280190: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x80280194: nop

    // 0x80280198: bc1f        L_802801C0
    if (!c1cs) {
        // 0x8028019C: nop
    
            goto L_802801C0;
    }
    // 0x8028019C: nop

    // 0x802801A0: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802801A4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802801A8: nop

    // 0x802801AC: bc1f        L_802801C0
    if (!c1cs) {
        // 0x802801B0: nop
    
            goto L_802801C0;
    }
    // 0x802801B0: nop

    // 0x802801B4: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x802801B8: b           L_802801E0
    // 0x802801BC: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
        goto L_802801E0;
    // 0x802801BC: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
L_802801C0:
    // 0x802801C0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802801C4: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802801C8: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x802801CC: nop

    // 0x802801D0: bc1fl       L_802801E4
    if (!c1cs) {
        // 0x802801D4: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_802801E4;
    }
    goto skip_20;
    // 0x802801D4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    skip_20:
    // 0x802801D8: addiu       $v0, $zero, 0xAE
    ctx->r2 = ADD32(0, 0XAE);
    // 0x802801DC: addiu       $v1, $zero, 0xC4
    ctx->r3 = ADD32(0, 0XC4);
L_802801E0:
    // 0x802801E0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_802801E4:
    // 0x802801E4: jr          $ra
    // 0x802801E8: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    return;
    // 0x802801E8: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
;}
RECOMP_FUNC void D_802EBCEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EBD6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EBD70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EBD74: bne         $a0, $zero, L_802EBD8C
    if (ctx->r4 != 0) {
        // 0x802EBD78: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802EBD8C;
    }
    // 0x802EBD78: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802EBD7C: jal         0x802C67EC
    // 0x802EBD80: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EBD80: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x802EBD84: beq         $v0, $zero, L_802EBDF0
    if (ctx->r2 == 0) {
        // 0x802EBD88: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802EBDF0;
    }
    // 0x802EBD88: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802EBD8C:
    // 0x802EBD8C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802EBD90: jal         0x8031A55C
    // 0x802EBD94: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    static_3_8031A55C(rdram, ctx);
        goto after_1;
    // 0x802EBD94: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x802EBD98: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802EBD9C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802EBDA0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802EBDA4: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802EBDA8: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x802EBDAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EBDB0: sh          $t7, 0xBC($a1)
    MEM_H(0XBC, ctx->r5) = ctx->r15;
    // 0x802EBDB4: sw          $t6, 0xB0($a1)
    MEM_W(0XB0, ctx->r5) = ctx->r14;
    // 0x802EBDB8: swc1        $f0, 0xC0($a1)
    MEM_W(0XC0, ctx->r5) = ctx->f0.u32l;
    // 0x802EBDBC: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EBDC0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802EBDC4: sb          $t8, 0xEA($a1)
    MEM_B(0XEA, ctx->r5) = ctx->r24;
    // 0x802EBDC8: sh          $zero, 0xEE($a1)
    MEM_H(0XEE, ctx->r5) = 0;
    // 0x802EBDCC: sb          $zero, 0xEC($a1)
    MEM_B(0XEC, ctx->r5) = 0;
    // 0x802EBDD0: sh          $zero, 0xE8($a1)
    MEM_H(0XE8, ctx->r5) = 0;
    // 0x802EBDD4: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x802EBDD8: swc1        $f0, 0xDC($a1)
    MEM_W(0XDC, ctx->r5) = ctx->f0.u32l;
    // 0x802EBDDC: swc1        $f0, 0xD8($a1)
    MEM_W(0XD8, ctx->r5) = ctx->f0.u32l;
    // 0x802EBDE0: swc1        $f0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->f0.u32l;
    // 0x802EBDE4: jal         0x8022970C
    // 0x802EBDE8: swc1        $f4, 0xC8($a1)
    MEM_W(0XC8, ctx->r5) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x802EBDE8: swc1        $f4, 0xC8($a1)
    MEM_W(0XC8, ctx->r5) = ctx->f4.u32l;
    after_2:
    // 0x802EBDEC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802EBDF0:
    // 0x802EBDF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802EBDF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EBDF8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802EBDFC: jr          $ra
    // 0x802EBE00: nop

    return;
    // 0x802EBE00: nop

;}
RECOMP_FUNC void D_80228708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228708: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022870C: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x80228710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228718: blez        $v1, L_802287A0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022871C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802287A0;
    }
    // 0x8022871C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80228720: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80228724: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80228728: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
L_8022872C:
    // 0x8022872C: addu        $v0, $t6, $a1
    ctx->r2 = ADD32(ctx->r14, ctx->r5);
    // 0x80228730: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x80228734: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80228738: bnel        $t7, $zero, L_80228794
    if (ctx->r15 != 0) {
        // 0x8022873C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80228794;
    }
    goto skip_0;
    // 0x8022873C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80228740: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80228744: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80228748: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022874C: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    // 0x80228750: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80228754: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80228758: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8022875C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x80228760: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x80228764: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x80228768: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x8022876C: jal         0x80228894
    // 0x80228770: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    static_3_80228894(rdram, ctx);
        goto after_0;
    // 0x80228770: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80228774: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80228778: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022877C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80228780: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80228784: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80228788: b           L_802287B8
    // 0x8022878C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
        goto L_802287B8;
    // 0x8022878C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80228790: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80228794:
    // 0x80228794: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80228798: bnel        $at, $zero, L_8022872C
    if (ctx->r1 != 0) {
        // 0x8022879C: sll         $t6, $a0, 5
        ctx->r14 = S32(ctx->r4 << 5);
            goto L_8022872C;
    }
    goto skip_1;
    // 0x8022879C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    skip_1:
L_802287A0:
    // 0x802287A0: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802287A4: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802287A8: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802287AC: jal         0x80231C58
    // 0x802287B0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_1;
    // 0x802287B0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_1:
    // 0x802287B4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_802287B8:
    // 0x802287B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802287BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802287C0: jr          $ra
    // 0x802287C4: nop

    return;
    // 0x802287C4: nop

;}
RECOMP_FUNC void D_802D3DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3E64: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D3E68: jr          $ra
    // 0x802D3E6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802D3E6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_8022CFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CFF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022CFF4: jr          $ra
    // 0x8022CFF8: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
    return;
    // 0x8022CFF8: sw          $a0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void D_802D122C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D12AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D12B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D12B4: jr          $ra
    // 0x802D12B8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D12B8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
