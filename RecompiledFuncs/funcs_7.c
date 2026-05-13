#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_8023F7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F7D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023F7D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F7D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023F7DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8023F7E0: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023F7E4: beql        $t6, $zero, L_8023F850
    if (ctx->r14 == 0) {
        // 0x8023F7E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023F850;
    }
    goto skip_0;
    // 0x8023F7E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F7EC: jal         0x80237840
    // 0x8023F7F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80237840(rdram, ctx);
        goto after_0;
    // 0x8023F7F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023F7F4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F7F8: beq         $v0, $zero, L_8023F84C
    if (ctx->r2 == 0) {
        // 0x8023F7FC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023F84C;
    }
    // 0x8023F7FC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F800: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023F804: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8023F808: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x8023F80C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8023F810: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8023F814: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8023F818: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F81C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8023F820: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023F824: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8023F828: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023F82C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x8023F830: lh          $t4, 0x1A($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X1A);
    // 0x8023F834: sh          $t4, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r12;
    // 0x8023F838: lw          $t5, 0x8($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X8);
    // 0x8023F83C: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    // 0x8023F840: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F844: jalr        $t9
    // 0x8023F848: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023F848: nop

    after_1:
L_8023F84C:
    // 0x8023F84C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F850:
    // 0x8023F850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023F854: jr          $ra
    // 0x8023F858: nop

    return;
    // 0x8023F858: nop

;}
RECOMP_FUNC void D_802EF5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EF62C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EF630: beq         $a0, $zero, L_802EF660
    if (ctx->r4 == 0) {
        // 0x802EF634: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802EF660;
    }
    // 0x802EF634: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EF638: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EF63C: jal         0x8031F6B0
    // 0x802EF640: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031F6B0(rdram, ctx);
        goto after_0;
    // 0x802EF640: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802EF644: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802EF648: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802EF64C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802EF650: beql        $t7, $zero, L_802EF664
    if (ctx->r15 == 0) {
        // 0x802EF654: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802EF664;
    }
    goto skip_0;
    // 0x802EF654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802EF658: jal         0x802C681C
    // 0x802EF65C: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802EF65C: nop

    after_1:
L_802EF660:
    // 0x802EF660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802EF664:
    // 0x802EF664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802EF668: jr          $ra
    // 0x802EF66C: nop

    return;
    // 0x802EF66C: nop

;}
RECOMP_FUNC void D_80231218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231218: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x8023121C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80231220: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80231224: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80231228: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8023122C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80231230: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80231234: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80231238: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8023123C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80231240: jal         0x8022331C
    // 0x80231244: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    static_3_8022331C(rdram, ctx);
        goto after_0;
    // 0x80231244: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x80231248: jal         0x802233EC
    // 0x8023124C: addiu       $a0, $zero, 0xFFF
    ctx->r4 = ADD32(0, 0XFFF);
    static_3_802233EC(rdram, ctx);
        goto after_1;
    // 0x8023124C: addiu       $a0, $zero, 0xFFF
    ctx->r4 = ADD32(0, 0XFFF);
    after_1:
    // 0x80231250: jal         0x8022342C
    // 0x80231254: lui         $a0, 0xB0
    ctx->r4 = S32(0XB0 << 16);
    static_3_8022342C(rdram, ctx);
        goto after_2;
    // 0x80231254: lui         $a0, 0xB0
    ctx->r4 = S32(0XB0 << 16);
    after_2:
    // 0x80231258: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8023125C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80231260: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80231264: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
    // 0x80231268: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8023126C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80231270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80231274: lui         $a2, 0x43A0
    ctx->r6 = S32(0X43A0 << 16);
    // 0x80231278: jal         0x8022A848
    // 0x8023127C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    static_3_8022A848(rdram, ctx);
        goto after_3;
    // 0x8023127C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80231280: jal         0x80221B2C
    // 0x80231284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80221B2C(rdram, ctx);
        goto after_4;
    // 0x80231284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80231288: jal         0x8022970C
    // 0x8023128C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022970C(rdram, ctx);
        goto after_5;
    // 0x8023128C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80231290: jal         0x8022149C
    // 0x80231294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8022149C(rdram, ctx);
        goto after_6;
    // 0x80231294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80231298: jal         0x8021F4E4
    // 0x8023129C: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_7;
    // 0x8023129C: nop

    after_7:
    // 0x802312A0: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x802312A4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802312A8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802312AC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802312B0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x802312B4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x802312B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802312BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802312C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802312C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802312C8: jal         0x8021F35C
    // 0x802312CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_8;
    // 0x802312CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_8:
    // 0x802312D0: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x802312D4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802312D8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802312DC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802312E0: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x802312E4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x802312E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802312EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802312F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802312F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802312F8: jal         0x8021F35C
    // 0x802312FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_9;
    // 0x802312FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_9:
    // 0x80231300: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x80231304: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80231308: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8023130C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80231310: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x80231314: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x80231318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023131C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80231320: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231324: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80231328: jal         0x8021F35C
    // 0x8023132C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_10;
    // 0x8023132C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_10:
    // 0x80231330: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80231334: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80231338: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8023133C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80231340: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80231344: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x80231348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8023134C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80231350: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231354: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80231358: jal         0x8021F35C
    // 0x8023135C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    static_3_8021F35C(rdram, ctx);
        goto after_11;
    // 0x8023135C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_11:
    // 0x80231360: jal         0x8021FCD0
    // 0x80231364: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_12;
    // 0x80231364: nop

    after_12:
    // 0x80231368: sh          $zero, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = 0;
L_8023136C:
    // 0x8023136C: lh          $t4, 0xBA($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XBA);
    // 0x80231370: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80231374: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x80231378: addiu       $t5, $zero, 0x1F
    ctx->r13 = ADD32(0, 0X1F);
    // 0x8023137C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80231380: subu        $s5, $t5, $t4
    ctx->r21 = SUB32(ctx->r13, ctx->r12);
    // 0x80231384: sllv        $t7, $t6, $s5
    ctx->r15 = S32(ctx->r14 << (ctx->r21 & 31));
    // 0x80231388: and         $t9, $t7, $t8
    ctx->r25 = ctx->r15 & ctx->r24;
    // 0x8023138C: beq         $t9, $zero, L_802313A4
    if (ctx->r25 == 0) {
        // 0x80231390: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_802313A4;
    }
    // 0x80231390: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80231394: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x80231398: addiu       $s7, $zero, 0xFF
    ctx->r23 = ADD32(0, 0XFF);
    // 0x8023139C: b           L_802313AC
    // 0x802313A0: addiu       $fp, $zero, 0xFF
    ctx->r30 = ADD32(0, 0XFF);
        goto L_802313AC;
    // 0x802313A0: addiu       $fp, $zero, 0xFF
    ctx->r30 = ADD32(0, 0XFF);
L_802313A4:
    // 0x802313A4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x802313A8: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_802313AC:
    // 0x802313AC: jal         0x8021F4E4
    // 0x802313B0: nop

    static_3_8021F4E4(rdram, ctx);
        goto after_13;
    // 0x802313B0: nop

    after_13:
    // 0x802313B4: lh          $t0, 0xBA($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XBA);
    // 0x802313B8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802313BC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802313C0: bgez        $t0, L_802313D4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802313C4: andi        $t1, $t0, 0x3
        ctx->r9 = ctx->r8 & 0X3;
            goto L_802313D4;
    }
    // 0x802313C4: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x802313C8: beq         $t1, $zero, L_802313D4
    if (ctx->r9 == 0) {
        // 0x802313CC: nop
    
            goto L_802313D4;
    }
    // 0x802313CC: nop

    // 0x802313D0: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
L_802313D4:
    // 0x802313D4: multu       $t1, $v0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802313D8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802313DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802313E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802313E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802313E8: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x802313EC: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x802313F0: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    // 0x802313F4: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    // 0x802313F8: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x802313FC: mflo        $s3
    ctx->r19 = lo;
    // 0x80231400: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    // 0x80231404: sll         $t2, $s3, 16
    ctx->r10 = S32(ctx->r19 << 16);
    // 0x80231408: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8023140C: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
    // 0x80231410: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80231414: bgez        $s5, L_80231424
    if (SIGNED(ctx->r21) >= 0) {
        // 0x80231418: sra         $t5, $s5, 2
        ctx->r13 = S32(SIGNED(ctx->r21) >> 2);
            goto L_80231424;
    }
    // 0x80231418: sra         $t5, $s5, 2
    ctx->r13 = S32(SIGNED(ctx->r21) >> 2);
    // 0x8023141C: addiu       $at, $s5, 0x3
    ctx->r1 = ADD32(ctx->r21, 0X3);
    // 0x80231420: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_80231424:
    // 0x80231424: multu       $t5, $v0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231428: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x8023142C: mflo        $s4
    ctx->r20 = lo;
    // 0x80231430: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x80231434: sll         $t4, $s4, 16
    ctx->r12 = S32(ctx->r20 << 16);
    // 0x80231438: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8023143C: jal         0x8021F35C
    // 0x80231440: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    static_3_8021F35C(rdram, ctx);
        goto after_14;
    // 0x80231440: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    after_14:
    // 0x80231444: addiu       $s6, $s3, 0xA
    ctx->r22 = ADD32(ctx->r19, 0XA);
    // 0x80231448: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8023144C: lh          $s7, 0xBA($sp)
    ctx->r23 = MEM_H(ctx->r29, 0XBA);
    // 0x80231450: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80231454: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80231458: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8023145C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80231460: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80231464: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231468: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8023146C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80231470: jal         0x8021F35C
    // 0x80231474: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    static_3_8021F35C(rdram, ctx);
        goto after_15;
    // 0x80231474: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_15:
    // 0x80231478: addiu       $s5, $s4, 0xA
    ctx->r21 = ADD32(ctx->r20, 0XA);
    // 0x8023147C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80231480: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80231484: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80231488: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8023148C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80231490: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80231494: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80231498: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8023149C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802314A0: jal         0x8021F35C
    // 0x802314A4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    static_3_8021F35C(rdram, ctx);
        goto after_16;
    // 0x802314A4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_16:
    // 0x802314A8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x802314AC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x802314B0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802314B4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802314B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802314BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802314C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802314C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802314C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802314CC: jal         0x8021F35C
    // 0x802314D0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    static_3_8021F35C(rdram, ctx);
        goto after_17;
    // 0x802314D0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_17:
    // 0x802314D4: jal         0x8021FCD0
    // 0x802314D8: nop

    static_3_8021FCD0(rdram, ctx);
        goto after_18;
    // 0x802314D8: nop

    after_18:
    // 0x802314DC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x802314E0: sll         $t1, $s7, 16
    ctx->r9 = S32(ctx->r23 << 16);
    // 0x802314E4: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802314E8: slti        $at, $t2, 0x20
    ctx->r1 = SIGNED(ctx->r10) < 0X20 ? 1 : 0;
    // 0x802314EC: bne         $at, $zero, L_8023136C
    if (ctx->r1 != 0) {
        // 0x802314F0: sh          $t2, 0xBA($sp)
        MEM_H(0XBA, ctx->r29) = ctx->r10;
            goto L_8023136C;
    }
    // 0x802314F0: sh          $t2, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r10;
    // 0x802314F4: jal         0x802230E4
    // 0x802314F8: nop

    static_3_802230E4(rdram, ctx);
        goto after_19;
    // 0x802314F8: nop

    after_19:
    // 0x802314FC: jal         0x8022337C
    // 0x80231500: nop

    static_3_8022337C(rdram, ctx);
        goto after_20;
    // 0x80231500: nop

    after_20:
    // 0x80231504: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80231508: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8023150C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80231510: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80231514: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80231518: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8023151C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80231520: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80231524: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80231528: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8023152C: jr          $ra
    // 0x80231530: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80231530: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void D_80227174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227174: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80227178: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8022717C: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x80227180: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80227184: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80227188: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8022718C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80227190: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80227194: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80227198: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022719C: jal         0x80225424
    // 0x802271A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x802271A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x802271A4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x802271A8: jal         0x8022B948
    // 0x802271AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_1;
    // 0x802271AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x802271B0: lhu         $a0, 0x30($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X30);
    // 0x802271B4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x802271B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802271BC: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x802271C0: jal         0x8022B948
    // 0x802271C4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_2;
    // 0x802271C4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_2:
    // 0x802271C8: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x802271CC: lhu         $a0, 0x30($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X30);
    // 0x802271D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802271D4: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x802271D8: jal         0x8022B948
    // 0x802271DC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022B948(rdram, ctx);
        goto after_3;
    // 0x802271DC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x802271E0: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x802271E4: lhu         $t8, 0x30($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X30);
    // 0x802271E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802271EC: blezl       $t8, L_8022723C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x802271F0: lhu         $t3, 0x30($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X30);
            goto L_8022723C;
    }
    goto skip_0;
    // 0x802271F0: lhu         $t3, 0x30($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X30);
    skip_0:
L_802271F4:
    // 0x802271F4: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x802271F8: sll         $s1, $s0, 1
    ctx->r17 = S32(ctx->r16 << 1);
    // 0x802271FC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227200: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80227204: jal         0x80225424
    // 0x80227208: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    func_80225424(rdram, ctx);
        goto after_4;
    // 0x80227208: addu        $a0, $t9, $s1
    ctx->r4 = ADD32(ctx->r25, ctx->r17);
    after_4:
    // 0x8022720C: lw          $t0, 0x8($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X8);
    // 0x80227210: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80227214: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80227218: jal         0x80225424
    // 0x8022721C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    func_80225424(rdram, ctx);
        goto after_5;
    // 0x8022721C: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    after_5:
    // 0x80227220: lhu         $t2, 0x30($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X30);
    // 0x80227224: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80227228: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x8022722C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80227230: bne         $at, $zero, L_802271F4
    if (ctx->r1 != 0) {
        // 0x80227234: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_802271F4;
    }
    // 0x80227234: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80227238: lhu         $t3, 0x30($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X30);
L_8022723C:
    // 0x8022723C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80227240: sh          $t3, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r11;
    // 0x80227244: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80227248: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8022724C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80227250: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80227254: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80227258: jr          $ra
    // 0x8022725C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8022725C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void D_8023CCF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CCF0: sh          $a1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r5;
    // 0x8023CCF4: jr          $ra
    // 0x8023CCF8: sh          $a2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r6;
    return;
    // 0x8023CCF8: sh          $a2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void D_802D99B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D9A38: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802D9A3C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802D9A40: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x802D9A44: beq         $t6, $zero, L_802D9A54
    if (ctx->r14 == 0) {
        // 0x802D9A48: andi        $t7, $v0, 0x40
        ctx->r15 = ctx->r2 & 0X40;
            goto L_802D9A54;
    }
    // 0x802D9A48: andi        $t7, $v0, 0x40
    ctx->r15 = ctx->r2 & 0X40;
    // 0x802D9A4C: jr          $ra
    // 0x802D9A50: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x802D9A50: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_802D9A54:
    // 0x802D9A54: beq         $t7, $zero, L_802D9A64
    if (ctx->r15 == 0) {
        // 0x802D9A58: andi        $t8, $v0, 0x20
        ctx->r24 = ctx->r2 & 0X20;
            goto L_802D9A64;
    }
    // 0x802D9A58: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x802D9A5C: jr          $ra
    // 0x802D9A60: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x802D9A60: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_802D9A64:
    // 0x802D9A64: beq         $t8, $zero, L_802D9A74
    if (ctx->r24 == 0) {
        // 0x802D9A68: andi        $t9, $v0, 0x200
        ctx->r25 = ctx->r2 & 0X200;
            goto L_802D9A74;
    }
    // 0x802D9A68: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    // 0x802D9A6C: jr          $ra
    // 0x802D9A70: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x802D9A70: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802D9A74:
    // 0x802D9A74: beq         $t9, $zero, L_802D9A84
    if (ctx->r25 == 0) {
        // 0x802D9A78: andi        $t0, $v0, 0x10
        ctx->r8 = ctx->r2 & 0X10;
            goto L_802D9A84;
    }
    // 0x802D9A78: andi        $t0, $v0, 0x10
    ctx->r8 = ctx->r2 & 0X10;
    // 0x802D9A7C: jr          $ra
    // 0x802D9A80: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    return;
    // 0x802D9A80: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802D9A84:
    // 0x802D9A84: beq         $t0, $zero, L_802D9A94
    if (ctx->r8 == 0) {
        // 0x802D9A88: andi        $t1, $v0, 0x100
        ctx->r9 = ctx->r2 & 0X100;
            goto L_802D9A94;
    }
    // 0x802D9A88: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
    // 0x802D9A8C: jr          $ra
    // 0x802D9A90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x802D9A90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802D9A94:
    // 0x802D9A94: beq         $t1, $zero, L_802D9AA4
    if (ctx->r9 == 0) {
        // 0x802D9A98: andi        $t2, $v0, 0x8
        ctx->r10 = ctx->r2 & 0X8;
            goto L_802D9AA4;
    }
    // 0x802D9A98: andi        $t2, $v0, 0x8
    ctx->r10 = ctx->r2 & 0X8;
    // 0x802D9A9C: jr          $ra
    // 0x802D9AA0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x802D9AA0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802D9AA4:
    // 0x802D9AA4: beq         $t2, $zero, L_802D9AB4
    if (ctx->r10 == 0) {
        // 0x802D9AA8: andi        $t3, $v0, 0x4
        ctx->r11 = ctx->r2 & 0X4;
            goto L_802D9AB4;
    }
    // 0x802D9AA8: andi        $t3, $v0, 0x4
    ctx->r11 = ctx->r2 & 0X4;
    // 0x802D9AAC: jr          $ra
    // 0x802D9AB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x802D9AB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802D9AB4:
    // 0x802D9AB4: beq         $t3, $zero, L_802D9AC4
    if (ctx->r11 == 0) {
        // 0x802D9AB8: andi        $t4, $v0, 0x80
        ctx->r12 = ctx->r2 & 0X80;
            goto L_802D9AC4;
    }
    // 0x802D9AB8: andi        $t4, $v0, 0x80
    ctx->r12 = ctx->r2 & 0X80;
    // 0x802D9ABC: jr          $ra
    // 0x802D9AC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x802D9AC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802D9AC4:
    // 0x802D9AC4: beq         $t4, $zero, L_802D9AD4
    if (ctx->r12 == 0) {
        // 0x802D9AC8: andi        $t5, $v0, 0x2
        ctx->r13 = ctx->r2 & 0X2;
            goto L_802D9AD4;
    }
    // 0x802D9AC8: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x802D9ACC: jr          $ra
    // 0x802D9AD0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    return;
    // 0x802D9AD0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_802D9AD4:
    // 0x802D9AD4: beq         $t5, $zero, L_802D9AE4
    if (ctx->r13 == 0) {
        // 0x802D9AD8: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_802D9AE4;
    }
    // 0x802D9AD8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x802D9ADC: jr          $ra
    // 0x802D9AE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x802D9AE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802D9AE4:
    // 0x802D9AE4: beq         $t6, $zero, L_802D9AF4
    if (ctx->r14 == 0) {
        // 0x802D9AE8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802D9AF4;
    }
    // 0x802D9AE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802D9AEC: jr          $ra
    // 0x802D9AF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802D9AF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D9AF4:
    // 0x802D9AF4: jr          $ra
    // 0x802D9AF8: nop

    return;
    // 0x802D9AF8: nop

;}
RECOMP_FUNC void D_8023F450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F450: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F454: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023F458: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023F45C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023F460: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8023F464: jal         0x8023FC40
    // 0x8023F468: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    static_3_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023F468: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8023F46C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8023F470: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8023F474: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8023F478: lw          $s0, 0x8($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X8);
    // 0x8023F47C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8023F480: beql        $s0, $zero, L_8023F4B8
    if (ctx->r16 == 0) {
        // 0x8023F484: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_8023F4B8;
    }
    goto skip_0;
    // 0x8023F484: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    skip_0:
    // 0x8023F488: jal         0x80237120
    // 0x8023F48C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80237120(rdram, ctx);
        goto after_1;
    // 0x8023F48C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8023F490: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x8023F494: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8023F498: jal         0x80249170
    // 0x8023F49C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    static_3_80249170(rdram, ctx);
        goto after_2;
    // 0x8023F49C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8023F4A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023F4A4: jal         0x80237150
    // 0x8023F4A8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    static_3_80237150(rdram, ctx);
        goto after_3;
    // 0x8023F4A8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x8023F4AC: b           L_8023F4BC
    // 0x8023F4B0: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
        goto L_8023F4BC;
    // 0x8023F4B0: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x8023F4B4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_8023F4B8:
    // 0x8023F4B8: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
L_8023F4BC:
    // 0x8023F4BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8023F4C0: jal         0x8023FC40
    // 0x8023F4C4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    static_3_8023FC40(rdram, ctx);
        goto after_4;
    // 0x8023F4C4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_4:
    // 0x8023F4C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F4CC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8023F4D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023F4D4: jr          $ra
    // 0x8023F4D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8023F4D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_80211D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80211D54: addiu       $sp, $sp, -0x188
    ctx->r29 = ADD32(ctx->r29, -0X188);
    // 0x80211D58: sw          $a1, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r5;
    // 0x80211D5C: lwc1        $f8, 0x18C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x80211D60: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    // 0x80211D64: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80211D68: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x80211D6C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80211D70: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x80211D74: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80211D78: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x80211D7C: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x80211D80: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x80211D84: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x80211D88: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x80211D8C: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x80211D90: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x80211D94: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80211D98: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x80211D9C: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x80211DA0: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x80211DA4: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x80211DA8: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x80211DAC: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x80211DB0: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x80211DB4: sw          $a0, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r4;
    // 0x80211DB8: sw          $a2, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r6;
    // 0x80211DBC: sw          $a3, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r7;
    // 0x80211DC0: bc1f        L_80211E0C
    if (!c1cs) {
        // 0x80211DC4: sw          $zero, 0x0($s2)
        MEM_W(0X0, ctx->r18) = 0;
            goto L_80211E0C;
    }
    // 0x80211DC4: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x80211DC8: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80211DCC: lwc1        $f6, 0x19C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x80211DD0: lwc1        $f8, 0x194($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X194);
    // 0x80211DD4: lwc1        $f10, 0x1A0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x80211DD8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80211DDC: nop

    // 0x80211DE0: bc1f        L_80211E0C
    if (!c1cs) {
        // 0x80211DE4: nop
    
            goto L_80211E0C;
    }
    // 0x80211DE4: nop

    // 0x80211DE8: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80211DEC: lw          $t2, 0x1A4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1A4);
    // 0x80211DF0: bc1f        L_80211E0C
    if (!c1cs) {
        // 0x80211DF4: nop
    
            goto L_80211E0C;
    }
    // 0x80211DF4: nop

    // 0x80211DF8: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x80211DFC: lw          $t0, 0x1A8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1A8);
    // 0x80211E00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80211E04: b           L_8021295C
    // 0x80211E08: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
        goto L_8021295C;
    // 0x80211E08: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
L_80211E0C:
    // 0x80211E0C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80211E10: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x80211E14: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x80211E18: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80211E1C: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x80211E20: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80211E24: addu        $t4, $t6, $t5
    ctx->r12 = ADD32(ctx->r14, ctx->r13);
    // 0x80211E28: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x80211E2C: bne         $v0, $zero, L_80211E3C
    if (ctx->r2 != 0) {
        // 0x80211E30: sw          $v0, 0x184($sp)
        MEM_W(0X184, ctx->r29) = ctx->r2;
            goto L_80211E3C;
    }
    // 0x80211E30: sw          $v0, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r2;
    // 0x80211E34: jal         0x80231A24
    // 0x80211E38: sw          $v0, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r2;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80211E38: sw          $v0, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r2;
    after_0:
