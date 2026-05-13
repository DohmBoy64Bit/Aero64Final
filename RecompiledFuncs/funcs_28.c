#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void D_802493B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802493B8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802493BC: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x802493C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802493C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802493C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802493CC: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x802493D0: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x802493D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802493D8: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x802493DC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x802493E0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802493E4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802493E8: bne         $a2, $zero, L_80249408
    if (ctx->r6 != 0) {
        // 0x802493EC: sw          $s2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r18;
            goto L_80249408;
    }
    // 0x802493EC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802493F0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x802493F4: sh          $zero, 0xC($a1)
    MEM_H(0XC, ctx->r5) = 0;
    // 0x802493F8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x802493FC: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x80249400: b           L_802494AC
    // 0x80249404: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
        goto L_802494AC;
    // 0x80249404: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_80249408:
    // 0x80249408: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8024940C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80249410: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x80249414: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x80249418: lh          $t8, 0x1A($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X1A);
    // 0x8024941C: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x80249420: sh          $t8, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r24;
    // 0x80249424: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80249428: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8024942C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x80249430: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x80249434: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80249438: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x8024943C: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
L_80249440:
    // 0x80249440: lh          $s5, 0x1A($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X1A);
    // 0x80249444: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80249448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024944C: jal         0x80249284
    // 0x80249450: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    static_3_80249284(rdram, ctx);
        goto after_0;
    // 0x80249450: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80249454: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x80249458: bnel        $t1, $s3, L_80249474
    if (ctx->r9 != ctx->r19) {
        // 0x8024945C: lw          $v0, 0xC($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XC);
            goto L_80249474;
    }
    goto skip_0;
    // 0x8024945C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    skip_0:
    // 0x80249460: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
    // 0x80249464: lh          $s5, 0x1A($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X1A);
    // 0x80249468: b           L_80249480
    // 0x8024946C: lw          $s6, 0xC($s0)
    ctx->r22 = MEM_W(ctx->r16, 0XC);
        goto L_80249480;
    // 0x8024946C: lw          $s6, 0xC($s0)
    ctx->r22 = MEM_W(ctx->r16, 0XC);
    // 0x80249470: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
L_80249474:
    // 0x80249474: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x80249478: bnel        $at, $zero, L_80249440
    if (ctx->r1 != 0) {
        // 0x8024947C: lw          $s4, 0x8($s0)
        ctx->r20 = MEM_W(ctx->r16, 0X8);
            goto L_80249440;
    }
    goto skip_1;
    // 0x8024947C: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
    skip_1:
L_80249480:
    // 0x80249480: sw          $s4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r20;
    // 0x80249484: sh          $s5, 0xC($s7)
    MEM_H(0XC, ctx->r23) = ctx->r21;
    // 0x80249488: sw          $s6, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r22;
    // 0x8024948C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x80249490: sw          $t2, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r10;
    // 0x80249494: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80249498: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x8024949C: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x802494A0: sh          $t4, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r12;
    // 0x802494A4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x802494A8: sw          $t5, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r13;
L_802494AC:
    // 0x802494AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802494B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802494B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802494B8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802494BC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802494C0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802494C4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802494C8: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x802494CC: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x802494D0: jr          $ra
    // 0x802494D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x802494D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_802BCF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802BD004: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802BD008: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802BD00C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802BD010: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802BD014: jal         0x802344CC
    // 0x802BD018: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    static_3_802344CC(rdram, ctx);
        goto after_0;
    // 0x802BD018: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    after_0:
    // 0x802BD01C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802BD020: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802BD024: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802BD028: addiu       $t8, $zero, 0x7D
    ctx->r24 = ADD32(0, 0X7D);
    // 0x802BD02C: addiu       $t9, $v0, 0x5F
    ctx->r25 = ADD32(ctx->r2, 0X5F);
    // 0x802BD030: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802BD034: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802BD038: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802BD03C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802BD040: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802BD044: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD048: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD04C: jal         0x802344F4
    // 0x802BD050: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_1;
    // 0x802BD050: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_1:
    // 0x802BD054: jal         0x802344CC
    // 0x802BD058: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802344CC(rdram, ctx);
        goto after_2;
    // 0x802BD058: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_2:
    // 0x802BD05C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x802BD060: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802BD064: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802BD068: addiu       $t2, $zero, 0x96
    ctx->r10 = ADD32(0, 0X96);
    // 0x802BD06C: addiu       $t3, $v0, 0x5F
    ctx->r11 = ADD32(ctx->r2, 0X5F);
    // 0x802BD070: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802BD074: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802BD078: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802BD07C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802BD080: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802BD084: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD088: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD08C: jal         0x802344F4
    // 0x802BD090: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_3;
    // 0x802BD090: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_3:
    // 0x802BD094: jal         0x802344CC
    // 0x802BD098: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802344CC(rdram, ctx);
        goto after_4;
    // 0x802BD098: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_4:
    // 0x802BD09C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x802BD0A0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802BD0A4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802BD0A8: addiu       $t6, $zero, 0xAF
    ctx->r14 = ADD32(0, 0XAF);
    // 0x802BD0AC: addiu       $t7, $v0, 0x5F
    ctx->r15 = ADD32(ctx->r2, 0X5F);
    // 0x802BD0B0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802BD0B4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802BD0B8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802BD0BC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802BD0C0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802BD0C4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD0C8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD0CC: jal         0x802344F4
    // 0x802BD0D0: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_5;
    // 0x802BD0D0: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_5:
    // 0x802BD0D4: jal         0x802344CC
    // 0x802BD0D8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802344CC(rdram, ctx);
        goto after_6;
    // 0x802BD0D8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_6:
    // 0x802BD0DC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x802BD0E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802BD0E4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802BD0E8: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x802BD0EC: addiu       $t1, $v0, 0x5F
    ctx->r9 = ADD32(ctx->r2, 0X5F);
    // 0x802BD0F0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802BD0F4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802BD0F8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802BD0FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802BD100: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802BD104: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD108: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD10C: jal         0x802344F4
    // 0x802BD110: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_7;
    // 0x802BD110: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_7:
    // 0x802BD114: jal         0x802344CC
    // 0x802BD118: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802344CC(rdram, ctx);
        goto after_8;
    // 0x802BD118: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_8:
    // 0x802BD11C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x802BD120: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802BD124: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802BD128: addiu       $t4, $zero, 0x7D
    ctx->r12 = ADD32(0, 0X7D);
    // 0x802BD12C: addiu       $t5, $v0, 0x4B
    ctx->r13 = ADD32(ctx->r2, 0X4B);
    // 0x802BD130: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802BD134: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802BD138: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802BD13C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802BD140: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802BD144: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD148: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD14C: jal         0x802344F4
    // 0x802BD150: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_9;
    // 0x802BD150: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_9:
    // 0x802BD154: jal         0x802344CC
    // 0x802BD158: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802344CC(rdram, ctx);
        goto after_10;
    // 0x802BD158: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_10:
    // 0x802BD15C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802BD160: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802BD164: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802BD168: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x802BD16C: addiu       $t9, $v0, 0x4B
    ctx->r25 = ADD32(ctx->r2, 0X4B);
    // 0x802BD170: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802BD174: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802BD178: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802BD17C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802BD180: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802BD184: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD188: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD18C: jal         0x802344F4
    // 0x802BD190: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_11;
    // 0x802BD190: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_11:
    // 0x802BD194: jal         0x802344CC
    // 0x802BD198: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802344CC(rdram, ctx);
        goto after_12;
    // 0x802BD198: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_12:
    // 0x802BD19C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x802BD1A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802BD1A4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802BD1A8: addiu       $t2, $zero, 0xAF
    ctx->r10 = ADD32(0, 0XAF);
    // 0x802BD1AC: addiu       $t3, $v0, 0x4B
    ctx->r11 = ADD32(ctx->r2, 0X4B);
    // 0x802BD1B0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802BD1B4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802BD1B8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802BD1BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802BD1C0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802BD1C4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD1C8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD1CC: jal         0x802344F4
    // 0x802BD1D0: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_13;
    // 0x802BD1D0: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_13:
    // 0x802BD1D4: jal         0x802344CC
    // 0x802BD1D8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802344CC(rdram, ctx);
        goto after_14;
    // 0x802BD1D8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_14:
    // 0x802BD1DC: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x802BD1E0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802BD1E4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802BD1E8: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x802BD1EC: addiu       $t7, $v0, 0x4B
    ctx->r15 = ADD32(ctx->r2, 0X4B);
    // 0x802BD1F0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802BD1F4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802BD1F8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802BD1FC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802BD200: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802BD204: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD208: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD20C: jal         0x802344F4
    // 0x802BD210: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_15;
    // 0x802BD210: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_15:
    // 0x802BD214: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x802BD218: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x802BD21C: beql        $t8, $zero, L_802BD240
    if (ctx->r24 == 0) {
        // 0x802BD220: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_802BD240;
    }
    goto skip_0;
    // 0x802BD220: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    skip_0:
    // 0x802BD224: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x802BD228: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD22C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD230: jal         0x802344F4
    // 0x802BD234: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802344F4(rdram, ctx);
        goto after_16;
    // 0x802BD234: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x802BD238: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x802BD23C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
L_802BD240:
    // 0x802BD240: beql        $t9, $zero, L_802BD264
    if (ctx->r25 == 0) {
        // 0x802BD244: andi        $t0, $v0, 0x2
        ctx->r8 = ctx->r2 & 0X2;
            goto L_802BD264;
    }
    goto skip_1;
    // 0x802BD244: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    skip_1:
    // 0x802BD248: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802BD24C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD250: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD254: jal         0x802344F4
    // 0x802BD258: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802344F4(rdram, ctx);
        goto after_17;
    // 0x802BD258: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x802BD25C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x802BD260: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
L_802BD264:
    // 0x802BD264: beql        $t0, $zero, L_802BD288
    if (ctx->r8 == 0) {
        // 0x802BD268: andi        $t1, $v0, 0x4
        ctx->r9 = ctx->r2 & 0X4;
            goto L_802BD288;
    }
    goto skip_2;
    // 0x802BD268: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    skip_2:
    // 0x802BD26C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x802BD270: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD274: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD278: jal         0x802344F4
    // 0x802BD27C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802344F4(rdram, ctx);
        goto after_18;
    // 0x802BD27C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x802BD280: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x802BD284: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
L_802BD288:
    // 0x802BD288: beq         $t1, $zero, L_802BD2A0
    if (ctx->r9 == 0) {
        // 0x802BD28C: addiu       $a1, $zero, 0x9
        ctx->r5 = ADD32(0, 0X9);
            goto L_802BD2A0;
    }
    // 0x802BD28C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD290: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x802BD294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD298: jal         0x802344F4
    // 0x802BD29C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    static_3_802344F4(rdram, ctx);
        goto after_19;
    // 0x802BD29C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
L_802BD2A0:
    // 0x802BD2A0: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802BD2A4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802BD2A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802BD2AC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD2B0: bne         $v0, $at, L_802BD374
    if (ctx->r2 != ctx->r1) {
        // 0x802BD2B4: addiu       $a2, $zero, 0x13
        ctx->r6 = ADD32(0, 0X13);
            goto L_802BD374;
    }
    // 0x802BD2B4: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD2B8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x802BD2BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802BD2C0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802BD2C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802BD2C8: jal         0x802344F4
    // 0x802BD2CC: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_20;
    // 0x802BD2CC: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_20:
    // 0x802BD2D0: jal         0x8023413C
    // 0x802BD2D4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    static_3_8023413C(rdram, ctx);
        goto after_21;
    // 0x802BD2D4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_21:
    // 0x802BD2D8: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802BD2DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802BD2E0: beq         $v0, $at, L_802BD314
    if (ctx->r2 == ctx->r1) {
        // 0x802BD2E4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802BD314;
    }
    // 0x802BD2E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802BD2E8: beql        $v0, $at, L_802BD334
    if (ctx->r2 == ctx->r1) {
        // 0x802BD2EC: lw          $t5, 0xEC($s0)
        ctx->r13 = MEM_W(ctx->r16, 0XEC);
            goto L_802BD334;
    }
    goto skip_3;
    // 0x802BD2EC: lw          $t5, 0xEC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XEC);
    skip_3:
    // 0x802BD2F0: beq         $v0, $zero, L_802BD34C
    if (ctx->r2 == 0) {
        // 0x802BD2F4: nop
    
            goto L_802BD34C;
    }
    // 0x802BD2F4: nop

    // 0x802BD2F8: lw          $t3, 0xFC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XFC);
    // 0x802BD2FC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD300: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD304: beq         $t3, $zero, L_802BD314
    if (ctx->r11 == 0) {
        // 0x802BD308: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD314;
    }
    // 0x802BD308: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD30C: jal         0x802344F4
    // 0x802BD310: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    static_3_802344F4(rdram, ctx);
        goto after_22;
    // 0x802BD310: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_22:
L_802BD314:
    // 0x802BD314: lw          $t4, 0xF0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XF0);
    // 0x802BD318: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD31C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD320: beq         $t4, $zero, L_802BD330
    if (ctx->r12 == 0) {
        // 0x802BD324: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD330;
    }
    // 0x802BD324: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD328: jal         0x802344F4
    // 0x802BD32C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802344F4(rdram, ctx);
        goto after_23;
    // 0x802BD32C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_23:
L_802BD330:
    // 0x802BD330: lw          $t5, 0xEC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XEC);
L_802BD334:
    // 0x802BD334: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD338: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD33C: beq         $t5, $zero, L_802BD34C
    if (ctx->r13 == 0) {
        // 0x802BD340: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD34C;
    }
    // 0x802BD340: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD344: jal         0x802344F4
    // 0x802BD348: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_802344F4(rdram, ctx);
        goto after_24;
    // 0x802BD348: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_24:
L_802BD34C:
    // 0x802BD34C: jal         0x8023413C
    // 0x802BD350: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    static_3_8023413C(rdram, ctx);
        goto after_25;
    // 0x802BD350: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_25:
    // 0x802BD354: jal         0x8023413C
    // 0x802BD358: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    static_3_8023413C(rdram, ctx);
        goto after_26;
    // 0x802BD358: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_26:
    // 0x802BD35C: jal         0x8023413C
    // 0x802BD360: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_8023413C(rdram, ctx);
        goto after_27;
    // 0x802BD360: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_27:
    // 0x802BD364: jal         0x8023413C
    // 0x802BD368: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_8023413C(rdram, ctx);
        goto after_28;
    // 0x802BD368: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_28:
    // 0x802BD36C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802BD370: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
L_802BD374:
    // 0x802BD374: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802BD378: beq         $v0, $at, L_802BD398
    if (ctx->r2 == ctx->r1) {
        // 0x802BD37C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802BD398;
    }
    // 0x802BD37C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802BD380: beq         $v0, $at, L_802BD398
    if (ctx->r2 == ctx->r1) {
        // 0x802BD384: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_802BD398;
    }
    // 0x802BD384: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802BD388: beq         $v0, $at, L_802BD398
    if (ctx->r2 == ctx->r1) {
        // 0x802BD38C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802BD398;
    }
    // 0x802BD38C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802BD390: bnel        $v0, $at, L_802BD40C
    if (ctx->r2 != ctx->r1) {
        // 0x802BD394: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_802BD40C;
    }
    goto skip_4;
    // 0x802BD394: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    skip_4:
L_802BD398:
    // 0x802BD398: jal         0x8023413C
    // 0x802BD39C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    static_3_8023413C(rdram, ctx);
        goto after_29;
    // 0x802BD39C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_29:
    // 0x802BD3A0: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802BD3A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802BD3A8: beql        $v0, $at, L_802BD3D8
    if (ctx->r2 == ctx->r1) {
        // 0x802BD3AC: lw          $t7, 0xEC($s0)
        ctx->r15 = MEM_W(ctx->r16, 0XEC);
            goto L_802BD3D8;
    }
    goto skip_5;
    // 0x802BD3AC: lw          $t7, 0xEC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XEC);
    skip_5:
    // 0x802BD3B0: beq         $v0, $zero, L_802BD3F0
    if (ctx->r2 == 0) {
        // 0x802BD3B4: nop
    
            goto L_802BD3F0;
    }
    // 0x802BD3B4: nop

    // 0x802BD3B8: lw          $t6, 0xF0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XF0);
    // 0x802BD3BC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD3C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD3C4: beq         $t6, $zero, L_802BD3D4
    if (ctx->r14 == 0) {
        // 0x802BD3C8: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD3D4;
    }
    // 0x802BD3C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD3CC: jal         0x802344F4
    // 0x802BD3D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802344F4(rdram, ctx);
        goto after_30;
    // 0x802BD3D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_30:
L_802BD3D4:
    // 0x802BD3D4: lw          $t7, 0xEC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XEC);
L_802BD3D8:
    // 0x802BD3D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD3DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD3E0: beq         $t7, $zero, L_802BD3F0
    if (ctx->r15 == 0) {
        // 0x802BD3E4: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD3F0;
    }
    // 0x802BD3E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD3E8: jal         0x802344F4
    // 0x802BD3EC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_802344F4(rdram, ctx);
        goto after_31;
    // 0x802BD3EC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_31:
L_802BD3F0:
    // 0x802BD3F0: jal         0x8023413C
    // 0x802BD3F4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_8023413C(rdram, ctx);
        goto after_32;
    // 0x802BD3F4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_32:
    // 0x802BD3F8: jal         0x8023413C
    // 0x802BD3FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_8023413C(rdram, ctx);
        goto after_33;
    // 0x802BD3FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_33:
    // 0x802BD400: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802BD404: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802BD408: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_802BD40C:
    // 0x802BD40C: bnel        $v0, $at, L_802BD4F8
    if (ctx->r2 != ctx->r1) {
        // 0x802BD410: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802BD4F8;
    }
    goto skip_6;
    // 0x802BD410: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    skip_6:
    // 0x802BD414: jal         0x802344CC
    // 0x802BD418: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802344CC(rdram, ctx);
        goto after_34;
    // 0x802BD418: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_34:
    // 0x802BD41C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x802BD420: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802BD424: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802BD428: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x802BD42C: addiu       $t1, $v0, 0x5F
    ctx->r9 = ADD32(ctx->r2, 0X5F);
    // 0x802BD430: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802BD434: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802BD438: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802BD43C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802BD440: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802BD444: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD448: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD44C: jal         0x802344F4
    // 0x802BD450: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_35;
    // 0x802BD450: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_35:
    // 0x802BD454: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802BD458: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802BD45C: beq         $v0, $at, L_802BD494
    if (ctx->r2 == ctx->r1) {
        // 0x802BD460: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802BD494;
    }
    // 0x802BD460: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802BD464: beql        $v0, $at, L_802BD4B8
    if (ctx->r2 == ctx->r1) {
        // 0x802BD468: lw          $t6, 0x60($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X60);
            goto L_802BD4B8;
    }
    goto skip_7;
    // 0x802BD468: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    skip_7:
    // 0x802BD46C: beq         $v0, $zero, L_802BD4D4
    if (ctx->r2 == 0) {
        // 0x802BD470: nop
    
            goto L_802BD4D4;
    }
    // 0x802BD470: nop

    // 0x802BD474: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x802BD478: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD47C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD480: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x802BD484: beq         $t3, $zero, L_802BD494
    if (ctx->r11 == 0) {
        // 0x802BD488: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD494;
    }
    // 0x802BD488: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD48C: jal         0x802344F4
    // 0x802BD490: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    static_3_802344F4(rdram, ctx);
        goto after_36;
    // 0x802BD490: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_36:
L_802BD494:
    // 0x802BD494: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
    // 0x802BD498: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD49C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD4A0: andi        $t5, $t4, 0x40
    ctx->r13 = ctx->r12 & 0X40;
    // 0x802BD4A4: beq         $t5, $zero, L_802BD4B4
    if (ctx->r13 == 0) {
        // 0x802BD4A8: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD4B4;
    }
    // 0x802BD4A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD4AC: jal         0x802344F4
    // 0x802BD4B0: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    static_3_802344F4(rdram, ctx);
        goto after_37;
    // 0x802BD4B0: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_37:
L_802BD4B4:
    // 0x802BD4B4: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
L_802BD4B8:
    // 0x802BD4B8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD4BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD4C0: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x802BD4C4: beq         $t7, $zero, L_802BD4D4
    if (ctx->r15 == 0) {
        // 0x802BD4C8: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD4D4;
    }
    // 0x802BD4C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD4CC: jal         0x802344F4
    // 0x802BD4D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802344F4(rdram, ctx);
        goto after_38;
    // 0x802BD4D0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_38:
L_802BD4D4:
    // 0x802BD4D4: jal         0x8023413C
    // 0x802BD4D8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_8023413C(rdram, ctx);
        goto after_39;
    // 0x802BD4D8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_39:
    // 0x802BD4DC: jal         0x8023413C
    // 0x802BD4E0: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    static_3_8023413C(rdram, ctx);
        goto after_40;
    // 0x802BD4E0: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_40:
    // 0x802BD4E4: jal         0x8023413C
    // 0x802BD4E8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    static_3_8023413C(rdram, ctx);
        goto after_41;
    // 0x802BD4E8: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_41:
    // 0x802BD4EC: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802BD4F0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802BD4F4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_802BD4F8:
    // 0x802BD4F8: beq         $v0, $at, L_802BD508
    if (ctx->r2 == ctx->r1) {
        // 0x802BD4FC: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_802BD508;
    }
    // 0x802BD4FC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802BD500: bnel        $v0, $at, L_802BD588
    if (ctx->r2 != ctx->r1) {
        // 0x802BD504: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_802BD588;
    }
    goto skip_8;
    // 0x802BD504: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    skip_8:
L_802BD508:
    // 0x802BD508: jal         0x802344CC
    // 0x802BD50C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    static_3_802344CC(rdram, ctx);
        goto after_42;
    // 0x802BD50C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_42:
    // 0x802BD510: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x802BD514: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802BD518: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802BD51C: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x802BD520: addiu       $t1, $v0, 0x5F
    ctx->r9 = ADD32(ctx->r2, 0X5F);
    // 0x802BD524: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802BD528: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802BD52C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802BD530: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802BD534: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802BD538: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD53C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802BD540: jal         0x802344F4
    // 0x802BD544: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    static_3_802344F4(rdram, ctx);
        goto after_43;
    // 0x802BD544: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_43:
    // 0x802BD548: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802BD54C: beq         $v0, $zero, L_802BD574
    if (ctx->r2 == 0) {
        // 0x802BD550: nop
    
            goto L_802BD574;
    }
    // 0x802BD550: nop

    // 0x802BD554: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x802BD558: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD55C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD560: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x802BD564: beq         $t3, $zero, L_802BD574
    if (ctx->r11 == 0) {
        // 0x802BD568: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD574;
    }
    // 0x802BD568: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD56C: jal         0x802344F4
    // 0x802BD570: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802344F4(rdram, ctx);
        goto after_44;
    // 0x802BD570: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_44:
L_802BD574:
    // 0x802BD574: jal         0x8023413C
    // 0x802BD578: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_8023413C(rdram, ctx);
        goto after_45;
    // 0x802BD578: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_45:
    // 0x802BD57C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802BD580: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802BD584: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_802BD588:
    // 0x802BD588: bnel        $v0, $at, L_802BD60C
    if (ctx->r2 != ctx->r1) {
        // 0x802BD58C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_802BD60C;
    }
    goto skip_9;
    // 0x802BD58C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    skip_9:
    // 0x802BD590: jal         0x8023413C
    // 0x802BD594: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    static_3_8023413C(rdram, ctx);
        goto after_46;
    // 0x802BD594: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_46:
    // 0x802BD598: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802BD59C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802BD5A0: beql        $v0, $at, L_802BD5D4
    if (ctx->r2 == ctx->r1) {
        // 0x802BD5A4: lw          $t6, 0x60($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X60);
            goto L_802BD5D4;
    }
    goto skip_10;
    // 0x802BD5A4: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    skip_10:
    // 0x802BD5A8: beq         $v0, $zero, L_802BD5F0
    if (ctx->r2 == 0) {
        // 0x802BD5AC: nop
    
            goto L_802BD5F0;
    }
    // 0x802BD5AC: nop

    // 0x802BD5B0: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
    // 0x802BD5B4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD5B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD5BC: andi        $t5, $t4, 0x100
    ctx->r13 = ctx->r12 & 0X100;
    // 0x802BD5C0: beq         $t5, $zero, L_802BD5D0
    if (ctx->r13 == 0) {
        // 0x802BD5C4: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD5D0;
    }
    // 0x802BD5C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD5C8: jal         0x802344F4
    // 0x802BD5CC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_802344F4(rdram, ctx);
        goto after_47;
    // 0x802BD5CC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_47:
L_802BD5D0:
    // 0x802BD5D0: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
L_802BD5D4:
    // 0x802BD5D4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD5D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD5DC: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x802BD5E0: beq         $t7, $zero, L_802BD5F0
    if (ctx->r15 == 0) {
        // 0x802BD5E4: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD5F0;
    }
    // 0x802BD5E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD5E8: jal         0x802344F4
    // 0x802BD5EC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802344F4(rdram, ctx);
        goto after_48;
    // 0x802BD5EC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_48:
L_802BD5F0:
    // 0x802BD5F0: jal         0x8023413C
    // 0x802BD5F4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    static_3_8023413C(rdram, ctx);
        goto after_49;
    // 0x802BD5F4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_49:
    // 0x802BD5F8: jal         0x8023413C
    // 0x802BD5FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_8023413C(rdram, ctx);
        goto after_50;
    // 0x802BD5FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_50:
    // 0x802BD600: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x802BD604: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802BD608: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_802BD60C:
    // 0x802BD60C: bne         $v0, $at, L_802BD648
    if (ctx->r2 != ctx->r1) {
        // 0x802BD610: nop
    
            goto L_802BD648;
    }
    // 0x802BD610: nop

    // 0x802BD614: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802BD618: beq         $v0, $zero, L_802BD640
    if (ctx->r2 == 0) {
        // 0x802BD61C: nop
    
            goto L_802BD640;
    }
    // 0x802BD61C: nop

    // 0x802BD620: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x802BD624: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802BD628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802BD62C: andi        $t8, $v0, 0x200
    ctx->r24 = ctx->r2 & 0X200;
    // 0x802BD630: beq         $t8, $zero, L_802BD640
    if (ctx->r24 == 0) {
        // 0x802BD634: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_802BD640;
    }
    // 0x802BD634: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802BD638: jal         0x802344F4
    // 0x802BD63C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802344F4(rdram, ctx);
        goto after_51;
    // 0x802BD63C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_51:
L_802BD640:
    // 0x802BD640: jal         0x8023413C
    // 0x802BD644: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_8023413C(rdram, ctx);
        goto after_52;
    // 0x802BD644: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_52:
L_802BD648:
    // 0x802BD648: jal         0x8023413C
    // 0x802BD64C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    static_3_8023413C(rdram, ctx);
        goto after_53;
    // 0x802BD64C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_53:
    // 0x802BD650: jal         0x8023413C
    // 0x802BD654: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    static_3_8023413C(rdram, ctx);
        goto after_54;
    // 0x802BD654: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_54:
    // 0x802BD658: jal         0x8023413C
    // 0x802BD65C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    static_3_8023413C(rdram, ctx);
        goto after_55;
    // 0x802BD65C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_55:
    // 0x802BD660: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802BD664: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802BD668: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802BD66C: jr          $ra
    // 0x802BD670: nop

    return;
    // 0x802BD670: nop

;}
RECOMP_FUNC void D_80201338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80201338: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8020133C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201340: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201344: jal         0x802011D0
    // 0x80201348: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_802011D0(rdram, ctx);
        goto after_0;
    // 0x80201348: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8020134C: lui         $v0, 0x0
    ctx->r2 = S32(0X0 << 16);
    // 0x80201350: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80201354: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80201358: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8020135C: blez        $v0, L_802013CC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80201360: addiu       $a1, $zero, 0xB4
        ctx->r5 = ADD32(0, 0XB4);
            goto L_802013CC;
    }
    // 0x80201360: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80201364: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
L_80201368:
    // 0x80201368: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8020136C: mflo        $a2
    ctx->r6 = lo;
    // 0x80201370: addu        $t6, $a0, $a2
    ctx->r14 = ADD32(ctx->r4, ctx->r6);
    // 0x80201374: lbu         $t7, 0xAC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XAC);
    // 0x80201378: bnel        $t7, $zero, L_802013BC
    if (ctx->r15 != 0) {
        // 0x8020137C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802013BC;
    }
    goto skip_0;
    // 0x8020137C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x80201380: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80201384: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80201388: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x8020138C: sb          $v1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r3;
    // 0x80201390: jal         0x802011D0
    // 0x80201394: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    static_3_802011D0(rdram, ctx);
        goto after_1;
    // 0x80201394: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x80201398: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x8020139C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802013A0: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x802013A4: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x802013A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802013AC: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x802013B0: b           L_802013E8
    // 0x802013B4: sb          $t8, 0xAC($t0)
    MEM_B(0XAC, ctx->r8) = ctx->r24;
        goto L_802013E8;
    // 0x802013B4: sb          $t8, 0xAC($t0)
    MEM_B(0XAC, ctx->r8) = ctx->r24;
    // 0x802013B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802013BC:
    // 0x802013BC: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x802013C0: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802013C4: bne         $at, $zero, L_80201368
    if (ctx->r1 != 0) {
        // 0x802013C8: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_80201368;
    }
    // 0x802013C8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_802013CC:
    // 0x802013CC: lui         $a1, 0x0
    ctx->r5 = S32(0X0 << 16);
    // 0x802013D0: lui         $a2, 0x0
    ctx->r6 = S32(0X0 << 16);
    // 0x802013D4: addiu       $a2, $a2, 0x0
    ctx->r6 = ADD32(ctx->r6, 0X0);
    // 0x802013D8: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802013DC: jal         0x80231C58
    // 0x802013E0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    static_3_80231C58(rdram, ctx);
        goto after_2;
    // 0x802013E0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    after_2:
    // 0x802013E4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802013E8:
    // 0x802013E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802013EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802013F0: jr          $ra
    // 0x802013F4: nop

    return;
    // 0x802013F4: nop

;}
RECOMP_FUNC void D_8021B95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021B95C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021B960: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x8021B964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021B968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B96C: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B970: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021B974: beq         $at, $zero, L_8021B994
    if (ctx->r1 == 0) {
        // 0x8021B978: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8021B994;
    }
    // 0x8021B978: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8021B97C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8021B980: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021B984: jal         0x80231A24
    // 0x8021B988: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021B988: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8021B98C: b           L_8021B9C0
    // 0x8021B990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B9C0;
    // 0x8021B990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B994:
    // 0x8021B994: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8021B998: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x8021B99C: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x8021B9A0: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x8021B9A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021B9A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021B9AC: lbu         $t0, 0x8($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X8);
    // 0x8021B9B0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8021B9B4: jal         0x8021B838
    // 0x8021B9B8: or          $a1, $t0, $a3
    ctx->r5 = ctx->r8 | ctx->r7;
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x8021B9B8: or          $a1, $t0, $a3
    ctx->r5 = ctx->r8 | ctx->r7;
    after_1:
    // 0x8021B9BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B9C0:
    // 0x8021B9C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021B9C4: jr          $ra
    // 0x8021B9C8: nop

    return;
    // 0x8021B9C8: nop

;}
RECOMP_FUNC void D_802F226C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F22EC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802F22F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802F22F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802F22F8: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802F22FC: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x802F2300: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x802F2304: lbu         $t6, 0x28($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X28);
    // 0x802F2308: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802F230C: beq         $t6, $zero, L_802F2390
    if (ctx->r14 == 0) {
        // 0x802F2310: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_802F2390;
    }
    // 0x802F2310: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802F2314: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x802F2318: sb          $t7, 0xC00($a0)
    MEM_B(0XC00, ctx->r4) = ctx->r15;
    // 0x802F231C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x802F2320: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x802F2324: addiu       $v0, $sp, 0x80
    ctx->r2 = ADD32(ctx->r29, 0X80);
    // 0x802F2328: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
    // 0x802F232C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802F2330: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x802F2334: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x802F2338: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x802F233C: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x802F2340: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802F2344: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x802F2348: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    // 0x802F234C: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x802F2350: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802F2354: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x802F2358: sw          $t0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r8;
    // 0x802F235C: lw          $at, 0x18($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X18);
    // 0x802F2360: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802F2364: lbu         $t1, 0x0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X0);
    // 0x802F2368: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802F236C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802F2370: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x802F2374: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802F2378: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802F237C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802F2380: jal         0x80303778
    // 0x802F2384: nop

    static_3_80303778(rdram, ctx);
        goto after_0;
    // 0x802F2384: nop

    after_0:
    // 0x802F2388: b           L_802F2404
    // 0x802F238C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_802F2404;
    // 0x802F238C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_802F2390:
    // 0x802F2390: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802F2394: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x802F2398: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x802F239C: addiu       $v0, $sp, 0x64
    ctx->r2 = ADD32(ctx->r29, 0X64);
    // 0x802F23A0: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802F23A4: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x802F23A8: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x802F23AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802F23B0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802F23B4: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x802F23B8: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x802F23BC: lw          $t6, 0xC($t4)
    ctx->r14 = MEM_W(ctx->r12, 0XC);
    // 0x802F23C0: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x802F23C4: lw          $at, 0x10($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X10);
    // 0x802F23C8: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x802F23CC: lw          $t6, 0x14($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X14);
    // 0x802F23D0: sw          $t6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r14;
    // 0x802F23D4: lw          $at, 0x18($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X18);
    // 0x802F23D8: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x802F23DC: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802F23E0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F23E4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x802F23E8: addu        $t8, $v0, $t9
    ctx->r24 = ADD32(ctx->r2, ctx->r25);
    // 0x802F23EC: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x802F23F0: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, 0X6B8);
    // 0x802F23F4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802F23F8: jal         0x80303778
    // 0x802F23FC: nop

    static_3_80303778(rdram, ctx);
        goto after_1;
    // 0x802F23FC: nop

    after_1:
    // 0x802F2400: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_802F2404:
    // 0x802F2404: sb          $t0, 0xC00($s0)
    MEM_B(0XC00, ctx->r16) = ctx->r8;
    // 0x802F2408: addiu       $a2, $s0, 0x70
    ctx->r6 = ADD32(ctx->r16, 0X70);
    // 0x802F240C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802F2410: jal         0x802889F4
    // 0x802F2414: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    static_3_802889F4(rdram, ctx);
        goto after_2;
    // 0x802F2414: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x802F2418: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802F241C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802F2420: jal         0x802AA498
    // 0x802F2424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_802AA498(rdram, ctx);
        goto after_3;
    // 0x802F2424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802F2428: lbu         $t1, 0x28($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X28);
    // 0x802F242C: bnel        $t1, $zero, L_802F2484
    if (ctx->r9 != 0) {
        // 0x802F2430: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_802F2484;
    }
    goto skip_0;
    // 0x802F2430: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x802F2434: lw          $v0, 0x210($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X210);
    // 0x802F2438: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x802F243C: lh          $t2, 0x60($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X60);
    // 0x802F2440: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802F2444: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x802F2448: jalr        $t9
    // 0x802F244C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x802F244C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_4:
    // 0x802F2450: jal         0x80320EC0
    // 0x802F2454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80320EC0(rdram, ctx);
        goto after_5;
    // 0x802F2454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802F2458: jal         0x80321E6C
    // 0x802F245C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80321E6C(rdram, ctx);
        goto after_6;
    // 0x802F245C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802F2460: jal         0x8032104C
    // 0x802F2464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_8032104C(rdram, ctx);
        goto after_7;
    // 0x802F2464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x802F2468: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x802F246C: lbu         $t3, 0x0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X0);
    // 0x802F2470: bnel        $t3, $zero, L_802F2484
    if (ctx->r11 != 0) {
        // 0x802F2474: lw          $a0, 0x14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X14);
            goto L_802F2484;
    }
    goto skip_1;
    // 0x802F2474: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    skip_1:
    // 0x802F2478: jal         0x80321FD0
    // 0x802F247C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80321FD0(rdram, ctx);
        goto after_8;
    // 0x802F247C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802F2480: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_802F2484:
    // 0x802F2484: jal         0x802AEDEC
    // 0x802F2488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_802AEDEC(rdram, ctx);
        goto after_9;
    // 0x802F2488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x802F248C: lw          $t5, 0x78($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X78);
    // 0x802F2490: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x802F2494: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802F2498: and         $t4, $t5, $at
    ctx->r12 = ctx->r13 & ctx->r1;
    // 0x802F249C: jal         0x802BCF20
    // 0x802F24A0: sw          $t4, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r12;
    static_3_802BCF20(rdram, ctx);
        goto after_10;
    // 0x802F24A0: sw          $t4, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r12;
    after_10:
    // 0x802F24A4: lw          $v1, 0xB4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB4);
    // 0x802F24A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F24AC: lw          $v0, 0x1A0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1A0);
    // 0x802F24B0: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802F24B4: lh          $t6, 0xB0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XB0);
    // 0x802F24B8: jalr        $t9
    // 0x802F24BC: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x802F24BC: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_11:
    // 0x802F24C0: lui         $a1, 0xC5A8
    ctx->r5 = S32(0XC5A8 << 16);
    // 0x802F24C4: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x802F24C8: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x802F24CC: lui         $a2, 0x44A5
    ctx->r6 = S32(0X44A5 << 16);
    // 0x802F24D0: jal         0x80318E04
    // 0x802F24D4: lui         $a3, 0x4325
    ctx->r7 = S32(0X4325 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_12;
    // 0x802F24D4: lui         $a3, 0x4325
    ctx->r7 = S32(0X4325 << 16);
    after_12:
    // 0x802F24D8: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x802F24DC: jal         0x80318C9C
    // 0x802F24E0: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    static_3_80318C9C(rdram, ctx);
        goto after_13;
    // 0x802F24E0: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    after_13:
    // 0x802F24E4: jal         0x80309B18
    // 0x802F24E8: nop

    static_3_80309B18(rdram, ctx);
        goto after_14;
    // 0x802F24E8: nop

    after_14:
    // 0x802F24EC: jal         0x803099E4
    // 0x802F24F0: nop

    static_3_803099E4(rdram, ctx);
        goto after_15;
    // 0x802F24F0: nop

    after_15:
    // 0x802F24F4: jal         0x802AAE00
    // 0x802F24F8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    static_3_802AAE00(rdram, ctx);
        goto after_16;
    // 0x802F24F8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_16:
    // 0x802F24FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802F2500: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802F2504: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802F2508: jr          $ra
    // 0x802F250C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802F250C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_802A2064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A20E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A20E8: jr          $ra
    // 0x802A20EC: sb          $a1, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r5;
    return;
    // 0x802A20EC: sb          $a1, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void D_8021F494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F494: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8021F498: lh          $t6, 0x0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X0);
    // 0x8021F49C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8021F4A0: jr          $ra
    // 0x8021F4A4: sh          $t6, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r14;
    return;
    // 0x8021F4A4: sh          $t6, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void D_8023D140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D140: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D144: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D148: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D14C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D150: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D154: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D158: ddivu       $zero, $t6, $t7
    DDIVU(U64(ctx->r14), U64(ctx->r15), &lo, &hi);
    // 0x8023D15C: bne         $t7, $zero, L_8023D168
    if (ctx->r15 != 0) {
        // 0x8023D160: nop
    
            goto L_8023D168;
    }
    // 0x8023D160: nop

    // 0x8023D164: break       7
    do_break(2149831012);
L_8023D168:
    // 0x8023D168: mfhi        $v0
    ctx->r2 = hi;
    // 0x8023D16C: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D170: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D174: jr          $ra
    // 0x8023D178: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D178: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void D_802C8A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C8A90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802C8A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C8A98: bne         $a0, $zero, L_802C8AB0
    if (ctx->r4 != 0) {
        // 0x802C8A9C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_802C8AB0;
    }
    // 0x802C8A9C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802C8AA0: jal         0x802C67EC
    // 0x802C8AA4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802C8AA4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x802C8AA8: beq         $v0, $zero, L_802C8AF0
    if (ctx->r2 == 0) {
        // 0x802C8AAC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802C8AF0;
    }
    // 0x802C8AAC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802C8AB0:
    // 0x802C8AB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802C8AB4: sh          $zero, 0x8($a1)
    MEM_H(0X8, ctx->r5) = 0;
    // 0x802C8AB8: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x802C8ABC: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
    // 0x802C8AC0: sb          $zero, 0x14($a1)
    MEM_B(0X14, ctx->r5) = 0;
    // 0x802C8AC4: sb          $zero, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = 0;
    // 0x802C8AC8: sb          $zero, 0x24($a1)
    MEM_B(0X24, ctx->r5) = 0;
    // 0x802C8ACC: sb          $zero, 0x2C($a1)
    MEM_B(0X2C, ctx->r5) = 0;
    // 0x802C8AD0: sb          $zero, 0x2D($a1)
    MEM_B(0X2D, ctx->r5) = 0;
    // 0x802C8AD4: sb          $zero, 0x60($a1)
    MEM_B(0X60, ctx->r5) = 0;
    // 0x802C8AD8: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x802C8ADC: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x802C8AE0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x802C8AE4: jal         0x80205528
    // 0x802C8AE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80205528(rdram, ctx);
        goto after_1;
    // 0x802C8AE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802C8AEC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_802C8AF0:
    // 0x802C8AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802C8AF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802C8AF8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802C8AFC: jr          $ra
    // 0x802C8B00: nop

    return;
    // 0x802C8B00: nop

;}
RECOMP_FUNC void D_802336F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802336F8: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x802336FC: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x80233700: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x80233704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023370C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80233710: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x80233714: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80233718: or          $t8, $a0, $zero
    ctx->r24 = ctx->r4 | 0;
    // 0x8023371C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80233720: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80233724: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x80233728: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8023372C: bne         $a2, $zero, L_80233748
    if (ctx->r6 != 0) {
        // 0x80233730: addiu       $t3, $t3, 0x0
        ctx->r11 = ADD32(ctx->r11, 0X0);
            goto L_80233748;
    }
    // 0x80233730: addiu       $t3, $t3, 0x0
    ctx->r11 = ADD32(ctx->r11, 0X0);
    // 0x80233734: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80233738: jal         0x80231A24
    // 0x8023373C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8023373C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_0:
    // 0x80233740: b           L_80233A5C
    // 0x80233744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80233A5C;
    // 0x80233744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80233748:
    // 0x80233748: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x8023374C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80233750: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80233754: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80233758: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8023375C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80233760: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
    // 0x80233764: addu        $t8, $t6, $at
    ctx->r24 = ADD32(ctx->r14, ctx->r1);
    // 0x80233768: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8023376C: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x80233770: beql        $a0, $zero, L_80233868
    if (ctx->r4 == 0) {
        // 0x80233774: lw          $v0, 0x1C($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X1C);
            goto L_80233868;
    }
    goto skip_0;
    // 0x80233774: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
    skip_0:
    // 0x80233778: lbu         $t7, 0x1A($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1A);
    // 0x8023377C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80233780: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x80233784: beql        $t7, $zero, L_80233868
    if (ctx->r15 == 0) {
        // 0x80233788: lw          $v0, 0x1C($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X1C);
            goto L_80233868;
    }
    goto skip_1;
    // 0x80233788: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
    skip_1:
    // 0x8023378C: lhu         $t9, 0xA($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0XA);
    // 0x80233790: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80233794: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80233798: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8023379C: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802337A0: bgez        $t9, L_802337B8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802337A4: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_802337B8;
    }
    // 0x802337A4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802337A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802337AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802337B0: nop

    // 0x802337B4: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_802337B8:
    // 0x802337B8: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802337BC: lhu         $t8, 0xC($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0XC);
    // 0x802337C0: lwc1        $f10, 0x14($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X14);
    // 0x802337C4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802337C8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802337CC: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802337D0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802337D4: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802337D8: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x802337DC: bgez        $t8, L_802337F0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802337E0: nop
    
            goto L_802337F0;
    }
    // 0x802337E0: nop

    // 0x802337E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802337E8: nop

    // 0x802337EC: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
L_802337F0:
    // 0x802337F0: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802337F4: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x802337F8: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x802337FC: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x80233800: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80233804: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x80233808: or          $t7, $t8, $t5
    ctx->r15 = ctx->r24 | ctx->r13;
    // 0x8023380C: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80233810: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80233814: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80233818: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8023381C: nop

    // 0x80233820: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x80233824: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x80233828: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8023382C: lhu         $t8, 0xA($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0XA);
    // 0x80233830: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80233834: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x80233838: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8023383C: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x80233840: lhu         $t6, 0xC($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0XC);
    // 0x80233844: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x80233848: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x8023384C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80233850: addu        $t7, $t8, $a0
    ctx->r15 = ADD32(ctx->r24, ctx->r4);
    // 0x80233854: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80233858: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8023385C: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80233860: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80233864: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
L_80233868:
    // 0x80233868: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8023386C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80233870: beq         $v0, $zero, L_80233944
    if (ctx->r2 == 0) {
        // 0x80233874: lui         $t5, 0xF200
        ctx->r13 = S32(0XF200 << 16);
            goto L_80233944;
    }
    // 0x80233874: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x80233878: lbu         $t6, 0x1A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1A);
    // 0x8023387C: beql        $t6, $zero, L_80233948
    if (ctx->r14 == 0) {
        // 0x80233880: lw          $t8, 0x18($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18);
            goto L_80233948;
    }
    goto skip_2;
    // 0x80233880: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    skip_2:
    // 0x80233884: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x80233888: lhu         $t7, 0x14($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X14);
    // 0x8023388C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80233890: lw          $t8, 0x2C($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X2C);
    // 0x80233894: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80233898: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x8023389C: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x802338A0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x802338A4: lhu         $a3, 0xA($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0XA);
    // 0x802338A8: lhu         $t1, 0xC($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0XC);
    // 0x802338AC: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
    // 0x802338B0: nop

    // 0x802338B4: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802338B8: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802338BC: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x802338C0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802338C4: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x802338C8: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x802338CC: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x802338D0: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802338D4: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802338D8: nop

    // 0x802338DC: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802338E0: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802338E4: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x802338E8: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x802338EC: nop

    // 0x802338F0: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x802338F4: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802338F8: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x802338FC: or          $t8, $t7, $t5
    ctx->r24 = ctx->r15 | ctx->r13;
    // 0x80233900: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80233904: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x80233908: nop

    // 0x8023390C: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x80233910: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x80233914: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80233918: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8023391C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80233920: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x80233924: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x80233928: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8023392C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80233930: addu        $t9, $t6, $a0
    ctx->r25 = ADD32(ctx->r14, ctx->r4);
    // 0x80233934: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x80233938: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8023393C: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x80233940: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_80233944:
    // 0x80233944: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
L_80233948:
    // 0x80233948: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8023394C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80233950: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x80233954: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80233958: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x8023395C: lhu         $v0, 0x0($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X0);
    // 0x80233960: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x80233964: beq         $v0, $at, L_80233A58
    if (ctx->r2 == ctx->r1) {
        // 0x80233968: sll         $t8, $v0, 3
        ctx->r24 = S32(ctx->r2 << 3);
            goto L_80233A58;
    }
    // 0x80233968: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x8023396C: lw          $t7, 0x0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X0);
    // 0x80233970: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80233974: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80233978: addu        $a1, $t8, $t7
    ctx->r5 = ADD32(ctx->r24, ctx->r15);
    // 0x8023397C: lbu         $t6, 0x1A($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1A);
    // 0x80233980: beql        $t6, $zero, L_80233A5C
    if (ctx->r14 == 0) {
        // 0x80233984: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80233A5C;
    }
    goto skip_3;
    // 0x80233984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80233988: lhu         $t9, 0xA($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0XA);
    // 0x8023398C: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80233990: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80233994: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80233998: bgez        $t9, L_802339AC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8023399C: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802339AC;
    }
    // 0x8023399C: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802339A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802339A4: nop

    // 0x802339A8: add.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f18.fl;
L_802339AC:
    // 0x802339AC: mul.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x802339B0: lhu         $t7, 0xC($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0XC);
    // 0x802339B4: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    // 0x802339B8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802339BC: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x802339C0: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802339C4: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802339C8: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802339CC: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x802339D0: bgez        $t7, L_802339E4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802339D4: nop
    
            goto L_802339E4;
    }
    // 0x802339D4: nop

    // 0x802339D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802339DC: nop

    // 0x802339E0: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_802339E4:
    // 0x802339E4: mul.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802339E8: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x802339EC: andi        $t8, $v1, 0xFFF
    ctx->r24 = ctx->r3 & 0XFFF;
    // 0x802339F0: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x802339F4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802339F8: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x802339FC: or          $t6, $t7, $t5
    ctx->r14 = ctx->r15 | ctx->r13;
    // 0x80233A00: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80233A04: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80233A08: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80233A0C: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x80233A10: nop

    // 0x80233A14: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x80233A18: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80233A1C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80233A20: lhu         $t7, 0xA($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0XA);
    // 0x80233A24: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80233A28: addu        $t9, $t6, $v1
    ctx->r25 = ADD32(ctx->r14, ctx->r3);
    // 0x80233A2C: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x80233A30: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80233A34: lhu         $t8, 0xC($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0XC);
    // 0x80233A38: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x80233A3C: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x80233A40: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80233A44: addu        $t6, $t7, $a0
    ctx->r14 = ADD32(ctx->r15, ctx->r4);
    // 0x80233A48: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x80233A4C: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x80233A50: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x80233A54: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_80233A58:
    // 0x80233A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80233A5C:
    // 0x80233A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80233A60: jr          $ra
    // 0x80233A64: nop

    return;
    // 0x80233A64: nop

;}
RECOMP_FUNC void D_802A1E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1EF4: jr          $ra
    // 0x802A1EF8: lbu         $v0, 0x1E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1E);
    return;
    // 0x802A1EF8: lbu         $v0, 0x1E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1E);