L_80211E3C:
    // 0x80211E3C: lw          $v0, 0x184($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X184);
    // 0x80211E40: lwc1        $f10, 0x1A0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x80211E44: lwc1        $f6, 0x194($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X194);
    // 0x80211E48: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80211E4C: lwc1        $f22, 0x1C($v0)
    ctx->f22.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80211E50: sub.s       $f20, $f10, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80211E54: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    // 0x80211E58: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80211E5C: lwc1        $f12, 0x198($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X198);
    // 0x80211E60: lwc1        $f14, 0x19C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x80211E64: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80211E68: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80211E6C: lwc1        $f28, 0x18C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x80211E70: lwc1        $f30, 0x190($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80211E74: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80211E78: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80211E7C: addiu       $a0, $sp, 0x18C
    ctx->r4 = ADD32(ctx->r29, 0X18C);
    // 0x80211E80: addiu       $a1, $sp, 0x190
    ctx->r5 = ADD32(ctx->r29, 0X190);
    // 0x80211E84: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80211E88: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80211E8C: addiu       $a2, $sp, 0x198
    ctx->r6 = ADD32(ctx->r29, 0X198);
    // 0x80211E90: addiu       $a3, $sp, 0x19C
    ctx->r7 = ADD32(ctx->r29, 0X19C);
    // 0x80211E94: swc1        $f12, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f12.u32l;
    // 0x80211E98: swc1        $f14, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f14.u32l;
    // 0x80211E9C: sub.s       $f24, $f12, $f28
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f24.fl = ctx->f12.fl - ctx->f28.fl;
    // 0x80211EA0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x80211EA4: jal         0x80218600
    // 0x80211EA8: sub.s       $f26, $f14, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f26.fl = ctx->f14.fl - ctx->f30.fl;
    static_3_80218600(rdram, ctx);
        goto after_1;
    // 0x80211EA8: sub.s       $f26, $f14, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f26.fl = ctx->f14.fl - ctx->f30.fl;
    after_1:
    // 0x80211EAC: lw          $a0, 0x184($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X184);
    // 0x80211EB0: lwc1        $f4, 0x18C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x80211EB4: lwc1        $f12, 0xF8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80211EB8: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80211EBC: lwc1        $f14, 0xF4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x80211EC0: lwc1        $f16, 0x128($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80211EC4: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x80211EC8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80211ECC: bc1fl       L_80211EEC
    if (!c1cs) {
        // 0x80211ED0: lwc1        $f6, 0x198($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
            goto L_80211EEC;
    }
    goto skip_0;
    // 0x80211ED0: lwc1        $f6, 0x198($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
    skip_0:
    // 0x80211ED4: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80211ED8: mul.s       $f8, $f2, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80211EDC: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80211EE0: swc1        $f10, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f10.u32l;
    // 0x80211EE4: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80211EE8: lwc1        $f6, 0x198($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
L_80211EEC:
    // 0x80211EEC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80211EF0: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80211EF4: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80211EF8: nop

    // 0x80211EFC: bc1fl       L_80211F14
    if (!c1cs) {
        // 0x80211F00: lwc1        $f0, 0x10($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
            goto L_80211F14;
    }
    goto skip_1;
    // 0x80211F00: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    skip_1:
    // 0x80211F04: mul.s       $f4, $f2, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80211F08: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80211F0C: swc1        $f8, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f8.u32l;
    // 0x80211F10: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
L_80211F14:
    // 0x80211F14: lwc1        $f10, 0x190($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80211F18: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x80211F1C: nop

    // 0x80211F20: bc1fl       L_80211F3C
    if (!c1cs) {
        // 0x80211F24: lwc1        $f8, 0x19C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X19C);
            goto L_80211F3C;
    }
    goto skip_2;
    // 0x80211F24: lwc1        $f8, 0x19C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X19C);
    skip_2:
    // 0x80211F28: mul.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x80211F2C: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80211F30: swc1        $f4, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f4.u32l;
    // 0x80211F34: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80211F38: lwc1        $f8, 0x19C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X19C);
L_80211F3C:
    // 0x80211F3C: addiu       $t1, $sp, 0x170
    ctx->r9 = ADD32(ctx->r29, 0X170);
    // 0x80211F40: addiu       $t8, $sp, 0x16C
    ctx->r24 = ADD32(ctx->r29, 0X16C);
    // 0x80211F44: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x80211F48: addiu       $t2, $sp, 0x168
    ctx->r10 = ADD32(ctx->r29, 0X168);
    // 0x80211F4C: addiu       $t0, $sp, 0x15A
    ctx->r8 = ADD32(ctx->r29, 0X15A);
    // 0x80211F50: addiu       $t3, $sp, 0x156
    ctx->r11 = ADD32(ctx->r29, 0X156);
    // 0x80211F54: bc1fl       L_80211F6C
    if (!c1cs) {
        // 0x80211F58: lwc1        $f0, 0x18C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X18C);
            goto L_80211F6C;
    }
    goto skip_3;
    // 0x80211F58: lwc1        $f0, 0x18C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18C);
    skip_3:
    // 0x80211F5C: mul.s       $f10, $f2, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x80211F60: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80211F64: swc1        $f6, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f6.u32l;
    // 0x80211F68: lwc1        $f0, 0x18C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18C);
L_80211F6C:
    // 0x80211F6C: swc1        $f22, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f22.u32l;
    // 0x80211F70: lwc1        $f10, 0x190($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80211F74: c.eq.s      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl == ctx->f0.fl;
    // 0x80211F78: nop

    // 0x80211F7C: bc1tl       L_80211FBC
    if (c1cs) {
        // 0x80211F80: c.eq.s      $f30, $f10
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl == ctx->f10.fl;
            goto L_80211FBC;
    }
    goto skip_4;
    // 0x80211F80: c.eq.s      $f30, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl == ctx->f10.fl;
    skip_4:
    // 0x80211F84: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80211F88: nop

    // 0x80211F8C: c.eq.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl == ctx->f22.fl;
    // 0x80211F90: nop

    // 0x80211F94: bc1tl       L_80211FBC
    if (c1cs) {
        // 0x80211F98: c.eq.s      $f30, $f10
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl == ctx->f10.fl;
            goto L_80211FBC;
    }
    goto skip_5;
    // 0x80211F98: c.eq.s      $f30, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl == ctx->f10.fl;
    skip_5:
    // 0x80211F9C: sub.s       $f8, $f0, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f28.fl;
    // 0x80211FA0: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x80211FA4: div.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f24.fl);
    // 0x80211FA8: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80211FAC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80211FB0: b           L_80211FF0
    // 0x80211FB4: swc1        $f8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f8.u32l;
        goto L_80211FF0;
    // 0x80211FB4: swc1        $f8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f8.u32l;
    // 0x80211FB8: c.eq.s      $f30, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f30.fl == ctx->f10.fl;
L_80211FBC:
    // 0x80211FBC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80211FC0: bc1tl       L_80211FF4
    if (c1cs) {
        // 0x80211FC4: lwc1        $f8, 0x198($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
            goto L_80211FF4;
    }
    goto skip_6;
    // 0x80211FC4: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    skip_6:
    // 0x80211FC8: c.eq.s      $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f26.fl == ctx->f22.fl;
    // 0x80211FCC: nop

    // 0x80211FD0: bc1tl       L_80211FF4
    if (c1cs) {
        // 0x80211FD4: lwc1        $f8, 0x198($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
            goto L_80211FF4;
    }
    goto skip_7;
    // 0x80211FD4: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    skip_7:
    // 0x80211FD8: sub.s       $f6, $f10, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f30.fl;
    // 0x80211FDC: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x80211FE0: div.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f26.fl);
    // 0x80211FE4: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80211FE8: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80211FEC: swc1        $f6, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f6.u32l;
L_80211FF0:
    // 0x80211FF0: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
L_80211FF4:
    // 0x80211FF4: lwc1        $f6, 0x19C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x80211FF8: c.eq.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl == ctx->f8.fl;
    // 0x80211FFC: nop

    // 0x80212000: bc1tl       L_80212038
    if (c1cs) {
        // 0x80212004: c.eq.s      $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
            goto L_80212038;
    }
    goto skip_8;
    // 0x80212004: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
    skip_8:
    // 0x80212008: c.eq.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl == ctx->f22.fl;
    // 0x8021200C: nop

    // 0x80212010: bc1tl       L_80212038
    if (c1cs) {
        // 0x80212014: c.eq.s      $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
            goto L_80212038;
    }
    goto skip_9;
    // 0x80212014: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
    skip_9:
    // 0x80212018: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8021201C: lwc1        $f4, 0x1A0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x80212020: div.s       $f6, $f10, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f24.fl);
    // 0x80212024: mul.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x80212028: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8021202C: b           L_8021206C
    // 0x80212030: swc1        $f10, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f10.u32l;
        goto L_8021206C;
    // 0x80212030: swc1        $f10, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f10.u32l;
    // 0x80212034: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
L_80212038:
    // 0x80212038: nop

    // 0x8021203C: bc1tl       L_80212070
    if (c1cs) {
        // 0x80212040: lwc1        $f10, 0x198($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
            goto L_80212070;
    }
    goto skip_10;
    // 0x80212040: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    skip_10:
    // 0x80212044: c.eq.s      $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f26.fl == ctx->f22.fl;
    // 0x80212048: nop

    // 0x8021204C: bc1tl       L_80212070
    if (c1cs) {
        // 0x80212050: lwc1        $f10, 0x198($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
            goto L_80212070;
    }
    goto skip_11;
    // 0x80212050: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    skip_11:
    // 0x80212054: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x80212058: lwc1        $f4, 0x1A0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x8021205C: div.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f26.fl);
    // 0x80212060: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80212064: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80212068: swc1        $f8, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f8.u32l;
L_8021206C:
    // 0x8021206C: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
L_80212070:
    // 0x80212070: lwc1        $f4, 0x19C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x80212074: lwc1        $f6, 0x190($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80212078: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x8021207C: lw          $a2, 0x190($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X190);
    // 0x80212080: lw          $a3, 0x194($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X194);
    // 0x80212084: bc1fl       L_802120D8
    if (!c1cs) {
        // 0x80212088: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802120D8;
    }
    goto skip_12;
    // 0x80212088: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_12:
    // 0x8021208C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80212090: lwc1        $f4, 0x194($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X194);
    // 0x80212094: lwc1        $f10, 0x1A0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x80212098: c.eq.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl == ctx->f22.fl;
    // 0x8021209C: nop

    // 0x802120A0: bc1fl       L_802120D8
    if (!c1cs) {
        // 0x802120A4: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802120D8;
    }
    goto skip_13;
    // 0x802120A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_13:
    // 0x802120A8: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802120AC: lw          $t7, 0x1A4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A4);
    // 0x802120B0: c.eq.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl == ctx->f22.fl;
    // 0x802120B4: nop

    // 0x802120B8: bc1fl       L_802120D8
    if (!c1cs) {
        // 0x802120BC: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_802120D8;
    }
    goto skip_14;
    // 0x802120BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_14:
    // 0x802120C0: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x802120C4: lw          $t9, 0x1A8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1A8);
    // 0x802120C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802120CC: b           L_8021295C
    // 0x802120D0: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
        goto L_8021295C;
    // 0x802120D0: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x802120D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_802120D8:
    // 0x802120D8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802120DC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802120E0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802120E4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802120E8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802120EC: jal         0x802160EC
    // 0x802120F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    static_3_802160EC(rdram, ctx);
        goto after_2;
    // 0x802120F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_2:
    // 0x802120F4: addiu       $t6, $sp, 0x164
    ctx->r14 = ADD32(ctx->r29, 0X164);
    // 0x802120F8: addiu       $t5, $sp, 0x160
    ctx->r13 = ADD32(ctx->r29, 0X160);
    // 0x802120FC: addiu       $t4, $sp, 0x15C
    ctx->r12 = ADD32(ctx->r29, 0X15C);
    // 0x80212100: addiu       $t7, $sp, 0x158
    ctx->r15 = ADD32(ctx->r29, 0X158);
    // 0x80212104: addiu       $t9, $sp, 0x154
    ctx->r25 = ADD32(ctx->r29, 0X154);
    // 0x80212108: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x8021210C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80212110: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80212114: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80212118: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8021211C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212120: lw          $a0, 0x184($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X184);
    // 0x80212124: lw          $a1, 0x198($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X198);
    // 0x80212128: lw          $a2, 0x19C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X19C);
    // 0x8021212C: lw          $a3, 0x1A0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1A0);
    // 0x80212130: jal         0x802160EC
    // 0x80212134: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    static_3_802160EC(rdram, ctx);
        goto after_3;
    // 0x80212134: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x80212138: bne         $s0, $zero, L_8021215C
    if (ctx->r16 != 0) {
        // 0x8021213C: andi        $t1, $v0, 0xFF
        ctx->r9 = ctx->r2 & 0XFF;
            goto L_8021215C;
    }
    // 0x8021213C: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x80212140: bne         $t1, $zero, L_8021215C
    if (ctx->r9 != 0) {
        // 0x80212144: lw          $t8, 0x1A4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1A4);
            goto L_8021215C;
    }
    // 0x80212144: lw          $t8, 0x1A4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A4);
    // 0x80212148: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8021214C: lw          $t2, 0x1A8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1A8);
    // 0x80212150: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80212154: b           L_8021295C
    // 0x80212158: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
        goto L_8021295C;
    // 0x80212158: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
L_8021215C:
    // 0x8021215C: lhu         $t0, 0x158($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X158);
    // 0x80212160: lhu         $t3, 0x15A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X15A);
    // 0x80212164: bnel        $t0, $t3, L_80212198
    if (ctx->r8 != ctx->r11) {
        // 0x80212168: sb          $zero, 0xBB($sp)
        MEM_B(0XBB, ctx->r29) = 0;
            goto L_80212198;
    }
    goto skip_15;
    // 0x80212168: sb          $zero, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = 0;
    skip_15:
    // 0x8021216C: lhu         $t5, 0x154($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X154);
    // 0x80212170: lhu         $t4, 0x156($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X156);
    // 0x80212174: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80212178: sb          $t6, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r14;
    // 0x8021217C: bne         $t5, $t4, L_8021218C
    if (ctx->r13 != ctx->r12) {
        // 0x80212180: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8021218C;
    }
    // 0x80212180: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80212184: b           L_8021219C
    // 0x80212188: sb          $t7, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r15;
        goto L_8021219C;
    // 0x80212188: sb          $t7, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r15;
L_8021218C:
    // 0x8021218C: b           L_8021219C
    // 0x80212190: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
        goto L_8021219C;
    // 0x80212190: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
    // 0x80212194: sb          $zero, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = 0;
L_80212198:
    // 0x80212198: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
L_8021219C:
    // 0x8021219C: lbu         $t9, 0xBB($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XBB);
    // 0x802121A0: lwc1        $f0, 0x18C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x802121A4: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    // 0x802121A8: beq         $t9, $zero, L_80212200
    if (ctx->r25 == 0) {
        // 0x802121AC: lwc1        $f10, 0x19C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X19C);
            goto L_80212200;
    }
    // 0x802121AC: lwc1        $f10, 0x19C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x802121B0: lw          $t1, 0x184($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X184);
    // 0x802121B4: lwc1        $f8, 0x18C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x802121B8: lwc1        $f6, 0x12C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x802121BC: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x802121C0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802121C4: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802121C8: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
    // 0x802121CC: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x802121D0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802121D4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802121D8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x802121DC: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x802121E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802121E4: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802121E8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802121EC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x802121F0: nop

    // 0x802121F4: sw          $t0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r8;
    // 0x802121F8: b           L_802122EC
    // 0x802121FC: sw          $t0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r8;
        goto L_802122EC;
    // 0x802121FC: sw          $t0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r8;
L_80212200:
    // 0x80212200: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80212204: lwc1        $f18, 0x198($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X198);
    // 0x80212208: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
    // 0x8021220C: lwc1        $f14, 0x19C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x80212210: bc1f        L_80212224
    if (!c1cs) {
        // 0x80212214: lw          $t3, 0x184($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X184);
            goto L_80212224;
    }
    // 0x80212214: lw          $t3, 0x184($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X184);
    // 0x80212218: mov.s       $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = ctx->f8.fl;
    // 0x8021221C: b           L_80212228
    // 0x80212220: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_80212228;
    // 0x80212220: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_80212224:
    // 0x80212224: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_80212228:
    // 0x80212228: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8021222C: lwc1        $f12, 0x190($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X190);
    // 0x80212230: bc1f        L_80212244
    if (!c1cs) {
        // 0x80212234: nop
    
            goto L_80212244;
    }
    // 0x80212234: nop

    // 0x80212238: mov.s       $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = ctx->f10.fl;
    // 0x8021223C: b           L_80212244
    // 0x80212240: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
        goto L_80212244;
    // 0x80212240: mov.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = ctx->f4.fl;
L_80212244:
    // 0x80212244: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80212248: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8021224C: lwc1        $f2, 0x4($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80212250: sub.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x80212254: lwc1        $f20, 0x128($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80212258: lw          $t1, 0x184($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X184);
    // 0x8021225C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80212260: sub.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x80212264: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80212268: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021226C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x80212270: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80212274: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80212278: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8021227C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80212280: sub.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x80212284: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80212288: div.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8021228C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80212290: nop

    // 0x80212294: sw          $t7, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r15;
    // 0x80212298: lw          $t2, 0x144($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X144);
    // 0x8021229C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802122A0: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x802122A4: bgez        $v1, L_802122B0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802122A8: sw          $t8, 0x140($sp)
        MEM_W(0X140, ctx->r29) = ctx->r24;
            goto L_802122B0;
    }
    // 0x802122A8: sw          $t8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r24;
    // 0x802122AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802122B0:
    // 0x802122B0: lbu         $a0, 0x18($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X18);
    // 0x802122B4: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802122B8: bne         $at, $zero, L_802122C4
    if (ctx->r1 != 0) {
        // 0x802122BC: nop
    
            goto L_802122C4;
    }
    // 0x802122BC: nop

    // 0x802122C0: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
L_802122C4:
    // 0x802122C4: bgezl       $t2, L_802122D4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802122C8: lw          $t0, 0x184($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X184);
            goto L_802122D4;
    }
    goto skip_16;
    // 0x802122C8: lw          $t0, 0x184($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X184);
    skip_16:
    // 0x802122CC: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x802122D0: lw          $t0, 0x184($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X184);
L_802122D4:
    // 0x802122D4: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x802122D8: lbu         $a0, 0x19($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X19);
    // 0x802122DC: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802122E0: bne         $at, $zero, L_802122EC
    if (ctx->r1 != 0) {
        // 0x802122E4: addiu       $t5, $a0, -0x1
        ctx->r13 = ADD32(ctx->r4, -0X1);
            goto L_802122EC;
    }
    // 0x802122E4: addiu       $t5, $a0, -0x1
    ctx->r13 = ADD32(ctx->r4, -0X1);
    // 0x802122E8: sw          $t5, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r13;
L_802122EC:
    // 0x802122EC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802122F0: bne         $at, $zero, L_80212938
    if (ctx->r1 != 0) {
        // 0x802122F4: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80212938;
    }
    // 0x802122F4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x802122F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802122FC: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x80212300: lui         $fp, 0x0
    ctx->r30 = S32(0X0 << 16);
    // 0x80212304: lui         $s7, 0x0
    ctx->r23 = S32(0X0 << 16);
    // 0x80212308: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021230C: addiu       $s7, $s7, 0x0
    ctx->r23 = ADD32(ctx->r23, 0X0);
    // 0x80212310: addiu       $fp, $fp, 0x0
    ctx->r30 = ADD32(ctx->r30, 0X0);
    // 0x80212314: sw          $t3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r11;
    // 0x80212318: addiu       $s6, $sp, 0x124
    ctx->r22 = ADD32(ctx->r29, 0X124);
    // 0x8021231C: lw          $v0, 0x144($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X144);
L_80212320:
    // 0x80212320: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x80212324: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80212328: bne         $at, $zero, L_80212928
    if (ctx->r1 != 0) {
        // 0x8021232C: addiu       $t9, $t7, 0x1
        ctx->r25 = ADD32(ctx->r15, 0X1);
            goto L_80212928;
    }
    // 0x8021232C: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80212330: sw          $t9, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r25;
    // 0x80212334: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x80212338: lw          $v1, 0x184($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X184);
L_8021233C:
    // 0x8021233C: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x80212340: lbu         $t8, 0x18($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X18);
    // 0x80212344: lw          $t0, 0x28($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X28);
    // 0x80212348: multu       $t8, $v0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021234C: mflo        $t1
    ctx->r9 = lo;
    // 0x80212350: addu        $s5, $t1, $t2
    ctx->r21 = ADD32(ctx->r9, ctx->r10);
    // 0x80212354: sll         $t6, $s5, 2
    ctx->r14 = S32(ctx->r21 << 2);
    // 0x80212358: addu        $t6, $t6, $s5
    ctx->r14 = ADD32(ctx->r14, ctx->r21);
    // 0x8021235C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80212360: subu        $t6, $t6, $s5
    ctx->r14 = SUB32(ctx->r14, ctx->r21);
    // 0x80212364: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80212368: addu        $s1, $t0, $t6
    ctx->r17 = ADD32(ctx->r8, ctx->r14);
    // 0x8021236C: beql        $s1, $zero, L_80212918
    if (ctx->r17 == 0) {
        // 0x80212370: lw          $t8, 0xA8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA8);
            goto L_80212918;
    }
    goto skip_17;
    // 0x80212370: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    skip_17:
    // 0x80212374: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x80212378: lw          $s4, 0x40($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X40);
    // 0x8021237C: lwc1        $f10, 0x18C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x80212380: bnel        $s4, $zero, L_80212394
    if (ctx->r20 != 0) {
        // 0x80212384: lwc1        $f4, 0x190($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
            goto L_80212394;
    }
    goto skip_18;
    // 0x80212384: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
    skip_18:
    // 0x80212388: b           L_80212918
    // 0x8021238C: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
        goto L_80212918;
    // 0x8021238C: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x80212390: lwc1        $f4, 0x190($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X190);
L_80212394:
    // 0x80212394: lwc1        $f6, 0x198($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X198);
    // 0x80212398: lwc1        $f8, 0x19C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x8021239C: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x802123A0: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x802123A4: swc1        $f4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f4.u32l;
    // 0x802123A8: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x802123AC: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    // 0x802123B0: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x802123B4: lwc1        $f4, 0x38($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X38);
    // 0x802123B8: lwc1        $f10, 0x194($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X194);
    // 0x802123BC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802123C0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802123C4: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802123C8: lwc1        $f4, 0x1A0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x802123CC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802123D0: lwc1        $f14, 0x9C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802123D4: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x802123D8: lwc1        $f10, 0x38($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X38);
    // 0x802123DC: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802123E0: sub.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x802123E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802123E8: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x802123EC: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x802123F0: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x802123F4: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802123F8: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802123FC: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80212400: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
    // 0x80212404: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80212408: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
    // 0x8021240C: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80212410: lwc1        $f16, 0x34($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X34);
    // 0x80212414: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80212418: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8021241C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80212420: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x80212424: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80212428: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x8021242C: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    // 0x80212430: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80212434: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x80212438: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8021243C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80212440: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80212444: jal         0x802184F0
    // 0x80212448: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    static_3_802184F0(rdram, ctx);
        goto after_4;
    // 0x80212448: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x8021244C: bne         $v0, $zero, L_8021245C
    if (ctx->r2 != 0) {
        // 0x80212450: lbu         $t5, 0xBB($sp)
        ctx->r13 = MEM_BU(ctx->r29, 0XBB);
            goto L_8021245C;
    }
    // 0x80212450: lbu         $t5, 0xBB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBB);
    // 0x80212454: b           L_80212914
    // 0x80212458: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80212914;
    // 0x80212458: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_8021245C:
    // 0x8021245C: bne         $t5, $zero, L_80212634
    if (ctx->r13 != 0) {
        // 0x80212460: addiu       $a0, $sp, 0x110
        ctx->r4 = ADD32(ctx->r29, 0X110);
            goto L_80212634;
    }
    // 0x80212460: addiu       $a0, $sp, 0x110
    ctx->r4 = ADD32(ctx->r29, 0X110);
    // 0x80212464: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x80212468: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x8021246C: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80212470: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80212474: addiu       $t3, $sp, 0x104
    ctx->r11 = ADD32(ctx->r29, 0X104);
    // 0x80212478: addiu       $t4, $sp, 0xEC
    ctx->r12 = ADD32(ctx->r29, 0XEC);
    // 0x8021247C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80212480: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80212484: addiu       $a1, $sp, 0x108
    ctx->r5 = ADD32(ctx->r29, 0X108);
    // 0x80212488: addiu       $a2, $sp, 0xF0
    ctx->r6 = ADD32(ctx->r29, 0XF0);
    // 0x8021248C: addiu       $a3, $sp, 0x10C
    ctx->r7 = ADD32(ctx->r29, 0X10C);
    // 0x80212490: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80212494: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80212498: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8021249C: jal         0x80218884
    // 0x802124A0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    static_3_80218884(rdram, ctx);
        goto after_5;
    // 0x802124A0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x802124A4: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802124A8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802124AC: lwc1        $f2, 0x104($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802124B0: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x802124B4: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x802124B8: lwc1        $f6, 0x11C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x802124BC: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x802124C0: lw          $a0, 0x184($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X184);
    // 0x802124C4: bc1f        L_802124F8
    if (!c1cs) {
        // 0x802124C8: lw          $a3, 0xF0($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XF0);
            goto L_802124F8;
    }
    // 0x802124C8: lw          $a3, 0xF0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF0);
    // 0x802124CC: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x802124D0: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x802124D4: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x802124D8: bc1fl       L_802124FC
    if (!c1cs) {
        // 0x802124DC: c.eq.s      $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
            goto L_802124FC;
    }
    goto skip_19;
    // 0x802124DC: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    skip_19:
    // 0x802124E0: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x802124E4: nop

    // 0x802124E8: bc1fl       L_802124FC
    if (!c1cs) {
        // 0x802124EC: c.eq.s      $f12, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
            goto L_802124FC;
    }
    goto skip_20;
    // 0x802124EC: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    skip_20:
    // 0x802124F0: b           L_80212914
    // 0x802124F4: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80212914;
    // 0x802124F4: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_802124F8:
    // 0x802124F8: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