;}
RECOMP_FUNC void D_80227408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227408: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8022740C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80227410: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x80227414: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80227418: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8022741C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80227420: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x80227424: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80227428: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8022742C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80227430: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80227434: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80227438: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8022743C: sw          $a1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r5;
    // 0x80227440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227444: jal         0x8022B460
    // 0x80227448: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8022B460(rdram, ctx);
        goto after_0;
    // 0x80227448: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x8022744C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80227450: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x80227454: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227458: jal         0x8023D0C0
    // 0x8022745C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8023D0C0(rdram, ctx);
        goto after_1;
    // 0x8022745C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x80227460: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80227464: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x80227468: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x8022746C: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x80227470: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80227474: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227478: jal         0x8023D0C0
    // 0x8022747C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    static_3_8023D0C0(rdram, ctx);
        goto after_2;
    // 0x8022747C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x80227480: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x80227484: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80227488: sh          $v1, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r3;
    // 0x8022748C: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x80227490: sw          $a1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r5;
    // 0x80227494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227498: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8022749C: jal         0x8022B460
    // 0x802274A0: sh          $t7, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r15;
    func_8022B460(rdram, ctx);
        goto after_3;
    // 0x802274A0: sh          $t7, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r15;
    after_3:
    // 0x802274A4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x802274A8: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x802274AC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802274B0: jal         0x8023D0C0
    // 0x802274B4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8023D0C0(rdram, ctx);
        goto after_4;
    // 0x802274B4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_4:
    // 0x802274B8: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x802274BC: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x802274C0: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x802274C4: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x802274C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802274CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802274D0: jal         0x8023D0C0
    // 0x802274D4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    static_3_8023D0C0(rdram, ctx);
        goto after_5;
    // 0x802274D4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_5:
    // 0x802274D8: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x802274DC: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x802274E0: sh          $v1, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r3;
    // 0x802274E4: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x802274E8: sw          $a1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r5;
    // 0x802274EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802274F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802274F4: jal         0x8022B460
    // 0x802274F8: sh          $t9, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r25;
    func_8022B460(rdram, ctx);
        goto after_6;
    // 0x802274F8: sh          $t9, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r25;
    after_6:
    // 0x802274FC: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80227500: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x80227504: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227508: jal         0x8023D0C0
    // 0x8022750C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8023D0C0(rdram, ctx);
        goto after_7;
    // 0x8022750C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_7:
    // 0x80227510: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80227514: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x80227518: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x8022751C: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x80227520: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80227524: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227528: jal         0x8023D0C0
    // 0x8022752C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    static_3_8023D0C0(rdram, ctx);
        goto after_8;
    // 0x8022752C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_8:
    // 0x80227530: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x80227534: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80227538: sh          $v1, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r3;
    // 0x8022753C: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x80227540: sw          $a1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r5;
    // 0x80227544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80227548: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8022754C: jal         0x8022B460
    // 0x80227550: sh          $t7, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r15;
    func_8022B460(rdram, ctx);
        goto after_9;
    // 0x80227550: sh          $t7, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r15;
    after_9:
    // 0x80227554: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80227558: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x8022755C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227560: jal         0x8023D0C0
    // 0x80227564: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    static_3_8023D0C0(rdram, ctx);
        goto after_10;
    // 0x80227564: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_10:
    // 0x80227568: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8022756C: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x80227570: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x80227574: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x80227578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8022757C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80227580: jal         0x8023D0C0
    // 0x80227584: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    static_3_8023D0C0(rdram, ctx);
        goto after_11;
    // 0x80227584: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_11:
    // 0x80227588: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x8022758C: sh          $v1, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r3;
    // 0x80227590: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x80227594: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80227598: sw          $a3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r7;
    // 0x8022759C: jal         0x8022B948
    // 0x802275A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_12;
    // 0x802275A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
    // 0x802275A4: lhu         $t6, 0x9A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X9A);
    // 0x802275A8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x802275AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802275B0: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x802275B4: lhu         $s1, 0x98($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X98);
    // 0x802275B8: sh          $s1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r17;
    // 0x802275BC: lhu         $ra, 0x96($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X96);
    // 0x802275C0: sh          $ra, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r31;
    // 0x802275C4: lhu         $s5, 0x92($sp)
    ctx->r21 = MEM_HU(ctx->r29, 0X92);
    // 0x802275C8: sh          $s5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r21;
    // 0x802275CC: lhu         $a3, 0x90($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X90);
    // 0x802275D0: sh          $a3, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r7;
    // 0x802275D4: lhu         $s0, 0x8E($sp)
    ctx->r16 = MEM_HU(ctx->r29, 0X8E);
    // 0x802275D8: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
    // 0x802275DC: lhu         $t7, 0x94($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X94);
    // 0x802275E0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802275E4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x802275E8: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802275EC: mflo        $t8
    ctx->r24 = lo;
    // 0x802275F0: nop

    // 0x802275F4: nop

    // 0x802275F8: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802275FC: mflo        $a2
    ctx->r6 = lo;
    // 0x80227600: bgez        $a2, L_80227610
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80227604: sra         $t9, $a2, 3
        ctx->r25 = S32(SIGNED(ctx->r6) >> 3);
            goto L_80227610;
    }
    // 0x80227604: sra         $t9, $a2, 3
    ctx->r25 = S32(SIGNED(ctx->r6) >> 3);
    // 0x80227608: addiu       $at, $a2, 0x7
    ctx->r1 = ADD32(ctx->r6, 0X7);
    // 0x8022760C: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_80227610:
    // 0x80227610: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80227614: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80227618: jal         0x8022B948
    // 0x8022761C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    func_8022B948(rdram, ctx);
        goto after_13;
    // 0x8022761C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    after_13:
    // 0x80227620: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80227624: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80227628: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8022762C: jal         0x80225424
    // 0x80227630: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    func_80225424(rdram, ctx);
        goto after_14;
    // 0x80227630: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    after_14:
    // 0x80227634: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80227638: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8022763C: div         $zero, $ra, $a3
    lo = S32(S64(S32(ctx->r31)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r31)) % S64(S32(ctx->r7)));
    // 0x80227640: mflo        $v0
    ctx->r2 = lo;
    // 0x80227644: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80227648: bne         $a3, $zero, L_80227654
    if (ctx->r7 != 0) {
        // 0x8022764C: nop
    
            goto L_80227654;
    }
    // 0x8022764C: nop

    // 0x80227650: break       7
    do_break(2149742160);
L_80227654:
    // 0x80227654: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80227658: bne         $a3, $at, L_8022766C
    if (ctx->r7 != ctx->r1) {
        // 0x8022765C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022766C;
    }
    // 0x8022765C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80227660: bne         $ra, $at, L_8022766C
    if (ctx->r31 != ctx->r1) {
        // 0x80227664: nop
    
            goto L_8022766C;
    }
    // 0x80227664: nop

    // 0x80227668: break       6
    do_break(2149742184);
L_8022766C:
    // 0x8022766C: div         $zero, $s5, $s0
    lo = S32(S64(S32(ctx->r21)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r21)) % S64(S32(ctx->r16)));
    // 0x80227670: mflo        $v1
    ctx->r3 = lo;
    // 0x80227674: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
    // 0x80227678: bne         $s0, $zero, L_80227684
    if (ctx->r16 != 0) {
        // 0x8022767C: nop
    
            goto L_80227684;
    }
    // 0x8022767C: nop

    // 0x80227680: break       7
    do_break(2149742208);
L_80227684:
    // 0x80227684: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80227688: bne         $s0, $at, L_8022769C
    if (ctx->r16 != ctx->r1) {
        // 0x8022768C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022769C;
    }
    // 0x8022768C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80227690: bne         $s5, $at, L_8022769C
    if (ctx->r21 != ctx->r1) {
        // 0x80227694: nop
    
            goto L_8022769C;
    }
    // 0x80227694: nop

    // 0x80227698: break       6
    do_break(2149742232);
L_8022769C:
    // 0x8022769C: div         $zero, $ra, $a3
    lo = S32(S64(S32(ctx->r31)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r31)) % S64(S32(ctx->r7)));
    // 0x802276A0: mfhi        $t6
    ctx->r14 = hi;
    // 0x802276A4: bne         $a3, $zero, L_802276B0
    if (ctx->r7 != 0) {
        // 0x802276A8: nop
    
            goto L_802276B0;
    }
    // 0x802276A8: nop

    // 0x802276AC: break       7
    do_break(2149742252);
L_802276B0:
    // 0x802276B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802276B4: bne         $a3, $at, L_802276C8
    if (ctx->r7 != ctx->r1) {
        // 0x802276B8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802276C8;
    }
    // 0x802276B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802276BC: bne         $ra, $at, L_802276C8
    if (ctx->r31 != ctx->r1) {
        // 0x802276C0: nop
    
            goto L_802276C8;
    }
    // 0x802276C0: nop

    // 0x802276C4: break       6
    do_break(2149742276);
L_802276C8:
    // 0x802276C8: beq         $t6, $zero, L_802276D8
    if (ctx->r14 == 0) {
        // 0x802276CC: nop
    
            goto L_802276D8;
    }
    // 0x802276CC: nop

    // 0x802276D0: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x802276D4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_802276D8:
    // 0x802276D8: div         $zero, $s5, $s0
    lo = S32(S64(S32(ctx->r21)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r21)) % S64(S32(ctx->r16)));
    // 0x802276DC: mfhi        $t4
    ctx->r12 = hi;
    // 0x802276E0: bne         $s0, $zero, L_802276EC
    if (ctx->r16 != 0) {
        // 0x802276E4: nop
    
            goto L_802276EC;
    }
    // 0x802276E4: nop

    // 0x802276E8: break       7
    do_break(2149742312);
L_802276EC:
    // 0x802276EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802276F0: bne         $s0, $at, L_80227704
    if (ctx->r16 != ctx->r1) {
        // 0x802276F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80227704;
    }
    // 0x802276F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802276F8: bne         $s5, $at, L_80227704
    if (ctx->r21 != ctx->r1) {
        // 0x802276FC: nop
    
            goto L_80227704;
    }
    // 0x802276FC: nop

    // 0x80227700: break       6
    do_break(2149742336);
L_80227704:
    // 0x80227704: beq         $t4, $zero, L_80227714
    if (ctx->r12 == 0) {
        // 0x80227708: nop
    
            goto L_80227714;
    }
    // 0x80227708: nop

    // 0x8022770C: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    // 0x80227710: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80227714:
    // 0x80227714: multu       $t0, $t5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227718: mflo        $t7
    ctx->r15 = lo;
    // 0x8022771C: sh          $t7, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r15;
    // 0x80227720: lh          $a0, 0xE($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XE);
    // 0x80227724: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80227728: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x8022772C: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x80227730: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80227734: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x80227738: sw          $t0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r8;
    // 0x8022773C: jal         0x8022BE54
    // 0x80227740: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    static_3_8022BE54(rdram, ctx);
        goto after_15;
    // 0x80227740: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_15:
    // 0x80227744: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x80227748: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8022774C: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x80227750: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80227754: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80227758: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022775C: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    // 0x80227760: blez        $t5, L_80227984
    if (SIGNED(ctx->r13) <= 0) {
        // 0x80227764: or          $t3, $zero, $zero
        ctx->r11 = 0 | 0;
            goto L_80227984;
    }
    // 0x80227764: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x80227768: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_8022776C:
    // 0x8022776C: blez        $t0, L_80227978
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80227770: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80227978;
    }
    // 0x80227770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80227774: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227778: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x8022777C: mflo        $a0
    ctx->r4 = lo;
    // 0x80227780: beql        $v0, $zero, L_8022782C
    if (ctx->r2 == 0) {
        // 0x80227784: addu        $t1, $a2, $a0
        ctx->r9 = ADD32(ctx->r6, ctx->r4);
            goto L_8022782C;
    }
    goto skip_0;
    // 0x80227784: addu        $t1, $a2, $a0
    ctx->r9 = ADD32(ctx->r6, ctx->r4);
    skip_0:
    // 0x80227788: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x8022778C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80227790: beq         $s3, $zero, L_802277AC
    if (ctx->r19 == 0) {
        // 0x80227794: addu        $v0, $t9, $t6
        ctx->r2 = ADD32(ctx->r25, ctx->r14);
            goto L_802277AC;
    }
    // 0x80227794: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x80227798: addiu       $t7, $t3, 0x1
    ctx->r15 = ADD32(ctx->r11, 0X1);
    // 0x8022779C: bnel        $t5, $t7, L_802277B0
    if (ctx->r13 != ctx->r15) {
        // 0x802277A0: sh          $s0, 0xC($v0)
        MEM_H(0XC, ctx->r2) = ctx->r16;
            goto L_802277B0;
    }
    goto skip_1;
    // 0x802277A0: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
    skip_1:
    // 0x802277A4: b           L_802277B0
    // 0x802277A8: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
        goto L_802277B0;
    // 0x802277A8: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
L_802277AC:
    // 0x802277AC: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
L_802277B0:
    // 0x802277B0: beql        $s4, $zero, L_802277D8
    if (ctx->r20 == 0) {
        // 0x802277B4: sh          $a3, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r7;
            goto L_802277D8;
    }
    goto skip_2;
    // 0x802277B4: sh          $a3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r7;
    skip_2:
    // 0x802277B8: bne         $t0, $s5, L_802277D4
    if (ctx->r8 != ctx->r21) {
        // 0x802277BC: addiu       $t8, $t0, -0x1
        ctx->r24 = ADD32(ctx->r8, -0X1);
            goto L_802277D4;
    }
    // 0x802277BC: addiu       $t8, $t0, -0x1
    ctx->r24 = ADD32(ctx->r8, -0X1);
    // 0x802277C0: multu       $a3, $t8
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802277C4: mflo        $t9
    ctx->r25 = lo;
    // 0x802277C8: subu        $t6, $ra, $t9
    ctx->r14 = SUB32(ctx->r31, ctx->r25);
    // 0x802277CC: b           L_802277D8
    // 0x802277D0: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
        goto L_802277D8;
    // 0x802277D0: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
L_802277D4:
    // 0x802277D4: sh          $a3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r7;
L_802277D8:
    // 0x802277D8: lh          $t7, 0xC($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XC);
    // 0x802277DC: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x802277E0: lh          $v1, 0xE($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE);
    // 0x802277E4: multu       $t7, $a3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802277E8: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x802277EC: sh          $a3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r7;
    // 0x802277F0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x802277F4: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x802277F8: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x802277FC: mflo        $t8
    ctx->r24 = lo;
    // 0x80227800: nop

    // 0x80227804: nop

    // 0x80227808: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022780C: mflo        $t9
    ctx->r25 = lo;
    // 0x80227810: bgez        $t9, L_80227820
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80227814: sra         $t6, $t9, 3
        ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
            goto L_80227820;
    }
    // 0x80227814: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x80227818: addiu       $at, $t9, 0x7
    ctx->r1 = ADD32(ctx->r25, 0X7);
    // 0x8022781C: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80227820:
    // 0x80227820: beq         $s5, $t0, L_80227978
    if (ctx->r21 == ctx->r8) {
        // 0x80227824: addu        $a1, $a1, $t6
        ctx->r5 = ADD32(ctx->r5, ctx->r14);
            goto L_80227978;
    }
    // 0x80227824: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x80227828: addu        $t1, $a2, $a0
    ctx->r9 = ADD32(ctx->r6, ctx->r4);
L_8022782C:
    // 0x8022782C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
L_80227830:
    // 0x80227830: lw          $t7, 0x14($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X14);
    // 0x80227834: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x80227838: beq         $s3, $zero, L_80227854
    if (ctx->r19 == 0) {
        // 0x8022783C: addu        $v0, $t7, $t8
        ctx->r2 = ADD32(ctx->r15, ctx->r24);
            goto L_80227854;
    }
    // 0x8022783C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80227840: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x80227844: bnel        $t5, $t9, L_80227858
    if (ctx->r13 != ctx->r25) {
        // 0x80227848: sh          $s0, 0xC($v0)
        MEM_H(0XC, ctx->r2) = ctx->r16;
            goto L_80227858;
    }
    goto skip_3;
    // 0x80227848: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
    skip_3:
    // 0x8022784C: b           L_80227858
    // 0x80227850: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
        goto L_80227858;
    // 0x80227850: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
L_80227854:
    // 0x80227854: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
L_80227858:
    // 0x80227858: beq         $s4, $zero, L_8022787C
    if (ctx->r20 == 0) {
        // 0x8022785C: addiu       $t6, $a2, 0x1
        ctx->r14 = ADD32(ctx->r6, 0X1);
            goto L_8022787C;
    }
    // 0x8022785C: addiu       $t6, $a2, 0x1
    ctx->r14 = ADD32(ctx->r6, 0X1);
    // 0x80227860: bne         $t0, $t6, L_8022787C
    if (ctx->r8 != ctx->r14) {
        // 0x80227864: addiu       $t7, $t0, -0x1
        ctx->r15 = ADD32(ctx->r8, -0X1);
            goto L_8022787C;
    }
    // 0x80227864: addiu       $t7, $t0, -0x1
    ctx->r15 = ADD32(ctx->r8, -0X1);
    // 0x80227868: multu       $a3, $t7
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022786C: mflo        $t8
    ctx->r24 = lo;
    // 0x80227870: subu        $t9, $ra, $t8
    ctx->r25 = SUB32(ctx->r31, ctx->r24);
    // 0x80227874: b           L_80227880
    // 0x80227878: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
        goto L_80227880;
    // 0x80227878: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_8022787C:
    // 0x8022787C: sh          $a3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r7;
L_80227880:
    // 0x80227880: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x80227884: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x80227888: lh          $v1, 0xE($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE);
    // 0x8022788C: multu       $t6, $a3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227890: sh          $a3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r7;
    // 0x80227894: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x80227898: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x8022789C: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x802278A0: lw          $t6, 0x14($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X14);
    // 0x802278A4: addiu       $a0, $a2, 0x2
    ctx->r4 = ADD32(ctx->r6, 0X2);
    // 0x802278A8: mflo        $t7
    ctx->r15 = lo;
    // 0x802278AC: nop

    // 0x802278B0: nop

    // 0x802278B4: multu       $t7, $s1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802278B8: sll         $t7, $t2, 4
    ctx->r15 = S32(ctx->r10 << 4);
    // 0x802278BC: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x802278C0: mflo        $t8
    ctx->r24 = lo;
    // 0x802278C4: bgez        $t8, L_802278D4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802278C8: sra         $t9, $t8, 3
        ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
            goto L_802278D4;
    }
    // 0x802278C8: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x802278CC: addiu       $at, $t8, 0x7
    ctx->r1 = ADD32(ctx->r24, 0X7);
    // 0x802278D0: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_802278D4:
    // 0x802278D4: beq         $s3, $zero, L_802278F0
    if (ctx->r19 == 0) {
        // 0x802278D8: addu        $a1, $a1, $t9
        ctx->r5 = ADD32(ctx->r5, ctx->r25);
            goto L_802278F0;
    }
    // 0x802278D8: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x802278DC: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x802278E0: bnel        $t5, $t8, L_802278F4
    if (ctx->r13 != ctx->r24) {
        // 0x802278E4: sh          $s0, 0xC($v0)
        MEM_H(0XC, ctx->r2) = ctx->r16;
            goto L_802278F4;
    }
    goto skip_4;
    // 0x802278E4: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
    skip_4:
    // 0x802278E8: b           L_802278F4
    // 0x802278EC: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
        goto L_802278F4;
    // 0x802278EC: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
L_802278F0:
    // 0x802278F0: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
L_802278F4:
    // 0x802278F4: beql        $s4, $zero, L_8022791C
    if (ctx->r20 == 0) {
        // 0x802278F8: sh          $a3, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r7;
            goto L_8022791C;
    }
    goto skip_5;
    // 0x802278F8: sh          $a3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r7;
    skip_5:
    // 0x802278FC: bne         $t0, $a0, L_80227918
    if (ctx->r8 != ctx->r4) {
        // 0x80227900: addiu       $t9, $t0, -0x1
        ctx->r25 = ADD32(ctx->r8, -0X1);
            goto L_80227918;
    }
    // 0x80227900: addiu       $t9, $t0, -0x1
    ctx->r25 = ADD32(ctx->r8, -0X1);
    // 0x80227904: multu       $a3, $t9
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227908: mflo        $t6
    ctx->r14 = lo;
    // 0x8022790C: subu        $t7, $ra, $t6
    ctx->r15 = SUB32(ctx->r31, ctx->r14);
    // 0x80227910: b           L_80227920
    // 0x80227914: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
        goto L_80227920;
    // 0x80227914: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
L_80227918:
    // 0x80227918: sh          $a3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r7;
L_8022791C:
    // 0x8022791C: addiu       $a0, $a2, 0x2
    ctx->r4 = ADD32(ctx->r6, 0X2);
L_80227920:
    // 0x80227920: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    // 0x80227924: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x80227928: lh          $v1, 0xE($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE);
    // 0x8022792C: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227930: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x80227934: sh          $a3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r7;
    // 0x80227938: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8022793C: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x80227940: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x80227944: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x80227948: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x8022794C: mflo        $t9
    ctx->r25 = lo;
    // 0x80227950: nop

    // 0x80227954: nop

    // 0x80227958: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022795C: mflo        $t6
    ctx->r14 = lo;
    // 0x80227960: bgez        $t6, L_80227970
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80227964: sra         $t7, $t6, 3
        ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
            goto L_80227970;
    }
    // 0x80227964: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x80227968: addiu       $at, $t6, 0x7
    ctx->r1 = ADD32(ctx->r14, 0X7);
    // 0x8022796C: sra         $t7, $at, 3
    ctx->r15 = S32(SIGNED(ctx->r1) >> 3);
L_80227970:
    // 0x80227970: bne         $a0, $t0, L_80227830
    if (ctx->r4 != ctx->r8) {
        // 0x80227974: addu        $a1, $a1, $t7
        ctx->r5 = ADD32(ctx->r5, ctx->r15);
            goto L_80227830;
    }
    // 0x80227974: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
L_80227978:
    // 0x80227978: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8022797C: bne         $t3, $t5, L_8022776C
    if (ctx->r11 != ctx->r13) {
        // 0x80227980: nop
    
            goto L_8022776C;
    }
    // 0x80227980: nop

L_80227984:
    // 0x80227984: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80227988: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x8022798C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80227990: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80227994: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80227998: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8022799C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x802279A0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x802279A4: jr          $ra
    // 0x802279A8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x802279A8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void D_802B9380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B9400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B9404: bne         $a0, $zero, L_802B9418
    if (ctx->r4 != 0) {
        // 0x802B9408: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B9418;
    }
    // 0x802B9408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B940C: jal         0x802C67EC
    // 0x802B9410: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802B9410: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_0:
    // 0x802B9414: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802B9418:
    // 0x802B9418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B941C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B9420: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802B9424: jr          $ra
    // 0x802B9428: nop

    return;
    // 0x802B9428: nop

;}
RECOMP_FUNC void D_802DD2CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802DD34C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802DD350: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802DD354: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802DD358: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802DD35C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x802DD360: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x802DD364: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802DD368: jal         0x80223FC4
    // 0x802DD36C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80223FC4(rdram, ctx);
        goto after_0;
    // 0x802DD36C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802DD370: beq         $v0, $zero, L_802DD380
    if (ctx->r2 == 0) {
        // 0x802DD374: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DD380;
    }
    // 0x802DD374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DD378: jal         0x8030DD1C
    // 0x802DD37C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_8030DD1C(rdram, ctx);
        goto after_1;
    // 0x802DD37C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
L_802DD380:
    // 0x802DD380: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DD384: jal         0x80223FC4
    // 0x802DD388: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_80223FC4(rdram, ctx);
        goto after_2;
    // 0x802DD388: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802DD38C: beq         $v0, $zero, L_802DD39C
    if (ctx->r2 == 0) {
        // 0x802DD390: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DD39C;
    }
    // 0x802DD390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DD394: jal         0x8030DD1C
    // 0x802DD398: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8030DD1C(rdram, ctx);
        goto after_3;
    // 0x802DD398: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
L_802DD39C:
    // 0x802DD39C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DD3A0: jal         0x80223FC4
    // 0x802DD3A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    static_3_80223FC4(rdram, ctx);
        goto after_4;
    // 0x802DD3A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x802DD3A8: beq         $v0, $zero, L_802DD3B8
    if (ctx->r2 == 0) {
        // 0x802DD3AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DD3B8;
    }
    // 0x802DD3AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DD3B0: jal         0x8030DD1C
    // 0x802DD3B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8030DD1C(rdram, ctx);
        goto after_5;
    // 0x802DD3B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
L_802DD3B8:
    // 0x802DD3B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802DD3BC: jal         0x80223FC4
    // 0x802DD3C0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    static_3_80223FC4(rdram, ctx);
        goto after_6;
    // 0x802DD3C0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x802DD3C4: beq         $v0, $zero, L_802DD3D4
    if (ctx->r2 == 0) {
        // 0x802DD3C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802DD3D4;
    }
    // 0x802DD3C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802DD3CC: jal         0x8030DD1C
    // 0x802DD3D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8030DD1C(rdram, ctx);
        goto after_7;
    // 0x802DD3D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_802DD3D4:
    // 0x802DD3D4: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x802DD3D8: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802DD3DC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802DD3E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802DD3E4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802DD3E8: lwc1        $f4, 0xB4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802DD3EC: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x802DD3F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802DD3F4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802DD3F8: bc1f        L_802DD434
    if (!c1cs) {
        // 0x802DD3FC: swc1        $f10, 0xB4($s0)
        MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
            goto L_802DD434;
    }
    // 0x802DD3FC: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
    // 0x802DD400: lwc1        $f16, 0xB4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802DD404: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802DD408: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802DD40C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802DD410: nop

    // 0x802DD414: bc1f        L_802DD42C
    if (!c1cs) {
        // 0x802DD418: nop
    
            goto L_802DD42C;
    }
    // 0x802DD418: nop

    // 0x802DD41C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802DD420: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802DD424: swc1        $f0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f0.u32l;
    // 0x802DD428: swc1        $f6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f6.u32l;
L_802DD42C:
    // 0x802DD42C: b           L_802DD454
    // 0x802DD430: nop

        goto L_802DD454;
    // 0x802DD430: nop

L_802DD434:
    // 0x802DD434: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802DD438: lwc1        $f4, 0xB4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x802DD43C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802DD440: nop

    // 0x802DD444: bc1f        L_802DD454
    if (!c1cs) {
        // 0x802DD448: nop
    
            goto L_802DD454;
    }
    // 0x802DD448: nop

    // 0x802DD44C: swc1        $f0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f0.u32l;
    // 0x802DD450: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
L_802DD454:
    // 0x802DD454: jal         0x8022970C
    // 0x802DD458: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_8022970C(rdram, ctx);
        goto after_8;
    // 0x802DD458: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_8:
    // 0x802DD45C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802DD460: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802DD464: lwc1        $f2, 0x7C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802DD468: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x802DD46C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x802DD470: nop

    // 0x802DD474: bc1fl       L_802DD4B4
    if (!c1cs) {
        // 0x802DD478: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_802DD4B4;
    }
    goto skip_0;
    // 0x802DD478: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x802DD47C: jal         0x8022AA40
    // 0x802DD480: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_9;
    // 0x802DD480: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    after_9:
    // 0x802DD484: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x802DD488: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802DD48C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802DD490: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802DD494: mul.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802DD498: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DD49C: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802DD4A0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802DD4A4: sub.s       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x802DD4A8: b           L_802DD4BC
    // 0x802DD4AC: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
        goto L_802DD4BC;
    // 0x802DD4AC: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802DD4B0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_802DD4B4:
    // 0x802DD4B4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802DD4B8: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
L_802DD4BC:
    // 0x802DD4BC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802DD4C0: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x802DD4C4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x802DD4C8: jal         0x8022A0D0
    // 0x802DD4CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_8022A0D0(rdram, ctx);
        goto after_10;
    // 0x802DD4CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x802DD4D0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x802DD4D4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x802DD4D8: jal         0x80228DE0
    // 0x802DD4DC: addiu       $a0, $v0, 0x4DD4
    ctx->r4 = ADD32(ctx->r2, 0X4DD4);
    func_80228DE0(rdram, ctx);
        goto after_11;
    // 0x802DD4DC: addiu       $a0, $v0, 0x4DD4
    ctx->r4 = ADD32(ctx->r2, 0X4DD4);
    after_11:
    // 0x802DD4E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802DD4E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802DD4E8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802DD4EC: jr          $ra
    // 0x802DD4F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802DD4F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void D_8022C9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022C9D8: jr          $ra
    // 0x8022C9DC: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
    return;
    // 0x8022C9DC: addiu       $v0, $a0, 0x78
    ctx->r2 = ADD32(ctx->r4, 0X78);
;}
RECOMP_FUNC void D_8028F0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028F174: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028F178: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8028F17C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8028F180: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028F184: beq         $a0, $zero, L_8028F2F4
    if (ctx->r4 == 0) {
        // 0x8028F188: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_8028F2F4;
    }
    // 0x8028F188: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8028F18C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8028F190: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x8028F194: sw          $t6, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r14;
    // 0x8028F198: jal         0x8021BAE0
    // 0x8028F19C: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    static_3_8021BAE0(rdram, ctx);
        goto after_0;
    // 0x8028F19C: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_0:
    // 0x8028F1A0: lw          $a0, 0xE10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE10);
    // 0x8028F1A4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F1A8: beql        $a0, $at, L_8028F1BC
    if (ctx->r4 == ctx->r1) {
        // 0x8028F1AC: lw          $a0, 0xE0C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XE0C);
            goto L_8028F1BC;
    }
    goto skip_0;
    // 0x8028F1AC: lw          $a0, 0xE0C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0C);
    skip_0:
    // 0x8028F1B0: jal         0x8021BAE0
    // 0x8028F1B4: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_1;
    // 0x8028F1B4: nop

    after_1:
    // 0x8028F1B8: lw          $a0, 0xE0C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0C);
L_8028F1BC:
    // 0x8028F1BC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F1C0: beql        $a0, $at, L_8028F1D4
    if (ctx->r4 == ctx->r1) {
        // 0x8028F1C4: lw          $a0, 0xE14($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XE14);
            goto L_8028F1D4;
    }
    goto skip_1;
    // 0x8028F1C4: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
    skip_1:
    // 0x8028F1C8: jal         0x8021BAE0
    // 0x8028F1CC: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_2;
    // 0x8028F1CC: nop

    after_2:
    // 0x8028F1D0: lw          $a0, 0xE14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE14);
L_8028F1D4:
    // 0x8028F1D4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F1D8: beql        $a0, $at, L_8028F1EC
    if (ctx->r4 == ctx->r1) {
        // 0x8028F1DC: lw          $a0, 0xE18($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XE18);
            goto L_8028F1EC;
    }
    goto skip_2;
    // 0x8028F1DC: lw          $a0, 0xE18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE18);
    skip_2:
    // 0x8028F1E0: jal         0x8021BAE0
    // 0x8028F1E4: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_3;
    // 0x8028F1E4: nop

    after_3:
    // 0x8028F1E8: lw          $a0, 0xE18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE18);
L_8028F1EC:
    // 0x8028F1EC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F1F0: beql        $a0, $at, L_8028F204
    if (ctx->r4 == ctx->r1) {
        // 0x8028F1F4: lw          $a0, 0xE1C($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XE1C);
            goto L_8028F204;
    }
    goto skip_3;
    // 0x8028F1F4: lw          $a0, 0xE1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE1C);
    skip_3:
    // 0x8028F1F8: jal         0x8021BAE0
    // 0x8028F1FC: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_4;
    // 0x8028F1FC: nop

    after_4:
    // 0x8028F200: lw          $a0, 0xE1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE1C);
L_8028F204:
    // 0x8028F204: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F208: beql        $a0, $at, L_8028F21C
    if (ctx->r4 == ctx->r1) {
        // 0x8028F20C: lw          $a0, 0xF20($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XF20);
            goto L_8028F21C;
    }
    goto skip_4;
    // 0x8028F20C: lw          $a0, 0xF20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF20);
    skip_4:
    // 0x8028F210: jal         0x8021BAE0
    // 0x8028F214: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_5;
    // 0x8028F214: nop

    after_5:
    // 0x8028F218: lw          $a0, 0xF20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF20);
L_8028F21C:
    // 0x8028F21C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F220: beql        $a0, $at, L_8028F234
    if (ctx->r4 == ctx->r1) {
        // 0x8028F224: lw          $a0, 0xF24($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XF24);
            goto L_8028F234;
    }
    goto skip_5;
    // 0x8028F224: lw          $a0, 0xF24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF24);
    skip_5:
    // 0x8028F228: jal         0x8021BAE0
    // 0x8028F22C: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_6;
    // 0x8028F22C: nop

    after_6:
    // 0x8028F230: lw          $a0, 0xF24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XF24);
L_8028F234:
    // 0x8028F234: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8028F238: beql        $a0, $at, L_8028F24C
    if (ctx->r4 == ctx->r1) {
        // 0x8028F23C: lw          $v0, 0xED8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XED8);
            goto L_8028F24C;
    }
    goto skip_6;
    // 0x8028F23C: lw          $v0, 0xED8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XED8);
    skip_6:
    // 0x8028F240: jal         0x8021BAE0
    // 0x8028F244: nop

    static_3_8021BAE0(rdram, ctx);
        goto after_7;
    // 0x8028F244: nop

    after_7:
    // 0x8028F248: lw          $v0, 0xED8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XED8);
L_8028F24C:
    // 0x8028F24C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8028F250: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x8028F254: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x8028F258: addu        $a0, $t7, $s0
    ctx->r4 = ADD32(ctx->r15, ctx->r16);
    // 0x8028F25C: jalr        $t9
    // 0x8028F260: addiu       $a0, $a0, 0xE28
    ctx->r4 = ADD32(ctx->r4, 0XE28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x8028F260: addiu       $a0, $a0, 0xE28
    ctx->r4 = ADD32(ctx->r4, 0XE28);
    after_8:
    // 0x8028F264: addiu       $a0, $s0, 0xE28
    ctx->r4 = ADD32(ctx->r16, 0XE28);
    // 0x8028F268: jal         0x8031DD60
    // 0x8028F26C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DD60(rdram, ctx);
        goto after_9;
    // 0x8028F26C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x8028F270: addiu       $a0, $s0, 0xC74
    ctx->r4 = ADD32(ctx->r16, 0XC74);
    // 0x8028F274: jal         0x802C49D0
    // 0x8028F278: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_10;
    // 0x8028F278: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x8028F27C: addiu       $a0, $s0, 0xAE0
    ctx->r4 = ADD32(ctx->r16, 0XAE0);
    // 0x8028F280: jal         0x802C49D0
    // 0x8028F284: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_11;
    // 0x8028F284: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x8028F288: addiu       $a0, $s0, 0x94C
    ctx->r4 = ADD32(ctx->r16, 0X94C);
    // 0x8028F28C: jal         0x802C49D0
    // 0x8028F290: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_12;
    // 0x8028F290: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x8028F294: addiu       $a0, $s0, 0x7B8
    ctx->r4 = ADD32(ctx->r16, 0X7B8);
    // 0x8028F298: jal         0x802C49D0
    // 0x8028F29C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_13;
    // 0x8028F29C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x8028F2A0: addiu       $a0, $s0, 0x624
    ctx->r4 = ADD32(ctx->r16, 0X624);
    // 0x8028F2A4: jal         0x802C49D0
    // 0x8028F2A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_14;
    // 0x8028F2A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
    // 0x8028F2AC: addiu       $a0, $s0, 0x490
    ctx->r4 = ADD32(ctx->r16, 0X490);
    // 0x8028F2B0: jal         0x802C49D0
    // 0x8028F2B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802C49D0(rdram, ctx);
        goto after_15;
    // 0x8028F2B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_15:
    // 0x8028F2B8: addiu       $a0, $s0, 0x2F0
    ctx->r4 = ADD32(ctx->r16, 0X2F0);
    // 0x8028F2BC: jal         0x803142EC
    // 0x8028F2C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_803142EC(rdram, ctx);
        goto after_16;
    // 0x8028F2C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_16:
    // 0x8028F2C4: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x8028F2C8: jal         0x802D66C4
    // 0x8028F2CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_802D66C4(rdram, ctx);
        goto after_17;
    // 0x8028F2CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_17:
    // 0x8028F2D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8028F2D4: jal         0x8031739C
    // 0x8028F2D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8031739C(rdram, ctx);
        goto after_18;
    // 0x8028F2D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x8028F2DC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8028F2E0: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x8028F2E4: beql        $t0, $zero, L_8028F2F8
    if (ctx->r8 == 0) {
        // 0x8028F2E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8028F2F8;
    }
    goto skip_7;
    // 0x8028F2E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x8028F2EC: jal         0x802C681C
    // 0x8028F2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_19;
    // 0x8028F2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
L_8028F2F4:
    // 0x8028F2F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8028F2F8:
    // 0x8028F2F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8028F2FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028F300: jr          $ra
    // 0x8028F304: nop

    return;
    // 0x8028F304: nop

;}
RECOMP_FUNC void D_802D35AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D362C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802D3630: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802D3634: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D3638: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802D363C: beq         $a0, $zero, L_802D36A8
    if (ctx->r4 == 0) {
        // 0x802D3640: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802D36A8;
    }
    // 0x802D3640: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802D3644: lw          $v0, 0x14C0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14C0);
    // 0x802D3648: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D364C: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802D3650: sw          $t6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r14;
    // 0x802D3654: lh          $t7, 0x50($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X50);
    // 0x802D3658: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x802D365C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802D3660: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    // 0x802D3664: jalr        $t9
    // 0x802D3668: addiu       $a0, $a0, 0x1410
    ctx->r4 = ADD32(ctx->r4, 0X1410);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802D3668: addiu       $a0, $a0, 0x1410
    ctx->r4 = ADD32(ctx->r4, 0X1410);
    after_0:
    // 0x802D366C: addiu       $a0, $s0, 0x1410
    ctx->r4 = ADD32(ctx->r16, 0X1410);
    // 0x802D3670: jal         0x8031DD60
    // 0x802D3674: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_8031DD60(rdram, ctx);
        goto after_1;
    // 0x802D3674: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x802D3678: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    // 0x802D367C: jal         0x80315D78
    // 0x802D3680: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    static_3_80315D78(rdram, ctx);
        goto after_2;
    // 0x802D3680: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x802D3684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802D3688: jal         0x803086D4
    // 0x802D368C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_803086D4(rdram, ctx);
        goto after_3;
    // 0x802D368C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802D3690: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x802D3694: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x802D3698: beql        $t0, $zero, L_802D36AC
    if (ctx->r8 == 0) {
        // 0x802D369C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802D36AC;
    }
    goto skip_0;
    // 0x802D369C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x802D36A0: jal         0x802C681C
    // 0x802D36A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_802C681C(rdram, ctx);
        goto after_4;
    // 0x802D36A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_802D36A8:
    // 0x802D36A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802D36AC:
    // 0x802D36AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802D36B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802D36B4: jr          $ra
    // 0x802D36B8: nop

    return;
    // 0x802D36B8: nop

;}
RECOMP_FUNC void D_8022AA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AA10: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x8022AA14: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x8022AA18: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022AA1C: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022AA20: andi        $t6, $v1, 0x1FF
    ctx->r14 = ctx->r3 & 0X1FF;
    // 0x8022AA24: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x8022AA28: beq         $at, $zero, L_8022AA90
    if (ctx->r1 == 0) {
        // 0x8022AA2C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8022AA90;
    }
    // 0x8022AA2C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8022AA30: slti        $at, $t6, 0xE6
    ctx->r1 = SIGNED(ctx->r14) < 0XE6 ? 1 : 0;
    // 0x8022AA34: bne         $at, $zero, L_8022AA88
    if (ctx->r1 != 0) {
        // 0x8022AA38: cvt.d.s     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
            goto L_8022AA88;
    }
    // 0x8022AA38: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x8022AA3C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8022AA40: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022AA44: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022AA48: ldc1        $f6, 0x20($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X20);
    // 0x8022AA4C: ldc1        $f10, 0x18($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X18);
    // 0x8022AA50: ldc1        $f4, 0x10($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, 0X10);
    // 0x8022AA54: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x8022AA58: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8022AA5C: ldc1        $f10, 0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X8);
    // 0x8022AA60: mul.d       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f12.d);
    // 0x8022AA64: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8022AA68: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x8022AA6C: add.d       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f14.d = ctx->f10.d + ctx->f8.d;
    // 0x8022AA70: mul.d       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x8022AA74: nop

    // 0x8022AA78: mul.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f14.d);
    // 0x8022AA7C: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x8022AA80: jr          $ra
    // 0x8022AA84: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    // 0x8022AA84: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
L_8022AA88:
    // 0x8022AA88: jr          $ra
    // 0x8022AA8C: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    return;
    // 0x8022AA8C: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
L_8022AA90:
    // 0x8022AA90: slti        $at, $v1, 0x136
    ctx->r1 = SIGNED(ctx->r3) < 0X136 ? 1 : 0;
    // 0x8022AA94: beq         $at, $zero, L_8022ABA8
    if (ctx->r1 == 0) {
        // 0x8022AA98: lwc1        $f4, 0x0($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
            goto L_8022ABA8;
    }
    // 0x8022AA98: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022AA9C: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022AAA0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AAA4: ldc1        $f10, 0x0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X0);
    // 0x8022AAA8: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x8022AAAC: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x8022AAB0: mul.d       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f10.d);
    // 0x8022AAB4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8022AAB8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022AABC: c.le.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d <= ctx->f0.d;
    // 0x8022AAC0: nop

    // 0x8022AAC4: bc1fl       L_8022AAF4
    if (!c1cs) {
        // 0x8022AAC8: mtc1        $at, $f7
        ctx->f_odd[(7 - 1) * 2] = ctx->r1;
            goto L_8022AAF4;
    }
    goto skip_0;
    // 0x8022AAC8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x8022AACC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022AAD0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8022AAD4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8022AAD8: nop

    // 0x8022AADC: add.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d + ctx->f16.d;
    // 0x8022AAE0: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x8022AAE4: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8022AAE8: b           L_8022AB10
    // 0x8022AAEC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
        goto L_8022AB10;
    // 0x8022AAEC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8022AAF0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
L_8022AAF4:
    // 0x8022AAF4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8022AAF8: nop

    // 0x8022AAFC: sub.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f0.d - ctx->f6.d;
    // 0x8022AB00: trunc.w.d   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x8022AB04: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8022AB08: nop

    // 0x8022AB0C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
L_8022AB10:
    // 0x8022AB10: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AB14: ldc1        $f18, 0x0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X0);
    // 0x8022AB18: cvt.d.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
    // 0x8022AB1C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022AB20: ldc1        $f6, 0x0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X0);
    // 0x8022AB24: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022AB28: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022AB2C: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x8022AB30: ldc1        $f8, 0x20($v1)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r3, 0X20);
    // 0x8022AB34: ldc1        $f18, 0x18($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X18);
    // 0x8022AB38: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x8022AB3C: mul.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x8022AB40: sub.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d - ctx->f4.d;
    // 0x8022AB44: sub.d       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = ctx->f2.d - ctx->f10.d;
    // 0x8022AB48: ldc1        $f10, 0x10($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X10);
    // 0x8022AB4C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8022AB50: nop

    // 0x8022AB54: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x8022AB58: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8022AB5C: ldc1        $f18, 0x8($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X8);
    // 0x8022AB60: mul.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x8022AB64: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x8022AB68: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x8022AB6C: bne         $t9, $zero, L_8022AB8C
    if (ctx->r25 != 0) {
        // 0x8022AB70: add.d       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
            goto L_8022AB8C;
    }
    // 0x8022AB70: add.d       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
    // 0x8022AB74: mul.d       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x8022AB78: nop

    // 0x8022AB7C: mul.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f14.d);
    // 0x8022AB80: add.d       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f6.d + ctx->f2.d;
    // 0x8022AB84: jr          $ra
    // 0x8022AB88: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    return;
    // 0x8022AB88: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_8022AB8C:
    // 0x8022AB8C: mul.d       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x8022AB90: nop

    // 0x8022AB94: mul.d       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x8022AB98: add.d       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f18.d + ctx->f2.d;
    // 0x8022AB9C: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x8022ABA0: jr          $ra
    // 0x8022ABA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x8022ABA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8022ABA8:
    // 0x8022ABA8: c.eq.s      $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f4.fl == ctx->f4.fl;
    // 0x8022ABAC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022ABB0: bc1tl       L_8022ABC4
    if (c1cs) {
        // 0x8022ABB4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8022ABC4;
    }
    goto skip_1;
    // 0x8022ABB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x8022ABB8: jr          $ra
    // 0x8022ABBC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    return;
    // 0x8022ABBC: lwc1        $f0, 0x0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X0);
    // 0x8022ABC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_8022ABC4:
    // 0x8022ABC4: nop

    // 0x8022ABC8: jr          $ra
    // 0x8022ABCC: nop

    return;
    // 0x8022ABCC: nop

;}
RECOMP_FUNC void D_80234CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234CB4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80234CB8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234CBC: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80234CC0: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x80234CC4: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234CC8: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80234CCC: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x80234CD0: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234CD4: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80234CD8: jr          $ra
    // 0x80234CDC: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x80234CDC: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void D_802AF9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AFA40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802AFA44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AFA48: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AFA4C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802AFA50: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802AFA54: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x802AFA58: lbu         $t6, 0xB8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XB8);
    // 0x802AFA5C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802AFA60: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802AFA64: beql        $t6, $at, L_802AFB88
    if (ctx->r14 == ctx->r1) {
        // 0x802AFA68: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802AFB88;
    }
    goto skip_0;
    // 0x802AFA68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x802AFA6C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802AFA70: jal         0x80305EF0
    // 0x802AFA74: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    static_3_80305EF0(rdram, ctx);
        goto after_0;
    // 0x802AFA74: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_0:
    // 0x802AFA78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802AFA7C: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x802AFA80: jal         0x80305E90
    // 0x802AFA84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_80305E90(rdram, ctx);
        goto after_1;
    // 0x802AFA84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x802AFA88: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AFA8C: lwc1        $f12, 0x0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AFA90: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AFA94: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AFA98: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802AFA9C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AFAA0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AFAA4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AFAA8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802AFAAC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x802AFAB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AFAB4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AFAB8: addiu       $s0, $v0, 0xBC
    ctx->r16 = ADD32(ctx->r2, 0XBC);
    // 0x802AFABC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AFAC0: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802AFAC4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x802AFAC8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802AFACC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802AFAD0: bc1fl       L_802AFAE4
    if (!c1cs) {
        // 0x802AFAD4: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_802AFAE4;
    }
    goto skip_1;
    // 0x802AFAD4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_1:
    // 0x802AFAD8: b           L_802AFAFC
    // 0x802AFADC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_802AFAFC;
    // 0x802AFADC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x802AFAE0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_802AFAE4:
    // 0x802AFAE4: nop

    // 0x802AFAE8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802AFAEC: nop

    // 0x802AFAF0: bc1f        L_802AFAFC
    if (!c1cs) {
        // 0x802AFAF4: nop
    
            goto L_802AFAFC;
    }
    // 0x802AFAF4: nop

    // 0x802AFAF8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_802AFAFC:
    // 0x802AFAFC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AFB00: lbu         $a2, 0xB8($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0XB8);
    // 0x802AFB04: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802AFB08: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802AFB0C: jal         0x80302238
    // 0x802AFB10: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302238(rdram, ctx);
        goto after_2;
    // 0x802AFB10: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_2:
    // 0x802AFB14: beq         $v0, $zero, L_802AFB3C
    if (ctx->r2 == 0) {
        // 0x802AFB18: lwc1        $f2, 0x28($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
            goto L_802AFB3C;
    }
    // 0x802AFB18: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802AFB1C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AFB20: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AFB24: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AFB28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802AFB2C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802AFB30: jal         0x8030276C
    // 0x802AFB34: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030276C(rdram, ctx);
        goto after_3;
    // 0x802AFB34: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_3:
    // 0x802AFB38: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
L_802AFB3C:
    // 0x802AFB3C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AFB40: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AFB44: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x802AFB48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AFB4C: jal         0x80302664
    // 0x802AFB50: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_80302664(rdram, ctx);
        goto after_4;
    // 0x802AFB50: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_4:
    // 0x802AFB54: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AFB58: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AFB5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AFB60: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802AFB64: jal         0x8030262C
    // 0x802AFB68: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_8030262C(rdram, ctx);
        goto after_5;
    // 0x802AFB68: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_5:
    // 0x802AFB6C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802AFB70: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802AFB74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802AFB78: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802AFB7C: jal         0x803025D8
    // 0x802AFB80: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    static_3_803025D8(rdram, ctx);
        goto after_6;
    // 0x802AFB80: addiu       $a0, $a0, 0x8F4
    ctx->r4 = ADD32(ctx->r4, 0X8F4);
    after_6:
    // 0x802AFB84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AFB88:
    // 0x802AFB88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AFB8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802AFB90: jr          $ra
    // 0x802AFB94: nop

    return;
    // 0x802AFB94: nop

;}
RECOMP_FUNC void D_802A1398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1418: jr          $ra
    // 0x802A141C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802A141C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802D21F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2270: jr          $ra
    // 0x802D2274: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802D2274: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void D_802D2A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2AA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802D2AA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802D2AA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D2AAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802D2AB0: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x802D2AB4: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x802D2AB8: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x802D2ABC: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x802D2AC0: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x802D2AC4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802D2AC8: jal         0x80302238
    // 0x802D2ACC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    static_3_80302238(rdram, ctx);
        goto after_0;
    // 0x802D2ACC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x802D2AD0: beq         $v0, $zero, L_802D2AFC
    if (ctx->r2 == 0) {
        // 0x802D2AD4: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_802D2AFC;
    }
    // 0x802D2AD4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802D2AD8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D2ADC: jal         0x8030262C
    // 0x802D2AE0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    static_3_8030262C(rdram, ctx);
        goto after_1;
    // 0x802D2AE0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x802D2AE4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x802D2AE8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802D2AEC: jal         0x80302664
    // 0x802D2AF0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    static_3_80302664(rdram, ctx);
        goto after_2;
    // 0x802D2AF0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    after_2:
    // 0x802D2AF4: b           L_802D2B00
    // 0x802D2AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802D2B00;
    // 0x802D2AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802D2AFC:
    // 0x802D2AFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802D2B00:
    // 0x802D2B00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802D2B04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802D2B08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802D2B0C: jr          $ra
    // 0x802D2B10: nop

    return;
    // 0x802D2B10: nop