L_802124FC:
    // 0x802124FC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80212500: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80212504: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80212508: bc1f        L_80212514
    if (!c1cs) {
        // 0x8021250C: addiu       $t8, $sp, 0x170
        ctx->r24 = ADD32(ctx->r29, 0X170);
            goto L_80212514;
    }
    // 0x8021250C: addiu       $t8, $sp, 0x170
    ctx->r24 = ADD32(ctx->r29, 0X170);
    // 0x80212510: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80212514:
    // 0x80212514: c.eq.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl == ctx->f8.fl;
    // 0x80212518: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8021251C: addiu       $t1, $sp, 0x16C
    ctx->r9 = ADD32(ctx->r29, 0X16C);
    // 0x80212520: addiu       $t2, $sp, 0x168
    ctx->r10 = ADD32(ctx->r29, 0X168);
    // 0x80212524: bc1f        L_80212534
    if (!c1cs) {
        // 0x80212528: addiu       $t0, $sp, 0x15A
        ctx->r8 = ADD32(ctx->r29, 0X15A);
            goto L_80212534;
    }
    // 0x80212528: addiu       $t0, $sp, 0x15A
    ctx->r8 = ADD32(ctx->r29, 0X15A);
    // 0x8021252C: ori         $t7, $s0, 0x2
    ctx->r15 = ctx->r16 | 0X2;
    // 0x80212530: andi        $s0, $t7, 0xFFFF
    ctx->r16 = ctx->r15 & 0XFFFF;
L_80212534:
    // 0x80212534: addiu       $t6, $sp, 0x156
    ctx->r14 = ADD32(ctx->r29, 0X156);
    // 0x80212538: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8021253C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80212540: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80212544: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80212548: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8021254C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80212550: jal         0x802160EC
    // 0x80212554: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    static_3_802160EC(rdram, ctx);
        goto after_6;
    // 0x80212554: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_6:
    // 0x80212558: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x8021255C: lwc1        $f10, 0x11C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x80212560: lwc1        $f2, 0x104($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80212564: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80212568: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x8021256C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80212570: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80212574: lw          $a0, 0x184($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X184);
    // 0x80212578: bc1f        L_80212584
    if (!c1cs) {
        // 0x8021257C: lw          $a3, 0xEC($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XEC);
            goto L_80212584;
    }
    // 0x8021257C: lw          $a3, 0xEC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XEC);
    // 0x80212580: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80212584:
    // 0x80212584: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x80212588: addiu       $t4, $sp, 0x164
    ctx->r12 = ADD32(ctx->r29, 0X164);
    // 0x8021258C: addiu       $t7, $sp, 0x160
    ctx->r15 = ADD32(ctx->r29, 0X160);
    // 0x80212590: addiu       $t9, $sp, 0x15C
    ctx->r25 = ADD32(ctx->r29, 0X15C);
    // 0x80212594: bc1f        L_802125A4
    if (!c1cs) {
        // 0x80212598: addiu       $t8, $sp, 0x158
        ctx->r24 = ADD32(ctx->r29, 0X158);
            goto L_802125A4;
    }
    // 0x80212598: addiu       $t8, $sp, 0x158
    ctx->r24 = ADD32(ctx->r29, 0X158);
    // 0x8021259C: ori         $t5, $s0, 0x2
    ctx->r13 = ctx->r16 | 0X2;
    // 0x802125A0: andi        $s0, $t5, 0xFFFF
    ctx->r16 = ctx->r13 & 0XFFFF;
L_802125A4:
    // 0x802125A4: addiu       $t1, $sp, 0x154
    ctx->r9 = ADD32(ctx->r29, 0X154);
    // 0x802125A8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802125AC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802125B0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802125B4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802125B8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802125BC: jal         0x802160EC
    // 0x802125C0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    static_3_802160EC(rdram, ctx);
        goto after_7;
    // 0x802125C0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    after_7:
    // 0x802125C4: lhu         $t2, 0x154($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X154);
    // 0x802125C8: lhu         $t0, 0x156($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X156);
    // 0x802125CC: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802125D0: lwc1        $f2, 0x104($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802125D4: beq         $t2, $t0, L_80212634
    if (ctx->r10 == ctx->r8) {
        // 0x802125D8: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_80212634;
    }
    // 0x802125D8: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802125DC: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x802125E0: lwc1        $f8, 0x16C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x802125E4: lwc1        $f10, 0x164($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X164);
    // 0x802125E8: lwc1        $f4, 0x160($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802125EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x802125F0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x802125F4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x802125F8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x802125FC: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x80212600: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80212604: lwc1        $f8, 0x11C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x80212608: lwc1        $f6, 0x120($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X120);
    // 0x8021260C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80212610: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80212614: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80212618: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8021261C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80212620: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80212624: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80212628: jal         0x80218EAC
    // 0x8021262C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    static_3_80218EAC(rdram, ctx);
        goto after_8;
    // 0x8021262C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80212630: sh          $v0, 0x154($sp)
    MEM_H(0X154, ctx->r29) = ctx->r2;
L_80212634:
    // 0x80212634: lbu         $t6, 0xBA($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBA);
    // 0x80212638: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x8021263C: lwc1        $f2, 0x104($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80212640: bne         $t6, $zero, L_802126A0
    if (ctx->r14 != 0) {
        // 0x80212644: lwc1        $f12, 0x110($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
            goto L_802126A0;
    }
    // 0x80212644: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80212648: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x8021264C: lwc1        $f8, 0x16C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x80212650: lwc1        $f10, 0x164($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X164);
    // 0x80212654: lwc1        $f4, 0x160($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X160);
    // 0x80212658: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8021265C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80212660: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80212664: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80212668: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8021266C: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80212670: lwc1        $f8, 0x11C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x80212674: lwc1        $f6, 0x120($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X120);
    // 0x80212678: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021267C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80212680: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80212684: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80212688: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8021268C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80212690: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80212694: jal         0x80218EAC
    // 0x80212698: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    static_3_80218EAC(rdram, ctx);
        goto after_9;
    // 0x80212698: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x8021269C: sh          $v0, 0x154($sp)
    MEM_H(0X154, ctx->r29) = ctx->r2;
L_802126A0:
    // 0x802126A0: lhu         $t5, 0x154($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X154);
    // 0x802126A4: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x802126A8: bnel        $t5, $zero, L_802126BC
    if (ctx->r13 != 0) {
        // 0x802126AC: lwc1        $f8, 0x2C($s4)
        ctx->f8.u32l = MEM_W(ctx->r20, 0X2C);
            goto L_802126BC;
    }
    goto skip_21;
    // 0x802126AC: lwc1        $f8, 0x2C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X2C);
    skip_21:
    // 0x802126B0: b           L_80212914
    // 0x802126B4: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80212914;
    // 0x802126B4: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
    // 0x802126B8: lwc1        $f8, 0x2C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X2C);
L_802126BC:
    // 0x802126BC: lwc1        $f4, 0x164($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X164);
    // 0x802126C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802126C4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802126C8: swc1        $f10, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f10.u32l;
    // 0x802126CC: lwc1        $f6, 0x2C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x802126D0: lwc1        $f10, 0x16C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x802126D4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802126D8: swc1        $f8, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f8.u32l;
    // 0x802126DC: lwc1        $f4, 0x2C($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x802126E0: lwc1        $f8, 0x160($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X160);
    // 0x802126E4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802126E8: swc1        $f6, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f6.u32l;
    // 0x802126EC: lwc1        $f10, 0x2C($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x802126F0: lwc1        $f6, 0x168($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X168);
    // 0x802126F4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802126F8: swc1        $f4, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f4.u32l;
    // 0x802126FC: lwc1        $f8, 0x2C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80212700: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x80212704: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80212708: swc1        $f10, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f10.u32l;
    // 0x8021270C: lwc1        $f6, 0x2C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x80212710: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80212714: swc1        $f8, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f8.u32l;
    // 0x80212718: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
    // 0x8021271C: blezl       $v0, L_80212914
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80212720: lw          $v0, 0xCC($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XCC);
            goto L_80212914;
    }
    goto skip_22;
    // 0x80212720: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
    skip_22:
    // 0x80212724: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
L_80212728:
    // 0x80212728: lw          $t3, 0x8($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X8);
    // 0x8021272C: lw          $t4, 0xB0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB0);
    // 0x80212730: lhu         $t9, 0x154($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X154);
    // 0x80212734: addu        $s1, $t3, $t4
    ctx->r17 = ADD32(ctx->r11, ctx->r12);
    // 0x80212738: lhu         $t7, 0x16($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X16);
    // 0x8021273C: and         $t8, $t7, $t9
    ctx->r24 = ctx->r15 & ctx->r25;
    // 0x80212740: beql        $t8, $zero, L_802128FC
    if (ctx->r24 == 0) {
        // 0x80212744: lw          $t9, 0xB0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB0);
            goto L_802128FC;
    }
    goto skip_23;
    // 0x80212744: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    skip_23:
    // 0x80212748: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8021274C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80212750: blezl       $v1, L_802128FC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80212754: lw          $t9, 0xB0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB0);
            goto L_802128FC;
    }
    goto skip_24;
    // 0x80212754: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    skip_24:
    // 0x80212758: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
L_8021275C:
    // 0x8021275C: sll         $t2, $s0, 3
    ctx->r10 = S32(ctx->r16 << 3);
    // 0x80212760: lhu         $t6, 0x154($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X154);
    // 0x80212764: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80212768: lhu         $t0, 0x6($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X6);
    // 0x8021276C: lwc1        $f10, 0x160($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X160);
    // 0x80212770: and         $t5, $t0, $t6
    ctx->r13 = ctx->r8 & ctx->r14;
    // 0x80212774: beql        $t5, $zero, L_802128E8
    if (ctx->r13 == 0) {
        // 0x80212778: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802128E8;
    }
    goto skip_25;
    // 0x80212778: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_25:
    // 0x8021277C: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x80212780: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80212784: lwc1        $f12, 0x170($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X170);
    // 0x80212788: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8021278C: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x80212790: lwc1        $f14, 0x16C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x80212794: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    // 0x80212798: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8021279C: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x802127A0: lw          $a3, 0x164($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X164);
    // 0x802127A4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802127A8: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x802127AC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802127B0: lhu         $t9, 0x4($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X4);
    // 0x802127B4: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x802127B8: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x802127BC: jal         0x80215AA8
    // 0x802127C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    static_3_80215AA8(rdram, ctx);
        goto after_10;
    // 0x802127C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_10:
    // 0x802127C4: bne         $v0, $zero, L_802127D4
    if (ctx->r2 != 0) {
        // 0x802127C8: andi        $t6, $s0, 0xFFF
        ctx->r14 = ctx->r16 & 0XFFF;
            goto L_802127D4;
    }
    // 0x802127C8: andi        $t6, $s0, 0xFFF
    ctx->r14 = ctx->r16 & 0XFFF;
    // 0x802127CC: b           L_802128E4
    // 0x802127D0: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
        goto L_802128E4;
    // 0x802127D0: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
L_802127D4:
    // 0x802127D4: c.eq.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl == ctx->f22.fl;
    // 0x802127D8: andi        $t2, $s3, 0x3FF
    ctx->r10 = ctx->r19 & 0X3FF;
    // 0x802127DC: sll         $t0, $t2, 12
    ctx->r8 = S32(ctx->r10 << 12);
    // 0x802127E0: sll         $t1, $s5, 22
    ctx->r9 = S32(ctx->r21 << 22);
    // 0x802127E4: bc1t        L_80212814
    if (c1cs) {
        // 0x802127E8: addu        $v0, $t1, $t0
        ctx->r2 = ADD32(ctx->r9, ctx->r8);
            goto L_80212814;
    }
    // 0x802127E8: addu        $v0, $t1, $t0
    ctx->r2 = ADD32(ctx->r9, ctx->r8);
    // 0x802127EC: lwc1        $f0, 0x10C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x802127F0: lwc1        $f12, 0x110($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X110);
    // 0x802127F4: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    // 0x802127F8: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x802127FC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80212800: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x80212804: sub.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f28.fl;
    // 0x80212808: div.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f24.fl);
    // 0x8021280C: b           L_80212844
    // 0x80212810: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
        goto L_80212844;
    // 0x80212810: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
L_80212814:
    // 0x80212814: c.eq.s      $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f26.fl == ctx->f22.fl;
    // 0x80212818: lwc1        $f2, 0x104($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X104);
    // 0x8021281C: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80212820: bc1tl       L_80212848
    if (c1cs) {
        // 0x80212824: lwc1        $f6, 0x124($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
            goto L_80212848;
    }
    goto skip_26;
    // 0x80212824: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    skip_26:
    // 0x80212828: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021282C: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x80212830: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80212834: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x80212838: sub.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f30.fl;
    // 0x8021283C: div.s       $f4, $f10, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f26.fl);
    // 0x80212840: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
L_80212844:
    // 0x80212844: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
L_80212848:
    // 0x80212848: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    // 0x8021284C: addu        $t5, $v0, $t6
    ctx->r13 = ADD32(ctx->r2, ctx->r14);
    // 0x80212850: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x80212854: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80212858: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8021285C: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x80212860: bc1fl       L_80212874
    if (!c1cs) {
        // 0x80212864: c.lt.s      $f20, $f8
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
            goto L_80212874;
    }
    goto skip_27;
    // 0x80212864: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    skip_27:
    // 0x80212868: b           L_80212884
    // 0x8021286C: swc1        $f22, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f22.u32l;
        goto L_80212884;
    // 0x8021286C: swc1        $f22, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f22.u32l;
    // 0x80212870: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
L_80212874:
    // 0x80212874: nop

    // 0x80212878: bc1fl       L_80212888
    if (!c1cs) {
        // 0x8021287C: lw          $t4, 0x0($s2)
        ctx->r12 = MEM_W(ctx->r18, 0X0);
            goto L_80212888;
    }
    goto skip_28;
    // 0x8021287C: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    skip_28:
    // 0x80212880: swc1        $f20, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f20.u32l;
L_80212884:
    // 0x80212884: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
L_80212888:
    // 0x80212888: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x8021288C: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x80212890: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80212894: addu        $t9, $t3, $t7
    ctx->r25 = ADD32(ctx->r11, ctx->r15);
    // 0x80212898: sw          $t5, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r13;
    // 0x8021289C: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x802128A0: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x802128A4: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x802128A8: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x802128AC: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x802128B0: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x802128B4: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x802128B8: lhu         $t3, 0x18($s7)
    ctx->r11 = MEM_HU(ctx->r23, 0X18);
    // 0x802128BC: addiu       $a0, $t6, 0x1
    ctx->r4 = ADD32(ctx->r14, 0X1);
    // 0x802128C0: slt         $at, $a0, $t3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802128C4: bne         $at, $zero, L_802128E0
    if (ctx->r1 != 0) {
        // 0x802128C8: sw          $a0, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r4;
            goto L_802128E0;
    }
    // 0x802128C8: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x802128CC: jal         0x80231C58
    // 0x802128D0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    static_3_80231C58(rdram, ctx);
        goto after_11;
    // 0x802128D0: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    after_11:
    // 0x802128D4: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x802128D8: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x802128DC: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
L_802128E0:
    // 0x802128E0: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
L_802128E4:
    // 0x802128E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802128E8:
    // 0x802128E8: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802128EC: bnel        $at, $zero, L_8021275C
    if (ctx->r1 != 0) {
        // 0x802128F0: lw          $t1, 0x10($s1)
        ctx->r9 = MEM_W(ctx->r17, 0X10);
            goto L_8021275C;
    }
    goto skip_29;
    // 0x802128F0: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    skip_29:
    // 0x802128F4: lhu         $v0, 0xC($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XC);
    // 0x802128F8: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
L_802128FC:
    // 0x802128FC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80212900: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80212904: addiu       $t2, $t9, 0x2C
    ctx->r10 = ADD32(ctx->r25, 0X2C);
    // 0x80212908: bne         $at, $zero, L_80212728
    if (ctx->r1 != 0) {
        // 0x8021290C: sw          $t2, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->r10;
            goto L_80212728;
    }
    // 0x8021290C: sw          $t2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r10;
    // 0x80212910: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80212914:
    // 0x80212914: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
L_80212918:
    // 0x80212918: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8021291C: bnel        $t8, $v0, L_8021233C
    if (ctx->r24 != ctx->r2) {
        // 0x80212920: lw          $v1, 0x184($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X184);
            goto L_8021233C;
    }
    goto skip_30;
    // 0x80212920: lw          $v1, 0x184($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X184);
    skip_30:
    // 0x80212924: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
L_80212928:
    // 0x80212928: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x8021292C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80212930: bnel        $t1, $a0, L_80212320
    if (ctx->r9 != ctx->r4) {
        // 0x80212934: lw          $v0, 0x144($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X144);
            goto L_80212320;
    }
    goto skip_31;
    // 0x80212934: lw          $v0, 0x144($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X144);
    skip_31:
L_80212938:
    // 0x80212938: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8021293C: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x80212940: lw          $t6, 0x1A4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A4);
    // 0x80212944: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x80212948: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
    // 0x8021294C: lw          $t3, 0x1A8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1A8);
    // 0x80212950: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x80212954: sw          $t4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r12;
    // 0x80212958: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_8021295C:
    // 0x8021295C: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x80212960: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x80212964: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x80212968: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x8021296C: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x80212970: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x80212974: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x80212978: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x8021297C: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80212980: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80212984: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80212988: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x8021298C: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x80212990: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x80212994: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x80212998: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x8021299C: jr          $ra
    // 0x802129A0: addiu       $sp, $sp, 0x188
    ctx->r29 = ADD32(ctx->r29, 0X188);
    return;
    // 0x802129A0: addiu       $sp, $sp, 0x188
    ctx->r29 = ADD32(ctx->r29, 0X188);
;}
RECOMP_FUNC void D_802810E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028115C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281160: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281164: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80281168: addiu       $a0, $zero, 0x2710
    ctx->r4 = ADD32(0, 0X2710);
    // 0x8028116C: jal         0x80305E90
    // 0x80281170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_0;
    // 0x80281170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281174: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80281178: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x8028117C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80281180: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x80281184: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80281188: addiu       $a0, $v1, 0x8F4
    ctx->r4 = ADD32(ctx->r3, 0X8F4);
    // 0x8028118C: jal         0x80302238
    // 0x80281190: addiu       $a1, $v1, 0x8E0
    ctx->r5 = ADD32(ctx->r3, 0X8E0);
    static_3_80302238(rdram, ctx);
        goto after_1;
    // 0x80281190: addiu       $a1, $v1, 0x8E0
    ctx->r5 = ADD32(ctx->r3, 0X8E0);
    after_1:
    // 0x80281194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028119C: jr          $ra
    // 0x802811A0: nop

    return;
    // 0x802811A0: nop

;}
RECOMP_FUNC void D_8023494C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023494C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80234950: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80234954: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80234958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023495C: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80234960: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80234964: jal         0x8023F1D0
    // 0x80234968: ori         $a2, $zero, 0xD1A4
    ctx->r6 = 0 | 0XD1A4;
    static_3_8023F1D0(rdram, ctx);
        goto after_0;
    // 0x80234968: ori         $a2, $zero, 0xD1A4
    ctx->r6 = 0 | 0XD1A4;
    after_0:
    // 0x8023496C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80234970: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80234974: ori         $at, $zero, 0x9C4E
    ctx->r1 = 0 | 0X9C4E;
    // 0x80234978: multu       $t6, $at
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023497C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80234980: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80234984: sll         $t9, $t9, 6
    ctx->r25 = S32(ctx->r25 << 6);
    // 0x80234988: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8023498C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80234990: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80234994: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80234998: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8023499C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802349A0: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802349A4: mflo        $t7
    ctx->r15 = lo;
    // 0x802349A8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802349AC: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802349B0: subu        $t0, $t7, $t9
    ctx->r8 = SUB32(ctx->r15, ctx->r25);
    // 0x802349B4: bgez        $t0, L_802349CC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802349B8: sw          $t0, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r8;
            goto L_802349CC;
    }
    // 0x802349B8: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x802349BC: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x802349C0: ori         $at, $at, 0xFFAB
    ctx->r1 = ctx->r1 | 0XFFAB;
    // 0x802349C4: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x802349C8: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
L_802349CC:
    // 0x802349CC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802349D0: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x802349D4: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x802349D8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x802349DC: jal         0x8023F1D0
    // 0x802349E0: ori         $a2, $zero, 0xCE26
    ctx->r6 = 0 | 0XCE26;
    static_3_8023F1D0(rdram, ctx);
        goto after_1;
    // 0x802349E0: ori         $a2, $zero, 0xCE26
    ctx->r6 = 0 | 0XCE26;
    after_1:
    // 0x802349E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x802349E8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x802349EC: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x802349F0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x802349F4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x802349F8: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x802349FC: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x80234A00: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80234A04: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80234A08: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80234A0C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80234A10: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80234A14: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80234A18: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80234A1C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80234A20: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80234A24: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80234A28: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80234A2C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80234A30: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80234A34: subu        $t6, $t3, $t5
    ctx->r14 = SUB32(ctx->r11, ctx->r13);
    // 0x80234A38: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x80234A3C: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x80234A40: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x80234A44: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80234A48: bgez        $t6, L_80234A60
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80234A4C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80234A60;
    }
    // 0x80234A4C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80234A50: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80234A54: ori         $at, $at, 0xFF07
    ctx->r1 = ctx->r1 | 0XFF07;
    // 0x80234A58: addu        $v0, $t6, $at
    ctx->r2 = ADD32(ctx->r14, ctx->r1);
    // 0x80234A5C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80234A60:
    // 0x80234A60: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80234A64: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80234A68: ori         $at, $at, 0xFFAA
    ctx->r1 = ctx->r1 | 0XFFAA;
    // 0x80234A6C: subu        $v1, $t7, $v0
    ctx->r3 = SUB32(ctx->r15, ctx->r2);
    // 0x80234A70: bgtzl       $v1, L_80234A80
    if (SIGNED(ctx->r3) > 0) {
        // 0x80234A74: addiu       $t9, $v1, -0x1
        ctx->r25 = ADD32(ctx->r3, -0X1);
            goto L_80234A80;
    }
    goto skip_0;
    // 0x80234A74: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
    skip_0:
    // 0x80234A78: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x80234A7C: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
L_80234A80:
    // 0x80234A80: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80234A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234A88: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80234A8C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80234A90: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80234A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80234A98: jr          $ra
    // 0x80234A9C: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    return;
    // 0x80234A9C: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
;}
RECOMP_FUNC void D_802EC964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EC9E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802EC9E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802EC9EC: beq         $a0, $zero, L_802ECA1C
    if (ctx->r4 == 0) {
        // 0x802EC9F0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ECA1C;
    }
    // 0x802EC9F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802EC9F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802EC9F8: jal         0x8031C514
    // 0x802EC9FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802EC9FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ECA00: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ECA04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ECA08: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ECA0C: beql        $t7, $zero, L_802ECA20
    if (ctx->r15 == 0) {
        // 0x802ECA10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ECA20;
    }
    goto skip_0;
    // 0x802ECA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ECA14: jal         0x802C681C
    // 0x802ECA18: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ECA18: nop

    after_1:
L_802ECA1C:
    // 0x802ECA1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ECA20:
    // 0x802ECA20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ECA24: jr          $ra
    // 0x802ECA28: nop

    return;
    // 0x802ECA28: nop

;}
RECOMP_FUNC void D_8029CCB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029CD38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029CD3C: beq         $a0, $zero, L_8029CD58
    if (ctx->r4 == 0) {
        // 0x8029CD40: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8029CD58;
    }
    // 0x8029CD40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029CD44: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x8029CD48: beql        $t6, $zero, L_8029CD5C
    if (ctx->r14 == 0) {
        // 0x8029CD4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029CD5C;
    }
    goto skip_0;
    // 0x8029CD4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8029CD50: jal         0x802C681C
    // 0x8029CD54: nop

    static_3_802C681C(rdram, ctx);
        goto after_0;
    // 0x8029CD54: nop

    after_0:
L_8029CD58:
    // 0x8029CD58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029CD5C:
    // 0x8029CD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8029CD60: jr          $ra
    // 0x8029CD64: nop

    return;
    // 0x8029CD64: nop