;}
RECOMP_FUNC void D_802F1F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802F200C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802F2010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802F2014: bne         $a0, $zero, L_802F202C
    if (ctx->r4 != 0) {
        // 0x802F2018: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_802F202C;
    }
    // 0x802F2018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802F201C: jal         0x802C67EC
    // 0x802F2020: addiu       $a0, $zero, 0x545C
    ctx->r4 = ADD32(0, 0X545C);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802F2020: addiu       $a0, $zero, 0x545C
    ctx->r4 = ADD32(0, 0X545C);
    after_0:
    // 0x802F2024: beq         $v0, $zero, L_802F2078
    if (ctx->r2 == 0) {
        // 0x802F2028: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802F2078;
    }
    // 0x802F2028: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_802F202C:
    // 0x802F202C: jal         0x80308668
    // 0x802F2030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    static_3_80308668(rdram, ctx);
        goto after_1;
    // 0x802F2030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802F2034: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802F2038: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x802F203C: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
    // 0x802F2040: jal         0x802888BC
    // 0x802F2044: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    static_3_802888BC(rdram, ctx);
        goto after_2;
    // 0x802F2044: addiu       $a0, $s0, 0x70
    ctx->r4 = ADD32(ctx->r16, 0X70);
    after_2:
    // 0x802F2048: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802F204C: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802F2050: addiu       $a0, $s0, 0xC0C
    ctx->r4 = ADD32(ctx->r16, 0XC0C);
    // 0x802F2054: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802F2058: jal         0x802C6930
    // 0x802F205C: addiu       $a2, $zero, 0x820
    ctx->r6 = ADD32(0, 0X820);
    static_3_802C6930(rdram, ctx);
        goto after_3;
    // 0x802F205C: addiu       $a2, $zero, 0x820
    ctx->r6 = ADD32(0, 0X820);
    after_3:
    // 0x802F2060: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x802F2064: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x802F2068: addiu       $a0, $s0, 0x2C8C
    ctx->r4 = ADD32(ctx->r16, 0X2C8C);
    // 0x802F206C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802F2070: jal         0x802C6930
    // 0x802F2074: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    static_3_802C6930(rdram, ctx);
        goto after_4;
    // 0x802F2074: addiu       $a2, $zero, 0x6A0
    ctx->r6 = ADD32(0, 0X6A0);
    after_4:
L_802F2078:
    // 0x802F2078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802F207C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802F2080: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802F2084: jr          $ra
    // 0x802F2088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802F2088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8029F748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029F7C8: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x8029F7CC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F7D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8029F7D4: sh          $a0, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r4;
    // 0x8029F7D8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F7DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8029F7E0: sh          $a1, 0x0($at)
    MEM_H(0X0, ctx->r1) = ctx->r5;
    // 0x8029F7E4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F7E8: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x8029F7EC: lbu         $t1, 0x13($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X13);
    // 0x8029F7F0: sb          $a2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r6;
    // 0x8029F7F4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F7F8: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x8029F7FC: sb          $t1, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r9;
    // 0x8029F800: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F804: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x8029F808: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8029F80C: lui         $t3, 0x0
    ctx->r11 = S32(0X0 << 16);
    // 0x8029F810: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x8029F814: sb          $t2, 0x0($at)
    MEM_B(0X0, ctx->r1) = ctx->r10;
    // 0x8029F818: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8029F81C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8029F820: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8029F824: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8029F828: jr          $ra
    // 0x8029F82C: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
    return;
    // 0x8029F82C: sw          $t3, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r11;
;}
RECOMP_FUNC void D_802A9D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9DDC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802A9DE0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802A9DE4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x802A9DE8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802A9DEC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802A9DF0: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x802A9DF4: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x802A9DF8: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x802A9DFC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x802A9E00: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x802A9E04: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x802A9E08: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x802A9E0C: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x802A9E10: bne         $v0, $zero, L_802A9E20
    if (ctx->r2 != 0) {
        // 0x802A9E14: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_802A9E20;
    }
    // 0x802A9E14: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802A9E18: b           L_802A9EC8
    // 0x802A9E1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A9EC8;
    // 0x802A9E1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A9E20:
    // 0x802A9E20: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A9E24: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x802A9E28: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x802A9E2C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x802A9E30: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802A9E34: mul.s       $f22, $f4, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x802A9E38: blez        $t6, L_802A9EC4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802A9E3C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802A9EC4;
    }
    // 0x802A9E3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A9E40: addiu       $s2, $zero, 0x90
    ctx->r18 = ADD32(0, 0X90);
L_802A9E44:
    // 0x802A9E44: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A9E48: mflo        $t7
    ctx->r15 = lo;
    // 0x802A9E4C: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x802A9E50: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x802A9E54: beql        $s1, $v0, L_802A9EA8
    if (ctx->r17 == ctx->r2) {
        // 0x802A9E58: lw          $a0, 0x70($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X70);
            goto L_802A9EA8;
    }
    goto skip_0;
    // 0x802A9E58: lw          $a0, 0x70($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X70);
    skip_0:
    // 0x802A9E5C: lwc1        $f6, 0x5C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x802A9E60: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x802A9E64: lwc1        $f8, 0x60($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X60);
    // 0x802A9E68: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802A9E6C: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x802A9E70: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802A9E74: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802A9E78: sub.s       $f12, $f16, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f24.fl;
    // 0x802A9E7C: mul.s       $f20, $f10, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x802A9E80: jal         0x8022ADA8
    // 0x802A9E84: sub.s       $f14, $f18, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f26.fl;
    static_3_8022ADA8(rdram, ctx);
        goto after_0;
    // 0x802A9E84: sub.s       $f14, $f18, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f26.fl;
    after_0:
    // 0x802A9E88: add.s       $f4, $f22, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f22.fl + ctx->f20.fl;
    // 0x802A9E8C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802A9E90: nop

    // 0x802A9E94: bc1fl       L_802A9EA8
    if (!c1cs) {
        // 0x802A9E98: lw          $a0, 0x70($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X70);
            goto L_802A9EA8;
    }
    goto skip_1;
    // 0x802A9E98: lw          $a0, 0x70($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X70);
    skip_1:
    // 0x802A9E9C: b           L_802A9EC8
    // 0x802A9EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A9EC8;
    // 0x802A9EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802A9EA4: lw          $a0, 0x70($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X70);
L_802A9EA8:
    // 0x802A9EA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802A9EAC: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x802A9EB0: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x802A9EB4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x802A9EB8: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x802A9EBC: bne         $at, $zero, L_802A9E44
    if (ctx->r1 != 0) {
        // 0x802A9EC0: nop
    
            goto L_802A9E44;
    }
    // 0x802A9EC0: nop

L_802A9EC4:
    // 0x802A9EC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A9EC8:
    // 0x802A9EC8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802A9ECC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x802A9ED0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x802A9ED4: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x802A9ED8: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x802A9EDC: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x802A9EE0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x802A9EE4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x802A9EE8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x802A9EEC: jr          $ra
    // 0x802A9EF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x802A9EF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void D_802F29DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802F2A5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802F2A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802F2A64: jal         0x8028D688
    // 0x802F2A68: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D688(rdram, ctx);
        goto after_0;
    // 0x802F2A68: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802F2A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802F2A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802F2A74: jr          $ra
    // 0x802F2A78: nop

    return;
    // 0x802F2A78: nop

;}
RECOMP_FUNC void D_8022D630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022D630: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022D634: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x8022D638: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D63C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D640: bne         $t6, $zero, L_8022D730
    if (ctx->r14 != 0) {
        // 0x8022D644: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8022D730;
    }
    // 0x8022D644: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D648: lui         $s0, 0x0
    ctx->r16 = S32(0X0 << 16);
    // 0x8022D64C: addiu       $s0, $s0, 0x0
    ctx->r16 = ADD32(ctx->r16, 0X0);
    // 0x8022D650: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D654: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x8022D658: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x8022D65C: jal         0x8022BA58
    // 0x8022D660: sll         $a0, $t7, 3
    ctx->r4 = S32(ctx->r15 << 3);
    static_3_8022BA58(rdram, ctx);
        goto after_0;
    // 0x8022D660: sll         $a0, $t7, 3
    ctx->r4 = S32(ctx->r15 << 3);
    after_0:
    // 0x8022D664: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022D668: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8022D66C: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D670: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8022D674: jal         0x8022BA58
    // 0x8022D678: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_1;
    // 0x8022D678: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x8022D67C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022D680: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8022D684: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D688: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8022D68C: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x8022D690: jal         0x8022BA58
    // 0x8022D694: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    static_3_8022BA58(rdram, ctx);
        goto after_2;
    // 0x8022D694: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    after_2:
    // 0x8022D698: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022D69C: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8022D6A0: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D6A4: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x8022D6A8: jal         0x8022BA58
    // 0x8022D6AC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    static_3_8022BA58(rdram, ctx);
        goto after_3;
    // 0x8022D6AC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_3:
    // 0x8022D6B0: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x8022D6B4: sw          $v0, 0x0($at)
    MEM_W(0X0, ctx->r1) = ctx->r2;
    // 0x8022D6B8: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D6BC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022D6C0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8022D6C4: sll         $t1, $a2, 4
    ctx->r9 = S32(ctx->r6 << 4);
    // 0x8022D6C8: subu        $t1, $t1, $a2
    ctx->r9 = SUB32(ctx->r9, ctx->r6);
    // 0x8022D6CC: sll         $a2, $t1, 3
    ctx->r6 = S32(ctx->r9 << 3);
    // 0x8022D6D0: jal         0x8022B780
    // 0x8022D6D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_4;
    // 0x8022D6D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8022D6D8: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D6DC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022D6E0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8022D6E4: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x8022D6E8: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8022D6EC: jal         0x8022B780
    // 0x8022D6F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_5;
    // 0x8022D6F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8022D6F4: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D6F8: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022D6FC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8022D700: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8022D704: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
    // 0x8022D708: sll         $a2, $t3, 2
    ctx->r6 = S32(ctx->r11 << 2);
    // 0x8022D70C: jal         0x8022B780
    // 0x8022D710: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_6;
    // 0x8022D710: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8022D714: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D718: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022D71C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8022D720: sll         $t4, $a2, 2
    ctx->r12 = S32(ctx->r6 << 2);
    // 0x8022D724: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8022D728: jal         0x8022B780
    // 0x8022D72C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    static_3_8022B780(rdram, ctx);
        goto after_7;
    // 0x8022D72C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_8022D730:
    // 0x8022D730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D734: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022D73C: jr          $ra
    // 0x8022D740: nop

    return;
    // 0x8022D740: nop

;}
RECOMP_FUNC void D_802C9BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802C9C28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802C9C2C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802C9C30: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802C9C34: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802C9C38: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802C9C3C: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802C9C40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802C9C44: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802C9C48: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802C9C4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802C9C50:
    // 0x802C9C50: lh          $t8, 0x8($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8);
    // 0x802C9C54: bnel        $a1, $t8, L_802C9C70
    if (ctx->r5 != ctx->r24) {
        // 0x802C9C58: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802C9C70;
    }
    goto skip_0;
    // 0x802C9C58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x802C9C5C: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x802C9C60: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802C9C64: b           L_802C9C78
    // 0x802C9C68: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
        goto L_802C9C78;
    // 0x802C9C68: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802C9C6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802C9C70:
    // 0x802C9C70: bne         $v0, $a0, L_802C9C50
    if (ctx->r2 != ctx->r4) {
        // 0x802C9C74: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_802C9C50;
    }
    // 0x802C9C74: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_802C9C78:
    // 0x802C9C78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802C9C7C: bne         $a2, $at, L_802C9CA0
    if (ctx->r6 != ctx->r1) {
        // 0x802C9C80: sll         $t0, $a2, 2
        ctx->r8 = S32(ctx->r6 << 2);
            goto L_802C9CA0;
    }
    // 0x802C9C80: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x802C9C84: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802C9C88: jal         0x80231A24
    // 0x802C9C8C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802C9C8C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802C9C90: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802C9C94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802C9C98: b           L_802C9CCC
    // 0x802C9C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802C9CCC;
    // 0x802C9C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802C9CA0:
    // 0x802C9CA0: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x802C9CA4: jal         0x802F924C
    // 0x802C9CA8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    static_3_802F924C(rdram, ctx);
        goto after_1;
    // 0x802C9CA8: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_1:
    // 0x802C9CAC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802C9CB0: jal         0x80207130
    // 0x802C9CB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_80207130(rdram, ctx);
        goto after_2;
    // 0x802C9CB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x802C9CB8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802C9CBC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802C9CC0: sub.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d - ctx->f6.d;
    // 0x802C9CC4: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x802C9CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802C9CCC:
    // 0x802C9CCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802C9CD0: jr          $ra
    // 0x802C9CD4: nop

    return;
    // 0x802C9CD4: nop

;}
RECOMP_FUNC void D_8022E24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022E24C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E254: bltz        $a0, L_8022E274
    if (SIGNED(ctx->r4) < 0) {
        // 0x8022E258: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8022E274;
    }
    // 0x8022E258: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8022E25C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x8022E260: lhu         $t6, 0x0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X0);
    // 0x8022E264: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8022E268: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x8022E26C: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8022E270: bne         $at, $zero, L_8022E28C
    if (ctx->r1 != 0) {
        // 0x8022E274: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_8022E28C;
    }
L_8022E274:
    // 0x8022E274: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022E278: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8022E27C: jal         0x80231A24
    // 0x8022E280: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022E280: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8022E284: b           L_8022E2A8
    // 0x8022E288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8022E2A8;
    // 0x8022E288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022E28C:
    // 0x8022E28C: lw          $t7, 0x8D0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X8D0);
    // 0x8022E290: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x8022E294: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8022E298: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8022E29C: jal         0x80228DE0
    // 0x8022E2A0: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x8022E2A0: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    after_1:
    // 0x8022E2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022E2A8:
    // 0x8022E2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022E2AC: jr          $ra
    // 0x8022E2B0: nop

    return;
    // 0x8022E2B0: nop

;}
RECOMP_FUNC void D_802907A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80290828: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8029082C: jr          $ra
    // 0x80290830: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x80290830: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void D_80247FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80247FD0: mfc0        $v0, Status
    ctx->r2 = cop0_status_read(ctx);
    // 0x80247FD4: jr          $ra
    // 0x80247FD8: nop

    return;
    // 0x80247FD8: nop

;}
RECOMP_FUNC void D_80297964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802979E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802979E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802979EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802979F0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802979F4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802979F8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x802979FC: jal         0x8022970C
    // 0x80297A00: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8022970C(rdram, ctx);
        goto after_0;
    // 0x80297A00: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80297A04: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80297A08: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80297A0C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297A10: lw          $t6, 0x1120($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X1120);
    // 0x80297A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297A18: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x80297A1C: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80297A20: mflo        $t7
    ctx->r15 = lo;
    // 0x80297A24: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x80297A28: lwc1        $f4, 0xFA4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XFA4);
    // 0x80297A2C: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x80297A30: lw          $t9, 0x1120($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X1120);
    // 0x80297A34: multu       $t9, $v0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80297A38: mflo        $t0
    ctx->r8 = lo;
    // 0x80297A3C: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x80297A40: lwc1        $f6, 0xFA8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XFA8);
    // 0x80297A44: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x80297A48: lw          $t2, 0x1120($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X1120);
    // 0x80297A4C: multu       $t2, $v0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80297A50: mflo        $t3
    ctx->r11 = lo;
    // 0x80297A54: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x80297A58: lwc1        $f8, 0xFAC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XFAC);
    // 0x80297A5C: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x80297A60: lw          $t5, 0x1120($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X1120);
    // 0x80297A64: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297A68: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80297A6C: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x80297A70: lwc1        $f16, 0x1088($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1088);
    // 0x80297A74: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80297A78: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80297A7C: jal         0x802D01D4
    // 0x80297A80: nop

    static_3_802D01D4(rdram, ctx);
        goto after_1;
    // 0x80297A80: nop

    after_1:
    // 0x80297A84: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80297A88: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x80297A8C: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x80297A90: lw          $t8, 0x1120($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X1120);
    // 0x80297A94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297A98: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80297A9C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80297AA0: addu        $t0, $a3, $t9
    ctx->r8 = ADD32(ctx->r7, ctx->r25);
    // 0x80297AA4: lwc1        $f6, 0x10D4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X10D4);
    // 0x80297AA8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80297AAC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80297AB0: jal         0x802D01D4
    // 0x80297AB4: nop

    static_3_802D01D4(rdram, ctx);
        goto after_2;
    // 0x80297AB4: nop

    after_2:
    // 0x80297AB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80297ABC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80297AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80297AC4: jr          $ra
    // 0x80297AC8: nop

    return;
    // 0x80297AC8: nop

;}
RECOMP_FUNC void D_802AAC64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AACE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802AACE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AACEC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802AACF0: lbu         $t6, 0x1D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1D);
    // 0x802AACF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802AACF8: bne         $t6, $zero, L_802AAD14
    if (ctx->r14 != 0) {
        // 0x802AACFC: lui         $t7, 0x0
        ctx->r15 = S32(0X0 << 16);
            goto L_802AAD14;
    }
    // 0x802AACFC: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x802AAD00: lbu         $t7, 0x0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X0);
    // 0x802AAD04: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802AAD08: addiu       $a1, $zero, 0x6B
    ctx->r5 = ADD32(0, 0X6B);
    // 0x802AAD0C: bne         $t7, $at, L_802AAD1C
    if (ctx->r15 != ctx->r1) {
        // 0x802AAD10: nop
    
            goto L_802AAD1C;
    }
    // 0x802AAD10: nop

L_802AAD14:
    // 0x802AAD14: b           L_802AAD1C
    // 0x802AAD18: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
        goto L_802AAD1C;
    // 0x802AAD18: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
L_802AAD1C:
    // 0x802AAD1C: jal         0x8021ACB0
    // 0x802AAD20: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    static_3_8021ACB0(rdram, ctx);
        goto after_0;
    // 0x802AAD20: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x802AAD24: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802AAD28: jal         0x8021B838
    // 0x802AAD2C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    static_3_8021B838(rdram, ctx);
        goto after_1;
    // 0x802AAD2C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x802AAD30: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x802AAD34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AAD38: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x802AAD3C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802AAD40: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x802AAD44: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x802AAD48: lh          $t9, 0xB8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XB8);
    // 0x802AAD4C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802AAD50: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x802AAD54: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802AAD58: jalr        $t9
    // 0x802AAD5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802AAD5C: nop

    after_2:
    // 0x802AAD60: addiu       $a0, $s0, 0x498
    ctx->r4 = ADD32(ctx->r16, 0X498);
    // 0x802AAD64: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x802AAD68: jal         0x802FD4B0
    // 0x802AAD6C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    static_3_802FD4B0(rdram, ctx);
        goto after_3;
    // 0x802AAD6C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x802AAD70: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAD74: jal         0x802FD498
    // 0x802AAD78: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    static_3_802FD498(rdram, ctx);
        goto after_4;
    // 0x802AAD78: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_4:
    // 0x802AAD7C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAD80: jal         0x802FD4A4
    // 0x802AAD84: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    static_3_802FD4A4(rdram, ctx);
        goto after_5;
    // 0x802AAD84: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_5:
    // 0x802AAD88: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAD8C: jal         0x802FD480
    // 0x802AAD90: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    static_3_802FD480(rdram, ctx);
        goto after_6;
    // 0x802AAD90: lui         $a1, 0x40E0
    ctx->r5 = S32(0X40E0 << 16);
    after_6:
    // 0x802AAD94: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x802AAD98: jal         0x802FD48C
    // 0x802AAD9C: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    static_3_802FD48C(rdram, ctx);
        goto after_7;
    // 0x802AAD9C: lui         $a1, 0x4118
    ctx->r5 = S32(0X4118 << 16);
    after_7:
    // 0x802AADA0: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x802AADA4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802AADA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802AADAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AADB0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802AADB4: jal         0x80317194
    // 0x802AADB8: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    static_3_80317194(rdram, ctx);
        goto after_8;
    // 0x802AADB8: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_8:
    // 0x802AADBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802AADC0: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
    // 0x802AADC4: sw          $v0, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r2;
    // 0x802AADC8: sw          $v0, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r2;
    // 0x802AADCC: sw          $v0, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r2;
    // 0x802AADD0: sw          $v0, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r2;
    // 0x802AADD4: bne         $t1, $zero, L_802AADEC
    if (ctx->r9 != 0) {
        // 0x802AADD8: sw          $v0, 0x2B0($s0)
        MEM_W(0X2B0, ctx->r16) = ctx->r2;
            goto L_802AADEC;
    }
    // 0x802AADD8: sw          $v0, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r2;
    // 0x802AADDC: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802AADE0: lbu         $t2, 0x0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X0);
    // 0x802AADE4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802AADE8: bne         $t2, $at, L_802AAE04
    if (ctx->r10 != ctx->r1) {
        // 0x802AADEC: addiu       $t3, $zero, 0x2F
        ctx->r11 = ADD32(0, 0X2F);
            goto L_802AAE04;
    }
L_802AADEC:
    // 0x802AADEC: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x802AADF0: addiu       $t4, $zero, 0x30
    ctx->r12 = ADD32(0, 0X30);
    // 0x802AADF4: addiu       $t5, $zero, 0x2E
    ctx->r13 = ADD32(0, 0X2E);
    // 0x802AADF8: sw          $t3, 0x2A0($s0)
    MEM_W(0X2A0, ctx->r16) = ctx->r11;
    // 0x802AADFC: sw          $t4, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r12;
    // 0x802AAE00: sw          $t5, 0x2B0($s0)
    MEM_W(0X2B0, ctx->r16) = ctx->r13;
L_802AAE04:
    // 0x802AAE04: sb          $zero, 0x5E8($s0)
    MEM_B(0X5E8, ctx->r16) = 0;
    // 0x802AAE08: addiu       $a0, $s0, 0x1A4
    ctx->r4 = ADD32(ctx->r16, 0X1A4);
    // 0x802AAE0C: lui         $a1, 0x4130
    ctx->r5 = S32(0X4130 << 16);
    // 0x802AAE10: jal         0x802D51DC
    // 0x802AAE14: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    static_3_802D51DC(rdram, ctx);
        goto after_9;
    // 0x802AAE14: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    after_9:
    // 0x802AAE18: addiu       $a0, $s0, 0xEDC
    ctx->r4 = ADD32(ctx->r16, 0XEDC);
    // 0x802AAE1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802AAE20: addiu       $a2, $s0, 0x668
    ctx->r6 = ADD32(ctx->r16, 0X668);
    // 0x802AAE24: jal         0x802C4A20
    // 0x802AAE28: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_10;
    // 0x802AAE28: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x802AAE2C: addiu       $a0, $s0, 0x1070
    ctx->r4 = ADD32(ctx->r16, 0X1070);
    // 0x802AAE30: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802AAE34: addiu       $a2, $s0, 0x6A8
    ctx->r6 = ADD32(ctx->r16, 0X6A8);
    // 0x802AAE38: jal         0x802C4A20
    // 0x802AAE3C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_11;
    // 0x802AAE3C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_11:
    // 0x802AAE40: addiu       $a0, $s0, 0x1204
    ctx->r4 = ADD32(ctx->r16, 0X1204);
    // 0x802AAE44: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x802AAE48: addiu       $a2, $s0, 0x6E8
    ctx->r6 = ADD32(ctx->r16, 0X6E8);
    // 0x802AAE4C: jal         0x802C4A20
    // 0x802AAE50: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_12;
    // 0x802AAE50: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_12:
    // 0x802AAE54: addiu       $a0, $s0, 0x1398
    ctx->r4 = ADD32(ctx->r16, 0X1398);
    // 0x802AAE58: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x802AAE5C: addiu       $a2, $s0, 0x728
    ctx->r6 = ADD32(ctx->r16, 0X728);
    // 0x802AAE60: jal         0x802C4A20
    // 0x802AAE64: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    static_3_802C4A20(rdram, ctx);
        goto after_13;
    // 0x802AAE64: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_13:
    // 0x802AAE68: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802AAE6C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AAE70: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x802AAE74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AAE78: lui         $at, 0x4507
    ctx->r1 = S32(0X4507 << 16);
    // 0x802AAE7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AAE80: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802AAE84: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x802AAE88: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    // 0x802AAE8C: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802AAE90: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802AAE94: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AAE98: addiu       $a0, $s0, 0x548
    ctx->r4 = ADD32(ctx->r16, 0X548);
    // 0x802AAE9C: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x802AAEA0: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x802AAEA4: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x802AAEA8: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
    // 0x802AAEAC: jal         0x8022970C
    // 0x802AAEB0: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_14;
    // 0x802AAEB0: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_14:
    // 0x802AAEB4: addiu       $a0, $s0, 0x588
    ctx->r4 = ADD32(ctx->r16, 0X588);
    // 0x802AAEB8: jal         0x8022970C
    // 0x802AAEBC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x802AAEBC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_15:
    // 0x802AAEC0: lui         $a1, 0xC0C7
    ctx->r5 = S32(0XC0C7 << 16);
    // 0x802AAEC4: lui         $a2, 0xC085
    ctx->r6 = S32(0XC085 << 16);
    // 0x802AAEC8: lui         $a3, 0x3DFB
    ctx->r7 = S32(0X3DFB << 16);
    // 0x802AAECC: ori         $a3, $a3, 0xE76D
    ctx->r7 = ctx->r7 | 0XE76D;
    // 0x802AAED0: ori         $a2, $a2, 0x1687
    ctx->r6 = ctx->r6 | 0X1687;
    // 0x802AAED4: ori         $a1, $a1, 0x22D1
    ctx->r5 = ctx->r5 | 0X22D1;
    // 0x802AAED8: jal         0x8022A0D0
    // 0x802AAEDC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    static_3_8022A0D0(rdram, ctx);
        goto after_16;
    // 0x802AAEDC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_16:
    // 0x802AAEE0: lui         $a1, 0x40C7
    ctx->r5 = S32(0X40C7 << 16);
    // 0x802AAEE4: lui         $a2, 0xC085
    ctx->r6 = S32(0XC085 << 16);
    // 0x802AAEE8: lui         $a3, 0x3DFB
    ctx->r7 = S32(0X3DFB << 16);
    // 0x802AAEEC: ori         $a3, $a3, 0xE76D
    ctx->r7 = ctx->r7 | 0XE76D;
    // 0x802AAEF0: ori         $a2, $a2, 0x1687
    ctx->r6 = ctx->r6 | 0X1687;
    // 0x802AAEF4: ori         $a1, $a1, 0x22D1
    ctx->r5 = ctx->r5 | 0X22D1;
    // 0x802AAEF8: jal         0x8022A0D0
    // 0x802AAEFC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    static_3_8022A0D0(rdram, ctx);
        goto after_17;
    // 0x802AAEFC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_17:
    // 0x802AAF00: lw          $a0, 0x770($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X770);
    // 0x802AAF04: jal         0x803169A0
    // 0x802AAF08: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    static_3_803169A0(rdram, ctx);
        goto after_18;
    // 0x802AAF08: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x802AAF0C: lw          $a0, 0x774($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X774);
    // 0x802AAF10: jal         0x803169A0
    // 0x802AAF14: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    static_3_803169A0(rdram, ctx);
        goto after_19;
    // 0x802AAF14: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_19:
    // 0x802AAF18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802AAF1C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802AAF20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802AAF24: jr          $ra
    // 0x802AAF28: nop

    return;
    // 0x802AAF28: nop