;}
RECOMP_FUNC void D_802E2128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E21A8: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x802E21AC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802E21B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802E21B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802E21B8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802E21BC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802E21C0: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x802E21C4: addiu       $t6, $sp, 0xE0
    ctx->r14 = ADD32(ctx->r29, 0XE0);
    // 0x802E21C8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x802E21CC: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x802E21D0: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x802E21D4: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x802E21D8: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802E21DC: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x802E21E0: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x802E21E4: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x802E21E8: lw          $t0, 0x14($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X14);
    // 0x802E21EC: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802E21F0: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x802E21F4: sw          $t0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r8;
    // 0x802E21F8: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x802E21FC: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x802E2200: addiu       $t1, $sp, 0xC8
    ctx->r9 = ADD32(ctx->r29, 0XC8);
    // 0x802E2204: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x802E2208: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x802E220C: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x802E2210: lw          $t5, 0xC($t2)
    ctx->r13 = MEM_W(ctx->r10, 0XC);
    // 0x802E2214: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802E2218: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x802E221C: sw          $t5, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r13;
    // 0x802E2220: lw          $t5, 0x14($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X14);
    // 0x802E2224: lw          $at, 0x10($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X10);
    // 0x802E2228: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802E222C: sw          $t5, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r13;
    // 0x802E2230: sw          $at, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r1;
    // 0x802E2234: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x802E2238: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x802E223C: addiu       $t9, $sp, 0xB0
    ctx->r25 = ADD32(ctx->r29, 0XB0);
    // 0x802E2240: sw          $t0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r8;
    // 0x802E2244: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x802E2248: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x802E224C: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x802E2250: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802E2254: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x802E2258: sw          $t0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r8;
    // 0x802E225C: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x802E2260: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x802E2264: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x802E2268: sw          $t0, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r8;
    // 0x802E226C: sw          $at, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r1;
    // 0x802E2270: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x802E2274: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x802E2278: addiu       $t4, $sp, 0x98
    ctx->r12 = ADD32(ctx->r29, 0X98);
    // 0x802E227C: sw          $t5, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r13;
    // 0x802E2280: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x802E2284: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x802E2288: lw          $t5, 0xC($t3)
    ctx->r13 = MEM_W(ctx->r11, 0XC);
    // 0x802E228C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802E2290: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x802E2294: sw          $t5, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r13;
    // 0x802E2298: lw          $t5, 0x14($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X14);
    // 0x802E229C: lw          $at, 0x10($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X10);
    // 0x802E22A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E22A4: sw          $t5, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->r13;
    // 0x802E22A8: sw          $at, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r1;
    // 0x802E22AC: jal         0x802AEE54
    // 0x802E22B0: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    static_3_802AEE54(rdram, ctx);
        goto after_0;
    // 0x802E22B0: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x802E22B4: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x802E22B8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E22BC: jal         0x802AEDEC
    // 0x802E22C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_1;
    // 0x802E22C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802E22C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802E22C8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x802E22CC: jal         0x802BCF2C
    // 0x802E22D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    static_3_802BCF2C(rdram, ctx);
        goto after_2;
    // 0x802E22D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_2:
    // 0x802E22D4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802E22D8: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x802E22DC: ori         $at, $at, 0x7FE7
    ctx->r1 = ctx->r1 | 0X7FE7;
    // 0x802E22E0: lw          $t7, 0x78($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X78);
    // 0x802E22E4: and         $t6, $t7, $at
    ctx->r14 = ctx->r15 & ctx->r1;
    // 0x802E22E8: jal         0x802BCF20
    // 0x802E22EC: sw          $t6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r14;
    static_3_802BCF20(rdram, ctx);
        goto after_3;
    // 0x802E22EC: sw          $t6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r14;
    after_3:
    // 0x802E22F0: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x802E22F4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x802E22F8: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x802E22FC: lh          $t9, 0x60($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X60);
    // 0x802E2300: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    // 0x802E2304: lw          $t9, 0x64($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X64);
    // 0x802E2308: jalr        $t9
    // 0x802E230C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802E230C: nop

    after_4:
    // 0x802E2310: jal         0x803182BC
    // 0x802E2314: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    static_3_803182BC(rdram, ctx);
        goto after_5;
    // 0x802E2314: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    after_5:
    // 0x802E2318: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E231C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E2320: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E2324: lwc1        $f16, 0x0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E2328: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802E232C: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802E2330: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802E2334: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802E2338: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x802E233C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x802E2340: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x802E2344: mul.s       $f12, $f16, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x802E2348: jal         0x80300424
    // 0x802E234C: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    static_3_80300424(rdram, ctx);
        goto after_6;
    // 0x802E234C: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x802E2350: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E2354: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E2358: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E235C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E2360: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802E2364: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802E2368: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802E236C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E2370: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802E2374: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x802E2378: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E237C: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x802E2380: jal         0x80300424
    // 0x802E2384: add.s       $f12, $f4, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f18.fl;
    static_3_80300424(rdram, ctx);
        goto after_7;
    // 0x802E2384: add.s       $f12, $f4, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f18.fl;
    after_7:
    // 0x802E2388: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x802E238C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802E2390: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802E2394: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802E2398: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x802E239C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802E23A0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802E23A4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802E23A8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802E23AC: add.s       $f2, $f4, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x802E23B0: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x802E23B4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x802E23B8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802E23BC: bc1f        L_802E23CC
    if (!c1cs) {
        // 0x802E23C0: swc1        $f16, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
            goto L_802E23CC;
    }
    // 0x802E23C0: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x802E23C4: b           L_802E23EC
    // 0x802E23C8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_802E23EC;
    // 0x802E23C8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_802E23CC:
    // 0x802E23CC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802E23D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802E23D4: nop

    // 0x802E23D8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802E23DC: nop

    // 0x802E23E0: bc1fl       L_802E23F0
    if (!c1cs) {
        // 0x802E23E4: lh          $t8, 0x3F4($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X3F4);
            goto L_802E23F0;
    }
    goto skip_0;
    // 0x802E23E4: lh          $t8, 0x3F4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X3F4);
    skip_0:
    // 0x802E23E8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_802E23EC:
    // 0x802E23EC: lh          $t8, 0x3F4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X3F4);
L_802E23F0:
    // 0x802E23F0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E23F4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x802E23F8: addu        $a1, $sp, $t0
    ctx->r5 = ADD32(ctx->r29, ctx->r8);
    // 0x802E23FC: lw          $a1, 0xE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XE0);
    // 0x802E2400: jal         0x802AB570
    // 0x802E2404: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    static_3_802AB570(rdram, ctx);
        goto after_8;
    // 0x802E2404: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    after_8:
    // 0x802E2408: sw          $v0, 0x3F0($s0)
    MEM_W(0X3F0, ctx->r16) = ctx->r2;
    // 0x802E240C: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x802E2410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802E2414: lw          $t9, 0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XB4);
    // 0x802E2418: lh          $t2, 0xB0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XB0);
    // 0x802E241C: jalr        $t9
    // 0x802E2420: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802E2420: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    after_9:
    // 0x802E2424: lw          $a0, 0x3F0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3F0);
    // 0x802E2428: jal         0x80318EF4
    // 0x802E242C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_80318EF4(rdram, ctx);
        goto after_10;
    // 0x802E242C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_10:
    // 0x802E2430: lh          $t1, 0x3F4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X3F4);
    // 0x802E2434: lw          $a0, 0x3F0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3F0);
    // 0x802E2438: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x802E243C: addu        $a1, $sp, $t4
    ctx->r5 = ADD32(ctx->r29, ctx->r12);
    // 0x802E2440: jal         0x80318EFC
    // 0x802E2444: lw          $a1, 0xC8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC8);
    static_3_80318EFC(rdram, ctx);
        goto after_11;
    // 0x802E2444: lw          $a1, 0xC8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC8);
    after_11:
    // 0x802E2448: lh          $t3, 0x3F4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X3F4);
    // 0x802E244C: lw          $a0, 0x3F0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3F0);
    // 0x802E2450: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x802E2454: addu        $a1, $sp, $t5
    ctx->r5 = ADD32(ctx->r29, ctx->r13);
    // 0x802E2458: jal         0x80318F04
    // 0x802E245C: lw          $a1, 0xB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XB0);
    static_3_80318F04(rdram, ctx);
        goto after_12;
    // 0x802E245C: lw          $a1, 0xB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XB0);
    after_12:
    // 0x802E2460: lh          $t7, 0x3F4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X3F4);
    // 0x802E2464: lw          $a0, 0x3F0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3F0);
    // 0x802E2468: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x802E246C: addu        $a1, $sp, $t6
    ctx->r5 = ADD32(ctx->r29, ctx->r14);
    // 0x802E2470: jal         0x80318F14
    // 0x802E2474: lw          $a1, 0x98($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X98);
    static_3_80318F14(rdram, ctx);
        goto after_13;
    // 0x802E2474: lw          $a1, 0x98($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X98);
    after_13:
    // 0x802E2478: lw          $a0, 0x3F0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3F0);
    // 0x802E247C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x802E2480: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x802E2484: jal         0x80318E04
    // 0x802E2488: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    static_3_80318E04(rdram, ctx);
        goto after_14;
    // 0x802E2488: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_14:
    // 0x802E248C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802E2490: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802E2494: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802E2498: lw          $a0, 0x3F0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3F0);
    // 0x802E249C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802E24A0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802E24A4: jal         0x80318C9C
    // 0x802E24A8: nop

    static_3_80318C9C(rdram, ctx);
        goto after_15;
    // 0x802E24A8: nop

    after_15:
    // 0x802E24AC: lw          $v1, 0x3F0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3F0);
    // 0x802E24B0: sb          $zero, 0x968($v1)
    MEM_B(0X968, ctx->r3) = 0;
    // 0x802E24B4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E24B8: jal         0x80302980
    // 0x802E24BC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302980(rdram, ctx);
        goto after_16;
    // 0x802E24BC: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_16:
    // 0x802E24C0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E24C4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802E24C8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E24CC: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x802E24D0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802E24D4: jal         0x80302988
    // 0x802E24D8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_17;
    // 0x802E24D8: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_17:
    // 0x802E24DC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E24E0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x802E24E4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x802E24E8: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    // 0x802E24EC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x802E24F0: jal         0x80302988
    // 0x802E24F4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302988(rdram, ctx);
        goto after_18;
    // 0x802E24F4: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_18:
    // 0x802E24F8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802E24FC: jal         0x80302A7C
    // 0x802E2500: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302A7C(rdram, ctx);
        goto after_19;
    // 0x802E2500: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_19:
    // 0x802E2504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802E2508: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802E250C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    // 0x802E2510: jr          $ra
    // 0x802E2514: nop

    return;
    // 0x802E2514: nop

;}
RECOMP_FUNC void D_80298B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80298C0C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80298C10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80298C14: jr          $ra
    // 0x80298C18: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x80298C18: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void func_80230F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230F68: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80230F70: jal         0x802374B0
    // 0x80230F74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_0;
    // 0x80230F74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80230F78: b           L_80230F9C
    // 0x80230F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80230F9C;
    // 0x80230F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230F80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230F84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80230F88: jal         0x802374B0
    // 0x80230F8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    static_3_802374B0(rdram, ctx);
        goto after_1;
    // 0x80230F8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80230F90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80230F94: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80230F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80230F9C:
    // 0x80230F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80230FA0: jr          $ra
    // 0x80230FA4: nop

    return;
    // 0x80230FA4: nop

    // 0x80230FA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230FAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80230FB0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230FB4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80230FB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230FBC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80230FC0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230FC4: jal         0x802371E0
    // 0x80230FC8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    static_3_802371E0(rdram, ctx);
        goto after_2;
    // 0x80230FC8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x80230FCC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x80230FD0: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80230FD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80230FD8: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x80230FDC: beq         $a1, $zero, L_80231000
    if (ctx->r5 == 0) {
        // 0x80230FE0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80231000;
    }
    // 0x80230FE0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230FE4: beq         $a1, $at, L_80231010
    if (ctx->r5 == ctx->r1) {
        // 0x80230FE8: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_80231010;
    }
    // 0x80230FE8: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80230FEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80230FF0: beq         $a1, $at, L_80231024
    if (ctx->r5 == ctx->r1) {
        // 0x80230FF4: addiu       $s0, $zero, 0x1E
        ctx->r16 = ADD32(0, 0X1E);
            goto L_80231024;
    }
    // 0x80230FF4: addiu       $s0, $zero, 0x1E
    ctx->r16 = ADD32(0, 0X1E);
    // 0x80230FF8: b           L_80231038
    // 0x80230FFC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
        goto L_80231038;
    // 0x80230FFC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
L_80231000:
    // 0x80231000: jal         0x80231A24
    // 0x80231004: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80231004: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_3:
    // 0x80231008: b           L_80231044
    // 0x8023100C: nop

        goto L_80231044;
    // 0x8023100C: nop

L_80231010:
    // 0x80231010: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231014: jal         0x80231A24
    // 0x80231018: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x80231018: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
    // 0x8023101C: b           L_80231044
    // 0x80231020: nop

        goto L_80231044;
    // 0x80231020: nop

L_80231024:
    // 0x80231024: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231028: jal         0x80231A24
    // 0x8023102C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x8023102C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_5:
    // 0x80231030: b           L_80231044
    // 0x80231034: nop

        goto L_80231044;
    // 0x80231034: nop

L_80231038:
    // 0x80231038: jal         0x80231A24
    // 0x8023103C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_6;
    // 0x8023103C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_6:
    // 0x80231040: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
L_80231044:
    // 0x80231044: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80231048: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x8023104C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80231050: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80231054: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x80231058: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8023105C: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    // 0x80231060: jal         0x8022C838
    // 0x80231064: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    static_3_8022C838(rdram, ctx);
        goto after_7;
    // 0x80231064: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    after_7:
;}
RECOMP_FUNC void D_802E88E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8964: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E8968: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802E896C: jr          $ra
    // 0x802E8970: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802E8970: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802908B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290934: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80290938: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8029093C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80290940: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80290944: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80290948: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8029094C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80290950: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80290954: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80290958: addiu       $s2, $a0, 0x698
    ctx->r18 = ADD32(ctx->r4, 0X698);
    // 0x8029095C: swc1        $f0, 0x650($a0)
    MEM_W(0X650, ctx->r4) = ctx->f0.u32l;
    // 0x80290960: swc1        $f0, 0x654($a0)
    MEM_W(0X654, ctx->r4) = ctx->f0.u32l;
    // 0x80290964: swc1        $f4, 0x64C($a0)
    MEM_W(0X64C, ctx->r4) = ctx->f4.u32l;
    // 0x80290968: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8029096C: jal         0x8022970C
    // 0x80290970: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x80290970: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80290974: lwc1        $f6, 0x30($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X30);
    // 0x80290978: addiu       $a0, $s0, 0x658
    ctx->r4 = ADD32(ctx->r16, 0X658);
    // 0x8029097C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80290980: swc1        $f6, 0x6C8($s0)
    MEM_W(0X6C8, ctx->r16) = ctx->f6.u32l;
    // 0x80290984: lwc1        $f8, 0x34($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X34);
    // 0x80290988: swc1        $f8, 0x6CC($s0)
    MEM_W(0X6CC, ctx->r16) = ctx->f8.u32l;
    // 0x8029098C: lwc1        $f10, 0x38($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X38);
    // 0x80290990: jal         0x80228DE0
    // 0x80290994: swc1        $f10, 0x6D0($s0)
    MEM_W(0X6D0, ctx->r16) = ctx->f10.u32l;
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80290994: swc1        $f10, 0x6D0($s0)
    MEM_W(0X6D0, ctx->r16) = ctx->f10.u32l;
    after_1:
    // 0x80290998: jal         0x80207130
    // 0x8029099C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_2;
    // 0x8029099C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x802909A0: cvt.s.d     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f16.fl = CVT_S_D(ctx->f0.d);
    // 0x802909A4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x802909A8: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x802909AC: addiu       $t7, $sp, 0x4C
    ctx->r15 = ADD32(ctx->r29, 0X4C);
    // 0x802909B0: swc1        $f16, 0x75C($s0)
    MEM_W(0X75C, ctx->r16) = ctx->f16.u32l;
    // 0x802909B4: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x802909B8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802909BC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802909C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802909C4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802909C8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802909CC: jal         0x802CF1C8
    // 0x802909D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_802CF1C8(rdram, ctx);
        goto after_3;
    // 0x802909D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x802909D4: sb          $zero, 0x438($s0)
    MEM_B(0X438, ctx->r16) = 0;
    // 0x802909D8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x802909DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802909E0: jal         0x802D01D4
    // 0x802909E4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x802909E4: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_4:
    // 0x802909E8: lui         $a1, 0x3F49
    ctx->r5 = S32(0X3F49 << 16);
    // 0x802909EC: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802909F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802909F4: jal         0x802D01D4
    // 0x802909F8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802909F8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_5:
    // 0x802909FC: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x80290A00: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80290A04: lh          $t9, 0x18($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X18);
    // 0x80290A08: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x80290A0C: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x80290A10: jalr        $t9
    // 0x80290A14: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x80290A14: nop

    after_6:
    // 0x80290A18: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80290A1C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80290A20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80290A24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80290A28: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80290A2C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80290A30: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80290A34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80290A38: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x80290A3C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80290A40: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x80290A44: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x80290A48: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80290A4C: swc1        $f18, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f18.u32l;
    // 0x80290A50: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80290A54: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80290A58: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80290A5C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x80290A60: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x80290A64: sh          $v0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r2;
    // 0x80290A68: jal         0x80228DE0
    // 0x80290A6C: sh          $t2, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r10;
    func_80228DE0(rdram, ctx);
        goto after_7;
    // 0x80290A6C: sh          $t2, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r10;
    after_7:
    // 0x80290A70: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80290A74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80290A78: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80290A7C: sb          $t4, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r12;
    // 0x80290A80: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80290A84: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80290A88: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80290A8C: jal         0x802C1278
    // 0x80290A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C1278(rdram, ctx);
        goto after_8;
    // 0x80290A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80290A94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80290A98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80290A9C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80290AA0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80290AA4: jr          $ra
    // 0x80290AA8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80290AA8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80234F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234F20: lw          $a2, 0x44($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X44);
    // 0x80234F24: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80234F28: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80234F2C: blez        $a2, L_80234FB0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80234F30: addiu       $a3, $zero, 0x30
        ctx->r7 = ADD32(0, 0X30);
            goto L_80234FB0;
    }
    // 0x80234F30: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
L_80234F34:
    // 0x80234F34: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234F38: mflo        $t6
    ctx->r14 = lo;
    // 0x80234F3C: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x80234F40: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x80234F44: bne         $t7, $zero, L_80234F98
    if (ctx->r15 != 0) {
        // 0x80234F48: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80234F98;
    }
    // 0x80234F48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80234F4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80234F50: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80234F54: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80234F58: sw          $a1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r5;
    // 0x80234F5C: sh          $t8, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r24;
    // 0x80234F60: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80234F64: sb          $t9, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r25;
    // 0x80234F68: sb          $zero, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = 0;
    // 0x80234F6C: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x80234F70: lbu         $t0, 0xD($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XD);
    // 0x80234F74: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x80234F78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80234F7C: sll         $t1, $t0, 15
    ctx->r9 = S32(ctx->r8 << 15);
    // 0x80234F80: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80234F84: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80234F88: mflo        $t2
    ctx->r10 = lo;
    // 0x80234F8C: sh          $t2, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r10;
    // 0x80234F90: jr          $ra
    // 0x80234F94: nop

    return;
    // 0x80234F94: nop

L_80234F98:
    // 0x80234F98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234F9C: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x80234FA0: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80234FA4: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80234FA8: bne         $at, $zero, L_80234F34
    if (ctx->r1 != 0) {
        // 0x80234FAC: nop
    
            goto L_80234F34;
    }
    // 0x80234FAC: nop

L_80234FB0:
    // 0x80234FB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234FB4: jr          $ra
    // 0x80234FB8: nop

    return;
    // 0x80234FB8: nop

;}
RECOMP_FUNC void D_802ECC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802ECCDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802ECCE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802ECCE4: beq         $a0, $zero, L_802ECD14
    if (ctx->r4 == 0) {
        // 0x802ECCE8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_802ECD14;
    }
    // 0x802ECCE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802ECCEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802ECCF0: jal         0x8031C514
    // 0x802ECCF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_8031C514(rdram, ctx);
        goto after_0;
    // 0x802ECCF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802ECCF8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802ECCFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802ECD00: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802ECD04: beql        $t7, $zero, L_802ECD18
    if (ctx->r15 == 0) {
        // 0x802ECD08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802ECD18;
    }
    goto skip_0;
    // 0x802ECD08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802ECD0C: jal         0x802C681C
    // 0x802ECD10: nop

    static_3_802C681C(rdram, ctx);
        goto after_1;
    // 0x802ECD10: nop

    after_1:
L_802ECD14:
    // 0x802ECD14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ECD18:
    // 0x802ECD18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802ECD1C: jr          $ra
    // 0x802ECD20: nop

    return;
    // 0x802ECD20: nop

;}
RECOMP_FUNC void D_802DA140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DA1C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802DA1C4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x802DA1C8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802DA1CC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802DA1D0: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x802DA1D4: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x802DA1D8: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x802DA1DC: addiu       $t8, $sp, 0x20
    ctx->r24 = ADD32(ctx->r29, 0X20);
    // 0x802DA1E0: lbu         $t4, 0x5($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X5);
    // 0x802DA1E4: swl         $at, 0x0($t8)
    do_swl(rdram, 0X0, ctx->r24, ctx->r1);
    // 0x802DA1E8: swr         $at, 0x3($t8)
    do_swr(rdram, 0X3, ctx->r24, ctx->r1);
    // 0x802DA1EC: lbu         $at, 0x4($t9)
    ctx->r1 = MEM_BU(ctx->r25, 0X4);
    // 0x802DA1F0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802DA1F4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x802DA1F8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x802DA1FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802DA200: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802DA204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802DA208: sb          $t4, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r12;
    // 0x802DA20C: blez        $t6, L_802DA290
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802DA210: sb          $at, 0x4($t8)
        MEM_B(0X4, ctx->r24) = ctx->r1;
            goto L_802DA290;
    }
    // 0x802DA210: sb          $at, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r1;
    // 0x802DA214: andi        $t1, $t6, 0x3
    ctx->r9 = ctx->r14 & 0X3;
    // 0x802DA218: beq         $t1, $zero, L_802DA248
    if (ctx->r9 == 0) {
        // 0x802DA21C: or          $t0, $t1, $zero
        ctx->r8 = ctx->r9 | 0;
            goto L_802DA248;
    }
    // 0x802DA21C: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x802DA220: addiu       $t5, $sp, 0x20
    ctx->r13 = ADD32(ctx->r29, 0X20);
    // 0x802DA224: addu        $a3, $zero, $t5
    ctx->r7 = ADD32(0, ctx->r13);
    // 0x802DA228: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_802DA22C:
    // 0x802DA22C: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x802DA230: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802DA234: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x802DA238: and         $t7, $a0, $t6
    ctx->r15 = ctx->r4 & ctx->r14;
    // 0x802DA23C: bne         $t0, $v0, L_802DA22C
    if (ctx->r8 != ctx->r2) {
        // 0x802DA240: addu        $v1, $v1, $t7
        ctx->r3 = ADD32(ctx->r3, ctx->r15);
            goto L_802DA22C;
    }
    // 0x802DA240: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x802DA244: beq         $v0, $a2, L_802DA290
    if (ctx->r2 == ctx->r6) {
        // 0x802DA248: addiu       $t3, $sp, 0x20
        ctx->r11 = ADD32(ctx->r29, 0X20);
            goto L_802DA290;
    }
L_802DA248:
    // 0x802DA248: addiu       $t3, $sp, 0x20
    ctx->r11 = ADD32(ctx->r29, 0X20);
    // 0x802DA24C: addu        $a3, $v0, $t3
    ctx->r7 = ADD32(ctx->r2, ctx->r11);
    // 0x802DA250: addu        $t0, $a2, $t3
    ctx->r8 = ADD32(ctx->r6, ctx->r11);
    // 0x802DA254: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_802DA258:
    // 0x802DA258: lbu         $t2, 0x0($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X0);
    // 0x802DA25C: lbu         $t9, 0x1($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X1);
    // 0x802DA260: lbu         $t5, 0x2($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X2);
    // 0x802DA264: lbu         $t7, 0x3($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X3);
    // 0x802DA268: and         $t8, $a0, $t2
    ctx->r24 = ctx->r4 & ctx->r10;
    // 0x802DA26C: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x802DA270: and         $t4, $a0, $t9
    ctx->r12 = ctx->r4 & ctx->r25;
    // 0x802DA274: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x802DA278: and         $t6, $a0, $t5
    ctx->r14 = ctx->r4 & ctx->r13;
    // 0x802DA27C: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x802DA280: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x802DA284: and         $t3, $a0, $t7
    ctx->r11 = ctx->r4 & ctx->r15;
    // 0x802DA288: bne         $a3, $t0, L_802DA258
    if (ctx->r7 != ctx->r8) {
        // 0x802DA28C: addu        $v1, $v1, $t3
        ctx->r3 = ADD32(ctx->r3, ctx->r11);
            goto L_802DA258;
    }
    // 0x802DA28C: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
L_802DA290:
    // 0x802DA290: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802DA294: jr          $ra
    // 0x802DA298: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802DA298: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80212DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80212DD4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80212DD8: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80212DDC: lui         $s5, 0x0
    ctx->r21 = S32(0X0 << 16);
    // 0x80212DE0: addiu       $s5, $s5, 0x0
    ctx->r21 = ADD32(ctx->r21, 0X0);
    // 0x80212DE4: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80212DE8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80212DEC: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80212DF0: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80212DF4: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80212DF8: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80212DFC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80212E00: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x80212E04: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x80212E08: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80212E0C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80212E10: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212E14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80212E18: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x80212E1C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80212E20: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80212E24: bne         $s0, $zero, L_80212E40
    if (ctx->r16 != 0) {
        // 0x80212E28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80212E40;
    }
    // 0x80212E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212E2C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80212E30: jal         0x80231A24
    // 0x80212E34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80212E34: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80212E38: b           L_80212FAC
    // 0x80212E3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80212FAC;
    // 0x80212E3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80212E40:
    // 0x80212E40: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80212E44: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80212E48: addiu       $t0, $sp, 0x70
    ctx->r8 = ADD32(ctx->r29, 0X70);
    // 0x80212E4C: addiu       $t1, $sp, 0x6C
    ctx->r9 = ADD32(ctx->r29, 0X6C);
    // 0x80212E50: addiu       $t2, $sp, 0x68
    ctx->r10 = ADD32(ctx->r29, 0X68);
    // 0x80212E54: addiu       $t3, $sp, 0x74
    ctx->r11 = ADD32(ctx->r29, 0X74);
    // 0x80212E58: addiu       $t4, $sp, 0x76
    ctx->r12 = ADD32(ctx->r29, 0X76);
    // 0x80212E5C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80212E60: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80212E64: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80212E68: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80212E6C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80212E70: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x80212E74: jal         0x802160EC
    // 0x80212E78: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    static_3_802160EC(rdram, ctx);
        goto after_1;
    // 0x80212E78: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_1:
    // 0x80212E7C: bne         $v0, $zero, L_80212E8C
    if (ctx->r2 != 0) {
        // 0x80212E80: lhu         $t6, 0x74($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X74);
            goto L_80212E8C;
    }
    // 0x80212E80: lhu         $t6, 0x74($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X74);
    // 0x80212E84: b           L_80212FAC
    // 0x80212E88: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80212FAC;
    // 0x80212E88: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80212E8C:
    // 0x80212E8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80212E90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80212E94: lw          $t5, 0x28($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X28);
    // 0x80212E98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80212E9C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80212EA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80212EA4: addu        $s3, $t5, $t7
    ctx->r19 = ADD32(ctx->r13, ctx->r15);
    // 0x80212EA8: lw          $v0, 0x40($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X40);
    // 0x80212EAC: bnel        $v0, $zero, L_80212EC0
    if (ctx->r2 != 0) {
        // 0x80212EB0: lhu         $v1, 0x14($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0X14);
            goto L_80212EC0;
    }
    goto skip_0;
    // 0x80212EB0: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
    skip_0:
    // 0x80212EB4: b           L_80212FAC
    // 0x80212EB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80212FAC;
    // 0x80212EB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80212EBC: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
L_80212EC0:
    // 0x80212EC0: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x80212EC4: addiu       $s4, $s4, 0x0
    ctx->r20 = ADD32(ctx->r20, 0X0);
    // 0x80212EC8: beq         $v1, $zero, L_80212FA8
    if (ctx->r3 == 0) {
        // 0x80212ECC: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80212FA8;
    }
    // 0x80212ECC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80212ED0: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
L_80212ED4:
    // 0x80212ED4: sll         $t9, $s2, 5
    ctx->r25 = S32(ctx->r18 << 5);
    // 0x80212ED8: lhu         $t0, 0x76($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X76);
    // 0x80212EDC: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x80212EE0: lhu         $t1, 0x18($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X18);
    // 0x80212EE4: and         $t2, $t0, $t1
    ctx->r10 = ctx->r8 & ctx->r9;
    // 0x80212EE8: beql        $t2, $zero, L_80212F9C
    if (ctx->r10 == 0) {
        // 0x80212EEC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80212F9C;
    }
    goto skip_1;
    // 0x80212EEC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x80212EF0: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80212EF4: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x80212EF8: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80212EFC: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x80212F00: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80212F04: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x80212F08: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x80212F0C: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x80212F10: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80212F14: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80212F18: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80212F1C: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80212F20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80212F24: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80212F28: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80212F2C: jal         0x80216464
    // 0x80212F30: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    static_3_80216464(rdram, ctx);
        goto after_2;
    // 0x80212F30: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80212F34: beq         $v0, $zero, L_80212F90
    if (ctx->r2 == 0) {
        // 0x80212F38: or          $a3, $s0, $zero
        ctx->r7 = ctx->r16 | 0;
            goto L_80212F90;
    }
    // 0x80212F38: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80212F3C: lhu         $t8, 0x4A($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X4A);
    // 0x80212F40: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80212F44: or          $t0, $t9, $s2
    ctx->r8 = ctx->r25 | ctx->r18;
    // 0x80212F48: sw          $t0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r8;
    // 0x80212F4C: lbu         $t1, 0x11($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X11);
    // 0x80212F50: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x80212F54: beq         $t2, $zero, L_80212F88
    if (ctx->r10 == 0) {
        // 0x80212F58: nop
    
            goto L_80212F88;
    }
    // 0x80212F58: nop

    // 0x80212F5C: lw          $t3, 0x40($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X40);
    // 0x80212F60: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80212F64: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80212F68: lwc1        $f10, 0x2C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80212F6C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80212F70: jal         0x80216BD8
    // 0x80212F74: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    static_3_80216BD8(rdram, ctx);
        goto after_3;
    // 0x80212F74: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80212F78: bltzl       $v0, L_80212F94
    if (SIGNED(ctx->r2) < 0) {
        // 0x80212F7C: lw          $v0, 0x40($s3)
        ctx->r2 = MEM_W(ctx->r19, 0X40);
            goto L_80212F94;
    }
    goto skip_2;
    // 0x80212F7C: lw          $v0, 0x40($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X40);
    skip_2:
    // 0x80212F80: b           L_80212FAC
    // 0x80212F84: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
        goto L_80212FAC;
    // 0x80212F84: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
L_80212F88:
    // 0x80212F88: b           L_80212FAC
    // 0x80212F8C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
        goto L_80212FAC;
    // 0x80212F8C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
L_80212F90:
    // 0x80212F90: lw          $v0, 0x40($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X40);
L_80212F94:
    // 0x80212F94: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
    // 0x80212F98: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80212F9C:
    // 0x80212F9C: sltu        $at, $s2, $v1
    ctx->r1 = ctx->r18 < ctx->r3 ? 1 : 0;
    // 0x80212FA0: bnel        $at, $zero, L_80212ED4
    if (ctx->r1 != 0) {
        // 0x80212FA4: lw          $t8, 0x10($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X10);
            goto L_80212ED4;
    }
    goto skip_3;
    // 0x80212FA4: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    skip_3:
L_80212FA8:
    // 0x80212FA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80212FAC:
    // 0x80212FAC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80212FB0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80212FB4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80212FB8: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80212FBC: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80212FC0: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80212FC4: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80212FC8: jr          $ra
    // 0x80212FCC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80212FCC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void D_802E1CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E1D74: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802E1D78: jr          $ra
    // 0x802E1D7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802E1D7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80238A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80238A20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238A28: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x80238A2C: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80238A30: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80238A34: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80238A38: jal         0x8023F37C
    // 0x80238A3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_8023F37C(rdram, ctx);
        goto after_0;
    // 0x80238A3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80238A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238A44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80238A48: jr          $ra
    // 0x80238A4C: nop

    return;
    // 0x80238A4C: nop

;}
RECOMP_FUNC void D_802B7720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B77A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B77A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B77A8: lbu         $v1, 0x968($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X968);
    // 0x802B77AC: sltu        $t6, $zero, $v1
    ctx->r14 = 0 < ctx->r3 ? 1 : 0;
    // 0x802B77B0: beq         $t6, $zero, L_802B77C4
    if (ctx->r14 == 0) {
        // 0x802B77B4: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802B77C4;
    }
    // 0x802B77B4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802B77B8: jal         0x80303578
    // 0x802B77BC: addiu       $a0, $a0, 0x9E0
    ctx->r4 = ADD32(ctx->r4, 0X9E0);
    static_3_80303578(rdram, ctx);
        goto after_0;
    // 0x802B77BC: addiu       $a0, $a0, 0x9E0
    ctx->r4 = ADD32(ctx->r4, 0X9E0);
    after_0:
    // 0x802B77C0: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_802B77C4:
    // 0x802B77C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B77C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B77CC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802B77D0: jr          $ra
    // 0x802B77D4: nop

    return;
    // 0x802B77D4: nop

;}
RECOMP_FUNC void D_80223BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223BEC: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x80223BF0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80223BF4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80223BF8: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x80223BFC: jr          $ra
    // 0x80223C00: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
    return;
    // 0x80223C00: sw          $t6, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void D_802E9C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E9CD0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802E9CD4: jr          $ra
    // 0x802E9CD8: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    return;
    // 0x802E9CD8: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
;}
RECOMP_FUNC void D_8023A6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023A6B0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8023A6B4: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x8023A6B8: ori         $t7, $t7, 0x8000
    ctx->r15 = ctx->r15 | 0X8000;
    // 0x8023A6BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023A6C0: lui         $t6, 0xBB00
    ctx->r14 = S32(0XBB00 << 16);
    // 0x8023A6C4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023A6C8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8023A6CC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8023A6D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8023A6D4: lui         $t8, 0xFCFF
    ctx->r24 = S32(0XFCFF << 16);
    // 0x8023A6D8: lui         $t9, 0xFFFE
    ctx->r25 = S32(0XFFFE << 16);
    // 0x8023A6DC: ori         $t9, $t9, 0x793C
    ctx->r25 = ctx->r25 | 0X793C;
    // 0x8023A6E0: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x8023A6E4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8023A6E8: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x8023A6EC: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023A6F0: lhu         $a2, 0x0($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X0);
    // 0x8023A6F4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023A6F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023A6FC: andi        $t0, $a2, 0x1
    ctx->r8 = ctx->r6 & 0X1;
    // 0x8023A700: beq         $t0, $zero, L_8023A72C
    if (ctx->r8 == 0) {
        // 0x8023A704: lui         $t5, 0xB800
        ctx->r13 = S32(0XB800 << 16);
            goto L_8023A72C;
    }
    // 0x8023A704: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x8023A708: lui         $t1, 0xB900
    ctx->r9 = S32(0XB900 << 16);
    // 0x8023A70C: lui         $t2, 0xF0A
    ctx->r10 = S32(0XF0A << 16);
    // 0x8023A710: ori         $t2, $t2, 0x4000
    ctx->r10 = ctx->r10 | 0X4000;
    // 0x8023A714: ori         $t1, $t1, 0x31D
    ctx->r9 = ctx->r9 | 0X31D;
    // 0x8023A718: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8023A71C: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x8023A720: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x8023A724: lhu         $a2, 0x0($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X0);
    // 0x8023A728: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_8023A72C:
    // 0x8023A72C: andi        $t3, $a2, 0x2
    ctx->r11 = ctx->r6 & 0X2;
    // 0x8023A730: beq         $t3, $zero, L_8023A74C
    if (ctx->r11 == 0) {
        // 0x8023A734: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8023A74C;
    }
    // 0x8023A734: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023A738: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x8023A73C: ori         $t4, $t4, 0x2
    ctx->r12 = ctx->r12 | 0X2;
    // 0x8023A740: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8023A744: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023A748: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_8023A74C:
    // 0x8023A74C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8023A750: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8023A754: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8023A758: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023A75C: jr          $ra
    // 0x8023A760: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x8023A760: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void D_802DD5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD670: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802DD674: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802DD678: jr          $ra
    // 0x802DD67C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802DD67C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802D7D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D7E08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D7E0C: jr          $ra
    // 0x802D7E10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x802D7E10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_802A2240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A22C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A22C4: sh          $zero, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = 0;
    // 0x802A22C8: sb          $zero, 0xC8($a0)
    MEM_B(0XC8, ctx->r4) = 0;
    // 0x802A22CC: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x802A22D0: jr          $ra
    // 0x802A22D4: swc1        $f0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x802A22D4: swc1        $f0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void D_802491E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802491E8: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x802491EC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802491F0: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x802491F4: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x802491F8: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x802491FC: beq         $t7, $zero, L_8024922C
    if (ctx->r15 == 0) {
        // 0x80249200: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8024922C;
    }
    // 0x80249200: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80249204: andi        $a1, $v0, 0x7F
    ctx->r5 = ctx->r2 & 0X7F;
L_80249208:
    // 0x80249208: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8024920C: sll         $t9, $a1, 7
    ctx->r25 = S32(ctx->r5 << 7);
    // 0x80249210: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80249214: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80249218: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x8024921C: andi        $t6, $v0, 0x7F
    ctx->r14 = ctx->r2 & 0X7F;
    // 0x80249220: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x80249224: bne         $t7, $zero, L_80249208
    if (ctx->r15 != 0) {
        // 0x80249228: addu        $a1, $t9, $t6
        ctx->r5 = ADD32(ctx->r25, ctx->r14);
            goto L_80249208;
    }
    // 0x80249228: addu        $a1, $t9, $t6
    ctx->r5 = ADD32(ctx->r25, ctx->r14);
L_8024922C:
    // 0x8024922C: jr          $ra
    // 0x80249230: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80249230: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void D_80290F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290FD0: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x80290FD4: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80290FD8: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80290FDC: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80290FE0: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80290FE4: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80290FE8: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80290FEC: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x80290FF0: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80290FF4: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80290FF8: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x80290FFC: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x80291000: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x80291004: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x80291008: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x8029100C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x80291010: sw          $a1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r5;
    // 0x80291014: sw          $a2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r6;
    // 0x80291018: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x8029101C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80291020: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80291024: addiu       $t6, $sp, 0xAC
    ctx->r14 = ADD32(ctx->r29, 0XAC);
    // 0x80291028: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8029102C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x80291030: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x80291034: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80291038: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x8029103C: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x80291040: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x80291044: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80291048: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x8029104C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80291050: addiu       $t1, $sp, 0x9C
    ctx->r9 = ADD32(ctx->r29, 0X9C);
    // 0x80291054: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x80291058: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8029105C: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x80291060: lw          $t5, 0xC($t2)
    ctx->r13 = MEM_W(ctx->r10, 0XC);
    // 0x80291064: addiu       $s6, $sp, 0xD0
    ctx->r22 = ADD32(ctx->r29, 0XD0);
    // 0x80291068: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8029106C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80291070: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x80291074: jal         0x802C51D0
    // 0x80291078: sw          $t5, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r13;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80291078: sw          $t5, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r13;
    after_0:
    // 0x8029107C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80291080: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80291084: lui         $a2, 0xC190
    ctx->r6 = S32(0XC190 << 16);
    // 0x80291088: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8029108C: jal         0x8022A0D0
    // 0x80291090: lui         $a3, 0xBF00
    ctx->r7 = S32(0XBF00 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x80291090: lui         $a3, 0xBF00
    ctx->r7 = S32(0XBF00 << 16);
    after_1:
    // 0x80291094: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80291098: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029109C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802910A0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x802910A4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x802910A8: lw          $a2, 0xE0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0XE0);
    // 0x802910AC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802910B0: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x802910B4: lw          $t9, 0x8C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X8C);
    // 0x802910B8: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x802910BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802910C0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802910C4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x802910C8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802910CC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x802910D0: jal         0x802AA6F4
    // 0x802910D4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    static_3_802AA6F4(rdram, ctx);
        goto after_2;
    // 0x802910D4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_2:
    // 0x802910D8: beq         $v0, $zero, L_80291108
    if (ctx->r2 == 0) {
        // 0x802910DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80291108;
    }
    // 0x802910DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802910E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802910E4: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    // 0x802910E8: jal         0x802958BC
    // 0x802910EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802958BC(rdram, ctx);
        goto after_3;
    // 0x802910EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802910F0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802910F4: jal         0x80295884
    // 0x802910F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80295884(rdram, ctx);
        goto after_4;
    // 0x802910F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802910FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80291100: jal         0x80295878
    // 0x80291104: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    static_3_80295878(rdram, ctx);
        goto after_5;
    // 0x80291104: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    after_5:
L_80291108:
    // 0x80291108: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029110C: lwc1        $f30, 0x0($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80291110: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80291114: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80291118: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8029111C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80291120: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80291124: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80291128: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8029112C: addiu       $s0, $sp, 0xBC
    ctx->r16 = ADD32(ctx->r29, 0XBC);
    // 0x80291130: addiu       $s5, $sp, 0xCC
    ctx->r21 = ADD32(ctx->r29, 0XCC);
L_80291134:
    // 0x80291134: jal         0x8023499C
    // 0x80291138: nop

    static_3_8023499C(rdram, ctx);
        goto after_6;
    // 0x80291138: nop

    after_6:
    // 0x8029113C: lwc1        $f4, 0xE0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0XE0);
    // 0x80291140: add.s       $f8, $f0, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f28.fl;
    // 0x80291144: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80291148: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x8029114C: div.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
    // 0x80291150: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80291154: lw          $t7, 0x8C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X8C);
    // 0x80291158: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x8029115C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80291160: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80291164: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80291168: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8029116C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80291170: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80291174: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80291178: jal         0x802AA6F4
    // 0x8029117C: nop

    static_3_802AA6F4(rdram, ctx);
        goto after_7;
    // 0x8029117C: nop

    after_7:
    // 0x80291180: beq         $v0, $zero, L_802911F0
    if (ctx->r2 == 0) {
        // 0x80291184: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_802911F0;
    }
    // 0x80291184: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80291188: addiu       $t3, $sp, 0x9C
    ctx->r11 = ADD32(ctx->r29, 0X9C);
    // 0x8029118C: addiu       $t1, $sp, 0xAC
    ctx->r9 = ADD32(ctx->r29, 0XAC);
    // 0x80291190: addu        $s3, $s1, $t1
    ctx->r19 = ADD32(ctx->r17, ctx->r9);
    // 0x80291194: addu        $s2, $s1, $t3
    ctx->r18 = ADD32(ctx->r17, ctx->r11);
    // 0x80291198: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8029119C: jal         0x80295814
    // 0x802911A0: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    static_3_80295814(rdram, ctx);
        goto after_8;
    // 0x802911A0: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    after_8:
    // 0x802911A4: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x802911A8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802911AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802911B0: mul.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x802911B4: lw          $a3, 0x0($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X0);
    // 0x802911B8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802911BC: jal         0x80295918
    // 0x802911C0: nop

    static_3_80295918(rdram, ctx);
        goto after_9;
    // 0x802911C0: nop

    after_9:
    // 0x802911C4: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802911C8: jal         0x80295940
    // 0x802911CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_80295940(rdram, ctx);
        goto after_10;
    // 0x802911CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_10:
    // 0x802911D0: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x802911D4: jal         0x8029594C
    // 0x802911D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_8029594C(rdram, ctx);
        goto after_11;
    // 0x802911D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_11:
    // 0x802911DC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802911E0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802911E4: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x802911E8: jal         0x80295958
    // 0x802911EC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_80295958(rdram, ctx);
        goto after_12;
    // 0x802911EC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_12:
L_802911F0:
    // 0x802911F0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802911F4: bne         $s0, $s5, L_80291134
    if (ctx->r16 != ctx->r21) {
        // 0x802911F8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80291134;
    }
    // 0x802911F8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802911FC: lw          $t2, 0x18C($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X18C);
    // 0x80291200: lwc1        $f18, 0x114($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80291204: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x80291208: sw          $t5, 0x18C($s4)
    MEM_W(0X18C, ctx->r20) = ctx->r13;
    // 0x8029120C: swc1        $f18, 0xF4($s4)
    MEM_W(0XF4, ctx->r20) = ctx->f18.u32l;
    // 0x80291210: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x80291214: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80291218: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x8029121C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x80291220: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x80291224: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80291228: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x8029122C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80291230: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x80291234: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x80291238: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x8029123C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x80291240: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x80291244: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x80291248: jr          $ra
    // 0x8029124C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x8029124C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_802E86F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8770: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802E8774: nop

    // 0x802E8778: swc1        $f12, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f12.u32l;
    // 0x802E877C: jr          $ra
    // 0x802E8780: swc1        $f12, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x802E8780: swc1        $f12, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void D_802DFD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DFDA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802DFDAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DFDB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DFDB4: bne         $a0, $zero, L_802DFDCC
    if (ctx->r4 != 0) {
        // 0x802DFDB8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802DFDCC;
    }
    // 0x802DFDB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DFDBC: jal         0x802C67EC
    // 0x802DFDC0: addiu       $a0, $zero, 0x4A38
    ctx->r4 = ADD32(0, 0X4A38);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802DFDC0: addiu       $a0, $zero, 0x4A38
    ctx->r4 = ADD32(0, 0X4A38);
    after_0:
    // 0x802DFDC4: beq         $v0, $zero, L_802DFE08
    if (ctx->r2 == 0) {
        // 0x802DFDC8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802DFE08;
    }
    // 0x802DFDC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802DFDCC:
    // 0x802DFDCC: jal         0x80308668
    // 0x802DFDD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x802DFDD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802DFDD4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802DFDD8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802DFDDC: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x802DFDE0: jal         0x802CD970
    // 0x802DFDE4: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    static_3_802CD970(rdram, ctx);
        goto after_2;
    // 0x802DFDE4: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    after_2:
    // 0x802DFDE8: jal         0x80307498
    // 0x802DFDEC: addiu       $a0, $s0, 0x71C
    ctx->r4 = ADD32(ctx->r16, 0X71C);
    static_3_80307498(rdram, ctx);
        goto after_3;
    // 0x802DFDEC: addiu       $a0, $s0, 0x71C
    ctx->r4 = ADD32(ctx->r16, 0X71C);
    after_3:
    // 0x802DFDF0: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802DFDF4: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802DFDF8: addiu       $a0, $s0, 0x152C
    ctx->r4 = ADD32(ctx->r16, 0X152C);
    // 0x802DFDFC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802DFE00: jal         0x802C6930
    // 0x802DFE04: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    static_3_802C6930(rdram, ctx);
        goto after_4;
    // 0x802DFE04: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    after_4:
L_802DFE08:
    // 0x802DFE08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DFE0C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802DFE10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DFE14: jr          $ra
    // 0x802DFE18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802DFE18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8021EC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021EC4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021EC50: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021EC54: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x8021EC58: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x8021EC5C: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8021EC60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021EC64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021EC68: beq         $t6, $zero, L_8021ED48
    if (ctx->r14 == 0) {
        // 0x8021EC6C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8021ED48;
    }
    // 0x8021EC6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021EC70: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x8021EC74: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021EC78: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021EC7C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8021EC80: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8021EC84: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8021EC88: beq         $t7, $v0, L_8021ECD0
    if (ctx->r15 == ctx->r2) {
        // 0x8021EC8C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8021ECD0;
    }
    // 0x8021EC8C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021EC90: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8021EC94: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8021EC98: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021EC9C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8021ECA0: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x8021ECA4: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8021ECA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021ECAC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8021ECB0: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8021ECB4: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8021ECB8: lw          $t0, 0x38($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X38);
    // 0x8021ECBC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021ECC0: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8021ECC4: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8021ECC8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8021ECCC: sw          $t1, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r9;
L_8021ECD0:
    // 0x8021ECD0: jal         0x8023CBF0
    // 0x8021ECD4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023CBF0(rdram, ctx);
        goto after_0;
    // 0x8021ECD4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8021ECD8: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8021ECDC: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8021ECE0: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x8021ECE4: blez        $t2, L_8021ED0C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8021ECE8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8021ED0C;
    }
    // 0x8021ECE8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8021ECEC:
    // 0x8021ECEC: jal         0x8021EB98
    // 0x8021ECF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    static_3_8021EB98(rdram, ctx);
        goto after_1;
    // 0x8021ECF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8021ECF4: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8021ECF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021ECFC: addiu       $s1, $s1, 0x4C
    ctx->r17 = ADD32(ctx->r17, 0X4C);
    // 0x8021ED00: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8021ED04: bne         $at, $zero, L_8021ECEC
    if (ctx->r1 != 0) {
        // 0x8021ED08: nop
    
            goto L_8021ECEC;
    }
    // 0x8021ED08: nop