;}
RECOMP_FUNC void D_802915D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80291654: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x80291658: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x8029165C: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80291660: sw          $s7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r23;
    // 0x80291664: sw          $s6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r22;
    // 0x80291668: sw          $s5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r21;
    // 0x8029166C: sw          $s4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r20;
    // 0x80291670: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x80291674: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x80291678: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x8029167C: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x80291680: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x80291684: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x80291688: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x8029168C: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x80291690: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x80291694: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80291698: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x8029169C: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x802916A0: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x802916A4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802916A8: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x802916AC: addiu       $t6, $sp, 0xBC
    ctx->r14 = ADD32(ctx->r29, 0XBC);
    // 0x802916B0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x802916B4: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x802916B8: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x802916BC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x802916C0: lui         $t2, 0x0
    ctx->r10 = S32(0X0 << 16);
    // 0x802916C4: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x802916C8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x802916CC: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x802916D0: lw          $t0, 0x14($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X14);
    // 0x802916D4: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x802916D8: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x802916DC: sw          $t0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r8;
    // 0x802916E0: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x802916E4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x802916E8: addiu       $t1, $sp, 0xA4
    ctx->r9 = ADD32(ctx->r29, 0XA4);
    // 0x802916EC: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x802916F0: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x802916F4: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x802916F8: lw          $t5, 0xC($t2)
    ctx->r13 = MEM_W(ctx->r10, 0XC);
    // 0x802916FC: addiu       $s7, $sp, 0xF0
    ctx->r23 = ADD32(ctx->r29, 0XF0);
    // 0x80291700: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x80291704: sw          $t5, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r13;
    // 0x80291708: lw          $t5, 0x14($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X14);
    // 0x8029170C: lw          $at, 0x10($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X10);
    // 0x80291710: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80291714: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80291718: sw          $t5, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r13;
    // 0x8029171C: jal         0x802C51D0
    // 0x80291720: sw          $at, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r1;
    static_3_802C51D0(rdram, ctx);
        goto after_0;
    // 0x80291720: sw          $at, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r1;
    after_0:
    // 0x80291724: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80291728: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8029172C: lui         $a2, 0xC0A0
    ctx->r6 = S32(0XC0A0 << 16);
    // 0x80291730: jal         0x8022A0D0
    // 0x80291734: lui         $a3, 0xBF00
    ctx->r7 = S32(0XBF00 << 16);
    static_3_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x80291734: lui         $a3, 0xBF00
    ctx->r7 = S32(0XBF00 << 16);
    after_1:
    // 0x80291738: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8029173C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80291740: lwc1        $f4, 0xE0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0XE0);
    // 0x80291744: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80291748: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8029174C: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80291750: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80291754: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80291758: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x8029175C: lw          $t9, 0x8C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X8C);
    // 0x80291760: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x80291764: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80291768: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x8029176C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80291770: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80291774: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80291778: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8029177C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80291780: jal         0x802AA6F4
    // 0x80291784: nop

    static_3_802AA6F4(rdram, ctx);
        goto after_2;
    // 0x80291784: nop

    after_2:
    // 0x80291788: beq         $v0, $zero, L_802917C4
    if (ctx->r2 == 0) {
        // 0x8029178C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802917C4;
    }
    // 0x8029178C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80291790: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80291794: addiu       $a1, $zero, 0x1A7
    ctx->r5 = ADD32(0, 0X1A7);
    // 0x80291798: jal         0x802958BC
    // 0x8029179C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    static_3_802958BC(rdram, ctx);
        goto after_3;
    // 0x8029179C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802917A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802917A4: jal         0x80295884
    // 0x802917A8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80295884(rdram, ctx);
        goto after_4;
    // 0x802917A8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x802917AC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802917B0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x802917B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802917B8: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x802917BC: jal         0x80295878
    // 0x802917C0: nop

    static_3_80295878(rdram, ctx);
        goto after_5;
    // 0x802917C0: nop

    after_5:
L_802917C4:
    // 0x802917C4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802917C8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x802917CC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802917D0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x802917D4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x802917D8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x802917DC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802917E0: lwc1        $f24, 0x0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802917E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802917E8: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x802917EC: addiu       $s6, $sp, 0xEC
    ctx->r22 = ADD32(ctx->r29, 0XEC);
    // 0x802917F0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_802917F4:
    // 0x802917F4: jal         0x8023499C
    // 0x802917F8: nop

    static_3_8023499C(rdram, ctx);
        goto after_6;
    // 0x802917F8: nop

    after_6:
    // 0x802917FC: add.s       $f8, $f0, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f30.fl;
    // 0x80291800: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80291804: lw          $a2, 0xE0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0XE0);
    // 0x80291808: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x8029180C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80291810: lw          $t7, 0x8C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X8C);
    // 0x80291814: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x80291818: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x8029181C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80291820: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80291824: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80291828: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x8029182C: jal         0x802AA6F4
    // 0x80291830: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    static_3_802AA6F4(rdram, ctx);
        goto after_7;
    // 0x80291830: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_7:
    // 0x80291834: beq         $v0, $zero, L_802918F4
    if (ctx->r2 == 0) {
        // 0x80291838: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_802918F4;
    }
    // 0x80291838: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8029183C: lw          $t2, 0x8C($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X8C);
    // 0x80291840: addiu       $t3, $sp, 0xA4
    ctx->r11 = ADD32(ctx->r29, 0XA4);
    // 0x80291844: addiu       $t1, $sp, 0xBC
    ctx->r9 = ADD32(ctx->r29, 0XBC);
    // 0x80291848: addu        $s3, $s1, $t1
    ctx->r19 = ADD32(ctx->r17, ctx->r9);
    // 0x8029184C: bne         $s5, $t2, L_80291868
    if (ctx->r21 != ctx->r10) {
        // 0x80291850: addu        $s2, $s1, $t3
        ctx->r18 = ADD32(ctx->r17, ctx->r11);
            goto L_80291868;
    }
    // 0x80291850: addu        $s2, $s1, $t3
    ctx->r18 = ADD32(ctx->r17, ctx->r11);
    // 0x80291854: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80291858: jal         0x80295814
    // 0x8029185C: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    static_3_80295814(rdram, ctx);
        goto after_8;
    // 0x8029185C: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    after_8:
    // 0x80291860: b           L_80291878
    // 0x80291864: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
        goto L_80291878;
    // 0x80291864: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_80291868:
    // 0x80291868: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8029186C: jal         0x80295814
    // 0x80291870: addiu       $a1, $zero, 0x5D
    ctx->r5 = ADD32(0, 0X5D);
    static_3_80295814(rdram, ctx);
        goto after_9;
    // 0x80291870: addiu       $a1, $zero, 0x5D
    ctx->r5 = ADD32(0, 0X5D);
    after_9:
    // 0x80291874: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_80291878:
    // 0x80291878: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x8029187C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80291880: jal         0x80295918
    // 0x80291884: lw          $a3, 0x0($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X0);
    static_3_80295918(rdram, ctx);
        goto after_10;
    // 0x80291884: lw          $a3, 0x0($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X0);
    after_10:
    // 0x80291888: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x8029188C: jal         0x80295940
    // 0x80291890: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_80295940(rdram, ctx);
        goto after_11;
    // 0x80291890: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_11:
    // 0x80291894: lui         $a1, 0x3D8F
    ctx->r5 = S32(0X3D8F << 16);
    // 0x80291898: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x8029189C: jal         0x8029594C
    // 0x802918A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    static_3_8029594C(rdram, ctx);
        goto after_12;
    // 0x802918A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_12:
    // 0x802918A4: jal         0x8023499C
    // 0x802918A8: nop

    static_3_8023499C(rdram, ctx);
        goto after_13;
    // 0x802918A8: nop

    after_13:
    // 0x802918AC: jal         0x8023499C
    // 0x802918B0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    static_3_8023499C(rdram, ctx);
        goto after_14;
    // 0x802918B0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_14:
    // 0x802918B4: jal         0x8023499C
    // 0x802918B8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    static_3_8023499C(rdram, ctx);
        goto after_15;
    // 0x802918B8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_15:
    // 0x802918BC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802918C0: lwc1        $f10, 0x0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802918C4: neg.s       $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = -ctx->f22.fl;
    // 0x802918C8: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x802918CC: mul.s       $f16, $f20, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x802918D0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802918D4: mul.s       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x802918D8: nop

    // 0x802918DC: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x802918E0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802918E4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802918E8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802918EC: jal         0x80295958
    // 0x802918F0: nop

    static_3_80295958(rdram, ctx);
        goto after_16;
    // 0x802918F0: nop

    after_16:
L_802918F4:
    // 0x802918F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802918F8: bne         $s0, $s6, L_802917F4
    if (ctx->r16 != ctx->r22) {
        // 0x802918FC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802917F4;
    }
    // 0x802918FC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80291900: lw          $t5, 0x18C($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X18C);
    // 0x80291904: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80291908: addiu       $t9, $t5, -0x1
    ctx->r25 = ADD32(ctx->r13, -0X1);
    // 0x8029190C: sw          $t9, 0x18C($s4)
    MEM_W(0X18C, ctx->r20) = ctx->r25;
    // 0x80291910: swc1        $f10, 0xF4($s4)
    MEM_W(0XF4, ctx->r20) = ctx->f10.u32l;
    // 0x80291914: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x80291918: lw          $s7, 0x78($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X78);
    // 0x8029191C: lw          $s6, 0x74($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X74);
    // 0x80291920: lw          $s5, 0x70($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X70);
    // 0x80291924: lw          $s4, 0x6C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X6C);
    // 0x80291928: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x8029192C: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x80291930: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x80291934: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x80291938: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x8029193C: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x80291940: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x80291944: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x80291948: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8029194C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80291950: jr          $ra
    // 0x80291954: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x80291954: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void D_802E0F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E0FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802E0FF4: bne         $a0, $zero, L_802E1008
    if (ctx->r4 != 0) {
        // 0x802E0FF8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802E1008;
    }
    // 0x802E0FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E0FFC: jal         0x802C67EC
    // 0x802E1000: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    static_3_802C67EC(rdram, ctx);
        goto after_0;
    // 0x802E1000: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_0:
    // 0x802E1004: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802E1008:
    // 0x802E1008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E100C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802E1010: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802E1014: jr          $ra
    // 0x802E1018: nop

    return;
    // 0x802E1018: nop

;}
RECOMP_FUNC void D_802A8D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8DA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8DA4: jal         0x8028D750
    // 0x802A8DA8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    static_3_8028D750(rdram, ctx);
        goto after_0;
    // 0x802A8DA8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x802A8DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A8DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8DB4: jr          $ra
    // 0x802A8DB8: nop

    return;
    // 0x802A8DB8: nop

;}
RECOMP_FUNC void D_802D21F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D2278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802D227C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802D2280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802D2284: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802D2288: bne         $a1, $at, L_802D22A4
    if (ctx->r5 != ctx->r1) {
        // 0x802D228C: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_802D22A4;
    }
    // 0x802D228C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802D2290: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D2294: jal         0x80231A24
    // 0x802D2298: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802D2298: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x802D229C: b           L_802D2360
    // 0x802D22A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D2360;
    // 0x802D22A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D22A4:
    // 0x802D22A4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802D22A8: lbu         $t6, 0x0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X0);
    // 0x802D22AC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802D22B0: beql        $t6, $at, L_802D2360
    if (ctx->r14 == ctx->r1) {
        // 0x802D22B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D2360;
    }
    goto skip_0;
    // 0x802D22B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802D22B8: lw          $t8, 0x2928($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X2928);
    // 0x802D22BC: lw          $t7, 0x2924($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X2924);
    // 0x802D22C0: lw          $t9, 0x1C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1C);
    // 0x802D22C4: beql        $t7, $t9, L_802D2360
    if (ctx->r15 == ctx->r25) {
        // 0x802D22C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802D2360;
    }
    goto skip_1;
    // 0x802D22C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802D22CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802D22D0: jal         0x80302DF8
    // 0x802D22D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    static_3_80302DF8(rdram, ctx);
        goto after_1;
    // 0x802D22D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x802D22D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D22DC: beq         $v0, $zero, L_802D2304
    if (ctx->r2 == 0) {
        // 0x802D22E0: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_802D2304;
    }
    // 0x802D22E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802D22E4: jal         0x80302E10
    // 0x802D22E8: nop

    static_3_80302E10(rdram, ctx);
        goto after_2;
    // 0x802D22E8: nop

    after_2:
    // 0x802D22EC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802D22F0: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802D22F4: jal         0x80231A24
    // 0x802D22F8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x802D22F8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x802D22FC: b           L_802D2360
    // 0x802D2300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802D2360;
    // 0x802D2300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D2304:
    // 0x802D2304: lw          $t0, 0x2928($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X2928);
    // 0x802D2308: sw          $a1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r5;
    // 0x802D230C: jal         0x80302DC8
    // 0x802D2310: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    static_3_80302DC8(rdram, ctx);
        goto after_4;
    // 0x802D2310: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_4:
    // 0x802D2314: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802D2318: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802D231C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802D2320: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x802D2324: lw          $t1, 0x2928($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X2928);
    // 0x802D2328: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802D232C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D2330: swc1        $f6, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f6.u32l;
    // 0x802D2334: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802D2338: lw          $t2, 0x2928($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X2928);
    // 0x802D233C: swc1        $f8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f8.u32l;
    // 0x802D2340: lw          $t4, 0x2928($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X2928);
    // 0x802D2344: sb          $t3, 0x4($t4)
    MEM_B(0X4, ctx->r12) = ctx->r11;
    // 0x802D2348: lw          $t5, 0x2928($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X2928);
    // 0x802D234C: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x802D2350: lw          $t6, 0x2928($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2928);
    // 0x802D2354: lw          $t8, 0x1C($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X1C);
    // 0x802D2358: sw          $t8, 0x2928($a0)
    MEM_W(0X2928, ctx->r4) = ctx->r24;
    // 0x802D235C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802D2360:
    // 0x802D2360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802D2364: jr          $ra
    // 0x802D2368: nop

    return;
    // 0x802D2368: nop

;}
RECOMP_FUNC void D_802D8400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8480: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802D8484: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802D8488: jr          $ra
    // 0x802D848C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x802D848C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void D_802E7D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E7E00: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x802E7E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802E7E08: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x802E7E0C: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x802E7E10: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802E7E14: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7E18: bne         $v1, $zero, L_802E7E30
    if (ctx->r3 != 0) {
        // 0x802E7E1C: addiu       $a0, $a0, 0x0
        ctx->r4 = ADD32(ctx->r4, 0X0);
            goto L_802E7E30;
    }
    // 0x802E7E1C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x802E7E20: jal         0x80231A24
    // 0x802E7E24: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x802E7E24: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_0:
    // 0x802E7E28: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x802E7E2C: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
L_802E7E30:
    // 0x802E7E30: lw          $v0, 0xD8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XD8);
    // 0x802E7E34: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802E7E38: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x802E7E3C: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x802E7E40: jalr        $t9
    // 0x802E7E44: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802E7E44: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    after_1:
    // 0x802E7E48: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x802E7E4C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7E50: bne         $t7, $zero, L_802E7E60
    if (ctx->r15 != 0) {
        // 0x802E7E54: nop
    
            goto L_802E7E60;
    }
    // 0x802E7E54: nop

    // 0x802E7E58: jal         0x80231A24
    // 0x802E7E5C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x802E7E5C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
L_802E7E60:
    // 0x802E7E60: jal         0x803183D0
    // 0x802E7E64: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    static_3_803183D0(rdram, ctx);
        goto after_3;
    // 0x802E7E64: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_3:
    // 0x802E7E68: bne         $v0, $zero, L_802E7E78
    if (ctx->r2 != 0) {
        // 0x802E7E6C: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_802E7E78;
    }
    // 0x802E7E6C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x802E7E70: jal         0x80231A24
    // 0x802E7E74: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_4;
    // 0x802E7E74: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_4:
L_802E7E78:
    // 0x802E7E78: jal         0x803183D0
    // 0x802E7E7C: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    static_3_803183D0(rdram, ctx);
        goto after_5;
    // 0x802E7E7C: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    after_5:
    // 0x802E7E80: lw          $v1, 0xD8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XD8);
    // 0x802E7E84: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802E7E88: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x802E7E8C: lh          $t8, 0x10($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X10);
    // 0x802E7E90: jalr        $t9
    // 0x802E7E94: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x802E7E94: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_6:
    // 0x802E7E98: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802E7E9C: jal         0x802CF954
    // 0x802E7EA0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    static_3_802CF954(rdram, ctx);
        goto after_7;
    // 0x802E7EA0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x802E7EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802E7EA8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x802E7EAC: jr          $ra
    // 0x802E7EB0: nop

    return;
    // 0x802E7EB0: nop