L_8021ED0C:
    // 0x8021ED0C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021ED10: jal         0x8023A700
    // 0x8021ED14: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_8023A700(rdram, ctx);
        goto after_2;
    // 0x8021ED14: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x8021ED18: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x8021ED1C: lw          $t4, 0x0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X0);
    // 0x8021ED20: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021ED24: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021ED28: addiu       $t5, $t4, -0x8
    ctx->r13 = ADD32(ctx->r12, -0X8);
    // 0x8021ED2C: sw          $t5, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r13;
    // 0x8021ED30: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8021ED34: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8021ED38: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021ED3C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8021ED40: sw          $t8, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r24;
    // 0x8021ED44: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_8021ED48:
    // 0x8021ED48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8021ED4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021ED50: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021ED54: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021ED58: jr          $ra
    // 0x8021ED5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8021ED5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80244AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244AEC: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80244AF0: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80244AF4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80244AF8: addiu       $a3, $a0, 0x4
    ctx->r7 = ADD32(ctx->r4, 0X4);
    // 0x80244AFC: addu        $t8, $zero, $v0
    ctx->r24 = ADD32(0, ctx->r2);
    // 0x80244B00: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244B04: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244B08: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244B0C: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244B10: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244B14: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80244B18: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x80244B1C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x80244B20: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80244B24: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244B28: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244B2C: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244B30: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244B34: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244B38: addiu       $t1, $a3, 0x2
    ctx->r9 = ADD32(ctx->r7, 0X2);
    // 0x80244B3C: addiu       $t2, $a3, 0x4
    ctx->r10 = ADD32(ctx->r7, 0X4);
    // 0x80244B40: addiu       $t3, $a3, 0x6
    ctx->r11 = ADD32(ctx->r7, 0X6);
    // 0x80244B44: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_80244B48:
    // 0x80244B48: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x80244B4C: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80244B50: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244B54: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80244B58: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244B5C: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244B60: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80244B64: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244B68: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244B6C: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80244B70: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
    // 0x80244B74: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80244B78: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80244B7C: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244B80: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244B84: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244B88: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244B8C: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244B90: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80244B94: lhu         $v0, 0x0($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X0);
    // 0x80244B98: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80244B9C: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80244BA0: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244BA4: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244BA8: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244BAC: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244BB0: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244BB4: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80244BB8: lhu         $v0, 0x0($t3)
    ctx->r2 = MEM_HU(ctx->r11, 0X0);
    // 0x80244BBC: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
    // 0x80244BC0: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80244BC4: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80244BC8: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80244BCC: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80244BD0: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80244BD4: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80244BD8: bne         $v1, $a0, L_80244B48
    if (ctx->r3 != ctx->r4) {
        // 0x80244BDC: addiu       $t3, $t3, 0x8
        ctx->r11 = ADD32(ctx->r11, 0X8);
            goto L_80244B48;
    }
    // 0x80244BDC: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x80244BE0: jr          $ra
    // 0x80244BE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80244BE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_80231FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231FB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231FB8: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80231FBC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80231FC0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80231FC4: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80231FC8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80231FCC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80231FD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80231FD4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80231FD8: blez        $v1, L_8023204C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80231FDC: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_8023204C;
    }
    // 0x80231FDC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80231FE0: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80231FE4: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x80231FE8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
L_80231FEC:
    // 0x80231FEC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80231FF0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80231FF4: c.le.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl <= ctx->f4.fl;
    // 0x80231FF8: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x80231FFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80232000: bc1fl       L_80232014
    if (!c1cs) {
        // 0x80232004: lw          $a1, 0x0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X0);
            goto L_80232014;
    }
    goto skip_0;
    // 0x80232004: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80232008: b           L_8023203C
    // 0x8023200C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
        goto L_8023203C;
    // 0x8023200C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80232010: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
L_80232014:
    // 0x80232014: lhu         $a2, 0x6($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X6);
    // 0x80232018: lbu         $a3, 0x4($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X4);
    // 0x8023201C: jal         0x80232EE0
    // 0x80232020: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    static_3_80232EE0(rdram, ctx);
        goto after_0;
    // 0x80232020: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80232024: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x80232028: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8023202C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x80232030: addiu       $t9, $t9, 0x0
    ctx->r25 = ADD32(ctx->r25, 0X0);
    // 0x80232034: sll         $t8, $v1, 4
    ctx->r24 = S32(ctx->r3 << 4);
    // 0x80232038: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
L_8023203C:
    // 0x8023203C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80232040: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80232044: bnel        $at, $zero, L_80231FEC
    if (ctx->r1 != 0) {
        // 0x80232048: lwc1        $f4, 0x8($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
            goto L_80231FEC;
    }
    goto skip_1;
    // 0x80232048: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    skip_1:
L_8023204C:
    // 0x8023204C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80232050: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80232054: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80232058: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8023205C: jr          $ra
    // 0x80232060: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80232060: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void D_802A5CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5D5C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802A5D60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A5D64: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802A5D68: jal         0x802D2924
    // 0x802A5D6C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    static_3_802D2924(rdram, ctx);
        goto after_0;
    // 0x802A5D6C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x802A5D70: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x802A5D74: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x802A5D78: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802A5D7C: addiu       $t6, $v0, 0x20
    ctx->r14 = ADD32(ctx->r2, 0X20);
    // 0x802A5D80: addiu       $t7, $v0, 0x24
    ctx->r15 = ADD32(ctx->r2, 0X24);
    // 0x802A5D84: addiu       $t8, $v0, 0x28
    ctx->r24 = ADD32(ctx->r2, 0X28);
    // 0x802A5D88: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802A5D8C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802A5D90: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802A5D94: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802A5D98: jal         0x802CF1C8
    // 0x802A5D9C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    static_3_802CF1C8(rdram, ctx);
        goto after_1;
    // 0x802A5D9C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x802A5DA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802A5DA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802A5DA8: jr          $ra
    // 0x802A5DAC: nop

    return;
    // 0x802A5DAC: nop

;}
RECOMP_FUNC void D_8024680C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024680C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80246810: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80246814: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80246818: lui         $t0, 0x0
    ctx->r8 = S32(0X0 << 16);
    // 0x8024681C: addiu       $t0, $t0, 0x0
    ctx->r8 = ADD32(ctx->r8, 0X0);
    // 0x80246820: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80246824: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80246828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024682C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80246830: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80246834: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80246838: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
L_8024683C:
    // 0x8024683C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80246840: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80246844: bne         $at, $zero, L_8024683C
    if (ctx->r1 != 0) {
        // 0x80246848: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_8024683C;
    }
    // 0x80246848: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x8024684C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80246850: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80246854: addiu       $t8, $zero, 0x23
    ctx->r24 = ADD32(0, 0X23);
    // 0x80246858: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8024685C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80246860: lhu         $a0, 0x5E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X5E);
    // 0x80246864: sw          $t6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r14;
    // 0x80246868: sb          $t7, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r15;
    // 0x8024686C: sb          $t8, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r24;
    // 0x80246870: sb          $t9, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r25;
    // 0x80246874: sb          $t1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r9;
    // 0x80246878: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x8024687C: jal         0x8024A590
    // 0x80246880: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    static_3_8024A590(rdram, ctx);
        goto after_0;
    // 0x80246880: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    after_0:
    // 0x80246884: lhu         $t2, 0x5E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X5E);
    // 0x80246888: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8024688C: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x80246890: or          $t4, $v0, $t3
    ctx->r12 = ctx->r2 | ctx->r11;
    // 0x80246894: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x80246898: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8024689C: sh          $t4, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r12;
    // 0x802468A0: sb          $t5, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r13;
    // 0x802468A4: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x802468A8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
L_802468AC:
    // 0x802468AC: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x802468B0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802468B4: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x802468B8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802468BC: bne         $at, $zero, L_802468AC
    if (ctx->r1 != 0) {
        // 0x802468C0: sb          $t6, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r14;
            goto L_802468AC;
    }
    // 0x802468C0: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x802468C4: beq         $s0, $zero, L_80246910
    if (ctx->r16 == 0) {
        // 0x802468C8: addiu       $t7, $sp, 0x2C
        ctx->r15 = ADD32(ctx->r29, 0X2C);
            goto L_80246910;
    }
    // 0x802468C8: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x802468CC: blez        $s0, L_80246910
    if (SIGNED(ctx->r16) <= 0) {
        // 0x802468D0: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_80246910;
    }
    // 0x802468D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802468D4: andi        $a0, $s0, 0x3
    ctx->r4 = ctx->r16 & 0X3;
    // 0x802468D8: beq         $a0, $zero, L_802468F4
    if (ctx->r4 == 0) {
        // 0x802468DC: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_802468F4;
    }
    // 0x802468DC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802468E0:
    // 0x802468E0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x802468E4: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x802468E8: bne         $v0, $a3, L_802468E0
    if (ctx->r2 != ctx->r7) {
        // 0x802468EC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802468E0;
    }
    // 0x802468EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802468F0: beq         $a3, $s0, L_80246910
    if (ctx->r7 == ctx->r16) {
        // 0x802468F4: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80246910;
    }
L_802468F4:
    // 0x802468F4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x802468F8: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x802468FC: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x80246900: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80246904: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80246908: bne         $a3, $s0, L_802468F4
    if (ctx->r7 != ctx->r16) {
        // 0x8024690C: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_802468F4;
    }
    // 0x8024690C: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
L_80246910:
    // 0x80246910: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
    // 0x80246914: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
L_80246918:
    // 0x80246918: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8024691C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80246920: swl         $at, 0x0($t1)
    do_swl(rdram, 0X0, ctx->r9, ctx->r1);
    // 0x80246924: swr         $at, 0x3($t1)
    do_swr(rdram, 0X3, ctx->r9, ctx->r1);
    // 0x80246928: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8024692C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80246930: swl         $at, -0x8($t1)
    do_swl(rdram, -0X8, ctx->r9, ctx->r1);
    // 0x80246934: swr         $at, -0x5($t1)
    do_swr(rdram, -0X5, ctx->r9, ctx->r1);
    // 0x80246938: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8024693C: nop

    // 0x80246940: swl         $at, -0x4($t1)
    do_swl(rdram, -0X4, ctx->r9, ctx->r1);
    // 0x80246944: bne         $t7, $t9, L_80246918
    if (ctx->r15 != ctx->r25) {
        // 0x80246948: swr         $at, -0x1($t1)
        do_swr(rdram, -0X1, ctx->r9, ctx->r1);
            goto L_80246918;
    }
    // 0x80246948: swr         $at, -0x1($t1)
    do_swr(rdram, -0X1, ctx->r9, ctx->r1);
    // 0x8024694C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80246950: addiu       $t2, $zero, 0xFE
    ctx->r10 = ADD32(0, 0XFE);
    // 0x80246954: swl         $at, 0x0($t1)
    do_swl(rdram, 0X0, ctx->r9, ctx->r1);
    // 0x80246958: swr         $at, 0x3($t1)
    do_swr(rdram, 0X3, ctx->r9, ctx->r1);
    // 0x8024695C: sb          $t2, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r10;
    // 0x80246960: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80246964: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80246968: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x8024696C: jr          $ra
    // 0x80246970: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80246970: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void D_8021E16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E16C: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021E170: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021E174: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8021E178: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8021E17C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021E180: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8021E184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E188: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x8021E18C: jal         0x80222E50
    // 0x8021E190: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80222E50(rdram, ctx);
        goto after_0;
    // 0x8021E190: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021E194: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E198: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021E19C: addiu       $a0, $a1, 0x8
    ctx->r4 = ADD32(ctx->r5, 0X8);
    // 0x8021E1A0: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8021E1A4: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021E1A8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021E1AC: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8021E1B0: swc1        $f10, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f10.u32l;
    // 0x8021E1B4: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021E1B8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021E1BC: nop

    // 0x8021E1C0: bc1tl       L_8021E374
    if (c1cs) {
        // 0x8021E1C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021E374;
    }
    goto skip_0;
    // 0x8021E1C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021E1C8: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8021E1CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8021E1D0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8021E1D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8021E1D8: bc1fl       L_8021E374
    if (!c1cs) {
        // 0x8021E1DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021E374;
    }
    goto skip_1;
    // 0x8021E1DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8021E1E0: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8021E1E4: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
L_8021E1E8:
    // 0x8021E1E8: beql        $v1, $zero, L_8021E20C
    if (ctx->r3 == 0) {
        // 0x8021E1EC: lbu         $t8, 0x9($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X9);
            goto L_8021E20C;
    }
    goto skip_2;
    // 0x8021E1EC: lbu         $t8, 0x9($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X9);
    skip_2:
    // 0x8021E1F0: beql        $v1, $a2, L_8021E2A8
    if (ctx->r3 == ctx->r6) {
        // 0x8021E1F4: lbu         $t6, 0x9($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X9);
            goto L_8021E2A8;
    }
    goto skip_3;
    // 0x8021E1F4: lbu         $t6, 0x9($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9);
    skip_3:
    // 0x8021E1F8: beql        $v1, $a3, L_8021E2F8
    if (ctx->r3 == ctx->r7) {
        // 0x8021E1FC: lbu         $t1, 0x9($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X9);
            goto L_8021E2F8;
    }
    goto skip_4;
    // 0x8021E1FC: lbu         $t1, 0x9($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X9);
    skip_4:
    // 0x8021E200: b           L_8021E348
    // 0x8021E204: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
        goto L_8021E348;
    // 0x8021E204: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021E208: lbu         $t8, 0x9($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X9);
L_8021E20C:
    // 0x8021E20C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8021E210: bnel        $t8, $zero, L_8021E25C
    if (ctx->r24 != 0) {
        // 0x8021E214: lbu         $v0, 0x0($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X0);
            goto L_8021E25C;
    }
    goto skip_5;
    // 0x8021E214: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    skip_5:
    // 0x8021E218: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x8021E21C: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8021E220: div         $zero, $t9, $t1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r9)));
    // 0x8021E224: mfhi        $t2
    ctx->r10 = hi;
    // 0x8021E228: sb          $t2, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r10;
    // 0x8021E22C: bne         $t1, $zero, L_8021E238
    if (ctx->r9 != 0) {
        // 0x8021E230: nop
    
            goto L_8021E238;
    }
    // 0x8021E230: nop

    // 0x8021E234: break       7
    do_break(2149704244);
L_8021E238:
    // 0x8021E238: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021E23C: bne         $t1, $at, L_8021E250
    if (ctx->r9 != ctx->r1) {
        // 0x8021E240: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8021E250;
    }
    // 0x8021E240: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021E244: bne         $t9, $at, L_8021E250
    if (ctx->r25 != ctx->r1) {
        // 0x8021E248: nop
    
            goto L_8021E250;
    }
    // 0x8021E248: nop

    // 0x8021E24C: break       6
    do_break(2149704268);
L_8021E250:
    // 0x8021E250: b           L_8021E298
    // 0x8021E254: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
        goto L_8021E298;
    // 0x8021E254: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8021E258: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_8021E25C:
    // 0x8021E25C: addu        $t3, $v1, $v0
    ctx->r11 = ADD32(ctx->r3, ctx->r2);
    // 0x8021E260: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8021E264: div         $zero, $t4, $v0
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r2)));
    // 0x8021E268: mfhi        $t5
    ctx->r13 = hi;
    // 0x8021E26C: sb          $t5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r13;
    // 0x8021E270: bne         $v0, $zero, L_8021E27C
    if (ctx->r2 != 0) {
        // 0x8021E274: nop
    
            goto L_8021E27C;
    }
    // 0x8021E274: nop

    // 0x8021E278: break       7
    do_break(2149704312);
L_8021E27C:
    // 0x8021E27C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021E280: bne         $v0, $at, L_8021E294
    if (ctx->r2 != ctx->r1) {
        // 0x8021E284: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8021E294;
    }
    // 0x8021E284: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021E288: bne         $t4, $at, L_8021E294
    if (ctx->r12 != ctx->r1) {
        // 0x8021E28C: nop
    
            goto L_8021E294;
    }
    // 0x8021E28C: nop

    // 0x8021E290: break       6
    do_break(2149704336);
L_8021E294:
    // 0x8021E294: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
L_8021E298:
    // 0x8021E298: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021E29C: b           L_8021E348
    // 0x8021E2A0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
        goto L_8021E348;
    // 0x8021E2A0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021E2A4: lbu         $t6, 0x9($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9);
L_8021E2A8:
    // 0x8021E2A8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x8021E2AC: bne         $t6, $zero, L_8021E2D0
    if (ctx->r14 != 0) {
        // 0x8021E2B0: nop
    
            goto L_8021E2D0;
    }
    // 0x8021E2B0: nop

    // 0x8021E2B4: sb          $t7, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r15;
    // 0x8021E2B8: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8021E2BC: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x8021E2C0: bnel        $t8, $v0, L_8021E2EC
    if (ctx->r24 != ctx->r2) {
        // 0x8021E2C4: lwc1        $f2, 0x4($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
            goto L_8021E2EC;
    }
    goto skip_6;
    // 0x8021E2C4: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    skip_6:
    // 0x8021E2C8: b           L_8021E370
    // 0x8021E2CC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_8021E370;
    // 0x8021E2CC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8021E2D0:
    // 0x8021E2D0: bne         $v0, $zero, L_8021E2E0
    if (ctx->r2 != 0) {
        // 0x8021E2D4: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_8021E2E0;
    }
    // 0x8021E2D4: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x8021E2D8: b           L_8021E370
    // 0x8021E2DC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_8021E370;
    // 0x8021E2DC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8021E2E0:
    // 0x8021E2E0: sb          $t9, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r25;
    // 0x8021E2E4: andi        $v0, $t9, 0xFF
    ctx->r2 = ctx->r25 & 0XFF;
    // 0x8021E2E8: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
L_8021E2EC:
    // 0x8021E2EC: b           L_8021E348
    // 0x8021E2F0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
        goto L_8021E348;
    // 0x8021E2F0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021E2F4: lbu         $t1, 0x9($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X9);
L_8021E2F8:
    // 0x8021E2F8: bnel        $t1, $zero, L_8021E32C
    if (ctx->r9 != 0) {
        // 0x8021E2FC: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_8021E32C;
    }
    goto skip_7;
    // 0x8021E2FC: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    skip_7:
    // 0x8021E300: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x8021E304: sb          $t2, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r10;
    // 0x8021E308: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x8021E30C: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x8021E310: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x8021E314: bnel        $t3, $t4, L_8021E344
    if (ctx->r11 != ctx->r12) {
        // 0x8021E318: lwc1        $f2, 0x4($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
            goto L_8021E344;
    }
    goto skip_8;
    // 0x8021E318: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    skip_8:
    // 0x8021E31C: sb          $t0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r8;
    // 0x8021E320: b           L_8021E340
    // 0x8021E324: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
        goto L_8021E340;
    // 0x8021E324: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8021E328: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
L_8021E32C:
    // 0x8021E32C: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
    // 0x8021E330: bne         $v0, $zero, L_8021E340
    if (ctx->r2 != 0) {
        // 0x8021E334: sb          $t5, 0x2($a1)
        MEM_B(0X2, ctx->r5) = ctx->r13;
            goto L_8021E340;
    }
    // 0x8021E334: sb          $t5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r13;
    // 0x8021E338: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8021E33C: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
L_8021E340:
    // 0x8021E340: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
L_8021E344:
    // 0x8021E344: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
L_8021E348:
    // 0x8021E348: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8021E34C: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8021E350: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8021E354: add.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x8021E358: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
    // 0x8021E35C: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021E360: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8021E364: nop

    // 0x8021E368: bc1tl       L_8021E1E8
    if (c1cs) {
        // 0x8021E36C: lbu         $v1, 0x8($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X8);
            goto L_8021E1E8;
    }
    goto skip_9;
    // 0x8021E36C: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    skip_9:
L_8021E370:
    // 0x8021E370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021E374:
    // 0x8021E374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021E378: jr          $ra
    // 0x8021E37C: nop

    return;
    // 0x8021E37C: nop

;}
RECOMP_FUNC void D_802E8B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E8BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E8BD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E8BD8: jal         0x802D2A0C
    // 0x802E8BDC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    static_3_802D2A0C(rdram, ctx);
        goto after_0;
    // 0x802E8BDC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    after_0:
    // 0x802E8BE0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802E8BE4: bne         $v0, $at, L_802E8BF4
    if (ctx->r2 != ctx->r1) {
        // 0x802E8BE8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802E8BF4;
    }
    // 0x802E8BE8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802E8BEC: b           L_802E8BF8
    // 0x802E8BF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802E8BF8;
    // 0x802E8BF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802E8BF4:
    // 0x802E8BF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802E8BF8:
    // 0x802E8BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E8BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E8C00: jr          $ra
    // 0x802E8C04: nop

    return;
    // 0x802E8C04: nop

;}
RECOMP_FUNC void D_802D3F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D3FAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D3FB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D3FB4: jal         0x8028D750
    // 0x802D3FB8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D750(rdram, ctx);
        goto after_0;
    // 0x802D3FB8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802D3FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802D3FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D3FC4: jr          $ra
    // 0x802D3FC8: nop

    return;
    // 0x802D3FC8: nop

;}
RECOMP_FUNC void D_80223FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223FC0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80223FC4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80223FC8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80223FCC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80223FD0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80223FD4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80223FD8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80223FDC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80223FE0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80223FE4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80223FE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80223FEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80223FF0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80223FF4: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x80223FF8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x80223FFC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x80224000: jal         0x80223840
    // 0x80224004: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80224004: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    after_0:
    // 0x80224008: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x8022400C: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x80224010: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80224014: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80224018: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8022401C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80224020: jal         0x8022393C
    // 0x80224024: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80224024: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80224028: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8022402C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80224030: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80224034: beq         $v0, $zero, L_80224500
    if (ctx->r2 == 0) {
        // 0x80224038: lw          $t3, 0x50($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X50);
            goto L_80224500;
    }
    // 0x80224038: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8022403C: lui         $fp, 0x5556
    ctx->r30 = S32(0X5556 << 16);
    // 0x80224040: lui         $s7, 0x5556
    ctx->r23 = S32(0X5556 << 16);
    // 0x80224044: lui         $s6, 0x5556
    ctx->r22 = S32(0X5556 << 16);
    // 0x80224048: lui         $s5, 0x5556
    ctx->r21 = S32(0X5556 << 16);
    // 0x8022404C: lui         $s4, 0x5556
    ctx->r20 = S32(0X5556 << 16);
    // 0x80224050: lui         $s2, 0x0
    ctx->r18 = S32(0X0 << 16);
    // 0x80224054: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x80224058: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x8022405C: addiu       $s2, $s2, 0x0
    ctx->r18 = ADD32(ctx->r18, 0X0);
    // 0x80224060: ori         $s4, $s4, 0x5359
    ctx->r20 = ctx->r20 | 0X5359;
    // 0x80224064: ori         $s5, $s5, 0x4254
    ctx->r21 = ctx->r21 | 0X4254;
    // 0x80224068: ori         $s6, $s6, 0x5358
    ctx->r22 = ctx->r22 | 0X5358;
    // 0x8022406C: ori         $s7, $s7, 0x4C54
    ctx->r23 = ctx->r23 | 0X4C54;
    // 0x80224070: ori         $fp, $fp, 0x4D42
    ctx->r30 = ctx->r30 | 0X4D42;
L_80224074:
    // 0x80224074: lui         $at, 0x5441
    ctx->r1 = S32(0X5441 << 16);
    // 0x80224078: ori         $at, $at, 0x424C
    ctx->r1 = ctx->r1 | 0X424C;
    // 0x8022407C: bne         $v0, $at, L_802244C8
    if (ctx->r2 != ctx->r1) {
        // 0x80224080: lw          $t6, 0x6C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X6C);
            goto L_802244C8;
    }
    // 0x80224080: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x80224084: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80224088: beq         $t6, $zero, L_802240F8
    if (ctx->r14 == 0) {
        // 0x8022408C: lw          $v1, 0x68($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X68);
            goto L_802240F8;
    }
    // 0x8022408C: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