;}
RECOMP_FUNC void D_80299438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802994B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802994BC: jr          $ra
    // 0x802994C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802994C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void D_802D8A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802D8ADC: addiu       $sp, $sp, -0x1A8
    ctx->r29 = ADD32(ctx->r29, -0X1A8);
    // 0x802D8AE0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802D8AE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802D8AE8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802D8AEC: sw          $a1, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r5;
    // 0x802D8AF0: sw          $a2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r6;
    // 0x802D8AF4: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x802D8AF8: addiu       $a2, $sp, 0x128
    ctx->r6 = ADD32(ctx->r29, 0X128);
    // 0x802D8AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802D8B00: jal         0x8020664C
    // 0x802D8B04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    static_3_8020664C(rdram, ctx);
        goto after_0;
    // 0x802D8B04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802D8B08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802D8B0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802D8B10: jal         0x8020664C
    // 0x802D8B14: addiu       $a2, $sp, 0x168
    ctx->r6 = ADD32(ctx->r29, 0X168);
    static_3_8020664C(rdram, ctx);
        goto after_1;
    // 0x802D8B14: addiu       $a2, $sp, 0x168
    ctx->r6 = ADD32(ctx->r29, 0X168);
    after_1:
    // 0x802D8B18: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x802D8B1C: jal         0x8022A2F0
    // 0x802D8B20: addiu       $a1, $sp, 0x168
    ctx->r5 = ADD32(ctx->r29, 0X168);
    static_3_8022A2F0(rdram, ctx);
        goto after_2;
    // 0x802D8B20: addiu       $a1, $sp, 0x168
    ctx->r5 = ADD32(ctx->r29, 0X168);
    after_2:
    // 0x802D8B24: jal         0x8022970C
    // 0x802D8B28: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    func_8022970C(rdram, ctx);
        goto after_3;
    // 0x802D8B28: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    after_3:
    // 0x802D8B2C: lui         $a1, 0xBFC9
    ctx->r5 = S32(0XBFC9 << 16);
    // 0x802D8B30: ori         $a1, $a1, 0xFE0
    ctx->r5 = ctx->r5 | 0XFE0;
    // 0x802D8B34: addiu       $a0, $sp, 0x128
    ctx->r4 = ADD32(ctx->r29, 0X128);
    // 0x802D8B38: jal         0x802D01D4
    // 0x802D8B3C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    static_3_802D01D4(rdram, ctx);
        goto after_4;
    // 0x802D8B3C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_4:
    // 0x802D8B40: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x802D8B44: addiu       $a1, $sp, 0x128
    ctx->r5 = ADD32(ctx->r29, 0X128);
    // 0x802D8B48: jal         0x802297A8
    // 0x802D8B4C: addiu       $a2, $sp, 0x168
    ctx->r6 = ADD32(ctx->r29, 0X168);
    static_3_802297A8(rdram, ctx);
        goto after_5;
    // 0x802D8B4C: addiu       $a2, $sp, 0x168
    ctx->r6 = ADD32(ctx->r29, 0X168);
    after_5:
    // 0x802D8B50: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D8B54: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8B58: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x802D8B5C: jal         0x80300424
    // 0x802D8B60: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    static_3_80300424(rdram, ctx);
        goto after_6;
    // 0x802D8B60: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_6:
    // 0x802D8B64: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802D8B68: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802D8B6C: jal         0x80300424
    // 0x802D8B70: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_80300424(rdram, ctx);
        goto after_7;
    // 0x802D8B70: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_7:
    // 0x802D8B74: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802D8B78: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802D8B7C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D8B80: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x802D8B84: nop

    // 0x802D8B88: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802D8B8C: lwc1        $f10, 0x48($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X48);
    // 0x802D8B90: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802D8B94: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x802D8B98: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8B9C: jal         0x80300424
    // 0x802D8BA0: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    static_3_80300424(rdram, ctx);
        goto after_8;
    // 0x802D8BA0: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_8:
    // 0x802D8BA4: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D8BA8: lwc1        $f8, 0x0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8BAC: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802D8BB0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802D8BB4: jal         0x80300424
    // 0x802D8BB8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    static_3_80300424(rdram, ctx);
        goto after_9;
    // 0x802D8BB8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_9:
    // 0x802D8BBC: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802D8BC0: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802D8BC4: lwc1        $f12, 0x48($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X48);
    // 0x802D8BC8: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802D8BCC: nop

    // 0x802D8BD0: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x802D8BD4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802D8BD8: jal         0x80300424
    // 0x802D8BDC: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
    static_3_80300424(rdram, ctx);
        goto after_10;
    // 0x802D8BDC: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
    after_10:
    // 0x802D8BE0: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802D8BE4: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802D8BE8: lw          $a0, 0x64($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X64);
    // 0x802D8BEC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802D8BF0: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x802D8BF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802D8BF8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802D8BFC: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x802D8C00: jal         0x8021B4B0
    // 0x802D8C04: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    static_3_8021B4B0(rdram, ctx);
        goto after_11;
    // 0x802D8C04: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    after_11:
    // 0x802D8C08: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802D8C0C: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x802D8C10: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802D8C14: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x802D8C18: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802D8C1C: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x802D8C20: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x802D8C24: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x802D8C28: jal         0x8022A4F4
    // 0x802D8C2C: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    static_3_8022A4F4(rdram, ctx);
        goto after_12;
    // 0x802D8C2C: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x802D8C30: lwc1        $f2, 0x4C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802D8C34: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802D8C38: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802D8C3C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802D8C40: div.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802D8C44: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802D8C48: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D8C4C: lwc1        $f18, 0x0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8C50: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x802D8C54: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802D8C58: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802D8C5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D8C60: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x802D8C64: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802D8C68: add.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x802D8C6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D8C70: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x802D8C74: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802D8C78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D8C7C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802D8C80: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802D8C84: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802D8C88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D8C8C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802D8C90: swc1        $f8, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f8.u32l;
    // 0x802D8C94: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x802D8C98: add.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x802D8C9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D8CA0: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802D8CA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802D8CA8: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D8CAC: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802D8CB0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802D8CB4: swc1        $f8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f8.u32l;
    // 0x802D8CB8: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x802D8CBC: swc1        $f4, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f4.u32l;
    // 0x802D8CC0: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x802D8CC4: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x802D8CC8: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x802D8CCC: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x802D8CD0: swc1        $f20, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f20.u32l;
    // 0x802D8CD4: swc1        $f20, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f20.u32l;
    // 0x802D8CD8: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    // 0x802D8CDC: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    // 0x802D8CE0: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x802D8CE4: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x802D8CE8: swc1        $f20, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f20.u32l;
    // 0x802D8CEC: swc1        $f20, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f20.u32l;
    // 0x802D8CF0: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x802D8CF4: lwc1        $f16, 0x44($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802D8CF8: sub.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802D8CFC: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802D8D00: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x802D8D04: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802D8D08: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x802D8D0C: lwc1        $f14, 0x48($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X48);
    // 0x802D8D10: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8D14: sub.s       $f8, $f14, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x802D8D18: add.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x802D8D1C: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x802D8D20: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802D8D24: jal         0x80300424
    // 0x802D8D28: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    static_3_80300424(rdram, ctx);
        goto after_13;
    // 0x802D8D28: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    after_13:
    // 0x802D8D2C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D8D30: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8D34: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802D8D38: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x802D8D3C: jal         0x80300424
    // 0x802D8D40: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    static_3_80300424(rdram, ctx);
        goto after_14;
    // 0x802D8D40: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    after_14:
    // 0x802D8D44: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D8D48: lwc1        $f6, 0x0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8D4C: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802D8D50: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x802D8D54: jal         0x80300424
    // 0x802D8D58: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    static_3_80300424(rdram, ctx);
        goto after_15;
    // 0x802D8D58: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    after_15:
    // 0x802D8D5C: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D8D60: lwc1        $f4, 0x0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8D64: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802D8D68: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x802D8D6C: jal         0x80300424
    // 0x802D8D70: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    static_3_80300424(rdram, ctx);
        goto after_16;
    // 0x802D8D70: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    after_16:
    // 0x802D8D74: lwc1        $f12, 0x90($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802D8D78: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x802D8D7C: jal         0x80300424
    // 0x802D8D80: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_80300424(rdram, ctx);
        goto after_17;
    // 0x802D8D80: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_17:
    // 0x802D8D84: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802D8D88: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x802D8D8C: jal         0x80300424
    // 0x802D8D90: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    static_3_80300424(rdram, ctx);
        goto after_18;
    // 0x802D8D90: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_18:
    // 0x802D8D94: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x802D8D98: jal         0x80300424
    // 0x802D8D9C: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    static_3_80300424(rdram, ctx);
        goto after_19;
    // 0x802D8D9C: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    after_19:
    // 0x802D8DA0: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x802D8DA4: jal         0x80300424
    // 0x802D8DA8: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    static_3_80300424(rdram, ctx);
        goto after_20;
    // 0x802D8DA8: lwc1        $f12, 0x84($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X84);
    after_20:
    // 0x802D8DAC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x802D8DB0: lwc1        $f2, 0x4C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802D8DB4: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802D8DB8: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802D8DBC: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802D8DC0: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802D8DC4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802D8DC8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802D8DCC: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x802D8DD0: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x802D8DD4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802D8DD8: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x802D8DDC: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802D8DE0: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802D8DE4: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802D8DE8: nop

    // 0x802D8DEC: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802D8DF0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802D8DF4: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
    // 0x802D8DF8: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802D8DFC: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802D8E00: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802D8E04: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802D8E08: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x802D8E0C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802D8E10: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D8E14: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x802D8E18: jal         0x802AF31C
    // 0x802D8E1C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    static_3_802AF31C(rdram, ctx);
        goto after_21;
    // 0x802D8E1C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_21:
    // 0x802D8E20: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x802D8E24: lwc1        $f2, 0x4C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802D8E28: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x802D8E2C: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802D8E30: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802D8E34: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802D8E38: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802D8E3C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802D8E40: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x802D8E44: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802D8E48: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802D8E4C: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x802D8E50: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802D8E54: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802D8E58: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802D8E5C: nop

    // 0x802D8E60: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802D8E64: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802D8E68: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x802D8E6C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802D8E70: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802D8E74: mul.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802D8E78: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802D8E7C: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x802D8E80: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802D8E84: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D8E88: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x802D8E8C: jal         0x802AF31C
    // 0x802D8E90: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    static_3_802AF31C(rdram, ctx);
        goto after_22;
    // 0x802D8E90: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_22:
    // 0x802D8E94: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x802D8E98: lwc1        $f2, 0x4C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802D8E9C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802D8EA0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802D8EA4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802D8EA8: mul.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x802D8EAC: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802D8EB0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802D8EB4: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x802D8EB8: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802D8EBC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802D8EC0: swc1        $f10, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f10.u32l;
    // 0x802D8EC4: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802D8EC8: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802D8ECC: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802D8ED0: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802D8ED4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802D8ED8: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802D8EDC: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x802D8EE0: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802D8EE4: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802D8EE8: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802D8EEC: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802D8EF0: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
    // 0x802D8EF4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802D8EF8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D8EFC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x802D8F00: jal         0x802AF31C
    // 0x802D8F04: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    static_3_802AF31C(rdram, ctx);
        goto after_23;
    // 0x802D8F04: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_23:
    // 0x802D8F08: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x802D8F0C: lwc1        $f2, 0x4C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802D8F10: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802D8F14: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802D8F18: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802D8F1C: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x802D8F20: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x802D8F24: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802D8F28: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x802D8F2C: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802D8F30: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802D8F34: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x802D8F38: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802D8F3C: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802D8F40: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802D8F44: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x802D8F48: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802D8F4C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x802D8F50: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x802D8F54: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802D8F58: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x802D8F5C: mul.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802D8F60: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802D8F64: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
    // 0x802D8F68: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802D8F6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802D8F70: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x802D8F74: jal         0x802AF31C
    // 0x802D8F78: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    static_3_802AF31C(rdram, ctx);
        goto after_24;
    // 0x802D8F78: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_24:
    // 0x802D8F7C: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x802D8F80: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802D8F84: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x802D8F88: beq         $t6, $zero, L_802D8F94
    if (ctx->r14 == 0) {
        // 0x802D8F8C: lw          $t8, 0x78($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X78);
            goto L_802D8F94;
    }
    // 0x802D8F8C: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x802D8F90: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802D8F94:
    // 0x802D8F94: beq         $t7, $zero, L_802D8FA0
    if (ctx->r15 == 0) {
        // 0x802D8F98: nop
    
            goto L_802D8FA0;
    }
    // 0x802D8F98: nop

    // 0x802D8F9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802D8FA0:
    // 0x802D8FA0: beq         $t8, $zero, L_802D8FAC
    if (ctx->r24 == 0) {
        // 0x802D8FA4: nop
    
            goto L_802D8FAC;
    }
    // 0x802D8FA4: nop

    // 0x802D8FA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_802D8FAC:
    // 0x802D8FAC: beql        $v0, $zero, L_802D8FBC
    if (ctx->r2 == 0) {
        // 0x802D8FB0: mtc1        $v1, $f10
        ctx->f10.u32l = ctx->r3;
            goto L_802D8FBC;
    }
    goto skip_0;
    // 0x802D8FB0: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    skip_0:
    // 0x802D8FB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802D8FB8: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
L_802D8FBC:
    // 0x802D8FBC: lui         $at, 0x0
    ctx->r1 = S32(0X0 << 16);
    // 0x802D8FC0: lwc1        $f2, 0x0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X0);
    // 0x802D8FC4: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802D8FC8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802D8FCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802D8FD0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802D8FD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802D8FD8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802D8FDC: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802D8FE0: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x802D8FE4: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x802D8FE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802D8FEC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802D8FF0: mul.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802D8FF4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802D8FF8: nop

    // 0x802D8FFC: bc1fl       L_802D900C
    if (!c1cs) {
        // 0x802D9000: swc1        $f0, 0x5C($s0)
        MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
            goto L_802D900C;
    }
    goto skip_1;
    // 0x802D9000: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    skip_1:
    // 0x802D9004: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802D9008: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
L_802D900C:
    // 0x802D900C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802D9010: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802D9014: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x802D9018: jr          $ra
    // 0x802D901C: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
    return;
    // 0x802D901C: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
;}
RECOMP_FUNC void D_8022BAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022BAB0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8022BAB4: ori         $at, $at, 0x5800
    ctx->r1 = ctx->r1 | 0X5800;
    // 0x8022BAB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BABC: sltu        $at, $a0, $at
    ctx->r1 = ctx->r4 < ctx->r1 ? 1 : 0;
    // 0x8022BAC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BAC4: bne         $at, $zero, L_8022BAE0
    if (ctx->r1 != 0) {
        // 0x8022BAC8: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8022BAE0;
    }
    // 0x8022BAC8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022BACC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022BAD0: jal         0x80231A24
    // 0x8022BAD4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x8022BAD4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x8022BAD8: b           L_8022BB4C
    // 0x8022BADC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022BB4C;
    // 0x8022BADC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022BAE0:
    // 0x8022BAE0: lui         $v1, 0x0
    ctx->r3 = S32(0X0 << 16);
    // 0x8022BAE4: addiu       $v1, $v1, 0x0
    ctx->r3 = ADD32(ctx->r3, 0X0);
    // 0x8022BAE8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8022BAEC: lui         $v0, 0x803D
    ctx->r2 = S32(0X803D << 16);
    // 0x8022BAF0: ori         $v0, $v0, 0xA800
    ctx->r2 = ctx->r2 | 0XA800;
    // 0x8022BAF4: bne         $t6, $zero, L_8022BB04
    if (ctx->r14 != 0) {
        // 0x8022BAF8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8022BB04;
    }
    // 0x8022BAF8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8022BAFC: b           L_8022BB4C
    // 0x8022BB00: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_8022BB4C;
    // 0x8022BB00: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_8022BB04:
    // 0x8022BB04: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x8022BB08: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8022BB0C: ori         $v0, $v0, 0xA800
    ctx->r2 = ctx->r2 | 0XA800;
    // 0x8022BB10: bne         $t8, $zero, L_8022BB20
    if (ctx->r24 != 0) {
        // 0x8022BB14: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_8022BB20;
    }
    // 0x8022BB14: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8022BB18: b           L_8022BB4C
    // 0x8022BB1C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
        goto L_8022BB4C;
    // 0x8022BB1C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_8022BB20:
    // 0x8022BB20: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x8022BB24: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8022BB28: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8022BB2C: bne         $t0, $zero, L_8022BB3C
    if (ctx->r8 != 0) {
        // 0x8022BB30: nop
    
            goto L_8022BB3C;
    }
    // 0x8022BB30: nop

    // 0x8022BB34: b           L_8022BB4C
    // 0x8022BB38: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
        goto L_8022BB4C;
    // 0x8022BB38: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
L_8022BB3C:
    // 0x8022BB3C: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x8022BB40: jal         0x80231A24
    // 0x8022BB44: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022BB44: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x8022BB48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022BB4C:
    // 0x8022BB4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BB50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022BB54: jr          $ra
    // 0x8022BB58: nop

    return;
    // 0x8022BB58: nop

;}
RECOMP_FUNC void D_802E5C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802E5D10: jr          $ra
    // 0x802E5D14: lbu         $v0, 0xDBB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDBB);
    return;
    // 0x802E5D14: lbu         $v0, 0xDBB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDBB);
;}
RECOMP_FUNC void D_80278C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278D14: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80278D18: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80278D1C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80278D20: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80278D24: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80278D28: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80278D2C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80278D30: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80278D34: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80278D38: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80278D3C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80278D40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80278D44: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x80278D48: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x80278D4C: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x80278D50: beq         $a1, $zero, L_8027925C
    if (ctx->r5 == 0) {
        // 0x80278D54: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8027925C;
    }
    // 0x80278D54: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80278D58: blez        $a1, L_8027925C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80278D5C: or          $s4, $a2, $zero
        ctx->r20 = ctx->r6 | 0;
            goto L_8027925C;
    }
    // 0x80278D5C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80278D60: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x80278D64: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x80278D68: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80278D6C: addiu       $s1, $zero, 0x24
    ctx->r17 = ADD32(0, 0X24);
    // 0x80278D70: lw          $s0, 0x94($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X94);
    // 0x80278D74: lw          $v0, 0x6FBC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X6FBC);
L_80278D78:
    // 0x80278D78: beql        $v0, $zero, L_80278E48
    if (ctx->r2 == 0) {
        // 0x80278D7C: lw          $v0, 0x6F00($s3)
        ctx->r2 = MEM_W(ctx->r19, 0X6F00);
            goto L_80278E48;
    }
    goto skip_0;
    // 0x80278D7C: lw          $v0, 0x6F00($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X6F00);
    skip_0:
    // 0x80278D80: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x80278D84: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x80278D88: lw          $t9, 0x8C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8C);
    // 0x80278D8C: lh          $t7, 0x88($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X88);
    // 0x80278D90: jalr        $t9
    // 0x80278D94: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80278D94: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    after_0:
    // 0x80278D98: beql        $v0, $zero, L_80278E48
    if (ctx->r2 == 0) {
        // 0x80278D9C: lw          $v0, 0x6F00($s3)
        ctx->r2 = MEM_W(ctx->r19, 0X6F00);
            goto L_80278E48;
    }
    goto skip_1;
    // 0x80278D9C: lw          $v0, 0x6F00($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X6F00);
    skip_1:
    // 0x80278DA0: jal         0x803187FC
    // 0x80278DA4: lw          $a0, 0x6FBC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6FBC);
    static_3_803187FC(rdram, ctx);
        goto after_1;
    // 0x80278DA4: lw          $a0, 0x6FBC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X6FBC);
    after_1:
    // 0x80278DA8: beql        $v0, $s0, L_80278E48
    if (ctx->r2 == ctx->r16) {
        // 0x80278DAC: lw          $v0, 0x6F00($s3)
        ctx->r2 = MEM_W(ctx->r19, 0X6F00);
            goto L_80278E48;
    }
    goto skip_2;
    // 0x80278DAC: lw          $v0, 0x6F00($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X6F00);
    skip_2:
    // 0x80278DB0: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80278DB4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80278DB8: nop

    // 0x80278DBC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80278DC0: nop

    // 0x80278DC4: bc1t        L_80278E3C
    if (c1cs) {
        // 0x80278DC8: nop
    
            goto L_80278E3C;
    }
    // 0x80278DC8: nop

    // 0x80278DCC: lw          $v0, 0x6FBC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X6FBC);
    // 0x80278DD0: lbu         $t1, 0x9B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X9B);
    // 0x80278DD4: lw          $a3, 0x0($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X0);
    // 0x80278DD8: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x80278DDC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80278DE0: srl         $t0, $a3, 24
    ctx->r8 = S32(U32(ctx->r7) >> 24);
    // 0x80278DE4: lh          $t8, 0xE0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XE0);
    // 0x80278DE8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80278DEC: lw          $t9, 0xE4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XE4);
    // 0x80278DF0: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x80278DF4: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x80278DF8: jalr        $t9
    // 0x80278DFC: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80278DFC: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_2:
    // 0x80278E00: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80278E04: bnel        $s0, $at, L_80278E38
    if (ctx->r16 != ctx->r1) {
        // 0x80278E08: lw          $t7, 0x6FBC($s3)
        ctx->r15 = MEM_W(ctx->r19, 0X6FBC);
            goto L_80278E38;
    }
    goto skip_3;
    // 0x80278E08: lw          $t7, 0x6FBC($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X6FBC);
    skip_3:
    // 0x80278E0C: bne         $v0, $zero, L_80278E24
    if (ctx->r2 != 0) {
        // 0x80278E10: sll         $t4, $v0, 2
        ctx->r12 = S32(ctx->r2 << 2);
            goto L_80278E24;
    }
    // 0x80278E10: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x80278E14: lw          $t2, 0x8D8($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X8D8);
    // 0x80278E18: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80278E1C: b           L_80278E34
    // 0x80278E20: sw          $t3, 0x8D8($s3)
    MEM_W(0X8D8, ctx->r19) = ctx->r11;
        goto L_80278E34;
    // 0x80278E20: sw          $t3, 0x8D8($s3)
    MEM_W(0X8D8, ctx->r19) = ctx->r11;
L_80278E24:
    // 0x80278E24: addu        $v1, $s3, $t4
    ctx->r3 = ADD32(ctx->r19, ctx->r12);
    // 0x80278E28: lw          $t5, 0x8B4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8B4);
    // 0x80278E2C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80278E30: sw          $t6, 0x8B4($v1)
    MEM_W(0X8B4, ctx->r3) = ctx->r14;
L_80278E34:
    // 0x80278E34: lw          $t7, 0x6FBC($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X6FBC);
L_80278E38:
    // 0x80278E38: sw          $t7, 0x70F4($s3)
    MEM_W(0X70F4, ctx->r19) = ctx->r15;
L_80278E3C:
    // 0x80278E3C: b           L_8027925C
    // 0x80278E40: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
        goto L_8027925C;
    // 0x80278E40: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x80278E44: lw          $v0, 0x6F00($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X6F00);
L_80278E48:
    // 0x80278E48: beql        $v0, $zero, L_80278EE0
    if (ctx->r2 == 0) {
        // 0x80278E4C: lw          $v1, 0x37FC($s3)
        ctx->r3 = MEM_W(ctx->r19, 0X37FC);
            goto L_80278EE0;
    }
    goto skip_4;
    // 0x80278E4C: lw          $v1, 0x37FC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X37FC);
    skip_4:
    // 0x80278E50: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x80278E54: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x80278E58: lw          $t9, 0x8C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8C);
    // 0x80278E5C: lh          $t8, 0x88($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X88);
    // 0x80278E60: jalr        $t9
    // 0x80278E64: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80278E64: addu        $a0, $t8, $v0
    ctx->r4 = ADD32(ctx->r24, ctx->r2);
    after_3:
    // 0x80278E68: beq         $v0, $zero, L_80278EDC
    if (ctx->r2 == 0) {
        // 0x80278E6C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80278EDC;
    }
    // 0x80278E6C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80278E70: beq         $s0, $at, L_80278ED4
    if (ctx->r16 == ctx->r1) {
        // 0x80278E74: nop
    
            goto L_80278ED4;
    }
    // 0x80278E74: nop

    // 0x80278E78: beq         $s0, $fp, L_80278ED4
    if (ctx->r16 == ctx->r30) {
        // 0x80278E7C: lwc1        $f8, 0x8C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
            goto L_80278ED4;
    }
    // 0x80278E7C: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80278E80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80278E84: nop

    // 0x80278E88: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80278E8C: nop

    // 0x80278E90: bc1tl       L_80278ED0
    if (c1cs) {
        // 0x80278E94: lw          $t3, 0x6F00($s3)
        ctx->r11 = MEM_W(ctx->r19, 0X6F00);
            goto L_80278ED0;
    }
    goto skip_5;
    // 0x80278E94: lw          $t3, 0x6F00($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X6F00);
    skip_5:
    // 0x80278E98: lw          $v0, 0x6F00($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X6F00);
    // 0x80278E9C: lbu         $t2, 0x9B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X9B);
    // 0x80278EA0: lw          $a3, 0x0($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X0);
    // 0x80278EA4: lw          $v1, 0x1A0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1A0);
    // 0x80278EA8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80278EAC: srl         $t1, $a3, 24
    ctx->r9 = S32(U32(ctx->r7) >> 24);
    // 0x80278EB0: lh          $t0, 0xE0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0XE0);
    // 0x80278EB4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80278EB8: lw          $t9, 0xE4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XE4);
    // 0x80278EBC: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x80278EC0: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x80278EC4: jalr        $t9
    // 0x80278EC8: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80278EC8: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    after_4:
    // 0x80278ECC: lw          $t3, 0x6F00($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X6F00);
L_80278ED0:
    // 0x80278ED0: sw          $t3, 0x70F4($s3)
    MEM_W(0X70F4, ctx->r19) = ctx->r11;
L_80278ED4:
    // 0x80278ED4: b           L_8027925C
    // 0x80278ED8: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
        goto L_8027925C;
    // 0x80278ED8: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_80278EDC:
    // 0x80278EDC: lw          $v1, 0x37FC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X37FC);
L_80278EE0:
    // 0x80278EE0: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x80278EE4: lh          $t4, 0x88($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X88);
    // 0x80278EE8: lw          $t9, 0x8C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8C);
    // 0x80278EEC: addu        $a0, $t4, $s3
    ctx->r4 = ADD32(ctx->r12, ctx->r19);
    // 0x80278EF0: jalr        $t9
    // 0x80278EF4: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80278EF4: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    after_5:
    // 0x80278EF8: beq         $v0, $zero, L_80278FA4
    if (ctx->r2 == 0) {
        // 0x80278EFC: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80278FA4;
    }
    // 0x80278EFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80278F00: addiu       $a0, $s3, 0x365C
    ctx->r4 = ADD32(ctx->r19, 0X365C);
    // 0x80278F04: jal         0x803187FC
    // 0x80278F08: sw          $a0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r4;
    static_3_803187FC(rdram, ctx);
        goto after_6;
    // 0x80278F08: sw          $a0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r4;
    after_6:
    // 0x80278F0C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80278F10: bne         $v0, $v1, L_80278F28
    if (ctx->r2 != ctx->r3) {
        // 0x80278F14: nop
    
            goto L_80278F28;
    }
    // 0x80278F14: nop

    // 0x80278F18: beq         $s0, $fp, L_80278F28
    if (ctx->r16 == ctx->r30) {
        // 0x80278F1C: nop
    
            goto L_80278F28;
    }
    // 0x80278F1C: nop

    // 0x80278F20: bnel        $s0, $v1, L_80278F4C
    if (ctx->r16 != ctx->r3) {
        // 0x80278F24: lwc1        $f16, 0x8C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
            goto L_80278F4C;
    }
    goto skip_6;
    // 0x80278F24: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    skip_6:
L_80278F28:
    // 0x80278F28: jal         0x803187FC
    // 0x80278F2C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    static_3_803187FC(rdram, ctx);
        goto after_7;
    // 0x80278F2C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    after_7:
    // 0x80278F30: bnel        $v0, $s6, L_80279120
    if (ctx->r2 != ctx->r22) {
        // 0x80278F34: addiu       $a0, $s3, 0x4E3C
        ctx->r4 = ADD32(ctx->r19, 0X4E3C);
            goto L_80279120;
    }
    goto skip_7;
    // 0x80278F34: addiu       $a0, $s3, 0x4E3C
    ctx->r4 = ADD32(ctx->r19, 0X4E3C);
    skip_7:
    // 0x80278F38: beql        $s0, $s7, L_80279120
    if (ctx->r16 == ctx->r23) {
        // 0x80278F3C: addiu       $a0, $s3, 0x4E3C
        ctx->r4 = ADD32(ctx->r19, 0X4E3C);
            goto L_80279120;
    }
    goto skip_8;
    // 0x80278F3C: addiu       $a0, $s3, 0x4E3C
    ctx->r4 = ADD32(ctx->r19, 0X4E3C);
    skip_8:
    // 0x80278F40: beql        $s0, $s6, L_80279120
    if (ctx->r16 == ctx->r22) {
        // 0x80278F44: addiu       $a0, $s3, 0x4E3C
        ctx->r4 = ADD32(ctx->r19, 0X4E3C);
            goto L_80279120;
    }
    goto skip_9;
    // 0x80278F44: addiu       $a0, $s3, 0x4E3C
    ctx->r4 = ADD32(ctx->r19, 0X4E3C);
    skip_9:
    // 0x80278F48: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
L_80278F4C:
    // 0x80278F4C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80278F50: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x80278F54: lbu         $t7, 0x9B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X9B);
    // 0x80278F58: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80278F5C: nop

    // 0x80278F60: bc1t        L_80278F9C
    if (c1cs) {
        // 0x80278F64: nop
    
            goto L_80278F9C;
    }
    // 0x80278F64: nop

    // 0x80278F68: lw          $v1, 0x37FC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X37FC);
    // 0x80278F6C: lw          $a3, 0x0($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X0);
    // 0x80278F70: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80278F74: lh          $t5, 0xE0($v1)
    ctx->r13 = MEM_H(ctx->r3, 0XE0);
    // 0x80278F78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80278F7C: lw          $t9, 0xE4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XE4);
    // 0x80278F80: srl         $t6, $a3, 24
    ctx->r14 = S32(U32(ctx->r7) >> 24);
    // 0x80278F84: addu        $a0, $t5, $s3
    ctx->r4 = ADD32(ctx->r13, ctx->r19);
    // 0x80278F88: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    // 0x80278F8C: jalr        $t9
    // 0x80278F90: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x80278F90: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    after_8:
    // 0x80278F94: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80278F98: sw          $t8, 0x70F4($s3)
    MEM_W(0X70F4, ctx->r19) = ctx->r24;