L_80224090:
    // 0x80224090: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80224094: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x80224098: bne         $s4, $v0, L_802240A8
    if (ctx->r20 != ctx->r2) {
        // 0x8022409C: nop
    
            goto L_802240A8;
    }
    // 0x8022409C: nop

    // 0x802240A0: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x802240A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_802240A8:
    // 0x802240A8: bne         $s5, $v0, L_802240B8
    if (ctx->r21 != ctx->r2) {
        // 0x802240AC: lw          $t8, 0x6C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X6C);
            goto L_802240B8;
    }
    // 0x802240AC: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x802240B0: b           L_802240E4
    // 0x802240B4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
        goto L_802240E4;
    // 0x802240B4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_802240B8:
    // 0x802240B8: bne         $s6, $v0, L_802240C8
    if (ctx->r22 != ctx->r2) {
        // 0x802240BC: nop
    
            goto L_802240C8;
    }
    // 0x802240BC: nop

    // 0x802240C0: b           L_802240E4
    // 0x802240C4: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
        goto L_802240E4;
    // 0x802240C4: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_802240C8:
    // 0x802240C8: bne         $fp, $v0, L_802240D8
    if (ctx->r30 != ctx->r2) {
        // 0x802240CC: nop
    
            goto L_802240D8;
    }
    // 0x802240CC: nop

    // 0x802240D0: b           L_802240E4
    // 0x802240D4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
        goto L_802240E4;
    // 0x802240D4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_802240D8:
    // 0x802240D8: bnel        $s7, $v0, L_802240E8
    if (ctx->r23 != ctx->r2) {
        // 0x802240DC: lw          $t7, 0x4($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X4);
            goto L_802240E8;
    }
    goto skip_0;
    // 0x802240DC: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x802240E0: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_802240E4:
    // 0x802240E4: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
L_802240E8:
    // 0x802240E8: sltu        $at, $s3, $t8
    ctx->r1 = ctx->r19 < ctx->r24 ? 1 : 0;
    // 0x802240EC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x802240F0: bne         $at, $zero, L_80224090
    if (ctx->r1 != 0) {
        // 0x802240F4: addu        $s1, $s1, $t7
        ctx->r17 = ADD32(ctx->r17, ctx->r15);
            goto L_80224090;
    }
    // 0x802240F4: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
L_802240F8:
    // 0x802240F8: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x802240FC: lui         $s1, 0x0
    ctx->r17 = S32(0X0 << 16);
    // 0x80224100: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x80224104: bne         $t9, $zero, L_80224120
    if (ctx->r25 != 0) {
        // 0x80224108: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80224120;
    }
    // 0x80224108: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8022410C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80224110: jal         0x80231A24
    // 0x80224114: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80224114: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x80224118: b           L_8022453C
    // 0x8022411C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8022453C;
    // 0x8022411C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80224120:
    // 0x80224120: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x80224124: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x80224128: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x8022412C: jal         0x802245B8
    // 0x80224130: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    static_3_802245B8(rdram, ctx);
        goto after_3;
    // 0x80224130: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    after_3:
    // 0x80224134: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80224138: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x8022413C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80224140: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80224144: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x80224148: sh          $t1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r9;
    // 0x8022414C: sh          $t2, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r10;
    // 0x80224150: jal         0x8022466C
    // 0x80224154: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    static_3_8022466C(rdram, ctx);
        goto after_4;
    // 0x80224154: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    after_4:
    // 0x80224158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022415C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80224160: jal         0x8022B780
    // 0x80224164: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    static_3_8022B780(rdram, ctx);
        goto after_5;
    // 0x80224164: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_5:
    // 0x80224168: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8022416C: lui         $t4, 0x5556
    ctx->r12 = S32(0X5556 << 16);
    // 0x80224170: lui         $t5, 0x5556
    ctx->r13 = S32(0X5556 << 16);
    // 0x80224174: lui         $ra, 0x5556
    ctx->r31 = S32(0X5556 << 16);
    // 0x80224178: ori         $ra, $ra, 0x4D53
    ctx->r31 = ctx->r31 | 0X4D53;
    // 0x8022417C: ori         $t5, $t5, 0x4D44
    ctx->r13 = ctx->r13 | 0X4D44;
    // 0x80224180: ori         $t4, $t4, 0x4D43
    ctx->r12 = ctx->r12 | 0X4D43;
    // 0x80224184: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80224188: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x8022418C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80224190: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80224194: beq         $t6, $zero, L_802244C8
    if (ctx->r14 == 0) {
        // 0x80224198: lw          $v1, 0x68($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X68);
            goto L_802244C8;
    }
    // 0x80224198: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
L_8022419C:
    // 0x8022419C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802241A0: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x802241A4: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x802241A8: bnel        $at, $zero, L_8022420C
    if (ctx->r1 != 0) {
        // 0x802241AC: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_8022420C;
    }
    goto skip_1;
    // 0x802241AC: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    skip_1:
    // 0x802241B0: beql        $v0, $t5, L_80224300
    if (ctx->r2 == ctx->r13) {
        // 0x802241B4: lhu         $t9, 0x2($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X2);
            goto L_80224300;
    }
    goto skip_2;
    // 0x802241B4: lhu         $t9, 0x2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2);
    skip_2:
    // 0x802241B8: beq         $v0, $ra, L_80224488
    if (ctx->r2 == ctx->r31) {
        // 0x802241BC: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224488;
    }
    // 0x802241BC: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x802241C0: ori         $at, $at, 0x5351
    ctx->r1 = ctx->r1 | 0X5351;
    // 0x802241C4: beql        $v0, $at, L_802243D8
    if (ctx->r2 == ctx->r1) {
        // 0x802241C8: lhu         $t6, 0xE($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0XE);
            goto L_802243D8;
    }
    goto skip_3;
    // 0x802241C8: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    skip_3:
    // 0x802241CC: beql        $v0, $s6, L_80224444
    if (ctx->r2 == ctx->r22) {
        // 0x802241D0: lhu         $t8, 0x1A($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X1A);
            goto L_80224444;
    }
    goto skip_4;
    // 0x802241D0: lhu         $t8, 0x1A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1A);
    skip_4:
    // 0x802241D4: beq         $v0, $s4, L_80224288
    if (ctx->r2 == ctx->r20) {
        // 0x802241D8: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224288;
    }
    // 0x802241D8: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x802241DC: ori         $at, $at, 0x5450
    ctx->r1 = ctx->r1 | 0X5450;
    // 0x802241E0: beq         $v0, $at, L_8022441C
    if (ctx->r2 == ctx->r1) {
        // 0x802241E4: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_8022441C;
    }
    // 0x802241E4: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x802241E8: ori         $at, $at, 0x5452
    ctx->r1 = ctx->r1 | 0X5452;
    // 0x802241EC: beq         $v0, $at, L_802243F8
    if (ctx->r2 == ctx->r1) {
        // 0x802241F0: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_802243F8;
    }
    // 0x802241F0: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x802241F4: ori         $at, $at, 0x5458
    ctx->r1 = ctx->r1 | 0X5458;
    // 0x802241F8: beql        $v0, $at, L_80224348
    if (ctx->r2 == ctx->r1) {
        // 0x802241FC: lhu         $t6, 0x6($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X6);
            goto L_80224348;
    }
    goto skip_5;
    // 0x802241FC: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
    skip_5:
    // 0x80224200: b           L_80224494
    // 0x80224204: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
        goto L_80224494;
    // 0x80224204: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x80224208: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
L_8022420C:
    // 0x8022420C: ori         $at, $at, 0x454F
    ctx->r1 = ctx->r1 | 0X454F;
    // 0x80224210: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80224214: bne         $at, $zero, L_8022424C
    if (ctx->r1 != 0) {
        // 0x80224218: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_8022424C;
    }
    // 0x80224218: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x8022421C: ori         $at, $at, 0x4654
    ctx->r1 = ctx->r1 | 0X4654;
    // 0x80224220: beql        $v0, $at, L_802242B8
    if (ctx->r2 == ctx->r1) {
        // 0x80224224: lhu         $t6, 0x14($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X14);
            goto L_802242B8;
    }
    goto skip_6;
    // 0x80224224: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    skip_6:
    // 0x80224228: beq         $v0, $s7, L_8022438C
    if (ctx->r2 == ctx->r23) {
        // 0x8022422C: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_8022438C;
    }
    // 0x8022422C: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224230: ori         $at, $at, 0x4C56
    ctx->r1 = ctx->r1 | 0X4C56;
    // 0x80224234: beql        $v0, $at, L_802243B4
    if (ctx->r2 == ctx->r1) {
        // 0x80224238: lhu         $t8, 0x10($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X10);
            goto L_802243B4;
    }
    goto skip_7;
    // 0x80224238: lhu         $t8, 0x10($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X10);
    skip_7:
    // 0x8022423C: beql        $v0, $fp, L_80224468
    if (ctx->r2 == ctx->r30) {
        // 0x80224240: lhu         $t6, 0x1C($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X1C);
            goto L_80224468;
    }
    goto skip_8;
    // 0x80224240: lhu         $t6, 0x1C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X1C);
    skip_8:
    // 0x80224244: b           L_80224494
    // 0x80224248: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
        goto L_80224494;
    // 0x80224248: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
L_8022424C:
    // 0x8022424C: beq         $v0, $zero, L_802244B0
    if (ctx->r2 == 0) {
        // 0x80224250: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_802244B0;
    }
    // 0x80224250: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224254: ori         $at, $at, 0x414E
    ctx->r1 = ctx->r1 | 0X414E;
    // 0x80224258: beql        $v0, $at, L_80224294
    if (ctx->r2 == ctx->r1) {
        // 0x8022425C: lhu         $t8, 0x12($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X12);
            goto L_80224294;
    }
    goto skip_9;
    // 0x8022425C: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    skip_9:
    // 0x80224260: beq         $v0, $s5, L_802242D8
    if (ctx->r2 == ctx->r21) {
        // 0x80224264: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_802242D8;
    }
    // 0x80224264: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224268: ori         $at, $at, 0x4354
    ctx->r1 = ctx->r1 | 0X4354;
    // 0x8022426C: beq         $v0, $at, L_80224320
    if (ctx->r2 == ctx->r1) {
        // 0x80224270: lui         $at, 0x5556
        ctx->r1 = S32(0X5556 << 16);
            goto L_80224320;
    }
    // 0x80224270: lui         $at, 0x5556
    ctx->r1 = S32(0X5556 << 16);
    // 0x80224274: ori         $at, $at, 0x454E
    ctx->r1 = ctx->r1 | 0X454E;
    // 0x80224278: beql        $v0, $at, L_8022436C
    if (ctx->r2 == ctx->r1) {
        // 0x8022427C: lhu         $t7, 0x8($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X8);
            goto L_8022436C;
    }
    goto skip_10;
    // 0x8022427C: lhu         $t7, 0x8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8);
    skip_10:
    // 0x80224280: b           L_80224494
    // 0x80224284: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
        goto L_80224494;
    // 0x80224284: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
L_80224288:
    // 0x80224288: b           L_802244B0
    // 0x8022428C: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
        goto L_802244B0;
    // 0x8022428C: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x80224290: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
L_80224294:
    // 0x80224294: lw          $t7, 0x24($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X24);
    // 0x80224298: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8022429C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x802242A0: sw          $s1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r17;
    // 0x802242A4: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x802242A8: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x802242AC: b           L_802244B0
    // 0x802242B0: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
        goto L_802244B0;
    // 0x802242B0: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x802242B4: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
L_802242B8:
    // 0x802242B8: lw          $t9, 0x28($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X28);
    // 0x802242BC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x802242C0: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x802242C4: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x802242C8: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x802242CC: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x802242D0: b           L_802244B0
    // 0x802242D4: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
        goto L_802244B0;
    // 0x802242D4: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
L_802242D8:
    // 0x802242D8: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x802242DC: lw          $t8, 0x2C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X2C);
    // 0x802242E0: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x802242E4: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x802242E8: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x802242EC: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x802242F0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802242F4: b           L_802244B0
    // 0x802242F8: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
        goto L_802244B0;
    // 0x802242F8: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x802242FC: lhu         $t9, 0x2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2);
L_80224300:
    // 0x80224300: lw          $t6, 0x4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X4);
    // 0x80224304: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80224308: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8022430C: sw          $s1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r17;
    // 0x80224310: lhu         $t9, 0x2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2);
    // 0x80224314: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80224318: b           L_802244B0
    // 0x8022431C: sh          $t6, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r14;
        goto L_802244B0;
    // 0x8022431C: sh          $t6, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r14;
L_80224320:
    // 0x80224320: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80224324: lw          $t7, 0x8($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X8);
    // 0x80224328: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8022432C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80224330: sw          $s1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r17;
    // 0x80224334: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x80224338: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8022433C: b           L_802244B0
    // 0x80224340: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
        goto L_802244B0;
    // 0x80224340: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
    // 0x80224344: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
L_80224348:
    // 0x80224348: lw          $t9, 0xC($s2)
    ctx->r25 = MEM_W(ctx->r18, 0XC);
    // 0x8022434C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80224350: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80224354: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x80224358: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
    // 0x8022435C: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80224360: b           L_802244B0
    // 0x80224364: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
        goto L_802244B0;
    // 0x80224364: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
    // 0x80224368: lhu         $t7, 0x8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8);
L_8022436C:
    // 0x8022436C: lw          $t8, 0x10($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X10);
    // 0x80224370: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80224374: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x80224378: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x8022437C: lhu         $t7, 0x8($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8);
    // 0x80224380: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80224384: b           L_802244B0
    // 0x80224388: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
        goto L_802244B0;
    // 0x80224388: sh          $t8, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r24;
L_8022438C:
    // 0x8022438C: lhu         $t9, 0xA($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XA);
    // 0x80224390: lw          $t6, 0x14($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X14);
    // 0x80224394: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80224398: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8022439C: sw          $s1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r17;
    // 0x802243A0: lhu         $t9, 0xA($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XA);
    // 0x802243A4: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x802243A8: b           L_802244B0
    // 0x802243AC: sh          $t6, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r14;
        goto L_802244B0;
    // 0x802243AC: sh          $t6, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r14;
    // 0x802243B0: lhu         $t8, 0x10($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X10);
L_802243B4:
    // 0x802243B4: lw          $t7, 0x20($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X20);
    // 0x802243B8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802243BC: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x802243C0: sw          $s1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r17;
    // 0x802243C4: lhu         $t8, 0x10($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X10);
    // 0x802243C8: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x802243CC: b           L_802244B0
    // 0x802243D0: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
        goto L_802244B0;
    // 0x802243D0: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
    // 0x802243D4: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
L_802243D8:
    // 0x802243D8: lw          $t9, 0x1C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X1C);
    // 0x802243DC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x802243E0: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x802243E4: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x802243E8: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
    // 0x802243EC: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x802243F0: b           L_802244B0
    // 0x802243F4: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
        goto L_802244B0;
    // 0x802243F4: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
L_802243F8:
    // 0x802243F8: lhu         $t7, 0xC($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XC);
    // 0x802243FC: lw          $t8, 0x18($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X18);
    // 0x80224400: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80224404: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x80224408: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x8022440C: lhu         $t7, 0xC($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XC);
    // 0x80224410: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80224414: b           L_802244B0
    // 0x80224418: sh          $t8, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r24;
        goto L_802244B0;
    // 0x80224418: sh          $t8, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r24;
L_8022441C:
    // 0x8022441C: lhu         $t9, 0x1E($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1E);
    // 0x80224420: lw          $t6, 0x40($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X40);
    // 0x80224424: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80224428: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8022442C: sw          $s1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r17;
    // 0x80224430: lhu         $t9, 0x1E($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1E);
    // 0x80224434: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80224438: b           L_802244B0
    // 0x8022443C: sh          $t6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r14;
        goto L_802244B0;
    // 0x8022443C: sh          $t6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r14;
    // 0x80224440: lhu         $t8, 0x1A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1A);
L_80224444:
    // 0x80224444: lw          $t7, 0x34($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X34);
    // 0x80224448: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8022444C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80224450: sw          $s1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r17;
    // 0x80224454: lhu         $t8, 0x1A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1A);
    // 0x80224458: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8022445C: b           L_802244B0
    // 0x80224460: sh          $t7, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r15;
        goto L_802244B0;
    // 0x80224460: sh          $t7, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r15;
    // 0x80224464: lhu         $t6, 0x1C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X1C);
L_80224468:
    // 0x80224468: lw          $t9, 0x38($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X38);
    // 0x8022446C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80224470: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80224474: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x80224478: lhu         $t6, 0x1C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X1C);
    // 0x8022447C: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80224480: b           L_802244B0
    // 0x80224484: sh          $t9, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r25;
        goto L_802244B0;
    // 0x80224484: sh          $t9, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r25;
L_80224488:
    // 0x80224488: b           L_802244B0
    // 0x8022448C: sw          $s1, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r17;
        goto L_802244B0;
    // 0x8022448C: sw          $s1, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r17;
    // 0x80224490: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
L_80224494:
    // 0x80224494: lw          $t8, 0x30($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X30);
    // 0x80224498: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8022449C: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x802244A0: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x802244A4: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x802244A8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802244AC: sh          $t8, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r24;
L_802244B0:
    // 0x802244B0: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x802244B4: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x802244B8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x802244BC: sltu        $at, $s3, $t9
    ctx->r1 = ctx->r19 < ctx->r25 ? 1 : 0;
    // 0x802244C0: bne         $at, $zero, L_8022419C
    if (ctx->r1 != 0) {
        // 0x802244C4: addu        $s1, $s1, $t6
        ctx->r17 = ADD32(ctx->r17, ctx->r14);
            goto L_8022419C;
    }
    // 0x802244C4: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
L_802244C8:
    // 0x802244C8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x802244CC: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x802244D0: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x802244D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802244D8: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x802244DC: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x802244E0: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x802244E4: jal         0x8022393C
    // 0x802244E8: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    func_8022393C(rdram, ctx);
        goto after_6;
    // 0x802244E8: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    after_6:
    // 0x802244EC: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x802244F0: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x802244F4: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x802244F8: bne         $v0, $zero, L_80224074
    if (ctx->r2 != 0) {
        // 0x802244FC: lw          $t3, 0x50($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X50);
            goto L_80224074;
    }
    // 0x802244FC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
L_80224500:
    // 0x80224500: jal         0x802238F0
    // 0x80224504: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    static_3_802238F0(rdram, ctx);
        goto after_7;
    // 0x80224504: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    after_7:
    // 0x80224508: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022450C: lhu         $a0, 0x0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X0);
    // 0x80224510: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80224514: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80224518: jal         0x8022BA58
    // 0x8022451C: sll         $a0, $t7, 4
    ctx->r4 = S32(ctx->r15 << 4);
    static_3_8022BA58(rdram, ctx);
        goto after_8;
    // 0x8022451C: sll         $a0, $t7, 4
    ctx->r4 = S32(ctx->r15 << 4);
    after_8:
    // 0x80224520: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224524: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x80224528: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022452C: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80224530: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80224534: sw          $zero, 0x0($at)
    MEM_W(0X0, ctx->r1) = 0;
    // 0x80224538: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8022453C:
    // 0x8022453C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80224540: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80224544: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80224548: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022454C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80224550: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80224554: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80224558: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022455C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80224560: jr          $ra
    // 0x80224564: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80224564: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void D_80294FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295078: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8029507C: jr          $ra
    // 0x80295080: sb          $a1, 0x90($a0)
    MEM_B(0X90, ctx->r4) = ctx->r5;
    return;
    // 0x80295080: sb          $a1, 0x90($a0)
    MEM_B(0X90, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_802EF484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802EF504: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802EF508: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802EF50C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802EF510: bne         $a0, $zero, L_802EF528
    if (ctx->r4 != 0) {
        // 0x802EF514: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802EF528;
    }
    // 0x802EF514: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802EF518: jal         0x802C67EC
    // 0x802EF51C: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802EF51C: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    after_0:
    // 0x802EF520: beq         $v0, $zero, L_802EF614
    if (ctx->r2 == 0) {
        // 0x802EF524: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802EF614;
    }
    // 0x802EF524: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802EF528:
    // 0x802EF528: jal         0x8031F5A0
    // 0x802EF52C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8031F5A0(rdram, ctx);
        goto after_1;
    // 0x802EF52C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802EF530: addiu       $a0, $s0, 0xEC
    ctx->r4 = ADD32(ctx->r16, 0XEC);
    // 0x802EF534: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802EF538: addiu       $a3, $a3, -0x5B40
    ctx->r7 = ADD32(ctx->r7, -0X5B40);
    // 0x802EF53C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802EF540: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802EF544: jal         0x802C6930
    // 0x802EF548: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    static_3_802C6930(rdram, ctx);
        goto after_2;
    // 0x802EF548: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x802EF54C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802EF550: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
    // 0x802EF554: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x802EF558: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802EF55C: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF560: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x802EF564: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802EF568: addiu       $t8, $zero, 0x18D
    ctx->r24 = ADD32(0, 0X18D);
    // 0x802EF56C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802EF570: sh          $a2, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r6;
    // 0x802EF574: sh          $a2, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r6;
    // 0x802EF578: sh          $t9, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r25;
    // 0x802EF57C: sh          $t8, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r24;
    // 0x802EF580: sh          $a3, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r7;
    // 0x802EF584: sh          $a3, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r7;
    // 0x802EF588: sh          $zero, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = 0;
    // 0x802EF58C: sw          $t7, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r15;
    // 0x802EF590: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x802EF594: lw          $t9, 0x54($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X54);
    // 0x802EF598: lh          $t0, 0x50($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X50);
    // 0x802EF59C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x802EF5A0: jalr        $t9
    // 0x802EF5A4: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802EF5A4: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_3:
    // 0x802EF5A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802EF5AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802EF5B0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802EF5B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802EF5B8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802EF5BC: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x802EF5C0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802EF5C4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802EF5C8: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x802EF5CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802EF5D0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802EF5D4: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802EF5D8: nop

    // 0x802EF5DC: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x802EF5E0: sh          $v0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r2;
    // 0x802EF5E4: sh          $v0, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r2;
    // 0x802EF5E8: sh          $v0, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = ctx->r2;
    // 0x802EF5EC: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    // 0x802EF5F0: sh          $v0, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r2;
    // 0x802EF5F4: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x802EF5F8: sh          $v0, 0xE6($s0)
    MEM_H(0XE6, ctx->r16) = ctx->r2;
    // 0x802EF5FC: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802EF600: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
    // 0x802EF604: lw          $t9, 0x6C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X6C);
    // 0x802EF608: lh          $t3, 0x68($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X68);
    // 0x802EF60C: jalr        $t9
    // 0x802EF610: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802EF610: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    after_4:
L_802EF614:
    // 0x802EF614: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802EF618: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802EF61C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802EF620: jr          $ra
    // 0x802EF624: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802EF624: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80283DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283E2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80283E30: jr          $ra
    // 0x80283E34: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x80283E34: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80216B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80216B88: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x80216B8C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80216B90: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80216B94: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80216B98: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x80216B9C: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80216BA0: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80216BA4: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80216BA8: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80216BAC: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80216BB0: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x80216BB4: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80216BB8: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80216BBC: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x80216BC0: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x80216BC4: swc1        $f12, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f12.u32l;
    // 0x80216BC8: swc1        $f14, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f14.u32l;
    // 0x80216BCC: sw          $a2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r6;
    // 0x80216BD0: sw          $a3, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r7;
    // 0x80216BD4: lhu         $t9, 0x0($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X0);
    // 0x80216BD8: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80216BDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80216BE0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80216BE4: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80216BE8: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80216BEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80216BF0: lw          $s7, 0x8($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X8);
    // 0x80216BF4: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80216BF8: lbu         $fp, 0x4($s7)
    ctx->r30 = MEM_BU(ctx->r23, 0X4);
    // 0x80216BFC: sw          $v0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r2;
    // 0x80216C00: jal         0x80228CE0
    // 0x80216C04: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    static_3_80228CE0(rdram, ctx);
        goto after_0;
    // 0x80216C04: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    after_0:
    // 0x80216C08: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80216C0C: blez        $fp, L_80216E48
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80216C10: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80216E48;
    }
    // 0x80216C10: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216C14: lwc1        $f20, 0x108($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80216C18: addiu       $s6, $sp, 0x9C
    ctx->r22 = ADD32(ctx->r29, 0X9C);
    // 0x80216C1C: lw          $v0, 0x104($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X104);
    // 0x80216C20: lw          $t3, 0x1C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X1C);
L_80216C24:
    // 0x80216C24: sll         $s5, $s3, 3
    ctx->r21 = S32(ctx->r19 << 3);
    // 0x80216C28: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80216C2C: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x80216C30: addu        $s5, $s5, $s3
    ctx->r21 = ADD32(ctx->r21, ctx->r19);
    // 0x80216C34: sllv        $t5, $t4, $s3
    ctx->r13 = S32(ctx->r12 << (ctx->r19 & 31));
    // 0x80216C38: sll         $s5, $s5, 2
    ctx->r21 = S32(ctx->r21 << 2);
    // 0x80216C3C: and         $t6, $t3, $t5
    ctx->r14 = ctx->r11 & ctx->r13;
    // 0x80216C40: beq         $t6, $zero, L_80216C54
    if (ctx->r14 == 0) {
        // 0x80216C44: addu        $s4, $t2, $s5
        ctx->r20 = ADD32(ctx->r10, ctx->r21);
            goto L_80216C54;
    }
    // 0x80216C44: addu        $s4, $t2, $s5
    ctx->r20 = ADD32(ctx->r10, ctx->r21);
    // 0x80216C48: slti        $at, $s3, 0x20
    ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x80216C4C: bne         $at, $zero, L_80216C68
    if (ctx->r1 != 0) {
        // 0x80216C50: nop
    
            goto L_80216C68;
    }
    // 0x80216C50: nop