L_80278F9C:
    // 0x80278F9C: b           L_8027925C
    // 0x80278FA0: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
        goto L_8027925C;
    // 0x80278FA0: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_80278FA4:
    // 0x80278FA4: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x80278FA8: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80278FAC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80278FB0: and         $t0, $a1, $at
    ctx->r8 = ctx->r5 & ctx->r1;
    // 0x80278FB4: jal         0x802A92B8
    // 0x80278FB8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    static_3_802A92B8(rdram, ctx);
        goto after_9;
    // 0x80278FB8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_9:
    // 0x80278FBC: beq         $v0, $zero, L_8027911C
    if (ctx->r2 == 0) {
        // 0x80278FC0: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_8027911C;
    }
    // 0x80278FC0: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80278FC4: jal         0x803187FC
    // 0x80278FC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_803187FC(rdram, ctx);
        goto after_10;
    // 0x80278FC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x80278FCC: bne         $v0, $fp, L_80278FE4
    if (ctx->r2 != ctx->r30) {
        // 0x80278FD0: nop
    
            goto L_80278FE4;
    }
    // 0x80278FD0: nop

    // 0x80278FD4: beq         $s0, $fp, L_80278FE4
    if (ctx->r16 == ctx->r30) {
        // 0x80278FD8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80278FE4;
    }
    // 0x80278FD8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80278FDC: bnel        $s0, $at, L_80279024
    if (ctx->r16 != ctx->r1) {
        // 0x80278FE0: lwc1        $f6, 0x8C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
            goto L_80279024;
    }
    goto skip_10;
    // 0x80278FE0: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    skip_10:
L_80278FE4:
    // 0x80278FE4: jal         0x803187FC
    // 0x80278FE8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    static_3_803187FC(rdram, ctx);
        goto after_11;
    // 0x80278FE8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_11:
    // 0x80278FEC: bne         $v0, $s7, L_80279004
    if (ctx->r2 != ctx->r23) {
        // 0x80278FF0: nop
    
            goto L_80279004;
    }
    // 0x80278FF0: nop

    // 0x80278FF4: beq         $s0, $s7, L_80279004
    if (ctx->r16 == ctx->r23) {
        // 0x80278FF8: nop
    
            goto L_80279004;
    }
    // 0x80278FF8: nop

    // 0x80278FFC: bnel        $s0, $s6, L_80279024
    if (ctx->r16 != ctx->r22) {
        // 0x80279000: lwc1        $f6, 0x8C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
            goto L_80279024;
    }
    goto skip_11;
    // 0x80279000: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    skip_11:
L_80279004:
    // 0x80279004: jal         0x803187FC
    // 0x80279008: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    static_3_803187FC(rdram, ctx);
        goto after_12;
    // 0x80279008: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_12:
    // 0x8027900C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80279010: bne         $v0, $at, L_8027911C
    if (ctx->r2 != ctx->r1) {
        // 0x80279014: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8027911C;
    }
    // 0x80279014: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80279018: beql        $s0, $at, L_80279120
    if (ctx->r16 == ctx->r1) {
        // 0x8027901C: addiu       $a0, $s3, 0x4E3C
        ctx->r4 = ADD32(ctx->r19, 0X4E3C);
            goto L_80279120;
    }
    goto skip_12;
    // 0x8027901C: addiu       $a0, $s3, 0x4E3C
    ctx->r4 = ADD32(ctx->r19, 0X4E3C);
    skip_12:
    // 0x80279020: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
L_80279024:
    // 0x80279024: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80279028: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x8027902C: lbu         $t3, 0x9B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X9B);
    // 0x80279030: c.eq.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl == ctx->f4.fl;
    // 0x80279034: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80279038: bc1t        L_80279074
    if (c1cs) {
        // 0x8027903C: nop
    
            goto L_80279074;
    }
    // 0x8027903C: nop

    // 0x80279040: lw          $v1, 0x1A0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X1A0);
    // 0x80279044: lw          $a3, 0x0($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X0);
    // 0x80279048: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8027904C: lh          $t1, 0xE0($v1)
    ctx->r9 = MEM_H(ctx->r3, 0XE0);
    // 0x80279050: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80279054: lw          $t9, 0xE4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XE4);
    // 0x80279058: srl         $t2, $a3, 24
    ctx->r10 = S32(U32(ctx->r7) >> 24);
    // 0x8027905C: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x80279060: jalr        $t9
    // 0x80279064: addu        $a0, $t1, $s5
    ctx->r4 = ADD32(ctx->r9, ctx->r21);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x80279064: addu        $a0, $t1, $s5
    ctx->r4 = ADD32(ctx->r9, ctx->r21);
    after_13:
    // 0x80279068: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8027906C: b           L_80279074
    // 0x80279070: sw          $s5, 0x70F4($s3)
    MEM_W(0X70F4, ctx->r19) = ctx->r21;
        goto L_80279074;
    // 0x80279070: sw          $s5, 0x70F4($s3)
    MEM_W(0X70F4, ctx->r19) = ctx->r21;
L_80279074:
    // 0x80279074: jal         0x803187FC
    // 0x80279078: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    static_3_803187FC(rdram, ctx);
        goto after_14;
    // 0x80279078: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_14:
    // 0x8027907C: bnel        $v0, $s7, L_802790B4
    if (ctx->r2 != ctx->r23) {
        // 0x80279080: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_802790B4;
    }
    goto skip_13;
    // 0x80279080: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_13:
    // 0x80279084: beq         $s0, $fp, L_80279090
    if (ctx->r16 == ctx->r30) {
        // 0x80279088: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80279090;
    }
    // 0x80279088: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8027908C: bne         $s0, $at, L_802790B0
    if (ctx->r16 != ctx->r1) {
        // 0x80279090: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_802790B0;
    }
L_80279090:
    // 0x80279090: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80279094: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80279098: jal         0x802B09D4
    // 0x8027909C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_802B09D4(rdram, ctx);
        goto after_15;
    // 0x8027909C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_15:
    // 0x802790A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802790A4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x802790A8: jal         0x802B0904
    // 0x802790AC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    static_3_802B0904(rdram, ctx);
        goto after_16;
    // 0x802790AC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_16:
L_802790B0:
    // 0x802790B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_802790B4:
    // 0x802790B4: bne         $s0, $at, L_802790DC
    if (ctx->r16 != ctx->r1) {
        // 0x802790B8: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_802790DC;
    }
    // 0x802790B8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802790BC: jal         0x802AB880
    // 0x802790C0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    static_3_802AB880(rdram, ctx);
        goto after_17;
    // 0x802790C0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_17:
    // 0x802790C4: beq         $s1, $zero, L_802790DC
    if (ctx->r17 == 0) {
        // 0x802790C8: sll         $t4, $s1, 2
        ctx->r12 = S32(ctx->r17 << 2);
            goto L_802790DC;
    }
    // 0x802790C8: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x802790CC: addu        $v0, $s3, $t4
    ctx->r2 = ADD32(ctx->r19, ctx->r12);
    // 0x802790D0: lw          $t5, 0x8B4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8B4);
    // 0x802790D4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x802790D8: sw          $t6, 0x8B4($v0)
    MEM_W(0X8B4, ctx->r2) = ctx->r14;
L_802790DC:
    // 0x802790DC: jal         0x803183D0
    // 0x802790E0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_18;
    // 0x802790E0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_18:
    // 0x802790E4: jal         0x802D260C
    // 0x802790E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_802D260C(rdram, ctx);
        goto after_19;
    // 0x802790E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_19:
    // 0x802790EC: bne         $v0, $zero, L_8027910C
    if (ctx->r2 != 0) {
        // 0x802790F0: nop
    
            goto L_8027910C;
    }
    // 0x802790F0: nop

    // 0x802790F4: jal         0x803183D0
    // 0x802790F8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    static_3_803183D0(rdram, ctx);
        goto after_20;
    // 0x802790F8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_20:
    // 0x802790FC: jal         0x802D2614
    // 0x80279100: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    static_3_802D2614(rdram, ctx);
        goto after_21;
    // 0x80279100: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_21:
    // 0x80279104: beq         $v0, $zero, L_80279114
    if (ctx->r2 == 0) {
        // 0x80279108: nop
    
            goto L_80279114;
    }
    // 0x80279108: nop

L_8027910C:
    // 0x8027910C: b           L_8027925C
    // 0x80279110: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
        goto L_8027925C;
    // 0x80279110: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_80279114:
    // 0x80279114: b           L_8027925C
    // 0x80279118: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
        goto L_8027925C;
    // 0x80279118: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_8027911C:
    // 0x8027911C: addiu       $a0, $s3, 0x4E3C
    ctx->r4 = ADD32(ctx->r19, 0X4E3C);
L_80279120:
    // 0x80279120: jal         0x80317E10
    // 0x80279124: sw          $a0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r4;
    static_3_80317E10(rdram, ctx);
        goto after_22;
    // 0x80279124: sw          $a0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r4;
    after_22:
    // 0x80279128: beql        $v0, $zero, L_802791C4
    if (ctx->r2 == 0) {
        // 0x8027912C: lw          $a2, 0x0($s4)
        ctx->r6 = MEM_W(ctx->r20, 0X0);
            goto L_802791C4;
    }
    goto skip_14;
    // 0x8027912C: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    skip_14:
    // 0x80279130: lw          $v1, 0x4FDC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4FDC);
    // 0x80279134: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x80279138: lh          $t7, 0x88($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X88);
    // 0x8027913C: lw          $t9, 0x8C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8C);
    // 0x80279140: addu        $a0, $t7, $s3
    ctx->r4 = ADD32(ctx->r15, ctx->r19);
    // 0x80279144: jalr        $t9
    // 0x80279148: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x80279148: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    after_23:
    // 0x8027914C: beql        $v0, $zero, L_802791C4
    if (ctx->r2 == 0) {
        // 0x80279150: lw          $a2, 0x0($s4)
        ctx->r6 = MEM_W(ctx->r20, 0X0);
            goto L_802791C4;
    }
    goto skip_15;
    // 0x80279150: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    skip_15:
    // 0x80279154: beql        $s0, $s7, L_802791C4
    if (ctx->r16 == ctx->r23) {
        // 0x80279158: lw          $a2, 0x0($s4)
        ctx->r6 = MEM_W(ctx->r20, 0X0);
            goto L_802791C4;
    }
    goto skip_16;
    // 0x80279158: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    skip_16:
    // 0x8027915C: beql        $s0, $s6, L_802791C4
    if (ctx->r16 == ctx->r22) {
        // 0x80279160: lw          $a2, 0x0($s4)
        ctx->r6 = MEM_W(ctx->r20, 0X0);
            goto L_802791C4;
    }
    goto skip_17;
    // 0x80279160: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    skip_17:
    // 0x80279164: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80279168: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8027916C: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x80279170: lbu         $t1, 0x9B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X9B);
    // 0x80279174: c.eq.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl == ctx->f8.fl;
    // 0x80279178: nop

    // 0x8027917C: bc1t        L_802791B8
    if (c1cs) {
        // 0x80279180: nop
    
            goto L_802791B8;
    }
    // 0x80279180: nop

    // 0x80279184: lw          $v1, 0x4FDC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4FDC);
    // 0x80279188: lw          $a3, 0x0($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X0);
    // 0x8027918C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80279190: lh          $t8, 0xE0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XE0);
    // 0x80279194: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80279198: lw          $t9, 0xE4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XE4);
    // 0x8027919C: srl         $t0, $a3, 24
    ctx->r8 = S32(U32(ctx->r7) >> 24);
    // 0x802791A0: addu        $a0, $t8, $s3
    ctx->r4 = ADD32(ctx->r24, ctx->r19);
    // 0x802791A4: addiu       $a0, $a0, 0x4E3C
    ctx->r4 = ADD32(ctx->r4, 0X4E3C);
    // 0x802791A8: jalr        $t9
    // 0x802791AC: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x802791AC: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    after_24:
    // 0x802791B0: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x802791B4: sw          $t2, 0x70F4($s3)
    MEM_W(0X70F4, ctx->r19) = ctx->r10;
L_802791B8:
    // 0x802791B8: b           L_8027925C
    // 0x802791BC: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
        goto L_8027925C;
    // 0x802791BC: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x802791C0: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
L_802791C4:
    // 0x802791C4: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x802791C8: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x802791CC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x802791D0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x802791D4: and         $t3, $a2, $at
    ctx->r11 = ctx->r6 & ctx->r1;
    // 0x802791D8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802791DC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x802791E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802791E4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802791E8: addu        $a3, $t5, $t6
    ctx->r7 = ADD32(ctx->r13, ctx->r14);
L_802791EC:
    // 0x802791EC: lw          $v0, 0x676C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X676C);
    // 0x802791F0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802791F4: beq         $v0, $zero, L_80279218
    if (ctx->r2 == 0) {
        // 0x802791F8: nop
    
            goto L_80279218;
    }
    // 0x802791F8: nop

    // 0x802791FC: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80279200: beq         $t7, $zero, L_80279218
    if (ctx->r15 == 0) {
        // 0x80279204: nop
    
            goto L_80279218;
    }
    // 0x80279204: nop

    // 0x80279208: lw          $t8, 0x1E4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1E4);
    // 0x8027920C: bne         $a2, $t8, L_80279218
    if (ctx->r6 != ctx->r24) {
        // 0x80279210: nop
    
            goto L_80279218;
    }
    // 0x80279210: nop

    // 0x80279214: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
L_80279218:
    // 0x80279218: bne         $a0, $s1, L_802791EC
    if (ctx->r4 != ctx->r17) {
        // 0x8027921C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_802791EC;
    }
    // 0x8027921C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80279220: lw          $v0, 0x65FC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X65FC);
    // 0x80279224: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80279228: lw          $v1, 0x6C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X6C);
    // 0x8027922C: lh          $t0, 0x80($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X80);
    // 0x80279230: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x80279234: lw          $t9, 0x84($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X84);
    // 0x80279238: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    // 0x8027923C: jalr        $t9
    // 0x80279240: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x80279240: nop

    after_25:
    // 0x80279244: beq         $v0, $zero, L_80279250
    if (ctx->r2 == 0) {
        // 0x80279248: lw          $a3, 0x48($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X48);
            goto L_80279250;
    }
    // 0x80279248: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8027924C: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
L_80279250:
    // 0x80279250: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80279254: bnel        $s4, $a3, L_80278D78
    if (ctx->r20 != ctx->r7) {
        // 0x80279258: lw          $v0, 0x6FBC($s3)
        ctx->r2 = MEM_W(ctx->r19, 0X6FBC);
            goto L_80278D78;
    }
    goto skip_18;
    // 0x80279258: lw          $v0, 0x6FBC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X6FBC);
    skip_18:
L_8027925C:
    // 0x8027925C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80279260: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80279264: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80279268: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8027926C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80279270: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80279274: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80279278: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8027927C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80279280: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80279284: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80279288: jr          $ra
    // 0x8027928C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8027928C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void D_8023D1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D1D8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8023D1DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8023D1E0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8023D1E4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8023D1E8: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x8023D1EC: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x8023D1F0: dmultu      $t6, $t7
    DMULTU(U64(ctx->r14), U64(ctx->r15), &lo, &hi);
    // 0x8023D1F4: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D1F8: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8023D1FC: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8023D200: jr          $ra
    // 0x8023D204: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8023D204: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void D_80230B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80230B30: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x80230B34: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x80230B38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230B3C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80230B40: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80230B44: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80230B48: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80230B4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230B50: bne         $t6, $zero, L_80230B6C
    if (ctx->r14 != 0) {
        // 0x80230B54: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80230B6C;
    }
    // 0x80230B54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80230B58: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230B5C: jal         0x80231A24
    // 0x80230B60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_0;
    // 0x80230B60: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_0:
    // 0x80230B64: b           L_80230C14
    // 0x80230B68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230C14;
    // 0x80230B68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230B6C:
    // 0x80230B6C: andi        $t7, $s0, 0x7
    ctx->r15 = ctx->r16 & 0X7;
    // 0x80230B70: beq         $t7, $zero, L_80230B8C
    if (ctx->r15 == 0) {
        // 0x80230B74: andi        $t8, $s1, 0x7
        ctx->r24 = ctx->r17 & 0X7;
            goto L_80230B8C;
    }
    // 0x80230B74: andi        $t8, $s1, 0x7
    ctx->r24 = ctx->r17 & 0X7;
    // 0x80230B78: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230B7C: jal         0x80231A24
    // 0x80230B80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_1;
    // 0x80230B80: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_1:
    // 0x80230B84: b           L_80230C14
    // 0x80230B88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230C14;
    // 0x80230B88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230B8C:
    // 0x80230B8C: beq         $t8, $zero, L_80230BA8
    if (ctx->r24 == 0) {
        // 0x80230B90: addu        $t9, $s0, $s1
        ctx->r25 = ADD32(ctx->r16, ctx->r17);
            goto L_80230BA8;
    }
    // 0x80230B90: addu        $t9, $s0, $s1
    ctx->r25 = ADD32(ctx->r16, ctx->r17);
    // 0x80230B94: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230B98: jal         0x80231A24
    // 0x80230B9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_2;
    // 0x80230B9C: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_2:
    // 0x80230BA0: b           L_80230C14
    // 0x80230BA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230C14;
    // 0x80230BA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230BA8:
    // 0x80230BA8: slti        $at, $t9, 0x209
    ctx->r1 = SIGNED(ctx->r25) < 0X209 ? 1 : 0;
    // 0x80230BAC: bne         $at, $zero, L_80230BD4
    if (ctx->r1 != 0) {
        // 0x80230BB0: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80230BD4;
    }
    // 0x80230BB0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230BB4: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230BB8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230BBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80230BC0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80230BC4: jal         0x80231A24
    // 0x80230BC8: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    static_3_80231A24(rdram, ctx);
        goto after_3;
    // 0x80230BC8: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    after_3:
    // 0x80230BCC: b           L_80230C14
    // 0x80230BD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230C14;
    // 0x80230BD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230BD4:
    // 0x80230BD4: bgez        $s0, L_80230BE4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80230BD8: sra         $t0, $s0, 3
        ctx->r8 = S32(SIGNED(ctx->r16) >> 3);
            goto L_80230BE4;
    }
    // 0x80230BD8: sra         $t0, $s0, 3
    ctx->r8 = S32(SIGNED(ctx->r16) >> 3);
    // 0x80230BDC: addiu       $at, $s0, 0x7
    ctx->r1 = ADD32(ctx->r16, 0X7);
    // 0x80230BE0: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_80230BE4:
    // 0x80230BE4: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x80230BE8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80230BEC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80230BF0: jal         0x8023E0B0
    // 0x80230BF4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    static_3_8023E0B0(rdram, ctx);
        goto after_4;
    // 0x80230BF4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_4:
    // 0x80230BF8: beq         $v0, $zero, L_80230C10
    if (ctx->r2 == 0) {
        // 0x80230BFC: lui         $a0, 0x0
        ctx->r4 = S32(0X0 << 16);
            goto L_80230C10;
    }
    // 0x80230BFC: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x80230C00: jal         0x80231A24
    // 0x80230C04: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    static_3_80231A24(rdram, ctx);
        goto after_5;
    // 0x80230C04: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_5:
    // 0x80230C08: b           L_80230C14
    // 0x80230C0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80230C14;
    // 0x80230C0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80230C10:
    // 0x80230C10: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80230C14:
    // 0x80230C14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230C18: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80230C1C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80230C20: jr          $ra
    // 0x80230C24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80230C24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void D_8029E92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029E9AC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8029E9B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029E9B4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8029E9B8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8029E9BC: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8029E9C0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8029E9C4: jal         0x8020664C
    // 0x8029E9C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    static_3_8020664C(rdram, ctx);
        goto after_0;
    // 0x8029E9C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8029E9CC: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8029E9D0: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8029E9D4: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x8029E9D8: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x8029E9DC: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8029E9E0: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x8029E9E4: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8029E9E8: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8029E9EC: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x8029E9F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029E9F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8029E9F8: jr          $ra
    // 0x8029E9FC: nop

    return;
    // 0x8029E9FC: nop

;}
RECOMP_FUNC void D_802A792C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A79AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A79B0: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x802A79B4: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x802A79B8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A79BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802A79C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A79C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A79C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802A79CC: addiu       $s2, $a0, 0x70
    ctx->r18 = ADD32(ctx->r4, 0X70);
    // 0x802A79D0: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x802A79D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802A79D8: jal         0x8029C4EC
    // 0x802A79DC: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    func_8029C46C(rdram, ctx);
        goto after_0;
    // 0x802A79DC: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    after_0:
    // 0x802A79E0: lw          $v0, 0x210($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X210);
    // 0x802A79E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A79E8: lh          $t7, 0xB0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XB0);
    // 0x802A79EC: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802A79F0: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    // 0x802A79F4: jalr        $t9
    // 0x802A79F8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802A79F8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_1:
    // 0x802A79FC: lw          $v0, 0x210($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X210);
    // 0x802A7A00: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802A7A04: lh          $t8, 0xB8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XB8);
    // 0x802A7A08: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802A7A0C: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    // 0x802A7A10: jalr        $t9
    // 0x802A7A14: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x802A7A14: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_2:
    // 0x802A7A18: lui         $a1, 0x4509
    ctx->r5 = S32(0X4509 << 16);
    // 0x802A7A1C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x802A7A20: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802A7A24: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x802A7A28: jal         0x80318E04
    // 0x802A7A2C: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_3;
    // 0x802A7A2C: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_3:
    // 0x802A7A30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802A7A34: jal         0x80318C9C
    // 0x802A7A38: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_4;
    // 0x802A7A38: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x802A7A3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802A7A40: jal         0x80319008
    // 0x802A7A44: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_5;
    // 0x802A7A44: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_5:
    // 0x802A7A48: jal         0x8029C2C8
    // 0x802A7A4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    static_3_8029C2C8(rdram, ctx);
        goto after_6;
    // 0x802A7A4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x802A7A50: addiu       $s0, $s1, 0x159C
    ctx->r16 = ADD32(ctx->r17, 0X159C);
    // 0x802A7A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A7A58: jal         0x8029C4EC
    // 0x802A7A5C: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    func_8029C46C(rdram, ctx);
        goto after_7;
    // 0x802A7A5C: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    after_7:
    // 0x802A7A60: lw          $v0, 0x173C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X173C);
    // 0x802A7A64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A7A68: lh          $t0, 0xB0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XB0);
    // 0x802A7A6C: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802A7A70: addu        $a0, $t0, $s1
    ctx->r4 = ADD32(ctx->r8, ctx->r17);
    // 0x802A7A74: jalr        $t9
    // 0x802A7A78: addiu       $a0, $a0, 0x159C
    ctx->r4 = ADD32(ctx->r4, 0X159C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x802A7A78: addiu       $a0, $a0, 0x159C
    ctx->r4 = ADD32(ctx->r4, 0X159C);
    after_8:
    // 0x802A7A7C: lw          $v0, 0x173C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X173C);
    // 0x802A7A80: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x802A7A84: lh          $t1, 0xB8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XB8);
    // 0x802A7A88: lw          $t9, 0xBC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XBC);
    // 0x802A7A8C: addu        $a0, $t1, $s1
    ctx->r4 = ADD32(ctx->r9, ctx->r17);
    // 0x802A7A90: jalr        $t9
    // 0x802A7A94: addiu       $a0, $a0, 0x159C
    ctx->r4 = ADD32(ctx->r4, 0X159C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802A7A94: addiu       $a0, $a0, 0x159C
    ctx->r4 = ADD32(ctx->r4, 0X159C);
    after_9:
    // 0x802A7A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A7A9C: jal         0x80318C88
    // 0x802A7AA0: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    static_3_80318C88(rdram, ctx);
        goto after_10;
    // 0x802A7AA0: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    after_10:
    // 0x802A7AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A7AA8: lui         $a1, 0x452F
    ctx->r5 = S32(0X452F << 16);
    // 0x802A7AAC: lui         $a2, 0xC1C8
    ctx->r6 = S32(0XC1C8 << 16);
    // 0x802A7AB0: jal         0x80318E04
    // 0x802A7AB4: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    static_3_80318E04(rdram, ctx);
        goto after_11;
    // 0x802A7AB4: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    after_11:
    // 0x802A7AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A7ABC: jal         0x80318C9C
    // 0x802A7AC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    static_3_80318C9C(rdram, ctx);
        goto after_12;
    // 0x802A7AC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x802A7AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A7AC8: jal         0x80319008
    // 0x802A7ACC: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    static_3_80319008(rdram, ctx);
        goto after_13;
    // 0x802A7ACC: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_13:
    // 0x802A7AD0: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x802A7AD4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802A7AD8: jal         0x802AA498
    // 0x802A7ADC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    static_3_802AA498(rdram, ctx);
        goto after_14;
    // 0x802A7ADC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_14:
    // 0x802A7AE0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802A7AE4: jal         0x8029C91C
    // 0x802A7AE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    static_3_8029C91C(rdram, ctx);
        goto after_15;
    // 0x802A7AE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_15:
    // 0x802A7AEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802A7AF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A7AF4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802A7AF8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802A7AFC: jr          $ra
    // 0x802A7B00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802A7B00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void D_8022AD58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AD58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AD5C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8022AD60: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8022AD64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AD68: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8022AD6C: nop

    // 0x8022AD70: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8022AD74: jal         0x8022AA40
    // 0x8022AD78: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    static_3_8022AA40(rdram, ctx);
        goto after_0;
    // 0x8022AD78: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x8022AD7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AD80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022AD84: jr          $ra
    // 0x8022AD88: nop

    return;
    // 0x8022AD88: nop

;}