L_80216C54:
    // 0x80216C54: lbu         $t8, 0x7($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X7);
    // 0x80216C58: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80216C5C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80216C60: beq         $t9, $zero, L_80216C70
    if (ctx->r25 == 0) {
        // 0x80216C64: nop
    
            goto L_80216C70;
    }
    // 0x80216C64: nop

L_80216C68:
    // 0x80216C68: b           L_80216C70
    // 0x80216C6C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80216C70;
    // 0x80216C6C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80216C70:
    // 0x80216C70: bne         $s0, $zero, L_80216C88
    if (ctx->r16 != 0) {
        // 0x80216C74: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80216C88;
    }
    // 0x80216C74: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80216C78: lbu         $t7, 0x7($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X7);
    // 0x80216C7C: andi        $t0, $t7, 0x2
    ctx->r8 = ctx->r15 & 0X2;
    // 0x80216C80: bnel        $t0, $zero, L_80216E30
    if (ctx->r8 != 0) {
        // 0x80216C84: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80216E30;
    }
    goto skip_0;
    // 0x80216C84: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
L_80216C88:
    // 0x80216C88: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x80216C8C: sll         $t2, $s3, 6
    ctx->r10 = S32(ctx->r19 << 6);
    // 0x80216C90: or          $t6, $sp, $zero
    ctx->r14 = ctx->r29 | 0;
    // 0x80216C94: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x80216C98: addiu       $t5, $t4, 0x3C
    ctx->r13 = ADD32(ctx->r12, 0X3C);
L_80216C9C:
    // 0x80216C9C: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x80216CA0: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x80216CA4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80216CA8: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80216CAC: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x80216CB0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80216CB4: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x80216CB8: bne         $t4, $t5, L_80216C9C
    if (ctx->r12 != ctx->r13) {
        // 0x80216CBC: sw          $at, 0x4($t6)
        MEM_W(0X4, ctx->r14) = ctx->r1;
            goto L_80216C9C;
    }
    // 0x80216CBC: sw          $at, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r1;
    // 0x80216CC0: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x80216CC4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80216CC8: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80216CCC: jal         0x80228F38
    // 0x80216CD0: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    static_3_80228F38(rdram, ctx);
        goto after_1;
    // 0x80216CD0: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_1:
    // 0x80216CD4: bne         $s3, $zero, L_80216D28
    if (ctx->r19 != 0) {
        // 0x80216CD8: lwc1        $f10, 0xCC($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
            goto L_80216D28;
    }
    // 0x80216CD8: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80216CDC: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x80216CE0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80216CE4: lwc1        $f8, 0x20($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X20);
    // 0x80216CE8: div.s       $f0, $f8, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80216CEC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80216CF0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80216CF4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80216CF8: jal         0x8022A210
    // 0x80216CFC: nop

    static_3_8022A210(rdram, ctx);
        goto after_2;
    // 0x80216CFC: nop

    after_2:
    // 0x80216D00: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80216D04: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80216D08: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80216D0C: div.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80216D10: div.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80216D14: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    // 0x80216D18: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80216D1C: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x80216D20: b           L_80216D4C
    // 0x80216D24: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
        goto L_80216D4C;
    // 0x80216D24: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
L_80216D28:
    // 0x80216D28: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80216D2C: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80216D30: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80216D34: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x80216D38: nop

    // 0x80216D3C: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80216D40: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    // 0x80216D44: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x80216D48: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
L_80216D4C:
    // 0x80216D4C: jal         0x80228D0C
    // 0x80216D50: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    static_3_80228D0C(rdram, ctx);
        goto after_3;
    // 0x80216D50: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x80216D54: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80216D58: sll         $t9, $s2, 16
    ctx->r25 = S32(ctx->r18 << 16);
    // 0x80216D5C: beq         $s0, $zero, L_80216DB4
    if (ctx->r16 == 0) {
        // 0x80216D60: sra         $s2, $t9, 16
        ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80216DB4;
    }
    // 0x80216D60: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80216D64: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80216D68: addiu       $v0, $v0, 0x0
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80216D6C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80216D70: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80216D74: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80216D78: sll         $t2, $s3, 24
    ctx->r10 = S32(ctx->r19 << 24);
    // 0x80216D7C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80216D80: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80216D84: jal         0x80228CF0
    // 0x80216D88: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    static_3_80228CF0(rdram, ctx);
        goto after_4;
    // 0x80216D88: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    after_4:
    // 0x80216D8C: lwc1        $f12, 0xF8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80216D90: lwc1        $f14, 0xFC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80216D94: lw          $a2, 0x100($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X100);
    // 0x80216D98: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80216D9C: jal         0x80216534
    // 0x80216DA0: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    static_3_80216534(rdram, ctx);
        goto after_5;
    // 0x80216DA0: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_5:
    // 0x80216DA4: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80216DA8: sra         $t5, $v1, 16
    ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80216DAC: b           L_80216DB8
    // 0x80216DB0: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
        goto L_80216DB8;
    // 0x80216DB0: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_80216DB4:
    // 0x80216DB4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80216DB8:
    // 0x80216DB8: bltz        $v1, L_80216DC8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80216DBC: addiu       $t4, $s3, 0x1
        ctx->r12 = ADD32(ctx->r19, 0X1);
            goto L_80216DC8;
    }
    // 0x80216DBC: addiu       $t4, $s3, 0x1
    ctx->r12 = ADD32(ctx->r19, 0X1);
    // 0x80216DC0: b           L_80216E74
    // 0x80216DC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80216E74;
    // 0x80216DC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80216DC8:
    // 0x80216DC8: bnel        $t4, $fp, L_80216DDC
    if (ctx->r12 != ctx->r30) {
        // 0x80216DCC: lw          $t8, 0x0($s7)
        ctx->r24 = MEM_W(ctx->r23, 0X0);
            goto L_80216DDC;
    }
    goto skip_1;
    // 0x80216DCC: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    skip_1:
    // 0x80216DD0: b           L_80216E48
    // 0x80216DD4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_80216E48;
    // 0x80216DD4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216DD8: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
L_80216DDC:
    // 0x80216DDC: lbu         $t6, 0x6($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X6);
    // 0x80216DE0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80216DE4: addu        $t9, $t8, $s5
    ctx->r25 = ADD32(ctx->r24, ctx->r21);
    // 0x80216DE8: lbu         $t7, 0x2A($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X2A);
    // 0x80216DEC: subu        $s1, $t6, $t7
    ctx->r17 = SUB32(ctx->r14, ctx->r15);
    // 0x80216DF0: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x80216DF4: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80216DF8: bltzl       $s1, L_80216E2C
    if (SIGNED(ctx->r17) < 0) {
        // 0x80216DFC: lw          $v0, 0x104($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X104);
            goto L_80216E2C;
    }
    goto skip_2;
    // 0x80216DFC: lw          $v0, 0x104($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X104);
    skip_2:
L_80216E00:
    // 0x80216E00: jal         0x80228D9C
    // 0x80216E04: nop

    static_3_80228D9C(rdram, ctx);
        goto after_6;
    // 0x80216E04: nop

    after_6:
    // 0x80216E08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80216E0C: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x80216E10: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80216E14: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80216E18: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x80216E1C: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80216E20: beq         $at, $zero, L_80216E00
    if (ctx->r1 == 0) {
        // 0x80216E24: sra         $s2, $t2, 16
        ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
            goto L_80216E00;
    }
    // 0x80216E24: sra         $s2, $t2, 16
    ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80216E28: lw          $v0, 0x104($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X104);
L_80216E2C:
    // 0x80216E2C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80216E30:
    // 0x80216E30: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x80216E34: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80216E38: slt         $at, $s3, $fp
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x80216E3C: bnel        $at, $zero, L_80216C24
    if (ctx->r1 != 0) {
        // 0x80216E40: lw          $t3, 0x1C($v0)
        ctx->r11 = MEM_W(ctx->r2, 0X1C);
            goto L_80216C24;
    }
    goto skip_3;
    // 0x80216E40: lw          $t3, 0x1C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X1C);
    skip_3:
    // 0x80216E44: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80216E48:
    // 0x80216E48: blezl       $s2, L_80216E74
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80216E4C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80216E74;
    }
    goto skip_4;
    // 0x80216E4C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_4:
L_80216E50:
    // 0x80216E50: jal         0x80228D9C
    // 0x80216E54: nop

    static_3_80228D9C(rdram, ctx);
        goto after_7;
    // 0x80216E54: nop

    after_7:
    // 0x80216E58: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80216E5C: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80216E60: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80216E64: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80216E68: bne         $at, $zero, L_80216E50
    if (ctx->r1 != 0) {
        // 0x80216E6C: nop
    
            goto L_80216E50;
    }
    // 0x80216E6C: nop

    // 0x80216E70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80216E74:
    // 0x80216E74: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80216E78: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x80216E7C: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x80216E80: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80216E84: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x80216E88: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80216E8C: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x80216E90: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x80216E94: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x80216E98: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80216E9C: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x80216EA0: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x80216EA4: jr          $ra
    // 0x80216EA8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x80216EA8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void D_8029FA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029FAC4: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x8029FAC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8029FACC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8029FAD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029FAD4: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x8029FAD8: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8029FADC: bc1tl       L_8029FEB0
    if (c1cs) {
        // 0x8029FAE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029FEB0;
    }
    goto skip_0;
    // 0x8029FAE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8029FAE4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x8029FAE8: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8029FAEC: jal         0x80300424
    // 0x8029FAF0: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    static_3_80300424(rdram, ctx);
        goto after_0;
    // 0x8029FAF0: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8029FAF4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029FAF8: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8029FAFC: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8029FB00: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x8029FB04: jal         0x80300424
    // 0x8029FB08: add.s       $f12, $f14, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f6.fl;
    static_3_80300424(rdram, ctx);
        goto after_1;
    // 0x8029FB08: add.s       $f12, $f14, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f6.fl;
    after_1:
    // 0x8029FB0C: lbu         $v0, 0x7B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7B);
    // 0x8029FB10: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8029FB14: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8029FB18: beq         $v0, $at, L_8029FB3C
    if (ctx->r2 == ctx->r1) {
        // 0x8029FB1C: lwc1        $f2, 0x6C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_8029FB3C;
    }
    // 0x8029FB1C: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8029FB20: addiu       $at, $zero, 0x79
    ctx->r1 = ADD32(0, 0X79);
    // 0x8029FB24: beq         $v0, $at, L_8029FC60
    if (ctx->r2 == ctx->r1) {
        // 0x8029FB28: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_8029FC60;
    }
    // 0x8029FB28: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x8029FB2C: beql        $v0, $at, L_8029FD88
    if (ctx->r2 == ctx->r1) {
        // 0x8029FB30: lwc1        $f8, 0x0($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
            goto L_8029FD88;
    }
    goto skip_1;
    // 0x8029FB30: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    skip_1:
    // 0x8029FB34: b           L_8029FEA4
    // 0x8029FB38: nop

        goto L_8029FEA4;
    // 0x8029FB38: nop

L_8029FB3C:
    // 0x8029FB3C: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8029FB40: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8029FB44: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8029FB48: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8029FB4C: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8029FB50: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8029FB54: lwc1        $f18, 0xC($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8029FB58: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x8029FB5C: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8029FB60: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8029FB64: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8029FB68: nop

    // 0x8029FB6C: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8029FB70: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8029FB74: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x8029FB78: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8029FB7C: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8029FB80: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8029FB84: nop

    // 0x8029FB88: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8029FB8C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8029FB90: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x8029FB94: lwc1        $f16, 0x18($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8029FB98: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8029FB9C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8029FBA0: nop

    // 0x8029FBA4: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8029FBA8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8029FBAC: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x8029FBB0: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8029FBB4: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8029FBB8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8029FBBC: nop

    // 0x8029FBC0: mul.s       $f18, $f2, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8029FBC4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8029FBC8: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x8029FBCC: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8029FBD0: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8029FBD4: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8029FBD8: nop

    // 0x8029FBDC: mul.s       $f16, $f2, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8029FBE0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8029FBE4: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x8029FBE8: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8029FBEC: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8029FBF0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8029FBF4: nop

    // 0x8029FBF8: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8029FBFC: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8029FC00: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x8029FC04: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8029FC08: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8029FC0C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8029FC10: nop

    // 0x8029FC14: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8029FC18: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8029FC1C: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x8029FC20: lwc1        $f16, 0x2C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8029FC24: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8029FC28: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8029FC2C: nop

    // 0x8029FC30: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8029FC34: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8029FC38: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x8029FC3C: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8029FC40: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x8029FC44: lwc1        $f16, 0x34($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8029FC48: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x8029FC4C: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8029FC50: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x8029FC54: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8029FC58: b           L_8029FEA4
    // 0x8029FC5C: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
        goto L_8029FEA4;
    // 0x8029FC5C: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
L_8029FC60:
    // 0x8029FC60: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8029FC64: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8029FC68: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8029FC6C: nop

    // 0x8029FC70: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8029FC74: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8029FC78: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8029FC7C: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8029FC80: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8029FC84: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8029FC88: nop

    // 0x8029FC8C: mul.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8029FC90: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8029FC94: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x8029FC98: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8029FC9C: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8029FCA0: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8029FCA4: nop

    // 0x8029FCA8: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8029FCAC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8029FCB0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x8029FCB4: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8029FCB8: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8029FCBC: mul.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8029FCC0: nop

    // 0x8029FCC4: mul.s       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8029FCC8: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8029FCCC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8029FCD0: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8029FCD4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8029FCD8: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8029FCDC: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x8029FCE0: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8029FCE4: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x8029FCE8: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8029FCEC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x8029FCF0: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8029FCF4: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8029FCF8: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8029FCFC: nop

    // 0x8029FD00: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8029FD04: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8029FD08: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x8029FD0C: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8029FD10: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8029FD14: mul.s       $f18, $f2, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8029FD18: nop

    // 0x8029FD1C: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8029FD20: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8029FD24: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x8029FD28: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8029FD2C: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8029FD30: mul.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8029FD34: nop

    // 0x8029FD38: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8029FD3C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8029FD40: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x8029FD44: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8029FD48: lwc1        $f6, 0x2C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8029FD4C: mul.s       $f10, $f2, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8029FD50: nop

    // 0x8029FD54: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8029FD58: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8029FD5C: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x8029FD60: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8029FD64: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8029FD68: lwc1        $f16, 0x34($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8029FD6C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x8029FD70: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8029FD74: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x8029FD78: lwc1        $f10, 0x3C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8029FD7C: b           L_8029FEA4
    // 0x8029FD80: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
        goto L_8029FEA4;
    // 0x8029FD80: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x8029FD84: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
L_8029FD88:
    // 0x8029FD88: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8029FD8C: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8029FD90: nop

    // 0x8029FD94: mul.s       $f16, $f2, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8029FD98: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8029FD9C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8029FDA0: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8029FDA4: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8029FDA8: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8029FDAC: nop

    // 0x8029FDB0: mul.s       $f18, $f2, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8029FDB4: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8029FDB8: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x8029FDBC: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8029FDC0: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8029FDC4: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8029FDC8: nop

    // 0x8029FDCC: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8029FDD0: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8029FDD4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x8029FDD8: lwc1        $f16, 0xC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8029FDDC: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8029FDE0: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8029FDE4: nop

    // 0x8029FDE8: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8029FDEC: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8029FDF0: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8029FDF4: lwc1        $f18, 0x10($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8029FDF8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8029FDFC: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8029FE00: nop

    // 0x8029FE04: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8029FE08: sub.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x8029FE0C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x8029FE10: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8029FE14: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8029FE18: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8029FE1C: nop

    // 0x8029FE20: mul.s       $f16, $f2, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8029FE24: sub.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8029FE28: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8029FE2C: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8029FE30: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8029FE34: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8029FE38: nop

    // 0x8029FE3C: mul.s       $f18, $f2, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8029FE40: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8029FE44: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x8029FE48: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8029FE4C: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8029FE50: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8029FE54: nop

    // 0x8029FE58: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8029FE5C: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8029FE60: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x8029FE64: lwc1        $f16, 0x20($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8029FE68: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8029FE6C: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8029FE70: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8029FE74: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8029FE78: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x8029FE7C: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8029FE80: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8029FE84: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8029FE88: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x8029FE8C: lwc1        $f18, 0x34($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8029FE90: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x8029FE94: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8029FE98: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x8029FE9C: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8029FEA0: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
L_8029FEA4:
    // 0x8029FEA4: jal         0x80228DE0
    // 0x8029FEA8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x8029FEA8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x8029FEAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029FEB0:
    // 0x8029FEB0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8029FEB4: jr          $ra
    // 0x8029FEB8: nop

    return;
    // 0x8029FEB8: nop

;}
RECOMP_FUNC void D_802CA398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802CA418: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802CA41C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802CA420: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802CA424: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802CA428: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802CA42C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802CA430: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802CA434: jal         0x8021BAE0
    // 0x802CA438: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x802CA438: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    after_0:
    // 0x802CA43C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802CA440: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x802CA444: addiu       $s2, $zero, 0x18
    ctx->r18 = ADD32(0, 0X18);
L_802CA448:
    // 0x802CA448: jal         0x8021BAE0
    // 0x802CA44C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x802CA44C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    after_1:
    // 0x802CA450: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802CA454: bne         $s0, $s2, L_802CA448
    if (ctx->r16 != ctx->r18) {
        // 0x802CA458: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802CA448;
    }
    // 0x802CA458: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x802CA45C: jal         0x80233D58
    // 0x802CA460: lw          $a0, 0x48($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X48);
    static_3_80233D58(rdram, ctx);
        goto after_2;
    // 0x802CA460: lw          $a0, 0x48($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X48);
    after_2:
    // 0x802CA464: jal         0x80233D58
    // 0x802CA468: lw          $a0, 0xA0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XA0);
    static_3_80233D58(rdram, ctx);
        goto after_3;
    // 0x802CA468: lw          $a0, 0xA0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XA0);
    after_3:
    // 0x802CA46C: jal         0x80233D58
    // 0x802CA470: lw          $a0, 0xA4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XA4);
    static_3_80233D58(rdram, ctx);
        goto after_4;
    // 0x802CA470: lw          $a0, 0xA4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XA4);
    after_4:
    // 0x802CA474: jal         0x80233D58
    // 0x802CA478: lw          $a0, 0xA8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XA8);
    static_3_80233D58(rdram, ctx);
        goto after_5;
    // 0x802CA478: lw          $a0, 0xA8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XA8);
    after_5:
    // 0x802CA47C: jal         0x80233D58
    // 0x802CA480: lw          $a0, 0xAC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XAC);
    static_3_80233D58(rdram, ctx);
        goto after_6;
    // 0x802CA480: lw          $a0, 0xAC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XAC);
    after_6:
    // 0x802CA484: jal         0x80233D58
    // 0x802CA488: lw          $a0, 0xB0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XB0);
    static_3_80233D58(rdram, ctx);
        goto after_7;
    // 0x802CA488: lw          $a0, 0xB0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XB0);
    after_7:
    // 0x802CA48C: jal         0x802CFF40
    // 0x802CA490: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_802CFF40(rdram, ctx);
        goto after_8;
    // 0x802CA490: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x802CA494: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x802CA498: jal         0x802FA254
    // 0x802CA49C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    static_3_802FA254(rdram, ctx);
        goto after_9;
    // 0x802CA49C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_9:
    // 0x802CA4A0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802CA4A4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802CA4A8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CA4AC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802CA4B0: lbu         $t7, 0x8F0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8F0);
    // 0x802CA4B4: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802CA4B8: beq         $t7, $zero, L_802CA4C8
    if (ctx->r15 == 0) {
        // 0x802CA4BC: nop
    
            goto L_802CA4C8;
    }
    // 0x802CA4BC: nop

    // 0x802CA4C0: jal         0x80231A24
    // 0x802CA4C4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_10;
    // 0x802CA4C4: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    after_10:
L_802CA4C8:
    // 0x802CA4C8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802CA4CC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802CA4D0: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802CA4D4: jal         0x80231A24
    // 0x802CA4D8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_11;
    // 0x802CA4D8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_11:
    // 0x802CA4DC: jal         0x8022BD80
    // 0x802CA4E0: nop

    static_3_8022BD80(rdram, ctx);
        goto after_12;
    // 0x802CA4E0: nop

    after_12:
    // 0x802CA4E4: jal         0x80224CA8
    // 0x802CA4E8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    static_3_80224CA8(rdram, ctx);
        goto after_13;
    // 0x802CA4E8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_13:
    // 0x802CA4EC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x802CA4F0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802CA4F4: sw          $t8, 0x7168($v0)
    MEM_W(0X7168, ctx->r2) = ctx->r24;
    // 0x802CA4F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802CA4FC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802CA500: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802CA504: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802CA508: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802CA50C: jr          $ra
    // 0x802CA510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802CA510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_80293498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293518: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8029351C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80293520: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80293524: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80293528: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x8029352C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80293530: addiu       $t6, $sp, 0x90
    ctx->r14 = ADD32(ctx->r29, 0X90);
    // 0x80293534: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80293538: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8029353C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80293540: lwc1        $f4, 0x154($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X154);
    // 0x80293544: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80293548: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x8029354C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80293550: lwc1        $f6, 0x15C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X15C);
    // 0x80293554: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x80293558: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8029355C: lwc1        $f8, 0x160($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X160);
    // 0x80293560: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80293564: lwc1        $f10, 0x164($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X164);
    // 0x80293568: jal         0x802AD568
    // 0x8029356C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    static_3_802AD568(rdram, ctx);
        goto after_0;
    // 0x8029356C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80293570: blez        $v0, L_80293690
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80293574: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80293690;
    }
    // 0x80293574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80293578: jal         0x802C51D0
    // 0x8029357C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    static_3_802C51D0(rdram, ctx);
        goto after_1;
    // 0x8029357C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x80293580: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80293584: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80293588: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8029358C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80293590: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x80293594: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x80293598: jal         0x8022970C
    // 0x8029359C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_8022970C(rdram, ctx);
        goto after_2;
    // 0x8029359C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x802935A0: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802935A4: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802935A8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802935AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802935B0: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x802935B4: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x802935B8: jal         0x802C4838
    // 0x802935BC: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    static_3_802C4838(rdram, ctx);
        goto after_3;
    // 0x802935BC: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x802935C0: lwc1        $f16, 0x98($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802935C4: lwc1        $f18, 0x104($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X104);
    // 0x802935C8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x802935CC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x802935D0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802935D4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802935D8: jal         0x802D01D4
    // 0x802935DC: nop

    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x802935DC: nop

    after_4:
    // 0x802935E0: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802935E4: lwc1        $f8, 0x108($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X108);
    // 0x802935E8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x802935EC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x802935F0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802935F4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802935F8: jal         0x802D01D4
    // 0x802935FC: nop

    static_3_802D01D4(rdram, ctx);
        goto after_5;
    // 0x802935FC: nop

    after_5:
    // 0x80293600: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80293604: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80293608: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8029360C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80293610: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80293614: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80293618: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8029361C: lw          $t8, 0x8C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8C);
    // 0x80293620: addiu       $t9, $zero, 0x1A
    ctx->r25 = ADD32(0, 0X1A);
    // 0x80293624: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80293628: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8029362C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80293630: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80293634: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80293638: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x8029363C: jal         0x802AAEC0
    // 0x80293640: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    static_3_802AAEC0(rdram, ctx);
        goto after_6;
    // 0x80293640: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_6:
    // 0x80293644: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80293648: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8029364C: beq         $v0, $zero, L_80293688
    if (ctx->r2 == 0) {
        // 0x80293650: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80293688;
    }
    // 0x80293650: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80293654: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80293658: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8029365C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80293660: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80293664: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80293668: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x8029366C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x80293670: jal         0x802E9420
    // 0x80293674: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    static_3_802E9420(rdram, ctx);
        goto after_7;
    // 0x80293674: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x80293678: lui         $a1, 0x3EE6
    ctx->r5 = S32(0X3EE6 << 16);
    // 0x8029367C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80293680: jal         0x802E982C
    // 0x80293684: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    static_3_802E982C(rdram, ctx);
        goto after_8;
    // 0x80293684: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    after_8:
L_80293688:
    // 0x80293688: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8029368C: swc1        $f18, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f18.u32l;
L_80293690:
    // 0x80293690: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80293694: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80293698: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x8029369C: jr          $ra
    // 0x802936A0: nop

    return;
    // 0x802936A0: nop

;}
